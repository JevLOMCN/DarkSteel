// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d64a550

UClass * __cdecl UPerlinNoiseRotationShakeCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPerlinNoiseRotationShakeCameraNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PerlinNoiseRotationShakeCameraNode",
               &Z_Registration_Info_UClass_UPerlinNoiseRotationShakeCameraNode.InnerSingleton,
               StaticRegisterNativesUPerlinNoiseRotationShakeCameraNode,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPerlinNoiseRotationShakeCameraNode>,
               InternalVTableHelperCtorCaller<UPerlinNoiseRotationShakeCameraNode>,local_res8,
               UShakeCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPerlinNoiseRotationShakeCameraNode.InnerSingleton;
}

// UPerlinNoiseRotationShakeCameraNode @ 14d657a30

UPerlinNoiseRotationShakeCameraNode * __thiscall
UPerlinNoiseRotationShakeCameraNode::UPerlinNoiseRotationShakeCameraNode
          (UPerlinNoiseRotationShakeCameraNode *this,FVTableHelper *param_1)

{
  UShakeCameraNode::UShakeCameraNode((UShakeCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->AmplitudeMultiplier).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->FrequencyMultiplier).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->Octaves).Variable.field0_0x0.DebugPtr = (UInteger32CameraVariable *)0x0;
  (this->AmplitudeMultiplier).Value = 1.0;
  (this->AmplitudeMultiplier).VariableID.Value = 0xffffffff;
  (this->FrequencyMultiplier).Value = 1.0;
  (this->FrequencyMultiplier).VariableID.Value = 0xffffffff;
  (this->Octaves).Value = 1;
  (this->Octaves).VariableID.Value = 0xffffffff;
  (this->Yaw).Amplitude = 1.0;
  (this->Yaw).Frequency = 1.0;
  (this->Pitch).Amplitude = 1.0;
  (this->Pitch).Frequency = 1.0;
  (this->Roll).Amplitude = 1.0;
  (this->Roll).Frequency = 1.0;
  return this;
}

// UPerlinNoiseRotationShakeCameraNode @ 14d657ad0

UPerlinNoiseRotationShakeCameraNode * __thiscall
UPerlinNoiseRotationShakeCameraNode::UPerlinNoiseRotationShakeCameraNode
          (UPerlinNoiseRotationShakeCameraNode *this,FObjectInitializer *param_1)

{
  UShakeCameraNode::UShakeCameraNode((UShakeCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->AmplitudeMultiplier).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->FrequencyMultiplier).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->Octaves).Variable.field0_0x0.DebugPtr = (UInteger32CameraVariable *)0x0;
  (this->AmplitudeMultiplier).Value = 1.0;
  (this->AmplitudeMultiplier).VariableID.Value = 0xffffffff;
  (this->FrequencyMultiplier).Value = 1.0;
  (this->FrequencyMultiplier).VariableID.Value = 0xffffffff;
  (this->Octaves).Value = 1;
  (this->Octaves).VariableID.Value = 0xffffffff;
  (this->Yaw).Amplitude = 1.0;
  (this->Yaw).Frequency = 1.0;
  (this->Pitch).Amplitude = 1.0;
  (this->Pitch).Frequency = 1.0;
  (this->Roll).Amplitude = 1.0;
  (this->Roll).Frequency = 1.0;
  return this;
}

// ~UPerlinNoiseRotationShakeCameraNode @ 14d658660

void __thiscall
UPerlinNoiseRotationShakeCameraNode::~UPerlinNoiseRotationShakeCameraNode
          (UPerlinNoiseRotationShakeCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UShakeCameraNode::~UShakeCameraNode((UShakeCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d661350

UClass * __cdecl UPerlinNoiseRotationShakeCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPerlinNoiseRotationShakeCameraNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PerlinNoiseRotationShakeCameraNode",
               &Z_Registration_Info_UClass_UPerlinNoiseRotationShakeCameraNode.InnerSingleton,
               StaticRegisterNativesUPerlinNoiseRotationShakeCameraNode,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPerlinNoiseRotationShakeCameraNode>,
               InternalVTableHelperCtorCaller<UPerlinNoiseRotationShakeCameraNode>,local_res8,
               UShakeCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPerlinNoiseRotationShakeCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d665d50

FCameraNodeEvaluator * __thiscall
UPerlinNoiseRotationShakeCameraNode::OnBuildEvaluator
          (UPerlinNoiseRotationShakeCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FPerlinNoiseRotationShakeCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x170,8);
  memset(pFVar1,0,0x170);
  pFVar1 = UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator::
           FPerlinNoiseRotationShakeCameraNodeEvaluator(pFVar1);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return (FCameraNodeEvaluator *)pFVar1;
}

// StaticRegisterNativesUPerlinNoiseRotationShakeCameraNode @ 14d673460

void __cdecl
UPerlinNoiseRotationShakeCameraNode::StaticRegisterNativesUPerlinNoiseRotationShakeCameraNode(void)

{
  return;
}

