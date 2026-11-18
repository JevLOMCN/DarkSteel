// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d5e1df0

UClass * __cdecl USimpleBlendCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SimpleBlendCameraNode",
               &Z_Registration_Info_UClass_USimpleBlendCameraNode.InnerSingleton,
               StaticRegisterNativesUSimpleBlendCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USimpleBlendCameraNode>,
               InternalVTableHelperCtorCaller<USimpleBlendCameraNode>,local_res8,
               UBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleBlendCameraNode.InnerSingleton;
}

// USimpleBlendCameraNode @ 14d5ff650

USimpleBlendCameraNode * __thiscall
USimpleBlendCameraNode::USimpleBlendCameraNode(USimpleBlendCameraNode *this,FVTableHelper *param_1)

{
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// USimpleBlendCameraNode @ 14d5ff690

USimpleBlendCameraNode * __thiscall
USimpleBlendCameraNode::USimpleBlendCameraNode
          (USimpleBlendCameraNode *this,FObjectInitializer *param_1)

{
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// ~USimpleBlendCameraNode @ 14d600f50

void __thiscall USimpleBlendCameraNode::~USimpleBlendCameraNode(USimpleBlendCameraNode *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  UBlendCameraNode::~UBlendCameraNode((UBlendCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d560

UClass * __cdecl USimpleBlendCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SimpleBlendCameraNode",
               &Z_Registration_Info_UClass_USimpleBlendCameraNode.InnerSingleton,
               StaticRegisterNativesUSimpleBlendCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USimpleBlendCameraNode>,
               InternalVTableHelperCtorCaller<USimpleBlendCameraNode>,local_res8,
               UBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleBlendCameraNode.InnerSingleton;
}

// StaticRegisterNativesUSimpleBlendCameraNode @ 14d639450

void __cdecl USimpleBlendCameraNode::StaticRegisterNativesUSimpleBlendCameraNode(void)

{
  return;
}

