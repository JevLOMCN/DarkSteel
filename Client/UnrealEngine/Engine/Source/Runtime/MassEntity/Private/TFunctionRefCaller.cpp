// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 19

// Call @ 147200670

UStruct * __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UClass_*_(__cdecl*)(void),UStruct_*>::Call
          (void *param_1)

{
  UStruct *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147200670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UStruct *)(**(code **)param_1)();
  return pUVar1;
}

// Call @ 147200680

UStruct * __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UScriptStruct_*_(__cdecl*)(void),UStruct_*>::Call
          (void *param_1)

{
  UStruct *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147200680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UStruct *)(**(code **)param_1)();
  return pUVar1;
}

// Call @ 147200690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FMassArchetypeHandle),void,FMassArchetypeHandle>::Call
          (void *param_1,FMassArchetypeHandle *param_2)

{
  code *pcVar1;
  FMassArchetypeData *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = (param_2->DataPtr).Object;
  pcVar1 = *(code **)param_1;
  local_10 = (param_2->DataPtr).SharedReferenceCount.ReferenceController;
  (param_2->DataPtr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_2->DataPtr).Object = (FMassArchetypeData *)0x0;
  (*pcVar1)(&local_18);
  return;
}

// Call @ 1472006d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(UStruct_const_*),bool,UStruct_const_*>::Call
          (void *param_1,UStruct **param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001472006d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2);
  return (bool)uVar1;
}

