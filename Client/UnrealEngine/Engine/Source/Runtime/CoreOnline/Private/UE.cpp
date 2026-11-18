// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 22

// ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> @ 144615170

FString * __cdecl
UE::Online::ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *pIVar1;
  FOnlineIdRegistryRegistry *this;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  FString local_28;
  FString local_18;
  
  this = FOnlineIdRegistryRegistry::Get();
  pFVar4 = (FScriptContainerElement *)0x0;
  pFVar2 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(this,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar2 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) ||
     (pIVar1 = pFVar2->Registry,
     pIVar1 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)) {
    pFVar3 = FOnlineForeignAccountIdRegistry::ToLogString
                       ((this->ForeignAccountIdRegistry).Ptr,&local_28,param_1);
    if (&local_18 != pFVar3) {
      pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
  }
  else {
    pFVar3 = (FString *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,&local_28,param_1);
    if (&local_18 != pFVar3) {
      pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d (%s)");
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return __return_storage_ptr__;
}

// ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_> @ 144615290

FString * __cdecl
UE::Online::ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *param_1)

{
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d");
  return __return_storage_ptr__;
}

// ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLoginContinuation>_> @ 1446152e0

FString * __cdecl
UE::Online::
ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLoginContinuation>_>
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FLoginContinuation> *param_1)

{
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d");
  return __return_storage_ptr__;
}

// ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_> @ 144615330

FString * __cdecl
UE::Online::ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *pIVar1;
  FOnlineIdRegistryRegistry *pFVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *pFVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  void *local_28 [2];
  undefined8 local_18 [2];
  
  pFVar2 = FOnlineIdRegistryRegistry::Get();
  pvVar5 = (void *)0x0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>_>
           ::Find(&pFVar2->SessionIdRegistries,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  pvVar6 = pvVar5;
  if ((pFVar3 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0) &&
     (pIVar1 = pFVar3->Registry, pvVar6 = (void *)0x0,
     pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,local_28,param_1);
    if (local_18 != puVar4) {
      pvVar5 = (void *)*puVar4;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    pvVar6 = pvVar5;
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d (%s)");
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return __return_storage_ptr__;
}

// ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>_> @ 144615420

FString * __cdecl
UE::Online::ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>_>
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *pIVar1;
  FOnlineIdRegistryRegistry *pFVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *pFVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  void *local_28 [2];
  undefined8 local_18 [2];
  
  pFVar2 = FOnlineIdRegistryRegistry::Get();
  pvVar5 = (void *)0x0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>_>
           ::Find(&pFVar2->SessionInviteIdRegistries,
                  *(EOnlineServices *)((longlong)&param_1->Value + 3));
  pvVar6 = pvVar5;
  if ((pFVar3 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0
      ) && (pIVar1 = pFVar3->Registry, pvVar6 = (void *)0x0,
           pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,local_28,param_1);
    if (local_18 != puVar4) {
      pvVar5 = (void *)*puVar4;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    pvVar6 = pvVar5;
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d (%s)");
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return __return_storage_ptr__;
}

// ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FVerifiedAuthSession>_> @ 144615510

FString * __cdecl
UE::Online::
ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FVerifiedAuthSession>_>
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FVerifiedAuthSession> *param_1)

{
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d");
  return __return_storage_ptr__;
}

// ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FVerifiedAuthTicket>_> @ 144615560

FString * __cdecl
UE::Online::
ToLogStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FVerifiedAuthTicket>_>
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FVerifiedAuthTicket> *param_1)

{
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d");
  return __return_storage_ptr__;
}

// ToStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> @ 1446155b0

FString * __cdecl
UE::Online::ToStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *pIVar1;
  FScriptContainerElement *pFVar2;
  FOnlineIdRegistryRegistry *this;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar3;
  FString *pFVar4;
  FString local_18;
  
  this = FOnlineIdRegistryRegistry::Get();
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(this,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar3 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) ||
     (pIVar1 = pFVar3->Registry,
     pIVar1 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)) {
    pFVar4 = FOnlineForeignAccountIdRegistry::ToString
                       ((this->ForeignAccountIdRegistry).Ptr,&local_18,param_1);
  }
  else {
    pFVar4 = (FString *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_18,param_1);
  }
  if (__return_storage_ptr__ != pFVar4) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_> @ 144615680

