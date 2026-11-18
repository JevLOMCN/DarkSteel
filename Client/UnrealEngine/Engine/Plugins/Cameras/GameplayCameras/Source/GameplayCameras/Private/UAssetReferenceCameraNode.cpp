// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d537820

UClass * __cdecl UAssetReferenceCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetReferenceCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AssetReferenceCameraNode",
               &Z_Registration_Info_UClass_UAssetReferenceCameraNode.InnerSingleton,
               StaticRegisterNativesUAssetReferenceCameraNode,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetReferenceCameraNode>,
               InternalVTableHelperCtorCaller<UAssetReferenceCameraNode>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetReferenceCameraNode.InnerSingleton;
}

// UAssetReferenceCameraNode @ 14d5436a0

UAssetReferenceCameraNode * __thiscall
UAssetReferenceCameraNode::UAssetReferenceCameraNode
          (UAssetReferenceCameraNode *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAssetReferenceCameraNode__6B_;
  return this;
}

// UAssetReferenceCameraNode @ 14d5436d0

UAssetReferenceCameraNode * __thiscall
UAssetReferenceCameraNode::UAssetReferenceCameraNode
          (UAssetReferenceCameraNode *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAssetReferenceCameraNode__6B_;
  return this;
}

// ~UAssetReferenceCameraNode @ 14d5449f0

void __thiscall
UAssetReferenceCameraNode::~UAssetReferenceCameraNode(UAssetReferenceCameraNode *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d558190

UClass * __cdecl UAssetReferenceCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetReferenceCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AssetReferenceCameraNode",
               &Z_Registration_Info_UClass_UAssetReferenceCameraNode.InnerSingleton,
               StaticRegisterNativesUAssetReferenceCameraNode,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetReferenceCameraNode>,
               InternalVTableHelperCtorCaller<UAssetReferenceCameraNode>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetReferenceCameraNode.InnerSingleton;
}

// StaticRegisterNativesUAssetReferenceCameraNode @ 14d568540

void __cdecl UAssetReferenceCameraNode::StaticRegisterNativesUAssetReferenceCameraNode(void)

{
  return;
}

