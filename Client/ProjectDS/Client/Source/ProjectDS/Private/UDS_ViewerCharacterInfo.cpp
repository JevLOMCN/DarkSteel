// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b5d62e0

UClass * __cdecl UDS_ViewerCharacterInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ViewerCharacterInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewerCharacterInfo",
               &Z_Registration_Info_UClass_UDS_ViewerCharacterInfo.InnerSingleton,
               StaticRegisterNativesUDS_ViewerCharacterInfo,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ViewerCharacterInfo>,
               InternalVTableHelperCtorCaller<UDS_ViewerCharacterInfo>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ViewerCharacterInfo.InnerSingleton;
}

// UDS_ViewerCharacterInfo @ 14b5d9630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

UDS_ViewerCharacterInfo * __thiscall
UDS_ViewerCharacterInfo::UDS_ViewerCharacterInfo
          (UDS_ViewerCharacterInfo *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ViewerCharacterInfo__6B_;
  this->CharacterID = 0;
  this->NpcID = 0;
  this->PresetID = 0;
  (this->ParentViewerSceneInfo).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ParentViewerSceneInfo).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->ViewerCharacterTransformMap = 0;
  *(undefined8 *)&(this->ViewerCharacterTransformMap).field_0x8 = 0;
  *(undefined8 *)&(this->ViewerCharacterTransformMap).field_0x20 = 0;
  this->SlotIndex = 0;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x28 = 0;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x34 = 0;
  *(undefined8 *)&(this->ViewerCharacterTransformMap).field_0x40 = 0;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x48 = 0;
  this->bIsRefreshAsyncComplete = false;
  (this->ViewerCharacter).field0_0x0.DebugPtr = (ADS_ViewerCharacter *)0x0;
  (this->SwitchingCharacter).field0_0x0.DebugPtr = (ADS_ViewerCharacter *)0x0;
  (this->TimerHandle_OnCompleteRefreshAsync).Handle = 0;
  (this->TimerHandle_ShowViewerCharacter).Handle = 0;
  return this;
}

// UDS_ViewerCharacterInfo @ 14b5d96e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

UDS_ViewerCharacterInfo * __thiscall
UDS_ViewerCharacterInfo::UDS_ViewerCharacterInfo
          (UDS_ViewerCharacterInfo *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ViewerCharacterInfo__6B_;
  this->CharacterID = 0;
  this->NpcID = 0;
  this->PresetID = 0;
  (this->ParentViewerSceneInfo).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ParentViewerSceneInfo).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->ViewerCharacterTransformMap = 0;
  *(undefined8 *)&(this->ViewerCharacterTransformMap).field_0x8 = 0;
  *(undefined8 *)&(this->ViewerCharacterTransformMap).field_0x20 = 0;
  this->SlotIndex = 0;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x28 = 0;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x34 = 0;
  *(undefined8 *)&(this->ViewerCharacterTransformMap).field_0x40 = 0;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x48 = 0;
  this->bIsRefreshAsyncComplete = false;
  (this->ViewerCharacter).field0_0x0.DebugPtr = (ADS_ViewerCharacter *)0x0;
  (this->SwitchingCharacter).field0_0x0.DebugPtr = (ADS_ViewerCharacter *)0x0;
  (this->TimerHandle_OnCompleteRefreshAsync).Handle = 0;
  (this->TimerHandle_ShowViewerCharacter).Handle = 0;
  return this;
}

// ~UDS_ViewerCharacterInfo @ 14b5da550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall UDS_ViewerCharacterInfo::~UDS_ViewerCharacterInfo(UDS_ViewerCharacterInfo *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ViewerCharacterInfo__6B_;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ViewerCharacterTransformMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ViewerCharacterTransformMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5db970

UClass * __cdecl UDS_ViewerCharacterInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ViewerCharacterInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewerCharacterInfo",
               &Z_Registration_Info_UClass_UDS_ViewerCharacterInfo.InnerSingleton,
               StaticRegisterNativesUDS_ViewerCharacterInfo,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ViewerCharacterInfo>,
               InternalVTableHelperCtorCaller<UDS_ViewerCharacterInfo>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ViewerCharacterInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_ViewerCharacterInfo @ 14b5dbdd0

