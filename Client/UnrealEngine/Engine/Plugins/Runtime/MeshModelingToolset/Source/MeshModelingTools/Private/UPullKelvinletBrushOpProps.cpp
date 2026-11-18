// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cbd2c90

UClass * __cdecl UPullKelvinletBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PullKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.InnerSingleton,
               StaticRegisterNativesUPullKelvinletBrushOpProps,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPullKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<UPullKelvinletBrushOpProps>,local_res8,
               UBaseKelvinletBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.InnerSingleton;
}

// UPullKelvinletBrushOpProps @ 14cbdeb80

UPullKelvinletBrushOpProps * __thiscall
UPullKelvinletBrushOpProps::UPullKelvinletBrushOpProps
          (UPullKelvinletBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UPullKelvinletBrushOpProps__6B_;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 3;
  this->Falloff = 0.1;
  this->Depth = 0.0;
  return this;
}

// UPullKelvinletBrushOpProps @ 14cbdebe0

UPullKelvinletBrushOpProps * __thiscall
UPullKelvinletBrushOpProps::UPullKelvinletBrushOpProps
          (UPullKelvinletBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UPullKelvinletBrushOpProps__6B_;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 3;
  this->Falloff = 0.1;
  this->Depth = 0.0;
  return this;
}

// ~UPullKelvinletBrushOpProps @ 14cbe07b0

void __thiscall
UPullKelvinletBrushOpProps::~UPullKelvinletBrushOpProps(UPullKelvinletBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetDepth @ 14cbee410

float __thiscall UPullKelvinletBrushOpProps::GetDepth(UPullKelvinletBrushOpProps *this)

{
  return this->Depth;
}

// GetFalloff @ 14cbee4d0

float __thiscall UPullKelvinletBrushOpProps::GetFalloff(UPullKelvinletBrushOpProps *this)

{
  return this->Falloff;
}

// GetPrivateStaticClass @ 14cbf0f20

UClass * __cdecl UPullKelvinletBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PullKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.InnerSingleton,
               StaticRegisterNativesUPullKelvinletBrushOpProps,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPullKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<UPullKelvinletBrushOpProps>,local_res8,
               UBaseKelvinletBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.InnerSingleton;
}

// StaticRegisterNativesUPullKelvinletBrushOpProps @ 14cbf6d60

void __cdecl UPullKelvinletBrushOpProps::StaticRegisterNativesUPullKelvinletBrushOpProps(void)

{
  return;
}

