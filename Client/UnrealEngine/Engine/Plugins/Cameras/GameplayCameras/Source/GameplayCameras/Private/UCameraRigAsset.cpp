// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 21

// StaticClass @ 14d56bc20

UClass * __cdecl UCameraRigAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigAsset",
               &Z_Registration_Info_UClass_UCameraRigAsset.InnerSingleton,
               StaticRegisterNativesUCameraRigAsset,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UCameraRigAsset>,InternalVTableHelperCtorCaller<UCameraRigAsset>
               ,local_res8,UBaseCameraObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigAsset.InnerSingleton;
}

// UCameraRigAsset @ 14d58f480

UCameraRigAsset * __thiscall
UCameraRigAsset::UCameraRigAsset(UCameraRigAsset *this,FVTableHelper *param_1)

{
  UBaseCameraObject::UBaseCameraObject((UBaseCameraObject *)this,param_1);
  this->BuildStatus = Dirty;
  this->_padding_ = (longlong)&_vftable__for__UBaseCameraObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTagAssetInterface__;
  this->_padding_ = (longlong)&_vftable__for__IHasCameraBuildStatus__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphRootObject__;
  (this->RootNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  (this->GameplayTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).GameplayTags.ArrayNum = 0;
  (this->GameplayTags).GameplayTags.ArrayMax = 0;
  (this->GameplayTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).ParentTags.ArrayNum = 0;
  (this->GameplayTags).ParentTags.ArrayMax = 0;
  (this->EnterTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnterTransitions).ArrayNum = 0;
  (this->EnterTransitions).ArrayMax = 0;
  (this->ExitTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExitTransitions).ArrayNum = 0;
  (this->ExitTransitions).ArrayMax = 0;
  this->InitialOrientation = None;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// UCameraRigAsset @ 14d58f540

UCameraRigAsset * __thiscall
UCameraRigAsset::UCameraRigAsset(UCameraRigAsset *this,FObjectInitializer *param_1)

{
  UBaseCameraObject::UBaseCameraObject((UBaseCameraObject *)this,param_1);
  this->BuildStatus = Dirty;
  this->_padding_ = (longlong)&_vftable__for__UBaseCameraObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTagAssetInterface__;
  this->_padding_ = (longlong)&_vftable__for__IHasCameraBuildStatus__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphRootObject__;
  (this->RootNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  (this->GameplayTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).GameplayTags.ArrayNum = 0;
  (this->GameplayTags).GameplayTags.ArrayMax = 0;
  (this->GameplayTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).ParentTags.ArrayNum = 0;
  (this->GameplayTags).ParentTags.ArrayMax = 0;
  (this->EnterTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnterTransitions).ArrayNum = 0;
  (this->EnterTransitions).ArrayMax = 0;
  (this->ExitTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExitTransitions).ArrayNum = 0;
  (this->ExitTransitions).ArrayMax = 0;
  this->InitialOrientation = None;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// ~UCameraRigAsset @ 14d591b30

void __thiscall UCameraRigAsset::~UCameraRigAsset(UCameraRigAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UBaseCameraObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTagAssetInterface__;
  this->_padding_ = (longlong)&_vftable__for__IHasCameraBuildStatus__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphRootObject__;
  pFVar1 = (this->ExitTransitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnterTransitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameplayTags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameplayTags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IObjectTreeGraphRootObject__6B_;
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  this->_padding_ = (longlong)&___7IHasCameraBuildStatus__6B_;
  this->_padding_ = (longlong)&___7IGameplayTagAssetInterface__6B_;
  UBaseCameraObject::~UBaseCameraObject((UBaseCameraObject *)this);
  return;
}

// BuildCameraRig @ 14d59b110

void __thiscall UCameraRigAsset::BuildCameraRig(UCameraRigAsset *this,FCameraBuildLog *param_1)

{
  FCameraRigAssetBuilder local_28;
  
  UE::Cameras::FCameraRigAssetBuilder::FCameraRigAssetBuilder(&local_28,param_1);
  UE::Cameras::FCameraRigAssetBuilder::BuildCameraRig(&local_28,this);
  if (local_28.CameraNodeHierarchy.FlattenedHierarchy.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.CameraNodeHierarchy.FlattenedHierarchy.AllocatorInstance.Data);
  }
  return;
}

// BuildCameraRig @ 14d59b150

void __thiscall UCameraRigAsset::BuildCameraRig(UCameraRigAsset *this)

{
  FCameraRigAssetBuilder local_58;
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
  UE::Cameras::FCameraRigAssetBuilder::FCameraRigAssetBuilder(&local_58,&local_38);
  UE::Cameras::FCameraRigAssetBuilder::BuildCameraRig(&local_58,this);
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

// DirtyBuildStatus @ 14d59e210

void __thiscall UCameraRigAsset::DirtyBuildStatus(UCameraRigAsset *this)

{
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 3;
  return;
}

// GetAssetRegistryTags @ 14d5a6410

void __thiscall
UCameraRigAsset::GetAssetRegistryTags(UCameraRigAsset *this,FAssetRegistryTagsContext param_1)

{
  int iVar1;
  FName FVar2;
  ForAnyElementType _Src;
  FName *pFVar3;
  FString *pFVar4;
  UEnum *pUVar5;
  FAssetRegistryTagsContext FVar6;
  int iVar7;
  FScriptContainerElement *_Src_00;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  FAssetRegistryTagsContext local_res8;
  FAssetRegistryTagsContextData *local_res10;
  UEnum *local_res18;
  FName local_res20;
  FName local_c8;
  FString local_c0;
  FName local_b0;
  FString local_a8;
  undefined8 local_98;
  FAssetRegistryTag local_90;
  FString local_68 [2];
  
  local_res10 = param_1.Data;
  local_res20 = (FName)StaticEnum<enum_ECameraVariableType>();
  plVar9 = (longlong *)this->_padding_;
  iVar1 = (int)this->_padding_;
  pUVar5 = (UEnum *)(plVar9 + iVar1);
  local_res18 = pUVar5;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<UCameraObjectInterfaceBlendableParameter>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if ((UEnum *)plVar9 == pUVar5) break;
    lVar8 = *plVar9;
    if (lVar8 != 0) {
      iVar7 = *(int *)(lVar8 + 0x38) + -1;
      if (*(int *)(lVar8 + 0x38) == 0) {
        iVar7 = 0;
      }
      pFVar3 = ::FName::FName(&local_c8,iVar7,*(wchar_t **)(lVar8 + 0x30),FNAME_Add);
      FVar2 = *pFVar3;
      pFVar4 = UEnum::GetNameStringByValue
                         ((UEnum *)local_res20,&local_c0,(longlong)*(int *)(lVar8 + 0x60));
      _Src_00 = (FScriptContainerElement *)0x0;
      iVar7 = 0;
      if (local_68 != pFVar4) {
        _Src_00 = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar7 = (pFVar4->Data).ArrayNum;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      local_90.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Name = FVar2;
      local_90.Value.Data.ArrayNum = iVar7;
      if (iVar7 == 0) {
        local_90.Value.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar7,0,(ForAnyElementType *)&local_90.Value,iVar7,
                   &local_90.Value.Data.ArrayMax);
        memcpy(local_90.Value.Data.AllocatorInstance.Data,_Src_00,(longlong)iVar7 * 2);
      }
      param_1.Data = local_res10;
      local_90.Type = TT_Alphabetical;
      local_90.DisplayFlags = 0;
      FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)local_res10,&local_90);
      pUVar5 = local_res18;
      if (_Src_00 != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src_00);
        pUVar5 = local_res18;
      }
    }
    plVar9 = plVar9 + 1;
  }
  pUVar5 = StaticEnum<enum_ECameraContextDataType>();
  plVar10 = (longlong *)this->_padding_;
  iVar1 = (int)this->_padding_;
  plVar9 = plVar10 + iVar1;
  local_res18 = pUVar5;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<UCameraObjectInterfaceDataParameter>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (plVar10 == plVar9) break;
    lVar8 = *plVar10;
    if (lVar8 != 0) {
      local_b0.ComparisonIndex.Value = 0;
      local_b0.Number = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = *(int *)(lVar8 + 0x38) + -1;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      if (*(int *)(lVar8 + 0x38) == 0) {
        iVar7 = 0;
      }
      local_98 = 1;
      pFVar3 = ::FName::FName(&local_res20,iVar7,*(wchar_t **)(lVar8 + 0x30),FNAME_Add);
      local_b0 = *pFVar3;
      pFVar4 = UEnum::GetNameStringByValue(pUVar5,&local_c0,(longlong)*(int *)(lVar8 + 0x60));
      if (&local_a8 != pFVar4) {
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        local_a8.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Data.ArrayNum = (pFVar4->Data).ArrayNum;
        local_a8.Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (*(int *)(lVar8 + 100) == 1) {
        ::FString::AppendChars(&local_a8,L"[]",2);
      }
      _Src.Data = local_a8.Data.AllocatorInstance.Data;
      lVar8 = (longlong)local_a8.Data.ArrayNum;
      local_90.Name = local_b0;
      local_98 = CONCAT44(local_98._4_4_,1);
      local_90.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Value.Data.ArrayNum = local_a8.Data.ArrayNum;
      if (local_a8.Data.ArrayNum == 0) {
        local_90.Value.Data.ArrayMax = 0;
        local_90.Type = TT_Alphabetical;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_90.Value,
                   local_a8.Data.ArrayNum,&local_90.Value.Data.ArrayMax);
        memcpy(local_90.Value.Data.AllocatorInstance.Data,_Src.Data,lVar8 * 2);
        local_90.Type = (ETagType)local_98;
      }
      local_90.DisplayFlags = local_98._4_4_;
      FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_90);
      pUVar5 = local_res18;
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        pUVar5 = local_res18;
      }
    }
    plVar10 = plVar10 + 1;
  }
  FVar6.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar6);
  return;
}

