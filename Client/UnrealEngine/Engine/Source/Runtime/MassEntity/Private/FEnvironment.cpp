// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 5

// FEnvironment @ 1471d6120

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEnvironment * __thiscall
FMassDebugger::FEnvironment::FEnvironment(FEnvironment *this,FMassEntityManager *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TWeakPtr<FMassEntityManager,1> *pTVar3;
  FDelegateHandle FVar4;
  TWeakPtr<FMassEntityManager,1> local_18;
  
  pTVar3 = TSharedFromThis<FMassEntityManager,1>::AsWeak
                     ((TSharedFromThis<FMassEntityManager,1> *)&param_1->_padding_,&local_18);
  (this->EntityManager).Object = pTVar3->Object;
  (this->EntityManager).WeakReferenceCount.ReferenceController =
       (pTVar3->WeakReferenceCount).ReferenceController;
  (pTVar3->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar3->Object = (FMassEntityManager *)0x0;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  TSharedFromThis<FMassEntityManager,1>::AsWeak
            ((TSharedFromThis<FMassEntityManager,1> *)&param_1->_padding_,
             &this->MutableEntityManager);
  *(undefined8 *)&this->ProcessorProviders = 0;
  *(undefined8 *)&(this->ProcessorProviders).field_0x8 = 0;
  *(undefined8 *)&(this->ProcessorProviders).field_0x20 = 0;
  *(undefined4 *)&(this->ProcessorProviders).field_0x28 = 0;
  *(undefined4 *)&(this->ProcessorProviders).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProcessorProviders).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProcessorProviders).field_0x34 = 0;
  *(undefined8 *)&(this->ProcessorProviders).field_0x40 = 0;
  *(undefined4 *)&(this->ProcessorProviders).field_0x48 = 0;
  (this->SelectedEntity).Index = 0;
  (this->SelectedEntity).SerialNumber = 0;
  (this->HighlightedEntity).Index = 0;
  (this->HighlightedEntity).SerialNumber = 0;
  this->bHasBreakpoint = false;
  (this->Breakpoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Breakpoints).ArrayNum = 0;
  (this->Breakpoints).ArrayMax = 0;
  *(undefined8 *)&(this->ProcessorsWithBreakpoints).Elements = 0;
  *(undefined8 *)&(this->ProcessorsWithBreakpoints).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ProcessorsWithBreakpoints).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ProcessorsWithBreakpoints).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ProcessorsWithBreakpoints).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ProcessorsWithBreakpoints).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProcessorsWithBreakpoints).Elements.field_0x34 = 0;
  (this->ProcessorsWithBreakpoints).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ProcessorsWithBreakpoints).HashSize = 0;
  *(undefined8 *)&(this->FragmentsWithBreakpoints).Elements = 0;
  *(undefined8 *)&(this->FragmentsWithBreakpoints).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FragmentsWithBreakpoints).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FragmentsWithBreakpoints).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FragmentsWithBreakpoints).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FragmentsWithBreakpoints).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FragmentsWithBreakpoints).Elements.field_0x34 = 0;
  (this->FragmentsWithBreakpoints).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FragmentsWithBreakpoints).HashSize = 0;
  (this->TraceStartedDelegateHandle).ID = 0;
  local_18.Object = (this->EntityManager).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->EntityManager).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FVar4 = TMulticastDelegateRegistration<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
          ::AddLambda<_FMassDebugger::FEnvironment::FEnvironment_::__l2::<lambda_1>_>
                    (&FTraceAuxiliary::OnTraceStarted,(<lambda_1> *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->TraceStartedDelegateHandle).ID = *FVar4.ID;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  return this;
}

