// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 60

// FCollectionTransformSelectionFacade @ 143fd4420

FCollectionTransformSelectionFacade * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
FCollectionTransformSelectionFacade
          (FCollectionTransformSelectionFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TManagedArray<int> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  FCollectionTransformSelectionFacade *pFVar6;
  char *pcVar7;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  this->ConstCollection = param_1;
  ::FName::FName(&local_b0,"Parent");
  (this->ParentAttribute).Name = local_b0;
  (this->ParentAttribute).ConstCollection = param_1;
  (this->ParentAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ParentAttribute).Group = FTransformCollection::TransformGroup;
  (this->ParentAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ParentAttribute).DefaultGroupDependency.Number = 0;
  (this->ParentAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_b0,FTransformCollection::TransformGroup);
  (this->ParentAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_a8,"Children");
  (this->ChildrenAttribute).Name = local_a8;
  (this->ChildrenAttribute).ConstCollection = param_1;
  (this->ChildrenAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ChildrenAttribute).Group = FTransformCollection::TransformGroup;
  (this->ChildrenAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ChildrenAttribute).DefaultGroupDependency.Number = 0;
  (this->ChildrenAttribute).AttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
  local_58 = local_a8;
  local_50 = FTransformCollection::TransformGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pcVar7 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = (char *)0x0;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\x0e')) {
    pTVar8 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> **)
              (pcVar7 + 0x20);
    if (pTVar8 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FCollectionTransformSelectionFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->ChildrenAttribute).ConstAttributeArray = pTVar8;
  ::FName::FName(&local_a0,"Level");
  (this->LevelAttribute).Name = local_a0;
  (this->LevelAttribute).ConstCollection = param_1;
  (this->LevelAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->LevelAttribute).Group = FTransformCollection::TransformGroup;
  (this->LevelAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->LevelAttribute).DefaultGroupDependency.Number = 0;
  (this->LevelAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_a0,FTransformCollection::TransformGroup);
  (this->LevelAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_98,"SimulationType");
  (this->SimulationTypeAttribute).Name = local_98;
  (this->SimulationTypeAttribute).ConstCollection = param_1;
  (this->SimulationTypeAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->SimulationTypeAttribute).Group = FTransformCollection::TransformGroup;
  (this->SimulationTypeAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SimulationTypeAttribute).DefaultGroupDependency.Number = 0;
  (this->SimulationTypeAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_98,FTransformCollection::TransformGroup);
  (this->SimulationTypeAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_90,"TransformToGeometryIndex");
  (this->TransformToGeometryIndexAttribute).Name = local_90;
  (this->TransformToGeometryIndexAttribute).ConstCollection = param_1;
  (this->TransformToGeometryIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TransformToGeometryIndexAttribute).Group = FTransformCollection::TransformGroup;
  (this->TransformToGeometryIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TransformToGeometryIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->TransformToGeometryIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_90,FTransformCollection::TransformGroup);
  (this->TransformToGeometryIndexAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_88,"TransformIndex");
  (this->TransformIndexAttribute).Name = local_88;
  (this->TransformIndexAttribute).ConstCollection = param_1;
  (this->TransformIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TransformIndexAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->TransformIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TransformIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->TransformIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_88,FGeometryCollection::GeometryGroup);
  (this->TransformIndexAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_80,"VertexStart");
  (this->VertexStartAttribute).Name = local_80;
  (this->VertexStartAttribute).ConstCollection = param_1;
  (this->VertexStartAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexStartAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexStartAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexStartAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_80,FGeometryCollection::GeometryGroup);
  (this->VertexStartAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_78,"VertexCount");
  (this->VertexCountAttribute).Name = local_78;
  (this->VertexCountAttribute).ConstCollection = param_1;
  (this->VertexCountAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexCountAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexCountAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_78,FGeometryCollection::GeometryGroup);
  (this->VertexCountAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_70,"FaceStart");
  (this->FaceStartAttribute).Name = local_70;
  (this->FaceStartAttribute).ConstCollection = param_1;
  (this->FaceStartAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->FaceStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->FaceStartAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FaceStartAttribute).DefaultGroupDependency.Number = 0;
  (this->FaceStartAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_70,FGeometryCollection::GeometryGroup);
  (this->FaceStartAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_68,"FaceCount");
  (this->FaceCountAttribute).Name = local_68;
  (this->FaceCountAttribute).ConstCollection = param_1;
  (this->FaceCountAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->FaceCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->FaceCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FaceCountAttribute).DefaultGroupDependency.Number = 0;
  (this->FaceCountAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_68,FGeometryCollection::GeometryGroup);
  (this->FaceCountAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_60,"Indices");
  (this->IndicesAttribute).Name = local_60;
  (this->IndicesAttribute).ConstCollection = param_1;
  (this->IndicesAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->IndicesAttribute).Group = FGeometryCollection::FacesGroup;
  (this->IndicesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->IndicesAttribute).DefaultGroupDependency.Number = 0;
  (this->IndicesAttribute).AttributeArray = (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0;
  local_48 = local_60;
  local_40 = FGeometryCollection::FacesGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pcVar7 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = (char *)0x0;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\x02')) {
    (this->IndicesAttribute).ConstAttributeArray = (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0
    ;
  }
  else {
    pTVar1 = *(TManagedArray<UE::Math::TIntVector3<int>_> **)(pcVar7 + 0x20);
    if (pTVar1 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FCollectionTransformSelectionFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
    (this->IndicesAttribute).ConstAttributeArray = pTVar1;
  }
  return this;
}

// operator() @ 143fd7cb0

bool __thiscall
`GeometryCollection::Facades::FCollectionTransformSelectionFacade::RemoveRootNodes'::__l5::
<lambda_2>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x38);
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x18)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(int *)(*(longlong *)(lVar1 + 0x10) + (longlong)param_1 * 4) == -1;
}

// operator() @ 143fd7d60

bool __thiscall
`GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize'::__l8::<lambda_2>::
operator()(void *this,int param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  
  if (-1 < param_1) {
    lVar2 = *(longlong *)this;
    plVar3 = *(longlong **)(lVar2 + 0x38);
    if (plVar3 == (longlong *)0x0) {
      iVar7 = FManagedArrayCollection::NumElements
                        (*(FManagedArrayCollection **)(lVar2 + 8),*(FName *)(lVar2 + 0x20));
    }
    else {
      iVar7 = (**(code **)(*plVar3 + 0x60))(plVar3);
    }
    if (param_1 < iVar7) {
      plVar3 = *(longlong **)(*(longlong *)this + 0x38);
      if ((plVar3 != (longlong *)0x0) &&
         (iVar7 = (**(code **)(*plVar3 + 0x60))(plVar3), param_1 < iVar7)) {
        while( true ) {
          uVar8 = 0;
          if (param_1 < (int)plVar3[3]) {
            uVar8 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (*(int *)(plVar3[2] + (longlong)param_1 * 4) == -1) break;
          uVar8 = 0;
          if (param_1 < (int)plVar3[3]) {
            uVar8 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          param_1 = *(uint *)(plVar3[2] + (longlong)param_1 * 4);
          puVar9 = *(uint **)((longlong)this + 8);
          puVar1 = puVar9 + *(int *)((longlong)this + 0x10);
          for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
            if (*puVar9 == param_1) {
              return true;
            }
          }
        }
      }
      return false;
    }
  }
  return true;
}

// ConvertCurveSelectionToFaceSelection @ 143fe16e0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertCurveSelectionToFaceSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TManagedArray<int> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  int local_258 [4];
  FCollectionCurveGeometryFacade local_248;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FCollectionCurveGeometryFacade::FCollectionCurveGeometryFacade(&local_248,this->ConstCollection);
  bVar6 = FCollectionCurveGeometryFacade::IsValid(&local_248);
  if (bVar6) {
    if (local_248.CurvePointOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) {
      FManagedArrayCollection::NumElements
                (local_248.CurvePointOffsets.ConstCollection,local_248.CurvePointOffsets.Group);
    }
    else {
      (**(code **)(*(longlong *)local_248.CurvePointOffsets.ConstAttributeArray + 0x60))();
    }
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    local_res10 = pFVar11 + (longlong)iVar1 * 4;
    while( true ) {
      pFVar3 = local_res10;
      if (param_1->ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar3) break;
      if (*(uint *)pFVar11 == 0) {
        iVar8 = 0;
      }
      else {
        if ((local_248.CurvePointOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x67,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        pTVar5 = local_248.CurvePointOffsets.ConstAttributeArray;
        uVar10 = *(uint *)pFVar11 - 1;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)&(local_248.CurvePointOffsets.ConstAttributeArray)->field_0x18) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        iVar8 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar10 * 4);
      }
      if ((local_248.CurvePointOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      pTVar5 = local_248.CurvePointOffsets.ConstAttributeArray;
      uVar7 = *(uint *)pFVar11;
      uVar10 = 0;
      if ((int)uVar7 < *(int *)&(local_248.CurvePointOffsets.ConstAttributeArray)->field_0x18) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar2 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar7 * 4);
      uVar7 = *(uint *)pFVar11;
      for (local_258[0] = (iVar8 - *(uint *)pFVar11) * 2;
          local_258[0] < (int)((iVar2 - uVar7) * 2 + -2); local_258[0] = local_258[0] + 1) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_258) &&
            ((FScriptContainerElement *)local_258 <
             pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
             local_258[0];
      }
      pFVar11 = pFVar11 + 4;
    }
  }
  return __return_storage_ptr__;
}

// ConvertCurveSelectionToGeometrySelection @ 143fe19f0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertCurveSelectionToGeometrySelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TManagedArray<int> *pTVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint local_248 [4];
  FCollectionCurveGeometryFacade local_238;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FCollectionCurveGeometryFacade::FCollectionCurveGeometryFacade(&local_238,this->ConstCollection);
  bVar5 = FCollectionCurveGeometryFacade::IsValid(&local_238);
  if (bVar5) {
    if ((local_238.GeometryCurveOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    pTVar4 = local_238.GeometryCurveOffsets.ConstAttributeArray;
    puVar1 = &(local_238.GeometryCurveOffsets.ConstAttributeArray)->field_0x10;
    local_248[0] = 0;
    while( true ) {
      if (local_238.GeometryCurveOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) {
        iVar6 = FManagedArrayCollection::NumElements
                          (local_238.GeometryCurveOffsets.ConstCollection,
                           local_238.GeometryCurveOffsets.Group);
      }
      else {
        iVar6 = (**(code **)(*(longlong *)local_238.GeometryCurveOffsets.ConstAttributeArray + 0x60)
                )();
      }
      if (iVar6 <= (int)local_248[0]) break;
      if ((-1 < (int)local_248[0]) &&
         (iVar6 = *(int *)&pTVar4->field_0x18, (int)local_248[0] < iVar6)) {
        iVar11 = 0;
        if (local_248[0] != 0) {
          uVar10 = local_248[0] - 1;
          uVar7 = 0;
          if ((int)uVar10 < iVar6) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar8;
          }
          iVar11 = *(int *)(*(longlong *)puVar1 + (longlong)(int)uVar10 * 4);
        }
        lVar12 = (longlong)(int)local_248[0];
        uVar7 = 0;
        if ((int)local_248[0] < *(int *)&pTVar4->field_0x18) {
          uVar7 = ~local_248[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        bVar5 = true;
        iVar6 = *(int *)(*(longlong *)puVar1 + lVar12 * 4);
        if (iVar11 < iVar6) {
          pFVar2 = (param_1->AllocatorInstance).Data;
          do {
            for (pFVar9 = pFVar2; pFVar9 != pFVar2 + (longlong)param_1->ArrayNum * 4;
                pFVar9 = pFVar9 + 4) {
              if (*(int *)pFVar9 == iVar11) {
                if (param_2) goto LAB_143fe1bcc;
                goto LAB_143fe1be4;
              }
            }
            bVar5 = false;
            if (param_2) goto LAB_143fe1c7b;
LAB_143fe1bcc:
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar6);
        }
        if ((param_2) && (bVar5)) {
LAB_143fe1be4:
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)local_248) &&
             (((FScriptContainerElement *)local_248 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4 &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)))) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar8;
          }
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == __return_storage_ptr__->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
               local_248[0];
        }
      }
LAB_143fe1c7b:
      local_248[0] = local_248[0] + 1;
    }
  }
  return __return_storage_ptr__;
}

// ConvertCurveSelectionToTransformSelection @ 143fe1cd0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertCurveSelectionToTransformSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  undefined1 *puVar1;
  int iVar2;
  TManagedArray<int> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TManagedArray<int> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  FCollectionCurveGeometryFacade local_238;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FCollectionCurveGeometryFacade::FCollectionCurveGeometryFacade(&local_238,this->ConstCollection);
  bVar7 = FCollectionCurveGeometryFacade::IsValid(&local_238);
  if (!bVar7) {
    return __return_storage_ptr__;
  }
  pTVar3 = (this->TransformIndexAttribute).ConstAttributeArray;
  if (pTVar3 != (TManagedArray<int> *)0x0) {
    if ((local_238.GeometryCurveOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar10;
    }
    pTVar6 = local_238.GeometryCurveOffsets.ConstAttributeArray;
    uVar12 = 0;
    puVar1 = &(local_238.GeometryCurveOffsets.ConstAttributeArray)->field_0x10;
    lVar13 = 0;
    while( true ) {
      if (local_238.GeometryCurveOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) {
        iVar8 = FManagedArrayCollection::NumElements
                          (local_238.GeometryCurveOffsets.ConstCollection,
                           local_238.GeometryCurveOffsets.Group);
      }
      else {
        iVar8 = (**(code **)(*(longlong *)local_238.GeometryCurveOffsets.ConstAttributeArray + 0x60)
                )();
      }
      if (iVar8 <= (int)uVar12) break;
      if ((-1 < (int)uVar12) && (iVar8 = *(int *)&pTVar6->field_0x18, (int)uVar12 < iVar8)) {
        if (uVar12 == 0) {
          iVar8 = 0;
        }
        else {
          uVar9 = 0;
          if ((int)(uVar12 - 1) < iVar8) {
            uVar9 = -uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar10;
          }
          iVar8 = *(int *)(lVar13 + -4 + *(longlong *)puVar1);
        }
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&pTVar6->field_0x18) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        bVar7 = true;
        iVar2 = *(int *)(lVar13 + *(longlong *)puVar1);
        if (iVar8 < iVar2) {
          pFVar4 = (param_1->AllocatorInstance).Data;
          do {
            for (pFVar11 = pFVar4; pFVar11 != pFVar4 + (longlong)param_1->ArrayNum * 4;
                pFVar11 = pFVar11 + 4) {
              if (*(int *)pFVar11 == iVar8) {
                if (((param_2) || (lVar13 < 0)) || (*(int *)&pTVar3->field_0x18 <= (int)uVar12))
                goto LAB_143fe1ebc;
                goto LAB_143fe1edd;
              }
            }
            bVar7 = false;
            if (param_2) goto LAB_143fe1fb3;
LAB_143fe1ebc:
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar2);
        }
        if (((param_2) && (bVar7)) && ((int)uVar12 < *(int *)&pTVar3->field_0x18)) {
LAB_143fe1edd:
          uVar9 = 0;
          if ((int)uVar12 < *(int *)&pTVar3->field_0x18) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar10;
          }
          pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
          pFVar11 = (FScriptContainerElement *)(*(longlong *)&pTVar3->field_0x10 + lVar13);
          if (((pFVar4 <= pFVar11) &&
              (pFVar11 < pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
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
          *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
               *(undefined4 *)pFVar11;
        }
      }
LAB_143fe1fb3:
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 4;
    }
  }
  return __return_storage_ptr__;
}

// ConvertCurveSelectionToVertexSelection @ 143fe2040

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertCurveSelectionToVertexSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TManagedArray<int> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  int local_258 [4];
  FCollectionCurveGeometryFacade local_248;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FCollectionCurveGeometryFacade::FCollectionCurveGeometryFacade(&local_248,this->ConstCollection);
  bVar6 = FCollectionCurveGeometryFacade::IsValid(&local_248);
  if (bVar6) {
    if (local_248.CurvePointOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) {
      FManagedArrayCollection::NumElements
                (local_248.CurvePointOffsets.ConstCollection,local_248.CurvePointOffsets.Group);
    }
    else {
      (**(code **)(*(longlong *)local_248.CurvePointOffsets.ConstAttributeArray + 0x60))();
    }
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    local_res10 = pFVar11 + (longlong)iVar1 * 4;
    while( true ) {
      pFVar3 = local_res10;
      if (param_1->ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar3) break;
      if (*(uint *)pFVar11 == 0) {
        iVar8 = 0;
      }
      else {
        if ((local_248.CurvePointOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x67,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        pTVar5 = local_248.CurvePointOffsets.ConstAttributeArray;
        uVar10 = *(uint *)pFVar11 - 1;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)&(local_248.CurvePointOffsets.ConstAttributeArray)->field_0x18) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        iVar8 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar10 * 4);
      }
      if ((local_248.CurvePointOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      pTVar5 = local_248.CurvePointOffsets.ConstAttributeArray;
      uVar7 = *(uint *)pFVar11;
      uVar10 = 0;
      if ((int)uVar7 < *(int *)&(local_248.CurvePointOffsets.ConstAttributeArray)->field_0x18) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar2 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar7 * 4);
      for (local_258[0] = iVar8 * 2; local_258[0] < iVar2 * 2; local_258[0] = local_258[0] + 1) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_258) &&
            ((FScriptContainerElement *)local_258 <
             pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
             local_258[0];
      }
      pFVar11 = pFVar11 + 4;
    }
  }
  return __return_storage_ptr__;
}

