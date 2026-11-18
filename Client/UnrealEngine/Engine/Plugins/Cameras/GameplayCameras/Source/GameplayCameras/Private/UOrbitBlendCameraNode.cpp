// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5e3cd0

UClass * __cdecl UOrbitBlendCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOrbitBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"OrbitBlendCameraNode",
               &Z_Registration_Info_UClass_UOrbitBlendCameraNode.InnerSingleton,
               StaticRegisterNativesUOrbitBlendCameraNode,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOrbitBlendCameraNode>,
               InternalVTableHelperCtorCaller<UOrbitBlendCameraNode>,local_res8,
               UBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOrbitBlendCameraNode.InnerSingleton;
}

// UOrbitBlendCameraNode @ 14d5ff310

UOrbitBlendCameraNode * __thiscall
UOrbitBlendCameraNode::UOrbitBlendCameraNode(UOrbitBlendCameraNode *this,FVTableHelper *param_1)

{
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->DrivingBlend).field0_0x0.DebugPtr = (USimpleBlendCameraNode *)0x0;
  return this;
}

// UOrbitBlendCameraNode @ 14d5ff350

UOrbitBlendCameraNode * __thiscall
UOrbitBlendCameraNode::UOrbitBlendCameraNode
          (UOrbitBlendCameraNode *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->DrivingBlend).field0_0x0.DebugPtr = (USimpleBlendCameraNode *)0x0;
  return this;
}

// ~UOrbitBlendCameraNode @ 14d600e60

void __thiscall UOrbitBlendCameraNode::~UOrbitBlendCameraNode(UOrbitBlendCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UBlendCameraNode::~UBlendCameraNode((UBlendCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d0e0

UClass * __cdecl UOrbitBlendCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOrbitBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"OrbitBlendCameraNode",
               &Z_Registration_Info_UClass_UOrbitBlendCameraNode.InnerSingleton,
               StaticRegisterNativesUOrbitBlendCameraNode,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOrbitBlendCameraNode>,
               InternalVTableHelperCtorCaller<UOrbitBlendCameraNode>,local_res8,
               UBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOrbitBlendCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d6259a0

FCameraNodeEvaluator * __thiscall
UOrbitBlendCameraNode::OnBuildEvaluator
          (UOrbitBlendCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FOrbitBlendCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x60,8);
  pFVar1 = UE::Cameras::FOrbitBlendCameraNodeEvaluator::FOrbitBlendCameraNodeEvaluator(pFVar1);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return (FCameraNodeEvaluator *)pFVar1;
}

// OnGetChildren @ 14d6279d0

TObjectChildrenView<TObjectPtr<UCameraNode>_> * __thiscall
UOrbitBlendCameraNode::OnGetChildren
          (UOrbitBlendCameraNode *this,
          TObjectChildrenView<TObjectPtr<UCameraNode>_> *__return_storage_ptr__)

{
  TObjectPtr<USimpleBlendCameraNode>_u_0 local_res8;
  TObjectPtr<UCameraNode> local_res10 [3];
  initializer_list<TObjectPtr<UCameraNode>_> local_18;
  
  local_res8 = (TObjectPtr<USimpleBlendCameraNode>_u_0)(this->DrivingBlend).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_res8.DebugPtr != (USimpleBlendCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_18._First = (TObjectPtr<UCameraNode> *)&local_res8;
  local_18._Last = local_res10;
  UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>::
  TObjectChildrenView<TObjectPtr<UCameraNode>_>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUOrbitBlendCameraNode @ 14d6393f0

void __cdecl UOrbitBlendCameraNode::StaticRegisterNativesUOrbitBlendCameraNode(void)

{
  return;
}

