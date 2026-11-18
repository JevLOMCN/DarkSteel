// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FEmbeddedSpringBaseFacade @ 14388ad80

FEmbeddedSpringBaseFacade * __thiscall
Chaos::Softs::FEmbeddedSpringBaseFacade::FEmbeddedSpringBaseFacade
          (FEmbeddedSpringBaseFacade *this,FManagedArrayCollection *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FEmbeddedSpringBaseFacade *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
  TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *pTVar8;
  TManagedArray<FString> *pTVar9;
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
  
  GeometryCollection::Facades::FPositionTargetFacade::FPositionTargetFacade
            ((FPositionTargetFacade *)this,param_1,param_2);
  (this->SpringLengthAttribute).ConstCollection = param_1;
  (this->SpringLengthAttribute).Collection = param_1;
  pFVar7 = (FValueType *)0x0;
  (this->SpringLengthAttribute).Name = SpringLength;
  (this->SpringLengthAttribute).Group =
       GeometryCollection::Facades::FPositionTargetFacade::GroupName;
  (this->SpringLengthAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SpringLengthAttribute).DefaultGroupDependency.Number = 0;
  local_a0 = SpringLength;
  local_98 = GeometryCollection::Facades::FPositionTargetFacade::GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a0);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEmbeddedSpringBaseFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->SpringLengthAttribute).AttributeArray = (TManagedArray<float> *)pFVar5;
  (this->SpringLengthAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar5;
  (this->CompressionStiffnessAttribute).ConstCollection = param_1;
  (this->CompressionStiffnessAttribute).Collection = param_1;
  (this->CompressionStiffnessAttribute).Name = CompressionStiffness;
  (this->CompressionStiffnessAttribute).Group =
       GeometryCollection::Facades::FPositionTargetFacade::GroupName;
  (this->CompressionStiffnessAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->CompressionStiffnessAttribute).DefaultGroupDependency.Number = 0;
  local_90 = CompressionStiffness;
  local_88 = GeometryCollection::Facades::FPositionTargetFacade::GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_90);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEmbeddedSpringBaseFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->CompressionStiffnessAttribute).AttributeArray = (TManagedArray<float> *)pFVar5;
  (this->CompressionStiffnessAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar5;
  (this->ConstraintStartAttribute).ConstCollection = param_1;
  (this->ConstraintStartAttribute).Collection = param_1;
  (this->ConstraintStartAttribute).Name = ConstraintStart;
  (this->ConstraintStartAttribute).Group = SpringConstraintGroupName;
  (this->ConstraintStartAttribute).DefaultGroupDependency =
       GeometryCollection::Facades::FPositionTargetFacade::GroupName;
  local_80 = ConstraintStart;
  local_78 = SpringConstraintGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEmbeddedSpringBaseFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->ConstraintStartAttribute).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->ConstraintStartAttribute).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  (this->ConstraintEndAttribute).ConstCollection = param_1;
  (this->ConstraintEndAttribute).Collection = param_1;
  (this->ConstraintEndAttribute).Name = ConstraintEnd;
  (this->ConstraintEndAttribute).Group = SpringConstraintGroupName;
  (this->ConstraintEndAttribute).DefaultGroupDependency =
       GeometryCollection::Facades::FPositionTargetFacade::GroupName;
  local_70 = ConstraintEnd;
  local_68 = SpringConstraintGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar7 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar7 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEmbeddedSpringBaseFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar7->GroupIndexDependency).Number = 1;
  }
  (this->ConstraintEndAttribute).AttributeArray = (TManagedArray<int> *)pFVar7;
  (this->ConstraintEndAttribute).ConstAttributeArray = (TManagedArray<int> *)pFVar7;
  (this->ConstraintEndPointNumIndicesAttribute).ConstCollection = param_1;
  (this->ConstraintEndPointNumIndicesAttribute).Collection = param_1;
  (this->ConstraintEndPointNumIndicesAttribute).Name = ConstraintEndPointNumIndices;
  (this->ConstraintEndPointNumIndicesAttribute).Group = SpringConstraintGroupName;
  (this->ConstraintEndPointNumIndicesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ConstraintEndPointNumIndicesAttribute).DefaultGroupDependency.Number = 0;
  local_60 = ConstraintEndPointNumIndices;
  local_58 = SpringConstraintGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = (FValueType *)0x0;
  }
  if ((pFVar7 == (FValueType *)0x0) || (pFVar7->ArrayType != FUintVector2Type)) {
    pTVar8 = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)0x0;
  }
  else {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pTVar8 = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)pFVar7->ManagedArray;
    if ((pTVar8 == (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEmbeddedSpringBaseFacade *)(*pcVar1)();
      return pFVar4;
    }
    pTVar8->field_0x8 = 1;
  }
  (this->ConstraintEndPointNumIndicesAttribute).AttributeArray = pTVar8;
  (this->ConstraintEndPointNumIndicesAttribute).ConstAttributeArray = pTVar8;
  (this->ConstraintNameAttribute).ConstCollection = param_1;
  (this->ConstraintNameAttribute).Collection = param_1;
  (this->ConstraintNameAttribute).Name = ConstraintName;
  (this->ConstraintNameAttribute).Group = SpringConstraintGroupName;
  (this->ConstraintNameAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ConstraintNameAttribute).DefaultGroupDependency.Number = 0;
  local_50 = ConstraintName;
  local_48 = SpringConstraintGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = (FValueType *)0x0;
  }
  if ((pFVar7 == (FValueType *)0x0) || (pFVar7->ArrayType != FStringType)) {
    pTVar9 = (TManagedArray<FString> *)0x0;
  }
  else {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pTVar9 = (TManagedArray<FString> *)pFVar7->ManagedArray;
    if ((pTVar9 == (TManagedArray<FString> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEmbeddedSpringBaseFacade *)(*pcVar1)();
      return pFVar4;
    }
    pTVar9->field_0x8 = 1;
  }
  (this->ConstraintNameAttribute).AttributeArray = pTVar9;
  (this->ConstraintNameAttribute).ConstAttributeArray = pTVar9;
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0xb3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FEmbeddedSpringBaseFacade *)(*pcVar1)();
    return pFVar4;
  }
  GeometryCollection::Facades::FPositionTargetFacade::DefineSchema((FPositionTargetFacade *)this);
  TManagedArrayAccessor<float>::Add(&this->SpringLengthAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->CompressionStiffnessAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->ConstraintStartAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->ConstraintEndAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TIntVector2<unsigned_int>_>::Add
            (&this->ConstraintEndPointNumIndicesAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add(&this->ConstraintNameAttribute,MakePersistent,(FName)0x0);
  return this;
}

// FEmbeddedSpringBaseFacade @ 14388b310

FEmbeddedSpringBaseFacade * __thiscall
Chaos::Softs::FEmbeddedSpringBaseFacade::FEmbeddedSpringBaseFacade
          (FEmbeddedSpringBaseFacade *this,FManagedArrayCollection *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FEmbeddedSpringBaseFacade *pFVar4;
  TManagedArray<FString> *pTVar5;
  char *pcVar6;
  TManagedArray<float> *pTVar7;
  TManagedArray<int> *pTVar8;
  TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *pTVar9;
  char *pcVar10;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  
  GeometryCollection::Facades::FPositionTargetFacade::FPositionTargetFacade
            ((FPositionTargetFacade *)this,param_1,param_2);
  (this->SpringLengthAttribute).ConstCollection = param_1;
  pcVar10 = (char *)0x0;
  (this->SpringLengthAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->SpringLengthAttribute).Name = SpringLength;
  (this->SpringLengthAttribute).Group =
       GeometryCollection::Facades::FPositionTargetFacade::GroupName;
  (this->SpringLengthAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SpringLengthAttribute).DefaultGroupDependency.Number = 0;
  (this->SpringLengthAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  local_80 = SpringLength;
  local_78 = GeometryCollection::Facades::FPositionTargetFacade::GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar10;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar7 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar7 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FEmbeddedSpringBaseFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->SpringLengthAttribute).ConstAttributeArray = pTVar7;
  (this->CompressionStiffnessAttribute).ConstCollection = param_1;
  (this->CompressionStiffnessAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->CompressionStiffnessAttribute).Name = CompressionStiffness;
  (this->CompressionStiffnessAttribute).Group =
       GeometryCollection::Facades::FPositionTargetFacade::GroupName;
  (this->CompressionStiffnessAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->CompressionStiffnessAttribute).DefaultGroupDependency.Number = 0;
  (this->CompressionStiffnessAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  local_70 = CompressionStiffness;
  local_68 = GeometryCollection::Facades::FPositionTargetFacade::GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar10;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar7 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar7 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FEmbeddedSpringBaseFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->CompressionStiffnessAttribute).ConstAttributeArray = pTVar7;
  (this->ConstraintStartAttribute).ConstCollection = param_1;
  (this->ConstraintStartAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ConstraintStartAttribute).Name = ConstraintStart;
  (this->ConstraintStartAttribute).Group = SpringConstraintGroupName;
  (this->ConstraintStartAttribute).DefaultGroupDependency =
       GeometryCollection::Facades::FPositionTargetFacade::GroupName;
  (this->ConstraintStartAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  local_60 = ConstraintStart;
  local_58 = SpringConstraintGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar10;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x05')) {
    pTVar8 = (TManagedArray<int> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<int> **)(pcVar6 + 0x20);
    if (pTVar8 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FEmbeddedSpringBaseFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->ConstraintStartAttribute).ConstAttributeArray = pTVar8;
  (this->ConstraintEndAttribute).ConstCollection = param_1;
  (this->ConstraintEndAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ConstraintEndAttribute).Name = ConstraintEnd;
  (this->ConstraintEndAttribute).Group = SpringConstraintGroupName;
  (this->ConstraintEndAttribute).DefaultGroupDependency =
       GeometryCollection::Facades::FPositionTargetFacade::GroupName;
  (this->ConstraintEndAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  local_50 = ConstraintEnd;
  local_48 = SpringConstraintGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar10;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x05')) {
    pTVar8 = (TManagedArray<int> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<int> **)(pcVar6 + 0x20);
    if (pTVar8 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FEmbeddedSpringBaseFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->ConstraintEndAttribute).ConstAttributeArray = pTVar8;
  (this->ConstraintEndPointNumIndicesAttribute).ConstCollection = param_1;
  (this->ConstraintEndPointNumIndicesAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ConstraintEndPointNumIndicesAttribute).Name = ConstraintEndPointNumIndices;
  (this->ConstraintEndPointNumIndicesAttribute).Group = SpringConstraintGroupName;
  (this->ConstraintEndPointNumIndicesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ConstraintEndPointNumIndicesAttribute).DefaultGroupDependency.Number = 0;
  (this->ConstraintEndPointNumIndicesAttribute).AttributeArray =
       (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)0x0;
  local_40 = ConstraintEndPointNumIndices;
  local_38 = SpringConstraintGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_40);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar10;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '2')) {
    pTVar9 = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<UE::Math::TIntVector2<unsigned_int>_> **)(pcVar6 + 0x20);
    if (pTVar9 == (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FEmbeddedSpringBaseFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->ConstraintEndPointNumIndicesAttribute).ConstAttributeArray = pTVar9;
  (this->ConstraintNameAttribute).ConstCollection = param_1;
  (this->ConstraintNameAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ConstraintNameAttribute).Name = ConstraintName;
  (this->ConstraintNameAttribute).Group = SpringConstraintGroupName;
  (this->ConstraintNameAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ConstraintNameAttribute).DefaultGroupDependency.Number = 0;
  (this->ConstraintNameAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<FString>
                     (param_1,ConstraintName,SpringConstraintGroupName);
  (this->ConstraintNameAttribute).ConstAttributeArray = pTVar5;
  return this;
}

// DefineSchema @ 1438ad2a0

void __thiscall
Chaos::Softs::FEmbeddedSpringBaseFacade::DefineSchema(FEmbeddedSpringBaseFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                       ,0xb3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GeometryCollection::Facades::FPositionTargetFacade::DefineSchema((FPositionTargetFacade *)this);
  TManagedArrayAccessor<float>::Add(&this->SpringLengthAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->CompressionStiffnessAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->ConstraintStartAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->ConstraintEndAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TIntVector2<unsigned_int>_>::Add
            (&this->ConstraintEndPointNumIndicesAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add(&this->ConstraintNameAttribute,MakePersistent,(FName)0x0);
  return;
}

// IsValid @ 1438c3c40

bool __thiscall Chaos::Softs::FEmbeddedSpringBaseFacade::IsValid(FEmbeddedSpringBaseFacade *this)

{
  bool bVar1;
  
  bVar1 = GeometryCollection::Facades::FPositionTargetFacade::IsValid((FPositionTargetFacade *)this)
  ;
  if ((((bVar1) &&
       ((this->SpringLengthAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
      ((this->CompressionStiffnessAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
     ((((this->ConstraintStartAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       ((this->ConstraintEndAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
      (((this->ConstraintEndPointNumIndicesAttribute).ConstAttributeArray !=
        (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)0x0 &&
       ((this->ConstraintNameAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0)))))) {
    return true;
  }
  return false;
}