// ConvertEmbeddedSelectionToParents @ 143fe2350

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::ConvertEmbeddedSelectionToParents
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TManagedArray<int> *pTVar1;
  TManagedArray<int> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  if ((this->SimulationTypeAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) {
    if (((this->ParentAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar1 = (this->ParentAttribute).ConstAttributeArray;
    if (((this->SimulationTypeAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar2 = (this->SimulationTypeAttribute).ConstAttributeArray;
    Sanitize(this,param_1,true);
    iVar8 = param_1->ArrayNum;
    uVar9 = 0;
    if (0 < iVar8) {
      lVar11 = 0;
      do {
        uVar10 = ~uVar9 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar9 < iVar8) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = *(uint *)((param_1->AllocatorInstance).Data + lVar11);
        uVar7 = 0;
        if ((int)uVar6 < *(int *)&pTVar2->field_0x18) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)((longlong)(int)uVar6 * 4 + *(longlong *)&pTVar2->field_0x10) == 0) {
          uVar7 = 0;
          if ((int)uVar6 < *(int *)&pTVar1->field_0x18) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = *(int *)((longlong)(int)uVar6 * 4 + *(longlong *)&pTVar1->field_0x10);
          if (iVar8 == -1) {
            uVar6 = 0;
            if ((int)uVar9 < param_1->ArrayNum) {
              uVar6 = uVar10;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (param_1->AllocatorInstance).Data;
            iVar8 = param_1->ArrayNum + ~uVar9;
            if (1 < iVar8) {
              iVar8 = 1;
            }
            if (iVar8 != 0) {
              memmove(pFVar3 + (longlong)(int)uVar9 * 4,
                      pFVar3 + (longlong)(param_1->ArrayNum - iVar8) * 4,(longlong)iVar8 << 2);
            }
            param_1->ArrayNum = param_1->ArrayNum + -1;
            uVar9 = uVar9 - 1;
            lVar11 = lVar11 + -4;
          }
          else {
            uVar6 = 0;
            if ((int)uVar9 < param_1->ArrayNum) {
              uVar6 = uVar10;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(int *)((param_1->AllocatorInstance).Data + lVar11) = iVar8;
          }
        }
        iVar8 = param_1->ArrayNum;
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 4;
      } while ((int)uVar9 < iVar8);
    }
  }
  return;
}

// ConvertFaceSelectionToCurveSelection @ 143fe2650

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertFaceSelectionToCurveSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TManagedArray<int> *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint local_248 [4];
  FCollectionCurveGeometryFacade local_238;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FCollectionCurveGeometryFacade::FCollectionCurveGeometryFacade(&local_238,this->ConstCollection);
  bVar4 = FCollectionCurveGeometryFacade::IsValid(&local_238);
  if (!bVar4) {
    return __return_storage_ptr__;
  }
  if (local_238.CurvePointOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      (local_238.CurvePointOffsets.ConstCollection,local_238.CurvePointOffsets.Group
                      );
  }
  else {
    iVar5 = (**(code **)(*(longlong *)local_238.CurvePointOffsets.ConstAttributeArray + 0x60))();
  }
  local_248[0] = 0;
  if (0 < iVar5) {
    do {
      if (local_248[0] == 0) {
        iVar7 = 0;
      }
      else {
        if ((local_238.CurvePointOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x67,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar8;
        }
        pTVar3 = local_238.CurvePointOffsets.ConstAttributeArray;
        uVar10 = local_248[0] - 1;
        uVar6 = 0;
        if ((int)uVar10 < *(int *)&(local_238.CurvePointOffsets.ConstAttributeArray)->field_0x18) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar8;
        }
        iVar7 = *(int *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar10 * 4);
      }
      if ((local_238.CurvePointOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      pTVar3 = local_238.CurvePointOffsets.ConstAttributeArray;
      lVar12 = (longlong)(int)local_248[0];
      uVar6 = 0;
      if ((int)local_248[0] < *(int *)&(local_238.CurvePointOffsets.ConstAttributeArray)->field_0x18
         ) {
        uVar6 = ~local_248[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      iVar11 = (iVar7 - local_248[0]) * 2;
      iVar7 = (*(int *)(*(longlong *)&pTVar3->field_0x10 + lVar12 * 4) - local_248[0]) * 2 + -2;
      bVar4 = true;
      if (iVar11 < iVar7) {
        pFVar1 = (param_1->AllocatorInstance).Data;
        do {
          for (pFVar9 = pFVar1; pFVar9 != pFVar1 + (longlong)param_1->ArrayNum * 4;
              pFVar9 = pFVar9 + 4) {
            if (*(int *)pFVar9 == iVar11) {
              if (param_2) goto LAB_143fe287c;
              goto LAB_143fe2894;
            }
          }
          bVar4 = false;
          if (param_2) goto LAB_143fe292e;
LAB_143fe287c:
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar7);
      }
      if ((param_2) && (bVar4)) {
LAB_143fe2894:
        pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar1 <= (FScriptContainerElement *)local_248) &&
           (((FScriptContainerElement *)local_248 <
             pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 4 &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)))) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar8;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
             local_248[0];
      }
LAB_143fe292e:
      local_248[0] = local_248[0] + 1;
    } while ((int)local_248[0] < iVar5);
  }
  return __return_storage_ptr__;
}

// ConvertFaceSelectionToGeometrySelection @ 143fe29a0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertFaceSelectionToGeometrySelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TManagedArray<int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  longlong lVar11;
  TManagedArray<int> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_58;
  int local_54;
  uint local_50 [2];
  TManagedArray<int> *local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar12 = (this->FaceStartAttribute).ConstAttributeArray;
  if ((pTVar12 == (TManagedArray<int> *)0x0) ||
     ((this->FaceCountAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)) {
    return __return_storage_ptr__;
  }
  pTVar3 = (this->FaceCountAttribute).ConstAttributeArray;
  local_res10 = __return_storage_ptr__;
  local_48 = pTVar12;
  iVar6 = FManagedArrayCollection::NumElements
                    (this->ConstCollection,FGeometryCollection::GeometryGroup);
  local_54 = iVar6;
  if (param_2) {
    local_50[0] = 0;
    if (0 < iVar6) {
      do {
        uVar8 = local_50[0];
        uVar7 = 0;
        if ((int)local_50[0] < *(int *)&pTVar12->field_0x18) {
          uVar7 = ~local_50[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        iVar2 = *(int *)(*(longlong *)&pTVar12->field_0x10 + (longlong)(int)uVar8 * 4);
        iVar10 = 0;
        while( true ) {
          lVar11 = (longlong)(int)local_50[0];
          uVar8 = 0;
          if ((int)local_50[0] < *(int *)&pTVar3->field_0x18) {
            uVar8 = ~local_50[0] >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          if (*(int *)(*(longlong *)&pTVar3->field_0x10 + lVar11 * 4) <= iVar10) break;
          pFVar13 = (param_1->AllocatorInstance).Data;
          pFVar1 = pFVar13 + (longlong)param_1->ArrayNum * 4;
          while( true ) {
            if (pFVar13 == pFVar1) goto LAB_143fe2c84;
            if (*(int *)pFVar13 == iVar10 + iVar2) break;
            pFVar13 = pFVar13 + 4;
          }
          iVar10 = iVar10 + 1;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (__return_storage_ptr__,(int *)local_50);
LAB_143fe2c84:
        local_50[0] = local_50[0] + 1;
        pTVar12 = local_48;
      } while ((int)local_50[0] < iVar6);
    }
  }
  else {
    pFVar13 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar2 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        iVar6 = local_54;
      }
      __return_storage_ptr__ = local_res10;
      if (pFVar13 == pFVar1) break;
      iVar10 = *(int *)pFVar13;
      local_58 = 0;
      if (0 < iVar6) {
        do {
          uVar8 = local_58;
          uVar7 = 0;
          if ((int)local_58 < *(int *)&pTVar12->field_0x18) {
            uVar7 = ~local_58 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          lVar11 = (longlong)(int)local_58;
          iVar6 = *(int *)(*(longlong *)&pTVar12->field_0x10 + (longlong)(int)uVar8 * 4);
          uVar8 = 0;
          if ((int)local_58 < *(int *)&pTVar3->field_0x18) {
            uVar8 = ~local_58 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          if ((iVar6 <= iVar10) &&
             (iVar10 < *(int *)(*(longlong *)&pTVar3->field_0x10 + lVar11 * 4) + iVar6)) {
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (local_res10,(int *)&local_58);
            pTVar12 = local_48;
            iVar6 = local_54;
            break;
          }
          local_58 = local_58 + 1;
          pTVar12 = local_48;
          iVar6 = local_54;
        } while ((int)local_58 < local_54);
      }
      pFVar13 = pFVar13 + 4;
    }
  }
  return __return_storage_ptr__;
}

// ConvertFaceSelectionToTransformSelection @ 143fe2cc0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertFaceSelectionToTransformSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<int> *pTVar4;
  TManagedArray<int> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar3 = (this->TransformIndexAttribute).ConstAttributeArray;
  if (((pTVar3 == (TManagedArray<int> *)0x0) ||
      ((this->FaceStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)) ||
     ((this->FaceCountAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)) {
    return __return_storage_ptr__;
  }
  pTVar4 = (this->FaceStartAttribute).ConstAttributeArray;
  pTVar5 = (this->FaceCountAttribute).ConstAttributeArray;
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  iVar8 = FManagedArrayCollection::NumElements
                    (this->ConstCollection,FGeometryCollection::GeometryGroup);
  lVar11 = (longlong)iVar8;
  if (param_2) {
    uVar12 = 0;
    if (0 < iVar8) {
      lVar14 = 0;
      do {
        uVar15 = ~uVar12 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&pTVar4->field_0x18) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        iVar13 = 0;
        iVar8 = *(int *)(*(longlong *)&pTVar4->field_0x10 + lVar14 * 4);
        while( true ) {
          uVar9 = 0;
          if ((int)uVar12 < *(int *)&pTVar5->field_0x18) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar10;
          }
          if (*(int *)(*(longlong *)&pTVar5->field_0x10 + lVar14 * 4) <= iVar13) break;
          pFVar16 = (param_1->AllocatorInstance).Data;
          pFVar1 = pFVar16 + (longlong)param_1->ArrayNum * 4;
          while( true ) {
            __return_storage_ptr__ = local_res10;
            if (pFVar16 == pFVar1) goto LAB_143fe2ffb;
            if (*(int *)pFVar16 == iVar13 + iVar8) break;
            pFVar16 = pFVar16 + 4;
          }
          iVar13 = iVar13 + 1;
        }
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&pTVar3->field_0x18) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        __return_storage_ptr__ = local_res10;
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (local_res10,(int *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar12 * 4)
                  );
LAB_143fe2ffb:
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar14 < lVar11);
    }
    return __return_storage_ptr__;
  }
  pFVar16 = (param_1->AllocatorInstance).Data;
  iVar8 = param_1->ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar8 * 4;
LAB_143fe2d70:
  do {
    if (local_res18->ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar16 == pFVar1) {
      return __return_storage_ptr__;
    }
    iVar13 = *(int *)pFVar16;
    uVar12 = 0;
    lVar14 = 0;
    if (0 < lVar11) {
      do {
        uVar15 = ~uVar12 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&pTVar4->field_0x18) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        iVar2 = *(int *)(*(longlong *)&pTVar4->field_0x10 + lVar14 * 4);
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&pTVar5->field_0x18) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        if ((iVar2 <= iVar13) &&
           (iVar13 < *(int *)(*(longlong *)&pTVar5->field_0x10 + lVar14 * 4) + iVar2)) {
          uVar9 = 0;
          if ((int)uVar12 < *(int *)&pTVar3->field_0x18) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar10;
          }
          __return_storage_ptr__ = local_res10;
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (local_res10,
                     (int *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar12 * 4));
          pFVar16 = pFVar16 + 4;
          goto LAB_143fe2d70;
        }
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar14 < lVar11);
    }
    pFVar16 = pFVar16 + 4;
    __return_storage_ptr__ = local_res10;
  } while( true );
}

// ConvertFaceSelectionToVertexSelection @ 143fe30c0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertFaceSelectionToVertexSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  uint uVar3;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  uint local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar4 = (this->IndicesAttribute).ConstAttributeArray;
  if (pTVar4 != (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    local_res10 = param_1->ArrayNum;
    uVar9 = (ulonglong)(int)local_res10;
    pFVar11 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar11 + uVar9 * 4;
    while( true ) {
      if (param_1->ArrayNum != (int)uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar1) break;
      uVar3 = *(uint *)pFVar11;
      uVar10 = ~uVar3 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar3 < *(int *)&pTVar4->field_0x18) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      lVar2 = (longlong)(int)uVar3 * 0xc;
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (__return_storage_ptr__,(int *)(*(longlong *)&pTVar4->field_0x10 + lVar2));
      uVar7 = 0;
      if ((int)uVar3 < *(int *)&pTVar4->field_0x18) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (__return_storage_ptr__,(int *)(*(longlong *)&pTVar4->field_0x10 + 4 + lVar2));
      uVar7 = 0;
      if ((int)uVar3 < *(int *)&pTVar4->field_0x18) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (__return_storage_ptr__,(int *)(*(longlong *)&pTVar4->field_0x10 + 8 + lVar2));
      uVar9 = (ulonglong)local_res10;
      pFVar11 = pFVar11 + 4;
    }
  }
  return __return_storage_ptr__;
}

// ConvertGeometrySelectionToCurveSelection @ 143fe3290

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertGeometrySelectionToCurveSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  int local_258 [4];
  FCollectionCurveGeometryFacade local_248;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FCollectionCurveGeometryFacade::FCollectionCurveGeometryFacade(&local_248,this->ConstCollection);
  bVar6 = FCollectionCurveGeometryFacade::IsValid(&local_248);
  if (bVar6) {
    if ((local_248.GeometryCurveOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    local_res10 = pFVar11 + (longlong)iVar1 * 4;
    while( true ) {
      pFVar4 = local_res10;
      if (param_1->ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar4) break;
      uVar2 = *(uint *)pFVar11;
      if ((-1 < (int)uVar2) &&
         ((int)uVar2 < *(int *)&(local_248.GeometryCurveOffsets.ConstAttributeArray)->field_0x18)) {
        if (uVar2 == 0) {
          iVar8 = 0;
        }
        else {
          uVar10 = uVar2 - 1;
          uVar7 = 0;
          if ((int)uVar10 <
              *(int *)&(local_248.GeometryCurveOffsets.ConstAttributeArray)->field_0x18) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar9;
          }
          iVar8 = *(int *)(*(longlong *)
                            &(local_248.GeometryCurveOffsets.ConstAttributeArray)->field_0x10 +
                          (longlong)(int)uVar10 * 4);
        }
        uVar7 = 0;
        if ((int)uVar2 < *(int *)&(local_248.GeometryCurveOffsets.ConstAttributeArray)->field_0x18)
        {
          uVar7 = ~uVar2 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        iVar3 = *(int *)(*(longlong *)
                          &(local_248.GeometryCurveOffsets.ConstAttributeArray)->field_0x10 +
                        (longlong)(int)uVar2 * 4);
        for (local_258[0] = iVar8; local_258[0] < iVar3; local_258[0] = local_258[0] + 1) {
          pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_258) &&
              ((FScriptContainerElement *)local_258 <
               pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar9;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
               local_258[0];
        }
      }
      pFVar11 = pFVar11 + 4;
    }
  }
  return __return_storage_ptr__;
}

// ConvertGeometrySelectionToFaceSelection @ 143fe3540

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertGeometrySelectionToFaceSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  int iVar2;
  TManagedArray<int> *pTVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  int iVar11;
  TManagedArray<int> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  FScriptContainerElement *local_res20;
  int local_68 [2];
  TManagedArray<int> *local_60;
  FScriptContainerElement *local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar12 = (this->FaceStartAttribute).ConstAttributeArray;
  if ((pTVar12 != (TManagedArray<int> *)0x0) &&
     ((this->FaceCountAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    pFVar13 = (param_1->AllocatorInstance).Data;
    pTVar3 = (this->FaceCountAttribute).ConstAttributeArray;
    local_res10 = param_1->ArrayNum;
    uVar10 = (ulonglong)(int)local_res10;
    local_58 = pFVar13 + uVar10 * 4;
    local_res18 = param_1;
    local_60 = pTVar12;
    while( true ) {
      pFVar5 = local_58;
      local_res20 = pFVar13;
      if (local_res18->ArrayNum != (int)uVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar13 == pFVar5) break;
      uVar1 = *(uint *)pFVar13;
      if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&pTVar12->field_0x18)) {
        uVar7 = 0;
        if ((int)uVar1 < *(int *)&pTVar12->field_0x18) {
          uVar7 = ~uVar1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        iVar11 = 0;
        iVar2 = *(int *)(*(longlong *)&pTVar12->field_0x10 + (longlong)(int)uVar1 * 4);
        while( true ) {
          uVar7 = 0;
          if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
            uVar7 = ~uVar1 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          pTVar12 = local_60;
          pFVar13 = local_res20;
          if (*(int *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar1 * 4) <= iVar11)
          break;
          pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
          local_68[0] = iVar11 + iVar2;
          if (((pFVar13 <= (FScriptContainerElement *)local_68) &&
              ((FScriptContainerElement *)local_68 <
               pFVar13 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          iVar11 = iVar11 + 1;
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
               local_68[0];
        }
      }
      pFVar13 = pFVar13 + 4;
      uVar10 = (ulonglong)local_res10;
    }
  }
  return __return_storage_ptr__;
}

// ConvertGeometrySelectionToTransformSelection @ 143fe37b0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertGeometrySelectionToTransformSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<int> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined4 local_48 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar3 = (this->TransformIndexAttribute).ConstAttributeArray;
  if (pTVar3 != (TManagedArray<int> *)0x0) {
    local_res10 = param_1->ArrayNum;
    uVar11 = (ulonglong)(int)local_res10;
    pFVar12 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar12 + uVar11 * 4;
    while( true ) {
      if (param_1->ArrayNum != (int)uVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar12 == pFVar1) break;
      uVar2 = *(uint *)pFVar12;
      if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)&pTVar3->field_0x18)) {
        if (((this->TransformIndexAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x60,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        pTVar4 = (this->TransformIndexAttribute).ConstAttributeArray;
        uVar8 = 0;
        if ((int)uVar2 < *(int *)&pTVar4->field_0x18) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        local_48[0] = *(undefined4 *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar2 * 4);
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 <
             pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        iVar9 = __return_storage_ptr__->ArrayNum;
        if (iVar9 == __return_storage_ptr__->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar9 + 1;
        *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 4) =
             local_48[0];
      }
      uVar11 = (ulonglong)local_res10;
      pFVar12 = pFVar12 + 4;
    }
  }
  return __return_storage_ptr__;
}

// ConvertGeometrySelectionToVertexSelection @ 143fe39b0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertGeometrySelectionToVertexSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  int iVar2;
  TManagedArray<int> *pTVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  int iVar11;
  TManagedArray<int> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  FScriptContainerElement *local_res20;
  int local_68 [2];
  TManagedArray<int> *local_60;
  FScriptContainerElement *local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar12 = (this->VertexStartAttribute).ConstAttributeArray;
  if ((pTVar12 != (TManagedArray<int> *)0x0) &&
     ((this->VertexCountAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    pFVar13 = (param_1->AllocatorInstance).Data;
    pTVar3 = (this->VertexCountAttribute).ConstAttributeArray;
    local_res10 = param_1->ArrayNum;
    uVar10 = (ulonglong)(int)local_res10;
    local_58 = pFVar13 + uVar10 * 4;
    local_res18 = param_1;
    local_60 = pTVar12;
    while( true ) {
      pFVar5 = local_58;
      local_res20 = pFVar13;
      if (local_res18->ArrayNum != (int)uVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar13 == pFVar5) break;
      uVar1 = *(uint *)pFVar13;
      if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&pTVar12->field_0x18)) {
        uVar7 = 0;
        if ((int)uVar1 < *(int *)&pTVar12->field_0x18) {
          uVar7 = ~uVar1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        iVar11 = 0;
        iVar2 = *(int *)(*(longlong *)&pTVar12->field_0x10 + (longlong)(int)uVar1 * 4);
        while( true ) {
          uVar7 = 0;
          if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
            uVar7 = ~uVar1 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          pTVar12 = local_60;
          pFVar13 = local_res20;
          if (*(int *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar1 * 4) <= iVar11)
          break;
          pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
          local_68[0] = iVar11 + iVar2;
          if (((pFVar13 <= (FScriptContainerElement *)local_68) &&
              ((FScriptContainerElement *)local_68 <
               pFVar13 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          iVar11 = iVar11 + 1;
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
               local_68[0];
        }
      }
      pFVar13 = pFVar13 + 4;
      uVar10 = (ulonglong)local_res10;
    }
  }
  return __return_storage_ptr__;
}

// ConvertSelectionToClusterNodes @ 143fe3c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::ConvertSelectionToClusterNodes
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  ForElementType<unsigned_int> FVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  TManagedArray<int> *pTVar22;
  undefined1 auStackY_178 [32];
  undefined1 local_148;
  char local_147;
  uint local_144;
  TArray<int,TSizedDefaultAllocator<32>_> *local_140;
  TManagedArray<int> *local_138;
  uint local_12c;
  int local_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_120;
  undefined4 local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  int local_fc;
  FScriptContainerElement *local_f8;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  FSparseArrayAllocationInfo local_c8;
  FSparseArrayAllocationInfo local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_147 = param_2;
  local_140 = param_1;
  if (((this->ParentAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar22 = (this->ParentAttribute).ConstAttributeArray;
  local_138 = pTVar22;
  if (((this->SimulationTypeAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = (this->SimulationTypeAttribute).ConstAttributeArray;
  Sanitize(this,param_1,true);
  local_12c = param_1->ArrayNum;
  uVar11 = (ulonglong)(int)local_12c;
  pFVar21 = (param_1->AllocatorInstance).Data;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_f8 = pFVar21 + uVar11 * 4;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  do {
    while( true ) {
      pFVar3 = local_f8;
      if (param_1->ArrayNum != (int)uVar11) {
        local_148 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_148);
      }
      if (pFVar21 == pFVar3) {
        pTVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
                             &local_a8);
        if (param_1 != pTVar10) {
          pFVar21 = (param_1->AllocatorInstance).Data;
          if (pFVar21 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar21);
          }
          (param_1->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
          (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          param_1->ArrayNum = pTVar10->ArrayNum;
          param_1->ArrayMax = pTVar10->ArrayMax;
          pTVar10->ArrayNum = 0;
          pTVar10->ArrayMax = 0;
        }
        if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.AllocatorInstance.Data);
        }
        local_50 = 0;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free(local_58.Data);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_98);
        return;
      }
      local_144 = *(uint *)pFVar21;
      lVar14 = (longlong)(int)local_144;
      uVar18 = 0;
      if ((int)local_144 < *(int *)&pTVar1->field_0x18) {
        uVar18 = ~local_144 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar20 = *(int *)(*(longlong *)&pTVar1->field_0x10 + lVar14 * 4);
      if (iVar20 != 2) break;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_108,
                 (bool *)&local_144);
LAB_143fe46f8:
      uVar11 = (ulonglong)local_12c;
      pFVar21 = pFVar21 + 4;
      param_2 = (bool)local_147;
    }
    lVar14 = (longlong)(int)local_144;
    uVar18 = 0;
    if ((int)local_144 < *(int *)&pTVar22->field_0x18) {
      uVar18 = ~local_144 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar18 = *(uint *)(*(longlong *)&pTVar22->field_0x10 + lVar14 * 4);
    uVar17 = local_144;
    if (iVar20 == 0) {
      if (uVar18 != 0xffffffff) {
        uVar17 = 0;
        if ((int)uVar18 < *(int *)&pTVar22->field_0x18) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar17 = uVar18;
        uVar18 = *(uint *)(*(longlong *)&pTVar22->field_0x10 + (longlong)(int)uVar18 * 4);
        goto LAB_143fe3e61;
      }
LAB_143fe3e6a:
      uVar7 = 0;
      if ((int)uVar17 < *(int *)&pTVar1->field_0x18) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)(int)uVar17 * 4) == 1) {
        param_1 = local_140;
        if (param_2 == false) goto LAB_143fe46f8;
        if (local_64 == 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                             (int *)(local_98 + 0xc));
          iVar20 = local_70;
          if (local_70 == 0) {
            iVar15 = 0;
LAB_143fe3f50:
            if (local_6c < local_70 + 1) {
              uVar18 = local_6c + 0x1fU >> 5;
              uVar17 = local_70 + 0x20U >> 5;
              if (uVar17 < 5) {
                local_6c = 4;
              }
              else {
                uVar11 = (ulonglong)uVar17;
                if (uVar18 < 5) {
                  uVar18 = 0;
                }
                if (uVar18 == 0) {
                  uVar19 = 4;
                  if (4 < uVar11) {
                    uVar19 = uVar11;
                  }
                }
                else {
                  uVar19 = ((ulonglong)uVar17 * 3 >> 3) + 0x10 + uVar11;
                }
                uVar8 = FMemory::QuantizeSize(uVar19 * 4,0);
                local_6c = (int)(uVar8 >> 2);
                if (local_6c < (int)uVar17) {
                  local_6c = 0x7fffffff;
                }
              }
              local_6c = local_6c << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
            }
            local_70 = local_70 + 1;
            uVar17 = local_70 >> 0x1f & 0x1f;
            uVar18 = local_70 + uVar17;
            iVar6 = (uVar18 & 0x1f) - uVar17;
            if (iVar6 != 0) {
              FVar12 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
              if (local_78 != (ForElementType<unsigned_int>)0x0) {
                FVar12 = local_78;
              }
              puVar16 = (uint *)((longlong)FVar12 + (longlong)((int)uVar18 >> 5) * 4);
              *puVar16 = *puVar16 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
            }
          }
          else {
            iVar15 = (int)(local_70 + (local_70 >> 0x1f & 0x1fU)) >> 5;
            if (iVar15 != (int)((local_70 + -1 >> 0x1f & 0x1fU) + local_70 + -1) >> 5)
            goto LAB_143fe3f50;
            local_70 = local_70 + 1;
          }
          FVar12 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar12 = local_78;
          }
          puVar16 = (uint *)((longlong)FVar12 + (longlong)iVar15 * 4);
          *puVar16 = *puVar16 & ~(1 << ((byte)iVar20 & 0x1f));
          iVar20 = local_68;
        }
        else {
          iVar20 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
          local_64 = local_64 + -1;
          iVar5 = local_68;
          if (local_64 != 0) {
            *(undefined4 *)(local_98._0_8_ + (longlong)iVar20 * 0xc) = 0xffffffff;
          }
        }
        local_68 = iVar20;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,&local_c8,iVar5);
        if (local_c8.Pointer == (uint *)0x0) {
          puVar16 = (uint *)0x0;
        }
        else {
          *(uint *)local_c8.Pointer = local_144;
          *(uint *)((longlong)local_c8.Pointer + 4) = 0xffffffff;
          puVar16 = local_c8.Pointer;
        }
        uVar18 = *puVar16;
        if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
          FVar13.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar13.Data = local_58.Data;
          }
          for (iVar20 = *(int *)((longlong)FVar13.Data + (ulonglong)(local_50 - 1 & uVar18) * 4);
              iVar20 != -1; iVar20 = *(int *)(local_98._0_8_ + (longlong)iVar20 * 0xc + 4)) {
            if (*(uint *)(local_98._0_8_ + (longlong)iVar20 * 0xc) == uVar18) {
              if (iVar20 != -1) {
                *(uint *)(local_98._0_8_ + (longlong)iVar20 * 0xc) = uVar18;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_98,local_c8.Index,1);
                param_1 = local_140;
                pTVar22 = local_138;
                goto LAB_143fe46f8;
              }
              break;
            }
          }
        }
        uVar17 = local_98._8_4_ - local_64;
        if (uVar17 < 4) {
          uVar7 = 1;
        }
        else {
          uVar11 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_104 = (undefined4)lVar14;
          uVar7 = 1 << ((byte)lVar14 & 0x1f);
        }
        if (((int)uVar17 < 1) || ((int)uVar7 <= (int)local_50)) {
          uVar18 = local_50 - 1 & uVar18;
          puVar16[2] = uVar18;
          FVar13.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar13.Data = local_58.Data;
          }
          uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar18;
          puVar16[1] = *(uint *)((longlong)FVar13.Data + uVar11 * 4);
          *(int *)((longlong)FVar13.Data + uVar11 * 4) = local_c8.Index;
          param_1 = local_140;
          pTVar22 = local_138;
        }
        else {
          local_50 = uVar7;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
          param_1 = local_140;
          pTVar22 = local_138;
        }
        goto LAB_143fe46f8;
      }
    }
    else {
LAB_143fe3e61:
      if (uVar18 == 0xffffffff) goto LAB_143fe3e6a;
    }
    param_1 = local_140;
    if (uVar18 == (int)FManagedArrayCollection::Invalid) goto LAB_143fe46f8;
    uVar17 = 0;
    if ((int)uVar18 < *(int *)&pTVar1->field_0x18) {
      uVar17 = ~uVar18 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_1 = local_140;
    if (*(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)(int)uVar18 * 4) != 2)
    goto LAB_143fe46f8;
    if (local_64 == 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar20 = local_70;
      if (local_70 == 0) {
        iVar15 = 0;
LAB_143fe42aa:
        if (local_6c < local_70 + 1) {
          uVar17 = local_6c + 0x1fU >> 5;
          uVar7 = local_70 + 0x20U >> 5;
          if (uVar7 < 5) {
            local_6c = 4;
          }
          else {
            uVar11 = (ulonglong)uVar7;
            if (uVar17 < 5) {
              uVar17 = 0;
            }
            if (uVar17 == 0) {
              uVar19 = 4;
              if (4 < uVar11) {
                uVar19 = uVar11;
              }
            }
            else {
              uVar19 = ((ulonglong)uVar7 * 3 >> 3) + 0x10 + uVar11;
            }
            uVar8 = FMemory::QuantizeSize(uVar19 * 4,0);
            local_6c = (int)(uVar8 >> 2);
            if (local_6c < (int)uVar7) {
              local_6c = 0x7fffffff;
            }
          }
          local_6c = local_6c << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
        }
        local_70 = local_70 + 1;
        uVar7 = local_70 >> 0x1f & 0x1f;
        uVar17 = local_70 + uVar7;
        iVar6 = (uVar17 & 0x1f) - uVar7;
        if (iVar6 != 0) {
          FVar12 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar12 = local_78;
          }
          puVar16 = (uint *)((longlong)FVar12 + (longlong)((int)uVar17 >> 5) * 4);
          *puVar16 = *puVar16 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
        }
      }
      else {
        iVar15 = (int)(local_70 + (local_70 >> 0x1f & 0x1fU)) >> 5;
        if (iVar15 != (int)((local_70 + -1 >> 0x1f & 0x1fU) + local_70 + -1) >> 5)
        goto LAB_143fe42aa;
        local_70 = local_70 + 1;
      }
      FVar12 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_78;
      }
      puVar16 = (uint *)((longlong)FVar12 + (longlong)iVar15 * 4);
      *puVar16 = *puVar16 & ~(1 << ((byte)iVar20 & 0x1f));
      iVar20 = local_68;
    }
    else {
      iVar20 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
      local_64 = local_64 + -1;
      iVar5 = local_68;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)iVar20 * 0xc) = 0xffffffff;
      }
    }
    local_68 = iVar20;
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_b8,iVar5);
    if (local_b8.Pointer == (uint *)0x0) {
      puVar16 = (uint *)0x0;
    }
    else {
      *(uint *)local_b8.Pointer = uVar18;
      *(uint *)((longlong)local_b8.Pointer + 4) = 0xffffffff;
      puVar16 = local_b8.Pointer;
    }
    uVar18 = *puVar16;
    if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
      FVar13.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar13.Data = local_58.Data;
      }
      for (iVar20 = *(int *)((longlong)FVar13.Data + (ulonglong)(local_50 - 1 & uVar18) * 4);
          iVar20 != -1; iVar20 = *(int *)(local_98._0_8_ + (longlong)iVar20 * 0xc + 4)) {
        if (*(uint *)(local_98._0_8_ + (longlong)iVar20 * 0xc) == uVar18) {
          if (iVar20 != -1) {
            *(uint *)(local_98._0_8_ + (longlong)iVar20 * 0xc) = uVar18;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98,local_b8.Index,1);
            param_1 = local_140;
            pTVar22 = local_138;
            goto LAB_143fe46f8;
          }
          break;
        }
      }
    }
    uVar7 = local_98._8_4_ - local_64;
    uVar17 = 1;
    if (3 < uVar7) {
      uVar11 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_100 = (undefined4)lVar14;
      uVar17 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar7 < 1) || ((int)uVar17 <= (int)local_50)) {
      uVar18 = local_50 - 1 & uVar18;
      puVar16[2] = uVar18;
      FVar13.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar13.Data = local_58.Data;
      }
      uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar18;
      puVar16[1] = *(uint *)((longlong)FVar13.Data + uVar11 * 4);
      *(int *)((longlong)FVar13.Data + uVar11 * 4) = local_b8.Index;
      param_1 = local_140;
      pTVar22 = local_138;
      goto LAB_143fe46f8;
    }
    local_50 = uVar17;
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar17 != 0) {
      uVar18 = uVar17;
      if (uVar17 < 2) {
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          uVar18 = 0;
          goto LAB_143fe44f5;
        }
      }
      else {
LAB_143fe44f5:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar18,4);
      }
      if (0 < (int)uVar17) {
        uVar19 = (ulonglong)uVar17;
        uVar11 = 0;
        do {
          FVar13.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar13.Data = local_58.Data;
          }
          uVar9 = uVar11 & (longlong)(int)uVar17 - 1U;
          uVar11 = uVar11 + 1;
          *(undefined4 *)((longlong)FVar13.Data + uVar9 * 4) = 0xffffffff;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
    }
    param_1 = local_140;
    pTVar22 = local_138;
    if (local_50 == 0) goto LAB_143fe46f8;
    pTStack_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_128 = 0;
    uStack_124 = 1;
    iStack_114 = 0;
    iStack_110 = 0;
    if (local_70 != 0) {
      FVar12 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_78;
      }
      uVar18 = *(uint *)FVar12;
      while (uVar18 == 0) {
        iStack_110 = iStack_110 + 0x20;
        lVar14 = (longlong)local_128;
        local_128 = local_128 + 1;
        if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_128)
        goto LAB_143fe4604;
        uVar18 = ((uint *)((longlong)FVar12 + 4))[lVar14];
      }
      uStack_124 = -uVar18 & uVar18;
      uVar11 = (ulonglong)uStack_124 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_fc = (int)lVar14;
      iStack_114 = iStack_110 + -1 + local_fc;
      if (local_70 < iStack_114) {
LAB_143fe4604:
        iStack_114 = local_70;
      }
    }
    local_118 = 0xffffffff;
    local_f0 = (longlong *)local_98;
    local_e8._padding_ = CONCAT44(uStack_124,local_128);
    local_e8.CurrentBitIndex = iStack_114;
    local_e8.UnvisitedBitMask = 0xffffffff;
    local_e8._28_4_ = uStack_10c;
    local_e8.BaseBitIndex = iStack_110;
    local_e8.Array = pTStack_120;
    iVar20 = iStack_114;
    if (local_70 <= iStack_114) goto LAB_143fe46f8;
    do {
      uVar18 = local_50 - 1 & *(uint *)(*local_f0 + (longlong)iVar20 * 0xc);
      lVar14 = *local_f0 + (longlong)iVar20 * 0xc;
      *(uint *)(lVar14 + 8) = uVar18;
      FVar13.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar13.Data = local_58.Data;
      }
      uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar18;
      *(undefined4 *)(lVar14 + 4) = *(undefined4 *)((longlong)FVar13.Data + uVar11 * 4);
      *(int *)((longlong)FVar13.Data + uVar11 * 4) = iVar20;
      local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
      iVar20 = local_e8.CurrentBitIndex;
    } while (local_e8.CurrentBitIndex < (local_e8.Array)->NumBits);
    pFVar21 = pFVar21 + 4;
    uVar11 = (ulonglong)local_12c;
    param_1 = local_140;
    pTVar22 = local_138;
    param_2 = (bool)local_147;
  } while( true );
}

