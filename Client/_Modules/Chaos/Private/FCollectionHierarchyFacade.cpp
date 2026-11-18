// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 18

// FCollectionHierarchyFacade @ 143f872d0

FCollectionHierarchyFacade * __thiscall
Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
          (FCollectionHierarchyFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FCollectionHierarchyFacade *pFVar5;
  FValueType *pFVar6;
  FValueType *this_00;
  FName local_28;
  FName local_20;
  
  (this->ParentAttribute).ConstCollection = param_1;
  (this->ParentAttribute).Collection = param_1;
  pFVar6 = (FValueType *)0x0;
  (this->ParentAttribute).Name = FTransformCollection::ParentAttribute;
  (this->ParentAttribute).Group = FTransformCollection::TransformGroup;
  (this->ParentAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ParentAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,FTransformCollection::ParentAttribute,
                      FTransformCollection::TransformGroup);
  (this->ParentAttribute).AttributeArray = pTVar3;
  (this->ParentAttribute).ConstAttributeArray = pTVar3;
  (this->ChildrenAttribute).ConstCollection = param_1;
  (this->ChildrenAttribute).Collection = param_1;
  (this->ChildrenAttribute).Name = FTransformCollection::ChildrenAttribute;
  (this->ChildrenAttribute).Group = FTransformCollection::TransformGroup;
  (this->ChildrenAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ChildrenAttribute).DefaultGroupDependency.Number = 0;
  local_28 = FTransformCollection::ChildrenAttribute;
  local_20 = FTransformCollection::TransformGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_28);
  this_00 = (FValueType *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar6;
  }
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FIntArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar6 = (FValueType *)this_00->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FCollectionHierarchyFacade *)(*pcVar1)();
      return pFVar5;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->ChildrenAttribute).AttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)pFVar6;
  (this->ChildrenAttribute).ConstAttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)pFVar6;
  (this->LevelAttribute).ConstCollection = param_1;
  (this->LevelAttribute).Collection = param_1;
  (this->LevelAttribute).Name = FTransformCollection::LevelAttribute;
  (this->LevelAttribute).Group = FTransformCollection::TransformGroup;
  (this->LevelAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->LevelAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,FTransformCollection::LevelAttribute,
                      FTransformCollection::TransformGroup);
  (this->LevelAttribute).AttributeArray = pTVar3;
  (this->LevelAttribute).ConstAttributeArray = pTVar3;
  return this;
}

// FCollectionHierarchyFacade @ 143f87450

FCollectionHierarchyFacade * __thiscall
Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
          (FCollectionHierarchyFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FCollectionHierarchyFacade *pFVar5;
  char *pcVar6;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar7;
  FName local_28;
  FName local_20;
  
  (this->ParentAttribute).ConstCollection = param_1;
  (this->ParentAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ParentAttribute).Name = FTransformCollection::ParentAttribute;
  (this->ParentAttribute).Group = FTransformCollection::TransformGroup;
  (this->ParentAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ParentAttribute).DefaultGroupDependency.Number = 0;
  (this->ParentAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,FTransformCollection::ParentAttribute,
                      FTransformCollection::TransformGroup);
  (this->ParentAttribute).ConstAttributeArray = pTVar3;
  (this->ChildrenAttribute).ConstCollection = param_1;
  (this->ChildrenAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ChildrenAttribute).Name = FTransformCollection::ChildrenAttribute;
  (this->ChildrenAttribute).Group = FTransformCollection::TransformGroup;
  (this->ChildrenAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ChildrenAttribute).DefaultGroupDependency.Number = 0;
  (this->ChildrenAttribute).AttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
  local_28 = FTransformCollection::ChildrenAttribute;
  local_20 = FTransformCollection::TransformGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_28);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x0e')) {
    pTVar7 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> **)
              (pcVar6 + 0x20);
    if (pTVar7 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCollectionHierarchyFacade *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  (this->ChildrenAttribute).ConstAttributeArray = pTVar7;
  (this->LevelAttribute).ConstCollection = param_1;
  (this->LevelAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->LevelAttribute).Name = FTransformCollection::LevelAttribute;
  (this->LevelAttribute).Group = FTransformCollection::TransformGroup;
  (this->LevelAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->LevelAttribute).DefaultGroupDependency.Number = 0;
  (this->LevelAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,FTransformCollection::LevelAttribute,
                      FTransformCollection::TransformGroup);
  (this->LevelAttribute).ConstAttributeArray = pTVar3;
  return this;
}

