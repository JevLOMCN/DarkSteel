// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e0170

UClass * __cdecl UDampenPositionCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDampenPositionCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DampenPositionCameraNode",
               &Z_Registration_Info_UClass_UDampenPositionCameraNode.InnerSingleton,
               StaticRegisterNativesUDampenPositionCameraNode,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDampenPositionCameraNode>,
               InternalVTableHelperCtorCaller<UDampenPositionCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDampenPositionCameraNode.InnerSingleton;
}

// UDampenPositionCameraNode @ 14d5fdef0

UDampenPositionCameraNode * __thiscall
UDampenPositionCameraNode::UDampenPositionCameraNode
          (UDampenPositionCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->ForwardDampingFactor).Value = 0.0;
  (this->ForwardDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->LateralDampingFactor).Value = 0.0;
  (this->LateralDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->VerticalDampingFactor).Value = 0.0;
  (this->VerticalDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  this->DampenSpace = CameraPose;
  (this->ForwardDampingFactor).VariableID.Value = 0xffffffff;
  (this->LateralDampingFactor).VariableID.Value = 0xffffffff;
  (this->VerticalDampingFactor).VariableID.Value = 0xffffffff;
  return this;
}

// UDampenPositionCameraNode @ 14d5fdf60

UDampenPositionCameraNode * __thiscall
UDampenPositionCameraNode::UDampenPositionCameraNode
          (UDampenPositionCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->ForwardDampingFactor).Value = 0.0;
  (this->ForwardDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->LateralDampingFactor).Value = 0.0;
  (this->LateralDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->VerticalDampingFactor).Value = 0.0;
  (this->VerticalDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  this->DampenSpace = CameraPose;
  (this->ForwardDampingFactor).VariableID.Value = 0xffffffff;
  (this->LateralDampingFactor).VariableID.Value = 0xffffffff;
  (this->VerticalDampingFactor).VariableID.Value = 0xffffffff;
  return this;
}

// ~UDampenPositionCameraNode @ 14d6008f0

void __thiscall
UDampenPositionCameraNode::~UDampenPositionCameraNode(UDampenPositionCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61c1e0

UClass * __cdecl UDampenPositionCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDampenPositionCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DampenPositionCameraNode",
               &Z_Registration_Info_UClass_UDampenPositionCameraNode.InnerSingleton,
               StaticRegisterNativesUDampenPositionCameraNode,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDampenPositionCameraNode>,
               InternalVTableHelperCtorCaller<UDampenPositionCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDampenPositionCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625410

FCameraNodeEvaluator * __thiscall
UDampenPositionCameraNode::OnBuildEvaluator
          (UDampenPositionCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0xf0,8);
  *(undefined4 *)&pFVar1->field_0x9 = 0;
  *(undefined2 *)&pFVar1->field_0xd = 0;
  pFVar1->field_0xf = 0;
  *(undefined8 *)&pFVar1->PrivateFlags = 7;
  *(undefined4 *)&pFVar1[1].field_0xc = 0;
  *(undefined4 *)&pFVar1[1].field_0x1c = 0;
  *(undefined4 *)&pFVar1[2].field_0xc = 0;
  *(undefined8 *)((longlong)&pFVar1[3].PrivateCameraNode.field0_0x0 + 4) = 0;
  *(undefined8 *)&pFVar1[3].field_0x1c = 0;
  *(undefined8 *)((longlong)&pFVar1[4]._padding_ + 4) = 0;
  *(undefined8 *)&pFVar1[4].field_0xc = 0;
  *(undefined8 *)((longlong)&pFVar1[4].PrivateCameraNode.field0_0x0 + 4) = 0;
  *(undefined8 *)&pFVar1[4].field_0x1c = 0;
  *(undefined8 *)((longlong)&pFVar1[5]._padding_ + 4) = 0;
  *(undefined8 *)&pFVar1[5].field_0xc = 0;
  *(undefined8 *)((longlong)&pFVar1[5].PrivateCameraNode.field0_0x0 + 4) = 0;
  *(undefined8 *)&pFVar1[5].field_0x1c = 0;
  *(undefined8 *)((longlong)&pFVar1[6]._padding_ + 4) = 0;
  *(undefined8 *)&pFVar1[6].field_0xc = 0;
  *(undefined8 *)((longlong)&pFVar1[6].PrivateCameraNode.field0_0x0 + 4) = 0;
  *(undefined8 *)&pFVar1[6].field_0x1c = 0;
  *(undefined8 *)((longlong)&pFVar1[7]._padding_ + 4) = 0;
  *(undefined4 *)&pFVar1[7].field_0xc = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1[1]._padding_ = 0;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1[2]._padding_ = 0;
  *(undefined8 *)((longlong)&pFVar1[2].PrivateCameraNode.field0_0x0 + 4) = 0;
  pFVar1[3]._padding_ = 0;
  *(undefined8 *)&pFVar1[3].field_0xc = 0;
  pFVar1->_padding_ = (longlong)&___7FDampenPositionCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  *(undefined4 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[1].PrivateFlags = ~None;
  *(undefined4 *)&pFVar1[2].bAutoCameraPoseMovementTrail = 0xffffffff;
  *(undefined4 *)&pFVar1[2].PrivateCameraNode.field0_0x0 = 0xbf800000;
  *(undefined4 *)&pFVar1[2].field_0x1c = 0xbf800000;
  *(undefined4 *)&pFVar1[3].bAutoCameraPoseMovementTrail = 0xbf800000;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUDampenPositionCameraNode @ 14d639190

void __cdecl UDampenPositionCameraNode::StaticRegisterNativesUDampenPositionCameraNode(void)

{
  return;
}

