// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cbd3090

UClass * __cdecl USmoothBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothBrushOpProps",
               &Z_Registration_Info_UClass_USmoothBrushOpProps.InnerSingleton,
               StaticRegisterNativesUSmoothBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USmoothBrushOpProps>,
               InternalVTableHelperCtorCaller<USmoothBrushOpProps>,local_res8,
               UBaseSmoothBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothBrushOpProps.InnerSingleton;
}

// USmoothBrushOpProps @ 14cbdf040

USmoothBrushOpProps * __thiscall
USmoothBrushOpProps::USmoothBrushOpProps(USmoothBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7USmoothBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->bPreserveUVFlow = false;
  return this;
}

// USmoothBrushOpProps @ 14cbdf090

USmoothBrushOpProps * __thiscall
USmoothBrushOpProps::USmoothBrushOpProps(USmoothBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7USmoothBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->bPreserveUVFlow = false;
  return this;
}

// ~USmoothBrushOpProps @ 14cbe0890

void __thiscall USmoothBrushOpProps::~USmoothBrushOpProps(USmoothBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee520

float __thiscall USmoothBrushOpProps::GetFalloff(USmoothBrushOpProps *this)

{
  return this->Falloff;
}

// GetPreserveUVFlow @ 14cbee6a0

bool __thiscall USmoothBrushOpProps::GetPreserveUVFlow(USmoothBrushOpProps *this)

{
  return this->bPreserveUVFlow;
}

// GetPrivateStaticClass @ 14cbf1460

UClass * __cdecl USmoothBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothBrushOpProps",
               &Z_Registration_Info_UClass_USmoothBrushOpProps.InnerSingleton,
               StaticRegisterNativesUSmoothBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USmoothBrushOpProps>,
               InternalVTableHelperCtorCaller<USmoothBrushOpProps>,local_res8,
               UBaseSmoothBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1cb0

float __thiscall USmoothBrushOpProps::GetStrength(USmoothBrushOpProps *this)

{
  return this->Strength;
}

// SetStrength @ 14cbf4080

void __thiscall USmoothBrushOpProps::SetStrength(USmoothBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUSmoothBrushOpProps @ 14cbf6dd0

void __cdecl USmoothBrushOpProps::StaticRegisterNativesUSmoothBrushOpProps(void)

{
  return;
}

