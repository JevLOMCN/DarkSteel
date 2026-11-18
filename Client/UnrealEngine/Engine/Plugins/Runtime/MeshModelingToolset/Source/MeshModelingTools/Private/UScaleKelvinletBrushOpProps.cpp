// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cbd2b00

UClass * __cdecl UScaleKelvinletBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ScaleKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.InnerSingleton,
               StaticRegisterNativesUScaleKelvinletBrushOpProps,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UScaleKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<UScaleKelvinletBrushOpProps>,local_res8,
               UBaseKelvinletBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.InnerSingleton;
}

// UScaleKelvinletBrushOpProps @ 14cbded60

UScaleKelvinletBrushOpProps * __thiscall
UScaleKelvinletBrushOpProps::UScaleKelvinletBrushOpProps
          (UScaleKelvinletBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UScaleKelvinletBrushOpProps__6B_;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 3;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  return this;
}

// UScaleKelvinletBrushOpProps @ 14cbdedc0

UScaleKelvinletBrushOpProps * __thiscall
UScaleKelvinletBrushOpProps::UScaleKelvinletBrushOpProps
          (UScaleKelvinletBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UScaleKelvinletBrushOpProps__6B_;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 3;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  return this;
}

// ~UScaleKelvinletBrushOpProps @ 14cbe0810

void __thiscall
UScaleKelvinletBrushOpProps::~UScaleKelvinletBrushOpProps(UScaleKelvinletBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee4e0

float __thiscall UScaleKelvinletBrushOpProps::GetFalloff(UScaleKelvinletBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbf1160

UClass * __cdecl UScaleKelvinletBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ScaleKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.InnerSingleton,
               StaticRegisterNativesUScaleKelvinletBrushOpProps,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UScaleKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<UScaleKelvinletBrushOpProps>,local_res8,
               UBaseKelvinletBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1c80

float __thiscall UScaleKelvinletBrushOpProps::GetStrength(UScaleKelvinletBrushOpProps *this)

{
  return this->Strength;
}

// StaticRegisterNativesUScaleKelvinletBrushOpProps @ 14cbf6d90

void __cdecl UScaleKelvinletBrushOpProps::StaticRegisterNativesUScaleKelvinletBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6f00

bool __thiscall
UScaleKelvinletBrushOpProps::SupportsStrengthPressure(UScaleKelvinletBrushOpProps *this)

{
  return true;
}