// ConvertSelectionToRigidNodes @ 143fe47b0

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::ConvertSelectionToRigidNodes
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  ForAnyElementType _Src;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  Sanitize(this,param_1,true);
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pFVar2 = pFVar4 + (longlong)iVar3 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    _Src.Data = local_28.AllocatorInstance.Data;
    if (pFVar4 == pFVar2) break;
    ConvertSelectionToRigidNodes(this,*(int *)pFVar4,&local_28);
    pFVar4 = pFVar4 + 4;
  }
  if (param_1 != &local_28) {
    iVar3 = local_28.ArrayNum;
    lVar5 = (longlong)local_28.ArrayNum;
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = local_28.ArrayNum;
    if ((local_28.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,*piVar1,&param_1->AllocatorInstance,local_28.ArrayNum,piVar1)
      ;
      if (iVar3 != 0) {
        memcpy((param_1->AllocatorInstance).Data,_Src.Data,lVar5 << 2);
      }
    }
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// ConvertSelectionToRigidNodes @ 143fe48b0

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::ConvertSelectionToRigidNodes
          (FCollectionTransformSelectionFacade *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar4;
  TManagedArray<int> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  longlong *plVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  pTVar4 = (this->ChildrenAttribute).ConstAttributeArray;
  if ((pTVar4 != (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) &&
     ((this->SimulationTypeAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    iVar9 = 0;
    pTVar5 = (this->SimulationTypeAttribute).ConstAttributeArray;
    uVar10 = 0;
    if (param_1 < *(int *)&pTVar5->field_0x18) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    local_res10[0] = param_1;
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)param_1 * 4) == 1) {
      pFVar6 = (param_2->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 < pFVar6 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == param_2->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar9 + 1;
      *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_res10[0];
    }
    else {
      lVar13 = (longlong)(int)local_res10[0];
      uVar10 = 0;
      if ((int)local_res10[0] < *(int *)&pTVar4->field_0x18) {
        uVar10 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar14 = 0;
      uVar10 = 1;
      plVar16 = (longlong *)(lVar13 * 0x50 + *(longlong *)&pTVar4->field_0x10);
      iVar3 = (int)plVar16[5];
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + 2);
      iVar11 = 0;
      if (iVar3 != 0) {
        pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = pTVar1;
        }
        uVar12 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
        iVar14 = 0;
        while (uVar12 == 0) {
          lVar13 = (longlong)iVar9;
          iVar14 = iVar14 + 0x20;
          iVar9 = iVar9 + 1;
          iVar11 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_143fe4acd;
          uVar12 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar10 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uVar10 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar11 = iVar14 + -1 + (int)lVar13;
        if (iVar3 < iVar11) {
          iVar11 = iVar3;
        }
      }
LAB_143fe4acd:
      uVar12 = *(uint *)(plVar16 + 5);
      uVar17 = uVar12 & 0xffffffe0;
      TStack_88._padding_ = CONCAT44(uVar10,iVar9);
      TStack_88.CurrentBitIndex = iVar11;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      iVar9 = (int)uVar12 >> 5;
      TStack_88._28_4_ = local_44;
      TStack_88.BaseBitIndex = iVar14;
      uStack_68 = CONCAT44(uStack_94,(int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34));
      TStack_88.Array = pTVar1;
      if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = *(uint *)(plVar16 + 5);
      if (uVar12 != uVar10) {
        pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = pTVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                 *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
        while (uVar12 == 0) {
          lVar13 = (longlong)iVar9;
          uVar17 = uVar17 + 0x20;
          iVar9 = iVar9 + 1;
          uVar12 = uVar10;
          if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_143fe4bd0;
          uVar12 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar12 = (int)lVar13 + -1 + uVar17;
        if ((int)uVar10 < (int)uVar12) {
          uVar12 = uVar10;
        }
      }
LAB_143fe4bd0:
      while( true ) {
        if ((int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34) != (int)uStack_68) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_88.CurrentBitIndex == uVar12) && (TStack_88.Array == pTVar1)) break;
        ConvertSelectionToRigidNodes
                  (this,*(int *)(*plVar16 + (longlong)TStack_88.CurrentBitIndex * 0xc),param_2);
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      }
    }
  }
  return;
}

// ConvertTransformSelectionToCurveSelection @ 143fe4c60

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertTransformSelectionToCurveSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  TManagedArray<int> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_258 [4];
  FCollectionCurveGeometryFacade local_248;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FCollectionCurveGeometryFacade::FCollectionCurveGeometryFacade(&local_248,this->ConstCollection);
  if (((this->TransformToGeometryIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)
     && (bVar7 = FCollectionCurveGeometryFacade::IsValid(&local_248), bVar7)) {
    if (((this->TransformToGeometryIndexAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar10;
    }
    pTVar4 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
    if ((local_248.GeometryCurveOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar10;
    }
    local_res10 = param_1->ArrayNum;
    uVar11 = (ulonglong)(int)local_res10;
    pFVar13 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar13 + uVar11 * 4;
    while( true ) {
      if (param_1->ArrayNum != (int)uVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar13 == pFVar1) break;
      uVar2 = *(uint *)pFVar13;
      if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)&pTVar4->field_0x18)) {
        uVar8 = 0;
        if ((int)uVar2 < *(int *)&pTVar4->field_0x18) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        uVar2 = *(uint *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar2 * 4);
        if ((-1 < (int)uVar2) &&
           ((int)uVar2 < *(int *)&(local_248.GeometryCurveOffsets.ConstAttributeArray)->field_0x18))
        {
          if (uVar2 == 0) {
            iVar9 = 0;
          }
          else {
            uVar12 = uVar2 - 1;
            uVar8 = 0;
            if ((int)uVar12 <
                *(int *)&(local_248.GeometryCurveOffsets.ConstAttributeArray)->field_0x18) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar10;
            }
            iVar9 = *(int *)(*(longlong *)
                              &(local_248.GeometryCurveOffsets.ConstAttributeArray)->field_0x10 +
                            (longlong)(int)uVar12 * 4);
          }
          uVar8 = 0;
          if ((int)uVar2 < *(int *)&(local_248.GeometryCurveOffsets.ConstAttributeArray)->field_0x18
             ) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar10;
          }
          iVar3 = *(int *)(*(longlong *)
                            &(local_248.GeometryCurveOffsets.ConstAttributeArray)->field_0x10 +
                          (longlong)(int)uVar2 * 4);
          for (local_258[0] = iVar9; local_258[0] < iVar3; local_258[0] = local_258[0] + 1) {
            pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar5 <= (FScriptContainerElement *)local_258) &&
                ((FScriptContainerElement *)local_258 <
                 pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar10;
            }
            iVar9 = __return_storage_ptr__->ArrayNum;
            if (iVar9 == __return_storage_ptr__->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar9 + 1;
            *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 4) =
                 local_258[0];
          }
        }
      }
      uVar11 = (ulonglong)local_res10;
      pFVar13 = pFVar13 + 4;
    }
  }
  return __return_storage_ptr__;
}

// ConvertTransformSelectionToFaceSelection @ 143fe4fb0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertTransformSelectionToFaceSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TManagedArray<int> *pTVar7;
  TManagedArray<int> *pTVar8;
  TManagedArray<int> *pTVar9;
  ulonglong uVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  TManagedArray<int> *local_res20;
  int local_68 [2];
  FScriptContainerElement *local_60;
  TManagedArray<int> *local_58;
  FScriptContainerElement *local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((((this->TransformToGeometryIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)
      && ((this->FaceStartAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
     ((this->FaceCountAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    local_res18 = param_1;
    pTVar7 = TManagedArrayAccessor<int>::Get(&this->TransformToGeometryIndexAttribute);
    local_res20 = pTVar7;
    pTVar8 = TManagedArrayAccessor<int>::Get(&this->FaceStartAttribute);
    local_58 = pTVar8;
    pTVar9 = TManagedArrayAccessor<int>::Get(&this->FaceCountAttribute);
    pFVar13 = (param_1->AllocatorInstance).Data;
    local_res10 = param_1->ArrayNum;
    uVar10 = (ulonglong)(int)local_res10;
    pFVar14 = pFVar13 + uVar10 * 4;
    local_50 = pFVar14;
    while( true ) {
      local_60 = pFVar13;
      if (param_1->ArrayNum != (int)uVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar13 == pFVar14) break;
      uVar1 = *(uint *)pFVar13;
      if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&pTVar7->field_0x18)) {
        uVar5 = 0;
        if ((int)uVar1 < *(int *)&pTVar7->field_0x18) {
          uVar5 = ~uVar1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
        uVar1 = *(uint *)(*(longlong *)&pTVar7->field_0x10 + (longlong)(int)uVar1 * 4);
        pTVar7 = local_res20;
        if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&pTVar8->field_0x18)) {
          uVar5 = 0;
          if ((int)uVar1 < *(int *)&pTVar8->field_0x18) {
            uVar5 = ~uVar1 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar11;
          }
          iVar12 = 0;
          iVar2 = *(int *)(*(longlong *)&pTVar8->field_0x10 + (longlong)(int)uVar1 * 4);
          while( true ) {
            uVar5 = 0;
            if ((int)uVar1 < *(int *)&pTVar9->field_0x18) {
              uVar5 = ~uVar1 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar11;
            }
            param_1 = local_res18;
            pTVar7 = local_res20;
            pTVar8 = local_58;
            pFVar14 = local_50;
            if (*(int *)(*(longlong *)&pTVar9->field_0x10 + (longlong)(int)uVar1 * 4) <= iVar12)
            break;
            pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
            local_68[0] = iVar12 + iVar2;
            if (((pFVar14 <= (FScriptContainerElement *)local_68) &&
                ((FScriptContainerElement *)local_68 <
                 pFVar14 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar11;
            }
            iVar6 = __return_storage_ptr__->ArrayNum;
            if (iVar6 == __return_storage_ptr__->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            iVar12 = iVar12 + 1;
            __return_storage_ptr__->ArrayNum = iVar6 + 1;
            *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
                 local_68[0];
          }
        }
      }
      uVar10 = (ulonglong)local_res10;
      pFVar13 = local_60 + 4;
    }
  }
  return __return_storage_ptr__;
}

// ConvertTransformSelectionToGeometrySelection @ 143fe52b0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertTransformSelectionToGeometrySelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  TManagedArray<int> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined4 local_38 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar4 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
  if (pTVar4 != (TManagedArray<int> *)0x0) {
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar2 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar1) break;
      uVar3 = *(uint *)pFVar11;
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)&pTVar4->field_0x18)) {
        uVar8 = 0;
        if ((int)uVar3 < *(int *)&pTVar4->field_0x18) {
          uVar8 = ~uVar3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        local_38[0] = *(undefined4 *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar3 * 4);
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        iVar9 = __return_storage_ptr__->ArrayNum;
        if (iVar9 == __return_storage_ptr__->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar9 + 1;
        *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 4) =
             local_38[0];
      }
      pFVar11 = pFVar11 + 4;
    }
  }
  return __return_storage_ptr__;
}

// ConvertTransformSelectionToVertexSelection @ 143fe5460

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertTransformSelectionToVertexSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TManagedArray<int> *pTVar9;
  TManagedArray<int> *pTVar10;
  ulonglong uVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  uint local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  FScriptContainerElement *local_res20;
  int local_78 [2];
  TManagedArray<int> *local_70;
  FScriptContainerElement *local_68;
  longlong local_60;
  TManagedArray<int> *local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((((this->TransformToGeometryIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)
      && ((this->VertexStartAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
     ((this->VertexCountAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    local_res18 = param_1;
    pTVar9 = TManagedArrayAccessor<int>::Get(&this->TransformToGeometryIndexAttribute);
    pTVar10 = TManagedArrayAccessor<int>::Get(&this->VertexStartAttribute);
    local_58 = pTVar10;
    local_70 = TManagedArrayAccessor<int>::Get(&this->VertexCountAttribute);
    pFVar15 = (param_1->AllocatorInstance).Data;
    local_res10 = param_1->ArrayNum;
    uVar11 = (ulonglong)(int)local_res10;
    pFVar13 = pFVar15 + uVar11 * 4;
    local_res20 = pFVar13;
    while( true ) {
      local_68 = pFVar15;
      if (param_1->ArrayNum != (int)uVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar13) break;
      uVar2 = *(uint *)pFVar15;
      if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)&pTVar9->field_0x18)) {
        uVar16 = ~uVar2 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar2 < *(int *)&pTVar9->field_0x18) {
          uVar6 = uVar16;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar12;
        }
        lVar1 = (longlong)(int)uVar2 * 4;
        iVar3 = *(int *)(lVar1 + *(longlong *)&pTVar9->field_0x10);
        pFVar13 = local_res20;
        local_60 = lVar1;
        if ((-1 < iVar3) && (iVar3 < *(int *)&pTVar10->field_0x18)) {
          uVar6 = 0;
          if ((int)uVar2 < *(int *)&pTVar9->field_0x18) {
            uVar6 = uVar16;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar12;
          }
          uVar6 = *(uint *)(lVar1 + *(longlong *)&pTVar9->field_0x10);
          uVar7 = 0;
          if ((int)uVar6 < *(int *)&pTVar10->field_0x18) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar12;
          }
          iVar14 = 0;
          iVar3 = *(int *)(*(longlong *)&pTVar10->field_0x10 + (longlong)(int)uVar6 * 4);
          while( true ) {
            uVar6 = 0;
            if ((int)uVar2 < *(int *)&pTVar9->field_0x18) {
              uVar6 = uVar16;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar12;
            }
            uVar6 = *(uint *)(local_60 + *(longlong *)&pTVar9->field_0x10);
            uVar7 = 0;
            if ((int)uVar6 < *(int *)&local_70->field_0x18) {
              uVar7 = ~uVar6 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar12;
            }
            pFVar13 = local_res20;
            pFVar15 = local_68;
            pTVar10 = local_58;
            if (*(int *)(*(longlong *)&local_70->field_0x10 + (longlong)(int)uVar6 * 4) <= iVar14)
            break;
            pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
            local_78[0] = iVar14 + iVar3;
            if (((pFVar13 <= (FScriptContainerElement *)local_78) &&
                ((FScriptContainerElement *)local_78 <
                 pFVar13 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar12;
            }
            iVar8 = __return_storage_ptr__->ArrayNum;
            if (iVar8 == __return_storage_ptr__->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            iVar14 = iVar14 + 1;
            __return_storage_ptr__->ArrayNum = iVar8 + 1;
            *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
                 local_78[0];
          }
        }
      }
      pFVar15 = pFVar15 + 4;
      uVar11 = (ulonglong)local_res10;
      param_1 = local_res18;
    }
  }
  return __return_storage_ptr__;
}

// ConvertVertexSelectionToCurveSelection @ 143fe5800

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertVertexSelectionToCurveSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  TManagedArray<int> *pTVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint local_248 [4];
  FCollectionCurveGeometryFacade local_238;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FCollectionCurveGeometryFacade::FCollectionCurveGeometryFacade(&local_238,this->ConstCollection);
  bVar5 = FCollectionCurveGeometryFacade::IsValid(&local_238);
  if (!bVar5) {
    return __return_storage_ptr__;
  }
  if (local_238.CurvePointOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) {
    iVar6 = FManagedArrayCollection::NumElements
                      (local_238.CurvePointOffsets.ConstCollection,local_238.CurvePointOffsets.Group
                      );
  }
  else {
    iVar6 = (**(code **)(*(longlong *)local_238.CurvePointOffsets.ConstAttributeArray + 0x60))();
  }
  local_248[0] = 0;
  if (0 < iVar6) {
    do {
      if (local_248[0] == 0) {
        iVar10 = 0;
      }
      else {
        if ((local_238.CurvePointOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x67,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar8;
        }
        pTVar4 = local_238.CurvePointOffsets.ConstAttributeArray;
        uVar11 = local_248[0] - 1;
        uVar7 = 0;
        if ((int)uVar11 < *(int *)&(local_238.CurvePointOffsets.ConstAttributeArray)->field_0x18) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar8;
        }
        iVar10 = *(int *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar11 * 4);
      }
      if ((local_238.CurvePointOffsets.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      pTVar4 = local_238.CurvePointOffsets.ConstAttributeArray;
      lVar12 = (longlong)(int)local_248[0];
      uVar7 = 0;
      if ((int)local_248[0] < *(int *)&(local_238.CurvePointOffsets.ConstAttributeArray)->field_0x18
         ) {
        uVar7 = ~local_248[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      iVar10 = iVar10 * 2;
      bVar5 = true;
      iVar3 = *(int *)(*(longlong *)&pTVar4->field_0x10 + lVar12 * 4) * 2;
      if (iVar10 < iVar3) {
        pFVar1 = (param_1->AllocatorInstance).Data;
        do {
          for (pFVar9 = pFVar1; pFVar9 != pFVar1 + (longlong)param_1->ArrayNum * 4;
              pFVar9 = pFVar9 + 4) {
            if (*(int *)pFVar9 == iVar10) {
              if (param_2) goto LAB_143fe5a1d;
              goto LAB_143fe5a36;
            }
          }
          bVar5 = false;
          if (param_2) goto LAB_143fe5ad0;
LAB_143fe5a1d:
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar3);
      }
      if ((param_2) && (bVar5)) {
LAB_143fe5a36:
        pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar1 <= (FScriptContainerElement *)local_248) &&
           (((FScriptContainerElement *)local_248 <
             pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 4 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar8;
        }
        iVar10 = __return_storage_ptr__->ArrayNum;
        if (iVar10 == __return_storage_ptr__->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar10 + 1;
        *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 4) =
             local_248[0];
      }
LAB_143fe5ad0:
      local_248[0] = local_248[0] + 1;
    } while ((int)local_248[0] < iVar6);
  }
  return __return_storage_ptr__;
}

// ConvertVertexSelectionToFaceSelection @ 143fe5b40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertVertexSelectionToFaceSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_68;
  uint local_64;
  uint local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->FaceStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    return __return_storage_ptr__;
  }
  if (((this->FaceCountAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->IndicesAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0)) {
    local_res10 = __return_storage_ptr__;
    local_res18 = param_1;
    TManagedArrayAccessor<int>::Get(&this->FaceStartAttribute);
    TManagedArrayAccessor<int>::Get(&this->FaceCountAttribute);
    iVar4 = FManagedArrayCollection::NumElements
                      (this->ConstCollection,FGeometryCollection::FacesGroup);
    iVar5 = FManagedArrayCollection::NumElements
                      (this->ConstCollection,FGeometryCollection::VerticesGroup);
    uVar6 = 0;
    if (param_2) {
      pTVar9 = TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Get(&this->IndicesAttribute);
      local_64 = 0;
      if (0 < iVar4) {
LAB_143fe6020:
        uVar13 = local_64;
        uVar7 = uVar6;
        if ((int)local_64 < *(int *)&pTVar9->field_0x18) {
          uVar7 = ~local_64 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar10;
        }
        pFVar12 = (param_1->AllocatorInstance).Data;
        pFVar15 = pFVar12 + (longlong)param_1->ArrayNum * 4;
        if (pFVar12 != pFVar15) {
          do {
            if (*(int *)pFVar12 ==
                *(int *)(*(longlong *)&pTVar9->field_0x10 + (longlong)(int)uVar13 * 0xc)) {
              lVar14 = (longlong)(int)local_64;
              uVar13 = uVar6;
              if ((int)local_64 < *(int *)&pTVar9->field_0x18) {
                uVar13 = ~local_64 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar1 = (code *)swi(3);
                pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
                return pTVar10;
              }
              pFVar12 = (param_1->AllocatorInstance).Data;
              pFVar15 = pFVar12 + (longlong)param_1->ArrayNum * 4;
              if (pFVar12 != pFVar15) {
                goto LAB_143fe6112;
              }
              break;
            }
            pFVar12 = pFVar12 + 4;
          } while (pFVar12 != pFVar15);
        }
        goto LAB_143fe61ac;
      }
    }
    else {
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_48,iVar5,Default);
      pTVar9 = TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Get(&this->IndicesAttribute);
      local_68 = 0;
      if (0 < iVar4) {
        do {
          uVar13 = local_68;
          uVar7 = 0;
          if ((int)local_68 < *(int *)&pTVar9->field_0x18) {
            uVar7 = ~local_68 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar10;
          }
          uVar13 = *(uint *)(*(longlong *)&pTVar9->field_0x10 + (longlong)(int)uVar13 * 0xc);
          uVar8 = 0;
          uVar7 = uVar8;
          if ((int)uVar13 < local_48.ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar10;
          }
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)
                     (local_48.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10),
                     (int *)&local_68);
          lVar14 = (longlong)(int)local_68;
          uVar13 = uVar8;
          if ((int)local_68 < *(int *)&pTVar9->field_0x18) {
            uVar13 = ~local_68 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar10;
          }
          uVar13 = *(uint *)(*(longlong *)&pTVar9->field_0x10 + 4 + lVar14 * 0xc);
          uVar7 = uVar8;
          if ((int)uVar13 < local_48.ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar10;
          }
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)
                     (local_48.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10),
                     (int *)&local_68);
          lVar14 = (longlong)(int)local_68;
          if ((int)local_68 < *(int *)&pTVar9->field_0x18) {
            uVar8 = ~local_68 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar10;
          }
          uVar13 = *(uint *)(*(longlong *)&pTVar9->field_0x10 + 8 + lVar14 * 0xc);
          uVar7 = uVar6;
          if ((int)uVar13 < local_48.ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar10;
          }
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)
                     (local_48.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10),
                     (int *)&local_68);
          local_68 = local_68 + 1;
        } while ((int)local_68 < iVar4);
      }
      local_60 = param_1->ArrayNum;
      uVar11 = (ulonglong)(int)local_60;
      pFVar15 = (param_1->AllocatorInstance).Data;
      local_50 = pFVar15 + uVar11 * 4;
      iVar4 = local_48.ArrayNum;
      while( true ) {
        pFVar12 = local_50;
        local_58 = pFVar15;
        if (param_1->ArrayNum != (int)uVar11) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
          iVar4 = local_48.ArrayNum;
        }
        pTVar10 = local_res10;
        if (pFVar15 == pFVar12) break;
        uVar6 = *(uint *)pFVar15;
        lVar14 = (longlong)(int)uVar6;
        uVar13 = 0;
        while( true ) {
          uVar7 = 0;
          if ((int)uVar6 < iVar4) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
              return pTVar10;
            }
            iVar4 = local_48.ArrayNum;
          }
          if (*(int *)(local_48.AllocatorInstance.Data + lVar14 * 0x10 + 8) <= (int)uVar13) break;
          uVar7 = 0;
          if ((int)uVar6 < iVar4) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar10;
          }
          FVar2.Data = local_48.AllocatorInstance.Data;
          uVar7 = 0;
          if ((int)uVar13 < *(int *)(local_48.AllocatorInstance.Data + lVar14 * 0x10 + 8)) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar10;
          }
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (pTVar10,(int *)(*(longlong *)&FVar2.Data[lVar14 * 0x10].field_0x0 +
                                    (longlong)(int)uVar13 * 4));
          uVar13 = uVar13 + 1;
          iVar4 = local_48.ArrayNum;
        }
        uVar11 = (ulonglong)local_60;
        pFVar15 = local_58 + 4;
        param_1 = local_res18;
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data,iVar4);
      __return_storage_ptr__ = local_res10;
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
        __return_storage_ptr__ = local_res10;
      }
    }
  }
  return __return_storage_ptr__;
  while (pFVar12 = pFVar12 + 4, pFVar12 != pFVar15) {
LAB_143fe6112:
    if (*(int *)pFVar12 == *(int *)(*(longlong *)&pTVar9->field_0x10 + 4 + lVar14 * 0xc)) {
      lVar14 = (longlong)(int)local_64;
      uVar13 = uVar6;
      if ((int)local_64 < *(int *)&pTVar9->field_0x18) {
        uVar13 = ~local_64 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar10;
      }
      pFVar12 = (param_1->AllocatorInstance).Data;
      pFVar15 = pFVar12 + (longlong)param_1->ArrayNum * 4;
      if (pFVar12 != pFVar15) {
        goto LAB_143fe6190;
      }
      break;
    }
  }
  goto LAB_143fe61ac;
  while (pFVar12 = pFVar12 + 4, pFVar12 != pFVar15) {
LAB_143fe6190:
    if (*(int *)pFVar12 == *(int *)(*(longlong *)&pTVar9->field_0x10 + 8 + lVar14 * 0xc)) {
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (__return_storage_ptr__,(int *)&local_64);
      break;
    }
  }
LAB_143fe61ac:
  local_64 = local_64 + 1;
  if (iVar4 <= (int)local_64) {
    return __return_storage_ptr__;
  }
  goto LAB_143fe6020;
}

// ConvertVertexSelectionToGeometrySelection @ 143fe61f0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertVertexSelectionToGeometrySelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TManagedArray<int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  longlong lVar11;
  TManagedArray<int> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_58;
  int local_54;
  uint local_50 [2];
  TManagedArray<int> *local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar12 = (this->VertexStartAttribute).ConstAttributeArray;
  if ((pTVar12 == (TManagedArray<int> *)0x0) ||
     ((this->VertexCountAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)) {
    return __return_storage_ptr__;
  }
  pTVar3 = (this->VertexCountAttribute).ConstAttributeArray;
  local_res10 = __return_storage_ptr__;
  local_48 = pTVar12;
  iVar6 = FManagedArrayCollection::NumElements
                    (this->ConstCollection,FGeometryCollection::GeometryGroup);
  local_54 = iVar6;
  if (param_2) {
    local_50[0] = 0;
    if (0 < iVar6) {
      do {
        uVar8 = local_50[0];
        uVar7 = 0;
        if ((int)local_50[0] < *(int *)&pTVar12->field_0x18) {
          uVar7 = ~local_50[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        iVar2 = *(int *)(*(longlong *)&pTVar12->field_0x10 + (longlong)(int)uVar8 * 4);
        iVar10 = 0;
        while( true ) {
          lVar11 = (longlong)(int)local_50[0];
          uVar8 = 0;
          if ((int)local_50[0] < *(int *)&pTVar3->field_0x18) {
            uVar8 = ~local_50[0] >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          if (*(int *)(*(longlong *)&pTVar3->field_0x10 + lVar11 * 4) <= iVar10) break;
          pFVar13 = (param_1->AllocatorInstance).Data;
          pFVar1 = pFVar13 + (longlong)param_1->ArrayNum * 4;
          while( true ) {
            if (pFVar13 == pFVar1) goto LAB_143fe64d4;
            if (*(int *)pFVar13 == iVar10 + iVar2) break;
            pFVar13 = pFVar13 + 4;
          }
          iVar10 = iVar10 + 1;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (__return_storage_ptr__,(int *)local_50);
LAB_143fe64d4:
        local_50[0] = local_50[0] + 1;
        pTVar12 = local_48;
      } while ((int)local_50[0] < iVar6);
    }
  }
  else {
    pFVar13 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar2 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        iVar6 = local_54;
      }
      __return_storage_ptr__ = local_res10;
      if (pFVar13 == pFVar1) break;
      iVar10 = *(int *)pFVar13;
      local_58 = 0;
      if (0 < iVar6) {
        do {
          uVar8 = local_58;
          uVar7 = 0;
          if ((int)local_58 < *(int *)&pTVar12->field_0x18) {
            uVar7 = ~local_58 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          lVar11 = (longlong)(int)local_58;
          iVar6 = *(int *)(*(longlong *)&pTVar12->field_0x10 + (longlong)(int)uVar8 * 4);
          uVar8 = 0;
          if ((int)local_58 < *(int *)&pTVar3->field_0x18) {
            uVar8 = ~local_58 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          if ((iVar6 <= iVar10) &&
             (iVar10 < *(int *)(*(longlong *)&pTVar3->field_0x10 + lVar11 * 4) + iVar6)) {
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (local_res10,(int *)&local_58);
            pTVar12 = local_48;
            iVar6 = local_54;
            break;
          }
          local_58 = local_58 + 1;
          pTVar12 = local_48;
          iVar6 = local_54;
        } while ((int)local_58 < local_54);
      }
      pFVar13 = pFVar13 + 4;
    }
  }
  return __return_storage_ptr__;
}

// ConvertVertexSelectionToTransformSelection @ 143fe6510

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::
ConvertVertexSelectionToTransformSelection
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<int> *pTVar4;
  TManagedArray<int> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar3 = (this->TransformIndexAttribute).ConstAttributeArray;
  if (((pTVar3 == (TManagedArray<int> *)0x0) ||
      ((this->VertexStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)) ||
     ((this->VertexCountAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)) {
    return __return_storage_ptr__;
  }
  pTVar4 = (this->VertexStartAttribute).ConstAttributeArray;
  pTVar5 = (this->VertexCountAttribute).ConstAttributeArray;
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  iVar8 = FManagedArrayCollection::NumElements
                    (this->ConstCollection,FGeometryCollection::GeometryGroup);
  lVar11 = (longlong)iVar8;
  if (param_2) {
    uVar12 = 0;
    if (0 < iVar8) {
      lVar14 = 0;
      do {
        uVar15 = ~uVar12 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&pTVar4->field_0x18) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        iVar13 = 0;
        iVar8 = *(int *)(*(longlong *)&pTVar4->field_0x10 + lVar14 * 4);
        while( true ) {
          uVar9 = 0;
          if ((int)uVar12 < *(int *)&pTVar5->field_0x18) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar10;
          }
          if (*(int *)(*(longlong *)&pTVar5->field_0x10 + lVar14 * 4) <= iVar13) break;
          pFVar16 = (param_1->AllocatorInstance).Data;
          pFVar1 = pFVar16 + (longlong)param_1->ArrayNum * 4;
          while( true ) {
            __return_storage_ptr__ = local_res10;
            if (pFVar16 == pFVar1) goto LAB_143fe684b;
            if (*(int *)pFVar16 == iVar13 + iVar8) break;
            pFVar16 = pFVar16 + 4;
          }
          iVar13 = iVar13 + 1;
        }
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&pTVar3->field_0x18) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        __return_storage_ptr__ = local_res10;
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (local_res10,(int *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar12 * 4)
                  );
LAB_143fe684b:
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar14 < lVar11);
    }
    return __return_storage_ptr__;
  }
  pFVar16 = (param_1->AllocatorInstance).Data;
  iVar8 = param_1->ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar8 * 4;
LAB_143fe65c0:
  do {
    if (local_res18->ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar16 == pFVar1) {
      return __return_storage_ptr__;
    }
    iVar13 = *(int *)pFVar16;
    uVar12 = 0;
    lVar14 = 0;
    if (0 < lVar11) {
      do {
        uVar15 = ~uVar12 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&pTVar4->field_0x18) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        iVar2 = *(int *)(*(longlong *)&pTVar4->field_0x10 + lVar14 * 4);
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&pTVar5->field_0x18) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
        if ((iVar2 <= iVar13) &&
           (iVar13 < *(int *)(*(longlong *)&pTVar5->field_0x10 + lVar14 * 4) + iVar2)) {
          uVar9 = 0;
          if ((int)uVar12 < *(int *)&pTVar3->field_0x18) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar10;
          }
          __return_storage_ptr__ = local_res10;
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (local_res10,
                     (int *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar12 * 4));
          pFVar16 = pFVar16 + 4;
          goto LAB_143fe65c0;
        }
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar14 < lVar11);
    }
    pFVar16 = pFVar16 + 4;
    __return_storage_ptr__ = local_res10;
  } while( true );
}

