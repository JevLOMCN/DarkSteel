// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e39e0

UClass * __cdecl USetLocationCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USetLocationCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SetLocationCameraNode",
               &Z_Registration_Info_UClass_USetLocationCameraNode.InnerSingleton,
               StaticRegisterNativesUSetLocationCameraNode,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USetLocationCameraNode>,
               InternalVTableHelperCtorCaller<USetLocationCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USetLocationCameraNode.InnerSingleton;
}

// USetLocationCameraNode @ 14d5ff550

USetLocationCameraNode * __thiscall
USetLocationCameraNode::USetLocationCameraNode(USetLocationCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FVector3dCameraParameter::FVector3dCameraParameter(&this->Location);
  this->OffsetSpace = OwningContext;
  return this;
}

// USetLocationCameraNode @ 14d5ff590

USetLocationCameraNode * __thiscall
USetLocationCameraNode::USetLocationCameraNode
          (USetLocationCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FVector3dCameraParameter::FVector3dCameraParameter(&this->Location);
  this->OffsetSpace = OwningContext;
  return this;
}

// ~USetLocationCameraNode @ 14d600f10

void __thiscall USetLocationCameraNode::~USetLocationCameraNode(USetLocationCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d3e0

UClass * __cdecl USetLocationCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USetLocationCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SetLocationCameraNode",
               &Z_Registration_Info_UClass_USetLocationCameraNode.InnerSingleton,
               StaticRegisterNativesUSetLocationCameraNode,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USetLocationCameraNode>,
               InternalVTableHelperCtorCaller<USetLocationCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USetLocationCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625b60

FCameraNodeEvaluator * __thiscall
USetLocationCameraNode::OnBuildEvaluator
          (USetLocationCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x30,8);
  *(undefined4 *)&pFVar1->field_0x9 = 0;
  *(undefined2 *)&pFVar1->field_0xd = 0;
  pFVar1->field_0xf = 0;
  *(undefined8 *)&pFVar1->PrivateFlags = 7;
  *(undefined4 *)&pFVar1[1].field_0xc = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1[1]._padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FSetLocationCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUSetLocationCameraNode @ 14d639430

void __cdecl USetLocationCameraNode::StaticRegisterNativesUSetLocationCameraNode(void)

{
  return;
}

