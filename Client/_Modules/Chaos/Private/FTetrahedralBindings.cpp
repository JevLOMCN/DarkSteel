// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// FTetrahedralBindings @ 143f8d260

FTetrahedralBindings * __thiscall
GeometryCollection::Facades::FTetrahedralBindings::FTetrahedralBindings
          (FTetrahedralBindings *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FTetrahedralBindings *pFVar4;
  FValueType *pFVar5;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  pFVar5 = (FValueType *)0x0;
  this->_padding_ = (longlong)&___7FTetrahedralBindings_Facades_GeometryCollection__6B_;
  (this->MeshIdAttribute).ConstCollection = param_1;
  (this->MeshIdAttribute).Collection = param_1;
  (this->MeshIdAttribute).Name = MeshIdAttributeName;
  (this->MeshIdAttribute).Group = MeshBindingsGroupName;
  (this->MeshIdAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MeshIdAttribute).DefaultGroupDependency.Number = 0;
  local_18 = MeshIdAttributeName;
  local_10 = MeshBindingsGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  this_00 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar5;
  }
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FStringType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTetrahedralBindings *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->MeshIdAttribute).AttributeArray = (TManagedArray<FString> *)pFVar5;
  (this->MeshIdAttribute).ConstAttributeArray = (TManagedArray<FString> *)pFVar5;
  (this->Parents).Ptr = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0;
  (this->Weights).Ptr = (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0;
  (this->Offsets).Ptr = (TManagedArrayAccessor<UE::Math::TVector<float>_> *)0x0;
  (this->Masks).Ptr = (TManagedArrayAccessor<float> *)0x0;
  return this;
}

// FTetrahedralBindings @ 143f8d360

FTetrahedralBindings * __thiscall
GeometryCollection::Facades::FTetrahedralBindings::FTetrahedralBindings
          (FTetrahedralBindings *this,FManagedArrayCollection *param_1)

