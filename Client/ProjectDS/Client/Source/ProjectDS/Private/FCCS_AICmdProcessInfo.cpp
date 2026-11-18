// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// PrintScreenMsg_CameraYaw @ 14bac32d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FCCS_AICmdProcessInfo::PrintScreenMsg_CameraYaw(FCCS_AICmdProcessInfo *this)

{
  FString local_18;
  
  if (GEngine != (UEngine *)0x0) {
    ::FString::PrintfImpl(&local_18,L"[Cam] %f");
    UEngine::AddOnScreenDebugMessage
              (GEngine,0x3ea,__real_447a0000,FColor::Green,&local_18,true,
               &UE::Math::TVector2<double>::UnitVector);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PrintScreenMsg_MoveInputVector @ 14bac3360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FCCS_AICmdProcessInfo::PrintScreenMsg_MoveInputVector(FCCS_AICmdProcessInfo *this)

{
  FString local_28;
  FString local_18;
  
  if (GEngine != (UEngine *)0x0) {
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_18,L"[Move] %s");
    UEngine::AddOnScreenDebugMessage
              (GEngine,0x3e9,__real_447a0000,FColor::Green,&local_18,true,
               &UE::Math::TVector2<double>::UnitVector);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PrintScreenMsg_VirtualKey @ 14bac3420

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

void __thiscall
FCCS_AICmdProcessInfo::PrintScreenMsg_VirtualKey
          (FCCS_AICmdProcessInfo *this,ECCS_AIInputType *param_1,bool *param_2)

{
  ECCS_AIInputType EVar1;
  UEnum *this_00;
  UDS_LogManager *pUVar2;
  wchar_t *pwVar3;
  undefined1 auStackY_1a8 [32];
  FString local_168;
  FString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (GEngine != (UEngine *)0x0) {
    this_00 = StaticEnum<enum_ECCS_AIInputType>();
    if (this_00 == (UEnum *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FCCS_AICmdProcessInfo::PrintScreenMsg_VirtualKey",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x9f,L"[CCSAI] enumPtr is nullptr.");
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
    }
    else {
      UEnum::GetNameStringByValue(this_00,&local_158,(ulonglong)*param_1);
      pwVar3 = L"N";
      if (*param_2 != false) {
        pwVar3 = L"PRESS";
      }
      ::FString::FString(&local_168,pwVar3);
      EVar1 = *param_1;
      ::FString::PrintfImpl(&local_148,L"[%d][%s] %s");
      UEngine::AddOnScreenDebugMessage
                (GEngine,EVar1 + 2000,__real_447a0000,FColor::Green,&local_148,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ResetProcessInfo @ 14baca180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCCS_AICmdProcessInfo::ResetProcessInfo(FCCS_AICmdProcessInfo *this)

{
  TMap<ECCS_AIInputType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ECCS_AIInputType,bool,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  TVector2<double> TVar5;
  bool bVar6;
  UEnum *pUVar7;
  UDS_LogManager *pUVar8;
  TTuple<FName,__int64> *pTVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8;
  undefined1 local_1f7;
  bool local_1f6 [2];
  undefined1 local_1f4 [16];
  uint uStack_1e4;
  undefined1 *local_1e0;
  uint uStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  TMap<ECCS_AIInputType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ECCS_AIInputType,bool,0>_>
  *local_1c8;
  int iStack_1c0;
  uint uStack_1bc;
  undefined1 *local_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  int local_1a8;
  undefined4 uStack_1a4;
  undefined1 *local_198;
  undefined1 *local_190;
  TTuple<FName,__int64> local_188 [2];
  undefined4 local_15c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  this->bIsActivated = false;
  TVar5 = UE::Math::TVector2<double>::ZeroVector;
  iVar12 = 0;
  this->CameraYaw = 0.0;
  (this->MoveInputVector).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar5.field0_0x0;
  pUVar7 = StaticEnum<enum_ECCS_AIInputType>();
  if (pUVar7 == (UEnum *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FCCS_AICmdProcessInfo::ResetProcessInfo",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x6d,L"[CCSAI] enumPtr is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1484106909542776722>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CCSAIManager.cpp"
                       ,0x6e,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    this_00 = &this->VirtualKeyMap;
    iVar2 = (pUVar7->Names).NumValues;
    TSet<TTuple<enum_ECCS_AIInputType,bool>,TDefaultMapHashableKeyFuncs<enum_ECCS_AIInputType,bool,0>,FDefaultSetAllocator>
    ::Reset(this_00);
    TSet<TTuple<enum_ECCS_AIInputType,bool>,TDefaultMapHashableKeyFuncs<enum_ECCS_AIInputType,bool,0>,FDefaultSetAllocator>
    ::Reserve(this_00,iVar2);
    iVar11 = 0;
    if (0 < iVar2) {
      do {
        if (iVar11 - 1U < 0x14) {
          local_1f7 = 0;
          if (((pUVar7->Names).NumValues <= iVar11) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Names.IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xb2d,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar9 = UEnum::FNameData::operator[](&pUVar7->Names,local_188,iVar11);
          local_1f8 = pTVar9->field_0x8;
          local_198 = &local_1f8;
          local_190 = &local_1f7;
          TSet<TTuple<enum_ECCS_AIInputType,bool>,TDefaultMapHashableKeyFuncs<enum_ECCS_AIInputType,bool,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_ECCS_AIInputType_&&,bool_&&>_>
                    (this_00,(TPairInitializer<ECCS_AIInputType_&&,bool_&&> *)local_1f4,
                     (bool *)&local_198);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar2);
    }
    PrintScreenMsg_MoveInputVector(this);
    PrintScreenMsg_CameraYaw(this);
    iVar2 = *(int *)&(this->VirtualKeyMap).field_0x28;
    local_1e0 = &(this->VirtualKeyMap).field_0x10;
    uStack_1bc = 1;
    local_1a8 = iVar12;
    iStack_1ac = 0;
    if (iVar2 != 0) {
      puVar13 = *(uint **)&(this->VirtualKeyMap).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_1e0;
      }
      uVar3 = *puVar13;
      local_1a8 = 0;
      iVar12 = 0;
      while (uVar3 == 0) {
        lVar10 = (longlong)iVar12;
        local_1a8 = local_1a8 + 0x20;
        iVar12 = iVar12 + 1;
        iStack_1ac = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14baca3b8;
        uVar3 = puVar13[lVar10 + 1];
      }
      uStack_1bc = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_1bc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iStack_1ac = local_1a8 + -1 + (int)lVar10;
      if (iVar2 < iStack_1ac) {
        iStack_1ac = iVar2;
      }
    }
LAB_14baca3b8:
    uStack_1b0 = 0xffffffff;
    uStack_1a4 = local_15c;
    uStack_1d8 = 0xffffffff;
    local_1d0 = CONCAT44(local_15c,local_1a8);
    local_1f4._4_8_ = this_00;
    local_1c8 = this_00;
    iStack_1c0 = iVar12;
    local_1b8 = local_1e0;
    local_1f4._12_4_ = iVar12;
    uStack_1e4 = uStack_1bc;
    iStack_1d4 = iStack_1ac;
    if (iStack_1ac < iVar2) {
      do {
        local_1f6[0] = false;
        PrintScreenMsg_VirtualKey
                  (this,(ECCS_AIInputType *)
                        (*(longlong *)local_1f4._4_8_ + (longlong)iStack_1d4 * 0xc),local_1f6);
        uStack_1d8 = uStack_1d8 & ~uStack_1e4;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1f4 + 0xc));
      } while (iStack_1d4 < *(int *)(local_1e0 + 0x18));
    }
  }
  return;
}

// SetCameraYaw @ 14bacab10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCCS_AICmdProcessInfo::SetCameraYaw(FCCS_AICmdProcessInfo *this,float *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  undefined1 local_150 [8];
  double local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  ADS_PlayerController::GetPlayerController();
  bVar1 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FCCS_AICmdProcessInfo::SetCameraYaw",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xda,L"[CCSAI] pc is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->CameraYaw = *param_1;
    pUVar3 = FWeakObjectPtr::Get(&local_158);
    (**(code **)(*(longlong *)pUVar3 + 0x7a8))(pUVar3,local_150);
    local_148 = (double)this->CameraYaw;
    pUVar3 = FWeakObjectPtr::Get(&local_158);
    (**(code **)(*(longlong *)pUVar3 + 0x7b0))(pUVar3,local_150);
    PrintScreenMsg_CameraYaw(this);
  }
  return;
}

// SetMoveInputVector @ 14bacd620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCCS_AICmdProcessInfo::SetMoveInputVector(FCCS_AICmdProcessInfo *this,TVector2<double> *param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  ADS_PlayerController *pAVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  TVector<double>_u_0 local_160;
  undefined1 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  ADS_PlayerController::GetPlayerController();
  bVar4 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_168,(void *)0x0);
  dVar3 = __real_3f1a36e2e0000000;
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FCCS_AICmdProcessInfo::SetMoveInputVector",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0xba,L"[CCSAI] pc is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    local_148 = 2;
    (this->MoveInputVector).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->MoveInputVector).field0_0x0._s_0.Y = dVar2;
    local_160._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_160._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_160._s_0.Z = 0.0;
    uVar1 = *(undefined8 *)&(this->MoveInputVector).field0_0x0;
    uVar7 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar8 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((dVar3 <= (double)CONCAT44(uVar8,uVar7) && (double)CONCAT44(uVar8,uVar7) != dVar3) ||
       (uVar1 = *(undefined8 *)((longlong)&(this->MoveInputVector).field0_0x0 + 8),
       uVar7 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar8 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       dVar3 <= (double)CONCAT44(uVar8,uVar7) && (double)CONCAT44(uVar8,uVar7) != dVar3)) {
      pAVar6 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_168);
      bVar4 = ADS_PlayerController::HasInputFlag(pAVar6,KEY_MOVE);
      if (!bVar4) {
        pAVar6 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_168);
        ADS_PlayerController::Input_MoveStart(pAVar6,(FInputActionValue *)&local_160._s_0);
      }
      pAVar6 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_168);
      ADS_PlayerController::Input_MoveTriggered(pAVar6,(FInputActionValue *)&local_160._s_0);
    }
    else {
      pAVar6 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_168);
      bVar4 = ADS_PlayerController::HasInputFlag(pAVar6,KEY_MOVE);
      if (bVar4) {
        pAVar6 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_168);
        ADS_PlayerController::Input_MoveEnd(pAVar6,(FInputActionValue *)&local_160._s_0);
      }
    }
    PrintScreenMsg_MoveInputVector(this);
  }
  return;
}

