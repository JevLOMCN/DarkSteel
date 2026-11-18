// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 6

// StaticClass @ 14ead91b0

UClass * __cdecl UNNEDenoiserTemporalAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNEDenoiser",L"NNEDenoiserTemporalAsset",
               &Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.InnerSingleton,
               StaticRegisterNativesUNNEDenoiserTemporalAsset,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNNEDenoiserTemporalAsset>,
               InternalVTableHelperCtorCaller<UNNEDenoiserTemporalAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.InnerSingleton;
}

// UNNEDenoiserTemporalAsset @ 14eae65f0

UNNEDenoiserTemporalAsset * __thiscall
UNNEDenoiserTemporalAsset::UNNEDenoiserTemporalAsset
          (UNNEDenoiserTemporalAsset *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  puVar1 = &(this->ModelData).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNNEDenoiserTemporalAsset__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ModelData).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ModelData).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ModelData).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ModelData).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->InputMapping).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->InputMapping).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->InputMapping).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->InputMapping).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->InputMapping).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->OutputMapping).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->OutputMapping).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->OutputMapping).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->OutputMapping).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OutputMapping).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->TilingConfig).Alignment = 1;
  (this->TilingConfig).Overlap = 0;
  (this->TilingConfig).MaxSize = 0;
  (this->TilingConfig).MinSize = 1;
  return this;
}

// UNNEDenoiserTemporalAsset @ 14eae66b0

UNNEDenoiserTemporalAsset * __thiscall
UNNEDenoiserTemporalAsset::UNNEDenoiserTemporalAsset
          (UNNEDenoiserTemporalAsset *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  puVar1 = &(this->ModelData).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNNEDenoiserTemporalAsset__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ModelData).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ModelData).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ModelData).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ModelData).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->InputMapping).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->InputMapping).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->InputMapping).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->InputMapping).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->InputMapping).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->OutputMapping).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->OutputMapping).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->OutputMapping).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->OutputMapping).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OutputMapping).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->TilingConfig).Alignment = 1;
  (this->TilingConfig).Overlap = 0;
  (this->TilingConfig).MaxSize = 0;
  (this->TilingConfig).MinSize = 1;
  return this;
}

// ~UNNEDenoiserTemporalAsset @ 14eae6f10

void __thiscall
UNNEDenoiserTemporalAsset::~UNNEDenoiserTemporalAsset(UNNEDenoiserTemporalAsset *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNNEDenoiserTemporalAsset__6B_;
  pvVar1 = *(void **)&(this->OutputMapping).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->InputMapping).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->ModelData).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14eaf9ff0

UClass * __cdecl UNNEDenoiserTemporalAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNEDenoiser",L"NNEDenoiserTemporalAsset",
               &Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.InnerSingleton,
               StaticRegisterNativesUNNEDenoiserTemporalAsset,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNNEDenoiserTemporalAsset>,
               InternalVTableHelperCtorCaller<UNNEDenoiserTemporalAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.InnerSingleton;
}

// StaticRegisterNativesUNNEDenoiserTemporalAsset @ 14eafe2e0

void __cdecl UNNEDenoiserTemporalAsset::StaticRegisterNativesUNNEDenoiserTemporalAsset(void)

{
  return;
}

