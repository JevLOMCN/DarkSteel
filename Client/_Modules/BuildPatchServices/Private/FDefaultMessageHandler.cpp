// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// HandleRequest @ 1432da700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
BuildPatchServices::FDefaultMessageHandler::HandleRequest
          (FDefaultMessageHandler *this,FChunkUriRequest *param_1,
          TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)> *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  FString *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStackY_158 [32];
  undefined1 local_110 [32];
  void *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ForElementType<FSetElementId> local_d0;
  int local_c8;
  FString local_c0;
  undefined1 local_a8;
  FString local_a0;
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  uVar3 = _UNK_150631d98;
  uVar7 = ___xmm_00000000ffffffff0000008000000000;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_50 = (ForElementType<FSetElementId>)0x0;
  local_48 = 0;
  local_a8 = 0;
  pFVar6 = ::operator/(&local_c0,&param_1->CloudDirectory,&param_1->RelativePath);
  if (&local_a0 != pFVar6) {
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    local_a0.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_a0.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  local_e8 = uVar7;
  uStack_e0 = uVar3;
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    local_e8 = ___xmm_00000000ffffffff0000008000000000;
    uStack_e0 = _UNK_150631d98;
  }
  FVar5.Data = local_a0.Data.AllocatorInstance.Data;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110._0_8_ = (FScriptContainerElement *)0x0;
  local_110._8_8_ = 0;
  local_f0 = (void *)0x0;
  local_d0 = (ForElementType<FSetElementId>)0x0;
  local_c8 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_110,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_90);
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar8 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar8 = *(longlong **)&param_2->field_0x28;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar1)(uVar7);
  local_c8 = 0;
  if (local_d0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_110,0,local_110._8_4_);
  iVar2 = SUB84(local_110._8_8_,4);
  local_110._8_8_ = local_110._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_110,0,(int *)(local_110 + 0xc));
  }
  uVar4 = local_e8._4_4_;
  uStack_e0 = 0xffffffff;
  local_e8 = (ulonglong)local_e8._4_4_ << 0x20;
  if (0x80 < uVar4) {
    local_e8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_110 + 0x10),0);
  }
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  if ((FScriptContainerElement *)local_110._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_110._0_8_);
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  local_48 = 0;
  if (local_50 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90,0,local_90._8_4_);
  iVar2 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar4 = local_68._4_4_;
  uStack_60 = 0xffffffff;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (0x80 < uVar4) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar8 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return true;
}

