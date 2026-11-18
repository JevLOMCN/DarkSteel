// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// StaticClass @ 145ef1c50

UClass * __cdecl ULandscapeEditLayerRenderer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditLayerRenderer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditLayerRenderer",
               &Z_Registration_Info_UClass_ULandscapeEditLayerRenderer.InnerSingleton,
               StaticRegisterNativesULandscapeEditLayerRenderer,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeEditLayerRenderer>,
               InternalVTableHelperCtorCaller<ULandscapeEditLayerRenderer>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditLayerRenderer.InnerSingleton;
}

// ULandscapeEditLayerRenderer @ 145ef3aa0

ULandscapeEditLayerRenderer * __thiscall
ULandscapeEditLayerRenderer::ULandscapeEditLayerRenderer
          (ULandscapeEditLayerRenderer *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7ULandscapeEditLayerRenderer__6B_;
  return this;
}

// ULandscapeEditLayerRenderer @ 145ef3ad0

ULandscapeEditLayerRenderer * __thiscall
ULandscapeEditLayerRenderer::ULandscapeEditLayerRenderer
          (ULandscapeEditLayerRenderer *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7ULandscapeEditLayerRenderer__6B_;
  return this;
}

// ~ULandscapeEditLayerRenderer @ 145ef4270

void __thiscall
ULandscapeEditLayerRenderer::~ULandscapeEditLayerRenderer(ULandscapeEditLayerRenderer *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 145ef5660

UClass * __cdecl ULandscapeEditLayerRenderer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditLayerRenderer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditLayerRenderer",
               &Z_Registration_Info_UClass_ULandscapeEditLayerRenderer.InnerSingleton,
               StaticRegisterNativesULandscapeEditLayerRenderer,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeEditLayerRenderer>,
               InternalVTableHelperCtorCaller<ULandscapeEditLayerRenderer>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditLayerRenderer.InnerSingleton;
}

// StaticRegisterNativesULandscapeEditLayerRenderer @ 145ef6010

void __cdecl ULandscapeEditLayerRenderer::StaticRegisterNativesULandscapeEditLayerRenderer(void)

{
  return;
}