void __cdecl UDS_ViewerCharacterInfo::StaticRegisterNativesUDS_ViewerCharacterInfo(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_ViewerCharacterInfo_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnCompleteRefreshAsync @ 14b5dd8e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __cdecl
UDS_ViewerCharacterInfo::execOnCompleteRefreshAsync(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnCompleteRefreshAsync((UDS_ViewerCharacterInfo *)param_1);
  return;
}

// ClearInfo @ 14bb54f50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall UDS_ViewerCharacterInfo::ClearInfo(UDS_ViewerCharacterInfo *this)

{
  undefined1 *puVar1;
  int iVar2;
  ADS_ViewerCharacter *this_00;
  bool bVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  ResetInfo(this);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->ParentViewerSceneInfo).WeakPtr = local_res8;
  this->SlotIndex = 0;
  bVar3 = 1 < *(int *)&(this->ViewerCharacterTransformMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                      *)&this->ViewerCharacterTransformMap);
  }
  puVar1 = &(this->ViewerCharacterTransformMap).field_0xc;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)&this->ViewerCharacterTransformMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ViewerCharacterTransformMap).field_0x2c;
  *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ViewerCharacterTransformMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ViewerCharacterTransformMap).field_0x48 = 1;
    TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
              *)&this->ViewerCharacterTransformMap);
  }
  this_00 = (this->ViewerCharacter).field0_0x0.DebugPtr;
  if (this_00 != (ADS_ViewerCharacter *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
  }
  (this->ViewerCharacter).field0_0x0.DebugPtr = (ADS_ViewerCharacter *)0x0;
  return;
}

// DestroySwitchingCharacter @ 14bb5d7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall UDS_ViewerCharacterInfo::DestroySwitchingCharacter(UDS_ViewerCharacterInfo *this)

{
  ADS_ViewerCharacter *pAVar1;
  
  pAVar1 = (this->SwitchingCharacter).field0_0x0.DebugPtr;
  if (pAVar1 != (ADS_ViewerCharacter *)0x0) {
    (**(code **)(pAVar1->_padding_ + 0x368))();
    ADS_ViewerCharacter::ClearResource((this->SwitchingCharacter).field0_0x0.DebugPtr);
    pAVar1 = (this->SwitchingCharacter).field0_0x0.DebugPtr;
    if (pAVar1 != (ADS_ViewerCharacter *)0x0) {
      AActor::Destroy((AActor *)pAVar1,false,true);
    }
  }
  (this->SwitchingCharacter).field0_0x0.DebugPtr = (ADS_ViewerCharacter *)0x0;
  return;
}

// InitInfo @ 14bb6b4c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall
UDS_ViewerCharacterInfo::InitInfo
          (UDS_ViewerCharacterInfo *this,TWeakObjectPtr<UDS_ViewerSceneInfo,FWeakObjectPtr> param_1,
          int *param_2,TTransform<double> *param_3)

{
  bool bVar1;
  FWeakObjectPtr local_res10;
  TPairInitializer<int_&,UE::Math::TTransform<double>_const_&> local_28;
  TTransform<double> *local_18;
  
  local_res10 = param_1.WeakPtr;
  ResetInfo(this);
  bVar1 = TWeakObjectPtr<UDS_ViewerSceneInfo,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ViewerSceneInfo,FWeakObjectPtr> *)&local_res10,(void *)0x0)
  ;
  if (bVar1) {
    return false;
  }
  local_28.Value = (TTransform<double> *)&this->SlotIndex;
  (this->ParentViewerSceneInfo).WeakPtr = local_res10;
  *(int *)local_28.Value = *param_2;
  local_18 = param_3;
  TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&,UE::Math::TTransform<double>_const_&>_>
            ((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
              *)&this->ViewerCharacterTransformMap,&local_28,(bool *)&local_28.Value);
  return true;
}

// IsCompleteRefreshAsync @ 14bb6ea30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall UDS_ViewerCharacterInfo::IsCompleteRefreshAsync(UDS_ViewerCharacterInfo *this)

{
  undefined1 uVar1;
  
  if ((0 < this->CharacterID) || (uVar1 = 1, 0 < this->NpcID)) {
    uVar1 = this->bIsRefreshAsyncComplete;
  }
  return (bool)uVar1;
}

// OnCompleteRefreshAsync @ 14bb72740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall UDS_ViewerCharacterInfo::OnCompleteRefreshAsync(UDS_ViewerCharacterInfo *this)

