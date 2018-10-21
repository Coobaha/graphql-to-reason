
install:
	esy install
	cd test && yarn

build:
	esy build

ci:
	esy build

test:
	esy build
	cd test && yarn build

clean:
	esy dune clean
	rm -rf _build _esy test/lib

watch:
	nodemon -e re -q -w ./lib/ -w graphql_to_reason.re --exec 'esy build'

.PHONY: install clean build watch test ci
