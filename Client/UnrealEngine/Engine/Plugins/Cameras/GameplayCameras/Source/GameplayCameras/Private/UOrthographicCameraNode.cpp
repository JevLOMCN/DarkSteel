// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e3180

UClass * __cdecl UOrthographicCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOrthographicCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"OrthographicCameraNode",
               &Z_Registration_Info_UClass_UOrthographicCameraNode.InnerSingleton,
               StaticRegisterNativesUOrthographicCameraNode,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOrthographicCameraNode>,
               InternalVTableHelperCtorCaller<UOrthographicCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOrthographicCameraNode.InnerSingleton;
}

// UOrthographicCameraNode @ 14d5ff390

UOrthographicCameraNode * __thiscall
UOrthographicCameraNode::UOrthographicCameraNode
          (UOrthographicCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->EnableOrthographicMode).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->OrthographicWidth).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->EnableOrthographicMode).Value = true;
  (this->EnableOrthographicMode).VariableID.Value = 0xffffffff;
  (this->OrthographicWidth).Value = 1536.0;
  (this->OrthographicWidth).VariableID.Value = 0xffffffff;
  return this;
}

// UOrthographicCameraNode @ 14d5ff3f0

UOrthographicCameraNode * __thiscall
UOrthographicCameraNode::UOrthographicCameraNode
          (UOrthographicCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->EnableOrthographicMode).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->OrthographicWidth).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->EnableOrthographicMode).Value = true;
  (this->EnableOrthographicMode).VariableID.Value = 0xffffffff;
  (this->OrthographicWidth).Value = 1536.0;
  (this->OrthographicWidth).VariableID.Value = 0xffffffff;
  return this;
}

// ~UOrthographicCameraNode @ 14d600e80

void __thiscall UOrthographicCameraNode::~UOrthographicCameraNode(UOrthographicCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d1a0

UClass * __cdecl UOrthographicCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOrthographicCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"OrthographicCameraNode",
               &Z_Registration_Info_UClass_UOrthographicCameraNode.InnerSingleton,
               StaticRegisterNativesUOrthographicCameraNode,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOrthographicCameraNode>,
               InternalVTableHelperCtorCaller<UOrthographicCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOrthographicCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d6259f0

FCameraNodeEvaluator * __thiscall
UOrthographicCameraNode::OnBuildEvaluator
          (UOrthographicCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

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
  pFVar1->_padding_ = (longlong)&___7FOrthographicCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[1].PrivateFlags = ~None;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUOrthographicCameraNode @ 14d639400

void __cdecl UOrthographicCameraNode::StaticRegisterNativesUOrthographicCameraNode(void)

{
  return;
}

