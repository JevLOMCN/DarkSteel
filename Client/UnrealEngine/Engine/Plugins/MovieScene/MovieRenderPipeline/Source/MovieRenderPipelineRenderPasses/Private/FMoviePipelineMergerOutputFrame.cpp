// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// HasDataFromMultipleCameras @ 14dde6d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMoviePipelineMergerOutputFrame::HasDataFromMultipleCameras(FMoviePipelineMergerOutputFrame *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [4];
  int local_94;
  FScriptContainerElement *local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  pFVar7 = (this->ExpectedRenderPasses).AllocatorInstance.Data;
  iVar3 = (this->ExpectedRenderPasses).ArrayNum;
  pFVar8 = pFVar7 + (longlong)iVar3 * 0x20;
  pFVar6 = pFVar7 + 0x10;
  while( true ) {
    if ((this->ExpectedRenderPasses).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FMoviePipelinePassIdentifier_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_98);
    }
    if (pFVar7 == pFVar8) break;
    if (*(int *)(pFVar6 + 8) == 0) {
      pwVar5 = L"";
      iVar2 = 0;
    }
    else {
      pwVar5 = *(wchar_t **)&pFVar6->field_0x0;
      iVar2 = *(int *)(pFVar6 + 8) + -1;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar5);
    iVar2 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)local_88,uVar1,(FString *)pFVar6);
    if ((iVar2 == -1) ||
       (pFVar4 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar2 * 0x20),
       pFVar4 == (FScriptContainerElement *)0x0)) {
      local_90 = pFVar6;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      EmplaceByHash<TKeyInitializer<FString_const_&>_>
                ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                  *)local_88,(uint)&local_94,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar1,
                 (bool *)&local_90);
      pFVar4 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)local_94 * 0x20);
    }
    *(int *)(pFVar4 + 0x10) = *(int *)(pFVar4 + 0x10) + 1;
    pFVar7 = pFVar7 + 0x20;
    pFVar6 = pFVar6 + 0x20;
  }
  iVar3 = local_88._8_4_ - local_54;
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return 1 < iVar3;
}

