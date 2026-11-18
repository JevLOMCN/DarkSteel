// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// operator() @ 1471e7a90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::ObserverManager::FBufferedNotificationExecutioner::operator()
          (FBufferedNotificationExecutioner *this,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_1,FEntityCollection *param_2)

{
  int *piVar1;
  FNotificationContext **ppFVar2;
  EMassObservedOperation EVar3;
  int iVar4;
  FMassObserverManager *pFVar5;
  ForElementType<UScriptStruct_const_*> FVar6;
  code *pcVar7;
  bool bVar8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar9;
  undefined4 uStack_5c;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_58;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_48;
  FMassObserverExecutionContext local_38;
  
  piVar1 = &(this->ObservedTypesOverlap).ArrayNum;
  *piVar1 = 0;
  if ((this->ObservedTypesOverlap).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
              (8,8,0,(ForElementType<UScriptStruct_const_*> *)this,0,
               &(this->ObservedTypesOverlap).ArrayMax);
  }
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              *)param_1,&this->ObservedTypesOverlap);
  EVar3 = this->OpType;
  ppFVar2 = &this->NotificationContext;
  pFVar5 = (*ppFVar2)->ObserverManager;
  FVar6 = (this->ObservedTypesOverlap).AllocatorInstance.SecondaryData;
  local_38.TypesInOperation.DataPtr = (UScriptStruct **)this;
  if (FVar6 != (ForElementType<UScriptStruct_const_*>)0x0) {
    local_38.TypesInOperation.DataPtr = (UScriptStruct **)FVar6;
  }
  iVar4 = *piVar1;
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_38.Operation = this->OpType;
  local_38.TypesInOperation._12_4_ = uStack_5c;
  local_38.TypesInOperation.ArrayNum = iVar4;
  local_38.CurrentTypeIndex = -1;
  pTVar9 = FEntityCollection::GetUpToDatePerArchetypeCollections
                     (param_2,&local_48,(*ppFVar2)->ObserverManager->EntityManager);
  local_58.DataPtr = pTVar9->DataPtr;
  local_58.ArrayNum = pTVar9->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
  FMassObserverManager::HandleElementsImpl
            ((*ppFVar2)->ProcessingContext,&local_58,&local_38,pFVar5->FragmentObservers + EVar3);
  return;
}

