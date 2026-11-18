// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e4860

UClass * __cdecl USmoothBlendCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SmoothBlendCameraNode",
               &Z_Registration_Info_UClass_USmoothBlendCameraNode.InnerSingleton,
               StaticRegisterNativesUSmoothBlendCameraNode,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USmoothBlendCameraNode>,
               InternalVTableHelperCtorCaller<USmoothBlendCameraNode>,local_res8,
               USimpleFixedTimeBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothBlendCameraNode.InnerSingleton;
}

// USmoothBlendCameraNode @ 14d5ff770

USmoothBlendCameraNode * __thiscall
USmoothBlendCameraNode::USmoothBlendCameraNode(USmoothBlendCameraNode *this,FVTableHelper *param_1)

{
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->_padding_ = 0;
  return this;
}

// USmoothBlendCameraNode @ 14d5ff7c0

USmoothBlendCameraNode * __thiscall
USmoothBlendCameraNode::USmoothBlendCameraNode
          (USmoothBlendCameraNode *this,FObjectInitializer *param_1)

{
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->_padding_ = 0;
  return this;
}

// ~USmoothBlendCameraNode @ 14d600f90

void __thiscall USmoothBlendCameraNode::~USmoothBlendCameraNode(USmoothBlendCameraNode *this)

{
  this->_padding_ = (longlong)&USimpleBlendCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&USimpleBlendCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UBlendCameraNode::~UBlendCameraNode((UBlendCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d6e0

UClass * __cdecl USmoothBlendCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SmoothBlendCameraNode",
               &Z_Registration_Info_UClass_USmoothBlendCameraNode.InnerSingleton,
               StaticRegisterNativesUSmoothBlendCameraNode,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USmoothBlendCameraNode>,
               InternalVTableHelperCtorCaller<USmoothBlendCameraNode>,local_res8,
               USimpleFixedTimeBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothBlendCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625c60

FCameraNodeEvaluator * __thiscall
USmoothBlendCameraNode::OnBuildEvaluator
          (USmoothBlendCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

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
  this_01->_padding_ = (longlong)&___7FSmoothBlendCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return (FCameraNodeEvaluator *)this_01;
}

// StaticRegisterNativesUSmoothBlendCameraNode @ 14d639470

void __cdecl USmoothBlendCameraNode::StaticRegisterNativesUSmoothBlendCameraNode(void)

{
  return;
}

