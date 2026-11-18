// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b481bb0

UClass * __cdecl ADS_DefaultGameMode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_DefaultGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DefaultGameMode",
               &Z_Registration_Info_UClass_ADS_DefaultGameMode.InnerSingleton,
               StaticRegisterNativesADS_DefaultGameMode,0x360,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_DefaultGameMode>,
               InternalVTableHelperCtorCaller<ADS_DefaultGameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_DefaultGameMode.InnerSingleton;
}

// ADS_DefaultGameMode @ 14b4831d0

ADS_DefaultGameMode * __thiscall
ADS_DefaultGameMode::ADS_DefaultGameMode(ADS_DefaultGameMode *this,FVTableHelper *param_1)

{
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  this->CharacterEntityID = 0x457;
  this->_padding_ = (longlong)&___7ADS_DefaultGameMode__6B_;
  this->CharacterID = 1;
  return this;
}

// ADS_DefaultGameMode @ 14b483210

ADS_DefaultGameMode * __thiscall
ADS_DefaultGameMode::ADS_DefaultGameMode(ADS_DefaultGameMode *this,FObjectInitializer *param_1)

{
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  this->CharacterEntityID = 0x457;
  this->_padding_ = (longlong)&___7ADS_DefaultGameMode__6B_;
  this->CharacterID = 1;
  return this;
}

// ~ADS_DefaultGameMode @ 14b483c70

void __thiscall ADS_DefaultGameMode::~ADS_DefaultGameMode(ADS_DefaultGameMode *this)

