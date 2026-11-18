// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 13

// StaticClass @ 14cbd1870

UClass * __cdecl UMeshSculptBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSculptBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSculptBrushOpProps",
               &Z_Registration_Info_UClass_UMeshSculptBrushOpProps.InnerSingleton,
               StaticRegisterNativesUMeshSculptBrushOpProps,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshSculptBrushOpProps>,
               InternalVTableHelperCtorCaller<UMeshSculptBrushOpProps>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSculptBrushOpProps.InnerSingleton;
}

// UMeshSculptBrushOpProps @ 14cbdda00

UMeshSculptBrushOpProps * __thiscall
UMeshSculptBrushOpProps::UMeshSculptBrushOpProps
          (UMeshSculptBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bIsStrengthPressureEnabled = true;
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  return this;
}

// UMeshSculptBrushOpProps @ 14cbdda30

UMeshSculptBrushOpProps * __thiscall
UMeshSculptBrushOpProps::UMeshSculptBrushOpProps
          (UMeshSculptBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bIsStrengthPressureEnabled = true;
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  return this;
}

// ~UMeshSculptBrushOpProps @ 14cbe0450

void __thiscall UMeshSculptBrushOpProps::~UMeshSculptBrushOpProps(UMeshSculptBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetDepth @ 14cbee3d0

float __thiscall UMeshSculptBrushOpProps::GetDepth(UMeshSculptBrushOpProps *this)

{
  return 0.0;
}

// GetFalloff @ 14cbee490

float __thiscall UMeshSculptBrushOpProps::GetFalloff(UMeshSculptBrushOpProps *this)

{
  return __real_3f000000;
}

// GetPrivateStaticClass @ 14cbefeb0

UClass * __cdecl UMeshSculptBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSculptBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSculptBrushOpProps",
               &Z_Registration_Info_UClass_UMeshSculptBrushOpProps.InnerSingleton,
               StaticRegisterNativesUMeshSculptBrushOpProps,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshSculptBrushOpProps>,
               InternalVTableHelperCtorCaller<UMeshSculptBrushOpProps>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSculptBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1c40

float __thiscall UMeshSculptBrushOpProps::GetStrength(UMeshSculptBrushOpProps *this)

{
  return __real_3f800000;
}

// GetStrengthPressureEnabled @ 14cbf1d20

bool __thiscall UMeshSculptBrushOpProps::GetStrengthPressureEnabled(UMeshSculptBrushOpProps *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2f8))();
  if ((cVar1 != '\0') && (this->bIsStrengthPressureEnabled != false)) {
    return true;
  }
  return false;
}

// SetFalloff @ 14cbf3900

void __thiscall UMeshSculptBrushOpProps::SetFalloff(UMeshSculptBrushOpProps *this,float param_1)

{
  return;
}

// SetStrength @ 14cbf3f80

void __thiscall UMeshSculptBrushOpProps::SetStrength(UMeshSculptBrushOpProps *this,float param_1)

{
  return;
}

// StaticRegisterNativesUMeshSculptBrushOpProps @ 14cbf6c00

void __cdecl UMeshSculptBrushOpProps::StaticRegisterNativesUMeshSculptBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6ed0

bool __thiscall UMeshSculptBrushOpProps::SupportsStrengthPressure(UMeshSculptBrushOpProps *this)

{
  return false;
}

