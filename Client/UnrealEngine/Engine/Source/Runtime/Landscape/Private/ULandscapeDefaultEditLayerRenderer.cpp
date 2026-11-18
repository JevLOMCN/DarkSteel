// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// StaticClass @ 145f35730

UClass * __cdecl ULandscapeDefaultEditLayerRenderer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeDefaultEditLayerRenderer.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeDefaultEditLayerRenderer",
               &Z_Registration_Info_UClass_ULandscapeDefaultEditLayerRenderer.InnerSingleton,
               StaticRegisterNativesULandscapeDefaultEditLayerRenderer,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeDefaultEditLayerRenderer>,
               InternalVTableHelperCtorCaller<ULandscapeDefaultEditLayerRenderer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeDefaultEditLayerRenderer.InnerSingleton;
}

// ULandscapeDefaultEditLayerRenderer @ 145f42660

ULandscapeDefaultEditLayerRenderer * __thiscall
ULandscapeDefaultEditLayerRenderer::ULandscapeDefaultEditLayerRenderer
          (ULandscapeDefaultEditLayerRenderer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULandscapeDefaultEditLayerRenderer__6B_;
  return this;
}

// ULandscapeDefaultEditLayerRenderer @ 145f42690

ULandscapeDefaultEditLayerRenderer * __thiscall
ULandscapeDefaultEditLayerRenderer::ULandscapeDefaultEditLayerRenderer
          (ULandscapeDefaultEditLayerRenderer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULandscapeDefaultEditLayerRenderer__6B_;
  return this;
}

// ~ULandscapeDefaultEditLayerRenderer @ 145f43a30

void __thiscall
ULandscapeDefaultEditLayerRenderer::~ULandscapeDefaultEditLayerRenderer
          (ULandscapeDefaultEditLayerRenderer *this)

{
  *(undefined ***)this = &___7ULandscapeDefaultEditLayerRenderer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 145f53c20

UClass * __cdecl ULandscapeDefaultEditLayerRenderer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeDefaultEditLayerRenderer.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeDefaultEditLayerRenderer",
               &Z_Registration_Info_UClass_ULandscapeDefaultEditLayerRenderer.InnerSingleton,
               StaticRegisterNativesULandscapeDefaultEditLayerRenderer,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeDefaultEditLayerRenderer>,
               InternalVTableHelperCtorCaller<ULandscapeDefaultEditLayerRenderer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeDefaultEditLayerRenderer.InnerSingleton;
}

// StaticRegisterNativesULandscapeDefaultEditLayerRenderer @ 145f5ec10

void __cdecl
ULandscapeDefaultEditLayerRenderer::StaticRegisterNativesULandscapeDefaultEditLayerRenderer(void)

{
  return;
}

