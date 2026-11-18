// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e27f0

UClass * __cdecl UOcclusionMaterialCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOcclusionMaterialCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"OcclusionMaterialCameraNode",
               &Z_Registration_Info_UClass_UOcclusionMaterialCameraNode.InnerSingleton,
               StaticRegisterNativesUOcclusionMaterialCameraNode,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOcclusionMaterialCameraNode>,
               InternalVTableHelperCtorCaller<UOcclusionMaterialCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOcclusionMaterialCameraNode.InnerSingleton;
}

// UOcclusionMaterialCameraNode @ 14d5ff1b0

UOcclusionMaterialCameraNode * __thiscall
UOcclusionMaterialCameraNode::UOcclusionMaterialCameraNode
          (UOcclusionMaterialCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->OcclusionTargetOffsetSpace = World;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->OcclusionSphereRadius).VariableID.Value = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->OcclusionTransparencyMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->OcclusionSphereRadius).Value = 0.0;
  (this->OcclusionSphereRadius).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  this->OcclusionChannel = '\x04';
  this->OcclusionTargetPosition = Pawn;
  FVector3dCameraParameter::FVector3dCameraParameter(&this->OcclusionTargetOffset);
  return this;
}

// UOcclusionMaterialCameraNode @ 14d5ff210

UOcclusionMaterialCameraNode * __thiscall
UOcclusionMaterialCameraNode::UOcclusionMaterialCameraNode
          (UOcclusionMaterialCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->OcclusionTargetOffsetSpace = World;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->OcclusionSphereRadius).VariableID.Value = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->OcclusionTransparencyMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->OcclusionSphereRadius).Value = 0.0;
  (this->OcclusionSphereRadius).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  this->OcclusionChannel = '\x04';
  this->OcclusionTargetPosition = Pawn;
  FVector3dCameraParameter::FVector3dCameraParameter(&this->OcclusionTargetOffset);
  (this->OcclusionSphereRadius).Value = 10.0;
  return this;
}

// ~UOcclusionMaterialCameraNode @ 14d600e20

void __thiscall
UOcclusionMaterialCameraNode::~UOcclusionMaterialCameraNode(UOcclusionMaterialCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61cf60

UClass * __cdecl UOcclusionMaterialCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOcclusionMaterialCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"OcclusionMaterialCameraNode",
               &Z_Registration_Info_UClass_UOcclusionMaterialCameraNode.InnerSingleton,
               StaticRegisterNativesUOcclusionMaterialCameraNode,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOcclusionMaterialCameraNode>,
               InternalVTableHelperCtorCaller<UOcclusionMaterialCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOcclusionMaterialCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d6258b0

FCameraNodeEvaluator * __thiscall
UOcclusionMaterialCameraNode::OnBuildEvaluator
          (UOcclusionMaterialCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FOcclusionMaterialCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0xf0,8);
  memset(pFVar1,0,0xf0);
  pFVar1 = UE::Cameras::FOcclusionMaterialCameraNodeEvaluator::FOcclusionMaterialCameraNodeEvaluator
                     (pFVar1);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return (FCameraNodeEvaluator *)pFVar1;
}

// StaticRegisterNativesUOcclusionMaterialCameraNode @ 14d6393d0

void __cdecl UOcclusionMaterialCameraNode::StaticRegisterNativesUOcclusionMaterialCameraNode(void)

{
  return;
}

