// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e1f70

UClass * __cdecl UAutoFocusCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoFocusCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AutoFocusCameraNode",
               &Z_Registration_Info_UClass_UAutoFocusCameraNode.InnerSingleton,
               StaticRegisterNativesUAutoFocusCameraNode,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAutoFocusCameraNode>,
               InternalVTableHelperCtorCaller<UAutoFocusCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoFocusCameraNode.InnerSingleton;
}

// UAutoFocusCameraNode @ 14d5fd5c0

UAutoFocusCameraNode * __thiscall
UAutoFocusCameraNode::UAutoFocusCameraNode(UAutoFocusCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->EnableAutoFocus).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->AutoFocusDampingFactor).Value = 0.0;
  (this->AutoFocusDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->EnableAutoFocus).VariableID.Value = 0xffffffff;
  (this->AutoFocusDampingFactor).VariableID.Value = 0xffffffff;
  return this;
}

// UAutoFocusCameraNode @ 14d5fd610

UAutoFocusCameraNode * __thiscall
UAutoFocusCameraNode::UAutoFocusCameraNode(UAutoFocusCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->EnableAutoFocus).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->AutoFocusDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->AutoFocusDampingFactor).Value = 0.0;
  (this->EnableAutoFocus).VariableID.Value = 0xffffffff;
  (this->AutoFocusDampingFactor).VariableID.Value = 0xffffffff;
  return this;
}

// ~UAutoFocusCameraNode @ 14d6006d0

void __thiscall UAutoFocusCameraNode::~UAutoFocusCameraNode(UAutoFocusCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61bbe0

UClass * __cdecl UAutoFocusCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoFocusCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AutoFocusCameraNode",
               &Z_Registration_Info_UClass_UAutoFocusCameraNode.InnerSingleton,
               StaticRegisterNativesUAutoFocusCameraNode,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAutoFocusCameraNode>,
               InternalVTableHelperCtorCaller<UAutoFocusCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoFocusCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625070

FCameraNodeEvaluator * __thiscall
UAutoFocusCameraNode::OnBuildEvaluator
          (UAutoFocusCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

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
  pFVar1->_padding_ = (longlong)&___7FAutoFocusCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined8 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0;
  *(undefined8 *)&pFVar1[1].field_0x1c = 0;
  *(undefined4 *)((longlong)&pFVar1[1]._padding_ + 4) = 0xffffffff;
  *(undefined4 *)&pFVar1[1].PrivateCameraNode.field0_0x0 = 0xffffffff;
  pFVar1[1].PrivateFlags = 0xbf800000;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUAutoFocusCameraNode @ 14d639110

void __cdecl UAutoFocusCameraNode::StaticRegisterNativesUAutoFocusCameraNode(void)

{
  return;
}

