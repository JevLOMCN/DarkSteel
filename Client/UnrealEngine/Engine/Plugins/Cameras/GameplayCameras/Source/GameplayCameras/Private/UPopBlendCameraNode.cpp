// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e3640

UClass * __cdecl UPopBlendCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPopBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PopBlendCameraNode",
               &Z_Registration_Info_UClass_UPopBlendCameraNode.InnerSingleton,
               StaticRegisterNativesUPopBlendCameraNode,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPopBlendCameraNode>,
               InternalVTableHelperCtorCaller<UPopBlendCameraNode>,local_res8,
               UBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPopBlendCameraNode.InnerSingleton;
}

// UPopBlendCameraNode @ 14d5ff450

UPopBlendCameraNode * __thiscall
UPopBlendCameraNode::UPopBlendCameraNode(UPopBlendCameraNode *this,FVTableHelper *param_1)

{
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// UPopBlendCameraNode @ 14d5ff490

UPopBlendCameraNode * __thiscall
UPopBlendCameraNode::UPopBlendCameraNode(UPopBlendCameraNode *this,FObjectInitializer *param_1)

{
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// ~UPopBlendCameraNode @ 14d600ea0

void __thiscall UPopBlendCameraNode::~UPopBlendCameraNode(UPopBlendCameraNode *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  UBlendCameraNode::~UBlendCameraNode((UBlendCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d260

UClass * __cdecl UPopBlendCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPopBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PopBlendCameraNode",
               &Z_Registration_Info_UClass_UPopBlendCameraNode.InnerSingleton,
               StaticRegisterNativesUPopBlendCameraNode,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPopBlendCameraNode>,
               InternalVTableHelperCtorCaller<UPopBlendCameraNode>,local_res8,
               UBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPopBlendCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625a80

FCameraNodeEvaluator * __thiscall
UPopBlendCameraNode::OnBuildEvaluator
          (UPopBlendCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x20,8);
  this_01->bAutoCameraPoseMovementTrail = true;
  (this_01->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_01->PrivateFlags = Default;
  this_01->_padding_ = (longlong)&___7FPopBlendCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_01,None);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,this_01);
  return this_01;
}

// StaticRegisterNativesUPopBlendCameraNode @ 14d639410

void __cdecl UPopBlendCameraNode::StaticRegisterNativesUPopBlendCameraNode(void)

{
  return;
}

