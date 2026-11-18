// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e2ea0

UClass * __cdecl ULinearBlendCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULinearBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"LinearBlendCameraNode",
               &Z_Registration_Info_UClass_ULinearBlendCameraNode.InnerSingleton,
               StaticRegisterNativesULinearBlendCameraNode,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULinearBlendCameraNode>,
               InternalVTableHelperCtorCaller<ULinearBlendCameraNode>,local_res8,
               USimpleFixedTimeBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinearBlendCameraNode.InnerSingleton;
}

// ULinearBlendCameraNode @ 14d5feb30

ULinearBlendCameraNode * __thiscall
ULinearBlendCameraNode::ULinearBlendCameraNode(ULinearBlendCameraNode *this,FVTableHelper *param_1)

{
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  *(undefined4 *)&this->field_0x38 = 0x3f800000;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  *(undefined4 *)&this->field_0x3c = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  return this;
}

// ULinearBlendCameraNode @ 14d5feb80

ULinearBlendCameraNode * __thiscall
ULinearBlendCameraNode::ULinearBlendCameraNode
          (ULinearBlendCameraNode *this,FObjectInitializer *param_1)

{
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  *(undefined4 *)&this->field_0x38 = 0x3f800000;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  *(undefined4 *)&this->field_0x3c = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  return this;
}

// ~ULinearBlendCameraNode @ 14d600d20

void __thiscall ULinearBlendCameraNode::~ULinearBlendCameraNode(ULinearBlendCameraNode *this)

{
  *(undefined ***)this = &USimpleBlendCameraNode::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &USimpleBlendCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UBlendCameraNode::~UBlendCameraNode((UBlendCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61cba0

UClass * __cdecl ULinearBlendCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULinearBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"LinearBlendCameraNode",
               &Z_Registration_Info_UClass_ULinearBlendCameraNode.InnerSingleton,
               StaticRegisterNativesULinearBlendCameraNode,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULinearBlendCameraNode>,
               InternalVTableHelperCtorCaller<ULinearBlendCameraNode>,local_res8,
               USimpleFixedTimeBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinearBlendCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d6257c0

FCameraNodeEvaluator * __thiscall
ULinearBlendCameraNode::OnBuildEvaluator
          (ULinearBlendCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FSimpleFixedTimeBlendCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x40,8);
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->TotalTime = 0.0;
  this_01->CurrentTime = 0.0;
  UE::Cameras::FSimpleFixedTimeBlendCameraNodeEvaluator::FSimpleFixedTimeBlendCameraNodeEvaluator
            (this_01);
  this_01->_padding_ = (longlong)&___7FLinearBlendCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return (FCameraNodeEvaluator *)this_01;
}

// StaticRegisterNativesULinearBlendCameraNode @ 14d639380

void __cdecl ULinearBlendCameraNode::StaticRegisterNativesULinearBlendCameraNode(void)

{
  return;
}

