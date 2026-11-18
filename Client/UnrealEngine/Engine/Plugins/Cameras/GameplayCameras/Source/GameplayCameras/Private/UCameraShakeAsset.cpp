// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 17

// StaticClass @ 14d56bf50

UClass * __cdecl UCameraShakeAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraShakeAsset",
               &Z_Registration_Info_UClass_UCameraShakeAsset.InnerSingleton,
               StaticRegisterNativesUCameraShakeAsset,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraShakeAsset>,
               InternalVTableHelperCtorCaller<UCameraShakeAsset>,local_res8,
               UBaseCameraObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeAsset.InnerSingleton;
}

// UCameraShakeAsset @ 14d58f8f0

UCameraShakeAsset * __thiscall
UCameraShakeAsset::UCameraShakeAsset(UCameraShakeAsset *this,FVTableHelper *param_1)

{
  UBaseCameraObject::UBaseCameraObject((UBaseCameraObject *)this,param_1);
  this->bIsSingleInstance = false;
  this->BuildStatus = Dirty;
  this->_padding_ = (longlong)&_vftable__for__UBaseCameraObject__;
  this->_padding_ = (longlong)&_vftable__for__IHasCameraBuildStatus__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphRootObject__;
  (this->RootNode).field0_0x0.DebugPtr = (UShakeCameraNode *)0x0;
  (this->BlendIn).field0_0x0.DebugPtr = (USimpleFixedTimeBlendCameraNode *)0x0;
  (this->BlendOut).field0_0x0.DebugPtr = (USimpleFixedTimeBlendCameraNode *)0x0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// UCameraShakeAsset @ 14d58f970

UCameraShakeAsset * __thiscall
UCameraShakeAsset::UCameraShakeAsset(UCameraShakeAsset *this,FObjectInitializer *param_1)

{
  UBaseCameraObject::UBaseCameraObject((UBaseCameraObject *)this,param_1);
  this->bIsSingleInstance = false;
  this->BuildStatus = Dirty;
  this->_padding_ = (longlong)&_vftable__for__UBaseCameraObject__;
  this->_padding_ = (longlong)&_vftable__for__IHasCameraBuildStatus__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphRootObject__;
  (this->RootNode).field0_0x0.DebugPtr = (UShakeCameraNode *)0x0;
  (this->BlendIn).field0_0x0.DebugPtr = (USimpleFixedTimeBlendCameraNode *)0x0;
  (this->BlendOut).field0_0x0.DebugPtr = (USimpleFixedTimeBlendCameraNode *)0x0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// ~UCameraShakeAsset @ 14d591d20

void __thiscall UCameraShakeAsset::~UCameraShakeAsset(UCameraShakeAsset *this)

{
  this->_padding_ = (longlong)&_vftable__for__UBaseCameraObject__;
  this->_padding_ = (longlong)&___7IObjectTreeGraphRootObject__6B_;
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  this->_padding_ = (longlong)&___7IHasCameraBuildStatus__6B_;
  UBaseCameraObject::~UBaseCameraObject((UBaseCameraObject *)this);
  return;
}

// BuildCameraShake @ 14d59b1f0

void __thiscall
UCameraShakeAsset::BuildCameraShake(UCameraShakeAsset *this,FCameraBuildLog *param_1)

{
  FCameraShakeAssetBuilder local_28;
  
  UE::Cameras::FCameraShakeAssetBuilder::FCameraShakeAssetBuilder(&local_28,param_1);
  UE::Cameras::FCameraShakeAssetBuilder::BuildCameraShake(&local_28,this);
  if (local_28.CameraNodeHierarchy.FlattenedHierarchy.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.CameraNodeHierarchy.FlattenedHierarchy.AllocatorInstance.Data);
  }
  return;
}

// BuildCameraShake @ 14d59b230

void __thiscall UCameraShakeAsset::BuildCameraShake(UCameraShakeAsset *this)

{
  FCameraShakeAssetBuilder local_58;
  FCameraBuildLog local_38;
  
  local_38.bForwardToLogging = true;
  local_38.bHasWarnings = false;
  local_38.Messages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Messages.ArrayNum = 0;
  local_38.Messages.ArrayMax = 0;
  local_38.LoggingPrefix.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.LoggingPrefix.Data.ArrayNum = 0;
  local_38.LoggingPrefix.Data.ArrayMax = 0;
  local_38.bHasErrors = false;
  UE::Cameras::FCameraBuildLog::SetForwardMessagesToLogging(&local_38,true);
  UE::Cameras::FCameraShakeAssetBuilder::FCameraShakeAssetBuilder(&local_58,&local_38);
  UE::Cameras::FCameraShakeAssetBuilder::BuildCameraShake(&local_58,this);
  if (local_58.CameraNodeHierarchy.FlattenedHierarchy.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.CameraNodeHierarchy.FlattenedHierarchy.AllocatorInstance.Data);
  }
  if (local_38.LoggingPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.LoggingPrefix.Data.AllocatorInstance.Data);
  }
  DestructItems<UE::Cameras::FCameraBuildLogMessage,int>
            ((FCameraBuildLogMessage *)local_38.Messages.AllocatorInstance.Data,
             local_38.Messages.ArrayNum);
  if ((FCameraBuildLogMessage *)local_38.Messages.AllocatorInstance.Data !=
      (FCameraBuildLogMessage *)0x0) {
    FMemory::Free(local_38.Messages.AllocatorInstance.Data);
  }
  return;
}