// operator() @ 1471e7bd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::ObserverManager::FBufferedNotificationExecutioner::operator()
          (FBufferedNotificationExecutioner *this,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_1,FMassEntityHandle param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  EMassObservedOperation EVar3;
  FMassEntityManager *this_00;
  FMassObserverManager *pFVar4;
  ForElementType<UScriptStruct_const_*> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  IEntityStorageInterface *pIVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined1 *puVar12;
  FMassArchetypeData *pFVar13;
  uint uVar14;
  FMassArchetypeData *pFVar16;
  FMassArchetypeData *pFVar17;
  StorageSelector local_res8 [8];
  FArchetypeEntityRange local_d8;
  undefined1 local_cc [4];
  initializer_list<FMassArchetypeEntityCollection::FArchetypeEntityRange> local_c8;
  FMassArchetypeEntityCollection local_b8;
  ForElementType<UScriptStruct_const_*> local_90;
  int iStack_88;
  undefined4 uStack_84;
  FMassArchetypeEntityCollection *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_68;
  FMassObserverExecutionContext local_58;
  FMassArchetypeData *pFVar15;
  
  pFVar15 = (FMassArchetypeData *)0x0;
  uVar14 = 0;
  piVar1 = &(this->ObservedTypesOverlap).ArrayNum;
  *piVar1 = 0;
  if ((this->ObservedTypesOverlap).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
              (8,8,0,(ForElementType<UScriptStruct_const_*> *)this,0,
               &(this->ObservedTypesOverlap).ArrayMax);
  }
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              *)param_1,&this->ObservedTypesOverlap);
  this_00 = this->NotificationContext->ObserverManager->EntityManager;
  bVar7 = FMassEntityManager::IsEntityValid(this_00,param_2);
  local_d8.SubchunkStart = param_2.Index;
  pFVar16 = pFVar15;
  pFVar17 = pFVar15;
  if (bVar7) {
    local_res8[0] = (StorageSelector)0x0;
    pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this_00->EntityStorage).TypeIndex])
                       (local_res8,&this_00->EntityStorage);
    puVar10 = (undefined8 *)
              (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,(ulonglong)param_2 & 0xffffffff);
    pFVar17 = (FMassArchetypeData *)puVar10[1];
    pFVar16 = (FMassArchetypeData *)*puVar10;
    if (pFVar17 != (FMassArchetypeData *)0x0) {
      LOCK();
      paVar2 = (atomic<int> *)&(pFVar17->CompositionDescriptor).Fragments.field_0x8;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
    }
    if (pFVar16 != (FMassArchetypeData *)0x0) {
      pFVar13 = pFVar15;
      if (*(int *)&(pFVar16->EntityMap).field_0x8 != *(int *)&(pFVar16->EntityMap).field_0x34) {
        puVar12 = *(undefined1 **)&(pFVar16->EntityMap).field_0x40;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = &(pFVar16->EntityMap).field_0x38;
        }
        iVar8 = *(int *)(puVar12 +
                        ((ulonglong)(*(int *)&(pFVar16->EntityMap).field_0x48 - 1) &
                        (ulonglong)param_2 & 0xffffffff) * 4);
        if (iVar8 != -1) {
          do {
            piVar11 = (int *)((longlong)iVar8 * 0x10 + *(longlong *)&(pFVar16->EntityMap).field_0x0)
            ;
            if (*piVar11 == local_d8.SubchunkStart) {
              pFVar13 = (FMassArchetypeData *)(piVar11 + 1);
              if (piVar11 == (int *)0x0) {
                pFVar13 = pFVar15;
              }
              if (pFVar13 != (FMassArchetypeData *)0x0) goto LAB_1471e7d43;
              break;
            }
            iVar8 = piVar11[2];
          } while (iVar8 != -1);
        }
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TrueIndexPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                         ,0x2e,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_1471e7d43:
      iVar8 = *(int *)&(pFVar13->CompositionDescriptor).Fragments;
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TrueIndex >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                             ,0x30,L"Negative values are unexpected here"), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_d8.ChunkIndex = iVar8 / pFVar16->NumEntitiesPerChunk;
      local_d8.SubchunkStart = iVar8 % pFVar16->NumEntitiesPerChunk;
      local_d8.Length = 1;
      local_c8._First = &local_d8;
      local_c8._Last = (FArchetypeEntityRange *)local_cc;
      TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>::
      TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
                (&local_b8.Ranges,&local_c8);
      local_b8.Archetype.ArchetypeHandle.DataPtr.Object = pFVar16;
      local_b8.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar17;
      if (pFVar16 != (FMassArchetypeData *)0x0) {
        uVar14 = pFVar16->EntityOrderVersion;
      }
      goto LAB_1471e7e09;
    }
  }
  local_c8._First = &local_d8;
  local_d8.ChunkIndex = 0;
  local_c8._Last = (FArchetypeEntityRange *)local_cc;
  local_d8.Length = 1;
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>::
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
            (&local_b8.Ranges,&local_c8);
  local_b8.Archetype.ArchetypeHandle.DataPtr.Object = pFVar16;
  local_b8.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar17;
