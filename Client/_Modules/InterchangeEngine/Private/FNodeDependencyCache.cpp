// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 5

// AccumulateDependencies @ 14e4e1770

void __thiscall
UE::InterchangeTaskParsing::Private::FNodeDependencyCache::AccumulateDependencies
          (FNodeDependencyCache *this,UInterchangeBaseNodeContainer *param_1,FString *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  UInterchangeFactoryBaseNode *this_00;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  char local_48 [8];
  undefined1 local_40 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  this_00 = UInterchangeBaseNodeContainer::GetFactoryNode(param_1,param_2);
  if (this_00 != (UInterchangeFactoryBaseNode *)0x0) {
    local_48[0] = '\0';
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (param_4,(FString *)local_40,(bool *)param_2);
    if ((local_48[0] == '\0') ||
       (local_40 = (undefined1  [8])param_2,
       bVar4 = `UE::InterchangeTaskParsing::Private::FNodeDependencyCache::AccumulateDependencies'::
               __l6::<lambda_1>::operator()(local_40), bVar4)) {
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      UInterchangeFactoryBaseNode::GetFactoryDependencies(this_00,&local_38);
      uVar7 = *(int *)&(param_3->Elements).field_0x8 - *(int *)&(param_3->Elements).field_0x34;
      uVar9 = local_38.ArrayNum + uVar7;
      if (uVar7 < uVar9) {
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)param_3,uVar9);
        if (uVar9 < 4) {
          iVar5 = 1;
        }
        else {
          uVar1 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar3 & 0x1f);
        }
        if ((param_3->HashSize == 0) || (param_3->HashSize < iVar5)) {
          param_3->HashSize = iVar5;
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(param_3);
        }
      }
      iVar5 = local_38.ArrayNum;
      pFVar11 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
      FVar10.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if (local_38.ArrayNum != iVar5) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_48);
        }
        if (FVar10.Data == pFVar11) break;
        local_48[0] = '\0';
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (param_3,(FString *)local_40,(bool *)FVar10.Data);
        if (local_48[0] == '\0') {
          pTVar6 = GetAccumulatedDependencies(this,param_1,(FString *)FVar10.Data,param_4);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
          Append<FDefaultSetAllocator>(param_3,pTVar6);
        }
        FVar10.Data = FVar10.Data + 0x10;
      }
      if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
        iVar2 = (param_2->Data).ArrayNum;
        iVar5 = iVar2 + -1;
        if (iVar2 == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                  (param_4,uVar7,param_2);
      }
      DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CacheAccumulatedDependencies @ 14e4e4c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::InterchangeTaskParsing::Private::FNodeDependencyCache::CacheAccumulatedDependencies
          (FNodeDependencyCache *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UE::InterchangeTaskParsing::Private::FTaskData,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FScriptContainerElement *local_100;
  undefined1 *local_f8;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *)this);
  iVar1 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x60;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::InterchangeTaskParsing::Private::FTaskData_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (pFVar4 == pFVar5) break;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    pTVar3 = TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
             ::Find((TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                     *)this,(FString *)pFVar4);
    if (pTVar3 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
      local_e8._0_8_ = (FScriptContainerElement *)0x0;
      local_e8._8_8_ = 0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      AccumulateDependencies
                (this,param_1,(FString *)pFVar4,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98);
      local_f8 = local_e8;
      local_100 = pFVar4;
      TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&&>_>
                ((TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  *)this,(TPairInitializer<FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&&>
                          *)local_104,(bool *)(local_104 + 4));
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_e8,0,local_e8._8_4_);
      iVar2 = SUB84(local_e8._8_8_,4);
      local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
      }
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_c0 = 0;
      if (0x80 < local_bc) {
        local_bc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,0,local_98._8_4_);
    iVar2 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    pFVar4 = pFVar4 + 0x60;
  }
  return;
}

// GetAccumulatedDependencies @ 14e4f55e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
UE::InterchangeTaskParsing::Private::FNodeDependencyCache::GetAccumulatedDependencies
          (FNodeDependencyCache *this,UInterchangeBaseNodeContainer *param_1,FString *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3)

{
  longlong lVar1;
  int iVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar3;
  undefined1 auStackY_e8 [32];
  TPairInitializer<FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&&>
  local_b8;
  undefined1 *local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pTVar3 = TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                   *)this,param_2);
  if (pTVar3 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
    local_6c = 0x80;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    local_68 = 0xffffffff;
    AccumulateDependencies
              (this,param_1,param_2,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,param_3);
    local_a8 = local_98;
    local_b8.Value = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)param_2;
    TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&&>_>
              ((TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)this,&local_b8,(bool *)&local_b8.Value);
    lVar1 = *(longlong *)&this->CachedDependencies;
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,0,local_98._8_4_);
    iVar2 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_64 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    pTVar3 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             (lVar1 + (longlong)(int)local_b8.Key * 0x68 + 0x10);
  }
  return pTVar3;
}

// GetAccumulatedDependencies @ 14e4f5760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
UE::InterchangeTaskParsing::Private::FNodeDependencyCache::GetAccumulatedDependencies
          (FNodeDependencyCache *this,UInterchangeBaseNodeContainer *param_1,FString *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar4;
  bool bVar5;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_class_TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UE::InterchangeTaskParsing::Private::FNodeDependencyCache::GetAccumulatedDependencies(UInterchangeBaseNodeContainer_const*___ptr64,FString_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId71,
               "FNodeDependencyCache::GetAccumulatedDependencies",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskParsing.cpp"
               ,0x47);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_class_TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UE::InterchangeTaskParsing::Private::FNodeDependencyCache::GetAccumulatedDependencies(UInterchangeBaseNodeContainer_const*___ptr64,FString_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId71);
  }
  pTVar4 = TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                   *)this,param_2);
  if ((pTVar4 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<261293646941257800>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskParsing.cpp"
                         ,0x48,"CachedDependencies.Find(NodeID)"), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(*pcVar1)();
    return pTVar4;
  }
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  pTVar4 = GetAccumulatedDependencies
                     (this,param_1,param_2,
                      (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
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
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pTVar4;
}

// operator() @ 150597260

bool __thiscall
`UE::InterchangeTaskParsing::Private::FNodeDependencyCache::AccumulateDependencies'::__l6::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<261293646941257829>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<261293646941257829>,
                         &`public:___cdecl_`private:_void___cdecl_UE::InterchangeTaskParsing::Private::FNodeDependencyCache::AccumulateDependencies(UInterchangeBaseNodeContainer_const*___ptr64,FString_const&___ptr64,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>&___ptr64,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

