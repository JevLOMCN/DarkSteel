#pragma once

// Plain C++ entry point so native code (GameDataStore.cpp, ...) can write to the DarkSteel Studio log
// without pulling in managed headers. Safe to call from any thread, before or after the log is set up.
void StudioLogNative(const wchar_t* line);