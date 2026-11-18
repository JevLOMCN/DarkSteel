// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 8

// StaticClass @ 14c9406f0

UClass * __cdecl UUVEditorTexelDensitySettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVEditorTexelDensitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"UVEditorTexelDensitySettings",
               &Z_Registration_Info_UClass_UUVEditorTexelDensitySettings.InnerSingleton,
               StaticRegisterNativesUUVEditorTexelDensitySettings,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVEditorTexelDensitySettings>,
               InternalVTableHelperCtorCaller<UUVEditorTexelDensitySettings>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVEditorTexelDensitySettings.InnerSingleton;
}

// UUVEditorTexelDensitySettings @ 14c9485f0

UUVEditorTexelDensitySettings * __thiscall
UUVEditorTexelDensitySettings::UUVEditorTexelDensitySettings
          (UUVEditorTexelDensitySettings *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->TexelDensityMode = ApplyToIslands;
  this->_padding_ = (longlong)&___7UUVEditorTexelDensitySettings__6B_;
  this->TargetWorldUnits = 100.0;
  this->TargetPixelCount = 1024.0;
  this->TextureResolution = 1024.0;
  this->bEnableUDIMLayout = false;
  return this;
}

// UUVEditorTexelDensitySettings @ 14c948650

UUVEditorTexelDensitySettings * __thiscall
UUVEditorTexelDensitySettings::UUVEditorTexelDensitySettings
          (UUVEditorTexelDensitySettings *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->TexelDensityMode = ApplyToIslands;
  this->_padding_ = (longlong)&___7UUVEditorTexelDensitySettings__6B_;
  this->TargetWorldUnits = 100.0;
  this->TargetPixelCount = 1024.0;
  this->TextureResolution = 1024.0;
  this->bEnableUDIMLayout = false;
  return this;
}

// ~UUVEditorTexelDensitySettings @ 14c949b80

void __thiscall
UUVEditorTexelDensitySettings::~UUVEditorTexelDensitySettings(UUVEditorTexelDensitySettings *this)

{
  this->_padding_ = (longlong)&___7UUVEditorTexelDensitySettings__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14c97ffd0

UClass * __cdecl UUVEditorTexelDensitySettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVEditorTexelDensitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"UVEditorTexelDensitySettings",
               &Z_Registration_Info_UClass_UUVEditorTexelDensitySettings.InnerSingleton,
               StaticRegisterNativesUUVEditorTexelDensitySettings,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVEditorTexelDensitySettings>,
               InternalVTableHelperCtorCaller<UUVEditorTexelDensitySettings>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVEditorTexelDensitySettings.InnerSingleton;
}

// InSamplingMode @ 14c980f60

bool __thiscall UUVEditorTexelDensitySettings::InSamplingMode(UUVEditorTexelDensitySettings *this)

{
  return true;
}

// StaticRegisterNativesUUVEditorTexelDensitySettings @ 14c986ba0

void __cdecl UUVEditorTexelDensitySettings::StaticRegisterNativesUUVEditorTexelDensitySettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execInSamplingMode @ 14c9898d0

void __cdecl
UUVEditorTexelDensitySettings::execInSamplingMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

