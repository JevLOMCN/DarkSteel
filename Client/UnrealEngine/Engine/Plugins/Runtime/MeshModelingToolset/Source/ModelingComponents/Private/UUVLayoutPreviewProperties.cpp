// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14cab06c0

UClass * __cdecl UUVLayoutPreviewProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutPreviewProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"UVLayoutPreviewProperties",
               &Z_Registration_Info_UClass_UUVLayoutPreviewProperties.InnerSingleton,
               StaticRegisterNativesUUVLayoutPreviewProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVLayoutPreviewProperties>,
               InternalVTableHelperCtorCaller<UUVLayoutPreviewProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutPreviewProperties.InnerSingleton;
}

// UUVLayoutPreviewProperties @ 14cacffe0

UUVLayoutPreviewProperties * __thiscall
UUVLayoutPreviewProperties::UUVLayoutPreviewProperties
          (UUVLayoutPreviewProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bEnabled = true;
  this->_padding_ = (longlong)&___7UUVLayoutPreviewProperties__6B_;
  (this->Offset).field0_0x0._s_0.X = 1.0;
  (this->Offset).field0_0x0._s_0.Y = 0.5;
  this->Side = Right;
  this->Scale = 1.0;
  this->bShowWireframe = true;
  return this;
}

// UUVLayoutPreviewProperties @ 14cad0050

UUVLayoutPreviewProperties * __thiscall
UUVLayoutPreviewProperties::UUVLayoutPreviewProperties
          (UUVLayoutPreviewProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bEnabled = true;
  this->_padding_ = (longlong)&___7UUVLayoutPreviewProperties__6B_;
  (this->Offset).field0_0x0._s_0.X = 1.0;
  (this->Offset).field0_0x0._s_0.Y = 0.5;
  this->Side = Right;
  this->Scale = 1.0;
  this->bShowWireframe = true;
  return this;
}

// ~UUVLayoutPreviewProperties @ 14cad2ed0

void __thiscall
UUVLayoutPreviewProperties::~UUVLayoutPreviewProperties(UUVLayoutPreviewProperties *this)

{
  this->_padding_ = (longlong)&___7UUVLayoutPreviewProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cb133e0

UClass * __cdecl UUVLayoutPreviewProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutPreviewProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"UVLayoutPreviewProperties",
               &Z_Registration_Info_UClass_UUVLayoutPreviewProperties.InnerSingleton,
               StaticRegisterNativesUUVLayoutPreviewProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVLayoutPreviewProperties>,
               InternalVTableHelperCtorCaller<UUVLayoutPreviewProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutPreviewProperties.InnerSingleton;
}

// StaticRegisterNativesUUVLayoutPreviewProperties @ 14cb3ecf0

void __cdecl UUVLayoutPreviewProperties::StaticRegisterNativesUUVLayoutPreviewProperties(void)

{
  return;
}

