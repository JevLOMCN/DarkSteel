// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d648d10

UClass * __cdecl UDrivenControlRotationCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrivenControlRotationCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DrivenControlRotationCameraNode",
               &Z_Registration_Info_UClass_UDrivenControlRotationCameraNode.InnerSingleton,
               StaticRegisterNativesUDrivenControlRotationCameraNode,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrivenControlRotationCameraNode>,
               InternalVTableHelperCtorCaller<UDrivenControlRotationCameraNode>,local_res8,
               UInput2DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrivenControlRotationCameraNode.InnerSingleton;
}

// UDrivenControlRotationCameraNode @ 14d657210

UDrivenControlRotationCameraNode * __thiscall
UDrivenControlRotationCameraNode::UDrivenControlRotationCameraNode
          (UDrivenControlRotationCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// UDrivenControlRotationCameraNode @ 14d657250

UDrivenControlRotationCameraNode * __thiscall
UDrivenControlRotationCameraNode::UDrivenControlRotationCameraNode
          (UDrivenControlRotationCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// ~UDrivenControlRotationCameraNode @ 14d6583d0

void __thiscall
UDrivenControlRotationCameraNode::~UDrivenControlRotationCameraNode
          (UDrivenControlRotationCameraNode *this)

{
  *(undefined ***)this = &UInput2DCameraNode::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d660a50

UClass * __cdecl UDrivenControlRotationCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrivenControlRotationCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DrivenControlRotationCameraNode",
               &Z_Registration_Info_UClass_UDrivenControlRotationCameraNode.InnerSingleton,
               StaticRegisterNativesUDrivenControlRotationCameraNode,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrivenControlRotationCameraNode>,
               InternalVTableHelperCtorCaller<UDrivenControlRotationCameraNode>,local_res8,
               UInput2DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrivenControlRotationCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d665a50

FCameraNodeEvaluator * __thiscall
UDrivenControlRotationCameraNode::OnBuildEvaluator
          (UDrivenControlRotationCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  double dVar1;
  FCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x78,8);
  (this_01->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_01[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&this_01[1].PrivateFlags = 0;
  this_01->bAutoCameraPoseMovementTrail = true;
  this_01->PrivateFlags = Default;
  this_01->_padding_ = (longlong)&___7FDrivenControlRotationCameraNodeEvaluator_Cameras_UE__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this_01[2]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)&this_01[2].bAutoCameraPoseMovementTrail = dVar1;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined1 *)&this_01[2].PrivateFlags = None;
  this_01[2].PrivateCameraNode.field0_0x0 = (TObjectPtr<UCameraNode_const_>_u_0)dVar1;
  UE::Cameras::FCameraNodeEvaluator::SetNodeEvaluatorFlags
            (this_01,SupportsOperations|NeedsSerialize);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,this_01);
  return this_01;
}

// StaticRegisterNativesUDrivenControlRotationCameraNode @ 14d6733a0

void __cdecl
UDrivenControlRotationCameraNode::StaticRegisterNativesUDrivenControlRotationCameraNode(void)

{
  return;
}

