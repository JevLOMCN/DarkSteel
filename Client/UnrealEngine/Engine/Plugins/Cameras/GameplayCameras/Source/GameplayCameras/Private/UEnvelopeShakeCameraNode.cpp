// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d649b80

UClass * __cdecl UEnvelopeShakeCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvelopeShakeCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"EnvelopeShakeCameraNode",
               &Z_Registration_Info_UClass_UEnvelopeShakeCameraNode.InnerSingleton,
               StaticRegisterNativesUEnvelopeShakeCameraNode,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvelopeShakeCameraNode>,
               InternalVTableHelperCtorCaller<UEnvelopeShakeCameraNode>,local_res8,
               UShakeCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvelopeShakeCameraNode.InnerSingleton;
}

// UEnvelopeShakeCameraNode @ 14d657290

UEnvelopeShakeCameraNode * __thiscall
UEnvelopeShakeCameraNode::UEnvelopeShakeCameraNode
          (UEnvelopeShakeCameraNode *this,FVTableHelper *param_1)

{
  UShakeCameraNode::UShakeCameraNode((UShakeCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->EaseInTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->EaseOutTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->TotalTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->Shake).field0_0x0.DebugPtr = (UShakeCameraNode *)0x0;
  (this->EaseInTime).Value = 0.2;
  (this->EaseInTime).VariableID.Value = 0xffffffff;
  (this->EaseOutTime).Value = 0.2;
  (this->EaseOutTime).VariableID.Value = 0xffffffff;
  (this->TotalTime).Value = 1.0;
  (this->TotalTime).VariableID.Value = 0xffffffff;
  return this;
}

// UEnvelopeShakeCameraNode @ 14d657300

UEnvelopeShakeCameraNode * __thiscall
UEnvelopeShakeCameraNode::UEnvelopeShakeCameraNode
          (UEnvelopeShakeCameraNode *this,FObjectInitializer *param_1)

{
  UShakeCameraNode::UShakeCameraNode((UShakeCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->EaseInTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->EaseOutTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->TotalTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->Shake).field0_0x0.DebugPtr = (UShakeCameraNode *)0x0;
  (this->EaseInTime).Value = 0.2;
  (this->EaseInTime).VariableID.Value = 0xffffffff;
  (this->EaseOutTime).Value = 0.2;
  (this->EaseOutTime).VariableID.Value = 0xffffffff;
  (this->TotalTime).Value = 1.0;
  (this->TotalTime).VariableID.Value = 0xffffffff;
  return this;
}

// ~UEnvelopeShakeCameraNode @ 14d6583f0

void __thiscall UEnvelopeShakeCameraNode::~UEnvelopeShakeCameraNode(UEnvelopeShakeCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UShakeCameraNode::~UShakeCameraNode((UShakeCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d660b10

UClass * __cdecl UEnvelopeShakeCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvelopeShakeCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"EnvelopeShakeCameraNode",
               &Z_Registration_Info_UClass_UEnvelopeShakeCameraNode.InnerSingleton,
               StaticRegisterNativesUEnvelopeShakeCameraNode,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvelopeShakeCameraNode>,
               InternalVTableHelperCtorCaller<UEnvelopeShakeCameraNode>,local_res8,
               UShakeCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvelopeShakeCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d665ae0

FCameraNodeEvaluator * __thiscall
UEnvelopeShakeCameraNode::OnBuildEvaluator
          (UEnvelopeShakeCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x38,8);
  *(undefined4 *)&pFVar1->field_0x9 = 0;
  *(undefined2 *)&pFVar1->field_0xd = 0;
  pFVar1->field_0xf = 0;
  *(undefined8 *)&pFVar1->PrivateFlags = 7;
  *(undefined8 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0;
  *(undefined4 *)&pFVar1[1].PrivateCameraNode.field0_0x0 = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1[1]._padding_ = 0;
  *(undefined4 *)((longlong)&pFVar1[1].PrivateCameraNode.field0_0x0 + 4) = 0;
  pFVar1->_padding_ = (longlong)&___7FEnvelopeShakeCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUEnvelopeShakeCameraNode @ 14d6733b0

void __cdecl UEnvelopeShakeCameraNode::StaticRegisterNativesUEnvelopeShakeCameraNode(void)

{
  return;
}

