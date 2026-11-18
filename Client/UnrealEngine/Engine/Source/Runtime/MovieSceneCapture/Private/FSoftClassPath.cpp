// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 1

// TryLoadClass<UMovieSceneCaptureProtocolBase> @ 146bd70c0

UClass * __thiscall
FSoftClassPath::TryLoadClass<UMovieSceneCaptureProtocolBase>(FSoftClassPath *this)

{
  FString *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  int iVar4;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  if (*(longlong *)this == 0) {
    return (UClass *)0x0;
  }
  local_28.DataPtr = (wchar_t *)0x0;
  iVar4 = 0;
  local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  pFVar1 = FSoftObjectPath::ToString((FSoftObjectPath *)this,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    local_38.DataPtr = L"";
  }
  else {
    local_38.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_38.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_146bd710f;
  }
  sVar2 = wcslen(local_38.DataPtr);
  iVar4 = (int)sVar2;
LAB_146bd710f:
  local_38.Size = iVar4;
  pUVar3 = UMovieSceneCaptureProtocolBase::StaticClass();
  pUVar3 = StaticLoadClass(pUVar3,(UObject *)0x0,&local_38,&local_28,0,(UPackageMap *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pUVar3;
}

