// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// Init @ 14b49ea70

bool __thiscall TDS_Singleton<FDS_HttpServer>::Init(TDS_Singleton<FDS_HttpServer> *this)

{
  return true;
}

// OnDestroy @ 14b49ea80

bool __thiscall TDS_Singleton<FDS_HttpServer>::OnDestroy(TDS_Singleton<FDS_HttpServer> *this)

{
  return true;
}

// Destroy @ 14b49ea90

void __thiscall TDS_Singleton<FDS_HttpServer>::Destroy(TDS_Singleton<FDS_HttpServer> *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FDS_Urls local_1d8;
  
  if (Inst != (FDS_HttpServer *)0x0) {
    cVar2 = (**(code **)(Inst->_padding_ + 0x10))();
    if (cVar2 == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4219184397653377082>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                         ,0x3a,"false");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (Inst != (FDS_HttpServer *)0x0) {
      (**(code **)(Inst->_padding_ + 0x18))();
    }
    Inst = (FDS_HttpServer *)0x0;
    memset(&local_1d8,0,0x1c8);
    FDS_Urls::FDS_Urls(&local_1d8);
    Empty.RefreshJwtTokenRequestTimerHandle.Handle = 0;
    FDS_Urls::operator=(&Empty.Urls,&local_1d8);
    FDS_Urls::~FDS_Urls(&local_1d8);
  }
  return;
}

// Init @ 14b5f19b0

bool __thiscall TDS_Singleton<FDS_RaidPartyRepo>::Init(TDS_Singleton<FDS_RaidPartyRepo> *this)

{
  return true;
}

// OnDestroy @ 14b5f19c0

bool __thiscall TDS_Singleton<FDS_RaidPartyRepo>::OnDestroy(TDS_Singleton<FDS_RaidPartyRepo> *this)

{
  return true;
}

// Destroy @ 14b5f19d0

void __thiscall TDS_Singleton<FDS_RaidPartyRepo>::Destroy(TDS_Singleton<FDS_RaidPartyRepo> *this)

{
  FScriptContainerElement *pFVar1;
  FDS_RaidPartyRepo *pFVar2;
  
  pFVar2 = Inst;
  if (Inst != (FDS_RaidPartyRepo *)0x0) {
    pFVar1 = (Inst->Password).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FDS_RaidPartyMemberInfo,int>
              ((FDS_RaidPartyMemberInfo *)(pFVar2->RaidPartyInfo).Members.AllocatorInstance.Data,
               (pFVar2->RaidPartyInfo).Members.ArrayNum);
    pFVar1 = (pFVar2->RaidPartyInfo).Members.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar2->RaidPartyInfo).PartyName.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar2,0x98);
    Inst = (FDS_RaidPartyRepo *)0x0;
    Empty.RaidPartyInfo.RaidPartyUID = 0;
    Empty.RaidPartyInfo.DungeonId = 0;
    if (Empty.RaidPartyInfo.PartyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(Empty.RaidPartyInfo.PartyName.Data.AllocatorInstance.Data);
    }
    Empty.RaidPartyInfo.PartyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Empty.RaidPartyInfo.PartyName.Data.ArrayNum = 0;
    Empty.RaidPartyInfo.PartyName.Data.ArrayMax = 0;
    Empty.RaidPartyInfo.IsPassword = false;
    DestructItems<FDS_RaidPartyMemberInfo,int>
              ((FDS_RaidPartyMemberInfo *)Empty.RaidPartyInfo.Members.AllocatorInstance.Data,
               Empty.RaidPartyInfo.Members.ArrayNum);
    if (Empty.RaidPartyInfo.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(Empty.RaidPartyInfo.Members.AllocatorInstance.Data);
    }
    Empty.RaidPartyVoteData.VoteStartTime.Ticks = 0;
    Empty.RaidPartyInfo.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Empty.RaidPartyInfo.Members.ArrayNum = 0;
    Empty.RaidPartyInfo.Members.ArrayMax = 0;
    Empty.RaidPartyInfo.LeaderUID = 0;
    Empty.RaidPartyInfo.IsPublic = false;
    Empty.RaidPartyInfo.MemberCount = 0;
    Empty.RaidPartyInfo.State = 0;
    Empty.bIsVoteable = false;
    Empty.RaidPartyVoteData.RaidPartyUID = 0;
    Empty.RaidPartyVoteData.PlayerUID = 0;
    Empty.RaidPartyVoteData.AgreementCount = 0;
    Empty.RaidPartyVoteData.RejectCount = 0;
    Empty.RaidPartyVoteData.VoteProposerUID = 0;
    if (Empty.Password.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(Empty.Password.Data.AllocatorInstance.Data);
    }
    Empty.Password.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Empty.Password.Data.ArrayNum = 0;
    Empty.Password.Data.ArrayMax = 0;
    DestructItems<FDS_RaidPartyMemberInfo,int>((FDS_RaidPartyMemberInfo *)0x0,0);
  }
  return;
}

