// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d536980

UClass * __cdecl UBlendCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlendCameraNode",
               &Z_Registration_Info_UClass_UBlendCameraNode.InnerSingleton,
               StaticRegisterNativesUBlendCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlendCameraNode>,
               InternalVTableHelperCtorCaller<UBlendCameraNode>,local_res8,UCameraNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendCameraNode.InnerSingleton;
}

// UBlendCameraNode @ 14d543800

UBlendCameraNode * __thiscall
UBlendCameraNode::UBlendCameraNode(UBlendCameraNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x30 = 1;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  *(undefined4 *)&this->field_0x34 = 0;
  return this;
}

// UBlendCameraNode @ 14d543840

UBlendCameraNode * __thiscall
UBlendCameraNode::UBlendCameraNode(UBlendCameraNode *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x30 = 1;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  *(undefined4 *)&this->field_0x34 = 0;
  return this;
}

// ~UBlendCameraNode @ 14d544a90

void __thiscall UBlendCameraNode::~UBlendCameraNode(UBlendCameraNode *this)

{
  *(undefined ***)this = &UCameraNode::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d558300

UClass * __cdecl UBlendCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlendCameraNode",
               &Z_Registration_Info_UClass_UBlendCameraNode.InnerSingleton,
               StaticRegisterNativesUBlendCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlendCameraNode>,
               InternalVTableHelperCtorCaller<UBlendCameraNode>,local_res8,UCameraNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendCameraNode.InnerSingleton;
}

// StaticRegisterNativesUBlendCameraNode @ 14d568560

void __cdecl UBlendCameraNode::StaticRegisterNativesUBlendCameraNode(void)

{
  return;
}