// DefineSchema @ 143fe7ee0

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::DefineSchema
          (FCollectionTransformSelectionFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ParentAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformSelectionFacade.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformSelectionFacade.cpp"
                     ,0x25,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// FilterSelectionBySimulationType @ 143fe8ef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::FilterSelectionBySimulationType
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,ESimulationTypes param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  TManagedArray<int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  if ((this->SimulationTypeAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  pTVar3 = (this->SimulationTypeAttribute).ConstAttributeArray;
  pFVar8 = pFVar2 + (longlong)param_1->ArrayNum * 4;
  pFVar7 = pFVar2;
  while (pFVar7 != pFVar8) {
    uVar1 = *(uint *)pFVar7;
    uVar6 = 0;
    if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(uint *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar1 * 4) == (uint)param_2) {
      pFVar7 = pFVar7 + 4;
    }
    else {
      do {
        pFVar8 = pFVar8 + -4;
        if (pFVar7 == pFVar8) goto LAB_143fe902b;
        uVar1 = *(uint *)pFVar8;
        uVar6 = 0;
        if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
          uVar6 = ~uVar1 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      } while (*(uint *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar1 * 4) !=
               (uint)param_2);
      *(uint *)pFVar7 = *(uint *)pFVar8;
      pFVar7 = pFVar7 + 4;
    }
  }
LAB_143fe902b:
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (param_1,(int)((longlong)pFVar7 - (longlong)pFVar2 >> 2),Default);
  return;
}

// GetBonesByLevel @ 143fe93a0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::GetBonesByLevel
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,bool param_2,
          bool param_3)

{
  int iVar1;
  TManagedArray<int> *pTVar2;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TManagedArray<int> *pTVar12;
  TManagedArray<int> *pTVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong lVar15;
  uint local_48 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((((this->LevelAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) ||
      ((this->SimulationTypeAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)) ||
     ((this->ChildrenAttribute).ConstAttributeArray ==
      (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) {
    return __return_storage_ptr__;
  }
  pTVar12 = TManagedArrayAccessor<int>::Get(&this->LevelAttribute);
  pTVar13 = TManagedArrayAccessor<int>::Get(&this->SimulationTypeAttribute);
  if (((this->ChildrenAttribute).ConstAttributeArray ==
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar14;
  }
  pTVar2 = (this->ParentAttribute).ConstAttributeArray;
  pTVar3 = (this->ChildrenAttribute).ConstAttributeArray;
  if (pTVar2 == (TManagedArray<int> *)0x0) {
    iVar8 = FManagedArrayCollection::NumElements
                      ((this->ParentAttribute).ConstCollection,(this->ParentAttribute).Group);
  }
  else {
    iVar8 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
  }
  local_48[0] = 0;
  if (0 < iVar8) {
    do {
      uVar10 = local_48[0];
      uVar9 = 0;
      if ((int)local_48[0] < *(int *)&pTVar13->field_0x18) {
        uVar9 = ~local_48[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar14;
      }
      lVar15 = (longlong)(int)local_48[0];
      iVar11 = *(int *)(*(longlong *)&pTVar13->field_0x10 + (longlong)(int)uVar10 * 4);
      uVar10 = 0;
      if ((int)local_48[0] < *(int *)&pTVar13->field_0x18) {
        uVar10 = ~local_48[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar14;
      }
      iVar1 = *(int *)(*(longlong *)&pTVar13->field_0x10 + lVar15 * 4);
      if (((param_2) && (iVar1 != 2)) && (iVar11 != 1)) goto LAB_143fe9773;
      if (param_1 == -1) {
LAB_143fe96dc:
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 <
             pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar14;
        }
        iVar11 = __return_storage_ptr__->ArrayNum;
        if (iVar11 == __return_storage_ptr__->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar11 + 1;
        *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 4) =
             local_48[0];
      }
      else if ((param_3) && (iVar1 != 2)) {
        lVar15 = (longlong)(int)local_48[0];
        uVar10 = 0;
        if ((int)local_48[0] < *(int *)&pTVar12->field_0x18) {
          uVar10 = ~local_48[0] >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar14;
        }
        if (*(int *)(*(longlong *)&pTVar12->field_0x10 + lVar15 * 4) == param_1) goto LAB_143fe9683;
        lVar15 = (longlong)(int)local_48[0];
        uVar10 = 0;
        if ((int)local_48[0] < *(int *)&pTVar3->field_0x18) {
          uVar10 = ~local_48[0] >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar14;
        }
        lVar4 = *(longlong *)&pTVar3->field_0x10;
        if (0 < *(int *)(lVar15 * 0x50 + 8 + lVar4) - *(int *)(lVar15 * 0x50 + 0x34 + lVar4)) {
          lVar15 = (longlong)(int)local_48[0];
          uVar10 = 0;
          if ((int)local_48[0] < *(int *)&pTVar12->field_0x18) {
            uVar10 = ~local_48[0] >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar14;
          }
          if (*(int *)(*(longlong *)&pTVar12->field_0x10 + lVar15 * 4) + 1 == param_1)
          goto LAB_143fe9683;
        }
      }
      else {
LAB_143fe9683:
        lVar15 = (longlong)(int)local_48[0];
        uVar10 = 0;
        if ((int)local_48[0] < *(int *)&pTVar12->field_0x18) {
          uVar10 = ~local_48[0] >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar14;
        }
        if (*(int *)(*(longlong *)&pTVar12->field_0x10 + lVar15 * 4) <= param_1) goto LAB_143fe96dc;
      }
LAB_143fe9773:
      local_48[0] = local_48[0] + 1;
    } while ((int)local_48[0] < iVar8);
  }
  return __return_storage_ptr__;
}

// GetBonesExactlyAtLevel @ 143fe97c0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::GetBonesExactlyAtLevel
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,bool param_2)

{
  TManagedArray<int> *pTVar1;
  TManagedArray<int> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint local_38 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar1 = (this->LevelAttribute).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) &&
     ((this->SimulationTypeAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    pTVar2 = (this->ParentAttribute).ConstAttributeArray;
    if (pTVar2 == (TManagedArray<int> *)0x0) {
      iVar6 = FManagedArrayCollection::NumElements
                        ((this->ParentAttribute).ConstCollection,(this->ParentAttribute).Group);
    }
    else {
      iVar6 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
    }
    local_38[0] = 0;
    if (0 < iVar6) {
      do {
        piVar9 = TManagedArrayAccessor<int>::operator[](&this->SimulationTypeAttribute,local_38[0]);
        iVar8 = *piVar9;
        piVar9 = TManagedArrayAccessor<int>::operator[](&this->SimulationTypeAttribute,local_38[0]);
        if (((!param_2) || (*piVar9 == 2)) || (iVar8 == 1)) {
          if (param_1 != -1) {
            lVar11 = (longlong)(int)local_38[0];
            uVar7 = 0;
            if ((int)local_38[0] < *(int *)&pTVar1->field_0x18) {
              uVar7 = ~local_38[0] >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar10;
            }
            if (*(int *)(*(longlong *)&pTVar1->field_0x10 + lVar11 * 4) != param_1)
            goto LAB_143fe9995;
          }
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 <
               pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
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
          *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
               local_38[0];
        }
LAB_143fe9995:
        local_38[0] = local_38[0] + 1;
      } while ((int)local_38[0] < iVar6);
    }
  }
  return __return_storage_ptr__;
}

// GetClusteredSelections @ 143fe9e00

TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::GetClusteredSelections
          (FCollectionTransformSelectionFacade *this,
          TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
          *__return_storage_ptr__,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  int iVar3;
  TManagedArray<int> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  uint local_38 [4];
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if ((this->ParentAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  pFVar13 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pTVar4 = (this->ParentAttribute).ConstAttributeArray;
  pFVar1 = pFVar13 + (longlong)iVar3 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar13 == pFVar1) break;
    local_38[0] = *(uint *)pFVar13;
    lVar12 = (longlong)(int)local_38[0];
    uVar8 = 0;
    if ((int)local_38[0] < *(int *)&pTVar4->field_0x18) {
      uVar8 = ~local_38[0] >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                   *)(*pcVar6)();
        return pTVar10;
      }
    }
    puVar2 = (uint *)(*(longlong *)&pTVar4->field_0x10 + lVar12 * 4);
    pTVar11 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                          *)__return_storage_ptr__,*puVar2,(int *)puVar2);
    pFVar5 = (pTVar11->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)pTVar11->ArrayMax * 4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                   *)(*pcVar6)();
        return pTVar10;
      }
    }
    iVar9 = pTVar11->ArrayNum;
    if (iVar9 == pTVar11->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
    }
    pTVar11->ArrayNum = iVar9 + 1;
    pFVar13 = pFVar13 + 4;
    *(uint *)((pTVar11->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_38[0];
  }
  return __return_storage_ptr__;
}

// HasSelectedAncestor @ 143fec3e0

