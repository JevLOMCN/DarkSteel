// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e2280

UClass * __cdecl UViewTargetTransitionParamsBlendCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewTargetTransitionParamsBlendCameraNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ViewTargetTransitionParamsBlendCameraNode",
               &Z_Registration_Info_UClass_UViewTargetTransitionParamsBlendCameraNode.InnerSingleton
               ,StaticRegisterNativesUViewTargetTransitionParamsBlendCameraNode,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewTargetTransitionParamsBlendCameraNode>,
               InternalVTableHelperCtorCaller<UViewTargetTransitionParamsBlendCameraNode>,local_res8
               ,USimpleBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewTargetTransitionParamsBlendCameraNode.InnerSingleton;
}

// UViewTargetTransitionParamsBlendCameraNode @ 14d5ffbe0

UViewTargetTransitionParamsBlendCameraNode * __thiscall
UViewTargetTransitionParamsBlendCameraNode::UViewTargetTransitionParamsBlendCameraNode
          (UViewTargetTransitionParamsBlendCameraNode *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  (this->TransitionParams).bLockOutgoing = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->TransitionParams).BlendTime = 0.0;
  (this->TransitionParams).BlendFunction.Value = '\x01';
  (this->TransitionParams).BlendExp = 2.0;
  return this;
}

// UViewTargetTransitionParamsBlendCameraNode @ 14d5ffc30

UViewTargetTransitionParamsBlendCameraNode * __thiscall
UViewTargetTransitionParamsBlendCameraNode::UViewTargetTransitionParamsBlendCameraNode
          (UViewTargetTransitionParamsBlendCameraNode *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  (this->TransitionParams).bLockOutgoing = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->TransitionParams).BlendTime = 0.0;
  (this->TransitionParams).BlendFunction.Value = '\x01';
  (this->TransitionParams).BlendExp = 2.0;
  return this;
}

// ~UViewTargetTransitionParamsBlendCameraNode @ 14d601110

void __thiscall
UViewTargetTransitionParamsBlendCameraNode::~UViewTargetTransitionParamsBlendCameraNode
          (UViewTargetTransitionParamsBlendCameraNode *this)

{
  this->_padding_ = (longlong)&USimpleBlendCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&USimpleBlendCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UBlendCameraNode::~UBlendCameraNode((UBlendCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61daa0

UClass * __cdecl UViewTargetTransitionParamsBlendCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewTargetTransitionParamsBlendCameraNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ViewTargetTransitionParamsBlendCameraNode",
               &Z_Registration_Info_UClass_UViewTargetTransitionParamsBlendCameraNode.InnerSingleton
               ,StaticRegisterNativesUViewTargetTransitionParamsBlendCameraNode,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewTargetTransitionParamsBlendCameraNode>,
               InternalVTableHelperCtorCaller<UViewTargetTransitionParamsBlendCameraNode>,local_res8
               ,USimpleBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewTargetTransitionParamsBlendCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625ed0

FCameraNodeEvaluator * __thiscall
UViewTargetTransitionParamsBlendCameraNode::OnBuildEvaluator
          (UViewTargetTransitionParamsBlendCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x40,8);
  *(undefined4 *)&this_01->field_0x9 = 0;
  *(undefined2 *)&this_01->field_0xd = 0;
  this_01->field_0xf = 0;
  *(undefined8 *)&this_01->PrivateFlags = 7;
  *(undefined4 *)&this_01[1].field_0xc = 0;
  *(undefined8 *)((longlong)&this_01[1].PrivateCameraNode.field0_0x0 + 6) = 0;
  *(undefined2 *)&this_01[1].field_0x1e = 0;
  (this_01->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_01->bAutoCameraPoseMovementTrail = true;
  this_01->_padding_ = (longlong)&___7FSimpleBlendCameraNodeEvaluator_Cameras_UE__6B_;
  this_01[1]._padding_ = 0;
  *(undefined4 *)&this_01[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  *(undefined4 *)&this_01[1].PrivateCameraNode.field0_0x0 = 0;
  *(undefined2 *)((longlong)&this_01[1].PrivateCameraNode.field0_0x0 + 4) = 0;
  UE::Cameras::FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_01,NeedsSerialize);
  this_01[1].PrivateFlags = None;
  this_01->_padding_ =
       (longlong)&___7FViewTargetTransitionParamsBlendCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,this_01);
  return this_01;
}

// StaticRegisterNativesUViewTargetTransitionParamsBlendCameraNode @ 14d6394c0

void __cdecl
UViewTargetTransitionParamsBlendCameraNode::
StaticRegisterNativesUViewTargetTransitionParamsBlendCameraNode(void)

{
  return;
}