// Init @ 14b85b490

bool __thiscall TDS_Singleton<FDS_AuthData>::Init(TDS_Singleton<FDS_AuthData> *this)

{
  return true;
}

// OnDestroy @ 14b85b4a0

bool __thiscall TDS_Singleton<FDS_AuthData>::OnDestroy(TDS_Singleton<FDS_AuthData> *this)

{
  return true;
}

// Destroy @ 14b85b4b0

void __thiscall TDS_Singleton<FDS_AuthData>::Destroy(TDS_Singleton<FDS_AuthData> *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FDS_AuthData *pFVar4;
  FDS_AuthData local_118;
  
  if (Inst != (FDS_AuthData *)0x0) {
    cVar2 = (**(code **)(Inst->_padding_ + 0x10))();
    if (cVar2 == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4219184397653377082>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                         ,0x3a,"false");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (Inst != (FDS_AuthData *)0x0) {
      (**(code **)(Inst->_padding_ + 0x18))();
    }
    Inst = (FDS_AuthData *)0x0;
    memset(&local_118,0,0x110);
    pFVar4 = FDS_AuthData::FDS_AuthData(&local_118);
    if (&pFVar4->OnStateChangedLogoutDelegate != &Empty.OnStateChangedLogoutDelegate) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &Empty.OnStateChangedLogoutDelegate,
                 (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pFVar4->OnStateChangedLogoutDelegate);
    }
    if (&pFVar4->OnStateChangedServerChangeDelegate != &Empty.OnStateChangedServerChangeDelegate) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &Empty.OnStateChangedServerChangeDelegate,
                 (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pFVar4->OnStateChangedServerChangeDelegate);
    }
    ::FString::operator=(&Empty.SessionUID,&pFVar4->SessionUID);
    ::FString::operator=(&Empty.AccountID,&pFVar4->AccountID);
    Empty.PlayerUID = pFVar4->PlayerUID;
    Empty.CharSlotNum = pFVar4->CharSlotNum;
    ::FString::operator=(&Empty.CharName,&pFVar4->CharName);
    ::FString::operator=(&Empty.JwtKey,&pFVar4->JwtKey);
    Empty.CharLevel = pFVar4->CharLevel;
    Empty.Exp = pFVar4->Exp;
    Empty.IslandID = pFVar4->IslandID;
    Empty.Position.field0_0x0._s_0.X = (pFVar4->Position).field0_0x0._s_0.X;
    Empty.Position.field0_0x0._s_0.Y = (pFVar4->Position).field0_0x0._s_0.Y;
    Empty.Position.field0_0x0._s_0.Z = (pFVar4->Position).field0_0x0._s_0.Z;
    Empty.Direction = pFVar4->Direction;
    Empty.CreateDT.Ticks = (pFVar4->CreateDT).Ticks;
    Empty.HealthTime.Ticks = (pFVar4->HealthTime).Ticks;
    ::FString::operator=(&Empty.GameServerAddr,&pFVar4->GameServerAddr);
    Empty.GameServerPort = pFVar4->GameServerPort;
    Empty.IsReceiveLoginData = pFVar4->IsReceiveLoginData;
    Empty.WorldId = pFVar4->WorldId;
    Empty.GameServerIndex = pFVar4->GameServerIndex;
    Empty.RegionIndex = pFVar4->RegionIndex;
    Empty.AccountAuthority = pFVar4->AccountAuthority;
    Empty.CharId = pFVar4->CharId;
    FDS_AuthData::~FDS_AuthData(&local_118);
  }
  return;
}

// Destroy @ 14b8a5550

