// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticStruct @ 14b555930

UScriptStruct * __cdecl FDS_PartyMemberInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_PartyMemberInfo.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_PartyMemberInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_PartyMemberInfo,(UObject *)pUVar1,
                         L"DS_PartyMemberInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_PartyMemberInfo.OuterSingleton;
}

// operator= @ 14b55ba50

FDS_PartyMemberInfo * __thiscall
FDS_PartyMemberInfo::operator=(FDS_PartyMemberInfo *this,FDS_PartyMemberInfo *param_1)

{
  double dVar1;
  
  this->PlayerUID = param_1->PlayerUID;
  this->EntityID = param_1->EntityID;
  this->SlotIndex = param_1->SlotIndex;
  ::FString::operator=(&this->Nickname,&param_1->Nickname);
  this->Level = param_1->Level;
  this->CharID = param_1->CharID;
  this->ZoneID = param_1->ZoneID;
  this->Online = param_1->Online;
  this->Dead = param_1->Dead;
  dVar1 = (param_1->Position).field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar1;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  TSet<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_PartyMemberStat,0>,FDefaultSetAllocator>
  ::operator=(&this->Stats,
              (TSet<TTuple<EDS_StatusType,FDS_PartyMemberStat>,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_PartyMemberStat,0>,FDefaultSetAllocator>
               *)&param_1->Stats);
  this->GameServerIndex = param_1->GameServerIndex;
  return this;
}

// FDS_PartyMemberInfo @ 14b8b1800

FDS_PartyMemberInfo * __thiscall
FDS_PartyMemberInfo::FDS_PartyMemberInfo(FDS_PartyMemberInfo *this,FDS_PartyMemberInfo *param_1)

{
  double dVar1;
  
  this->PlayerUID = param_1->PlayerUID;
  this->EntityID = param_1->EntityID;
  this->SlotIndex = param_1->SlotIndex;
  ::FString::FString(&this->Nickname,&param_1->Nickname);
  this->Level = param_1->Level;
  this->CharID = param_1->CharID;
  this->ZoneID = param_1->ZoneID;
  this->Online = param_1->Online;
  this->Dead = param_1->Dead;
  dVar1 = (param_1->Position).field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar1;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  *(undefined8 *)&this->Stats = 0;
  *(undefined8 *)&(this->Stats).field_0x8 = 0;
  *(undefined8 *)&(this->Stats).field_0x20 = 0;
  *(undefined4 *)&(this->Stats).field_0x28 = 0;
  *(undefined4 *)&(this->Stats).field_0x2c = 0x80;
  *(undefined4 *)&(this->Stats).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Stats).field_0x34 = 0;
  *(undefined8 *)&(this->Stats).field_0x40 = 0;
  *(undefined4 *)&(this->Stats).field_0x48 = 0;
  TSet<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_PartyMemberStat,0>,FDefaultSetAllocator>
  ::operator=(&this->Stats,
              (TSet<TTuple<EDS_StatusType,FDS_PartyMemberStat>,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_PartyMemberStat,0>,FDefaultSetAllocator>
               *)&param_1->Stats);
  this->GameServerIndex = param_1->GameServerIndex;
  return this;
}

// operator= @ 14b8b3790

