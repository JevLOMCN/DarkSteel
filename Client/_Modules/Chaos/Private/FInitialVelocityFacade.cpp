// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FInitialVelocityFacade @ 143f89910

FInitialVelocityFacade * __thiscall
FGeometryDynamicCollection::FInitialVelocityFacade::FInitialVelocityFacade
          (FInitialVelocityFacade *this,FGeometryDynamicCollection *param_1)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  FName local_res10;
  
  ::FName::FName(&local_res10,"InitialLinearVelocity");
  (this->InitialLinearVelocityAttribute).Name = local_res10;
  (this->InitialLinearVelocityAttribute).ConstCollection = (FManagedArrayCollection *)param_1;
  (this->InitialLinearVelocityAttribute).Collection = (FManagedArrayCollection *)param_1;
  (this->InitialLinearVelocityAttribute).Group = FTransformCollection::TransformGroup;
  (this->InitialLinearVelocityAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InitialLinearVelocityAttribute).DefaultGroupDependency.Number = 0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     ((FManagedArrayCollection *)param_1,local_res10,
                      FTransformCollection::TransformGroup);
  (this->InitialLinearVelocityAttribute).AttributeArray = pTVar1;
  (this->InitialLinearVelocityAttribute).ConstAttributeArray = pTVar1;
  ::FName::FName(&local_res10,"InitialAngularVelocity");
  (this->InitialAngularVelocityAttribute).Name = local_res10;
  (this->InitialAngularVelocityAttribute).ConstCollection = (FManagedArrayCollection *)param_1;
  (this->InitialAngularVelocityAttribute).Collection = (FManagedArrayCollection *)param_1;
  (this->InitialAngularVelocityAttribute).Group = FTransformCollection::TransformGroup;
  (this->InitialAngularVelocityAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InitialAngularVelocityAttribute).DefaultGroupDependency.Number = 0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     ((FManagedArrayCollection *)param_1,local_res10,
                      FTransformCollection::TransformGroup);
  (this->InitialAngularVelocityAttribute).AttributeArray = pTVar1;
  (this->InitialAngularVelocityAttribute).ConstAttributeArray = pTVar1;
  return this;
}

// FInitialVelocityFacade @ 143f899e0

FInitialVelocityFacade * __thiscall
FGeometryDynamicCollection::FInitialVelocityFacade::FInitialVelocityFacade
          (FInitialVelocityFacade *this,FGeometryDynamicCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FInitialVelocityFacade *pFVar4;
  TManagedArray<UE::Math::TVector<float>_> *pTVar5;
  char *pcVar6;
  FName local_res18;
  FName local_res20;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  ::FName::FName(&local_res18,"InitialLinearVelocity");
  (this->InitialLinearVelocityAttribute).Name = local_res18;
  (this->InitialLinearVelocityAttribute).ConstCollection = (FManagedArrayCollection *)param_1;
  (this->InitialLinearVelocityAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->InitialLinearVelocityAttribute).Group = FTransformCollection::TransformGroup;
  (this->InitialLinearVelocityAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InitialLinearVelocityAttribute).DefaultGroupDependency.Number = 0;
  (this->InitialLinearVelocityAttribute).AttributeArray =
       (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_40 = FTransformCollection::TransformGroup;
  local_48 = local_res18;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(TTuple<FName,FName> *)&local_48);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x01')) {
    pTVar5 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar5 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar6 + 0x20);
    if (pTVar5 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FInitialVelocityFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->InitialLinearVelocityAttribute).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_res20,"InitialAngularVelocity");
  (this->InitialAngularVelocityAttribute).Name = local_res20;
  (this->InitialAngularVelocityAttribute).ConstCollection = (FManagedArrayCollection *)param_1;
  (this->InitialAngularVelocityAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->InitialAngularVelocityAttribute).Group = FTransformCollection::TransformGroup;
  (this->InitialAngularVelocityAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InitialAngularVelocityAttribute).DefaultGroupDependency.Number = 0;
  (this->InitialAngularVelocityAttribute).AttributeArray =
       (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_38 = local_res20;
  local_30 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(TTuple<FName,FName> *)&local_38);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x01')) {
    pTVar5 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar6 + 0x20);
    if (pTVar5 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FInitialVelocityFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->InitialAngularVelocityAttribute).ConstAttributeArray = pTVar5;
    return this;
  }
  (this->InitialAngularVelocityAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  return this;
}

// CopyFrom @ 143fa6fc0

