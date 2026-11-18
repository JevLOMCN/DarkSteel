// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// FMassArchetypeEntityCollectionWithPayload @ 1471d7560

FMassArchetypeEntityCollectionWithPayload * __thiscall
FMassArchetypeEntityCollectionWithPayload::FMassArchetypeEntityCollectionWithPayload
          (FMassArchetypeEntityCollectionWithPayload *this,FMassArchetypeHandle *param_1,
          TStridedView<int_const_,int> *param_2,FMassGenericPayloadViewSlice *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  TStridedView<int_const_,int> local_18;
  
  uVar5 = 0;
  (this->Entities).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entities).Ranges.ArrayNum = 0;
  (this->Entities).Ranges.ArrayMax = 0;
  (this->Entities).Archetype.ArchetypeHandle.DataPtr.Object = (param_1->DataPtr).Object;
  pTVar1 = (param_1->DataPtr).SharedReferenceCount.ReferenceController;
  (this->Entities).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
       pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar2 = (this->Entities).Archetype.ArchetypeHandle.DataPtr.Object;
  if (pFVar2 != (FMassArchetypeData *)0x0) {
    uVar5 = pFVar2->EntityOrderVersion;
  }
  (this->Entities).Archetype.HandleVersion = uVar5;
  iVar3 = (param_3->Source).Content.ArrayNum;
  uVar4 = *(undefined4 *)&(param_3->Source).Content.field_0xc;
  (this->PayloadSlice).Source.Content.DataPtr = (param_3->Source).Content.DataPtr;
  (this->PayloadSlice).Source.Content.ArrayNum = iVar3;
  *(undefined4 *)&(this->PayloadSlice).Source.Content.field_0xc = uVar4;
  local_18.FirstElementPtr = param_2->FirstElementPtr;
  local_18.BytesBetweenElements = param_2->BytesBetweenElements;
  local_18.NumElements = param_2->NumElements;
  iVar3 = param_3->Count;
  (this->PayloadSlice).StartIndex = param_3->StartIndex;
  (this->PayloadSlice).Count = iVar3;
  FMassArchetypeEntityCollection::BuildEntityRanges(&this->Entities,&local_18);
  return this;
}

// operator() @ 1471e2f10

