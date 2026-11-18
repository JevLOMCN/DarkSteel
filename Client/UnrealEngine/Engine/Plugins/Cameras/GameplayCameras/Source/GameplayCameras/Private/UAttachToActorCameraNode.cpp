// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e4fe0

UClass * __cdecl UAttachToActorCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAttachToActorCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AttachToActorCameraNode",
               &Z_Registration_Info_UClass_UAttachToActorCameraNode.InnerSingleton,
               StaticRegisterNativesUAttachToActorCameraNode,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAttachToActorCameraNode>,
               InternalVTableHelperCtorCaller<UAttachToActorCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAttachToActorCameraNode.InnerSingleton;
}

// UAttachToActorCameraNode @ 14d5fd380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAttachToActorCameraNode * __thiscall
UAttachToActorCameraNode::UAttachToActorCameraNode
          (UAttachToActorCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->Attachment).Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (this->Attachment).SocketName.ComparisonIndex = 0;
  (this->Attachment).SocketName.Number = 0;
  (this->Attachment).BoneName.ComparisonIndex = 0;
  (this->Attachment).BoneName.Number = 0;
  (this->AttachToLocation).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->AttachToRotation).Value = false;
  (this->AttachToRotation).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->Attachment).Weight = 1.0;
  (this->AttachmentDataID).Value = 0xffffffff;
  (this->AttachToLocation).Value = true;
  (this->AttachToLocation).VariableID.Value = 0xffffffff;
  (this->AttachToRotation).VariableID.Value = 0xffffffff;
  return this;
}

// UAttachToActorCameraNode @ 14d5fd3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAttachToActorCameraNode * __thiscall
UAttachToActorCameraNode::UAttachToActorCameraNode
          (UAttachToActorCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->Attachment).Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (this->Attachment).SocketName.ComparisonIndex = 0;
  (this->Attachment).SocketName.Number = 0;
  (this->Attachment).BoneName.ComparisonIndex = 0;
  (this->Attachment).BoneName.Number = 0;
  (this->AttachToLocation).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->AttachToRotation).Value = false;
  (this->AttachToRotation).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->Attachment).Weight = 1.0;
  (this->AttachmentDataID).Value = 0xffffffff;
  (this->AttachToLocation).Value = true;
  (this->AttachToLocation).VariableID.Value = 0xffffffff;
  (this->AttachToRotation).VariableID.Value = 0xffffffff;
  return this;
}

// ~UAttachToActorCameraNode @ 14d600650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAttachToActorCameraNode::~UAttachToActorCameraNode(UAttachToActorCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61b9a0

UClass * __cdecl UAttachToActorCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAttachToActorCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AttachToActorCameraNode",
               &Z_Registration_Info_UClass_UAttachToActorCameraNode.InnerSingleton,
               StaticRegisterNativesUAttachToActorCameraNode,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAttachToActorCameraNode>,
               InternalVTableHelperCtorCaller<UAttachToActorCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAttachToActorCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d624e80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCameraNodeEvaluator * __thiscall
UAttachToActorCameraNode::OnBuildEvaluator
          (UAttachToActorCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *_Dst;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  _Dst = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
         BuildObjectUninitialized(this_00,0x120,0x10);
  memset(_Dst,0,0x120);
  _Dst->bAutoCameraPoseMovementTrail = true;
  _Dst->_padding_ = (longlong)&___7FAttachToActorCameraNodeEvaluator_Cameras_UE__6B_;
  _Dst->PrivateFlags = Default;
  _Dst[1]._padding_ = 0;
  *(undefined8 *)&_Dst[1].bAutoCameraPoseMovementTrail = 0;
  _Dst[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&_Dst[2].bAutoCameraPoseMovementTrail = 0;
  _Dst[2].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&_Dst[2].PrivateFlags = 0;
  *(undefined8 *)&_Dst[3].bAutoCameraPoseMovementTrail = 0;
  _Dst[3].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&_Dst[3].PrivateFlags = 0;
  *(undefined8 *)&_Dst[4].bAutoCameraPoseMovementTrail = 0;
  *(undefined1 *)&_Dst[8]._padding_ = 0;
  _Dst[1].PrivateFlags = 0x3f800000;
  *(undefined4 *)&_Dst[2]._padding_ = 0xffffffff;
  *(undefined4 *)&_Dst[3]._padding_ = 0x3f800000;
  *(undefined4 *)&_Dst[4]._padding_ = 0xffffffff;
  *(undefined4 *)&_Dst[4].PrivateCameraNode.field0_0x0 = 0xffffffff;
  *(undefined1 *)&_Dst[8].PrivateCameraNode.field0_0x0 = 1;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,_Dst);
  return _Dst;
}

// StaticRegisterNativesUAttachToActorCameraNode @ 14d6390e0

void __cdecl UAttachToActorCameraNode::StaticRegisterNativesUAttachToActorCameraNode(void)

{
  return;
}

