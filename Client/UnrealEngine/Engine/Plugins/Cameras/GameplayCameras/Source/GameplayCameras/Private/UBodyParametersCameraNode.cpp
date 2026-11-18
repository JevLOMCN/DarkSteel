// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e26b0

UClass * __cdecl UBodyParametersCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBodyParametersCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BodyParametersCameraNode",
               &Z_Registration_Info_UClass_UBodyParametersCameraNode.InnerSingleton,
               StaticRegisterNativesUBodyParametersCameraNode,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBodyParametersCameraNode>,
               InternalVTableHelperCtorCaller<UBodyParametersCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBodyParametersCameraNode.InnerSingleton;
}

// UBodyParametersCameraNode @ 14d5fd9a0

UBodyParametersCameraNode * __thiscall
UBodyParametersCameraNode::UBodyParametersCameraNode
          (UBodyParametersCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->ShutterSpeed).Value = 0.0;
  (this->ShutterSpeed).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->ISO).Value = 0.0;
  (this->ISO).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->ShutterSpeed).VariableID.Value = 0xffffffff;
  (this->ISO).VariableID.Value = 0xffffffff;
  return this;
}

// UBodyParametersCameraNode @ 14d5fd9f0

UBodyParametersCameraNode * __thiscall
UBodyParametersCameraNode::UBodyParametersCameraNode
          (UBodyParametersCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->ShutterSpeed).Value = 0.0;
  (this->ShutterSpeed).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->ISO).Value = 0.0;
  (this->ISO).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->ShutterSpeed).VariableID.Value = 0xffffffff;
  (this->ISO).VariableID.Value = 0xffffffff;
  return this;
}

// ~UBodyParametersCameraNode @ 14d600750

void __thiscall
UBodyParametersCameraNode::~UBodyParametersCameraNode(UBodyParametersCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61bd60

UClass * __cdecl UBodyParametersCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBodyParametersCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BodyParametersCameraNode",
               &Z_Registration_Info_UClass_UBodyParametersCameraNode.InnerSingleton,
               StaticRegisterNativesUBodyParametersCameraNode,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBodyParametersCameraNode>,
               InternalVTableHelperCtorCaller<UBodyParametersCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBodyParametersCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625100

FCameraNodeEvaluator * __thiscall
UBodyParametersCameraNode::OnBuildEvaluator
          (UBodyParametersCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x40,8);
  *(undefined4 *)&pFVar1->field_0x9 = 0;
  *(undefined2 *)&pFVar1->field_0xd = 0;
  pFVar1->field_0xf = 0;
  *(undefined8 *)&pFVar1->PrivateFlags = 7;
  *(undefined4 *)&pFVar1[1].field_0xc = 0;
  *(undefined4 *)&pFVar1[1].field_0x1c = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1[1]._padding_ = 0;
  pFVar1[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->_padding_ = (longlong)&___7FBodyParametersCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[1].PrivateFlags = ~None;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUBodyParametersCameraNode @ 14d639130

void __cdecl UBodyParametersCameraNode::StaticRegisterNativesUBodyParametersCameraNode(void)

{
  return;
}

