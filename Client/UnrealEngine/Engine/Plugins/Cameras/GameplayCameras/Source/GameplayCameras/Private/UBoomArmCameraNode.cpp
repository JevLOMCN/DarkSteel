// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5e2f70

UClass * __cdecl UBoomArmCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoomArmCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BoomArmCameraNode",
               &Z_Registration_Info_UClass_UBoomArmCameraNode.InnerSingleton,
               StaticRegisterNativesUBoomArmCameraNode,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBoomArmCameraNode>,
               InternalVTableHelperCtorCaller<UBoomArmCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoomArmCameraNode.InnerSingleton;
}

// UBoomArmCameraNode @ 14d5fda40

UBoomArmCameraNode * __thiscall
UBoomArmCameraNode::UBoomArmCameraNode(UBoomArmCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FVector3dCameraParameter::FVector3dCameraParameter(&this->BoomOffset);
  (this->MaxForwardInterpolationFactor).VariableID.Value = 0xffffffff;
  (this->BoomLengthInterpolator).field0_0x0.DebugPtr = (UCameraValueInterpolator *)0x0;
  (this->MaxForwardInterpolationFactor).Value = -1.0;
  (this->MaxBackwardInterpolationFactor).Value = -1.0;
  (this->MaxForwardInterpolationFactor).Variable.field0_0x0.DebugPtr = (UDoubleCameraVariable *)0x0;
  (this->MaxBackwardInterpolationFactor).VariableID.Value = 0xffffffff;
  (this->MaxBackwardInterpolationFactor).Variable.field0_0x0.DebugPtr = (UDoubleCameraVariable *)0x0
  ;
  (this->InputSlot).field0_0x0.DebugPtr = (UInput2DCameraNode *)0x0;
  return this;
}

// UBoomArmCameraNode @ 14d5fdac0

UBoomArmCameraNode * __thiscall
UBoomArmCameraNode::UBoomArmCameraNode(UBoomArmCameraNode *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FVector3dCameraParameter::FVector3dCameraParameter(&this->BoomOffset);
  (this->MaxForwardInterpolationFactor).VariableID.Value = 0xffffffff;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  (this->MaxForwardInterpolationFactor).Value = -1.0;
  (this->MaxBackwardInterpolationFactor).Value = -1.0;
  (this->BoomLengthInterpolator).field0_0x0.DebugPtr = (UCameraValueInterpolator *)0x0;
  (this->MaxForwardInterpolationFactor).Variable.field0_0x0.DebugPtr = (UDoubleCameraVariable *)0x0;
  (this->MaxBackwardInterpolationFactor).VariableID.Value = 0xffffffff;
  (this->MaxBackwardInterpolationFactor).Variable.field0_0x0.DebugPtr = (UDoubleCameraVariable *)0x0
  ;
  (this->InputSlot).field0_0x0.DebugPtr = (UInput2DCameraNode *)0x0;
  return this;
}

// ~UBoomArmCameraNode @ 14d600770

void __thiscall UBoomArmCameraNode::~UBoomArmCameraNode(UBoomArmCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61be20

UClass * __cdecl UBoomArmCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoomArmCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BoomArmCameraNode",
               &Z_Registration_Info_UClass_UBoomArmCameraNode.InnerSingleton,
               StaticRegisterNativesUBoomArmCameraNode,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBoomArmCameraNode>,
               InternalVTableHelperCtorCaller<UBoomArmCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoomArmCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625190

FCameraNodeEvaluator * __thiscall
UBoomArmCameraNode::OnBuildEvaluator(UBoomArmCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x98,8);
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
  *(undefined8 *)&pFVar1[2].PrivateFlags = 0;
  pFVar1[3]._padding_ = 0;
  *(undefined8 *)&pFVar1[3].bAutoCameraPoseMovementTrail = 0;
  pFVar1[3].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1[3].PrivateFlags = 0;
  pFVar1[4]._padding_ = 0;
  *(undefined8 *)&pFVar1[4].bAutoCameraPoseMovementTrail = 0;
  pFVar1[4].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->_padding_ = (longlong)&___7FBoomArmCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1[1]._padding_ = 0;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1[1].PrivateFlags = 0;
  pFVar1[2]._padding_ = 0;
  pFVar1[2].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  *(undefined4 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  *(undefined4 *)&pFVar1[2].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[2].PrivateFlags = ~None;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// OnGetChildren @ 14d6278b0

TObjectChildrenView<TObjectPtr<UCameraNode>_> * __thiscall
UBoomArmCameraNode::OnGetChildren
          (UBoomArmCameraNode *this,
          TObjectChildrenView<TObjectPtr<UCameraNode>_> *__return_storage_ptr__)

{
  TObjectPtr<UInput2DCameraNode>_u_0 local_res8;
  TObjectPtr<UCameraNode> local_res10 [3];
  initializer_list<TObjectPtr<UCameraNode>_> local_18;
  
  local_res8 = (TObjectPtr<UInput2DCameraNode>_u_0)(this->InputSlot).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_res8.DebugPtr != (UInput2DCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_18._First = (TObjectPtr<UCameraNode> *)&local_res8;
  local_18._Last = local_res10;
  UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>::
  TObjectChildrenView<TObjectPtr<UCameraNode>_>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUBoomArmCameraNode @ 14d639140

void __cdecl UBoomArmCameraNode::StaticRegisterNativesUBoomArmCameraNode(void)

{
  return;
}

