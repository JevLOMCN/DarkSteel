// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cbd2330

UClass * __cdecl UViewAlignedSculptBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ViewAlignedSculptBrushOpProps",
               &Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.InnerSingleton,
               StaticRegisterNativesUViewAlignedSculptBrushOpProps,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewAlignedSculptBrushOpProps>,
               InternalVTableHelperCtorCaller<UViewAlignedSculptBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.InnerSingleton;
}

// UViewAlignedSculptBrushOpProps @ 14cbdf680

UViewAlignedSculptBrushOpProps * __thiscall
UViewAlignedSculptBrushOpProps::UViewAlignedSculptBrushOpProps
          (UViewAlignedSculptBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UViewAlignedSculptBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 1.0;
  return this;
}

// UViewAlignedSculptBrushOpProps @ 14cbdf6d0

UViewAlignedSculptBrushOpProps * __thiscall
UViewAlignedSculptBrushOpProps::UViewAlignedSculptBrushOpProps
          (UViewAlignedSculptBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UViewAlignedSculptBrushOpProps__6B_;
  this->Strength = 0.5;
  this->Falloff = 1.0;
  return this;
}

// ~UViewAlignedSculptBrushOpProps @ 14cbe09b0

void __thiscall
UViewAlignedSculptBrushOpProps::~UViewAlignedSculptBrushOpProps
          (UViewAlignedSculptBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee590

float __thiscall UViewAlignedSculptBrushOpProps::GetFalloff(UViewAlignedSculptBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbf1b20

UClass * __cdecl UViewAlignedSculptBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ViewAlignedSculptBrushOpProps",
               &Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.InnerSingleton,
               StaticRegisterNativesUViewAlignedSculptBrushOpProps,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewAlignedSculptBrushOpProps>,
               InternalVTableHelperCtorCaller<UViewAlignedSculptBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.InnerSingleton;
}

// GetStrength @ 14cbf1d10

float __thiscall UViewAlignedSculptBrushOpProps::GetStrength(UViewAlignedSculptBrushOpProps *this)

{
  return this->Strength;
}

// SetStrength @ 14cbf4170

void __thiscall
UViewAlignedSculptBrushOpProps::SetStrength(UViewAlignedSculptBrushOpProps *this,float param_1)

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

// StaticRegisterNativesUViewAlignedSculptBrushOpProps @ 14cbf6e60

void __cdecl
UViewAlignedSculptBrushOpProps::StaticRegisterNativesUViewAlignedSculptBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6f50

bool __thiscall
UViewAlignedSculptBrushOpProps::SupportsStrengthPressure(UViewAlignedSculptBrushOpProps *this)

{
  return true;
}

