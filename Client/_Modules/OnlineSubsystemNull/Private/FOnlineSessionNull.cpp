// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 64

// ~FOnlineSessionNull @ 14ed12dc0

void __thiscall FOnlineSessionNull::~FOnlineSessionNull(FOnlineSessionNull *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FOnlineSessionNull__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentSessionSearch).SharedReferenceCount.ReferenceController);
  DestructItems<FNamedOnlineSession,int>
            ((FNamedOnlineSession *)(this->Sessions).AllocatorInstance.Data,
             (this->Sessions).ArrayNum);
  pFVar1 = (this->Sessions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SessionLock);
  FLANSession::~FLANSession(&this->LANSessionManager);
  IOnlineSession::~IOnlineSession((IOnlineSession *)this);
  return;
}

// AddNamedSession @ 14ed1a380

FNamedOnlineSession * __thiscall
FOnlineSessionNull::AddNamedSession(FOnlineSessionNull *this,FName param_1,FOnlineSession *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNamedOnlineSession *pFVar5;
  
  lpCriticalSection = &this->SessionLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNamedOnlineSession *)(*pcVar2)();
      return pFVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar4 = (this->Sessions).ArrayNum;
  piVar1 = &(this->Sessions).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x150,8,&(this->Sessions).AllocatorInstance,piVar1);
  }
  (this->Sessions).ArrayNum = iVar4 + 1;
  pFVar5 = FNamedOnlineSession::FNamedOnlineSession
                     ((FNamedOnlineSession *)
                      ((this->Sessions).AllocatorInstance.Data + (longlong)iVar4 * 0x150),param_1,
                      param_2);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pFVar5;
}

// AddNamedSession @ 14ed1a460

FNamedOnlineSession * __thiscall
FOnlineSessionNull::AddNamedSession
          (FOnlineSessionNull *this,FName param_1,FOnlineSessionSettings *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNamedOnlineSession *pFVar5;
  
  lpCriticalSection = &this->SessionLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNamedOnlineSession *)(*pcVar2)();
      return pFVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar4 = (this->Sessions).ArrayNum;
  piVar1 = &(this->Sessions).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x150,8,&(this->Sessions).AllocatorInstance,piVar1);
  }
  (this->Sessions).ArrayNum = iVar4 + 1;
  pFVar5 = FNamedOnlineSession::FNamedOnlineSession
                     ((FNamedOnlineSession *)
                      ((this->Sessions).AllocatorInstance.Data + (longlong)iVar4 * 0x150),param_1,
                      param_2);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pFVar5;
}

// AppendSessionSettingsToPacket @ 14ed1b680

