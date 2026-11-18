// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 14

// StaticClass @ 14d5e4f20

UClass * __cdecl UCameraRigCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigCameraNode",
               &Z_Registration_Info_UClass_UCameraRigCameraNode.InnerSingleton,
               StaticRegisterNativesUCameraRigCameraNode,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraRigCameraNode>,
               InternalVTableHelperCtorCaller<UCameraRigCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigCameraNode.InnerSingleton;
}

// UCameraRigCameraNode @ 14d5fdb40

UCameraRigCameraNode * __thiscall
UCameraRigCameraNode::UCameraRigCameraNode(UCameraRigCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IAssetReferenceCameraNode__;
  this->_padding_ = (longlong)&_vftable__for__ICustomCameraNodeParameterProvider__;
  FCameraRigAssetReference::FCameraRigAssetReference(&this->CameraRigReference);
  return this;
}

// UCameraRigCameraNode @ 14d5fdba0

UCameraRigCameraNode * __thiscall
UCameraRigCameraNode::UCameraRigCameraNode(UCameraRigCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IAssetReferenceCameraNode__;
  this->_padding_ = (longlong)&_vftable__for__ICustomCameraNodeParameterProvider__;
  FCameraRigAssetReference::FCameraRigAssetReference(&this->CameraRigReference);
  return this;
}

// ~UCameraRigCameraNode @ 14d600790

void __thiscall UCameraRigCameraNode::~UCameraRigCameraNode(UCameraRigCameraNode *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IAssetReferenceCameraNode__;
  this->_padding_ = (longlong)&_vftable__for__ICustomCameraNodeParameterProvider__;
  FCameraRigParameterOverrides::~FCameraRigParameterOverrides
            (&(this->CameraRigReference).ParameterOverrides_DEPRECATED);
  pFVar1 = (this->CameraRigReference).ParameterOverrideGuids_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CameraRigReference)._padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  pvVar2 = (void *)(this->CameraRigReference)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->CameraRigReference)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CameraRigReference)._padding_);
  this->_padding_ = (longlong)&___7ICustomCameraNodeParameterProvider__6B_;
  this->_padding_ = (longlong)&___7IAssetReferenceCameraNode__6B_;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GatherPackages @ 14d617a60

void __thiscall
UCameraRigCameraNode::GatherPackages
          (UCameraRigCameraNode *this,
          TArray<UPackage_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_1
          )

{
  UClass *pUVar1;
  
  if ((this->CameraRigReference)._padding_ != 0) {
    pUVar1 = Z_Construct_UClass_UCameraRigAsset_NoRegister();
    UObjectBaseUtility::GetTypedOuter
              ((UObjectBaseUtility *)
               &this[-1].CameraRigReference.ParameterOverrides_DEPRECATED.Rotator3fOverrides.
                ArrayNum,pUVar1);
    return;
  }
  return;
}

// GetCustomCameraNodeParameters @ 14d619f80

void __thiscall
UCameraRigCameraNode::GetCustomCameraNodeParameters
          (UCameraRigCameraNode *this,FCustomCameraNodeParameterInfos *param_1)

{
  FBaseCameraObjectReference::GetCustomCameraNodeParameters
            ((FBaseCameraObjectReference *)&this->_padding_,param_1);
  return;
}

// GetPrivateStaticClass @ 14d61bee0

UClass * __cdecl UCameraRigCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigCameraNode",
               &Z_Registration_Info_UClass_UCameraRigCameraNode.InnerSingleton,
               StaticRegisterNativesUCameraRigCameraNode,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraRigCameraNode>,
               InternalVTableHelperCtorCaller<UCameraRigCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigCameraNode.InnerSingleton;
}

// OnBuild @ 14d624120

void __thiscall
UCameraRigCameraNode::OnBuild(UCameraRigCameraNode *this,FCameraObjectBuildContext *param_1)

