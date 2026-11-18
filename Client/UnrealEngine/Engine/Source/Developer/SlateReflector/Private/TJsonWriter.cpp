// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// WriteValueOnly @ 142f19470

EJsonToken __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,double param_1)

{
  FArchive *pFVar1;
  size_t sVar2;
  int iVar3;
  ForAnyElementType FVar4;
  code *pcVar5;
  FString local_18;
  
  pFVar1 = this->Stream;
  ::FString::PrintfImpl(&local_18,L"%.17g");
  FVar4.Data = local_18.Data.AllocatorInstance.Data;
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    FVar4.Data = (FScriptContainerElement *)0x0;
    iVar3 = 0;
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
  }
  else {
    if ((0 < iVar3) &&
       (*(short *)(local_18.Data.AllocatorInstance.Data + (longlong)iVar3 * 2 + -2) == 0)) {
      iVar3 = iVar3 + -1;
    }
    pcVar5 = *(code **)(*(longlong *)pFVar1 + 0x188);
    if (iVar3 == -1) {
      sVar2 = wcslen((wchar_t *)local_18.Data.AllocatorInstance.Data);
      iVar3 = (int)sVar2;
    }
  }
  (*pcVar5)(pFVar1,FVar4.Data,(longlong)iVar3 * 2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return Number;
}

