// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cbcf850

UClass * __cdecl UEraseBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEraseBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EraseBrushOpProps",
               &Z_Registration_Info_UClass_UEraseBrushOpProps.InnerSingleton,
               StaticRegisterNativesUEraseBrushOpProps,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UEraseBrushOpProps>,
               InternalVTableHelperCtorCaller<UEraseBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEraseBrushOpProps.InnerSingleton;
}

// UEraseBrushOpProps @ 14cbdd4e0

UEraseBrushOpProps * __thiscall
UEraseBrushOpProps::UEraseBrushOpProps(UEraseBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UEraseBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  return this;
}

// UEraseBrushOpProps @ 14cbdd530

UEraseBrushOpProps * __thiscall
UEraseBrushOpProps::UEraseBrushOpProps(UEraseBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UEraseBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  return this;
}

// ~UEraseBrushOpProps @ 14cbe0310

void __thiscall UEraseBrushOpProps::~UEraseBrushOpProps(UEraseBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee440

float __thiscall UEraseBrushOpProps::GetFalloff(UEraseBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbef8b0

UClass * __cdecl UEraseBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEraseBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EraseBrushOpProps",
               &Z_Registration_Info_UClass_UEraseBrushOpProps.InnerSingleton,
               StaticRegisterNativesUEraseBrushOpProps,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UEraseBrushOpProps>,
               InternalVTableHelperCtorCaller<UEraseBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEraseBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1bf0

float __thiscall UEraseBrushOpProps::GetStrength(UEraseBrushOpProps *this)

{
  return this->Strength;
}

// SetStrength @ 14cbf3ec0

void __thiscall UEraseBrushOpProps::SetStrength(UEraseBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUEraseBrushOpProps @ 14cbf6b50

void __cdecl UEraseBrushOpProps::StaticRegisterNativesUEraseBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6e90

bool __thiscall UEraseBrushOpProps::SupportsStrengthPressure(UEraseBrushOpProps *this)

{
  return true;
}