// Call @ 1472006e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMassChildOfRelationEntityCreation::Execute'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FMassEntityHandle *pFVar8;
  longlong lVar9;
  longlong lVar10;
  TArrayView<FMassRelationFragment_const_,int> TStack_68;
  FMassEntityHandle FStack_58;
  FMassEntityHandle FStack_50;
  FMassEntityHandle FStack_48;
  FEntityIterator FStack_40;
  
  if (*(UScriptStruct **)((longlong)param_1 + 8) == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
    ReportNotNullPtr();
  }
  FMassExecutionContext::GetFragmentView<FMassRelationFragment>
            (param_2,&TStack_68,*(UScriptStruct **)((longlong)param_1 + 8));
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_40);
  while( true ) {
    if (FStack_40.SerialNumber == 0) {
      return;
    }
    lVar9 = (longlong)FStack_40.EntityIndex;
    if (FStack_40.NumEntities <= FStack_40.EntityIndex) {
      return;
    }
    pFVar2 = *(ForAnyElementType **)param_1;
    uVar6 = 0;
    if (FStack_40.EntityIndex < TStack_68.ArrayNum) {
      uVar6 = (uint)~FStack_40.EntityIndex >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar10 = (longlong)FStack_40.EntityIndex;
    FStack_58 = TStack_68.DataPtr[lVar9].Subject;
    uVar6 = 0;
    if (FStack_40.EntityIndex < TStack_68.ArrayNum) {
      uVar6 = (uint)~FStack_40.EntityIndex >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) break;
    FStack_50 = TStack_68.DataPtr[lVar10].Object;
    pFVar8 = TArrayView<FMassEntityHandle,int>::operator[]
                       (&param_2->EntityListView,FStack_40.EntityIndex);
    FStack_48 = *pFVar8;
    if ((((FMassEntityHandle *)pFVar2->Data <= &FStack_58) &&
        (&FStack_58 <
         (FMassEntityHandle *)pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 3))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    pFVar3 = pFVar2->Data;
    pFVar8 = (FMassEntityHandle *)(pFVar3 + (longlong)iVar7 * 0x18);
    *pFVar8 = FStack_58;
    pFVar8[1] = FStack_50;
    *(FMassEntityHandle *)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) = FStack_48;
    FStack_40.EntityIndex = FStack_40.EntityIndex + 1;
    if ((((FStack_40.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((FStack_40.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (FStack_40.EntityIndex < FStack_40.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_40);
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Call @ 1472006f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMassRelationEntityDestruction::Execute'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FMassRelationFragment *pFVar9;
  longlong lVar10;
  TArrayView<FMassRelationFragment_const_,int> TStack_48;
  FMassEntityHandle FStack_38;
  FMassEntityHandle FStack_30;
  FEntityIterator FStack_28;
  
  if (*(UScriptStruct **)((longlong)param_1 + 8) == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
    ReportNotNullPtr();
  }
  FMassExecutionContext::GetFragmentView<FMassRelationFragment>
            (param_2,&TStack_48,*(UScriptStruct **)((longlong)param_1 + 8));
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_28);
  while( true ) {
    if (FStack_28.SerialNumber == 0) {
      return;
    }
    lVar8 = (longlong)FStack_28.EntityIndex;
    if (FStack_28.NumEntities <= FStack_28.EntityIndex) {
      return;
    }
    pFVar2 = *(ForAnyElementType **)param_1;
    uVar6 = 0;
    if (FStack_28.EntityIndex < TStack_48.ArrayNum) {
      uVar6 = (uint)~FStack_28.EntityIndex >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar10 = (longlong)FStack_28.EntityIndex;
    pFVar9 = TStack_48.DataPtr + lVar8;
    uVar6 = 0;
    if (FStack_28.EntityIndex < TStack_48.ArrayNum) {
      uVar6 = (uint)~FStack_28.EntityIndex >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) break;
    FStack_38 = pFVar9->Subject;
    FStack_30 = TStack_48.DataPtr[lVar10].Object;
    if ((((FMassEntityHandle *)pFVar2->Data <= &FStack_38) &&
        (&FStack_38 <
         (FMassEntityHandle *)pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 2))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    pFVar3 = pFVar2->Data;
    *(FMassEntityHandle *)(pFVar3 + (longlong)iVar7 * 0x10) = FStack_38;
    ((FMassEntityHandle *)(pFVar3 + (longlong)iVar7 * 0x10))[1] = FStack_30;
    FStack_28.EntityIndex = FStack_28.EntityIndex + 1;
    if ((((FStack_28.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((FStack_28.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (FStack_28.EntityIndex < FStack_28.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_28);
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Call @ 147200700

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassObserverManager::Initialize'::__l2::<lambda_1>,void,TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147200730;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(longlong *)param_1 != 0) {
      FMassObserverManager::DebugGatherUniqueProcessors
                ((FMassObserverManager *)(*(longlong *)param_1 + 0x288),param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_147200730:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 147200770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassEntityQuery::ParallelForEachEntityChunkInCollection'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FMassEntityQuery::ParallelForEachEntityChunkInCollection'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 147200780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassProcessingPhaseManager::Start'::__l2::<lambda_1>,void,TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  void *_Src;
  code *pcVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  int iVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong *plVar12;
  bool bVar13;
  longlong alStack_38 [2];
  
  pTVar11 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar11->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1471e3ca1;
      }
      LOCK();
      aVar8 = pTVar11->SharedReferenceCount;
      bVar13 = aVar7 == aVar8;
      if (bVar13) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar13);
    lVar4 = *(longlong *)param_1;
    if ((lVar4 != 0) && ((longlong *)(lVar4 + 0x20) != (longlong *)(lVar4 + 0x350))) {
      piVar1 = &param_2->ArrayMax;
      piVar2 = &param_2->ArrayNum;
      plVar12 = (longlong *)(lVar4 + 0x48);
      do {
        alStack_38[0] = *plVar12;
        pFVar5 = (param_2->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)alStack_38) &&
            ((FScriptContainerElement *)alStack_38 < pFVar5 + (longlong)*piVar1 * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = *piVar2;
        if (iVar9 == *piVar1) {
          iVar9 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar1);
        }
        *piVar2 = iVar9 + 1;
        *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = alStack_38[0];
        iVar9 = *(int *)(*plVar12 + 0xe8);
        _Src = *(void **)(*plVar12 + 0xe0);
        if (iVar9 < 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar13) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x9a9,L"Invalid range size: %lld");
          if (bVar13) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_1471e3e09:
          iVar10 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,iVar9,&param_2->AllocatorInstance,piVar2,piVar1);
          memcpy((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8,_Src,(longlong)iVar9 << 3)
          ;
        }
        else if (iVar9 != 0) goto LAB_1471e3e09;
        plVar3 = plVar12 + 0xc;
        plVar12 = plVar12 + 0x11;
        if (plVar3 == (longlong *)(lVar4 + 0x350)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
          return;
        }
      } while( true );
    }
  }
LAB_1471e3ca1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// Call @ 147200790

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassProcessingPhase::ExecuteTick'::__l28::<lambda_1>,void>::Call(void *param_1)

{
  FMassProcessingPhase::OnParallelExecutionDone
            (*(FMassProcessingPhase **)param_1,*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 1472007b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l12::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  undefined1 *puVar1;
  FMassEntityManager *pFVar2;
  FMassCommandBuffer *this;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  int iVar6;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar7;
  FMassEntityHandle *pFVar8;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar9;
  FMassCommandDestroyEntities *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  FLLMScope aFStackX_10 [2];
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTStackX_18;
  FObjectKey FStackX_20;
  FMassEntityHandle FStack_a8;
  FMemScope FStack_a0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> TStack_98;
  FMassRelationRoleInstanceHandle *pFStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_78;
  FEntityIterator FStack_68;
  
  pFVar2 = (param_2->EntityManager).Object;
  FStackX_20 = *(FObjectKey *)param_1;
  pTVar7 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&(pFVar2->RelationManager).RelationsDataMap,(FTypeHandle *)&FStackX_20);
  pTStackX_18 = pTVar7;
  if ((pTVar7 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_68);
  while( true ) {
    if ((FStack_68.SerialNumber == 0) || (FStack_68.NumEntities <= FStack_68.EntityIndex)) {
      return;
    }
    pFVar8 = TArrayView<FMassEntityHandle,int>::operator[]
                       (&param_2->EntityListView,FStack_68.EntityIndex);
    FStack_a8 = *pFVar8;
    pTVar9 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                     *)&pTVar7->field_0xc0,&FStack_a8);
    if ((pTVar9 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0)
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 8);
    this = (param_2->DeferredCommandBuffer).Object;
    pFStack_88 = *(FMassRelationRoleInstanceHandle **)(&pTVar9->field_0x8 + uVar11 * 0x10);
    iVar6 = *(int *)(&pTVar9->field_0x10 + uVar11 * 0x10);
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TStack_78._12_4_ = uStack_7c;
    TStack_78.ArrayNum = iVar6;
    TStack_78.DataPtr = pFStack_88;
    TStack_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_98.ArrayNum = 0;
    TStack_98.ArrayMax = 0;
    iStack_80 = iVar6;
    Mass::FRelationManager::GetRelationEntities(&pFVar2->RelationManager,&TStack_78,&TStack_98);
    if ((this->bIsFlushing != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFlushing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x77,
                           L"Trying to push commands is not supported while the given buffer is being flushed"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DVar5 = GetCurrentThreadId();
    if ((this->OwnerThreadId != DVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x77,
                           L"Commands can be pushed only in the same thread where the command buffer was created."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name122,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (aFStackX_10,
               `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
               ::__l2::LLMScope_Name122,false,None,Default,true);
    FMemScope::FMemScope
              (&FStack_a0,
               &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                ::__l2::LLMScope_Name122,true);
    pFVar10 = FMassCommandBuffer::CreateOrAddCommand<FMassCommandDestroyEntities>(this);
    LOCK();
    puVar1 = &pFVar10->field_0x18;
    iVar6 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + 0x100000;
    UNLOCK();
    if (((iVar6 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x72,
                           L"Acquiring a write access while there are ongoing read or write access")
       , bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar1 = &pFVar10->field_0x20;
    if (((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)puVar1 == &TStack_98) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar12 = (longlong)TStack_98.ArrayNum;
    if (TStack_98.ArrayNum != 0) {
      iVar6 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,TStack_98.ArrayNum,(ForAnyElementType *)puVar1,
                         (int *)&pFVar10->field_0x28,(int *)&pFVar10->field_0x2c);
      memmove((void *)(*(longlong *)puVar1 + (longlong)iVar6 * 8),TStack_98.AllocatorInstance.Data,
              lVar12 << 3);
      TStack_98._8_8_ = TStack_98._8_8_ & 0xffffffff00000000;
    }
    pFVar10->field_0x8 = 1;
    LOCK();
    puVar1 = &pFVar10->field_0x18;
    iVar6 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -0x100000;
    UNLOCK();
    if (((iVar6 != 0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x7d,
                           L"Another thread asked to have a read or write access during this write access"
                          ), bVar4)) break;
    this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
    FMemScope::~FMemScope(&FStack_a0);
    FLLMScope::~FLLMScope(aFStackX_10);
    if (TStack_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_98.AllocatorInstance.Data);
    }
    *(undefined4 *)(&pTVar9->field_0x10 + uVar11 * 0x10) = 0;
    if (*(int *)(&pTVar9->field_0x14 + uVar11 * 0x10) != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(&pTVar9->field_0x8 + uVar11 * 0x10),0,
                 (int *)(&pTVar9->field_0x14 + uVar11 * 0x10));
    }
    pTVar7 = pTStackX_18;
    FStack_68.EntityIndex = FStack_68.EntityIndex + 1;
    if ((((FStack_68.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((FStack_68.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (FStack_68.EntityIndex < FStack_68.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_68);
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Call @ 1472007c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassProcessingPhaseManager::Start'::__l2::<lambda_2>,void,TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  undefined1 auStackX_8 [8];
  
  pTVar11 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar11->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1471e4ef5;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar12 = aVar5 == aVar6;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar12);
    lVar3 = *(longlong *)param_1;
    if (lVar3 != 0) {
      lVar10 = lVar3 + 0x350;
      if (lVar10 != lVar3 + 0x4d0) {
        pTVar9 = (TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x360);
        do {
          pFVar8 = (pTVar9->AllocatorInstance).Data;
          iVar2 = pTVar9->ArrayNum;
          pFVar1 = pFVar8 + (longlong)iVar2 * 8;
          while( true ) {
            if (pTVar9->ArrayNum != iVar2) {
              auStackX_8[0] = 0;
              `TCheckedPointerIterator<TObjectPtr<UMassProcessor>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(auStackX_8);
            }
            if (pFVar8 == pFVar1) break;
            pFVar8 = pFVar8 + 8;
          }
          if ((param_2 == pTVar9) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar2 = pTVar9->ArrayNum;
          if (iVar2 != 0) {
            iVar7 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,iVar2,&param_2->AllocatorInstance,&param_2->ArrayNum,
                               &param_2->ArrayMax);
            memcpy((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8,
                   (pTVar9->AllocatorInstance).Data,(longlong)iVar2 << 3);
          }
          lVar10 = lVar10 + 0x40;
          pTVar9 = pTVar9 + 4;
        } while (lVar10 != lVar3 + 0x4d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        return;
      }
    }
  }
LAB_1471e4ef5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// Call @ 1472007d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::FEntityBuilder::Commit'::__l56::<lambda_2>,void,FMassEntityManager_&>
::Call(void *param_1,FMassEntityManager *param_2)

{
  int iVar1;
  int iVar2;
  FPendingRelationParams *pFVar3;
  FInstancedStruct *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<UE::Mass::FEntityBuilder::FPendingRelationParams_const_,int> TStack_28;
  TArrayView<FInstancedStruct_const_,int> TStack_18;
  
  pFVar3 = *(FPendingRelationParams **)((longlong)param_1 + 0x90);
  iVar1 = *(int *)((longlong)param_1 + 0x98);
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = *(FInstancedStruct **)((longlong)param_1 + 0x80);
  iVar2 = *(int *)((longlong)param_1 + 0x88);
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  TStack_28._12_4_ = uStack_3c;
  TStack_28.ArrayNum = iVar1;
  TStack_18._12_4_ = uStack_2c;
  TStack_18.ArrayNum = iVar2;
  TStack_28.DataPtr = pFVar3;
  TStack_18.DataPtr = pFVar4;
  Mass::FEntityBuilder::CreateEntityImpl
            (param_2,*(FMassEntityHandle *)param_1,
             (FMassArchetypeHandle *)((longlong)param_1 + 0x70),
             (FMassArchetypeSharedFragmentValues *)((longlong)param_1 + 8),&TStack_18,&TStack_28);
  return;
}

// Call @ 1472007e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l14::<lambda_2>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  undefined1 *puVar1;
  FMassEntityManager *pFVar2;
  FMassCommandBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  DWORD DVar6;
  int iVar7;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar8;
  FMassEntityHandle *pFVar9;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar10;
  FMassCommandDestroyEntities *pFVar11;
  FRelationManager *this;
  longlong lVar12;
  FLLMScope aFStackX_8 [2];
  FMassExecutionContext *pFStackX_10;
  FLLMScope aFStackX_18 [2];
  FRelationManager *pFStackX_20;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> TStack_f8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> TStack_e8;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTStack_d8;
  FEntityIterator FStack_d0;
  FObjectKey FStack_b0;
  FMassEntityHandle FStack_a8;
  FMemScope FStack_a0;
  FMemScope aFStack_98 [2];
  FMassRelationRoleInstanceHandle *pFStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  FMassRelationRoleInstanceHandle *pFStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_68;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_58;
  
  pFVar2 = (param_2->EntityManager).Object;
  FStack_b0 = *(FObjectKey *)param_1;
  this = &pFVar2->RelationManager;
  pFStackX_10 = param_2;
  pFStackX_20 = this;
  pTVar8 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&(pFVar2->RelationManager).RelationsDataMap,(FTypeHandle *)&FStack_b0);
  pTStack_d8 = pTVar8;
  if ((pTVar8 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_d0);
  while( true ) {
    if ((FStack_d0.SerialNumber == 0) || (FStack_d0.NumEntities <= FStack_d0.EntityIndex)) {
      return;
    }
    pFVar9 = TArrayView<FMassEntityHandle,int>::operator[]
                       (&param_2->EntityListView,FStack_d0.EntityIndex);
    FStack_a8 = *pFVar9;
    pTVar10 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                      *)&pTVar8->field_0xc0,&FStack_a8);
    if ((pTVar10 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0)
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFStack_88 = *(FMassRelationRoleInstanceHandle **)&pTVar10->field_0x8;
    iVar7 = *(int *)&pTVar10->field_0x10;
    pFVar3 = (param_2->DeferredCommandBuffer).Object;
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TStack_68._12_4_ = uStack_7c;
    TStack_68.ArrayNum = iVar7;
    TStack_68.DataPtr = pFStack_88;
    TStack_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_f8.ArrayNum = 0;
    TStack_f8.ArrayMax = 0;
    iStack_80 = iVar7;
    Mass::FRelationManager::GetRelationEntities(this,&TStack_68,&TStack_f8);
    if ((pFVar3->bIsFlushing != false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFlushing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x77,
                           L"Trying to push commands is not supported while the given buffer is being flushed"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    DVar6 = GetCurrentThreadId();
    if ((pFVar3->OwnerThreadId != DVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x77,
                           L"Commands can be pushed only in the same thread where the command buffer was created."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name122,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (aFStackX_8,
               `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
               ::__l2::LLMScope_Name122,false,None,Default,true);
    FMemScope::FMemScope
              (&FStack_a0,
               &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                ::__l2::LLMScope_Name122,true);
    pFVar11 = FMassCommandBuffer::CreateOrAddCommand<FMassCommandDestroyEntities>(pFVar3);
    LOCK();
    puVar1 = &pFVar11->field_0x18;
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + 0x100000;
    UNLOCK();
    if (((iVar7 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x72,
                           L"Acquiring a write access while there are ongoing read or write access")
       , bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar1 = &pFVar11->field_0x20;
    if (((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)puVar1 == &TStack_f8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar12 = (longlong)TStack_f8.ArrayNum;
    if (TStack_f8.ArrayNum != 0) {
      iVar7 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,TStack_f8.ArrayNum,(ForAnyElementType *)puVar1,
                         (int *)&pFVar11->field_0x28,(int *)&pFVar11->field_0x2c);
      memmove((void *)(*(longlong *)puVar1 + (longlong)iVar7 * 8),TStack_f8.AllocatorInstance.Data,
              lVar12 << 3);
      TStack_f8._8_8_ = TStack_f8._8_8_ & 0xffffffff00000000;
    }
    pFVar11->field_0x8 = 1;
    LOCK();
    puVar1 = &pFVar11->field_0x18;
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -0x100000;
    UNLOCK();
    if (((iVar7 != 0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x7d,
                           L"Another thread asked to have a read or write access during this write access"
                          ), bVar5)) break;
    pFVar3->ActiveCommandsCounter = pFVar3->ActiveCommandsCounter + 1;
    FMemScope::~FMemScope(&FStack_a0);
    FLLMScope::~FLLMScope(aFStackX_8);
    if (TStack_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_f8.AllocatorInstance.Data);
    }
    *(undefined4 *)&pTVar10->field_0x10 = 0;
    if (*(int *)&pTVar10->field_0x14 != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&pTVar10->field_0x8,0,(int *)&pTVar10->field_0x14);
    }
    pFStack_78 = *(FMassRelationRoleInstanceHandle **)&pTVar10->field_0x18;
    iVar7 = *(int *)&pTVar10->field_0x20;
    pFVar3 = (pFStackX_10->DeferredCommandBuffer).Object;
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TStack_58._12_4_ = uStack_6c;
    TStack_58.ArrayNum = iVar7;
    TStack_58.DataPtr = pFStack_78;
    TStack_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_e8.ArrayNum = 0;
    TStack_e8.ArrayMax = 0;
    iStack_70 = iVar7;
    Mass::FRelationManager::GetRelationEntities(pFStackX_20,&TStack_58,&TStack_e8);
    if ((pFVar3->bIsFlushing != false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFlushing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x77,
                           L"Trying to push commands is not supported while the given buffer is being flushed"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    DVar6 = GetCurrentThreadId();
    if ((pFVar3->OwnerThreadId != DVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x77,
                           L"Commands can be pushed only in the same thread where the command buffer was created."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name122,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (aFStackX_18,
               `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
               ::__l2::LLMScope_Name122,false,None,Default,true);
    FMemScope::FMemScope
              (aFStack_98,
               &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                ::__l2::LLMScope_Name122,true);
    pFVar11 = FMassCommandBuffer::CreateOrAddCommand<FMassCommandDestroyEntities>(pFVar3);
    LOCK();
    puVar1 = &pFVar11->field_0x18;
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + 0x100000;
    UNLOCK();
    if (((iVar7 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x72,
                           L"Acquiring a write access while there are ongoing read or write access")
       , bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar1 = &pFVar11->field_0x20;
    if (((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)puVar1 == &TStack_e8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar12 = (longlong)TStack_e8.ArrayNum;
    if (TStack_e8.ArrayNum != 0) {
      iVar7 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,TStack_e8.ArrayNum,(ForAnyElementType *)puVar1,
                         (int *)&pFVar11->field_0x28,(int *)&pFVar11->field_0x2c);
      memmove((void *)(*(longlong *)puVar1 + (longlong)iVar7 * 8),TStack_e8.AllocatorInstance.Data,
              lVar12 << 3);
      TStack_e8._8_8_ = TStack_e8._8_8_ & 0xffffffff00000000;
    }
    pFVar11->field_0x8 = 1;
    LOCK();
    puVar1 = &pFVar11->field_0x18;
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -0x100000;
    UNLOCK();
    if (((iVar7 != 0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x7d,
                           L"Another thread asked to have a read or write access during this write access"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3->ActiveCommandsCounter = pFVar3->ActiveCommandsCounter + 1;
    FMemScope::~FMemScope(aFStack_98);
    FLLMScope::~FLLMScope(aFStackX_18);
    if (TStack_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_e8.AllocatorInstance.Data);
    }
    *(undefined4 *)&pTVar10->field_0x20 = 0;
    if (*(int *)&pTVar10->field_0x24 != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&pTVar10->field_0x18,0,(int *)&pTVar10->field_0x24);
    }
    pTVar8 = pTStack_d8;
    this = pFStackX_20;
    param_2 = pFStackX_10;
    FStack_d0.EntityIndex = FStack_d0.EntityIndex + 1;
    if ((((FStack_d0.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((FStack_d0.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (FStack_d0.EntityIndex < FStack_d0.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_d0);
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Call @ 1472007f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMassCompositeProcessor::DispatchProcessorTasks'::__l2::<lambda_3>,void>::Call
          (void *param_1)

{
  return;
}

// Call @ 147200800

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l17::<lambda_3>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  uint uVar1;
  int iVar2;
  FMassEntityManager *pFVar3;
  FMassCommandBuffer *this;
  code *pcVar4;
  bool bVar5;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar6;
  FMassEntityHandle *pFVar7;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar8;
  FObjectKey FStackX_8;
  FMassEntityHandle FStackX_10;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> TStack_c8;
  FEntityIterator FStack_b8;
  FMassRelationRoleInstanceHandle *pFStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  FMassRelationRoleInstanceHandle *pFStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  FMassEntityHandle *pFStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_68;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_58;
  TArrayView<FMassEntityHandle_const_,int> TStack_48;
  
  pFVar3 = (param_2->EntityManager).Object;
  FStackX_8 = *(FObjectKey *)param_1;
  pTVar6 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&(pFVar3->RelationManager).RelationsDataMap,(FTypeHandle *)&FStackX_8);
  if ((pTVar6 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TStack_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_c8.ArrayNum = 0;
  TStack_c8.ArrayMax = 0;
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_b8);
  while( true ) {
    if ((FStack_b8.SerialNumber == 0) || (FStack_b8.NumEntities <= FStack_b8.EntityIndex)) {
      iVar2 = TStack_c8.ArrayNum;
      this = (param_2->DeferredCommandBuffer).Object;
      pFStack_78 = (FMassEntityHandle *)TStack_c8.AllocatorInstance.Data;
      if ((TStack_c8.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iStack_70 = iVar2;
      TStack_48._12_4_ = uStack_6c;
      TStack_48.ArrayNum = iVar2;
      TStack_48.DataPtr = pFStack_78;
      FMassCommandBuffer::DestroyEntities(this,&TStack_48);
      if (TStack_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_c8.AllocatorInstance.Data);
      }
      return;
    }
    pFVar7 = TArrayView<FMassEntityHandle,int>::operator[]
                       (&param_2->EntityListView,FStack_b8.EntityIndex);
    FStackX_10 = *pFVar7;
    pTVar8 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                     *)&pTVar6->field_0xc0,&FStackX_10);
    if ((pTVar8 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0)
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar1 = *(uint *)((longlong)param_1 + 8);
    pFStack_98 = *(FMassRelationRoleInstanceHandle **)(&pTVar8->field_0x8 + (ulonglong)uVar1 * 0x10)
    ;
    iVar2 = *(int *)(&pTVar8->field_0x10 + (ulonglong)uVar1 * 0x10);
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) break;
    TStack_68._12_4_ = uStack_8c;
    TStack_68.ArrayNum = iVar2;
    TStack_68.DataPtr = pFStack_98;
    iStack_90 = iVar2;
    Mass::FRelationManager::GetRelationEntities(&pFVar3->RelationManager,&TStack_68,&TStack_c8);
    pFStack_88 = *(FMassRelationRoleInstanceHandle **)(&pTVar8->field_0x8 + (ulonglong)uVar1 * 0x10)
    ;
    iVar2 = *(int *)(&pTVar8->field_0x10 + (ulonglong)uVar1 * 0x10);
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TStack_58._12_4_ = uStack_7c;
    TStack_58.ArrayNum = iVar2;
    TStack_58.DataPtr = pFStack_88;
    iStack_80 = iVar2;
    Mass::FRelationManager::GetRoleEntities(&pFVar3->RelationManager,&TStack_58,&TStack_c8);
    *(undefined4 *)(&pTVar8->field_0x10 + (ulonglong)uVar1 * 0x10) = 0;
    if (*(int *)(&pTVar8->field_0x14 + (ulonglong)uVar1 * 0x10) != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(&pTVar8->field_0x8 + (ulonglong)uVar1 * 0x10),0,
                 (int *)(&pTVar8->field_0x14 + (ulonglong)uVar1 * 0x10));
    }
    FStack_b8.EntityIndex = FStack_b8.EntityIndex + 1;
    if ((((FStack_b8.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((FStack_b8.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (FStack_b8.EntityIndex < FStack_b8.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_b8);
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Call @ 147200810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassEntityQuery::ParallelForEachEntityChunk'::__l114::<lambda_3>,void,int>::
Call(void *param_1,int *param_2)

{
  `FMassEntityQuery::ParallelForEachEntityChunk'::__l114::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 147200820

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l19::<lambda_4>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  FMassEntityManager *pFVar2;
  FMassCommandBuffer *this;
  code *pcVar3;
  bool bVar4;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar5;
  FMassEntityHandle *pFVar6;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar7;
  FRelationManager *this_00;
  FObjectKey FStackX_8;
  FMassEntityHandle FStackX_10;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> TStack_f8;
  FEntityIterator FStack_e8;
  FMassRelationRoleInstanceHandle *pFStack_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FMassRelationRoleInstanceHandle *pFStack_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FMassRelationRoleInstanceHandle *pFStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FMassRelationRoleInstanceHandle *pFStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  FMassEntityHandle *pFStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_78;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_68;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_58;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_48;
  TArrayView<FMassEntityHandle_const_,int> TStack_38;
  
  pFVar2 = (param_2->EntityManager).Object;
  FStackX_8 = *(FObjectKey *)param_1;
  this_00 = &pFVar2->RelationManager;
  pTVar5 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&(pFVar2->RelationManager).RelationsDataMap,(FTypeHandle *)&FStackX_8);
  if ((pTVar5 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TStack_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_f8.ArrayNum = 0;
  TStack_f8.ArrayMax = 0;
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_e8);
  while( true ) {
    if ((FStack_e8.SerialNumber == 0) || (FStack_e8.NumEntities <= FStack_e8.EntityIndex)) {
      iVar1 = TStack_f8.ArrayNum;
      this = (param_2->DeferredCommandBuffer).Object;
      pFStack_88 = (FMassEntityHandle *)TStack_f8.AllocatorInstance.Data;
      if ((TStack_f8.ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_80 = iVar1;
      TStack_38._12_4_ = uStack_7c;
      TStack_38.ArrayNum = iVar1;
      TStack_38.DataPtr = pFStack_88;
      FMassCommandBuffer::DestroyEntities(this,&TStack_38);
      if (TStack_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_f8.AllocatorInstance.Data);
      }
      return;
    }
    pFVar6 = TArrayView<FMassEntityHandle,int>::operator[]
                       (&param_2->EntityListView,FStack_e8.EntityIndex);
    FStackX_10 = *pFVar6;
    pTVar7 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                     *)&pTVar5->field_0xc0,&FStackX_10);
    if ((pTVar7 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0)
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFStack_c8 = *(FMassRelationRoleInstanceHandle **)&pTVar7->field_0x8;
    iVar1 = *(int *)&pTVar7->field_0x10;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) break;
    TStack_78._12_4_ = uStack_bc;
    TStack_78.ArrayNum = iVar1;
    TStack_78.DataPtr = pFStack_c8;
    iStack_c0 = iVar1;
    Mass::FRelationManager::GetRelationEntities(this_00,&TStack_78,&TStack_f8);
    pFStack_b8 = *(FMassRelationRoleInstanceHandle **)&pTVar7->field_0x8;
    iVar1 = *(int *)&pTVar7->field_0x10;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TStack_68._12_4_ = uStack_ac;
    TStack_68.ArrayNum = iVar1;
    TStack_68.DataPtr = pFStack_b8;
    iStack_b0 = iVar1;
    Mass::FRelationManager::GetRoleEntities(this_00,&TStack_68,&TStack_f8);
    *(undefined4 *)&pTVar7->field_0x10 = 0;
    if (*(int *)&pTVar7->field_0x14 != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&pTVar7->field_0x8,0,(int *)&pTVar7->field_0x14);
    }
    pFStack_a8 = *(FMassRelationRoleInstanceHandle **)&pTVar7->field_0x18;
    iVar1 = *(int *)&pTVar7->field_0x20;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TStack_58._12_4_ = uStack_9c;
    TStack_58.ArrayNum = iVar1;
    TStack_58.DataPtr = pFStack_a8;
    iStack_a0 = iVar1;
    Mass::FRelationManager::GetRelationEntities(this_00,&TStack_58,&TStack_f8);
    pFStack_98 = *(FMassRelationRoleInstanceHandle **)&pTVar7->field_0x18;
    iVar1 = *(int *)&pTVar7->field_0x20;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TStack_48._12_4_ = uStack_8c;
    TStack_48.ArrayNum = iVar1;
    TStack_48.DataPtr = pFStack_98;
    iStack_90 = iVar1;
    Mass::FRelationManager::GetRoleEntities(this_00,&TStack_48,&TStack_f8);
    *(undefined4 *)&pTVar7->field_0x20 = 0;
    if (*(int *)&pTVar7->field_0x24 != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&pTVar7->field_0x18,0,(int *)&pTVar7->field_0x24);
    }
    FStack_e8.EntityIndex = FStack_e8.EntityIndex + 1;
    if ((((FStack_e8.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((FStack_e8.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (FStack_e8.EntityIndex < FStack_e8.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_e8);
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Call @ 147200830

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l9::<lambda_5>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  FMassEntityManager *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar6;
  FMassEntityHandle *pFVar7;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar8;
  undefined8 *puVar9;
  FRelationManager *this;
  FObjectKey FStackX_8;
  FMassEntityHandle FStackX_10;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> TStack_168;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> TStack_158;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> TStack_148;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> TStack_138;
  FEntityIterator FStack_128;
  FMassEntityHandle *pFStack_108;
  int iStack_100;
  int iStack_fc;
  FMassRelationRoleInstanceHandle *pFStack_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FMassRelationRoleInstanceHandle *pFStack_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FMassRelationRoleInstanceHandle *pFStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FMassRelationRoleInstanceHandle *pFStack_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FMassEntityHandle *pFStack_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> TStack_a8;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_98;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_88;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_78;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> TStack_68;
  TArrayView<FMassEntityHandle,int> TStack_58;
  TArrayView<FMassEntityHandle,int> TStack_48;
  
  pFVar2 = (param_2->EntityManager).Object;
  FStackX_8 = *(FObjectKey *)param_1;
  this = &pFVar2->RelationManager;
  pTVar6 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&(pFVar2->RelationManager).RelationsDataMap,(FTypeHandle *)&FStackX_8);
  if ((pTVar6 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_128);
  do {
    if ((FStack_128.SerialNumber == 0) || (FStack_128.NumEntities <= FStack_128.EntityIndex)) {
      return;
    }
    pFVar7 = TArrayView<FMassEntityHandle,int>::operator[]
                       (&param_2->EntityListView,FStack_128.EntityIndex);
    FStackX_10 = *pFVar7;
    pTVar8 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                     *)&pTVar6->field_0xc0,&FStackX_10);
    puVar9 = (undefined8 *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    if (puVar9 != (undefined8 *)0x0) {
      pFStack_f8 = (FMassRelationRoleInstanceHandle *)*puVar9;
      iVar1 = *(int *)(puVar9 + 1);
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TStack_98._12_4_ = uStack_ec;
      TStack_98.ArrayNum = iVar1;
      TStack_98.DataPtr = pFStack_f8;
      TStack_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_148.ArrayNum = 0;
      TStack_148.ArrayMax = 0;
      iStack_f0 = iVar1;
      Mass::FRelationManager::GetRelationEntities(this,&TStack_98,&TStack_148);
      FMassCommandBuffer::DestroyEntities((param_2->DeferredCommandBuffer).Object,&TStack_148);
      pFStack_e8 = (FMassRelationRoleInstanceHandle *)*puVar9;
      iVar1 = *(int *)(puVar9 + 1);
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TStack_88._12_4_ = uStack_dc;
      TStack_88.ArrayNum = iVar1;
      TStack_88.DataPtr = pFStack_e8;
      TStack_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_158.ArrayNum = 0;
      TStack_158.ArrayMax = 0;
      iStack_e0 = iVar1;
      Mass::FRelationManager::GetRoleEntities(this,&TStack_88,&TStack_158);
      if (TStack_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_148.AllocatorInstance.Data);
      }
      pFStack_d8 = (FMassRelationRoleInstanceHandle *)puVar9[2];
      iVar1 = *(int *)(puVar9 + 3);
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TStack_78._12_4_ = uStack_cc;
      TStack_78.ArrayNum = iVar1;
      TStack_78.DataPtr = pFStack_d8;
      TStack_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_138.ArrayNum = 0;
      TStack_138.ArrayMax = 0;
      iStack_d0 = iVar1;
      Mass::FRelationManager::GetRelationEntities(this,&TStack_78,&TStack_138);
      FMassCommandBuffer::DestroyEntities((param_2->DeferredCommandBuffer).Object,&TStack_138);
      pFStack_c8 = (FMassRelationRoleInstanceHandle *)puVar9[2];
      iVar1 = *(int *)(puVar9 + 3);
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TStack_68._12_4_ = uStack_bc;
      TStack_68.ArrayNum = iVar1;
      TStack_68.DataPtr = pFStack_c8;
      TStack_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_168.ArrayNum = 0;
      TStack_168.ArrayMax = 0;
      iStack_c0 = iVar1;
      Mass::FRelationManager::GetRoleEntities(this,&TStack_68,&TStack_168);
      if (TStack_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_138.AllocatorInstance.Data);
      }
      FVar4.Data = TStack_168.AllocatorInstance.Data;
      iVar1 = TStack_168.ArrayNum;
      if ((TStack_168.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_100 = iVar1;
      iVar1 = TStack_158.ArrayNum;
      pFStack_108 = (FMassEntityHandle *)FVar4.Data;
      iStack_fc = TStack_a8.ArrayMax;
      pFStack_b8 = (FMassEntityHandle *)TStack_158.AllocatorInstance.Data;
      if ((TStack_158.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TStack_58._12_4_ = iStack_fc;
      TStack_58.ArrayNum = iStack_100;
      iStack_b0 = iVar1;
      TStack_48._12_4_ = uStack_ac;
      TStack_48.ArrayNum = iVar1;
      TStack_58.DataPtr = pFStack_108;
      TStack_48.DataPtr = pFStack_b8;
      Mass::FRelationManager::CreateRelationInstances
                (this,&TStack_a8,(TObjectKey<UStruct_const_>)*(TObjectKey<UStruct_const_> *)param_1,
                 &TStack_48,&TStack_58);
      if (TStack_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_a8.AllocatorInstance.Data);
      }
      if (TStack_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_168.AllocatorInstance.Data);
      }
      if (TStack_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_158.AllocatorInstance.Data);
      }
    }
    FStack_128.EntityIndex = FStack_128.EntityIndex + 1;
    if ((((FStack_128.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((FStack_128.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (FStack_128.EntityIndex < FStack_128.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_128);
    }
  } while( true );
}