void __thiscall
FOnlineSessionNull::AppendSessionSettingsToPacket
          (FOnlineSessionNull *this,FNboSerializeToBufferNull *param_1,
          FOnlineSessionSettings *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  FScriptContainerElement FVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FNboSerializeToBuffer *pFVar11;
  longlong lVar12;
  FName *this_00;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  FOnlineKeyValuePairs<FName,FOnlineSessionSetting> *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  FString local_88 [2];
  undefined4 local_5c;
  undefined4 local_3c;
  
  if (param_1->field_0x14 == '\0') {
    uVar9 = *(uint *)&param_1->field_0x10;
    if (*(uint *)&param_1->field_0x8 < uVar9 + 4) goto LAB_14ed1b82c;
    uVar4 = *(undefined1 *)((longlong)&param_2->NumPublicConnections + 3);
    uVar13 = 0;
    if ((int)uVar9 < (int)*(uint *)&param_1->field_0x8) {
      uVar13 = ~uVar9 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined1 *)((longlong)(int)uVar9 + *(longlong *)param_1) = uVar4;
    uVar13 = *(int *)&param_1->field_0x10 + 1;
    uVar4 = *(undefined1 *)((longlong)&param_2->NumPublicConnections + 2);
    uVar9 = 0;
    if ((int)uVar13 < *(int *)&param_1->field_0x8) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined1 *)((longlong)(int)uVar13 + *(longlong *)param_1) = uVar4;
    uVar13 = *(int *)&param_1->field_0x10 + 2;
    uVar4 = *(undefined1 *)((longlong)&param_2->NumPublicConnections + 1);
    uVar9 = 0;
    if ((int)uVar13 < *(int *)&param_1->field_0x8) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined1 *)((longlong)(int)uVar13 + *(longlong *)param_1) = uVar4;
    uVar13 = *(int *)&param_1->field_0x10 + 3;
    iVar7 = param_2->NumPublicConnections;
    uVar9 = 0;
    if ((int)uVar13 < *(int *)&param_1->field_0x8) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(char *)((longlong)(int)uVar13 + *(longlong *)param_1) = (char)iVar7;
    *(int *)&param_1->field_0x10 = *(int *)&param_1->field_0x10 + 4;
  }
  else {
LAB_14ed1b82c:
    param_1->field_0x14 = 1;
  }
  pFVar11 = ::operator<<((FNboSerializeToBuffer *)param_1,(uint *)&param_2->NumPrivateConnections);
  if (pFVar11->bHasOverflowed == false) {
    uVar9 = (pFVar11->Data).ArrayNum;
    uVar13 = pFVar11->NumBytes;
    if (uVar9 < uVar13 + 1) goto LAB_14ed1b8ab;
    FVar5 = (FScriptContainerElement)param_2->bShouldAdvertise;
    pFVar11->NumBytes = uVar13 + 1;
    uVar10 = 0;
    if ((int)uVar13 < (int)uVar9) {
      uVar10 = ~uVar13 >> 0x1f;
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
    (pFVar11->Data).AllocatorInstance.Data[(int)uVar13] = FVar5;
  }
  else {
LAB_14ed1b8ab:
    pFVar11->bHasOverflowed = true;
  }
  if (pFVar11->bHasOverflowed == false) {
    uVar9 = pFVar11->NumBytes;
    uVar13 = (pFVar11->Data).ArrayNum;
    if (uVar13 < uVar9 + 1) goto LAB_14ed1b91a;
    FVar5 = (FScriptContainerElement)param_2->bIsLANMatch;
    pFVar11->NumBytes = uVar9 + 1;
    uVar10 = 0;
    if ((int)uVar9 < (int)uVar13) {
      uVar10 = ~uVar9 >> 0x1f;
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
    (pFVar11->Data).AllocatorInstance.Data[(int)uVar9] = FVar5;
  }
  else {
LAB_14ed1b91a:
    pFVar11->bHasOverflowed = true;
  }
  if (pFVar11->bHasOverflowed == false) {
    uVar9 = pFVar11->NumBytes;
    uVar13 = (pFVar11->Data).ArrayNum;
    if (uVar13 < uVar9 + 1) goto LAB_14ed1b986;
    FVar5 = (FScriptContainerElement)param_2->bIsDedicated;
    pFVar11->NumBytes = uVar9 + 1;
    uVar10 = 0;
    if ((int)uVar9 < (int)uVar13) {
      uVar10 = ~uVar9 >> 0x1f;
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
    (pFVar11->Data).AllocatorInstance.Data[(int)uVar9] = FVar5;
  }
  else {
LAB_14ed1b986:
    pFVar11->bHasOverflowed = true;
  }
  if (pFVar11->bHasOverflowed == false) {
    uVar9 = pFVar11->NumBytes;
    uVar13 = (pFVar11->Data).ArrayNum;
    if (uVar13 < uVar9 + 1) goto LAB_14ed1b9f2;
    FVar5 = (FScriptContainerElement)param_2->bUsesStats;
    pFVar11->NumBytes = uVar9 + 1;
    uVar10 = 0;
    if ((int)uVar9 < (int)uVar13) {
      uVar10 = ~uVar9 >> 0x1f;
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
    (pFVar11->Data).AllocatorInstance.Data[(int)uVar9] = FVar5;
  }
  else {
LAB_14ed1b9f2:
    pFVar11->bHasOverflowed = true;
  }
  if (pFVar11->bHasOverflowed == false) {
    uVar9 = pFVar11->NumBytes;
    uVar13 = (pFVar11->Data).ArrayNum;
    if (uVar13 < uVar9 + 1) goto LAB_14ed1ba5e;
    FVar5 = (FScriptContainerElement)param_2->bAllowJoinInProgress;
    pFVar11->NumBytes = uVar9 + 1;
    uVar10 = 0;
    if ((int)uVar9 < (int)uVar13) {
      uVar10 = ~uVar9 >> 0x1f;
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
    (pFVar11->Data).AllocatorInstance.Data[(int)uVar9] = FVar5;
  }
  else {
LAB_14ed1ba5e:
    pFVar11->bHasOverflowed = true;
  }
  if (pFVar11->bHasOverflowed == false) {
    uVar9 = pFVar11->NumBytes;
    uVar13 = (pFVar11->Data).ArrayNum;
    if (uVar13 < uVar9 + 1) goto LAB_14ed1baca;
    FVar5 = (FScriptContainerElement)param_2->bAllowInvites;
    pFVar11->NumBytes = uVar9 + 1;
    uVar10 = 0;
    if ((int)uVar9 < (int)uVar13) {
      uVar10 = ~uVar9 >> 0x1f;
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
    (pFVar11->Data).AllocatorInstance.Data[(int)uVar9] = FVar5;
  }
  else {
LAB_14ed1baca:
    pFVar11->bHasOverflowed = true;
  }
  if (pFVar11->bHasOverflowed == false) {
    uVar9 = pFVar11->NumBytes;
    uVar13 = (pFVar11->Data).ArrayNum;
    if (uVar13 < uVar9 + 1) goto LAB_14ed1bb36;
    FVar5 = (FScriptContainerElement)param_2->bUsesPresence;
    pFVar11->NumBytes = uVar9 + 1;
    uVar10 = 0;
    if ((int)uVar9 < (int)uVar13) {
      uVar10 = ~uVar9 >> 0x1f;
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
    (pFVar11->Data).AllocatorInstance.Data[(int)uVar9] = FVar5;
  }
  else {
LAB_14ed1bb36:
    pFVar11->bHasOverflowed = true;
  }
  if (pFVar11->bHasOverflowed == false) {
    uVar9 = pFVar11->NumBytes;
    uVar13 = (pFVar11->Data).ArrayNum;
    if (uVar13 < uVar9 + 1) goto LAB_14ed1bba2;
    FVar5 = (FScriptContainerElement)param_2->bAllowJoinViaPresence;
    pFVar11->NumBytes = uVar9 + 1;
    uVar10 = 0;
    if ((int)uVar9 < (int)uVar13) {
      uVar10 = ~uVar9 >> 0x1f;
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
    (pFVar11->Data).AllocatorInstance.Data[(int)uVar9] = FVar5;
  }
  else {
LAB_14ed1bba2:
    pFVar11->bHasOverflowed = true;
  }
  if (pFVar11->bHasOverflowed == false) {
    uVar9 = pFVar11->NumBytes;
    uVar13 = (pFVar11->Data).ArrayNum;
    if (uVar13 < uVar9 + 1) goto LAB_14ed1bc0e;
    FVar5 = (FScriptContainerElement)param_2->bAllowJoinViaPresenceFriendsOnly;
    pFVar11->NumBytes = uVar9 + 1;
    uVar10 = 0;
    if ((int)uVar9 < (int)uVar13) {
      uVar10 = ~uVar9 >> 0x1f;
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
    (pFVar11->Data).AllocatorInstance.Data[(int)uVar9] = FVar5;
  }
  else {
LAB_14ed1bc0e:
    pFVar11->bHasOverflowed = true;
  }
  if (pFVar11->bHasOverflowed == false) {
    uVar9 = pFVar11->NumBytes;
    uVar13 = (pFVar11->Data).ArrayNum;
    if (uVar13 < uVar9 + 1) goto LAB_14ed1bc7a;
    FVar5 = (FScriptContainerElement)param_2->bAntiCheatProtected;
    pFVar11->NumBytes = uVar9 + 1;
    uVar10 = 0;
    if ((int)uVar9 < (int)uVar13) {
      uVar10 = ~uVar9 >> 0x1f;
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
    (pFVar11->Data).AllocatorInstance.Data[(int)uVar9] = FVar5;
  }
  else {
LAB_14ed1bc7a:
    pFVar11->bHasOverflowed = true;
  }
  ::operator<<(pFVar11,(uint *)&param_2->BuildUniqueId);
  iVar7 = *(int *)&(param_2->Settings).field_0x28;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Settings).field_0x10;
  iVar15 = 0;
  local_e0 = 1;
  TStack_d0._padding_._0_4_ = 0;
  iVar14 = 0;
  TStack_d0._padding_._4_4_ = 1;
  TStack_d0.CurrentBitIndex = 0;
  if (iVar7 != 0) {
    puVar16 = *(uint **)&(param_2->Settings).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_d0.Array;
    }
    TStack_d0._padding_._4_4_ = *puVar16;
    while (TStack_d0._padding_._4_4_ == 0) {
      lVar12 = (longlong)(int)TStack_d0._padding_;
      iVar14 = iVar14 + 0x20;
      TStack_d0._padding_._0_4_ = (int)TStack_d0._padding_ + 1;
      TStack_d0._padding_._4_4_ = 1;
      TStack_d0.CurrentBitIndex = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)TStack_d0._padding_)
      goto LAB_14ed1bd20;
      TStack_d0._padding_._4_4_ = puVar16[lVar12 + 1];
    }
    TStack_d0._padding_._4_4_ = -TStack_d0._padding_._4_4_ & TStack_d0._padding_._4_4_;
    uVar3 = (ulonglong)TStack_d0._padding_._4_4_ * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    TStack_d0.CurrentBitIndex = iVar14 + -1 + (int)lVar12;
    if (iVar7 < TStack_d0.CurrentBitIndex) {
      TStack_d0.CurrentBitIndex = iVar7;
    }
  }
LAB_14ed1bd20:
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._28_4_ = local_5c;
  TStack_d0.BaseBitIndex = iVar14;
  if (TStack_d0.CurrentBitIndex < iVar7) {
    do {
      iVar7 = iVar15 + 1;
      if (*(byte *)((longlong)TStack_d0.CurrentBitIndex * 0x38 + 0x28 +
                   *(longlong *)&param_2->Settings) < 2) {
        iVar7 = iVar15;
      }
      iVar15 = iVar7;
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
  }
  if (param_1->field_0x14 == '\0') {
    uVar9 = *(uint *)&param_1->field_0x10;
    puVar1 = &param_1->field_0x10;
    puVar2 = &param_1->field_0x8;
    if (uVar9 + 4 <= *(uint *)&param_1->field_0x8) {
      uVar13 = 0;
      if ((int)uVar9 < (int)*(uint *)&param_1->field_0x8) {
        uVar13 = ~uVar9 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(char *)((longlong)(int)uVar9 + *(longlong *)param_1) = (char)((uint)iVar15 >> 0x18);
      uVar13 = *(int *)puVar1 + 1;
      uVar9 = 0;
      if ((int)uVar13 < *(int *)puVar2) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(char *)((longlong)(int)uVar13 + *(longlong *)param_1) = (char)((uint)iVar15 >> 0x10);
      uVar13 = *(int *)puVar1 + 2;
      uVar9 = 0;
      if ((int)uVar13 < *(int *)puVar2) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(char *)((longlong)(int)uVar13 + *(longlong *)param_1) = (char)((uint)iVar15 >> 8);
      uVar13 = *(int *)puVar1 + 3;
      uVar9 = 0;
      if ((int)uVar13 < *(int *)puVar2) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(char *)((longlong)(int)uVar13 + *(longlong *)param_1) = (char)iVar15;
      *(int *)puVar1 = *(int *)puVar1 + 4;
      goto LAB_14ed1bf75;
    }
  }
  param_1->field_0x14 = 1;
LAB_14ed1bf75:
  local_b0 = &param_2->Settings;
  iVar14 = 0;
  iVar7 = *(int *)&(param_2->Settings).field_0x28;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Settings).field_0x10;
  iVar15 = 0;
  TStack_a8.CurrentBitIndex = 0;
  if (iVar7 != 0) {
    puVar16 = *(uint **)&(param_2->Settings).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_a8.Array;
    }
    uVar9 = *puVar16;
    while (uVar9 == 0) {
      lVar12 = (longlong)iVar14;
      iVar15 = iVar15 + 0x20;
      iVar14 = iVar14 + 1;
      TStack_a8.CurrentBitIndex = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ed1bff0;
      uVar9 = puVar16[lVar12 + 1];
    }
    local_e0 = -uVar9 & uVar9;
    uVar3 = (ulonglong)local_e0 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    TStack_a8.CurrentBitIndex = iVar15 + -1 + (int)lVar12;
    if (iVar7 < TStack_a8.CurrentBitIndex) {
      TStack_a8.CurrentBitIndex = iVar7;
    }
  }
LAB_14ed1bff0:
  TStack_a8._padding_ = CONCAT44(local_e0,iVar14);
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  TStack_a8._28_4_ = local_3c;
  TStack_a8.BaseBitIndex = iVar15;
  if (TStack_a8.CurrentBitIndex < iVar7) {
    do {
      this_00 = (FName *)(*(longlong *)local_b0 + (longlong)TStack_a8.CurrentBitIndex * 0x38);
      if (1 < (byte)this_00[5].ComparisonIndex.Value) {
        ::FName::ToString(this_00,local_88);
        ::operator<<((FNboSerializeToBuffer *)param_1,local_88);
        if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
        }
        ::operator<<((FNboSerializeToBufferOSS *)param_1,(FVariantData *)(this_00 + 1));
        if (param_1->field_0x14 == '\0') {
          uVar9 = *(uint *)&param_1->field_0x10;
          if (uVar9 + 1 <= *(uint *)&param_1->field_0x8) {
            uVar13 = this_00[5].ComparisonIndex.Value;
            *(uint *)&param_1->field_0x10 = uVar9 + 1;
            uVar10 = 0;
            if ((int)uVar9 < (int)*(uint *)&param_1->field_0x8) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(char *)((longlong)(int)uVar9 + *(longlong *)param_1) = (char)uVar13;
            goto LAB_14ed1c108;
          }
        }
        param_1->field_0x14 = 1;
      }
LAB_14ed1c108:
      TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    } while (TStack_a8.CurrentBitIndex < (TStack_a8.Array)->NumBits);
  }
  return;
}

// AppendSessionToPacket @ 14ed1c150

void __thiscall
FOnlineSessionNull::AppendSessionToPacket
          (FOnlineSessionNull *this,FNboSerializeToBufferNull *param_1,FOnlineSession *param_2)

{
  FUniqueNetId *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FOnlineSessionInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FNboSerializeToBuffer *pFVar8;
  FName *pFVar9;
  undefined1 local_res8 [8];
  void *local_28 [2];
  
  if ((param_2->OwningUserId).Object == (FUniqueNetId *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = (param_2->OwningUserId).Object;
  pFVar7 = (FString *)(**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,local_28);
  pFVar8 = ::operator<<((FNboSerializeToBuffer *)param_1,pFVar7);
  pFVar8 = ::operator<<(pFVar8,&param_2->OwningUserName);
  pFVar8 = ::operator<<(pFVar8,(uint *)&param_2->NumOpenPrivateConnections);
  ::operator<<(pFVar8,(uint *)&param_2->NumOpenPublicConnections);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  pFVar9 = (FName *)(**(code **)(this->NullSubsystem->_padding_ + 0x18))
                              (this->NullSubsystem,local_res8);
  iVar6 = GetPortFromNetDriver(*pFVar9);
  pTVar2 = (param_2->SessionInfo).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_2->SessionInfo).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar3 != (FOnlineSessionInfo *)0x0) && (pFVar3[1] != (FOnlineSessionInfo)0x0)) {
    (**(code **)(*(longlong *)pFVar3[1] + 0x28))(pFVar3[1],iVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar2 = (param_2->SessionInfo).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_2->SessionInfo).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar3 == (FOnlineSessionInfo *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pFVar3[1] == (FOnlineSessionInfo)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SessionInfo.HostAddr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\NboSerializerNull.h"
                       ,0x1f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  ::operator<<((FNboSerializeToBuffer *)param_1,(FString *)((longlong)pFVar3[3] + 0x18));
  if (pFVar3[1] == (FOnlineSessionInfo)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  ::operator<<((FNboSerializeToBuffer *)param_1,(FInternetAddr *)pFVar3[1]);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  AppendSessionSettingsToPacket(this,param_1,&param_2->SessionSettings);
  return;
}

// CancelFindSessions @ 14ed1cd30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineSessionNull::CancelFindSessions(FOnlineSessionNull *this)

{
  TSharedPtr<FOnlineSessionSearch,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  FString local_18;
  
  pTVar1 = &this->CurrentSessionSearch;
  if ((pTVar1->Object == (FOnlineSessionSearch *)0x0) || (pTVar1->Object->SearchState != InProgress)
     ) {
    if (2 < (byte)LogOnlineSession._0_1_) {
      ::FString::PrintfImpl(&local_18,L"Can\'t cancel a search that isn\'t in progress");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(this->_padding_ + 0x1d8))(this,1);
    return false;
  }
  if ((this->LANSessionManager).LanBeaconState == Searching) {
    FLANSession::StopLANSession(&this->LANSessionManager);
  }
  UpdateLANStatus(this);
  if ((pTVar1->Object == (FOnlineSessionSearch *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar1->Object->SearchState = Failed;
  if (pTVar1 != (TSharedPtr<FOnlineSessionSearch,1> *)&local_28) {
    pTVar1->Object = (FOnlineSessionSearch *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CurrentSessionSearch).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  (**(code **)(this->_padding_ + 0x1d8))(this,1);
  return true;
}

// CancelMatchmaking @ 14ed1ce70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineSessionNull::CancelMatchmaking(FOnlineSessionNull *this,FUniqueNetId *param_1,FName param_2)

{
  FString local_18;
  
  if (2 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl
              (&local_18,
               L"CancelMatchmaking is not supported on this platform. Use CancelFindSessions.");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x170))(this,param_2,0);
  return false;
}

// CancelMatchmaking @ 14ed1cf00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineSessionNull::CancelMatchmaking(FOnlineSessionNull *this,int param_1,FName param_2)

{
  FString local_18;
  
  if (2 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl
              (&local_18,
               L"CancelMatchmaking is not supported on this platform. Use CancelFindSessions.");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x170))(this,param_2,0);
  return false;
}

// CreateSession @ 14ed20e10

bool __thiscall
FOnlineSessionNull::CreateSession
          (FOnlineSessionNull *this,FUniqueNetId *param_1,FName param_2,
          FOnlineSessionSettings *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ed20e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x48))(this,0);
  return (bool)uVar1;
}

// CreateSession @ 14ed20e20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineSessionNull::CreateSession
          (FOnlineSessionNull *this,int param_1,FName param_2,FOnlineSessionSettings *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  FNamedOnlineSession *pFVar6;
  longlong *plVar7;
  longlong *plVar8;
  TSharedRef<FUniqueNetIdNull_const_,1> *pTVar9;
  FString *pFVar10;
  FOnlineSessionInfoNull *this_00;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  FName local_res18 [2];
  longlong *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FUniqueNetIdNull *local_b8;
  FSharedReferencer<1> local_b0;
  FOnlineSessionInfoNull *local_a8;
  FSharedReferencer<1> local_a0;
  FString local_98;
  FString local_88;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  void *local_68 [2];
  TSharedRef<FUniqueNetIdNull_const_,1> local_58;
  FString local_48;
  FString local_38;
  
  uVar4 = 0xffffffff;
  local_res18[0] = param_2;
  lVar5 = (**(code **)(this->_padding_ + 0x20))(this,param_2);
  if (lVar5 == 0) {
    pFVar6 = (FNamedOnlineSession *)(**(code **)(this->_padding_ + 8))(this,local_res18[0],param_3);
    if ((pFVar6 == (FNamedOnlineSession *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Session",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSessionInterfaceNull.cpp"
                           ,0xc6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pFVar6->bHosting = true;
    pFVar6->SessionState = Creating;
    *(int *)&pFVar6->_padding_ = param_3->NumPrivateConnections;
    *(int *)((longlong)&pFVar6->_padding_ + 4) = param_3->NumPublicConnections;
    pFVar6->HostingPlayerNum = param_1;
    if ((this->NullSubsystem == (FOnlineSubsystemNull *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NullSubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSessionInterfaceNull.cpp"
                           ,0xce,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (**(code **)(this->NullSubsystem->_padding_ + 0x80))(this->NullSubsystem,&local_c8);
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    if (local_c8 != (longlong *)0x0) {
      if ((local_c8 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      plVar7 = (longlong *)(**(code **)(*local_c8 + 0x110))(local_c8,local_78,param_1);
      if (&pFVar6->_padding_ != plVar7) {
        pFVar6->_padding_ = *plVar7;
        *plVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pFVar6->_padding_,(FSharedReferencer<1> *)(plVar7 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      if ((local_c8 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      plVar8 = (longlong *)(**(code **)(*local_c8 + 0x148))(local_c8,local_68,param_1);
      plVar7 = &pFVar6->_padding_;
      if (plVar7 != plVar8) {
        if ((void *)*plVar7 != (void *)0x0) {
          FMemory::Free((void *)*plVar7);
        }
        *plVar7 = *plVar8;
        *plVar8 = 0;
        *(int *)&pFVar6->_padding_ = (int)plVar8[1];
        *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = *(undefined4 *)((longlong)plVar8 + 0xc);
        plVar8[1] = 0;
      }
      if (local_68[0] != (void *)0x0) {
        FMemory::Free(local_68[0]);
      }
    }
    if (pFVar6->_padding_ == 0) {
      ::FString::PrintfImpl(&local_88,L"%d");
      pTVar9 = FUniqueNetIdNull::Create<FString>(&local_58,&local_88);
      local_b0.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
      local_b8 = pTVar9->Object;
      if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((FUniqueNetIdNull **)&pFVar6->_padding_ != &local_b8) {
        pFVar6->_padding_ = (longlong)local_b8;
        local_b8 = (FUniqueNetIdNull *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pFVar6->_padding_,&local_b0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pFVar10 = ::FString::FString(&local_48,L"NullUser");
      plVar7 = &pFVar6->_padding_;
      if ((FString *)plVar7 != pFVar10) {
        if ((void *)*plVar7 != (void *)0x0) {
          FMemory::Free((void *)*plVar7);
        }
        *plVar7 = (longlong)(pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar6->_padding_ = (pFVar10->Data).ArrayNum;
        *(int *)((longlong)&pFVar6->_padding_ + 4) = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    this_00 = ::operator_new(0x28);
    if (this_00 == (FOnlineSessionInfoNull *)0x0) {
      this_00 = (FOnlineSessionInfoNull *)0x0;
    }
    else {
      (this_00->HostAddr).Object = (FInternetAddr *)0x0;
      this_00->_padding_ = (longlong)&___7FOnlineSessionInfoNull__6B_;
      (this_00->HostAddr).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pTVar9 = FUniqueNetIdNull::EmptyId();
      (this_00->SessionId).Object = pTVar9->Object;
      pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
      (this_00->SessionId).SharedReferenceCount.ReferenceController = pTVar11;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    FOnlineSessionInfoNull::Init(this_00,this->NullSubsystem);
    local_a8 = this_00;
    pTVar11 = ::operator_new(0x18);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFOnlineSessionInfoNull__U__DefaultDeleter_VFOnlineSessionInfoNull___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11[1]._padding_ = (longlong)this_00;
      pTVar12 = pTVar11;
    }
    local_a0.ReferenceController = pTVar12;
    if ((FOnlineSessionInfoNull **)&pFVar6->_padding_ != &local_a8) {
      pFVar6->_padding_ = (longlong)this_00;
      local_a8 = (FOnlineSessionInfoNull *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar6->_padding_,&local_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.ReferenceController);
    uVar4 = UpdateLANStatus(this);
    if (uVar4 != 0x3e5) {
      pFVar6->SessionState = Pending;
      if (uVar4 == 0) {
        RegisterLocalPlayers(this,pFVar6);
      }
      else {
        (**(code **)(this->_padding_ + 0x28))(this,local_res18[0]);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
    if (uVar4 == 0x3e5) {
      return true;
    }
  }
  else if (2 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res18,&local_38);
    ::FString::PrintfImpl(&local_98,L"Cannot create session \'%s\': session already exists.");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x68))(this,local_res18[0],uVar4 == 0);
  if (uVar4 == 0) {
    return true;
  }
  return false;
}

// CreateSessionIdFromString @ 14ed212c0

TSharedPtr<FUniqueNetId_const_,1> * __thiscall
FOnlineSessionNull::CreateSessionIdFromString
          (FOnlineSessionNull *this,TSharedPtr<FUniqueNetId_const_,1> *__return_storage_ptr__,
          FString *param_1)

{
  TSharedRef<FUniqueNetIdNull_const_,1> *pTVar1;
  TSharedPtr<FUniqueNetId_const_,1> local_28;
  TSharedRef<FUniqueNetIdNull_const_,1> local_18;
  
  __return_storage_ptr__->Object = (FUniqueNetId *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (1 < (param_1->Data).ArrayNum) {
    pTVar1 = FUniqueNetIdNull::Create<FString_const_&>(&local_18,param_1);
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    local_28.Object = (FUniqueNetId *)pTVar1->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_28) {
      __return_storage_ptr__->Object = local_28.Object;
      local_28.Object = (FUniqueNetId *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// DestroySession @ 14ed22160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineSessionNull::DestroySession
          (FOnlineSessionNull *this,FName param_1,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FName local_res10;
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  FString local_48;
  FString local_38;
  FReadAccessScope local_28;
  
  uVar7 = 0xffffffff;
  local_res10 = param_1;
  lVar9 = (**(code **)(this->_padding_ + 0x20))();
  if (lVar9 == 0) {
    if (2 < (byte)LogOnlineSession._0_1_) {
      ::FName::ToString(&local_res10,&local_38);
      ::FString::PrintfImpl(&local_48,L"Can\'t destroy a null online session (%s)");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,*(undefined8 *)(lVar9 + 0x118));
    uVar7 = UpdateLANStatus(this);
  }
  iVar8 = (**(code **)(this->_padding_ + 0x448))(this);
  if (iVar8 == 0) {
    (**(code **)(this->NullSubsystem->_padding_ + 0x68))(this->NullSubsystem,&local_58);
    if (local_58 != (longlong *)0x0) {
      cVar4 = (**(code **)(this->NullSubsystem->_padding_ + 0x120))();
      if (cVar4 == '\0') {
        if ((local_58 == (longlong *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        (**(code **)(*local_58 + 0x50))();
      }
      if ((local_58 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      (**(code **)(*local_58 + 0x68))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  FVar3 = local_res10;
  if (uVar7 != 0x3e5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,FVar3,uVar7 == 0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    (**(code **)(this->_padding_ + 0x108))(this,local_res10,uVar7 == 0);
    if (uVar7 != 0) {
      return false;
    }
  }
  return true;
}

// DumpSessionState @ 14ed223a0

void __thiscall FOnlineSessionNull::DumpSessionState(FOnlineSessionNull *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  lpCriticalSection = &this->SessionLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar4 = 0;
  if (0 < (this->Sessions).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Sessions).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      DumpNamedSession((FNamedOnlineSession *)
                       ((this->Sessions).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x150));
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->Sessions).ArrayNum);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// EndSession @ 14ed22560

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineSessionNull::EndSession(FOnlineSessionNull *this,FName param_1)

{
  uint uVar1;
  longlong lVar2;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  uVar1 = 0xffffffff;
  local_res10 = param_1;
  lVar2 = (**(code **)(this->_padding_ + 0x20))();
  if (lVar2 == 0) {
    if (2 < (byte)LogOnlineSession._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      ::FString::PrintfImpl
                (&local_38,L"Can\'t end an online game for session (%s) that hasn\'t been created");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (*(Type *)(lVar2 + 0x148) == InProgress) {
    *(undefined4 *)(lVar2 + 0x148) = 6;
    uVar1 = UpdateLANStatus(this);
    if (uVar1 == 0x3e5) goto LAB_14ed22713;
    *(undefined4 *)(lVar2 + 0x148) = 6;
  }
  else {
    if (2 < (byte)LogOnlineSession._0_1_) {
      EOnlineSessionState::ToString(*(Type *)(lVar2 + 0x148));
      ::FName::ToString(&local_res10,&local_28);
      ::FString::PrintfImpl(&local_38,L"Can\'t end session (%s) in state %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    *(undefined4 *)(lVar2 + 0x148) = 6;
  }
  (**(code **)(this->_padding_ + 0xe0))(this,local_res10,uVar1 == 0);
LAB_14ed22713:
  if ((uVar1 != 0) && (uVar1 != 0x3e5)) {
    return false;
  }
  return true;
}

// FinalizeLANSearch @ 14ed22ff0

uint __thiscall FOnlineSessionNull::FinalizeLANSearch(FOnlineSessionNull *this)

{
  uint uVar1;
  
  if ((this->LANSessionManager).LanBeaconState == Searching) {
    FLANSession::StopLANSession(&this->LANSessionManager);
  }
  uVar1 = UpdateLANStatus(this);
  return uVar1;
}

// FindFriendSession @ 14ed23560

bool __thiscall
FOnlineSessionNull::FindFriendSession
          (FOnlineSessionNull *this,FUniqueNetId *param_1,FUniqueNetId *param_2)

{
  FOnlineSessionSearchResult *local_18;
  undefined8 local_10;
  
  local_18 = (FOnlineSessionSearchResult *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 0x308))(this,0,0,&local_18);
  DestructItems<FOnlineSessionSearchResult,int>(local_18,(int)local_10);
  if (local_18 != (FOnlineSessionSearchResult *)0x0) {
    FMemory::Free(local_18);
  }
  return false;
}

// FindFriendSession @ 14ed235b0

bool __thiscall
FOnlineSessionNull::FindFriendSession
          (FOnlineSessionNull *this,FUniqueNetId *param_1,
          TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  FOnlineSessionSearchResult *local_18;
  undefined8 local_10;
  
  local_18 = (FOnlineSessionSearchResult *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 0x308))(this,0,0,&local_18);
  DestructItems<FOnlineSessionSearchResult,int>(local_18,(int)local_10);
  if (local_18 != (FOnlineSessionSearchResult *)0x0) {
    FMemory::Free(local_18);
  }
  return false;
}

// FindFriendSession @ 14ed23600

bool __thiscall
FOnlineSessionNull::FindFriendSession(FOnlineSessionNull *this,int param_1,FUniqueNetId *param_2)

{
  undefined4 in_register_00000014;
  FOnlineSessionSearchResult *local_18;
  undefined8 local_10;
  
  local_18 = (FOnlineSessionSearchResult *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 0x308))(this,CONCAT44(in_register_00000014,param_1),0,&local_18);
  DestructItems<FOnlineSessionSearchResult,int>(local_18,(int)local_10);
  if (local_18 != (FOnlineSessionSearchResult *)0x0) {
    FMemory::Free(local_18);
  }
  return false;
}

// FindLANSession @ 14ed23650

uint __thiscall FOnlineSessionNull::FindLANSession(FOnlineSessionNull *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  undefined1 local_b0 [8];
  FDelegateAllocation local_a8;
  FNboSerializeToBuffer local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  uVar4 = 0x3e5;
  iVar3 = rand();
  *(char *)&(this->LANSessionManager).LanNonce = (char)iVar3;
  iVar3 = rand();
  *(char *)((longlong)&(this->LANSessionManager).LanNonce + 1) = (char)iVar3;
  iVar3 = rand();
  *(char *)((longlong)&(this->LANSessionManager).LanNonce + 2) = (char)iVar3;
  iVar3 = rand();
  *(char *)((longlong)&(this->LANSessionManager).LanNonce + 3) = (char)iVar3;
  iVar3 = rand();
  *(char *)((longlong)&(this->LANSessionManager).LanNonce + 4) = (char)iVar3;
  iVar3 = rand();
  *(char *)((longlong)&(this->LANSessionManager).LanNonce + 5) = (char)iVar3;
  iVar3 = rand();
  *(char *)((longlong)&(this->LANSessionManager).LanNonce + 6) = (char)iVar3;
  iVar3 = rand();
  *(char *)((longlong)&(this->LANSessionManager).LanNonce + 7) = (char)iVar3;
  local_b0 = (undefined1  [8])0x0;
  local_a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b0,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_a8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_a8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXPEAEH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOnlineSessionNull____A6AXPEAEH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = OnValidResponsePacketReceived;
    puVar5[3] = this;
    if (this == (FOnlineSessionNull *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_c0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOnlineSessionNull____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = OnLANSearchTimeout;
    puVar5[3] = this;
    if (this == (FOnlineSessionNull *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayMax = 0;
  local_98.NumBytes = 0;
  local_98.bHasOverflowed = false;
  local_98.Data.ArrayNum = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x400,(ForAnyElementType *)&local_98,0,&local_98.Data.ArrayMax);
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x400,(ForAnyElementType *)&local_98,&local_98.Data.ArrayNum,
                     &local_98.Data.ArrayMax);
  memset(local_98.Data.AllocatorInstance.Data + iVar3,0,0x400);
  FLANSession::CreateClientQueryPacket
            (&this->LANSessionManager,&local_98,(this->LANSessionManager).LanNonce);
  bVar2 = FLANSession::Search(&this->LANSessionManager,&local_98,
                              (TDelegate<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy>
                               *)local_b0,
                              (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8);
  if (!bVar2) {
    uVar4 = 0xffffffff;
    if ((this->LANSessionManager).LanBeaconState == Searching) {
      FLANSession::StopLANSession(&this->LANSessionManager);
    }
    UpdateLANStatus(this);
    if ((this->CurrentSessionSearch).Object == (FOnlineSessionSearch *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
    ((this->CurrentSessionSearch).Object)->SearchState = Failed;
    (**(code **)(this->_padding_ + 0x1a0))(this,0);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_80);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b0,
             (FWriteAccessScope *)&local_68);
  if ((local_a8.DelegateSize != 0) &&
     (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a8,0,0,0x10);
    local_a8.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  return uVar4;
}

// FindSessionById @ 14ed240f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FOnlineSessionNull::FindSessionById
          (FOnlineSessionNull *this,FUniqueNetId *param_1,FUniqueNetId *param_2,
          FUniqueNetId *param_3,
          TDelegate<void___cdecl(int,bool,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  longlong *plVar1;
  undefined1 auStack_178 [32];
  FReadAccessScope local_158;
  undefined **local_138;
  undefined8 local_130;
  TReferenceControllerBase<1> *local_128;
  void *pvStack_120;
  undefined8 local_118;
  FOnlineSessionSettings local_110;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_138 = &___7FOnlineSession__6B_;
  local_130 = 0;
  local_128 = (TReferenceControllerBase<1> *)0x0;
  pvStack_120 = (void *)0x0;
  local_118 = 0;
  FOnlineSessionSettings::FOnlineSessionSettings(&local_110);
  local_28 = 0;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_20 = 9999;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_158);
  if ((*(int *)&param_4->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_4->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0,0,&local_138);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  FOnlineSessionSettings::~FOnlineSessionSettings(&local_110);
  if (pvStack_120 != (void *)0x0) {
    FMemory::Free(pvStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128);
  return true;
}

// FindSessions @ 14ed24210

bool __thiscall
FOnlineSessionNull::FindSessions
          (FOnlineSessionNull *this,FUniqueNetId *param_1,
          TSharedRef<FOnlineSessionSearch,1> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ed24215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x180))(this,0);
  return (bool)uVar1;
}

// FindSessions @ 14ed24230

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineSessionNull::FindSessions
          (FOnlineSessionNull *this,int param_1,TSharedRef<FOnlineSessionSearch,1> *param_2)

{
  TSharedPtr<FOnlineSessionSearch,1> *pTVar1;
  FOnlineSessionSearch *pFVar2;
  uint uVar3;
  LARGE_INTEGER local_res8;
  FOnlineSessionSearch *local_28;
  FSharedReferencer<1> local_20;
  FString local_18;
  
  pTVar1 = &this->CurrentSessionSearch;
  if ((pTVar1->Object == (FOnlineSessionSearch *)0x0) &&
     (pFVar2 = param_2->Object, pFVar2->SearchState != InProgress)) {
    DestructItems<FOnlineSessionSearchResult,int>
              ((FOnlineSessionSearchResult *)(pFVar2->SearchResults).AllocatorInstance.Data,
               (pFVar2->SearchResults).ArrayNum);
    (pFVar2->SearchResults).ArrayNum = 0;
    if ((pFVar2->SearchResults).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x120,8,0,&(pFVar2->SearchResults).AllocatorInstance,0,
                 &(pFVar2->SearchResults).ArrayMax);
    }
    local_20.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
    local_28 = param_2->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FOnlineSessionSearch,1> *)&local_28) {
      pTVar1->Object = local_28;
      local_28 = (FOnlineSessionSearch *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CurrentSessionSearch).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    QueryPerformanceCounter(&local_res8);
    this->SessionSearchStartInSeconds =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    uVar3 = FindLANSession(this);
    if (uVar3 == 0x3e5) {
      param_2->Object->SearchState = InProgress;
    }
    else if (uVar3 != 0) {
      return false;
    }
  }
  else if (2 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl(&local_18,L"Ignoring game search request while one is pending");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// GetNamedSession @ 14ed258d0

FNamedOnlineSession * __thiscall
FOnlineSessionNull::GetNamedSession(FOnlineSessionNull *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNamedOnlineSession *pFVar4;
  FNamedOnlineSession *pFVar5;
  uint uVar6;
  FNamedOnlineSession *pFVar7;
  
  lpCriticalSection = &this->SessionLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNamedOnlineSession *)(*pcVar1)();
    return pFVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = (FNamedOnlineSession *)0x0;
  pFVar4 = pFVar5;
  pFVar7 = pFVar5;
  if (0 < (this->Sessions).ArrayNum) {
    do {
      uVar6 = (uint)pFVar4;
      uVar3 = 0;
      if ((int)uVar6 < (this->Sessions).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FNamedOnlineSession *)(*pcVar1)();
        return pFVar4;
      }
      if (*(FName *)((this->Sessions).AllocatorInstance.Data +
                    (longlong)&(pFVar7->SessionName).ComparisonIndex) == param_1) {
        uVar3 = 0;
        if ((int)uVar6 < (this->Sessions).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FNamedOnlineSession *)(*pcVar1)();
          return pFVar4;
        }
        pFVar5 = (FNamedOnlineSession *)
                 ((this->Sessions).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x150);
        break;
      }
      pFVar4 = (FNamedOnlineSession *)(ulonglong)(uVar6 + 1);
      pFVar7 = pFVar7 + 1;
    } while ((int)(uVar6 + 1) < (this->Sessions).ArrayNum);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pFVar5;
}

// GetNumSessions @ 14ed25a60

int __thiscall FOnlineSessionNull::GetNumSessions(FOnlineSessionNull *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  lpCriticalSection = &this->SessionLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar3 = (this->Sessions).ArrayNum;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar3;
}

// GetResolvedConnectString @ 14ed26040

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineSessionNull::GetResolvedConnectString
          (FOnlineSessionNull *this,FOnlineSessionSearchResult *param_1,FName param_2,
          FString *param_3)

{
  FOnlineSessionInfoNull *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FNameEntryId FVar4;
  int iVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar6;
  FName FVar7;
  undefined1 local_res10 [8];
  TSharedPtr<FOnlineSessionInfoNull,1> local_28;
  
  pFVar1 = (FOnlineSessionInfoNull *)(param_1->Session).SessionInfo.Object;
  bVar3 = false;
  if (pFVar1 == (FOnlineSessionInfoNull *)0x0) goto LAB_14ed260ed;
  pTVar2 = (param_1->Session).SessionInfo.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pFVar1;
  local_28.SharedReferenceCount.ReferenceController = pTVar2;
  FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if (param_2 == FVar6) {
    iVar5 = GetBeaconPortFromSessionSettings(&(param_1->Session).SessionSettings);
LAB_14ed260c5:
    bVar3 = GetConnectStringFromSessionInfo(&local_28,param_3,iVar5);
  }
  else {
    FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar4.Value);
    if (param_2 == FVar7) {
      iVar5 = 0;
      goto LAB_14ed260c5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if ((bVar3 != false) && (1 < (param_3->Data).ArrayNum)) {
    return bVar3;
  }
LAB_14ed260ed:
  if (2 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl
              ((FString *)&local_28,
               L"Invalid session info in search result to GetResolvedConnectString()");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Object != (FOnlineSessionInfoNull *)0x0) {
      FMemory::Free(local_28.Object);
    }
  }
  return bVar3;
}

// GetResolvedConnectString @ 14ed26160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineSessionNull::GetResolvedConnectString
          (FOnlineSessionNull *this,FName param_1,FString *param_2,FName param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  FNameEntryId FVar3;
  int iVar4;
  longlong lVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar6;
  FName FVar7;
  undefined1 local_res8 [8];
  FName local_res10;
  TSharedPtr<FOnlineSessionInfoNull,1> local_38;
  FString local_28;
  
  bVar2 = false;
  local_res10 = param_1;
  lVar5 = (**(code **)(this->_padding_ + 0x20))();
  if (lVar5 == 0) {
    if (2 < (byte)LogOnlineSession._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      ::FString::PrintfImpl
                ((FString *)&local_38,
                 L"Unknown session name (%s) specified to GetResolvedConnectString()");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
      if (local_38.Object != (FOnlineSessionInfoNull *)0x0) {
        FMemory::Free(local_38.Object);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  local_38.Object = *(FOnlineSessionInfoNull **)(lVar5 + 0x100);
  pTVar1 = *(TReferenceControllerBase<1> **)(lVar5 + 0x108);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (param_3 == FVar6) {
    iVar4 = GetBeaconPortFromSessionSettings((FOnlineSessionSettings *)(lVar5 + 0x28));
LAB_14ed261ec:
    bVar2 = GetConnectStringFromSessionInfo(&local_38,param_2,iVar4);
    if (bVar2) goto LAB_14ed2628b;
  }
  else {
    FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value);
    if (param_3 == FVar7) {
      iVar4 = 0;
      goto LAB_14ed261ec;
    }
  }
  if (2 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(&local_res10,&local_28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Invalid session info for session %s in GetResolvedConnectString()");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_38.Object != (FOnlineSessionInfoNull *)0x0) {
      FMemory::Free(local_38.Object);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
LAB_14ed2628b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar2;
}

// GetSessionSettings @ 14ed26390

FOnlineSessionSettings * __thiscall
FOnlineSessionNull::GetSessionSettings(FOnlineSessionNull *this,FName param_1)

{
  longlong lVar1;
  FOnlineSessionSettings *pFVar2;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  pFVar2 = (FOnlineSessionSettings *)0x0;
  if (lVar1 != 0) {
    pFVar2 = (FOnlineSessionSettings *)(lVar1 + 0x28);
  }
  return pFVar2;
}

// GetSessionState @ 14ed263c0

Type __thiscall FOnlineSessionNull::GetSessionState(FOnlineSessionNull *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  lpCriticalSection = &this->SessionLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3 = (*pcVar1)();
    return TVar3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TVar3 = NoSession;
  uVar5 = 0;
  if (0 < (this->Sessions).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Sessions).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar3 = (*pcVar1)();
        return TVar3;
      }
      if (*(FName *)((this->Sessions).AllocatorInstance.Data + lVar6 + 0x118) == param_1) {
        uVar4 = 0;
        if ((int)uVar5 < (this->Sessions).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar3 = (*pcVar1)();
          return TVar3;
        }
        TVar3 = *(Type *)((this->Sessions).AllocatorInstance.Data +
                         (longlong)(int)uVar5 * 0x150 + 0x148);
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x150;
    } while ((int)uVar5 < (this->Sessions).ArrayNum);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return TVar3;
}

// HasPresenceSession @ 14ed26b60

bool __thiscall FOnlineSessionNull::HasPresenceSession(FOnlineSessionNull *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  lpCriticalSection = &this->SessionLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar6 = 0;
  if (0 < (this->Sessions).ArrayNum) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Sessions).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if ((this->Sessions).AllocatorInstance.Data[lVar5 + 0x3e] != (FScriptContainerElement)0x0) {
        bVar2 = true;
        goto LAB_14ed26c2e;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x150;
    } while ((int)uVar6 < (this->Sessions).ArrayNum);
  }
  bVar2 = false;
LAB_14ed26c2e:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar2;
}

// IsHost @ 14ed27a60

bool __thiscall FOnlineSessionNull::IsHost(FOnlineSessionNull *this,FNamedOnlineSession *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *local_28;
  TReferenceControllerBase<1> *local_20;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  cVar3 = (**(code **)(this->NullSubsystem->_padding_ + 0x120))();
  if (cVar3 != '\0') {
    return true;
  }
  (**(code **)(this->NullSubsystem->_padding_ + 0x80))(this->NullSubsystem,&local_18);
  if (local_18 == (longlong *)0x0) {
    bVar4 = false;
    goto LAB_14ed27b89;
  }
  if ((local_18 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  (**(code **)(*local_18 + 0x110))(local_18,&local_28,param_1->HostingPlayerNum);
  if (local_28 == (undefined8 *)0x0) {
LAB_14ed27b7d:
    bVar4 = false;
  }
  else {
    if ((param_1->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    lVar1 = param_1->_padding_;
    if ((local_28 == (undefined8 *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    cVar3 = (**(code **)*local_28)(local_28,lVar1);
    if (cVar3 == '\0') goto LAB_14ed27b7d;
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
LAB_14ed27b89:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return bVar4;
}

// IsPlayerInSession @ 14ed27bb0

bool __thiscall
FOnlineSessionNull::IsPlayerInSession(FOnlineSessionNull *this,FName param_1,FUniqueNetId *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar5 = (**(code **)(this->_padding_ + 0x20))();
  if (lVar5 == 0) {
    return false;
  }
  puVar2 = *(undefined8 **)(lVar5 + 8);
  if ((puVar2 == (undefined8 *)0x0) || (cVar3 = (**(code **)*puVar2)(puVar2,param_2), cVar3 == '\0')
     ) {
    puVar2 = *(undefined8 **)(lVar5 + 0x138);
    iVar1 = *(int *)(lVar5 + 0x140);
    for (puVar6 = puVar2; puVar6 != puVar2 + (longlong)iVar1 * 2; puVar6 = puVar6 + 2) {
      cVar3 = (*(code *)**(undefined8 **)param_2)(param_2,*puVar6);
      if (cVar3 != '\0') {
        if ((int)((longlong)puVar6 - (longlong)puVar2 >> 4) != -1) goto LAB_14ec0a4af;
        break;
      }
    }
    bVar4 = false;
  }
  else {
LAB_14ec0a4af:
    bVar4 = true;
  }
  return bVar4;
}

// IsSessionJoinable @ 14ed27d30

bool __thiscall
FOnlineSessionNull::IsSessionJoinable(FOnlineSessionNull *this,FNamedOnlineSession *param_1)

{
  bool bVar1;
  bool bVar2;
  
  if (((char)param_1->_padding_ == '\0') && (*(char *)((longlong)&param_1->_padding_ + 2) == '\0'))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((param_1->SessionState == InProgress) &&
     (*(char *)((longlong)&param_1->_padding_ + 1) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((bVar1) && (bVar2)) && (0 < *(int *)((longlong)&param_1->_padding_ + 4))) {
    return true;
  }
  return false;
}

// JoinLANSession @ 14ed27db0

uint __thiscall
FOnlineSessionNull::JoinLANSession
          (FOnlineSessionNull *this,int param_1,FNamedOnlineSession *param_2,FOnlineSession *param_3
          )

{
  longlong lVar1;
  FOnlineSessionInfo *pFVar2;
  FOnlineSessionInfo FVar3;
  FOnlineSessionInfo FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FInternetAddr *pFVar8;
  undefined8 *puVar9;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (param_2 == (FNamedOnlineSession *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Session != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSessionInterfaceNull.cpp"
                       ,0x2ca,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  lVar1 = param_2->_padding_;
  param_2->SessionState = Pending;
  if (((lVar1 != 0) && (param_3 != (FOnlineSession *)0x0)) &&
     (pFVar2 = (param_3->SessionInfo).Object, pFVar2 != (FOnlineSessionInfo *)0x0)) {
    FVar3 = pFVar2[4];
    FVar4 = pFVar2[3];
    if (FVar3 != (FOnlineSessionInfo)0x0) {
      LOCK();
      *(int *)((longlong)FVar3 + 8) = *(int *)((longlong)FVar3 + 8) + 1;
      UNLOCK();
    }
    local_28 = *(undefined8 *)(lVar1 + 0x18);
    pTStack_20 = *(TReferenceControllerBase<1> **)(lVar1 + 0x20);
    *(FOnlineSessionInfo *)(lVar1 + 0x18) = FVar4;
    *(FOnlineSessionInfo *)(lVar1 + 0x20) = FVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
    pFVar8 = TSharedPtr<FInternetAddr,1>::operator->((TSharedPtr<FInternetAddr,1> *)(pFVar2 + 1));
    puVar9 = (undefined8 *)(**(code **)((longlong)*pFVar8 + 0xa0))(pFVar8,local_18);
    local_30.ReferenceController = (TReferenceControllerBase<1> *)puVar9[1];
    local_38 = *puVar9;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((undefined8 *)(lVar1 + 8) != &local_38) {
      *(undefined8 *)(lVar1 + 8) = local_38;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar1 + 0x10),&local_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return 0;
  }
  return 0xffffffff;
}

// JoinSession @ 14ed27ef0

bool __thiscall
FOnlineSessionNull::JoinSession
          (FOnlineSessionNull *this,FUniqueNetId *param_1,FName param_2,
          FOnlineSessionSearchResult *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ed27ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x210))(this,0);
  return (bool)uVar1;
}

// JoinSession @ 14ed27f10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineSessionNull::JoinSession
          (FOnlineSessionNull *this,int param_1,FName param_2,FOnlineSessionSearchResult *param_3)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  FOnlineSessionInfo *pFVar3;
  FOnlineSessionInfo FVar4;
  FOnlineSessionInfo FVar5;
  longlong lVar6;
  FNamedOnlineSession *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FUniqueNetIdNull_const_,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FInternetAddr *pFVar11;
  undefined8 *puVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  FName local_res18;
  FOnlineSessionSearchResult *local_res20;
  TReferenceControllerBase<1> *local_98;
  FSharedReferencer<1> local_90;
  undefined8 local_88;
  FSharedReferencer<1> local_80;
  FString local_78;
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FString local_48;
  
  iVar14 = -1;
  local_res18 = param_2;
  local_res20 = param_3;
  lVar6 = (**(code **)(this->_padding_ + 0x20))(this,param_2);
  if (lVar6 == 0) {
    pFVar7 = (FNamedOnlineSession *)(**(code **)this->_padding_)(this,local_res18,param_3);
    pFVar7->HostingPlayerNum = param_1;
    pTVar8 = ::operator_new(0x28);
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pTVar13 = pTVar10;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      pTVar8->SharedReferenceCount = (atomic<int>)0x0;
      pTVar8->WeakReferenceCount = (atomic<int>)0x0;
      pTVar8->_padding_ = (longlong)&___7FOnlineSessionInfoNull__6B_;
      pTVar8[1]._padding_ = 0;
      pTVar9 = FUniqueNetIdNull::EmptyId();
      *(FUniqueNetIdNull **)&pTVar8[1].SharedReferenceCount = pTVar9->Object;
      pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
      pTVar8[2]._padding_ = (longlong)pTVar2;
      pTVar13 = pTVar8;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    plVar1 = &pFVar7->_padding_;
    local_98 = pTVar13;
    pTVar8 = ::operator_new(0x18);
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFOnlineSessionInfoNull__U__DefaultDeleter_VFOnlineSessionInfoNull___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      pTVar8[1]._padding_ = (longlong)pTVar13;
      pTVar10 = pTVar8;
    }
    local_90.ReferenceController = pTVar10;
    if ((TReferenceControllerBase<1> **)plVar1 != &local_98) {
      *plVar1 = (longlong)pTVar13;
      local_98 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar7->_padding_,&local_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.ReferenceController);
    lVar6 = *plVar1;
    pFVar7->SessionState = Pending;
    if (((lVar6 == 0) || (local_res20 == (FOnlineSessionSearchResult *)0x0)) ||
       (pFVar3 = (local_res20->Session).SessionInfo.Object, pFVar3 == (FOnlineSessionInfo *)0x0)) {
      *(undefined1 *)&pFVar7->_padding_ = 0;
      (**(code **)(this->_padding_ + 0x28))(this,local_res18);
    }
    else {
      FVar4 = pFVar3[4];
      FVar5 = pFVar3[3];
      if (FVar4 != (FOnlineSessionInfo)0x0) {
        LOCK();
        *(int *)((longlong)FVar4 + 8) = *(int *)((longlong)FVar4 + 8) + 1;
        UNLOCK();
      }
      local_68 = *(undefined8 *)(lVar6 + 0x18);
      pTStack_60 = *(TReferenceControllerBase<1> **)(lVar6 + 0x20);
      *(FOnlineSessionInfo *)(lVar6 + 0x18) = FVar5;
      *(FOnlineSessionInfo *)(lVar6 + 0x20) = FVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
      pFVar11 = TSharedPtr<FInternetAddr,1>::operator->((TSharedPtr<FInternetAddr,1> *)(pFVar3 + 1))
      ;
      puVar12 = (undefined8 *)(**(code **)((longlong)*pFVar11 + 0xa0))(pFVar11,local_58);
      local_80.ReferenceController = (TReferenceControllerBase<1> *)puVar12[1];
      local_88 = *puVar12;
      if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_80.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((undefined8 *)(lVar6 + 8) != &local_88) {
        *(undefined8 *)(lVar6 + 8) = local_88;
        local_88 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar6 + 0x10),&local_80);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      *(undefined1 *)&pFVar7->_padding_ = 0;
      RegisterLocalPlayers(this,pFVar7);
      iVar14 = 0;
    }
  }
  else if (2 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(&local_res18,&local_48);
    ::FString::PrintfImpl(&local_78,L"Session (%s) already exists, can\'t join twice");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x230))(this,local_res18,-(iVar14 != 0) & 5);
  return iVar14 == 0;
}

// NeedsToAdvertise @ 14ed29010

bool __thiscall
FOnlineSessionNull::NeedsToAdvertise(FOnlineSessionNull *this,FNamedOnlineSession *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  undefined8 *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((char)param_1->_padding_ == '\0') {
    return false;
  }
  cVar3 = (**(code **)(this->NullSubsystem->_padding_ + 0x120))();
  if (cVar3 == '\0') {
    (**(code **)(this->NullSubsystem->_padding_ + 0x80))(this->NullSubsystem,&local_28);
    if (local_28 != (longlong *)0x0) {
      if ((local_28 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      (**(code **)(*local_28 + 0x110))(local_28,&local_18,param_1->HostingPlayerNum);
      if (local_18 != (undefined8 *)0x0) {
        if ((param_1->_padding_ == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        lVar1 = param_1->_padding_;
        if ((local_18 == (undefined8 *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        cVar3 = (**(code **)*local_18)(local_18,lVar1);
        if (cVar3 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_20);
          goto LAB_14ed2913f;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  else {
LAB_14ed2913f:
    if ((((*(char *)((longlong)&param_1->_padding_ + 2) != '\0') &&
         ((param_1->SessionState != InProgress ||
          ((*(char *)((longlong)&param_1->_padding_ + 1) != '\0' &&
           (0 < *(int *)((longlong)&param_1->_padding_ + 4))))))) ||
        (*(char *)((longlong)&param_1->_padding_ + 7) != '\0')) ||
       ((char)param_1->_padding_ != '\0')) {
      return true;
    }
  }
  return false;
}

// NeedsToAdvertise @ 14ed291a0

bool __thiscall FOnlineSessionNull::NeedsToAdvertise(FOnlineSessionNull *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  lpCriticalSection = &this->SessionLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar2 = false;
  uVar6 = 0;
  if (0 < (this->Sessions).ArrayNum) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Sessions).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar4 = NeedsToAdvertise(this,(FNamedOnlineSession *)
                                    ((this->Sessions).AllocatorInstance.Data +
                                    (longlong)(int)uVar6 * 0x150));
      if (bVar4) {
        bVar2 = true;
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (this->Sessions).ArrayNum);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar2;
}

// OnLANSearchTimeout @ 14ed294a0

void __thiscall FOnlineSessionNull::OnLANSearchTimeout(FOnlineSessionNull *this)

{
  TSharedPtr<FOnlineSessionSearch,1> *pTVar1;
  FOnlineSessionSearch *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((this->LANSessionManager).LanBeaconState == Searching) {
    FLANSession::StopLANSession(&this->LANSessionManager);
  }
  UpdateLANStatus(this);
  pTVar1 = &this->CurrentSessionSearch;
  pFVar2 = pTVar1->Object;
  if (pFVar2 != (FOnlineSessionSearch *)0x0) {
    if (0 < (pFVar2->SearchResults).ArrayNum) {
      (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
    }
    if (pTVar1->Object == (FOnlineSessionSearch *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar1->Object->SearchState = Done;
    if (pTVar1 != (TSharedPtr<FOnlineSessionSearch,1> *)&local_18) {
      pTVar1->Object = (FOnlineSessionSearch *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CurrentSessionSearch).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
                    /* WARNING: Could not recover jumptable at 0x00014ed2955f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x1a0))(this,1);
  return;
}

// OnValidQueryPacketReceived @ 14ed29570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineSessionNull::OnValidQueryPacketReceived
          (FOnlineSessionNull *this,uchar *param_1,int param_2,ulong64 param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  FOnlineSession *pFVar8;
  ulonglong uVar9;
  FString local_58;
  FNboSerializeToBuffer local_48;
  
  lpCriticalSection = &this->SessionLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar7 = 0;
  uVar9 = uVar7;
  if (0 < (this->Sessions).ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < (this->Sessions).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar8 = (FOnlineSession *)((this->Sessions).AllocatorInstance.Data + uVar9);
      if (pFVar8 != (FOnlineSession *)0x0) {
        if (((pFVar8->SessionSettings).bShouldAdvertise == false) &&
           ((pFVar8->SessionSettings).bIsLANMatch == false)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((pFVar8[1].SessionSettings.NumPublicConnections == 4) &&
           ((pFVar8->SessionSettings).bAllowJoinInProgress == false)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (((bVar3) && (bVar2)) && (0 < pFVar8->NumOpenPublicConnections)) {
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.Data.ArrayMax = 0;
          local_48.NumBytes = 0;
          local_48.bHasOverflowed = false;
          local_48.Data.ArrayNum = 0;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x400,(ForAnyElementType *)&local_48,0,&local_48.Data.ArrayMax);
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,0x400,(ForAnyElementType *)&local_48,&local_48.Data.ArrayNum,
                             &local_48.Data.ArrayMax);
          memset(local_48.Data.AllocatorInstance.Data + iVar5,0,0x400);
          FLANSession::CreateHostResponsePacket(&this->LANSessionManager,&local_48,param_3);
          AppendSessionToPacket(this,(FNboSerializeToBufferNull *)&local_48,pFVar8);
          if (local_48.bHasOverflowed == false) {
            FLANSession::BroadcastPacket
                      (&this->LANSessionManager,(uchar *)local_48.Data.AllocatorInstance.Data,
                       local_48.NumBytes);
          }
          else if (2 < (byte)LogOnlineSession._0_1_) {
            ::FString::PrintfImpl
                      (&local_58,L"LAN broadcast packet overflow, cannot broadcast on LAN");
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar9 = uVar9 + 0x150;
    } while ((int)(uVar6 + 1) < (this->Sessions).ArrayNum);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnValidResponsePacketReceived @ 14ed29820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineSessionNull::OnValidResponsePacketReceived
          (FOnlineSessionNull *this,uchar *param_1,int param_2)

{
  int *piVar1;
  FOnlineSessionSearch *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_1c8 [32];
  int local_1a8;
  FString local_198;
  LARGE_INTEGER local_188;
  FString local_180;
  FString local_170;
  uchar *local_160;
  int local_158;
  undefined4 local_154;
  undefined1 local_150;
  FOnlineSessionSearchResult local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if ((this->CurrentSessionSearch).Object == (FOnlineSessionSearch *)0x0) {
    if (2 < (byte)LogOnlineSession._0_1_) {
      ::FString::PrintfImpl(&local_170,L"Failed to create new online game settings object");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_148.Session._padding_ = (longlong)&___7FOnlineSession__6B_;
    local_148.Session.OwningUserId.Object = (FUniqueNetId *)0x0;
    local_148.Session.OwningUserName.Data.ArrayNum = 0;
    local_148.Session.OwningUserName.Data.ArrayMax = 0;
    local_148.Session.OwningUserId.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_148.Session.OwningUserName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FOnlineSessionSettings::FOnlineSessionSettings(&local_148.Session.SessionSettings);
    local_148.Session.SessionInfo.Object = (FOnlineSessionInfo *)0x0;
    local_148.Session.SessionInfo.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_148.Session.NumOpenPrivateConnections = 0;
    local_148.Session.NumOpenPublicConnections = 0;
    local_148.PingInMs = 9999;
    QueryPerformanceCounter(&local_188);
    local_154 = 0;
    local_150 = 0;
    local_148.PingInMs =
         (int)((((double)local_188.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000) - this->SessionSearchStartInSeconds) *
              __real_408f400000000000);
    local_160 = param_1;
    local_158 = param_2;
    ReadSessionFromPacket(this,(FNboSerializeFromBufferNull *)&local_160,&local_148.Session);
    iVar6 = GetBuildUniqueId();
    if (local_148.Session.SessionSettings.BuildUniqueId == iVar6) {
      if (((this->CurrentSessionSearch).Object == (FOnlineSessionSearch *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->CurrentSessionSearch).Object;
      piVar1 = &(pFVar2->SearchResults).ArrayMax;
      iVar6 = (pFVar2->SearchResults).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x120,8,&(pFVar2->SearchResults).AllocatorInstance,piVar1);
      }
      (pFVar2->SearchResults).ArrayNum = iVar6 + 1;
      FOnlineSessionSearchResult::FOnlineSessionSearchResult
                ((FOnlineSessionSearchResult *)
                 ((pFVar2->SearchResults).AllocatorInstance.Data + (longlong)iVar6 * 0x120),
                 &local_148);
    }
    else if (5 < (byte)LogOnlineSession._0_1_) {
      if ((local_148.Session.SessionInfo.Object == (FOnlineSessionInfo *)0x0) ||
         (cVar5 = (**(code **)((longlong)*local_148.Session.SessionInfo.Object + 0x20))(),
         cVar5 == '\0')) {
        ::FString::FString(&local_198,L"InvalidSession");
      }
      else {
        if ((local_148.Session.SessionInfo.Object == (FOnlineSessionInfo *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar7 = (longlong *)(**(code **)((longlong)*local_148.Session.SessionInfo.Object + 0x38))()
        ;
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_198);
      }
      local_1a8 = local_148.Session.SessionSettings.BuildUniqueId;
      ::FString::PrintfImpl
                (&local_180,
                 L"Rejecting search result [%s]: mismatched build id. Local: %d - Session: %d");
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.Session.SessionInfo.SharedReferenceCount.ReferenceController);
    FOnlineSessionSettings::~FOnlineSessionSettings(&local_148.Session.SessionSettings);
    if (local_148.Session.OwningUserName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Session.OwningUserName.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.Session.OwningUserId.SharedReferenceCount.ReferenceController);
  }
  return;
}

// PingSearchResults @ 14ed29c50

bool __thiscall
FOnlineSessionNull::PingSearchResults(FOnlineSessionNull *this,FOnlineSessionSearchResult *param_1)

{
  return false;
}

// ReadSessionFromPacket @ 14ed2c080

void __thiscall
FOnlineSessionNull::ReadSessionFromPacket
          (FOnlineSessionNull *this,FNboSerializeFromBufferNull *param_1,FOnlineSession *param_2)

{
  FOnlineSessionInfo FVar1;
  code *pcVar2;
  FOnlineSessionInfo FVar3;
  uint uVar4;
  bool bVar5;
  FUniqueNetIdNull *pFVar6;
  FNboSerializeFromBuffer *pFVar7;
  FOnlineSessionInfo *pFVar8;
  TSharedRef<FUniqueNetIdNull_const_,1> *pTVar9;
  FName *pFVar10;
  ISocketSubsystem *pIVar11;
  FOnlineSessionInfo *pFVar12;
  FUniqueNetIdNull *pFVar13;
  uchar *puVar14;
  TRawPtrProxy<FUniqueNetIdNull> local_res10;
  TRawPtrProxy<FUniqueNetIdNull> local_res18;
  FName local_res20;
  FOnlineSessionInfo local_98;
  FSharedReferencer<1> local_90;
  FOnlineSessionInfo *local_88;
  FSharedReferencer<1> local_80;
  FUniqueNetIdNull *local_78;
  FSharedReferencer<1> FStack_70;
  TSharedRef<FUniqueNetIdNull_const_,1> local_68;
  TSharedRef<FUniqueNetIdNull_const_,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  pFVar6 = ::operator_new(0x30);
  pFVar13 = (FUniqueNetIdNull *)0x0;
  local_res10.Object = pFVar13;
  if (pFVar6 != (FUniqueNetIdNull *)0x0) {
    *(undefined8 *)&pFVar6->field_0x8 = 0;
    *(undefined8 *)&pFVar6->field_0x10 = 0;
    *(undefined8 *)&pFVar6->field_0x18 = 0;
    *(undefined8 *)&pFVar6->field_0x20 = 0;
    *(undefined ***)pFVar6 = &___7FUniqueNetIdNull__6B_;
    uVar4 = NULL_SUBSYSTEM.Number;
    *(uint *)&pFVar6->field_0x28 = NULL_SUBSYSTEM.ComparisonIndex.Value;
    *(uint *)&pFVar6->field_0x2c = uVar4;
    local_res10.Object = pFVar6;
  }
  TSharedRef<FUniqueNetIdNull_const_,1>::TSharedRef<FUniqueNetIdNull_const_,1><FUniqueNetIdNull>
            (&local_68,&local_res10);
  pFVar6 = local_68.Object;
  ::operator>>((FNboSerializeFromBuffer *)param_1,(FString *)&(local_68.Object)->field_0x18);
  pFVar7 = ::operator>>((FNboSerializeFromBuffer *)param_1,&param_2->OwningUserName);
  if ((pFVar7->bHasOverflowed == false) && (pFVar7->CurrentOffset + 4 <= pFVar7->NumBytes)) {
    puVar14 = pFVar7->Data + pFVar7->CurrentOffset;
    param_2->NumOpenPrivateConnections =
         CONCAT31(CONCAT21(CONCAT11(*puVar14,puVar14[1]),puVar14[2]),puVar14[3]);
    pFVar7->CurrentOffset = pFVar7->CurrentOffset + 4;
  }
  else {
    pFVar7->bHasOverflowed = true;
  }
  if ((pFVar7->bHasOverflowed == false) && (pFVar7->CurrentOffset + 4 <= pFVar7->NumBytes)) {
    puVar14 = pFVar7->Data + pFVar7->CurrentOffset;
    param_2->NumOpenPublicConnections =
         CONCAT31(CONCAT21(CONCAT11(*puVar14,puVar14[1]),puVar14[2]),puVar14[3]);
    pFVar7->CurrentOffset = pFVar7->CurrentOffset + 4;
  }
  else {
    pFVar7->bHasOverflowed = true;
  }
  local_78 = local_68.Object;
  FStack_70.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&param_2->OwningUserId != (TSharedPtr<FUniqueNetId_const_,1> *)&local_78) {
    (param_2->OwningUserId).Object = (FUniqueNetId *)pFVar6;
    local_78 = (FUniqueNetIdNull *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_2->OwningUserId).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  pFVar8 = ::operator_new(0x28);
  if (pFVar8 == (FOnlineSessionInfo *)0x0) {
    pFVar8 = (FOnlineSessionInfo *)0x0;
  }
  else {
    pFVar8[1] = (FOnlineSessionInfo)0x0;
    *pFVar8 = (FOnlineSessionInfo)&___7FOnlineSessionInfoNull__6B_;
    pFVar8[2] = (FOnlineSessionInfo)0x0;
    pTVar9 = FUniqueNetIdNull::EmptyId();
    pFVar8[3] = (FOnlineSessionInfo)pTVar9->Object;
    FVar1 = (FOnlineSessionInfo)(pTVar9->SharedReferenceCount).ReferenceController;
    pFVar8[4] = FVar1;
    if (FVar1 != (FOnlineSessionInfo)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar1 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar1 + 8) + 1);
      UNLOCK();
    }
  }
  pFVar10 = ::FName::FName(&local_res20,L"WINDOWS");
  pIVar11 = ISocketSubsystem::Get(pFVar10);
  pFVar12 = (FOnlineSessionInfo *)(**(code **)(pIVar11->_padding_ + 0x90))(pIVar11,local_48);
  local_90.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar12 + 1);
  local_98 = *pFVar12;
  if ((FOnlineSessionInfo)local_90.ReferenceController != (FOnlineSessionInfo)0x0) {
    LOCK();
    *(int *)((longlong)local_90.ReferenceController + 8) =
         *(int *)((longlong)local_90.ReferenceController + 8) + 1;
    UNLOCK();
  }
  pFVar12 = pFVar8 + 1;
  if (pFVar12 != &local_98) {
    *pFVar12 = local_98;
    local_98 = (FOnlineSessionInfo)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(pFVar8 + 2),&local_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if ((*pFVar12 == (FOnlineSessionInfo)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SessionInfo.HostAddr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\NboSerializerNull.h"
                         ,0x43,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = ::operator_new(0x30);
  local_res18.Object = pFVar13;
  if (pFVar6 != (FUniqueNetIdNull *)0x0) {
    *(undefined8 *)&pFVar6->field_0x8 = 0;
    *(undefined8 *)&pFVar6->field_0x10 = 0;
    *(undefined8 *)&pFVar6->field_0x18 = 0;
    *(undefined8 *)&pFVar6->field_0x20 = 0;
    *(undefined ***)pFVar6 = &___7FUniqueNetIdNull__6B_;
    uVar4 = NULL_SUBSYSTEM.Number;
    *(uint *)&pFVar6->field_0x28 = NULL_SUBSYSTEM.ComparisonIndex.Value;
    *(uint *)&pFVar6->field_0x2c = uVar4;
    local_res18.Object = pFVar6;
  }
  TSharedRef<FUniqueNetIdNull_const_,1>::TSharedRef<FUniqueNetIdNull_const_,1><FUniqueNetIdNull>
            (&local_58,&local_res18);
  FVar1 = pFVar8[3];
  FVar3 = pFVar8[4];
  pFVar8[3] = (FOnlineSessionInfo)local_58.Object;
  pFVar8[4] = (FOnlineSessionInfo)local_58.SharedReferenceCount.ReferenceController;
  local_58.Object = (FUniqueNetIdNull *)FVar1;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar3);
  ::operator>>((FNboSerializeFromBuffer *)param_1,(FString *)((longlong)pFVar8[3] + 0x18));
  if ((pFVar8[1] == (FOnlineSessionInfo)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::operator>>((FNboSerializeFromBuffer *)param_1,(FInternetAddr *)pFVar8[1]);
  local_88 = pFVar8;
  pFVar6 = ::operator_new(0x18);
  if (pFVar6 != (FUniqueNetIdNull *)0x0) {
    *(atomic<int> *)&pFVar6->field_0x8 = (atomic<int>)0x1;
    *(undefined ***)pFVar6 =
         &
         ___7__TReferenceControllerWithDeleter_VFOnlineSessionInfoNull__U__DefaultDeleter_VFOnlineSessionInfoNull___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(atomic<int> *)&pFVar6->field_0xc = (atomic<int>)0x1;
    *(FOnlineSessionInfo **)&pFVar6->field_0x10 = pFVar8;
    pFVar13 = pFVar6;
  }
  local_80.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
  if (&param_2->SessionInfo != (TSharedPtr<FOnlineSessionInfo,1> *)&local_88) {
    (param_2->SessionInfo).Object = pFVar8;
    local_88 = (FOnlineSessionInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_2->SessionInfo).SharedReferenceCount,&local_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ReferenceController);
  ReadSettingsFromPacket(this,param_1,&param_2->SessionSettings);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// ReadSettingsFromPacket @ 14ed2c440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineSessionNull::ReadSettingsFromPacket
          (FOnlineSessionNull *this,FNboSerializeFromBufferNull *param_1,
          FOnlineSessionSettings *param_2)

{
  undefined1 *puVar1;
  FName FVar2;
  bool bVar3;
  FName *pFVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  ForAnyElementType FVar8;
  undefined1 *puVar9;
  Type TVar10;
  int iVar11;
  int iVar12;
  FName local_res10;
  FString local_68;
  FOnlineSessionSetting local_58;
  
  bVar3 = 1 < *(int *)&(param_2->Settings).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
                      *)&param_2->Settings);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&param_2->Settings,0,*(int *)&(param_2->Settings).field_0x8);
  iVar12 = 0;
  puVar1 = &(param_2->Settings).field_0xc;
  *(undefined4 *)&(param_2->Settings).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)&param_2->Settings,0,(int *)puVar1);
  }
  *(undefined4 *)&(param_2->Settings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_2->Settings).field_0x34 = 0;
  iVar6 = *(int *)&(param_2->Settings).field_0x2c;
  *(undefined4 *)&(param_2->Settings).field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(param_2->Settings).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Settings).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(param_2->Settings).field_0x48 = 1;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
              *)&param_2->Settings);
  }
  puVar1 = &param_1->field_0xc;
  puVar9 = &param_1->field_0x8;
  if ((param_1->field_0x10 == '\0') && (*(int *)puVar1 + 4 <= *(int *)puVar9)) {
    puVar7 = (undefined1 *)((longlong)*(int *)puVar1 + *(longlong *)param_1);
    param_2->NumPublicConnections =
         CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
    *(int *)puVar1 = *(int *)puVar1 + 4;
  }
  else {
    param_1->field_0x10 = 1;
  }
  if ((param_1->field_0x10 == '\0') && (*(int *)puVar1 + 4 <= *(int *)puVar9)) {
    puVar7 = (undefined1 *)((longlong)*(int *)puVar1 + *(longlong *)param_1);
    param_2->NumPrivateConnections =
         CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
    *(int *)puVar1 = *(int *)puVar1 + 4;
  }
  else {
    param_1->field_0x10 = 1;
  }
  cVar5 = '\0';
  if (param_1->field_0x10 == '\0') {
    iVar6 = *(int *)puVar1 + 1;
    if (*(int *)puVar9 < iVar6) goto LAB_14ed2c5ab;
    cVar5 = *(char *)((longlong)*(int *)puVar1 + *(longlong *)param_1);
    *(int *)puVar1 = iVar6;
  }
  else {
LAB_14ed2c5ab:
    param_1->field_0x10 = 1;
  }
  puVar9 = &param_1->field_0xc;
  puVar1 = &param_1->field_0x8;
  param_2->bShouldAdvertise = cVar5 != '\0';
  if (param_1->field_0x10 == '\0') {
    iVar6 = *(int *)puVar9 + 1;
    if (*(int *)puVar1 < iVar6) goto LAB_14ed2c5dc;
    cVar5 = *(char *)((longlong)*(int *)puVar9 + *(longlong *)param_1);
    *(int *)puVar9 = iVar6;
  }
  else {
LAB_14ed2c5dc:
    param_1->field_0x10 = 1;
  }
  param_2->bIsLANMatch = cVar5 != '\0';
  if (param_1->field_0x10 == '\0') {
    iVar6 = *(int *)puVar9 + 1;
    if (*(int *)puVar1 < iVar6) goto LAB_14ed2c611;
    cVar5 = *(char *)((longlong)*(int *)puVar9 + *(longlong *)param_1);
    *(int *)puVar9 = iVar6;
  }
  else {
LAB_14ed2c611:
    param_1->field_0x10 = 1;
  }
  puVar9 = &param_1->field_0xc;
  param_2->bIsDedicated = cVar5 != '\0';
  if (param_1->field_0x10 == '\0') {
    iVar6 = *(int *)puVar9 + 1;
    if (*(int *)puVar1 < iVar6) goto LAB_14ed2c63e;
    cVar5 = *(char *)((longlong)*(int *)puVar9 + *(longlong *)param_1);
    *(int *)puVar9 = iVar6;
  }
  else {
LAB_14ed2c63e:
    param_1->field_0x10 = 1;
  }
  puVar1 = &param_1->field_0x8;
  param_2->bUsesStats = cVar5 != '\0';
  if (param_1->field_0x10 == '\0') {
    iVar6 = *(int *)puVar9 + 1;
    if (*(int *)puVar1 < iVar6) goto LAB_14ed2c677;
    cVar5 = *(char *)((longlong)*(int *)puVar9 + *(longlong *)param_1);
    *(int *)puVar9 = iVar6;
  }
  else {
LAB_14ed2c677:
    param_1->field_0x10 = 1;
  }
  puVar9 = &param_1->field_0xc;
  param_2->bAllowJoinInProgress = cVar5 != '\0';
  if (param_1->field_0x10 == '\0') {
    iVar6 = *(int *)puVar9 + 1;
    if (*(int *)puVar1 < iVar6) goto LAB_14ed2c6a4;
    cVar5 = *(char *)((longlong)*(int *)puVar9 + *(longlong *)param_1);
    *(int *)puVar9 = iVar6;
  }
  else {
LAB_14ed2c6a4:
    param_1->field_0x10 = 1;
  }
  param_2->bAllowInvites = cVar5 != '\0';
  if (param_1->field_0x10 == '\0') {
    iVar6 = *(int *)puVar9 + 1;
    if (*(int *)puVar1 < iVar6) goto LAB_14ed2c6d9;
    cVar5 = *(char *)((longlong)*(int *)puVar9 + *(longlong *)param_1);
    *(int *)puVar9 = iVar6;
  }
  else {
LAB_14ed2c6d9:
    param_1->field_0x10 = 1;
  }
  puVar9 = &param_1->field_0xc;
  puVar1 = &param_1->field_0x8;
  param_2->bUsesPresence = cVar5 != '\0';
  if (param_1->field_0x10 == '\0') {
    iVar6 = *(int *)puVar9 + 1;
    if (*(int *)puVar1 < iVar6) goto LAB_14ed2c70a;
    cVar5 = *(char *)((longlong)*(int *)puVar9 + *(longlong *)param_1);
    *(int *)puVar9 = iVar6;
  }
  else {
LAB_14ed2c70a:
    param_1->field_0x10 = 1;
  }
  param_2->bAllowJoinViaPresence = cVar5 != '\0';
  if (param_1->field_0x10 == '\0') {
    iVar6 = *(int *)puVar9 + 1;
    if (*(int *)puVar1 < iVar6) goto LAB_14ed2c73f;
    cVar5 = *(char *)((longlong)*(int *)puVar9 + *(longlong *)param_1);
    *(int *)puVar9 = iVar6;
  }
  else {
LAB_14ed2c73f:
    param_1->field_0x10 = 1;
  }
  puVar9 = &param_1->field_0xc;
  param_2->bAllowJoinViaPresenceFriendsOnly = cVar5 != '\0';
  if (param_1->field_0x10 == '\0') {
    iVar6 = *(int *)puVar9 + 1;
    if (*(int *)puVar1 < iVar6) goto LAB_14ed2c76c;
    cVar5 = *(char *)((longlong)*(int *)puVar9 + *(longlong *)param_1);
    *(int *)puVar9 = iVar6;
  }
  else {
LAB_14ed2c76c:
    param_1->field_0x10 = 1;
  }
  puVar1 = &param_1->field_0x8;
  param_2->bAntiCheatProtected = cVar5 != '\0';
  if ((param_1->field_0x10 == '\0') && (*(int *)puVar9 + 4 <= *(int *)puVar1)) {
    puVar7 = (undefined1 *)((longlong)*(int *)puVar9 + *(longlong *)param_1);
    param_2->BuildUniqueId = CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
    *(int *)puVar9 = *(int *)puVar9 + 4;
  }
  else {
    param_1->field_0x10 = 1;
  }
  puVar9 = &param_1->field_0xc;
  if (param_1->field_0x10 == '\0') {
    iVar6 = *(int *)puVar9 + 4;
    if (iVar6 <= *(int *)puVar1) {
      puVar7 = (undefined1 *)((longlong)*(int *)puVar9 + *(longlong *)param_1);
      iVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
      *(int *)puVar9 = iVar6;
      TVar10 = (Type)local_res10.ComparisonIndex.Value;
      if (0 < iVar11) {
        do {
          if (param_1->field_0x10 != '\0') break;
          local_58.Data.Type = Empty;
          local_58.Data.CachedEstimatedMaxEscapedStringSize = 0;
          local_58.AdvertisementType = DontAdvertise;
          local_58.Data.Value.AsInt64 = 0;
          local_58.Data.Value._8_8_ = 0;
          local_58.ID = -1;
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
          ::operator>>((FNboSerializeFromBuffer *)param_1,&local_68);
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_68.Data.ArrayNum != 0) {
            FVar8.Data = local_68.Data.AllocatorInstance.Data;
          }
          pFVar4 = ::FName::FName(&local_res10,(wchar_t *)FVar8.Data);
          FVar2 = *pFVar4;
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          ::operator>>((FNboSerializeFromBufferOSS *)param_1,&local_58.Data);
          if (param_1->field_0x10 == '\0') {
            iVar6 = *(int *)puVar9 + 1;
            if (*(int *)puVar1 < iVar6) {
              param_1->field_0x10 = 1;
              local_58.AdvertisementType = TVar10;
            }
            else {
              TVar10 = *(Type *)((longlong)*(int *)puVar9 + *(longlong *)param_1);
              *(int *)puVar9 = iVar6;
              local_58.AdvertisementType = TVar10;
            }
          }
          FOnlineSessionSettings::Set(param_2,FVar2,&local_58);
          FVariantData::Empty(&local_58.Data);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar11);
      }
      goto LAB_14ed2c923;
    }
  }
  param_1->field_0x10 = 1;
LAB_14ed2c923:
  if (param_1->field_0x10 != '\0') {
    bVar3 = 1 < *(int *)&(param_2->Settings).field_0x48;
    if (!bVar3) {
      TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
                        *)&param_2->Settings);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&param_2->Settings,0,*(int *)&(param_2->Settings).field_0x8);
    *(undefined4 *)&(param_2->Settings).field_0x8 = 0;
    if (*(int *)&(param_2->Settings).field_0xc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)&param_2->Settings,0,
                 (int *)&(param_2->Settings).field_0xc);
    }
    *(undefined4 *)&(param_2->Settings).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->Settings).field_0x34 = 0;
    iVar12 = *(int *)&(param_2->Settings).field_0x2c;
    *(undefined4 *)&(param_2->Settings).field_0x28 = 0;
    if ((iVar12 < 0) || (0x80 < iVar12)) {
      *(undefined4 *)&(param_2->Settings).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Settings).field_0x10,0);
    }
    if (bVar3) {
      *(undefined4 *)&(param_2->Settings).field_0x48 = 1;
      TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
                *)&param_2->Settings);
    }
    if (5 < (byte)LogOnlineSession._0_1_) {
      ::FString::PrintfImpl(&local_68,L"Packet overflow detected in ReadGameSettingsFromPacket()");
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RegisterLocalPlayer @ 14ed2cd70

void __thiscall
FOnlineSessionNull::RegisterLocalPlayer
          (FOnlineSessionNull *this,FUniqueNetId *param_1,FName param_2,
          TDelegate<void___cdecl(FUniqueNetId_const_&,EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
          *param_3)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_28);
  if ((*(int *)&param_3->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// RegisterLocalPlayers @ 14ed2cdd0

void __thiscall
FOnlineSessionNull::RegisterLocalPlayers(FOnlineSessionNull *this,FNamedOnlineSession *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  cVar2 = (**(code **)(this->NullSubsystem->_padding_ + 0x120))();
  if (cVar2 == '\0') {
    (**(code **)(this->NullSubsystem->_padding_ + 0x68))(this->NullSubsystem,&local_18);
    if (local_18 != (longlong *)0x0) {
      iVar4 = 0;
      do {
        if ((local_18 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (**(code **)(*local_18 + 0x38))(local_18,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return;
}

// RegisterPlayer @ 14ed2ce70

bool __thiscall
FOnlineSessionNull::RegisterPlayer
          (FOnlineSessionNull *this,FName param_1,FUniqueNetId *param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TSharedRef<FUniqueNetId_const_,1> *pTVar6;
  ForAnyElementType local_28;
  undefined8 local_20;
  TSharedRef<FUniqueNetId_const_,1> local_18;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  pTVar6 = TSharedFromThis<FUniqueNetId,1>::AsShared
                     ((TSharedFromThis<FUniqueNetId,1> *)&param_2->field_0x8,&local_18);
  if (((local_28.Data <= pTVar6) &&
      (pTVar6 < (TSharedRef<FUniqueNetId_const_,1> *)
                (local_28.Data + (longlong)local_20._4_4_ * 0x10))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (int)local_20;
  if ((int)local_20 == local_20._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_28,(int *)((longlong)&local_20 + 4));
  }
  local_20 = CONCAT44(local_20._4_4_,iVar5 + 1);
  *(FUniqueNetId **)&local_28.Data[(longlong)iVar5 * 0x10].field_0x0 = pTVar6->Object;
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(local_28.Data + (longlong)iVar5 * 0x10 + 8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  uVar4 = (**(code **)(this->_padding_ + 0x398))(this,param_1,&local_28,param_3);
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)local_28.Data,(int)local_20);
  if ((TSharedRef<FUniqueNetId_const_,1> *)local_28.Data != (TSharedRef<FUniqueNetId_const_,1> *)0x0
     ) {
    FMemory::Free(local_28.Data);
  }
  return (bool)uVar4;
}

// RegisterPlayers @ 14ed2cfc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineSessionNull::RegisterPlayers
          (FOnlineSessionNull *this,FName param_1,
          TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FName local_res10;
  TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *local_res18;
  bool local_98;
  longlong local_90;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  FString local_58;
  FString local_48;
  
  bVar6 = false;
  local_res10 = param_1;
  local_res18 = param_2;
  lVar11 = (**(code **)(this->_padding_ + 0x20))();
  if (lVar11 == 0) {
    if (2 < (byte)LogOnlineSession._0_1_) {
      ::FName::ToString(&local_res10,&local_48);
      ::FString::PrintfImpl(&local_78,L"No game present to join for session (%s)");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar10 = param_2->ArrayNum;
    uVar13 = 0;
    local_98 = true;
    bVar6 = true;
    if (0 < iVar10) {
      pFVar1 = (ForAnyElementType *)(lVar11 + 0x138);
      local_90 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar13 < iVar10) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar10 = *(int *)(lVar11 + 0x140);
        pFVar14 = (param_2->AllocatorInstance).Data + local_90;
        pFVar2 = pFVar1->Data;
        puVar3 = *(undefined8 **)pFVar14;
        for (pFVar12 = pFVar2; pFVar12 != pFVar2 + (longlong)iVar10 * 0x10; pFVar12 = pFVar12 + 0x10
            ) {
          cVar8 = (**(code **)*puVar3)(puVar3,*(undefined8 *)pFVar12);
          if (cVar8 != '\0') {
            if ((int)((longlong)pFVar12 - (longlong)pFVar2 >> 4) != -1) {
              RegisterVoice(this,*(FUniqueNetId **)pFVar14);
              if (4 < (byte)LogOnlineSession._0_1_) {
                ::FName::ToString(&local_res10,&local_58);
                (**(code **)(**(longlong **)pFVar14 + 0x38))(*(longlong **)pFVar14,local_68);
                ::FString::PrintfImpl(&local_88,L"Player %s already registered in session %s");
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
                if (local_68[0] != (void *)0x0) {
                  FMemory::Free(local_68[0]);
                }
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
              }
              goto LAB_14ed2d282;
            }
            break;
          }
        }
        if (((pFVar1->Data <= pFVar14) &&
            (pFVar14 < pFVar1->Data + (longlong)*(int *)(lVar11 + 0x144) * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar10 = *(int *)(lVar11 + 0x140);
        if (iVar10 == *(int *)(lVar11 + 0x144)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,pFVar1,(int *)(lVar11 + 0x144));
        }
        *(int *)(lVar11 + 0x140) = iVar10 + 1;
        pFVar2 = pFVar1->Data;
        *(undefined8 *)(pFVar2 + (longlong)iVar10 * 0x10) = *(undefined8 *)pFVar14;
        lVar4 = *(longlong *)(pFVar14 + 8);
        *(longlong *)(pFVar2 + (longlong)iVar10 * 0x10 + 8) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        RegisterVoice(this,*(FUniqueNetId **)pFVar14);
        if (*(int *)(lVar11 + 0x114) < 1) {
          if (0 < *(int *)(lVar11 + 0x110)) {
            *(int *)(lVar11 + 0x110) = *(int *)(lVar11 + 0x110) + -1;
          }
        }
        else {
          *(int *)(lVar11 + 0x114) = *(int *)(lVar11 + 0x114) + -1;
        }
LAB_14ed2d282:
        uVar13 = uVar13 + 1;
        local_90 = local_90 + 0x10;
        iVar10 = local_res18->ArrayNum;
        param_2 = local_res18;
        bVar6 = local_98;
      } while ((int)uVar13 < iVar10);
    }
  }
  (**(code **)(this->_padding_ + 0x3b8))(this,local_res10,param_2,bVar6);
  return bVar6;
}

// RegisterVoice @ 14ed2d3b0

void __thiscall FOnlineSessionNull::RegisterVoice(FOnlineSessionNull *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->NullSubsystem->_padding_ + 0x68))(this->NullSubsystem,&local_18);
  if (local_18 != (longlong *)0x0) {
    cVar2 = (**(code **)(this->NullSubsystem->_padding_ + 0x138))(this->NullSubsystem,param_1);
    if (cVar2 == '\0') {
      if ((local_18 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*local_18 + 0x58))(local_18,param_1);
    }
    else {
      if ((local_18 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*local_18 + 8))();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// RemoveNamedSession @ 14ed2e300

void __thiscall FOnlineSessionNull::RemoveNamedSession(FOnlineSessionNull *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FNamedOnlineSession,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  lpCriticalSection = &this->SessionLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar4 = 0;
  if (0 < (this->Sessions).ArrayNum) {
    lVar5 = 0;
    this_00 = &this->Sessions;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Sessions).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(FName *)((this_00->AllocatorInstance).Data + lVar5 + 0x118) == param_1) {
        uVar3 = 0;
        if ((int)uVar4 < (this->Sessions).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<FNamedOnlineSession,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar4);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x150,8,&this_00->AllocatorInstance,(this->Sessions).ArrayNum,
                   &(this->Sessions).ArrayMax);
        break;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x150;
    } while ((int)uVar4 < (this->Sessions).ArrayNum);
  }
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014ed2e499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SendSessionInviteToFriend @ 14ed2ed70

bool __thiscall
FOnlineSessionNull::SendSessionInviteToFriend
          (FOnlineSessionNull *this,FUniqueNetId *param_1,FName param_2,FUniqueNetId *param_3)

{
  return false;
}

// SendSessionInviteToFriend @ 14ed2ed80

bool __thiscall
FOnlineSessionNull::SendSessionInviteToFriend
          (FOnlineSessionNull *this,int param_1,FName param_2,FUniqueNetId *param_3)

{
  return false;
}

// SendSessionInviteToFriends @ 14ed2ed90

bool __thiscall
FOnlineSessionNull::SendSessionInviteToFriends
          (FOnlineSessionNull *this,FUniqueNetId *param_1,FName param_2,
          TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  return false;
}

// SendSessionInviteToFriends @ 14ed2eda0

bool __thiscall
FOnlineSessionNull::SendSessionInviteToFriends
          (FOnlineSessionNull *this,int param_1,FName param_2,
          TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  return false;
}

// SetPortFromNetDriver @ 14ed2edb0

void __cdecl
FOnlineSessionNull::SetPortFromNetDriver
          (FOnlineSubsystemNull *param_1,TSharedPtr<FOnlineSessionInfo,1> *param_2)

{
  FOnlineSessionInfo *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  FName *pFVar4;
  undefined1 local_res8 [32];
  
  pFVar4 = (FName *)(**(code **)(param_1->_padding_ + 0x18))(param_1,local_res8);
  iVar3 = GetPortFromNetDriver(*pFVar4);
  pFVar1 = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar1 != (FOnlineSessionInfo *)0x0) && (pFVar1[1] != (FOnlineSessionInfo)0x0)) {
    (**(code **)(*(longlong *)pFVar1[1] + 0x28))(pFVar1[1],iVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// StartMatchmaking @ 14ed2f620

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineSessionNull::StartMatchmaking
          (FOnlineSessionNull *this,
          TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *param_1,
          FName param_2,FOnlineSessionSettings *param_3,TSharedRef<FOnlineSessionSearch,1> *param_4)

{
  FString local_18;
  
  if (2 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl
              (&local_18,
               L"StartMatchmaking is not supported on this platform. Use FindSessions or FindSessionById."
              );
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x140))(this,param_2,0);
  return false;
}

// StartSession @ 14ed2f6b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineSessionNull::StartSession(FOnlineSessionNull *this,FName param_1)

{
  Type TVar1;
  uint uVar2;
  longlong lVar3;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  uVar2 = 0xffffffff;
  local_res10 = param_1;
  lVar3 = (**(code **)(this->_padding_ + 0x20))();
  if (lVar3 == 0) {
    if (2 < (byte)LogOnlineSession._0_1_) {
      ::FName::ToString(&local_res10,&local_18);
      ::FString::PrintfImpl
                (&local_28,L"Can\'t start an online game for session (%s) that hasn\'t been created"
                );
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
LAB_14ed2f804:
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    TVar1 = *(Type *)(lVar3 + 0x148);
    if ((TVar1 == Pending) || (TVar1 == Ended)) {
      uVar2 = UpdateLANStatus(this);
      *(undefined4 *)(lVar3 + 0x148) = 4;
      if (uVar2 == 0x3e5) goto LAB_14ed2f839;
    }
    else if (2 < (byte)LogOnlineSession._0_1_) {
      EOnlineSessionState::ToString(TVar1);
      ::FName::ToString(&local_res10,&local_18);
      ::FString::PrintfImpl(&local_28,L"Can\'t start an online session (%s) in state %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
      goto LAB_14ed2f804;
    }
  }
  (**(code **)(this->_padding_ + 0x90))(this,local_res10,uVar2 == 0);
LAB_14ed2f839:
  if ((uVar2 != 0) && (uVar2 != 0x3e5)) {
    return false;
  }
  return true;
}

// Tick @ 14ed2fb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineSessionNull::Tick(FOnlineSessionNull *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_Session_Interface> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38 [2];
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_Session_Interface;
  if (StatPtr_STAT_Session_Interface == (FThreadSafeStaticStat<FStat_STAT_Session_Interface>)0x0) {
    pFVar4 = ::FName::FName(&local_res18,"STAT_Session_Interface");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_Session_Interface>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Session_Interface,*pFVar4,
                       L"SessionInt","STATGROUP_Online","STATCAT_Advanced",L"Online",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    FLANSession::Tick(&this->LANSessionManager,param_1);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSessionInterfaceNull.cpp"
                   ,0x3de);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    FLANSession::Tick(&this->LANSessionManager,param_1);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38[0].NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_38[0].NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_38[0].StatData.Pad[4] = '\0';
        local_38[0].StatData.Pad[5] = '\0';
        local_38[0].StatData.Pad[6] = '\0';
        local_38[0].StatData.Pad[7] = '\0';
        local_38[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_38[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_38[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_38[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,local_38);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// TickLanTasks @ 14ed30170

void __thiscall FOnlineSessionNull::TickLanTasks(FOnlineSessionNull *this,float param_1)

{
  FLANSession::Tick(&this->LANSessionManager,param_1);
  return;
}

// UnregisterLocalPlayer @ 14ed326f0

void __thiscall
FOnlineSessionNull::UnregisterLocalPlayer
          (FOnlineSessionNull *this,FUniqueNetId *param_1,FName param_2,
          TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_28);
  if ((*(int *)&param_3->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// UnregisterPlayer @ 14ed32750

bool __thiscall
FOnlineSessionNull::UnregisterPlayer(FOnlineSessionNull *this,FName param_1,FUniqueNetId *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TSharedRef<FUniqueNetId_const_,1> *pTVar6;
  ForAnyElementType local_28;
  undefined8 local_20;
  TSharedRef<FUniqueNetId_const_,1> local_18;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  pTVar6 = TSharedFromThis<FUniqueNetId,1>::AsShared
                     ((TSharedFromThis<FUniqueNetId,1> *)&param_2->field_0x8,&local_18);
  if (((local_28.Data <= pTVar6) &&
      (pTVar6 < (TSharedRef<FUniqueNetId_const_,1> *)
                (local_28.Data + (longlong)local_20._4_4_ * 0x10))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (int)local_20;
  if ((int)local_20 == local_20._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_28,(int *)((longlong)&local_20 + 4));
  }
  local_20 = CONCAT44(local_20._4_4_,iVar5 + 1);
  *(FUniqueNetId **)&local_28.Data[(longlong)iVar5 * 0x10].field_0x0 = pTVar6->Object;
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(local_28.Data + (longlong)iVar5 * 0x10 + 8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  uVar4 = (**(code **)(this->_padding_ + 0x3c8))(this,param_1,&local_28);
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)local_28.Data,(int)local_20);
  if ((TSharedRef<FUniqueNetId_const_,1> *)local_28.Data != (TSharedRef<FUniqueNetId_const_,1> *)0x0
     ) {
    FMemory::Free(local_28.Data);
  }
  return (bool)uVar4;
}

// UnregisterPlayers @ 14ed32890

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineSessionNull::UnregisterPlayers
          (FOnlineSessionNull *this,FName param_1,
          TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  FName local_res10;
  TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_res20;
  longlong local_b8;
  longlong *local_b0;
  TReferenceControllerBase<1> *local_a8;
  FString local_a0;
  FString local_90;
  void *local_80 [2];
  FString local_70;
  FString local_60 [2];
  
  bVar5 = true;
  local_res10 = param_1;
  local_res18 = param_2;
  lVar9 = (**(code **)(this->_padding_ + 0x20))();
  if (lVar9 == 0) {
    if (2 < (byte)LogOnlineSession._0_1_) {
      ::FName::ToString(&local_res10,local_60);
      ::FString::PrintfImpl(&local_90,L"No game present to leave for session (%s)");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
  }
  else {
    iVar10 = param_2->ArrayNum;
    local_res20 = 0;
    if (0 < iVar10) {
      local_b8 = 0;
      do {
        uVar11 = 0;
        if ((int)local_res20 < iVar10) {
          uVar11 = ~local_res20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        puVar1 = *(undefined8 **)(lVar9 + 0x138);
        pFVar13 = (param_2->AllocatorInstance).Data + local_b8;
        iVar10 = *(int *)(lVar9 + 0x140);
        puVar2 = *(undefined8 **)pFVar13;
        for (puVar12 = puVar1; puVar12 != puVar1 + (longlong)iVar10 * 2; puVar12 = puVar12 + 2) {
          cVar7 = (**(code **)*puVar2)(puVar2,*puVar12);
          if (cVar7 != '\0') {
            uVar11 = (uint)((longlong)puVar12 - (longlong)puVar1 >> 4);
            if (uVar11 != 0xffffffff) {
              uVar8 = 0;
              if ((int)uVar11 < *(int *)(lVar9 + 0x140)) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
              RemoveAtSwapImpl((TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>
                                *)(lVar9 + 0x138),uVar11);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,(ForAnyElementType *)(lVar9 + 0x138),*(int *)(lVar9 + 0x140),
                         (int *)(lVar9 + 0x144));
              uVar3 = *(undefined8 *)pFVar13;
              (**(code **)(this->NullSubsystem->_padding_ + 0x68))(this->NullSubsystem,&local_b0);
              if (((local_b0 != (longlong *)0x0) &&
                  (cVar7 = (**(code **)(this->NullSubsystem->_padding_ + 0x138))
                                     (this->NullSubsystem,uVar3), cVar7 == '\0')) &&
                 (local_b0 != (longlong *)0x0)) {
                if ((local_b0 == (longlong *)0x0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                (**(code **)(*local_b0 + 0x60))(local_b0,uVar3);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_a8);
              if (*(int *)(lVar9 + 0x114) < *(int *)(lVar9 + 0x30)) {
                *(int *)(lVar9 + 0x114) = *(int *)(lVar9 + 0x114) + 1;
              }
              else if (*(int *)(lVar9 + 0x110) < *(int *)(lVar9 + 0x34)) {
                *(int *)(lVar9 + 0x110) = *(int *)(lVar9 + 0x110) + 1;
              }
              goto LAB_14ed32b92;
            }
            break;
          }
        }
        if (2 < (byte)LogOnlineSession._0_1_) {
          ::FName::ToString(&local_res10,&local_70);
          (**(code **)(**(longlong **)pFVar13 + 0x38))(*(longlong **)pFVar13,local_80);
          ::FString::PrintfImpl(&local_a0,L"Player %s is not part of session (%s)");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          if (local_80[0] != (void *)0x0) {
            FMemory::Free(local_80[0]);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
LAB_14ed32b92:
        local_res20 = local_res20 + 1;
        local_b8 = local_b8 + 0x10;
        iVar10 = local_res18->ArrayNum;
        param_2 = local_res18;
      } while ((int)local_res20 < iVar10);
      bVar5 = true;
    }
  }
  (**(code **)(this->_padding_ + 1000))(this,local_res10,param_2,bVar5);
  return bVar5;
}

// UnregisterVoice @ 14ed32c90

void __thiscall FOnlineSessionNull::UnregisterVoice(FOnlineSessionNull *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->NullSubsystem->_padding_ + 0x68))(this->NullSubsystem,&local_18);
  if (((local_18 != (longlong *)0x0) &&
      (cVar2 = (**(code **)(this->NullSubsystem->_padding_ + 0x138))(this->NullSubsystem,param_1),
      cVar2 == '\0')) && (local_18 != (longlong *)0x0)) {
    if ((local_18 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*local_18 + 0x60))(local_18,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// UpdateLANStatus @ 14ed32d40

uint __thiscall FOnlineSessionNull::UpdateLANStatus(FOnlineSessionNull *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  Type TVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  uint uVar9;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  lpCriticalSection = &this->SessionLock;
  uVar5 = 0;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar3 = false;
  uVar9 = 0;
  if (0 < (this->Sessions).ArrayNum) {
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->Sessions).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      bVar4 = NeedsToAdvertise(this,(FNamedOnlineSession *)
                                    ((this->Sessions).AllocatorInstance.Data +
                                    (longlong)(int)uVar9 * 0x150));
      if (bVar4) {
        bVar3 = true;
        break;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (this->Sessions).ArrayNum);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  TVar1 = (this->LANSessionManager).LanBeaconState;
  if (bVar3) {
    uVar5 = 0;
    if (TVar1 == NotUsingLanBeacon) {
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_38);
      local_20 = &local_60;
      puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAEH_K_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFOnlineSessionNull____A6AXPEAEH_K_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar7[4] = OnValidQueryPacketReceived;
        puVar7[3] = this;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      bVar3 = FLANSession::Host(&this->LANSessionManager,
                                (TDelegate<void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
                                 *)local_68);
      uVar5 = 0;
      if (!bVar3) {
        uVar5 = 0xffffffff;
        FLANSession::StopLANSession(&this->LANSessionManager);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
  }
  else if (TVar1 != Searching) {
    FLANSession::StopLANSession(&this->LANSessionManager);
  }
  return uVar5;
}

// UpdateSession @ 14ed32fa0

bool __thiscall
FOnlineSessionNull::UpdateSession
          (FOnlineSessionNull *this,FName param_1,FOnlineSessionSettings *param_2,bool param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x30) = param_2->NumPublicConnections;
    *(int *)(lVar1 + 0x34) = param_2->NumPrivateConnections;
    *(bool *)(lVar1 + 0x38) = param_2->bShouldAdvertise;
    *(bool *)(lVar1 + 0x39) = param_2->bAllowJoinInProgress;
    *(bool *)(lVar1 + 0x3a) = param_2->bIsLANMatch;
    *(bool *)(lVar1 + 0x3b) = param_2->bIsDedicated;
    *(bool *)(lVar1 + 0x3c) = param_2->bUsesStats;
    *(bool *)(lVar1 + 0x3d) = param_2->bAllowInvites;
    *(bool *)(lVar1 + 0x3e) = param_2->bUsesPresence;
    *(bool *)(lVar1 + 0x3f) = param_2->bAllowJoinViaPresence;
    *(bool *)(lVar1 + 0x40) = param_2->bAllowJoinViaPresenceFriendsOnly;
    *(bool *)(lVar1 + 0x41) = param_2->bAntiCheatProtected;
    *(bool *)(lVar1 + 0x42) = param_2->bUseLobbiesIfAvailable;
    *(bool *)(lVar1 + 0x43) = param_2->bUseLobbiesVoiceChatIfAvailable;
    ::FString::operator=((FString *)(lVar1 + 0x48),&param_2->SessionIdOverride);
    *(int *)(lVar1 + 0x58) = param_2->BuildUniqueId;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
                 *)(lVar1 + 0x60),
                (TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
                 *)&param_2->Settings);
    if ((TMap<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>
         *)(lVar1 + 0xb0) != &param_2->MemberSettings) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)(lVar1 + 0xe8),(int *)(lVar1 + 0xf8),
                 (ForElementType<FSetElementId> *)&(param_2->MemberSettings).field_0x38,
                 *(int *)&(param_2->MemberSettings).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(lVar1 + 0xb0),
                  (TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&param_2->MemberSettings);
    }
    (**(code **)(this->_padding_ + 0xb8))(this,param_1,1);
  }
  return true;
}

