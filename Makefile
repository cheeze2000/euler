GHCFLAGS = -no-keep-hi-files -no-keep-o-files -o bin/euler

.PHONY: run

%.hs: src/%.hs
	@[ -d bin ] || mkdir bin
	@ghc $< $(GHCFLAGS)
	@make run -s

run:
	@./bin/euler