// ComputeTransformIndicesInBreadthFirstOrder @ 143fa5700

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Facades::FCollectionHierarchyFacade::ComputeTransformIndicesInBreadthFirstOrder
          (FCollectionHierarchyFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ulonglong uVar1;
  TManagedArray<int> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  longlong *plVar14;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  uint local_108 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  undefined4 local_f0 [2];
  longlong local_e8;
  longlong *local_e0;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_d8;
  longlong *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar2 = (this->ParentAttribute).ConstAttributeArray;
  if ((pTVar2 != (TManagedArray<int> *)0x0) &&
     ((this->ChildrenAttribute).ConstAttributeArray !=
      (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) {
    pTVar15 = (this->ChildrenAttribute).ConstAttributeArray;
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    local_d8 = pTVar15;
    if (pTVar2 != (TManagedArray<int> *)0x0) {
      local_108[0] = 0;
      iVar8 = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2);
      if ((int)local_108[0] < iVar8) {
        do {
          lVar11 = (longlong)(int)local_108[0];
          uVar9 = 0;
          if ((int)local_108[0] < *(int *)&pTVar2->field_0x18) {
            uVar9 = ~local_108[0] >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar10;
          }
          if (*(int *)(*(longlong *)&pTVar2->field_0x10 + lVar11 * 4) == -1) {
            if (((local_100.AllocatorInstance.Data <= (FScriptContainerElement *)local_108) &&
                ((FScriptContainerElement *)local_108 <
                 local_100.AllocatorInstance.Data + (longlong)local_100.ArrayMax * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar10;
            }
            iVar8 = local_100.ArrayNum;
            if (local_100.ArrayNum == local_100.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_100.AllocatorInstance,&local_100.ArrayMax);
            }
            local_100.ArrayNum = iVar8 + 1;
            *(uint *)(local_100.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_108[0];
          }
          local_108[0] = local_108[0] + 1;
          iVar8 = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2);
        } while ((int)local_108[0] < iVar8);
      }
    }
    if (__return_storage_ptr__ != &local_100) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_100.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_100.ArrayNum;
      local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayMax = local_100.ArrayMax;
      local_100.ArrayNum = 0;
      local_100.ArrayMax = 0;
    }
    if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
    uVar9 = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if (__return_storage_ptr__->ArrayMax < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar9,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    local_res10 = 0;
    if (0 < iVar8) {
      local_e8 = 0;
      do {
        lVar11 = local_e8;
        uVar9 = 0;
        uVar12 = uVar9;
        if ((int)local_res10 < iVar8) {
          uVar12 = ~local_res10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        uVar12 = *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + lVar11);
        uVar16 = uVar9;
        if ((int)uVar12 < *(int *)&pTVar15->field_0x18) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        lVar11 = (longlong)(int)uVar12 * 0x50;
        if (*(int *)(*(longlong *)&pTVar15->field_0x10 + 8 + lVar11) !=
            *(int *)(*(longlong *)&pTVar15->field_0x10 + 0x34 + lVar11)) {
          uVar16 = uVar9;
          if ((int)uVar12 < *(int *)&pTVar15->field_0x18) {
            uVar16 = ~uVar12 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar10;
          }
          plVar14 = (longlong *)(*(longlong *)&pTVar15->field_0x10 + lVar11);
          uVar12 = *(uint *)(plVar14 + 5);
          local_c0 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar14 + 2);
          uStack_c4 = 1;
          uStack_b4 = uVar9;
          local_b0 = uVar9;
          if (uVar12 != 0) {
            pTVar13 = local_c0;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
            }
            uVar16 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
            while (uVar16 == 0) {
              lVar11 = (longlong)(int)uVar9;
              local_b0 = local_b0 + 0x20;
              uVar9 = uVar9 + 1;
              uStack_b4 = uVar12;
              if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar9)
              goto LAB_143fa5acf;
              uVar16 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar11 * 4 + 4);
            }
            uStack_c4 = -uVar16 & uVar16;
            uVar1 = (ulonglong)uStack_c4 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            local_res18 = (int)lVar11;
            uStack_b4 = (local_b0 - 1) + local_res18;
            if ((int)uVar12 < (int)uStack_b4) {
              uStack_b4 = uVar12;
            }
          }
LAB_143fa5acf:
          uVar12 = *(uint *)(plVar14 + 5);
          uStack_ac = local_54;
          iStack_a8 = (int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34);
          uVar16 = uVar12 & 0xffffffe0;
          TStack_98._padding_ = CONCAT44(uStack_c4,uVar9);
          uStack_b8 = 0xffffffff;
          TStack_98.CurrentBitIndex = uStack_b4;
          TStack_98.UnvisitedBitMask = 0xffffffff;
          iVar8 = (int)uVar12 >> 5;
          TStack_98._28_4_ = local_54;
          TStack_98.BaseBitIndex = local_b0;
          uStack_78 = CONCAT44(uStack_a4,iStack_a8);
          local_e0 = plVar14;
          local_d0 = plVar14;
          uStack_c8 = uVar9;
          local_a0 = plVar14;
          TStack_98.Array = local_c0;
          if (((int)uVar12 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar10;
          }
          plVar5 = local_e0;
          uVar9 = *(uint *)(plVar14 + 5);
          if (uVar12 != uVar9) {
            pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar14 + 2);
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
            }
            uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                     *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
            while (uVar12 == 0) {
              lVar11 = (longlong)iVar8;
              uVar16 = uVar16 + 0x20;
              iVar8 = iVar8 + 1;
              uVar12 = uVar9;
              if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
              goto LAB_143fa5be0;
              uVar12 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar11 * 4 + 4);
            }
            uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
            lVar11 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            local_res20 = (int)lVar11;
            uVar12 = local_res20 + -1 + uVar16;
            if ((int)uVar9 < (int)uVar12) {
              uVar12 = uVar9;
            }
          }
LAB_143fa5be0:
          while( true ) {
            plVar6 = local_a0;
            if ((int)local_a0[1] - *(int *)((longlong)local_a0 + 0x34) != (int)uStack_78) {
              local_res8[0] = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if (((TStack_98.CurrentBitIndex == uVar12) &&
                (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar14 + 2))) &&
               (pTVar15 = local_d8, plVar6 == plVar5)) break;
            local_f0[0] = *(undefined4 *)(*plVar6 + (longlong)TStack_98.CurrentBitIndex * 0xc);
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar3 <= (FScriptContainerElement *)local_f0) &&
                ((FScriptContainerElement *)local_f0 <
                 pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar10;
            }
            iVar8 = __return_storage_ptr__->ArrayNum;
            if (iVar8 == __return_storage_ptr__->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar8 + 1;
            *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4)
                 = local_f0[0];
            TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
          }
        }
        local_res10 = local_res10 + 1;
        iVar8 = __return_storage_ptr__->ArrayNum;
        local_e8 = local_e8 + 4;
      } while ((int)local_res10 < iVar8);
    }
  }
  return __return_storage_ptr__;
}

