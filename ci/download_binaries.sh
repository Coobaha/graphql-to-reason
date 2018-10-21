set -e

if [ -z "$TRAVIS_TAG" ]; then
    echo "TRAVIS_TAG variable empty, will not download binaries"
    exit 0
fi

BASE_URL=https://github.com/Coobaha/graphql-to-reason/releases/download/$TRAVIS_TAG/graphql-to-reason-

mkdir -p bin

for platform in linux-x64 darwin-x64; do
    (cd bin && curl -fOL $BASE_URL$platform.exe)
done