void __thiscall TDS_Singleton<FDS_PlayerRepo>::Destroy(TDS_Singleton<FDS_PlayerRepo> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FDS_PlayerRepo *pFVar3;
  
  pFVar3 = Inst;
  if (Inst != (FDS_PlayerRepo *)0x0) {
    DestructItems<FString,int>
              ((FString *)(Inst->SearchedPlayerNameList).AllocatorInstance.Data,
               (Inst->SearchedPlayerNameList).ArrayNum);
    piVar1 = &(pFVar3->SearchedPlayerNameList).ArrayMax;
    (pFVar3->SearchedPlayerNameList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pFVar3->SearchedPlayerNameList).AllocatorInstance,0,piVar1);
    }
    DestructItems<misc::Player,int>
              ((Player *)(pFVar3->PlayerList).AllocatorInstance.Data,(pFVar3->PlayerList).ArrayNum);
    piVar1 = &(pFVar3->PlayerList).ArrayMax;
    (pFVar3->PlayerList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,0,&(pFVar3->PlayerList).AllocatorInstance,0,piVar1);
    }
    pFVar3 = Inst;
    if (Inst != (FDS_PlayerRepo *)0x0) {
      DestructItems<misc::Player,int>
                ((Player *)(Inst->PlayerList).AllocatorInstance.Data,(Inst->PlayerList).ArrayNum);
      pFVar2 = (pFVar3->PlayerList).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      DestructItems<FString,int>
                ((FString *)(pFVar3->SearchedPlayerNameList).AllocatorInstance.Data,
                 (pFVar3->SearchedPlayerNameList).ArrayNum);
      pFVar2 = (pFVar3->SearchedPlayerNameList).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar3,0x28);
    }
    Inst = (FDS_PlayerRepo *)0x0;
    DestructItems<FString,int>
              ((FString *)Empty.SearchedPlayerNameList.AllocatorInstance.Data,
               Empty.SearchedPlayerNameList.ArrayNum);
    if (Empty.SearchedPlayerNameList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(Empty.SearchedPlayerNameList.AllocatorInstance.Data);
    }
    Empty.SearchedPlayerNameList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Empty.SearchedPlayerNameList.ArrayNum = 0;
    Empty.SearchedPlayerNameList.ArrayMax = 0;
    DestructItems<misc::Player,int>
              ((Player *)Empty.PlayerList.AllocatorInstance.Data,Empty.PlayerList.ArrayNum);
    if (Empty.PlayerList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(Empty.PlayerList.AllocatorInstance.Data);
    }
    Empty.PlayerList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Empty.PlayerList.ArrayNum = 0;
    Empty.PlayerList.ArrayMax = 0;
    DestructItems<misc::Player,int>((Player *)0x0,0);
    DestructItems<FString,int>((FString *)0x0,0);
  }
  return;
}

// OnDestroy @ 14b8a57d0

bool __thiscall TDS_Singleton<FDS_UIData>::OnDestroy(TDS_Singleton<FDS_UIData> *this)

{
  return true;
}

// Destroy @ 14b8a57e0

void __thiscall TDS_Singleton<FDS_UIData>::Destroy(TDS_Singleton<FDS_UIData> *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  if (Inst != (FDS_UIData *)0x0) {
    cVar2 = (**(code **)(Inst->_padding_ + 0x10))();
    if (cVar2 == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4219184397653377082>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                         ,0x3a,"false");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (Inst != (FDS_UIData *)0x0) {
      (**(code **)(Inst->_padding_ + 0x18))(Inst,1);
    }
    Inst = (FDS_UIData *)0x0;
    Empty.SelectedEquipItemTID = 0;
    Empty.CurrentRingCmdQuickSlotDeckIndex = 0;
  }
  return;
}

// Destroy @ 14b8a5910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014b8be0bf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall TDS_Singleton<FDS_PartyRepo>::Destroy(TDS_Singleton<FDS_PartyRepo> *this)

