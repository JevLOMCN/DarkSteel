// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e3570

UClass * __cdecl UPostProcessCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPostProcessCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PostProcessCameraNode",
               &Z_Registration_Info_UClass_UPostProcessCameraNode.InnerSingleton,
               StaticRegisterNativesUPostProcessCameraNode,0x7b0,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPostProcessCameraNode>,
               InternalVTableHelperCtorCaller<UPostProcessCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPostProcessCameraNode.InnerSingleton;
}

// UPostProcessCameraNode @ 14d5ff4d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UPostProcessCameraNode * __thiscall
UPostProcessCameraNode::UPostProcessCameraNode(UPostProcessCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings);
  return this;
}

// UPostProcessCameraNode @ 14d5ff510

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UPostProcessCameraNode * __thiscall
UPostProcessCameraNode::UPostProcessCameraNode
          (UPostProcessCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings);
  return this;
}

// ~UPostProcessCameraNode @ 14d600ec0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UPostProcessCameraNode::~UPostProcessCameraNode(UPostProcessCameraNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->PostProcessSettings).WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d320

UClass * __cdecl UPostProcessCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPostProcessCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PostProcessCameraNode",
               &Z_Registration_Info_UClass_UPostProcessCameraNode.InnerSingleton,
               StaticRegisterNativesUPostProcessCameraNode,0x7b0,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPostProcessCameraNode>,
               InternalVTableHelperCtorCaller<UPostProcessCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPostProcessCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d625af0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraNodeEvaluator * __thiscall
UPostProcessCameraNode::OnBuildEvaluator
          (UPostProcessCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x20,8);
  this_01->bAutoCameraPoseMovementTrail = true;
  (this_01->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_01->PrivateFlags = Default;
  this_01->_padding_ = (longlong)&___7FPostProcessCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_01,None);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,this_01);
  return this_01;
}

// StaticRegisterNativesUPostProcessCameraNode @ 14d639420

void __cdecl UPostProcessCameraNode::StaticRegisterNativesUPostProcessCameraNode(void)

{
  return;
}