{
  ADS_ViewerCharacter *pAVar1;
  float fVar2;
  bool bVar3;
  UDS_PartsSystemControl *this_00;
  UObject *pUVar4;
  FTimerManager *pFVar5;
  FTimerData *pFVar6;
  UDS_ViewerSceneInfo *pUVar7;
  FWeakObjectPtr local_res8;
  
  pAVar1 = (this->ViewerCharacter).field0_0x0.DebugPtr;
  if (pAVar1->bIsPartsSystemCharacter == true) {
    ADS_ViewerCharacter::GetPartsSystemControl(pAVar1);
    bVar3 = TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> *)&local_res8,
                       (void *)0x0);
    if (bVar3) {
      return;
    }
    this_00 = (UDS_PartsSystemControl *)FWeakObjectPtr::Get(&local_res8);
    bVar3 = UDS_PartsSystemControl::IsValid(this_00);
    if (!bVar3) {
      return;
    }
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    if (*(char *)(pUVar4 + 2) == '\x01') {
      return;
    }
  }
  pAVar1 = (this->SwitchingCharacter).field0_0x0.DebugPtr;
  this->bIsRefreshAsyncComplete = true;
  if (pAVar1 != (ADS_ViewerCharacter *)0x0) {
    (**(code **)(pAVar1->_padding_ + 0x368))();
    ADS_ViewerCharacter::ClearResource((this->SwitchingCharacter).field0_0x0.DebugPtr);
    pAVar1 = (this->SwitchingCharacter).field0_0x0.DebugPtr;
    if (pAVar1 != (ADS_ViewerCharacter *)0x0) {
      AActor::Destroy((AActor *)pAVar1,false,true);
    }
  }
  (this->SwitchingCharacter).field0_0x0.DebugPtr = (ADS_ViewerCharacter *)0x0;
  bVar3 = TWeakObjectPtr<UDS_ViewerSceneInfo,FWeakObjectPtr>::UEOpEquals
                    (&this->ParentViewerSceneInfo,(void *)0x0);
  if (!bVar3) {
    if ((this->TimerHandle_OnCompleteRefreshAsync).Handle != 0) {
      pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar6 = FTimerManager::FindTimer(pFVar5,&this->TimerHandle_OnCompleteRefreshAsync);
      if (pFVar6 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (pFVar5,(FTimerHandle)(this->TimerHandle_OnCompleteRefreshAsync).Handle);
      }
      (this->TimerHandle_OnCompleteRefreshAsync).Handle = 0;
    }
    pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
    pUVar7 = (UDS_ViewerSceneInfo *)FWeakObjectPtr::Get(&(this->ParentViewerSceneInfo).WeakPtr);
    fVar2 = __real_bf800000;
    FTimerManager::SetTimer<UDS_ViewerSceneInfo>
              (pFVar5,&this->TimerHandle_OnCompleteRefreshAsync,pUVar7,(pmf_a321fe5f)0x14bb72950,
               __real_3dcccccd,false,__real_bf800000);
    if ((this->TimerHandle_ShowViewerCharacter).Handle != 0) {
      pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar6 = FTimerManager::FindTimer(pFVar5,&this->TimerHandle_ShowViewerCharacter);
      if (pFVar6 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (pFVar5,(FTimerHandle)(this->TimerHandle_ShowViewerCharacter).Handle);
      }
      (this->TimerHandle_ShowViewerCharacter).Handle = 0;
    }
    pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
    FTimerManager::SetTimer<UDS_ViewerCharacterInfo>
              (pFVar5,&this->TimerHandle_ShowViewerCharacter,this,(pmf_b935eb1c)0x14bb90750,
               __real_3e4ccccd,false,fVar2);
  }
  return;
}

// ResetInfo @ 14bb867d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall UDS_ViewerCharacterInfo::ResetInfo(UDS_ViewerCharacterInfo *this)

