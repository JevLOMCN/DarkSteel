// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// FNiagaraStatelessComputeManager @ 149426bb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraStatelessComputeManager * __thiscall
FNiagaraStatelessComputeManager::FNiagaraStatelessComputeManager
          (FNiagaraStatelessComputeManager *this,FNiagaraGpuComputeDispatchInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraStatelessComputeManager *pFVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FNiagaraStatelessComputeManager__6B_;
  *(undefined8 *)&this->UsedData = 0;
  *(undefined8 *)&(this->UsedData).field_0x8 = 0;
  *(undefined8 *)&(this->UsedData).field_0x20 = 0;
  *(undefined4 *)&(this->UsedData).field_0x28 = 0;
  *(undefined4 *)&(this->UsedData).field_0x2c = 0x80;
  *(undefined4 *)&(this->UsedData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UsedData).field_0x34 = 0;
  *(undefined8 *)&(this->UsedData).field_0x40 = 0;
  *(undefined4 *)&(this->UsedData).field_0x48 = 0;
  (this->FreeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeData).ArrayNum = 0;
  (this->FreeData).ArrayMax = 0;
  (this->CountsToRelease).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CountsToRelease).ArrayNum = 0;
  (this->CountsToRelease).ArrayMax = 0;
  this->bAllowDeferredGeneration = false;
  (this->GPUGenerationRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GPUGenerationRequests).ArrayNum = 0;
  (this->GPUGenerationRequests).ArrayMax = 0;
  (this->GetDataBufferGuard).State = (atomic<unsigned_char>)0x0;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,199,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraStatelessComputeManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>::
  AddRaw<FNiagaraStatelessComputeManager>
            ((TMulticastDelegateRegistration<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
              *)&param_1->OnPreInitViewsEvent,(FNiagaraStatelessComputeManager *)&stack0x00000008,
             (pmf_a5958025)this);
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0xcc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraStatelessComputeManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>::
  AddRaw<FNiagaraStatelessComputeManager>
            ((TMulticastDelegateRegistration<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
              *)&param_1->OnPreRenderEvent,(FNiagaraStatelessComputeManager *)&stack0x00000010,
             (pmf_a5958025)this);
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0xd1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraStatelessComputeManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>::
  AddRaw<FNiagaraStatelessComputeManager>
            ((TMulticastDelegateRegistration<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
              *)&param_1->OnPostRenderEvent,(FNiagaraStatelessComputeManager *)&stack0x00000018,
             (pmf_a5958025)this);
  return this;
}

// ~FNiagaraStatelessComputeManager @ 14942b940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessComputeManager::~FNiagaraStatelessComputeManager
          (FNiagaraStatelessComputeManager *this)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_BufferMemory> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar10 [8];
  FScriptContainerElement *pFVar11;
  FNameEntryId FVar12;
  undefined1 local_res8 [8];
  uint local_res10;
  uint uStackX_14;
  FName local_res18;
  FName local_res20;
  FStatMessage local_58;
  
  this->_padding_ = (longlong)&___7FNiagaraStatelessComputeManager__6B_;
  pFVar11 = (this->FreeData).AllocatorInstance.Data;
  iVar1 = (this->FreeData).ArrayNum;
  pFVar3 = pFVar11 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->FreeData).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar3) break;
    auVar10 = (uchar  [8])(longlong)*(int *)(*(longlong *)(*(longlong *)pFVar11 + 0xd8) + 0x120);
    if (auVar10 != (uchar  [8])0x0) {
      FVar9 = StatPtr_STAT_NiagaraStateless_BufferMemory;
      if (StatPtr_STAT_NiagaraStateless_BufferMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_BufferMemory>)0x0) {
        pFVar8 = ::FName::FName(&local_res20,"STAT_NiagaraStateless_BufferMemory");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_BufferMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_BufferMemory,
                           *pFVar8,L"Buffer Memory","STATGROUP_NiagaraStateless",
                           "STATCAT_NiagaraStateless",L"NiagaraStateless",true,false,ST_int64,false,
                           false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar9;
      FVar12 = FVar2.ComparisonIndex.Value;
      uVar7 = FVar2.Number;
      local_res10 = FVar12.Value;
      uStackX_14 = uVar7;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_58.NameAndInfo.Number = uVar7 & 0xffffbfff | 0xb000;
        local_res18 = FVar2;
        local_58.StatData.Pad = auVar10;
        local_58.NameAndInfo.Index.Value = FVar12.Value;
        FThreadStats::AddStatMessage(this_00,&local_58);
        FStatsTrace::Add(&local_res18,-(longlong)auVar10);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    pFVar11 = pFVar11 + 8;
  }
  if ((*(int *)&(this->UsedData).field_0x8 != *(int *)&(this->UsedData).field_0x34) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8637189858005090084>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessComputeManager.cpp"
                         ,0xdc,"UsedData.Num() == 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  DestructItems<FNiagaraStatelessComputeManager::FStatelessDataGenerationRequest,int>
            ((FStatelessDataGenerationRequest *)(this->GPUGenerationRequests).AllocatorInstance.Data
             ,(this->GPUGenerationRequests).ArrayNum);
  pFVar3 = (this->GPUGenerationRequests).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CountsToRelease).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,int>
            ((TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>
              *)(this->FreeData).AllocatorInstance.Data,(this->FreeData).ArrayNum);
  pFVar3 = (this->FreeData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->UsedData).field_0x48 = 0;
  pvVar4 = *(void **)&(this->UsedData).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UsedData);
  this->_padding_ = (longlong)&___7FNiagaraGpuComputeDataManager__6B_;
  return;
}

