// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5e3300

UClass * __cdecl ULocationRotationBlendCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocationRotationBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"LocationRotationBlendCameraNode",
               &Z_Registration_Info_UClass_ULocationRotationBlendCameraNode.InnerSingleton,
               StaticRegisterNativesULocationRotationBlendCameraNode,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULocationRotationBlendCameraNode>,
               InternalVTableHelperCtorCaller<ULocationRotationBlendCameraNode>,local_res8,
               UBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocationRotationBlendCameraNode.InnerSingleton;
}

// ULocationRotationBlendCameraNode @ 14d5febd0

ULocationRotationBlendCameraNode * __thiscall
ULocationRotationBlendCameraNode::ULocationRotationBlendCameraNode
          (ULocationRotationBlendCameraNode *this,FVTableHelper *param_1)

{
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->LocationBlend).field0_0x0.DebugPtr = (USimpleBlendCameraNode *)0x0;
  (this->RotationBlend).field0_0x0.DebugPtr = (USimpleBlendCameraNode *)0x0;
  (this->OtherBlend).field0_0x0.DebugPtr = (USimpleBlendCameraNode *)0x0;
  return this;
}

// ULocationRotationBlendCameraNode @ 14d5fec10

ULocationRotationBlendCameraNode * __thiscall
ULocationRotationBlendCameraNode::ULocationRotationBlendCameraNode
          (ULocationRotationBlendCameraNode *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  (this->LocationBlend).field0_0x0.DebugPtr = (USimpleBlendCameraNode *)0x0;
  (this->RotationBlend).field0_0x0.DebugPtr = (USimpleBlendCameraNode *)0x0;
  (this->OtherBlend).field0_0x0.DebugPtr = (USimpleBlendCameraNode *)0x0;
  return this;
}

// ~ULocationRotationBlendCameraNode @ 14d600d40

void __thiscall
ULocationRotationBlendCameraNode::~ULocationRotationBlendCameraNode
          (ULocationRotationBlendCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UBlendCameraNode::~UBlendCameraNode((UBlendCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61cc60

UClass * __cdecl ULocationRotationBlendCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocationRotationBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"LocationRotationBlendCameraNode",
               &Z_Registration_Info_UClass_ULocationRotationBlendCameraNode.InnerSingleton,
               StaticRegisterNativesULocationRotationBlendCameraNode,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULocationRotationBlendCameraNode>,
               InternalVTableHelperCtorCaller<ULocationRotationBlendCameraNode>,local_res8,
               UBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocationRotationBlendCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625830

FCameraNodeEvaluator * __thiscall
ULocationRotationBlendCameraNode::OnBuildEvaluator
          (ULocationRotationBlendCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x38,8);
  (this_01->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_01->bAutoCameraPoseMovementTrail = true;
  this_01->PrivateFlags = Default;
  this_01[1]._padding_ = 0;
  *(undefined8 *)&this_01[1].bAutoCameraPoseMovementTrail = 0;
  this_01[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_01->_padding_ = (longlong)&___7FLocationRotationBlendCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_01,None);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,this_01);
  return this_01;
}

// OnGetChildren @ 14d627910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TObjectChildrenView<TObjectPtr<UCameraNode>_> * __thiscall
ULocationRotationBlendCameraNode::OnGetChildren
          (ULocationRotationBlendCameraNode *this,
          TObjectChildrenView<TObjectPtr<UCameraNode>_> *__return_storage_ptr__)

{
  undefined1 auStack_58 [32];
  initializer_list<TObjectPtr<UCameraNode>_> local_38;
  TObjectPtr<USimpleBlendCameraNode>_u_0 local_28;
  USimpleBlendCameraNode *local_20;
  USimpleBlendCameraNode *local_18;
  TObjectPtr<UCameraNode>_u_0 local_10;
  
  local_10.DebugPtr = (UCameraNode *)(__security_cookie.value ^ (ulonglong)auStack_58);
  local_28 = (TObjectPtr<USimpleBlendCameraNode>_u_0)(this->LocationBlend).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_28.DebugPtr != (USimpleBlendCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  local_20 = (this->RotationBlend).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_20 != (USimpleBlendCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_20);
  }
  local_18 = (this->OtherBlend).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18 != (USimpleBlendCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18);
  }
  local_38._First = (TObjectPtr<UCameraNode> *)&local_28;
  local_38._Last = (TObjectPtr<UCameraNode> *)&local_10;
  UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>::
  TObjectChildrenView<TObjectPtr<UCameraNode>_>(__return_storage_ptr__,&local_38);
  return __return_storage_ptr__;
}

// StaticRegisterNativesULocationRotationBlendCameraNode @ 14d639390

void __cdecl
ULocationRotationBlendCameraNode::StaticRegisterNativesULocationRotationBlendCameraNode(void)

{
  return;
}