bool __thiscall
`FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload'::__l2::<lambda_1>::
operator()(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar11 = (longlong)param_2;
  if (**(char **)((longlong)this + 8) == '\0') {
    plVar5 = *(longlong **)this;
    uVar10 = 0;
    if (param_1 < (int)plVar5[1]) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    piVar1 = (int *)(*plVar5 + (longlong)param_1 * 8);
    plVar5 = *(longlong **)this;
    uVar10 = 0;
    if (param_2 < (int)plVar5[1]) {
      uVar10 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    lVar6 = *plVar5;
    if ((*piVar1 != *(int *)(lVar6 + lVar11 * 8)) || (piVar1[1] != *(int *)(lVar6 + lVar11 * 8 + 4))
       ) {
      uVar9 = 0;
      goto LAB_1471e3025;
    }
  }
  uVar9 = 1;
LAB_1471e3025:
  **(undefined1 **)((longlong)this + 8) = uVar9;
  plVar5 = *(longlong **)this;
  uVar10 = 0;
  if (param_2 < (int)plVar5[1]) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  piVar1 = (int *)(*plVar5 + lVar11 * 8);
  plVar5 = *(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  piVar2 = (int *)(*plVar5 + (longlong)param_1 * 8);
  iVar3 = *piVar1;
  iVar4 = *piVar2;
  if ((iVar3 < iVar4) || ((iVar4 == iVar3 && (piVar2[1] < piVar1[1])))) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}

// CreateEntityRangesWithPayload @ 14720a320

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload
          (FMassEntityManager *param_1,TArrayView<FMassEntityHandle_const_,int> *param_2,
          EDuplicatesHandling param_3,FMassGenericPayloadView *param_4,
          TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_> *param_5)

{
  atomic<int> *paVar1;
  int *piVar2;
  FMassEntityHandle *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMassArchetypeData *pFVar5;
  FMassArchetypeEntityCollection *pFVar6;
  code *pcVar7;
  FStructArrayView *pFVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  IEntityStorageInterface *pIVar16;
  longlong *plVar17;
  uint *puVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  FStructArrayView *pFVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  bool bVar29;
  bool local_148;
  char local_147;
  TArray<_public:_static_void___cdecl_FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload(FMassEntityManager_const_&,TArrayView<FMassEntityHandle_const_,int>,FMassArchetypeEntityCollection::EDuplicatesHandling,FMassGenericPayloadView,TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>_&)_::_2_::FEntityInArchetype,TSizedDefaultAllocator<32>_>
  local_140;
  StorageSelector local_130;
  StorageSelector local_12f;
  undefined1 local_12e [6];
  ForAnyElementType local_128;
  undefined8 local_120;
  FArchetypeInfo local_118;
  FMassArchetypeEntityCollection local_100;
  FStructArrayView *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  int iStack_ac;
  <lambda_2> local_a8;
  <lambda_1> local_98;
  TStridedView<int_const_,int> local_88 [2];
  uint local_68;
  undefined4 uStack_64;
  
  bVar29 = CpuChannel->Enabled < 0;
  if (bVar29) {
    local_147 = '\0';
  }
  else {
    local_147 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId310,"Mass_CreateEntityRangesWithPayload",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
               ,0x136);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId310);
  }
  if (((param_4->Content).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Payload.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                          ,0x138,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar24 = (param_4->Content).DataPtr;
  pFVar8 = pFVar24 + (param_4->Content).ArrayNum;
  for (; pFVar24 != pFVar8; pFVar24 = pFVar24 + 1) {
    if ((param_2->ArrayNum != pFVar24->ArrayNum) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Entities.Num() == Element.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                            ,0x13b,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar15 = param_2->ArrayNum;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar15,&local_140.AllocatorInstance,&local_140.ArrayNum,&local_140.ArrayMax);
  uVar27 = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  cVar12 = !bVar29;
  if (0 < iVar15) {
    lVar26 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar27 < iVar15) {
        uVar13 = ~uVar27 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar3 = param_2->DataPtr;
      bVar29 = FMassEntityManager::IsEntityValid
                         (param_1,*(FMassEntityHandle *)((longlong)&pFVar3->Index + lVar26));
      if (bVar29) {
        uVar25 = *(ulonglong *)((longlong)&pFVar3->Index + lVar26);
        local_130 = (StorageSelector)0x0;
        pIVar16 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                    ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])
                            (&local_130,&param_1->EntityStorage);
        cVar12 = (**(code **)((longlong)*pIVar16 + 0x48))(pIVar16,uVar25 & 0xffffffff);
        if ((cVar12 == '\0') &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("GetEntityStorageInterface().IsValidIndex(Entity.Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                                ,0x21d,L""), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_12f = (StorageSelector)0x0;
        pIVar16 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                    ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])
                            (&local_12f,&param_1->EntityStorage);
        plVar17 = (longlong *)(**(code **)((longlong)*pIVar16 + 0x20))(pIVar16,uVar25 & 0xffffffff);
        pTVar4 = (TReferenceControllerBase<1> *)plVar17[1];
        pFVar5 = (FMassArchetypeData *)*plVar17;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          paVar1 = &pTVar4->SharedReferenceCount;
          LOCK();
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
          LOCK();
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
        }
        for (FVar20.Data = local_128.Data;
            (FArchetypeInfo *)FVar20.Data !=
            (FArchetypeInfo *)(local_128.Data + (longlong)(int)(uint)local_120 * 0x18);
            FVar20.Data = FVar20.Data + 0x18) {
          if ((((FArchetypeInfo *)FVar20.Data)->Archetype).DataPtr.Object == pFVar5) {
            lVar19 = ((longlong)FVar20.Data - (longlong)local_128.Data) / 6 +
                     ((longlong)FVar20.Data - (longlong)local_128.Data >> 0x3f);
            uVar25 = (lVar19 >> 2) - (lVar19 >> 0x3f);
            goto LAB_14720a5d9;
          }
        }
        uVar25 = 0xffffffff;
LAB_14720a5d9:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if ((int)uVar25 == -1) {
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_118.Count = 0;
          local_118.Archetype.DataPtr.Object = pFVar5;
          local_118.Archetype.DataPtr.SharedReferenceCount.ReferenceController = pTVar4;
          if (((local_128.Data <= &local_118) &&
              (&local_118 <
               (FArchetypeInfo *)(local_128.Data + (longlong)(int)local_120._4_4_ * 0x18))) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar29)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar13 = (uint)local_120;
          if ((uint)local_120 == local_120._4_4_) {
            uVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_128,(int *)((longlong)&local_120 + 4));
          }
          uVar25 = (ulonglong)uVar13;
          local_120 = CONCAT44(local_120._4_4_,uVar13 + 1);
          lVar19 = (longlong)(int)uVar13;
          *(FMassArchetypeData **)&local_128.Data[lVar19 * 0x18].field_0x0 =
               local_118.Archetype.DataPtr.Object;
          *(TReferenceControllerBase<1> **)(local_128.Data + lVar19 * 0x18 + 8) =
               local_118.Archetype.DataPtr.SharedReferenceCount.ReferenceController;
          local_118.Archetype.DataPtr.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_118.Archetype.DataPtr.Object = (FMassArchetypeData *)0x0;
          *(int *)(local_128.Data + lVar19 * 0x18 + 0x10) = local_118.Count;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        uVar22 = (uint)uVar25;
        uVar13 = 0;
        if ((int)uVar22 < (int)(uint)local_120) {
          uVar13 = ~uVar22 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(int *)(local_128.Data + (longlong)(int)uVar22 * 0x18 + 0x10) =
             *(int *)(local_128.Data + (longlong)(int)uVar22 * 0x18 + 0x10) + 1;
        uVar13 = *(uint *)((longlong)&pFVar3->Index + lVar26);
        if (pFVar5 != (FMassArchetypeData *)0x0) {
          puVar18 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                           *)&pFVar5->EntityMap,uVar13);
          uVar13 = *puVar18;
        }
        uVar22 = 0;
        if ((int)uVar27 < local_140.ArrayNum) {
          uVar22 = ~uVar27 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(ulonglong *)(local_140.AllocatorInstance.Data + lVar26) =
             (ulonglong)uVar13 << 0x20 | uVar25 & 0xffffffff;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      else {
        uVar13 = 0;
        if ((int)uVar27 < local_140.ArrayNum) {
          uVar13 = ~uVar27 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined8 *)(local_140.AllocatorInstance.Data + lVar26) = 0xffffffffffffffff;
        if (2 < (byte)LogMass._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
        }
      }
      iVar15 = param_2->ArrayNum;
      uVar27 = uVar27 + 1;
      lVar26 = lVar26 + 8;
      cVar12 = local_147;
    } while ((int)uVar27 < iVar15);
  }
  local_a8.EntityData = &local_140;
  local_148 = false;
  local_98.EntityData = &local_140;
  local_98.bDuplicatesFound = &local_148;
  local_a8.Payload = param_4;
  UE::Mass::Utils::
  AbstractSort<_FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload_::__l2::<lambda_1>,_FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload_::__l2::<lambda_2>_>
            (iVar15,&local_98,&local_a8);
  if (local_148 == false) {
LAB_14720a8e5:
    iVar15 = local_140.ArrayNum;
    if ((param_3 == FoldDuplicates) && (uVar27 = 0, 0 < local_140.ArrayNum + -1)) {
      lVar26 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar27 < iVar15) {
          uVar13 = ~uVar27 >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar29) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar15 = local_140.ArrayNum;
        }
        pFVar28 = local_140.AllocatorInstance.Data + lVar26;
        uVar13 = 0;
        if ((int)(uVar27 + 1) < iVar15) {
          uVar13 = ~(uVar27 + 1) >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar29) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar15 = local_140.ArrayNum;
        }
        if ((*(int *)pFVar28 == *(int *)(local_140.AllocatorInstance.Data + lVar26 + 8)) &&
           (*(int *)(pFVar28 + 4) == *(int *)(local_140.AllocatorInstance.Data + lVar26 + 0xc))) {
          bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("EntityData[EntryIndex] != EntityData[EntryIndex + 1]",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                              ,0x19c,
                              L"Assumption regarding comparison between identical elements while sorting is wrong!"
                             );
          if (bVar29) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar15 = local_140.ArrayNum;
        }
        uVar27 = uVar27 + 1;
        lVar26 = lVar26 + 8;
      } while ((int)uVar27 < iVar15 + -1);
    }
    if (local_148 == false) goto LAB_14720acc8;
  }
  else {
    if (param_3 == NoDuplicates) {
      local_12e[0] = 0;
      `FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload'::__l2::<lambda_3>::
      operator()(local_12e);
    }
    if (local_148 == false) goto LAB_14720a8e5;
    iVar15 = local_140.ArrayNum;
  }
  if ((param_3 == FoldDuplicates) && (0 < iVar15 + -1)) {
    lVar26 = 8;
    uVar27 = 1;
    do {
      uVar13 = 0;
      if ((int)(uVar27 - 1) < iVar15) {
        uVar13 = ~(uVar27 - 1) >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar29) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar15 = local_140.ArrayNum;
      }
      FVar20.Data = local_140.AllocatorInstance.Data;
      cVar12 = local_147;
      if (*(int *)(local_140.AllocatorInstance.Data + lVar26 + -8) == -1) break;
      uVar13 = 0;
      if ((int)uVar27 < iVar15) {
        uVar13 = ~uVar27 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar29) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar15 = local_140.ArrayNum;
      }
      if ((*(int *)(FVar20.Data + lVar26 + -8) ==
           *(int *)(local_140.AllocatorInstance.Data + lVar26)) &&
         (*(int *)(FVar20.Data + lVar26 + -4) ==
          *(int *)(local_140.AllocatorInstance.Data + lVar26 + 4))) {
        uVar22 = uVar27 + 1;
        uVar13 = uVar27;
        lVar19 = lVar26;
        if ((int)uVar22 < iVar15) {
          do {
            uVar23 = 0;
            if ((int)uVar22 < iVar15) {
              uVar23 = ~uVar22 >> 0x1f;
            }
            if (uVar23 == 0) {
              bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar29) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar15 = local_140.ArrayNum;
            }
            if ((*(int *)(FVar20.Data + lVar26 + -8) !=
                 *(int *)(local_140.AllocatorInstance.Data + lVar19 + 8)) ||
               (*(int *)(FVar20.Data + lVar26 + -4) !=
                *(int *)(local_140.AllocatorInstance.Data + lVar19 + 0xc))) break;
            uVar13 = uVar13 + 1;
            uVar22 = uVar22 + 1;
            lVar19 = lVar19 + 8;
          } while ((int)uVar22 < iVar15);
        }
        uVar23 = (uVar13 - uVar27) + 1;
        uVar22 = 0;
        if ((int)(uVar13 + 1) <= iVar15) {
          uVar22 = ~(uVar23 | uVar27) >> 0x1f;
        }
        if (uVar22 == 0) {
          bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar29) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar15 = local_140.ArrayNum;
        }
        if (uVar23 != 0) {
          iVar14 = (iVar15 - uVar27) - uVar23;
          if (iVar14 != 0) {
            memmove(local_140.AllocatorInstance.Data + (longlong)(int)uVar27 * 8,
                    local_140.AllocatorInstance.Data + (longlong)(int)uVar27 * 8 +
                    (longlong)(int)uVar23 * 8,(longlong)iVar14 << 3);
            iVar15 = local_140.ArrayNum;
          }
          local_140.ArrayNum = iVar15 - uVar23;
        }
        FMassGenericPayloadView::SwapElementsToEnd(param_4,uVar27,uVar23);
        uVar13 = *(uint *)(FVar20.Data + lVar26 + -8);
        uVar22 = 0;
        if ((int)uVar13 < (int)(uint)local_120) {
          uVar22 = ~uVar13 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(uint *)(local_128.Data + (longlong)(int)uVar13 * 0x18 + 0x10) =
             *(int *)(local_128.Data + (longlong)(int)uVar13 * 0x18 + 0x10) - uVar23;
        iVar15 = local_140.ArrayNum;
      }
      lVar26 = lVar26 + 8;
      bVar29 = (int)uVar27 < iVar15 + -1;
      cVar12 = local_147;
      uVar27 = uVar27 + 1;
    } while (bVar29);
  }