// operator() @ 14942da10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
`FNiagaraStatelessComputeManager::OnPostPostRender'::__l2::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  FName FVar2;
  undefined8 uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_BufferMemory> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
  *pTVar13;
  longlong *plVar14;
  uchar auVar15 [8];
  undefined1 local_res18 [8];
  longlong *local_res20;
  undefined4 uStack_dc;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
  *local_a8;
  undefined2 local_a0;
  FName local_98;
  FStatMessage local_90;
  FName local_80;
  TArrayView<unsigned_int_const_,int> local_78;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  lVar1 = *(longlong *)this;
  plVar14 = *(longlong **)(lVar1 + 0x60);
  iVar7 = *(int *)(lVar1 + 0x68);
  plVar12 = plVar14 + iVar7;
  local_res20 = plVar12;
  while( true ) {
    if (*(int *)(lVar1 + 0x68) != iVar7) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (plVar14 == plVar12) break;
    auVar15 = (uchar  [8])(longlong)*(int *)(*(longlong *)(*plVar14 + 0xd8) + 0x120);
    if (auVar15 != (uchar  [8])0x0) {
      FVar9 = StatPtr_STAT_NiagaraStateless_BufferMemory;
      if (StatPtr_STAT_NiagaraStateless_BufferMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_BufferMemory>)0x0) {
        pFVar8 = ::FName::FName(&local_80,"STAT_NiagaraStateless_BufferMemory");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_BufferMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_BufferMemory,
                           *pFVar8,L"Buffer Memory","STATGROUP_NiagaraStateless",
                           "STATCAT_NiagaraStateless",L"NiagaraStateless",true,false,ST_int64,false,
                           false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar9;
      plVar12 = local_res20;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_90.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_98 = FVar2;
        local_90.StatData.Pad = auVar15;
        local_90.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_90);
        FStatsTrace::Add(&local_98,-(longlong)auVar15);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
          plVar12 = local_res20;
        }
        else {
          plVar12 = local_res20;
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
            plVar12 = local_res20;
          }
        }
      }
    }
    plVar14 = plVar14 + 1;
  }
  lVar1 = *(longlong *)this;
  uVar11 = *(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x44);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,int>
            ((TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>
              *)((ForAnyElementType *)(lVar1 + 0x60))->Data,*(int *)(lVar1 + 0x68));
  *(undefined4 *)(lVar1 + 0x68) = 0;
  if (*(uint *)(lVar1 + 0x6c) != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,(ForAnyElementType *)(lVar1 + 0x60),0,(int *)(lVar1 + 0x6c));
  }
  pTVar13 = (TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
             *)(*(longlong *)this + 0x10);
  TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_68,pTVar13);
  local_a0 = 0;
  stack0xffffffffffffff38 = local_68._16_16_;
  auStack_d0._0_8_ = local_68._8_8_;
  local_b8 = local_48;
  pTStack_b0 = pTStack_40;
  uVar10 = local_68._24_8_ >> 0x20;
  uVar11 = local_68._28_4_;
  local_a8 = pTVar13;
  if ((int)uVar11 < *(int *)(local_68._16_8_ + 0x18)) {
    do {
      *(undefined4 *)
       (*(longlong *)
         (*(longlong *)(*(longlong *)local_68._0_8_ + 8 + (longlong)(int)uVar10 * 0x18) + 0xd8) +
       0x5c) = 0xffffffff;
      lVar1 = *(longlong *)this;
      uVar3 = *(undefined8 *)(*(longlong *)local_68._0_8_ + 8 + (longlong)(int)uVar11 * 0x18);
      *(undefined8 *)(*(longlong *)local_68._0_8_ + 8 + (longlong)(int)uVar11 * 0x18) = 0;
      iVar7 = *(int *)(lVar1 + 0x68);
      if (iVar7 == *(int *)(lVar1 + 0x6c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar1 + 0x60),(int *)(lVar1 + 0x6c));
      }
      *(int *)(lVar1 + 0x68) = iVar7 + 1;
      *(undefined8 *)(*(longlong *)(lVar1 + 0x60) + (longlong)iVar7 * 8) = uVar3;
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar10 = (ulonglong)uStack_bc;
      uVar11 = uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
      uVar11 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar7 = 1;
      }
      else {
        uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_a8->HashSize < iVar7)) || (iVar7 < local_a8->HashSize)) {
        local_a8->HashSize = iVar7;
        TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
  }
  lVar1 = *(longlong *)this;
  pTVar13 = (TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
             *)(lVar1 + 0x10);
  bVar6 = 1 < *(int *)(lVar1 + 0x58);
  if (!bVar6) {
    TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(pTVar13);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar13,0,*(int *)(lVar1 + 0x18));
  *(undefined4 *)(lVar1 + 0x18) = 0;
  if (*(int *)(lVar1 + 0x1c) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)pTVar13,0,(int *)(lVar1 + 0x1c));
  }
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x44) = 0;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  if ((*(int *)(lVar1 + 0x3c) < 0) || (0x80 < *(int *)(lVar1 + 0x3c))) {
    *(undefined4 *)(lVar1 + 0x3c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 0x20),0);
  }
  if (bVar6) {
    *(undefined4 *)(lVar1 + 0x58) = 1;
    TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
    ::Rehash(pTVar13);
  }
  if (0 < *(int *)(*(longlong *)this + 0x78)) {
    lVar1 = *(longlong *)(*(longlong *)this + 8);
    bVar6 = IsInParallelRenderingThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                           ,0x6a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar4 = *(uint **)(*(longlong *)this + 0x70);
    iVar7 = *(int *)(*(longlong *)this + 0x78);
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_78._12_4_ = uStack_dc;
    local_78.ArrayNum = iVar7;
    local_78.DataPtr = puVar4;
    FNiagaraGPUInstanceCountManager::FreeEntryArray
              ((FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48),&local_78);
    lVar1 = *(longlong *)this;
    *(undefined4 *)(lVar1 + 0x78) = 0;
    if (*(int *)(lVar1 + 0x7c) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(lVar1 + 0x70),0,(int *)(lVar1 + 0x7c));
    }
  }
  return;
}

// operator() @ 14942df00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
`FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  FStatelessDataGenerationRequest *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  undefined4 uStack_5c;
  TArrayView<FNiagaraStatelessComputeManager::FStatelessDataGenerationRequest_const_,int> local_58;
  FRHIBreadcrumbScope local_48;
  char local_38;
  char *local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  wchar_t *pwStack_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      uStack_28 = 0x1c7;
      local_30 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessComputeManager.cpp"
      ;
      local_20 = 0;
      pwStack_18 = L"FNiagaraStatelessComputeManager_OnPreRender";
      ::Desc._padding_._0_4_ = 0x51e35350;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x1c7;
      ::Desc._padding_._4_4_ = uStack_24;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x51e35630;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>::operator()'::__l7::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar7 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
  pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar8->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar8->Allocator = pFVar7;
  pFVar8->TraceCpuSpecId = 0;
  pFVar8->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar8->ID = uVar5;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar8[1]._padding_ = (longlong)&::Desc;
  if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar4) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar6 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar6;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
  }
  pFVar8->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_48,(FRHIComputeCommandList *)param_1,pFVar8);
  local_38 = '\x01';
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(FStatelessDataGenerationRequest **)this;
  iVar1 = *(int *)((longlong)this + 8);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_58._12_4_ = uStack_5c;
  local_58.ArrayNum = iVar1;
  local_58.DataPtr = pFVar2;
  NiagaraStatelessComputeManagerPrivate::GenerateGPUData
            ((FRHICommandList *)param_1,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)this + 0x10),&local_58);
  if (local_38 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_48);
  }
  return;
}

// GenerateDataBufferForDebugging @ 1494462b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraStatelessComputeManager::GenerateDataBufferForDebugging
          (FNiagaraStatelessComputeManager *this,FRHICommandListImmediate *param_1,
          FNiagaraDataBuffer *param_2,FEmitterInstance_RT *param_3)