FDS_PartyMemberInfo * __thiscall
FDS_PartyMemberInfo::operator=(FDS_PartyMemberInfo *this,FDS_PartyMemberInfo *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TMap<EDS_StatusType,FDS_PartyMemberStat,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_PartyMemberStat,0>_>
  *pTVar3;
  TMap<EDS_StatusType,FDS_PartyMemberStat,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_PartyMemberStat,0>_>
  *pTVar4;
  undefined1 *_Src;
  undefined1 *_Dst;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  double dVar7;
  
  pFVar1 = &param_1->Nickname;
  this->PlayerUID = param_1->PlayerUID;
  pFVar2 = &this->Nickname;
  this->EntityID = param_1->EntityID;
  this->SlotIndex = param_1->SlotIndex;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Nickname).Data.ArrayNum = (param_1->Nickname).Data.ArrayNum;
    (this->Nickname).Data.ArrayMax = (param_1->Nickname).Data.ArrayMax;
    (param_1->Nickname).Data.ArrayNum = 0;
    (param_1->Nickname).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->Stats;
  this->Level = param_1->Level;
  pTVar4 = &this->Stats;
  this->CharID = param_1->CharID;
  this->ZoneID = param_1->ZoneID;
  this->Online = param_1->Online;
  this->Dead = param_1->Dead;
  dVar7 = (param_1->Position).field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar7;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  if (pTVar4 != pTVar3) {
    if (*(void **)pTVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar4);
    }
    _Src = &(param_1->Stats).field_0x10;
    *(undefined8 *)pTVar4 = *(undefined8 *)pTVar3;
    _Dst = &(this->Stats).field_0x10;
    *(undefined8 *)pTVar3 = 0;
    *(undefined4 *)&(this->Stats).field_0x8 = *(undefined4 *)&(param_1->Stats).field_0x8;
    *(undefined4 *)&(this->Stats).field_0xc = *(undefined4 *)&(param_1->Stats).field_0xc;
    *(undefined8 *)&(param_1->Stats).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Stats).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar6 = *(void **)&(this->Stats).field_0x20;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      *(undefined8 *)&(this->Stats).field_0x20 = *(undefined8 *)&(param_1->Stats).field_0x20;
      *(undefined8 *)&(param_1->Stats).field_0x20 = 0;
      *(undefined4 *)&(this->Stats).field_0x28 = *(undefined4 *)&(param_1->Stats).field_0x28;
      *(undefined4 *)&(this->Stats).field_0x2c = *(undefined4 *)&(param_1->Stats).field_0x2c;
      *(undefined8 *)&(param_1->Stats).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Stats).field_0x30 = *(undefined4 *)&(param_1->Stats).field_0x30;
    *(undefined4 *)&(this->Stats).field_0x34 = *(undefined4 *)&(param_1->Stats).field_0x34;
    *(undefined4 *)&(param_1->Stats).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Stats).field_0x34 = 0;
    if (*(longlong *)&(param_1->Stats).field_0x40 == 0) {
      *(undefined4 *)&(this->Stats).field_0x38 = *(undefined4 *)&(param_1->Stats).field_0x38;
    }
    pvVar6 = *(void **)&(this->Stats).field_0x40;
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    *(undefined8 *)&(this->Stats).field_0x40 = *(undefined8 *)&(param_1->Stats).field_0x40;
    *(undefined8 *)&(param_1->Stats).field_0x40 = 0;
    *(undefined4 *)&(this->Stats).field_0x48 = *(undefined4 *)&(param_1->Stats).field_0x48;
    *(undefined4 *)&(param_1->Stats).field_0x48 = 0;
  }
  this->GameServerIndex = param_1->GameServerIndex;
  return this;
}

// BindEntity @ 14b8b6690

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

