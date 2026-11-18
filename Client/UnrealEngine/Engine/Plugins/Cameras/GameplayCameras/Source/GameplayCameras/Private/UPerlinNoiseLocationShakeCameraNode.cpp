// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d649d40

UClass * __cdecl UPerlinNoiseLocationShakeCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPerlinNoiseLocationShakeCameraNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PerlinNoiseLocationShakeCameraNode",
               &Z_Registration_Info_UClass_UPerlinNoiseLocationShakeCameraNode.InnerSingleton,
               StaticRegisterNativesUPerlinNoiseLocationShakeCameraNode,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPerlinNoiseLocationShakeCameraNode>,
               InternalVTableHelperCtorCaller<UPerlinNoiseLocationShakeCameraNode>,local_res8,
               UShakeCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPerlinNoiseLocationShakeCameraNode.InnerSingleton;
}

// UPerlinNoiseLocationShakeCameraNode @ 14d6578f0

UPerlinNoiseLocationShakeCameraNode * __thiscall
UPerlinNoiseLocationShakeCameraNode::UPerlinNoiseLocationShakeCameraNode
          (UPerlinNoiseLocationShakeCameraNode *this,FVTableHelper *param_1)

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
  (this->X).Amplitude = 1.0;
  (this->X).Frequency = 1.0;
  (this->Y).Amplitude = 1.0;
  (this->Y).Frequency = 1.0;
  (this->Z).Amplitude = 1.0;
  (this->Z).Frequency = 1.0;
  return this;
}

// UPerlinNoiseLocationShakeCameraNode @ 14d657990

UPerlinNoiseLocationShakeCameraNode * __thiscall
UPerlinNoiseLocationShakeCameraNode::UPerlinNoiseLocationShakeCameraNode
          (UPerlinNoiseLocationShakeCameraNode *this,FObjectInitializer *param_1)

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
  (this->X).Amplitude = 1.0;
  (this->X).Frequency = 1.0;
  (this->Y).Amplitude = 1.0;
  (this->Y).Frequency = 1.0;
  (this->Z).Amplitude = 1.0;
  (this->Z).Frequency = 1.0;
  return this;
}

// ~UPerlinNoiseLocationShakeCameraNode @ 14d658640

void __thiscall
UPerlinNoiseLocationShakeCameraNode::~UPerlinNoiseLocationShakeCameraNode
          (UPerlinNoiseLocationShakeCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UShakeCameraNode::~UShakeCameraNode((UShakeCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d661290

UClass * __cdecl UPerlinNoiseLocationShakeCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPerlinNoiseLocationShakeCameraNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PerlinNoiseLocationShakeCameraNode",
               &Z_Registration_Info_UClass_UPerlinNoiseLocationShakeCameraNode.InnerSingleton,
               StaticRegisterNativesUPerlinNoiseLocationShakeCameraNode,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPerlinNoiseLocationShakeCameraNode>,
               InternalVTableHelperCtorCaller<UPerlinNoiseLocationShakeCameraNode>,local_res8,
               UShakeCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPerlinNoiseLocationShakeCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d665cf0

FCameraNodeEvaluator * __thiscall
UPerlinNoiseLocationShakeCameraNode::OnBuildEvaluator
          (UPerlinNoiseLocationShakeCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FPerlinNoiseLocationShakeCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x170,8);
  memset(pFVar1,0,0x170);
  pFVar1 = UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::
           FPerlinNoiseLocationShakeCameraNodeEvaluator(pFVar1);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return (FCameraNodeEvaluator *)pFVar1;
}

// StaticRegisterNativesUPerlinNoiseLocationShakeCameraNode @ 14d673450

void __cdecl
UPerlinNoiseLocationShakeCameraNode::StaticRegisterNativesUPerlinNoiseLocationShakeCameraNode(void)

{
  return;
}