{
  ADS_ViewerCharacter *pAVar1;
  FTimerManager *pFVar2;
  FTimerData *pFVar3;
  TVector<double>_u_0 local_28;
  
  this->CharacterID = 0;
  this->NpcID = 0;
  this->PresetID = 0;
  this->bIsRefreshAsyncComplete = false;
  pAVar1 = (this->ViewerCharacter).field0_0x0.DebugPtr;
  if (pAVar1 != (ADS_ViewerCharacter *)0x0) {
    (**(code **)(pAVar1->_padding_ + 0x368))(pAVar1,1);
    ADS_ViewerCharacter::ClearResource((this->ViewerCharacter).field0_0x0.DebugPtr);
    local_28._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_28._s_0.Y = _UNK_150689688;
    local_28._s_0.Z = __real_3ff0000000000000;
    AActor::SetActorRelativeScale3D
              ((AActor *)(this->ViewerCharacter).field0_0x0.DebugPtr,
               (TVector<double> *)&local_28._s_0);
  }
  pAVar1 = (this->SwitchingCharacter).field0_0x0.DebugPtr;
  if (pAVar1 != (ADS_ViewerCharacter *)0x0) {
    (**(code **)(pAVar1->_padding_ + 0x368))();
    ADS_ViewerCharacter::ClearResource((this->SwitchingCharacter).field0_0x0.DebugPtr);
    pAVar1 = (this->SwitchingCharacter).field0_0x0.DebugPtr;
    if (pAVar1 != (ADS_ViewerCharacter *)0x0) {
      AActor::Destroy((AActor *)pAVar1,false,true);
    }
  }
  (this->SwitchingCharacter).field0_0x0.DebugPtr = (ADS_ViewerCharacter *)0x0;
  if ((this->TimerHandle_OnCompleteRefreshAsync).Handle != 0) {
    pFVar2 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(pFVar2,&this->TimerHandle_OnCompleteRefreshAsync);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar2,(FTimerHandle)(this->TimerHandle_OnCompleteRefreshAsync).Handle);
    }
    (this->TimerHandle_OnCompleteRefreshAsync).Handle = 0;
  }
  if ((this->TimerHandle_ShowViewerCharacter).Handle != 0) {
    pFVar2 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(pFVar2,&this->TimerHandle_ShowViewerCharacter);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar2,(FTimerHandle)(this->TimerHandle_ShowViewerCharacter).Handle);
    }
    (this->TimerHandle_ShowViewerCharacter).Handle = 0;
  }
  return;
}

// SetViewerCharacter @ 14bb8c700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall
UDS_ViewerCharacterInfo::SetViewerCharacter(UDS_ViewerCharacterInfo *this,int *param_1)

{
  ADS_ViewerCharacter *this_00;
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  UDS_ViewerCharacterInfo *local_res10;
  FSharedReferencer<1> local_70;
  FWN_EndOfRefs local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (*param_1 == 0) {
    ResetInfo(this);
  }
  else if (*param_1 != this->CharacterID) {
    SwitchCharacter(this);
    if ((this->ViewerCharacter).field0_0x0.DebugPtr != (ADS_ViewerCharacter *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ViewerCharacterInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_res10 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
        puVar3[4] = OnCompleteRefreshAsync;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      this_00 = (this->ViewerCharacter).field0_0x0.DebugPtr;
      local_68.TaskCaller.Object = (void *)0x0;
      local_68.TaskCaller.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FReadAccessScope *)&local_40);
      if (((local_50.DelegateSize == 0) ||
          (local_50.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar1 = (**(code **)(*(longlong *)local_50.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_40);
      if (bVar2) {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_40,
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
        pTVar5 = ::operator_new(0x30);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar5 + 1),
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_40);
          pTVar5->SharedReferenceCount = (atomic<int>)0x1;
          pTVar5->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
          ;
          pTVar5->WeakReferenceCount = (atomic<int>)0x1;
          pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
          pTVar6 = pTVar5;
        }
        local_70.ReferenceController = pTVar6;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_68.TaskCaller.SharedReferenceCount,&local_70);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.ReferenceController);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
        if (local_40.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
          FMemory::Free(local_40.Accessor);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&local_40);
      }
      bVar2 = ADS_ViewerCharacter::LoadCharacterResource(this_00,*param_1,&local_68);
      if (bVar2) {
        this->CharacterID = *param_1;
        this->NpcID = 0;
        this->PresetID = 0;
        this->bIsRefreshAsyncComplete = false;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      return bVar2;
    }
    return false;
  }
  return true;
}

// SetViewerNpc @ 14bb8cd90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall UDS_ViewerCharacterInfo::SetViewerNpc(UDS_ViewerCharacterInfo *this,int *param_1)

