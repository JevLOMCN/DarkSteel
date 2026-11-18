// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 7

// StaticClass @ 14e513770

UClass * __cdecl UInterchangeVolumeTextureFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeVolumeTextureFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeVolumeTextureFactoryNode,0x460,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeVolumeTextureFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeVolumeTextureFactoryNode>,local_res8,
               UInterchangeTextureFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode.InnerSingleton;
}

// UInterchangeVolumeTextureFactoryNode @ 14e535110

UInterchangeVolumeTextureFactoryNode * __thiscall
UInterchangeVolumeTextureFactoryNode::UInterchangeVolumeTextureFactoryNode
          (UInterchangeVolumeTextureFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeTextureFactoryNode::UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeVolumeTextureFactoryNode__6B_;
  return this;
}

// UInterchangeVolumeTextureFactoryNode @ 14e535140

UInterchangeVolumeTextureFactoryNode * __thiscall
UInterchangeVolumeTextureFactoryNode::UInterchangeVolumeTextureFactoryNode
          (UInterchangeVolumeTextureFactoryNode *this)

{
  UInterchangeTextureFactoryNode::UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this);
  *(undefined ***)this = &___7UInterchangeVolumeTextureFactoryNode__6B_;
  return this;
}

// ~UInterchangeVolumeTextureFactoryNode @ 14e536bd0

void __thiscall
UInterchangeVolumeTextureFactoryNode::~UInterchangeVolumeTextureFactoryNode
          (UInterchangeVolumeTextureFactoryNode *this)

{
  *(undefined ***)this = &___7UInterchangeVolumeTextureFactoryNode__6B_;
  UInterchangeTextureFactoryNode::~UInterchangeTextureFactoryNode
            ((UInterchangeTextureFactoryNode *)this);
  return;
}

// GetObjectClass @ 14e559710

UClass * __thiscall
UInterchangeVolumeTextureFactoryNode::GetObjectClass(UInterchangeVolumeTextureFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UVolumeTexture.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VolumeTexture",
               &Z_Registration_Info_UClass_UVolumeTexture.InnerSingleton,
               UVolumeTexture::StaticRegisterNativesUVolumeTexture,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UVolumeTexture>,
               InternalVTableHelperCtorCaller<UVolumeTexture>,aFStackX_8,UTexture::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVolumeTexture.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55c110

UClass * __cdecl UInterchangeVolumeTextureFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeVolumeTextureFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeVolumeTextureFactoryNode,0x460,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeVolumeTextureFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeVolumeTextureFactoryNode>,local_res8,
               UInterchangeTextureFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode.InnerSingleton;
}

// StaticRegisterNativesUInterchangeVolumeTextureFactoryNode @ 14e57fbf0

void __cdecl
UInterchangeVolumeTextureFactoryNode::StaticRegisterNativesUInterchangeVolumeTextureFactoryNode
          (void)

{
  return;
}

