// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 11

// StaticClass @ 14cbd01e0

UClass * __cdecl UVertexColorBaseBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexColorBaseBrushOpProps",
               &Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.InnerSingleton,
               StaticRegisterNativesUVertexColorBaseBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexColorBaseBrushOpProps>,
               InternalVTableHelperCtorCaller<UVertexColorBaseBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.InnerSingleton;
}

// UVertexColorBaseBrushOpProps @ 14cbdf2e0

UVertexColorBaseBrushOpProps * __thiscall
UVertexColorBaseBrushOpProps::UVertexColorBaseBrushOpProps
          (UVertexColorBaseBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UVertexColorBaseBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 1.0;
  this->BlendMode = Mix;
  this->bApplyFalloff = true;
  return this;
}

// UVertexColorBaseBrushOpProps @ 14cbdf340

UVertexColorBaseBrushOpProps * __thiscall
UVertexColorBaseBrushOpProps::UVertexColorBaseBrushOpProps
          (UVertexColorBaseBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UVertexColorBaseBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 1.0;
  this->BlendMode = Mix;
  this->bApplyFalloff = true;
  return this;
}

// ~UVertexColorBaseBrushOpProps @ 14cbe0910

void __thiscall
UVertexColorBaseBrushOpProps::~UVertexColorBaseBrushOpProps(UVertexColorBaseBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee560

float __thiscall UVertexColorBaseBrushOpProps::GetFalloff(UVertexColorBaseBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbf1760

UClass * __cdecl UVertexColorBaseBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexColorBaseBrushOpProps",
               &Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.InnerSingleton,
               StaticRegisterNativesUVertexColorBaseBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexColorBaseBrushOpProps>,
               InternalVTableHelperCtorCaller<UVertexColorBaseBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1cf0

float __thiscall UVertexColorBaseBrushOpProps::GetStrength(UVertexColorBaseBrushOpProps *this)

{
  return this->Strength;
}

// SetFalloff @ 14cbf3910

void __thiscall
UVertexColorBaseBrushOpProps::SetFalloff(UVertexColorBaseBrushOpProps *this,float param_1)

{
  if (param_1 < 0.0) {
    this->Falloff = 0.0;
    return;
  }
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  this->Falloff = param_1;
  return;
}

// SetStrength @ 14cbf4110

void __thiscall
UVertexColorBaseBrushOpProps::SetStrength(UVertexColorBaseBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUVertexColorBaseBrushOpProps @ 14cbf6e10

void __cdecl UVertexColorBaseBrushOpProps::StaticRegisterNativesUVertexColorBaseBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6f40

bool __thiscall
UVertexColorBaseBrushOpProps::SupportsStrengthPressure(UVertexColorBaseBrushOpProps *this)

{
  return true;
}

