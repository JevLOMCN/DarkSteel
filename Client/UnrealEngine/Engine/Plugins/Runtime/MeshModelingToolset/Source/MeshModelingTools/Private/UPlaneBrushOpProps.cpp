// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 11

// StaticClass @ 14cbd1270

UClass * __cdecl UPlaneBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlaneBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PlaneBrushOpProps",
               &Z_Registration_Info_UClass_UPlaneBrushOpProps.InnerSingleton,
               StaticRegisterNativesUPlaneBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlaneBrushOpProps>,
               InternalVTableHelperCtorCaller<UPlaneBrushOpProps>,local_res8,
               UBasePlaneBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlaneBrushOpProps.InnerSingleton;
}

// UPlaneBrushOpProps @ 14cbdde00

UPlaneBrushOpProps * __thiscall
UPlaneBrushOpProps::UPlaneBrushOpProps(UPlaneBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UPlaneBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->Depth = 0.0;
  this->WhichSide = BothSides;
  return this;
}

// UPlaneBrushOpProps @ 14cbdde50

UPlaneBrushOpProps * __thiscall
UPlaneBrushOpProps::UPlaneBrushOpProps(UPlaneBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UPlaneBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->Depth = 0.0;
  this->WhichSide = BothSides;
  return this;
}

// ~UPlaneBrushOpProps @ 14cbe0570

void __thiscall UPlaneBrushOpProps::~UPlaneBrushOpProps(UPlaneBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetDepth @ 14cbee400

float __thiscall UPlaneBrushOpProps::GetDepth(UPlaneBrushOpProps *this)

{
  return this->Depth;
}

// GetFalloff @ 14cbee4c0

float __thiscall UPlaneBrushOpProps::GetFalloff(UPlaneBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbf0570

UClass * __cdecl UPlaneBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlaneBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PlaneBrushOpProps",
               &Z_Registration_Info_UClass_UPlaneBrushOpProps.InnerSingleton,
               StaticRegisterNativesUPlaneBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlaneBrushOpProps>,
               InternalVTableHelperCtorCaller<UPlaneBrushOpProps>,local_res8,
               UBasePlaneBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlaneBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1c70

float __thiscall UPlaneBrushOpProps::GetStrength(UPlaneBrushOpProps *this)

{
  return this->Strength;
}

// GetWhichSide @ 14cbf20a0

EPlaneBrushSideMode __thiscall UPlaneBrushOpProps::GetWhichSide(UPlaneBrushOpProps *this)

{
  return this->WhichSide;
}

// SetStrength @ 14cbf3ff0

void __thiscall UPlaneBrushOpProps::SetStrength(UPlaneBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUPlaneBrushOpProps @ 14cbf6c90

void __cdecl UPlaneBrushOpProps::StaticRegisterNativesUPlaneBrushOpProps(void)

{
  return;
}

