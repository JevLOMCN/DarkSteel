// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// AbnormalCancelProcessError @ 14bbab4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_BattleService::AbnormalCancelProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  EDS_ErrorCode EVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_198 [32];
  FString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    EVar1 = param_1->ErrorCode;
    ::FString::FString(&local_158,"EDS_ErrorCode");
    DS_Util::GetEnumToString(&local_148,&local_158,(longlong)(int)EVar1);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_BattleService::AbnormalCancelProcessError",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x23f,L"AbnormalCancelProcessError %s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// ProcessError @ 14bbce7a0

bool __cdecl FDS_BattleService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveAbnormalCancelRes @ 14bbcf350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveAbnormalCancelRes(ServerMessages *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_AbilityDataSet *this;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_AbnormalAbilityData *pUVar8;
  FDS_EntityBase *pFVar9;
  TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> TVar10;
  int *piVar11;
  AbnormalCancelResponseDefaultTypeInternal *pAVar12;
  undefined1 *puVar13;
  undefined1 auStackY_238 [32];
  EDS_AbilityTagType local_1f8 [8];
  FWeakObjectPtr local_1f0;
  FWeakObjectPtr local_1e8;
  ulong64 local_1e0;
  FWeakObjectPtr local_1d8;
  FWeakObjectPtr local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  UObject *local_1b8;
  undefined8 local_1b0;
  ulong64 local_1a8;
  EDS_AbilityTagType local_1a0 [8];
  AbnormalCancelResponse local_198;
  ulong64 local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if ((param_1->_impl_)._oneof_case_[0] == 0x7a) {
    pAVar12 = *(AbnormalCancelResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pAVar12 = &server_msg::_AbnormalCancelResponse_default_instance_;
  }
  server_msg::AbnormalCancelResponse::AbnormalCancelResponse
            (&local_198,(Arena *)0x0,&pAVar12->_instance);
  local_198._padding_ = (longlong)&___7AbnormalCancelResponse_server_msg__6B_;
  local_1e0 = local_198._impl_.entity_id_;
  if ((~((byte)local_198._impl_.abnormal_ids_.soo_rep_.field0_0x0.long_rep.elements_int >> 2) & 1)
      == 0) {
    piVar11 = (int *)(local_198._impl_.abnormal_ids_.soo_rep_.field0_0x0.long_rep.elements_int &
                     0xfffffffffffffff8);
    puVar13 = (undefined1 *)
              (local_198._impl_.abnormal_ids_.soo_rep_.field0_0x0.long_rep.elements_int &
              0xfffffffffffffff8);
  }
  else {
    local_198._impl_.abnormal_ids_.soo_rep_.field0_0x0.long_rep.size =
         (uint)local_198._impl_.abnormal_ids_.soo_rep_.field0_0x0.long_rep.elements_int & 3;
    piVar11 = &local_198._impl_.abnormal_ids_.soo_rep_.field0_0x0.long_rep.size;
    puVar13 = (undefined1 *)((longlong)&local_198._impl_.abnormal_ids_.soo_rep_.field0_0x0 + 8);
  }
  if (piVar11 !=
      (int *)(puVar13 +
             (longlong)local_198._impl_.abnormal_ids_.soo_rep_.field0_0x0.long_rep.size * 4)) {
    do {
      iVar1 = *piVar11;
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FDS_BattleService::ReceiveAbnormalCancelRes",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Display,local_158.Ptr,0x219,L"ReceiveAbnormalCancelRes %llu %d");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      local_1f8[0] = Abnormal_Process;
      FDS_GameplayTags::GetAbilityTag(local_1f8);
      TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_1d8);
      bVar4 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_1d8,(void *)0x0
                        );
      if (bVar4) {
        local_1f0.ObjectIndex = 0;
        local_1f0.ObjectSerialNumber = 0;
        local_1c8 = 0;
        FWeakObjectPtr::operator=(&local_1f0,(FObjectPtr)&local_1c8);
      }
      else {
        this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_1d8);
        UDS_AbilityDataSet::FindOrAddAbilityData(this,(FGameplayTag *)&local_1d0);
        bVar4 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_1d0,(void *)0x0)
        ;
        if (bVar4) {
          local_1f0.ObjectIndex = 0;
          local_1f0.ObjectSerialNumber = 0;
          local_1c0 = 0;
          FWeakObjectPtr::operator=(&local_1f0,(FObjectPtr)&local_1c0);
        }
        else {
          pUVar6 = FWeakObjectPtr::Get(&local_1d0);
          if (pUVar6 == (UObject *)0x0) {
LAB_14bbcf573:
            pUVar6 = (UObject *)0x0;
          }
          else {
            pUVar7 = Z_Construct_UClass_UDS_AbnormalAbilityData_NoRegister();
            iVar2 = (int)pUVar7->_padding_;
            if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar7->_padding_)) goto LAB_14bbcf573;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          local_1e8.ObjectIndex = 0;
          local_1e8.ObjectSerialNumber = 0;
          local_1b8 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=(&local_1e8,(FObjectPtr)&local_1b8);
          bVar4 = TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> *)&local_1e8,
                             (void *)0x0);
          if (bVar4) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7240961574226100306>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                               ,0x52,"false");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_1f0.ObjectIndex = 0;
            local_1f0.ObjectSerialNumber = 0;
            local_1b0 = 0;
            FWeakObjectPtr::operator=(&local_1f0,(FObjectPtr)&local_1b0);
          }
          else {
            local_1f0 = local_1e8;
          }
        }
      }
      bVar4 = TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> *)&local_1f0,
                         (void *)0x0);
      if (bVar4) break;
      pUVar8 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_1f0);
      UDS_AbnormalAbilityData::RemoveAbnormalInfoByID(pUVar8,iVar1);
      pFVar9 = FDS_EntityBase::GetEntityBase(&local_1e0);
      if (pFVar9 == (FDS_EntityBase *)0x0) break;
      if (pFVar9->EntityType == MainCharacter) {
        local_1a8 = 20000;
        pFVar9 = FDS_EntityBase::GetEntityBase(&local_1a8);
        if (pFVar9 == (FDS_EntityBase *)0x0) break;
        local_1f8[1] = 0x30;
        local_1a0[0] = AttackTarget;
        local_1a0[1] = Mount_Flying;
        local_1a0[2] = None;
        local_1a0[3] = None;
        local_1a0[4] = None;
        local_1a0[5] = None;
        local_1a0[6] = None;
        local_1a0[7] = None;
        TVar10 = UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>(&local_160,local_1a0);
                    /* WARNING: Load size is inaccurate */
        local_1f0 = *TVar10.WeakPtr;
        bVar4 = TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> *)&local_1f0,
                           (void *)0x0);
        if (bVar4) break;
        pUVar8 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_1f0);
        UDS_AbnormalAbilityData::RemoveAbnormalInfoByID(pUVar8,iVar1);
      }
      piVar11 = piVar11 + 1;
    } while (piVar11 !=
             (int *)(puVar13 +
                    (longlong)local_198._impl_.abnormal_ids_.soo_rep_.field0_0x0.long_rep.size * 4))
    ;
  }
  server_msg::AbnormalCancelResponse::~AbnormalCancelResponse(&local_198);
  return;
}

// ReceiveAbnormalEventResponse @ 14bbcf720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveAbnormalEventResponse(ServerMessages *param_1)