{
  this->_padding_ = (longlong)&___7ADS_DefaultGameMode__6B_;
  AGameModeBase::~AGameModeBase((AGameModeBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b484df0

UClass * __cdecl ADS_DefaultGameMode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_DefaultGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DefaultGameMode",
               &Z_Registration_Info_UClass_ADS_DefaultGameMode.InnerSingleton,
               StaticRegisterNativesADS_DefaultGameMode,0x360,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_DefaultGameMode>,
               InternalVTableHelperCtorCaller<ADS_DefaultGameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_DefaultGameMode.InnerSingleton;
}

// StaticRegisterNativesADS_DefaultGameMode @ 14b485570

void __cdecl ADS_DefaultGameMode::StaticRegisterNativesADS_DefaultGameMode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ADS_DefaultGameMode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnLoadedDataAsset @ 14b486850

void __cdecl
ADS_DefaultGameMode::execOnLoadedDataAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnLoadedDataAsset((ADS_DefaultGameMode *)param_1);
  return;
}

// CreateCharacter @ 14b99d630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_DefaultGameMode::CreateCharacter(ADS_DefaultGameMode *this)

{
  Impl_ *pIVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  ItemUnion IVar5;
  bool bVar6;
  UDS_DataManager *this_00;
  UObject *pUVar7;
  void *pvVar8;
  CharacterEntityType *this_01;
  MainCharacter *pMVar9;
  UDS_PlayerData *pUVar10;
  UDS_CharInfoData *this_02;
  UClass *pUVar11;
  UWorld *pUVar12;
  AActor *pAVar13;
  APlayerStart *pAVar14;
  Vector *pVVar15;
  UDS_EntityManager *this_03;
  Arena *pAVar16;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UClass *local_res18;
  DbWorkItem local_138;
  TVector<double>_u_0 local_108;
  TActorIteratorBase<TActorIterator<APlayerStart>_> local_e8;
  JoinMapResponse local_88;
  
  iVar2 = this->CharacterEntityID;
  this_00 = UDS_DataManager::GetInst();
  if (this_00 == (UDS_DataManager *)0x0) {
    return;
  }
  UDS_DataManager::CreateDataSetContainer
            (this_00,(longlong)this->CharacterEntityID,MainCharacter,this->CharacterID,false);
  UDS_PlayerData::GetData((ulong64)&local_res8,(longlong)iVar2,false);
  bVar6 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (bVar6) {
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res8);
  (**(code **)(*(longlong *)pUVar7 + 0x2c8))(pUVar7);
  server_msg::JoinMapResponse::JoinMapResponse(&local_88,(Arena *)0x0);
  local_88._impl_._has_bits_.has_bits_[0] =
       (uint  [1])((uint)local_88._impl_._has_bits_.has_bits_[0] | 0x20);
  local_88._padding_ = (longlong)&___7JoinMapResponse_server_msg__6B_;
  local_88._impl_.player_entity_id_ = (longlong)iVar2;
  pvVar8 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                     ((RepeatedPtrFieldBase *)&local_88._impl_.entity_pair_,
                      google::protobuf::Arena::DefaultConstruct<server_msg::CharacterEntityPair>);
  *(int *)((longlong)pvVar8 + 0x28) = this->CharacterID;
  *(uint *)((longlong)pvVar8 + 0x10) = *(uint *)((longlong)pvVar8 + 0x10) | 5;
  this_01 = *(CharacterEntityType **)((longlong)pvVar8 + 0x18);
  if (this_01 == (CharacterEntityType *)0x0) {
    pAVar16 = (Arena *)(*(ulonglong *)((longlong)pvVar8 + 8) & 0xfffffffffffffffe);
    if ((*(byte *)((longlong)pvVar8 + 8) & 1) != 0) {
      pAVar16 = (Arena *)(pAVar16->impl_).tag_and_id_;
    }
    this_01 = google::protobuf::Arena::DefaultConstruct<messages::CharacterEntityType>(pAVar16);
    *(CharacterEntityType **)((longlong)pvVar8 + 0x18) = this_01;
  }
  if ((this_01->_impl_)._oneof_case_[0] != 1) {
    messages::CharacterEntityType::clear_entity(this_01);
    (this_01->_impl_)._oneof_case_[0] = 1;
    pAVar16 = (Arena *)(this_01->_padding_ & 0xfffffffffffffffe);
    if ((this_01->_padding_ & 1) != 0) {
      pAVar16 = (Arena *)(pAVar16->impl_).tag_and_id_;
    }
    pMVar9 = google::protobuf::Arena::DefaultConstruct<messages::MainCharacter>(pAVar16);
    (this_01->_impl_).entity_.main_ = pMVar9;
  }
  pMVar9 = (this_01->_impl_).entity_.main_;
  (pMVar9->_impl_).bits_ = (longlong)this->CharacterEntityID;
  pIVar1 = &pMVar9->_impl_;
  (pIVar1->_has_bits_).has_bits_[0] = (pIVar1->_has_bits_).has_bits_[0] | 1;
  pUVar10 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res8);
  UDS_PlayerData::SetDataByJoinMapResponse(pUVar10,&local_88,true);
  UDS_CharInfoData::GetData((ulong64)&local_res10);
  bVar6 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar6) {
    this_02 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_res10);
    UDS_CharInfoData::SetCharSkinID(this_02,0x65);
    local_108._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    local_108._s_0.Y =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_108._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pUVar11 = Z_Construct_UClass_APlayerStart_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    pUVar12 = AActor::GetWorld((AActor *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    local_e8.Flags = OnlyActiveLevels|SkipPendingKill;
    local_e8.State.bIsSet = false;
    local_res18 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    FActorIteratorState::FActorIteratorState
              (&local_e8.State.TypedValue,pUVar12,(TSubclassOf<AActor>)&local_res18);
    local_e8.State.bIsSet = true;
    TActorIteratorBase<TActorIterator<APlayerStart>_>::operator++(&local_e8);
    if ((local_e8.State.bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_e8.State.TypedValue.ReachedEnd == false) {
      if ((local_e8.State.bIsSet == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pAVar13 = FActorIteratorState::GetActorChecked(&local_e8.State.TypedValue);
      pAVar14 = CastChecked<APlayerStart,AActor>(pAVar13);
      if (pAVar14 == (APlayerStart *)0x0) {
        if (local_e8.State.bIsSet != false) {
          UWorld::RemoveOnActorSpawnedHandler
                    (local_e8.State.TypedValue.CurrentWorld,
                     local_e8.State.TypedValue.ActorSpawnedDelegateHandle);
          if (local_e8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
          }
          if (local_e8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.State.TypedValue.ActorArray.AllocatorInstance.Data);
          }
        }
        goto LAB_14b99da54;
      }
      lVar3 = pAVar14->_padding_;
      local_108._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_108._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_108._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_108._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_108._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar3 != 0) {
        local_108._0_4_ = *(undefined4 *)(lVar3 + 0x210);
        local_108._4_4_ = *(undefined4 *)(lVar3 + 0x214);
        local_108._8_4_ = *(undefined4 *)(lVar3 + 0x218);
        local_108._12_4_ = *(undefined4 *)(lVar3 + 0x21c);
        local_108._s_0.Z = *(double *)(lVar3 + 0x220);
      }
    }
    if (local_e8.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_e8.State.TypedValue.CurrentWorld,
                 local_e8.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_e8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_e8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
    ds_game::DbWorkItem::DbWorkItem(&local_138,(Arena *)0x0);
    local_138._padding_ = (longlong)&___7DbWorkItem_ds_game__6B_;
    if (local_138._impl_._oneof_case_[0] != 4) {
      ds_game::DbWorkItem::clear_Item(&local_138);
      local_138._impl_._oneof_case_[0] = 4;
      if (((byte)local_138._padding_ & 1) == 0) {
        local_138._impl_.Item_.characterlevel_ =
             google::protobuf::Arena::DefaultConstruct<ds_game::SqlPositionTable>
                       ((Arena *)(CONCAT71(local_138._padding_._1_7_,(byte)local_138._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_138._impl_.Item_.characterlevel_ =
             google::protobuf::Arena::DefaultConstruct<ds_game::SqlPositionTable>
                       (*(Arena **)
                         (CONCAT71(local_138._padding_._1_7_,(byte)local_138._padding_) &
                         0xfffffffffffffffe));
      }
    }
    IVar5 = local_138._impl_.Item_;
    *(uint *)(local_138._impl_.Item_.characterlevel_ + 1) =
         *(uint *)(local_138._impl_.Item_.characterlevel_ + 1) | 1;
    pVVar15 = *(Vector **)&local_138._impl_.Item_.characterlevel_[1].field_0x8;
    if (pVVar15 == (Vector *)0x0) {
      pAVar16 = (Arena *)(*(ulonglong *)&(local_138._impl_.Item_.characterlevel_)->field_0x8 &
                         0xfffffffffffffffe);
      if (((local_138._impl_.Item_.characterlevel_)->field_0x8 & 1) != 0) {
        pAVar16 = (Arena *)(pAVar16->impl_).tag_and_id_;
      }
      pVVar15 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar16);
      *(Vector **)&IVar5.characterlevel_[1].field_0x8 = pVVar15;
    }
    DS_Util::SetVector(pVVar15,(TVector<double> *)&local_108._s_0);
    pUVar10 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res8);
    UDS_PlayerData::UpdateData(pUVar10,&local_138);
    this_03 = UDS_EntityManager::GetInst();
    if (this_03 != (UDS_EntityManager *)0x0) {
      pUVar12 = AActor::GetWorld((AActor *)this);
      UDS_EntityManager::CreateMainCharacter(this_03,pUVar12);
    }
    ds_game::DbWorkItem::~DbWorkItem(&local_138);
  }
LAB_14b99da54:
  server_msg::JoinMapResponse::~JoinMapResponse(&local_88);
  return;
}

// EndPlay @ 14b9a74d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_DefaultGameMode::EndPlay(ADS_DefaultGameMode *this,Type param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  FName FVar5;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  bool bVar6;
  UWorld *pUVar7;
  FStopReplicatingActorParams *pFVar8;
  UFunction *pUVar9;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar10;
  ADS_DefaultGameMode *pAVar11;
  UClass *pUVar12;
  ADS_DefaultGameMode *pAVar13;
  longlong *plVar14;
  ADS_DefaultGameMode *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  ADS_DefaultGameMode *pAStack_148;
  ADS_DefaultGameMode *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  ADS_DefaultGameMode *pAStack_120;
  undefined1 uStack_118;
  FStopReplicatingActorParams FStack_110;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> TStack_108;
  longlong alStack_f8 [24];
  longlong *plStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((this->_padding_ & 0x180000000000) != 0x100000000000) {
    return;
  }
  pAVar13 = (ADS_DefaultGameMode *)0x0;
  pAVar15 = (ADS_DefaultGameMode *)0x0;
  pAVar11 = this;
  if (this == (ADS_DefaultGameMode *)0x0) {
    pAVar11 = pAVar13;
  }
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar11);
  if (bVar6) {
    pUVar7 = AActor::GetWorld((AActor *)this);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
    if (bVar6) {
      FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xe7;
  pFVar8 = FStopReplicatingActorParams::FStopReplicatingActorParams(&FStack_110,param_1);
  UE::Net::FReplicationSystemUtil::StopReplicatingActor((AActor *)this,pFVar8);
  uStack_168 = (char)param_1;
  pUVar9 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveEndPlay);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar9,&uStack_168);
  pTStack_158 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 7) != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnEndPlay");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar5 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar10 = FSparseDelegateStorage::GetSharedMulticastDelegate(&TStack_108,(UObject *)this,FVar5);
    FStack_128.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    pTStack_158 = pTVar10->Object;
    if (FStack_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_128.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_128.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uStack_130 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_150,&FStack_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_128.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_108.SharedReferenceCount.ReferenceController);
  }
  this_00 = pTStack_158;
  if (pTStack_158 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if ((pTStack_158 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAStack_120 = this;
    uStack_118 = (char)param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (this_00,&pAStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_150.ReferenceController);
  plStack_38 = (longlong *)0x0;
  uStack_2c = 0x18;
  iStack_30 = 0;
  pAVar11 = (ADS_DefaultGameMode *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (ADS_DefaultGameMode *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (ADS_DefaultGameMode *)0x0) goto LAB_147390f4f;
    UE::GC::MarkAsReachable((UObject *)pAVar11);
  }
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  pAVar15 = pAVar13;
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if (((int)pAVar11->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pAVar11->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pAVar15 = pAVar11;
    }
  }
LAB_147390f4f:
  pAVar13 = (ADS_DefaultGameMode *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_DefaultGameMode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_148,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  else {
    pAStack_140 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_DefaultGameMode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_140,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  iVar3 = iStack_30;
  plVar14 = alStack_f8;
  if (plStack_38 != (longlong *)0x0) {
    plVar14 = plStack_38;
  }
  plVar2 = plVar14 + iStack_30;
  while( true ) {
    if (iStack_30 != iVar3) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_167);
    }
    if (plVar14 == plVar2) break;
    plStack_160 = (longlong *)*plVar14;
    if (((*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0) &&
       ((**(code **)(*plStack_160 + 0x400))(plStack_160,param_1),
       (*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0)) {
      pplStack_138 = &plStack_160;
      `AActor::EndPlay'::__l15::<lambda_1>::operator()(&pplStack_138);
    }
    plVar14 = plVar14 + 1;
  }
  if (plStack_38 != (longlong *)0x0) {
    FMemory::Free(plStack_38);
  }
  return;
}

// InitGameData @ 14b9b6490

void __thiscall ADS_DefaultGameMode::InitGameData(ADS_DefaultGameMode *this)

{
  DS_Util::Initialize();
  UDS_NameTagDataAsset::Initialize();
  UDS_FloatingTextDataAsset::Initialize();
  UDS_PacketProcessor::Initialize();
  FDS_EquipmentItemCharacterData::InitiailizeTableInfo();
  DS_Sorting<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>::Initialize();
  FDS_PlayerService::Initialize();
  return;
}

// OnLoadedDataAsset @ 14b9bd8c0

void __thiscall ADS_DefaultGameMode::OnLoadedDataAsset(ADS_DefaultGameMode *this)

{
  UDS_GameInstance *this_00;
  
  this_00 = UDS_GameInstance::StaticInstance;
  if (UDS_GameInstance::StaticInstance != (UDS_GameInstance *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &UDS_GameInstance::StaticInstance->OnLoadDataAssetComplete,(UObject *)this);
    UDS_GameInstance::InitManagers(this_00);
  }
  DS_Util::Initialize();
  UDS_NameTagDataAsset::Initialize();
  UDS_FloatingTextDataAsset::Initialize();
  UDS_PacketProcessor::Initialize();
  FDS_EquipmentItemCharacterData::InitiailizeTableInfo();
  DS_Sorting<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>::Initialize();
  FDS_PlayerService::Initialize();
  CreateCharacter(this);
  return;
}

// RestartPlayer @ 14b9c34a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADS_DefaultGameMode::RestartPlayer(ADS_DefaultGameMode *this,AController *param_1)

{
  return;
}

// StartPlay @ 14b9c6140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall ADS_DefaultGameMode::StartPlay(ADS_DefaultGameMode *this)

{
  char *pcVar1;
  uint *puVar2;
  FDS_LoadDataAssetCompleteDelegate *this_00;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  ADS_DefaultGameMode *pAVar6;
  ADS_DefaultGameMode *pAVar7;
  UDS_GameInstance *pUVar8;
  bool bVar9;
  UWorld *this_01;
  ADS_PlayerController *this_02;
  UClass *pUVar10;
  ADS_DefaultGameMode *pAVar11;
  UObject *this_03;
  UFunction *pUVar12;
  <lambda_1> local_res10 [8];
  undefined8 local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FWeakObjectPtr local_e0;
  FName local_d8;
  FName local_d0;
  ADS_DefaultGameMode *local_c8;
  FName *local_c0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_b8;
  FDestructionSentinel local_a8;
  FReadAccessScope local_90;
  FInputModeUIOnly local_78;
  FReadAccessScope local_58;
  
  AGameModeBase::StartPlay((AGameModeBase *)this);
  FInputModeUIOnly::FInputModeUIOnly(&local_78);
  FInputModeUIOnly::SetLockMouseToViewportBehavior(&local_78,DoNotLock);
  this_01 = AActor::GetWorld((AActor *)this);
  this_02 = (ADS_PlayerController *)UWorld::GetFirstPlayerController(this_01);
  if (this_02 == (ADS_PlayerController *)0x0) goto LAB_14b9c642c;
  pUVar10 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
  iVar3 = (int)pUVar10->_padding_;
  if ((*(int *)(this_02->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar10->_padding_)) goto LAB_14b9c642c;
  lVar4 = this_02->_padding_;
  puVar2 = (uint *)((longlong)&this_02->_padding_ + 4);
  *puVar2 = *puVar2 | 1;
  (**(code **)(lVar4 + 0xd68))(this_02,&local_78);
  (**(code **)(this_02->_padding_ + 0xd58))(this_02,0);
  ADS_PlayerController::SetupPlayerInputComponent(this_02,(UInputComponent *)this_02->_padding_);
  pUVar8 = UDS_GameInstance::StaticInstance;
  if (UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) goto LAB_14b9c642c;
  this_00 = &UDS_GameInstance::StaticInstance->OnLoadDataAssetComplete;
  pAVar11 = (ADS_DefaultGameMode *)strstr("&ADS_DefaultGameMode::OnLoadedDataAsset","::");
  pAVar7 = (ADS_DefaultGameMode *)0x0;
  while (pAVar6 = pAVar11, pAVar6 != (ADS_DefaultGameMode *)0x0) {
    pAVar11 = (ADS_DefaultGameMode *)strstr((char *)((longlong)&pAVar6->_padding_ + 1),"::");
    pAVar7 = pAVar6;
  }
  pcVar1 = (char *)((longlong)&pAVar7->_padding_ + 2);
  if (((pAVar7 == (ADS_DefaultGameMode *)0x0) || (*pcVar1 == '0')) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ::FName::FName(&local_d0,pcVar1);
  if ((this == (ADS_DefaultGameMode *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_res20 = local_d0;
  local_c8 = this;
  if ((this == (ADS_DefaultGameMode *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), local_c8 = (ADS_DefaultGameMode *)0x0, bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c8 != (ADS_DefaultGameMode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_c8);
  local_d8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_90);
  local_res18 = 0;
  if ((local_d8 == (FName)0x0) ||
     (this_03 = FWeakObjectPtr::Get(&local_e0), this_03 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
LAB_14b9c63a6:
    local_c0 = &local_res20;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::
    __Internal_BindDynamic<ADS_DefaultGameMode>'::__l2::<lambda_1>::operator()(&local_c0);
  }
  else {
    pUVar12 = UObject::FindFunction(this_03,local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    if (pUVar12 == (UFunction *)0x0) goto LAB_14b9c63a6;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_58);
  local_b8.Object = local_e0;
  local_b8.FunctionName = local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_a8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar8->OnLoadDataAssetComplete).field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this_00,&local_b8);
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
LAB_14b9c642c:
  FInputModeUIOnly::~FInputModeUIOnly(&local_78);
  return;
}

