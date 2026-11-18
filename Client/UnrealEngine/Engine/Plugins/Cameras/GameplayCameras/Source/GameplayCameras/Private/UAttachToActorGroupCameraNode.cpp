// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e0270

UClass * __cdecl UAttachToActorGroupCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAttachToActorGroupCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AttachToActorGroupCameraNode",
               &Z_Registration_Info_UClass_UAttachToActorGroupCameraNode.InnerSingleton,
               StaticRegisterNativesUAttachToActorGroupCameraNode,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAttachToActorGroupCameraNode>,
               InternalVTableHelperCtorCaller<UAttachToActorGroupCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAttachToActorGroupCameraNode.InnerSingleton;
}

// UAttachToActorGroupCameraNode @ 14d5fd460

UAttachToActorGroupCameraNode * __thiscall
UAttachToActorGroupCameraNode::UAttachToActorGroupCameraNode
          (UAttachToActorGroupCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attachments).ArrayNum = 0;
  (this->Attachments).ArrayMax = 0;
  (this->AttachmentsDataID).Value = 0xffffffff;
  return this;
}

// UAttachToActorGroupCameraNode @ 14d5fd4b0

UAttachToActorGroupCameraNode * __thiscall
UAttachToActorGroupCameraNode::UAttachToActorGroupCameraNode
          (UAttachToActorGroupCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attachments).ArrayNum = 0;
  (this->Attachments).ArrayMax = 0;
  (this->AttachmentsDataID).Value = 0xffffffff;
  return this;
}

// ~UAttachToActorGroupCameraNode @ 14d600670

void __thiscall
UAttachToActorGroupCameraNode::~UAttachToActorGroupCameraNode(UAttachToActorGroupCameraNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->Attachments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61ba60

UClass * __cdecl UAttachToActorGroupCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAttachToActorGroupCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AttachToActorGroupCameraNode",
               &Z_Registration_Info_UClass_UAttachToActorGroupCameraNode.InnerSingleton,
               StaticRegisterNativesUAttachToActorGroupCameraNode,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAttachToActorGroupCameraNode>,
               InternalVTableHelperCtorCaller<UAttachToActorGroupCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAttachToActorGroupCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d624f50

FCameraNodeEvaluator * __thiscall
UAttachToActorGroupCameraNode::OnBuildEvaluator
          (UAttachToActorGroupCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x38,8);
  *(undefined4 *)&pFVar1->field_0x9 = 0;
  *(undefined2 *)&pFVar1->field_0xd = 0;
  pFVar1->field_0xf = 0;
  *(undefined8 *)&pFVar1->PrivateFlags = 7;
  *(undefined4 *)((longlong)&pFVar1[1].PrivateCameraNode.field0_0x0 + 4) = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1[1]._padding_ = 0;
  *(undefined8 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0;
  pFVar1->_padding_ = (longlong)&___7FAttachToActorGroupCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&pFVar1[1].PrivateCameraNode.field0_0x0 = 0xffffffff;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUAttachToActorGroupCameraNode @ 14d6390f0

void __cdecl UAttachToActorGroupCameraNode::StaticRegisterNativesUAttachToActorGroupCameraNode(void)

{
  return;
}

