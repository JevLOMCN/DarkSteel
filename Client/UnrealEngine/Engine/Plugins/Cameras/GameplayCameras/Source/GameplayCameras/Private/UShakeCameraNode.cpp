// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d56c3d0

UClass * __cdecl UShakeCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UShakeCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ShakeCameraNode",
               &Z_Registration_Info_UClass_UShakeCameraNode.InnerSingleton,
               StaticRegisterNativesUShakeCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UShakeCameraNode>,
               InternalVTableHelperCtorCaller<UShakeCameraNode>,local_res8,UCameraNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShakeCameraNode.InnerSingleton;
}

// UShakeCameraNode @ 14d5902f0

UShakeCameraNode * __thiscall
UShakeCameraNode::UShakeCameraNode(UShakeCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// UShakeCameraNode @ 14d590330

UShakeCameraNode * __thiscall
UShakeCameraNode::UShakeCameraNode(UShakeCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// ~UShakeCameraNode @ 14d591f80

void __thiscall UShakeCameraNode::~UShakeCameraNode(UShakeCameraNode *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d5aa6c0

UClass * __cdecl UShakeCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UShakeCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ShakeCameraNode",
               &Z_Registration_Info_UClass_UShakeCameraNode.InnerSingleton,
               StaticRegisterNativesUShakeCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UShakeCameraNode>,
               InternalVTableHelperCtorCaller<UShakeCameraNode>,local_res8,UCameraNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShakeCameraNode.InnerSingleton;
}

// StaticRegisterNativesUShakeCameraNode @ 14d5d0f00

void __cdecl UShakeCameraNode::StaticRegisterNativesUShakeCameraNode(void)

{
  return;
}