{
  FWeakObjectPtr *pFVar1;
  EDS_EntityType EVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FDS_EntityBase *this;
  UDS_CharStateData *this_00;
  UDS_SkillDataSet *this_01;
  UObject *pUVar8;
  UDS_LogManager *pUVar9;
  int iVar10;
  Vector *pVVar11;
  uint uVar12;
  ForAnyElementType this_02;
  longlong lVar13;
  AbnormalInfo *pAVar14;
  AbnormalEventResponseDefaultTypeInternal *pAVar15;
  undefined1 auStackY_2c8 [32];
  undefined1 local_278 [8];
  FWeakObjectPtr local_270;
  FWeakObjectPtr local_268;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_260;
  ulong64 local_250;
  EDS_CharState local_248;
  FString local_240;
  FString local_230;
  FDestructionSentinel local_220;
  undefined1 local_208 [8];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  int local_1d8;
  undefined4 local_1d4;
  TVector<double>_u_0 local_1d0;
  undefined4 local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  AbnormalInfo local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x78) {
    pAVar15 = *(AbnormalEventResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pAVar15 = &server_msg::_AbnormalEventResponse_default_instance_;
  }
  pAVar14 = &server_msg::_AbnormalInfo_default_instance_._instance;
  if (*(AbnormalInfo **)&((Message *)((longlong)pAVar15 + 0x10))->field_0x8 != (AbnormalInfo *)0x0)
  {
    pAVar14 = *(AbnormalInfo **)&((Message *)((longlong)pAVar15 + 0x10))->field_0x8;
  }
  server_msg::AbnormalInfo::AbnormalInfo(&local_198,(Arena *)0x0,pAVar14);
  local_198._padding_ = (longlong)&___7AbnormalInfo_server_msg__6B_;
  local_250 = *(ulong64 *)&((Message *)((longlong)pAVar15 + 0x20))->field_0x8;
  this = FDS_EntityBase::GetEntityBase(&local_250);
  if (this != (FDS_EntityBase *)0x0) {
    FDS_EntityBase::GetCharStateData(this);
    bVar4 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_270,(void *)0x0);
    if (!bVar4) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_270);
      local_248 = Skill;
      bVar4 = UDS_CharStateData::HasCharState(this_00,&local_248);
      if (bVar4) {
        TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_268);
        bVar4 = FWeakObjectPtr::IsValid(&local_268);
        if (bVar4) {
          this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_268);
          UDS_SkillDataSet::GetCurrentActiveSkillList(this_01,&local_260);
          iVar10 = local_260.ArrayNum;
          pFVar1 = (FWeakObjectPtr *)(local_260.AllocatorInstance.Data + (longlong)iVar10 * 8);
          this_02.Data = local_260.AllocatorInstance.Data;
          while( true ) {
            if (local_260.ArrayNum != iVar10) {
              local_278[0] = 0;
              `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_278);
            }
            if ((FWeakObjectPtr *)this_02.Data == pFVar1) {
              if ((FWeakObjectPtr *)local_260.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
                FMemory::Free(local_260.AllocatorInstance.Data);
              }
              goto LAB_14bbcf9d0;
            }
            pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
            if (*(double *)((longlong)pAVar15 + 0x30) < *(double *)&pUVar8[7].field_0x8) break;
            this_02.Data = this_02.Data + 8;
          }
          EVar2 = this->EntityType;
          ::FString::FString(&local_230,"EDS_EntityType");
          DS_Util::GetEnumToString(&local_240,&local_230,(ulonglong)EVar2);
          if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data.AllocatorInstance.Data);
          }
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 != (UDS_LogManager *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
            FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"FDS_BattleService::ReceiveAbnormalEventResponse",0x2f,Yes);
            UDS_LogManager::PrintLog
                      (pUVar9,1,Warning,local_168.Ptr,0x322,L"SERIN Abnormal Cancel %s %d %f %f");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
          if ((FWeakObjectPtr *)local_260.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
            FMemory::Free(local_260.AllocatorInstance.Data);
          }
          goto LAB_14bbcfb68;
        }
      }
LAB_14bbcf9d0:
      local_208[0] = 0;
      local_1f0 = 0;
      local_1e0 = 0;
      local_1d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1d4 = 0;
      local_1d0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_1d0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1b8 = 0xffffffff;
      local_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_200 = *(undefined8 *)((longlong)pAVar15 + 0x20);
      local_1f8 = *(undefined8 *)&((Message *)((longlong)pAVar15 + 0x20))->field_0x8;
      local_1d8 = local_198._impl_.abnormal_id_;
      local_1e8 = *(undefined8 *)((longlong)pAVar15 + 0x30);
      pVVar11 = &_Vector_default_instance_._instance;
      if (local_198._impl_.destination_ != (Vector *)0x0) {
        pVVar11 = local_198._impl_.destination_;
      }
      DS_Util::SetFVector((TVector<double> *)&local_1d0._s_0,pVVar11);
      UDS_TimeUtilManager::GetCurrentServerTime();
      (**(code **)(this->_padding_ + 0x1a8))(this,local_208);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnAbnormalEventDelegate,
                 (FWriteAccessScope *)&local_220);
      bVar4 = false;
      OnAbnormalEventDelegate._28_4_ = OnAbnormalEventDelegate._28_4_ + 1;
      uVar12 = OnAbnormalEventDelegate._16_4_ - 1;
      if (-1 < (int)uVar12) {
        lVar13 = (longlong)(int)uVar12 << 4;
        bVar4 = false;
        do {
          uVar7 = 0;
          if ((int)uVar12 < (int)OnAbnormalEventDelegate._16_4_) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((*(int *)(OnAbnormalEventDelegate._8_8_ + 8 + lVar13) == 0) ||
              (*(longlong **)(OnAbnormalEventDelegate._8_8_ + lVar13) == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(**(longlong **)(OnAbnormalEventDelegate._8_8_ + lVar13) + 0x68))
                                (), cVar6 == '\0')) {
            bVar4 = true;
          }
          lVar13 = lVar13 + -0x10;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
      OnAbnormalEventDelegate._28_4_ = OnAbnormalEventDelegate._28_4_ + -1;
      if (bVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnAbnormalEventDelegate,
                   false);
      }
      if (local_220.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
      }
    }
  }
LAB_14bbcfb68:
  server_msg::AbnormalInfo::~AbnormalInfo(&local_198);
  return;
}

// ReceiveAutoSkillUseResponse @ 14bbd0350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveAutoSkillUseResponse(ServerMessages *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_SkillDataSet *this;
  AutoSkillUseResponseDefaultTypeInternal *pAVar3;
  int local_res8 [2];
  FWeakObjectPtr local_res10 [3];
  AutoSkillUseResponse local_28;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x7c) {
    pAVar3 = *(AutoSkillUseResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pAVar3 = &server_msg::_AutoSkillUseResponse_default_instance_;
  }
  server_msg::AutoSkillUseResponse::AutoSkillUseResponse(&local_28,(Arena *)0x0,&pAVar3->_instance);
  local_28._padding_ = (longlong)&___7AutoSkillUseResponse_server_msg__6B_;
  local_res8[0] = local_28._impl_.skill_id_;
  pFVar2 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)local_res10);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      this = (UDS_SkillDataSet *)FWeakObjectPtr::Get(local_res10);
      UDS_SkillDataSet::SetReservedSkillID(this,local_res8);
    }
  }
  server_msg::AutoSkillUseResponse::~AutoSkillUseResponse(&local_28);
  return;
}

// ReceiveBattleNpcTargetingResponse @ 14bbd0700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveBattleNpcTargetingResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharInfoData *this;
  BattleNpcTargetingResponseDefaultTypeInternal *pBVar3;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_1->_impl_)._oneof_case_[0] == 0x209) {
    pBVar3 = *(BattleNpcTargetingResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pBVar3 = &server_msg::_BattleNpcTargetingResponse_default_instance_;
  }
  UDS_CharInfoData::GetData((ulong64)local_148);
  bVar1 = FWeakObjectPtr::IsValid(local_148);
  if (bVar1) {
    this = (UDS_CharInfoData *)FWeakObjectPtr::Get(local_148);
    UDS_CharInfoData::SetBattleNpcTargetEntityID
              (this,*(ulong64 *)&((Message *)((longlong)pBVar3 + 0x10))->field_0x8);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_BattleService::ReceiveBattleNpcTargetingResponse",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Error,local_138.Ptr,0x3c6,
                 L"BattleNpcTargetingResponse Error : Not Exist Npc EntityID : %llu");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// ReceiveBattleStateResponse @ 14bbd0830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveBattleStateResponse(ServerMessages *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_EntityManager *pUVar3;
  FDS_EntityBase *pFVar4;
  BattleStateResponseDefaultTypeInternal *pBVar5;
  ulong64 local_res8 [2];
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x14) {
    pBVar5 = *(BattleStateResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pBVar5 = &server_msg::_BattleStateResponse_default_instance_;
  }
  pUVar3 = UDS_EntityManager::GetInst();
  if (pUVar3 == (UDS_EntityManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4629607314930793750>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_BattleService.cpp"
                       ,0x2ea,"entityManager != nullptr");
    if (!bVar2) {
      return;
    }
code_r0x00014bbd08d5:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8[0] = *(ulong64 *)&((Message *)((longlong)pBVar5 + 0x10))->field_0x8;
  pFVar4 = FDS_EntityBase::GetEntityBase(local_res8);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4629607314930793744>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_BattleService.cpp"
                       ,0x2f0,"entityBase != nullptr");
    if (bVar2) goto code_r0x00014bbd08d5;
  }
  else {
    FDS_EntityBase::SetBattleState(pFVar4,*(bool *)((longlong)pBVar5 + 0x20));
    if (pFVar4->EntityType == MainCharacter) {
      local_res8[1] = 20000;
      pFVar4 = FDS_EntityBase::GetEntityBase(local_res8 + 1);
      if (pFVar4 != (FDS_EntityBase *)0x0) {
        FDS_EntityBase::SetBattleState(pFVar4,*(bool *)((longlong)pBVar5 + 0x20));
      }
    }
  }
  return;
}

// ReceiveBuffDamageResponse @ 14bbd0930

void __cdecl FDS_BattleService::ReceiveBuffDamageResponse(ServerMessages *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnBuffDamageEventDelegate,
             (FWriteAccessScope *)&local_28);
  bVar2 = false;
  OnBuffDamageEventDelegate._28_4_ = OnBuffDamageEventDelegate._28_4_ + 1;
  uVar6 = OnBuffDamageEventDelegate._16_4_ - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)OnBuffDamageEventDelegate._16_4_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + OnBuffDamageEventDelegate._8_8_) == 0) ||
          (*(longlong **)(lVar7 + OnBuffDamageEventDelegate._8_8_) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar7 + OnBuffDamageEventDelegate._8_8_) + 0x68))(),
         cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  OnBuffDamageEventDelegate._28_4_ = OnBuffDamageEventDelegate._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnBuffDamageEventDelegate,
               false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// ReceiveCastSkillResponse @ 14bbd0a80

void __cdecl FDS_BattleService::ReceiveCastSkillResponse(ServerMessages *param_1)

{
  return;
}

// ReceiveCastSkillTargetEntityResponse @ 14bbd0a90

void __cdecl FDS_BattleService::ReceiveCastSkillTargetEntityResponse(ServerMessages *param_1)

{
  return;
}

// ReceiveCastSkillTargetPositionResponse @ 14bbd0aa0

void __cdecl FDS_BattleService::ReceiveCastSkillTargetPositionResponse(ServerMessages *param_1)

{
  return;
}

// ReceiveCastSkillTargetSelfResponse @ 14bbd0ab0

void __cdecl FDS_BattleService::ReceiveCastSkillTargetSelfResponse(ServerMessages *param_1)

{
  return;
}

// ReceiveColliderDestructionResponse @ 14bbd0b60

void __cdecl FDS_BattleService::ReceiveColliderDestructionResponse(ServerMessages *param_1)

{
  ColliderDestructionResponseDefaultTypeInternal *pCVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x7533) {
    pCVar1 = *(ColliderDestructionResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pCVar1 = &server_msg::_ColliderDestructionResponse_default_instance_;
  }
  TMulticastDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::Broadcast
            (&OnColliderDestructionEventDelegate,
             *(ulong64 *)&((Message *)((longlong)pCVar1 + 0x10))->field_0x8);
  return;
}

// ReceiveComeBackStartResponse @ 14bbd0ce0

void __cdecl FDS_BattleService::ReceiveComeBackStartResponse(ServerMessages *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_CharInfoData *this;
  ComeBackStartResponseDefaultTypeInternal *pCVar3;
  Vector *pVVar4;
  FWeakObjectPtr local_res8;
  ulong64 local_res10 [3];
  TVector<double>_u_0 local_28;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x208) {
    pCVar3 = *(ComeBackStartResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pCVar3 = &server_msg::_ComeBackStartResponse_default_instance_;
  }
  local_res10[0] = *(ulong64 *)((longlong)pCVar3 + 0x20);
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pVVar4 = &_Vector_default_instance_._instance;
  if (*(Vector **)&((Message *)((longlong)pCVar3 + 0x10))->field_0x8 != (Vector *)0x0) {
    pVVar4 = *(Vector **)&((Message *)((longlong)pCVar3 + 0x10))->field_0x8;
  }
  DS_Util::SetFVector((TVector<double> *)&local_28._s_0,pVVar4);
  UDS_CharInfoData::GetData((ulong64)&local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_res8);
    UDS_CharInfoData::SetBattleNpcTargetEntityID(this,0);
    UDS_ComeBackAbility::TryActivate(local_res10,(TVector<double> *)&local_28._s_0);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4629607314930793546>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_BattleService.cpp"
                       ,0x3b6,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ReceiveDiedResponse @ 14bbd1300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveDiedResponse(ServerMessages *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UDS_LogManager *pUVar4;
  UDS_DeathData *pUVar5;
  UDS_EntityManager *this;
  DiedResponseDefaultTypeInternal *pDVar6;
  EntityDiedDefaultTypeInternal *pEVar7;
  MainDiedDefaultTypeInternal *pMVar8;
  EntityDiedDefaultTypeInternal *pEVar9;
  undefined1 auStackY_258 [32];
  FWeakObjectPtr local_218;
  ulong64 local_210;
  EntityDied local_208;
  EntityDied local_1e0;
  EntityDied local_1b8;
  MainDied local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if ((param_1->_impl_)._oneof_case_[0] == 0x32) {
    pDVar6 = *(DiedResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pDVar6 = &server_msg::_DiedResponse_default_instance_;
  }
  pEVar7 = &server_msg::_EntityDied_default_instance_;
  if (*(int *)&((Message *)((longlong)pDVar6 + 0x10))->field_0xc == 1) {
    pFVar3 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  }
  else {
    if (*(int *)&((Message *)((longlong)pDVar6 + 0x10))->field_0xc == 2) {
      pEVar9 = *(EntityDiedDefaultTypeInternal **)((longlong)pDVar6 + 0x10);
    }
    else {
      pEVar9 = &server_msg::_EntityDied_default_instance_;
    }
    server_msg::EntityDied::EntityDied(&local_208,(Arena *)0x0,&pEVar9->_instance);
    local_210 = local_208._impl_.entity_id_;
    local_208._padding_ = (longlong)&___7EntityDied_server_msg__6B_;
    pFVar3 = FDS_EntityBase::GetEntityBase(&local_210);
    server_msg::EntityDied::~EntityDied(&local_208);
  }
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)pFVar3;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_BattleService::ReceiveDiedResponse",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x2bf,
                 L"ReceiveDiedResponse targetEntity is nullptr. (%llu)");
      if ((FDS_EntityBase *)local_148._padding_ != (FDS_EntityBase *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    UDS_DeathData::FindOrAddData((ulong64)&local_218,pFVar3->EntityID);
    bVar2 = FWeakObjectPtr::IsValid(&local_218);
    if (bVar2) {
      if (pFVar3->EntityType == MainCharacter) {
        if (*(int *)&((Message *)((longlong)pDVar6 + 0x10))->field_0xc == 1) {
          pMVar8 = *(MainDiedDefaultTypeInternal **)((longlong)pDVar6 + 0x10);
        }
        else {
          pMVar8 = &server_msg::_MainDied_default_instance_;
        }
        server_msg::MainDied::MainDied(&local_188,(Arena *)0x0,&pMVar8->_instance);
        local_188._padding_ = (longlong)&___7MainDied_server_msg__6B_;
        pUVar5 = (UDS_DeathData *)FWeakObjectPtr::Get(&local_218);
        UDS_DeathData::SetDeathDataResponse(pUVar5,&local_188);
        server_msg::MainDied::~MainDied(&local_188);
      }
      else {
        if (*(int *)&((Message *)((longlong)pDVar6 + 0x10))->field_0xc == 2) {
          pEVar9 = *(EntityDiedDefaultTypeInternal **)((longlong)pDVar6 + 0x10);
        }
        else {
          pEVar9 = &server_msg::_EntityDied_default_instance_;
        }
        server_msg::EntityDied::EntityDied(&local_1e0,(Arena *)0x0,&pEVar9->_instance);
        local_1e0._padding_ = (longlong)&___7EntityDied_server_msg__6B_;
        pUVar5 = (UDS_DeathData *)FWeakObjectPtr::Get(&local_218);
        UDS_DeathData::SetDeathDataResponse(pUVar5,&local_1e0);
        server_msg::EntityDied::~EntityDied(&local_1e0);
      }
      (**(code **)(pFVar3->_padding_ + 0x1b0))(pFVar3);
    }
    if (*(int *)&((Message *)((longlong)pDVar6 + 0x10))->field_0xc != 1) {
      this = UDS_EntityManager::GetInst();
      if (this == (UDS_EntityManager *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4629607314930793765>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_BattleService.cpp"
                           ,0x2db,"entityManager != nullptr");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        if (*(int *)&((Message *)((longlong)pDVar6 + 0x10))->field_0xc == 2) {
          pEVar7 = *(EntityDiedDefaultTypeInternal **)((longlong)pDVar6 + 0x10);
        }
        server_msg::EntityDied::EntityDied(&local_1b8,(Arena *)0x0,&pEVar7->_instance);
        local_1b8._padding_ = (longlong)&___7EntityDied_server_msg__6B_;
        UDS_EntityManager::RemoveDelayEntity(this,local_1b8._impl_.entity_id_,false);
        server_msg::EntityDied::~EntityDied(&local_1b8);
      }
    }
  }
  return;
}

// ReceiveFacingPitchUpdateResponse @ 14bbd1df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveFacingPitchUpdateResponse(ServerMessages *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UObject *pUVar3;
  FacingPitchUpdateResponseDefaultTypeInternal *pFVar4;
  ulong64 local_res8;
  ulong64 local_res10;
  FWeakObjectPtr local_res18 [2];
  FacingPitchUpdateResponse local_48;
  
  if ((param_1->_impl_)._oneof_case_[0] == 7) {
    pFVar4 = *(FacingPitchUpdateResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pFVar4 = &server_msg::_FacingPitchUpdateResponse_default_instance_;
  }
  server_msg::FacingPitchUpdateResponse::FacingPitchUpdateResponse
            (&local_48,(Arena *)0x0,&pFVar4->_instance);
  local_48._padding_ = (longlong)&___7FacingPitchUpdateResponse_server_msg__6B_;
  local_res10 = local_48._impl_.entity_id_;
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_res10);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    if (pFVar2->EntityType == MainCharacter) {
      local_res8 = 20000;
      pFVar2 = FDS_EntityBase::GetEntityBase(&local_res8);
      if (pFVar2 != (FDS_EntityBase *)0x0) {
        local_res10 = 20000;
      }
    }
    local_res8 = CONCAT71(local_res8._1_7_,0x18);
    UDS_AbilityDataSet::GetAbilityData<UDS_SkillModeAbilityData>
              ((ulong64 *)local_res18,(EDS_AbilityTagType *)&local_res10);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_res18);
      *(float *)&pUVar3[3].field_0x10 = local_48._impl_.pitch_degree_;
    }
  }
  server_msg::FacingPitchUpdateResponse::~FacingPitchUpdateResponse(&local_48);
  return;
}

// ReceiveGroggyEventResponse @ 14bbd23f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveGroggyEventResponse(ServerMessages *param_1)

{
  FDS_EntityBase *this;
  UDS_LogManager *pUVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  GroggyEventResponseDefaultTypeInternal *pGVar5;
  undefined1 auStackY_218 [32];
  uint uVar6;
  wchar_t *pwVar7;
  EDS_AbilityTagType local_1d8 [8];
  ulong64 local_1d0;
  UObject *local_1c8 [2];
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((param_1->_impl_)._oneof_case_[0] == 0x79) {
    pGVar5 = *(GroggyEventResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pGVar5 = &server_msg::_GroggyEventResponse_default_instance_;
  }
  local_1d0 = *(ulong64 *)&((Message *)((longlong)pGVar5 + 0x10))->field_0x8;
  this = FDS_EntityBase::GetEntityBase(&local_1d0);
  if (this == (FDS_EntityBase *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = (longlong)this;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_BattleService::ReceiveGroggyEventResponse",0x2d,Yes);
    pwVar7 = L"entityBase is nullptr. (%llu)";
    uVar6 = 0x365;
  }
  else {
    if (this->EntityType == NPC) {
      pUVar2 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar3 = Z_Construct_UClass_UDS_GroggyAbilityContext_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
      local_1b8._8_8_ = pUVar2;
      pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
      if (local_1b8._64_8_ != 0) {
        plVar4 = (longlong *)(local_1b8 + 0x50);
        if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
          plVar4 = (longlong *)local_1b8._104_8_;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar2 != (UObject *)0x0) goto LAB_14bbd25b3;
      }
      else if (pUVar2 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar2);
LAB_14bbd25b3:
        *(undefined8 *)(pUVar2 + 1) = *(undefined8 *)((longlong)pGVar5 + 0x20);
        local_1c8[0] = pUVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_1d8[0] = Groggy;
        FDS_EntityBase::TryActivateAbility(this,local_1d8,(TObjectPtr<UWN_AbilityContext>)local_1c8)
        ;
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_BattleService::ReceiveGroggyEventResponse",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x372,L"context is nullptr.");
      goto LAB_14bbd24c6;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_BattleService::ReceiveGroggyEventResponse",0x2d,Yes);
    pwVar7 = L"EntityType is not Npc. (%llu)";
    uVar6 = 0x36b;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar6,pwVar7);
LAB_14bbd24c6:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ReceiveGroupDamageEventResponse @ 14bbd2690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveGroupDamageEventResponse(ServerMessages *param_1)

{
  EDS_EntityType EVar1;
  DamageMessage DVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FDS_EntityBase *pFVar8;
  UDS_LogManager *pUVar9;
  FDS_EntityBase *pFVar10;
  DamageDefaultTypeInternal *pDVar11;
  MultiHitInfoDefaultTypeInternal *pMVar12;
  FWeakObjectPtr *pFVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  FString *pFVar16;
  ForAnyElementType FVar17;
  Message *pMVar18;
  int iVar19;
  FStringFormatArg *this;
  longlong lVar20;
  Message *pMVar21;
  UObject *pUVar22;
  bool bVar23;
  undefined1 auStackY_388 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_348;
  FWeakObjectPtr local_338;
  FWeakObjectPtr local_330;
  FWeakObjectPtr local_328;
  FWeakObjectPtr local_320;
  FWeakObjectPtr local_318;
  ServerMessageUnion local_310;
  ulong64 local_308;
  ulong64 local_300;
  UObject *local_2f8;
  UObject *local_2f0;
  longlong local_2e8;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  byte local_2a8 [8];
  ulong64 local_2a0;
  ulong64 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  longlong local_278;
  double local_270;
  double dStack_268;
  double local_260;
  int local_258;
  double local_250;
  double dStack_248;
  double local_240;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FDestructionSentinel local_1e8;
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  if ((param_1->_impl_)._oneof_case_[0] == 6) {
    local_310 = (param_1->_impl_).ServerMessage_;
  }
  else {
    local_310.errorcoderes_ = (Message *)&server_msg::_GroupDamageEventResponse_default_instance_;
  }
  if ((~*(byte *)(local_310.errorcoderes_ + 1) & 1) == 0) {
    pMVar21 = (Message *)(*(longlong *)(local_310.errorcoderes_ + 1) + 7);
    pMVar18 = (Message *)(*(longlong *)(local_310.errorcoderes_ + 1) + 7);
  }
  else {
    pMVar18 = local_310.errorcoderes_ + 1;
    pMVar21 = local_310.errorcoderes_ + 1;
  }
  iVar19 = *(int *)&local_310.errorcoderes_[1].field_0x8;
  do {
    if (pMVar21 == (Message *)(&pMVar18->field_0x0 + (longlong)iVar19 * 8)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &OnGroupDamageEventDelegate,(FWriteAccessScope *)&local_1e8);
      bVar23 = false;
      OnGroupDamageEventDelegate._28_4_ = OnGroupDamageEventDelegate._28_4_ + 1;
      iVar19 = OnGroupDamageEventDelegate._16_4_ + -1;
      if (-1 < iVar19) {
        lVar20 = (longlong)iVar19 << 4;
        bVar23 = false;
        do {
          if (((int)OnGroupDamageEventDelegate._16_4_ <= iVar19) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((*(int *)(lVar20 + 8 + OnGroupDamageEventDelegate._8_8_) == 0) ||
              (*(longlong **)(lVar20 + OnGroupDamageEventDelegate._8_8_) == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(**(longlong **)(lVar20 + OnGroupDamageEventDelegate._8_8_) + 0x68
                                  ))(), cVar6 == '\0')) {
            bVar23 = true;
          }
          lVar20 = lVar20 + -0x10;
          iVar19 = iVar19 + -1;
        } while (-1 < iVar19);
      }
      OnGroupDamageEventDelegate._28_4_ = OnGroupDamageEventDelegate._28_4_ + -1;
      if (bVar23) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnGroupDamageEventDelegate
                   ,false);
      }
      if (local_1e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
      }
      return;
    }
    pUVar22 = (UObject *)0x0;
    lVar20 = *(longlong *)pMVar21;
    local_308 = *(ulong64 *)(lVar20 + 0x28);
    local_2e8 = lVar20;
    pFVar8 = FDS_EntityBase::GetEntityBase(&local_308);
    if (pFVar8 == (FDS_EntityBase *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_168._padding_ = (longlong)pFVar8;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"FDS_BattleService::ReceiveGroupDamageEventResponse",0x32,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Error,local_168.Ptr,0x9a,
                   L"UDS_PacketProcessor::ParseGroupDamageEventResponse() AttackerEntity is nullptr. (EntityID:%d)"
                  );
        if ((FDS_EntityBase *)local_168._padding_ != (FDS_EntityBase *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      local_300 = *(ulong64 *)(lVar20 + 0x30);
      pFVar10 = FDS_EntityBase::GetEntityBase(&local_300);
      if (pFVar10 != (FDS_EntityBase *)0x0) {
        local_2a8[0] = *(byte *)(lVar20 + 0x10) & 1;
        local_2a0 = *(ulong64 *)(lVar20 + 0x28);
        local_298 = *(ulong64 *)(lVar20 + 0x30);
        pDVar11 = &_Damage_default_instance_;
        if (*(DamageDefaultTypeInternal **)(lVar20 + 0x18) != (DamageDefaultTypeInternal *)0x0) {
          pDVar11 = *(DamageDefaultTypeInternal **)(lVar20 + 0x18);
        }
        local_260 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_240 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_288 = *(undefined8 *)(lVar20 + 0x48);
        local_270 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_258 = -1;
        local_250 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_248 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_290 = CONCAT44((pDVar11->_instance)._impl_.amount_,*(undefined4 *)(lVar20 + 0x38));
        local_278 = (ulonglong)*(uint *)(lVar20 + 0x3c) << 0x20;
        uStack_280 = *(undefined8 *)(lVar20 + 0x40);
        if ((*(uint *)(lVar20 + 0x10) >> 1 & 1) != 0) {
          pMVar12 = &server_msg::_MultiHitInfo_default_instance_;
          if (*(MultiHitInfoDefaultTypeInternal **)(lVar20 + 0x20) !=
              (MultiHitInfoDefaultTypeInternal *)0x0) {
            pMVar12 = *(MultiHitInfoDefaultTypeInternal **)(lVar20 + 0x20);
          }
          local_258 = (pMVar12->_instance)._impl_.hit_point_index_;
        }
        EVar1 = pFVar8->EntityType;
        ::FString::FString(&local_238,"EDS_EntityType");
        DS_Util::GetEnumToString(&local_1b0,&local_238,(ulonglong)EVar1);
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
        EVar1 = pFVar10->EntityType;
        ::FString::FString(&local_228,"EDS_EntityType");
        DS_Util::GetEnumToString(&local_1c0,&local_228,(ulonglong)EVar1);
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        (**(code **)(pFVar10->_padding_ + 0x148))(pFVar10,local_2a8);
        bVar23 = pFVar8->EntityType == MainCharacter;
        if (pFVar8->EntityType == Totem) {
          pFVar13 = (FWeakObjectPtr *)(**(code **)(pFVar8->_padding_ + 0x150))(pFVar8,local_1d0);
          pUVar14 = FWeakObjectPtr::Get(pFVar13);
          if (pUVar14 == (UObject *)0x0) {
LAB_14bbd299a:
            pUVar14 = pUVar22;
          }
          else {
            pUVar15 = Z_Construct_UClass_ADS_TotemActor_NoRegister();
            iVar7 = (int)pUVar15->_padding_;
            if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar7) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
                &pUVar15->_padding_)) goto LAB_14bbd299a;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          local_338.ObjectIndex = 0;
          local_338.ObjectSerialNumber = 0;
          local_2f8 = pUVar14;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          FWeakObjectPtr::operator=(&local_338,(FObjectPtr)&local_2f8);
          bVar5 = FWeakObjectPtr::IsValid(&local_338);
          if (bVar5) {
            pUVar14 = FWeakObjectPtr::Get(&local_338);
            bVar5 = FDS_EntityBase::IsMainCharacter((ulong64 *)&pUVar14[0x2d].field_0x20);
            if (bVar5) {
              bVar23 = true;
            }
          }
        }
        local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_348.ArrayNum = 0;
        local_348.ArrayMax = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,&local_348.AllocatorInstance,0,&local_348.ArrayMax);
        if (bVar23) {
          pUVar22 = (UObject *)(ulonglong)((pFVar10->EntityType != NetCharacter) + 0xc3b5);
          UDS_CharInfoData::GetData((ulong64)&local_328);
          bVar23 = FWeakObjectPtr::IsValid(&local_328);
          if (!bVar23) goto LAB_14bbd2c84;
          pUVar14 = FWeakObjectPtr::Get(&local_328);
          iVar7 = local_348.ArrayNum;
          if (local_348.ArrayNum == local_348.ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_348.AllocatorInstance,&local_348.ArrayMax);
          }
          local_348.ArrayNum = iVar7 + 1;
          pFVar16 = &local_1a0;
LAB_14bbd2c68:
          this = (FStringFormatArg *)(local_348.AllocatorInstance.Data + (longlong)iVar7 * 0x20);
          pFVar16 = ::FString::FString(pFVar16,(FString *)&pUVar14[8].field_0x18);
          FStringFormatArg::FStringFormatArg(this,pFVar16);
        }
        else if (pFVar10->EntityType == MainCharacter) {
          pUVar22 = (UObject *)(ulonglong)((pFVar8->EntityType != NetCharacter) + 0xc3b7);
          if (pFVar8->EntityType == Totem) {
            pFVar13 = (FWeakObjectPtr *)(**(code **)(pFVar8->_padding_ + 0x150))(pFVar8,local_1c8);
            pUVar14 = FWeakObjectPtr::Get(pFVar13);
            if (pUVar14 == (UObject *)0x0) {
LAB_14bbd2b3e:
              pUVar14 = (UObject *)0x0;
            }
            else {
              pUVar15 = Z_Construct_UClass_ADS_TotemActor_NoRegister();
              iVar7 = (int)pUVar15->_padding_;
              if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar7) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar7 * 8)
                  != &pUVar15->_padding_)) goto LAB_14bbd2b3e;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar14);
            }
            local_330.ObjectIndex = 0;
            local_330.ObjectSerialNumber = 0;
            local_2f0 = pUVar14;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar14);
            }
            FWeakObjectPtr::operator=(&local_330,(FObjectPtr)&local_2f0);
            bVar23 = FWeakObjectPtr::IsValid(&local_330);
            if (bVar23) {
              FWeakObjectPtr::Get(&local_330);
              UDS_CharInfoData::GetData((ulong64)&local_320);
              bVar23 = FWeakObjectPtr::IsValid(&local_320);
              if (bVar23) {
                pUVar14 = FWeakObjectPtr::Get(&local_320);
                iVar7 = local_348.ArrayNum;
                if (local_348.ArrayNum == local_348.ArrayMax) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x820,&local_348.AllocatorInstance,&local_348.ArrayMax);
                }
                local_348.ArrayNum = iVar7 + 1;
                pFVar16 = &local_190;
                goto LAB_14bbd2c68;
              }
            }
          }
          else {
            UDS_CharInfoData::GetData((ulong64)&local_318);
            bVar23 = FWeakObjectPtr::IsValid(&local_318);
            if (bVar23) {
              pUVar14 = FWeakObjectPtr::Get(&local_318);
              iVar7 = local_348.ArrayNum;
              if (local_348.ArrayNum == local_348.ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,&local_348.AllocatorInstance,&local_348.ArrayMax);
              }
              local_348.ArrayNum = iVar7 + 1;
              pFVar16 = &local_180;
              goto LAB_14bbd2c68;
            }
          }
        }
LAB_14bbd2c84:
        if ((local_290._4_4_ != 0) && ((int)pUVar22 != 0)) {
          iVar7 = local_348.ArrayNum;
          if (local_348.ArrayNum == local_348.ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_348.AllocatorInstance,&local_348.ArrayMax);
          }
          local_348.ArrayNum = iVar7 + 1;
          FStringFormatArg::FStringFormatArg
                    ((FStringFormatArg *)(local_348.AllocatorInstance.Data + (longlong)iVar7 * 0x20)
                     ,local_290._4_4_);
          UDS_UIMessageManager::OpenMsgByStringUi
                    ((long64)pUVar22,None_Battle_01,&local_348,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
        }
        dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
        lVar20 = local_2e8;
        dVar4 = *(double *)(local_2e8 + 0x40) - dVar4;
        ::FString::FString(&local_218,"ParseGroupDamageEventResponse AtkID: {1} DefID: {2}");
        DS_Util::GetFormatString<unsigned___int64,unsigned___int64>
                  (&local_2c0,&local_218,local_2a0,local_298);
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        DVar2 = *(DamageMessage *)(lVar20 + 0x3c);
        if ((*(byte *)(lVar20 + 0x10) & 1) == 0) {
          ::FString::FString(&local_1f8," No Damage. DamageInfo: {1} ExecuteTime {2}");
          DS_Util::GetFormatString<enum_DamageMessage,double>(&local_2d0,&local_1f8,DVar2,dVar4);
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
          if (local_2d0.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = local_2d0.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_2c0,(wchar_t *)local_2d0.Data.AllocatorInstance.Data,iVar7);
          FVar17.Data = local_2d0.Data.AllocatorInstance.Data;
        }
        else {
          ::FString::FString(&local_208," Damage: {1} DamageInfo: {2} ExecuteTime {3}");
          DS_Util::GetFormatString<int,enum_DamageMessage,double>
                    (&local_2e0,&local_208,local_290._4_4_,DVar2,dVar4);
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
          if (local_2e0.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = local_2e0.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_2c0,(wchar_t *)local_2e0.Data.AllocatorInstance.Data,iVar7);
          FVar17.Data = local_2e0.Data.AllocatorInstance.Data;
        }
        if (FVar17.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar17.Data);
        }
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_348.AllocatorInstance.Data,local_348.ArrayNum);
        if ((FStringFormatArg *)local_348.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_348.AllocatorInstance.Data);
        }
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
      }
    }
    pMVar21 = (Message *)&pMVar21->field_0x8;
  } while( true );
}

// ReceiveHealBuffCurrentStatusResponse @ 14bbd3110

void __cdecl FDS_BattleService::ReceiveHealBuffCurrentStatusResponse(ServerMessages *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnHealEventDelegate,
             (FWriteAccessScope *)&local_28);
  bVar2 = false;
  OnHealEventDelegate._28_4_ = OnHealEventDelegate._28_4_ + 1;
  uVar6 = OnHealEventDelegate._16_4_ - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)OnHealEventDelegate._16_4_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + OnHealEventDelegate._8_8_) == 0) ||
          (*(longlong **)(lVar7 + OnHealEventDelegate._8_8_) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar7 + OnHealEventDelegate._8_8_) + 0x68))(),
         cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  OnHealEventDelegate._28_4_ = OnHealEventDelegate._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnHealEventDelegate,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// ReceiveHeightMoveResponse @ 14bbd3260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveHeightMoveResponse(ServerMessages *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  HeightMoveResponseDefaultTypeInternal *pHVar5;
  undefined1 auStackY_188 [32];
  ulong64 local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_1->_impl_)._oneof_case_[0] == 0xd6) {
    pHVar5 = *(HeightMoveResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pHVar5 = &server_msg::_HeightMoveResponse_default_instance_;
  }
  local_148 = *(ulong64 *)((longlong)pHVar5 + 0x30);
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_148);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_BattleService::ReceiveHeightMoveResponse",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,899,L"entityBase is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    (**(code **)(pFVar2->_padding_ + 400))(pFVar2,&local_140);
    bVar1 = FWeakObjectPtr::IsValid(&local_140);
    if (bVar1) {
      pUVar4 = FWeakObjectPtr::Get(&local_140);
      (**(code **)(*(longlong *)pUVar4 + 0x2e8))(pUVar4,pHVar5);
    }
  }
  return;
}

// ReceiveHpChangeResponse @ 14bbd33b0

void __cdecl FDS_BattleService::ReceiveHpChangeResponse(ServerMessages *param_1)

{
  bool bVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  HpChangeResponseDefaultTypeInternal *pHVar11;
  uint uVar12;
  longlong lVar13;
  FDestructionSentinel local_48;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x7532) {
    pHVar11 = *(HpChangeResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pHVar11 = &server_msg::_HpChangeResponse_default_instance_;
  }
  uVar3 = *(ulong64 *)&((Message *)((longlong)pHVar11 + 0x10))->field_0x8;
  uVar4 = *(ulong64 *)&((Message *)((longlong)pHVar11 + 0x20))->field_0x8;
  bVar1 = *(bool *)((longlong)pHVar11 + 0x20);
  iVar2 = *(int *)&((Message *)((longlong)pHVar11 + 0x20))->field_0x4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnHpChangeEventDelegate,
             (FWriteAccessScope *)&local_48);
  bVar7 = false;
  OnHpChangeEventDelegate._28_4_ = OnHpChangeEventDelegate._28_4_ + 1;
  uVar12 = OnHpChangeEventDelegate._16_4_ - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 << 4;
    bVar7 = false;
    do {
      uVar10 = 0;
      if ((int)uVar12 < (int)OnHpChangeEventDelegate._16_4_) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((*(int *)(lVar13 + 8 + OnHpChangeEventDelegate._8_8_) == 0) ||
          (plVar5 = *(longlong **)(lVar13 + OnHpChangeEventDelegate._8_8_),
          plVar5 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar5 + 0x68))(plVar5,uVar3,uVar4,bVar1,iVar2), cVar9 == '\0')) {
        bVar7 = true;
      }
      lVar13 = lVar13 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  OnHpChangeEventDelegate._28_4_ = OnHpChangeEventDelegate._28_4_ + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnHpChangeEventDelegate,false)
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// ReceiveInitSkillMoveRandomAnglesResponse @ 14bbd3540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveInitSkillMoveRandomAnglesResponse(ServerMessages *param_1)

{
  int iVar1;
  SkillMoveRandomAnglesResponse *pSVar2;
  RepeatedPtrField<server_msg::SkillMoveRandomAnglesResponse> *pRVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_DataSetContainer *this;
  UObject *pUVar6;
  InitSkillMoveRandomAnglesResponseDefaultTypeInternal *pIVar7;
  UDS_SkillDataSet *this_00;
  Message *pMVar8;
  undefined1 auStackY_188 [32];
  uint uVar9;
  wchar_t *pwVar10;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerData::GetData((ulong64)&local_158,UDS_PlayerData::MainPlayerEntityID,false);
  bVar4 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar4) {
    FWeakObjectPtr::Get(&local_158);
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_140);
    bVar4 = FWeakObjectPtr::IsValid(&local_140);
    if (!bVar4) {
      return;
    }
    FWeakObjectPtr::Get(&local_158);
    UDS_CharInfoData::GetData((ulong64)&local_148);
    bVar4 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_148,(void *)0x0);
    if (bVar4) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_BattleService::ReceiveInitSkillMoveRandomAnglesResponse",0x3b,Yes);
      pwVar10 = L"charInfoData is nullptr.";
      uVar9 = 0x349;
    }
    else {
      UDS_DataSetContainer::GetDataSetContainer((ulong64)&local_150);
      bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&local_150,
                         (void *)0x0);
      if (!bVar4) {
        this = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_150);
        pUVar6 = FWeakObjectPtr::Get(&local_148);
        UDS_DataSetContainer::SetEntityTableID(this,*(int *)&pUVar6[8].field_0x8);
        if ((param_1->_impl_)._oneof_case_[0] == 0xd3) {
          pIVar7 = *(InitSkillMoveRandomAnglesResponseDefaultTypeInternal **)
                    &(param_1->_impl_).ServerMessage_;
        }
        else {
          pIVar7 = &server_msg::_InitSkillMoveRandomAnglesResponse_default_instance_;
        }
        if ((*(ulonglong *)((longlong)pIVar7 + 0x10) & 1) == 0) {
          pMVar8 = (Message *)((longlong)pIVar7 + 0x10);
        }
        else {
          pMVar8 = (Message *)(*(ulonglong *)((longlong)pIVar7 + 0x10) + 7);
        }
        iVar1 = *(int *)&((Message *)((longlong)pIVar7 + 0x10))->field_0x8;
        pRVar3 = (RepeatedPtrField<server_msg::SkillMoveRandomAnglesResponse> *)&pMVar8->field_0x0;
        for (; pMVar8 != (Message *)((longlong)&pRVar3->field_0x0 + (longlong)iVar1 * 8);
            pMVar8 = (Message *)&pMVar8->field_0x8) {
          pSVar2 = *(SkillMoveRandomAnglesResponse **)pMVar8;
          this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_140);
          UDS_SkillDataSet::UpdateSkillMoveRandomAnglesData(this_00,pSVar2);
        }
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_BattleService::ReceiveInitSkillMoveRandomAnglesResponse",0x3b,Yes);
      pwVar10 = L"dataSetContainer is nullptr.";
      uVar9 = 0x350;
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_BattleService::ReceiveInitSkillMoveRandomAnglesResponse",0x3b,Yes);
    pwVar10 = L"Failed to get PlayerData";
    uVar9 = 0x33f;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,uVar9,pwVar10);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ReceiveNetSkillAttackSyncResponse @ 14bbd4960

void __cdecl FDS_BattleService::ReceiveNetSkillAttackSyncResponse(ServerMessages *param_1)

{
  return;
}

// ReceiveNetSyncResponse @ 14bbd4970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveNetSyncResponse(ServerMessages *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  UDS_EntityManager *this;
  FDS_EntityBase *pFVar8;
  UDS_CharBuffData *pUVar9;
  UObject *pUVar10;
  BuffInfo *pBVar11;
  uint uVar12;
  NetSyncResponseDefaultTypeInternal *pNVar13;
  longlong lVar14;
  BuffInfoDefaultTypeInternal *pBVar15;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FDestructionSentinel local_58;
  
  if ((param_1->_impl_)._oneof_case_[0] == 9) {
    pNVar13 = *(NetSyncResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pNVar13 = &server_msg::_NetSyncResponse_default_instance_;
  }
  this = UDS_EntityManager::GetInst();
  if ((this != (UDS_EntityManager *)0x0) &&
     (pFVar8 = UDS_EntityManager::FindEntityBase
                         (this,*(ulong64 *)&((Message *)((longlong)pNVar13 + 0x50))->field_0x8),
     pFVar8 != (FDS_EntityBase *)0x0)) {
    UDS_CharBuffData::GetData((ulong64)&local_res8);
    bVar4 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar4) {
      if ((*(byte *)((longlong)pNVar13 + 0x10) & 0x20) == 0) {
        pUVar9 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_res8);
        UDS_CharBuffData::ClearAllBuffInfo(pUVar9);
      }
      else {
        pUVar9 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_res8);
        pBVar11 = &server_msg::_BuffInfo_default_instance_._instance;
        if (*(BuffInfo **)((longlong)pNVar13 + 0x40) != (BuffInfo *)0x0) {
          pBVar11 = *(BuffInfo **)((longlong)pNVar13 + 0x40);
        }
        UDS_CharBuffData::SetDataByBuffInfo(pUVar9,pBVar11);
        uVar1 = *(undefined8 *)&((Message *)((longlong)pNVar13 + 0x50))->field_0x8;
        pBVar15 = &server_msg::_BuffInfo_default_instance_;
        if (*(BuffInfoDefaultTypeInternal **)((longlong)pNVar13 + 0x40) !=
            (BuffInfoDefaultTypeInternal *)0x0) {
          pBVar15 = *(BuffInfoDefaultTypeInternal **)((longlong)pNVar13 + 0x40);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnBuffEventDelegate,
                   (FWriteAccessScope *)&local_58);
        bVar4 = false;
        OnBuffEventDelegate._28_4_ = OnBuffEventDelegate._28_4_ + 1;
        uVar12 = OnBuffEventDelegate._16_4_ - 1;
        if (-1 < (int)uVar12) {
          lVar14 = (longlong)(int)uVar12 << 4;
          bVar4 = false;
          do {
            uVar7 = 0;
            if ((int)uVar12 < (int)OnBuffEventDelegate._16_4_) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((*(int *)(lVar14 + 8 + OnBuffEventDelegate._8_8_) == 0) ||
                (plVar2 = *(longlong **)(lVar14 + OnBuffEventDelegate._8_8_),
                plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,uVar1,pBVar15), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar14 = lVar14 + -0x10;
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
        }
        OnBuffEventDelegate._28_4_ = OnBuffEventDelegate._28_4_ + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnBuffEventDelegate,
                     false);
        }
        if (local_58.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
        }
      }
    }
    (**(code **)(pFVar8->_padding_ + 400))(pFVar8,&local_res10);
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar4) {
      pUVar10 = FWeakObjectPtr::Get(&local_res10);
      (**(code **)(*(longlong *)pUVar10 + 0x2d0))(pUVar10,pNVar13);
    }
  }
  return;
}

// ReceivePlayerRoundRecordResponse @ 14bbd4de0

void __cdecl FDS_BattleService::ReceivePlayerRoundRecordResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_PlayerData *this;
  PlayerAiRoundRecordsDefaultTypeInternal *pPVar2;
  FWeakObjectPtr local_res8 [4];
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x7534) {
    pPVar2 = *(PlayerAiRoundRecordsDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pPVar2 = &server_msg::_PlayerAiRoundRecords_default_instance_;
  }
  UDS_PlayerData::GetData
            ((ulong64)local_res8,*(ulong64 *)&((Message *)((longlong)pPVar2 + 0x10))->field_0x8,
             false);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = (UDS_PlayerData *)FWeakObjectPtr::Get(local_res8);
    UDS_PlayerData::SetAiRoundRecordResponse(this,&pPVar2->_instance);
  }
  return;
}

// ReceivePrintColliderResponse @ 14bbd4e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceivePrintColliderResponse(ServerMessages *param_1)

{
  int iVar1;
  int iVar2;
  FColor_u_0 FVar3;
  TQuat<double> *pTVar4;
  UDS_LogManager *pUVar5;
  Vector *pVVar6;
  PrintColliderResponseDefaultTypeInternal *pPVar7;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_1a8 [2];
  TRotator<double> local_1a0;
  TVector<double> local_188;
  TVector<double> local_170;
  TQuat<double> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x16) {
    pPVar7 = *(PrintColliderResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pPVar7 = &server_msg::_PrintColliderResponse_default_instance_;
  }
  pVVar6 = &_Vector_default_instance_._instance;
  if (*(Vector **)&((Message *)((longlong)pPVar7 + 0x10))->field_0x8 != (Vector *)0x0) {
    pVVar6 = *(Vector **)&((Message *)((longlong)pPVar7 + 0x10))->field_0x8;
  }
  DS_Util::SetFVector(&local_188,pVVar6);
  pVVar6 = &_Vector_default_instance_._instance;
  if (*(Vector **)((longlong)pPVar7 + 0x20) != (Vector *)0x0) {
    pVVar6 = *(Vector **)((longlong)pPVar7 + 0x20);
  }
  DS_Util::SetFVector(&local_170,pVVar6);
  local_1a0.Yaw = (double)*(float *)&((Message *)((longlong)pPVar7 + 0x20))->field_0x8;
  local_1a0.Pitch = 0.0;
  local_1a0.Roll = 0.0;
  iVar2 = UDS_GameInstance::GetPrintCollisionType();
  local_1a8[0] = FColor::White.field0_0x0;
  iVar1 = *(int *)&((Message *)((longlong)pPVar7 + 0x30))->field_0x4;
  FVar3 = FColor::Silver.field0_0x0;
  if ((((iVar1 == 0) || (FVar3 = FColor::Red.field0_0x0, iVar1 == 1)) ||
      (FVar3 = FColor::Green.field0_0x0, iVar1 == 2)) ||
     ((FVar3 = FColor::Blue.field0_0x0, iVar1 == 3 ||
      (FVar3 = FColor::Yellow.field0_0x0, iVar1 == 4)))) {
    local_1a8[0] = FVar3;
  }
  if ((iVar2 == -1) || (iVar2 == *(int *)&((Message *)((longlong)pPVar7 + 0x30))->field_0x8)) {
    iVar1 = *(int *)((longlong)pPVar7 + 0x30);
    if (iVar1 == 0) {
      pTVar4 = UE::Math::TRotator<double>::Quaternion(&local_1a0,&local_158);
      DS_Util::ShowSyncCapsule
                (&local_188,(float)local_170.field0_0x0._s_0.Z,
                 *(float *)&((Message *)((longlong)pPVar7 + 0x20))->field_0xc,pTVar4,
                 (FColor *)&local_1a8[0]._s_0,false,__real_40000000,'\0',__real_40a00000);
    }
    else if (iVar1 == 1) {
      pTVar4 = UE::Math::TRotator<double>::Quaternion(&local_1a0,&local_158);
      DS_Util::ShowSyncBox
                (&local_188,&local_170,pTVar4,(FColor *)&local_1a8[0]._s_0,false,__real_40000000,
                 '\0',__real_40a00000);
    }
    else if (iVar1 == 2) {
      DS_Util::ShowSyncSphere
                (&local_188,*(float *)&((Message *)((longlong)pPVar7 + 0x20))->field_0xc,10,
                 (FColor *)&local_1a8[0]._s_0,false,__real_40000000,'\0',__real_40a00000);
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_BattleService::ReceivePrintColliderResponse",0x2f,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x28e,L"Invalid Shape: %d");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// ReceiveProjectileResponse @ 14bbd5100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveProjectileResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStateData *this;
  UDS_ProjectileManager *this_00;
  ProjectileResponseDefaultTypeInternal *pPVar3;
  undefined1 auStackY_188 [32];
  EDS_CharDetailState local_148 [2];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_1->_impl_)._oneof_case_[0] == 0xd7) {
    pPVar3 = *(ProjectileResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pPVar3 = &server_msg::_ProjectileResponse_default_instance_;
  }
  UDS_CharStateData::GetData((ulong64)&local_140);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_140,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_BattleService::ReceiveProjectileResponse",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x397,L"charStateData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_140);
    local_148[0] = Interaction_LiftUp_Throw;
    bVar1 = UDS_CharStateData::HasCharDetailState(this,local_148);
    if (!bVar1) {
      this_00 = UDS_ProjectileManager::GetInst();
      if (this_00 != (UDS_ProjectileManager *)0x0) {
        UDS_ProjectileManager::ReceiveProjectileResponse(this_00,&pPVar3->_instance);
      }
    }
  }
  return;
}

// ReceiveResurrectResponse @ 14bbd5240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveResurrectResponse(ServerMessages *param_1)

{
  FDS_EntityBase *pFVar1;
  UDS_LogManager *pUVar2;
  ResurrectResponseDefaultTypeInternal *pRVar3;
  undefined1 auStackY_198 [32];
  EDS_ResurrectType local_158 [8];
  ulong64 local_150 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->_impl_)._oneof_case_[0] == 0x4fb1) {
    pRVar3 = *(ResurrectResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pRVar3 = &server_msg::_ResurrectResponse_default_instance_;
  }
  local_150[0] = *(ulong64 *)&((Message *)((longlong)pRVar3 + 0x10))->field_0x8;
  local_158[0] = ((Message *)((longlong)pRVar3 + 0x20))->field_0x4;
  pFVar1 = FDS_EntityBase::GetEntityBase(local_150);
  if (pFVar1 == (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_BattleService::ReceiveResurrectResponse",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x29f,L"sourceEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_ResurrectAbility::TryActivate(local_150,local_158);
    if (pFVar1->EntityType == MainCharacter) {
      local_150[1] = 20000;
      UDS_ResurrectAbility::TryActivate(local_150 + 1,local_158);
    }
  }
  return;
}

// ReceiveSealStateEnteredResponse @ 14bbd5380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveSealStateEnteredResponse(ServerMessages *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UWN_AbilitySystemComponent *pUVar4;
  FGameplayTag *pFVar5;
  SealStateEnteredResponseDefaultTypeInternal *pSVar6;
  undefined1 auStackY_198 [32];
  uint uVar7;
  wchar_t *pwVar8;
  EDS_StateTagType local_158 [8];
  FWeakObjectPtr local_150;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->_impl_)._oneof_case_[0] == 0x262) {
    pSVar6 = *(SealStateEnteredResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pSVar6 = &server_msg::_SealStateEnteredResponse_default_instance_;
  }
  local_148[0] = *(ulong64 *)&((Message *)((longlong)pSVar6 + 0x10))->field_0x8;
  pFVar2 = FDS_EntityBase::GetEntityBase(local_148);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_BattleService::ReceiveSealStateEnteredResponse",0x32,Yes);
    pwVar8 = L"sourceEntity is nullptr. (%llu)";
    uVar7 = 0x405;
  }
  else {
    (**(code **)(pFVar2->_padding_ + 0x178))(pFVar2);
    bVar1 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar1) {
      pUVar4 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_150);
      local_158[0] = Seal;
      pFVar5 = FDS_GameplayTags::GetStateTag(local_158);
      bVar1 = UWN_AbilitySystemComponent::HasTag(pUVar4,pFVar5);
      if (bVar1) {
        return;
      }
      pUVar4 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_150);
      local_158[0] = Seal;
      pFVar5 = FDS_GameplayTags::GetStateTag(local_158);
      UWN_AbilitySystemComponent::AddTag(pUVar4,pFVar5,1);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_BattleService::ReceiveSealStateEnteredResponse",0x32,Yes);
    pwVar8 = L"sourceASC is nullptr. (%llu)";
    uVar7 = 0x40c;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ReceiveSealStateExitedResponse @ 14bbd5570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveSealStateExitedResponse(ServerMessages *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UWN_AbilitySystemComponent *this;
  FGameplayTag *pFVar4;
  SealStateExitedResponseDefaultTypeInternal *pSVar5;
  undefined1 auStackY_198 [32];
  uint uVar6;
  wchar_t *pwVar7;
  EDS_StateTagType local_158 [8];
  FWeakObjectPtr local_150;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->_impl_)._oneof_case_[0] == 0x263) {
    pSVar5 = *(SealStateExitedResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pSVar5 = &server_msg::_SealStateExitedResponse_default_instance_;
  }
  local_148[0] = *(ulong64 *)&((Message *)((longlong)pSVar5 + 0x10))->field_0x8;
  pFVar2 = FDS_EntityBase::GetEntityBase(local_148);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_BattleService::ReceiveSealStateExitedResponse",0x31,Yes);
    pwVar7 = L"sourceEntity is nullptr. (%llu)";
    uVar6 = 0x41e;
  }
  else {
    (**(code **)(pFVar2->_padding_ + 0x178))(pFVar2);
    bVar1 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar1) {
      this = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_150);
      local_158[0] = Seal;
      pFVar4 = FDS_GameplayTags::GetStateTag(local_158);
      UWN_AbilitySystemComponent::RemoveTag(this,pFVar4,-1);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_BattleService::ReceiveSealStateExitedResponse",0x31,Yes);
    pwVar7 = L"sourceASC is nullptr. (%llu)";
    uVar6 = 0x425;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ReceiveShowAggroListResponse @ 14bbd5730

void __cdecl FDS_BattleService::ReceiveShowAggroListResponse(ServerMessages *param_1)

{
  return;
}

// ReceiveSkillCancelRes @ 14bbd5740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveSkillCancelRes(ServerMessages *param_1)

{
  FDS_EntityBase *pFVar1;
  UDS_LogManager *pUVar2;
  SkillCancelResponseDefaultTypeInternal *pSVar3;
  undefined1 auStackY_1b8 [32];
  ulong64 local_178 [2];
  SkillCancelResponse local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x7b) {
    pSVar3 = *(SkillCancelResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pSVar3 = &server_msg::_SkillCancelResponse_default_instance_;
  }
  server_msg::SkillCancelResponse::SkillCancelResponse(&local_168,(Arena *)0x0,&pSVar3->_instance);
  local_168._padding_ = (longlong)&___7SkillCancelResponse_server_msg__6B_;
  local_178[0] = local_168._impl_.entity_id_;
  pFVar1 = FDS_EntityBase::GetEntityBase(local_178);
  if (pFVar1 != (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_BattleService::ReceiveSkillCancelRes",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Display,local_138.Ptr,0x199,L"SERIN ReceiveSkillCancelRes %llu %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    FDS_EntityBase::DeActivateSkillAbility(pFVar1,local_168._impl_.skill_id_,Cancel);
    if (pFVar1->EntityType == MainCharacter) {
      local_178[1] = 20000;
      pFVar1 = FDS_EntityBase::GetEntityBase(local_178 + 1);
      if (pFVar1 != (FDS_EntityBase *)0x0) {
        FDS_EntityBase::DeActivateSkillAbility(pFVar1,local_168._impl_.skill_id_,Cancel);
      }
    }
  }
  server_msg::SkillCancelResponse::~SkillCancelResponse(&local_168);
  return;
}

// ReceiveSkillModeEndResponse @ 14bbd58d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveSkillModeEndResponse(ServerMessages *param_1)

{
  FDS_EntityBase *pFVar1;
  UDS_LogManager *pUVar2;
  SkillModeEndResponseDefaultTypeInternal *pSVar3;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_168 [8];
  ulong64 local_160;
  SkillModeEndResponse local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x52) {
    pSVar3 = *(SkillModeEndResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pSVar3 = &server_msg::_SkillModeEndResponse_default_instance_;
  }
  server_msg::SkillModeEndResponse::SkillModeEndResponse(&local_158,(Arena *)0x0,&pSVar3->_instance)
  ;
  local_158._padding_ = (longlong)&___7SkillModeEndResponse_server_msg__6B_;
  local_160 = local_158._impl_.entity_id_;
  pFVar1 = FDS_EntityBase::GetEntityBase(&local_160);
  if (pFVar1 != (FDS_EntityBase *)0x0) {
    if (pFVar1->EntityType == MainCharacter) {
      local_168[0] = Success;
      UDS_SkillModeProcessAbility::Deactivate(&local_160,local_168);
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_BattleService::ReceiveSkillModeEndResponse",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x1ec,L"[%llu]");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_168[0] = Success;
    UDS_SkillModeProcessAbility::Deactivate(&local_160,local_168);
  }
  server_msg::SkillModeEndResponse::~SkillModeEndResponse(&local_158);
  return;
}

// ReceiveSkillModeStartResponse @ 14bbd5a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveSkillModeStartResponse(ServerMessages *param_1)

{
  FDS_EntityBase *pFVar1;
  UDS_LogManager *pUVar2;
  SkillModeStartResponseDefaultTypeInternal *pSVar3;
  undefined1 auStackY_1b8 [32];
  ulong64 local_178 [2];
  SkillModeStartResponse local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x51) {
    pSVar3 = *(SkillModeStartResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pSVar3 = &server_msg::_SkillModeStartResponse_default_instance_;
  }
  server_msg::SkillModeStartResponse::SkillModeStartResponse
            (&local_168,(Arena *)0x0,&pSVar3->_instance);
  local_168._padding_ = (longlong)&___7SkillModeStartResponse_server_msg__6B_;
  local_178[0] = local_168._impl_.entity_id_;
  pFVar1 = FDS_EntityBase::GetEntityBase(local_178);
  if (pFVar1 != (FDS_EntityBase *)0x0) {
    if (pFVar1->EntityType == MainCharacter) {
      local_178[1] = 20000;
      pFVar1 = FDS_EntityBase::GetEntityBase(local_178 + 1);
      if (pFVar1 != (FDS_EntityBase *)0x0) {
        local_178[1] = 20000;
        UDS_SkillModeProcessAbility::TryActivate(local_178 + 1,local_168._impl_.skill_mode_id_);
      }
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_BattleService::ReceiveSkillModeStartResponse",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x1d6,L"[%llu] skillModeID: %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    UDS_SkillModeProcessAbility::TryActivate(local_178,local_168._impl_.skill_mode_id_);
  }
  server_msg::SkillModeStartResponse::~SkillModeStartResponse(&local_168);
  return;
}

// ReceiveSkillMoveDestinationResponse @ 14bbd5bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveSkillMoveDestinationResponse(ServerMessages *param_1)

{
  int iVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UDS_SkillMoveAbilityData *pUVar4;
  TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> TVar5;
  UDS_LogManager *pUVar6;
  SkillMoveDestinationResponseDefaultTypeInternal *pSVar7;
  Vector *pVVar8;
  undefined1 auStackY_1f8 [32];
  FWeakObjectPtr local_1a0;
  ulong64 local_198 [2];
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  ulong64 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((param_1->_impl_)._oneof_case_[0] == 0xd5) {
    pSVar7 = *(SkillMoveDestinationResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pSVar7 = &server_msg::_SkillMoveDestinationResponse_default_instance_;
  }
  local_198[0] = *(ulong64 *)((longlong)pSVar7 + 0x20);
  pFVar3 = FDS_EntityBase::GetEntityBase(local_198);
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    return;
  }
  iVar1 = *(int *)&((Message *)((longlong)pSVar7 + 0x20))->field_0x8;
  pVVar8 = &_Vector_default_instance_._instance;
  if (*(Vector **)&((Message *)((longlong)pSVar7 + 0x10))->field_0x8 != (Vector *)0x0) {
    pVVar8 = *(Vector **)&((Message *)((longlong)pSVar7 + 0x10))->field_0x8;
  }
  DS_Util::SetSyncLocation(local_198[0],(TVector<double> *)&local_168._s_0,pVVar8,true);
  UDS_AbilityDataSet::GetAbilityData<UDS_SkillMoveAbilityData>
            ((ulong64 *)&local_1a0,(EDS_AbilityTagType *)&pFVar3->EntityID);
  bVar2 = TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> *)&local_1a0,
                     (void *)0x0);
  if (bVar2) goto LAB_14bbd5d59;
  pUVar4 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&local_1a0);
  local_188._s_0.X = local_168._s_0.X;
  local_188._s_0.Y = local_168._s_0.Y;
  local_188._s_0.Z = local_168._s_0.Z;
  UDS_SkillMoveAbilityData::UpdateServerSkillDestLocation
            (pUVar4,iVar1,(TVector<double> *)&local_188._s_0);
  if (pFVar3->EntityType == MainCharacter) {
    local_150 = 20000;
    pFVar3 = FDS_EntityBase::GetEntityBase(&local_150);
    if (pFVar3 != (FDS_EntityBase *)0x0) goto LAB_14bbd5cc0;
  }
  else {
LAB_14bbd5cc0:
    TVar5 = UDS_AbilityDataSet::GetAbilityData<UDS_SkillMoveAbilityData>
                      ((ulong64 *)local_188.XYZ,(EDS_AbilityTagType *)&pFVar3->EntityID);
                    /* WARNING: Load size is inaccurate */
    local_1a0 = *TVar5.WeakPtr;
    bVar2 = TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> *)&local_1a0,
                       (void *)0x0);
    if (!bVar2) {
      pUVar4 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&local_1a0);
      local_188._s_0.X = local_168._s_0.X;
      local_188._s_0.Y = local_168._s_0.Y;
      local_188._s_0.Z = local_168._s_0.Z;
      UDS_SkillMoveAbilityData::UpdateServerSkillDestLocation
                (pUVar4,iVar1,(TVector<double> *)&local_188._s_0);
    }
  }
  DS_Util::ShowSyncSphere
            ((TVector<double> *)&local_168._s_0,__real_41f00000,10,&FColor::Cyan,false,
             __real_40000000,'\0',__real_40000000);
LAB_14bbd5d59:
  pUVar6 = UDS_LogManager::GetInst();
  if ((pUVar6 != (UDS_LogManager *)0x0) && (UDS_LogManager::IsEnable_SyncLog != false)) {
    pUVar6 = UDS_LogManager::GetInst();
    ::FString::PrintfImpl((FString *)&local_188._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_BattleService::ReceiveSkillMoveDestinationResponse",0x36,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Display,local_148.Ptr,0x153,L"SERIN SkillDestLocation %llu %d %s");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if ((void *)local_188._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_188._s_0.X);
    }
  }
  return;
}

// ReceiveSkillMoveRandomAnglesResponse @ 14bbd5e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveSkillMoveRandomAnglesResponse(ServerMessages *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_SkillDataSet *this;
  FWeakObjectPtr local_res10 [3];
  
  pFVar2 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)local_res10);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      this = (UDS_SkillDataSet *)FWeakObjectPtr::Get(local_res10);
      if ((param_1->_impl_)._oneof_case_[0] == 0xd2) {
        UDS_SkillDataSet::UpdateSkillMoveRandomAnglesData
                  (this,(SkillMoveRandomAnglesResponse *)
                        (param_1->_impl_).ServerMessage_.errorcoderes_);
        return;
      }
      UDS_SkillDataSet::UpdateSkillMoveRandomAnglesData
                (this,&server_msg::_SkillMoveRandomAnglesResponse_default_instance_._instance);
    }
  }
  return;
}

// ReceiveSkillNpcRotationEndTimeResponse @ 14bbd5f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_BattleService::ReceiveSkillNpcRotationEndTimeResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_EntityManager *this;
  FDS_EntityBase *pFVar2;
  UObject *pUVar3;
  SkillNpcRotationEndTimeResponseDefaultTypeInternal *pSVar4;
  SkillNpcRotationEndTimeResponseDefaultTypeInternal *pSVar5;
  FWeakObjectPtr local_res10 [3];
  
  this = UDS_EntityManager::GetInst();
  if (this != (UDS_EntityManager *)0x0) {
    pSVar5 = &server_msg::_SkillNpcRotationEndTimeResponse_default_instance_;
    if ((param_1->_impl_)._oneof_case_[0] == 0xd4) {
      pSVar4 = *(SkillNpcRotationEndTimeResponseDefaultTypeInternal **)
                &(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar4 = &server_msg::_SkillNpcRotationEndTimeResponse_default_instance_;
    }
    pFVar2 = UDS_EntityManager::FindEntityBase
                       (this,*(ulong64 *)&((Message *)((longlong)pSVar4 + 0x10))->field_0x8);
    if (pFVar2 != (FDS_EntityBase *)0x0) {
      (**(code **)(pFVar2->_padding_ + 400))(pFVar2,local_res10);
      bVar1 = FWeakObjectPtr::IsValid(local_res10);
      if (bVar1) {
        pUVar3 = FWeakObjectPtr::Get(local_res10);
        if ((param_1->_impl_)._oneof_case_[0] == 0xd4) {
          pSVar5 = *(SkillNpcRotationEndTimeResponseDefaultTypeInternal **)
                    &(param_1->_impl_).ServerMessage_;
        }
        (**(code **)(*(longlong *)pUVar3 + 0x2e0))(pUVar3,pSVar5);
      }
    }
  }
  return;
}

// SkillCancelProcessError @ 14bbe1640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_BattleService::SkillCancelProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  EDS_ErrorCode EVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_198 [32];
  FString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    EVar1 = param_1->ErrorCode;
    ::FString::FString(&local_158,"EDS_ErrorCode");
    DS_Util::GetEnumToString(&local_148,&local_158,(longlong)(int)EVar1);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_BattleService::SkillCancelProcessError",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1ab,L"SkillCancelProcessError %s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

