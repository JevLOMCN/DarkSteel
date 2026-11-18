// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a202130

UScriptStruct * __cdecl FModularRigModuleSettingsForClipboard::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsForClipboard.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsForClipboard.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FModularRigModuleSettingsForClipboard,
                         (UObject *)pUVar1,L"ModularRigModuleSettingsForClipboard");
  }
  return Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsForClipboard.OuterSingleton;
}

// FModularRigModuleSettingsForClipboard @ 14a21f610

FModularRigModuleSettingsForClipboard * __thiscall
FModularRigModuleSettingsForClipboard::FModularRigModuleSettingsForClipboard
          (FModularRigModuleSettingsForClipboard *this,
          FModularRigModuleSettingsForClipboard *param_1)

{
  FName FVar1;
  
  FVar1 = (param_1->ModuleClass).AssetPath.AssetName;
  (this->ModuleClass).AssetPath.PackageName = (param_1->ModuleClass).AssetPath.PackageName;
  (this->ModuleClass).AssetPath.AssetName = FVar1;
  (this->ModuleClass).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModuleClass).SubPathString.Data.AllocatorInstance.Data =
       (param_1->ModuleClass).SubPathString.Data.AllocatorInstance.Data;
  (param_1->ModuleClass).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModuleClass).SubPathString.Data.ArrayNum =
       (param_1->ModuleClass).SubPathString.Data.ArrayNum;
  (this->ModuleClass).SubPathString.Data.ArrayMax =
       (param_1->ModuleClass).SubPathString.Data.ArrayMax;
  (param_1->ModuleClass).SubPathString.Data.ArrayNum = 0;
  (param_1->ModuleClass).SubPathString.Data.ArrayMax = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->Defaults,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->Defaults);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->Overrides,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->Overrides);
  *(undefined8 *)&(this->Bindings).field_0x0 = 0;
  *(undefined8 *)&(this->Bindings).field_0x8 = 0;
  *(undefined8 *)&(this->Bindings).field_0x20 = 0;
  *(undefined4 *)&(this->Bindings).field_0x28 = 0;
  *(undefined4 *)&(this->Bindings).field_0x2c = 0x80;
  *(undefined4 *)&(this->Bindings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Bindings).field_0x34 = 0;
  *(undefined8 *)&(this->Bindings).field_0x40 = 0;
  *(undefined4 *)&(this->Bindings).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->Bindings,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&param_1->Bindings);
  return this;
}

// FModularRigModuleSettingsForClipboard @ 14a21f6c0

FModularRigModuleSettingsForClipboard * __thiscall
FModularRigModuleSettingsForClipboard::FModularRigModuleSettingsForClipboard
          (FModularRigModuleSettingsForClipboard *this)

{
  (this->ModuleClass).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ModuleClass).AssetPath.PackageName.Number = 0;
  (this->ModuleClass).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ModuleClass).AssetPath.AssetName.Number = 0;
  (this->ModuleClass).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModuleClass).SubPathString.Data.ArrayNum = 0;
  (this->ModuleClass).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&this->Defaults = 0;
  *(undefined8 *)&(this->Defaults).field_0x8 = 0;
  *(undefined8 *)&(this->Defaults).field_0x20 = 0;
  *(undefined4 *)&(this->Defaults).field_0x28 = 0;
  *(undefined4 *)&(this->Defaults).field_0x2c = 0x80;
  *(undefined4 *)&(this->Defaults).field_0x34 = 0;
  *(undefined4 *)&(this->Defaults).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Defaults).field_0x40 = 0;
  *(undefined4 *)&(this->Defaults).field_0x48 = 0;
  *(undefined8 *)&this->Overrides = 0;
  *(undefined8 *)&(this->Overrides).field_0x8 = 0;
  *(undefined8 *)&(this->Overrides).field_0x20 = 0;
  *(undefined4 *)&(this->Overrides).field_0x28 = 0;
  *(undefined4 *)&(this->Overrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->Overrides).field_0x34 = 0;
  *(undefined4 *)&(this->Overrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Overrides).field_0x40 = 0;
  *(undefined4 *)&(this->Overrides).field_0x48 = 0;
  *(undefined8 *)&this->Bindings = 0;
  *(undefined8 *)&(this->Bindings).field_0x8 = 0;
  *(undefined8 *)&(this->Bindings).field_0x20 = 0;
  *(undefined4 *)&(this->Bindings).field_0x28 = 0;
  *(undefined4 *)&(this->Bindings).field_0x2c = 0x80;
  *(undefined4 *)&(this->Bindings).field_0x34 = 0;
  *(undefined4 *)&(this->Bindings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Bindings).field_0x40 = 0;
  *(undefined4 *)&(this->Bindings).field_0x48 = 0;
  return this;
}

// ~FModularRigModuleSettingsForClipboard @ 14a225d40

void __thiscall
FModularRigModuleSettingsForClipboard::~FModularRigModuleSettingsForClipboard
          (FModularRigModuleSettingsForClipboard *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->Bindings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Bindings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Bindings);
  *(undefined4 *)&(this->Overrides).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Overrides).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Overrides);
  *(undefined4 *)&(this->Defaults).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Defaults).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Defaults);
  pFVar2 = (this->ModuleClass).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