{
  ulonglong uVar1;
  FDS_PartyRepo *pFVar2;
  int iVar3;
  UDS_EntityManager *pUVar4;
  undefined1 auStackY_128 [32];
  undefined1 auStack_c0 [80];
  ForAnyElementType FStack_70;
  undefined8 uStack_68;
  TBitArray<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  undefined8 uStack_38;
  void *pvStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  pFVar2 = Inst;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (Inst != (FDS_PartyRepo *)0x0) {
    FDS_PartyInfo::Clear(&Inst->PartyInfo);
    pUVar4 = UDS_EntityManager::GetInst();
    if (pUVar4 != (UDS_EntityManager *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnSpawnEntityEvent,
                 pFVar2);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnRemoveEntityEvent,
                 pFVar2);
    }
    pFVar2 = Inst;
    if (Inst != (FDS_PartyRepo *)0x0) {
      FDS_PartyInfo::~FDS_PartyInfo(&Inst->PartyInfo);
      ::operator_delete(pFVar2,0xe0);
    }
    auStack_c0._16_8_ = 0;
    uStack_38 = 0;
    uStack_28 = 0;
    uStack_20._0_4_ = 0;
    uStack_20._4_4_ = 0;
    auStack_c0._54_2_ = 0;
    TStack_60.AllocatorInstance.InlineData[0] = '\0';
    TStack_60.AllocatorInstance.InlineData[1] = '\0';
    TStack_60.AllocatorInstance.InlineData[2] = '\0';
    TStack_60.AllocatorInstance.InlineData[3] = '\0';
    TStack_60.AllocatorInstance.InlineData[4] = '\0';
    TStack_60.AllocatorInstance.InlineData[5] = '\0';
    TStack_60.AllocatorInstance.InlineData[6] = '\0';
    TStack_60.AllocatorInstance.InlineData[7] = '\0';
    TStack_60.AllocatorInstance.InlineData[8] = '\0';
    TStack_60.AllocatorInstance.InlineData[9] = '\0';
    TStack_60.AllocatorInstance.InlineData[10] = '\0';
    TStack_60.AllocatorInstance.InlineData[0xb] = '\0';
    TStack_60.AllocatorInstance.InlineData[0xc] = '\0';
    TStack_60.AllocatorInstance.InlineData[0xd] = '\0';
    TStack_60.AllocatorInstance.InlineData[0xe] = '\0';
    TStack_60.AllocatorInstance.InlineData[0xf] = '\0';
    auStack_c0._72_6_ = 0;
    auStack_c0._78_2_ = 0;
    auStack_c0._56_6_ = 0;
    auStack_c0._62_2_ = 0;
    auStack_c0._64_6_ = 0;
    auStack_c0._70_2_ = 0;
    Inst = (FDS_PartyRepo *)0x0;
    Empty.PartyInfo.PartyUID = 0;
    auStack_c0._0_8_ = 0;
    auStack_c0._8_8_ = 0;
    auStack_c0._24_8_ = (FScriptContainerElement *)0x0;
    auStack_c0._32_4_ = 0;
    auStack_c0._36_4_ = 0;
    auStack_c0._40_4_ = 0;
    auStack_c0._44_4_ = 0;
    auStack_c0._48_4_ = 0;
    auStack_c0[0x34] = false;
    auStack_c0[0x35] = false;
    FStack_70.Data = (FScriptContainerElement *)0x0;
    uStack_68 = 0;
    TStack_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    TStack_60.NumBits = ___xmm_00000000ffffffff0000008000000000;
    TStack_60.MaxBits = _UNK_150631d94;
    uStack_40 = _UNK_150631d98;
    pvStack_30 = (void *)0x0;
    Empty.PartyInfo.PartyType = None;
    Empty.PartyInfo.PartyLeaderUID = 0;
    DestructItems<FDS_PartyMemberInfo,int>
              ((FDS_PartyMemberInfo *)Empty.PartyInfo.PartyMemberInfos.AllocatorInstance.Data,
               Empty.PartyInfo.PartyMemberInfos.ArrayNum);
    if (Empty.PartyInfo.PartyMemberInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(Empty.PartyInfo.PartyMemberInfos.AllocatorInstance.Data);
    }
    Empty.PartyInfo.PartyMemberInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Empty.PartyInfo.PartyMemberInfos.ArrayNum = 0;
    Empty.PartyInfo.PartyMemberInfos.ArrayMax = 0;
    Empty.PartyInfo.MySlotIndex = 0;
    Empty.PartyInfo.PartyMemberCount = 0;
    FDS_PartyMemberInfo::operator=
              (&Empty.PartyInfo.DefaultPartyMemberInfo,(FDS_PartyMemberInfo *)auStack_c0);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    if (pvStack_30 != (void *)0x0) {
      FMemory::Free(pvStack_30);
    }
    uVar1 = uStack_68 >> 0x20;
    uStack_68 = uStack_68 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&FStack_70,0,(int *)((longlong)&uStack_68 + 4));
    }
    iVar3 = TStack_60.MaxBits;
    uStack_40 = 0xffffffff;
    TStack_60._24_8_ = (ulonglong)(uint)TStack_60.MaxBits << 0x20;
    if (0x80 < (uint)iVar3) {
      TStack_60.NumBits = 0;
      TStack_60.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&TStack_60,0);
    }
    if (TStack_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)TStack_60.AllocatorInstance.SecondaryData);
    }
    if (FStack_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_70.Data);
    }
    if ((FScriptContainerElement *)auStack_c0._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_c0._24_8_);
    }
    DestructItems<FDS_PartyMemberInfo,int>((FDS_PartyMemberInfo *)0x0,0);
  }
  return;
}

// DestroyInst @ 14b8bde60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014b8be0bf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl TDS_Singleton<FDS_PartyRepo>::DestroyInst(void)

