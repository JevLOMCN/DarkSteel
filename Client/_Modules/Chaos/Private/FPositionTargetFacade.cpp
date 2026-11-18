// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FPositionTargetFacade @ 143f8af90

FPositionTargetFacade * __thiscall
GeometryCollection::Facades::FPositionTargetFacade::FPositionTargetFacade
          (FPositionTargetFacade *this,FManagedArrayCollection *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FPositionTargetFacade *pFVar5;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TManagedArray<bool> *pTVar7;
  FValueType *pFVar8;
  FValueType *pFVar9;
  FValueType *pFVar10;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  this->VerticesGroup = *param_2;
  (this->TargetIndexAttribute).ConstCollection = param_1;
  (this->TargetIndexAttribute).Collection = param_1;
  (this->TargetIndexAttribute).Name = TargetIndex;
  (this->TargetIndexAttribute).Group = GroupName;
  (this->TargetIndexAttribute).DefaultGroupDependency = *param_2;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (param_1,TargetIndex,GroupName);
  (this->TargetIndexAttribute).AttributeArray = pTVar3;
  (this->TargetIndexAttribute).ConstAttributeArray = pTVar3;
  (this->SourceIndexAttribute).ConstCollection = param_1;
  (this->SourceIndexAttribute).Collection = param_1;
  (this->SourceIndexAttribute).Name = SourceIndex;
  (this->SourceIndexAttribute).Group = GroupName;
  (this->SourceIndexAttribute).DefaultGroupDependency = *param_2;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (param_1,SourceIndex,GroupName);
  (this->SourceIndexAttribute).AttributeArray = pTVar3;
  (this->SourceIndexAttribute).ConstAttributeArray = pTVar3;
  (this->StiffnessAttribute).ConstCollection = param_1;
  pFVar10 = (FValueType *)0x0;
  (this->StiffnessAttribute).Collection = param_1;
  (this->StiffnessAttribute).Name = Stiffness;
  (this->StiffnessAttribute).Group = GroupName;
  (this->StiffnessAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->StiffnessAttribute).DefaultGroupDependency.Number = 0;
  local_68 = Stiffness;
  local_60 = GroupName;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  pFVar9 = (FValueType *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar9 = pFVar10;
  }
  pFVar8 = pFVar10;
  if ((pFVar9 != (FValueType *)0x0) && (pFVar9->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar9);
    pFVar8 = (FValueType *)pFVar9->ManagedArray;
    if ((pFVar8 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPositionTargetFacade *)(*pcVar1)();
      return pFVar5;
    }
    *(undefined1 *)&(pFVar8->GroupIndexDependency).Number = 1;
  }
  (this->StiffnessAttribute).AttributeArray = (TManagedArray<float> *)pFVar8;
  (this->StiffnessAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar8;
  (this->DampingAttribute).ConstCollection = param_1;
  (this->DampingAttribute).Collection = param_1;
  (this->DampingAttribute).Name = Damping;
  (this->DampingAttribute).Group = GroupName;
  (this->DampingAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->DampingAttribute).DefaultGroupDependency.Number = 0;
  local_58 = Damping;
  local_50 = GroupName;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pFVar9 = (FValueType *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar9 = pFVar10;
  }
  if ((pFVar9 != (FValueType *)0x0) && (pFVar9->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar9);
    pFVar10 = (FValueType *)pFVar9->ManagedArray;
    if ((pFVar10 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPositionTargetFacade *)(*pcVar1)();
      return pFVar5;
    }
    *(undefined1 *)&(pFVar10->GroupIndexDependency).Number = 1;
  }
  (this->DampingAttribute).AttributeArray = (TManagedArray<float> *)pFVar10;
  (this->DampingAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar10;
  (this->TargetWeightsAttribute).ConstCollection = param_1;
  (this->TargetWeightsAttribute).Collection = param_1;
  (this->TargetWeightsAttribute).Name = TargetWeights;
  (this->TargetWeightsAttribute).Group = GroupName;
  (this->TargetWeightsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TargetWeightsAttribute).DefaultGroupDependency.Number = 0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (param_1,TargetWeights,GroupName);
  (this->TargetWeightsAttribute).AttributeArray = pTVar6;
  (this->TargetWeightsAttribute).ConstAttributeArray = pTVar6;
  (this->SourceWeightsAttribute).ConstCollection = param_1;
  (this->SourceWeightsAttribute).Collection = param_1;
  (this->SourceWeightsAttribute).Name = SourceWeights;
  (this->SourceWeightsAttribute).Group = GroupName;
  (this->SourceWeightsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SourceWeightsAttribute).DefaultGroupDependency.Number = 0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (param_1,SourceWeights,GroupName);
  (this->SourceWeightsAttribute).AttributeArray = pTVar6;
  (this->SourceWeightsAttribute).ConstAttributeArray = pTVar6;
  (this->IsAnisotropicAttribute).ConstCollection = param_1;
  (this->IsAnisotropicAttribute).Collection = param_1;
  (this->IsAnisotropicAttribute).Name = IsAnisotropic;
  (this->IsAnisotropicAttribute).Group = GroupName;
  (this->IsAnisotropicAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->IsAnisotropicAttribute).DefaultGroupDependency.Number = 0;
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<bool>(param_1,IsAnisotropic,GroupName);
  (this->IsAnisotropicAttribute).AttributeArray = pTVar7;
  (this->IsAnisotropicAttribute).ConstAttributeArray = pTVar7;
  (this->IsZeroRestLengthAttribute).ConstCollection = param_1;
  (this->IsZeroRestLengthAttribute).Collection = param_1;
  (this->IsZeroRestLengthAttribute).Name = IsZeroRestLength;
  (this->IsZeroRestLengthAttribute).Group = GroupName;
  (this->IsZeroRestLengthAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->IsZeroRestLengthAttribute).DefaultGroupDependency.Number = 0;
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<bool>(param_1,IsZeroRestLength,GroupName);
  (this->IsZeroRestLengthAttribute).AttributeArray = pTVar7;
  (this->IsZeroRestLengthAttribute).ConstAttributeArray = pTVar7;
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionPositionTargetFacade.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FPositionTargetFacade *)(*pcVar1)();
    return pFVar5;
  }
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Add
            (&this->TargetIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Add
            (&this->SourceIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->StiffnessAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->DampingAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
            (&this->TargetWeightsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
            (&this->SourceWeightsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<bool>::Add(&this->IsAnisotropicAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<bool>::Add(&this->IsZeroRestLengthAttribute,MakePersistent,(FName)0x0);
  return this;
}

// FPositionTargetFacade @ 143f8b400

FPositionTargetFacade * __thiscall
GeometryCollection::Facades::FPositionTargetFacade::FPositionTargetFacade
          (FPositionTargetFacade *this,FManagedArrayCollection *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FPositionTargetFacade *pFVar4;
  char *pcVar5;
  TManagedArray<float> *pTVar6;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TManagedArray<bool> *pTVar8;
  char *pcVar9;
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
  FName local_38;
  FName local_30;
  
  this->ConstCollection = param_1;
  pcVar9 = (char *)0x0;
  this->Collection = (FManagedArrayCollection *)0x0;
  this->VerticesGroup = *param_2;
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&this->TargetIndexAttribute,param_1,&TargetIndex,&GroupName,param_2);
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&this->SourceIndexAttribute,param_1,&SourceIndex,&GroupName,param_2);
  (this->StiffnessAttribute).ConstCollection = param_1;
  (this->StiffnessAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->StiffnessAttribute).Name = Stiffness;
  (this->StiffnessAttribute).Group = GroupName;
  (this->StiffnessAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->StiffnessAttribute).DefaultGroupDependency.Number = 0;
  (this->StiffnessAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  local_88 = Stiffness;
  local_80 = GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_88);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar9;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\t')) {
    pTVar6 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar6 = *(TManagedArray<float> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPositionTargetFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->StiffnessAttribute).ConstAttributeArray = pTVar6;
  (this->DampingAttribute).ConstCollection = param_1;
  (this->DampingAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->DampingAttribute).Name = Damping;
  (this->DampingAttribute).Group = GroupName;
  (this->DampingAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->DampingAttribute).DefaultGroupDependency.Number = 0;
  (this->DampingAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  local_78 = Damping;
  local_70 = GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_78);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar9;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\t')) {
    pTVar6 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar6 = *(TManagedArray<float> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPositionTargetFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->DampingAttribute).ConstAttributeArray = pTVar6;
  (this->TargetWeightsAttribute).ConstCollection = param_1;
  (this->TargetWeightsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TargetWeightsAttribute).Name = TargetWeights;
  (this->TargetWeightsAttribute).Group = GroupName;
  (this->TargetWeightsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TargetWeightsAttribute).DefaultGroupDependency.Number = 0;
  (this->TargetWeightsAttribute).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_68 = TargetWeights;
  local_60 = GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar9;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '&')) {
    pTVar7 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)(pcVar5 + 0x20);
    if (pTVar7 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPositionTargetFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->TargetWeightsAttribute).ConstAttributeArray = pTVar7;
  (this->SourceWeightsAttribute).ConstCollection = param_1;
  (this->SourceWeightsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->SourceWeightsAttribute).Name = SourceWeights;
  (this->SourceWeightsAttribute).Group = GroupName;
  (this->SourceWeightsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SourceWeightsAttribute).DefaultGroupDependency.Number = 0;
  (this->SourceWeightsAttribute).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_58 = SourceWeights;
  local_50 = GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar9;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '&')) {
    pTVar7 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)(pcVar5 + 0x20);
    if (pTVar7 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPositionTargetFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->SourceWeightsAttribute).ConstAttributeArray = pTVar7;
  (this->IsAnisotropicAttribute).ConstCollection = param_1;
  (this->IsAnisotropicAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->IsAnisotropicAttribute).Name = IsAnisotropic;
  (this->IsAnisotropicAttribute).Group = GroupName;
  (this->IsAnisotropicAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->IsAnisotropicAttribute).DefaultGroupDependency.Number = 0;
  (this->IsAnisotropicAttribute).AttributeArray = (TManagedArray<bool> *)0x0;
  local_48 = IsAnisotropic;
  local_40 = GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar9;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x06')) {
    pTVar8 = (TManagedArray<bool> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<bool> **)(pcVar5 + 0x20);
    if (pTVar8 == (TManagedArray<bool> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPositionTargetFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->IsAnisotropicAttribute).ConstAttributeArray = pTVar8;
  (this->IsZeroRestLengthAttribute).ConstCollection = param_1;
  (this->IsZeroRestLengthAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->IsZeroRestLengthAttribute).Name = IsZeroRestLength;
  (this->IsZeroRestLengthAttribute).Group = GroupName;
  (this->IsZeroRestLengthAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->IsZeroRestLengthAttribute).DefaultGroupDependency.Number = 0;
  (this->IsZeroRestLengthAttribute).AttributeArray = (TManagedArray<bool> *)0x0;
  local_38 = IsZeroRestLength;
  local_30 = GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_38);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar9;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x06')) {
    (this->IsZeroRestLengthAttribute).ConstAttributeArray = (TManagedArray<bool> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<bool> **)(pcVar5 + 0x20);
    if (pTVar8 == (TManagedArray<bool> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPositionTargetFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->IsZeroRestLengthAttribute).ConstAttributeArray = pTVar8;
  }
  return this;
}