// SetVirtualKey @ 14bace220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCCS_AICmdProcessInfo::SetVirtualKey
          (FCCS_AICmdProcessInfo *this,ECCS_AIInputType *param_1,bool *param_2)

{
  ECCS_AIInputType EVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UEnum *this_00;
  bool *pbVar6;
  ADS_PlayerController *pAVar7;
  undefined1 *puVar8;
  undefined1 auStackY_1b8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  FWeakObjectPtr local_178;
  bool local_170 [8];
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  ADS_PlayerController::GetPlayerController();
  bVar3 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_178,(void *)0x0);
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FCCS_AICmdProcessInfo::SetVirtualKey",0x24,Yes);
    pwVar10 = L"[CCSAI] pc is nullptr.";
    uVar9 = 0xec;
  }
  else {
    this_00 = StaticEnum<enum_ECCS_AIInputType>();
    if (this_00 != (UEnum *)0x0) {
      UEnum::GetNameStringByValue(this_00,&local_168,(ulonglong)*param_1);
      EVar1 = *param_1;
      if (*(int *)&(this->VirtualKeyMap).field_0x8 != *(int *)&(this->VirtualKeyMap).field_0x34) {
        puVar8 = *(undefined1 **)&(this->VirtualKeyMap).field_0x40;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(this->VirtualKeyMap).field_0x38;
        }
        iVar4 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->VirtualKeyMap).field_0x48 - 1) &
                                  (ulonglong)EVar1) * 4);
        if (iVar4 != -1) {
          do {
            if (*(ECCS_AIInputType *)(*(longlong *)&this->VirtualKeyMap + (longlong)iVar4 * 0xc) ==
                EVar1) {
              pbVar6 = TMapBase<enum_ECCS_AIInputType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ECCS_AIInputType,bool,0>_>
                       ::FindChecked(&this->VirtualKeyMap,EVar1);
              bVar3 = *param_2;
              bVar2 = *pbVar6;
              pbVar6 = TMapBase<enum_ECCS_AIInputType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ECCS_AIInputType,bool,0>_>
                       ::FindChecked(&this->VirtualKeyMap,*param_1);
              *pbVar6 = bVar3;
              pbVar6 = TMapBase<enum_ECCS_AIInputType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ECCS_AIInputType,bool,0>_>
                       ::FindChecked(&this->VirtualKeyMap,*param_1);
              local_170[0] = *pbVar6;
              if (bVar2 == false) {
                if (local_170[0] == true) {
                  switch(*param_1) {
                  case SkillSlot_1:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_SkillSlot(pAVar7,1);
                    break;
                  case SkillSlot_2:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_SkillSlot(pAVar7,2);
                    break;
                  case SkillSlot_3:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_SkillSlot(pAVar7,3);
                    break;
                  case SkillSlot_4:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_SkillSlot(pAVar7,4);
                    break;
                  case SkillSlot_5:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_SkillSlot(pAVar7,5);
                    break;
                  case SkillSlot_6:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_SkillSlot(pAVar7,6);
                    break;
                  case NormalAttack:
                  case ActionNormalAttack:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_NormalAttack(pAVar7);
                    break;
                  case PopupSkill:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_PopupSkill(pAVar7);
                    break;
                  case Avoid:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_Avoid(pAVar7);
                    break;
                  case ItemSlot_1:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_ItemSlot(pAVar7,1);
                    break;
                  case ItemSlot_2:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_ItemSlot(pAVar7,2);
                    break;
                  case ItemSlot_3:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_ItemSlot(pAVar7,3);
                    break;
                  case ItemSlot_4:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_ItemSlot(pAVar7,4);
                    break;
                  case AirWalk_Jump:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_AirWalk_Jump(pAVar7);
                    break;
                  case AirWalk_Hovering:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_AirWalk_Hovering(pAVar7);
                    break;
                  case AirWalk_Dash:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_AirWalk_Dash(pAVar7);
                    break;
                  case AirWalk_DashAttack:
                    pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                    ADS_PlayerController::Input_AirWalk_DashAttack(pAVar7);
                  }
                }
              }
              else if (((bVar2 == true) && (local_170[0] == true)) &&
                      ((*param_1 == NormalAttack || (*param_1 == ActionNormalAttack)))) {
                pAVar7 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_178);
                ADS_PlayerController::Input_NormalAttackTriggered(pAVar7);
              }
              PrintScreenMsg_VirtualKey(this,param_1,local_170);
              goto LAB_14bace42d;
            }
            iVar4 = *(int *)(*(longlong *)&this->VirtualKeyMap + 4 + (longlong)iVar4 * 0xc);
          } while (iVar4 != -1);
        }
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FCCS_AICmdProcessInfo::SetVirtualKey",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_158.Ptr,0xfa,L"[CCSAI] Couldn\'t find InputType. (%s)");
        if ((FScriptContainerElement *)local_158._padding_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      goto LAB_14bace42d;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FCCS_AICmdProcessInfo::SetVirtualKey",0x24,Yes);
    pwVar10 = L"[CCSAI] enumPtr is nullptr.";
    uVar9 = 0xf3;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,uVar9,pwVar10);
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
LAB_14bace42d:
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateProcessInfo @ 14bad90b0

