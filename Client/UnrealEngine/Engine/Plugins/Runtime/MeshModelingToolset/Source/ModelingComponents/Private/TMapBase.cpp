// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 9

// Emplace<void_*_const_&,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_const_&> @ 14cab8440

TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> * __thiscall
TMapBase<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
::Emplace<void_*_const_&,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_const_&>
          (TMapBase<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
           *this,void **param_1,
          TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *param_2)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>_>
       *)0x0) {
    *(void **)local_28.Pointer = *param_1;
    *(FSpatialWrapperInfo **)((longlong)local_28.Pointer + 8) = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x10) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar6 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  bVar4 = TSet<TTuple<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// Emplace<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_const_&> @ 14cab85a0

TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> * __thiscall
TMapBase<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
::Emplace<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_const_&>
          (TMapBase<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
           *this,void **param_1,
          TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *param_2)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>_>
       *)0x0) {
    *(void **)local_28.Pointer = *param_1;
    *(FSpatialWrapperInfo **)((longlong)local_28.Pointer + 8) = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x10) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar6 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  bVar4 = TSet<TTuple<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// Find @ 14cb08220

TObjectPtr<ULineSetComponent> * __thiscall
TMapBase<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
::Find(TMapBase<FString,TObjectPtr<ULineSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TObjectPtr<ULineSetComponent> *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TObjectPtr<ULineSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ULineSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TObjectPtr<ULineSetComponent> *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TObjectPtr<ULineSetComponent> *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TObjectPtr<ULineSetComponent> *)0x0;
}

// Find @ 14cb082b0

TObjectPtr<UPointSetComponent> * __thiscall
TMapBase<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
::Find(TMapBase<FString,TObjectPtr<UPointSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TObjectPtr<UPointSetComponent> *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TObjectPtr<UPointSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UPointSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TObjectPtr<UPointSetComponent> *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TObjectPtr<UPointSetComponent> *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TObjectPtr<UPointSetComponent> *)0x0;
}

// Find @ 14cb08340

TObjectPtr<UTriangleSetComponent> * __thiscall
TMapBase<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
::Find(TMapBase<FString,TObjectPtr<UTriangleSetComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TObjectPtr<UTriangleSetComponent> *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TObjectPtr<UTriangleSetComponent>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UTriangleSetComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TObjectPtr<UTriangleSetComponent> *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TObjectPtr<UTriangleSetComponent> *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TObjectPtr<UTriangleSetComponent> *)0x0;
}

// FindChecked @ 14cb08b30

FColor * __thiscall
TMapBase<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_>::FindChecked
          (TMapBase<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FColor *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FColor *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FColor *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FColor *)(*pcVar1)();
  return pFVar4;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14cb5e100

void __thiscall
TMapBase<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>_>
           *this,TArray<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  DestructItems<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int>
            ((TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)
             (param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14cb5e1e0;
      uVar5 = puVar13[lVar8 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14cb5e1e0:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 5 + 2) * 8);
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar2) && (pFVar2 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar9 = *(undefined8 *)pFVar2;
      lVar8 = *(longlong *)(pFVar2 + 8);
      *(longlong *)(pFVar9 + 8) = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// FindChecked @ 14cb8ccc0

TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> * __thiscall
TMapBase<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>_>
::FindChecked(TMapBase<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>_>
              *this,FGeometryIdentifier *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *pTVar6;
  
  uVar4 = ::GetTypeHash(param_1);
  iVar5 = TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGeometryIdentifier>(&this->Pairs,uVar4,param_1);
  if ((iVar5 != -1) &&
     (lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar5 * 0x28, lVar1 != 0)) {
    return (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(lVar1 + 0x10);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)&DAT_00000010;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar2)();
  return pTVar6;
}

// FindChecked @ 14cb8cd50

TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1> * __thiscall
TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
::FindChecked(TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
              *this,FSceneGeometryID *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1->UniqueID) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar6 == param_1->UniqueID) {
          if (puVar6 != (uint *)0x0) {
            return (TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1> *)(puVar6 + 2);
          }
          break;
        }
        uVar3 = puVar6[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1> *)(*pcVar1)();
  return pTVar4;
}

