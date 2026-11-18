// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e0900

UClass * __cdecl UDampenRotationCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDampenRotationCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DampenRotationCameraNode",
               &Z_Registration_Info_UClass_UDampenRotationCameraNode.InnerSingleton,
               StaticRegisterNativesUDampenRotationCameraNode,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDampenRotationCameraNode>,
               InternalVTableHelperCtorCaller<UDampenRotationCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDampenRotationCameraNode.InnerSingleton;
}

// UDampenRotationCameraNode @ 14d5fdfd0

UDampenRotationCameraNode * __thiscall
UDampenRotationCameraNode::UDampenRotationCameraNode
          (UDampenRotationCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->YawDampingFactor).Value = 0.0;
  (this->YawDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->PitchDampingFactor).Value = 0.0;
  (this->PitchDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->RollDampingFactor).Value = 0.0;
  (this->RollDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->YawDampingFactor).VariableID.Value = 0xffffffff;
  (this->PitchDampingFactor).VariableID.Value = 0xffffffff;
  (this->RollDampingFactor).VariableID.Value = 0xffffffff;
  return this;
}

// UDampenRotationCameraNode @ 14d5fe030

UDampenRotationCameraNode * __thiscall
UDampenRotationCameraNode::UDampenRotationCameraNode
          (UDampenRotationCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->YawDampingFactor).Value = 0.0;
  (this->YawDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->PitchDampingFactor).Value = 0.0;
  (this->PitchDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->RollDampingFactor).Value = 0.0;
  (this->RollDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->YawDampingFactor).VariableID.Value = 0xffffffff;
  (this->PitchDampingFactor).VariableID.Value = 0xffffffff;
  (this->RollDampingFactor).VariableID.Value = 0xffffffff;
  return this;
}

// ~UDampenRotationCameraNode @ 14d600910

void __thiscall
UDampenRotationCameraNode::~UDampenRotationCameraNode(UDampenRotationCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61c2a0

UClass * __cdecl UDampenRotationCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDampenRotationCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DampenRotationCameraNode",
               &Z_Registration_Info_UClass_UDampenRotationCameraNode.InnerSingleton,
               StaticRegisterNativesUDampenRotationCameraNode,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDampenRotationCameraNode>,
               InternalVTableHelperCtorCaller<UDampenRotationCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDampenRotationCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625510

FCameraNodeEvaluator * __thiscall
UDampenRotationCameraNode::OnBuildEvaluator
          (UDampenRotationCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *_Dst;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  _Dst = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
         BuildObjectUninitialized(this_00,0xc0,8);
  memset(_Dst,0,0xc0);
  _Dst->bAutoCameraPoseMovementTrail = true;
  _Dst->_padding_ = (longlong)&___7FDampenRotationCameraNodeEvaluator_Cameras_UE__6B_;
  _Dst->PrivateFlags = Default;
  _Dst[1]._padding_ = 0;
  _Dst[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  _Dst[2]._padding_ = 0;
  *(undefined8 *)((longlong)&_Dst[2].PrivateCameraNode.field0_0x0 + 4) = 0;
  _Dst[3]._padding_ = 0;
  *(undefined8 *)&_Dst[3].field_0xc = 0;
  *(undefined4 *)&_Dst[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  _Dst[1].PrivateFlags = ~None;
  *(undefined4 *)&_Dst[2].bAutoCameraPoseMovementTrail = 0xffffffff;
  *(undefined4 *)&_Dst[2].PrivateCameraNode.field0_0x0 = 0xbf800000;
  *(undefined4 *)&_Dst[2].field_0x1c = 0xbf800000;
  *(undefined4 *)&_Dst[3].bAutoCameraPoseMovementTrail = 0xbf800000;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,_Dst);
  return _Dst;
}

// StaticRegisterNativesUDampenRotationCameraNode @ 14d6391a0

void __cdecl UDampenRotationCameraNode::StaticRegisterNativesUDampenRotationCameraNode(void)

{
  return;
}