void __thiscall FDS_PartyMemberInfo::BindEntity(FDS_PartyMemberInfo *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  ulong64 uVar3;
  undefined1 *puVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar10;
  FDS_EntityBase *pFVar11;
  UDS_MovementCore *this_01;
  undefined1 *puVar12;
  pmf_83b68a89 pVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_218 [32];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [24];
  TVector<double>_u_0 local_1b8;
  undefined1 local_198 [24];
  ForAnyElementType local_180;
  TVector<double>_u_0 local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar3 = this->EntityID;
  if (uVar3 != 0) {
    UnbindEntity(this,uVar3);
  }
  if (param_1 == 0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_PartyMemberInfo::BindEntity",0x1f,Yes);
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0xb6,L"InEntityID == 0ull");
    if ((void *)local_158._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  this->EntityID = param_1;
  UDS_DeathData::GetData((ulong64)(local_1d0 + 8),param_1,false);
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_1d0 + 8));
  if (bVar6) {
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1d0 + 8));
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::AddRaw<FDS_PartyMemberInfo>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)&pUVar9[3].field_0x20,(FDS_PartyMemberInfo *)local_1d0,(pmf_2b238dba)this);
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1d0 + 8));
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
    ::AddRaw<FDS_PartyMemberInfo>
              (&pUVar9[4].field_0x18,(FDS_PartyMemberInfo *)local_1d0,(pmf_29372db9)this);
    OnDeadDataEvent(this,(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>)local_1d0._8_8_);
  }
  UDS_CharStatusData::GetData((ulong64)(local_1d0 + 0x10));
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_1d0 + 0x10));
  iVar5 = FDS_PartyMemberStat::CollectStatusTypes.ArrayNum;
  if (bVar6) {
    pFVar1 = FDS_PartyMemberStat::CollectStatusTypes.AllocatorInstance.Data +
             (longlong)FDS_PartyMemberStat::CollectStatusTypes.ArrayNum * 4;
    FVar14 = FDS_PartyMemberStat::CollectStatusTypes.AllocatorInstance;
    while( true ) {
      if (FDS_PartyMemberStat::CollectStatusTypes.ArrayNum != iVar5) {
        `TCheckedPointerIterator<enum_EDS_StatusType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1d8);
      }
      if (FVar14.Data == pFVar1) break;
      if (*(int *)&(this->Stats).field_0x8 == *(int *)&(this->Stats).field_0x34) {
LAB_14b8b690e:
        FVar14.Data = FVar14.Data + 4;
      }
      else {
        puVar4 = *(undefined1 **)&(this->Stats).field_0x40;
        puVar12 = &(this->Stats).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar12 = puVar4;
        }
        iVar7 = *(int *)(puVar12 +
                        (ulonglong)
                        (*(int *)&(this->Stats).field_0x48 - Hp & *(EDS_StatusType *)FVar14.Data) *
                        4);
        if (iVar7 == -1) goto LAB_14b8b690e;
        do {
          lVar2 = *(longlong *)&this->Stats + (longlong)iVar7 * 0x18;
          if (*(EDS_StatusType *)(*(longlong *)&this->Stats + (longlong)iVar7 * 0x18) ==
              *(EDS_StatusType *)FVar14.Data) {
            pVar13 = (pmf_83b68a89)(lVar2 + 4);
            if (lVar2 == 0) {
              pVar13 = (pmf_83b68a89)0x0;
            }
            if (pVar13 != (pmf_83b68a89)0x0) {
              this_00 = (UDS_CharStatusData *)
                        FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1d0 + 0x10));
              pFVar10 = UDS_CharStatusData::GetStatusInfo(this_00,*(EDS_StatusType *)FVar14.Data);
              if (pFVar10 != (FDS_StatusInfo *)0x0) {
                TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                ::AddRaw<FDS_PartyMemberStat>
                          ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                            *)&pFVar10->ChangeStatusDelegate,(FDS_PartyMemberStat *)local_1d0,pVar13
                          );
                iVar7 = pFVar10->CurrentValue;
                *(float *)((longlong)pVar13 + 8) = pFVar10->MaxValue;
                *(float *)((longlong)pVar13 + 4) = (float)iVar7;
              }
            }
            goto LAB_14b8b690e;
          }
          iVar7 = *(int *)(lVar2 + 0x10);
        } while (iVar7 != -1);
        FVar14.Data = FVar14.Data + 4;
      }
    }
  }
  pFVar11 = FDS_EntityBase::GetEntityBase(&this->EntityID);
  if (pFVar11 == (FDS_EntityBase *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_PartyMemberInfo::BindEntity",0x1f,Yes);
    UDS_LogManager::PrintLog
              (pUVar8,1,Warning,local_158.Ptr,0xf0,L"FDS_EntityBase::GetEntityBase(%lld) == nullptr"
              );
  }
  else {
    (**(code **)(pFVar11->_padding_ + 0x78))(pFVar11,local_1d0);
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_1d0);
    if (bVar6) {
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_1d0);
      TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
      ::AddRaw<FDS_PartyMemberInfo>
                ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
                  *)(pUVar9 + 1),(FDS_PartyMemberInfo *)local_198,(pmf_0affb08c)this);
      this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_1d0);
      UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)(local_198 + 8));
      local_178._s_0.X = 0.0;
      local_178._s_0.Y = 0.0;
      local_178._s_0.Z = 0.0;
      local_1b8._s_0.X = (double)local_198._8_8_;
      local_1b8._s_0.Y = (double)local_198._16_8_;
      local_1b8._s_0.Z = (double)local_180.Data;
      OnMovementUpdated(this,0.0,(TVector<double> *)&local_1b8._s_0,
                        (TVector<double> *)&local_178._s_0);
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_PartyMemberInfo::BindEntity",0x1f,Yes);
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0xeb,L"movementCore.IsValid() == false")
    ;
  }
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// Clear @ 14b8b8770

void __thiscall FDS_PartyMemberInfo::Clear(FDS_PartyMemberInfo *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 local_38 [4];
  undefined8 local_18;
  
  if (this->EntityID != 0) {
    UnbindEntity(this,this->EntityID);
  }
  pFVar1 = &this->Nickname;
  this->PlayerUID = 0;
  this->EntityID = 0;
  if (pFVar1 != (FString *)local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Nickname).Data.ArrayNum = 0;
    (this->Nickname).Data.ArrayMax = 0;
  }
  this->Level = 0;
  this->CharID = 0;
  (this->Position).field0_0x0._s_0.X = 0.0;
  (this->Position).field0_0x0._s_0.Y = 0.0;
  this->Online = false;
  this->Dead = false;
  local_18 = 0;
  (this->Position).field0_0x0._s_0.Z = 0.0;
  TSet<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_PartyMemberStat,0>,FDefaultSetAllocator>
  ::Reset(&this->Stats);
  this->GameServerIndex = 0;
  return;
}

// GetStat @ 14b8c8a20

bool __thiscall
FDS_PartyMemberInfo::GetStat
          (FDS_PartyMemberInfo *this,EDS_StatusType param_1,FDS_PartyMemberStat *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->Stats).field_0x8 != *(int *)&(this->Stats).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Stats).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Stats).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->Stats).field_0x48 - Hp & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this->Stats + (longlong)iVar3 * 0x18;
        if (*(EDS_StatusType *)(*(longlong *)&this->Stats + (longlong)iVar3 * 0x18) == param_1) {
          puVar4 = (undefined8 *)(lVar1 + 4);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            uVar2 = *puVar4;
            param_2->StatusType = (int)uVar2;
            param_2->Value = (float)(int)((ulonglong)uVar2 >> 0x20);
            param_2->MaxValue = *(float *)(puVar4 + 1);
            return true;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  param_2->StatusType = None;
  param_2->Value = 0.0;
  param_2->MaxValue = 0.0;
  return false;
}

// IsValid @ 14b8d0b20

bool __thiscall FDS_PartyMemberInfo::IsValid(FDS_PartyMemberInfo *this)

{
  return 0 < this->PlayerUID;
}

// OnDeadDataEvent @ 14b8d59b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_PartyMemberInfo::OnDeadDataEvent
          (FDS_PartyMemberInfo *this,TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_288 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_res10[0] = param_1.WeakPtr;
  if (this->EntityID == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1462430299794178354>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyStruct.cpp"
                       ,0x132,"EntityID > 0ull");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"FDS_PartyMemberInfo::OnDeadDataEvent",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_258.Ptr,0x134,L"EntityID == 0ull");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
  }
  else {
    bVar2 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(local_res10);
      this->Dead = (bool)pUVar4[3].field_0x18;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1462430299794178360>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyStruct.cpp"
                         ,0x138,"InDeathData.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_PartyMemberInfo::OnDeadDataEvent",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x13a,L"InDeathData.IsValid() == false");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// OnMovementUpdated @ 14b8d8380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_PartyMemberInfo::OnMovementUpdated
          (FDS_PartyMemberInfo *this,float param_1,TVector<double> *param_2,TVector<double> *param_3
          )

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_PartyEvent *pUVar6;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->EntityID == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1462430299794178378>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyStruct.cpp"
                       ,0x14a,"EntityID > 0ull");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PartyMemberInfo::OnMovementUpdated",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x14c,L"EntityID == 0ull");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    (this->Position).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->Position).field0_0x0._s_0.Y = dVar3;
    (this->Position).field0_0x0._s_0.Z = dVar1;
    pUVar6 = UDS_PartyEvent::GetEvent();
    if (pUVar6 != (UDS_PartyEvent *)0x0) {
      FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar6->OnPartyMemberSync,this->PlayerUID);
    }
  }
  return;
}

// OnResurrectEvent @ 14b8d9d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_PartyMemberInfo::OnResurrectEvent
          (FDS_PartyMemberInfo *this,TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> param_1,
          EDS_ResurrectType param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr aFStackX_10 [3];
  undefined1 auStackY_288 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_288;
  aFStackX_10[0] = param_1.WeakPtr;
  if (this->EntityID == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1462430299794178354>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyStruct.cpp"
                       ,0x132,"EntityID > 0ull");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_258,"FDS_PartyMemberInfo::OnDeadDataEvent",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_258.Ptr,0x134,L"EntityID == 0ull");
      if ((void *)TStack_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_258._padding_);
      }
    }
  }
  else {
    bVar2 = FWeakObjectPtr::IsValid(aFStackX_10);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(aFStackX_10);
      this->Dead = (bool)pUVar4[3].field_0x18;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1462430299794178360>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyStruct.cpp"
                         ,0x138,"InDeathData.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"FDS_PartyMemberInfo::OnDeadDataEvent",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,TStack_138.Ptr,0x13a,L"InDeathData.IsValid() == false");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
  }
  return;
}

// SetPartyMemberSync @ 14b8e94c0

void __thiscall
FDS_PartyMemberInfo::SetPartyMemberSync(FDS_PartyMemberInfo *this,PartyMemberSyncResponse *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  Vector *pVVar4;
  StatusFloats *pSVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  StatusIntegers *pSVar8;
  RepeatedPtrField<server_msg::StatusFloat> *pRVar9;
  RepeatedPtrField<server_msg::StatusInteger> *pRVar10;
  StatusFloats *pSVar11;
  Impl_ *pIVar12;
  StatusIntegers *pSVar13;
  Impl_ *pIVar14;
  UDS_PartyEvent *pUVar15;
  int iVar16;
  Vector *pVVar17;
  longlong lVar18;
  undefined1 *puVar19;
  
  if ((this->PlayerUID == (param_1->_impl_).player_uid_) &&
     (this->ZoneID = (param_1->_impl_).zone_id_, this->EntityID == 0)) {
    pVVar4 = (param_1->_impl_).position_;
    pVVar17 = &_Vector_default_instance_._instance;
    if (pVVar4 != (Vector *)0x0) {
      pVVar17 = pVVar4;
    }
    DS_Util::SetFVector(&this->Position,pVVar17);
    pSVar5 = (param_1->_impl_).cur_stats_;
    pSVar11 = &server_msg::_StatusFloats_default_instance_._instance;
    if (pSVar5 != (StatusFloats *)0x0) {
      pSVar11 = pSVar5;
    }
    pIVar12 = &pSVar11->_impl_;
    uVar6 = *(ulonglong *)&(pSVar11->_impl_).status_list_;
    if ((uVar6 & 1) != 0) {
      pIVar12 = (Impl_ *)(uVar6 + 7);
    }
    iVar2 = *(int *)&(pSVar11->_impl_).status_list_.field_0x8;
    pRVar9 = &pIVar12->status_list_;
    for (; pIVar12 != (Impl_ *)(&pRVar9->field_0x0 + (longlong)iVar2 * 8);
        pIVar12 = (Impl_ *)&(pIVar12->status_list_).field_0x8) {
      uVar3 = *(uint *)(*(longlong *)&pIVar12->status_list_ + 0x18);
      if (*(int *)&(this->Stats).field_0x8 != *(int *)&(this->Stats).field_0x34) {
        puVar7 = *(undefined1 **)&(this->Stats).field_0x40;
        puVar19 = &(this->Stats).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar19 = puVar7;
        }
        iVar16 = *(int *)(puVar19 + (ulonglong)(*(int *)&(this->Stats).field_0x48 - 1U & uVar3) * 4)
        ;
        if (iVar16 != -1) {
          do {
            lVar1 = *(longlong *)&this->Stats + (longlong)iVar16 * 0x18;
            if (*(uint *)(*(longlong *)&this->Stats + (longlong)iVar16 * 0x18) == uVar3) {
              lVar18 = lVar1 + 4;
              if (lVar1 == 0) {
                lVar18 = 0;
              }
              if (lVar18 != 0) {
                *(undefined4 *)(lVar18 + 4) =
                     *(undefined4 *)(*(longlong *)&pIVar12->status_list_ + 0x1c);
              }
              break;
            }
            iVar16 = *(int *)(lVar1 + 0x10);
          } while (iVar16 != -1);
        }
      }
    }
    pSVar8 = (param_1->_impl_).max_stats_;
    pSVar13 = &server_msg::_StatusIntegers_default_instance_._instance;
    if (pSVar8 != (StatusIntegers *)0x0) {
      pSVar13 = pSVar8;
    }
    pIVar14 = &pSVar13->_impl_;
    uVar6 = *(ulonglong *)&(pSVar13->_impl_).status_list_;
    if ((uVar6 & 1) != 0) {
      pIVar14 = (Impl_ *)(uVar6 + 7);
    }
    iVar2 = *(int *)&(pSVar13->_impl_).status_list_.field_0x8;
    pRVar10 = &pIVar14->status_list_;
    for (; pIVar14 != (Impl_ *)(&pRVar10->field_0x0 + (longlong)iVar2 * 8);
        pIVar14 = (Impl_ *)&(pIVar14->status_list_).field_0x8) {
      uVar3 = *(uint *)(*(longlong *)&pIVar14->status_list_ + 0x18);
      if (*(int *)&(this->Stats).field_0x8 != *(int *)&(this->Stats).field_0x34) {
        puVar7 = *(undefined1 **)&(this->Stats).field_0x40;
        puVar19 = &(this->Stats).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar19 = puVar7;
        }
        iVar16 = *(int *)(puVar19 + (ulonglong)(*(int *)&(this->Stats).field_0x48 - 1U & uVar3) * 4)
        ;
        if (iVar16 != -1) {
          do {
            lVar1 = *(longlong *)&this->Stats + (longlong)iVar16 * 0x18;
            if (*(uint *)(*(longlong *)&this->Stats + (longlong)iVar16 * 0x18) == uVar3) {
              lVar18 = lVar1 + 4;
              if (lVar1 == 0) {
                lVar18 = 0;
              }
              if (lVar18 != 0) {
                *(float *)(lVar18 + 8) = (float)*(int *)(*(longlong *)&pIVar14->status_list_ + 0x1c)
                ;
              }
              break;
            }
            iVar16 = *(int *)(lVar1 + 0x10);
          } while (iVar16 != -1);
        }
      }
    }
    pUVar15 = UDS_PartyEvent::GetEvent();
    if (pUVar15 != (UDS_PartyEvent *)0x0) {
      FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar15->OnPartyMemberSync,this->PlayerUID);
    }
  }
  return;
}

// SetPartySlotInfo @ 14b8e9bb0

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

void __thiscall
FDS_PartyMemberInfo::SetPartySlotInfo(FDS_PartyMemberInfo *this,PartySlotInfo *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  PartyMemberInfo *pPVar3;
  bool bVar4;
  size_t sVar5;
  PartyMemberInfo *pPVar6;
  UObject *pUVar7;
  FDS_EntityBase *pFVar8;
  int iVar9;
  uchar *_Str;
  ForAnyElementType FVar10;
  uint uVar11;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  TPairInitializer<EDS_StatusType_const_&,FDS_PartyMemberStat_&> local_180;
  FScriptContainerElement *local_170;
  undefined8 *local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  Clear(this);
  this->SlotIndex = (param_1->_impl_).slot_index_;
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 1) == 0) {
    return;
  }
  pPVar3 = (param_1->_impl_).member_;
  pPVar6 = &ds_proto::_PartyMemberInfo_default_instance_._instance;
  if (pPVar3 != (PartyMemberInfo *)0x0) {
    pPVar6 = pPVar3;
  }
  this->PlayerUID = (pPVar6->_impl_).player_uid_;
  pPVar3 = (param_1->_impl_).member_;
  pPVar6 = &ds_proto::_PartyMemberInfo_default_instance_._instance;
  if (pPVar3 != (PartyMemberInfo *)0x0) {
    pPVar6 = pPVar3;
  }
  _Str = (uchar *)((ulonglong)(pPVar6->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(_Str + 0x18)) {
    _Str = *(uchar **)_Str;
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  if (_Str == (uchar *)0x0) {
    local_50 = (FScriptContainerElement *)0x0;
    local_48 = 0;
    goto LAB_14b8e9cdd;
  }
  sVar5 = strlen((char *)_Str);
  local_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar5);
  uVar1 = local_48 + 1;
  uVar11 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar11 = 0;
      goto LAB_14b8e9c93;
    }
  }
  else {
LAB_14b8e9c93:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,2);
  }
  local_50 = local_158;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_50,uVar1,_Str,(int)sVar5 + 1);
LAB_14b8e9cdd:
  ::FString::operator=(&this->Nickname,(wchar_t *)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  pPVar3 = (param_1->_impl_).member_;
  pPVar6 = &ds_proto::_PartyMemberInfo_default_instance_._instance;
  if (pPVar3 != (PartyMemberInfo *)0x0) {
    pPVar6 = pPVar3;
  }
  this->Level = (pPVar6->_impl_).level_;
  pPVar3 = (param_1->_impl_).member_;
  pPVar6 = &ds_proto::_PartyMemberInfo_default_instance_._instance;
  if (pPVar3 != (PartyMemberInfo *)0x0) {
    pPVar6 = pPVar3;
  }
  this->CharID = (pPVar6->_impl_).char_id_;
  pPVar3 = (param_1->_impl_).member_;
  pPVar6 = &ds_proto::_PartyMemberInfo_default_instance_._instance;
  if (pPVar3 != (PartyMemberInfo *)0x0) {
    pPVar6 = pPVar3;
  }
  this->Online = (pPVar6->_impl_).online_;
  pPVar3 = (param_1->_impl_).member_;
  pPVar6 = &ds_proto::_PartyMemberInfo_default_instance_._instance;
  if (pPVar3 != (PartyMemberInfo *)0x0) {
    pPVar6 = pPVar3;
  }
  this->Dead = (pPVar6->_impl_).dead_;
  pPVar3 = (param_1->_impl_).member_;
  pPVar6 = &ds_proto::_PartyMemberInfo_default_instance_._instance;
  if (pPVar3 != (PartyMemberInfo *)0x0) {
    pPVar6 = pPVar3;
  }
  this->GameServerIndex = (pPVar6->_impl_).game_server_index_;
  iVar9 = FDS_PartyMemberStat::CollectStatusTypes.ArrayNum;
  pFVar2 = FDS_PartyMemberStat::CollectStatusTypes.AllocatorInstance.Data + (longlong)iVar9 * 4;
  FVar10 = FDS_PartyMemberStat::CollectStatusTypes.AllocatorInstance;
  while( true ) {
    if (FDS_PartyMemberStat::CollectStatusTypes.ArrayNum != iVar9) {
      `TCheckedPointerIterator<enum_EDS_StatusType,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_198);
    }
    if (FVar10.Data == pFVar2) break;
    local_190 = *(undefined4 *)FVar10.Data;
    local_168 = (undefined8 *)&local_190;
    uStack_18c = 0;
    uStack_188 = 0;
    local_170 = FVar10.Data;
    TSet<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_PartyMemberStat,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_StatusType_const_&,FDS_PartyMemberStat_&>_>
              (&this->Stats,&local_180,(bool *)&local_170);
    FVar10.Data = FVar10.Data + 4;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_180.Value);
  if ((bVar4) &&
     (pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_180.Value),
     *(longlong *)&pUVar7[6].field_0x8 != this->PlayerUID)) {
    UDS_PlayerData::GetDataByPlayerUID((long64)&local_180);
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_180);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_180);
      local_190 = (undefined4)*(undefined8 *)&pUVar7[8].field_0x10;
      uStack_18c = (undefined4)((ulonglong)*(undefined8 *)&pUVar7[8].field_0x10 >> 0x20);
      pFVar8 = FDS_EntityBase::GetEntityBase((ulong64 *)&local_190);
      if (pFVar8 != (FDS_EntityBase *)0x0) {
        BindEntity(this,CONCAT44(uStack_18c,local_190));
      }
    }
  }
  return;
}

