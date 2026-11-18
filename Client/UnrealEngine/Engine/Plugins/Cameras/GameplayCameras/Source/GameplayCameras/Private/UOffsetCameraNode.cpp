// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5e29c0

UClass * __cdecl UOffsetCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOffsetCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"OffsetCameraNode",
               &Z_Registration_Info_UClass_UOffsetCameraNode.InnerSingleton,
               StaticRegisterNativesUOffsetCameraNode,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOffsetCameraNode>,
               InternalVTableHelperCtorCaller<UOffsetCameraNode>,local_res8,UCameraNode::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOffsetCameraNode.InnerSingleton;
}

// UOffsetCameraNode @ 14d5ff270

UOffsetCameraNode * __thiscall
UOffsetCameraNode::UOffsetCameraNode(UOffsetCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FVector3dCameraParameter::FVector3dCameraParameter(&this->TranslationOffset);
  FRotator3dCameraParameter::FRotator3dCameraParameter(&this->RotationOffset);
  this->OffsetSpace = CameraPose;
  return this;
}

// UOffsetCameraNode @ 14d5ff2c0

UOffsetCameraNode * __thiscall
UOffsetCameraNode::UOffsetCameraNode(UOffsetCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FVector3dCameraParameter::FVector3dCameraParameter(&this->TranslationOffset);
  FRotator3dCameraParameter::FRotator3dCameraParameter(&this->RotationOffset);
  this->OffsetSpace = CameraPose;
  return this;
}

// ~UOffsetCameraNode @ 14d600e40

void __thiscall UOffsetCameraNode::~UOffsetCameraNode(UOffsetCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetEvaluatorAllocationInfo @ 14d61a2f0

TTuple<int,int> __cdecl UOffsetCameraNode::GetEvaluatorAllocationInfo(void)

{
  TTuple<int,int> in_RCX;
  
  *(undefined4 *)in_RCX = 0x40;
  *(undefined4 *)((longlong)in_RCX + 4) = 8;
  return in_RCX;
}

// GetPrivateStaticClass @ 14d61d020

UClass * __cdecl UOffsetCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOffsetCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"OffsetCameraNode",
               &Z_Registration_Info_UClass_UOffsetCameraNode.InnerSingleton,
               StaticRegisterNativesUOffsetCameraNode,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOffsetCameraNode>,
               InternalVTableHelperCtorCaller<UOffsetCameraNode>,local_res8,UCameraNode::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOffsetCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625910

FCameraNodeEvaluator * __thiscall
UOffsetCameraNode::OnBuildEvaluator(UOffsetCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x40,8);
  *(undefined4 *)&pFVar1->field_0x9 = 0;
  *(undefined2 *)&pFVar1->field_0xd = 0;
  pFVar1->field_0xf = 0;
  *(undefined8 *)&pFVar1->PrivateFlags = 7;
  *(undefined4 *)&pFVar1[1].field_0xc = 0;
  *(undefined4 *)&pFVar1[1].field_0x1c = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1[1]._padding_ = 0;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->_padding_ = (longlong)&___7FOffsetCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[1].PrivateFlags = ~None;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUOffsetCameraNode @ 14d6393e0

void __cdecl UOffsetCameraNode::StaticRegisterNativesUOffsetCameraNode(void)

{
  return;
}