void __thiscall
FGeometryDynamicCollection::FInitialVelocityFacade::CopyFrom
          (FInitialVelocityFacade *this,FGeometryDynamicCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  FName local_res20;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  
  ::FName::FName(&local_res20,"InitialLinearVelocity");
  local_58 = FTransformCollection::TransformGroup;
  local_60 = local_res20;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(TTuple<FName,FName> *)&local_60);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = (char *)0x0;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x01')) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(pcVar5 + 0x20);
    if (lVar7 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  ::FName::FName(&local_68,"InitialAngularVelocity");
  local_48 = FTransformCollection::TransformGroup;
  local_50 = local_68;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(TTuple<FName,FName> *)&local_50);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = (char *)0x0;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x01')) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(pcVar5 + 0x20);
    if (lVar6 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if ((lVar7 != 0) && (lVar6 != 0)) {
    TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
              (&this->InitialLinearVelocityAttribute,MakePersistent,(FName)0x0);
    TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
              (&this->InitialAngularVelocityAttribute,MakePersistent,(FName)0x0);
    if ((this->InitialLinearVelocityAttribute).Collection == (FManagedArrayCollection *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xb6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FManagedArrayCollection::CopyAttribute
              ((this->InitialLinearVelocityAttribute).Collection,(FManagedArrayCollection *)param_1,
               local_res20,(this->InitialLinearVelocityAttribute).Name,
               (this->InitialLinearVelocityAttribute).Group);
    pTVar4 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                       ((this->InitialLinearVelocityAttribute).Collection,
                        (this->InitialLinearVelocityAttribute).Name,
                        (this->InitialLinearVelocityAttribute).Group);
    (this->InitialLinearVelocityAttribute).AttributeArray = pTVar4;
    (this->InitialLinearVelocityAttribute).ConstAttributeArray = pTVar4;
    if ((this->InitialAngularVelocityAttribute).Collection == (FManagedArrayCollection *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xb6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FManagedArrayCollection::CopyAttribute
              ((this->InitialAngularVelocityAttribute).Collection,(FManagedArrayCollection *)param_1
               ,local_68,(this->InitialAngularVelocityAttribute).Name,
               (this->InitialAngularVelocityAttribute).Group);
    pTVar4 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                       ((this->InitialAngularVelocityAttribute).Collection,
                        (this->InitialAngularVelocityAttribute).Name,
                        (this->InitialAngularVelocityAttribute).Group);
    (this->InitialAngularVelocityAttribute).AttributeArray = pTVar4;
    (this->InitialAngularVelocityAttribute).ConstAttributeArray = pTVar4;
  }
  return;
}

// DefineSchema @ 143fa9740

void __thiscall
FGeometryDynamicCollection::FInitialVelocityFacade::DefineSchema(FInitialVelocityFacade *this)

{
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->InitialLinearVelocityAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->InitialAngularVelocityAttribute,MakePersistent,(FName)0x0);
  return;
}

// Fill @ 143fac1c0

void __thiscall
FGeometryDynamicCollection::FInitialVelocityFacade::Fill
          (FInitialVelocityFacade *this,TVector<float> *param_1,TVector<float> *param_2)

{
  TManagedArrayBase<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if (((this->InitialLinearVelocityAttribute).ConstAttributeArray ==
       (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
     ((this->InitialAngularVelocityAttribute).ConstAttributeArray ==
      (TManagedArray<UE::Math::TVector<float>_> *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollectionProxyData.cpp"
                       ,0xf2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->InitialLinearVelocityAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0xac,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = (TManagedArrayBase<UE::Math::TVector<float>_> *)
           (this->InitialLinearVelocityAttribute).AttributeArray;
  if (pTVar1 != (TManagedArrayBase<UE::Math::TVector<float>_> *)0x0) {
    TManagedArrayBase<UE::Math::TVector<float>_>::Fill(pTVar1,param_1);
  }
  if ((this->InitialAngularVelocityAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0xac,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = (TManagedArrayBase<UE::Math::TVector<float>_> *)
           (this->InitialAngularVelocityAttribute).AttributeArray;
  if (pTVar1 != (TManagedArrayBase<UE::Math::TVector<float>_> *)0x0) {
    TManagedArrayBase<UE::Math::TVector<float>_>::Fill(pTVar1,param_2);
  }
  return;
}

// IsValid @ 143fb7d30

bool __thiscall
FGeometryDynamicCollection::FInitialVelocityFacade::IsValid(FInitialVelocityFacade *this)

{
  if (((this->InitialLinearVelocityAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
     ((this->InitialAngularVelocityAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TVector<float>_> *)0x0)) {
    return true;
  }
  return false;
}

