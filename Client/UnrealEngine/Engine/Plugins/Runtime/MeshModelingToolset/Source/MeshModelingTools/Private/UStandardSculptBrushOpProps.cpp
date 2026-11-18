// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cbd1df0

UClass * __cdecl UStandardSculptBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStandardSculptBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"StandardSculptBrushOpProps",
               &Z_Registration_Info_UClass_UStandardSculptBrushOpProps.InnerSingleton,
               StaticRegisterNativesUStandardSculptBrushOpProps,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UStandardSculptBrushOpProps>,
               InternalVTableHelperCtorCaller<UStandardSculptBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStandardSculptBrushOpProps.InnerSingleton;
}

// UStandardSculptBrushOpProps @ 14cbdf180

UStandardSculptBrushOpProps * __thiscall
UStandardSculptBrushOpProps::UStandardSculptBrushOpProps
          (UStandardSculptBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UStandardSculptBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 1.0;
  return this;
}

// UStandardSculptBrushOpProps @ 14cbdf1d0

UStandardSculptBrushOpProps * __thiscall
UStandardSculptBrushOpProps::UStandardSculptBrushOpProps
          (UStandardSculptBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UStandardSculptBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 1.0;
  return this;
}

// ~UStandardSculptBrushOpProps @ 14cbe08d0

void __thiscall
UStandardSculptBrushOpProps::~UStandardSculptBrushOpProps(UStandardSculptBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee540

float __thiscall UStandardSculptBrushOpProps::GetFalloff(UStandardSculptBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbf15e0

UClass * __cdecl UStandardSculptBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStandardSculptBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"StandardSculptBrushOpProps",
               &Z_Registration_Info_UClass_UStandardSculptBrushOpProps.InnerSingleton,
               StaticRegisterNativesUStandardSculptBrushOpProps,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UStandardSculptBrushOpProps>,
               InternalVTableHelperCtorCaller<UStandardSculptBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStandardSculptBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1cd0

float __thiscall UStandardSculptBrushOpProps::GetStrength(UStandardSculptBrushOpProps *this)

{
  return this->Strength;
}

// SetStrength @ 14cbf40e0

void __thiscall
UStandardSculptBrushOpProps::SetStrength(UStandardSculptBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUStandardSculptBrushOpProps @ 14cbf6df0

void __cdecl UStandardSculptBrushOpProps::StaticRegisterNativesUStandardSculptBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6f20

bool __thiscall
UStandardSculptBrushOpProps::SupportsStrengthPressure(UStandardSculptBrushOpProps *this)

{
  return true;
}

