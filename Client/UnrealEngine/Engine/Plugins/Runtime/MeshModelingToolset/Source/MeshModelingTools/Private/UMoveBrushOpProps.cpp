// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 11

// StaticClass @ 14cbd0b30

UClass * __cdecl UMoveBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoveBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MoveBrushOpProps",
               &Z_Registration_Info_UClass_UMoveBrushOpProps.InnerSingleton,
               StaticRegisterNativesUMoveBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoveBrushOpProps>,
               InternalVTableHelperCtorCaller<UMoveBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoveBrushOpProps.InnerSingleton;
}

// UMoveBrushOpProps @ 14cbddca0

UMoveBrushOpProps * __thiscall
UMoveBrushOpProps::UMoveBrushOpProps(UMoveBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UMoveBrushOpProps__6B_;
  this->Strength = 1.0;
  this->Falloff = 0.5;
  this->Depth = 0.0;
  (this->AxisFilters).bAxisX = true;
  (this->AxisFilters).bAxisY = true;
  (this->AxisFilters).bAxisZ = true;
  return this;
}

// UMoveBrushOpProps @ 14cbddd00

UMoveBrushOpProps * __thiscall
UMoveBrushOpProps::UMoveBrushOpProps(UMoveBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UMoveBrushOpProps__6B_;
  this->Strength = 1.0;
  this->Falloff = 0.5;
  this->Depth = 0.0;
  (this->AxisFilters).bAxisX = true;
  (this->AxisFilters).bAxisY = true;
  (this->AxisFilters).bAxisZ = true;
  return this;
}

// ~UMoveBrushOpProps @ 14cbe0530

void __thiscall UMoveBrushOpProps::~UMoveBrushOpProps(UMoveBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetDepth @ 14cbee3e0

float __thiscall UMoveBrushOpProps::GetDepth(UMoveBrushOpProps *this)

{
  return this->Depth;
}

// GetFalloff @ 14cbee4a0

float __thiscall UMoveBrushOpProps::GetFalloff(UMoveBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbf03f0

UClass * __cdecl UMoveBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoveBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MoveBrushOpProps",
               &Z_Registration_Info_UClass_UMoveBrushOpProps.InnerSingleton,
               StaticRegisterNativesUMoveBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoveBrushOpProps>,
               InternalVTableHelperCtorCaller<UMoveBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoveBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1c50

float __thiscall UMoveBrushOpProps::GetStrength(UMoveBrushOpProps *this)

{
  return this->Strength;
}

// SetStrength @ 14cbf3f90

void __thiscall UMoveBrushOpProps::SetStrength(UMoveBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUMoveBrushOpProps @ 14cbf6c70

void __cdecl UMoveBrushOpProps::StaticRegisterNativesUMoveBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6ee0

bool __thiscall UMoveBrushOpProps::SupportsStrengthPressure(UMoveBrushOpProps *this)

{
  return true;
}

