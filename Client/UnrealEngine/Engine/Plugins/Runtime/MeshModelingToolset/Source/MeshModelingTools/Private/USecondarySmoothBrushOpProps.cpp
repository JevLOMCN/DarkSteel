// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cbd32d0

UClass * __cdecl USecondarySmoothBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SecondarySmoothBrushOpProps",
               &Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.InnerSingleton,
               StaticRegisterNativesUSecondarySmoothBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USecondarySmoothBrushOpProps>,
               InternalVTableHelperCtorCaller<USecondarySmoothBrushOpProps>,local_res8,
               UBaseSmoothBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.InnerSingleton;
}

// USecondarySmoothBrushOpProps @ 14cbdeee0

USecondarySmoothBrushOpProps * __thiscall
USecondarySmoothBrushOpProps::USecondarySmoothBrushOpProps
          (USecondarySmoothBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7USecondarySmoothBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->bPreserveUVFlow = false;
  return this;
}

// USecondarySmoothBrushOpProps @ 14cbdef30

USecondarySmoothBrushOpProps * __thiscall
USecondarySmoothBrushOpProps::USecondarySmoothBrushOpProps
          (USecondarySmoothBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7USecondarySmoothBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->bPreserveUVFlow = false;
  return this;
}

// ~USecondarySmoothBrushOpProps @ 14cbe0850

void __thiscall
USecondarySmoothBrushOpProps::~USecondarySmoothBrushOpProps(USecondarySmoothBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee500

float __thiscall USecondarySmoothBrushOpProps::GetFalloff(USecondarySmoothBrushOpProps *this)

{
  return this->Falloff;
}

// GetPreserveUVFlow @ 14cbee690

bool __thiscall USecondarySmoothBrushOpProps::GetPreserveUVFlow(USecondarySmoothBrushOpProps *this)

{
  return this->bPreserveUVFlow;
}

// GetPrivateStaticClass @ 14cbf12e0

UClass * __cdecl USecondarySmoothBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SecondarySmoothBrushOpProps",
               &Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.InnerSingleton,
               StaticRegisterNativesUSecondarySmoothBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USecondarySmoothBrushOpProps>,
               InternalVTableHelperCtorCaller<USecondarySmoothBrushOpProps>,local_res8,
               UBaseSmoothBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1ca0

float __thiscall USecondarySmoothBrushOpProps::GetStrength(USecondarySmoothBrushOpProps *this)

{
  return this->Strength;
}

// SetStrength @ 14cbf4050

void __thiscall
USecondarySmoothBrushOpProps::SetStrength(USecondarySmoothBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUSecondarySmoothBrushOpProps @ 14cbf6db0

void __cdecl USecondarySmoothBrushOpProps::StaticRegisterNativesUSecondarySmoothBrushOpProps(void)

{
  return;
}

