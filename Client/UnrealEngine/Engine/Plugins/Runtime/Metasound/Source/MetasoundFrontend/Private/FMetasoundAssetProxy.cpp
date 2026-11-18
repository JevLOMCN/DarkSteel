// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// FMetasoundAssetProxy @ 14ad99e60

FMetasoundAssetProxy * __thiscall
FMetasoundAssetProxy::FMetasoundAssetProxy(FMetasoundAssetProxy *this,FParameters *param_1)

{
  undefined8 uVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  
  Audio::TProxyData<FMetasoundAssetProxy>::TProxyData<FMetasoundAssetProxy>
            ((TProxyData<FMetasoundAssetProxy> *)this);
  this->_padding_ = (longlong)&___7FMetasoundAssetProxy__6B_;
  *(undefined8 *)&(this->Interfaces).Elements = 0;
  *(undefined8 *)&(this->Interfaces).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Interfaces).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x34 = 0;
  (this->Interfaces).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Interfaces).HashSize = 0;
  (this->GraphRegistryKey).NodeKey.Type = Invalid;
  (this->GraphRegistryKey).NodeKey.ClassName.Namespace.ComparisonIndex = 0;
  (this->GraphRegistryKey).NodeKey.ClassName.Namespace.Number = 0;
  (this->GraphRegistryKey).NodeKey.ClassName.Name.ComparisonIndex = 0;
  (this->GraphRegistryKey).NodeKey.ClassName.Name.Number = 0;
  (this->GraphRegistryKey).NodeKey.ClassName.Variant.ComparisonIndex = 0;
  (this->GraphRegistryKey).NodeKey.ClassName.Variant.Number = 0;
  (this->GraphRegistryKey).NodeKey.Version.Major = 1;
  (this->GraphRegistryKey).NodeKey.Version.Minor = 0;
  (this->GraphRegistryKey).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GraphRegistryKey).AssetPath.PackageName.Number = 0;
  (this->GraphRegistryKey).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GraphRegistryKey).AssetPath.AssetName.Number = 0;
  (this->GraphRegistryKey).ObjectID = 0xffffffff;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  ::operator=(&this->Interfaces,&param_1->Interfaces);
  uVar2 = *(undefined3 *)&(param_1->GraphRegistryKey).NodeKey.field_0x1;
  FVar3.Value = (param_1->GraphRegistryKey).NodeKey.ClassName.Namespace.ComparisonIndex.Value;
  uVar1 = *(undefined8 *)&(param_1->GraphRegistryKey).NodeKey.ClassName.Namespace.Number;
  (this->GraphRegistryKey).NodeKey.Type = (param_1->GraphRegistryKey).NodeKey.Type;
  *(undefined3 *)&(this->GraphRegistryKey).NodeKey.field_0x1 = uVar2;
  (this->GraphRegistryKey).NodeKey.ClassName.Namespace.ComparisonIndex = (FNameEntryId)FVar3.Value;
  *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Namespace.Number = uVar1;
  uVar1 = *(undefined8 *)&(param_1->GraphRegistryKey).NodeKey.ClassName.Variant.Number;
  *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Name.Number =
       *(undefined8 *)&(param_1->GraphRegistryKey).NodeKey.ClassName.Name.Number;
  *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Variant.Number = uVar1;
  uVar1 = *(undefined8 *)&(param_1->GraphRegistryKey).AssetPath.PackageName.Number;
  *(undefined8 *)&(this->GraphRegistryKey).NodeKey.Version.Minor =
       *(undefined8 *)&(param_1->GraphRegistryKey).NodeKey.Version.Minor;
  *(undefined8 *)&(this->GraphRegistryKey).AssetPath.PackageName.Number = uVar1;
  *(undefined8 *)&(this->GraphRegistryKey).AssetPath.AssetName.Number =
       *(undefined8 *)&(param_1->GraphRegistryKey).AssetPath.AssetName.Number;
  return this;
}

// FMetasoundAssetProxy @ 14ad99f30

FMetasoundAssetProxy * __thiscall
FMetasoundAssetProxy::FMetasoundAssetProxy(FMetasoundAssetProxy *this,FMetasoundAssetProxy *param_1)

