// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d644550

UClass * __cdecl UPanningFramingCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPanningFramingCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PanningFramingCameraNode",
               &Z_Registration_Info_UClass_UPanningFramingCameraNode.InnerSingleton,
               StaticRegisterNativesUPanningFramingCameraNode,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPanningFramingCameraNode>,
               InternalVTableHelperCtorCaller<UPanningFramingCameraNode>,local_res8,
               UBaseFramingCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPanningFramingCameraNode.InnerSingleton;
}

// UPanningFramingCameraNode @ 14d657810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPanningFramingCameraNode * __thiscall
UPanningFramingCameraNode::UPanningFramingCameraNode
          (UPanningFramingCameraNode *this,FVTableHelper *param_1)

{
  UBaseFramingCameraNode::UBaseFramingCameraNode((UBaseFramingCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UPanningFramingCameraNode__6B_;
  (this->CanPanLaterally).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->CanPanVertically).Value = false;
  (this->CanPanVertically).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->CanPanLaterally).Value = false;
  (this->CanPanLaterally).VariableID.Value = 0xffffffff;
  (this->CanPanVertically).VariableID.Value = 0xffffffff;
  return this;
}

// UPanningFramingCameraNode @ 14d657880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPanningFramingCameraNode * __thiscall
UPanningFramingCameraNode::UPanningFramingCameraNode
          (UPanningFramingCameraNode *this,FObjectInitializer *param_1)

{
  UBaseFramingCameraNode::UBaseFramingCameraNode((UBaseFramingCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UPanningFramingCameraNode__6B_;
  (this->CanPanLaterally).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->CanPanVertically).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->CanPanLaterally).VariableID.Value = 0xffffffff;
  (this->CanPanVertically).VariableID.Value = 0xffffffff;
  (this->CanPanLaterally).Value = true;
  (this->CanPanVertically).Value = true;
  return this;
}

// ~UPanningFramingCameraNode @ 14d658610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPanningFramingCameraNode::~UPanningFramingCameraNode(UPanningFramingCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UPanningFramingCameraNode__6B_;
  UBaseFramingCameraNode::~UBaseFramingCameraNode((UBaseFramingCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d6611d0

UClass * __cdecl UPanningFramingCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPanningFramingCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PanningFramingCameraNode",
               &Z_Registration_Info_UClass_UPanningFramingCameraNode.InnerSingleton,
               StaticRegisterNativesUPanningFramingCameraNode,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPanningFramingCameraNode>,
               InternalVTableHelperCtorCaller<UPanningFramingCameraNode>,local_res8,
               UBaseFramingCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPanningFramingCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d665c60

FCameraNodeEvaluator * __thiscall
UPanningFramingCameraNode::OnBuildEvaluator
          (UPanningFramingCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FBaseFramingCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x6a0,0x10);
  memset(this_01,0,0x6a0);
  UE::Cameras::FBaseFramingCameraNodeEvaluator::FBaseFramingCameraNodeEvaluator(this_01);
  this_01->_padding_ = (longlong)&___7FPanningFramingCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&this_01[1]._padding_ = 0xffffffff;
  this_01[1]._padding_ = 0;
  this_01[1]._padding_ = 0;
  *(undefined4 *)&this_01[1]._padding_ = 0xffffffff;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return (FCameraNodeEvaluator *)this_01;
}

// StaticRegisterNativesUPanningFramingCameraNode @ 14d673440

void __cdecl UPanningFramingCameraNode::StaticRegisterNativesUPanningFramingCameraNode(void)

{
  return;
}

