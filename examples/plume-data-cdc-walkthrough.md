# Plume Data Cdc Hub Walkthrough

I use this file as a small checklist before changing the C++ implementation.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 155 | ship |
| stress | lineage depth | 206 | ship |
| edge | partition skew | 205 | ship |
| recovery | quality gap | 176 | ship |
| stale | schema drift | 186 | ship |

Start with `stress` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The useful comparison is `lineage depth` against `schema drift`, not the raw score alone.
