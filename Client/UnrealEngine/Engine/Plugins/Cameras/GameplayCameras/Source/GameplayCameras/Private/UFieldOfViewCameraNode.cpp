// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e1800

UClass * __cdecl UFieldOfViewCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldOfViewCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"FieldOfViewCameraNode",
               &Z_Registration_Info_UClass_UFieldOfViewCameraNode.InnerSingleton,
               StaticRegisterNativesUFieldOfViewCameraNode,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFieldOfViewCameraNode>,
               InternalVTableHelperCtorCaller<UFieldOfViewCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldOfViewCameraNode.InnerSingleton;
}

// UFieldOfViewCameraNode @ 14d5fe090

UFieldOfViewCameraNode * __thiscall
UFieldOfViewCameraNode::UFieldOfViewCameraNode(UFieldOfViewCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->FieldOfView).Value = 0.0;
  (this->FieldOfView).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->FieldOfView).VariableID.Value = 0xffffffff;
  return this;
}

// UFieldOfViewCameraNode @ 14d5fe0e0

UFieldOfViewCameraNode * __thiscall
UFieldOfViewCameraNode::UFieldOfViewCameraNode
          (UFieldOfViewCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->FieldOfView).VariableID.Value = 0xffffffff;
  (this->FieldOfView).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->FieldOfView).Value = 90.0;
  return this;
}

// ~UFieldOfViewCameraNode @ 14d600930

void __thiscall UFieldOfViewCameraNode::~UFieldOfViewCameraNode(UFieldOfViewCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61c360

UClass * __cdecl UFieldOfViewCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldOfViewCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"FieldOfViewCameraNode",
               &Z_Registration_Info_UClass_UFieldOfViewCameraNode.InnerSingleton,
               StaticRegisterNativesUFieldOfViewCameraNode,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFieldOfViewCameraNode>,
               InternalVTableHelperCtorCaller<UFieldOfViewCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldOfViewCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d6255c0

FCameraNodeEvaluator * __thiscall
UFieldOfViewCameraNode::OnBuildEvaluator
          (UFieldOfViewCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x30,8);
  *(undefined4 *)&pFVar1->field_0x9 = 0;
  *(undefined2 *)&pFVar1->field_0xd = 0;
  pFVar1->field_0xf = 0;
  *(undefined8 *)&pFVar1->PrivateFlags = 7;
  *(undefined4 *)&pFVar1[1].field_0xc = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1[1]._padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FFieldOfViewCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUFieldOfViewCameraNode @ 14d6391b0

void __cdecl UFieldOfViewCameraNode::StaticRegisterNativesUFieldOfViewCameraNode(void)

{
  return;
}

