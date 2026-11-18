// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d6420d0

UClass * __cdecl UInputAxisBinding2DCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"InputAxisBinding2DCameraNode",
               &Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.InnerSingleton,
               StaticRegisterNativesUInputAxisBinding2DCameraNode,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputAxisBinding2DCameraNode>,
               InternalVTableHelperCtorCaller<UInputAxisBinding2DCameraNode>,local_res8,
               UCameraRigInput2DSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.InnerSingleton;
}

// UInputAxisBinding2DCameraNode @ 14d657690

UInputAxisBinding2DCameraNode * __thiscall
UInputAxisBinding2DCameraNode::UInputAxisBinding2DCameraNode
          (UInputAxisBinding2DCameraNode *this,FVTableHelper *param_1)

{
  UCameraRigInput2DSlot::UCameraRigInput2DSlot((UCameraRigInput2DSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->AxisActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisActions).ArrayNum = 0;
  (this->AxisActions).ArrayMax = 0;
  (this->Multiplier).Value.field0_0x0._s_0.X = 1.0;
  (this->Multiplier).Value.field0_0x0._s_0.Y = 1.0;
  (this->Multiplier).VariableID.Value = 0xffffffff;
  (this->Multiplier).Variable.field0_0x0.DebugPtr = (UVector2dCameraVariable *)0x0;
  this->bIsAccumulated = true;
  return this;
}

// UInputAxisBinding2DCameraNode @ 14d657710

UInputAxisBinding2DCameraNode * __thiscall
UInputAxisBinding2DCameraNode::UInputAxisBinding2DCameraNode
          (UInputAxisBinding2DCameraNode *this,FObjectInitializer *param_1)

{
  UCameraRigInput2DSlot::UCameraRigInput2DSlot((UCameraRigInput2DSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->AxisActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisActions).ArrayNum = 0;
  (this->AxisActions).ArrayMax = 0;
  (this->Multiplier).Value.field0_0x0._s_0.X = 1.0;
  (this->Multiplier).Value.field0_0x0._s_0.Y = 1.0;
  (this->Multiplier).VariableID.Value = 0xffffffff;
  (this->Multiplier).Variable.field0_0x0.DebugPtr = (UVector2dCameraVariable *)0x0;
  this->bIsAccumulated = true;
  return this;
}

// ~UInputAxisBinding2DCameraNode @ 14d658590

void __thiscall
UInputAxisBinding2DCameraNode::~UInputAxisBinding2DCameraNode(UInputAxisBinding2DCameraNode *this)

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

// GetPrivateStaticClass @ 14d661050

UClass * __cdecl UInputAxisBinding2DCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"InputAxisBinding2DCameraNode",
               &Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.InnerSingleton,
               StaticRegisterNativesUInputAxisBinding2DCameraNode,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputAxisBinding2DCameraNode>,
               InternalVTableHelperCtorCaller<UInputAxisBinding2DCameraNode>,local_res8,
               UCameraRigInput2DSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d665bd0

FCameraNodeEvaluator * __thiscall
UInputAxisBinding2DCameraNode::OnBuildEvaluator
          (UInputAxisBinding2DCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraRigInput2DSlotEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0xa0,8);
  memset(this_01,0,0xa0);
  UE::Cameras::FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator(this_01);
  this_01->_padding_ = (longlong)&___7FInputAxisBinding2DCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&this_01[1]._padding_ = 0xffffffff;
  this_01[1]._padding_ = 0;
  this_01[1]._padding_ = 0;
  this_01[1]._padding_ = 0;
  this_01[1]._padding_ = 0;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return (FCameraNodeEvaluator *)this_01;
}

// PostLoad @ 14d66f550

void __thiscall UInputAxisBinding2DCameraNode::PostLoad(UInputAxisBinding2DCameraNode *this)

{
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    this->bIsAccumulated = false;
  }
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
    *(undefined1 *)&this->_padding_ = 0;
  }
  UCameraNode::PostLoad((UCameraNode *)this);
  return;
}

// StaticRegisterNativesUInputAxisBinding2DCameraNode @ 14d673420

void __cdecl UInputAxisBinding2DCameraNode::StaticRegisterNativesUInputAxisBinding2DCameraNode(void)

{
  return;
}

