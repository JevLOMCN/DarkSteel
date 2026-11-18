// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// StaticStruct @ 1436f0700

UScriptStruct * __cdecl FFieldCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFieldCollection.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UScriptStruct_FFieldCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFieldCollection,(UObject *)pUVar1,
                         L"FieldCollection");
  }
  return Z_Registration_Info_UScriptStruct_FFieldCollection.OuterSingleton;
}

// FFieldCollection @ 1436f6cc0

FFieldCollection * __thiscall FFieldCollection::FFieldCollection(FFieldCollection *this)

{
  FName FVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FFieldCollection *pFVar7;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar8;
  FName local_res20;
  undefined2 local_c0;
  undefined2 uStack_be;
  undefined2 local_b4;
  undefined2 uStack_b2;
  undefined2 local_a8;
  undefined2 uStack_a6;
  FConstructionParameters local_98;
  FConstructionParameters local_88;
  FConstructionParameters local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30 [2];
  
  FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)this);
  *(undefined ***)this = &___7FFieldCollection__6B_;
  pFVar6 = ::FName::FName(&local_res20,"VectorField");
  FManagedArrayCollection::AddGroup((FManagedArrayCollection *)this,*pFVar6);
  pFVar6 = ::FName::FName(&local_58,"VectorField");
  FVar1 = *pFVar6;
  pFVar6 = ::FName::FName(&local_50,"Start");
  local_98.Saved = true;
  local_98.bAllowCircularDependency = false;
  local_98._10_2_ = uStack_be;
  local_98.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_98.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
            ((FManagedArrayCollection *)this,*pFVar6,FVar1,&local_98);
  pFVar6 = ::FName::FName(&local_48,"VectorField");
  FVar1 = *pFVar6;
  pFVar6 = ::FName::FName(&local_40,"End");
  local_88.Saved = true;
  local_88.bAllowCircularDependency = false;
  local_88._10_2_ = uStack_b2;
  local_88.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_88.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
            ((FManagedArrayCollection *)this,*pFVar6,FVar1,&local_88);
  pFVar6 = ::FName::FName(&local_38,"VectorField");
  FVar1 = *pFVar6;
  pFVar6 = ::FName::FName(local_30,"Color");
  local_78.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_78.GroupIndexDependency.Number = 0;
  FVar2 = *pFVar6;
  local_78.Saved = true;
  local_78.bAllowCircularDependency = false;
  local_78._10_2_ = uStack_a6;
  bVar5 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this,FVar2,FVar1);
  if (!bVar5) {
    FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>
              ((FManagedArrayCollection *)this,FVar2,FVar1,&local_78);
  }
  bVar5 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this,FVar2,FVar1);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FFieldCollection *)(*pcVar4)();
      return pFVar7;
    }
  }
  local_68 = FVar2;
  local_60 = FVar1;
  pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this->field_0x8,(TTuple<FName,FName> *)&local_68);
  if (pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FFieldCollection *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (pTVar8->field_0x10 != '\x04') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FFieldCollection *)(*pcVar4)();
      return pFVar7;
    }
  }
  FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar8->field_0x10);
  lVar3 = *(longlong *)&pTVar8->field_0x30;
  if (lVar3 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FFieldCollection *)(*pcVar4)();
      return pFVar7;
    }
  }
  *(undefined1 *)(lVar3 + 8) = 1;
  return this;
}

