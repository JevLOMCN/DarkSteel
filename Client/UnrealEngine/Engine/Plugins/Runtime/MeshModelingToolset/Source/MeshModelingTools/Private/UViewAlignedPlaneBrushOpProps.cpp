// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 11

// StaticClass @ 14cbd14b0

UClass * __cdecl UViewAlignedPlaneBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ViewAlignedPlaneBrushOpProps",
               &Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.InnerSingleton,
               StaticRegisterNativesUViewAlignedPlaneBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewAlignedPlaneBrushOpProps>,
               InternalVTableHelperCtorCaller<UViewAlignedPlaneBrushOpProps>,local_res8,
               UBasePlaneBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.InnerSingleton;
}

// UViewAlignedPlaneBrushOpProps @ 14cbdf5e0

UViewAlignedPlaneBrushOpProps * __thiscall
UViewAlignedPlaneBrushOpProps::UViewAlignedPlaneBrushOpProps
          (UViewAlignedPlaneBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UViewAlignedPlaneBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->Depth = 0.0;
  this->WhichSide = BothSides;
  return this;
}

// UViewAlignedPlaneBrushOpProps @ 14cbdf630

UViewAlignedPlaneBrushOpProps * __thiscall
UViewAlignedPlaneBrushOpProps::UViewAlignedPlaneBrushOpProps
          (UViewAlignedPlaneBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UViewAlignedPlaneBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->Depth = 0.0;
  this->WhichSide = BothSides;
  return this;
}

// ~UViewAlignedPlaneBrushOpProps @ 14cbe0990

void __thiscall
UViewAlignedPlaneBrushOpProps::~UViewAlignedPlaneBrushOpProps(UViewAlignedPlaneBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetDepth @ 14cbee430

float __thiscall UViewAlignedPlaneBrushOpProps::GetDepth(UViewAlignedPlaneBrushOpProps *this)

{
  return this->Depth;
}

// GetFalloff @ 14cbee580

float __thiscall UViewAlignedPlaneBrushOpProps::GetFalloff(UViewAlignedPlaneBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbf1a60

UClass * __cdecl UViewAlignedPlaneBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ViewAlignedPlaneBrushOpProps",
               &Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.InnerSingleton,
               StaticRegisterNativesUViewAlignedPlaneBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewAlignedPlaneBrushOpProps>,
               InternalVTableHelperCtorCaller<UViewAlignedPlaneBrushOpProps>,local_res8,
               UBasePlaneBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1d00

float __thiscall UViewAlignedPlaneBrushOpProps::GetStrength(UViewAlignedPlaneBrushOpProps *this)

{
  return this->Strength;
}

// GetWhichSide @ 14cbf20b0

EPlaneBrushSideMode __thiscall
UViewAlignedPlaneBrushOpProps::GetWhichSide(UViewAlignedPlaneBrushOpProps *this)

{
  return this->WhichSide;
}

// SetStrength @ 14cbf4140

void __thiscall
UViewAlignedPlaneBrushOpProps::SetStrength(UViewAlignedPlaneBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUViewAlignedPlaneBrushOpProps @ 14cbf6e50

void __cdecl UViewAlignedPlaneBrushOpProps::StaticRegisterNativesUViewAlignedPlaneBrushOpProps(void)

{
  return;
}

