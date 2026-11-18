// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 7

// StaticClass @ 14e521300

UClass * __cdecl UInterchangeSceneImportAssetFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeSceneImportAssetFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneImportAssetFactoryNode,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneImportAssetFactoryNode>
               ,InternalVTableHelperCtorCaller<UInterchangeSceneImportAssetFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactoryNode.InnerSingleton;
}

// UInterchangeSceneImportAssetFactoryNode @ 14e532600

UInterchangeSceneImportAssetFactoryNode * __thiscall
UInterchangeSceneImportAssetFactoryNode::UInterchangeSceneImportAssetFactoryNode
          (UInterchangeSceneImportAssetFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSceneImportAssetFactoryNode__6B_;
  return this;
}

// UInterchangeSceneImportAssetFactoryNode @ 14e532630

UInterchangeSceneImportAssetFactoryNode * __thiscall
UInterchangeSceneImportAssetFactoryNode::UInterchangeSceneImportAssetFactoryNode
          (UInterchangeSceneImportAssetFactoryNode *this)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  *(undefined ***)this = &___7UInterchangeSceneImportAssetFactoryNode__6B_;
  return this;
}

// ~UInterchangeSceneImportAssetFactoryNode @ 14e536080

void __thiscall
UInterchangeSceneImportAssetFactoryNode::~UInterchangeSceneImportAssetFactoryNode
          (UInterchangeSceneImportAssetFactoryNode *this)

{
  *(undefined ***)this = &___7UInterchangeSceneImportAssetFactoryNode__6B_;
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// GetObjectClass @ 14e559370

UClass * __thiscall
UInterchangeSceneImportAssetFactoryNode::GetObjectClass
          (UInterchangeSceneImportAssetFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneImportAsset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeSceneImportAsset",
               &Z_Registration_Info_UClass_UInterchangeSceneImportAsset.InnerSingleton,
               UInterchangeSceneImportAsset::StaticRegisterNativesUInterchangeSceneImportAsset,0x30,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeSceneImportAsset>,
               InternalVTableHelperCtorCaller<UInterchangeSceneImportAsset>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneImportAsset.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55b390

UClass * __cdecl UInterchangeSceneImportAssetFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeSceneImportAssetFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneImportAssetFactoryNode,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneImportAssetFactoryNode>
               ,InternalVTableHelperCtorCaller<UInterchangeSceneImportAssetFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactoryNode.InnerSingleton;
}

// StaticRegisterNativesUInterchangeSceneImportAssetFactoryNode @ 14e57f800

void __cdecl
UInterchangeSceneImportAssetFactoryNode::
StaticRegisterNativesUInterchangeSceneImportAssetFactoryNode(void)

{
  return;
}

