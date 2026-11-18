// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e0cf0

UClass * __cdecl UAttachToPlayerPawnCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAttachToPlayerPawnCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AttachToPlayerPawnCameraNode",
               &Z_Registration_Info_UClass_UAttachToPlayerPawnCameraNode.InnerSingleton,
               StaticRegisterNativesUAttachToPlayerPawnCameraNode,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAttachToPlayerPawnCameraNode>,
               InternalVTableHelperCtorCaller<UAttachToPlayerPawnCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAttachToPlayerPawnCameraNode.InnerSingleton;
}

// UAttachToPlayerPawnCameraNode @ 14d5fd500

UAttachToPlayerPawnCameraNode * __thiscall
UAttachToPlayerPawnCameraNode::UAttachToPlayerPawnCameraNode
          (UAttachToPlayerPawnCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->AttachToLocation).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->AttachToRotation).Value = false;
  (this->AttachToRotation).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  (this->AttachToLocation).Value = true;
  (this->AttachToLocation).VariableID.Value = 0xffffffff;
  (this->AttachToRotation).VariableID.Value = 0xffffffff;
  return this;
}

// UAttachToPlayerPawnCameraNode @ 14d5fd560

UAttachToPlayerPawnCameraNode * __thiscall
UAttachToPlayerPawnCameraNode::UAttachToPlayerPawnCameraNode
          (UAttachToPlayerPawnCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->AttachToLocation).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->AttachToRotation).Value = false;
  (this->AttachToRotation).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  (this->AttachToLocation).Value = true;
  (this->AttachToLocation).VariableID.Value = 0xffffffff;
  (this->AttachToRotation).VariableID.Value = 0xffffffff;
  return this;
}

// ~UAttachToPlayerPawnCameraNode @ 14d6006b0

void __thiscall
UAttachToPlayerPawnCameraNode::~UAttachToPlayerPawnCameraNode(UAttachToPlayerPawnCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61bb20

UClass * __cdecl UAttachToPlayerPawnCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAttachToPlayerPawnCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AttachToPlayerPawnCameraNode",
               &Z_Registration_Info_UClass_UAttachToPlayerPawnCameraNode.InnerSingleton,
               StaticRegisterNativesUAttachToPlayerPawnCameraNode,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAttachToPlayerPawnCameraNode>,
               InternalVTableHelperCtorCaller<UAttachToPlayerPawnCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAttachToPlayerPawnCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d624fd0

FCameraNodeEvaluator * __thiscall
UAttachToPlayerPawnCameraNode::OnBuildEvaluator
          (UAttachToPlayerPawnCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x58,8);
  pFVar1->_padding_ = 0;
  *(undefined8 *)&pFVar1->bAutoCameraPoseMovementTrail = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1->PrivateFlags = 0;
  pFVar1[1]._padding_ = 0;
  *(undefined8 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1[1].PrivateFlags = 0;
  pFVar1[2]._padding_ = 0;
  *(undefined8 *)&pFVar1[2].bAutoCameraPoseMovementTrail = 0;
  pFVar1[2].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->_padding_ = (longlong)&___7FAttachToPlayerPawnCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1[1]._padding_ = 0;
  *(undefined8 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1[2]._padding_ = 0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  pFVar1[1].PrivateFlags = ~None;
  *(undefined4 *)&pFVar1[2].bAutoCameraPoseMovementTrail = 0xffffffff;
  *(undefined1 *)&pFVar1[2].PrivateCameraNode.field0_0x0 = 1;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUAttachToPlayerPawnCameraNode @ 14d639100

void __cdecl UAttachToPlayerPawnCameraNode::StaticRegisterNativesUAttachToPlayerPawnCameraNode(void)

{
  return;
}

