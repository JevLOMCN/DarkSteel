// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cbce190

UClass * __cdecl UTwistKelvinletBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"TwistKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.InnerSingleton,
               StaticRegisterNativesUTwistKelvinletBrushOpProps,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTwistKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<UTwistKelvinletBrushOpProps>,local_res8,
               UBaseKelvinletBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.InnerSingleton;
}

// UTwistKelvinletBrushOpProps @ 14cbdf220

UTwistKelvinletBrushOpProps * __thiscall
UTwistKelvinletBrushOpProps::UTwistKelvinletBrushOpProps
          (UTwistKelvinletBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UTwistKelvinletBrushOpProps__6B_;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 3;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  return this;
}

// UTwistKelvinletBrushOpProps @ 14cbdf280

UTwistKelvinletBrushOpProps * __thiscall
UTwistKelvinletBrushOpProps::UTwistKelvinletBrushOpProps
          (UTwistKelvinletBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UTwistKelvinletBrushOpProps__6B_;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 3;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  return this;
}

// ~UTwistKelvinletBrushOpProps @ 14cbe08f0

void __thiscall
UTwistKelvinletBrushOpProps::~UTwistKelvinletBrushOpProps(UTwistKelvinletBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee550

float __thiscall UTwistKelvinletBrushOpProps::GetFalloff(UTwistKelvinletBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbf16a0

UClass * __cdecl UTwistKelvinletBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"TwistKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.InnerSingleton,
               StaticRegisterNativesUTwistKelvinletBrushOpProps,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTwistKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<UTwistKelvinletBrushOpProps>,local_res8,
               UBaseKelvinletBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1ce0

float __thiscall UTwistKelvinletBrushOpProps::GetStrength(UTwistKelvinletBrushOpProps *this)

{
  return this->Strength;
}

// StaticRegisterNativesUTwistKelvinletBrushOpProps @ 14cbf6e00

void __cdecl UTwistKelvinletBrushOpProps::StaticRegisterNativesUTwistKelvinletBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6f30

bool __thiscall
UTwistKelvinletBrushOpProps::SupportsStrengthPressure(UTwistKelvinletBrushOpProps *this)

{
  return true;
}

