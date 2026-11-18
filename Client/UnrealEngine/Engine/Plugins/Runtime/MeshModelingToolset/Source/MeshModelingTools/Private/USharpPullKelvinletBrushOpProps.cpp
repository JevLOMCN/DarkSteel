// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cbd3150

UClass * __cdecl USharpPullKelvinletBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SharpPullKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.InnerSingleton,
               StaticRegisterNativesUSharpPullKelvinletBrushOpProps,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USharpPullKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<USharpPullKelvinletBrushOpProps>,local_res8,
               UBaseKelvinletBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.InnerSingleton;
}

// USharpPullKelvinletBrushOpProps @ 14cbdef80

USharpPullKelvinletBrushOpProps * __thiscall
USharpPullKelvinletBrushOpProps::USharpPullKelvinletBrushOpProps
          (USharpPullKelvinletBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7USharpPullKelvinletBrushOpProps__6B_;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 3;
  this->Falloff = 0.5;
  this->Depth = 0.0;
  return this;
}

// USharpPullKelvinletBrushOpProps @ 14cbdefe0

USharpPullKelvinletBrushOpProps * __thiscall
USharpPullKelvinletBrushOpProps::USharpPullKelvinletBrushOpProps
          (USharpPullKelvinletBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7USharpPullKelvinletBrushOpProps__6B_;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 3;
  this->Falloff = 0.5;
  this->Depth = 0.0;
  return this;
}

// ~USharpPullKelvinletBrushOpProps @ 14cbe0870

void __thiscall
USharpPullKelvinletBrushOpProps::~USharpPullKelvinletBrushOpProps
          (USharpPullKelvinletBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetDepth @ 14cbee420

float __thiscall USharpPullKelvinletBrushOpProps::GetDepth(USharpPullKelvinletBrushOpProps *this)

{
  return this->Depth;
}

// GetFalloff @ 14cbee510

float __thiscall USharpPullKelvinletBrushOpProps::GetFalloff(USharpPullKelvinletBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbf13a0

UClass * __cdecl USharpPullKelvinletBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SharpPullKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.InnerSingleton,
               StaticRegisterNativesUSharpPullKelvinletBrushOpProps,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USharpPullKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<USharpPullKelvinletBrushOpProps>,local_res8,
               UBaseKelvinletBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.InnerSingleton;
}

// StaticRegisterNativesUSharpPullKelvinletBrushOpProps @ 14cbf6dc0

void __cdecl
USharpPullKelvinletBrushOpProps::StaticRegisterNativesUSharpPullKelvinletBrushOpProps(void)

{
  return;
}

