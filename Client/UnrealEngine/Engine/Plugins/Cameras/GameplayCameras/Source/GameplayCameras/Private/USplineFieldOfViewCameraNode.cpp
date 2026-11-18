// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e4010

UClass * __cdecl USplineFieldOfViewCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineFieldOfViewCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SplineFieldOfViewCameraNode",
               &Z_Registration_Info_UClass_USplineFieldOfViewCameraNode.InnerSingleton,
               StaticRegisterNativesUSplineFieldOfViewCameraNode,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USplineFieldOfViewCameraNode>,
               InternalVTableHelperCtorCaller<USplineFieldOfViewCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineFieldOfViewCameraNode.InnerSingleton;
}

// USplineFieldOfViewCameraNode @ 14d5ff810

USplineFieldOfViewCameraNode * __thiscall
USplineFieldOfViewCameraNode::USplineFieldOfViewCameraNode
          (USplineFieldOfViewCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->SplineInput).VariableID.Value = 0xffffffff;
  (this->SplineInput).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->FieldOfViewSpline).Curve._padding_ = 0;
  (this->FieldOfViewSpline).Curve._padding_ = 0;
  (this->FieldOfViewSpline).Curve._padding_ = 0;
  (this->SplineInput).Value = 0.0;
  *(undefined4 *)&(this->FieldOfViewSpline).Curve._padding_ = 0;
  *(undefined4 *)((longlong)&(this->FieldOfViewSpline).Curve._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->FieldOfViewSpline).Curve._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->FieldOfViewSpline).Curve._padding_ + 4) = 0;
  (this->FieldOfViewSpline).Curve._padding_ = 0;
  *(undefined4 *)&(this->FieldOfViewSpline).Curve._padding_ = 0;
  (this->FieldOfViewSpline).Curve._padding_ = 0;
  (this->FieldOfViewSpline).Curve._padding_ = 0;
  (this->FieldOfViewSpline).Curve._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->FieldOfViewSpline).Curve._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->FieldOfViewSpline).Curve._padding_ + 4) = 0x404;
  (this->FieldOfViewSpline).Curve.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldOfViewSpline).Curve.Keys.ArrayNum = 0;
  (this->FieldOfViewSpline).Curve.Keys.ArrayMax = 0;
  return this;
}

// USplineFieldOfViewCameraNode @ 14d5ff8c0

USplineFieldOfViewCameraNode * __thiscall
USplineFieldOfViewCameraNode::USplineFieldOfViewCameraNode
          (USplineFieldOfViewCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->SplineInput).VariableID.Value = 0xffffffff;
  (this->SplineInput).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->FieldOfViewSpline).Curve._padding_ = 0;
  (this->FieldOfViewSpline).Curve._padding_ = 0;
  (this->FieldOfViewSpline).Curve._padding_ = 0;
  (this->SplineInput).Value = 0.0;
  *(undefined4 *)&(this->FieldOfViewSpline).Curve._padding_ = 0;
  *(undefined4 *)((longlong)&(this->FieldOfViewSpline).Curve._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->FieldOfViewSpline).Curve._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->FieldOfViewSpline).Curve._padding_ + 4) = 0;
  (this->FieldOfViewSpline).Curve._padding_ = 0;
  *(undefined4 *)&(this->FieldOfViewSpline).Curve._padding_ = 0;
  (this->FieldOfViewSpline).Curve._padding_ = 0;
  (this->FieldOfViewSpline).Curve._padding_ = 0;
  (this->FieldOfViewSpline).Curve._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->FieldOfViewSpline).Curve._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->FieldOfViewSpline).Curve._padding_ + 4) = 0x404;
  (this->FieldOfViewSpline).Curve.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldOfViewSpline).Curve.Keys.ArrayNum = 0;
  (this->FieldOfViewSpline).Curve.Keys.ArrayMax = 0;
  return this;
}

// ~USplineFieldOfViewCameraNode @ 14d600fb0

void __thiscall
USplineFieldOfViewCameraNode::~USplineFieldOfViewCameraNode(USplineFieldOfViewCameraNode *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->FieldOfViewSpline).Curve.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->FieldOfViewSpline).Curve._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->FieldOfViewSpline).Curve._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->FieldOfViewSpline).Curve._padding_ = 0;
  pvVar2 = (void *)(this->FieldOfViewSpline).Curve._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->FieldOfViewSpline).Curve._padding_);
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d7a0

UClass * __cdecl USplineFieldOfViewCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineFieldOfViewCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SplineFieldOfViewCameraNode",
               &Z_Registration_Info_UClass_USplineFieldOfViewCameraNode.InnerSingleton,
               StaticRegisterNativesUSplineFieldOfViewCameraNode,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USplineFieldOfViewCameraNode>,
               InternalVTableHelperCtorCaller<USplineFieldOfViewCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineFieldOfViewCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625cd0

FCameraNodeEvaluator * __thiscall
USplineFieldOfViewCameraNode::OnBuildEvaluator
          (USplineFieldOfViewCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x50,8);
  *(undefined4 *)&pFVar1->field_0x9 = 0;
  *(undefined2 *)&pFVar1->field_0xd = 0;
  pFVar1->field_0xf = 0;
  *(undefined8 *)&pFVar1->PrivateFlags = 7;
  *(undefined4 *)&pFVar1[1].field_0xc = 0;
  *(undefined4 *)&pFVar1[2].field_0x9 = 0;
  *(undefined2 *)&pFVar1[2].field_0xd = 0;
  pFVar1[2].field_0xf = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1[1]._padding_ = 0;
  *(undefined8 *)&pFVar1[1].PrivateFlags = 0;
  pFVar1[2]._padding_ = 0;
  pFVar1[2].bAutoCameraPoseMovementTrail = false;
  pFVar1->_padding_ = (longlong)&___7FSplineFieldOfViewCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x5050100;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUSplineFieldOfViewCameraNode @ 14d639480

void __cdecl USplineFieldOfViewCameraNode::StaticRegisterNativesUSplineFieldOfViewCameraNode(void)

{
  return;
}

