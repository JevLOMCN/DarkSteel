// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 11

// StaticClass @ 14cbcf400

UClass * __cdecl UFlattenBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFlattenBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"FlattenBrushOpProps",
               &Z_Registration_Info_UClass_UFlattenBrushOpProps.InnerSingleton,
               StaticRegisterNativesUFlattenBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UFlattenBrushOpProps>,
               InternalVTableHelperCtorCaller<UFlattenBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFlattenBrushOpProps.InnerSingleton;
}

// UFlattenBrushOpProps @ 14cbdd6c0

UFlattenBrushOpProps * __thiscall
UFlattenBrushOpProps::UFlattenBrushOpProps(UFlattenBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UFlattenBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->Depth = 0.0;
  this->WhichSide = BothSides;
  return this;
}

// UFlattenBrushOpProps @ 14cbdd710

UFlattenBrushOpProps * __thiscall
UFlattenBrushOpProps::UFlattenBrushOpProps(UFlattenBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UFlattenBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  this->Depth = 0.0;
  this->WhichSide = BothSides;
  return this;
}

// ~UFlattenBrushOpProps @ 14cbe0370

void __thiscall UFlattenBrushOpProps::~UFlattenBrushOpProps(UFlattenBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetDepth @ 14cbee3c0

float __thiscall UFlattenBrushOpProps::GetDepth(UFlattenBrushOpProps *this)

{
  return this->Depth;
}

// GetFalloff @ 14cbee470

float __thiscall UFlattenBrushOpProps::GetFalloff(UFlattenBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbefaf0

UClass * __cdecl UFlattenBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFlattenBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"FlattenBrushOpProps",
               &Z_Registration_Info_UClass_UFlattenBrushOpProps.InnerSingleton,
               StaticRegisterNativesUFlattenBrushOpProps,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UFlattenBrushOpProps>,
               InternalVTableHelperCtorCaller<UFlattenBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFlattenBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1c20

float __thiscall UFlattenBrushOpProps::GetStrength(UFlattenBrushOpProps *this)

{
  return this->Strength;
}

// SetStrength @ 14cbf3f20

void __thiscall UFlattenBrushOpProps::SetStrength(UFlattenBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUFlattenBrushOpProps @ 14cbf6b80

void __cdecl UFlattenBrushOpProps::StaticRegisterNativesUFlattenBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6eb0

bool __thiscall UFlattenBrushOpProps::SupportsStrengthPressure(UFlattenBrushOpProps *this)

{
  return true;
}