{
  ulonglong uVar1;
  FDS_PartyRepo *pFVar2;
  int iVar3;
  UDS_EntityManager *pUVar4;
  undefined1 auStackY_128 [32];
  undefined1 local_c0 [80];
  ForAnyElementType local_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  undefined8 uStack_40;
  undefined8 local_38;
  void *local_30;
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  pFVar2 = Inst;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (Inst != (FDS_PartyRepo *)0x0) {
    FDS_PartyInfo::Clear(&Inst->PartyInfo);
    pUVar4 = UDS_EntityManager::GetInst();
    if (pUVar4 != (UDS_EntityManager *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnSpawnEntityEvent,
                 pFVar2);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnRemoveEntityEvent,
                 pFVar2);
    }
    pFVar2 = Inst;
    if (Inst != (FDS_PartyRepo *)0x0) {
      FDS_PartyInfo::~FDS_PartyInfo(&Inst->PartyInfo);
      ::operator_delete(pFVar2,0xe0);
    }
    local_c0._16_8_ = 0;
    local_38 = 0;
    local_28 = 0;
    local_20._0_4_ = 0;
    local_20._4_4_ = 0;
    local_c0._54_2_ = 0;
    local_60.AllocatorInstance.InlineData[0] = '\0';
    local_60.AllocatorInstance.InlineData[1] = '\0';
    local_60.AllocatorInstance.InlineData[2] = '\0';
    local_60.AllocatorInstance.InlineData[3] = '\0';
    local_60.AllocatorInstance.InlineData[4] = '\0';
    local_60.AllocatorInstance.InlineData[5] = '\0';
    local_60.AllocatorInstance.InlineData[6] = '\0';
    local_60.AllocatorInstance.InlineData[7] = '\0';
    local_60.AllocatorInstance.InlineData[8] = '\0';
    local_60.AllocatorInstance.InlineData[9] = '\0';
    local_60.AllocatorInstance.InlineData[10] = '\0';
    local_60.AllocatorInstance.InlineData[0xb] = '\0';
    local_60.AllocatorInstance.InlineData[0xc] = '\0';
    local_60.AllocatorInstance.InlineData[0xd] = '\0';
    local_60.AllocatorInstance.InlineData[0xe] = '\0';
    local_60.AllocatorInstance.InlineData[0xf] = '\0';
    local_c0._72_6_ = 0;
    local_c0._78_2_ = 0;
    local_c0._56_6_ = 0;
    local_c0._62_2_ = 0;
    local_c0._64_6_ = 0;
    local_c0._70_2_ = 0;
    Inst = (FDS_PartyRepo *)0x0;
    Empty.PartyInfo.PartyUID = 0;
    local_c0._0_8_ = 0;
    local_c0._8_8_ = 0;
    local_c0._24_8_ = (FScriptContainerElement *)0x0;
    local_c0._32_4_ = 0;
    local_c0._36_4_ = 0;
    local_c0._40_4_ = 0;
    local_c0._44_4_ = 0;
    local_c0._48_4_ = 0;
    local_c0[0x34] = false;
    local_c0[0x35] = false;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_60.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_60.MaxBits = _UNK_150631d94;
    uStack_40 = _UNK_150631d98;
    local_30 = (void *)0x0;
    Empty.PartyInfo.PartyType = None;
    Empty.PartyInfo.PartyLeaderUID = 0;
    DestructItems<FDS_PartyMemberInfo,int>
              ((FDS_PartyMemberInfo *)Empty.PartyInfo.PartyMemberInfos.AllocatorInstance.Data,
               Empty.PartyInfo.PartyMemberInfos.ArrayNum);
    if (Empty.PartyInfo.PartyMemberInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(Empty.PartyInfo.PartyMemberInfos.AllocatorInstance.Data);
    }
    Empty.PartyInfo.PartyMemberInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Empty.PartyInfo.PartyMemberInfos.ArrayNum = 0;
    Empty.PartyInfo.PartyMemberInfos.ArrayMax = 0;
    Empty.PartyInfo.MySlotIndex = 0;
    Empty.PartyInfo.PartyMemberCount = 0;
    FDS_PartyMemberInfo::operator=
              (&Empty.PartyInfo.DefaultPartyMemberInfo,(FDS_PartyMemberInfo *)local_c0);
    local_28 = local_28 & 0xffffffff00000000;
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    uVar1 = local_68 >> 0x20;
    local_68 = local_68 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&local_70,0,(int *)((longlong)&local_68 + 4));
    }
    iVar3 = local_60.MaxBits;
    uStack_40 = 0xffffffff;
    local_60._24_8_ = (ulonglong)(uint)local_60.MaxBits << 0x20;
    if (0x80 < (uint)iVar3) {
      local_60.NumBits = 0;
      local_60.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
    }
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    if ((FScriptContainerElement *)local_c0._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c0._24_8_);
    }
    DestructItems<FDS_PartyMemberInfo,int>((FDS_PartyMemberInfo *)0x0,0);
  }
  return;
}

// GetInst @ 14b8c6db0