// GetBuildStatus @ 14d5a6b50

ECameraBuildStatus __thiscall UCameraRigAsset::GetBuildStatus(UCameraRigAsset *this)

{
  return *(ECameraBuildStatus *)((longlong)&this->_padding_ + 4);
}

// GetOwnedGameplayTags @ 14d5a8a60

void __thiscall
UCameraRigAsset::GetOwnedGameplayTags(UCameraRigAsset *this,FGameplayTagContainer *param_1)

{
  FGameplayTagContainer::AppendTags(param_1,(FGameplayTagContainer *)&this->_padding_);
  return;
}

// GetPrivateStaticClass @ 14d5a9600

UClass * __cdecl UCameraRigAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigAsset",
               &Z_Registration_Info_UClass_UCameraRigAsset.InnerSingleton,
               StaticRegisterNativesUCameraRigAsset,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UCameraRigAsset>,InternalVTableHelperCtorCaller<UCameraRigAsset>
               ,local_res8,UBaseCameraObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigAsset.InnerSingleton;
}

// GetRootNode @ 14d5ab140

UCameraNode * __thiscall UCameraRigAsset::GetRootNode(UCameraRigAsset *this)

{
  return (this->RootNode).field0_0x0.DebugPtr;
}

// PostDuplicate @ 14d5c44c0