{
  TManagedArray<FString> *pTVar1;
  
  this->_padding_ = (longlong)&___7FTetrahedralBindings_Facades_GeometryCollection__6B_;
  (this->MeshIdAttribute).ConstCollection = param_1;
  (this->MeshIdAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->MeshIdAttribute).Name = MeshIdAttributeName;
  (this->MeshIdAttribute).Group = MeshBindingsGroupName;
  (this->MeshIdAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MeshIdAttribute).DefaultGroupDependency.Number = 0;
  (this->MeshIdAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<FString>
                     (param_1,MeshIdAttributeName,MeshBindingsGroupName);
  (this->MeshIdAttribute).ConstAttributeArray = pTVar1;
  (this->Parents).Ptr = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0;
  (this->Weights).Ptr = (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0;
  (this->Offsets).Ptr = (TManagedArrayAccessor<UE::Math::TVector<float>_> *)0x0;
  (this->Masks).Ptr = (TManagedArrayAccessor<float> *)0x0;
  return this;
}

// ~FTetrahedralBindings @ 143f8df90

void __thiscall
GeometryCollection::Facades::FTetrahedralBindings::~FTetrahedralBindings(FTetrahedralBindings *this)

{
  this->_padding_ = (longlong)&___7FTetrahedralBindings_Facades_GeometryCollection__6B_;
  ::operator_delete((this->Masks).Ptr,0x38);
  ::operator_delete((this->Offsets).Ptr,0x38);
  ::operator_delete((this->Weights).Ptr,0x38);
  ::operator_delete((this->Parents).Ptr,0x38);
  return;
}

// AddBindingsGroup @ 143f93630

void __thiscall
GeometryCollection::Facades::FTetrahedralBindings::AddBindingsGroup
          (FTetrahedralBindings *this,FName *param_1)

{
  TManagedArray<FString> *pTVar1;
  FScriptContainerElement *pFVar2;
  TManagedArrayAccessor<UE::Math::TVector<float>_> *pTVar3;
  TManagedArrayAccessor<float> *pTVar4;
  FManagedArrayCollection *this_00;
  TManagedArrayAccessor<UE::Math::TVector4<float>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FString *pFVar10;
  TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *pTVar11;
  FName FVar12;
  TManagedArrayAccessor<UE::Math::TVector4<float>_> *pTVar13;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar14;
  FName FVar15;
  TManagedArray<UE::Math::TVector<float>_> *pTVar16;
  FName FVar17;
  FString *pFVar18;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FString local_40;
  
  bVar7 = ContainsBindingsGroup(this,param_1);
  if (bVar7) {
    ReadBindingsGroup(this,param_1);
    return;
  }
  if (((this->MeshIdAttribute).ConstAttributeArray == (TManagedArray<FString> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshIdAttribute.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralBindingsFacade.cpp"
                         ,0xd2,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar7 = FManagedArrayCollection::IsAttributePersistent
                    ((this->MeshIdAttribute).ConstCollection,(this->MeshIdAttribute).Name,
                     (this->MeshIdAttribute).Group);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshIdAttribute.IsPersistent()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralBindingsFacade.cpp"
                         ,0xd3,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralBindingsFacade.cpp"
                       ,0xd5,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x41,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar8 = FManagedArrayCollection::AddElements
                    ((this->MeshIdAttribute).Collection,1,(this->MeshIdAttribute).Group);
  pFVar10 = ::FName::ToString(param_1,&local_40);
  if ((((this->MeshIdAttribute).AttributeArray == (TManagedArray<FString> *)0x0) ||
      ((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
  ((this->MeshIdAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->MeshIdAttribute).AttributeArray;
  uVar9 = 0;
  if ((int)uVar8 < *(int *)&pTVar1->field_0x18) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar18 = (FString *)(*(longlong *)&pTVar1->field_0x10 + (longlong)(int)uVar8 * 0x10);
  if (pFVar18 != pFVar10) {
    pFVar2 = (pFVar18->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar18->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar18->Data).ArrayNum = (pFVar10->Data).ArrayNum;
    (pFVar18->Data).ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  pTVar11 = (this->Parents).Ptr;
  if (pTVar11 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0) {
    (this->Parents).Ptr = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0;
    ::operator_delete(pTVar11,0x38);
  }
  pTVar13 = (this->Weights).Ptr;
  if (pTVar13 != (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0) {
    (this->Weights).Ptr = (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0;
    ::operator_delete(pTVar13,0x38);
  }
  pTVar3 = (this->Offsets).Ptr;
  if (pTVar3 != (TManagedArrayAccessor<UE::Math::TVector<float>_> *)0x0) {
    (this->Offsets).Ptr = (TManagedArrayAccessor<UE::Math::TVector<float>_> *)0x0;
    ::operator_delete(pTVar3,0x38);
  }
  pTVar4 = (this->Masks).Ptr;
  if (pTVar4 != (TManagedArrayAccessor<float> *)0x0) {
    (this->Masks).Ptr = (TManagedArrayAccessor<float> *)0x0;
    ::operator_delete(pTVar4,0x38);
  }
  if (((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x2b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = (this->MeshIdAttribute).Collection;
  pTVar11 = ::operator_new(0x38);
  FVar12 = FVar17;
  if (pTVar11 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0) {
    FVar12 = (FName)TManagedArrayAccessor<UE::Math::TIntVector4<int>_>::
                    TManagedArrayAccessor<UE::Math::TIntVector4<int>_>
                              (pTVar11,this_00,&ParentsAttributeName,param_1,
                               &TetrahedralGroupDependency);
  }
  FVar15 = (FName)(this->Parents).Ptr;
  if (FVar15 != FVar12) {
    (this->Parents).Ptr = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)FVar12;
    ::operator_delete((void *)FVar15,0x38);
  }
  pTVar13 = ::operator_new(0x38);
  if (pTVar13 == (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0) {
    pTVar13 = (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0;
  }
  else {
    pTVar13->ConstCollection = this_00;
    pTVar13->Collection = this_00;
    pTVar13->Name = WeightsAttributeName;
    pTVar13->Group = *param_1;
    (pTVar13->DefaultGroupDependency).ComparisonIndex = 0;
    (pTVar13->DefaultGroupDependency).Number = 0;
    local_60 = WeightsAttributeName;
    local_58 = *param_1;
    pTVar14 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&this_00->Map,(TTuple<FName,FName> *)&local_60);
    FVar12 = (FName)&pTVar14->field_0x10;
    if (pTVar14 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      FVar12 = FVar17;
    }
    if ((FVar12 == (FName)0x0) || (*(char *)FVar12 != '\'')) {
      pTVar13->AttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
      pTVar13->ConstAttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
    }
    else {
      FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)FVar12);
      FVar12 = *(FName *)((longlong)FVar12 + 0x20);
      if ((FVar12 == (FName)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x319,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined1 *)((longlong)FVar12 + 8) = 1;
      pTVar13->AttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)FVar12;
      pTVar13->ConstAttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)FVar12;
    }
  }
  pTVar5 = (this->Weights).Ptr;
  if (pTVar5 != pTVar13) {
    (this->Weights).Ptr = pTVar13;
    ::operator_delete(pTVar5,0x38);
  }
  FVar15 = (FName)::operator_new(0x38);
  FVar12 = FVar17;
  if (FVar15 != (FName)0x0) {
    *(FManagedArrayCollection **)FVar15 = this_00;
    *(FManagedArrayCollection **)((longlong)FVar15 + 8) = this_00;
    *(FName *)((longlong)FVar15 + 0x10) = OffsetsAttributeName;
    *(FName *)((longlong)FVar15 + 0x18) = *param_1;
    *(undefined8 *)((longlong)FVar15 + 0x20) = 0;
    pTVar16 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                        (this_00,OffsetsAttributeName,*param_1);
    *(TManagedArray<UE::Math::TVector<float>_> **)((longlong)FVar15 + 0x28) = pTVar16;
    *(TManagedArray<UE::Math::TVector<float>_> **)((longlong)FVar15 + 0x30) = pTVar16;
    FVar12 = FVar15;
  }
  FVar15 = (FName)(this->Offsets).Ptr;
  if (FVar15 != FVar12) {
    (this->Offsets).Ptr = (TManagedArrayAccessor<UE::Math::TVector<float>_> *)FVar12;
    ::operator_delete((void *)FVar15,0x38);
  }
  FVar12 = (FName)::operator_new(0x38);
  if (FVar12 != (FName)0x0) {
    *(FManagedArrayCollection **)FVar12 = this_00;
    *(FManagedArrayCollection **)((longlong)FVar12 + 8) = this_00;
    *(FName *)((longlong)FVar12 + 0x10) = MaskAttributeName;
    *(FName *)((longlong)FVar12 + 0x18) = *param_1;
    *(undefined8 *)((longlong)FVar12 + 0x20) = 0;
    local_48 = *param_1;
    local_50 = MaskAttributeName;
    pTVar14 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&this_00->Map,(TTuple<FName,FName> *)&local_50);
    FVar15 = (FName)&pTVar14->field_0x10;
    if (pTVar14 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      FVar15 = FVar17;
    }
    if ((FVar15 != (FName)0x0) && (*(char *)FVar15 == '\t')) {
      FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)FVar15);
      FVar17 = *(FName *)((longlong)FVar15 + 0x20);
      if ((FVar17 == (FName)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x319,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined1 *)((longlong)FVar17 + 8) = 1;
    }
    *(FName *)((longlong)FVar12 + 0x28) = FVar17;
    *(FName *)((longlong)FVar12 + 0x30) = FVar17;
    FVar17 = FVar12;
  }
  FVar12 = (FName)(this->Masks).Ptr;
  if (FVar12 != FVar17) {
    (this->Masks).Ptr = (TManagedArrayAccessor<float> *)FVar17;
    ::operator_delete((void *)FVar12,0x38);
  }
  TManagedArrayAccessor<UE::Math::TIntVector4<int>_>::Add
            ((this->Parents).Ptr,MakePersistent,FGeometryCollection::VerticesGroup);
  TManagedArrayAccessor<UE::Math::TVector4<float>_>::Add
            ((this->Weights).Ptr,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            ((this->Offsets).Ptr,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add((this->Masks).Ptr,MakePersistent,(FName)0x0);
  return;
}

// AddBindingsGroup @ 143f93ba0

void __thiscall
GeometryCollection::Facades::FTetrahedralBindings::AddBindingsGroup
          (FTetrahedralBindings *this,int param_1,FName *param_2,int param_3)

{
  FName FVar1;
  undefined4 in_register_00000014;
  undefined1 local_18 [16];
  
  FVar1 = GenerateMeshGroupName
                    ((int)local_18,(FName *)CONCAT44(in_register_00000014,param_1),(int)param_2);
  AddBindingsGroup(this,(FName *)FVar1);
  return;
}

// ContainsBindingsGroup @ 143fa6a10

bool __thiscall
GeometryCollection::Facades::FTetrahedralBindings::ContainsBindingsGroup
          (FTetrahedralBindings *this,FName *param_1)

{
  TManagedArray<FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  FString local_18;
  
  if (((this->MeshIdAttribute).ConstAttributeArray == (TManagedArray<FString> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshIdAttribute.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralBindingsFacade.cpp"
                         ,0xaa,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pTVar1 = (this->MeshIdAttribute).ConstAttributeArray;
  bVar3 = false;
  if (pTVar1 != (TManagedArray<FString> *)0x0) {
    pFVar5 = ::FName::ToString(param_1,&local_18);
    bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                      ((TArray<FString,TSizedDefaultAllocator<32>_> *)&pTVar1->field_0x10,pFVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return bVar3;
}

// ContainsBindingsGroup @ 143fa6ab0

bool __thiscall
GeometryCollection::Facades::FTetrahedralBindings::ContainsBindingsGroup
          (FTetrahedralBindings *this,int param_1,FName *param_2,int param_3)

{
  bool bVar1;
  FName FVar2;
  undefined4 in_register_00000014;
  undefined1 local_18 [16];
  
  FVar2 = GenerateMeshGroupName
                    ((int)local_18,(FName *)CONCAT44(in_register_00000014,param_1),(int)param_2);
  bVar1 = ContainsBindingsGroup(this,(FName *)FVar2);
  return bVar1;
}

// DefineSchema @ 143fa9d80

void __thiscall
GeometryCollection::Facades::FTetrahedralBindings::DefineSchema(FTetrahedralBindings *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralBindingsFacade.cpp"
                       ,0x8b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->MeshIdAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0) {
    if (((this->MeshIdAttribute).AttributeArray == (TManagedArray<FString> *)0x0) ||
       ((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ((this->MeshIdAttribute).AttributeArray)->field_0x8 = 1;
    return;
  }
  TManagedArrayAccessor<FString>::Add(&this->MeshIdAttribute,MakePersistent,(FName)0x0);
  return;
}

// GenerateMeshGroupName @ 143fad500

FName __cdecl
GeometryCollection::Facades::FTetrahedralBindings::GenerateMeshGroupName
          (int param_1,FName *param_2,int param_3)

{
  ForAnyElementType FVar1;
  uint in_register_0000000c;
  FName this;
  int iVar2;
  undefined4 in_register_00000084;
  FString local_28;
  FString local_18;
  
  this.Number = in_register_0000000c;
  this.ComparisonIndex.Value = param_1;
  ::FName::GetPlainNameString((FName *)CONCAT44(in_register_00000084,param_3),&local_18);
  ::FString::PrintfImpl(&local_28,L"TetrahedralBindings:TetMeshIdx:%d:%s:%d");
  iVar2 = local_28.Data.ArrayNum + -1;
  FVar1.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  ::FName::FName((FName *)this,iVar2,(wchar_t *)FVar1.Data,FNAME_Add);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// GetTetMeshIndex @ 143fb33c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
GeometryCollection::Facades::FTetrahedralBindings::GetTetMeshIndex
          (FTetrahedralBindings *this,FName *param_1,int param_2)

{
  TManagedArray<FString> *pTVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  FString *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pTVar1 = (this->MeshIdAttribute).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<FString> *)0x0) {
    ::FName::GetPlainNameString(param_1,&local_28);
    ::FString::PrintfImpl(&local_38,L":%s:%d");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    uVar5 = 0;
    uVar11 = 0;
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    if (0 < iVar4) {
      do {
        uVar9 = uVar11;
        if ((int)uVar5 < *(int *)&pTVar1->field_0x18) {
          uVar9 = ~uVar5 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        pFVar8 = (FString *)((longlong)(int)uVar5 * 0x10 + *(longlong *)&pTVar1->field_0x10);
        uVar9 = local_38.Data.ArrayNum - 1;
        FVar7.Data = local_38.Data.AllocatorInstance.Data;
        if (local_38.Data.ArrayNum == 0) {
          uVar9 = uVar11;
          FVar7.Data = (FScriptContainerElement *)L"";
        }
        bVar3 = ::FString::EndsWith(pFVar8,(wchar_t *)FVar7.Data,uVar9,IgnoreCase);
        if (bVar3) {
          local_48.Data.ArrayNum = (pFVar8->Data).ArrayNum;
          lVar6 = (longlong)local_48.Data.ArrayNum;
          _Src = (pFVar8->Data).AllocatorInstance.Data;
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_48.Data.ArrayNum == 0) {
            local_48.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,
                       local_48.Data.ArrayNum,&local_48.Data.ArrayMax);
            memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
          }
          pFVar8 = ::FString::FString(&local_18,L"TetrahedralBindings:TetMeshIdx:");
          iVar4 = (pFVar8->Data).ArrayNum;
          iVar10 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar10 = 0;
          }
          ::FString::RemoveAt(&local_48,0,iVar10,No);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          uVar5 = local_38.Data.ArrayNum - 1;
          if (local_38.Data.ArrayNum == 0) {
            uVar5 = uVar11;
          }
          iVar4 = local_48.Data.ArrayNum + -1;
          if (local_48.Data.ArrayNum == 0) {
            iVar4 = 0;
          }
          ::FString::RemoveAt(&local_48,iVar4 - uVar5,uVar5,Default);
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_48.Data.ArrayNum != 0) {
            FVar7.Data = local_48.Data.AllocatorInstance.Data;
          }
          iVar4 = _wtoi((wchar_t *)FVar7.Data);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return iVar4;
          }
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
          return iVar4;
        }
        uVar5 = uVar5 + 1;
        iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      } while ((int)uVar5 < iVar4);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return -1;
}

// IsValid @ 143fb7f40

bool __thiscall
GeometryCollection::Facades::FTetrahedralBindings::IsValid(FTetrahedralBindings *this)

{
  TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *pTVar1;
  TManagedArrayAccessor<UE::Math::TVector4<float>_> *pTVar2;
  TManagedArrayAccessor<UE::Math::TVector<float>_> *pTVar3;
  TManagedArrayAccessor<float> *pTVar4;
  
  if (((((((this->MeshIdAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0) &&
         (pTVar1 = (this->Parents).Ptr,
         pTVar1 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0)) &&
        (pTVar1->ConstAttributeArray != (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0)) &&
       ((pTVar2 = (this->Weights).Ptr,
        pTVar2 != (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0 &&
        (pTVar2->ConstAttributeArray != (TManagedArray<UE::Math::TVector4<float>_> *)0x0)))) &&
      ((pTVar3 = (this->Offsets).Ptr,
       pTVar3 != (TManagedArrayAccessor<UE::Math::TVector<float>_> *)0x0 &&
       ((pTVar3->ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
        (pTVar4 = (this->Masks).Ptr, pTVar4 != (TManagedArrayAccessor<float> *)0x0)))))) &&
     (pTVar4->ConstAttributeArray != (TManagedArray<float> *)0x0)) {
    return true;
  }
  return false;
}

// ReadBindingsGroup @ 143fbab10

bool __thiscall
GeometryCollection::Facades::FTetrahedralBindings::ReadBindingsGroup
          (FTetrahedralBindings *this,FName *param_1)

{
  TManagedArray<FString> *pTVar1;
  FManagedArrayCollection *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *pTVar7;
  TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *pTVar8;
  TManagedArrayAccessor<UE::Math::TVector4<float>_> *pTVar9;
  TManagedArrayAccessor<UE::Math::TVector4<float>_> *pTVar10;
  TManagedArray<UE::Math::TVector<float>_> *pTVar11;
  TManagedArrayAccessor<float> *pTVar12;
  TManagedArrayAccessor<float> *pTVar13;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar14;
  TManagedArrayAccessor<UE::Math::TVector<float>_> *this_00;
  TManagedArrayAccessor<UE::Math::TVector<float>_> *pTVar15;
  FName FVar16;
  FName local_res8;
  FName local_res20;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FString local_40;
  
  if (((this->MeshIdAttribute).ConstAttributeArray == (TManagedArray<FString> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshIdAttribute.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralBindingsFacade.cpp"
                         ,0xef,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pTVar8 = (this->Parents).Ptr;
  pTVar13 = (TManagedArrayAccessor<float> *)0x0;
  if (pTVar8 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0) {
    (this->Parents).Ptr = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0;
    ::operator_delete(pTVar8,0x38);
  }
  pTVar10 = (this->Weights).Ptr;
  if (pTVar10 != (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0) {
    (this->Weights).Ptr = (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0;
    ::operator_delete(pTVar10,0x38);
  }
  pTVar15 = (this->Offsets).Ptr;
  if (pTVar15 != (TManagedArrayAccessor<UE::Math::TVector<float>_> *)0x0) {
    (this->Offsets).Ptr = (TManagedArrayAccessor<UE::Math::TVector<float>_> *)0x0;
    ::operator_delete(pTVar15,0x38);
  }
  pTVar12 = (this->Masks).Ptr;
  if (pTVar12 != (TManagedArrayAccessor<float> *)0x0) {
    (this->Masks).Ptr = (TManagedArrayAccessor<float> *)0x0;
    ::operator_delete(pTVar12,0x38);
  }
  pTVar1 = (this->MeshIdAttribute).ConstAttributeArray;
  pFVar6 = ::FName::ToString(param_1,&local_40);
  bVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                    ((TArray<FString,TSizedDefaultAllocator<32>_> *)&pTVar1->field_0x10,pFVar6);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if ((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0) {
      pFVar2 = (this->MeshIdAttribute).ConstCollection;
      pTVar7 = ::operator_new(0x38);
      pTVar8 = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)pTVar13;
      if (pTVar7 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0) {
        pTVar7->ConstCollection = pFVar2;
        pTVar7->Collection = (FManagedArrayCollection *)0x0;
        pTVar7->Name = ParentsAttributeName;
        pTVar7->Group = *param_1;
        pTVar7->DefaultGroupDependency = TetrahedralGroupDependency;
        pTVar7->AttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
        local_48 = *param_1;
        local_50 = ParentsAttributeName;
        pTVar14 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                          *)&pFVar2->Map,(TTuple<FName,FName> *)&local_50);
        pTVar8 = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)&pTVar14->field_0x10;
        if (pTVar14 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
          pTVar8 = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)pTVar13;
        }
        if ((pTVar8 == (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0) ||
           (*(char *)&pTVar8->ConstCollection != '!')) {
          FVar16.ComparisonIndex.Value = 0;
          FVar16.Number = 0;
        }
        else {
          FVar16 = pTVar8->DefaultGroupDependency;
          if ((FVar16 == (FName)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypedManagedArray != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                 ,0x306,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pTVar7->ConstAttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)FVar16;
        pTVar8 = pTVar7;
      }
      pTVar7 = (this->Parents).Ptr;
      if (pTVar7 != pTVar8) {
        (this->Parents).Ptr = pTVar8;
        ::operator_delete(pTVar7,0x38);
      }
      pTVar9 = ::operator_new(0x38);
      pTVar10 = (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)pTVar13;
      if (pTVar9 != (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0) {
        local_68.ComparisonIndex.Value = 0;
        local_68.Number = 0;
        pTVar10 = TManagedArrayAccessor<UE::Math::TVector4<float>_>::
                  TManagedArrayAccessor<UE::Math::TVector4<float>_>
                            (pTVar9,pFVar2,&WeightsAttributeName,param_1,&local_68);
      }
      pTVar8 = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)(this->Weights).Ptr;
      if (pTVar8 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)pTVar10) {
        (this->Weights).Ptr = pTVar10;
        ::operator_delete(pTVar8,0x38);
      }
      this_00 = ::operator_new(0x38);
      pTVar15 = (TManagedArrayAccessor<UE::Math::TVector<float>_> *)pTVar13;
      if (this_00 != (TManagedArrayAccessor<UE::Math::TVector<float>_> *)0x0) {
        local_60.ComparisonIndex.Value = 0;
        local_60.Number = 0;
        pTVar15 = TManagedArrayAccessor<UE::Math::TVector<float>_>::
                  TManagedArrayAccessor<UE::Math::TVector<float>_>
                            (this_00,pFVar2,&OffsetsAttributeName,param_1,&local_60);
      }
      pTVar8 = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)(this->Offsets).Ptr;
      if (pTVar8 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)pTVar15) {
        (this->Offsets).Ptr = pTVar15;
        ::operator_delete(pTVar8,0x38);
      }
      pTVar12 = ::operator_new(0x38);
      if (pTVar12 != (TManagedArrayAccessor<float> *)0x0) {
        local_58.ComparisonIndex.Value = 0;
        local_58.Number = 0;
        pTVar13 = TManagedArrayAccessor<float>::TManagedArrayAccessor<float>
                            (pTVar12,pFVar2,&MaskAttributeName,param_1,&local_58);
      }
    }
    else {
      pFVar2 = (this->MeshIdAttribute).Collection;
      pTVar7 = ::operator_new(0x38);
      pTVar8 = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)pTVar13;
      if (pTVar7 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0) {
        pTVar8 = TManagedArrayAccessor<UE::Math::TIntVector4<int>_>::
                 TManagedArrayAccessor<UE::Math::TIntVector4<int>_>
                           (pTVar7,pFVar2,&ParentsAttributeName,param_1,&TetrahedralGroupDependency)
        ;
      }
      pTVar7 = (this->Parents).Ptr;
      if (pTVar7 != pTVar8) {
        (this->Parents).Ptr = pTVar8;
        ::operator_delete(pTVar7,0x38);
      }
      pTVar9 = ::operator_new(0x38);
      pTVar10 = (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)pTVar13;
      if (pTVar9 != (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0) {
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
        pTVar10 = TManagedArrayAccessor<UE::Math::TVector4<float>_>::
                  TManagedArrayAccessor<UE::Math::TVector4<float>_>
                            (pTVar9,pFVar2,&WeightsAttributeName,param_1,&local_res8);
      }
      pTVar8 = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)(this->Weights).Ptr;
      if (pTVar8 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)pTVar10) {
        (this->Weights).Ptr = pTVar10;
        ::operator_delete(pTVar8,0x38);
      }
      pTVar7 = ::operator_new(0x38);
      pTVar8 = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)pTVar13;
      if (pTVar7 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0) {
        pTVar7->ConstCollection = pFVar2;
        pTVar7->Collection = pFVar2;
        pTVar7->Name = OffsetsAttributeName;
        pTVar7->Group = *param_1;
        (pTVar7->DefaultGroupDependency).ComparisonIndex = 0;
        (pTVar7->DefaultGroupDependency).Number = 0;
        pTVar11 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                            (pFVar2,OffsetsAttributeName,*param_1);
        pTVar7->AttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)pTVar11;
        pTVar7->ConstAttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)pTVar11;
        pTVar8 = pTVar7;
      }
      pTVar7 = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)(this->Offsets).Ptr;
      if (pTVar7 != pTVar8) {
        (this->Offsets).Ptr = (TManagedArrayAccessor<UE::Math::TVector<float>_> *)pTVar8;
        ::operator_delete(pTVar7,0x38);
      }
      pTVar12 = ::operator_new(0x38);
      if (pTVar12 != (TManagedArrayAccessor<float> *)0x0) {
        local_res20.ComparisonIndex.Value = 0;
        local_res20.Number = 0;
        pTVar13 = TManagedArrayAccessor<float>::TManagedArrayAccessor<float>
                            (pTVar12,pFVar2,&MaskAttributeName,param_1,&local_res20);
      }
    }
    pTVar8 = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)(this->Masks).Ptr;
    if (pTVar8 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)pTVar13) {
      (this->Masks).Ptr = pTVar13;
      ::operator_delete(pTVar8,0x38);
    }
    if ((((((this->Parents).Ptr)->ConstAttributeArray !=
           (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
         (((this->Weights).Ptr)->ConstAttributeArray !=
          (TManagedArray<UE::Math::TVector4<float>_> *)0x0)) &&
        (((this->Offsets).Ptr)->ConstAttributeArray !=
         (TManagedArray<UE::Math::TVector<float>_> *)0x0)) &&
       (((this->Masks).Ptr)->ConstAttributeArray != (TManagedArray<float> *)0x0)) {
      return true;
    }
  }
  return false;
}

// ReadBindingsGroup @ 143fbaf70

bool __thiscall
GeometryCollection::Facades::FTetrahedralBindings::ReadBindingsGroup
          (FTetrahedralBindings *this,int param_1,FName *param_2,int param_3)

{
  bool bVar1;
  FName FVar2;
  undefined4 in_register_00000014;
  undefined1 local_18 [16];
  
  FVar2 = GenerateMeshGroupName
                    ((int)local_18,(FName *)CONCAT44(in_register_00000014,param_1),(int)param_2);
  bVar1 = ReadBindingsGroup(this,(FName *)FVar2);
  return bVar1;
}

// RemoveBindingsGroup @ 143fbd260

void __thiscall
GeometryCollection::Facades::FTetrahedralBindings::RemoveBindingsGroup
          (FTetrahedralBindings *this,FName *param_1)

{
  TManagedArrayBase<FString> *this_00;
  TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *pTVar1;
  FManagedArrayCollection *this_01;
  TManagedArrayAccessor<UE::Math::TVector4<float>_> *pTVar2;
  TManagedArrayAccessor<UE::Math::TVector<float>_> *pTVar3;
  TManagedArrayAccessor<float> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FString *pFVar9;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  if ((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralBindingsFacade.cpp"
                       ,0x113,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((this->MeshIdAttribute).AttributeArray == (TManagedArray<FString> *)0x0) ||
     ((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ((this->MeshIdAttribute).AttributeArray)->field_0x8 = 1;
  this_00 = (TManagedArrayBase<FString> *)(this->MeshIdAttribute).AttributeArray;
  pFVar9 = ::FName::ToString(param_1,&local_18);
  iVar7 = TManagedArrayBase<FString>::Find(this_00,pFVar9);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (iVar7 != -1) {
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = 0;
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_28,(int *)((longlong)&local_20 + 4));
    local_20 = CONCAT44(local_20._4_4_,iVar8 + 1);
    *(int *)(local_28.Data + (longlong)iVar8 * 4) = iVar7;
    (**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28);
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  if ((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x2b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar1 = (this->Parents).Ptr;
  this_01 = (this->MeshIdAttribute).Collection;
  if (pTVar1 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0) {
    if (pTVar1->Collection == (FManagedArrayCollection *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xbf,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FManagedArrayCollection::RemoveAttribute(pTVar1->Collection,pTVar1->Name,pTVar1->Group);
    pTVar1->AttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
    pTVar1->ConstAttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
    pTVar1 = (this->Parents).Ptr;
    if (pTVar1 != (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0) {
      (this->Parents).Ptr = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0;
      ::operator_delete(pTVar1,0x38);
    }
  }
  pTVar2 = (this->Weights).Ptr;
  if (pTVar2 != (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0) {
    if (pTVar2->Collection == (FManagedArrayCollection *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xbf,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FManagedArrayCollection::RemoveAttribute(pTVar2->Collection,pTVar2->Name,pTVar2->Group);
    pTVar2->AttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
    pTVar2->ConstAttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
    pTVar2 = (this->Weights).Ptr;
    if (pTVar2 != (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0) {
      (this->Weights).Ptr = (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0;
      ::operator_delete(pTVar2,0x38);
    }
  }
  pTVar3 = (this->Offsets).Ptr;
  if (pTVar3 != (TManagedArrayAccessor<UE::Math::TVector<float>_> *)0x0) {
    if (pTVar3->Collection == (FManagedArrayCollection *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xbf,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FManagedArrayCollection::RemoveAttribute(pTVar3->Collection,pTVar3->Name,pTVar3->Group);
    pTVar3->AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
    pTVar3->ConstAttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
    pTVar3 = (this->Offsets).Ptr;
    if (pTVar3 != (TManagedArrayAccessor<UE::Math::TVector<float>_> *)0x0) {
      (this->Offsets).Ptr = (TManagedArrayAccessor<UE::Math::TVector<float>_> *)0x0;
      ::operator_delete(pTVar3,0x38);
    }
  }
  pTVar4 = (this->Masks).Ptr;
  if (pTVar4 != (TManagedArrayAccessor<float> *)0x0) {
    if (pTVar4->Collection == (FManagedArrayCollection *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xbf,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FManagedArrayCollection::RemoveAttribute(pTVar4->Collection,pTVar4->Name,pTVar4->Group);
    pTVar4->AttributeArray = (TManagedArray<float> *)0x0;
    pTVar4->ConstAttributeArray = (TManagedArray<float> *)0x0;
    pTVar4 = (this->Masks).Ptr;
    if (pTVar4 != (TManagedArrayAccessor<float> *)0x0) {
      (this->Masks).Ptr = (TManagedArrayAccessor<float> *)0x0;
      ::operator_delete(pTVar4,0x38);
    }
  }
  iVar7 = FManagedArrayCollection::NumAttributes(this_01,*param_1);
  if (iVar7 == 0) {
    FManagedArrayCollection::RemoveGroup(this_01,*param_1);
  }
  return;
}

// RemoveBindingsGroup @ 143fbd570

void __thiscall
GeometryCollection::Facades::FTetrahedralBindings::RemoveBindingsGroup
          (FTetrahedralBindings *this,int param_1,FName *param_2,int param_3)

{
  FName FVar1;
  undefined4 in_register_00000014;
  undefined1 local_18 [16];
  
  FVar1 = GenerateMeshGroupName
                    ((int)local_18,(FName *)CONCAT44(in_register_00000014,param_1),(int)param_2);
  RemoveBindingsGroup(this,(FName *)FVar1);
  return;
}

// SetBindingsData @ 143fc7810

void __thiscall
GeometryCollection::Facades::FTetrahedralBindings::SetBindingsData
          (FTetrahedralBindings *this,
          TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *pTVar6;
  TManagedArrayAccessor<UE::Math::TVector4<float>_> *pTVar7;
  TManagedArrayAccessor<UE::Math::TVector<float>_> *pTVar8;
  TManagedArrayAccessor<float> *pTVar9;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar10;
  TManagedArray<UE::Math::TVector4<float>_> *pTVar11;
  TManagedArray<UE::Math::TVector<float>_> *pTVar12;
  TManagedArray<float> *pTVar13;
  longlong lVar14;
  code *pcVar15;
  undefined8 uVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  
  if (((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralBindingsFacade.cpp"
                          ,0x140,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((((((((this->MeshIdAttribute).ConstAttributeArray == (TManagedArray<FString> *)0x0) ||
          (pTVar6 = (this->Parents).Ptr,
          pTVar6 == (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)0x0)) ||
         (pTVar6->ConstAttributeArray == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0)) ||
        ((pTVar7 = (this->Weights).Ptr,
         pTVar7 == (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)0x0 ||
         (pTVar7->ConstAttributeArray == (TManagedArray<UE::Math::TVector4<float>_> *)0x0)))) ||
       (pTVar8 = (this->Offsets).Ptr,
       pTVar8 == (TManagedArrayAccessor<UE::Math::TVector<float>_> *)0x0)) ||
      (((pTVar8->ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0 ||
        (pTVar9 = (this->Masks).Ptr, pTVar9 == (TManagedArrayAccessor<float> *)0x0)) ||
       (pTVar9->ConstAttributeArray == (TManagedArray<float> *)0x0)))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralBindingsFacade.cpp"
                          ,0x141,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if ((((iVar4 != param_2->ArrayNum) || (iVar4 != param_3->ArrayNum)) ||
      (iVar4 != param_4->ArrayNum)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(ParentsIn.Num() == WeightsIn.Num()) && (ParentsIn.Num() == OffsetsIn.Num()) && (ParentsIn.Num() == MaskIn.Num())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralBindingsFacade.cpp"
                          ,0x142,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pTVar6 = (this->Parents).Ptr;
  iVar4 = param_1->ArrayNum;
  pTVar10 = pTVar6->ConstAttributeArray;
  if (pTVar10 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
    iVar18 = FManagedArrayCollection::NumElements(pTVar6->ConstCollection,pTVar6->Group);
  }
  else {
    iVar18 = (**(code **)(*(longlong *)pTVar10 + 0x60))(pTVar10);
  }
  pTVar6 = (this->Parents).Ptr;
  if ((pTVar6->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x41,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  FManagedArrayCollection::AddElements(pTVar6->Collection,iVar4 - iVar18,pTVar6->Group);
  pTVar6 = (this->Parents).Ptr;
  if (((pTVar6->AttributeArray == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) ||
      (pTVar6->Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pTVar6->AttributeArray->field_0x8 = 1;
  pTVar10 = pTVar6->AttributeArray;
  pTVar7 = (this->Weights).Ptr;
  if (((pTVar7->AttributeArray == (TManagedArray<UE::Math::TVector4<float>_> *)0x0) ||
      (pTVar7->Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pTVar7->AttributeArray->field_0x8 = 1;
  pTVar11 = pTVar7->AttributeArray;
  pTVar8 = (this->Offsets).Ptr;
  if (((pTVar8->AttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
      (pTVar8->Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pTVar8->AttributeArray->field_0x8 = 1;
  pTVar9 = (this->Masks).Ptr;
  pTVar12 = pTVar8->AttributeArray;
  if (((pTVar9->AttributeArray == (TManagedArray<float> *)0x0) ||
      (pTVar9->Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L""), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pTVar9->AttributeArray->field_0x8 = 1;
  pTVar13 = pTVar9->AttributeArray;
  uVar20 = 0;
  if (0 < iVar4) {
    lVar23 = 0;
    lVar24 = 0;
    lVar21 = 0;
    do {
      uVar22 = ~uVar20 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar20 < param_1->ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + lVar21;
      uVar3 = *(undefined8 *)pFVar1;
      uVar16 = *(undefined8 *)(pFVar1 + 8);
      uVar19 = 0;
      if ((int)uVar20 < *(int *)&pTVar10->field_0x18) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      puVar2 = (undefined8 *)(*(longlong *)&pTVar10->field_0x10 + lVar21);
      *puVar2 = uVar3;
      puVar2[1] = uVar16;
      uVar19 = 0;
      if ((int)uVar20 < param_2->ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data + lVar21;
      uVar3 = *(undefined8 *)pFVar1;
      uVar16 = *(undefined8 *)(pFVar1 + 8);
      uVar19 = 0;
      if ((int)uVar20 < *(int *)&pTVar11->field_0x18) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      puVar2 = (undefined8 *)(*(longlong *)&pTVar11->field_0x10 + lVar21);
      *puVar2 = uVar3;
      puVar2[1] = uVar16;
      uVar19 = 0;
      if ((int)uVar20 < param_3->ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar1 = (param_3->AllocatorInstance).Data;
      uVar3 = *(undefined8 *)(pFVar1 + lVar24);
      uVar5 = *(undefined4 *)(pFVar1 + lVar24 + 8);
      uVar19 = 0;
      if ((int)uVar20 < *(int *)&pTVar12->field_0x18) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      lVar14 = *(longlong *)&pTVar12->field_0x10;
      *(undefined8 *)(lVar14 + lVar24) = uVar3;
      *(undefined4 *)(lVar14 + 8 + lVar24) = uVar5;
      uVar19 = 0;
      if ((int)uVar20 < param_4->ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar5 = *(undefined4 *)((param_4->AllocatorInstance).Data + lVar23 * 4);
      uVar19 = 0;
      if ((int)uVar20 < *(int *)&pTVar13->field_0x18) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 0x10;
      lVar24 = lVar24 + 0xc;
      *(undefined4 *)(*(longlong *)&pTVar13->field_0x10 + lVar23 * 4) = uVar5;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iVar4);
  }
  return;
}