FDS_AuthData * __cdecl TDS_Singleton<FDS_AuthData>::GetInst(void)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FDS_AuthData *pFVar4;
  
  if (Inst == (FDS_AuthData *)0x0) {
    pFVar4 = ::operator_new(0x110);
    if (pFVar4 == (FDS_AuthData *)0x0) {
      Inst = (FDS_AuthData *)0x0;
    }
    else {
      memset(pFVar4,0,0x110);
      Inst = FDS_AuthData::FDS_AuthData(pFVar4);
    }
    cVar2 = (**(code **)(Inst->_padding_ + 8))();
    if (cVar2 == '\0') {
      if (Inst != (FDS_AuthData *)0x0) {
        (**(code **)(Inst->_padding_ + 0x18))(Inst,1);
      }
      Inst = (FDS_AuthData *)0x0;
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4219184397653377064>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                         ,0x28,"false");
      if (!bVar3) {
        return &Empty;
      }
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDS_AuthData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return Inst;
}

// GetInst @ 14b8c6e80

FDS_HttpServer * __cdecl TDS_Singleton<FDS_HttpServer>::GetInst(void)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FDS_HttpServer *pFVar4;
  
  if (Inst == (FDS_HttpServer *)0x0) {
    pFVar4 = ::operator_new(0x1d8);
    if (pFVar4 == (FDS_HttpServer *)0x0) {
      pFVar4 = (FDS_HttpServer *)0x0;
    }
    else {
      memset(&pFVar4->Urls,0,0x1c8);
      (pFVar4->RefreshJwtTokenRequestTimerHandle).Handle = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_HttpServer__6B_;
      FDS_Urls::FDS_Urls(&pFVar4->Urls);
    }
    Inst = pFVar4;
    cVar2 = (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
    if (cVar2 == '\0') {
      if (Inst != (FDS_HttpServer *)0x0) {
        (**(code **)(Inst->_padding_ + 0x18))(Inst,1);
      }
      Inst = (FDS_HttpServer *)0x0;
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4219184397653377064>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                         ,0x28,"false");
      if (!bVar3) {
        return &Empty;
      }
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDS_HttpServer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return Inst;
}

// GetInst @ 14b8c6f70

FDS_PartyRepo * __cdecl TDS_Singleton<FDS_PartyRepo>::GetInst(void)

{
  int *piVar1;
  code *pcVar2;
  FDS_PartyRepo *pFVar3;
  bool bVar4;
  int iVar5;
  FDS_PartyRepo *pFVar6;
  UDS_DataManager *pUVar7;
  
  pFVar6 = Inst;
  if (Inst == (FDS_PartyRepo *)0x0) {
    pFVar6 = ::operator_new(0xe0);
    if (pFVar6 == (FDS_PartyRepo *)0x0) {
      pFVar6 = (FDS_PartyRepo *)0x0;
    }
    else {
      memset(pFVar6,0,0xe0);
      pFVar6 = FDS_PartyRepo::FDS_PartyRepo(pFVar6);
    }
    Inst = pFVar6;
    pUVar7 = UDS_DataManager::GetInst();
    pFVar3 = Inst;
    if (pUVar7 != (UDS_DataManager *)0x0) {
      iVar5 = (pUVar7->RepoArray).ArrayNum;
      piVar1 = &(pUVar7->RepoArray).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pUVar7->RepoArray).AllocatorInstance,piVar1);
      }
      (pUVar7->RepoArray).ArrayNum = iVar5 + 1;
      *(FDS_PartyRepo **)((pUVar7->RepoArray).AllocatorInstance.Data + (longlong)iVar5 * 8) = pFVar6
      ;
      return Inst;
    }
    if (Inst != (FDS_PartyRepo *)0x0) {
      FDS_PartyInfo::~FDS_PartyInfo(&Inst->PartyInfo);
      ::operator_delete(pFVar3,0xe0);
    }
    Inst = (FDS_PartyRepo *)0x0;
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4219184397653377064>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                       ,0x28,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDS_PartyRepo *)(*pcVar2)();
      return pFVar6;
    }
    pFVar6 = &Empty;
  }
  return pFVar6;
}

// GetInst @ 14b8c7090

