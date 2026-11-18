// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d64a6d0

UClass * __cdecl UUpdateTrackerCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUpdateTrackerCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"UpdateTrackerCameraNode",
               &Z_Registration_Info_UClass_UUpdateTrackerCameraNode.InnerSingleton,
               StaticRegisterNativesUUpdateTrackerCameraNode,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUpdateTrackerCameraNode>,
               InternalVTableHelperCtorCaller<UUpdateTrackerCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUpdateTrackerCameraNode.InnerSingleton;
}

// UUpdateTrackerCameraNode @ 14d657c30

UUpdateTrackerCameraNode * __thiscall
UUpdateTrackerCameraNode::UUpdateTrackerCameraNode
          (UUpdateTrackerCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->DoubleParameter).VariableID.Value = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->DoubleParameter).Value = 0.0;
  (this->DoubleParameter).Variable.field0_0x0.DebugPtr = (UDoubleCameraVariable *)0x0;
  FVector3dCameraParameter::FVector3dCameraParameter(&this->VectorParameter);
  return this;
}

// UUpdateTrackerCameraNode @ 14d657c80

UUpdateTrackerCameraNode * __thiscall
UUpdateTrackerCameraNode::UUpdateTrackerCameraNode
          (UUpdateTrackerCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->DoubleParameter).VariableID.Value = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->DoubleParameter).Value = 0.0;
  (this->DoubleParameter).Variable.field0_0x0.DebugPtr = (UDoubleCameraVariable *)0x0;
  FVector3dCameraParameter::FVector3dCameraParameter(&this->VectorParameter);
  return this;
}

// ~UUpdateTrackerCameraNode @ 14d6586e0

void __thiscall UUpdateTrackerCameraNode::~UUpdateTrackerCameraNode(UUpdateTrackerCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d6614d0

UClass * __cdecl UUpdateTrackerCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUpdateTrackerCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"UpdateTrackerCameraNode",
               &Z_Registration_Info_UClass_UUpdateTrackerCameraNode.InnerSingleton,
               StaticRegisterNativesUUpdateTrackerCameraNode,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUpdateTrackerCameraNode>,
               InternalVTableHelperCtorCaller<UUpdateTrackerCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUpdateTrackerCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d665e40

FCameraNodeEvaluator * __thiscall
UUpdateTrackerCameraNode::OnBuildEvaluator
          (UUpdateTrackerCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x30,8);
  *(undefined4 *)&pFVar1->field_0x9 = 0;
  *(undefined2 *)&pFVar1->field_0xd = 0;
  pFVar1->field_0xf = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1->PrivateFlags = 7;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1[1]._padding_ = 0;
  *(undefined8 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0;
  pFVar1->_padding_ = (longlong)&___7FUpdateTrackerCameraNodeEvaluator_Test_Cameras_UE__6B_;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUUpdateTrackerCameraNode @ 14d673480

void __cdecl UUpdateTrackerCameraNode::StaticRegisterNativesUUpdateTrackerCameraNode(void)

{
  return;
}