LAB_1471e7e09:
  EVar3 = this->OpType;
  iVar8 = *piVar1;
  pFVar4 = this->NotificationContext->ObserverManager;
  FVar5 = (this->ObservedTypesOverlap).AllocatorInstance.SecondaryData;
  local_90 = (ForElementType<UScriptStruct_const_*>)this;
  if (FVar5 != (ForElementType<UScriptStruct_const_*>)0x0) {
    local_90 = FVar5;
  }
  local_b8.Archetype.HandleVersion = uVar14;
  if ((iVar8 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_58.Operation = this->OpType;
  local_78 = &local_b8;
  local_58.TypesInOperation._12_4_ = uStack_84;
  local_58.TypesInOperation.ArrayNum = iVar8;
  local_58.TypesInOperation.DataPtr = (UScriptStruct **)local_90;
  uStack_70 = 1;
  local_68._12_4_ = uStack_6c;
  local_68.ArrayNum = 1;
  local_58.CurrentTypeIndex = -1;
  iStack_88 = iVar8;
  local_68.DataPtr = local_78;
  FMassObserverManager::HandleElementsImpl
            (this->NotificationContext->ProcessingContext,&local_68,&local_58,
             pFVar4->FragmentObservers + EVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController);
  if (local_b8.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Ranges.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 1471e7f20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::ObserverManager::FBufferedNotificationExecutioner::operator()
          (FBufferedNotificationExecutioner *this,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_1,
          FEntityCollection *param_2)

{
  int *piVar1;
  FNotificationContext **ppFVar2;
  EMassObservedOperation EVar3;
  int iVar4;
  FMassObserverManager *pFVar5;
  ForElementType<UScriptStruct_const_*> FVar6;
  code *pcVar7;
  bool bVar8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar9;
  undefined4 uStack_5c;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_58;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_48;
  FMassObserverExecutionContext local_38;
  
  piVar1 = &(this->ObservedTypesOverlap).ArrayNum;
  *piVar1 = 0;
  if ((this->ObservedTypesOverlap).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
              (8,8,0,(ForElementType<UScriptStruct_const_*> *)this,0,
               &(this->ObservedTypesOverlap).ArrayMax);
  }
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              *)param_1,&this->ObservedTypesOverlap);
  EVar3 = this->OpType;
  ppFVar2 = &this->NotificationContext;
  pFVar5 = (*ppFVar2)->ObserverManager;
  FVar6 = (this->ObservedTypesOverlap).AllocatorInstance.SecondaryData;
  local_38.TypesInOperation.DataPtr = (UScriptStruct **)this;
  if (FVar6 != (ForElementType<UScriptStruct_const_*>)0x0) {
    local_38.TypesInOperation.DataPtr = (UScriptStruct **)FVar6;
  }
  iVar4 = *piVar1;
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_38.Operation = this->OpType;
  local_38.TypesInOperation._12_4_ = uStack_5c;
  local_38.TypesInOperation.ArrayNum = iVar4;
  local_38.CurrentTypeIndex = -1;
  pTVar9 = FEntityCollection::GetUpToDatePerArchetypeCollections
                     (param_2,&local_48,(*ppFVar2)->ObserverManager->EntityManager);
  local_58.DataPtr = pTVar9->DataPtr;
  local_58.ArrayNum = pTVar9->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
  FMassObserverManager::HandleElementsImpl
            ((*ppFVar2)->ProcessingContext,&local_58,&local_38,pFVar5->TagObservers + EVar3);
  return;
}

// operator() @ 1471e8060

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::ObserverManager::FBufferedNotificationExecutioner::operator()
          (FBufferedNotificationExecutioner *this,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_1,
          FMassEntityHandle param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  EMassObservedOperation EVar3;
  FMassEntityManager *this_00;
  FMassObserverManager *pFVar4;
  ForElementType<UScriptStruct_const_*> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  IEntityStorageInterface *pIVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined1 *puVar12;
  FMassArchetypeData *pFVar13;
  uint uVar14;
  FMassArchetypeData *pFVar16;
  FMassArchetypeData *pFVar17;
  StorageSelector local_res8 [8];
  FArchetypeEntityRange local_d8;
  undefined1 local_cc [4];
  initializer_list<FMassArchetypeEntityCollection::FArchetypeEntityRange> local_c8;
  FMassArchetypeEntityCollection local_b8;
  ForElementType<UScriptStruct_const_*> local_90;
  int iStack_88;
  undefined4 uStack_84;
  FMassArchetypeEntityCollection *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_68;
  FMassObserverExecutionContext local_58;
  FMassArchetypeData *pFVar15;
  
  pFVar15 = (FMassArchetypeData *)0x0;
  uVar14 = 0;
  piVar1 = &(this->ObservedTypesOverlap).ArrayNum;
  *piVar1 = 0;
  if ((this->ObservedTypesOverlap).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
              (8,8,0,(ForElementType<UScriptStruct_const_*> *)this,0,
               &(this->ObservedTypesOverlap).ArrayMax);
  }
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              *)param_1,&this->ObservedTypesOverlap);
  this_00 = this->NotificationContext->ObserverManager->EntityManager;
  bVar7 = FMassEntityManager::IsEntityValid(this_00,param_2);
  local_d8.SubchunkStart = param_2.Index;
  pFVar16 = pFVar15;
  pFVar17 = pFVar15;
  if (bVar7) {
    local_res8[0] = (StorageSelector)0x0;
    pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this_00->EntityStorage).TypeIndex])
                       (local_res8,&this_00->EntityStorage);
    puVar10 = (undefined8 *)
              (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,(ulonglong)param_2 & 0xffffffff);
    pFVar17 = (FMassArchetypeData *)puVar10[1];
    pFVar16 = (FMassArchetypeData *)*puVar10;
    if (pFVar17 != (FMassArchetypeData *)0x0) {
      LOCK();
      paVar2 = (atomic<int> *)&(pFVar17->CompositionDescriptor).Fragments.field_0x8;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
    }
    if (pFVar16 != (FMassArchetypeData *)0x0) {
      pFVar13 = pFVar15;
      if (*(int *)&(pFVar16->EntityMap).field_0x8 != *(int *)&(pFVar16->EntityMap).field_0x34) {
        puVar12 = *(undefined1 **)&(pFVar16->EntityMap).field_0x40;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = &(pFVar16->EntityMap).field_0x38;
        }
        iVar8 = *(int *)(puVar12 +
                        ((ulonglong)(*(int *)&(pFVar16->EntityMap).field_0x48 - 1) &
                        (ulonglong)param_2 & 0xffffffff) * 4);
        if (iVar8 != -1) {
          do {
            piVar11 = (int *)((longlong)iVar8 * 0x10 + *(longlong *)&(pFVar16->EntityMap).field_0x0)
            ;
            if (*piVar11 == local_d8.SubchunkStart) {
              pFVar13 = (FMassArchetypeData *)(piVar11 + 1);
              if (piVar11 == (int *)0x0) {
                pFVar13 = pFVar15;
              }
              if (pFVar13 != (FMassArchetypeData *)0x0) goto LAB_1471e81d3;
              break;
            }
            iVar8 = piVar11[2];
          } while (iVar8 != -1);
        }
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TrueIndexPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                         ,0x2e,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_1471e81d3:
      iVar8 = *(int *)&(pFVar13->CompositionDescriptor).Fragments;
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TrueIndex >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                             ,0x30,L"Negative values are unexpected here"), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_d8.ChunkIndex = iVar8 / pFVar16->NumEntitiesPerChunk;
      local_d8.SubchunkStart = iVar8 % pFVar16->NumEntitiesPerChunk;
      local_d8.Length = 1;
      local_c8._First = &local_d8;
      local_c8._Last = (FArchetypeEntityRange *)local_cc;
      TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>::
      TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
                (&local_b8.Ranges,&local_c8);
      local_b8.Archetype.ArchetypeHandle.DataPtr.Object = pFVar16;
      local_b8.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar17;
      if (pFVar16 != (FMassArchetypeData *)0x0) {
        uVar14 = pFVar16->EntityOrderVersion;
      }
      goto LAB_1471e8299;
    }
  }
  local_c8._First = &local_d8;
  local_d8.ChunkIndex = 0;
  local_c8._Last = (FArchetypeEntityRange *)local_cc;
  local_d8.Length = 1;
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>::
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
            (&local_b8.Ranges,&local_c8);
  local_b8.Archetype.ArchetypeHandle.DataPtr.Object = pFVar16;
  local_b8.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar17;