// UnbindEntity @ 14b8efc00

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

void __thiscall FDS_PartyMemberInfo::UnbindEntity(FDS_PartyMemberInfo *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar8;
  FDS_EntityBase *pFVar9;
  UDS_LogManager *pUVar10;
  undefined1 *puVar11;
  ForAnyElementType FVar12;
  void *pvVar13;
  undefined1 auStackY_1c8 [32];
  undefined1 local_188 [8];
  FWeakObjectPtr local_180;
  ulong64 local_178;
  FWeakObjectPtr local_170;
  FWeakObjectPtr local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  if (param_1 == 0) {
    return;
  }
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (this->EntityID != param_1) {
    return;
  }
  this->EntityID = 0;
  local_178 = param_1;
  UDS_DeathData::GetData((ulong64)&local_180,param_1,false);
  bVar5 = FWeakObjectPtr::IsValid(&local_180);
  if (bVar5) {
    pUVar7 = FWeakObjectPtr::Get(&local_180);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[3].field_0x20,this);
    pUVar7 = FWeakObjectPtr::Get(&local_180);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[4].field_0x18,this);
  }
  UDS_CharStatusData::GetData((ulong64)&local_170);
  bVar5 = FWeakObjectPtr::IsValid(&local_170);
  iVar4 = FDS_PartyMemberStat::CollectStatusTypes.ArrayNum;
  if (bVar5) {
    pFVar1 = FDS_PartyMemberStat::CollectStatusTypes.AllocatorInstance.Data +
             (longlong)FDS_PartyMemberStat::CollectStatusTypes.ArrayNum * 4;
    FVar12 = FDS_PartyMemberStat::CollectStatusTypes.AllocatorInstance;
    while( true ) {
      if (FDS_PartyMemberStat::CollectStatusTypes.ArrayNum != iVar4) {
        `TCheckedPointerIterator<enum_EDS_StatusType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_188);
      }
      if (FVar12.Data == pFVar1) break;
      if (*(int *)&(this->Stats).field_0x8 == *(int *)&(this->Stats).field_0x34) {
LAB_14b8efd96:
        FVar12.Data = FVar12.Data + 4;
      }
      else {
        puVar3 = *(undefined1 **)&(this->Stats).field_0x40;
        puVar11 = &(this->Stats).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar11 = puVar3;
        }
        iVar6 = *(int *)(puVar11 +
                        (ulonglong)
                        (*(int *)&(this->Stats).field_0x48 - Hp & *(EDS_StatusType *)FVar12.Data) *
                        4);
        if (iVar6 == -1) goto LAB_14b8efd96;
        do {
          lVar2 = *(longlong *)&this->Stats + (longlong)iVar6 * 0x18;
          if (*(EDS_StatusType *)(*(longlong *)&this->Stats + (longlong)iVar6 * 0x18) ==
              *(EDS_StatusType *)FVar12.Data) {
            pvVar13 = (void *)(lVar2 + 4);
            if (lVar2 == 0) {
              pvVar13 = (void *)0x0;
            }
            if (pvVar13 != (void *)0x0) {
              this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_170);
              pFVar8 = UDS_CharStatusData::GetStatusInfo(this_00,*(EDS_StatusType *)FVar12.Data);
              if (pFVar8 != (FDS_StatusInfo *)0x0) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &pFVar8->ChangeStatusDelegate,pvVar13);
              }
            }
            goto LAB_14b8efd96;
          }
          iVar6 = *(int *)(lVar2 + 0x10);
        } while (iVar6 != -1);
        FVar12.Data = FVar12.Data + 4;
      }
    }
  }
  pFVar9 = FDS_EntityBase::GetEntityBase(&local_178);
  if (pFVar9 == (FDS_EntityBase *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_PartyMemberInfo::UnbindEntity",0x21,Yes);
    UDS_LogManager::PrintLog
              (pUVar10,1,Warning,local_158.Ptr,300,L"FDS_EntityBase::GetEntityBase(%lld) == nullptr"
              );
  }
  else {
    (**(code **)(pFVar9->_padding_ + 0x78))(pFVar9,local_168);
    bVar5 = FWeakObjectPtr::IsValid(local_168);
    if (bVar5) {
      pUVar7 = FWeakObjectPtr::Get(local_168);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar7 + 1),this);
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_PartyMemberInfo::UnbindEntity",0x21,Yes);
    UDS_LogManager::PrintLog
              (pUVar10,1,Warning,local_158.Ptr,0x127,L"movementCore.IsValid() == false");
  }
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// ~FDS_PartyMemberInfo @ 14c068780

void __thiscall FDS_PartyMemberInfo::~FDS_PartyMemberInfo(FDS_PartyMemberInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->Stats).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Stats).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->Stats);
  pFVar2 = (this->Nickname).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