FString * __cdecl
UE::Online::ToStringImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *pIVar1;
  FScriptContainerElement *pFVar2;
  FOnlineIdRegistryRegistry *pFVar3;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *pFVar4;
  FString *pFVar5;
  void *local_18 [2];
  
  pFVar3 = FOnlineIdRegistryRegistry::Get();
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar4 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>_>
           ::Find(&pFVar3->SessionIdRegistries,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar4 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0) &&
     (pIVar1 = pFVar4->Registry,
     pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *)0x0)) {
    pFVar5 = (FString *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_18,param_1);
    if (__return_storage_ptr__ != pFVar5) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return __return_storage_ptr__;
}

// LexFromString @ 144617620

void __cdecl UE::Online::LexFromString(EOnlineServices *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  EOnlineServices EVar5;
  uint uVar6;
  ulonglong uVar7;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Null");
  if (iVar3 == 0) {
    *param_1 = Null;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Epic");
  if (iVar3 == 0) {
    *param_1 = Epic;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Xbox");
  if (iVar3 == 0) {
    *param_1 = Xbox;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"PSN");
  if (iVar3 == 0) {
    *param_1 = PSN;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Nintendo");
  if (iVar3 == 0) {
    *param_1 = Nintendo;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_5");
  if (iVar3 == 0) {
    *param_1 = Reserved_5;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Steam");
  if (iVar3 == 0) {
    *param_1 = Steam;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Google");
  if (iVar3 == 0) {
    *param_1 = Google;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"GooglePlay");
  if (iVar3 == 0) {
    *param_1 = GooglePlay;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Apple");
  if (iVar3 == 0) {
    *param_1 = Apple;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"AppleGameKit");
  if (iVar3 == 0) {
    *param_1 = AppleGameKit;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Samsung");
  if (iVar3 == 0) {
    *param_1 = Samsung;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Oculus");
  if (iVar3 == 0) {
    *param_1 = Oculus;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Tencent");
  if (iVar3 == 0) {
    *param_1 = Tencent;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"EpicAccount");
  if (iVar3 == 0) {
    *param_1 = EpicAccount;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"EpicGame");
  if (iVar3 == 0) {
    *param_1 = EpicGame;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_16");
  if (iVar3 == 0) {
    *param_1 = Reserved_16;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_17");
  if (iVar3 == 0) {
    *param_1 = Reserved_17;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_18");
  if (iVar3 == 0) {
    *param_1 = Reserved_18;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_19");
  if (iVar3 == 0) {
    *param_1 = Reserved_19;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_20");
  if (iVar3 == 0) {
    *param_1 = Reserved_20;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_21");
  if (iVar3 == 0) {
    *param_1 = Reserved_21;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_22");
  if (iVar3 == 0) {
    *param_1 = Reserved_22;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_23");
  if (iVar3 == 0) {
    *param_1 = Reserved_23;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_24");
  if (iVar3 == 0) {
    *param_1 = Reserved_24;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_25");
  if (iVar3 == 0) {
    *param_1 = Reserved_25;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_26");
  if (iVar3 == 0) {
    *param_1 = Reserved_26;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Reserved_27");
  if (iVar3 == 0) {
    *param_1 = Reserved_27;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"GameDefined_0");
  if (iVar3 == 0) {
    *param_1 = GameDefined_0;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"GameDefined_1");
  if (iVar3 == 0) {
    *param_1 = GameDefined_1;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"GameDefined_2");
  if (iVar3 == 0) {
    *param_1 = GameDefined_2;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"GameDefined_3");
  if (iVar3 == 0) {
    *param_1 = GameDefined_3;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"None");
  if (iVar3 == 0) {
    *param_1 = None;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Platform");
  if (iVar3 == 0) {
    *param_1 = Platform;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Default");
  if (iVar3 == 0) {
    *param_1 = Default;
    return;
  }
  uVar7 = 0;
  do {
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,OnlineServicesAliasArray[uVar7]);
    if (iVar3 == 0) {
      EVar5 = (char)uVar7 + GameDefined_0;
      goto LAB_144617bf5;
    }
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while (uVar6 < 4);
  sVar4 = wcslen(param_2);
  if ((int)sVar4 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCString::Strlen(InStr) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\CoreOnline.cpp"
                       ,0xed,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar5 = None;
LAB_144617bf5:
  *param_1 = EVar5;
  return;
}

// LexToString @ 144617c20

wchar_t * __cdecl UE::Online::LexToString(EOnlineServices param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if ((byte)(param_1 - GameDefined_0) < 5) {
    if ((3 < param_1 - 0x1c) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < OnlineServicesAliasArraySize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\CoreOnline.cpp"
                           ,0x21,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    if (OnlineServicesAliasArray[param_1 - 0x1c][0] != L'\0') {
      return OnlineServicesAliasArray[param_1 - 0x1c];
    }
  }
  if (param_1 < Platform) {
    if (param_1 == None) goto LAB_144617f28;
    switch(param_1) {
    case Null:
      return L"Null";
    case Epic:
      return L"Epic";
    case Xbox:
      return L"Xbox";
    case PSN:
      return L"PSN";
    case Nintendo:
      return L"Nintendo";
    case Reserved_5:
      return L"Reserved_5";
    case Steam:
      return L"Steam";
    case Google:
      return L"Google";
    case GooglePlay:
      return L"GooglePlay";
    case Apple:
      return L"Apple";
    case AppleGameKit:
      return L"AppleGameKit";
    case Samsung:
      return L"Samsung";
    case Oculus:
      return L"Oculus";
    case Tencent:
      return L"Tencent";
    case EpicAccount:
      return L"EpicAccount";
    case EpicGame:
      return L"EpicGame";
    case Reserved_16:
      return L"Reserved_16";
    case Reserved_17:
      return L"Reserved_17";
    case Reserved_18:
      return L"Reserved_18";
    case Reserved_19:
      return L"Reserved_19";
    case Reserved_20:
      return L"Reserved_20";
    case Reserved_21:
      return L"Reserved_21";
    case Reserved_22:
      return L"Reserved_22";
    case Reserved_23:
      return L"Reserved_23";
    case Reserved_24:
      return L"Reserved_24";
    case Reserved_25:
      return L"Reserved_25";
    case Reserved_26:
      return L"Reserved_26";
    case Reserved_27:
      return L"Reserved_27";
    case GameDefined_0:
      return L"GameDefined_0";
    case GameDefined_1:
      return L"GameDefined_1";
    case GameDefined_2:
      return L"GameDefined_2";
    case GameDefined_3:
      return L"GameDefined_3";
    }
  }
  else {
    if (param_1 == Platform) {
      return L"Platform";
    }
    if (param_1 == Default) {
      return L"Default";
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\CoreOnline.cpp"
                     ,0x4b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
LAB_144617f28:
  return L"None";
}

// RegisterAliasForGameDefined @ 1446191f0

void __cdecl UE::Online::RegisterAliasForGameDefined(EOnlineServices param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  uint uVar4;
  
  uVar4 = param_1 - 0x1c;
  if (3 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < OnlineServicesAliasArraySize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\CoreOnline.cpp"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  sVar3 = wcslen(param_2);
  if (0xf < (int)sVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCString::Strlen(InStr) < 16",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\CoreOnline.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  wcsncpy(OnlineServicesAliasArray[uVar4],param_2,0xf);
  OnlineServicesAliasArray[uVar4][0xf] = L'\0';
  return;
}

// TEMP_ShouldUseEpicModularPlugins @ 144619f70

bool __cdecl UE::Online::TEMP_ShouldUseEpicModularPlugins(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  bool local_res8 [32];
  
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"EnableEOSSplitPlugins");
  if (bVar1) {
    return true;
  }
  local_res8[0] = false;
  FConfigCacheIni::GetBool
            (GConfig,L"CoreOnline",L"bShouldUseEpicModularPlugins",local_res8,&GEngineIni);
  return local_res8[0];
}

// ToLogString @ 14461a9b0

FString * __cdecl
UE::Online::ToLogString
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *pIVar1;
  FOnlineIdRegistryRegistry *this;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  FString local_28;
  FString local_18;
  
  this = FOnlineIdRegistryRegistry::Get();
  pFVar4 = (FScriptContainerElement *)0x0;
  pFVar2 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(this,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar2 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) ||
     (pIVar1 = pFVar2->Registry,
     pIVar1 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)) {
    pFVar3 = FOnlineForeignAccountIdRegistry::ToLogString
                       ((this->ForeignAccountIdRegistry).Ptr,&local_28,param_1);
    if (&local_18 != pFVar3) {
      pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
  }
  else {
    pFVar3 = (FString *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,&local_28,param_1);
    if (&local_18 != pFVar3) {
      pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d (%s)");
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return __return_storage_ptr__;
}

// ToLogString @ 14461aad0

FString * __cdecl
UE::Online::ToLogString
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *param_1)

{
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d");
  return __return_storage_ptr__;
}

// ToLogString @ 14461ab20

FString * __cdecl
UE::Online::ToLogString
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FLoginContinuation> *param_1)

{
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d");
  return __return_storage_ptr__;
}

// ToLogString @ 14461ab70

FString * __cdecl
UE::Online::ToLogString
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *pIVar1;
  FOnlineIdRegistryRegistry *pFVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *pFVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  void *local_28 [2];
  undefined8 local_18 [2];
  
  pFVar2 = FOnlineIdRegistryRegistry::Get();
  pvVar5 = (void *)0x0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>_>
           ::Find(&pFVar2->SessionIdRegistries,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  pvVar6 = pvVar5;
  if ((pFVar3 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0) &&
     (pIVar1 = pFVar3->Registry, pvVar6 = (void *)0x0,
     pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,local_28,param_1);
    if (local_18 != puVar4) {
      pvVar5 = (void *)*puVar4;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    pvVar6 = pvVar5;
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d (%s)");
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return __return_storage_ptr__;
}

// ToLogString @ 14461ac60

FString * __cdecl
UE::Online::ToLogString
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *pIVar1;
  FOnlineIdRegistryRegistry *pFVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *pFVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  void *local_28 [2];
  undefined8 local_18 [2];
  
  pFVar2 = FOnlineIdRegistryRegistry::Get();
  pvVar5 = (void *)0x0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>_>
           ::Find(&pFVar2->SessionInviteIdRegistries,
                  *(EOnlineServices *)((longlong)&param_1->Value + 3));
  pvVar6 = pvVar5;
  if ((pFVar3 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0
      ) && (pIVar1 = pFVar3->Registry, pvVar6 = (void *)0x0,
           pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,local_28,param_1);
    if (local_18 != puVar4) {
      pvVar5 = (void *)*puVar4;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    pvVar6 = pvVar5;
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d (%s)");
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return __return_storage_ptr__;
}

// ToLogString @ 14461ad50

FString * __cdecl
UE::Online::ToLogString
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FVerifiedAuthSession> *param_1)

{
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d");
  return __return_storage_ptr__;
}

// ToLogString @ 14461ada0

FString * __cdecl
UE::Online::ToLogString
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FVerifiedAuthTicket> *param_1)

{
  LexToString((EOnlineServices)(param_1->Value >> 0x18));
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d");
  return __return_storage_ptr__;
}

// ToString @ 14461b810

FString * __cdecl
UE::Online::ToString
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *pIVar1;
  FScriptContainerElement *pFVar2;
  FOnlineIdRegistryRegistry *this;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar3;
  FString *pFVar4;
  FString local_18;
  
  this = FOnlineIdRegistryRegistry::Get();
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(this,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar3 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) ||
     (pIVar1 = pFVar3->Registry,
     pIVar1 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)) {
    pFVar4 = FOnlineForeignAccountIdRegistry::ToString
                       ((this->ForeignAccountIdRegistry).Ptr,&local_18,param_1);
  }
  else {
    pFVar4 = (FString *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_18,param_1);
  }
  if (__return_storage_ptr__ != pFVar4) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14461b8e0

FString * __cdecl
UE::Online::ToString
          (FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *pIVar1;
  FScriptContainerElement *pFVar2;
  FOnlineIdRegistryRegistry *pFVar3;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *pFVar4;
  FString *pFVar5;
  void *local_18 [2];
  
  pFVar3 = FOnlineIdRegistryRegistry::Get();
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar4 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>_>
           ::Find(&pFVar3->SessionIdRegistries,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar4 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0) &&
     (pIVar1 = pFVar4->Registry,
     pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *)0x0)) {
    pFVar5 = (FString *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_18,param_1);
    if (__return_storage_ptr__ != pFVar5) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return __return_storage_ptr__;
}

