// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 4

// GetAttributeArray<float> @ 14e8f7d90

TManagedArray<float> * __thiscall
UE::Private::FTransferFacade::GetAttributeArray<float>
          (FTransferFacade *this,FString *param_1,FString *param_2)

{
  FManagedArrayCollection *pFVar1;
  FName FVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  undefined2 uVar5;
  bool bVar6;
  FName *pFVar7;
  TManagedArray<float> *pTVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FName local_res8;
  undefined2 local_40;
  undefined2 uStack_3e;
  FConstructionParameters local_38;
  
  iVar10 = (param_2->Data).ArrayNum;
  pFVar1 = this->Collection;
  iVar12 = 0;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = iVar12;
  }
  pFVar7 = ::FName::FName(&local_res8,iVar9,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
                          FNAME_Add);
  FVar2 = *pFVar7;
  iVar10 = (param_1->Data).ArrayNum;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = iVar12;
  }
  pFVar7 = ::FName::FName(&local_res8,iVar9,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  bVar6 = FManagedArrayCollection::HasAttribute(pFVar1,*pFVar7,FVar2);
  iVar10 = 0;
  if (!bVar6) {
    pFVar1 = this->Collection;
    uVar5 = local_38._10_2_;
    iVar9 = (param_2->Data).ArrayNum;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    iVar11 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar11 = iVar12;
    }
    pFVar7 = ::FName::FName(&local_res8,iVar11,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
                            FNAME_Add);
    FVar2 = *pFVar7;
    iVar9 = (param_1->Data).ArrayNum;
    iVar12 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar12 = iVar10;
    }
    pFVar7 = ::FName::FName(&local_res8,iVar12,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                            FNAME_Add);
    local_38.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_38.GroupIndexDependency.Number = 0;
    FVar3 = *pFVar7;
    local_38.Saved = true;
    local_38.bAllowCircularDependency = false;
    local_38._10_2_ = uVar5;
    bVar6 = FManagedArrayCollection::HasAttribute(pFVar1,FVar3,FVar2);
    if (!bVar6) {
      FManagedArrayCollection::AddNewAttributeImpl<float>(pFVar1,FVar3,FVar2,&local_38);
    }
    FManagedArrayCollection::ModifyAttribute<float>(pFVar1,FVar3,FVar2);
  }
  iVar9 = (param_2->Data).ArrayNum;
  pFVar1 = this->Collection;
  iVar12 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar12 = iVar10;
  }
  pFVar7 = ::FName::FName(&local_res8,iVar12,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
                          FNAME_Add);
  FVar2 = *pFVar7;
  iVar9 = (param_1->Data).ArrayNum;
  iVar12 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar12 = iVar10;
  }
  pFVar7 = ::FName::FName(&local_res8,iVar12,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  pTVar8 = FManagedArrayCollection::FindAttributeTyped<float>(pFVar1,*pFVar7,FVar2);
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return pTVar8;
}

// GetAttributeArray<FLinearColor> @ 14e8f7f70

TManagedArray<FLinearColor> * __thiscall
UE::Private::FTransferFacade::GetAttributeArray<FLinearColor>
          (FTransferFacade *this,FString *param_1,FString *param_2)