bool __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::HasSelectedAncestor
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TManagedArray<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar2 = (this->ParentAttribute).ConstAttributeArray;
  if (((pTVar2 != (TManagedArray<int> *)0x0) && (-1 < param_2)) &&
     (iVar6 = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2), param_2 < iVar6)) {
    while( true ) {
      uVar7 = 0;
      if (param_2 < *(int *)&pTVar2->field_0x18) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(int *)(*(longlong *)&pTVar2->field_0x10 + (longlong)param_2 * 4) == -1) break;
      uVar7 = 0;
      if (param_2 < *(int *)&pTVar2->field_0x18) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      param_2 = *(uint *)(*(longlong *)&pTVar2->field_0x10 + (longlong)param_2 * 4);
      pFVar8 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar8 + (longlong)param_1->ArrayNum * 4;
      for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 4) {
        if (*(uint *)pFVar8 == param_2) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsARootBone @ 143fef850

bool __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::IsARootBone
          (FCollectionTransformSelectionFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((this->ParentAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar1 = (this->ParentAttribute).ConstAttributeArray;
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
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 4) == -1;
}

// IsValid @ 143fefd00

bool __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::IsValid
          (FCollectionTransformSelectionFacade *this)

{
  if (((((this->ParentAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
       ((this->ChildrenAttribute).ConstAttributeArray !=
        (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) &&
      ((this->LevelAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
     ((((this->SimulationTypeAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       ((this->TransformIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
      ((this->TransformToGeometryIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)))
     ) {
    return true;
  }
  return false;
}

// RemoveRootNodes @ 143ff76a0

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::RemoveRootNodes
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TManagedArray<int> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FCollectionTransformSelectionFacade *local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  <lambda_1> local_48;
  
  pTVar2 = (this->ParentAttribute).ConstAttributeArray;
  if (pTVar2 != (TManagedArray<int> *)0x0) {
    local_res10 = param_1;
    local_48.NumTransforms = (**(code **)(*(longlong *)pTVar2 + 0x60))();
    local_48.__this = this;
    TArray<int,TSizedDefaultAllocator<32>_>::
    RemoveAll<_GeometryCollection::Facades::FCollectionTransformSelectionFacade::RemoveRootNodes_::__l5::<lambda_1>_>
              (param_1,&local_48);
    iVar1 = param_1->ArrayNum;
    if (iVar1 != 0) {
      pFVar3 = (param_1->AllocatorInstance).Data;
      iVar9 = 0;
      local_res8 = this;
      bVar4 = `GeometryCollection::Facades::FCollectionTransformSelectionFacade::RemoveRootNodes'::
              __l5::<lambda_2>::operator()(&local_res8,*(int *)pFVar3);
      bVar4 = !bVar4;
      lVar6 = 0;
      iVar7 = 0;
      do {
        iVar8 = iVar7;
        do {
          lVar6 = lVar6 + 1;
          iVar8 = iVar8 + 1;
          if (iVar1 <= lVar6) break;
          bVar5 = `GeometryCollection::Facades::FCollectionTransformSelectionFacade::
                  RemoveRootNodes'::__l5::<lambda_2>::operator()
                            (&local_res8,*(int *)(pFVar3 + lVar6 * 4));
        } while (bVar4 == !bVar5);
        if (bVar4 != false) {
          if (iVar9 != iVar7) {
            memmove(pFVar3 + (longlong)iVar9 * 4,pFVar3 + (longlong)iVar7 * 4,
                    (longlong)(iVar8 - iVar7) << 2);
          }
          iVar9 = iVar9 + (iVar8 - iVar7);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < iVar1);
      local_res10->ArrayNum = iVar9;
    }
  }
  return;
}

// Sanitize @ 143ff9710

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  TManagedArray<int> *pTVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *_Src;
  uint uVar10;
  ulonglong uVar11;
  FIdentityFunctor local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  ulonglong uVar9;
  
  pTVar2 = (this->ParentAttribute).ConstAttributeArray;
  if (pTVar2 != (TManagedArray<int> *)0x0) {
    local_res10 = param_1;
    local_50.Data._0_4_ = (**(code **)(*(longlong *)pTVar2 + 0x60))();
    local_58 = (undefined1  [8])this;
    TArray<int,TSizedDefaultAllocator<32>_>::
    RemoveAll<_GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize_::__l5::<lambda_1>_>
              (param_1,(<lambda_1> *)local_58);
    if (param_2) {
      _Src = (param_1->AllocatorInstance).Data;
      uVar6 = 0;
      local_48 = param_1->ArrayNum;
      lVar5 = (longlong)local_48;
      local_50.Data = (FScriptContainerElement *)0x0;
      if (local_48 == 0) {
        local_44[0] = 0;
        local_58 = (undefined1  [8])this;
      }
      else {
        local_58 = (undefined1  [8])this;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_48,0,&local_50,local_48,local_44);
        memcpy(local_50.Data,_Src,lVar5 << 2);
        _Src = (param_1->AllocatorInstance).Data;
      }
      iVar1 = param_1->ArrayNum;
      if (iVar1 != 0) {
        bVar3 = `GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize'::__l8::
                <lambda_2>::operator()(local_58,*(int *)_Src);
        bVar3 = !bVar3;
        uVar9 = uVar6;
        uVar11 = uVar6;
        do {
          uVar7 = (uint)uVar9;
          uVar8 = uVar7;
          do {
            uVar6 = uVar6 + 1;
            uVar8 = uVar8 + 1;
            uVar9 = (ulonglong)uVar8;
            if ((longlong)iVar1 <= (longlong)uVar6) break;
            bVar4 = `GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize'::
                    __l8::<lambda_2>::operator()(local_58,*(int *)(_Src + uVar6 * 4));
          } while (bVar3 == !bVar4);
          if (bVar3 != false) {
            uVar10 = (uint)uVar11;
            if (uVar10 != uVar7) {
              memmove(_Src + (longlong)(int)uVar10 * 4,_Src + (longlong)(int)uVar7 * 4,
                      (longlong)(int)(uVar8 - uVar7) << 2);
            }
            uVar11 = (ulonglong)(uVar10 + (uVar8 - uVar7));
          }
          bVar3 = (bool)(bVar3 ^ 1);
        } while ((longlong)uVar6 < (longlong)iVar1);
        local_res10->ArrayNum = (int)uVar11;
        param_1 = local_res10;
      }
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
    }
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res8[0],
               (TLess<void> *)local_res8);
  }
  return;
}

// SelectAll @ 143ff98e0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_18 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar1 = (this->ParentAttribute).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<int> *)0x0) {
    (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    local_18[0] = 0;
    iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    if (local_18[0] < iVar5) {
      do {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar6;
          }
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
             local_18[0];
        local_18[0] = local_18[0] + 1;
        iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      } while (local_18[0] < iVar5);
    }
  }
  return __return_storage_ptr__;
}

// SelectBoundingBoxInBox @ 143ff9a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectBoundingBoxInBox
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TBox<double> *param_1,
          TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TManagedArray<int> *pTVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  TMatrix<double> *pTVar17;
  uint *puVar18;
  undefined1 auStack_468 [32];
  uint *local_448;
  FScriptContainerElement *local_440;
  longlong local_438;
  longlong local_430;
  undefined8 local_428;
  uint local_418;
  int local_414;
  TTransform<double> *local_410;
  FCollectionTransformSelectionFacade *local_408;
  TVector<double>_u_0 local_400;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  FCollectionTransformFacade local_3c8;
  FBoundsFacade local_2d8;
  TBox<double> local_178;
  TTransform<double> local_138;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_468;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar7 = (this->ParentAttribute).ConstAttributeArray;
  if (pTVar7 != (TManagedArray<int> *)0x0) {
    local_410 = param_2;
    local_408 = this;
    iVar13 = (**(code **)(*(longlong *)pTVar7 + 0x60))();
    local_414 = iVar13;
    FBoundsFacade::FBoundsFacade(&local_2d8,this->ConstCollection);
    FCollectionTransformFacade::FCollectionTransformFacade(&local_3c8,this->ConstCollection);
    if ((local_2d8.BoundingBoxAttribute.ConstAttributeArray ==
         (TManagedArray<UE::Math::TBox<double>_> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x67,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar10)();
      return pTVar16;
    }
    local_418 = 0;
    if (0 < iVar13) {
      do {
        if (((this->TransformToGeometryIndexAttribute).ConstAttributeArray ==
             (TManagedArray<int> *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x67,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar10)();
          return pTVar16;
        }
        puVar18 = (uint *)(longlong)(int)local_418;
        pTVar7 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
        iVar13 = *(int *)&pTVar7->field_0x18;
        uVar14 = 0;
        if ((int)local_418 < iVar13) {
          uVar14 = ~local_418 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (local_448 = puVar18, local_440 = (FScriptContainerElement *)(longlong)iVar13,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar10 = (code *)swi(3);
          pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar10)();
          return pTVar16;
        }
        uVar14 = *(uint *)(*(longlong *)&pTVar7->field_0x10 + (longlong)puVar18 * 4);
        if ((-1 < (int)uVar14) &&
           ((int)uVar14 < *(int *)&(local_2d8.BoundingBoxAttribute.ConstAttributeArray)->field_0x18)
           ) {
          uVar15 = 0;
          if ((int)uVar14 <
              *(int *)&(local_2d8.BoundingBoxAttribute.ConstAttributeArray)->field_0x18) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (local_448 = (uint *)(longlong)(int)uVar14,
             local_440 = (FScriptContainerElement *)
                         (longlong)
                         *(int *)&(local_2d8.BoundingBoxAttribute.ConstAttributeArray)->field_0x18,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar10)();
            return pTVar16;
          }
          uVar15 = local_418;
          lVar8 = *(longlong *)&(local_2d8.BoundingBoxAttribute.ConstAttributeArray)->field_0x10;
          if ((local_3c8.TransformAttribute.ConstAttributeArray ==
               (TManagedArray<UE::Math::TTransform<float>_> *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar10)();
            return pTVar16;
          }
          pTVar11 = local_3c8.TransformAttribute.ConstAttributeArray;
          if ((local_3c8.ParentAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar10)();
            return pTVar16;
          }
          GeometryCollectionAlgo::GlobalMatrix
                    (&local_138,pTVar11,local_3c8.ParentAttribute.ConstAttributeArray,uVar15);
          pTVar17 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_138,&local_d8);
          UE::Math::TBox<double>::TransformBy
                    ((TBox<double> *)((longlong)(int)uVar14 * 0x38 + lVar8),&local_178,pTVar17);
          UE::Math::TBox<double>::InverseTransformBy
                    (&local_178,(TBox<double> *)&local_400._s_0,local_410);
          dVar1 = (param_1->Min).field0_0x0._s_0.X;
          if ((((((dVar1 < local_400._s_0.X) &&
                 (dVar2 = (param_1->Max).field0_0x0._s_0.X, local_400._s_0.X < dVar2)) &&
                (dVar3 = (param_1->Min).field0_0x0._s_0.Y, dVar3 < local_400._s_0.Y)) &&
               (((dVar4 = (param_1->Max).field0_0x0._s_0.Y, local_400._s_0.Y < dVar4 &&
                 (dVar5 = (param_1->Min).field0_0x0._s_0.Z, dVar5 < local_400._s_0.Z)) &&
                ((dVar6 = (param_1->Max).field0_0x0._s_0.Z, local_400._s_0.Z < dVar6 &&
                 ((dVar1 < local_3e8 && (local_3e8 < dVar2)))))))) && (dVar3 < local_3e0)) &&
             (((local_3e0 < dVar4 && (dVar5 < local_3d8)) && (local_3d8 < dVar6)))) {
            pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar9 <= (FScriptContainerElement *)&local_418) &&
               ((FScriptContainerElement *)&local_418 <
                pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
              local_430 = (longlong)__return_storage_ptr__->ArrayNum;
              local_428 = 4;
              local_448 = &local_418;
              local_440 = pFVar9;
              local_438 = (longlong)__return_storage_ptr__->ArrayMax;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar10)();
                return pTVar16;
              }
            }
            iVar13 = __return_storage_ptr__->ArrayNum;
            if (iVar13 == __return_storage_ptr__->ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&__return_storage_ptr__->AllocatorInstance,
                                  &__return_storage_ptr__->ArrayMax);
            }
            pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar13 + 1;
            *(uint *)(pFVar9 + (longlong)iVar13 * 4) = local_418;
          }
        }
        local_418 = local_418 + 1;
        this = local_408;
      } while ((int)local_418 < local_414);
    }
  }
  return __return_storage_ptr__;
}

// SelectBoundingBoxInSphere @ 143ff9e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectBoundingBoxInSphere
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TSphere<double> *param_1,
          TTransform<double> *param_2)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  TManagedArray<UE::Math::TTransform<float>_> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  uint *puVar12;
  longlong lVar13;
  TManagedArray<UE::Math::TBox<double>_> *pTVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar46;
  double dVar47;
  undefined4 uVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auStack_458 [32];
  uint *local_438;
  FScriptContainerElement *local_430;
  longlong local_428;
  longlong local_420;
  undefined8 local_418;
  uint local_408;
  int local_404;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_400;
  TManagedArray<UE::Math::TBox<double>_> *local_3f0;
  TTransform<double> *local_3e8;
  TSphere<double> *local_3e0;
  FCollectionTransformSelectionFacade *local_3d8;
  undefined1 local_3d0 [16];
  double local_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  FCollectionTransformFacade local_398;
  FBoundsFacade local_2a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_458;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar1 = (this->ParentAttribute).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<int> *)0x0) {
    local_3e8 = param_2;
    local_3e0 = param_1;
    local_3d8 = this;
    iVar7 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    local_404 = iVar7;
    FBoundsFacade::FBoundsFacade(&local_2a8,this->ConstCollection);
    FCollectionTransformFacade::FCollectionTransformFacade(&local_398,this->ConstCollection);
    if ((local_2a8.BoundingBoxAttribute.ConstAttributeArray ==
         (TManagedArray<UE::Math::TBox<double>_> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
    local_3f0 = local_2a8.BoundingBoxAttribute.ConstAttributeArray;
    local_408 = 0;
    pTVar14 = local_2a8.BoundingBoxAttribute.ConstAttributeArray;
    if (0 < iVar7) {
      do {
        if (((this->TransformToGeometryIndexAttribute).ConstAttributeArray ==
             (TManagedArray<int> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x67,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar10;
        }
        puVar12 = (uint *)(longlong)(int)local_408;
        pTVar1 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
        iVar9 = *(int *)&pTVar1->field_0x18;
        uVar11 = 0;
        if ((int)local_408 < iVar9) {
          uVar11 = ~local_408 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (local_438 = puVar12, local_430 = (FScriptContainerElement *)(longlong)iVar9,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar10;
        }
        uVar11 = *(uint *)(*(longlong *)&pTVar1->field_0x10 + (longlong)puVar12 * 4);
        if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&pTVar14->field_0x18)) {
          uVar8 = 0;
          if ((int)uVar11 < *(int *)&pTVar14->field_0x18) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (local_438 = (uint *)(longlong)(int)uVar11,
             local_430 = (FScriptContainerElement *)(longlong)*(int *)&pTVar14->field_0x18,
             bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar10;
          }
          iVar15 = 0;
          FBoundsFacade::GetBoundingBoxVertexPositions
                    (&local_400,
                     (TBox<double> *)
                     ((longlong)(int)uVar11 * 0x38 + *(longlong *)&pTVar14->field_0x10));
          iVar9 = local_400.ArrayNum;
          uVar11 = 0;
          if (0 < iVar9) {
            lVar13 = 0;
            do {
              uVar8 = local_408;
              if ((local_398.TransformAttribute.ConstAttributeArray ==
                   (TManagedArray<UE::Math::TTransform<float>_> *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                     ,0x67,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar10;
              }
              pTVar5 = local_398.TransformAttribute.ConstAttributeArray;
              if ((local_398.ParentAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                     ,0x67,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar10;
              }
              GeometryCollectionAlgo::GlobalMatrix
                        (&local_148,pTVar5,local_398.ParentAttribute.ConstAttributeArray,uVar8);
              iVar9 = local_400.ArrayNum;
              uVar8 = 0;
              if ((int)uVar11 < iVar9) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if (uVar8 == 0) {
                local_430 = (FScriptContainerElement *)(longlong)iVar9;
                local_438 = (uint *)(longlong)(int)uVar11;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                  return pTVar10;
                }
                iVar9 = local_400.ArrayNum;
              }
              dVar27 = local_148.Rotation.ZW.m128d_f64[0];
              dVar46 = local_148.Rotation.XY.m128d_f64[1];
              auVar49 = blendpd((undefined1  [16])local_148.Rotation.XY.m128d_f64,
                                (undefined1  [16])local_148.Rotation.ZW.m128d_f64,2);
              auVar42._8_4_ = local_148.Rotation.ZW.m128d_f64[0]._0_4_;
              auVar42._0_8_ = dVar46;
              auVar42._12_4_ = local_148.Rotation.ZW.m128d_f64[0]._4_4_;
              auVar59._0_8_ =
                   *(double *)(local_400.AllocatorInstance.Data + lVar13 + 0x10) *
                   local_148.Scale3D.ZW.m128d_f64[0];
              auVar59._8_8_ = local_148.Scale3D.ZW.m128d_f64[1] * 0.0;
              dVar19 = *(double *)(local_400.AllocatorInstance.Data + lVar13) *
                       local_148.Scale3D.XY.m128d_f64[0];
              dVar35 = *(double *)(local_400.AllocatorInstance.Data + lVar13 + 8) *
                       local_148.Scale3D.XY.m128d_f64[1];
              uVar48 = (undefined4)((ulonglong)dVar35 >> 0x20);
              dVar40 = local_148.Rotation.ZW.m128d_f64[1];
              auVar51._8_4_ = SUB84(dVar35,0);
              auVar51._0_8_ = dVar19;
              auVar51._12_4_ = uVar48;
              auVar28._8_4_ = SUB84(dVar35,0);
              auVar28._0_8_ = dVar19;
              auVar28._12_4_ = uVar48;
              auVar29 = blendpd(auVar28,auVar59,2);
              auVar52._0_8_ = auVar51._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar46 * dVar19;
              auVar52._8_8_ = auVar59._0_8_ * dVar46 - auVar42._8_8_ * dVar35;
              auVar30._0_8_ = auVar29._0_8_ * dVar27 - auVar49._0_8_ * auVar59._0_8_;
              auVar30._8_8_ = auVar29._8_8_ * dVar40 - auVar49._8_8_ * auVar59._8_8_;
              auVar29 = blendpd(auVar52,auVar30,2);
              dVar26 = auVar52._8_8_ + auVar52._8_8_;
              dVar39 = auVar30._0_8_ + auVar30._0_8_;
              uVar48 = SUB84(dVar39,0);
              uVar58 = (undefined4)((ulonglong)dVar39 >> 0x20);
              auVar53._0_8_ = auVar29._0_8_ + auVar29._0_8_;
              auVar53._8_8_ = auVar29._8_8_ + auVar29._8_8_;
              auVar36._8_4_ = uVar48;
              auVar36._0_8_ = dVar26;
              auVar36._12_4_ = uVar58;
              auVar20._8_4_ = uVar48;
              auVar20._0_8_ = dVar26;
              auVar20._12_4_ = uVar58;
              auVar31._8_4_ = uVar48;
              auVar31._0_8_ = dVar26;
              auVar31._12_4_ = uVar58;
              auVar29 = blendpd(auVar31,auVar53,2);
              dVar43 = (local_3e8->Rotation).XY.m128d_f64[0] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar47 = (local_3e8->Rotation).XY.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              auVar37._0_8_ = auVar36._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar26 * dVar46;
              auVar37._8_8_ = auVar53._0_8_ * dVar46 - auVar20._8_8_ * dVar27;
              auVar21._8_4_ = SUB84(auVar53._8_8_,0);
              auVar21._0_8_ = auVar53._0_8_;
              auVar21._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
              auVar41._8_4_ = SUB84(dVar47,0);
              auVar41._0_8_ = dVar43;
              uVar48 = (undefined4)((ulonglong)dVar47 >> 0x20);
              auVar41._12_4_ = uVar48;
              auVar50._0_8_ =
                   (local_3e8->Rotation).ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              auVar50._8_8_ =
                   (local_3e8->Rotation).ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              auVar32._0_8_ = auVar29._0_8_ * dVar27 - auVar53._0_8_ * auVar49._0_8_;
              auVar32._8_8_ = auVar29._8_8_ * dVar40 - auVar21._8_8_ * auVar49._8_8_;
              auVar49._8_4_ = SUB84(auVar37._8_8_,0);
              auVar49._0_8_ = auVar37._0_8_;
              auVar49._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
              auVar29 = blendpd(auVar37,auVar32,2);
              dVar19 = dVar26 * dVar40 + dVar19 + auVar49._8_8_ +
                       local_148.Translation.XY.m128d_f64[0];
              dVar35 = dVar39 * dVar40 + dVar35 + auVar32._0_8_ +
                       local_148.Translation.XY.m128d_f64[1];
              local_3c0 = auVar53._0_8_ * dVar40 + auVar59._0_8_ + auVar29._0_8_ +
                          local_148.Translation.ZW.m128d_f64[0];
              local_3d0._8_4_ = SUB84(dVar35,0);
              local_3d0._0_8_ = dVar19;
              local_3d0._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
              dVar19 = dVar19 - (local_3e8->Translation).XY.m128d_f64[0];
              dVar35 = dVar35 - (local_3e8->Translation).XY.m128d_f64[1];
              uVar58 = (undefined4)((ulonglong)dVar35 >> 0x20);
              dVar26 = local_3c0 - (local_3e8->Translation).ZW.m128d_f64[0];
              auVar38._8_4_ = SUB84(dVar47,0);
              auVar38._0_8_ = dVar43;
              auVar38._12_4_ = uVar48;
              dVar39 = auVar38._8_8_;
              auVar60._8_4_ = SUB84(dVar35,0);
              auVar60._0_8_ = dVar19;
              auVar60._12_4_ = uVar58;
              auVar22._8_4_ = SUB84(auVar50._0_8_,0);
              auVar22._0_8_ = dVar39;
              auVar22._12_4_ = (int)((ulonglong)auVar50._0_8_ >> 0x20);
              auVar33._8_4_ = SUB84(dVar35,0);
              auVar33._0_8_ = dVar19;
              auVar33._12_4_ = uVar58;
              auVar29._8_8_ = 0;
              auVar29._0_8_ = dVar26;
              auVar29 = blendpd(auVar33,auVar29,2);
              auVar61._0_8_ = auVar60._8_8_ * dVar43 - dVar39 * dVar19;
              auVar61._8_8_ = dVar26 * dVar47 - auVar22._8_8_ * dVar35;
              auVar42 = blendpd(auVar41,auVar50,2);
              auVar34._0_8_ = auVar29._0_8_ * auVar50._0_8_ - dVar26 * auVar42._0_8_;
              auVar34._8_8_ = auVar29._8_8_ * auVar50._8_8_ - auVar42._8_8_ * 0.0;
              auVar29 = blendpd(auVar61,auVar34,2);
              dVar27 = auVar61._8_8_ + auVar61._8_8_;
              dVar40 = auVar34._0_8_ + auVar34._0_8_;
              uVar48 = SUB84(dVar40,0);
              uVar58 = (undefined4)((ulonglong)dVar40 >> 0x20);
              auVar62._0_8_ = auVar29._0_8_ + auVar29._0_8_;
              auVar62._8_8_ = auVar29._8_8_ + auVar29._8_8_;
              auVar56._8_4_ = uVar48;
              auVar56._0_8_ = dVar27;
              auVar56._12_4_ = uVar58;
              auVar23._8_4_ = uVar48;
              auVar23._0_8_ = dVar27;
              auVar23._12_4_ = uVar58;
              auVar54._8_4_ = uVar48;
              auVar54._0_8_ = dVar27;
              auVar54._12_4_ = uVar58;
              auVar4._4_8_ = dVar47;
              auVar4._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
              auVar44._0_8_ = auVar4._0_8_ << 0x20;
              auVar44._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
              auVar44._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
              auVar57._0_8_ = auVar56._8_8_ * dVar43 - dVar27 * dVar39;
              auVar57._8_8_ = auVar62._0_8_ * dVar47 - auVar23._8_8_ * auVar50._0_8_;
              auVar29 = blendpd(auVar54,auVar62,2);
              auVar24._8_4_ = SUB84(auVar62._8_8_,0);
              auVar24._0_8_ = auVar62._0_8_;
              auVar24._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
              auVar55._0_8_ = auVar29._0_8_ * auVar50._0_8_ - auVar62._0_8_ * auVar42._0_8_;
              auVar55._8_8_ = auVar29._8_8_ * auVar50._8_8_ - auVar24._8_8_ * auVar42._8_8_;
              auVar29 = *(undefined1 (*) [16])(local_3e8->Scale3D).ZW.m128d_f64;
              auVar45._8_8_ = auVar44._8_8_;
              auVar45._0_8_ = auVar29._0_8_;
              lVar16 = -(ulonglong)
                        ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                          auVar29._4_4_,
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                          auVar29._0_4_) <=
                        (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
              auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              *(undefined1 (*) [16])(local_3e8->Scale3D).XY.m128d_f64);
              lVar17 = -(ulonglong)
                        ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                          *(uint *)((longlong)(local_3e8->Scale3D).XY.m128d_f64 + 4)
                                          ,(uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                           *(uint *)(local_3e8->Scale3D).XY.m128d_f64) <=
                        (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
              lVar18 = -(ulonglong)
                        ((double)CONCAT44(_UNK_15061cc8c &
                                          *(uint *)((longlong)(local_3e8->Scale3D).XY.m128d_f64 +
                                                   0xc),
                                          _UNK_15061cc88 &
                                          *(uint *)((local_3e8->Scale3D).XY.m128d_f64 + 1)) <=
                        (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
              auVar25._8_4_ = SUB84(auVar57._8_8_,0);
              auVar25._0_8_ = auVar57._0_8_;
              auVar25._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
              auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar45);
              dVar27 = (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar42._4_4_,
                                        ~(uint)lVar17 & auVar42._0_4_) *
                       (dVar27 * auVar50._8_8_ + dVar19 + auVar25._8_8_);
              dVar40 = (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar42._12_4_,
                                        ~(uint)lVar18 & auVar42._8_4_) *
                       (dVar40 * auVar50._8_8_ + dVar35 + auVar55._0_8_);
              dVar35 = (local_3e0->Center).field0_0x0._s_0.X - dVar27;
              dVar19 = local_3e0->W + __real_3f1a36e2e0000000;
              auVar42 = blendpd(auVar57,auVar55,2);
              local_3b8._8_4_ = SUB84(dVar40,0);
              local_3b8._0_8_ = dVar27;
              local_3b8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
              local_3a8 = (double)CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) & auVar29._4_4_,
                                           ~(uint)lVar16 & auVar29._0_4_) *
                          (auVar62._0_8_ * auVar50._8_8_ + dVar26 + auVar42._0_8_);
              dVar40 = (local_3e0->Center).field0_0x0._s_0.Y - dVar40;
              dVar27 = (local_3e0->Center).field0_0x0._s_0.Z - local_3a8;
              pTVar14 = local_3f0;
              iVar7 = local_404;
              if (dVar19 * dVar19 < dVar40 * dVar40 + dVar35 * dVar35 + dVar27 * dVar27) break;
              iVar15 = iVar15 + 1;
              uVar11 = uVar11 + 1;
              lVar13 = lVar13 + 0x18;
            } while ((int)uVar11 < iVar9);
          }
          if (iVar15 == iVar9) {
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar2 <= (FScriptContainerElement *)&local_408) &&
               ((FScriptContainerElement *)&local_408 <
                pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
              local_420 = (longlong)__return_storage_ptr__->ArrayNum;
              local_418 = 4;
              local_438 = &local_408;
              local_430 = pFVar2;
              local_428 = (longlong)__return_storage_ptr__->ArrayMax;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar10;
              }
            }
            iVar9 = __return_storage_ptr__->ArrayNum;
            if (iVar9 == __return_storage_ptr__->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar9 + 1;
            *(uint *)(pFVar2 + (longlong)iVar9 * 4) = local_408;
          }
          if (local_400.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_400.AllocatorInstance.Data);
          }
        }
        local_408 = local_408 + 1;
        this = local_3d8;
      } while ((int)local_408 < iVar7);
    }
  }
  return __return_storage_ptr__;
}

// SelectByFloatAttribute @ 143ffa5f0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectByFloatAttribute
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1,
          FString *param_2,float param_3,float param_4,bool param_5,bool param_6)

{
  float fVar1;
  FManagedArrayCollection *this_00;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  TManagedArray<float> *pTVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  FName local_res8;
  FName local_res10;
  uint local_68 [12];
  
  pwVar13 = L"";
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = this->ConstCollection;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar8 = ::FName::FName(&local_res8,pwVar11);
  FVar2 = *pFVar8;
  if ((param_2->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar8 = ::FName::FName(&local_res10,pwVar13);
  pTVar9 = FManagedArrayCollection::FindAttributeTyped<float>(this_00,*pFVar8,FVar2);
  if (pTVar9 != (TManagedArray<float> *)0x0) {
    local_68[0] = 0;
    iVar6 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
    if ((int)local_68[0] < iVar6) {
      do {
        lVar12 = (longlong)(int)local_68[0];
        uVar7 = 0;
        if ((int)local_68[0] < *(int *)&pTVar9->field_0x18) {
          uVar7 = ~local_68[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        fVar1 = *(float *)(*(longlong *)&pTVar9->field_0x10 + lVar12 * 4);
        if (param_6) {
          if (param_5) {
            if ((param_3 <= fVar1) && (fVar1 <= param_4)) {
LAB_143ffa769:
              pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar3 <= (FScriptContainerElement *)local_68) &&
                  ((FScriptContainerElement *)local_68 <
                   pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar10;
              }
              iVar6 = __return_storage_ptr__->ArrayNum;
              if (iVar6 == __return_storage_ptr__->ArrayMax) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar6 + 1;
              *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
                   local_68[0];
            }
          }
          else if ((param_3 < fVar1) && (fVar1 < param_4)) goto LAB_143ffa769;
        }
        else if (param_5) {
          if ((fVar1 <= param_3) || (param_4 <= fVar1)) goto LAB_143ffa769;
        }
        else if ((fVar1 < param_3) || (param_4 < fVar1)) goto LAB_143ffa769;
        local_68[0] = local_68[0] + 1;
        iVar6 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
      } while ((int)local_68[0] < iVar6);
    }
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// SelectByIntAttribute @ 143ffa880

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectByIntAttribute
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1,
          FString *param_2,int param_3,int param_4,bool param_5,bool param_6)

{
  FManagedArrayCollection *this_00;
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName *pFVar7;
  TManagedArray<int> *pTVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  FName local_res8;
  FName local_res10;
  FString *local_res18;
  FString *local_res20;
  uint local_58 [6];
  
  pwVar12 = L"";
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = this->ConstCollection;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_res18 = param_1;
  local_res20 = param_2;
  pFVar7 = ::FName::FName(&local_res8,pwVar10);
  FVar1 = *pFVar7;
  if ((param_2->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_res10,pwVar12);
  pTVar8 = FManagedArrayCollection::FindAttributeTyped<int>(this_00,*pFVar7,FVar1);
  if (pTVar8 != (TManagedArray<int> *)0x0) {
    local_58[0] = 0;
    iVar5 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
    if ((int)local_58[0] < iVar5) {
      do {
        lVar11 = (longlong)(int)local_58[0];
        uVar6 = 0;
        if ((int)local_58[0] < *(int *)&pTVar8->field_0x18) {
          uVar6 = ~local_58[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        iVar5 = *(int *)(*(longlong *)&pTVar8->field_0x10 + lVar11 * 4);
        if (param_6) {
          if (param_5) {
            if ((param_3 <= iVar5) && (iVar5 <= param_4)) {
LAB_143ffa9dc:
              pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar2 <= (FScriptContainerElement *)local_58) &&
                  ((FScriptContainerElement *)local_58 <
                   pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar9;
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
                   local_58[0];
            }
          }
          else if ((param_3 < iVar5) && (iVar5 < param_4)) goto LAB_143ffa9dc;
        }
        else if (param_5) {
          if ((iVar5 <= param_3) || (param_4 <= iVar5)) goto LAB_143ffa9dc;
        }
        else if ((iVar5 < param_3) || (param_4 < iVar5)) goto LAB_143ffa9dc;
        local_58[0] = local_58[0] + 1;
        iVar5 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
        param_2 = local_res20;
      } while ((int)local_58[0] < iVar5);
    }
  }
  pFVar2 = (local_res18->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// SelectByPercentage @ 143ffaad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectByPercentage
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,bool param_3,float param_4)

{
  RandomShuffleArray(param_1,param_3,param_4);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (param_1,(int)ROUND((float)param_1->ArrayNum * (float)param_2 * __real_3ca3d70a +
                                __real_3f000000) >> 1,Default);
  return;
}

// SelectBySize @ 143ffab30

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectBySize
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,float param_1,
          float param_2,bool param_3,bool param_4,bool param_5)

{
  float fVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FGeometryCollection *pFVar7;
  FName *pFVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  TManagedArray<float> *pTVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  FValueType *this_00;
  longlong lVar12;
  uint local_78 [2];
  FName local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  FName local_58;
  FName local_50;
  
  if (param_5) {
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    pFVar7 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this->ConstCollection);
    if (pFVar7 != (FGeometryCollection *)0x0) {
      FGeometryCollectionConvexUtility::SetVolumeAttributes((FManagedArrayCollection *)pFVar7);
      FVar3 = FTransformCollection::TransformGroup;
      pFVar8 = ::FName::FName(&local_70,"Size");
      local_50 = FVar3;
      local_58 = *pFVar8;
      pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                       *)&pFVar7->_padding_,(TTuple<FName,FName> *)&local_58);
      this_00 = (FValueType *)&pTVar9->field_0x10;
      if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        this_00 = (FValueType *)0x0;
      }
      if ((this_00 == (FValueType *)0x0) ||
         (pTVar10 = FManagedArrayCollection::FValueType::ModifyTypedPtr<float>(this_00),
         pTVar10 == (TManagedArray<float> *)0x0)) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4737912332707954039>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformSelectionFacade.cpp"
                           ,0x289,"SizesPtr");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar11;
        }
        (__return_storage_ptr__->AllocatorInstance).Data = local_68.Data;
        __return_storage_ptr__->ArrayNum = (int)local_60;
        __return_storage_ptr__->ArrayMax = local_60._4_4_;
        (**(code **)pFVar7->_padding_)(pFVar7,1);
        if (local_68.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_68.Data);
        return __return_storage_ptr__;
      }
      local_78[0] = 0;
      iVar5 = (**(code **)(*(longlong *)pTVar10 + 0x60))(pTVar10);
      if ((int)local_78[0] < iVar5) {
        do {
          lVar12 = (longlong)(int)local_78[0];
          uVar6 = 0;
          if ((int)local_78[0] < *(int *)&pTVar10->field_0x18) {
            uVar6 = ~local_78[0] >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar11;
          }
          fVar1 = *(float *)(*(longlong *)&pTVar10->field_0x10 + lVar12 * 4);
          if (param_4) {
            if (param_3) {
              if ((param_1 <= fVar1) && (fVar1 <= param_2)) {
LAB_143ffacf9:
                if (((local_68.Data <= (FScriptContainerElement *)local_78) &&
                    ((FScriptContainerElement *)local_78 <
                     local_68.Data + (longlong)local_60._4_4_ * 4)) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                  return pTVar11;
                }
                iVar5 = (int)local_60;
                if ((int)local_60 == local_60._4_4_) {
                  iVar5 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_68,(int *)((longlong)&local_60 + 4));
                }
                local_60 = CONCAT44(local_60._4_4_,iVar5 + 1);
                *(uint *)(local_68.Data + (longlong)iVar5 * 4) = local_78[0];
              }
            }
            else if ((param_1 < fVar1) && (fVar1 < param_2)) goto LAB_143ffacf9;
          }
          else if (param_3) {
            if ((fVar1 <= param_1) || (param_2 <= fVar1)) goto LAB_143ffacf9;
          }
          else if ((fVar1 < param_1) || (param_2 < fVar1)) goto LAB_143ffacf9;
          local_78[0] = local_78[0] + 1;
          iVar5 = (**(code **)(*(longlong *)pTVar10 + 0x60))(pTVar10);
        } while ((int)local_78[0] < iVar5);
      }
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_68.Data;
    __return_storage_ptr__->ArrayNum = (int)local_60;
    __return_storage_ptr__->ArrayMax = local_60._4_4_;
  }
  else {
    SelectByVolume(this,__return_storage_ptr__,param_1 * param_1 * param_1,
                   param_2 * param_2 * param_2,param_3,param_4);
  }
  return __return_storage_ptr__;
}

// SelectByVolume @ 143ffae90

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectByVolume
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,float param_1,
          float param_2,bool param_3,bool param_4)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FGeometryCollection *pFVar8;
  FName *pFVar9;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar10;
  TManagedArray<float> *pTVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  FValueType *this_00;
  longlong lVar13;
  FName local_res8;
  uint local_68 [2];
  FName local_60;
  FName local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this->ConstCollection);
  if (pFVar8 != (FGeometryCollection *)0x0) {
    FGeometryCollectionConvexUtility::SetVolumeAttributes((FManagedArrayCollection *)pFVar8);
    FVar4 = FTransformCollection::TransformGroup;
    pFVar9 = ::FName::FName(&local_res8,"Volume");
    local_58 = FVar4;
    local_60 = *pFVar9;
    pTVar10 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&pFVar8->_padding_,(TTuple<FName,FName> *)&local_60);
    this_00 = (FValueType *)&pTVar10->field_0x10;
    if (pTVar10 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      this_00 = (FValueType *)0x0;
    }
    if ((this_00 == (FValueType *)0x0) ||
       (pTVar11 = FManagedArrayCollection::FValueType::ModifyTypedPtr<float>(this_00),
       pTVar11 == (TManagedArray<float> *)0x0)) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4737912332707953979>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformSelectionFacade.cpp"
                         ,0x2c5,"VolumesPtr");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar12;
      }
    }
    else {
      local_68[0] = 0;
      iVar6 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
      if ((int)local_68[0] < iVar6) {
        do {
          lVar13 = (longlong)(int)local_68[0];
          uVar7 = 0;
          if ((int)local_68[0] < *(int *)&pTVar11->field_0x18) {
            uVar7 = ~local_68[0] >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
          fVar1 = *(float *)(*(longlong *)&pTVar11->field_0x10 + lVar13 * 4);
          if (param_4) {
            if (param_3) {
LAB_143ffaff6:
              if ((fVar1 < param_1) || (param_2 < fVar1)) goto LAB_143ffb09b;
            }
            else if ((fVar1 <= param_1) || (param_2 <= fVar1)) goto LAB_143ffb09b;
LAB_143ffb008:
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar2 <= (FScriptContainerElement *)local_68) &&
                ((FScriptContainerElement *)local_68 <
                 pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar12;
            }
            iVar6 = __return_storage_ptr__->ArrayNum;
            if (iVar6 == __return_storage_ptr__->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar6 + 1;
            *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
                 local_68[0];
          }
          else {
            if (!param_3) goto LAB_143ffaff6;
            if ((fVar1 <= param_1) || (param_2 <= fVar1)) goto LAB_143ffb008;
          }
LAB_143ffb09b:
          local_68[0] = local_68[0] + 1;
          iVar6 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
        } while ((int)local_68[0] < iVar6);
      }
    }
    (**(code **)pFVar8->_padding_)(pFVar8,1);
  }
  return __return_storage_ptr__;
}

// SelectCentroidInBox @ 143ffb130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectCentroidInBox
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TBox<double> *param_1,
          TTransform<double> *param_2)