{
  ADS_ViewerCharacter *this_00;
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  UDS_ViewerCharacterInfo *local_res10;
  FSharedReferencer<1> local_70;
  FWN_EndOfRefs local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (*param_1 == 0) {
    ResetInfo(this);
  }
  else if (*param_1 != this->NpcID) {
    SwitchCharacter(this);
    if ((this->ViewerCharacter).field0_0x0.DebugPtr != (ADS_ViewerCharacter *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ViewerCharacterInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_res10 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
        puVar3[4] = OnCompleteRefreshAsync;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      this_00 = (this->ViewerCharacter).field0_0x0.DebugPtr;
      local_68.TaskCaller.Object = (void *)0x0;
      local_68.TaskCaller.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FReadAccessScope *)&local_40);
      if (((local_50.DelegateSize == 0) ||
          (local_50.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar1 = (**(code **)(*(longlong *)local_50.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_40);
      if (bVar2) {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_40,
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
        pTVar5 = ::operator_new(0x30);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar5 + 1),
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_40);
          pTVar5->SharedReferenceCount = (atomic<int>)0x1;
          pTVar5->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
          ;
          pTVar5->WeakReferenceCount = (atomic<int>)0x1;
          pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
          pTVar6 = pTVar5;
        }
        local_70.ReferenceController = pTVar6;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_68.TaskCaller.SharedReferenceCount,&local_70);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.ReferenceController);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
        if (local_40.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
          FMemory::Free(local_40.Accessor);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&local_40);
      }
      bVar2 = ADS_ViewerCharacter::LoadNpcResource(this_00,*param_1,&local_68);
      if (bVar2) {
        this->NpcID = *param_1;
        this->CharacterID = 0;
        this->PresetID = 0;
        this->bIsRefreshAsyncComplete = false;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      return bVar2;
    }
    return false;
  }
  return true;
}

// SetViewerPreset @ 14bb8d370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall UDS_ViewerCharacterInfo::SetViewerPreset(UDS_ViewerCharacterInfo *this,int *param_1)

{
  ADS_ViewerCharacter *this_00;
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  UDS_ViewerCharacterInfo *local_res10;
  FSharedReferencer<1> local_70;
  FWN_EndOfRefs local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (*param_1 == 0) {
    ResetInfo(this);
  }
  else if (*param_1 != this->PresetID) {
    SwitchCharacter(this);
    if ((this->ViewerCharacter).field0_0x0.DebugPtr != (ADS_ViewerCharacter *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ViewerCharacterInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_res10 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
        puVar3[4] = OnCompleteRefreshAsync;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      this_00 = (this->ViewerCharacter).field0_0x0.DebugPtr;
      local_68.TaskCaller.Object = (void *)0x0;
      local_68.TaskCaller.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FReadAccessScope *)&local_40);
      if (((local_50.DelegateSize == 0) ||
          (local_50.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar1 = (**(code **)(*(longlong *)local_50.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_40);
      if (bVar2) {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_40,
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
        pTVar5 = ::operator_new(0x30);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar5 + 1),
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_40);
          pTVar5->SharedReferenceCount = (atomic<int>)0x1;
          pTVar5->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
          ;
          pTVar5->WeakReferenceCount = (atomic<int>)0x1;
          pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
          pTVar6 = pTVar5;
        }
        local_70.ReferenceController = pTVar6;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_68.TaskCaller.SharedReferenceCount,&local_70);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.ReferenceController);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
        if (local_40.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
          FMemory::Free(local_40.Accessor);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&local_40);
      }
      bVar2 = ADS_ViewerCharacter::LoadPresetResource(this_00,*param_1,&local_68);
      if (bVar2) {
        this->CharacterID = 0;
        this->NpcID = 0;
        this->PresetID = *param_1;
        this->bIsRefreshAsyncComplete = false;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      return bVar2;
    }
    return false;
  }
  return true;
}

// ShowViewerCharacter @ 14bb90750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall UDS_ViewerCharacterInfo::ShowViewerCharacter(UDS_ViewerCharacterInfo *this)

{
  ADS_ViewerCharacter *pAVar1;
  
  pAVar1 = (this->ViewerCharacter).field0_0x0.DebugPtr;
  if (pAVar1 != (ADS_ViewerCharacter *)0x0) {
    ADS_ViewerCharacter::AdjustSoulTransform(pAVar1);
    pAVar1 = (this->ViewerCharacter).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014bb9077b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pAVar1->_padding_ + 0x368))(pAVar1,0);
    return;
  }
  return;
}

