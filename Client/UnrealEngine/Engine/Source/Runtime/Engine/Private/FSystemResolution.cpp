// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// RequestResolutionChange @ 148b73eb0

void __cdecl FSystemResolution::RequestResolutionChange(int param_1,int param_2,Type param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  undefined1 local_58 [16];
  FString local_48;
  FString local_38;
  uint local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if (param_3 == Fullscreen) {
    pwVar4 = L"f";
  }
  else if (param_3 == WindowedFullscreen) {
    pwVar4 = L"wf";
  }
  else {
    if (param_3 != Windowed) goto LAB_148b73f20;
    pwVar4 = L"w";
  }
  ::FString::operator=(&local_48,pwVar4);
LAB_148b73f20:
  ::FString::PrintfImpl(&local_38,L"%dx%d%s");
  uVar2 = CVarSystemResolution._8_8_;
  local_20 = 0;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  local_18 = 0;
  local_24 = 1;
  local_10 = 0x1000000;
  local_14 = 0xf000000;
  local_28 = (**(code **)(*(longlong *)CVarSystemResolution._8_8_ + 0x18))
                       (CVarSystemResolution._8_8_);
  lVar1 = *(longlong *)uVar2;
  local_28 = local_28 & 0xff000000;
  uVar3 = (**(code **)(lVar1 + 0xa8))(uVar2,local_58,&local_28);
  (**(code **)(lVar1 + 0xb0))(uVar2,FVar5.Data,uVar3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