// ComputeTransformIndicesInDepthFirstOrder @ 143fa5d30

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Facades::FCollectionHierarchyFacade::ComputeTransformIndicesInDepthFirstOrder
          (FCollectionHierarchyFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  uint uVar4;
  undefined4 uVar5;
  TManagedArray<int> *pTVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int *piVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  longlong *plVar18;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_res20;
  uint local_e8 [2];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  int iStack_c0;
  uint uStack_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  pTVar6 = (this->ParentAttribute).ConstAttributeArray;
  if ((pTVar6 != (TManagedArray<int> *)0x0) &&
     ((this->ChildrenAttribute).ConstAttributeArray !=
      (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) {
    pTVar19 = (this->ChildrenAttribute).ConstAttributeArray;
    uVar13 = 0;
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8 = 0;
    local_res20 = pTVar19;
    iVar10 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    if (0 < iVar10) {
      lVar15 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar13 < *(int *)&pTVar6->field_0x18) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar12;
        }
        if (*(int *)(lVar15 + *(longlong *)&pTVar6->field_0x10) == -1) {
          iVar10 = (int)local_d8;
          if ((int)local_d8 == local_d8._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_e0,(int *)((longlong)&local_d8 + 4));
          }
          local_d8 = CONCAT44(local_d8._4_4_,iVar10 + 1);
          *(uint *)(local_e0.Data + (longlong)iVar10 * 8) = uVar13;
          *(undefined4 *)(local_e0.Data + (longlong)iVar10 * 8 + 4) = 0;
        }
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 4;
        iVar10 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
      } while ((int)uVar13 < iVar10);
    }
    uVar13 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (__return_storage_ptr__->ArrayMax < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar13,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    }
    while ((int)local_d8 != 0) {
      piVar16 = &__return_storage_ptr__->ArrayMax;
      iVar10 = (int)local_d8;
      if ((int)local_d8 < 1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar12;
        }
        iVar10 = (int)local_d8;
      }
      pFVar1 = local_e0.Data + (longlong)(iVar10 + -1) * 8;
      local_d0 = *(undefined8 *)pFVar1;
      iVar11 = (iVar10 - (iVar10 + -1)) + -1;
      if (iVar11 != 0) {
        memmove(pFVar1,pFVar1 + 8,(longlong)iVar11 << 3);
        iVar10 = (int)local_d8;
      }
      local_d8 = CONCAT44(local_d8._4_4_,iVar10 + -1);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&local_e0,iVar10 + -1,(int *)((longlong)&local_d8 + 4));
      lVar15 = (longlong)(int)(uint)local_d0;
      local_e8[0] = (uint)local_d0;
      if (local_d0._4_4_ == 1) {
LAB_143fa5f5b:
        pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_e8) &&
            ((FScriptContainerElement *)local_e8 < pFVar1 + (longlong)*piVar16 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar12;
        }
        iVar10 = __return_storage_ptr__->ArrayNum;
        if (iVar10 == *piVar16) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&__return_storage_ptr__->AllocatorInstance,piVar16);
        }
        __return_storage_ptr__->ArrayNum = iVar10 + 1;
        *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 4) =
             local_e8[0];
      }
      else {
        uVar13 = 0;
        if ((int)(uint)local_d0 < *(int *)&pTVar19->field_0x18) {
          uVar13 = ~(uint)local_d0 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar12;
        }
        if (*(int *)(*(longlong *)&pTVar19->field_0x10 + 8 + lVar15 * 0x50) ==
            *(int *)(*(longlong *)&pTVar19->field_0x10 + 0x34 + lVar15 * 0x50)) goto LAB_143fa5f5b;
        local_d0 = CONCAT44(1,(uint)local_d0);
        if (((local_e0.Data <= (FScriptContainerElement *)&local_d0) &&
            ((FScriptContainerElement *)&local_d0 < local_e0.Data + (longlong)local_d8._4_4_ * 8))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar12;
        }
        iVar10 = (int)local_d8;
        if ((int)local_d8 == local_d8._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_e0,(int *)((longlong)&local_d8 + 4));
        }
        local_d8 = CONCAT44(local_d8._4_4_,iVar10 + 1);
        *(undefined8 *)(local_e0.Data + (longlong)iVar10 * 8) = local_d0;
        lVar15 = (longlong)(int)local_e8[0];
        uVar13 = 0;
        if ((int)local_e8[0] < *(int *)&pTVar19->field_0x18) {
          uVar13 = ~local_e8[0] >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar12;
        }
        iStack_c0 = 0;
        plVar18 = (longlong *)(lVar15 * 0x50 + *(longlong *)&pTVar19->field_0x10);
        local_a8 = 0;
        iVar10 = (int)plVar18[5];
        pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar18 + 2);
        uStack_bc = 1;
        iStack_ac = 0;
        if (iVar10 != 0) {
          pTVar17 = pTVar3;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar18[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar18[4];
          }
          uVar13 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
          while (uVar13 == 0) {
            lVar15 = (longlong)iStack_c0;
            local_a8 = local_a8 + 0x20;
            iStack_c0 = iStack_c0 + 1;
            iStack_ac = iVar10;
            if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0)
            goto LAB_143fa61dd;
            uVar13 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar15 * 4 + 4);
          }
          uStack_bc = -uVar13 & uVar13;
          uVar2 = (ulonglong)uStack_bc * 2 + 1;
          lVar15 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_res10 = (int)lVar15;
          iStack_ac = local_a8 + -1 + local_res10;
          if (iVar10 < iStack_ac) {
            iStack_ac = iVar10;
          }
        }
