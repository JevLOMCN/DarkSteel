// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d642190

UClass * __cdecl UDollyFramingCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDollyFramingCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DollyFramingCameraNode",
               &Z_Registration_Info_UClass_UDollyFramingCameraNode.InnerSingleton,
               StaticRegisterNativesUDollyFramingCameraNode,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDollyFramingCameraNode>,
               InternalVTableHelperCtorCaller<UDollyFramingCameraNode>,local_res8,
               UBaseFramingCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDollyFramingCameraNode.InnerSingleton;
}

// UDollyFramingCameraNode @ 14d6570b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDollyFramingCameraNode * __thiscall
UDollyFramingCameraNode::UDollyFramingCameraNode
          (UDollyFramingCameraNode *this,FVTableHelper *param_1)

{
  UBaseFramingCameraNode::UBaseFramingCameraNode((UBaseFramingCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UDollyFramingCameraNode__6B_;
  (this->CanMoveLaterally).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->CanMoveVertically).Value = false;
  (this->CanMoveVertically).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->CanMoveLaterally).Value = false;
  (this->CanMoveLaterally).VariableID.Value = 0xffffffff;
  (this->CanMoveVertically).VariableID.Value = 0xffffffff;
  return this;
}

// UDollyFramingCameraNode @ 14d657120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDollyFramingCameraNode * __thiscall
UDollyFramingCameraNode::UDollyFramingCameraNode
          (UDollyFramingCameraNode *this,FObjectInitializer *param_1)

{
  UBaseFramingCameraNode::UBaseFramingCameraNode((UBaseFramingCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UDollyFramingCameraNode__6B_;
  (this->CanMoveLaterally).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->CanMoveVertically).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->CanMoveLaterally).VariableID.Value = 0xffffffff;
  (this->CanMoveVertically).VariableID.Value = 0xffffffff;
  (this->CanMoveLaterally).Value = true;
  (this->CanMoveVertically).Value = true;
  return this;
}

// ~UDollyFramingCameraNode @ 14d658380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDollyFramingCameraNode::~UDollyFramingCameraNode(UDollyFramingCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UDollyFramingCameraNode__6B_;
  UBaseFramingCameraNode::~UBaseFramingCameraNode((UBaseFramingCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d6608d0

UClass * __cdecl UDollyFramingCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDollyFramingCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DollyFramingCameraNode",
               &Z_Registration_Info_UClass_UDollyFramingCameraNode.InnerSingleton,
               StaticRegisterNativesUDollyFramingCameraNode,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDollyFramingCameraNode>,
               InternalVTableHelperCtorCaller<UDollyFramingCameraNode>,local_res8,
               UBaseFramingCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDollyFramingCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d6659c0

FCameraNodeEvaluator * __thiscall
UDollyFramingCameraNode::OnBuildEvaluator
          (UDollyFramingCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FBaseFramingCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x6b0,0x10);
  memset(this_01,0,0x6b0);
  UE::Cameras::FBaseFramingCameraNodeEvaluator::FBaseFramingCameraNodeEvaluator(this_01);
  this_01->_padding_ = (longlong)&___7FDollyFramingCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&this_01[1]._padding_ = 0xffffffff;
  this_01[1]._padding_ = 0;
  this_01[1]._padding_ = 0;
  *(undefined4 *)&this_01[1]._padding_ = 0xffffffff;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return (FCameraNodeEvaluator *)this_01;
}

// StaticRegisterNativesUDollyFramingCameraNode @ 14d673380

void __cdecl UDollyFramingCameraNode::StaticRegisterNativesUDollyFramingCameraNode(void)

{
  return;
}

