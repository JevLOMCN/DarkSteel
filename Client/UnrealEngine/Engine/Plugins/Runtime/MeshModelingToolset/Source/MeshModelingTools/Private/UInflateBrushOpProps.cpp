// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cbd08a0

UClass * __cdecl UInflateBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInflateBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"InflateBrushOpProps",
               &Z_Registration_Info_UClass_UInflateBrushOpProps.InnerSingleton,
               StaticRegisterNativesUInflateBrushOpProps,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInflateBrushOpProps>,
               InternalVTableHelperCtorCaller<UInflateBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInflateBrushOpProps.InnerSingleton;
}

// UInflateBrushOpProps @ 14cbdd8e0

UInflateBrushOpProps * __thiscall
UInflateBrushOpProps::UInflateBrushOpProps(UInflateBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UInflateBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  return this;
}

// UInflateBrushOpProps @ 14cbdd930

UInflateBrushOpProps * __thiscall
UInflateBrushOpProps::UInflateBrushOpProps(UInflateBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UInflateBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  return this;
}

// ~UInflateBrushOpProps @ 14cbe0410

void __thiscall UInflateBrushOpProps::~UInflateBrushOpProps(UInflateBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee480

float __thiscall UInflateBrushOpProps::GetFalloff(UInflateBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbefd30

UClass * __cdecl UInflateBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInflateBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"InflateBrushOpProps",
               &Z_Registration_Info_UClass_UInflateBrushOpProps.InnerSingleton,
               StaticRegisterNativesUInflateBrushOpProps,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInflateBrushOpProps>,
               InternalVTableHelperCtorCaller<UInflateBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInflateBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1c30

float __thiscall UInflateBrushOpProps::GetStrength(UInflateBrushOpProps *this)

{
  return this->Strength;
}

// SetStrength @ 14cbf3f50

void __thiscall UInflateBrushOpProps::SetStrength(UInflateBrushOpProps *this,float param_1)

{
  if (param_1 < 0.0) {
    this->Strength = 0.0;
    return;
  }
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  this->Strength = param_1;
  return;
}

// StaticRegisterNativesUInflateBrushOpProps @ 14cbf6bb0

void __cdecl UInflateBrushOpProps::StaticRegisterNativesUInflateBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6ec0

bool __thiscall UInflateBrushOpProps::SupportsStrengthPressure(UInflateBrushOpProps *this)

{
  return true;
}