{
  FManagedArrayCollection *pFVar1;
  FName FVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  undefined2 uVar5;
  bool bVar6;
  FName *pFVar7;
  TManagedArray<FLinearColor> *pTVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FName local_res8;
  undefined2 local_40;
  undefined2 uStack_3e;
  FConstructionParameters local_38;
  
  iVar10 = (param_2->Data).ArrayNum;
  pFVar1 = this->Collection;
  iVar12 = 0;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = iVar12;
  }
  pFVar7 = ::FName::FName(&local_res8,iVar9,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
                          FNAME_Add);
  FVar2 = *pFVar7;
  iVar10 = (param_1->Data).ArrayNum;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = iVar12;
  }
  pFVar7 = ::FName::FName(&local_res8,iVar9,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  bVar6 = FManagedArrayCollection::HasAttribute(pFVar1,*pFVar7,FVar2);
  iVar10 = 0;
  if (!bVar6) {
    pFVar1 = this->Collection;
    uVar5 = local_38._10_2_;
    iVar9 = (param_2->Data).ArrayNum;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    iVar11 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar11 = iVar12;
    }
    pFVar7 = ::FName::FName(&local_res8,iVar11,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
                            FNAME_Add);
    FVar2 = *pFVar7;
    iVar9 = (param_1->Data).ArrayNum;
    iVar12 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar12 = iVar10;
    }
    pFVar7 = ::FName::FName(&local_res8,iVar12,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                            FNAME_Add);
    local_38.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_38.GroupIndexDependency.Number = 0;
    FVar3 = *pFVar7;
    local_38.Saved = true;
    local_38.bAllowCircularDependency = false;
    local_38._10_2_ = uVar5;
    bVar6 = FManagedArrayCollection::HasAttribute(pFVar1,FVar3,FVar2);
    if (!bVar6) {
      FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>(pFVar1,FVar3,FVar2,&local_38);
    }
    FManagedArrayCollection::ModifyAttribute<FLinearColor>(pFVar1,FVar3,FVar2);
  }
  iVar9 = (param_2->Data).ArrayNum;
  pFVar1 = this->Collection;
  iVar12 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar12 = iVar10;
  }
  pFVar7 = ::FName::FName(&local_res8,iVar12,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
                          FNAME_Add);
  FVar2 = *pFVar7;
  iVar9 = (param_1->Data).ArrayNum;
  iVar12 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar12 = iVar10;
  }
  pFVar7 = ::FName::FName(&local_res8,iVar12,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  pTVar8 = FManagedArrayCollection::FindAttributeTyped<FLinearColor>(pFVar1,*pFVar7,FVar2);
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return pTVar8;
}

// FTransferFacade @ 14e92e570

FTransferFacade * __thiscall
UE::Private::FTransferFacade::FTransferFacade
          (FTransferFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FName *pFVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<UE::Math::TVector<float>_> *pTVar6;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar7;
  FTransferFacade *pFVar8;
  FValueType *this_00;
  FValueType *pFVar9;
  FName local_res18;
  undefined8 local_res20;
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
  FName local_38 [2];
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  pFVar9 = (FValueType *)0x0;
  pFVar3 = ::FName::FName(&local_60,"Vertices");
  pFVar4 = ::FName::FName(&local_58,"BoneMap");
  (this->BoneMap).ConstCollection = param_1;
  (this->BoneMap).Collection = param_1;
  (this->BoneMap).Name = *pFVar4;
  (this->BoneMap).Group = *pFVar3;
  (this->BoneMap).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneMap).DefaultGroupDependency.Number = 0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,*pFVar4,*pFVar3);
  (this->BoneMap).AttributeArray = pTVar5;
  (this->BoneMap).ConstAttributeArray = pTVar5;
  pFVar3 = ::FName::FName(&local_50,"Vertices");
  pFVar4 = ::FName::FName(&local_48,"Vertex");
  (this->Vertex).ConstCollection = param_1;
  (this->Vertex).Collection = param_1;
  (this->Vertex).Name = *pFVar4;
  (this->Vertex).Group = *pFVar3;
  (this->Vertex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Vertex).DefaultGroupDependency.Number = 0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     (param_1,*pFVar4,*pFVar3);
  (this->Vertex).AttributeArray = pTVar6;
  (this->Vertex).ConstAttributeArray = pTVar6;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  pFVar3 = ::FName::FName(&local_40,"Faces");
  pFVar4 = ::FName::FName(local_38,"Indices");
  TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::
  TManagedArrayAccessor<UE::Math::TIntVector3<int>_>
            (&this->Indices,param_1,pFVar4,pFVar3,&local_res18);
  (this->Transform).ConstCollection = param_1;
  (this->Transform).Collection = param_1;
  (this->Transform).Name = FTransformCollection::TransformAttribute;
  (this->Transform).Group = FTransformCollection::TransformGroup;
  (this->Transform).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Transform).DefaultGroupDependency.Number = 0;
  local_70 = FTransformCollection::TransformAttribute;
  local_68 = FTransformCollection::TransformGroup;
  local_res20 = 0;
  pTVar7 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  this_00 = (FValueType *)&pTVar7->field_0x10;
  if (pTVar7 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar9;
  }
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FTransform3fType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar9 = (FValueType *)this_00->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FTransferFacade *)(*pcVar1)();
      return pFVar8;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->Transform).AttributeArray = (TManagedArray<UE::Math::TTransform<float>_> *)pFVar9;
  (this->Transform).ConstAttributeArray = (TManagedArray<UE::Math::TTransform<float>_> *)pFVar9;
  (this->Parent).ConstCollection = param_1;
  (this->Parent).Collection = param_1;
  (this->Parent).Name = FTransformCollection::ParentAttribute;
  (this->Parent).Group = FTransformCollection::TransformGroup;
  (this->Parent).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Parent).DefaultGroupDependency.Number = 0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,FTransformCollection::ParentAttribute,
                      FTransformCollection::TransformGroup);
  (this->Parent).AttributeArray = pTVar5;
  (this->Parent).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_90,"VertexStart");
  (this->VertexStart).Name = local_90;
  (this->VertexStart).ConstCollection = param_1;
  (this->VertexStart).Collection = param_1;
  (this->VertexStart).Group = FGeometryCollection::GeometryGroup;
  (this->VertexStart).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexStart).DefaultGroupDependency.Number = 0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_90,FGeometryCollection::GeometryGroup);
  (this->VertexStart).AttributeArray = pTVar5;
  (this->VertexStart).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_88,"VertexCount");
  (this->VertexCount).Name = local_88;
  (this->VertexCount).ConstCollection = param_1;
  (this->VertexCount).Collection = param_1;
  (this->VertexCount).Group = FGeometryCollection::GeometryGroup;
  (this->VertexCount).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexCount).DefaultGroupDependency.Number = 0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_88,FGeometryCollection::GeometryGroup);
  (this->VertexCount).AttributeArray = pTVar5;
  (this->VertexCount).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_80,"FaceStart");
  (this->FaceStart).Name = local_80;
  (this->FaceStart).ConstCollection = param_1;
  (this->FaceStart).Collection = param_1;
  (this->FaceStart).Group = FGeometryCollection::GeometryGroup;
  (this->FaceStart).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FaceStart).DefaultGroupDependency.Number = 0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_80,FGeometryCollection::GeometryGroup);
  (this->FaceStart).AttributeArray = pTVar5;
  (this->FaceStart).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_78,"FaceCount");
  (this->FaceCount).Name = local_78;
  (this->FaceCount).ConstCollection = param_1;
  (this->FaceCount).Collection = param_1;
  (this->FaceCount).Group = FGeometryCollection::GeometryGroup;
  (this->FaceCount).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FaceCount).DefaultGroupDependency.Number = 0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_78,FGeometryCollection::GeometryGroup);
  (this->FaceCount).AttributeArray = pTVar5;
  (this->FaceCount).ConstAttributeArray = pTVar5;
  return this;
}

