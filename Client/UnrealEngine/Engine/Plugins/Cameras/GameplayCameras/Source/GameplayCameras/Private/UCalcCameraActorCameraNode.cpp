// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d570e00

UClass * __cdecl UCalcCameraActorCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCalcCameraActorCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CalcCameraActorCameraNode",
               &Z_Registration_Info_UClass_UCalcCameraActorCameraNode.InnerSingleton,
               StaticRegisterNativesUCalcCameraActorCameraNode,0x38,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCalcCameraActorCameraNode>,
               InternalVTableHelperCtorCaller<UCalcCameraActorCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCalcCameraActorCameraNode.InnerSingleton;
}

// UCalcCameraActorCameraNode @ 14d58f000

UCalcCameraActorCameraNode * __thiscall
UCalcCameraActorCameraNode::UCalcCameraActorCameraNode
          (UCalcCameraActorCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// UCalcCameraActorCameraNode @ 14d58f040

UCalcCameraActorCameraNode * __thiscall
UCalcCameraActorCameraNode::UCalcCameraActorCameraNode
          (UCalcCameraActorCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// ~UCalcCameraActorCameraNode @ 14d5919c0

void __thiscall
UCalcCameraActorCameraNode::~UCalcCameraActorCameraNode(UCalcCameraActorCameraNode *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d5a9190

UClass * __cdecl UCalcCameraActorCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCalcCameraActorCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CalcCameraActorCameraNode",
               &Z_Registration_Info_UClass_UCalcCameraActorCameraNode.InnerSingleton,
               StaticRegisterNativesUCalcCameraActorCameraNode,0x38,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCalcCameraActorCameraNode>,
               InternalVTableHelperCtorCaller<UCalcCameraActorCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCalcCameraActorCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d5b8980

FCameraNodeEvaluator * __thiscall
UCalcCameraActorCameraNode::OnBuildEvaluator
          (UCalcCameraActorCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x20,8);
  pFVar1->_padding_ = 0;
  *(undefined8 *)&pFVar1->bAutoCameraPoseMovementTrail = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1->PrivateFlags = 0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  pFVar1->_padding_ = (longlong)&___7FCalcCameraActorCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUCalcCameraActorCameraNode @ 14d5d0cd0

void __cdecl UCalcCameraActorCameraNode::StaticRegisterNativesUCalcCameraActorCameraNode(void)

{
  return;
}

