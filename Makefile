GCCFLAGS = -o bin/euler
GHCFLAGS = -no-keep-hi-files -no-keep-o-files -o bin/euler

.PHONY: run

%.cpp: src/%.cpp
	@[ -d bin ] || mkdir bin
	@g++ $< $(GCCFLAGS)
	@make run -s

%.hs: src/%.hs
	@[ -d bin ] || mkdir bin
	@ghc $< $(GHCFLAGS)
	@make run -s

run:
	@./bin/euler
