// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 11

// StaticClass @ 14cbd16f0

UClass * __cdecl UFixedPlaneBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"FixedPlaneBrushOpProps",
               &Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.InnerSingleton,
               StaticRegisterNativesUFixedPlaneBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UFixedPlaneBrushOpProps>,
               InternalVTableHelperCtorCaller<UFixedPlaneBrushOpProps>,local_res8,
               UBasePlaneBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.InnerSingleton;
}

// UFixedPlaneBrushOpProps @ 14cbdd620

UFixedPlaneBrushOpProps * __thiscall
UFixedPlaneBrushOpProps::UFixedPlaneBrushOpProps
          (UFixedPlaneBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UFixedPlaneBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->Depth = 0.0;
  this->WhichSide = BothSides;
  return this;
}

// UFixedPlaneBrushOpProps @ 14cbdd670

UFixedPlaneBrushOpProps * __thiscall
UFixedPlaneBrushOpProps::UFixedPlaneBrushOpProps
          (UFixedPlaneBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UFixedPlaneBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->Depth = 0.0;
  this->WhichSide = BothSides;
  return this;
}

// ~UFixedPlaneBrushOpProps @ 14cbe0350

void __thiscall UFixedPlaneBrushOpProps::~UFixedPlaneBrushOpProps(UFixedPlaneBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetDepth @ 14cbee3b0

float __thiscall UFixedPlaneBrushOpProps::GetDepth(UFixedPlaneBrushOpProps *this)

{
  return this->Depth;
}

// GetFalloff @ 14cbee460

float __thiscall UFixedPlaneBrushOpProps::GetFalloff(UFixedPlaneBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbefa30

UClass * __cdecl UFixedPlaneBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"FixedPlaneBrushOpProps",
               &Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.InnerSingleton,
               StaticRegisterNativesUFixedPlaneBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UFixedPlaneBrushOpProps>,
               InternalVTableHelperCtorCaller<UFixedPlaneBrushOpProps>,local_res8,
               UBasePlaneBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1c10

float __thiscall UFixedPlaneBrushOpProps::GetStrength(UFixedPlaneBrushOpProps *this)

{
  return this->Strength;
}

// GetWhichSide @ 14cbf2090

EPlaneBrushSideMode __thiscall UFixedPlaneBrushOpProps::GetWhichSide(UFixedPlaneBrushOpProps *this)

{
  return this->WhichSide;
}

// SetStrength @ 14cbf3ef0

void __thiscall UFixedPlaneBrushOpProps::SetStrength(UFixedPlaneBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUFixedPlaneBrushOpProps @ 14cbf6b70

void __cdecl UFixedPlaneBrushOpProps::StaticRegisterNativesUFixedPlaneBrushOpProps(void)

{
  return;
}

