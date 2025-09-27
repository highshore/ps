#!/usr/bin/env bash
# Prefer python3, fall back to python, else print a helpful message.
if command -v python3 >/dev/null 2>&1; then
	exec python3 "$@"
elif command -v python >/dev/null 2>&1; then
	exec python "$@"
else
	echo "No python binary found. Install Python or adjust PATH to include python3."
	exit 127
fi
