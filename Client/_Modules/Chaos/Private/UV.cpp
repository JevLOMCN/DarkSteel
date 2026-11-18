// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// DefineUVSchema @ 143fe8630

void __cdecl GeometryCollection::UV::DefineUVSchema(FManagedArrayCollection *param_1)

{
  FName FVar1;
  FName FVar2;
  bool bVar3;
  undefined2 local_20;
  undefined2 uStack_1e;
  FConstructionParameters local_18;
  
  FVar2 = VerticesGroupName;
  FVar1 = UVLayerNames[0];
  local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_18.GroupIndexDependency.Number = 0;
  local_18.Saved = true;
  local_18.bAllowCircularDependency = false;
  local_18._10_2_ = uStack_1e;
  bVar3 = FManagedArrayCollection::HasAttribute(param_1,UVLayerNames[0],VerticesGroupName);
  if (!bVar3) {
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>
              (param_1,FVar1,FVar2,&local_18);
  }
  FManagedArrayCollection::ModifyAttribute<UE::Math::TVector2<float>_>(param_1,FVar1,FVar2);
  return;
}

// GetNumUVLayers @ 143fe9ff0

int __cdecl GeometryCollection::UV::GetNumUVLayers(FManagedArrayCollection *param_1)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 1;
  do {
    bVar1 = FManagedArrayCollection::HasAttribute(param_1,UVLayerNames[uVar3],VerticesGroupName);
    if (!bVar1) {
      return (int)uVar3;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < 8);
  return uVar2;
}

// GetUVLayer @ 143feb350

TManagedArray<UE::Math::TVector2<float>_> * __cdecl
GeometryCollection::UV::GetUVLayer(FManagedArrayCollection *param_1,int param_2)

{
  FName FVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar5;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar6;
  FName local_18;
  FName local_10;
  
  FVar3 = VerticesGroupName;
  FVar1 = UVLayerNames[param_2];
  bVar4 = FManagedArrayCollection::HasAttribute(param_1,FVar1,VerticesGroupName);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x185,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TManagedArray<UE::Math::TVector2<float>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  local_10 = FVar3;
  local_18 = FVar1;
  pTVar6 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  if (pTVar6 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TManagedArray<UE::Math::TVector2<float>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar5 = FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector2<float>_>
                     ((FValueType *)&pTVar6->field_0x10);
  return pTVar5;
}

// HasValidUVs @ 143fec570

bool __cdecl GeometryCollection::UV::HasValidUVs(FManagedArrayCollection *param_1)

{
  bool bVar1;
  
  bVar1 = FManagedArrayCollection::HasAttribute(param_1,UVLayerNames[0],VerticesGroupName);
  return bVar1;
}

// SetNumUVLayers @ 144002330

bool __cdecl GeometryCollection::UV::SetNumUVLayers(FManagedArrayCollection *param_1,int param_2)

{
  FName FVar1;
  FName FVar2;
  bool bVar3;
  FName *pFVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 local_40;
  undefined2 uStack_3e;
  FConstructionParameters local_38;
  
  if (7 < param_2 - 1U) {
    return false;
  }
  if (0 < param_2) {
    lVar5 = 0;
    do {
      FVar2 = VerticesGroupName;
      FVar1 = UVLayerNames[lVar5];
      local_40._0_1_ = true;
      local_40._1_1_ = false;
      local_38.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_38.GroupIndexDependency.Number = 0;
      local_38.Saved = true;
      local_38.bAllowCircularDependency = false;
      local_38._10_2_ = uStack_3e;
      bVar3 = FManagedArrayCollection::HasAttribute(param_1,FVar1,VerticesGroupName);
      if (!bVar3) {
        FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>
                  (param_1,FVar1,FVar2,&local_38);
      }
      FManagedArrayCollection::ModifyAttribute<UE::Math::TVector2<float>_>(param_1,FVar1,FVar2);
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_2);
  }
  if (param_2 < 8) {
    pFVar4 = UVLayerNames + param_2;
    uVar6 = (ulonglong)(8 - param_2);
    do {
      FManagedArrayCollection::RemoveAttribute(param_1,*pFVar4,VerticesGroupName);
      pFVar4 = pFVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return true;
}