// SwitchCharacter @ 14bb921b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall UDS_ViewerCharacterInfo::SwitchCharacter(UDS_ViewerCharacterInfo *this)

{
  int iVar1;
  UWorld *this_00;
  FActorSpawnParameters *pFVar2;
  TTransform<double> *pTVar3;
  UClass *pUVar4;
  ADS_ViewerCharacter *pAVar5;
  FString *pFVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined1 auStack_c8 [32];
  FString local_a8;
  FString local_98;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (*(int *)&(this->ViewerCharacterTransformMap).field_0x8 !=
      *(int *)&(this->ViewerCharacterTransformMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ViewerCharacterTransformMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ViewerCharacterTransformMap).field_0x38;
    }
    iVar1 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ViewerCharacterTransformMap).field_0x48 - 1U &
                              this->SlotIndex) * 4);
    if (iVar1 != -1) {
      do {
        if (*(uint *)((longlong)iVar1 * 0x80 + *(longlong *)&this->ViewerCharacterTransformMap) ==
            this->SlotIndex) {
          pAVar5 = (this->SwitchingCharacter).field0_0x0.DebugPtr;
          if (pAVar5 != (ADS_ViewerCharacter *)0x0) {
            (**(code **)(pAVar5->_padding_ + 0x368))();
            ADS_ViewerCharacter::ClearResource((this->SwitchingCharacter).field0_0x0.DebugPtr);
            pAVar5 = (this->SwitchingCharacter).field0_0x0.DebugPtr;
            if (pAVar5 != (ADS_ViewerCharacter *)0x0) {
              AActor::Destroy((AActor *)pAVar5,false,true);
            }
          }
          (this->SwitchingCharacter).field0_0x0.DebugPtr = (ADS_ViewerCharacter *)0x0;
          pAVar5 = (this->ViewerCharacter).field0_0x0.DebugPtr;
          if (pAVar5 != (ADS_ViewerCharacter *)0x0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pAVar5);
            }
            (this->SwitchingCharacter).field0_0x0 = (this->ViewerCharacter).field0_0x0;
            (this->ViewerCharacter).field0_0x0.DebugPtr = (ADS_ViewerCharacter *)0x0;
          }
          this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
          pFVar2 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
          pTVar3 = TMapBase<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
                   ::FindChecked((TMapBase<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
                                  *)&this->ViewerCharacterTransformMap,this->SlotIndex);
          pUVar4 = Z_Construct_UClass_ADS_ViewerCharacter_NoRegister();
          pAVar5 = (ADS_ViewerCharacter *)UWorld::SpawnActor(this_00,pUVar4,pTVar3,pFVar2);
          if (pAVar5 == (ADS_ViewerCharacter *)0x0) {
            pAVar5 = (ADS_ViewerCharacter *)0x0;
          }
          else {
            pUVar4 = Z_Construct_UClass_ADS_ViewerCharacter_NoRegister();
            iVar1 = (int)pUVar4->_padding_;
            if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar4->_padding_)) {
              pFVar6 = GetTypeName<ADS_ViewerCharacter>(&local_a8);
              pwVar10 = L"";
              if ((pFVar6->Data).ArrayNum == 0) {
                pwVar9 = L"";
              }
              else {
                pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
              }
              pFVar6 = GetFullNameForCastLogError<AActor>(&local_98,(AActor *)pAVar5);
              if ((pFVar6->Data).ArrayNum != 0) {
                pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar10,pwVar9);
            }
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pAVar5 != (ADS_ViewerCharacter *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pAVar5);
          }
          (this->ViewerCharacter).field0_0x0.DebugPtr = pAVar5;
          if (local_88._64_8_ != 0) {
            plVar7 = (longlong *)(local_88 + 0x50);
            if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
              plVar7 = (longlong *)local_88._104_8_;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          pAVar5 = (this->ViewerCharacter).field0_0x0.DebugPtr;
          if (pAVar5 != (ADS_ViewerCharacter *)0x0) {
            (**(code **)(pAVar5->_padding_ + 0x368))(pAVar5,1);
          }
          return true;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x80 + 0x70 +
                        *(longlong *)&this->ViewerCharacterTransformMap);
      } while (iVar1 != -1);
    }
  }
  return false;
}

