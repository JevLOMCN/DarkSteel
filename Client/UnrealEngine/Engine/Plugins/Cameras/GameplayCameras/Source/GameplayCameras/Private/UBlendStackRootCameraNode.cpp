// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5379a0

UClass * __cdecl UBlendStackRootCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendStackRootCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlendStackRootCameraNode",
               &Z_Registration_Info_UClass_UBlendStackRootCameraNode.InnerSingleton,
               StaticRegisterNativesUBlendStackRootCameraNode,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlendStackRootCameraNode>,
               InternalVTableHelperCtorCaller<UBlendStackRootCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendStackRootCameraNode.InnerSingleton;
}

// UBlendStackRootCameraNode @ 14d543900

UBlendStackRootCameraNode * __thiscall
UBlendStackRootCameraNode::UBlendStackRootCameraNode
          (UBlendStackRootCameraNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->Blend).field0_0x0.DebugPtr = (UBlendCameraNode *)0x0;
  (this->RootNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  return this;
}

// UBlendStackRootCameraNode @ 14d543950

UBlendStackRootCameraNode * __thiscall
UBlendStackRootCameraNode::UBlendStackRootCameraNode
          (UBlendStackRootCameraNode *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->Blend).field0_0x0.DebugPtr = (UBlendCameraNode *)0x0;
  (this->RootNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  return this;
}

// ~UBlendStackRootCameraNode @ 14d544ad0

void __thiscall
UBlendStackRootCameraNode::~UBlendStackRootCameraNode(UBlendStackRootCameraNode *this)

{
  this->_padding_ = (longlong)&UCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d558480

UClass * __cdecl UBlendStackRootCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendStackRootCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlendStackRootCameraNode",
               &Z_Registration_Info_UClass_UBlendStackRootCameraNode.InnerSingleton,
               StaticRegisterNativesUBlendStackRootCameraNode,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlendStackRootCameraNode>,
               InternalVTableHelperCtorCaller<UBlendStackRootCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendStackRootCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d55b4e0

FCameraNodeEvaluator * __thiscall
UBlendStackRootCameraNode::OnBuildEvaluator
          (UBlendStackRootCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x58,8);
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1[1]._padding_ = 0;
  *(undefined8 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1[1].PrivateFlags = 0;
  pFVar1[2]._padding_ = 0;
  *(undefined8 *)&pFVar1[2].bAutoCameraPoseMovementTrail = 0;
  pFVar1[2].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->_padding_ = (longlong)&___7FBlendStackRootCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1->PrivateFlags = NeedsParameterUpdate;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// OnGetChildren @ 14d55ca70

TObjectChildrenView<TObjectPtr<UCameraNode>_> * __thiscall
UBlendStackRootCameraNode::OnGetChildren
          (UBlendStackRootCameraNode *this,
          TObjectChildrenView<TObjectPtr<UCameraNode>_> *__return_storage_ptr__)

{
  TObjectPtr<UBlendCameraNode>_u_0 TVar1;
  TObjectPtr<UBlendCameraNode>_u_0 local_res8;
  
  (__return_storage_ptr__->Storage)._padding_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = 0;
  (__return_storage_ptr__->Storage).TypeIndex = '\0';
  TVar1 = (TObjectPtr<UBlendCameraNode>_u_0)(this->Blend).field0_0x0.DebugPtr;
  if (TVar1.DebugPtr != (UBlendCameraNode *)0x0) {
    local_res8 = TVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>::Add
              (__return_storage_ptr__,(TObjectPtr<UCameraNode> *)&local_res8.ObjectPtr);
  }
  if ((this->RootNode).field0_0x0.DebugPtr != (UCameraNode *)0x0) {
    UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>::Add
              (__return_storage_ptr__,&this->RootNode);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUBlendStackRootCameraNode @ 14d568580

void __cdecl UBlendStackRootCameraNode::StaticRegisterNativesUBlendStackRootCameraNode(void)

{
  return;
}

