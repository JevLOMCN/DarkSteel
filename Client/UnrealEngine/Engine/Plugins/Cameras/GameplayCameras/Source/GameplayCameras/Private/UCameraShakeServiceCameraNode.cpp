// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d645cc0

UClass * __cdecl UCameraShakeServiceCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeServiceCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraShakeServiceCameraNode",
               &Z_Registration_Info_UClass_UCameraShakeServiceCameraNode.InnerSingleton,
               StaticRegisterNativesUCameraShakeServiceCameraNode,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraShakeServiceCameraNode>,
               InternalVTableHelperCtorCaller<UCameraShakeServiceCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeServiceCameraNode.InnerSingleton;
}

// UCameraShakeServiceCameraNode @ 14d656f50

UCameraShakeServiceCameraNode * __thiscall
UCameraShakeServiceCameraNode::UCameraShakeServiceCameraNode
          (UCameraShakeServiceCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// UCameraShakeServiceCameraNode @ 14d656f90

UCameraShakeServiceCameraNode * __thiscall
UCameraShakeServiceCameraNode::UCameraShakeServiceCameraNode
          (UCameraShakeServiceCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// ~UCameraShakeServiceCameraNode @ 14d658300

void __thiscall
UCameraShakeServiceCameraNode::~UCameraShakeServiceCameraNode(UCameraShakeServiceCameraNode *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d660690

UClass * __cdecl UCameraShakeServiceCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeServiceCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraShakeServiceCameraNode",
               &Z_Registration_Info_UClass_UCameraShakeServiceCameraNode.InnerSingleton,
               StaticRegisterNativesUCameraShakeServiceCameraNode,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraShakeServiceCameraNode>,
               InternalVTableHelperCtorCaller<UCameraShakeServiceCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeServiceCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d6658c0

FCameraNodeEvaluator * __thiscall
UCameraShakeServiceCameraNode::OnBuildEvaluator
          (UCameraShakeServiceCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

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
  pFVar1->_padding_ = (longlong)&___7FCameraShakeServiceCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1[1]._padding_ = 0;
  *(undefined8 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1[1].PrivateFlags = 0;
  pFVar1[2]._padding_ = 0;
  *(undefined8 *)&pFVar1[2].bAutoCameraPoseMovementTrail = 0;
  *(undefined4 *)&pFVar1[2].PrivateCameraNode.field0_0x0 = 0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUCameraShakeServiceCameraNode @ 14d673350

void __cdecl UCameraShakeServiceCameraNode::StaticRegisterNativesUCameraShakeServiceCameraNode(void)

{
  return;
}

