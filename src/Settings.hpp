#pragma once

#include <array>
#include <functional>
#include <string>
#include <string_view>

namespace pib {
    // Buffer modes, in the order the cycle key steps through them.
    inline constexpr std::array<std::string_view, 13> kModeNames = {
        "Disabled", "1 Tick", "2 Ticks", "4 Ticks", "6 Ticks",
        "8 Ticks", "10 Ticks", "12 Ticks", "14 Ticks", "16 Ticks",
        "20 Ticks", "24 Ticks", "32 Ticks"
    };
    inline constexpr std::array<int, 13> kModeTicks = { 0, 1, 2, 4, 6, 8, 10, 12, 14, 16, 20, 24, 32 };
    static_assert(kModeNames.size() == kModeTicks.size());

    // GD runs physics at 240 ticks per second.
    inline constexpr int kTicksPerSecond = 240;

    struct Settings {
        int maxDelay = 2;
        bool bufferReleases = true;
        bool showStatus = true;
        bool logSaves = true;
        int jumpHorizon = 120;
        int holdHorizon = 12;
        bool selfCheck = false;
        bool ignoreTwoPlayer = false;
    };

    // Current values, refreshed whenever a setting changes.
    Settings const& settings();

    int modeIndexForName(std::string_view name);
    std::string_view currentModeName();

    // Steps to the next (+1) or previous (-1) mode, wrapping around, and
    // persists it as the "mode" setting.
    void cycleMode(int direction = 1);

    // Loads the settings and keeps them current; `onChanged` runs after every
    // reload.
    void initSettings(std::function<void()> onChanged);
}