void __thiscall UCameraRigAsset::PostDuplicate(UCameraRigAsset *this,Type param_1)

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

// PostInitProperties @ 14d5c4600

void __thiscall UCameraRigAsset::PostInitProperties(UCameraRigAsset *this)

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

// PostLoad @ 14d5c4750

void __thiscall UCameraRigAsset::PostLoad(UCameraRigAsset *this)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  FGuid *pFVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  FGuid local_28;
  
  UBaseCameraObject::PostLoad((UBaseCameraObject *)this);
  if ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
  {
    pFVar8 = FGuid::NewGuid(&local_28);
    uVar4 = pFVar8->B;
    uVar5 = pFVar8->C;
    uVar6 = pFVar8->D;
    (this->Guid).A = pFVar8->A;
    (this->Guid).B = uVar4;
    (this->Guid).C = uVar5;
    (this->Guid).D = uVar6;
  }
  plVar9 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar9 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCameraObjectInterfaceBlendableParameter>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar9 == plVar1) break;
    lVar3 = *plVar9;
    if ((*(int *)(lVar3 + 0x60) == 0) && (*(longlong **)(lVar3 + 0x78) != (longlong *)0x0)) {
      uVar7 = (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x2b0))();
      *(undefined4 *)(lVar3 + 0x60) = uVar7;
      *(undefined8 *)(lVar3 + 0x78) = 0;
    }
    plVar9 = plVar9 + 1;
  }
  return;
}

// PreSave @ 14d5c84c0

void __thiscall UCameraRigAsset::PreSave(UCameraRigAsset *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// StaticRegisterNativesUCameraRigAsset @ 14d5d0d30

void __cdecl UCameraRigAsset::StaticRegisterNativesUCameraRigAsset(void)

{
  return;
}

// _getUObject @ 14d5d7510

UObject * __thiscall UCameraRigAsset::_getUObject(UCameraRigAsset *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14d5d7520

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UCameraRigAsset::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UCameraRigAsset::_getUObject_adjustor_8__(UCameraRigAsset *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCameraRigAsset *)&this[-1].Guid.C);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14d5d7530

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCameraRigAsset::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall UCameraRigAsset::_getUObject_adjustor_16__(UCameraRigAsset *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCameraRigAsset *)&this[-1].Guid);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 14d5d7540

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCameraRigAsset::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall UCameraRigAsset::_getUObject_adjustor_24__(UCameraRigAsset *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCameraRigAsset *)&this[-1].InitialOrientation);
  return (UObject *)pUVar1;
}