LAB_143fa61dd:
        uVar13 = *(uint *)(plVar18 + 5);
        uStack_a4 = local_4c;
        uVar14 = uVar13 & 0xffffffe0;
        iStack_a0 = (int)plVar18[1] - *(int *)((longlong)plVar18 + 0x34);
        TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
        uStack_b0 = 0xffffffff;
        TStack_90.CurrentBitIndex = iStack_ac;
        TStack_90.UnvisitedBitMask = 0xffffffff;
        iVar11 = (int)uVar13 >> 5;
        TStack_90._28_4_ = local_4c;
        TStack_90.BaseBitIndex = local_a8;
        uStack_70 = CONCAT44(uStack_9c,iStack_a0);
        local_c8 = plVar18;
        local_b8 = pTVar3;
        local_98 = plVar18;
        TStack_90.Array = pTVar3;
        if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar12;
        }
        uVar4 = *(uint *)(plVar18 + 5);
        if (uVar13 != uVar4) {
          pTVar17 = pTVar3;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar18[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar18[4];
          }
          uVar13 = -1 << ((byte)uVar13 & 0x1f) &
                   *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
          while (uVar13 == 0) {
            lVar15 = (longlong)iVar11;
            uVar14 = uVar14 + 0x20;
            iVar11 = iVar11 + 1;
            uVar13 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
            goto LAB_143fa62f0;
            uVar13 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar15 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_res18 = (int)lVar15;
          uVar13 = local_res18 + -1 + uVar14;
          if ((int)uVar4 < (int)uVar13) {
            uVar13 = uVar4;
          }
        }
LAB_143fa62f0:
        while( true ) {
          plVar8 = local_98;
          if ((int)local_98[1] - *(int *)((longlong)local_98 + 0x34) != (int)uStack_70) {
            local_res8[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (((TStack_90.CurrentBitIndex == uVar13) && (TStack_90.Array == pTVar3)) &&
             (pTVar19 = local_res20, plVar8 == plVar18)) break;
          uVar5 = *(undefined4 *)(*plVar8 + (longlong)TStack_90.CurrentBitIndex * 0xc);
          iVar10 = (int)local_d8;
          if ((int)local_d8 == local_d8._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_e0,(int *)((longlong)&local_d8 + 4));
          }
          local_d8 = CONCAT44(local_d8._4_4_,iVar10 + 1);
          *(undefined4 *)(local_e0.Data + (longlong)iVar10 * 8) = uVar5;
          *(undefined4 *)(local_e0.Data + (longlong)iVar10 * 8 + 4) = 0;
          TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
        }
      }
    }
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
  }
  return __return_storage_ptr__;
}

