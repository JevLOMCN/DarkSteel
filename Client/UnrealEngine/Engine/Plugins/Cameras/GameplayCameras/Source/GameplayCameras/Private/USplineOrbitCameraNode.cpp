// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5e4720

UClass * __cdecl USplineOrbitCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineOrbitCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SplineOrbitCameraNode",
               &Z_Registration_Info_UClass_USplineOrbitCameraNode.InnerSingleton,
               StaticRegisterNativesUSplineOrbitCameraNode,0x4d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USplineOrbitCameraNode>,
               InternalVTableHelperCtorCaller<USplineOrbitCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineOrbitCameraNode.InnerSingleton;
}

// USplineOrbitCameraNode @ 14d5ffa30

USplineOrbitCameraNode * __thiscall
USplineOrbitCameraNode::USplineOrbitCameraNode(USplineOrbitCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FCameraVectorCurve::FCameraVectorCurve(&this->LocationOffsetSpline);
  FCameraVectorCurve::FCameraVectorCurve(&this->TargetOffsetSpline);
  FCameraRotatorCurve::FCameraRotatorCurve(&this->RotationOffsetSpline);
  (this->LocationOffsetMultiplier).Value = 1.0;
  (this->LocationOffsetMultiplier).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->InputSlot).field0_0x0.DebugPtr = (UInput2DCameraNode *)0x0;
  (this->LocationOffsetMultiplier).VariableID.Value = 0xffffffff;
  this->TargetOffsetSpace = ActiveContext;
  return this;
}

// USplineOrbitCameraNode @ 14d5ffab0

USplineOrbitCameraNode * __thiscall
USplineOrbitCameraNode::USplineOrbitCameraNode
          (USplineOrbitCameraNode *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FCameraVectorCurve::FCameraVectorCurve(&this->LocationOffsetSpline);
  FCameraVectorCurve::FCameraVectorCurve(&this->TargetOffsetSpline);
  FCameraRotatorCurve::FCameraRotatorCurve(&this->RotationOffsetSpline);
  (this->LocationOffsetMultiplier).Value = 1.0;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  (this->LocationOffsetMultiplier).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->InputSlot).field0_0x0.DebugPtr = (UInput2DCameraNode *)0x0;
  (this->LocationOffsetMultiplier).VariableID.Value = 0xffffffff;
  this->TargetOffsetSpace = ActiveContext;
  return this;
}

// ~USplineOrbitCameraNode @ 14d601090

void __thiscall USplineOrbitCameraNode::~USplineOrbitCameraNode(USplineOrbitCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FCameraRotatorCurve::~FCameraRotatorCurve(&this->RotationOffsetSpline);
  FCameraVectorCurve::~FCameraVectorCurve(&this->TargetOffsetSpline);
  FCameraVectorCurve::~FCameraVectorCurve(&this->LocationOffsetSpline);
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d920

UClass * __cdecl USplineOrbitCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineOrbitCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SplineOrbitCameraNode",
               &Z_Registration_Info_UClass_USplineOrbitCameraNode.InnerSingleton,
               StaticRegisterNativesUSplineOrbitCameraNode,0x4d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USplineOrbitCameraNode>,
               InternalVTableHelperCtorCaller<USplineOrbitCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineOrbitCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625dd0

FCameraNodeEvaluator * __thiscall
USplineOrbitCameraNode::OnBuildEvaluator
          (USplineOrbitCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FSplineOrbitCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x1e0,0x10);
  memset(pFVar1,0,0x1e0);
  pFVar1 = UE::Cameras::FSplineOrbitCameraNodeEvaluator::FSplineOrbitCameraNodeEvaluator(pFVar1);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return (FCameraNodeEvaluator *)pFVar1;
}

// OnGetChildren @ 14d627a30

TObjectChildrenView<TObjectPtr<UCameraNode>_> * __thiscall
USplineOrbitCameraNode::OnGetChildren
          (USplineOrbitCameraNode *this,
          TObjectChildrenView<TObjectPtr<UCameraNode>_> *__return_storage_ptr__)

{
  TObjectPtr<UInput2DCameraNode>_u_0 local_res8;
  TObjectPtr<UCameraNode> local_res10 [3];
  initializer_list<TObjectPtr<UCameraNode>_> local_18;
  
  local_res8 = (TObjectPtr<UInput2DCameraNode>_u_0)(this->InputSlot).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_res8.DebugPtr != (UInput2DCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_18._First = (TObjectPtr<UCameraNode> *)&local_res8;
  local_18._Last = local_res10;
  UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>::
  TObjectChildrenView<TObjectPtr<UCameraNode>_>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUSplineOrbitCameraNode @ 14d6394a0

void __cdecl USplineOrbitCameraNode::StaticRegisterNativesUSplineOrbitCameraNode(void)

{
  return;
}