{
  undefined8 uVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  
  Audio::TProxyData<FMetasoundAssetProxy>::TProxyData<FMetasoundAssetProxy>
            ((TProxyData<FMetasoundAssetProxy> *)this);
  this->_padding_ = (longlong)&___7FMetasoundAssetProxy__6B_;
  *(undefined8 *)&(this->Interfaces).Elements = 0;
  *(undefined8 *)&(this->Interfaces).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Interfaces).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Interfaces).Elements.field_0x34 = 0;
  (this->Interfaces).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Interfaces).HashSize = 0;
  (this->GraphRegistryKey).NodeKey.Type = Invalid;
  (this->GraphRegistryKey).NodeKey.ClassName.Namespace.ComparisonIndex = 0;
  (this->GraphRegistryKey).NodeKey.ClassName.Namespace.Number = 0;
  (this->GraphRegistryKey).NodeKey.ClassName.Name.ComparisonIndex = 0;
  (this->GraphRegistryKey).NodeKey.ClassName.Name.Number = 0;
  (this->GraphRegistryKey).NodeKey.ClassName.Variant.ComparisonIndex = 0;
  (this->GraphRegistryKey).NodeKey.ClassName.Variant.Number = 0;
  (this->GraphRegistryKey).NodeKey.Version.Major = 1;
  (this->GraphRegistryKey).NodeKey.Version.Minor = 0;
  (this->GraphRegistryKey).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GraphRegistryKey).AssetPath.PackageName.Number = 0;
  (this->GraphRegistryKey).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GraphRegistryKey).AssetPath.AssetName.Number = 0;
  (this->GraphRegistryKey).ObjectID = 0xffffffff;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  ::operator=(&this->Interfaces,&param_1->Interfaces);
  uVar2 = *(undefined3 *)&(param_1->GraphRegistryKey).NodeKey.field_0x1;
  FVar3.Value = (param_1->GraphRegistryKey).NodeKey.ClassName.Namespace.ComparisonIndex.Value;
  uVar1 = *(undefined8 *)&(param_1->GraphRegistryKey).NodeKey.ClassName.Namespace.Number;
  (this->GraphRegistryKey).NodeKey.Type = (param_1->GraphRegistryKey).NodeKey.Type;
  *(undefined3 *)&(this->GraphRegistryKey).NodeKey.field_0x1 = uVar2;
  (this->GraphRegistryKey).NodeKey.ClassName.Namespace.ComparisonIndex = (FNameEntryId)FVar3.Value;
  *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Namespace.Number = uVar1;
  uVar1 = *(undefined8 *)&(param_1->GraphRegistryKey).NodeKey.ClassName.Variant.Number;
  *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Name.Number =
       *(undefined8 *)&(param_1->GraphRegistryKey).NodeKey.ClassName.Name.Number;
  *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Variant.Number = uVar1;
  uVar1 = *(undefined8 *)&(param_1->GraphRegistryKey).AssetPath.PackageName.Number;
  *(undefined8 *)&(this->GraphRegistryKey).NodeKey.Version.Minor =
       *(undefined8 *)&(param_1->GraphRegistryKey).NodeKey.Version.Minor;
  *(undefined8 *)&(this->GraphRegistryKey).AssetPath.PackageName.Number = uVar1;
  *(undefined8 *)&(this->GraphRegistryKey).AssetPath.AssetName.Number =
       *(undefined8 *)&(param_1->GraphRegistryKey).AssetPath.AssetName.Number;
  return this;
}

// GetGraph @ 14adbef40

IGraph * __thiscall FMetasoundAssetProxy::GetGraph(FMetasoundAssetProxy *this)

{
  IGraph *pIVar1;
  bool bVar2;
  INodeClassRegistry *pIVar3;
  undefined8 *puVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  bVar2 = Metasound::Frontend::FGraphClassRegistryKey::IsValid(&this->GraphRegistryKey);
  if (bVar2) {
    pIVar3 = Metasound::Frontend::INodeClassRegistry::Get();
    puVar4 = (undefined8 *)
             (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,local_18,&this->GraphRegistryKey);
    pIVar1 = (IGraph *)*puVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return pIVar1;
  }
  return (IGraph *)0x0;
}

// GetGraphRegistryKey @ 14adbefd0

FGraphClassRegistryKey * __thiscall
FMetasoundAssetProxy::GetGraphRegistryKey(FMetasoundAssetProxy *this)

{
  return &this->GraphRegistryKey;
}

// GetInterfaces @ 14adbfb80

TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator> *
__thiscall FMetasoundAssetProxy::GetInterfaces(FMetasoundAssetProxy *this)

{
  return &this->Interfaces;
}

