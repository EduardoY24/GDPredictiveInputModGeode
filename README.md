# GDPredictiveInputModGeode

Will not be releasing ready-to-run build. Build instructions are below.

A Geode mod for Geometry Dash 2.2091 that saves you from clicking a hair too early.

**Built on experimental Geode v6 branch because current geode release doesn't support 2.2091**

Every time you click, the mod quickly plays out what would happen. If clicking right now would kill you but clicking a tick or two later wouldn't, it holds your click for those few ticks and lets it through at the right moment. If no small delay would save you, it doesn't touch anything and you just die like normal (skill issue).

This is basically just baby aim assist for GD. Haven't done any extensive testing. If you find something wonky with it, please create an **issue** and please attach a **clip** to your issue.

## Modes

Press **F6** in a level to cycle through them (you can rebind it in the mod settings):


Disabled, and then 1-16 ticks (2-16 increments every 2 ticks tho)

GD runs 240 ticks a second no matter your FPS, so 4 ticks is one frame at 60fps, 8 ticks is two and 16 is four.

Works as expected with spider, cube, ufo, basic click modes

Also checks for potentially bad releases in wave gameplay (can be disabled in settings)

## Installing

Figure out how to compile geode v6 branch, then figure out how to compile from this repo, and you're done.

## Heads up

Turn off Click Between Frames if you have it, messes with timing.

Stuff that moves around (move triggers and such) isn't predicted perfectly, so the odd weird decision can happen there.

Inputs near gamemode, speed, mirror or teleport portals are never delayed.

This is basically an input assist, so runs with it on don't count for leaderboards or list submissions (obviously)

## License

GPL-3.0, see [LICENSE](LICENSE). Do whatever you want with it, just keep it open source.

## Cambios de este fork (v1.1.0)

- Modos más altos: **20, 24 y 32 ticks** (~83, 100 y 133 ms) además de los originales.
- Nueva tecla **F5** para regresar al modo anterior (F6 sigue avanzando).
- La etiqueta de estado muestra también el retraso máximo en milisegundos.
- Compila con **Geode v6.0.0** (GD 2.2091) usando bindings fijados a un commit probado.
- `PlayerStateCopy.inc` regenerado con los nombres actuales de los bindings
  (`tools/gen-player-copy.mjs` actualizado).
