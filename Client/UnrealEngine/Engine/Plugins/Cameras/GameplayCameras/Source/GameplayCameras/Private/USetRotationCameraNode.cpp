// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e3d90

UClass * __cdecl USetRotationCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USetRotationCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SetRotationCameraNode",
               &Z_Registration_Info_UClass_USetRotationCameraNode.InnerSingleton,
               StaticRegisterNativesUSetRotationCameraNode,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USetRotationCameraNode>,
               InternalVTableHelperCtorCaller<USetRotationCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USetRotationCameraNode.InnerSingleton;
}

// USetRotationCameraNode @ 14d5ff5d0

USetRotationCameraNode * __thiscall
USetRotationCameraNode::USetRotationCameraNode(USetRotationCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FRotator3dCameraParameter::FRotator3dCameraParameter(&this->Rotation);
  this->OffsetSpace = CameraPose;
  return this;
}

// USetRotationCameraNode @ 14d5ff610

USetRotationCameraNode * __thiscall
USetRotationCameraNode::USetRotationCameraNode
          (USetRotationCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FRotator3dCameraParameter::FRotator3dCameraParameter(&this->Rotation);
  this->OffsetSpace = CameraPose;
  return this;
}

// ~USetRotationCameraNode @ 14d600f30

void __thiscall USetRotationCameraNode::~USetRotationCameraNode(USetRotationCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d4a0

UClass * __cdecl USetRotationCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USetRotationCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SetRotationCameraNode",
               &Z_Registration_Info_UClass_USetRotationCameraNode.InnerSingleton,
               StaticRegisterNativesUSetRotationCameraNode,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USetRotationCameraNode>,
               InternalVTableHelperCtorCaller<USetRotationCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USetRotationCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625be0

FCameraNodeEvaluator * __thiscall
USetRotationCameraNode::OnBuildEvaluator
          (USetRotationCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x30,8);
  *(undefined4 *)&pFVar1->field_0x9 = 0;
  *(undefined2 *)&pFVar1->field_0xd = 0;
  pFVar1->field_0xf = 0;
  *(undefined8 *)&pFVar1->PrivateFlags = 7;
  *(undefined4 *)&pFVar1[1].field_0xc = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1[1]._padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FSetRotationCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUSetRotationCameraNode @ 14d639440

void __cdecl USetRotationCameraNode::StaticRegisterNativesUSetRotationCameraNode(void)

{
  return;
}

