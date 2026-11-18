// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e4210

UClass * __cdecl USplineOffsetCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineOffsetCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SplineOffsetCameraNode",
               &Z_Registration_Info_UClass_USplineOffsetCameraNode.InnerSingleton,
               StaticRegisterNativesUSplineOffsetCameraNode,0x350,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USplineOffsetCameraNode>,
               InternalVTableHelperCtorCaller<USplineOffsetCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineOffsetCameraNode.InnerSingleton;
}

// USplineOffsetCameraNode @ 14d5ff970

USplineOffsetCameraNode * __thiscall
USplineOffsetCameraNode::USplineOffsetCameraNode
          (USplineOffsetCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SplineInput).VariableID.Value = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->SplineInput).Value = 0.0;
  (this->SplineInput).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  FCameraVectorCurve::FCameraVectorCurve(&this->TranslationOffsetSpline);
  FCameraRotatorCurve::FCameraRotatorCurve(&this->RotationOffsetSpline);
  this->OffsetSpace = CameraPose;
  return this;
}

// USplineOffsetCameraNode @ 14d5ff9d0

USplineOffsetCameraNode * __thiscall
USplineOffsetCameraNode::USplineOffsetCameraNode
          (USplineOffsetCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SplineInput).VariableID.Value = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->SplineInput).Value = 0.0;
  (this->SplineInput).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  FCameraVectorCurve::FCameraVectorCurve(&this->TranslationOffsetSpline);
  FCameraRotatorCurve::FCameraRotatorCurve(&this->RotationOffsetSpline);
  this->OffsetSpace = CameraPose;
  return this;
}

// ~USplineOffsetCameraNode @ 14d601040

void __thiscall USplineOffsetCameraNode::~USplineOffsetCameraNode(USplineOffsetCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FCameraRotatorCurve::~FCameraRotatorCurve(&this->RotationOffsetSpline);
  FCameraVectorCurve::~FCameraVectorCurve(&this->TranslationOffsetSpline);
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d860

UClass * __cdecl USplineOffsetCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineOffsetCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SplineOffsetCameraNode",
               &Z_Registration_Info_UClass_USplineOffsetCameraNode.InnerSingleton,
               StaticRegisterNativesUSplineOffsetCameraNode,0x350,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USplineOffsetCameraNode>,
               InternalVTableHelperCtorCaller<USplineOffsetCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineOffsetCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625d70

FCameraNodeEvaluator * __thiscall
USplineOffsetCameraNode::OnBuildEvaluator
          (USplineOffsetCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FSplineOffsetCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,200,8);
  memset(pFVar1,0,200);
  pFVar1 = UE::Cameras::FSplineOffsetCameraNodeEvaluator::FSplineOffsetCameraNodeEvaluator(pFVar1);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return (FCameraNodeEvaluator *)pFVar1;
}

// StaticRegisterNativesUSplineOffsetCameraNode @ 14d639490

void __cdecl USplineOffsetCameraNode::StaticRegisterNativesUSplineOffsetCameraNode(void)

{
  return;
}