{
  UCameraRigAsset *pUVar1;
  FText *pFVar2;
  UClass *pUVar3;
  UCameraRigAsset *pUVar4;
  Type TVar5;
  FCameraBuildLog *this_00;
  FText local_18;
  
  pUVar1 = (this->CameraRigReference).CameraRig.field0_0x0.DebugPtr;
  if (pUVar1 == (UCameraRigAsset *)0x0) {
    this_00 = param_1->BuildLog;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"CameraRigCameraNode",L"MissingCameraRig",
                        L"No camera rig specified on camera rig node.");
    TVar5 = Warning;
  }
  else {
    pUVar3 = Z_Construct_UClass_UCameraRigAsset_NoRegister();
    pUVar4 = (UCameraRigAsset *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3)
    ;
    if (pUVar4 != pUVar1) {
      FCameraObjectAllocationInfo::Append
                (&param_1->AllocationInfo,(FCameraObjectAllocationInfo *)&pUVar1->_padding_);
      return;
    }
    this_00 = param_1->BuildLog;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"CameraRigCameraNode",L"SelfReferenceError",
                        L"Circular camera rig references are forbidden.");
    TVar5 = Error;
  }
  UE::Cameras::FCameraBuildLog::AddMessage(this_00,TVar5,(UObject *)this,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// OnBuildEvaluator @ 14d625250

FCameraNodeEvaluator * __thiscall
UCameraRigCameraNode::OnBuildEvaluator
          (UCameraRigCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x28,8);
  (this_01->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_01->bAutoCameraPoseMovementTrail = true;
  this_01->PrivateFlags = Default;
  this_01[1]._padding_ = 0;
  this_01->_padding_ = (longlong)&___7FCameraRigCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_01,NeedsParameterUpdate);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,this_01);
  return this_01;
}

// OnPreBuild @ 14d629230

void __thiscall
UCameraRigCameraNode::OnPreBuild(UCameraRigCameraNode *this,FCameraBuildLog *param_1)

{
  UCameraRigAsset *this_00;
  UClass *pUVar1;
  UCameraRigAsset *pUVar2;
  
  this_00 = (this->CameraRigReference).CameraRig.field0_0x0.DebugPtr;
  if (this_00 != (UCameraRigAsset *)0x0) {
    pUVar1 = Z_Construct_UClass_UCameraRigAsset_NoRegister();
    pUVar2 = (UCameraRigAsset *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1)
    ;
    if (pUVar2 != this_00) {
      UCameraRigAsset::BuildCameraRig(this_00,param_1);
    }
  }
  FBaseCameraObjectReference::RebuildParametersIfNeeded
            ((FBaseCameraObjectReference *)&this->CameraRigReference);
  return;
}

// StaticRegisterNativesUCameraRigCameraNode @ 14d639150

void __cdecl UCameraRigCameraNode::StaticRegisterNativesUCameraRigCameraNode(void)

{
  return;
}

// _getUObject @ 14d63f2c0

UObject * __thiscall UCameraRigCameraNode::_getUObject(UCameraRigCameraNode *this)

{
  return (UObject *)
         &this[-1].CameraRigReference.ParameterOverrides_DEPRECATED.Rotator3dOverrides.ArrayNum;
}

// _getUObject`adjustor{16}' @ 14d63f2cc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCameraRigCameraNode::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall UCameraRigCameraNode::_getUObject_adjustor_16__(UCameraRigCameraNode *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCameraRigCameraNode *)
                       &this[-1].CameraRigReference.ParameterOverrides_DEPRECATED.
                        Transform3dOverrides);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 14d63f2dc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCameraRigCameraNode::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall UCameraRigCameraNode::_getUObject_adjustor_24__(UCameraRigCameraNode *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCameraRigCameraNode *)
                       &this[-1].CameraRigReference.ParameterOverrides_DEPRECATED.
                        Transform3fOverrides.ArrayNum);
  return (UObject *)pUVar1;
}

