// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d64a450

UClass * __cdecl URawInputAxisBinding2DCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URawInputAxisBinding2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"RawInputAxisBinding2DCameraNode",
               &Z_Registration_Info_UClass_URawInputAxisBinding2DCameraNode.InnerSingleton,
               StaticRegisterNativesURawInputAxisBinding2DCameraNode,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URawInputAxisBinding2DCameraNode>,
               InternalVTableHelperCtorCaller<URawInputAxisBinding2DCameraNode>,local_res8,
               UInput2DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URawInputAxisBinding2DCameraNode.InnerSingleton;
}

// URawInputAxisBinding2DCameraNode @ 14d657b70

URawInputAxisBinding2DCameraNode * __thiscall
URawInputAxisBinding2DCameraNode::URawInputAxisBinding2DCameraNode
          (URawInputAxisBinding2DCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->AxisActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisActions).ArrayNum = 0;
  (this->AxisActions).ArrayMax = 0;
  (this->Multiplier).Value.field0_0x0._s_0.X = 1.0;
  (this->Multiplier).Value.field0_0x0._s_0.Y = 1.0;
  (this->Multiplier).VariableID.Value = 0xffffffff;
  (this->Multiplier).Variable.field0_0x0.DebugPtr = (UVector2dCameraVariable *)0x0;
  return this;
}

// URawInputAxisBinding2DCameraNode @ 14d657bd0

URawInputAxisBinding2DCameraNode * __thiscall
URawInputAxisBinding2DCameraNode::URawInputAxisBinding2DCameraNode
          (URawInputAxisBinding2DCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->AxisActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisActions).ArrayNum = 0;
  (this->AxisActions).ArrayMax = 0;
  (this->Multiplier).Value.field0_0x0._s_0.X = 1.0;
  (this->Multiplier).Value.field0_0x0._s_0.Y = 1.0;
  (this->Multiplier).VariableID.Value = 0xffffffff;
  (this->Multiplier).Variable.field0_0x0.DebugPtr = (UVector2dCameraVariable *)0x0;
  return this;
}

// ~URawInputAxisBinding2DCameraNode @ 14d658680

void __thiscall
URawInputAxisBinding2DCameraNode::~URawInputAxisBinding2DCameraNode
          (URawInputAxisBinding2DCameraNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->AxisActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d661410

UClass * __cdecl URawInputAxisBinding2DCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URawInputAxisBinding2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"RawInputAxisBinding2DCameraNode",
               &Z_Registration_Info_UClass_URawInputAxisBinding2DCameraNode.InnerSingleton,
               StaticRegisterNativesURawInputAxisBinding2DCameraNode,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URawInputAxisBinding2DCameraNode>,
               InternalVTableHelperCtorCaller<URawInputAxisBinding2DCameraNode>,local_res8,
               UInput2DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URawInputAxisBinding2DCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d665db0

FCameraNodeEvaluator * __thiscall
URawInputAxisBinding2DCameraNode::OnBuildEvaluator
          (URawInputAxisBinding2DCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x58,8);
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
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  pFVar1->_padding_ = (longlong)&___7FRawInputAxisBinding2DCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1[2]._padding_ = 0;
  *(undefined8 *)&pFVar1[2].bAutoCameraPoseMovementTrail = 0;
  pFVar1[2].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1[1].PrivateFlags = ~None;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesURawInputAxisBinding2DCameraNode @ 14d673470

void __cdecl
URawInputAxisBinding2DCameraNode::StaticRegisterNativesURawInputAxisBinding2DCameraNode(void)

{
  return;
}