void __thiscall FCCS_AICmdProcessInfo::UpdateProcessInfo(FCCS_AICmdProcessInfo *this)

{
  ECCS_AIInputType *pEVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<ECCS_AIInputType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ECCS_AIInputType,bool,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  SetMoveInputVector(this,&this->MoveInputVector);
  SetCameraYaw(this,&this->CameraYaw);
  iStack_38 = 0;
  iVar3 = *(int *)&(this->VirtualKeyMap).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->VirtualKeyMap).field_0x10;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar3 != 0) {
    puVar6 = *(uint **)&(this->VirtualKeyMap).field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_60.Array;
    }
    uVar4 = *puVar6;
    while (uVar4 == 0) {
      lVar5 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14bad9169;
      uVar4 = puVar6[lVar5 + 1];
    }
    uStack_34 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_34 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_24 = (int)lVar5 + -1 + local_20;
    if (iVar3 < iStack_24) {
      iStack_24 = iVar3;
    }
  }
LAB_14bad9169:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = &this->VirtualKeyMap;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar3) {
    do {
      pEVar1 = (ECCS_AIInputType *)
               (*(longlong *)&this->VirtualKeyMap + (longlong)TStack_60.CurrentBitIndex * 0xc);
      SetVirtualKey(this,pEVar1,(bool *)(pEVar1 + 1));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return;
}