// EnumerateChildTransforms @ 143fab330

void __thiscall
Chaos::Facades::FCollectionHierarchyFacade::EnumerateChildTransforms
          (FCollectionHierarchyFacade *this,int param_1,TFunctionRef<bool___cdecl(int)> *param_2,
          TFunctionRef<void___cdecl(int)> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  char cVar6;
  bool bVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_d8 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_98;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  TFunctionRef<void___cdecl(int)> local_60;
  TFunctionRef<bool___cdecl(int)> local_50;
  
  local_res18[0] = param_1;
  cVar6 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res18);
  if (cVar6 != '\0') {
    local_d8[0] = param_1;
    (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_d8);
    return;
  }
  pTVar8 = TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::operator[]
                     (&this->ChildrenAttribute,param_1);
  iVar11 = *(int *)&(pTVar8->Elements).field_0x28;
  iStack_c8 = 0;
  uStack_c4 = 1;
  puVar1 = &(pTVar8->Elements).field_0x10;
  local_b0 = 0;
  iVar10 = 0;
  iStack_b4 = 0;
  if (iVar11 != 0) {
    puVar15 = *(uint **)&(pTVar8->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) {
        iVar10 = *(int *)&(pTVar8->Elements).field_0x28;
        iStack_b4 = iVar11;
        goto LAB_143fab434;
      }
      uVar13 = puVar15[lVar9 + 1];
    }
    iVar10 = *(int *)&(pTVar8->Elements).field_0x28;
    uStack_c4 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_a0 = (int)lVar9;
    iStack_b4 = local_b0 + -1 + local_a0;
    if (iVar10 < iStack_b4) {
      iStack_b4 = iVar11;
    }
  }
