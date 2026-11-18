// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e55d0

UClass * __cdecl UTargetRayCastCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTargetRayCastCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"TargetRayCastCameraNode",
               &Z_Registration_Info_UClass_UTargetRayCastCameraNode.InnerSingleton,
               StaticRegisterNativesUTargetRayCastCameraNode,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTargetRayCastCameraNode>,
               InternalVTableHelperCtorCaller<UTargetRayCastCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTargetRayCastCameraNode.InnerSingleton;
}

// UTargetRayCastCameraNode @ 14d5ffb40

UTargetRayCastCameraNode * __thiscall
UTargetRayCastCameraNode::UTargetRayCastCameraNode
          (UTargetRayCastCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->TraceChannel).Value = '\x04';
  (this->AutoFocus).Value = true;
  (this->AutoFocus).VariableID.Value = 0xffffffff;
  (this->AutoFocus).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  return this;
}

// UTargetRayCastCameraNode @ 14d5ffb90

UTargetRayCastCameraNode * __thiscall
UTargetRayCastCameraNode::UTargetRayCastCameraNode
          (UTargetRayCastCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->TraceChannel).Value = '\x04';
  (this->AutoFocus).Value = true;
  (this->AutoFocus).VariableID.Value = 0xffffffff;
  (this->AutoFocus).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  return this;
}

// ~UTargetRayCastCameraNode @ 14d6010f0

void __thiscall UTargetRayCastCameraNode::~UTargetRayCastCameraNode(UTargetRayCastCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d9e0

UClass * __cdecl UTargetRayCastCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTargetRayCastCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"TargetRayCastCameraNode",
               &Z_Registration_Info_UClass_UTargetRayCastCameraNode.InnerSingleton,
               StaticRegisterNativesUTargetRayCastCameraNode,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTargetRayCastCameraNode>,
               InternalVTableHelperCtorCaller<UTargetRayCastCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTargetRayCastCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625e30

FCameraNodeEvaluator * __thiscall
UTargetRayCastCameraNode::OnBuildEvaluator
          (UTargetRayCastCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x68,8);
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
  pFVar1->_padding_ = (longlong)&___7FTargetRayCastCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1[1]._padding_ = 0;
  pFVar1[2].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1[2].PrivateFlags = 0;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x408f400000000000;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  *(undefined4 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUTargetRayCastCameraNode @ 14d6394b0

void __cdecl UTargetRayCastCameraNode::StaticRegisterNativesUTargetRayCastCameraNode(void)

{
  return;
}

