// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// GetAssetPath @ 14947aac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FVolumeCacheData::GetAssetPath
          (FVolumeCacheData *this,FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined1 auStackY_118 [32];
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_e8;
  FString *local_d8;
  FStringFormatArg *pFStack_d0;
  FString local_c8;
  FString local_b8;
  FString *local_a8;
  FStringFormatArg *pFStack_a0;
  FStringFormatArg local_98;
  undefined1 local_78 [32];
  ForElementType<unsigned_int> local_58;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  ::FString::PrintfImpl(&local_b8,L"%03d");
  FStringFormatArg::FStringFormatArg(&local_98,&local_b8);
  ::FString::FString(&local_c8,L"FrameIndex");
  local_4c = 0x80;
  local_d8 = &local_c8;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  pFStack_d0 = &local_98;
  local_78._8_8_ = 0;
  local_58 = (ForElementType<unsigned_int>)0x0;
  local_50 = 0;
  local_48 = -1;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_78,1);
  if (local_30 < 1) {
    local_30 = 1;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)local_78);
  }
  local_a8 = local_d8;
  pFStack_a0 = pFStack_d0;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)local_78,&local_e8,(bool *)&local_a8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl
            (__return_storage_ptr__,pwVar3,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_78);
  ::FString::ReplaceInline(__return_storage_ptr__,L"//",L"/",IgnoreCase);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = -1;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