LAB_1471e8299:
  EVar3 = this->OpType;
  iVar8 = *piVar1;
  pFVar4 = this->NotificationContext->ObserverManager;
  FVar5 = (this->ObservedTypesOverlap).AllocatorInstance.SecondaryData;
  local_90 = (ForElementType<UScriptStruct_const_*>)this;
  if (FVar5 != (ForElementType<UScriptStruct_const_*>)0x0) {
    local_90 = FVar5;
  }
  local_b8.Archetype.HandleVersion = uVar14;
  if ((iVar8 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_58.Operation = this->OpType;
  local_78 = &local_b8;
  local_58.TypesInOperation._12_4_ = uStack_84;
  local_58.TypesInOperation.ArrayNum = iVar8;
  local_58.TypesInOperation.DataPtr = (UScriptStruct **)local_90;
  uStack_70 = 1;
  local_68._12_4_ = uStack_6c;
  local_68.ArrayNum = 1;
  local_58.CurrentTypeIndex = -1;
  iStack_88 = iVar8;
  local_68.DataPtr = local_78;
  FMassObserverManager::HandleElementsImpl
            (this->NotificationContext->ProcessingContext,&local_68,&local_58,
             pFVar4->TagObservers + EVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController);
  if (local_b8.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Ranges.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