// AddPositionTarget @ 143f97a00

int __thiscall
GeometryCollection::Facades::FPositionTargetFacade::AddPositionTarget
          (FPositionTargetFacade *this,FPositionTargetsData *param_1)

{
  float fVar1;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TManagedArray<float> *pTVar3;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TManagedArray<bool> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionPositionTargetFacade.cpp"
                       ,0x50,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      iVar9 = (*pcVar6)();
      return iVar9;
    }
  }
  bVar7 = IsValid(this);
  if (bVar7) {
    if ((this->TargetIndexAttribute).Collection == (FManagedArrayCollection *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x41,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    uVar10 = FManagedArrayCollection::AddElements
                       ((this->TargetIndexAttribute).Collection,1,(this->TargetIndexAttribute).Group
                       );
    lVar14 = (longlong)(int)uVar10;
    if (((this->TargetIndexAttribute).AttributeArray ==
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
       ((this->TargetIndexAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    uVar16 = ~uVar10 >> 0x1f;
    ((this->TargetIndexAttribute).AttributeArray)->field_0x8 = 1;
    pTVar2 = (this->TargetIndexAttribute).AttributeArray;
    uVar15 = 0;
    if ((int)uVar10 < *(int *)&pTVar2->field_0x18) {
      uVar15 = uVar16;
    }
    if (uVar15 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    lVar13 = lVar14 * 0x10;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               (lVar13 + *(longlong *)&pTVar2->field_0x10),&param_1->TargetIndex);
    if (((this->SourceIndexAttribute).AttributeArray ==
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
       ((this->SourceIndexAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    ((this->SourceIndexAttribute).AttributeArray)->field_0x8 = 1;
    pTVar2 = (this->SourceIndexAttribute).AttributeArray;
    uVar15 = 0;
    if ((int)uVar10 < *(int *)&pTVar2->field_0x18) {
      uVar15 = uVar16;
    }
    if (uVar15 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               (lVar13 + *(longlong *)&pTVar2->field_0x10),&param_1->SourceIndex);
    fVar1 = param_1->Stiffness;
    if (((this->StiffnessAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
       ((this->StiffnessAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    ((this->StiffnessAttribute).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->StiffnessAttribute).AttributeArray;
    uVar11 = 0;
    uVar15 = uVar11;
    if ((int)uVar10 < *(int *)&pTVar3->field_0x18) {
      uVar15 = uVar16;
    }
    if (uVar15 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    *(float *)(*(longlong *)&pTVar3->field_0x10 + lVar14 * 4) = fVar1;
    fVar1 = param_1->Damping;
    if (((this->DampingAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
       ((this->DampingAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    ((this->DampingAttribute).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->DampingAttribute).AttributeArray;
    uVar15 = uVar11;
    if ((int)uVar10 < *(int *)&pTVar3->field_0x18) {
      uVar15 = uVar16;
    }
    if (uVar15 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    *(float *)(*(longlong *)&pTVar3->field_0x10 + lVar14 * 4) = fVar1;
    if (((this->TargetWeightsAttribute).AttributeArray ==
         (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) ||
       ((this->TargetWeightsAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    ((this->TargetWeightsAttribute).AttributeArray)->field_0x8 = 1;
    pTVar4 = (this->TargetWeightsAttribute).AttributeArray;
    uVar15 = uVar11;
    if ((int)uVar10 < *(int *)&pTVar4->field_0x18) {
      uVar15 = uVar16;
    }
    if (uVar15 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)
               (lVar13 + *(longlong *)&pTVar4->field_0x10),&param_1->TargetWeights);
    if (((this->SourceWeightsAttribute).AttributeArray ==
         (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) ||
       ((this->SourceWeightsAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    ((this->SourceWeightsAttribute).AttributeArray)->field_0x8 = 1;
    pTVar4 = (this->SourceWeightsAttribute).AttributeArray;
    if ((int)uVar10 < *(int *)&pTVar4->field_0x18) {
      uVar11 = uVar16;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)
               (lVar13 + *(longlong *)&pTVar4->field_0x10),&param_1->SourceWeights);
    bVar7 = param_1->bIsAnisotropic;
    if (((this->IsAnisotropicAttribute).AttributeArray == (TManagedArray<bool> *)0x0) ||
       ((this->IsAnisotropicAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    ((this->IsAnisotropicAttribute).AttributeArray)->field_0x8 = 1;
    pTVar5 = (this->IsAnisotropicAttribute).AttributeArray;
    if (((int)uVar10 < 0) || (*(int *)&pTVar5->field_0x28 <= (int)uVar10)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    lVar14 = (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5);
    puVar12 = *(undefined1 **)&pTVar5->field_0x20;
    if (*(undefined1 **)&pTVar5->field_0x20 == (undefined1 *)0x0) {
      puVar12 = &pTVar5->field_0x10;
    }
    uVar15 = 1 << ((byte)uVar10 & 0x1f);
    if (bVar7 == false) {
      uVar16 = *(uint *)(puVar12 + lVar14 * 4) & ~uVar15;
    }
    else {
      uVar16 = *(uint *)(puVar12 + lVar14 * 4) | uVar15;
    }
    *(uint *)(puVar12 + lVar14 * 4) = uVar16;
    bVar7 = param_1->bIsZeroRestLength;
    if (((this->IsZeroRestLengthAttribute).AttributeArray == (TManagedArray<bool> *)0x0) ||
       ((this->IsZeroRestLengthAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    ((this->IsZeroRestLengthAttribute).AttributeArray)->field_0x8 = 1;
    pTVar5 = (this->IsZeroRestLengthAttribute).AttributeArray;
    if (((int)uVar10 < 0) || (*(int *)&pTVar5->field_0x28 <= (int)uVar10)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
    }
    puVar12 = *(undefined1 **)&pTVar5->field_0x20;
    if (*(undefined1 **)&pTVar5->field_0x20 == (undefined1 *)0x0) {
      puVar12 = &pTVar5->field_0x10;
    }
    if (bVar7 == false) {
      uVar15 = ~uVar15 & *(uint *)(puVar12 + lVar14 * 4);
    }
    else {
      uVar15 = uVar15 | *(uint *)(puVar12 + lVar14 * 4);
    }
    *(uint *)(puVar12 + lVar14 * 4) = uVar15;
    return uVar10;
  }
  return -1;
}

// DefineSchema @ 143fa9a60

void __thiscall
GeometryCollection::Facades::FPositionTargetFacade::DefineSchema(FPositionTargetFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionPositionTargetFacade.cpp"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Add
            (&this->TargetIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Add
            (&this->SourceIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->StiffnessAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->DampingAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
            (&this->TargetWeightsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
            (&this->SourceWeightsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<bool>::Add(&this->IsAnisotropicAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<bool>::Add(&this->IsZeroRestLengthAttribute,MakePersistent,(FName)0x0);
  return;
}

// GetPositionTarget @ 143fb1bb0

FPositionTargetsData * __thiscall
GeometryCollection::Facades::FPositionTargetFacade::GetPositionTarget
          (FPositionTargetFacade *this,FPositionTargetsData *__return_storage_ptr__,int param_1)

{
  TManagedArray<float> *pTVar1;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPositionTargetsData *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  TManagedArray<bool> *pTVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  
  lVar9 = (longlong)param_1;
  (__return_storage_ptr__->TargetIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TargetIndex).ArrayNum = 0;
  (__return_storage_ptr__->TargetIndex).ArrayMax = 0;
  (__return_storage_ptr__->SourceIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SourceIndex).ArrayNum = 0;
  (__return_storage_ptr__->SourceIndex).ArrayMax = 0;
  (__return_storage_ptr__->TargetWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TargetWeights).ArrayNum = 0;
  (__return_storage_ptr__->TargetWeights).ArrayMax = 0;
  (__return_storage_ptr__->SourceWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SourceWeights).ArrayNum = 0;
  (__return_storage_ptr__->SourceWeights).ArrayMax = 0;
  (__return_storage_ptr__->TargetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TargetName).Data.ArrayNum = 0;
  (__return_storage_ptr__->TargetName).Data.ArrayMax = 0;
  (__return_storage_ptr__->SourceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SourceName).Data.ArrayNum = 0;
  (__return_storage_ptr__->SourceName).Data.ArrayMax = 0;
  __return_storage_ptr__->Stiffness = 0.0;
  __return_storage_ptr__->Damping = 0.0;
  __return_storage_ptr__->bIsAnisotropic = false;
  __return_storage_ptr__->bIsZeroRestLength = false;
  bVar4 = IsValid(this);
  if (bVar4) {
    bVar4 = TManagedArrayAccessor<float>::IsValidIndex(&this->StiffnessAttribute,param_1);
    if (bVar4) {
      if (((this->StiffnessAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPositionTargetsData *)(*pcVar3)();
        return pFVar6;
      }
      pTVar1 = (this->StiffnessAttribute).ConstAttributeArray;
      uVar11 = 0;
      if (param_1 < *(int *)&pTVar1->field_0x18) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPositionTargetsData *)(*pcVar3)();
        return pFVar6;
      }
      __return_storage_ptr__->Stiffness = *(float *)(*(longlong *)&pTVar1->field_0x10 + lVar9 * 4);
    }
    uVar11 = ~param_1;
    bVar4 = TManagedArrayAccessor<float>::IsValidIndex(&this->DampingAttribute,param_1);
    if (bVar4) {
      if (((this->DampingAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPositionTargetsData *)(*pcVar3)();
        return pFVar6;
      }
      pTVar1 = (this->DampingAttribute).ConstAttributeArray;
      uVar5 = 0;
      if (param_1 < *(int *)&pTVar1->field_0x18) {
        uVar5 = uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPositionTargetsData *)(*pcVar3)();
        return pFVar6;
      }
      __return_storage_ptr__->Damping = *(float *)(*(longlong *)&pTVar1->field_0x10 + lVar9 * 4);
    }
    bVar4 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::IsValidIndex
                      (&this->SourceIndexAttribute,param_1);
    if (bVar4) {
      pTVar7 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&this->SourceIndexAttribute,param_1);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (&__return_storage_ptr__->SourceIndex,pTVar7);
    }
    bVar4 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::IsValidIndex
                      (&this->TargetIndexAttribute,param_1);
    if (bVar4) {
      pTVar7 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&this->TargetIndexAttribute,param_1);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (&__return_storage_ptr__->TargetIndex,pTVar7);
    }
    bVar4 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::IsValidIndex
                      (&this->SourceWeightsAttribute,param_1);
    if (bVar4) {
      if (((this->SourceWeightsAttribute).ConstAttributeArray ==
           (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPositionTargetsData *)(*pcVar3)();
        return pFVar6;
      }
      pTVar2 = (this->SourceWeightsAttribute).ConstAttributeArray;
      uVar5 = 0;
      if (param_1 < *(int *)&pTVar2->field_0x18) {
        uVar5 = uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPositionTargetsData *)(*pcVar3)();
        return pFVar6;
      }
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                (&__return_storage_ptr__->SourceWeights,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&pTVar2->field_0x10 + lVar9 * 0x10));
    }
    bVar4 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::IsValidIndex
                      (&this->TargetWeightsAttribute,param_1);
    if (bVar4) {
      if (((this->TargetWeightsAttribute).ConstAttributeArray ==
           (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPositionTargetsData *)(*pcVar3)();
        return pFVar6;
      }
      pTVar2 = (this->TargetWeightsAttribute).ConstAttributeArray;
      uVar5 = 0;
      if (param_1 < *(int *)&pTVar2->field_0x18) {
        uVar5 = uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPositionTargetsData *)(*pcVar3)();
        return pFVar6;
      }
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                (&__return_storage_ptr__->TargetWeights,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&pTVar2->field_0x10 + lVar9 * 0x10));
    }
    if (((this->IsAnisotropicAttribute).ConstAttributeArray == (TManagedArray<bool> *)0x0) ||
       (bVar4 = TManagedArrayAccessor<bool>::IsValidIndex(&this->IsAnisotropicAttribute,param_1),
       !bVar4)) {
      bVar4 = false;
    }
    else {
      pTVar8 = TManagedArrayAccessor<bool>::Get(&this->IsAnisotropicAttribute);
      if (((param_1 < 0) || (*(int *)&pTVar8->field_0x28 <= param_1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPositionTargetsData *)(*pcVar3)();
        return pFVar6;
      }
      puVar10 = *(undefined1 **)&pTVar8->field_0x20;
      if (*(undefined1 **)&pTVar8->field_0x20 == (undefined1 *)0x0) {
        puVar10 = &pTVar8->field_0x10;
      }
      bVar4 = (*(uint *)(puVar10 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4)
               >> (param_1 & 0x1fU) & 1) != 0;
    }
    __return_storage_ptr__->bIsAnisotropic = bVar4;
    if (((this->IsZeroRestLengthAttribute).ConstAttributeArray != (TManagedArray<bool> *)0x0) &&
       (bVar4 = TManagedArrayAccessor<bool>::IsValidIndex(&this->IsZeroRestLengthAttribute,param_1),
       bVar4)) {
      pTVar8 = TManagedArrayAccessor<bool>::Get(&this->IsZeroRestLengthAttribute);
      if (((param_1 < 0) || (*(int *)&pTVar8->field_0x28 <= param_1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPositionTargetsData *)(*pcVar3)();
        return pFVar6;
      }
      puVar10 = *(undefined1 **)&pTVar8->field_0x20;
      if (*(undefined1 **)&pTVar8->field_0x20 == (undefined1 *)0x0) {
        puVar10 = &pTVar8->field_0x10;
      }
      __return_storage_ptr__->bIsZeroRestLength =
           (*(uint *)(puVar10 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
            (param_1 & 0x1fU) & 1) != 0;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->bIsZeroRestLength = true;
  }
  return __return_storage_ptr__;
}

// IsValid @ 143fb7dd0

bool __thiscall
GeometryCollection::Facades::FPositionTargetFacade::IsValid(FPositionTargetFacade *this)

{
  FName FVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  if ((this->TargetIndexAttribute).ConstAttributeArray !=
      (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FVar1 = FManagedArrayCollection::GetDependency
                      ((this->TargetIndexAttribute).ConstCollection,(FName)local_res8,
                       (this->TargetIndexAttribute).Name);
    if ((*(FName *)FVar1 == this->VerticesGroup) &&
       ((this->SourceIndexAttribute).ConstAttributeArray !=
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) {
      FVar1 = FManagedArrayCollection::GetDependency
                        ((this->SourceIndexAttribute).ConstCollection,(FName)local_res10,
                         (this->SourceIndexAttribute).Name);
      if (((*(FName *)FVar1 == this->VerticesGroup) &&
          ((((this->StiffnessAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0 &&
            ((this->DampingAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
           ((this->TargetWeightsAttribute).ConstAttributeArray !=
            (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)))) &&
         ((this->SourceWeightsAttribute).ConstAttributeArray !=
          (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) {
        return true;
      }
    }
  }
  return false;
}

// RemoveInvalidPositionTarget @ 143fc2280

int __thiscall
GeometryCollection::Facades::FPositionTargetFacade::RemoveInvalidPositionTarget
          (FPositionTargetFacade *this)

{
  int *piVar1;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_48 [2];
  ForAnyElementType local_40;
  undefined8 local_38;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionPositionTargetFacade.cpp"
                         ,0x9c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  bVar5 = IsValid(this);
  if (bVar5) {
    local_48[0] = 0;
    iVar6 = FManagedArrayCollection::NumElements(this->Collection,GroupName);
    if ((int)local_48[0] < iVar6) {
      do {
        uVar4 = local_48[0];
        if (((this->TargetIndexAttribute).ConstAttributeArray ==
             (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x60,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        pTVar2 = (this->TargetIndexAttribute).ConstAttributeArray;
        uVar7 = 0;
        if ((int)uVar4 < *(int *)&pTVar2->field_0x18) {
          uVar7 = ~uVar4 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        puVar10 = (undefined8 *)(*(longlong *)&pTVar2->field_0x10 + (longlong)(int)uVar4 * 0x10);
        piVar9 = (int *)*puVar10;
        iVar6 = *(int *)(puVar10 + 1);
        piVar1 = piVar9 + iVar6;
        while( true ) {
          if (*(int *)(puVar10 + 1) != iVar6) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          uVar4 = local_48[0];
          if (piVar9 == piVar1) {
            lVar8 = (longlong)(int)local_48[0];
            if (((this->SourceIndexAttribute).ConstAttributeArray ==
                 (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                   ,0x60,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              iVar6 = (*pcVar3)();
              return iVar6;
            }
            pTVar2 = (this->SourceIndexAttribute).ConstAttributeArray;
            uVar7 = 0;
            if ((int)uVar4 < *(int *)&pTVar2->field_0x18) {
              uVar7 = ~uVar4 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              iVar6 = (*pcVar3)();
              return iVar6;
            }
            puVar10 = (undefined8 *)(*(longlong *)&pTVar2->field_0x10 + lVar8 * 0x10);
            piVar9 = (int *)*puVar10;
            iVar6 = *(int *)(puVar10 + 1);
            piVar1 = piVar9 + iVar6;
            goto LAB_143fc2473;
          }
          if (*piVar9 < 0) break;
          piVar9 = piVar9 + 1;
        }
LAB_143fc2499:
        if (((local_40.Data <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 < local_40.Data + (longlong)local_38._4_4_ * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar6 = (int)local_38;
        if ((int)local_38 == local_38._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_40,(int *)((longlong)&local_38 + 4));
        }
        local_38 = CONCAT44(local_38._4_4_,iVar6 + 1);
        *(uint *)(local_40.Data + (longlong)iVar6 * 4) = local_48[0];
LAB_143fc2533:
        local_48[0] = local_48[0] + 1;
        iVar6 = FManagedArrayCollection::NumElements(this->Collection,GroupName);
      } while ((int)local_48[0] < iVar6);
    }
    (**(code **)(this->Collection->_padding_ + 0x28))(this->Collection,&GroupName,&local_40,0x101);
  }
  iVar6 = (int)local_38;
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return iVar6;
LAB_143fc2473:
  if (*(int *)(puVar10 + 1) != iVar6) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if (piVar9 == piVar1) goto LAB_143fc2533;
  if (*piVar9 < 0) goto LAB_143fc2499;
  piVar9 = piVar9 + 1;
  goto LAB_143fc2473;
}

// RemovePositionTargetBetween @ 143fc25c0

int __thiscall
GeometryCollection::Facades::FPositionTargetFacade::RemovePositionTargetBetween
          (FPositionTargetFacade *this,TFunctionRef<bool___cdecl(int)> *param_1,
          TFunctionRef<bool___cdecl(int)> *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  uint local_84;
  undefined1 local_80;
  undefined1 local_7f [7];
  ForAnyElementType local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined4 local_50 [4];
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionPositionTargetFacade.cpp"
                         ,0xbf,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar12 = (*pcVar4)();
    return iVar12;
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  bVar8 = IsValid(this);
  if (bVar8) {
    local_84 = 0;
    iVar12 = FManagedArrayCollection::NumElements(this->Collection,GroupName);
    if ((int)local_84 < iVar12) {
      do {
        uVar7 = local_84;
        bVar6 = true;
        bVar8 = true;
        if (((this->TargetIndexAttribute).ConstAttributeArray ==
             (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x60,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          iVar12 = (*pcVar4)();
          return iVar12;
        }
        pTVar3 = (this->TargetIndexAttribute).ConstAttributeArray;
        uVar13 = 0;
        if ((int)uVar7 < *(int *)&pTVar3->field_0x18) {
          uVar13 = ~uVar7 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          iVar12 = (*pcVar4)();
          return iVar12;
        }
        puVar16 = (undefined8 *)((longlong)(int)uVar7 * 0x10 + *(longlong *)&pTVar3->field_0x10);
        puVar15 = (undefined4 *)*puVar16;
        iVar12 = *(int *)(puVar16 + 1);
        puVar1 = puVar15 + iVar12;
        while( true ) {
          if (*(int *)(puVar16 + 1) != iVar12) {
            local_80 = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_80);
          }
          uVar7 = local_84;
          if (puVar15 == puVar1) break;
          uVar2 = *puVar15;
          if ((bVar6) &&
             (local_68[0] = uVar2,
             cVar10 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_68),
             cVar10 != '\0')) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if ((bVar8) &&
             (local_60[0] = uVar2,
             cVar10 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_60),
             cVar10 != '\0')) {
            bVar8 = true;
            puVar15 = puVar15 + 1;
          }
          else {
            bVar8 = false;
            puVar15 = puVar15 + 1;
          }
        }
        bVar5 = true;
        lVar14 = (longlong)(int)local_84;
        bVar9 = true;
        if (((this->SourceIndexAttribute).ConstAttributeArray ==
             (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x60,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          iVar12 = (*pcVar4)();
          return iVar12;
        }
        pTVar3 = (this->SourceIndexAttribute).ConstAttributeArray;
        uVar13 = 0;
        if ((int)uVar7 < *(int *)&pTVar3->field_0x18) {
          uVar13 = ~uVar7 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          iVar12 = (*pcVar4)();
          return iVar12;
        }
        puVar16 = (undefined8 *)(lVar14 * 0x10 + *(longlong *)&pTVar3->field_0x10);
        puVar15 = (undefined4 *)*puVar16;
        iVar12 = *(int *)(puVar16 + 1);
        puVar1 = puVar15 + iVar12;
        while( true ) {
          if (*(int *)(puVar16 + 1) != iVar12) {
            local_7f[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_7f);
          }
          if (puVar15 == puVar1) break;
          uVar2 = *puVar15;
          if ((bVar5) &&
             (local_58[0] = uVar2,
             cVar10 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_58),
             cVar10 != '\0')) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if ((bVar9) &&
             (local_50[0] = uVar2,
             cVar10 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_50),
             cVar10 != '\0')) {
            bVar9 = true;
            puVar15 = puVar15 + 1;
          }
          else {
            bVar9 = false;
            puVar15 = puVar15 + 1;
          }
        }
        if (((bVar6) && (bVar9)) || ((bVar8 && (bVar5)))) {
          if (((local_78.Data <= (FScriptContainerElement *)&local_84) &&
              ((FScriptContainerElement *)&local_84 < local_78.Data + (longlong)local_70._4_4_ * 4))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar4 = (code *)swi(3);
            iVar12 = (*pcVar4)();
            return iVar12;
          }
          iVar12 = (int)local_70;
          if ((int)local_70 == local_70._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_78,(int *)((longlong)&local_70 + 4));
          }
          local_70 = CONCAT44(local_70._4_4_,iVar12 + 1);
          *(uint *)(local_78.Data + (longlong)iVar12 * 4) = local_84;
        }
        local_84 = local_84 + 1;
        iVar12 = FManagedArrayCollection::NumElements(this->Collection,GroupName);
      } while ((int)local_84 < iVar12);
    }
    (**(code **)(this->Collection->_padding_ + 0x28))(this->Collection,&GroupName,&local_78,0x101);
  }
  iVar12 = (int)local_70;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return iVar12;
}