// FTransferFacade @ 14e92e950

FTransferFacade * __thiscall
UE::Private::FTransferFacade::FTransferFacade
          (FTransferFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FName *pFVar4;
  TManagedArray<int> *pTVar5;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar6;
  FTransferFacade *pFVar7;
  char *pcVar8;
  TManagedArray<UE::Math::TVector<float>_> *pTVar9;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar10;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar11;
  char *pcVar12;
  FName local_c0;
  FName local_b8;
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
  FName local_48 [3];
  
  this->ConstCollection = param_1;
  pcVar12 = (char *)0x0;
  this->Collection = (FManagedArrayCollection *)0x0;
  pFVar3 = ::FName::FName(&local_70,"Vertices");
  pFVar4 = ::FName::FName(&local_68,"BoneMap");
  (this->BoneMap).ConstCollection = param_1;
  (this->BoneMap).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneMap).Name = *pFVar4;
  (this->BoneMap).Group = *pFVar3;
  (this->BoneMap).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneMap).DefaultGroupDependency.Number = 0;
  (this->BoneMap).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,*pFVar4,*pFVar3);
  (this->BoneMap).ConstAttributeArray = pTVar5;
  pFVar3 = ::FName::FName(&local_60,"Vertices");
  pFVar4 = ::FName::FName(&local_58,"Vertex");
  (this->Vertex).ConstCollection = param_1;
  (this->Vertex).Collection = (FManagedArrayCollection *)0x0;
  (this->Vertex).Name = *pFVar4;
  (this->Vertex).Group = *pFVar3;
  (this->Vertex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Vertex).DefaultGroupDependency.Number = 0;
  (this->Vertex).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_a0 = *pFVar4;
  local_98 = *pFVar3;
  pTVar6 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a0);
  pcVar8 = &pTVar6->field_0x10;
  if (pTVar6 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar12;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\x01')) {
    pTVar9 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar8 + 0x20);
    if (pTVar9 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FTransferFacade *)(*pcVar1)();
        return pFVar7;
      }
    }
  }
  (this->Vertex).ConstAttributeArray = pTVar9;
  pFVar3 = ::FName::FName(&local_50,"Faces");
  pFVar4 = ::FName::FName(local_48,"Indices");
  (this->Indices).ConstCollection = param_1;
  (this->Indices).Collection = (FManagedArrayCollection *)0x0;
  (this->Indices).Name = *pFVar4;
  (this->Indices).Group = *pFVar3;
  (this->Indices).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Indices).DefaultGroupDependency.Number = 0;
  (this->Indices).AttributeArray = (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0;
  local_90 = *pFVar4;
  local_88 = *pFVar3;
  pTVar6 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_90);
  pcVar8 = &pTVar6->field_0x10;
  if (pTVar6 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar12;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\x02')) {
    pTVar10 = (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0;
  }
  else {
    pTVar10 = *(TManagedArray<UE::Math::TIntVector3<int>_> **)(pcVar8 + 0x20);
    if (pTVar10 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FTransferFacade *)(*pcVar1)();
        return pFVar7;
      }
    }
  }
  (this->Indices).ConstAttributeArray = pTVar10;
  (this->Transform).ConstCollection = param_1;
  (this->Transform).Collection = (FManagedArrayCollection *)0x0;
  (this->Transform).Name = FTransformCollection::TransformAttribute;
  (this->Transform).Group = FTransformCollection::TransformGroup;
  (this->Transform).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Transform).DefaultGroupDependency.Number = 0;
  (this->Transform).AttributeArray = (TManagedArray<UE::Math::TTransform<float>_> *)0x0;
  local_80 = FTransformCollection::TransformAttribute;
  local_78 = FTransformCollection::TransformGroup;
  pTVar6 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
  pcVar8 = &pTVar6->field_0x10;
  if (pTVar6 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar12;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != ',')) {
    pTVar11 = (TManagedArray<UE::Math::TTransform<float>_> *)0x0;
  }
  else {
    pTVar11 = *(TManagedArray<UE::Math::TTransform<float>_> **)(pcVar8 + 0x20);
    if (pTVar11 == (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FTransferFacade *)(*pcVar1)();
        return pFVar7;
      }
    }
  }
  (this->Transform).ConstAttributeArray = pTVar11;
  (this->Parent).ConstCollection = param_1;
  (this->Parent).Collection = (FManagedArrayCollection *)0x0;
  (this->Parent).Name = FTransformCollection::ParentAttribute;
  (this->Parent).Group = FTransformCollection::TransformGroup;
  (this->Parent).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Parent).DefaultGroupDependency.Number = 0;
  (this->Parent).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,FTransformCollection::ParentAttribute,
                      FTransformCollection::TransformGroup);
  (this->Parent).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_c0,"VertexStart");
  (this->VertexStart).Name = local_c0;
  (this->VertexStart).ConstCollection = param_1;
  (this->VertexStart).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexStart).Group = FGeometryCollection::GeometryGroup;
  (this->VertexStart).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexStart).DefaultGroupDependency.Number = 0;
  (this->VertexStart).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_c0,FGeometryCollection::GeometryGroup);
  (this->VertexStart).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_b8,"VertexCount");
  (this->VertexCount).Name = local_b8;
  (this->VertexCount).ConstCollection = param_1;
  (this->VertexCount).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexCount).Group = FGeometryCollection::GeometryGroup;
  (this->VertexCount).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexCount).DefaultGroupDependency.Number = 0;
  (this->VertexCount).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_b8,FGeometryCollection::GeometryGroup);
  (this->VertexCount).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_b0,"FaceStart");
  (this->FaceStart).Name = local_b0;
  (this->FaceStart).ConstCollection = param_1;
  (this->FaceStart).Collection = (FManagedArrayCollection *)0x0;
  (this->FaceStart).Group = FGeometryCollection::GeometryGroup;
  (this->FaceStart).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FaceStart).DefaultGroupDependency.Number = 0;
  (this->FaceStart).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_b0,FGeometryCollection::GeometryGroup);
  (this->FaceStart).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_a8,"FaceCount");
  (this->FaceCount).Name = local_a8;
  (this->FaceCount).ConstCollection = param_1;
  (this->FaceCount).Collection = (FManagedArrayCollection *)0x0;
  (this->FaceCount).Group = FGeometryCollection::GeometryGroup;
  (this->FaceCount).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FaceCount).DefaultGroupDependency.Number = 0;
  (this->FaceCount).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_a8,FGeometryCollection::GeometryGroup);
  (this->FaceCount).ConstAttributeArray = pTVar5;
  return this;
}

