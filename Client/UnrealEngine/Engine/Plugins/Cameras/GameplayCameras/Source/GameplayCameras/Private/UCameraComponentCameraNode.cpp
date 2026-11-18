// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d570bd0

UClass * __cdecl UCameraComponentCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraComponentCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraComponentCameraNode",
               &Z_Registration_Info_UClass_UCameraComponentCameraNode.InnerSingleton,
               StaticRegisterNativesUCameraComponentCameraNode,0x38,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCameraComponentCameraNode>,
               InternalVTableHelperCtorCaller<UCameraComponentCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraComponentCameraNode.InnerSingleton;
}

// UCameraComponentCameraNode @ 14d58f080

UCameraComponentCameraNode * __thiscall
UCameraComponentCameraNode::UCameraComponentCameraNode
          (UCameraComponentCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// UCameraComponentCameraNode @ 14d58f0c0

UCameraComponentCameraNode * __thiscall
UCameraComponentCameraNode::UCameraComponentCameraNode
          (UCameraComponentCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// ~UCameraComponentCameraNode @ 14d5919e0

void __thiscall
UCameraComponentCameraNode::~UCameraComponentCameraNode(UCameraComponentCameraNode *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d5a9250

UClass * __cdecl UCameraComponentCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraComponentCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraComponentCameraNode",
               &Z_Registration_Info_UClass_UCameraComponentCameraNode.InnerSingleton,
               StaticRegisterNativesUCameraComponentCameraNode,0x38,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCameraComponentCameraNode>,
               InternalVTableHelperCtorCaller<UCameraComponentCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraComponentCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d5b89f0

FCameraNodeEvaluator * __thiscall
UCameraComponentCameraNode::OnBuildEvaluator
          (UCameraComponentCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

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
  pFVar1->_padding_ = (longlong)&___7FCameraComponentCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUCameraComponentCameraNode @ 14d5d0ce0

void __cdecl UCameraComponentCameraNode::StaticRegisterNativesUCameraComponentCameraNode(void)

{
  return;
}