{
  int iVar1;
  ENiagaraStatelessFeatureMask EVar2;
  FCommonShaderParameters *pFVar3;
  FNiagaraStatelessEmitterData *this_00;
  FNiagaraGpuComputeDispatchInterface *this_01;
  code *pcVar4;
  TRefCountPtr<FNiagaraDataBuffer> TVar5;
  bool bVar6;
  uint uVar7;
  TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> *pTVar8;
  FNiagaraGPUInstanceCountManager *this_02;
  FNiagaraDataBuffer *pFVar9;
  IRHIComputeContext *pIVar10;
  undefined8 *puVar11;
  uint local_res20 [2];
  float local_98;
  undefined1 local_94;
  FNiagaraStatelessRuntimeSpawnInfo *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<FNiagaraStatelessComputeManager::FStatelessDataGenerationRequest_const_,int> local_78;
  TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> local_68;
  TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> local_58;
  FStatelessDataGenerationRequest local_48;
  
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessComputeManager.cpp"
                         ,0x171,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (param_3->ShaderParameters).Ptr;
  local_98 = param_3->Age;
  local_88 = (FNiagaraStatelessRuntimeSpawnInfo *)(param_3->SpawnInfos).AllocatorInstance.Data;
  iVar1 = (param_3->SpawnInfos).ArrayNum;
  this_00 = (param_3->EmitterData).Object;
  local_94 = 1;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_68._12_4_ = uStack_7c;
  local_68.ArrayNum = iVar1;
  local_68.DataPtr = local_88;
  iStack_80 = iVar1;
  uVar7 = FNiagaraStatelessEmitterData::CalculateActiveParticles
                    (this_00,param_3->RandomSeed,&local_68,(TOptional<float>)&local_98,
                     &pFVar3->SpawnParameters);
  if (uVar7 == 0) {
    param_2->NumInstances = 0;
  }
  else {
    EVar2 = this_00->FeatureMask;
    if ((EVar2 & ExecuteCPU) == None) {
      if ((EVar2 & ExecuteGPU) == None) {
        return;
      }
    }
    else if (((EVar2 & ExecuteGPU) == None) ||
            (uVar7 <= (uint)NiagaraStatelessComputeManagerPrivate::GParticleCountCPUThreshold)) {
      NiagaraStatelessComputeManagerPrivate::GenerateCPUDataForCPUSim(param_3,param_2);
      return;
    }
    pTVar8 = FNiagaraStatelessEmitterData::GetShader(this_00,&local_58);
    if ((pTVar8->ShaderContent == (FSimulationShader *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EmitterData->GetShader().IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessComputeManager.cpp"
                           ,0x42,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (FNiagaraGpuComputeDispatchInterface *)this->_padding_;
    this_02 = FNiagaraGpuComputeDispatchInterface::GetGPUInstanceCounterManager(this_01);
    pFVar9 = ::operator_new(0x160);
    if (pFVar9 == (FNiagaraDataBuffer *)0x0) {
      pFVar9 = (FNiagaraDataBuffer *)0x0;
    }
    else {
      pFVar9 = FNiagaraDataBuffer::FNiagaraDataBuffer(pFVar9,param_2->Owner);
      if (pFVar9 != (FNiagaraDataBuffer *)0x0) {
        if (((int)pFVar9->_padding_ == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsBeingWritten()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x26,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
        UNLOCK();
      }
    }
    local_res20[0] = FNiagaraGPUInstanceCountManager::AcquireOrAllocateEntry(this_02,param_1);
    FNiagaraDataBuffer::AllocateGPU
              (pFVar9,(FRHICommandListBase *)param_1,uVar7,this_01->FeatureLevel,
               L"StatelessSimBuffer");
    pFVar9->GPUInstanceCountBufferOffset = local_res20[0];
    local_48.DestinationData.Reference = pFVar9;
    if (((int)pFVar9->_padding_ == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsBeingWritten()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x26,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
    UNLOCK();
    local_48.EmitterInstance = param_3;
    local_48.ActiveParticles = uVar7;
    FRHIComputeCommandList::BeginUAVOverlap((FRHIComputeCommandList *)param_1);
    local_78.ArrayNum = 1;
    local_78.DataPtr = &local_48;
    NiagaraStatelessComputeManagerPrivate::GenerateGPUData
              ((FRHICommandList *)param_1,this_01,&local_78);
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x10,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar11;
      *(undefined8 **)&param_1->field_0x30 = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &___7FRHICommandEndUAVOverlap__6B_;
    }
    else {
      pIVar10 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar10->_padding_ + 0x98))(pIVar10);
    }
    FNiagaraDataBuffer::TransferGPUToCPUImmediate(pFVar9,param_1,this_01,param_2);
    FNiagaraDataBuffer::ReleaseGPU(pFVar9);
    pFVar9->GPUInstanceCountBufferOffset = 0xffffffff;
    FNiagaraGPUInstanceCountManager::FreeEntry(this_02,local_res20);
    TVar5.Reference = local_48.DestinationData.Reference;
    if (local_48.DestinationData.Reference != (FNiagaraDataBuffer *)0x0) {
      if (((int)(local_48.DestinationData.Reference)->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LOCK();
      *(int *)&(TVar5.Reference)->_padding_ = (int)(TVar5.Reference)->_padding_ + -1;
      UNLOCK();
    }
    if (((int)pFVar9->_padding_ < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBeingRead()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x2c,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + -1;
    UNLOCK();
  }
  return;
}

// GetDataBuffer @ 149448f90

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraDataBuffer * __thiscall
FNiagaraStatelessComputeManager::GetDataBuffer
          (FNiagaraStatelessComputeManager *this,FRHICommandListBase *param_1,ulong64 param_2,
          FEmitterInstance_RT *param_3)

{
  TSharedPtr<FNiagaraStatelessEmitterData_const_,1> *pTVar1;
  TArray<TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar2;
  FMutex *this_01;
  longlong lVar3;
  atomic<unsigned_char> aVar4;
  FCommonShaderParameters *pFVar5;
  FNiagaraDataSet *pFVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GetDataBuffer> FVar19;
  TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> *pTVar20;
  FNiagaraStatelessEmitterData *pFVar21;
  FNiagaraDataSetCompiledData *pFVar22;
  FNiagaraDataBuffer *pFVar23;
  FNiagaraDataBuffer *pFVar24;
  FNiagaraDataBuffer *pFVar25;
  FNiagaraGPUInstanceCountManager *this_02;
  longlong lVar26;
  FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_BufferMemory> FVar27;
  FThreadStats *pFVar28;
  FThreadStatsPool *pFVar29;
  FNameEntryId FVar30;
  FNiagaraDataBuffer *pFVar31;
  FName FVar32;
  undefined1 *puVar33;
  TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
  *this_03;
  EComputeExecutionPath EVar34;
  uint uVar35;
  uint uVar36;
  uchar auVar37 [8];
  ulong64 local_res18;
  FEmitterInstance_RT *local_res20;
  FNiagaraDataBuffer *local_140;
  undefined1 local_138;
  undefined1 local_137 [3];
  uint local_134 [2];
  uint local_12c;
  EComputeExecutionPath local_128;
  uint uStack_124;
  FColor_u_0 local_120 [2];
  FName local_118;
  undefined1 local_110 [8];
  FName local_108;
  float local_100;
  undefined1 local_fc;
  TSharedPtr<FNiagaraStatelessEmitterData_const_,1> *local_f8;
  FName local_f0;
  TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
  *local_e0;
  FName local_d8;
  FName local_d0;
  FStatMessage local_c8;
  FStatMessage local_b8;
  ulong64 *local_a8;
  FNiagaraDataBuffer **local_a0;
  FName local_98;
  FName local_90;
  FName local_88 [2];
  TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> local_78;
  longlong local_68;
  FNiagaraDataSet *pFStack_60;
  TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> local_58;
  
  pFVar23 = (FNiagaraDataBuffer *)0x0;
  pFVar31 = (FNiagaraDataBuffer *)0x0;
  uVar17 = 0;
  FVar19 = StatPtr_STAT_NiagaraStateless_GetDataBuffer;
  local_res18 = param_2;
  local_res20 = param_3;
  if (StatPtr_STAT_NiagaraStateless_GetDataBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GetDataBuffer>)0x0) {
    pFVar18 = ::FName::FName(&local_98,"STAT_NiagaraStateless_GetDataBuffer");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GetDataBuffer>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_GetDataBuffer,
                        *pFVar18,L"GetDataBuffer","STATGROUP_NiagaraStateless",
                        "STATCAT_NiagaraStateless",L"NiagaraStateless",true,true,ST_int64,true,false
                        ,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar19;
  bVar10 = false;
  bVar11 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  bVar12 = false;
  bVar13 = false;
  FVar30 = FVar32.ComparisonIndex.Value;
  uVar14 = FVar32.Number;
  if ((FVar30.Value == 0) && (uVar14 == 0)) {
LAB_1494490f1:
    bVar11 = bVar13;
    bVar10 = bVar12;
    bVar12 = false;
    FVar32 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_120[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_120[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar30.Value;
        local_108.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessComputeManager.cpp"
                   ,0xe5);
        bVar10 = true;
        bVar11 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1494490f1;
    local_110._0_4_ = FVar30.Value;
    local_110._4_4_ = uVar14;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar12 = true;
  }
  if ((param_3->ExecutionState == Complete) || (param_3->ExecutionState == Disabled))
  goto LAB_149449ad1;
  local_100 = param_3->Age;
  pTVar1 = &param_3->EmitterData;
  pFVar21 = pTVar1->Object;
  pFVar5 = (param_3->ShaderParameters).Ptr;
  local_fc = 1;
  local_f8 = pTVar1;
  pTVar20 = TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int>::
            TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int><TArray<FNiagaraStatelessRuntimeSpawnInfo,TSizedDefaultAllocator<32>_>_const_&,TArray<FNiagaraStatelessRuntimeSpawnInfo,TSizedDefaultAllocator<32>_>_>
                      (&local_58,&param_3->SpawnInfos);
  local_78.DataPtr = pTVar20->DataPtr;
  local_78.ArrayNum = pTVar20->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&pTVar20->field_0xc;
  uVar14 = FNiagaraStatelessEmitterData::CalculateActiveParticles
                     (pFVar21,param_3->RandomSeed,&local_78,(TOptional<float>)&local_100,
                      &pFVar5->SpawnParameters);
  if (uVar14 == 0) goto LAB_149449ad1;
  local_118 = (FName)this->_padding_;
  local_128 = NiagaraStatelessComputeManagerPrivate::DetermineComputeExecutionPath
                        (pFVar21,uVar14,this->bAllowDeferredGeneration);
  local_134[0] = 0xffffffff;
  local_140 = (FNiagaraDataBuffer *)0x0;
  pFVar21 = TSharedPtr<FNiagaraStatelessEmitterData_const_,1>::operator->(pTVar1);
  pFVar22 = TSharedPtr<FNiagaraDataSetCompiledData,1>::operator->
                      (&pFVar21->ParticleDataSetCompiledData);
  uVar15 = FNiagaraDataSetCompiledData::GetLayoutHash(pFVar22);
  this_01 = &this->GetDataBufferGuard;
  local_12c = uVar15;
  if ((this_01 == (FMutex *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    pFVar23 = (FNiagaraDataBuffer *)(*pcVar9)();
    return pFVar23;
  }
  LOCK();
  bVar13 = this_01->State == (atomic<unsigned_char>)0x0;
  if (bVar13) {
    this_01->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar13) {
    UE::FMutex::LockSlow(this_01);
  }
  local_e0 = (TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
              *)&this->UsedData;
  if (*(int *)&(this->UsedData).field_0x8 != *(int *)&(this->UsedData).field_0x34) {
    puVar33 = *(undefined1 **)&(this->UsedData).field_0x40;
    if (puVar33 == (undefined1 *)0x0) {
      puVar33 = &(this->UsedData).field_0x38;
    }
    iVar16 = *(int *)(puVar33 +
                     ((local_res18 >> 0x20) * 0x17 + local_res18 &
                     (ulonglong)(*(int *)&(this->UsedData).field_0x48 - 1)) * 4);
    if (iVar16 != -1) {
      do {
        lVar3 = *(longlong *)
                 &((TMap<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>_>
                    *)local_e0)->field_0x0 + (longlong)iVar16 * 0x18;
        if (*(ulonglong *)
             (*(longlong *)
               &((TMap<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>_>
                  *)local_e0)->field_0x0 + (longlong)iVar16 * 0x18) == local_res18) {
          pFVar25 = (FNiagaraDataBuffer *)(lVar3 + 8);
          if (lVar3 == 0) {
            pFVar25 = pFVar23;
          }
          if (pFVar25 != (FNiagaraDataBuffer *)0x0) {
            pFVar23 = *(FNiagaraDataBuffer **)(pFVar25->_padding_ + 0xd8);
            if (this_01 != (FMutex *)0x0) {
              LOCK();
              aVar4 = this_01->State;
              this_01->State = (atomic<unsigned_char>)((char)this_01->State + -1);
              UNLOCK();
              if (((byte)aVar4 & 2) != 0) {
                UE::FMutex::WakeWaitingThread(this_01);
              }
            }
            goto LAB_149449ad1;
          }
          break;
        }
        iVar16 = *(int *)(lVar3 + 0x10);
      } while (iVar16 != -1);
    }
  }
  this_03 = local_e0;
  if ((NiagaraStatelessComputeManagerPrivate::GUseDataBufferCache != false) &&
     (0 < (this->FreeData).ArrayNum)) {
    this_00 = &this->FreeData;
    pFVar25 = pFVar23;
    pFVar24 = pFVar23;
    do {
      uVar35 = (uint)pFVar24;
      uVar36 = ~uVar35 >> 0x1f;
      uVar15 = uVar17;
      if ((int)uVar35 < (this->FreeData).ArrayNum) {
        uVar15 = uVar36;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        pFVar23 = (FNiagaraDataBuffer *)(*pcVar9)();
        return pFVar23;
      }
      if (**(uint **)((longlong)&pFVar25->_padding_ + (longlong)(this_00->AllocatorInstance).Data)
          == local_12c) {
        uVar15 = uVar17;
        if ((int)uVar35 < (this->FreeData).ArrayNum) {
          uVar15 = uVar36;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          pFVar23 = (FNiagaraDataBuffer *)(*pcVar9)();
          return pFVar23;
        }
        pFVar7 = (this_00->AllocatorInstance).Data;
        local_140 = *(FNiagaraDataBuffer **)(pFVar7 + (longlong)(int)uVar35 * 8);
        *(undefined8 *)(pFVar7 + (longlong)(int)uVar35 * 8) = 0;
        if ((int)uVar35 < (this->FreeData).ArrayNum) {
          uVar17 = uVar36;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          pFVar23 = (FNiagaraDataBuffer *)(*pcVar9)();
          return pFVar23;
        }
        TArray<TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(this_00,uVar35);
        this_03 = local_e0;
        uVar15 = local_12c;
        goto LAB_14944940d;
      }
      pFVar24 = (FNiagaraDataBuffer *)(ulonglong)(uVar35 + 1);
      pFVar25 = (FNiagaraDataBuffer *)&pFVar25->_padding_;
    } while ((int)(uVar35 + 1) < (this->FreeData).ArrayNum);
    this_03 = (TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
               *)&this->UsedData;
    uVar15 = local_12c;
  }
LAB_14944940d:
  if (local_140 == (FNiagaraDataBuffer *)0x0) {
    pFVar24 = ::operator_new(0xe0);
    pFVar25 = pFVar23;
    if (pFVar24 != (FNiagaraDataBuffer *)0x0) {
      *(undefined4 *)((longlong)&pFVar24->_padding_ + 4) = 0;
      memset(&pFVar24->FloatData,0,200);
      *(undefined4 *)&pFVar24->_padding_ = 0;
      pFVar24->_padding_ = 0;
      pFVar24->Owner = (FNiagaraDataSet *)0x0;
      FNiagaraDataSet::FNiagaraDataSet((FNiagaraDataSet *)&pFVar24->FloatData);
      (pFVar24->GPUIDToIndexTable).NumBytes = 0;
      (pFVar24->GPUIDToIndexTable).ClassName.ComparisonIndex = 0;
      pFVar25 = pFVar24;
    }
    pTVar1 = local_f8;
    *(uint *)&pFVar25->_padding_ = uVar15;
    local_140 = pFVar25;
    if ((local_f8->Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      pFVar23 = (FNiagaraDataBuffer *)(*pcVar9)();
      return pFVar23;
    }
    pFVar6 = (FNiagaraDataSet *)
             (pTVar1->Object->ParticleDataSetCompiledData).SharedReferenceCount.ReferenceController;
    pFVar22 = (pTVar1->Object->ParticleDataSetCompiledData).Object;
    if (pFVar6 != (FNiagaraDataSet *)0x0) {
      LOCK();
      *(int *)&(pFVar6->CompiledData).StructPtr = *(int *)&(pFVar6->CompiledData).StructPtr + 1;
      UNLOCK();
    }
    local_68 = local_140->_padding_;
    pFStack_60 = local_140->Owner;
    local_140->_padding_ = (longlong)pFVar22;
    local_140->Owner = pFVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFStack_60);
    FNiagaraDataSet::Init
              ((FNiagaraDataSet *)&local_140->FloatData,
               (FNiagaraDataSetCompiledData *)local_140->_padding_,0);
    pFVar25 = ::operator_new(0x160);
    if (pFVar25 != (FNiagaraDataBuffer *)0x0) {
      pFVar23 = FNiagaraDataBuffer::FNiagaraDataBuffer
                          (pFVar25,(FNiagaraDataSet *)&local_140->FloatData);
    }
    TRefCountPtr<FNiagaraDataBuffer>::operator=
              ((TRefCountPtr<FNiagaraDataBuffer> *)&(local_140->GPUIDToIndexTable).NumBytes,pFVar23)
    ;
  }
  local_a8 = &local_res18;
  local_a0 = &local_140;
  TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_&,FNiagaraStatelessComputeManager::FStatelessDataCache_*_&>_>
            (this_03,(TPairInitializer<unsigned___int64_&,FNiagaraStatelessComputeManager::FStatelessDataCache_*_&>
                      *)local_110,(bool *)&local_a8);
  EVar34 = local_128;
  if (local_128 == GPU) {
    this_02 = FNiagaraGpuComputeDispatchInterface::GetGPUInstanceCounterManager
                        ((FNiagaraGpuComputeDispatchInterface *)local_118);
    local_134[0] = FNiagaraGPUInstanceCountManager::AcquireEntry(this_02);
    pFVar23 = local_140;
    if (local_134[0] != 0xffffffff) {
      iVar16 = (this->GPUGenerationRequests).ArrayNum;
      piVar2 = &(this->GPUGenerationRequests).ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(this->GPUGenerationRequests).AllocatorInstance,piVar2);
      }
      pFVar7 = (this->GPUGenerationRequests).AllocatorInstance.Data;
      (this->GPUGenerationRequests).ArrayNum = iVar16 + 1;
      lVar3 = *(longlong *)&(pFVar23->GPUIDToIndexTable).NumBytes;
      lVar26 = (longlong)iVar16;
      *(longlong *)(pFVar7 + lVar26 * 0x18) = lVar3;
      if (lVar3 != 0) {
        if ((*(int *)(lVar3 + 8) == -1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("!IsBeingWritten()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                ,0x26,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          pFVar23 = (FNiagaraDataBuffer *)(*pcVar9)();
          return pFVar23;
        }
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      *(FEmitterInstance_RT **)(pFVar7 + lVar26 * 0x18 + 8) = local_res20;
      *(uint *)(pFVar7 + lVar26 * 0x18 + 0x10) = uVar14;
      pFVar7 = (this->CountsToRelease).AllocatorInstance.Data;
      if (((pFVar7 <= (FScriptContainerElement *)local_134) &&
          ((FScriptContainerElement *)local_134 <
           pFVar7 + (longlong)(this->CountsToRelease).ArrayMax * 4)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        pFVar23 = (FNiagaraDataBuffer *)(*pcVar9)();
        return pFVar23;
      }
      iVar16 = (this->CountsToRelease).ArrayNum;
      piVar2 = &(this->CountsToRelease).ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(this->CountsToRelease).AllocatorInstance,piVar2);
      }
      (this->CountsToRelease).ArrayNum = iVar16 + 1;
      *(uint *)((this->CountsToRelease).AllocatorInstance.Data + (longlong)iVar16 * 4) =
           local_134[0];
      EVar34 = local_128;
    }
  }
  if (this_01 != (FMutex *)0x0) {
    LOCK();
    aVar4 = this_01->State;
    this_01->State = (atomic<unsigned_char>)((char)this_01->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_01);
    }
  }
  auVar37 = (uchar  [8])
            (longlong)*(int *)(*(longlong *)&(local_140->GPUIDToIndexTable).NumBytes + 0x120);
  if (auVar37 != (uchar  [8])0x0) {
    FVar27 = StatPtr_STAT_NiagaraStateless_BufferMemory;
    if (StatPtr_STAT_NiagaraStateless_BufferMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_BufferMemory>)0x0) {
      pFVar18 = ::FName::FName(&local_90,"STAT_NiagaraStateless_BufferMemory");
      FVar27 = (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_BufferMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_BufferMemory,
                          *pFVar18,L"Buffer Memory","STATGROUP_NiagaraStateless",
                          "STATCAT_NiagaraStateless",L"NiagaraStateless",true,false,ST_int64,false,
                          false,MCR_Physical);
    }
    FVar8 = *(FName *)FVar27;
    FVar30 = FVar8.ComparisonIndex.Value;
    uVar17 = FVar8.Number;
    local_128 = FVar30.Value;
    uStack_124 = uVar17;
    if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar28 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar28 == (FThreadStats *)0x0) {
        pFVar29 = FThreadStatsPool::Get();
        pFVar28 = FThreadStatsPool::GetFromPool(pFVar29);
      }
      local_c8.NameAndInfo.Number = uVar17 & 0xffffbfff | 0xb000;
      local_d8 = FVar8;
      local_c8.StatData.Pad = auVar37;
      local_c8.NameAndInfo.Index.Value = FVar30.Value;
      FThreadStats::AddStatMessage(pFVar28,&local_c8);
      FStatsTrace::Add(&local_d8,-(longlong)auVar37);
      if (pFVar28->ScopeCount == 0) {
        FThreadStats::Flush(pFVar28,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar28,false,false);
      }
    }
  }
  FNiagaraDataBuffer::AllocateGPU
            (*(FNiagaraDataBuffer **)&(local_140->GPUIDToIndexTable).NumBytes,param_1,uVar14,
             *(Type *)((longlong)local_118 + 0x34),L"StatelessSimBuffer");
  auVar37 = (uchar  [8])
            (longlong)*(int *)(*(longlong *)&(local_140->GPUIDToIndexTable).NumBytes + 0x120);
  if (auVar37 != (uchar  [8])0x0) {
    FVar27 = StatPtr_STAT_NiagaraStateless_BufferMemory;
    if (StatPtr_STAT_NiagaraStateless_BufferMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_BufferMemory>)0x0) {
      pFVar18 = ::FName::FName(local_88,"STAT_NiagaraStateless_BufferMemory");
      FVar27 = (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_BufferMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_BufferMemory,
                          *pFVar18,L"Buffer Memory","STATGROUP_NiagaraStateless",
                          "STATCAT_NiagaraStateless",L"NiagaraStateless",true,false,ST_int64,false,
                          false,MCR_Physical);
    }
    FVar8 = *(FName *)FVar27;
    local_118 = FVar8;
    if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar28 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar28 == (FThreadStats *)0x0) {
        pFVar29 = FThreadStatsPool::Get();
        pFVar28 = FThreadStatsPool::GetFromPool(pFVar29);
      }
      local_b8.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
      local_d0 = FVar8;
      local_b8.StatData.Pad = auVar37;
      local_b8.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar28,&local_b8);
      FStatsTrace::Add(&local_d0,(long64)auVar37);
      if (pFVar28->ScopeCount == 0) {
        FThreadStats::Flush(pFVar28,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar28,false,false);
      }
    }
  }
  pFVar23 = pFVar31;
  if (EVar34 == CPU) {
    bVar13 = NiagaraStatelessComputeManagerPrivate::GenerateCPUDataForGPUSim
                       (param_1,local_res20,
                        *(FNiagaraDataBuffer **)&(local_140->GPUIDToIndexTable).NumBytes);
joined_r0x000149449a50:
    if (!bVar13) goto LAB_149449ad1;
  }
  else {
    if (EVar34 != GPU) {
      `FNiagaraStatelessComputeManager::GetDataBuffer'::__l46::<lambda_2>::operator()(&local_138);
      goto LAB_149449ad1;
    }
    if (local_134[0] == 0xffffffff) {
      bVar13 = FNiagaraUtilities::LogVerboseWarnings();
      if (bVar13) {
        local_137[0] = 0;
        `FNiagaraStatelessComputeManager::GetDataBuffer'::__l56::<lambda_1>::operator()(local_137);
      }
      pFVar21 = TSharedPtr<FNiagaraStatelessEmitterData_const_,1>::operator->(local_f8);
      if ((pFVar21->FeatureMask & ExecuteCPU) == None) goto LAB_149449ad1;
      bVar13 = NiagaraStatelessComputeManagerPrivate::GenerateCPUDataForGPUSim
                         (param_1,local_res20,
                          *(FNiagaraDataBuffer **)&(local_140->GPUIDToIndexTable).NumBytes);
      goto joined_r0x000149449a50;
    }
    FNiagaraDataBuffer::SetNumInstances
              (*(FNiagaraDataBuffer **)&(local_140->GPUIDToIndexTable).NumBytes,uVar14);
    *(uint *)(*(longlong *)&(local_140->GPUIDToIndexTable).NumBytes + 0x5c) = local_134[0];
  }
  pFVar23 = *(FNiagaraDataBuffer **)&(local_140->GPUIDToIndexTable).NumBytes;
  if (pFVar23 != (FNiagaraDataBuffer *)0x0) {
    if (((int)pFVar23->_padding_ == -1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!IsBeingWritten()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x26,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      pFVar23 = (FNiagaraDataBuffer *)(*pcVar9)();
      return pFVar23;
    }
    LOCK();
    *(int *)&pFVar23->_padding_ = (int)pFVar23->_padding_ + 1;
    UNLOCK();
    if (pFVar23 != (FNiagaraDataBuffer *)0x0) {
      if (((int)pFVar23->_padding_ < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsBeingRead()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x2c,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        pFVar23 = (FNiagaraDataBuffer *)(*pcVar9)();
        return pFVar23;
      }
      LOCK();
      *(int *)&pFVar23->_padding_ = (int)pFVar23->_padding_ + -1;
      UNLOCK();
    }
  }
LAB_149449ad1:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  return pFVar23;
}

// OnPostPostRender @ 149455f10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraStatelessComputeManager::OnPostPostRender
          (FNiagaraStatelessComputeManager *this,FRDGBuilder *param_1)

{
  int *piVar1;
  char cVar2;
  FRHIGPUMask FVar3;
  FRHIComputeCommandList *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  atomic<unsigned_int> aVar7;
  int iVar8;
  FRDGScope *this_01;
  FRDGScope *this_02;
  FRHIBreadcrumbAllocator *pFVar9;
  FRHIBreadcrumbNode *pFVar10;
  FRDGEventName *pFVar11;
  void *this_03;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPostPostRender(FRDGBuilder_&)_::_2_::<lambda_3>_>
  *pTVar12;
  ulonglong uVar13;
  <lambda_3> local_res8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_d8;
  char local_c8;
  char *local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  TGPUStat<TRHIGPUStatNameProvider_NiagaraStatelessGPUSimulation> *local_b0;
  wchar_t *pwStack_a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_const_*,std::tuple<>_> local_a0;
  FRHIBreadcrumbScope local_90;
  undefined1 local_80;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  FRDGEventName local_58;
  
  if (((this->CountsToRelease).ArrayNum - *(int *)&(this->UsedData).field_0x34) +
      (this->FreeData).ArrayNum + *(int *)&(this->UsedData).field_0x8 != 0) {
    this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_01;
    uVar13 = (ulonglong)(this_01->Impl).Impl.TypeIndex;
    if ((3 < uVar13) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar13])(&this_01->Impl);
    (this_01->Impl).Impl._padding_ = (longlong)"NiagaraStateless";
    FCsvProfiler::BeginExclusiveStat("NiagaraStateless",(char *)0x0);
    (this_01->Impl).Impl.TypeIndex = '\x03';
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
    }
    cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_c8 = '\0';
    if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_68 = 0x54c852d0;
        uStack_64 = 1;
        ::Desc._padding_._0_4_ = 0x54c852d0;
        ::Desc._padding_._4_4_ = uStack_6c;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_._0_4_ = 0x1d9;
        ::Desc._padding_ = (longlong)::u_NiagaraStateles;
        ::Desc._padding_ = (longlong)::u_NiagaraStateles;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FNiagaraStatelessComputeManager::OnPostPostRender'::__l10::Desc::operator()<>'::
               __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_a0._Myfirst._Val = &::Desc;
      local_d8.State = (FRDGScopeState *)param_1;
      this_02 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_02;
      uVar13 = (ulonglong)(this_02->Impl).Impl.TypeIndex;
      local_d8.Scope = this_02;
      if ((3 < uVar13) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
        ::__l2::Destructors[uVar13])(&this_02->Impl);
      FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_>
                ((FRDGScope_RHI *)&this_02->Impl,(FRDGScopeState *)param_1,&local_a0);
      (this_02->Impl).Impl.TypeIndex = '\x02';
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_02,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_02,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_c8 = '\x01';
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_b8 = 0x1d9;
      local_c0 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessComputeManager.cpp"
      ;
      local_b0 = &GPUStat_NiagaraStatelessGPUSimulation;
      pwStack_a8 = L"NiagaraStateless";
      ::Desc._padding_._0_4_ = 0x51e35350;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x1d9;
      ::Desc._padding_._4_4_ = uStack_b4;
      ::Desc._padding_._0_4_ = 0x54c852d0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x51e35168;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FNiagaraStatelessComputeManager::OnPostPostRender'::__l15::<lambda_2>::operator()<>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_res8.__this = (FNiagaraStatelessComputeManager *)param_1->_padding_;
    pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator
                       ((FRHIComputeCommandList *)local_res8.__this);
    pFVar10 = FMemStackBase::Alloc(&pFVar9->Inner,0x50,8);
    pFVar10->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar10->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar10->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar10->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar10->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar10->TraceCpuSpecId = 0;
    pFVar10->TraceCpuMetadataId = 0;
    pFVar10->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar10->Allocator = pFVar9;
    LOCK();
    UNLOCK();
    uVar6 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar10->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar10->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar10->ID = uVar6;
    pFVar10->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar10[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar5 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar5)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar7 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar7;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar10->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope
              (&local_90,(FRHIComputeCommandList *)local_res8.__this,pFVar10);
    this_00 = (FRHIComputeCommandList *)param_1->_padding_;
    local_80 = 1;
    FVar3.GPUMask = *(uint *)&this_00->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              (this_00,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    local_res8.__this = this;
    pFVar11 = FRDGEventName::FRDGEventName
                        (&local_58,1,L"FNiagaraStatelessComputeManager::OnPostPostRender");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar11,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_03 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,400,8);
    pTVar12 = TRDGEmptyLambdaPass<`FNiagaraStatelessComputeManager::OnPostPostRender'::__l2::<lambda_3>_>
              ::
              TRDGEmptyLambdaPass<_FNiagaraStatelessComputeManager::OnPostPostRender_::__l2::<lambda_3>_>
                        (this_03,pFVar11,NeverCull,&local_res8);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar8 = (param_1->Passes).Array.ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar8 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar8] = (FRDGPass *)pTVar12;
    *(int *)&pTVar12->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar12);
    if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
    }
    FRHIComputeCommandList::SetGPUMask(this_00,FVar3);
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_90);
    if (local_c8 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_d8);
    }
    if (this_01 != (FRDGScope *)0x0) {
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::EndGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
        FRDGScope::EndCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
      }
      FRDGScope::ImmediateEnd(this_01,(FRDGScopeState *)param_1);
      *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
      param_1->_padding_ = *(longlong *)param_1->_padding_;
    }
  }
  return;
}

// OnPreInitViews @ 149456d90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraStatelessComputeManager::OnPreInitViews
          (FNiagaraStatelessComputeManager *this,FRDGBuilder *param_1)

{
  this->bAllowDeferredGeneration = true;
  return;
}

// OnPreRender @ 149456da0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessComputeManager::OnPreRender
          (FNiagaraStatelessComputeManager *this,FRDGBuilder *param_1)

{
  int *piVar1;
  char cVar2;
  FRHIGPUMask FVar3;
  FRHIComputeCommandList *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  atomic<unsigned_int> aVar10;
  int iVar11;
  FRDGScope *this_00;
  FRDGScope *this_01;
  FRHIBreadcrumbAllocator *pFVar12;
  FRHIBreadcrumbNode *pFVar13;
  FRDGEventName *pFVar14;
  void *this_02;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPreRender(FRDGBuilder_&)_::_2_::<lambda_3>_>
  *pTVar15;
  ulonglong uVar16;
  TArray<FNiagaraStatelessComputeManager::FStatelessDataGenerationRequest,TSizedDefaultAllocator<32>_>
  *pTVar17;
  <lambda_3> local_e8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_d0;
  undefined1 local_c0;
  char *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TGPUStat<TRHIGPUStatNameProvider_NiagaraStatelessGPUSimulation> *local_a8;
  wchar_t *pwStack_a0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_const_*,std::tuple<>_> local_98;
  FRHIBreadcrumbScope local_88;
  undefined1 local_78;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  FRDGEventName local_50;
  
  this->bAllowDeferredGeneration = false;
  if ((this->GPUGenerationRequests).ArrayNum != 0) {
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    uVar16 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
    if ((3 < uVar16) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar16])(&this_00->Impl);
    (this_00->Impl).Impl._padding_ = (longlong)"NiagaraStateless";
    FCsvProfiler::BeginExclusiveStat("NiagaraStateless",(char *)0x0);
    (this_00->Impl).Impl.TypeIndex = '\x03';
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
    bVar7 = false;
    local_c0 = 0;
    if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x1be;
        local_60 = 0x54c852d0;
        uStack_5c = 1;
        ::Desc._padding_._0_4_ = 0x54c852d0;
        ::Desc._padding_._4_4_ = uStack_64;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)::u_NiagaraStateles;
        ::Desc._padding_ = (longlong)::u_NiagaraStateles;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FNiagaraStatelessComputeManager::OnPreRender'::__l10::Desc::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_98._Myfirst._Val = &::Desc;
      local_d0.State = (FRDGScopeState *)param_1;
      this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_01;
      uVar16 = (ulonglong)(this_01->Impl).Impl.TypeIndex;
      local_d0.Scope = this_01;
      if ((3 < uVar16) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
        ::__l2::Destructors[uVar16])(&this_01->Impl);
      FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_>
                ((FRDGScope_RHI *)&this_01->Impl,(FRDGScopeState *)param_1,&local_98);
      (this_01->Impl).Impl.TypeIndex = '\x02';
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
      }
      bVar7 = true;
      local_c0 = 1;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_b0 = 0x1be;
      local_b8 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessComputeManager.cpp"
      ;
      pwStack_a0 = L"NiagaraStateless";
      local_a8 = &GPUStat_NiagaraStatelessGPUSimulation;
      ::Desc._padding_._0_4_ = 0x51e35350;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x1be;
      ::Desc._padding_._4_4_ = uStack_ac;
      ::Desc._padding_._0_4_ = 0x54c852d0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x51e35168;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FNiagaraStatelessComputeManager::OnPreRender'::__l15::<lambda_2>::operator()<>'::__l2
             ::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = (FRHIComputeCommandList *)param_1->_padding_;
    pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator(pFVar4);
    pFVar13 = FMemStackBase::Alloc(&pFVar12->Inner,0x50,8);
    pFVar13->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar13->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar13->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar13->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar13->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar13->TraceCpuSpecId = 0;
    pFVar13->TraceCpuMetadataId = 0;
    pFVar13->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar13->Allocator = pFVar12;
    LOCK();
    UNLOCK();
    uVar9 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar13->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar13->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar13->ID = uVar9;
    pFVar13->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar13[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar8 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar8)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar10 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                            ,(char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar10;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar13->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_88,pFVar4,pFVar13);
    pFVar4 = (FRHIComputeCommandList *)param_1->_padding_;
    local_78 = 1;
    FVar3.GPUMask = *(uint *)&pFVar4->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              (pFVar4,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    local_e8.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)this->_padding_;
    pTVar17 = &this->GPUGenerationRequests;
    local_e8.GPUGenerationRequests_RDG.AllocatorInstance.Data = (pTVar17->AllocatorInstance).Data;
    (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_e8.GPUGenerationRequests_RDG.ArrayNum = (this->GPUGenerationRequests).ArrayNum;
    local_e8.GPUGenerationRequests_RDG.ArrayMax = (this->GPUGenerationRequests).ArrayMax;
    (this->GPUGenerationRequests).ArrayNum = 0;
    (this->GPUGenerationRequests).ArrayMax = 0;
    pFVar14 = FRDGEventName::FRDGEventName
                        (&local_50,1,L"FNiagaraStatelessComputeManager::OnPreRender");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar14,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_02 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1a0,8);
    pTVar15 = TRDGEmptyLambdaPass<`FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>_>
              ::
              TRDGEmptyLambdaPass<_FNiagaraStatelessComputeManager::OnPreRender_::__l2::<lambda_3>_>
                        (this_02,pFVar14,NeverCull,&local_e8);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar11 = (param_1->Passes).Array.ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                         (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar11 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar11] = (FRDGPass *)pTVar15;
    *(int *)&pTVar15->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar15);
    if (local_50.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.FormattedEventName.Data.AllocatorInstance.Data);
    }
    FVar6.Data = local_e8.GPUGenerationRequests_RDG.AllocatorInstance.Data;
    DestructItems<FNiagaraStatelessComputeManager::FStatelessDataGenerationRequest,int>
              ((FStatelessDataGenerationRequest *)
               local_e8.GPUGenerationRequests_RDG.AllocatorInstance.Data,
               local_e8.GPUGenerationRequests_RDG.ArrayNum);
    if ((FStatelessDataGenerationRequest *)FVar6.Data != (FStatelessDataGenerationRequest *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    DestructItems<FNiagaraStatelessComputeManager::FStatelessDataGenerationRequest,int>
              ((FStatelessDataGenerationRequest *)(pTVar17->AllocatorInstance).Data,
               (this->GPUGenerationRequests).ArrayNum);
    (this->GPUGenerationRequests).ArrayNum = 0;
    if ((this->GPUGenerationRequests).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar17->AllocatorInstance,0,&(this->GPUGenerationRequests).ArrayMax);
    }
    FRHIComputeCommandList::SetGPUMask(pFVar4,FVar3);
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_88);
    if (bVar7) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_d0);
    }
    if (this_00 != (FRDGScope *)0x0) {
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::EndGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
        FRDGScope::EndCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      }
      FRDGScope::ImmediateEnd(this_00,(FRDGScopeState *)param_1);
      *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
      param_1->_padding_ = *(longlong *)param_1->_padding_;
    }
  }
  return;
}

// operator() @ 150542820

bool __thiscall
`FNiagaraStatelessComputeManager::GetDataBuffer'::__l56::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8637189858005089957>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8637189858005089957>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505429a0

bool __thiscall
`FNiagaraStatelessComputeManager::GetDataBuffer'::__l46::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8637189858005089947>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8637189858005089947>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

