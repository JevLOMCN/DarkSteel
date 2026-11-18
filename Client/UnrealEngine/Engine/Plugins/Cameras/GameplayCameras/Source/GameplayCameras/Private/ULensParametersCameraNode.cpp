// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e2530

UClass * __cdecl ULensParametersCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULensParametersCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"LensParametersCameraNode",
               &Z_Registration_Info_UClass_ULensParametersCameraNode.InnerSingleton,
               StaticRegisterNativesULensParametersCameraNode,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULensParametersCameraNode>,
               InternalVTableHelperCtorCaller<ULensParametersCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULensParametersCameraNode.InnerSingleton;
}

// ULensParametersCameraNode @ 14d5fea50

ULensParametersCameraNode * __thiscall
ULensParametersCameraNode::ULensParametersCameraNode
          (ULensParametersCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->FocalLength).Value = 0.0;
  (this->FocalLength).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->FocusDistance).Value = 0.0;
  (this->FocusDistance).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->Aperture).Value = 0.0;
  (this->Aperture).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->EnablePhysicalCamera).Value = false;
  (this->EnablePhysicalCamera).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->FocalLength).VariableID.Value = 0xffffffff;
  (this->FocusDistance).VariableID.Value = 0xffffffff;
  (this->Aperture).VariableID.Value = 0xffffffff;
  (this->EnablePhysicalCamera).VariableID.Value = 0xffffffff;
  return this;
}

// ULensParametersCameraNode @ 14d5feac0

ULensParametersCameraNode * __thiscall
ULensParametersCameraNode::ULensParametersCameraNode
          (ULensParametersCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->FocalLength).Value = 0.0;
  (this->FocalLength).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->FocusDistance).Value = 0.0;
  (this->FocusDistance).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->Aperture).Value = 0.0;
  (this->Aperture).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->EnablePhysicalCamera).Value = false;
  (this->EnablePhysicalCamera).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->FocalLength).VariableID.Value = 0xffffffff;
  (this->FocusDistance).VariableID.Value = 0xffffffff;
  (this->Aperture).VariableID.Value = 0xffffffff;
  (this->EnablePhysicalCamera).VariableID.Value = 0xffffffff;
  return this;
}

// ~ULensParametersCameraNode @ 14d600d00

void __thiscall
ULensParametersCameraNode::~ULensParametersCameraNode(ULensParametersCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61cae0

UClass * __cdecl ULensParametersCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULensParametersCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"LensParametersCameraNode",
               &Z_Registration_Info_UClass_ULensParametersCameraNode.InnerSingleton,
               StaticRegisterNativesULensParametersCameraNode,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULensParametersCameraNode>,
               InternalVTableHelperCtorCaller<ULensParametersCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULensParametersCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625720

FCameraNodeEvaluator * __thiscall
ULensParametersCameraNode::OnBuildEvaluator
          (ULensParametersCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x60,8);
  pFVar1->_padding_ = 0;
  *(undefined8 *)&pFVar1->bAutoCameraPoseMovementTrail = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1->PrivateFlags = 0;
  pFVar1[1]._padding_ = 0;
  *(undefined8 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1[1].PrivateFlags = 0;
  pFVar1[2]._padding_ = 0;
  *(undefined8 *)&pFVar1[2].bAutoCameraPoseMovementTrail = 0;
  pFVar1[2].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1[2].PrivateFlags = 0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  pFVar1->_padding_ = (longlong)&___7FLensParametersCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1[1]._padding_ = 0;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1[2]._padding_ = 0;
  pFVar1[2].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined4 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[1].PrivateFlags = ~None;
  *(undefined4 *)&pFVar1[2].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[2].PrivateFlags = ~None;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesULensParametersCameraNode @ 14d639370

void __cdecl ULensParametersCameraNode::StaticRegisterNativesULensParametersCameraNode(void)

{
  return;
}

