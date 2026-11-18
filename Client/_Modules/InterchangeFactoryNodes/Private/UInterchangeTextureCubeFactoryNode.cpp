// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 7

// StaticClass @ 14e5210b0

UClass * __cdecl UInterchangeTextureCubeFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeTextureCubeFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureCubeFactoryNode,0x460,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureCubeFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeTextureCubeFactoryNode>,local_res8,
               UInterchangeTextureFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode.InnerSingleton;
}

// UInterchangeTextureCubeFactoryNode @ 14e534740

UInterchangeTextureCubeFactoryNode * __thiscall
UInterchangeTextureCubeFactoryNode::UInterchangeTextureCubeFactoryNode
          (UInterchangeTextureCubeFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeTextureFactoryNode::UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTextureCubeFactoryNode__6B_;
  return this;
}

// UInterchangeTextureCubeFactoryNode @ 14e534770

UInterchangeTextureCubeFactoryNode * __thiscall
UInterchangeTextureCubeFactoryNode::UInterchangeTextureCubeFactoryNode
          (UInterchangeTextureCubeFactoryNode *this)

{
  UInterchangeTextureFactoryNode::UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this);
  *(undefined ***)this = &___7UInterchangeTextureCubeFactoryNode__6B_;
  return this;
}

// ~UInterchangeTextureCubeFactoryNode @ 14e536830

void __thiscall
UInterchangeTextureCubeFactoryNode::~UInterchangeTextureCubeFactoryNode
          (UInterchangeTextureCubeFactoryNode *this)

{
  *(undefined ***)this = &___7UInterchangeTextureCubeFactoryNode__6B_;
  UInterchangeTextureFactoryNode::~UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this);
  return;
}

// GetObjectClass @ 14e5596b0

UClass * __thiscall
UInterchangeTextureCubeFactoryNode::GetObjectClass(UInterchangeTextureCubeFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTextureCube.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureCube",
               &Z_Registration_Info_UClass_UTextureCube.InnerSingleton,
               UTextureCube::StaticRegisterNativesUTextureCube,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextureCube>,
               InternalVTableHelperCtorCaller<UTextureCube>,aFStackX_8,UTexture::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureCube.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55bed0

UClass * __cdecl UInterchangeTextureCubeFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeTextureCubeFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureCubeFactoryNode,0x460,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureCubeFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeTextureCubeFactoryNode>,local_res8,
               UInterchangeTextureFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode.InnerSingleton;
}

// StaticRegisterNativesUInterchangeTextureCubeFactoryNode @ 14e57fb60

void __cdecl
UInterchangeTextureCubeFactoryNode::StaticRegisterNativesUInterchangeTextureCubeFactoryNode(void)

{
  return;
}

