// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147ee9f80

UClass * __cdecl UMaterialAggregate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialAggregate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialAggregate",
               &Z_Registration_Info_UClass_UMaterialAggregate.InnerSingleton,
               StaticRegisterNativesUMaterialAggregate,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMaterialAggregate>,
               InternalVTableHelperCtorCaller<UMaterialAggregate>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialAggregate.InnerSingleton;
}

// UMaterialAggregate @ 147ef0910

UMaterialAggregate * __thiscall
UMaterialAggregate::UMaterialAggregate(UMaterialAggregate *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialAggregate__6B_;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  return this;
}

// UMaterialAggregate @ 147ef0950

UMaterialAggregate * __thiscall
UMaterialAggregate::UMaterialAggregate(UMaterialAggregate *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialAggregate__6B_;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  return this;
}

// ~UMaterialAggregate @ 147ef2790

void __thiscall UMaterialAggregate::~UMaterialAggregate(UMaterialAggregate *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialAggregate__6B_;
  pFVar1 = (this->Attributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 147efd6e0

UClass * __cdecl UMaterialAggregate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialAggregate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialAggregate",
               &Z_Registration_Info_UClass_UMaterialAggregate.InnerSingleton,
               StaticRegisterNativesUMaterialAggregate,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMaterialAggregate>,
               InternalVTableHelperCtorCaller<UMaterialAggregate>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialAggregate.InnerSingleton;
}

// StaticRegisterNativesUMaterialAggregate @ 147f08530

void __cdecl UMaterialAggregate::StaticRegisterNativesUMaterialAggregate(void)

{
  return;
}

