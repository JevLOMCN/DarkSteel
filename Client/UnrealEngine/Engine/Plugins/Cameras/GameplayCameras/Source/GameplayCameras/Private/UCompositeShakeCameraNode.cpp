// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d647520

UClass * __cdecl UCompositeShakeCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeShakeCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CompositeShakeCameraNode",
               &Z_Registration_Info_UClass_UCompositeShakeCameraNode.InnerSingleton,
               StaticRegisterNativesUCompositeShakeCameraNode,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCompositeShakeCameraNode>,
               InternalVTableHelperCtorCaller<UCompositeShakeCameraNode>,local_res8,
               UShakeCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeShakeCameraNode.InnerSingleton;
}

// UCompositeShakeCameraNode @ 14d656fd0

UCompositeShakeCameraNode * __thiscall
UCompositeShakeCameraNode::UCompositeShakeCameraNode
          (UCompositeShakeCameraNode *this,FVTableHelper *param_1)

{
  UShakeCameraNode::UShakeCameraNode((UShakeCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->Shakes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shakes).ArrayNum = 0;
  (this->Shakes).ArrayMax = 0;
  return this;
}

// UCompositeShakeCameraNode @ 14d657010

UCompositeShakeCameraNode * __thiscall
UCompositeShakeCameraNode::UCompositeShakeCameraNode
          (UCompositeShakeCameraNode *this,FObjectInitializer *param_1)

{
  UShakeCameraNode::UShakeCameraNode((UShakeCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->Shakes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shakes).ArrayNum = 0;
  (this->Shakes).ArrayMax = 0;
  return this;
}

// ~UCompositeShakeCameraNode @ 14d658320

void __thiscall
UCompositeShakeCameraNode::~UCompositeShakeCameraNode(UCompositeShakeCameraNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->Shakes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UShakeCameraNode::~UShakeCameraNode((UShakeCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d660750

UClass * __cdecl UCompositeShakeCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeShakeCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CompositeShakeCameraNode",
               &Z_Registration_Info_UClass_UCompositeShakeCameraNode.InnerSingleton,
               StaticRegisterNativesUCompositeShakeCameraNode,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCompositeShakeCameraNode>,
               InternalVTableHelperCtorCaller<UCompositeShakeCameraNode>,local_res8,
               UShakeCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeShakeCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d665950

FCameraNodeEvaluator * __thiscall
UCompositeShakeCameraNode::OnBuildEvaluator
          (UCompositeShakeCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x30,8);
  (this_01->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_01->bAutoCameraPoseMovementTrail = true;
  this_01->PrivateFlags = Default;
  this_01[1]._padding_ = 0;
  *(undefined8 *)&this_01[1].bAutoCameraPoseMovementTrail = 0;
  this_01->_padding_ = (longlong)&___7FCompositeShakeCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_01,None);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,this_01);
  return this_01;
}

// StaticRegisterNativesUCompositeShakeCameraNode @ 14d673360

void __cdecl UCompositeShakeCameraNode::StaticRegisterNativesUCompositeShakeCameraNode(void)

{
  return;
}