LAB_143fab434:
  uVar13 = *(uint *)&(pTVar8->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_a8 = *(int *)&(pTVar8->Elements).field_0x8 - *(int *)&(pTVar8->Elements).field_0x34;
  uStack_b8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_88.CurrentBitIndex = iStack_b4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_88._28_4_ = iStack_b4;
  TStack_88.BaseBitIndex = local_b0;
  uStack_68 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = pTVar8;
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_98 = pTVar8;
  local_90 = pTVar8;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = local_98;
  uVar3 = *(uint *)&(pTVar8->Elements).field_0x28;
  if (uVar13 != uVar3) {
    puVar14 = *(undefined1 **)&(pTVar8->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143fab531;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_143fab531:
  while( true ) {
    pTVar8 = local_90;
    if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
        (int)uStack_68) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_88.CurrentBitIndex == uVar13) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar5))
    break;
    local_60._0_8_ = *(undefined8 *)param_3;
    local_60._8_8_ = *(undefined8 *)&param_3->field_0x8;
    local_50._0_8_ = *(undefined8 *)param_2;
    local_50._8_8_ = *(undefined8 *)&param_2->field_0x8;
    EnumerateChildTransforms
              (this,*(int *)(*(longlong *)&pTVar8->Elements +
                            (longlong)TStack_88.CurrentBitIndex * 0xc),&local_50,&local_60);
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// FindChildren @ 143fac330

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
Chaos::Facades::FCollectionHierarchyFacade::FindChildren
          (FCollectionHierarchyFacade *this,int param_1)

{
  int iVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  
  if (((this->ChildrenAttribute).ConstAttributeArray !=
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) &&
     (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->ChildrenAttribute).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::
               operator[](&this->ChildrenAttribute,param_1);
      return pTVar2;
    }
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
}

// GenerateLevelAttribute @ 143faced0

void __thiscall
Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(FCollectionHierarchyFacade *this)

