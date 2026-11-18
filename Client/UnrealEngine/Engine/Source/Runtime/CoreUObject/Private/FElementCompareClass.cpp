// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator() @ 1420eff70

bool __thiscall
TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<`StaticExec'::__l905::FSortUObjectByClassName>_>
::operator()(void *this,TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *param_1,
            TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *param_2)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar1;
  int iVar2;
  ForAnyElementType FVar3;
  ForAnyElementType FVar4;
  FName local_res8 [4];
  FString local_28;
  FString local_18;
  
  TVar1 = param_1->_s_1;
  local_res8[0] = *(FName *)(*(longlong *)((longlong)param_2->_s_1 + 0x10) + 0x18);
  ::FName::ToString(local_res8,&local_18);
  local_res8[0] = *(FName *)(*(longlong *)((longlong)TVar1 + 0x10) + 0x18);
  ::FName::ToString(local_res8,&local_28);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,(wchar_t *)FVar4.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)((byte)((uint)iVar2 >> 0x1f) ^ 1);
}

