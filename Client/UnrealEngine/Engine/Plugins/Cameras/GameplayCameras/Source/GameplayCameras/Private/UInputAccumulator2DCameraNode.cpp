// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d641e10

UClass * __cdecl UInputAccumulator2DCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputAccumulator2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"InputAccumulator2DCameraNode",
               &Z_Registration_Info_UClass_UInputAccumulator2DCameraNode.InnerSingleton,
               StaticRegisterNativesUInputAccumulator2DCameraNode,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputAccumulator2DCameraNode>,
               InternalVTableHelperCtorCaller<UInputAccumulator2DCameraNode>,local_res8,
               UCameraRigInput2DSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputAccumulator2DCameraNode.InnerSingleton;
}

// UInputAccumulator2DCameraNode @ 14d657610

UInputAccumulator2DCameraNode * __thiscall
UInputAccumulator2DCameraNode::UInputAccumulator2DCameraNode
          (UInputAccumulator2DCameraNode *this,FVTableHelper *param_1)

{
  UCameraRigInput2DSlot::UCameraRigInput2DSlot((UCameraRigInput2DSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->InputSlot).field0_0x0.DebugPtr = (UInput2DCameraNode *)0x0;
  return this;
}

// UInputAccumulator2DCameraNode @ 14d657650

UInputAccumulator2DCameraNode * __thiscall
UInputAccumulator2DCameraNode::UInputAccumulator2DCameraNode
          (UInputAccumulator2DCameraNode *this,FObjectInitializer *param_1)

{
  UCameraRigInput2DSlot::UCameraRigInput2DSlot((UCameraRigInput2DSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->InputSlot).field0_0x0.DebugPtr = (UInput2DCameraNode *)0x0;
  return this;
}

// ~UInputAccumulator2DCameraNode @ 14d658570

void __thiscall
UInputAccumulator2DCameraNode::~UInputAccumulator2DCameraNode(UInputAccumulator2DCameraNode *this)

{
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d660f90

UClass * __cdecl UInputAccumulator2DCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputAccumulator2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"InputAccumulator2DCameraNode",
               &Z_Registration_Info_UClass_UInputAccumulator2DCameraNode.InnerSingleton,
               StaticRegisterNativesUInputAccumulator2DCameraNode,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputAccumulator2DCameraNode>,
               InternalVTableHelperCtorCaller<UInputAccumulator2DCameraNode>,local_res8,
               UCameraRigInput2DSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputAccumulator2DCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d665b70

FCameraNodeEvaluator * __thiscall
UInputAccumulator2DCameraNode::OnBuildEvaluator
          (UInputAccumulator2DCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraRigInput2DSlotEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x80,8);
  UE::Cameras::FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator(this_01);
  this_01[1]._padding_ = 0;
  this_01->_padding_ = (longlong)&___7FInputAccumulator2DCameraNodeEvaluator_Cameras_UE__6B_;
  this_01->bIsAccumulated = true;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return (FCameraNodeEvaluator *)this_01;
}

// StaticRegisterNativesUInputAccumulator2DCameraNode @ 14d673410

void __cdecl UInputAccumulator2DCameraNode::StaticRegisterNativesUInputAccumulator2DCameraNode(void)

{
  return;
}

