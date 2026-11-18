// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d536be0

UClass * __cdecl UBlendStackCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendStackCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlendStackCameraNode",
               &Z_Registration_Info_UClass_UBlendStackCameraNode.InnerSingleton,
               StaticRegisterNativesUBlendStackCameraNode,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlendStackCameraNode>,
               InternalVTableHelperCtorCaller<UBlendStackCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendStackCameraNode.InnerSingleton;
}

// UBlendStackCameraNode @ 14d543880

UBlendStackCameraNode * __thiscall
UBlendStackCameraNode::UBlendStackCameraNode(UBlendStackCameraNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->Layer = None;
  return this;
}

// UBlendStackCameraNode @ 14d5438c0

UBlendStackCameraNode * __thiscall
UBlendStackCameraNode::UBlendStackCameraNode
          (UBlendStackCameraNode *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->Layer = None;
  return this;
}

// ~UBlendStackCameraNode @ 14d544ab0

void __thiscall UBlendStackCameraNode::~UBlendStackCameraNode(UBlendStackCameraNode *this)

{
  this->_padding_ = (longlong)&UCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d5583c0

UClass * __cdecl UBlendStackCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendStackCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlendStackCameraNode",
               &Z_Registration_Info_UClass_UBlendStackCameraNode.InnerSingleton,
               StaticRegisterNativesUBlendStackCameraNode,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlendStackCameraNode>,
               InternalVTableHelperCtorCaller<UBlendStackCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendStackCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d55b310

FCameraNodeEvaluator * __thiscall
UBlendStackCameraNode::OnBuildEvaluator
          (UBlendStackCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCameraNodeEvaluator *pFVar3;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  
  if (this->BlendStackType == IsolatedTransient) {
    this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
    pFVar3 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
             BuildObjectUninitialized(this_00,0xf0,8);
    *(undefined4 *)&pFVar3->field_0x9 = 0;
    *(undefined2 *)&pFVar3->field_0xd = 0;
    pFVar3->field_0xf = 0;
    *(undefined8 *)&pFVar3->PrivateFlags = 2;
    *(undefined2 *)&pFVar3[1].field_0x1d = 0;
    pFVar3[1].field_0x1f = 0;
    pFVar3[3].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
    *(undefined8 *)&pFVar3[3].PrivateFlags = 0;
    pFVar3[4]._padding_ = 0;
    *(undefined8 *)&pFVar3[4].bAutoCameraPoseMovementTrail = 0;
    pFVar3[4].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
    *(undefined8 *)&pFVar3[4].PrivateFlags = 0;
    pFVar3[5]._padding_ = 0;
    *(undefined8 *)&pFVar3[5].bAutoCameraPoseMovementTrail = 0;
    pFVar3[5].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
    *(undefined8 *)&pFVar3[5].PrivateFlags = 0;
    pFVar3[6]._padding_ = 0;
    *(undefined8 *)&pFVar3[6].bAutoCameraPoseMovementTrail = 0;
    pFVar3[6].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
    *(undefined8 *)&pFVar3[6].PrivateFlags = 0;
    pFVar3[7]._padding_ = 0;
    *(undefined8 *)&pFVar3[7].bAutoCameraPoseMovementTrail = 0;
    pFVar3[1].field_0x1c = 0;
    pFVar3->bAutoCameraPoseMovementTrail = false;
    pFVar3->_padding_ = (longlong)&___7FTransientBlendStackCameraNodeEvaluator_Cameras_UE__6B_;
    (pFVar3->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
    pFVar3[1]._padding_ = 0;
    *(undefined8 *)&pFVar3[1].bAutoCameraPoseMovementTrail = 0;
    pFVar3[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
    pFVar3[1].PrivateFlags = None;
    pFVar3[2]._padding_ = 0;
    *(undefined8 *)&pFVar3[2].bAutoCameraPoseMovementTrail = 0;
    pFVar3[2].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
    *(undefined8 *)&pFVar3[2].PrivateFlags = 2;
    pFVar3[3]._padding_ = 0;
    *(undefined8 *)&pFVar3[3].bAutoCameraPoseMovementTrail = 0;
    UE::Cameras::FCameraVariableTable::FCameraVariableTable
              ((FCameraVariableTable *)&pFVar3[3].PrivateCameraNode);
    pFVar3[7]._padding_ = 0;
    *(undefined8 *)&pFVar3[7].bAutoCameraPoseMovementTrail = 0;
  }
  else {
    if (this->BlendStackType != AdditivePersistent) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2377111849687580624>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\BlendStackCameraNode.cpp"
                         ,0x30,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FCameraNodeEvaluator *)(*pcVar1)();
        return pFVar3;
      }
      return (FCameraNodeEvaluator *)0x0;
    }
    this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
    pFVar3 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
             BuildObjectUninitialized(this_00,0x70,8);
    *(undefined4 *)&pFVar3->field_0x9 = 0;
    *(undefined2 *)&pFVar3->field_0xd = 0;
    pFVar3->field_0xf = 0;
    *(undefined8 *)&pFVar3->PrivateFlags = 2;
    *(undefined2 *)&pFVar3[1].field_0x1d = 0;
    pFVar3[1].field_0x1f = 0;
    pFVar3[1].field_0x1c = 0;
    pFVar3->bAutoCameraPoseMovementTrail = false;
    pFVar3->_padding_ = (longlong)&___7FPersistentBlendStackCameraNodeEvaluator_Cameras_UE__6B_;
    (pFVar3->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
    pFVar3[1]._padding_ = 0;
    *(undefined8 *)&pFVar3[1].bAutoCameraPoseMovementTrail = 0;
    pFVar3[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
    pFVar3[1].PrivateFlags = None;
    pFVar3[2]._padding_ = 0;
    *(undefined8 *)&pFVar3[2].bAutoCameraPoseMovementTrail = 0;
    pFVar3[2].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
    *(undefined8 *)&pFVar3[2].PrivateFlags = 2;
    pFVar3[3]._padding_ = 0;
    *(undefined8 *)&pFVar3[3].bAutoCameraPoseMovementTrail = 0;
  }
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar3);
  return pFVar3;
}

// StaticRegisterNativesUBlendStackCameraNode @ 14d568570

void __cdecl UBlendStackCameraNode::StaticRegisterNativesUBlendStackCameraNode(void)

{
  return;
}