FDS_PlayerRepo * __cdecl TDS_Singleton<FDS_PlayerRepo>::GetInst(void)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_PlayerRepo *pFVar6;
  UDS_DataManager *pUVar7;
  FDS_PlayerRepo *pFVar8;
  
  pFVar8 = Inst;
  if (Inst == (FDS_PlayerRepo *)0x0) {
    pFVar6 = ::operator_new(0x28);
    pFVar8 = (FDS_PlayerRepo *)0x0;
    if (pFVar6 != (FDS_PlayerRepo *)0x0) {
      (pFVar6->SearchedPlayerNameList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar6->_padding_ = (longlong)&___7FDS_PlayerRepo__6B_;
      (pFVar6->SearchedPlayerNameList).ArrayNum = 0;
      (pFVar6->SearchedPlayerNameList).ArrayMax = 0;
      (pFVar6->PlayerList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->PlayerList).ArrayNum = 0;
      (pFVar6->PlayerList).ArrayMax = 0;
      pFVar8 = pFVar6;
    }
    Inst = pFVar8;
    pUVar7 = UDS_DataManager::GetInst();
    pFVar6 = Inst;
    if (pUVar7 != (UDS_DataManager *)0x0) {
      iVar5 = (pUVar7->RepoArray).ArrayNum;
      piVar1 = &(pUVar7->RepoArray).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pUVar7->RepoArray).AllocatorInstance,piVar1);
      }
      (pUVar7->RepoArray).ArrayNum = iVar5 + 1;
      *(FDS_PlayerRepo **)((pUVar7->RepoArray).AllocatorInstance.Data + (longlong)iVar5 * 8) =
           pFVar8;
      return Inst;
    }
    if (Inst != (FDS_PlayerRepo *)0x0) {
      DestructItems<misc::Player,int>
                ((Player *)(Inst->PlayerList).AllocatorInstance.Data,(Inst->PlayerList).ArrayNum);
      pFVar2 = (pFVar6->PlayerList).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      DestructItems<FString,int>
                ((FString *)(pFVar6->SearchedPlayerNameList).AllocatorInstance.Data,
                 (pFVar6->SearchedPlayerNameList).ArrayNum);
      pFVar2 = (pFVar6->SearchedPlayerNameList).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar6,0x28);
    }
    Inst = (FDS_PlayerRepo *)0x0;
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4219184397653377064>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                       ,0x28,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FDS_PlayerRepo *)(*pcVar3)();
      return pFVar8;
    }
    pFVar8 = &Empty;
  }
  return pFVar8;
}

// GetInst @ 14b8c71d0

FDS_RaidPartyRepo * __cdecl TDS_Singleton<FDS_RaidPartyRepo>::GetInst(void)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FDS_RaidPartyRepo *pFVar4;
  bool bVar5;
  int iVar6;
  FDS_RaidPartyRepo *pFVar7;
  UDS_DataManager *pUVar8;
  
  pFVar7 = Inst;
  if (Inst == (FDS_RaidPartyRepo *)0x0) {
    pFVar7 = ::operator_new(0x98);
    if (pFVar7 == (FDS_RaidPartyRepo *)0x0) {
      pFVar7 = (FDS_RaidPartyRepo *)0x0;
    }
    else {
      pFVar7->_padding_ = 0;
      (pFVar7->RaidPartyInfo).RaidPartyUID = 0;
      *(undefined8 *)&(pFVar7->RaidPartyInfo).DungeonId = 0;
      (pFVar7->RaidPartyInfo).PartyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      (pFVar7->RaidPartyInfo).PartyName.Data.ArrayNum = 0;
      (pFVar7->RaidPartyInfo).PartyName.Data.ArrayMax = 0;
      *(undefined8 *)&(pFVar7->RaidPartyInfo).IsPassword = 0;
      (pFVar7->RaidPartyInfo).Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar7->RaidPartyInfo).Members.ArrayNum = 0;
      (pFVar7->RaidPartyInfo).Members.ArrayMax = 0;
      (pFVar7->RaidPartyInfo).LeaderUID = 0;
      (pFVar7->RaidPartyInfo).IsPublic = false;
      *(undefined3 *)&(pFVar7->RaidPartyInfo).field_0x41 = 0;
      (pFVar7->RaidPartyInfo).MemberCount = 0;
      *(undefined8 *)&(pFVar7->RaidPartyInfo).State = 0;
      (pFVar7->RaidPartyVoteData).RaidPartyUID = 0;
      (pFVar7->RaidPartyVoteData).PlayerUID = 0;
      (pFVar7->RaidPartyVoteData).AgreementCount = 0;
      (pFVar7->RaidPartyVoteData).RejectCount = 0;
      (pFVar7->RaidPartyVoteData).VoteProposerUID = 0;
      (pFVar7->RaidPartyVoteData).VoteStartTime.Ticks = 0;
      *(undefined8 *)&pFVar7->bIsVoteable = 0;
      (pFVar7->Password).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar7->Password).Data.ArrayNum = 0;
      (pFVar7->Password).Data.ArrayMax = 0;
      pFVar7->_padding_ = (longlong)&___7FDS_RaidPartyRepo__6B_;
    }
    Inst = pFVar7;
    pUVar8 = UDS_DataManager::GetInst();
    pFVar4 = Inst;
    if (pUVar8 != (UDS_DataManager *)0x0) {
      iVar6 = (pUVar8->RepoArray).ArrayNum;
      piVar1 = &(pUVar8->RepoArray).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pUVar8->RepoArray).AllocatorInstance,piVar1);
      }
      (pUVar8->RepoArray).ArrayNum = iVar6 + 1;
      *(FDS_RaidPartyRepo **)((pUVar8->RepoArray).AllocatorInstance.Data + (longlong)iVar6 * 8) =
           pFVar7;
      return Inst;
    }
    if (Inst != (FDS_RaidPartyRepo *)0x0) {
      pFVar2 = (Inst->Password).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      DestructItems<FDS_RaidPartyMemberInfo,int>
                ((FDS_RaidPartyMemberInfo *)(pFVar4->RaidPartyInfo).Members.AllocatorInstance.Data,
                 (pFVar4->RaidPartyInfo).Members.ArrayNum);
      pFVar2 = (pFVar4->RaidPartyInfo).Members.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar4->RaidPartyInfo).PartyName.Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar4,0x98);
    }
    Inst = (FDS_RaidPartyRepo *)0x0;
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4219184397653377064>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                       ,0x28,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FDS_RaidPartyRepo *)(*pcVar3)();
      return pFVar7;
    }
    pFVar7 = &Empty;
  }
  return pFVar7;
}

