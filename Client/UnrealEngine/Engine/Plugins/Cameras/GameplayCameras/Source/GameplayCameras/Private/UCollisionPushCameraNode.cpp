// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e5690

UClass * __cdecl UCollisionPushCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCollisionPushCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CollisionPushCameraNode",
               &Z_Registration_Info_UClass_UCollisionPushCameraNode.InnerSingleton,
               StaticRegisterNativesUCollisionPushCameraNode,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCollisionPushCameraNode>,
               InternalVTableHelperCtorCaller<UCollisionPushCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCollisionPushCameraNode.InnerSingleton;
}

// UCollisionPushCameraNode @ 14d5fdcc0

UCollisionPushCameraNode * __thiscall
UCollisionPushCameraNode::UCollisionPushCameraNode
          (UCollisionPushCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->SafePosition = Pivot;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CustomSafePosition).VariableID.Value = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->CustomSafePosition).Variable.field0_0x0.DebugPtr = (UVector3dCameraVariable *)0x0;
  FVector3dCameraParameter::FVector3dCameraParameter(&this->SafePositionOffset);
  this->SafePositionOffsetSpace = Pivot;
  (this->EnableCollision).VariableID.Value = 0xffffffff;
  (this->EnableCollision).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->CollisionSphereRadius).Value = 0.0;
  (this->CollisionSphereRadius).VariableID.Value = 0xffffffff;
  (this->CollisionSphereRadius).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->CollisionChannel).Value = '\x04';
  (this->PushInterpolator).field0_0x0.DebugPtr = (UCameraValueInterpolator *)0x0;
  (this->PullInterpolator).field0_0x0.DebugPtr = (UCameraValueInterpolator *)0x0;
  this->bRunAsyncCollision = false;
  return this;
}

// UCollisionPushCameraNode @ 14d5fdd60

UCollisionPushCameraNode * __thiscall
UCollisionPushCameraNode::UCollisionPushCameraNode
          (UCollisionPushCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->SafePosition = Pivot;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CustomSafePosition).VariableID.Value = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->CustomSafePosition).Variable.field0_0x0.DebugPtr = (UVector3dCameraVariable *)0x0;
  FVector3dCameraParameter::FVector3dCameraParameter(&this->SafePositionOffset);
  this->SafePositionOffsetSpace = Pivot;
  (this->EnableCollision).VariableID.Value = 0xffffffff;
  (this->EnableCollision).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->CollisionSphereRadius).VariableID.Value = 0xffffffff;
  (this->CollisionSphereRadius).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->CollisionChannel).Value = '\x04';
  (this->PushInterpolator).field0_0x0.DebugPtr = (UCameraValueInterpolator *)0x0;
  (this->PullInterpolator).field0_0x0.DebugPtr = (UCameraValueInterpolator *)0x0;
  this->bRunAsyncCollision = false;
  (this->CollisionSphereRadius).Value = 10.0;
  return this;
}

// ~UCollisionPushCameraNode @ 14d600870

void __thiscall UCollisionPushCameraNode::~UCollisionPushCameraNode(UCollisionPushCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61c060

UClass * __cdecl UCollisionPushCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCollisionPushCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CollisionPushCameraNode",
               &Z_Registration_Info_UClass_UCollisionPushCameraNode.InnerSingleton,
               StaticRegisterNativesUCollisionPushCameraNode,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCollisionPushCameraNode>,
               InternalVTableHelperCtorCaller<UCollisionPushCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCollisionPushCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625350

FCameraNodeEvaluator * __thiscall
UCollisionPushCameraNode::OnBuildEvaluator
          (UCollisionPushCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *_Dst;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  _Dst = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
         BuildObjectUninitialized(this_00,0xc0,8);
  memset(_Dst,0,0xc0);
  _Dst->bAutoCameraPoseMovementTrail = true;
  _Dst->_padding_ = (longlong)&___7FCollisionPushCameraNodeEvaluator_Cameras_UE__6B_;
  _Dst->PrivateFlags = Default;
  *(undefined8 *)&_Dst[2].bAutoCameraPoseMovementTrail = 0;
  *(undefined8 *)&_Dst[2].PrivateFlags = 0;
  *(undefined8 *)&_Dst[3].bAutoCameraPoseMovementTrail = 0;
  _Dst[3].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&_Dst[3].PrivateFlags = 0;
  *(undefined1 *)&_Dst[4]._padding_ = 0;
  *(undefined8 *)&_Dst[4].bAutoCameraPoseMovementTrail = 0;
  _Dst[4].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&_Dst[4].PrivateFlags = 0;
  _Dst[5]._padding_ = 0;
  *(undefined4 *)((longlong)&_Dst[1]._padding_ + 4) = 0xffffffff;
  *(undefined4 *)&_Dst[2]._padding_ = 0xffffffff;
  *(undefined4 *)&_Dst[2].PrivateCameraNode.field0_0x0 = 0xffffffff;
  *(undefined4 *)&_Dst[3]._padding_ = 0xffffffff;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,_Dst);
  return _Dst;
}

// StaticRegisterNativesUCollisionPushCameraNode @ 14d639170

void __cdecl UCollisionPushCameraNode::StaticRegisterNativesUCollisionPushCameraNode(void)

{
  return;
}