LAB_14720acc8:
  uVar27 = 0;
  uVar13 = (uint)local_120 - 1;
  if ((int)uVar13 < 0) {
LAB_14720b0e2:
    DestructItems<_FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload_::__l2::FArchetypeInfo,int>
              ((FArchetypeInfo *)local_128.Data,(uint)local_120);
    if ((FArchetypeInfo *)local_128.Data != (FArchetypeInfo *)0x0) {
      FMemory::Free(local_128.Data);
    }
    if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    if (cVar12 != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  lVar26 = (longlong)(int)uVar13 * 0x18;
  do {
    uVar22 = 0;
    if ((int)uVar13 < (int)(uint)local_120) {
      uVar22 = ~uVar13 >> 0x1f;
    }
    if (uVar22 == 0) {
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar29) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar15 = local_140.ArrayNum;
    }
    pFVar28 = local_128.Data + lVar26;
    iVar14 = *(int *)(pFVar28 + 0x10);
    uVar22 = 0;
    if ((int)uVar27 < iVar15) {
      uVar22 = ~uVar27 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar21 = local_140.AllocatorInstance.Data + (longlong)(int)uVar27 * 8;
    if (iVar14 < 0) {
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar29) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_14720addc:
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar29) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else if (iVar14 < 1) goto LAB_14720addc;
    if ((*(uint *)pFVar21 != uVar13) &&
       (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1767606624031079988>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                            ,0x1cc,"EntityDataSubset[0].ArchetypeIndex == ArchetypeIndex"), bVar29))
    {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar22 = 0;
    if ((int)(iVar14 - 1U) < iVar14) {
      uVar22 = ~(iVar14 - 1U) >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((*(uint *)(pFVar21 + (longlong)iVar14 * 8 + -8) != uVar13) &&
       (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1767606624031079987>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                            ,0x1cd,"EntityDataSubset.Last().ArchetypeIndex == ArchetypeIndex"),
       bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((iVar14 < 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumElements >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                            ,0x3f,L""), bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_b8 = (FScriptContainerElement *)0x0;
    iStack_b0 = 8;
    pFVar8 = (param_4->Content).DataPtr;
    uVar9 = *(undefined8 *)&(param_4->Content).ArrayNum;
    uStack_64 = *(undefined4 *)(pFVar28 + 0x10);
    pFVar10 = local_b8;
    iStack_ac = iVar14;
    local_68 = uVar27;
    if (((iVar14 != 0) && (pFVar10 = pFVar21 + 4, iVar14 < 1)) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                            ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_b8 = pFVar10;
    local_100.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar28 + 8);
    local_100.Archetype.ArchetypeHandle.DataPtr.Object = *(FMassArchetypeData **)pFVar28;
    local_100.Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.Ranges.ArrayNum = 0;
    local_100.Ranges.ArrayMax = 0;
    if (local_100.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_100.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(local_100.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
                 ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_100.Archetype.ArchetypeHandle.DataPtr.Object == (FMassArchetypeData *)0x0) {
      local_100.Archetype.HandleVersion = 0;
    }
    else {
      local_100.Archetype.HandleVersion =
           (local_100.Archetype.ArchetypeHandle.DataPtr.Object)->EntityOrderVersion;
    }
    local_c8 = CONCAT44(uStack_64,local_68);
    local_88[0].NumElements = iStack_ac;
    local_88[0].BytesBetweenElements = iStack_b0;
    local_88[0].FirstElementPtr = (int *)local_b8;
    local_d8 = pFVar8;
    uStack_d0 = uVar9;
    FMassArchetypeEntityCollection::BuildEntityRanges(&local_100,local_88);
    pFVar6 = (FMassArchetypeEntityCollection *)(param_5->AllocatorInstance).Data;
    piVar2 = &param_5->ArrayMax;
    if (((pFVar6 <= &local_100) &&
        (&local_100 <
         (FMassArchetypeEntityCollection *)((longlong)pFVar6 + (longlong)*piVar2 * 0x40))) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar15 = param_5->ArrayNum;
    if (iVar15 == *piVar2) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_5->AllocatorInstance,piVar2);
    }
    param_5->ArrayNum = iVar15 + 1;
    pFVar21 = (param_5->AllocatorInstance).Data + (longlong)iVar15 * 0x40;
    *(undefined8 *)pFVar21 = 0;
    *(FScriptContainerElement **)pFVar21 = local_100.Ranges.AllocatorInstance.Data;
    local_100.Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar21 + 8) = local_100.Ranges.ArrayNum;
    *(int *)(pFVar21 + 0xc) = local_100.Ranges.ArrayMax;
    local_100.Ranges.ArrayNum = 0;
    local_100.Ranges.ArrayMax = 0;
    *(FMassArchetypeData **)(pFVar21 + 0x10) = local_100.Archetype.ArchetypeHandle.DataPtr.Object;
    *(TReferenceControllerBase<1> **)(pFVar21 + 0x18) =
         local_100.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
    local_100.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_100.Archetype.ArchetypeHandle.DataPtr.Object = (FMassArchetypeData *)0x0;
    *(uint *)(pFVar21 + 0x20) = local_100.Archetype.HandleVersion;
    *(FStructArrayView **)(pFVar21 + 0x28) = local_d8;
    *(undefined8 *)(pFVar21 + 0x30) = uStack_d0;
    *(undefined8 *)(pFVar21 + 0x38) = local_c8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_100.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Ranges.AllocatorInstance.Data);
    }
    uVar27 = uVar27 + *(int *)(pFVar28 + 0x10);
    lVar26 = lVar26 + -0x18;
    uVar13 = uVar13 - 1;
    cVar12 = local_147;
    if ((int)uVar13 < 0) goto LAB_14720b0e2;
    iVar15 = local_140.ArrayNum;
  } while( true );
}

// operator() @ 150505c00

bool __thiscall
`FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload'::__l2::<lambda_3>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1767606624031080045>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1767606624031080045>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

