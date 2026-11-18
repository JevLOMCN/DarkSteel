// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cbcfdc0

UClass * __cdecl UEraseSculptLayerBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEraseSculptLayerBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EraseSculptLayerBrushOpProps",
               &Z_Registration_Info_UClass_UEraseSculptLayerBrushOpProps.InnerSingleton,
               StaticRegisterNativesUEraseSculptLayerBrushOpProps,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEraseSculptLayerBrushOpProps>,
               InternalVTableHelperCtorCaller<UEraseSculptLayerBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEraseSculptLayerBrushOpProps.InnerSingleton;
}

// UEraseSculptLayerBrushOpProps @ 14cbdd580

UEraseSculptLayerBrushOpProps * __thiscall
UEraseSculptLayerBrushOpProps::UEraseSculptLayerBrushOpProps
          (UEraseSculptLayerBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UEraseSculptLayerBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  return this;
}

// UEraseSculptLayerBrushOpProps @ 14cbdd5d0

UEraseSculptLayerBrushOpProps * __thiscall
UEraseSculptLayerBrushOpProps::UEraseSculptLayerBrushOpProps
          (UEraseSculptLayerBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UEraseSculptLayerBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 0.5;
  return this;
}

// ~UEraseSculptLayerBrushOpProps @ 14cbe0330

void __thiscall
UEraseSculptLayerBrushOpProps::~UEraseSculptLayerBrushOpProps(UEraseSculptLayerBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee450

float __thiscall UEraseSculptLayerBrushOpProps::GetFalloff(UEraseSculptLayerBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbef970

UClass * __cdecl UEraseSculptLayerBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEraseSculptLayerBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EraseSculptLayerBrushOpProps",
               &Z_Registration_Info_UClass_UEraseSculptLayerBrushOpProps.InnerSingleton,
               StaticRegisterNativesUEraseSculptLayerBrushOpProps,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEraseSculptLayerBrushOpProps>,
               InternalVTableHelperCtorCaller<UEraseSculptLayerBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEraseSculptLayerBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1c00

float __thiscall UEraseSculptLayerBrushOpProps::GetStrength(UEraseSculptLayerBrushOpProps *this)

{
  return this->Strength;
}

// StaticRegisterNativesUEraseSculptLayerBrushOpProps @ 14cbf6b60

void __cdecl UEraseSculptLayerBrushOpProps::StaticRegisterNativesUEraseSculptLayerBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6ea0

bool __thiscall
UEraseSculptLayerBrushOpProps::SupportsStrengthPressure(UEraseSculptLayerBrushOpProps *this)

{
  return true;
}

