// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d56f550

UClass * __cdecl URootCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"RootCameraNode",
               &Z_Registration_Info_UClass_URootCameraNode.InnerSingleton,
               StaticRegisterNativesURootCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<URootCameraNode>,
               InternalVTableHelperCtorCaller<URootCameraNode>,local_res8,UCameraNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootCameraNode.InnerSingleton;
}

// URootCameraNode @ 14d590170

URootCameraNode * __thiscall
URootCameraNode::URootCameraNode(URootCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// URootCameraNode @ 14d5901b0

URootCameraNode * __thiscall
URootCameraNode::URootCameraNode(URootCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// ~URootCameraNode @ 14d591f20

void __thiscall URootCameraNode::~URootCameraNode(URootCameraNode *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d5aa480

UClass * __cdecl URootCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"RootCameraNode",
               &Z_Registration_Info_UClass_URootCameraNode.InnerSingleton,
               StaticRegisterNativesURootCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<URootCameraNode>,
               InternalVTableHelperCtorCaller<URootCameraNode>,local_res8,UCameraNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootCameraNode.InnerSingleton;
}

// StaticRegisterNativesURootCameraNode @ 14d5d0ed0

void __cdecl URootCameraNode::StaticRegisterNativesURootCameraNode(void)

{
  return;
}

