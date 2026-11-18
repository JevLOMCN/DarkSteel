// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cbce590

UClass * __cdecl USmoothFillBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothFillBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothFillBrushOpProps",
               &Z_Registration_Info_UClass_USmoothFillBrushOpProps.InnerSingleton,
               StaticRegisterNativesUSmoothFillBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USmoothFillBrushOpProps>,
               InternalVTableHelperCtorCaller<USmoothFillBrushOpProps>,local_res8,
               UBaseSmoothBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothFillBrushOpProps.InnerSingleton;
}

// USmoothFillBrushOpProps @ 14cbdf0e0

USmoothFillBrushOpProps * __thiscall
USmoothFillBrushOpProps::USmoothFillBrushOpProps
          (USmoothFillBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7USmoothFillBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->bPreserveUVFlow = false;
  return this;
}

// USmoothFillBrushOpProps @ 14cbdf130

USmoothFillBrushOpProps * __thiscall
USmoothFillBrushOpProps::USmoothFillBrushOpProps
          (USmoothFillBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7USmoothFillBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->bPreserveUVFlow = false;
  return this;
}

// ~USmoothFillBrushOpProps @ 14cbe08b0

void __thiscall USmoothFillBrushOpProps::~USmoothFillBrushOpProps(USmoothFillBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee530

float __thiscall USmoothFillBrushOpProps::GetFalloff(USmoothFillBrushOpProps *this)

{
  return this->Falloff;
}

// GetPreserveUVFlow @ 14cbee6b0

bool __thiscall USmoothFillBrushOpProps::GetPreserveUVFlow(USmoothFillBrushOpProps *this)

{
  return this->bPreserveUVFlow;
}

// GetPrivateStaticClass @ 14cbf1520

UClass * __cdecl USmoothFillBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothFillBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothFillBrushOpProps",
               &Z_Registration_Info_UClass_USmoothFillBrushOpProps.InnerSingleton,
               StaticRegisterNativesUSmoothFillBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USmoothFillBrushOpProps>,
               InternalVTableHelperCtorCaller<USmoothFillBrushOpProps>,local_res8,
               UBaseSmoothBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothFillBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1cc0

float __thiscall USmoothFillBrushOpProps::GetStrength(USmoothFillBrushOpProps *this)

{
  return this->Strength;
}

// SetStrength @ 14cbf40b0

void __thiscall USmoothFillBrushOpProps::SetStrength(USmoothFillBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUSmoothFillBrushOpProps @ 14cbf6de0

void __cdecl USmoothFillBrushOpProps::StaticRegisterNativesUSmoothFillBrushOpProps(void)

{
  return;
}

