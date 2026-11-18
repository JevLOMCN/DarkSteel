// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cbd2670

UClass * __cdecl USculptMaxBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USculptMaxBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SculptMaxBrushOpProps",
               &Z_Registration_Info_UClass_USculptMaxBrushOpProps.InnerSingleton,
               StaticRegisterNativesUSculptMaxBrushOpProps,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USculptMaxBrushOpProps>,
               InternalVTableHelperCtorCaller<USculptMaxBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USculptMaxBrushOpProps.InnerSingleton;
}

// USculptMaxBrushOpProps @ 14cbdee20

USculptMaxBrushOpProps * __thiscall
USculptMaxBrushOpProps::USculptMaxBrushOpProps(USculptMaxBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7USculptMaxBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->MaxHeight = 0.5;
  this->bUseFixedHeight = false;
  this->FixedHeight = 0.0;
  return this;
}

// USculptMaxBrushOpProps @ 14cbdee80

USculptMaxBrushOpProps * __thiscall
USculptMaxBrushOpProps::USculptMaxBrushOpProps
          (USculptMaxBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7USculptMaxBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->MaxHeight = 0.5;
  this->bUseFixedHeight = false;
  this->FixedHeight = 0.0;
  return this;
}

// ~USculptMaxBrushOpProps @ 14cbe0830

void __thiscall USculptMaxBrushOpProps::~USculptMaxBrushOpProps(USculptMaxBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee4f0

float __thiscall USculptMaxBrushOpProps::GetFalloff(USculptMaxBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbf1220

UClass * __cdecl USculptMaxBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USculptMaxBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SculptMaxBrushOpProps",
               &Z_Registration_Info_UClass_USculptMaxBrushOpProps.InnerSingleton,
               StaticRegisterNativesUSculptMaxBrushOpProps,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USculptMaxBrushOpProps>,
               InternalVTableHelperCtorCaller<USculptMaxBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USculptMaxBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1c90

float __thiscall USculptMaxBrushOpProps::GetStrength(USculptMaxBrushOpProps *this)

{
  return this->Strength;
}

// SetStrength @ 14cbf4020

void __thiscall USculptMaxBrushOpProps::SetStrength(USculptMaxBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUSculptMaxBrushOpProps @ 14cbf6da0

void __cdecl USculptMaxBrushOpProps::StaticRegisterNativesUSculptMaxBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6f10

bool __thiscall USculptMaxBrushOpProps::SupportsStrengthPressure(USculptMaxBrushOpProps *this)

{
  return true;
}

