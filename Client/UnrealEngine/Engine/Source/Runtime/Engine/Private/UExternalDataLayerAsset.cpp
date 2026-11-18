// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148a27780

UClass * __cdecl UExternalDataLayerAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerAsset",
               &Z_Registration_Info_UClass_UExternalDataLayerAsset.InnerSingleton,
               StaticRegisterNativesUExternalDataLayerAsset,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UExternalDataLayerAsset>,
               InternalVTableHelperCtorCaller<UExternalDataLayerAsset>,local_res8,
               UDataLayerAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerAsset.InnerSingleton;
}

// UExternalDataLayerAsset @ 148a42c40

UExternalDataLayerAsset * __thiscall
UExternalDataLayerAsset::UExternalDataLayerAsset
          (UExternalDataLayerAsset *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UExternalDataLayerAsset__6B_;
  (this->UID).Value = 0;
  return this;
}

// UExternalDataLayerAsset @ 148a42c70

UExternalDataLayerAsset * __thiscall
UExternalDataLayerAsset::UExternalDataLayerAsset
          (UExternalDataLayerAsset *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UDataLayerAsset__6B_;
  ((FColor_u_0 *)((longlong)&this->_padding_ + 4))->_s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  this->_padding_ = (longlong)&___7UExternalDataLayerAsset__6B_;
  (this->UID).Value = 0;
  *(undefined1 *)&this->_padding_ = 0;
  return this;
}

// ~UExternalDataLayerAsset @ 148a448a0

void __thiscall UExternalDataLayerAsset::~UExternalDataLayerAsset(UExternalDataLayerAsset *this)

{
  this->_padding_ = (longlong)&___7UDataLayerAsset__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 148a5a7a0

UClass * __cdecl UExternalDataLayerAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerAsset",
               &Z_Registration_Info_UClass_UExternalDataLayerAsset.InnerSingleton,
               StaticRegisterNativesUExternalDataLayerAsset,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UExternalDataLayerAsset>,
               InternalVTableHelperCtorCaller<UExternalDataLayerAsset>,local_res8,
               UDataLayerAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerAsset.InnerSingleton;
}

// GetType @ 148a5b470

EDataLayerType __thiscall UExternalDataLayerAsset::GetType(UExternalDataLayerAsset *this)

{
  return Runtime;
}

// StaticRegisterNativesUExternalDataLayerAsset @ 148a6a4c0

void __cdecl UExternalDataLayerAsset::StaticRegisterNativesUExternalDataLayerAsset(void)

{
  return;
}

