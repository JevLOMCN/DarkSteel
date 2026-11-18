// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 7

// StaticClass @ 14e520c40

UClass * __cdecl UInterchangeTextureCubeArrayFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureCubeArrayFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeTextureCubeArrayFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeTextureCubeArrayFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureCubeArrayFactoryNode,0x460,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureCubeArrayFactoryNode>
               ,InternalVTableHelperCtorCaller<UInterchangeTextureCubeArrayFactoryNode>,local_res8,
               UInterchangeTextureFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureCubeArrayFactoryNode.InnerSingleton;
}

// UInterchangeTextureCubeArrayFactoryNode @ 14e5346e0

UInterchangeTextureCubeArrayFactoryNode * __thiscall
UInterchangeTextureCubeArrayFactoryNode::UInterchangeTextureCubeArrayFactoryNode
          (UInterchangeTextureCubeArrayFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeTextureFactoryNode::UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTextureCubeArrayFactoryNode__6B_;
  return this;
}

// UInterchangeTextureCubeArrayFactoryNode @ 14e534710

UInterchangeTextureCubeArrayFactoryNode * __thiscall
UInterchangeTextureCubeArrayFactoryNode::UInterchangeTextureCubeArrayFactoryNode
          (UInterchangeTextureCubeArrayFactoryNode *this)

{
  UInterchangeTextureFactoryNode::UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this);
  *(undefined ***)this = &___7UInterchangeTextureCubeArrayFactoryNode__6B_;
  return this;
}

// ~UInterchangeTextureCubeArrayFactoryNode @ 14e536810

void __thiscall
UInterchangeTextureCubeArrayFactoryNode::~UInterchangeTextureCubeArrayFactoryNode
          (UInterchangeTextureCubeArrayFactoryNode *this)

{
  *(undefined ***)this = &___7UInterchangeTextureCubeArrayFactoryNode__6B_;
  UInterchangeTextureFactoryNode::~UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this);
  return;
}

// GetObjectClass @ 14e5596a0

UClass * __thiscall
UInterchangeTextureCubeArrayFactoryNode::GetObjectClass
          (UInterchangeTextureCubeArrayFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTextureCubeArray.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureCubeArray",
               &Z_Registration_Info_UClass_UTextureCubeArray.InnerSingleton,
               UTextureCubeArray::StaticRegisterNativesUTextureCubeArray,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextureCubeArray>,
               InternalVTableHelperCtorCaller<UTextureCubeArray>,aFStackX_8,UTexture::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureCubeArray.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55be10

UClass * __cdecl UInterchangeTextureCubeArrayFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureCubeArrayFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeTextureCubeArrayFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeTextureCubeArrayFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureCubeArrayFactoryNode,0x460,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureCubeArrayFactoryNode>
               ,InternalVTableHelperCtorCaller<UInterchangeTextureCubeArrayFactoryNode>,local_res8,
               UInterchangeTextureFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureCubeArrayFactoryNode.InnerSingleton;
}

// StaticRegisterNativesUInterchangeTextureCubeArrayFactoryNode @ 14e57fb50

void __cdecl
UInterchangeTextureCubeArrayFactoryNode::
StaticRegisterNativesUInterchangeTextureCubeArrayFactoryNode(void)

{
  return;
}