// DirtyBuildStatus @ 14d59e220

void __thiscall UCameraShakeAsset::DirtyBuildStatus(UCameraShakeAsset *this)

{
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 3;
  return;
}

// GetBuildStatus @ 14d5a6b60

ECameraBuildStatus __thiscall UCameraShakeAsset::GetBuildStatus(UCameraShakeAsset *this)

{
  return *(ECameraBuildStatus *)((longlong)&this->_padding_ + 1);
}

// GetPrivateStaticClass @ 14d5a9b00

UClass * __cdecl UCameraShakeAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraShakeAsset",
               &Z_Registration_Info_UClass_UCameraShakeAsset.InnerSingleton,
               StaticRegisterNativesUCameraShakeAsset,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraShakeAsset>,
               InternalVTableHelperCtorCaller<UCameraShakeAsset>,local_res8,
               UBaseCameraObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeAsset.InnerSingleton;
}

// GetRootNode @ 14d5ab150

UCameraNode * __thiscall UCameraShakeAsset::GetRootNode(UCameraShakeAsset *this)

{
  return (UCameraNode *)(this->RootNode).field0_0x0.DebugPtr;
}

// PostDuplicate @ 14d5c4510

void __thiscall UCameraShakeAsset::PostDuplicate(UCameraShakeAsset *this,Type param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  (**(code **)(this->_padding_ + 0xf8))(this,param_1 == PIE);
  if (param_1 == Normal) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->Guid).A = pFVar4->A;
    (this->Guid).B = uVar1;
    (this->Guid).C = uVar2;
    (this->Guid).D = uVar3;
  }
  return;
}

// PostInitProperties @ 14d5c4660

void __thiscall UCameraShakeAsset::PostInitProperties(UCameraShakeAsset *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  UObject::PostInitProperties((UObject *)this);
  if (((this->_padding_ & 0x80430) == 0) &&
     ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0))
  {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->Guid).A = pFVar4->A;
    (this->Guid).B = uVar1;
    (this->Guid).C = uVar2;
    (this->Guid).D = uVar3;
  }
  return;
}

// PreSave @ 14d5c84f0

void __thiscall UCameraShakeAsset::PreSave(UCameraShakeAsset *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// StaticRegisterNativesUCameraShakeAsset @ 14d5d0e00

void __cdecl UCameraShakeAsset::StaticRegisterNativesUCameraShakeAsset(void)

{
  return;
}

// _getUObject @ 14d5d7570

UObject * __thiscall UCameraShakeAsset::_getUObject(UCameraShakeAsset *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14d5d7580

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCameraShakeAsset::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall UCameraShakeAsset::_getUObject_adjustor_8__(UCameraShakeAsset *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCameraShakeAsset *)&this[-1].Guid.D);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14d5d7590

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCameraShakeAsset::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall UCameraShakeAsset::_getUObject_adjustor_16__(UCameraShakeAsset *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCameraShakeAsset *)&this[-1].Guid.B);
  return (UObject *)pUVar1;
}

