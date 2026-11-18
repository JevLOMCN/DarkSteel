// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 11

// StaticClass @ 14cbd0fe0

UClass * __cdecl UPinchBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPinchBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PinchBrushOpProps",
               &Z_Registration_Info_UClass_UPinchBrushOpProps.InnerSingleton,
               StaticRegisterNativesUPinchBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPinchBrushOpProps>,
               InternalVTableHelperCtorCaller<UPinchBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPinchBrushOpProps.InnerSingleton;
}

// UPinchBrushOpProps @ 14cbddd60

UPinchBrushOpProps * __thiscall
UPinchBrushOpProps::UPinchBrushOpProps(UPinchBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UPinchBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.75;
  this->Depth = 0.0;
  this->bPerpDamping = true;
  return this;
}

// UPinchBrushOpProps @ 14cbdddb0

UPinchBrushOpProps * __thiscall
UPinchBrushOpProps::UPinchBrushOpProps(UPinchBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UPinchBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.75;
  this->Depth = 0.0;
  this->bPerpDamping = true;
  return this;
}

// ~UPinchBrushOpProps @ 14cbe0550

void __thiscall UPinchBrushOpProps::~UPinchBrushOpProps(UPinchBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetDepth @ 14cbee3f0

float __thiscall UPinchBrushOpProps::GetDepth(UPinchBrushOpProps *this)

{
  return this->Depth;
}

// GetFalloff @ 14cbee4b0

float __thiscall UPinchBrushOpProps::GetFalloff(UPinchBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbf04b0

UClass * __cdecl UPinchBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPinchBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PinchBrushOpProps",
               &Z_Registration_Info_UClass_UPinchBrushOpProps.InnerSingleton,
               StaticRegisterNativesUPinchBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPinchBrushOpProps>,
               InternalVTableHelperCtorCaller<UPinchBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPinchBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1c60

float __thiscall UPinchBrushOpProps::GetStrength(UPinchBrushOpProps *this)

{
  return this->Strength;
}

// SetStrength @ 14cbf3fc0

void __thiscall UPinchBrushOpProps::SetStrength(UPinchBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUPinchBrushOpProps @ 14cbf6c80

void __cdecl UPinchBrushOpProps::StaticRegisterNativesUPinchBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6ef0

bool __thiscall UPinchBrushOpProps::SupportsStrengthPressure(UPinchBrushOpProps *this)

{
  return true;
}