// GetInst @ 14b8c7330

FDS_UIData * __cdecl TDS_Singleton<FDS_UIData>::GetInst(void)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FDS_UIData *pFVar4;
  UDS_DataManager *this;
  
  if (Inst == (FDS_UIData *)0x0) {
    pFVar4 = ::operator_new(0x10);
    if (pFVar4 == (FDS_UIData *)0x0) {
      pFVar4 = (FDS_UIData *)0x0;
    }
    else {
      pFVar4->SelectedEquipItemTID = 0;
      pFVar4->CurrentRingCmdQuickSlotDeckIndex = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_UIData__6B_;
    }
    pcVar1 = *(code **)(pFVar4->_padding_ + 8);
    Inst = pFVar4;
    if (pcVar1 == TDS_DataRepo<FDS_UIData>::Init) {
      this = UDS_DataManager::GetInst();
      cVar2 = '\0';
      if (this != (UDS_DataManager *)0x0) {
        UDS_DataManager::AddRepo(this,(FDS_SingletonInterface *)pFVar4);
        cVar2 = '\x01';
      }
    }
    else {
      cVar2 = (*pcVar1)(pFVar4);
    }
    if (cVar2 == '\0') {
      if (Inst != (FDS_UIData *)0x0) {
        (**(code **)(Inst->_padding_ + 0x18))(Inst,1);
      }
      Inst = (FDS_UIData *)0x0;
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4219184397653377064>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                         ,0x28,"false");
      if (!bVar3) {
        return &Empty;
      }
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDS_UIData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return Inst;
}

// Init @ 14b8c9970

bool __thiscall TDS_Singleton<FDS_PartyRepo>::Init(TDS_Singleton<FDS_PartyRepo> *this)

{
  return true;
}

// Init @ 14b8c9980

bool __thiscall TDS_Singleton<FDS_PlayerRepo>::Init(TDS_Singleton<FDS_PlayerRepo> *this)

{
  return true;
}

// Init @ 14b8c9990

bool __thiscall TDS_Singleton<FDS_UIData>::Init(TDS_Singleton<FDS_UIData> *this)

{
  return true;
}

// OnDestroy @ 14b8d5b90

bool __thiscall TDS_Singleton<FDS_PartyRepo>::OnDestroy(TDS_Singleton<FDS_PartyRepo> *this)

{
  return true;
}

// OnDestroy @ 14b8d5ba0

bool __thiscall TDS_Singleton<FDS_PlayerRepo>::OnDestroy(TDS_Singleton<FDS_PlayerRepo> *this)

{
  return true;
}

// Init @ 14b98cdc0

bool __thiscall TDS_Singleton<FDS_DataRepoManager>::Init(TDS_Singleton<FDS_DataRepoManager> *this)

{
  return true;
}

// OnDestroy @ 14b98cdd0

bool __thiscall
TDS_Singleton<FDS_DataRepoManager>::OnDestroy(TDS_Singleton<FDS_DataRepoManager> *this)

{
  return true;
}

// Destroy @ 14b98cde0

void __thiscall
TDS_Singleton<FDS_DataRepoManager>::Destroy(TDS_Singleton<FDS_DataRepoManager> *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  if (Inst != (FDS_DataRepoManager *)0x0) {
    cVar2 = (**(code **)(Inst->_padding_ + 0x10))();
    if (cVar2 == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4219184397653377082>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                         ,0x3a,"false");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (Inst != (FDS_DataRepoManager *)0x0) {
      (**(code **)(Inst->_padding_ + 0x18))(Inst,1);
    }
    Inst = (FDS_DataRepoManager *)0x0;
    Empty.RepoArray.ArrayNum = 0;
    if (Empty.RepoArray.ArrayMax == 0) {
      Empty.RepoArray.ArrayMax = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,Empty.RepoArray.ArrayMax,&Empty.RepoArray.AllocatorInstance,0,
               &Empty.RepoArray.ArrayMax);
  }
  return;
}