{
  FManagedArrayCollection **ppFVar1;
  int *piVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<int> *pTVar4;
  TManagedArrayBase<int> *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  
  if (((this->ParentAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionHierarchyFacade.cpp"
                         ,0x6d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->ParentAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->ChildrenAttribute).ConstAttributeArray !=
      (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) {
    local_res18 = 0;
    TManagedArrayAccessor<int>::Add(&this->LevelAttribute,MakePersistent,(FName)0x0);
    ppFVar1 = &(this->LevelAttribute).Collection;
    if ((((this->LevelAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
        (*ppFVar1 == (FManagedArrayCollection *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ((this->LevelAttribute).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->LevelAttribute).AttributeArray;
    if (((this->ParentAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar4 = (this->ParentAttribute).ConstAttributeArray;
    local_res8[0] = -1;
    if ((*ppFVar1 == (FManagedArrayCollection *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0xac,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = (TManagedArrayBase<int> *)(this->LevelAttribute).AttributeArray;
    if (this_00 != (TManagedArrayBase<int> *)0x0) {
      TManagedArrayBase<int>::Fill(this_00,local_res8);
    }
    uVar10 = 0;
    iVar7 = (**(code **)(*(longlong *)pTVar3 + 0x60))(pTVar3);
    if (0 < iVar7) {
      lVar12 = 0;
      local_res10 = 0;
      do {
        uVar9 = ~uVar10 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar10 < *(int *)&pTVar3->field_0x18) {
          uVar8 = uVar9;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)(lVar12 + *(longlong *)&pTVar3->field_0x10) == -1) {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&pTVar3->field_0x18) {
            uVar8 = uVar9;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)(lVar12 + *(longlong *)&pTVar3->field_0x10) = 0;
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&pTVar4->field_0x18) {
            uVar8 = uVar9;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar8 = *(uint *)(lVar12 + *(longlong *)&pTVar4->field_0x10);
          if (uVar8 != 0xffffffff) {
            do {
              uVar9 = 0;
              if ((int)uVar10 < *(int *)&pTVar3->field_0x18) {
                uVar9 = ~uVar10 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              piVar2 = (int *)(lVar12 + *(longlong *)&pTVar3->field_0x10);
              *piVar2 = *piVar2 + 1;
              uVar9 = 0;
              if ((int)uVar8 < *(int *)&pTVar3->field_0x18) {
                uVar9 = ~uVar8 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar7 = *(int *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar8 * 4);
              if (iVar7 != -1) {
                uVar8 = 0;
                if ((int)uVar10 < *(int *)&pTVar3->field_0x18) {
                  uVar8 = ~uVar10 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                piVar2 = (int *)(local_res10 + *(longlong *)&pTVar3->field_0x10);
                *piVar2 = *piVar2 + iVar7;
                lVar12 = local_res10;
                break;
              }
              uVar9 = 0;
              if ((int)uVar8 < *(int *)&pTVar4->field_0x18) {
                uVar9 = ~uVar8 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar8 = *(uint *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar8 * 4);
              lVar12 = local_res10;
            } while (uVar8 != 0xffffffff);
          }
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&pTVar3->field_0x18) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (0 < *(int *)(lVar12 + *(longlong *)&pTVar3->field_0x10)) {
            uVar8 = 0;
            if ((int)uVar10 < *(int *)&pTVar3->field_0x18) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar7 = *(int *)(lVar12 + *(longlong *)&pTVar3->field_0x10);
            uVar8 = 0;
            if ((int)uVar10 < *(int *)&pTVar4->field_0x18) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar8 = *(uint *)(lVar12 + *(longlong *)&pTVar4->field_0x10);
            while (uVar8 != 0xffffffff) {
              iVar7 = iVar7 + -1;
              uVar11 = ~uVar8 >> 0x1f;
              uVar9 = 0;
              if ((int)uVar8 < *(int *)&pTVar3->field_0x18) {
                uVar9 = uVar11;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar13 = (longlong)(int)uVar8;
              lVar12 = local_res10;
              if (*(int *)(*(longlong *)&pTVar3->field_0x10 + lVar13 * 4) != -1) break;
              uVar9 = 0;
              if ((int)uVar8 < *(int *)&pTVar3->field_0x18) {
                uVar9 = uVar11;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              *(int *)(*(longlong *)&pTVar3->field_0x10 + lVar13 * 4) = iVar7;
              uVar9 = 0;
              if ((int)uVar8 < *(int *)&pTVar4->field_0x18) {
                uVar9 = uVar11;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar12 = local_res10;
              uVar8 = *(uint *)(*(longlong *)&pTVar4->field_0x10 + lVar13 * 4);
            }
          }
        }
        lVar12 = lVar12 + 4;
        uVar10 = uVar10 + 1;
        local_res10 = lVar12;
        iVar7 = (**(code **)(*(longlong *)pTVar3 + 0x60))(pTVar3);
      } while ((int)uVar10 < iVar7);
    }
  }
  return;
}

// GetChildrenAsArray @ 143fafe80

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Facades::FCollectionHierarchyFacade::GetChildrenAsArray
          (FCollectionHierarchyFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  pTVar1 = (this->ChildrenAttribute).ConstAttributeArray;
  if (pTVar1 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  uVar5 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             ((longlong)param_1 * 0x50 + *(longlong *)&pTVar1->field_0x10),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInitialLevel @ 143fb0e00

int __thiscall
Chaos::Facades::FCollectionHierarchyFacade::GetInitialLevel
          (FCollectionHierarchyFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  pTVar1 = (this->LevelAttribute).ConstAttributeArray;
  if (pTVar1 == (TManagedArray<int> *)0x0) {
    return -1;
  }
  uVar4 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  return *(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 4);
}

// GetParent @ 143fb1960

int __thiscall
Chaos::Facades::FCollectionHierarchyFacade::GetParent(FCollectionHierarchyFacade *this,int param_1)

{
  int *piVar1;
  
  piVar1 = TManagedArrayAccessor<int>::operator[](&this->ParentAttribute,param_1);
  return *piVar1;
}

// GetRootIndex @ 143fb2070

int __thiscall
Chaos::Facades::FCollectionHierarchyFacade::GetRootIndex(FCollectionHierarchyFacade *this)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  
  pTVar1 = (this->ParentAttribute).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) &&
     ((this->ChildrenAttribute).ConstAttributeArray !=
      (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) {
    uVar7 = 0;
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < *(int *)&pTVar1->field_0x18) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
        }
        if (*(int *)(lVar6 + *(longlong *)&pTVar1->field_0x10) == -1) {
          return uVar7;
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 4;
        iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      } while ((int)uVar7 < iVar4);
    }
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    if (iVar4 != 0) {
      `Chaos::Facades::FCollectionHierarchyFacade::GetRootIndex'::__l5::<lambda_1>::operator()
                (local_res8);
    }
  }
  return -1;
}

// GetRootIndices @ 143fb2160

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Facades::FCollectionHierarchyFacade::GetRootIndices
          (FCollectionHierarchyFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  uint local_18 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar1 = (this->ParentAttribute).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<int> *)0x0) {
    local_18[0] = 0;
    iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    if ((int)local_18[0] < iVar5) {
      do {
        lVar8 = (longlong)(int)local_18[0];
        uVar6 = 0;
        if ((int)local_18[0] < *(int *)&pTVar1->field_0x18) {
          uVar6 = ~local_18[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        if (*(int *)(*(longlong *)&pTVar1->field_0x10 + lVar8 * 4) == -1) {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
              ((FScriptContainerElement *)local_18 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar7;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
               local_18[0];
        }
        local_18[0] = local_18[0] + 1;
        iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      } while ((int)local_18[0] < iVar5);
    }
  }
  return __return_storage_ptr__;
}

// GetRootIndices @ 143fb22e0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::Facades::FCollectionHierarchyFacade::GetRootIndices
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TManagedArrayAccessor<int> *param_1)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  uint local_18 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar1 = param_1->ConstAttributeArray;
  if (pTVar1 != (TManagedArray<int> *)0x0) {
    local_18[0] = 0;
    iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    if ((int)local_18[0] < iVar5) {
      do {
        lVar8 = (longlong)(int)local_18[0];
        uVar6 = 0;
        if ((int)local_18[0] < *(int *)&pTVar1->field_0x18) {
          uVar6 = ~local_18[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        if (*(int *)(*(longlong *)&pTVar1->field_0x10 + lVar8 * 4) == -1) {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
              ((FScriptContainerElement *)local_18 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar7;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
               local_18[0];
        }
        local_18[0] = local_18[0] + 1;
        iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      } while ((int)local_18[0] < iVar5);
    }
  }
  return __return_storage_ptr__;
}

// GetTransformArrayInDepthFirstOrder @ 143fb37b0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Facades::FCollectionHierarchyFacade::GetTransformArrayInDepthFirstOrder
          (FCollectionHierarchyFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ComputeTransformIndicesInDepthFirstOrder(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HasLevelAttribute @ 143fb45f0

bool __thiscall
Chaos::Facades::FCollectionHierarchyFacade::HasLevelAttribute(FCollectionHierarchyFacade *this)

{
  return (this->LevelAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0;
}

// IsLevelAttributePersistent @ 143fb79b0

bool __thiscall
Chaos::Facades::FCollectionHierarchyFacade::IsLevelAttributePersistent
          (FCollectionHierarchyFacade *this)

{
  bool bVar1;
  
  if ((this->LevelAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) {
    bVar1 = FManagedArrayCollection::IsAttributePersistent
                      ((this->LevelAttribute).ConstCollection,(this->LevelAttribute).Name,
                       (this->LevelAttribute).Group);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsValid @ 143fb7b80

bool __thiscall
Chaos::Facades::FCollectionHierarchyFacade::IsValid(FCollectionHierarchyFacade *this)

{
  if (((this->ParentAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->ChildrenAttribute).ConstAttributeArray !=
      (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) {
    return true;
  }
  return false;
}

// operator() @ 1504aadf0

bool __thiscall
`Chaos::Facades::FCollectionHierarchyFacade::GetRootIndex'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_87822172713648081>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_87822172713648081>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