{
  double *pdVar1;
  TManagedArray<int> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar19;
  uint *puVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auStack_448 [32];
  uint *local_428;
  FScriptContainerElement *local_420;
  longlong local_418;
  longlong local_410;
  undefined8 local_408;
  uint local_3f8 [2];
  TTransform<double> *local_3f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_3e8;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  undefined1 local_3a8 [16];
  double local_398;
  FCollectionTransformFacade local_388;
  FBoundsFacade local_298;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_448;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar2 = (this->ParentAttribute).ConstAttributeArray;
  if (pTVar2 != (TManagedArray<int> *)0x0) {
    local_3f0 = param_2;
    iVar15 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
    FBoundsFacade::FBoundsFacade(&local_298,this->ConstCollection);
    FCollectionTransformFacade::FCollectionTransformFacade(&local_388,this->ConstCollection);
    FBoundsFacade::GetCentroids(&local_298,&local_3e8);
    uVar12 = _UNK_15061cc8c;
    uVar11 = _UNK_15061cc88;
    uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_3f8[0] = 0;
    if (0 < iVar15) {
      do {
        if (((this->TransformToGeometryIndexAttribute).ConstAttributeArray ==
             (TManagedArray<int> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x67,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          pTVar19 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar19;
        }
        puVar20 = (uint *)(longlong)(int)local_3f8[0];
        pTVar2 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
        iVar18 = *(int *)&pTVar2->field_0x18;
        uVar16 = 0;
        if ((int)local_3f8[0] < iVar18) {
          uVar16 = ~local_3f8[0] >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_428 = puVar20, local_420 = (FScriptContainerElement *)(longlong)iVar18,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar4 = (code *)swi(3);
          pTVar19 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar19;
        }
        uVar16 = *(uint *)(*(longlong *)&pTVar2->field_0x10 + (longlong)puVar20 * 4);
        puVar20 = (uint *)(longlong)(int)uVar16;
        if ((-1 < (int)uVar16) && ((int)uVar16 < local_3e8.ArrayNum)) {
          uVar17 = 0;
          if ((int)uVar16 < local_3e8.ArrayNum) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (local_428 = puVar20,
             local_420 = (FScriptContainerElement *)(longlong)local_3e8.ArrayNum,
             bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            pTVar19 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar19;
          }
          uVar16 = local_3f8[0];
          local_3d8 = *(double *)(local_3e8.AllocatorInstance.Data + (longlong)puVar20 * 0x18);
          dStack_3d0 = *(double *)(local_3e8.AllocatorInstance.Data + (longlong)puVar20 * 0x18 + 8);
          local_3c8 = *(double *)
                       (local_3e8.AllocatorInstance.Data + (longlong)puVar20 * 0x18 + 0x10);
          if ((local_388.TransformAttribute.ConstAttributeArray ==
               (TManagedArray<UE::Math::TTransform<float>_> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar14)) {
            pcVar4 = (code *)swi(3);
            pTVar19 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar19;
          }
          pTVar13 = local_388.TransformAttribute.ConstAttributeArray;
          if ((local_388.ParentAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar14)) {
            pcVar4 = (code *)swi(3);
            pTVar19 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar19;
          }
          GeometryCollectionAlgo::GlobalMatrix
                    (&local_138,pTVar13,local_388.ParentAttribute.ConstAttributeArray,uVar16);
          dVar48 = local_138.Rotation.XY.m128d_f64[1];
          auVar61._0_8_ = local_3c8 * local_138.Scale3D.ZW.m128d_f64[0];
          auVar61._8_8_ = local_138.Scale3D.ZW.m128d_f64[1] * 0.0;
          dVar5 = local_3d8 * local_138.Scale3D.XY.m128d_f64[0];
          dVar7 = dStack_3d0 * local_138.Scale3D.XY.m128d_f64[1];
          uVar50 = (undefined4)((ulonglong)dVar7 >> 0x20);
          dVar6 = local_138.Rotation.ZW.m128d_f64[0];
          auVar51 = blendpd((undefined1  [16])local_138.Rotation.XY.m128d_f64,
                            (undefined1  [16])local_138.Rotation.ZW.m128d_f64,2);
          auVar24._8_4_ = local_138.Rotation.ZW.m128d_f64[0]._0_4_;
          auVar24._0_8_ = dVar48;
          auVar24._12_4_ = local_138.Rotation.ZW.m128d_f64[0]._4_4_;
          dVar8 = local_138.Rotation.ZW.m128d_f64[1];
          auVar53._8_4_ = SUB84(dVar7,0);
          auVar53._0_8_ = dVar5;
          auVar53._12_4_ = uVar50;
          auVar33._8_4_ = SUB84(dVar7,0);
          auVar33._0_8_ = dVar5;
          auVar33._12_4_ = uVar50;
          auVar34 = blendpd(auVar33,auVar61,2);
          auVar54._0_8_ = auVar53._8_8_ * local_138.Rotation.XY.m128d_f64[0] - dVar48 * dVar5;
          auVar54._8_8_ = auVar61._0_8_ * dVar48 - auVar24._8_8_ * dVar7;
          auVar35._0_8_ = auVar34._0_8_ * dVar6 - auVar51._0_8_ * auVar61._0_8_;
          auVar35._8_8_ = auVar34._8_8_ * dVar8 - auVar51._8_8_ * auVar61._8_8_;
          auVar34 = blendpd(auVar54,auVar35,2);
          dVar32 = auVar54._8_8_ + auVar54._8_8_;
          dVar43 = auVar35._0_8_ + auVar35._0_8_;
          uVar50 = SUB84(dVar43,0);
          uVar60 = (undefined4)((ulonglong)dVar43 >> 0x20);
          auVar55._0_8_ = auVar34._0_8_ + auVar34._0_8_;
          auVar55._8_8_ = auVar34._8_8_ + auVar34._8_8_;
          auVar40._8_4_ = uVar50;
          auVar40._0_8_ = dVar32;
          auVar40._12_4_ = uVar60;
          auVar25._8_4_ = uVar50;
          auVar25._0_8_ = dVar32;
          auVar25._12_4_ = uVar60;
          auVar36._8_4_ = uVar50;
          auVar36._0_8_ = dVar32;
          auVar36._12_4_ = uVar60;
          dVar47 = (local_3f0->Rotation).XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar49 = (local_3f0->Rotation).XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar34 = blendpd(auVar36,auVar55,2);
          auVar41._0_8_ = auVar40._8_8_ * local_138.Rotation.XY.m128d_f64[0] - dVar32 * dVar48;
          auVar41._8_8_ = auVar55._0_8_ * dVar48 - auVar25._8_8_ * dVar6;
          auVar26._8_4_ = SUB84(auVar55._8_8_,0);
          auVar26._0_8_ = auVar55._0_8_;
          auVar26._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
          auVar44._8_4_ = SUB84(dVar49,0);
          auVar44._0_8_ = dVar47;
          uVar50 = (undefined4)((ulonglong)dVar49 >> 0x20);
          auVar44._12_4_ = uVar50;
          auVar52._0_8_ =
               (local_3f0->Rotation).ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          auVar52._8_8_ =
               (local_3f0->Rotation).ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar37._0_8_ = auVar34._0_8_ * dVar6 - auVar55._0_8_ * auVar51._0_8_;
          auVar37._8_8_ = auVar34._8_8_ * dVar8 - auVar26._8_8_ * auVar51._8_8_;
          auVar27._8_4_ = SUB84(auVar41._8_8_,0);
          auVar27._0_8_ = auVar41._0_8_;
          auVar27._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
          auVar34 = blendpd(auVar41,auVar37,2);
          dVar5 = dVar32 * dVar8 + dVar5 + auVar27._8_8_ + local_138.Translation.XY.m128d_f64[0];
          dVar7 = dVar43 * dVar8 + dVar7 + auVar37._0_8_ + local_138.Translation.XY.m128d_f64[1];
          local_398 = auVar55._0_8_ * dVar8 + auVar61._0_8_ + auVar34._0_8_ +
                      local_138.Translation.ZW.m128d_f64[0];
          local_3a8._8_4_ = SUB84(dVar7,0);
          local_3a8._0_8_ = dVar5;
          local_3a8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          dVar5 = dVar5 - (local_3f0->Translation).XY.m128d_f64[0];
          dVar7 = dVar7 - (local_3f0->Translation).XY.m128d_f64[1];
          uVar60 = (undefined4)((ulonglong)dVar7 >> 0x20);
          dVar32 = local_398 - (local_3f0->Translation).ZW.m128d_f64[0];
          auVar42._8_4_ = SUB84(dVar49,0);
          auVar42._0_8_ = dVar47;
          auVar42._12_4_ = uVar50;
          dVar43 = auVar42._8_8_;
          auVar62._8_4_ = SUB84(dVar7,0);
          auVar62._0_8_ = dVar5;
          auVar62._12_4_ = uVar60;
          auVar28._8_4_ = SUB84(auVar52._0_8_,0);
          auVar28._0_8_ = dVar43;
          auVar28._12_4_ = (int)((ulonglong)auVar52._0_8_ >> 0x20);
          auVar51 = blendpd(auVar44,auVar52,2);
          auVar38._8_4_ = SUB84(dVar7,0);
          auVar38._0_8_ = dVar5;
          auVar38._12_4_ = uVar60;
          auVar63._0_8_ = auVar62._8_8_ * dVar47 - dVar43 * dVar5;
          auVar63._8_8_ = dVar32 * dVar49 - auVar28._8_8_ * dVar7;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = dVar32;
          auVar34 = blendpd(auVar38,auVar34,2);
          auVar39._0_8_ = auVar34._0_8_ * auVar52._0_8_ - auVar51._0_8_ * dVar32;
          auVar39._8_8_ = auVar34._8_8_ * auVar52._8_8_ - auVar51._8_8_ * 0.0;
          auVar34 = blendpd(auVar63,auVar39,2);
          dVar6 = auVar63._8_8_ + auVar63._8_8_;
          dVar8 = auVar39._0_8_ + auVar39._0_8_;
          uVar50 = SUB84(dVar8,0);
          uVar60 = (undefined4)((ulonglong)dVar8 >> 0x20);
          auVar64._0_8_ = auVar34._0_8_ + auVar34._0_8_;
          auVar64._8_8_ = auVar34._8_8_ + auVar34._8_8_;
          auVar58._8_4_ = uVar50;
          auVar58._0_8_ = dVar6;
          auVar58._12_4_ = uVar60;
          auVar29._8_4_ = uVar50;
          auVar29._0_8_ = dVar6;
          auVar29._12_4_ = uVar60;
          auVar56._8_4_ = uVar50;
          auVar56._0_8_ = dVar6;
          auVar56._12_4_ = uVar60;
          auVar34 = blendpd(auVar56,auVar64,2);
          auVar59._0_8_ = auVar58._8_8_ * dVar47 - dVar6 * dVar43;
          auVar59._8_8_ = auVar64._0_8_ * dVar49 - auVar29._8_8_ * auVar52._0_8_;
          auVar30._8_4_ = SUB84(auVar64._8_8_,0);
          auVar30._0_8_ = auVar64._0_8_;
          auVar30._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
          auVar57._0_8_ = auVar34._0_8_ * auVar52._0_8_ - auVar64._0_8_ * auVar51._0_8_;
          auVar57._8_8_ = auVar34._8_8_ * auVar52._8_8_ - auVar30._8_8_ * auVar51._8_8_;
          auVar34 = *(undefined1 (*) [16])(local_3f0->Scale3D).ZW.m128d_f64;
          lVar21 = -(ulonglong)
                    ((double)CONCAT44(uVar10 & auVar34._4_4_,uVar9 & auVar34._0_4_) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                          *(undefined1 (*) [16])(local_3f0->Scale3D).XY.m128d_f64);
          auVar45._0_8_ =
               (double)CONCAT44(uVar10 & *(uint *)((longlong)(local_3f0->Scale3D).XY.m128d_f64 + 4),
                                uVar9 & *(uint *)(local_3f0->Scale3D).XY.m128d_f64);
          auVar45._8_4_ = uVar11 & *(uint *)((local_3f0->Scale3D).XY.m128d_f64 + 1);
          auVar45._12_4_ = uVar12 & *(uint *)((longlong)(local_3f0->Scale3D).XY.m128d_f64 + 0xc);
          lVar22 = -(ulonglong)
                    (auVar45._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar23 = -(ulonglong)
                    (auVar45._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar31._8_4_ = SUB84(auVar59._8_8_,0);
          auVar31._0_8_ = auVar59._0_8_;
          auVar31._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
          auVar46._0_8_ =
               (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar51._4_4_,
                                ~(uint)lVar22 & auVar51._0_4_);
          auVar46._8_4_ = ~(uint)lVar23 & auVar51._8_4_;
          auVar46._12_4_ = ~(uint)((ulonglong)lVar23 >> 0x20) & auVar51._12_4_;
          auVar51._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar51._0_8_ = auVar34._0_8_;
          auVar51._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar51);
          local_3c0 = auVar46._0_8_ * (dVar6 * auVar52._8_8_ + dVar5 + auVar31._8_8_);
          dStack_3b8 = auVar46._8_8_ * (dVar8 * auVar52._8_8_ + dVar7 + auVar57._0_8_);
          auVar51 = blendpd(auVar59,auVar57,2);
          local_3b0 = (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar34._4_4_,
                                       ~(uint)lVar21 & auVar34._0_4_) *
                      (auVar64._0_8_ * auVar52._8_8_ + dVar32 + auVar51._0_8_);
          if ((((((param_1->Min).field0_0x0._s_0.X <= local_3c0 &&
                  local_3c0 != (param_1->Min).field0_0x0._s_0.X) &&
                (local_3c0 < (param_1->Max).field0_0x0._s_0.X)) &&
               (pdVar1 = &(param_1->Min).field0_0x0._s_0.Y,
               *pdVar1 <= dStack_3b8 && dStack_3b8 != *pdVar1)) &&
              ((dStack_3b8 < (param_1->Max).field0_0x0._s_0.Y &&
               (pdVar1 = &(param_1->Min).field0_0x0._s_0.Z,
               *pdVar1 <= local_3b0 && local_3b0 != *pdVar1)))) &&
             (local_3b0 < (param_1->Max).field0_0x0._s_0.Z)) {
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar3 <= (FScriptContainerElement *)local_3f8) &&
               ((FScriptContainerElement *)local_3f8 <
                pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
              local_410 = (longlong)__return_storage_ptr__->ArrayNum;
              local_408 = 4;
              local_428 = local_3f8;
              local_420 = pFVar3;
              local_418 = (longlong)__return_storage_ptr__->ArrayMax;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar14) {
                pcVar4 = (code *)swi(3);
                pTVar19 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar19;
              }
            }
            iVar18 = __return_storage_ptr__->ArrayNum;
            if (iVar18 == __return_storage_ptr__->ArrayMax) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&__return_storage_ptr__->AllocatorInstance,
                                  &__return_storage_ptr__->ArrayMax);
            }
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar18 + 1;
            *(uint *)(pFVar3 + (longlong)iVar18 * 4) = local_3f8[0];
          }
        }
        local_3f8[0] = local_3f8[0] + 1;
      } while ((int)local_3f8[0] < iVar15);
    }
    if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// SelectCentroidInSphere @ 143ffb7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectCentroidInSphere
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TSphere<double> *param_1,
          TTransform<double> *param_2)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined4 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  double dVar61;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auStack_458 [32];
  uint *local_438;
  FScriptContainerElement *local_430;
  longlong local_428;
  longlong local_420;
  undefined8 local_418;
  uint local_408 [2];
  TSphere<double> *local_400;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_3f8;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  undefined1 local_3d0 [16];
  double local_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  FCollectionTransformFacade local_398;
  FBoundsFacade local_2a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_458;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar1 = (this->ParentAttribute).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<int> *)0x0) {
    local_400 = param_1;
    iVar13 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    FBoundsFacade::FBoundsFacade(&local_2a8,this->ConstCollection);
    FCollectionTransformFacade::FCollectionTransformFacade(&local_398,this->ConstCollection);
    FBoundsFacade::GetCentroids(&local_2a8,&local_3f8);
    uVar10 = _UNK_15061cc8c;
    uVar9 = _UNK_15061cc88;
    uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_408[0] = 0;
    if (0 < iVar13) {
      do {
        if (((this->TransformToGeometryIndexAttribute).ConstAttributeArray ==
             (TManagedArray<int> *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x67,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar17;
        }
        puVar18 = (uint *)(longlong)(int)local_408[0];
        pTVar1 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
        iVar16 = *(int *)&pTVar1->field_0x18;
        uVar14 = 0;
        if ((int)local_408[0] < iVar16) {
          uVar14 = ~local_408[0] >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (local_438 = puVar18, local_430 = (FScriptContainerElement *)(longlong)iVar16,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar17;
        }
        uVar14 = *(uint *)(*(longlong *)&pTVar1->field_0x10 + (longlong)puVar18 * 4);
        puVar18 = (uint *)(longlong)(int)uVar14;
        if ((-1 < (int)uVar14) && ((int)uVar14 < local_3f8.ArrayNum)) {
          uVar15 = 0;
          if ((int)uVar14 < local_3f8.ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (local_438 = puVar18,
             local_430 = (FScriptContainerElement *)(longlong)local_3f8.ArrayNum,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          uVar14 = local_408[0];
          local_3e8 = *(double *)(local_3f8.AllocatorInstance.Data + (longlong)puVar18 * 0x18);
          dStack_3e0 = *(double *)(local_3f8.AllocatorInstance.Data + (longlong)puVar18 * 0x18 + 8);
          local_3d8 = *(double *)
                       (local_3f8.AllocatorInstance.Data + (longlong)puVar18 * 0x18 + 0x10);
          if ((local_398.TransformAttribute.ConstAttributeArray ==
               (TManagedArray<UE::Math::TTransform<float>_> *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar12)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          pTVar11 = local_398.TransformAttribute.ConstAttributeArray;
          if ((local_398.ParentAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar12)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          GeometryCollectionAlgo::GlobalMatrix
                    (&local_148,pTVar11,local_398.ParentAttribute.ConstAttributeArray,uVar14);
          dVar58 = local_3e8 * local_148.Scale3D.XY.m128d_f64[0];
          dVar61 = dStack_3e0 * local_148.Scale3D.XY.m128d_f64[1];
          dVar22 = local_3d8 * local_148.Scale3D.ZW.m128d_f64[0];
          dVar43 = local_148.Scale3D.ZW.m128d_f64[1] * 0.0;
          dVar31 = local_148.Rotation.ZW.m128d_f64[0];
          dVar30 = local_148.Rotation.XY.m128d_f64[1];
          auVar49 = blendpd((undefined1  [16])local_148.Rotation.XY.m128d_f64,
                            (undefined1  [16])local_148.Rotation.ZW.m128d_f64,2);
          auVar45._8_4_ = local_148.Rotation.ZW.m128d_f64[0]._0_4_;
          auVar45._0_8_ = dVar30;
          auVar45._12_4_ = local_148.Rotation.ZW.m128d_f64[0]._4_4_;
          dVar39 = local_148.Rotation.ZW.m128d_f64[1];
          auVar51._8_4_ = SUB84(dVar61,0);
          auVar51._0_8_ = dVar58;
          uVar48 = (undefined4)((ulonglong)dVar61 >> 0x20);
          auVar51._12_4_ = uVar48;
          auVar32._8_4_ = SUB84(dVar61,0);
          auVar32._0_8_ = dVar58;
          auVar32._12_4_ = uVar48;
          auVar33._8_4_ = SUB84(dVar43,0);
          auVar33._0_8_ = dVar22;
          auVar33._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          auVar33 = blendpd(auVar32,auVar33,2);
          auVar52._0_8_ = auVar51._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar30 * dVar58;
          auVar52._8_8_ = dVar22 * dVar30 - auVar45._8_8_ * dVar61;
          auVar34._0_8_ = auVar33._0_8_ * dVar31 - auVar49._0_8_ * dVar22;
          auVar34._8_8_ = auVar33._8_8_ * dVar39 - auVar49._8_8_ * dVar43;
          auVar33 = blendpd(auVar52,auVar34,2);
          dVar4 = auVar52._8_8_ + auVar52._8_8_;
          dVar5 = auVar34._0_8_ + auVar34._0_8_;
          uVar48 = SUB84(dVar5,0);
          uVar62 = (undefined4)((ulonglong)dVar5 >> 0x20);
          auVar53._0_8_ = auVar33._0_8_ + auVar33._0_8_;
          auVar53._8_8_ = auVar33._8_8_ + auVar33._8_8_;
          auVar40._8_4_ = uVar48;
          auVar40._0_8_ = dVar4;
          auVar40._12_4_ = uVar62;
          auVar23._8_4_ = uVar48;
          auVar23._0_8_ = dVar4;
          auVar23._12_4_ = uVar62;
          auVar35._8_4_ = uVar48;
          auVar35._0_8_ = dVar4;
          auVar35._12_4_ = uVar62;
          dVar46 = (param_2->Rotation).XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar47 = (param_2->Rotation).XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar33 = blendpd(auVar35,auVar53,2);
          auVar41._0_8_ = auVar40._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar4 * dVar30;
          auVar41._8_8_ = auVar53._0_8_ * dVar30 - auVar23._8_8_ * dVar31;
          auVar24._8_4_ = SUB84(auVar53._8_8_,0);
          auVar24._0_8_ = auVar53._0_8_;
          auVar24._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
          auVar44._8_4_ = SUB84(dVar47,0);
          auVar44._0_8_ = dVar46;
          uVar48 = (undefined4)((ulonglong)dVar47 >> 0x20);
          auVar44._12_4_ = uVar48;
          auVar50._0_8_ =
               (param_2->Rotation).ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          auVar50._8_8_ =
               (param_2->Rotation).ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar36._0_8_ = auVar33._0_8_ * dVar31 - auVar53._0_8_ * auVar49._0_8_;
          auVar36._8_8_ = auVar33._8_8_ * dVar39 - auVar24._8_8_ * auVar49._8_8_;
          auVar25._8_4_ = SUB84(auVar41._8_8_,0);
          auVar25._0_8_ = auVar41._0_8_;
          auVar25._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
          auVar33 = blendpd(auVar41,auVar36,2);
          dVar4 = dVar4 * dVar39 + dVar58 + auVar25._8_8_ + local_148.Translation.XY.m128d_f64[0];
          dVar5 = dVar5 * dVar39 + dVar61 + auVar36._0_8_ + local_148.Translation.XY.m128d_f64[1];
          local_3c0 = auVar53._0_8_ * dVar39 + dVar22 + auVar33._0_8_ +
                      local_148.Translation.ZW.m128d_f64[0];
          local_3d0._8_4_ = SUB84(dVar5,0);
          local_3d0._0_8_ = dVar4;
          local_3d0._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          dVar4 = dVar4 - (param_2->Translation).XY.m128d_f64[0];
          dVar5 = dVar5 - (param_2->Translation).XY.m128d_f64[1];
          uVar62 = (undefined4)((ulonglong)dVar5 >> 0x20);
          dVar30 = local_3c0 - (param_2->Translation).ZW.m128d_f64[0];
          auVar42._8_4_ = SUB84(dVar47,0);
          auVar42._0_8_ = dVar46;
          auVar42._12_4_ = uVar48;
          dVar22 = auVar42._8_8_;
          auVar63._8_4_ = SUB84(dVar5,0);
          auVar63._0_8_ = dVar4;
          auVar63._12_4_ = uVar62;
          auVar26._8_4_ = SUB84(auVar50._0_8_,0);
          auVar26._0_8_ = dVar22;
          auVar26._12_4_ = (int)((ulonglong)auVar50._0_8_ >> 0x20);
          auVar45 = blendpd(auVar44,auVar50,2);
          auVar64._0_8_ = auVar63._8_8_ * dVar46 - dVar22 * dVar4;
          auVar64._8_8_ = dVar30 * dVar47 - auVar26._8_8_ * dVar5;
          auVar6._4_8_ = auVar53._8_8_ * dVar39 + dVar43 + auVar33._8_8_ +
                         local_148.Translation.ZW.m128d_f64[1];
          auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
          auVar54._0_8_ = auVar6._0_8_ << 0x20;
          auVar54._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar54._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar37._8_4_ = SUB84(dVar5,0);
          auVar37._0_8_ = dVar4;
          auVar37._12_4_ = uVar62;
          auVar49._8_8_ = 0;
          auVar49._0_8_ = dVar30;
          auVar33 = blendpd(auVar37,auVar49,2);
          auVar38._0_8_ = auVar33._0_8_ * auVar50._0_8_ - auVar45._0_8_ * dVar30;
          auVar38._8_8_ = auVar33._8_8_ * auVar50._8_8_ - auVar45._8_8_ * 0.0;
          auVar33 = blendpd(auVar64,auVar38,2);
          dVar31 = auVar64._8_8_ + auVar64._8_8_;
          dVar39 = auVar38._0_8_ + auVar38._0_8_;
          uVar48 = SUB84(dVar39,0);
          uVar62 = (undefined4)((ulonglong)dVar39 >> 0x20);
          auVar65._0_8_ = auVar33._0_8_ + auVar33._0_8_;
          auVar65._8_8_ = auVar33._8_8_ + auVar33._8_8_;
          auVar59._8_4_ = uVar48;
          auVar59._0_8_ = dVar31;
          auVar59._12_4_ = uVar62;
          auVar27._8_4_ = uVar48;
          auVar27._0_8_ = dVar31;
          auVar27._12_4_ = uVar62;
          auVar56._8_4_ = uVar48;
          auVar56._0_8_ = dVar31;
          auVar56._12_4_ = uVar62;
          auVar33 = blendpd(auVar56,auVar65,2);
          auVar60._0_8_ = auVar59._8_8_ * dVar46 - dVar31 * dVar22;
          auVar60._8_8_ = auVar65._0_8_ * dVar47 - auVar27._8_8_ * auVar50._0_8_;
          auVar28._8_4_ = SUB84(auVar65._8_8_,0);
          auVar28._0_8_ = auVar65._0_8_;
          auVar28._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
          auVar57._0_8_ = auVar33._0_8_ * auVar50._0_8_ - auVar65._0_8_ * auVar45._0_8_;
          auVar57._8_8_ = auVar33._8_8_ * auVar50._8_8_ - auVar28._8_8_ * auVar45._8_8_;
          auVar33 = *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
          auVar55._8_8_ = auVar54._8_8_;
          auVar55._0_8_ = auVar33._0_8_;
          lVar19 = -(ulonglong)
                    ((double)CONCAT44(uVar8 & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 +
                                                       4),
                                      uVar7 & *(uint *)(param_2->Scale3D).XY.m128d_f64) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar21 = -(ulonglong)
                    ((double)CONCAT44(uVar10 & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 +
                                                        0xc),
                                      uVar9 & *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1)) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          lVar20 = -(ulonglong)
                    ((double)CONCAT44(uVar8 & auVar33._4_4_,uVar7 & auVar33._0_4_) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar29._8_4_ = SUB84(auVar60._8_8_,0);
          auVar29._0_8_ = auVar60._0_8_;
          auVar29._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
          auVar49 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                          *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64);
          auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar55);
          dVar31 = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar49._4_4_,
                                    ~(uint)lVar19 & auVar49._0_4_) *
                   (dVar31 * auVar50._8_8_ + dVar4 + auVar29._8_8_);
          dVar39 = (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar49._12_4_,
                                    ~(uint)lVar21 & auVar49._8_4_) *
                   (dVar39 * auVar50._8_8_ + dVar5 + auVar57._0_8_);
          dVar22 = local_400->W + __real_3f1a36e2e0000000;
          dVar43 = (local_400->Center).field0_0x0._s_0.X - dVar31;
          auVar49 = blendpd(auVar60,auVar57,2);
          local_3b8._8_4_ = SUB84(dVar39,0);
          local_3b8._0_8_ = dVar31;
          local_3b8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
          local_3a8 = (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar33._4_4_,
                                       ~(uint)lVar20 & auVar33._0_4_) *
                      (auVar65._0_8_ * auVar50._8_8_ + dVar30 + auVar49._0_8_);
          dVar39 = (local_400->Center).field0_0x0._s_0.Y - dVar39;
          dVar31 = (local_400->Center).field0_0x0._s_0.Z - local_3a8;
          if (dVar43 * dVar43 + dVar39 * dVar39 + dVar31 * dVar31 <= dVar22 * dVar22) {
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar2 <= (FScriptContainerElement *)local_408) &&
               ((FScriptContainerElement *)local_408 <
                pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
              local_420 = (longlong)__return_storage_ptr__->ArrayNum;
              local_418 = 4;
              local_438 = local_408;
              local_430 = pFVar2;
              local_428 = (longlong)__return_storage_ptr__->ArrayMax;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar12) {
                pcVar3 = (code *)swi(3);
                pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar17;
              }
            }
            iVar16 = __return_storage_ptr__->ArrayNum;
            if (iVar16 == __return_storage_ptr__->ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&__return_storage_ptr__->AllocatorInstance,
                                  &__return_storage_ptr__->ArrayMax);
            }
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar16 + 1;
            *(uint *)(pFVar2 + (longlong)iVar16 * 4) = local_408[0];
          }
        }
        local_408[0] = local_408[0] + 1;
      } while ((int)local_408[0] < iVar13);
    }
    if (local_3f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// SelectChildren @ 143ffbe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectChildren
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong *plVar7;
  bool bVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar14;
  uint uVar15;
  int *piVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  undefined1 local_168;
  undefined1 local_167 [3];
  uint local_164;
  undefined4 local_160;
  uint local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_148;
  int *local_140;
  FScriptContainerElement *local_138;
  TArray<int,TSizedDefaultAllocator<32>_> *local_130;
  longlong *local_128;
  int iStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8 [2];
  undefined4 local_9c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_148 = (this->ChildrenAttribute).ConstAttributeArray;
  piVar16 = &param_1->ArrayNum;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_140 = piVar16;
  local_130 = param_1;
  if (local_148 != (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    local_15c = *piVar16;
    uVar10 = (ulonglong)(int)local_15c;
    pFVar18 = (param_1->AllocatorInstance).Data;
    local_138 = pFVar18 + uVar10 * 4;
    pTVar14 = local_148;
    while( true ) {
      pFVar5 = local_138;
      piVar16 = local_140;
      if (*local_140 != (int)uVar10) {
        local_168 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_168);
      }
      if (pFVar18 == pFVar5) break;
      uVar15 = *(uint *)pFVar18;
      uVar13 = 0;
      if ((int)uVar15 < *(int *)&pTVar14->field_0x18) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      local_164 = uVar15;
      if ((uVar13 == 0) &&
         (local_178 = (longlong)(int)uVar15, local_170 = (longlong)*(int *)&pTVar14->field_0x18,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar11 = (longlong)(int)uVar15 * 0x50 + *(longlong *)&pTVar14->field_0x10;
      if (*(int *)(lVar11 + 8) == *(int *)(lVar11 + 0x34)) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_98,&local_158,(bool *)&local_164);
        uVar10 = (ulonglong)local_15c;
        pFVar18 = pFVar18 + 4;
      }
      else {
        uVar13 = 0;
        if ((int)uVar15 < *(int *)&pTVar14->field_0x18) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if (uVar13 == 0) {
          local_178 = (longlong)(int)uVar15;
          local_170 = (longlong)*(int *)&pTVar14->field_0x18;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iStack_120 = 0;
        local_108 = 0;
        uStack_11c = 1;
        plVar19 = (longlong *)((longlong)(int)uVar15 * 0x50 + *(longlong *)&pTVar14->field_0x10);
        iVar2 = (int)plVar19[5];
        pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar19 + 2);
        iStack_10c = 0;
        if (iVar2 != 0) {
          pTVar17 = pTVar1;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar19[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar19[4];
          }
          uVar15 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
          iStack_120 = 0;
          while (uVar15 == 0) {
            lVar11 = (longlong)iStack_120;
            local_108 = local_108 + 0x20;
            iStack_120 = iStack_120 + 1;
            iStack_10c = iVar2;
            if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120)
            goto LAB_143ffc0ae;
            uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar11 * 4 + 4);
          }
          uStack_11c = -uVar15 & uVar15;
          uVar10 = (ulonglong)uStack_11c * 2 + 1;
          lVar11 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_154 = (int)lVar11;
          iStack_10c = local_108 + -1 + local_154;
          if (iVar2 < iStack_10c) {
            iStack_10c = iVar2;
          }
        }
LAB_143ffc0ae:
        uVar15 = *(uint *)(plVar19 + 5);
        uStack_104 = local_9c;
        uVar13 = uVar15 & 0xffffffe0;
        iStack_100 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34);
        TStack_f0._padding_ = CONCAT44(uStack_11c,iStack_120);
        uStack_110 = 0xffffffff;
        TStack_f0.CurrentBitIndex = iStack_10c;
        TStack_f0.UnvisitedBitMask = 0xffffffff;
        iVar12 = (int)uVar15 >> 5;
        TStack_f0._28_4_ = local_9c;
        TStack_f0.BaseBitIndex = local_108;
        uStack_d0 = CONCAT44(uStack_fc,iStack_100);
        local_128 = plVar19;
        local_118 = pTVar1;
        local_f8 = plVar19;
        TStack_f0.Array = pTVar1;
        if ((((int)uVar15 < 0) || (iVar2 < (int)uVar15)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar3 = *(uint *)(plVar19 + 5);
        if (uVar15 != uVar3) {
          pTVar17 = pTVar1;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar19[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar19[4];
          }
          uVar15 = -1 << ((byte)uVar15 & 0x1f) &
                   *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
          while (uVar15 == 0) {
            lVar11 = (longlong)iVar12;
            uVar13 = uVar13 + 0x20;
            iVar12 = iVar12 + 1;
            uVar15 = uVar3;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
            goto LAB_143ffc1b0;
            uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar11 * 4 + 4);
          }
          uVar10 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_150 = (int)lVar11;
          uVar15 = local_150 + -1 + uVar13;
          if ((int)uVar3 < (int)uVar15) {
            uVar15 = uVar3;
          }
        }
LAB_143ffc1b0:
        while( true ) {
          plVar7 = local_f8;
          if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
            local_167[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
          }
          if (((TStack_f0.CurrentBitIndex == uVar15) && (TStack_f0.Array == pTVar1)) &&
             (plVar7 == plVar19)) break;
          local_160 = *(undefined4 *)(*plVar7 + (longlong)TStack_f0.CurrentBitIndex * 0xc);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_98,&local_14c,(bool *)&local_160);
          TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
        }
        pFVar18 = pFVar18 + 4;
        uVar10 = (ulonglong)local_15c;
        pTVar14 = local_148;
      }
    }
  }
  pTVar6 = local_130;
  pTVar9 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_98,local_c8);
  if (pTVar6 != pTVar9) {
    pFVar18 = (pTVar6->AllocatorInstance).Data;
    if (pFVar18 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar18);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *piVar16 = pTVar9->ArrayNum;
    pTVar6->ArrayMax = pTVar9->ArrayMax;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
  }
  if (local_c8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].AllocatorInstance.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// SelectCluster @ 143ffc300

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectCluster
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint local_28 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar1 = (this->SimulationTypeAttribute).ConstAttributeArray;
  if (pTVar1 == (TManagedArray<int> *)0x0) {
    return __return_storage_ptr__;
  }
  iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_28[0] = 0;
  if (0 < iVar6) {
    do {
      uVar4 = local_28[0];
      uVar7 = 0;
      if ((int)local_28[0] < *(int *)&pTVar1->field_0x18) {
        uVar7 = ~local_28[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      if (*(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)(int)uVar4 * 4) == 2) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
             local_28[0];
      }
      local_28[0] = local_28[0] + 1;
    } while ((int)local_28[0] < iVar6);
  }
  return __return_storage_ptr__;
}

