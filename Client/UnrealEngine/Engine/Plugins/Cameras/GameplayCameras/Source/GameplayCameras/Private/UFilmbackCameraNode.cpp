// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e2100

UClass * __cdecl UFilmbackCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFilmbackCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"FilmbackCameraNode",
               &Z_Registration_Info_UClass_UFilmbackCameraNode.InnerSingleton,
               StaticRegisterNativesUFilmbackCameraNode,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFilmbackCameraNode>,
               InternalVTableHelperCtorCaller<UFilmbackCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFilmbackCameraNode.InnerSingleton;
}

// UFilmbackCameraNode @ 14d5fe130

UFilmbackCameraNode * __thiscall
UFilmbackCameraNode::UFilmbackCameraNode(UFilmbackCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->SensorWidth).Value = 0.0;
  (this->SensorWidth).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->SensorHeight).Value = 0.0;
  (this->SensorHeight).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->SensorHorizontalOffset).Value = 0.0;
  (this->SensorHorizontalOffset).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->SensorVerticalOffset).Value = 0.0;
  (this->SensorVerticalOffset).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->Overscan).Value = 0.0;
  (this->Overscan).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->ConstrainAspectRatio).Value = false;
  (this->ConstrainAspectRatio).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->OverrideAspectRatioAxisConstraint).Value = false;
  (this->OverrideAspectRatioAxisConstraint).Variable.field0_0x0.DebugPtr =
       (UBooleanCameraVariable *)0x0;
  (this->AspectRatioAxisConstraint).Value = '\0';
  (this->SensorWidth).VariableID.Value = 0xffffffff;
  (this->SensorHeight).VariableID.Value = 0xffffffff;
  (this->SensorHorizontalOffset).VariableID.Value = 0xffffffff;
  (this->SensorVerticalOffset).VariableID.Value = 0xffffffff;
  (this->Overscan).VariableID.Value = 0xffffffff;
  (this->ConstrainAspectRatio).VariableID.Value = 0xffffffff;
  (this->OverrideAspectRatioAxisConstraint).VariableID.Value = 0xffffffff;
  return this;
}

// UFilmbackCameraNode @ 14d5fe1f0

UFilmbackCameraNode * __thiscall
UFilmbackCameraNode::UFilmbackCameraNode(UFilmbackCameraNode *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UCameraNode::UCameraNode((UCameraNode *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->SensorWidth).Value = 0.0;
  (this->SensorWidth).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->SensorHeight).Value = 0.0;
  (this->SensorHeight).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->SensorHorizontalOffset).Value = 0.0;
  (this->SensorHorizontalOffset).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->SensorVerticalOffset).Value = 0.0;
  (this->SensorVerticalOffset).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->Overscan).Value = 0.0;
  (this->Overscan).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->ConstrainAspectRatio).Value = false;
  (this->ConstrainAspectRatio).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->OverrideAspectRatioAxisConstraint).Value = false;
  (this->OverrideAspectRatioAxisConstraint).Variable.field0_0x0.DebugPtr =
       (UBooleanCameraVariable *)0x0;
  (this->AspectRatioAxisConstraint).Value = '\0';
  (this->SensorWidth).VariableID.Value = 0xffffffff;
  (this->SensorHeight).VariableID.Value = 0xffffffff;
  (this->SensorHorizontalOffset).VariableID.Value = 0xffffffff;
  (this->SensorVerticalOffset).VariableID.Value = 0xffffffff;
  (this->Overscan).VariableID.Value = 0xffffffff;
  (this->ConstrainAspectRatio).VariableID.Value = 0xffffffff;
  (this->OverrideAspectRatioAxisConstraint).VariableID.Value = 0xffffffff;
  FCameraPose::GetDefaultSensorSize(&(this->SensorWidth).Value,&(this->SensorHeight).Value);
  return this;
}

// ~UFilmbackCameraNode @ 14d600950

void __thiscall UFilmbackCameraNode::~UFilmbackCameraNode(UFilmbackCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61c420

UClass * __cdecl UFilmbackCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFilmbackCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"FilmbackCameraNode",
               &Z_Registration_Info_UClass_UFilmbackCameraNode.InnerSingleton,
               StaticRegisterNativesUFilmbackCameraNode,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFilmbackCameraNode>,
               InternalVTableHelperCtorCaller<UFilmbackCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFilmbackCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625640

FCameraNodeEvaluator * __thiscall
UFilmbackCameraNode::OnBuildEvaluator
          (UFilmbackCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x90,8);
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
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  pFVar1->_padding_ = (longlong)&___7FFilmbackCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1[1]._padding_ = 0;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1[2]._padding_ = 0;
  pFVar1[2].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1[3]._padding_ = 0;
  pFVar1[3].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1[4]._padding_ = 0;
  *(undefined4 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[1].PrivateFlags = ~None;
  *(undefined4 *)&pFVar1[2].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[2].PrivateFlags = ~None;
  *(undefined4 *)&pFVar1[3].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[3].PrivateFlags = ~None;
  *(undefined4 *)&pFVar1[4].bAutoCameraPoseMovementTrail = 0xffffffff;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUFilmbackCameraNode @ 14d6391c0

void __cdecl UFilmbackCameraNode::StaticRegisterNativesUFilmbackCameraNode(void)

{
  return;
}