// ~FEnvironment @ 1471dfb80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassDebugger::FEnvironment::~FEnvironment(FEnvironment *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ulong64 uVar3;
  ForElementType<FSetElementId> FVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  ulong64 *puVar11;
  uint uVar12;
  longlong lVar13;
  ForAnyElementType *this_00;
  
  uVar3 = (this->TraceStartedDelegateHandle).ID;
  if (uVar3 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&FTraceAuxiliary::OnTraceStarted);
    uVar12 = 0;
    if (0 < (int)FTraceAuxiliary::OnTraceStarted._48_4_) {
      lVar13 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar12 < (int)FTraceAuxiliary::OnTraceStarted._48_4_) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = (ForAnyElementType *)(FTraceAuxiliary::OnTraceStarted._40_8_ + lVar13);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar11 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar11 == uVar3)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                     &FTraceAuxiliary::OnTraceStarted,false);
          break;
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x10;
      } while ((int)uVar12 < (int)FTraceAuxiliary::OnTraceStarted._48_4_);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&FTraceAuxiliary::OnTraceStarted);
  }
  (this->FragmentsWithBreakpoints).HashSize = 0;
  FVar4 = (this->FragmentsWithBreakpoints).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<TObjectKey<UScriptStruct_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectKey<UScriptStruct_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FragmentsWithBreakpoints).Elements);
  (this->ProcessorsWithBreakpoints).HashSize = 0;
  FVar4 = (this->ProcessorsWithBreakpoints).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<TObjectKey<UMassProcessor_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectKey<UMassProcessor_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ProcessorsWithBreakpoints).Elements);
  DestructItems<UE::Mass::Debug::FBreakpoint,int>
            ((FBreakpoint *)(this->Breakpoints).AllocatorInstance.Data,(this->Breakpoints).ArrayNum)
  ;
  pFVar5 = (this->Breakpoints).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->ProcessorProviders).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ProcessorProviders).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProcessorProviders);
  pTVar7 = (this->MutableEntityManager).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  pTVar7 = (this->EntityManager).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001471dfd91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      return;
    }
  }
  return;
}

// operator() @ 1471e2d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassDebugger::FEnvironment::FEnvironment'::__l2::<lambda_1>::operator()
          (void *this,EConnectionType param_1,FString *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  undefined ***pppuVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMassEntityManager *pFVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  pFVar5 = (FMassEntityManager *)0x0;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1471e2dd0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    pFVar5 = *(FMassEntityManager **)this;
  }
LAB_1471e2dd0:
  if (pFVar5 != (FMassEntityManager *)0x0) {
    local_20 = (undefined ***)0x0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6AXUFMassArchetypeHandle___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = ``FMassDebugger::FEnvironment::FEnvironment'::__l2::<lambda_1>::operator()'::__l5::
               <lambda_1>::<lambda_invoker_cdecl>;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(FMassArchetypeHandle),void,FMassArchetypeHandle>
                  ::Call;
    FMassDebugger::ForEachArchetype
              (pFVar5,(TFunction<void___cdecl(FMassArchetypeHandle)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar3 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar3 = local_20;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// ClearBreakpoints @ 147203080

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassDebugger::FEnvironment::ClearBreakpoints(FEnvironment *this)

{
  int *piVar1;
  int iVar2;
  FBreakpoint *pFVar3;
  
  TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
  ::Reset(&this->ProcessorsWithBreakpoints);
  TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
  ::Reset(&this->FragmentsWithBreakpoints);
  pFVar3 = (FBreakpoint *)(this->Breakpoints).AllocatorInstance.Data;
  piVar1 = &(this->Breakpoints).ArrayMax;
  iVar2 = (this->Breakpoints).ArrayNum;
  if ((this->Breakpoints).ArrayMax < 0) {
    DestructItems<UE::Mass::Debug::FBreakpoint,int>(pFVar3,iVar2);
    (this->Breakpoints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x2a8,8,0,&(this->Breakpoints).AllocatorInstance,0,piVar1);
      UE::Mass::Debug::FBreakpoint::bHasBreakpoint = false;
      return;
    }
  }
  else {
    DestructItems<UE::Mass::Debug::FBreakpoint,int>(pFVar3,iVar2);
    (this->Breakpoints).ArrayNum = 0;
  }
  UE::Mass::Debug::FBreakpoint::bHasBreakpoint = false;
  return;
}

// FindBreakpointByHandle @ 14721a640

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FBreakpoint * __thiscall
FMassDebugger::FEnvironment::FindBreakpointByHandle(FEnvironment *this,FBreakpointHandle param_1)

{
  int iVar1;
  FBreakpoint *pFVar2;
  FBreakpoint *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Breakpoints).ArrayNum;
  pFVar3 = (FBreakpoint *)(this->Breakpoints).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->Breakpoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if ((pFVar3->Handle).Handle == param_1.Handle) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FBreakpoint *)0x0;
}