// SelectContact @ 143ffc4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectContact
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  FGeometryCollection *this_00;
  FName *pFVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [4];
  int local_1a4;
  FGeometryCollectionProximityUtility local_1a0;
  int local_198 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_190;
  FGeometryCollection *local_188;
  FName local_180;
  FName local_178;
  code *local_170;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_168;
  FName local_160;
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  FCollectionHierarchyFacade local_148;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  if ((((this->ParentAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
      ((this->LevelAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
     ((this->SimulationTypeAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    this_00 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this->ConstCollection);
    local_188 = this_00;
    if (this_00 != (FGeometryCollection *)0x0) {
      FGeometryCollectionProximityUtility::FGeometryCollectionProximityUtility(&local_1a0,this_00);
      FGeometryCollectionProximityUtility::RequireProximity(&local_1a0,(FConvexHulls *)0x0);
      FVar6 = FGeometryCollection::GeometryGroup;
      pFVar8 = ::FName::FName(&local_160,"Proximity");
      FVar3 = *pFVar8;
      bVar7 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this_00,FVar3,FVar6);
      if (!bVar7) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("HasAttribute(Name, Group)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x185,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_178 = FVar6;
      local_180 = FVar3;
      pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                       *)&this_00->_padding_,(TTuple<FName,FName> *)&local_180);
      if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FManagedArrayCollection::FValueType::
      GetTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                ((FValueType *)&pTVar9->field_0x10);
      Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
                (&local_148,(FManagedArrayCollection *)this_00);
      pFVar11 = (param_1->AllocatorInstance).Data;
      iVar1 = param_1->ArrayNum;
      pFVar4 = pFVar11 + (longlong)iVar1 * 4;
      while( true ) {
        if (param_1->ArrayNum != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1a8);
        }
        if (pFVar11 == pFVar4) break;
        iVar2 = *(int *)pFVar11;
        local_1a4 = iVar2;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_98,local_198,(bool *)&local_1a4);
        local_190 = &local_98;
        local_168 = &local_190;
        local_170 = UE::Core::Private::Function::
                    TFunctionRefCaller<`GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectContact'::__l12::<lambda_1>,void,int>
                    ::Call;
        FGeometryCollectionProximityUtility::EnumerateNeighbors
                  (&local_1a0,&local_148,iVar2,(TFunctionRef<void___cdecl(int)> *)&local_170,param_2
                   ,false);
        pFVar11 = pFVar11 + 4;
      }
      (**(code **)local_188->_padding_)(local_188,1);
    }
  }
  pTVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_98,&local_158);
  if (param_1 != pTVar10) {
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (param_1->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar10->ArrayNum;
    param_1->ArrayMax = pTVar10->ArrayMax;
    pTVar10->ArrayNum = 0;
    pTVar10->ArrayMax = 0;
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// SelectInverse @ 143ffc790

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectInverse
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TManagedArray<int> *pTVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int local_28 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  iVar5 = 0;
  if ((this->ParentAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) {
    pTVar2 = (this->ParentAttribute).ConstAttributeArray;
    if (pTVar2 == (TManagedArray<int> *)0x0) {
      iVar5 = FManagedArrayCollection::NumElements
                        ((this->ParentAttribute).ConstCollection,(this->ParentAttribute).Group);
    }
    else {
      iVar5 = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2);
    }
    local_28[0] = 0;
    if (0 < iVar5) {
      do {
        pFVar7 = (param_1->AllocatorInstance).Data;
        pFVar1 = pFVar7 + (longlong)param_1->ArrayNum * 4;
        for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 4) {
          if (*(int *)pFVar7 == local_28[0]) goto LAB_143ffc8b1;
        }
        if (((local_20.AllocatorInstance.Data <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             local_20.AllocatorInstance.Data + (longlong)local_20.ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = local_20.ArrayNum;
        if (local_20.ArrayNum == local_20.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_20.AllocatorInstance,&local_20.ArrayMax);
        }
        local_20.ArrayNum = iVar6 + 1;
        *(int *)(local_20.AllocatorInstance.Data + (longlong)iVar6 * 4) = local_28[0];
LAB_143ffc8b1:
        local_28[0] = local_28[0] + 1;
      } while (local_28[0] < iVar5);
    }
    iVar5 = local_20.ArrayNum;
  }
  _Src.Data = local_20.AllocatorInstance.Data;
  if (param_1 != &local_20) {
    param_1->ArrayNum = iVar5;
    if ((iVar5 == 0) && (param_1->ArrayMax == 0)) {
      param_1->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar5,param_1->ArrayMax,&param_1->AllocatorInstance,iVar5,&param_1->ArrayMax);
      if (iVar5 != 0) {
        memcpy((param_1->AllocatorInstance).Data,_Src.Data,(longlong)iVar5 << 2);
      }
    }
  }
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// SelectLeaf @ 143ffc960

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectLeaf
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint local_28 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar1 = (this->SimulationTypeAttribute).ConstAttributeArray;
  if (pTVar1 == (TManagedArray<int> *)0x0) {
    return __return_storage_ptr__;
  }
  iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_28[0] = 0;
  if (0 < iVar6) {
    do {
      uVar4 = local_28[0];
      uVar7 = 0;
      if ((int)local_28[0] < *(int *)&pTVar1->field_0x18) {
        uVar7 = ~local_28[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      if (*(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)(int)uVar4 * 4) == 1) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
             local_28[0];
      }
      local_28[0] = local_28[0] + 1;
    } while ((int)local_28[0] < iVar6);
  }
  return __return_storage_ptr__;
}

// SelectLevel @ 143ffcb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectLevel
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  int iVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<int> *pTVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [4];
  uint local_c4;
  uint local_c0;
  int local_bc;
  FScriptContainerElement *local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  if (((this->ParentAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->LevelAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    pTVar3 = (this->ParentAttribute).ConstAttributeArray;
    pTVar4 = (this->LevelAttribute).ConstAttributeArray;
    if (pTVar3 == (TManagedArray<int> *)0x0) {
      iVar8 = FManagedArrayCollection::NumElements
                        ((this->ParentAttribute).ConstCollection,(this->ParentAttribute).Group);
    }
    else {
      iVar8 = (**(code **)(*(longlong *)pTVar3 + 0x60))(pTVar3);
    }
    local_c0 = param_1->ArrayNum;
    uVar11 = (ulonglong)(int)local_c0;
    pFVar12 = (param_1->AllocatorInstance).Data;
    local_b8 = pFVar12 + uVar11 * 4;
    while( true ) {
      pFVar6 = local_b8;
      if (param_1->ArrayNum != (int)uVar11) {
        local_c8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c8);
      }
      if (pFVar12 == pFVar6) break;
      uVar1 = *(uint *)pFVar12;
      uVar9 = 0;
      if ((int)uVar1 < *(int *)&pTVar4->field_0x18) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (local_d8 = (longlong)(int)uVar1, local_d0 = (longlong)*(int *)&pTVar4->field_0x18,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_c4 = 0;
      iVar2 = *(int *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar1 * 4);
      if (0 < iVar8) {
        do {
          uVar1 = local_c4;
          uVar9 = 0;
          if ((int)local_c4 < *(int *)&pTVar4->field_0x18) {
            uVar9 = ~local_c4 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_d8 = (longlong)(int)local_c4;
            local_d0 = (longlong)*(int *)&pTVar4->field_0x18;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (*(int *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar1 * 4) == iVar2) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_98,&local_bc,(bool *)&local_c4);
          }
          local_c4 = uVar1 + 1;
        } while ((int)local_c4 < iVar8);
      }
      uVar11 = (ulonglong)local_c0;
      pFVar12 = pFVar12 + 4;
    }
  }
  pTVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_98,&local_b0);
  if (param_1 != pTVar10) {
    pFVar12 = (param_1->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (param_1->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar10->ArrayNum;
    param_1->ArrayMax = pTVar10->ArrayMax;
    pTVar10->ArrayNum = 0;
    pTVar10->ArrayMax = 0;
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// SelectNone @ 143ffcda0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectNone
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// SelectParent @ 143ffcdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectParent
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  ForElementType<unsigned_int> FVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  TManagedArray<int> *pTVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [4];
  uint local_134;
  TManagedArray<int> *local_130;
  int local_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_120;
  undefined4 local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 local_104;
  int local_100;
  FScriptContainerElement *local_f8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  FSparseArrayAllocationInfo local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar18 = (this->ParentAttribute).ConstAttributeArray;
  piVar1 = &param_1->ArrayNum;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_130 = pTVar18;
  local_f0 = param_1;
  if (pTVar18 != (TManagedArray<int> *)0x0) {
    local_134 = *piVar1;
    uVar11 = (ulonglong)(int)local_134;
    pFVar23 = (param_1->AllocatorInstance).Data;
    local_f8 = pFVar23 + uVar11 * 4;
    while( true ) {
      pFVar3 = local_f8;
      if (*piVar1 != (int)uVar11) {
        local_138[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_138);
      }
      if (pFVar23 == pFVar3) break;
      uVar20 = *(uint *)pFVar23;
      uVar15 = 0;
      if ((int)uVar20 < *(int *)&pTVar18->field_0x18) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar20 = *(uint *)(*(longlong *)&pTVar18->field_0x10 + (longlong)(int)uVar20 * 4);
      if (uVar20 != (int)FManagedArrayCollection::Invalid) {
        if (local_64 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                             (int *)(local_98 + 0xc));
          iVar22 = local_70;
          if (local_70 == 0) {
            iVar16 = 0;
LAB_143ffcf58:
            if ((int)local_6c < local_70 + 1) {
              uVar15 = local_6c + 0x1f >> 5;
              uVar19 = local_70 + 0x20U >> 5;
              if (uVar19 < 5) {
                iVar7 = 4;
              }
              else {
                uVar11 = (ulonglong)uVar19;
                if (uVar15 < 5) {
                  uVar15 = 0;
                }
                if (uVar15 == 0) {
                  uVar21 = 4;
                  if (4 < uVar11) {
                    uVar21 = uVar11;
                  }
                }
                else {
                  uVar21 = ((ulonglong)uVar19 * 3 >> 3) + 0x10 + uVar11;
                }
                uVar8 = FMemory::QuantizeSize(uVar21 * 4,0);
                iVar7 = (int)(uVar8 >> 2);
                if (iVar7 < (int)uVar19) {
                  iVar7 = 0x7fffffff;
                }
              }
              local_6c = iVar7 << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
            }
            local_70 = local_70 + 1;
            uVar19 = local_70 >> 0x1f & 0x1f;
            uVar15 = local_70 + uVar19;
            iVar7 = (uVar15 & 0x1f) - uVar19;
            if (iVar7 != 0) {
              FVar12 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
              if (local_78 != (ForElementType<unsigned_int>)0x0) {
                FVar12 = local_78;
              }
              puVar17 = (uint *)((longlong)FVar12 + (longlong)((int)uVar15 >> 5) * 4);
              *puVar17 = *puVar17 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
            }
          }
          else {
            iVar16 = (int)(local_70 + (local_70 >> 0x1f & 0x1fU)) >> 5;
            if (iVar16 != (int)((local_70 + -1 >> 0x1f & 0x1fU) + local_70 + -1) >> 5)
            goto LAB_143ffcf58;
            local_70 = local_70 + 1;
          }
          FVar12 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar12 = local_78;
          }
          puVar17 = (uint *)((longlong)FVar12 + (longlong)iVar16 * 4);
          *puVar17 = *puVar17 & ~(1 << ((byte)iVar22 & 0x1f));
          iVar22 = local_68;
        }
        else {
          iVar22 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
          local_64 = local_64 + -1;
          iVar6 = local_68;
          if (local_64 != 0) {
            *(undefined4 *)(local_98._0_8_ + (longlong)iVar22 * 0xc) = 0xffffffff;
          }
        }
        local_68 = iVar22;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,&local_c0,iVar6);
        if (local_c0.Pointer == (uint *)0x0) {
          puVar17 = (uint *)0x0;
        }
        else {
          *(uint *)local_c0.Pointer = uVar20;
          *(uint *)((longlong)local_c0.Pointer + 4) = 0xffffffff;
          puVar17 = local_c0.Pointer;
        }
        uVar20 = *puVar17;
        if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
          FVar13.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar13.Data = local_58.Data;
          }
          for (iVar22 = *(int *)(FVar13.Data + (ulonglong)(local_50 - 1 & uVar20) * 4); iVar22 != -1
              ; iVar22 = *(int *)(local_98._0_8_ + (longlong)iVar22 * 0xc + 4)) {
            if (*(uint *)(local_98._0_8_ + (longlong)iVar22 * 0xc) == uVar20) {
              if (iVar22 != -1) {
                *(uint *)(local_98._0_8_ + (longlong)iVar22 * 0xc) = uVar20;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_98,local_c0.Index,1);
                pTVar18 = local_130;
                goto LAB_143ffd385;
              }
              break;
            }
          }
        }
        uVar19 = local_98._8_4_ - local_64;
        uVar15 = 1;
        if (3 < uVar19) {
          uVar11 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_104 = (undefined4)lVar14;
          uVar15 = 1 << ((byte)lVar14 & 0x1f);
        }
        if (((int)uVar19 < 1) || ((int)uVar15 <= (int)local_50)) {
          uVar20 = local_50 - 1 & uVar20;
          puVar17[2] = uVar20;
          FVar13.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar13.Data = local_58.Data;
          }
          uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar20;
          puVar17[1] = *(uint *)(FVar13.Data + uVar11 * 4);
          *(int *)(FVar13.Data + uVar11 * 4) = local_c0.Index;
          pTVar18 = local_130;
        }
        else {
          local_50 = uVar15;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
          }
          if (uVar15 != 0) {
            uVar20 = uVar15;
            if (uVar15 < 2) {
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                uVar20 = 0;
                goto LAB_143ffd1a5;
              }
            }
            else {
LAB_143ffd1a5:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_58,0,uVar20,4);
            }
            if (0 < (int)uVar15) {
              uVar21 = (ulonglong)uVar15;
              uVar11 = 0;
              do {
                FVar13.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar13.Data = local_58.Data;
                }
                uVar9 = uVar11 & (longlong)(int)uVar15 - 1U;
                uVar11 = uVar11 + 1;
                *(undefined4 *)(FVar13.Data + uVar9 * 4) = 0xffffffff;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
          }
          pTVar18 = local_130;
          if (local_50 != 0) {
            pTStack_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
            local_128 = 0;
            uStack_124 = 1;
            iStack_114 = 0;
            iStack_110 = 0;
            if (local_70 != 0) {
              FVar12 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
              if (local_78 != (ForElementType<unsigned_int>)0x0) {
                FVar12 = local_78;
              }
              uVar20 = *(uint *)FVar12;
              while (uVar20 == 0) {
                iStack_110 = iStack_110 + 0x20;
                lVar14 = (longlong)local_128;
                local_128 = local_128 + 1;
                if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_128)
                goto LAB_143ffd2b3;
                uVar20 = ((uint *)((longlong)FVar12 + 4))[lVar14];
              }
              uStack_124 = -uVar20 & uVar20;
              uVar11 = (ulonglong)uStack_124 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              local_100 = (int)lVar14;
              iStack_114 = local_100 + -1 + iStack_110;
              if (local_70 < iStack_114) {
LAB_143ffd2b3:
                iStack_114 = local_70;
              }
            }
            local_118 = 0xffffffff;
            local_e8 = (longlong *)local_98;
            local_e0._padding_ = CONCAT44(uStack_124,local_128);
            local_e0.CurrentBitIndex = iStack_114;
            local_e0.UnvisitedBitMask = 0xffffffff;
            local_e0._28_4_ = uStack_10c;
            local_e0.BaseBitIndex = iStack_110;
            local_e0.Array = pTStack_120;
            iVar22 = iStack_114;
            if (iStack_114 < local_70) {
              do {
                uVar20 = local_50 - 1 & *(uint *)(*local_e8 + (longlong)iVar22 * 0xc);
                lVar14 = *local_e8 + (longlong)iVar22 * 0xc;
                *(uint *)(lVar14 + 8) = uVar20;
                FVar13.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar13.Data = local_58.Data;
                }
                uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar20;
                *(undefined4 *)(lVar14 + 4) = *(undefined4 *)(FVar13.Data + uVar11 * 4);
                *(int *)(FVar13.Data + uVar11 * 4) = iVar22;
                local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
                pTVar18 = local_130;
                iVar22 = local_e0.CurrentBitIndex;
              } while (local_e0.CurrentBitIndex < (local_e0.Array)->NumBits);
            }
          }
        }
      }
LAB_143ffd385:
      uVar11 = (ulonglong)local_134;
      pFVar23 = pFVar23 + 4;
    }
  }
  pTVar4 = local_f0;
  pTVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_b0);
  if (pTVar4 != pTVar10) {
    pFVar23 = (pTVar4->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *piVar1 = pTVar10->ArrayNum;
    pTVar4->ArrayMax = pTVar10->ArrayMax;
    pTVar10->ArrayNum = 0;
    pTVar10->ArrayMax = 0;
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  bVar5 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_64 = 0;
  local_70 = 0;
  local_68 = -1;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// SelectRandom @ 143ffd4d0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectRandom
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1,float param_2
          ,float param_3)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  float fVar12;
  int local_58 [16];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->ParentAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) {
    pTVar1 = (this->ParentAttribute).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<int> *)0x0) {
      iVar7 = FManagedArrayCollection::NumElements
                        ((this->ParentAttribute).ConstCollection,(this->ParentAttribute).Group);
    }
    else {
      iVar7 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    }
    fVar5 = __real_38000100;
    fVar4 = __real_3f800000;
    local_58[0] = 0;
    uVar11 = (uint)param_2;
    if (0 < iVar7) {
      do {
        if (param_1) {
          uVar11 = uVar11 * 0xbb38435 + 0x3619636b;
          fVar12 = (float)(uVar11 >> 9 | 0x3f800000) - fVar4;
        }
        else {
          uVar8 = rand();
          fVar12 = (float)(uVar8 & 0x7fff) * fVar5;
        }
        if (param_3 < fVar12) {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_58) &&
              ((FScriptContainerElement *)local_58 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar10;
          }
          iVar9 = __return_storage_ptr__->ArrayNum;
          if (iVar9 == __return_storage_ptr__->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar9 + 1;
          *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 4) =
               local_58[0];
        }
        local_58[0] = local_58[0] + 1;
      } while (local_58[0] < iVar7);
    }
  }
  return __return_storage_ptr__;
}

// SelectRootBones @ 143ffd6a0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectRootBones
          (FCollectionTransformSelectionFacade *this,
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
    (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
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

// SelectSiblings @ 143ffd830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectSiblings
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  bool bVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  TManagedArray<int> *pTVar11;
  uint uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  FScriptContainerElement *pFVar14;
  longlong *plVar15;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar16;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  undefined1 local_168;
  undefined1 local_167 [3];
  undefined4 local_164;
  uint local_160;
  int local_15c;
  int local_158;
  int local_154;
  TArray<int,TSizedDefaultAllocator<32>_> *local_150;
  TManagedArray<int> *local_148;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_140;
  FScriptContainerElement *local_138;
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_d0 [2];
  undefined4 local_a4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  pTVar11 = (this->ParentAttribute).ConstAttributeArray;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_150 = param_1;
  local_148 = pTVar11;
  if ((pTVar11 != (TManagedArray<int> *)0x0) &&
     ((this->ChildrenAttribute).ConstAttributeArray !=
      (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) {
    pFVar14 = (param_1->AllocatorInstance).Data;
    pTVar16 = (this->ChildrenAttribute).ConstAttributeArray;
    local_160 = param_1->ArrayNum;
    uVar7 = (ulonglong)(int)local_160;
    local_138 = pFVar14 + uVar7 * 4;
    local_140 = pTVar16;
    while( true ) {
      pFVar3 = local_138;
      if (param_1->ArrayNum != (int)uVar7) {
        local_168 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_168);
      }
      if (pFVar14 == pFVar3) break;
      uVar12 = *(uint *)pFVar14;
      uVar10 = 0;
      if ((int)uVar12 < *(int *)&pTVar11->field_0x18) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (local_178 = (longlong)(int)uVar12, local_170 = (longlong)*(int *)&pTVar11->field_0x18,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar12 = *(uint *)(*(longlong *)&pTVar11->field_0x10 + (longlong)(int)uVar12 * 4);
      if (uVar12 != 0xffffffff) {
        uVar10 = 0;
        if ((int)uVar12 < *(int *)&pTVar16->field_0x18) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (local_178 = (longlong)(int)uVar12, local_170 = (longlong)*(int *)&pTVar16->field_0x18,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iStack_128 = 0;
        uStack_124 = 1;
        plVar15 = (longlong *)((longlong)(int)uVar12 * 0x50 + *(longlong *)&pTVar16->field_0x10);
        iVar9 = (int)plVar15[5];
        local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
        iStack_114 = iStack_128;
        local_110 = iStack_128;
        if (iVar9 != 0) {
          pTVar13 = local_120;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
          }
          uVar12 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
          local_110 = 0;
          iStack_128 = 0;
          while (uVar12 == 0) {
            lVar8 = (longlong)iStack_128;
            local_110 = local_110 + 0x20;
            iStack_128 = iStack_128 + 1;
            iStack_114 = iVar9;
            if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128)
            goto LAB_143ffda2c;
            uVar12 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
          }
          uStack_124 = -uVar12 & uVar12;
          uVar7 = (ulonglong)uStack_124 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_15c = (int)lVar8;
          iStack_114 = local_110 + -1 + local_15c;
          if (iVar9 < iStack_114) {
            iStack_114 = iVar9;
          }
        }
LAB_143ffda2c:
        uVar12 = *(uint *)(plVar15 + 5);
        uStack_10c = local_a4;
        iStack_108 = (int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34);
        uVar10 = uVar12 & 0xffffffe0;
        TStack_f8._padding_ = CONCAT44(uStack_124,iStack_128);
        uStack_118 = 0xffffffff;
        TStack_f8.CurrentBitIndex = iStack_114;
        TStack_f8.UnvisitedBitMask = 0xffffffff;
        iVar9 = (int)uVar12 >> 5;
        TStack_f8._28_4_ = local_a4;
        TStack_f8.BaseBitIndex = local_110;
        uStack_d8 = CONCAT44(uStack_104,iStack_108);
        local_130 = plVar15;
        local_100 = plVar15;
        TStack_f8.Array = local_120;
        if (((int)uVar12 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(uint *)(plVar15 + 5);
        if (uVar12 != uVar1) {
          pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
          }
          uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                   *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
          while (uVar12 == 0) {
            lVar8 = (longlong)iVar9;
            uVar10 = uVar10 + 0x20;
            iVar9 = iVar9 + 1;
            uVar12 = uVar1;
            if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
            goto LAB_143ffdb30;
            uVar12 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
          }
          uVar7 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
          lVar8 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_158 = (int)lVar8;
          uVar12 = local_158 + -1 + uVar10;
          if ((int)uVar1 < (int)uVar12) {
            uVar12 = uVar1;
          }
        }
LAB_143ffdb30:
        while( true ) {
          plVar4 = local_100;
          if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
            local_167[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
          }
          if (((TStack_f8.CurrentBitIndex == uVar12) &&
              (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2))) &&
             (pTVar11 = local_148, param_1 = local_150, pTVar16 = local_140, plVar4 == plVar15))
          break;
          local_164 = *(undefined4 *)(*plVar4 + (longlong)TStack_f8.CurrentBitIndex * 0xc);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_98,&local_154,(bool *)&local_164);
          TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
        }
      }
      uVar7 = (ulonglong)local_160;
      pFVar14 = pFVar14 + 4;
    }
  }
  pTVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_98,local_d0);
  if (param_1 != pTVar6) {
    pFVar14 = (param_1->AllocatorInstance).Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (param_1->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar6->ArrayNum;
    param_1->ArrayMax = pTVar6->ArrayMax;
    pTVar6->ArrayNum = 0;
    pTVar6->ArrayMax = 0;
  }
  if (local_d0[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0[0].AllocatorInstance.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// SelectVerticesInBox @ 143ffdc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectVerticesInBox
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TBox<double> *param_1,
          TTransform<double> *param_2,bool param_3)

{
  double *pdVar1;
  int *piVar2;
  TVector<float> *pTVar3;
  TManagedArray<int> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar15;
  bool bVar16;
  int iVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  TVector<float> *pTVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined4 uVar62;
  double dVar63;
  double dVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auStack_6c8 [32];
  int *local_6a8;
  FScriptContainerElement *local_6a0;
  longlong local_698;
  longlong local_690;
  undefined8 local_688;
  int local_678;
  int local_674;
  int local_670;
  TTransform<double> *local_668;
  TArrayView<UE::Math::TVector<float>_const_,int> local_660;
  double local_650;
  double dStack_648;
  double local_640;
  double local_638;
  double dStack_630;
  double local_628;
  undefined1 local_620 [16];
  double local_610;
  FCollectionTransformFacade local_608;
  FCollectionMeshFacade local_518;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_6c8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar4 = (this->ParentAttribute).ConstAttributeArray;
  if (pTVar4 != (TManagedArray<int> *)0x0) {
    local_668 = param_2;
    iVar17 = (**(code **)(*(longlong *)pTVar4 + 0x60))();
    local_670 = iVar17;
    FCollectionMeshFacade::FCollectionMeshFacade(&local_518,this->ConstCollection);
    FCollectionTransformFacade::FCollectionTransformFacade(&local_608,this->ConstCollection);
    uVar14 = _UNK_15061cc8c;
    uVar13 = _UNK_15061cc88;
    uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_678 = 0;
    if (0 < iVar17) {
      do {
        iVar20 = 0;
        FCollectionMeshFacade::GetVertexPositions(&local_518,&local_660,local_678);
        iVar17 = local_660.ArrayNum;
        pTVar3 = local_660.DataPtr + iVar17;
        pTVar19 = local_660.DataPtr;
        if (local_660.DataPtr != pTVar3) {
          do {
            local_650 = (double)(float)*(undefined8 *)&pTVar19->field0_0x0;
            dStack_648 = (double)(float)((ulonglong)*(undefined8 *)&pTVar19->field0_0x0 >> 0x20);
            local_674 = local_678;
            local_640 = (double)(pTVar19->field0_0x0)._s_0.Z;
            if ((local_608.TransformAttribute.ConstAttributeArray ==
                 (TManagedArray<UE::Math::TTransform<float>_> *)0x0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x67,L""), bVar16)) {
              pcVar6 = (code *)swi(3);
              pTVar18 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar18;
            }
            pTVar15 = local_608.TransformAttribute.ConstAttributeArray;
            if ((local_608.ParentAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x67,L""), bVar16)) {
              pcVar6 = (code *)swi(3);
              pTVar18 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar18;
            }
            GeometryCollectionAlgo::GlobalMatrix
                      (&local_148,pTVar15,local_608.ParentAttribute.ConstAttributeArray,local_674);
            dVar48 = local_148.Rotation.XY.m128d_f64[1];
            dVar7 = local_640 * local_148.Scale3D.ZW.m128d_f64[0];
            dVar8 = local_148.Scale3D.ZW.m128d_f64[1] * 0.0;
            dVar63 = local_148.Scale3D.XY.m128d_f64[0] * local_650;
            dVar67 = local_148.Scale3D.XY.m128d_f64[1] * dStack_648;
            dVar31 = local_148.Rotation.ZW.m128d_f64[0];
            dVar44 = local_148.Rotation.ZW.m128d_f64[1];
            auVar57._8_4_ = SUB84(dVar67,0);
            auVar57._0_8_ = dVar63;
            uVar50 = (undefined4)((ulonglong)dVar67 >> 0x20);
            auVar57._12_4_ = uVar50;
            auVar32._8_4_ = SUB84(dVar67,0);
            auVar32._0_8_ = dVar63;
            auVar32._12_4_ = uVar50;
            auVar33._8_4_ = SUB84(dVar8,0);
            auVar33._0_8_ = dVar7;
            auVar33._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            auVar33 = blendpd(auVar32,auVar33,2);
            auVar51 = blendpd((undefined1  [16])local_148.Rotation.XY.m128d_f64,
                              (undefined1  [16])local_148.Rotation.ZW.m128d_f64,2);
            auVar46._8_4_ = local_148.Rotation.ZW.m128d_f64[0]._0_4_;
            auVar46._0_8_ = dVar48;
            auVar46._12_4_ = local_148.Rotation.ZW.m128d_f64[0]._4_4_;
            auVar58._0_8_ = auVar57._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar48 * dVar63;
            auVar58._8_8_ = dVar7 * dVar48 - auVar46._8_8_ * dVar67;
            auVar34._0_8_ = auVar33._0_8_ * dVar31 - auVar51._0_8_ * dVar7;
            auVar34._8_8_ = auVar33._8_8_ * dVar44 - auVar51._8_8_ * dVar8;
            auVar33 = blendpd(auVar58,auVar34,2);
            dVar8 = auVar58._8_8_ + auVar58._8_8_;
            dVar9 = auVar34._0_8_ + auVar34._0_8_;
            uVar50 = SUB84(dVar9,0);
            uVar62 = (undefined4)((ulonglong)dVar9 >> 0x20);
            auVar59._0_8_ = auVar33._0_8_ + auVar33._0_8_;
            auVar59._8_8_ = auVar33._8_8_ + auVar33._8_8_;
            auVar39._8_4_ = uVar50;
            auVar39._0_8_ = dVar8;
            auVar39._12_4_ = uVar62;
            auVar24._8_4_ = uVar50;
            auVar24._0_8_ = dVar8;
            auVar24._12_4_ = uVar62;
            auVar35._8_4_ = uVar50;
            auVar35._0_8_ = dVar8;
            auVar35._12_4_ = uVar62;
            auVar33 = blendpd(auVar35,auVar59,2);
            dVar47 = (local_668->Rotation).XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar49 = (local_668->Rotation).XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            auVar40._0_8_ = auVar39._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar8 * dVar48;
            auVar40._8_8_ = auVar59._0_8_ * dVar48 - auVar24._8_8_ * dVar31;
            auVar25._8_4_ = SUB84(auVar59._8_8_,0);
            auVar25._0_8_ = auVar59._0_8_;
            auVar25._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
            auVar45._8_4_ = SUB84(dVar49,0);
            auVar45._0_8_ = dVar47;
            uVar50 = (undefined4)((ulonglong)dVar49 >> 0x20);
            auVar45._12_4_ = uVar50;
            auVar52._0_8_ =
                 (local_668->Rotation).ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            auVar52._8_8_ =
                 (local_668->Rotation).ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            auVar36._0_8_ = auVar33._0_8_ * dVar31 - auVar59._0_8_ * auVar51._0_8_;
            auVar36._8_8_ = auVar33._8_8_ * dVar44 - auVar25._8_8_ * auVar51._8_8_;
            auVar26._8_4_ = SUB84(auVar40._8_8_,0);
            auVar26._0_8_ = auVar40._0_8_;
            auVar26._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
            auVar33 = blendpd(auVar40,auVar36,2);
            dVar48 = dVar8 * dVar44 + dVar63 + auVar26._8_8_ + local_148.Translation.XY.m128d_f64[0]
            ;
            dVar9 = dVar9 * dVar44 + dVar67 + auVar36._0_8_ + local_148.Translation.XY.m128d_f64[1];
            local_620._8_4_ = SUB84(dVar9,0);
            local_620._0_8_ = dVar48;
            local_620._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            local_610 = auVar59._0_8_ * dVar44 + dVar7 + auVar33._0_8_ +
                        local_148.Translation.ZW.m128d_f64[0];
            dVar48 = dVar48 - (local_668->Translation).XY.m128d_f64[0];
            dVar9 = dVar9 - (local_668->Translation).XY.m128d_f64[1];
            uVar62 = (undefined4)((ulonglong)dVar9 >> 0x20);
            dVar31 = local_610 - (local_668->Translation).ZW.m128d_f64[0];
            auVar41._8_4_ = SUB84(dVar49,0);
            auVar41._0_8_ = dVar47;
            auVar41._12_4_ = uVar50;
            auVar64._8_4_ = SUB84(dVar9,0);
            auVar64._0_8_ = dVar48;
            auVar64._12_4_ = uVar62;
            dVar44 = auVar41._8_8_;
            auVar27._8_4_ = SUB84(auVar52._0_8_,0);
            auVar27._0_8_ = dVar44;
            auVar27._12_4_ = (int)((ulonglong)auVar52._0_8_ >> 0x20);
            auVar46 = blendpd(auVar45,auVar52,2);
            auVar37._8_4_ = SUB84(dVar9,0);
            auVar37._0_8_ = dVar48;
            auVar37._12_4_ = uVar62;
            auVar65._0_8_ = auVar64._8_8_ * dVar47 - dVar44 * dVar48;
            auVar65._8_8_ = dVar31 * dVar49 - auVar27._8_8_ * dVar9;
            auVar51._8_8_ = 0;
            auVar51._0_8_ = dVar31;
            auVar33 = blendpd(auVar37,auVar51,2);
            auVar38._0_8_ = auVar33._0_8_ * auVar52._0_8_ - auVar46._0_8_ * dVar31;
            auVar38._8_8_ = auVar33._8_8_ * auVar52._8_8_ - auVar46._8_8_ * 0.0;
            auVar33 = blendpd(auVar65,auVar38,2);
            dVar7 = auVar65._8_8_ + auVar65._8_8_;
            dVar8 = auVar38._0_8_ + auVar38._0_8_;
            uVar50 = SUB84(dVar8,0);
            uVar62 = (undefined4)((ulonglong)dVar8 >> 0x20);
            auVar66._0_8_ = auVar33._0_8_ + auVar33._0_8_;
            auVar66._8_8_ = auVar33._8_8_ + auVar33._8_8_;
            auVar60._8_4_ = uVar50;
            auVar60._0_8_ = dVar7;
            auVar60._12_4_ = uVar62;
            auVar28._8_4_ = uVar50;
            auVar28._0_8_ = dVar7;
            auVar28._12_4_ = uVar62;
            auVar55._8_4_ = uVar50;
            auVar55._0_8_ = dVar7;
            auVar55._12_4_ = uVar62;
            auVar33 = blendpd(auVar55,auVar66,2);
            auVar61._0_8_ = auVar60._8_8_ * dVar47 - dVar7 * dVar44;
            auVar61._8_8_ = auVar66._0_8_ * dVar49 - auVar28._8_8_ * auVar52._0_8_;
            auVar29._8_4_ = SUB84(auVar66._8_8_,0);
            auVar29._0_8_ = auVar66._0_8_;
            auVar29._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
            auVar10._4_8_ = auVar52._8_8_;
            auVar10._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
            auVar53._0_8_ = auVar10._0_8_ << 0x20;
            auVar53._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            auVar53._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            auVar56._0_8_ = auVar33._0_8_ * auVar52._0_8_ - auVar66._0_8_ * auVar46._0_8_;
            auVar56._8_8_ = auVar33._8_8_ * auVar52._8_8_ - auVar29._8_8_ * auVar46._8_8_;
            auVar33 = *(undefined1 (*) [16])(local_668->Scale3D).ZW.m128d_f64;
            auVar54._8_8_ = auVar53._8_8_;
            auVar54._0_8_ = auVar33._0_8_;
            lVar21 = -(ulonglong)
                      ((double)CONCAT44(uVar12 & auVar33._4_4_,uVar11 & auVar33._0_4_) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
            auVar42._0_8_ =
                 (double)CONCAT44(*(uint *)((longlong)(local_668->Scale3D).XY.m128d_f64 + 4) &
                                  uVar12,*(uint *)(local_668->Scale3D).XY.m128d_f64 & uVar11);
            auVar42._8_4_ = *(uint *)((local_668->Scale3D).XY.m128d_f64 + 1) & uVar13;
            auVar42._12_4_ = *(uint *)((longlong)(local_668->Scale3D).XY.m128d_f64 + 0xc) & uVar14;
            auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                            *(undefined1 (*) [16])(local_668->Scale3D).XY.m128d_f64);
            lVar22 = -(ulonglong)
                      (auVar42._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
            lVar23 = -(ulonglong)
                      (auVar42._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
            auVar30._8_4_ = SUB84(auVar61._8_8_,0);
            auVar30._0_8_ = auVar61._0_8_;
            auVar30._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
            auVar43._0_8_ =
                 (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar33._4_4_,
                                  ~(uint)lVar22 & auVar33._0_4_);
            auVar43._8_4_ = ~(uint)lVar23 & auVar33._8_4_;
            auVar43._12_4_ = ~(uint)((ulonglong)lVar23 >> 0x20) & auVar33._12_4_;
            auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar54)
            ;
            local_638 = auVar43._0_8_ * (dVar7 * auVar52._8_8_ + dVar48 + auVar30._8_8_);
            dStack_630 = auVar43._8_8_ * (dVar8 * auVar52._8_8_ + dVar9 + auVar56._0_8_);
            auVar51 = blendpd(auVar61,auVar56,2);
            local_628 = (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar33._4_4_,
                                         ~(uint)lVar21 & auVar33._0_4_) *
                        (auVar66._0_8_ * auVar52._8_8_ + dVar31 + auVar51._0_8_);
            if (((((local_638 < (param_1->Min).field0_0x0._s_0.X ||
                    local_638 == (param_1->Min).field0_0x0._s_0.X) ||
                  ((param_1->Max).field0_0x0._s_0.X <= local_638)) ||
                 (pdVar1 = &(param_1->Min).field0_0x0._s_0.Y,
                 dStack_630 < *pdVar1 || dStack_630 == *pdVar1)) ||
                (((param_1->Max).field0_0x0._s_0.Y <= dStack_630 ||
                 (pdVar1 = &(param_1->Min).field0_0x0._s_0.Z,
                 local_628 < *pdVar1 || local_628 == *pdVar1)))) ||
               ((param_1->Max).field0_0x0._s_0.Z <= local_628)) break;
            iVar20 = iVar20 + 1;
            if (!param_3) goto LAB_143ffe159;
            pTVar19 = pTVar19 + 1;
          } while (pTVar19 != pTVar3);
          iVar17 = local_660.ArrayNum;
        }
        if (param_3) {
          if (iVar20 == iVar17) {
LAB_143ffe161:
            pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
            piVar2 = &__return_storage_ptr__->ArrayMax;
            if ((pFVar5 <= (FScriptContainerElement *)&local_678) &&
               ((FScriptContainerElement *)&local_678 < pFVar5 + (longlong)*piVar2 * 4)) {
              local_690 = (longlong)__return_storage_ptr__->ArrayNum;
              local_688 = 4;
              local_6a8 = &local_678;
              local_6a0 = pFVar5;
              local_698 = (longlong)*piVar2;
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar16) {
                pcVar6 = (code *)swi(3);
                pTVar18 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar18;
              }
            }
            iVar17 = __return_storage_ptr__->ArrayNum;
            if (iVar17 == *piVar2) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
            }
            pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar17 + 1;
            *(int *)(pFVar5 + (longlong)iVar17 * 4) = local_678;
          }
        }
        else {
LAB_143ffe159:
          if (0 < iVar20) goto LAB_143ffe161;
        }
        local_678 = local_678 + 1;
      } while (local_678 < local_670);
    }
  }
  return __return_storage_ptr__;
}

// SelectVerticesInSphere @ 143ffe2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectVerticesInSphere
          (FCollectionTransformSelectionFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TSphere<double> *param_1,
          TTransform<double> *param_2,bool param_3)

{
  int *piVar1;
  TVector<float> *pTVar2;
  TManagedArray<int> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [12];
  TManagedArray<UE::Math::TTransform<float>_> *pTVar7;
  bool bVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  TVector<float> *pTVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar43;
  double dVar44;
  undefined4 uVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined4 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auStack_6c8 [32];
  int *local_6a8;
  FScriptContainerElement *local_6a0;
  longlong local_698;
  longlong local_690;
  undefined8 local_688;
  int local_678;
  int local_674;
  TTransform<double> *local_670;
  TSphere<double> *local_668;
  TArrayView<UE::Math::TVector<float>_const_,int> local_660;
  double local_650;
  double dStack_648;
  double local_640;
  undefined1 local_638 [16];
  double local_628;
  undefined1 local_620 [16];
  double local_610;
  FCollectionTransformFacade local_608;
  FCollectionMeshFacade local_518;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_6c8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar3 = (this->ParentAttribute).ConstAttributeArray;
  if (pTVar3 != (TManagedArray<int> *)0x0) {
    local_670 = param_2;
    local_668 = param_1;
    iVar9 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
    local_674 = iVar9;
    FCollectionMeshFacade::FCollectionMeshFacade(&local_518,this->ConstCollection);
    FCollectionTransformFacade::FCollectionTransformFacade(&local_608,this->ConstCollection);
    local_678 = 0;
    if (0 < iVar9) {
      do {
        iVar12 = 0;
        FCollectionMeshFacade::GetVertexPositions(&local_518,&local_660,local_678);
        iVar9 = local_660.ArrayNum;
        pTVar2 = local_660.DataPtr + iVar9;
        pTVar11 = local_660.DataPtr;
        if (local_660.DataPtr != pTVar2) {
          do {
            iVar9 = local_678;
            local_650 = (double)(float)*(undefined8 *)&pTVar11->field0_0x0;
            dStack_648 = (double)(float)((ulonglong)*(undefined8 *)&pTVar11->field0_0x0 >> 0x20);
            local_640 = (double)(pTVar11->field0_0x0)._s_0.Z;
            if ((local_608.TransformAttribute.ConstAttributeArray ==
                 (TManagedArray<UE::Math::TTransform<float>_> *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                   ,0x67,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar10;
            }
            pTVar7 = local_608.TransformAttribute.ConstAttributeArray;
            if ((local_608.ParentAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                   ,0x67,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar10;
            }
            GeometryCollectionAlgo::GlobalMatrix
                      (&local_148,pTVar7,local_608.ParentAttribute.ConstAttributeArray,iVar9);
            auVar56._0_8_ = local_640 * local_148.Scale3D.ZW.m128d_f64[0];
            auVar56._8_8_ = local_148.Scale3D.ZW.m128d_f64[1] * 0.0;
            dVar16 = local_650 * local_148.Scale3D.XY.m128d_f64[0];
            dVar32 = dStack_648 * local_148.Scale3D.XY.m128d_f64[1];
            uVar45 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar24 = local_148.Rotation.ZW.m128d_f64[0];
            dVar43 = local_148.Rotation.XY.m128d_f64[1];
            auVar46 = blendpd((undefined1  [16])local_148.Rotation.XY.m128d_f64,
                              (undefined1  [16])local_148.Rotation.ZW.m128d_f64,2);
            auVar39._8_4_ = local_148.Rotation.ZW.m128d_f64[0]._0_4_;
            auVar39._0_8_ = dVar43;
            auVar39._12_4_ = local_148.Rotation.ZW.m128d_f64[0]._4_4_;
            dVar37 = local_148.Rotation.ZW.m128d_f64[1];
            auVar48._8_4_ = SUB84(dVar32,0);
            auVar48._0_8_ = dVar16;
            auVar48._12_4_ = uVar45;
            auVar25._8_4_ = SUB84(dVar32,0);
            auVar25._0_8_ = dVar16;
            auVar25._12_4_ = uVar45;
            auVar26 = blendpd(auVar25,auVar56,2);
            auVar49._0_8_ = auVar48._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar43 * dVar16;
            auVar49._8_8_ = auVar56._0_8_ * dVar43 - auVar39._8_8_ * dVar32;
            auVar27._0_8_ = auVar26._0_8_ * dVar24 - auVar46._0_8_ * auVar56._0_8_;
            auVar27._8_8_ = auVar26._8_8_ * dVar37 - auVar46._8_8_ * auVar56._8_8_;
            auVar26 = blendpd(auVar49,auVar27,2);
            dVar23 = auVar49._8_8_ + auVar49._8_8_;
            dVar36 = auVar27._0_8_ + auVar27._0_8_;
            uVar45 = SUB84(dVar36,0);
            uVar55 = (undefined4)((ulonglong)dVar36 >> 0x20);
            auVar50._0_8_ = auVar26._0_8_ + auVar26._0_8_;
            auVar50._8_8_ = auVar26._8_8_ + auVar26._8_8_;
            auVar33._8_4_ = uVar45;
            auVar33._0_8_ = dVar23;
            auVar33._12_4_ = uVar55;
            auVar17._8_4_ = uVar45;
            auVar17._0_8_ = dVar23;
            auVar17._12_4_ = uVar55;
            auVar28._8_4_ = uVar45;
            auVar28._0_8_ = dVar23;
            auVar28._12_4_ = uVar55;
            dVar40 = (local_670->Rotation).XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar44 = (local_670->Rotation).XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            auVar26 = blendpd(auVar28,auVar50,2);
            auVar34._0_8_ = auVar33._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar23 * dVar43;
            auVar34._8_8_ = auVar50._0_8_ * dVar43 - auVar17._8_8_ * dVar24;
            auVar18._8_4_ = SUB84(auVar50._8_8_,0);
            auVar18._0_8_ = auVar50._0_8_;
            auVar18._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
            auVar38._8_4_ = SUB84(dVar44,0);
            auVar38._0_8_ = dVar40;
            uVar45 = (undefined4)((ulonglong)dVar44 >> 0x20);
            auVar38._12_4_ = uVar45;
            auVar47._0_8_ =
                 (local_670->Rotation).ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            auVar47._8_8_ =
                 (local_670->Rotation).ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            auVar29._0_8_ = auVar26._0_8_ * dVar24 - auVar50._0_8_ * auVar46._0_8_;
            auVar29._8_8_ = auVar26._8_8_ * dVar37 - auVar18._8_8_ * auVar46._8_8_;
            auVar46._8_4_ = SUB84(auVar34._8_8_,0);
            auVar46._0_8_ = auVar34._0_8_;
            auVar46._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
            auVar26 = blendpd(auVar34,auVar29,2);
            dVar16 = dVar23 * dVar37 + dVar16 + auVar46._8_8_ +
                     local_148.Translation.XY.m128d_f64[0];
            dVar32 = dVar36 * dVar37 + dVar32 + auVar29._0_8_ +
                     local_148.Translation.XY.m128d_f64[1];
            local_628 = auVar50._0_8_ * dVar37 + auVar56._0_8_ + auVar26._0_8_ +
                        local_148.Translation.ZW.m128d_f64[0];
            local_638._8_4_ = SUB84(dVar32,0);
            local_638._0_8_ = dVar16;
            local_638._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
            dVar16 = dVar16 - (local_670->Translation).XY.m128d_f64[0];
            dVar32 = dVar32 - (local_670->Translation).XY.m128d_f64[1];
            uVar55 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar23 = local_628 - (local_670->Translation).ZW.m128d_f64[0];
            auVar35._8_4_ = SUB84(dVar44,0);
            auVar35._0_8_ = dVar40;
            auVar35._12_4_ = uVar45;
            dVar36 = auVar35._8_8_;
            auVar57._8_4_ = SUB84(dVar32,0);
            auVar57._0_8_ = dVar16;
            auVar57._12_4_ = uVar55;
            auVar19._8_4_ = SUB84(auVar47._0_8_,0);
            auVar19._0_8_ = dVar36;
            auVar19._12_4_ = (int)((ulonglong)auVar47._0_8_ >> 0x20);
            auVar39 = blendpd(auVar38,auVar47,2);
            auVar30._8_4_ = SUB84(dVar32,0);
            auVar30._0_8_ = dVar16;
            auVar30._12_4_ = uVar55;
            auVar58._0_8_ = auVar57._8_8_ * dVar40 - dVar36 * dVar16;
            auVar58._8_8_ = dVar23 * dVar44 - auVar19._8_8_ * dVar32;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = dVar23;
            auVar26 = blendpd(auVar30,auVar26,2);
            auVar31._0_8_ = auVar26._0_8_ * auVar47._0_8_ - auVar39._0_8_ * dVar23;
            auVar31._8_8_ = auVar26._8_8_ * auVar47._8_8_ - auVar39._8_8_ * 0.0;
            auVar26 = blendpd(auVar58,auVar31,2);
            dVar24 = auVar58._8_8_ + auVar58._8_8_;
            dVar37 = auVar31._0_8_ + auVar31._0_8_;
            uVar45 = SUB84(dVar37,0);
            uVar55 = (undefined4)((ulonglong)dVar37 >> 0x20);
            auVar59._0_8_ = auVar26._0_8_ + auVar26._0_8_;
            auVar59._8_8_ = auVar26._8_8_ + auVar26._8_8_;
            auVar53._8_4_ = uVar45;
            auVar53._0_8_ = dVar24;
            auVar53._12_4_ = uVar55;
            auVar20._8_4_ = uVar45;
            auVar20._0_8_ = dVar24;
            auVar20._12_4_ = uVar55;
            auVar51._8_4_ = uVar45;
            auVar51._0_8_ = dVar24;
            auVar51._12_4_ = uVar55;
            auVar6._4_8_ = dVar44;
            auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
            auVar41._0_8_ = auVar6._0_8_ << 0x20;
            auVar41._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            auVar41._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            auVar54._0_8_ = auVar53._8_8_ * dVar40 - dVar24 * dVar36;
            auVar54._8_8_ = auVar59._0_8_ * dVar44 - auVar20._8_8_ * auVar47._0_8_;
            auVar26 = blendpd(auVar51,auVar59,2);
            auVar21._8_4_ = SUB84(auVar59._8_8_,0);
            auVar21._0_8_ = auVar59._0_8_;
            auVar21._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
            auVar52._0_8_ = auVar26._0_8_ * auVar47._0_8_ - auVar59._0_8_ * auVar39._0_8_;
            auVar52._8_8_ = auVar26._8_8_ * auVar47._8_8_ - auVar21._8_8_ * auVar39._8_8_;
            auVar26 = *(undefined1 (*) [16])(local_670->Scale3D).ZW.m128d_f64;
            auVar42._8_8_ = auVar41._8_8_;
            auVar42._0_8_ = auVar26._0_8_;
            lVar13 = -(ulonglong)
                      ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar26._4_4_
                                        ,(uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                         auVar26._0_4_) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
            auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                            *(undefined1 (*) [16])(local_670->Scale3D).XY.m128d_f64);
            lVar14 = -(ulonglong)
                      ((double)CONCAT44(*(uint *)((longlong)(local_670->Scale3D).XY.m128d_f64 + 4) &
                                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                        *(uint *)(local_670->Scale3D).XY.m128d_f64 &
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
            lVar15 = -(ulonglong)
                      ((double)CONCAT44(*(uint *)((longlong)(local_670->Scale3D).XY.m128d_f64 + 0xc)
                                        & _UNK_15061cc8c,
                                        *(uint *)((local_670->Scale3D).XY.m128d_f64 + 1) &
                                        _UNK_15061cc88) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
            auVar22._8_4_ = SUB84(auVar54._8_8_,0);
            auVar22._0_8_ = auVar54._0_8_;
            auVar22._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
            auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42)
            ;
            dVar24 = (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar39._4_4_,
                                      ~(uint)lVar14 & auVar39._0_4_) *
                     (dVar24 * auVar47._8_8_ + dVar16 + auVar22._8_8_);
            dVar37 = (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar39._12_4_,
                                      ~(uint)lVar15 & auVar39._8_4_) *
                     (dVar37 * auVar47._8_8_ + dVar32 + auVar52._0_8_);
            dVar32 = (local_668->Center).field0_0x0._s_0.X - dVar24;
            dVar16 = local_668->W + __real_3f1a36e2e0000000;
            auVar39 = blendpd(auVar54,auVar52,2);
            local_620._8_4_ = SUB84(dVar37,0);
            local_620._0_8_ = dVar24;
            local_620._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
            local_610 = (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar26._4_4_,
                                         ~(uint)lVar13 & auVar26._0_4_) *
                        (auVar59._0_8_ * auVar47._8_8_ + dVar23 + auVar39._0_8_);
            dVar37 = (local_668->Center).field0_0x0._s_0.Y - dVar37;
            dVar24 = (local_668->Center).field0_0x0._s_0.Z - local_610;
            if (dVar16 * dVar16 < dVar37 * dVar37 + dVar32 * dVar32 + dVar24 * dVar24) break;
            iVar12 = iVar12 + 1;
            if (!param_3) goto LAB_143ffe7b5;
            pTVar11 = pTVar11 + 1;
          } while (pTVar11 != pTVar2);
          iVar9 = local_660.ArrayNum;
        }
        if (param_3) {
          if (iVar12 == iVar9) {
LAB_143ffe7bd:
            pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
            piVar1 = &__return_storage_ptr__->ArrayMax;
            if ((pFVar4 <= (FScriptContainerElement *)&local_678) &&
               ((FScriptContainerElement *)&local_678 < pFVar4 + (longlong)*piVar1 * 4)) {
              local_690 = (longlong)__return_storage_ptr__->ArrayNum;
              local_688 = 4;
              local_6a8 = &local_678;
              local_6a0 = pFVar4;
              local_698 = (longlong)*piVar1;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
                return pTVar10;
              }
            }
            iVar9 = __return_storage_ptr__->ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
            }
            pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar9 + 1;
            *(int *)(pFVar4 + (longlong)iVar9 * 4) = local_678;
          }
        }
        else {
LAB_143ffe7b5:
          if (0 < iVar12) goto LAB_143ffe7bd;
        }
        local_678 = local_678 + 1;
      } while (local_678 < local_674);
    }
  }
  return __return_storage_ptr__;
}

