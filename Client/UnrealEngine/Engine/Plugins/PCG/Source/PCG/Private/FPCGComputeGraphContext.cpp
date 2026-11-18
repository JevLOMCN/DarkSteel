// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// <lambda_1> @ 1497dd020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_1> * __thiscall
`FPCGComputeGraphContext::~FPCGComputeGraphContext'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  UPCGDataBinding *pUVar1;
  
  pUVar1 = (param_1->DataBinding).field0_0x0.DebugPtr;
  *(UPCGDataBinding **)this = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGDataBinding *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(FComputeGraphInstance **)((longlong)this + 8) = (param_1->GraphInstance).Object;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x10) =
       (param_1->GraphInstance).SharedReferenceCount.ReferenceController;
  (param_1->GraphInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->GraphInstance).Object = (FComputeGraphInstance *)0x0;
  *(bool *)((longlong)this + 0x18) = param_1->bInstanceInitialized;
  *(FWeakObjectPtr *)((longlong)this + 0x1c) = (param_1->GraphWeak).WeakPtr;
  *(uint *)((longlong)this + 0x24) = param_1->GridSize;
  *(int *)((longlong)this + 0x28) = param_1->GraphIndex;
  return this;
}

// ~FPCGComputeGraphContext @ 1497e2760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall FPCGComputeGraphContext::~FPCGComputeGraphContext(FPCGComputeGraphContext *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<FSetElementId> FVar6;
  TTask<void> TVar7;
  bool bVar8;
  FPCGStack *this_00;
  UPCGGraph *pUVar9;
  FTSTicker *this_01;
  code **ppcVar10;
  undefined1 auStackY_108 [32];
  FWeakObjectPtr local_d8;
  TWeakPtr<FTSTicker::FElement,1> local_d0;
  TObjectPtr<UPCGDataBinding>_u_0 local_c0;
  FComputeGraphInstance *local_b8;
  TReferenceControllerBase<1> *local_b0;
  undefined1 local_a8;
  FWeakObjectPtr local_a4;
  uint local_9c;
  int local_98;
  <lambda_1> local_90;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  this->_padding_ = (longlong)&___7FPCGComputeGraphContext__6B_;
  this_00 = FPCGStackHandle::GetStack((FPCGStackHandle *)&this->_padding_);
  pUVar9 = (UPCGGraph *)0x0;
  if (this_00 != (FPCGStack *)0x0) {
    pUVar9 = FPCGStack::GetNearestNonInlinedGraphForCurrentFrame(this_00);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UPCGGraph *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  local_d8.ObjectIndex = 0;
  local_d8.ObjectSerialNumber = 0;
  local_d0.Object = (FElement *)pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UPCGGraph *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
  local_c0 = (TObjectPtr<UPCGDataBinding>_u_0)(this->DataBinding).field0_0x0.DebugPtr;
  local_98 = this->ComputeGraphIndex;
  local_9c = this->GenerationGridSize;
  local_a8 = this->bComputeGraphInstanceInitialized;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c0.DebugPtr != (UPCGDataBinding *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c0.DebugPtr);
  }
  local_b8 = (this->ComputeGraphInstance).Object;
  local_b0 = (this->ComputeGraphInstance).SharedReferenceCount.ReferenceController;
  if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a4 = local_d8;
  bVar8 = IsInGameThread();
  if (bVar8) {
    `FPCGComputeGraphContext::~FPCGComputeGraphContext'::__l2::<lambda_1>::operator()(&local_c0);
  }
  else {
    this_01 = FTSTicker::GetCoreTicker();
    `FPCGComputeGraphContext::~FPCGComputeGraphContext'::__l2::<lambda_1>::<lambda_1>
              (&local_90,(<lambda_1> *)&local_c0.ObjectPtr);
    local_58[0] = (code *)0x0;
    local_30 = FMemory::Malloc(0x38,8);
    ppcVar10 = local_30 + 1;
    *local_30 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGComputeGraphContext::~FPCGComputeGraphContext'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    `FPCGComputeGraphContext::~FPCGComputeGraphContext'::__l2::<lambda_1>::<lambda_1>
              (ppcVar10,&local_90);
    if (ppcVar10 != (code **)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ExecuteOnGameThread<`FPCGComputeGraphContext::~FPCGComputeGraphContext'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this_01,&local_d0,L"~FPCGComputeGraphContext",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_58);
    if (local_d0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_d0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_d0.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_58[0] != (code *)0x0) {
      ppcVar10 = local_58 + 2;
      if (local_30 != (code **)0x0) {
        ppcVar10 = local_30;
      }
      (**(code **)(*ppcVar10 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.GraphInstance.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  DestructItems<TFunction<bool___cdecl(FPCGComputeGraphContext_*)>,int>
            ((TFunction<bool___cdecl(FPCGComputeGraphContext_*)> *)
             (this->DebugDataPrepareActions).AllocatorInstance.Data,
             (this->DebugDataPrepareActions).ArrayNum);
  pFVar5 = (this->DebugDataPrepareActions).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  (this->ProvidersWithBufferExports).HashSize = 0;
  FVar6 = (this->ProvidersWithBufferExports).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UComputeDataProvider>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UComputeDataProvider>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ProvidersWithBufferExports).Elements);
  pFVar5 = (this->DataProvidersPendingPostExecute).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->DataProvidersPendingReadyForExecute).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  TVar7 = this->DataDescrPrimeAndValidateTask;
  if (TVar7 != (TTask<void>)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)TVar7 + 0x30);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)TVar7)(TVar7,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeGraphInstance).SharedReferenceCount.ReferenceController);
  FPCGContext::~FPCGContext((FPCGContext *)this);
  return;
}

// operator() @ 1497e42d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
`FPCGComputeGraphContext::~FPCGComputeGraphContext'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  UClass *pUVar9;
  UPCGGraph *this_00;
  longlong *plVar10;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  TTuple<unsigned_int,int> local_res18;
  FName local_res20;
  FMemScope local_58;
  TSharedPtr<FComputeGraphInstance,1> local_50 [2];
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_58,&local_res20,true);
  if (*(UPCGDataBinding **)this != (UPCGDataBinding *)0x0) {
    UPCGDataBinding::ReleaseTransientResources(*(UPCGDataBinding **)this);
  }
  if (*(longlong *)((longlong)this + 8) != 0) {
    plVar3 = *(longlong **)((longlong)this + 8);
    plVar10 = (longlong *)*plVar3;
    lVar6 = plVar3[1];
    plVar1 = plVar10 + (int)lVar6;
    while( true ) {
      if ((int)plVar3[1] != (int)lVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UComputeDataProvider>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar10 == plVar1) break;
      plVar4 = (longlong *)*plVar10;
      if (plVar4 != (longlong *)0x0) {
        pUVar9 = Z_Construct_UClass_UPCGComputeDataProvider_NoRegister();
        iVar2 = (int)pUVar9->_padding_;
        if ((iVar2 <= *(int *)(plVar4[2] + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar9->_padding_)) {
          (**(code **)(*plVar4 + 0x2e0))(plVar4);
        }
      }
      plVar10 = plVar10 + 1;
    }
    if (*(char *)((longlong)this + 0x18) != '\0') {
      if ((*(longlong *)((longlong)this + 8) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FComputeGraphInstance::ResetDataProviders(*(FComputeGraphInstance **)((longlong)this + 8));
      bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x1c));
      if (bVar7) {
        uVar8 = PCGHiGenGrid::UninitializedGridSize();
        if (*(uint *)((longlong)this + 0x24) != uVar8) {
          local_res18._4_4_ = *(undefined4 *)((longlong)this + 0x28);
          local_res18._0_4_ = *(uint *)((longlong)this + 0x24);
          this_00 = (UPCGGraph *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x1c));
          local_50[0].Object = *(FComputeGraphInstance **)((longlong)this + 8);
          local_50[0].SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
          if (local_50[0].SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_50[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_50[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount
                 + 1);
            UNLOCK();
          }
          UPCGGraph::ReturnComputeGraphInstanceToPool(this_00,&local_res18,local_50);
        }
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7867665438073683888>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                           ,0x50,"GraphWeak.IsValid()");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
  }
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// AddExtraStructReferencedObjects @ 1497ebc20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGComputeGraphContext::AddExtraStructReferencedObjects
          (FPCGComputeGraphContext *this,FReferenceCollector *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  FComputeGraphInstance *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UScriptStruct *pUVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (this->bComputeGraphInstanceInitialized != false) {
    pFVar4 = (this->ComputeGraphInstance).Object;
    pUVar9 = FComputeGraphInstance::StaticStruct();
    FReferenceCollector::AddPropertyReferences(param_1,(UStruct *)pUVar9,pFVar4,(UObject *)0x0);
  }
  iVar12 = 0;
  puVar2 = &(this->ProvidersWithBufferExports).Elements.field_0x10;
  iVar3 = *(int *)&(this->ProvidersWithBufferExports).Elements.field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = iVar14;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ProvidersWithBufferExports).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1497ebcef;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (int)lVar10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1497ebcef:
  uVar11 = *(uint *)&(this->ProvidersWithBufferExports).Elements.field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ProvidersWithBufferExports).Elements.field_0x8 -
                       *(int *)&(this->ProvidersWithBufferExports).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ProvidersWithBufferExports).Elements.field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ProvidersWithBufferExports).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1497ebe10;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_1497ebe10:
  while( true ) {
    if (*(int *)&(this->ProvidersWithBufferExports).Elements.field_0x8 -
        *(int *)&(this->ProvidersWithBufferExports).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UComputeDataProvider>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    (**(code **)(param_1->_padding_ + 0x88))
              (param_1,(longlong)TStack_60.CurrentBitIndex * 0x10 +
                       *(longlong *)&(this->ProvidersWithBufferExports).Elements);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->DataBinding,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001497ebeb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->ComputeGraph,0,0);
  return;
}

// HasPendingAsyncOperations @ 14981db30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGComputeGraphContext::HasPendingAsyncOperations(FPCGComputeGraphContext *this)

{
  return *(int *)&(this->ProvidersWithBufferExports).Elements.field_0x8 !=
         *(int *)&(this->ProvidersWithBufferExports).Elements.field_0x34;
}

// IsComputeContext @ 14981fce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGComputeGraphContext::IsComputeContext(FPCGComputeGraphContext *this)

{
  return true;
}

