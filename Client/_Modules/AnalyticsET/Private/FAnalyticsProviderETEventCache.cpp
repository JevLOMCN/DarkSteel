// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 19

// FAnalyticsProviderETEventCache @ 143193410

FAnalyticsProviderETEventCache * __thiscall
FAnalyticsProviderETEventCache::FAnalyticsProviderETEventCache
          (FAnalyticsProviderETEventCache *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  this->MaximumPayloadSize = param_1;
  piVar1 = &(this->CachedEventEntries).ArrayMax;
  this->PreallocatedPayloadSize = param_2;
  piVar2 = &(this->FlushQueue).ArrayMax;
  (this->CachedEventEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedEventEntries).ArrayNum = 0;
  (this->CachedEventUTF8Stream).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedEventUTF8Stream).ArrayNum = 0;
  (this->CachedEventUTF8Stream).ArrayMax = 0;
  (this->CachedDefaultAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDefaultAttributes).ArrayNum = 0;
  (this->CachedDefaultAttributes).ArrayMax = 0;
  (this->CachedDefaultAttributeUTF8Stream).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDefaultAttributeUTF8Stream).ArrayNum = 0;
  (this->CachedDefaultAttributeUTF8Stream).ArrayMax = 0;
  (this->FlushQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FlushQueue).ArrayNum = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CachedEventsCS,4000);
  if (*piVar2 < 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,4,&(this->FlushQueue).AllocatorInstance,(this->FlushQueue).ArrayNum,piVar2);
  }
  if (*piVar1 < 100) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,100,&(this->CachedEventEntries).AllocatorInstance,
               (this->CachedEventEntries).ArrayNum,piVar1);
  }
  if (this->MaximumPayloadSize < 0) {
    this->MaximumPayloadSize = 0x19000;
    FConfigCacheIni::GetInt
              (GConfig,L"AnalyticsProviderETEventCache",L"MaximumPayloadSize",
               &this->MaximumPayloadSize,&GEngineIni);
  }
  iVar3 = this->PreallocatedPayloadSize;
  if (iVar3 < 0) {
    iVar3 = this->MaximumPayloadSize;
    this->PreallocatedPayloadSize = iVar3;
  }
  EventCacheStatic::InitializePayloadBuffer(&this->CachedEventUTF8Stream,iVar3);
  return this;
}

// ~FAnalyticsProviderETEventCache @ 143193f70

void __thiscall
FAnalyticsProviderETEventCache::~FAnalyticsProviderETEventCache
          (FAnalyticsProviderETEventCache *this)

{
  FScriptContainerElement *pFVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CachedEventsCS);
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (this->FlushQueue).AllocatorInstance.Data,(this->FlushQueue).ArrayNum);
  pFVar1 = (this->FlushQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedDefaultAttributeUTF8Stream).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)(this->CachedDefaultAttributes).AllocatorInstance.Data,
             (this->CachedDefaultAttributes).ArrayNum);
  pFVar1 = (this->CachedDefaultAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedEventUTF8Stream).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAnalyticsProviderETEventCache::FAnalyticsEventEntry,int>
            ((FAnalyticsEventEntry *)(this->CachedEventEntries).AllocatorInstance.Data,
             (this->CachedEventEntries).ArrayNum);
  pFVar1 = (this->CachedEventEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddToCache @ 143195110

void __thiscall
FAnalyticsProviderETEventCache::AddToCache(FAnalyticsProviderETEventCache *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  local_18.Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  AddToCache(this,&local_18,&local_28);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_28.AllocatorInstance.Data != (FAnalyticsEventAttribute *)0x0
     ) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddToCache @ 143195190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014319595d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnalyticsProviderETEventCache::AddToCache
          (FAnalyticsProviderETEventCache *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char *pcVar5;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar6;
  FAnalyticsProviderETEventCache *pFVar7;
  FString *pFVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStackY_508 [32];
  FScriptContainerElement local_4b8;
  FScriptContainerElement local_4b7;
  FScriptContainerElement local_4b6;
  FScriptContainerElement local_4b5;
  undefined1 local_4b4 [4];
  FScriptContainerElement *local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  int local_498;
  int local_494;
  int local_490;
  int local_48c;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *local_488;
  FAnalyticsProviderETEventCache *local_480;
  FString *local_478;
  TStringBuilderWithBuffer<wchar_t,512> local_468;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_508;
  local_488 = param_2;
  local_480 = this;
  local_478 = param_1;
  if ((&this->CachedEventsCS == (FWindowsRecursiveMutex *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CachedEventsCS);
  iVar11 = (this->CachedDefaultAttributeUTF8Stream).ArrayNum;
  iVar12 = (param_1->Data).ArrayNum;
  iVar10 = EventCacheStatic::ComputeAttributeSize(param_2);
  this_00 = &this->CachedEventUTF8Stream;
  piVar1 = &(this->CachedEventUTF8Stream).ArrayNum;
  iVar15 = iVar12 + -1 + iVar10;
  if (iVar12 == 0) {
    iVar15 = iVar10;
  }
  iVar15 = iVar11 + 0x2e + iVar15;
  if (this->MaximumPayloadSize < (iVar15 * 0xb) / 10 + (this->CachedEventUTF8Stream).ArrayNum) {
    if (6 < (byte)LogAnalytics._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
    }
    QueueFlush(this);
  }
  local_48c = (this->CachedEventUTF8Stream).ArrayNum;
  uVar16 = local_48c + 10 + iVar15;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar2 = &(this->CachedEventUTF8Stream).ArrayMax;
  if ((this->CachedEventUTF8Stream).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar16,&this_00->AllocatorInstance,local_48c,piVar2);
  }
  local_468._padding_ = (longlong)local_468.StringBuffer;
  local_468._padding_ = (longlong)local_468.StringBuffer;
  local_468._padding_._0_2_ = 0;
  local_468._padding_ = (longlong)local_48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,(this->CachedEventUTF8Stream).ArrayNum + -2,No);
  if (0 < (this->CachedEventEntries).ArrayNum) {
    pFVar13 = (this_00->AllocatorInstance).Data;
    local_4b8 = (FScriptContainerElement)0x2c;
    if (((pFVar13 <= &local_4b8) && (&local_4b8 < pFVar13 + *piVar2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = *piVar1;
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&this_00->AllocatorInstance,piVar2);
    }
    *piVar1 = iVar11 + 1;
    (this_00->AllocatorInstance).Data[iVar11] = local_4b8;
  }
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,0xd,&this_00->AllocatorInstance,piVar1,piVar2);
  pFVar13 = (this_00->AllocatorInstance).Data + iVar11;
  *(undefined8 *)pFVar13 = s___EventName__._0_8_;
  *(undefined4 *)(pFVar13 + 8) = s___EventName__._8_4_;
  pFVar13[0xc] = (FScriptContainerElement)s___EventName__[0xc];
  local_468._padding_ = local_468._padding_;
  AppendEscapeJsonString<TStringBuilderWithBuffer<wchar_t,512>_>(&local_468,param_1);
  EventCacheStatic::AppendString
            (this_00,(wchar_t *)local_468._padding_,
             (int)(local_468._padding_ - local_468._padding_ >> 1));
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,0xf,&this_00->AllocatorInstance,piVar1,piVar2);
  pFVar13 = (this_00->AllocatorInstance).Data + iVar11;
  *(undefined8 *)pFVar13 = s___DateOffset___._0_8_;
  *(undefined4 *)(pFVar13 + 8) = s___DateOffset___._8_4_;
  *(undefined2 *)(pFVar13 + 0xc) = s___DateOffset___._12_2_;
  pFVar13[0xe] = (FScriptContainerElement)s___DateOffset___[0xe];
  local_490 = (this->CachedEventUTF8Stream).ArrayNum;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,0xe,&this_00->AllocatorInstance,piVar1,piVar2);
  pFVar13 = (this_00->AllocatorInstance).Data + iVar11;
  *(undefined8 *)pFVar13 = _s__00_00_00_000_;
  *(undefined4 *)(pFVar13 + 8) = DAT_150a64b28;
  *(undefined2 *)(pFVar13 + 0xc) = DAT_150a64b2c;
  if ((this_00 == &this->CachedDefaultAttributeUTF8Stream) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = (this->CachedDefaultAttributeUTF8Stream).ArrayNum;
  if (iVar11 != 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar11,&this_00->AllocatorInstance,piVar1,piVar2);
    memcpy((this_00->AllocatorInstance).Data + iVar12,
           (this->CachedDefaultAttributeUTF8Stream).AllocatorInstance.Data,(longlong)iVar11);
  }
  pTVar6 = local_488;
  iVar11 = local_488->ArrayNum;
  pFVar13 = (local_488->AllocatorInstance).Data;
  pFVar14 = pFVar13 + (longlong)iVar11 * 0x30;
  while( true ) {
    if (pTVar6->ArrayNum != iVar11) {
      local_4b4[0] = 0;
      `TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_4b4);
    }
    pFVar8 = local_478;
    pFVar7 = local_480;
    pFVar3 = (this_00->AllocatorInstance).Data;
    if (pFVar13 == pFVar14) {
      local_4b5 = (FScriptContainerElement)0x7d;
      lpCriticalSection = &local_480->CachedEventsCS;
      if (((pFVar3 <= &local_4b5) && (&local_4b5 < pFVar3 + *piVar2)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = *piVar1;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&this_00->AllocatorInstance,piVar2);
      }
      *piVar1 = iVar11 + 1;
      (this_00->AllocatorInstance).Data[iVar11] = local_4b5;
      pcVar5 = EventCacheStatic::PayloadTrailer;
      if ((EventCacheStatic::PayloadTrailer == (char *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,2,&this_00->AllocatorInstance,piVar1,piVar2);
      *(undefined2 *)((this_00->AllocatorInstance).Data + iVar11) = *(undefined2 *)pcVar5;
      local_4b0 = (pFVar8->Data).AllocatorInstance.Data;
      iVar11 = (pFVar7->CachedEventUTF8Stream).ArrayNum;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4a8._0_4_ = (pFVar8->Data).ArrayNum;
      local_4a8._4_4_ = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
      FDateTime::UtcNow();
      local_494 = iVar11 - local_48c;
      pFVar13 = (pFVar7->CachedEventEntries).AllocatorInstance.Data;
      local_498 = local_490;
      if (((pFVar13 <= (FScriptContainerElement *)&local_4b0) &&
          ((FScriptContainerElement *)&local_4b0 <
           pFVar13 + (longlong)(pFVar7->CachedEventEntries).ArrayMax * 0x20)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (pFVar7->CachedEventEntries).ArrayNum;
      piVar1 = &(pFVar7->CachedEventEntries).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(pFVar7->CachedEventEntries).AllocatorInstance,piVar1);
      }
      (pFVar7->CachedEventEntries).ArrayNum = iVar11 + 1;
      pFVar13 = (pFVar7->CachedEventEntries).AllocatorInstance.Data + (longlong)iVar11 * 0x20;
      *(undefined8 *)pFVar13 = 0;
      *(FScriptContainerElement **)pFVar13 = local_4b0;
      *(undefined4 *)(pFVar13 + 8) = (undefined4)local_4a8;
      *(undefined4 *)(pFVar13 + 0xc) = local_4a8._4_4_;
      *(undefined8 *)(pFVar13 + 0x10) = local_4a0;
      *(int *)(pFVar13 + 0x18) = local_498;
      *(int *)(pFVar13 + 0x1c) = local_494;
      local_4a8 = 0;
      local_4b0 = (FScriptContainerElement *)0x0;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                ((TStringBuilderBase<wchar_t> *)&local_468);
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      pFVar13 = (pFVar8->Data).AllocatorInstance.Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      return;
    }
    local_4b7 = (FScriptContainerElement)0x2c;
    if (((pFVar3 <= &local_4b7) && (&local_4b7 < pFVar3 + *piVar2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar12 = *piVar1;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&this_00->AllocatorInstance,piVar2);
    }
    *piVar1 = iVar12 + 1;
    (this_00->AllocatorInstance).Data[iVar12] = local_4b7;
    local_468._padding_ = local_468._padding_;
    AppendEscapeJsonString<TStringBuilderWithBuffer<wchar_t,512>_>(&local_468,(FString *)pFVar13);
    EventCacheStatic::AppendString
              (this_00,(wchar_t *)local_468._padding_,
               (int)(local_468._padding_ - local_468._padding_ >> 1));
    pFVar3 = (this_00->AllocatorInstance).Data;
    local_4b6 = (FScriptContainerElement)0x3a;
    if (((pFVar3 <= &local_4b6) && (&local_4b6 < pFVar3 + *piVar2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    iVar12 = *piVar1;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&this_00->AllocatorInstance,piVar2);
    }
    *piVar1 = iVar12 + 1;
    (this_00->AllocatorInstance).Data[iVar12] = local_4b6;
    if (*(int *)(pFVar13 + 0x2c) == 4) {
      if (*(int *)(pFVar13 + 0x18) == 0) {
        EventCacheStatic::AppendString(this_00,L"",0);
        pFVar13 = pFVar13 + 0x30;
      }
      else {
        EventCacheStatic::AppendString
                  (this_00,*(wchar_t **)&pFVar13[0x10].field_0x0,*(int *)(pFVar13 + 0x18) + -1);
        pFVar13 = pFVar13 + 0x30;
      }
    }
    else {
      local_468._padding_ = local_468._padding_;
      AppendEscapeJsonString<TStringBuilderWithBuffer<wchar_t,512>_>
                (&local_468,(FString *)(pFVar13 + 0x10));
      EventCacheStatic::AppendString
                (this_00,(wchar_t *)local_468._padding_,
                 (int)(local_468._padding_ - local_468._padding_ >> 1));
      pFVar13 = pFVar13 + 0x30;
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// CanFlush @ 143197190

bool __thiscall FAnalyticsProviderETEventCache::CanFlush(FAnalyticsProviderETEventCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  lpCriticalSection = &this->CachedEventsCS;
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
  if (((this->CachedEventEntries).ArrayNum < 1) && ((this->FlushQueue).ArrayNum < 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar2;
}

// CloneForImmediateMode @ 143197480

TSharedRef<FAnalyticsProviderETEventCache,1> * __thiscall
FAnalyticsProviderETEventCache::CloneForImmediateMode
          (FAnalyticsProviderETEventCache *this,
          TSharedRef<FAnalyticsProviderETEventCache,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FAnalyticsProviderETEventCache,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x90);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FAnalyticsProviderETEventCache *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAnalyticsProviderETEventCache___00_SharedPointerInternals__6B_
    ;
    FAnalyticsProviderETEventCache
              ((FAnalyticsProviderETEventCache *)(pTVar3 + 1),this->MaximumPayloadSize,
               this->PreallocatedPayloadSize);
    __return_storage_ptr__->Object = (FAnalyticsProviderETEventCache *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FAnalyticsProviderETEventCache *)(pTVar3 + 1) == (FAnalyticsProviderETEventCache *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FAnalyticsProviderETEventCache,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->Object->CachedDefaultAttributeUTF8Stream,
             &this->CachedDefaultAttributeUTF8Stream);
  return __return_storage_ptr__;
}

// CreateImmediatePayload @ 143197860

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FAnalyticsProviderETEventCache::CreateImmediatePayload
          (FAnalyticsProviderETEventCache *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1
          ,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  FString *pFVar5;
  FAnalyticsProviderETEventCache *this_00;
  FString local_28;
  
  pTVar3 = ::operator_new(0x90);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    this_00 = (FAnalyticsProviderETEventCache *)&DAT_00000010;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAnalyticsProviderETEventCache___00_SharedPointerInternals__6B_
    ;
    FAnalyticsProviderETEventCache
              ((FAnalyticsProviderETEventCache *)(pTVar3 + 1),this->MaximumPayloadSize,
               this->PreallocatedPayloadSize);
    this_00 = (FAnalyticsProviderETEventCache *)(pTVar3 + 1);
    if (this_00 == (FAnalyticsProviderETEventCache *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&this_00->CachedDefaultAttributeUTF8Stream,&this->CachedDefaultAttributeUTF8Stream);
  pFVar5 = ::FString::FString(&local_28,param_1);
  AddToCache(this_00,pFVar5,param_2);
  FlushCacheUTF8(this_00,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// FlushCache @ 14319c000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FAnalyticsProviderETEventCache::FlushCache
          (FAnalyticsProviderETEventCache *this,FString *__return_storage_ptr__,ulong64 *param_1)

{
  uint uVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FString *pFVar5;
  size_t sVar6;
  uint uVar7;
  undefined1 auStack_1c8 [32];
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  FScriptContainerElement local_178 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_170;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  lpCriticalSection = &this->CachedEventsCS;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 != (ulong64 *)0x0) {
    *param_1 = (longlong)(this->CachedEventEntries).ArrayNum;
  }
  FlushCacheUTF8(this,&local_170);
  local_178[0] = (FScriptContainerElement)0x0;
  if ((local_170.AllocatorInstance.Data <= local_178) &&
     (local_178 < local_170.AllocatorInstance.Data + local_170.ArrayMax)) {
    local_190 = (longlong)local_170.ArrayNum;
    local_188 = 1;
    local_1a8 = local_178;
    local_1a0 = local_170.AllocatorInstance.Data;
    local_198 = (longlong)local_170.ArrayMax;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (local_170.ArrayNum == local_170.ArrayMax) {
    local_170.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x101,&local_170.AllocatorInstance,&local_170.ArrayMax);
  }
  FVar3.Data = local_170.AllocatorInstance.Data;
  local_170.AllocatorInstance.Data[local_170.ArrayNum] = local_178[0];
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_170.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    local_50 = (FScriptContainerElement *)0x0;
    local_48 = 0;
    local_170.ArrayNum = local_170.ArrayNum + 1;
    goto LAB_14319c1d9;
  }
  local_170.ArrayNum = local_170.ArrayNum + 1;
  sVar6 = strlen((char *)local_170.AllocatorInstance.Data);
  local_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)FVar3.Data,(int)sVar6);
  uVar1 = local_48 + 1;
  uVar7 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar7 = 0;
      goto LAB_14319c18d;
    }
  }
  else {
LAB_14319c18d:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,2);
  }
  local_50 = local_158;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)FVar3.Data,(int)sVar6 + 1);
LAB_14319c1d9:
  ::FString::FString(__return_storage_ptr__,(wchar_t *)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// FlushCacheUTF8 @ 14319c240

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FAnalyticsProviderETEventCache::FlushCacheUTF8
          (FAnalyticsProviderETEventCache *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  
  lpCriticalSection = &this->CachedEventsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar9;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = (this->FlushQueue).ArrayNum;
  bVar7 = false;
  if (iVar2 == 0) {
    if (0 < (this->CachedEventEntries).ArrayNum) {
      QueueFlush(this);
    }
    iVar2 = (this->FlushQueue).ArrayNum;
    bVar7 = iVar2 == 0;
  }
  if (bVar7 || iVar2 < 0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    pFVar4 = (this->FlushQueue).AllocatorInstance.Data;
    pFVar5 = *(FScriptContainerElement **)pFVar4;
    *(undefined8 *)pFVar4 = 0;
    iVar2 = *(int *)(pFVar4 + 0xc);
    iVar3 = *(int *)(pFVar4 + 8);
    *(undefined8 *)(pFVar4 + 8) = 0;
    if ((this->FlushQueue).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
    }
    pFVar4 = (this->FlushQueue).AllocatorInstance.Data;
    if (*(void **)pFVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar4);
    }
    iVar8 = (this->FlushQueue).ArrayNum + -1;
    if (iVar8 != 0) {
      memmove(pFVar4,pFVar4 + 0x10,(longlong)iVar8 << 4);
    }
    piVar1 = &(this->FlushQueue).ArrayNum;
    *piVar1 = *piVar1 + -1;
    (__return_storage_ptr__->AllocatorInstance).Data = pFVar5;
    __return_storage_ptr__->ArrayNum = iVar3;
    __return_storage_ptr__->ArrayMax = iVar2;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// GetDefaultAttribute @ 14319d430

FAnalyticsEventAttribute * __thiscall
FAnalyticsProviderETEventCache::GetDefaultAttribute
          (FAnalyticsProviderETEventCache *this,FAnalyticsEventAttribute *__return_storage_ptr__,
          int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAnalyticsEventAttribute *pFVar4;
  FScriptContainerElement *pFVar5;
  
  lpCriticalSection = &this->CachedEventsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyticsEventAttribute *)(*pcVar1)();
      return pFVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = 0;
  if (param_1 < (this->CachedDefaultAttributes).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyticsEventAttribute *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar5 = (this->CachedDefaultAttributes).AllocatorInstance.Data + (longlong)param_1 * 0x30;
  ::FString::FString(&__return_storage_ptr__->AttrName,(FString *)pFVar5);
  ::FString::FString(&__return_storage_ptr__->AttrValueString,(FString *)(pFVar5 + 0x10));
  __return_storage_ptr__->AttrValueNumber = *(double *)&pFVar5[0x20].field_0x0;
  __return_storage_ptr__->AttrValueBool = (bool)pFVar5[0x28];
  __return_storage_ptr__->AttrType = *(AttrTypeEnum *)(pFVar5 + 0x2c);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// GetDefaultAttributeCount @ 14319d530

int __thiscall
FAnalyticsProviderETEventCache::GetDefaultAttributeCount(FAnalyticsProviderETEventCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  lpCriticalSection = &this->CachedEventsCS;
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
  iVar3 = (this->CachedDefaultAttributes).ArrayNum;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar3;
}

// GetDefaultAttributes @ 14319d5b0

TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> * __thiscall
FAnalyticsProviderETEventCache::GetDefaultAttributes
          (FAnalyticsProviderETEventCache *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FAnalyticsEventAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar5;
  
  lpCriticalSection = &this->CachedEventsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->CachedDefaultAttributes).ArrayNum;
  pFVar2 = (FAnalyticsEventAttribute *)(this->CachedDefaultAttributes).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// GetNumCachedEvents @ 14319d8a0

int __thiscall
FAnalyticsProviderETEventCache::GetNumCachedEvents(FAnalyticsProviderETEventCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  lpCriticalSection = &this->CachedEventsCS;
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
  iVar3 = (this->CachedEventEntries).ArrayNum;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar3;
}

// GetSetPreallocatedPayloadSize @ 14319dcb0

int __thiscall
FAnalyticsProviderETEventCache::GetSetPreallocatedPayloadSize(FAnalyticsProviderETEventCache *this)

{
  return this->PreallocatedPayloadSize;
}

// HasFlushesQueued @ 14319dd00

bool __thiscall
FAnalyticsProviderETEventCache::HasFlushesQueued(FAnalyticsProviderETEventCache *this)

{
  return 0 < (this->FlushQueue).ArrayNum;
}

// OnStartupModule @ 14319e3c0

void __cdecl FAnalyticsProviderETEventCache::OnStartupModule(void)

{
  return;
}

// QueueFlush @ 14319ea60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnalyticsProviderETEventCache::QueueFlush(FAnalyticsProviderETEventCache *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FAnalyticsEventEntry *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_e8 [32];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96 [6];
  LARGE_INTEGER local_90;
  longlong local_88;
  FTimespan local_80;
  LARGE_INTEGER local_78;
  undefined8 local_70;
  undefined4 local_68;
  FScriptContainerElement local_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  QueryPerformanceCounter(&local_90);
  dVar7 = (double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if ((&this->CachedEventsCS == (FWindowsRecursiveMutex *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CachedEventsCS);
  if ((this->CachedEventEntries).ArrayNum != 0) {
    FDateTime::UtcNow();
    dVar9 = __real_3d745c7fe3bc40b0;
    dVar8 = __real_3ff0000000000000;
    iVar12 = (this->CachedEventEntries).ArrayNum;
    pFVar13 = (this->CachedEventEntries).AllocatorInstance.Data;
    pFVar15 = pFVar13 + (longlong)iVar12 * 0x20;
    while( true ) {
      if ((this->CachedEventEntries).ArrayNum != iVar12) {
        local_98 = 0;
        `TCheckedPointerIterator<FAnalyticsProviderETEventCache::FAnalyticsEventEntry,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_98);
      }
      if (pFVar13 == pFVar15) break;
      if (((EventCacheStatic::bUseZeroDateOffset == false) &&
          (-1 < local_88 - *(longlong *)(pFVar13 + 0x10))) &&
         (dVar8 < (double)(local_88 - *(longlong *)(pFVar13 + 0x10)) * dVar9)) {
        FTimespan::Assign(&local_80,0,0x17,0x3b,0x3b,0);
      }
      TCString<char>::SnprintfImpl((char *)&local_70,0xe,"+%02i:%02i:%02i.%03i");
      uVar3 = *(uint *)(pFVar13 + 0x18);
      uVar11 = 0;
      if ((int)uVar3 < (this->CachedEventUTF8Stream).ArrayNum) {
        uVar11 = ~uVar3 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->CachedEventUTF8Stream).AllocatorInstance.Data;
      pFVar13 = pFVar13 + 0x20;
      *(undefined8 *)(pFVar4 + (int)uVar3) = local_70;
      *(undefined4 *)(pFVar4 + (longlong)(int)uVar3 + 8) = local_68;
      pFVar4[(longlong)(int)uVar3 + 0xc] = local_64;
    }
    QueryPerformanceCounter(&local_78);
    pTVar1 = &this->CachedEventUTF8Stream;
    if ((int)((float)this->MaximumPayloadSize * EventCacheStatic::PayloadPercentageOfMaxForWarning)
        < (this->CachedEventUTF8Stream).ArrayNum) {
      if (2 < (byte)LogAnalytics._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
      }
      iVar12 = (this->CachedEventEntries).ArrayNum;
      pFVar13 = (this->CachedEventEntries).AllocatorInstance.Data;
      pFVar15 = pFVar13 + (longlong)iVar12 * 0x20;
      while( true ) {
        if ((this->CachedEventEntries).ArrayNum != iVar12) {
          local_97 = 0;
          `TCheckedPointerIterator<FAnalyticsProviderETEventCache::FAnalyticsEventEntry,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_97);
        }
        if (pFVar13 == pFVar15) break;
        if (2 < (byte)LogAnalytics._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
        }
        pFVar13 = pFVar13 + 0x20;
      }
    }
    else if ((double)EventCacheStatic::PayloadFlushTimeSecForWarning <
             (double)local_78.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) {
      if (3 < (byte)LogAnalytics._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
      }
      iVar12 = (this->CachedEventEntries).ArrayNum;
      pFVar13 = (this->CachedEventEntries).AllocatorInstance.Data;
      pFVar15 = pFVar13 + (longlong)iVar12 * 0x20;
      while( true ) {
        if ((this->CachedEventEntries).ArrayNum != iVar12) {
          local_96[0] = 0;
          `TCheckedPointerIterator<FAnalyticsProviderETEventCache::FAnalyticsEventEntry,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_96);
        }
        if (pFVar13 == pFVar15) break;
        if (3 < (byte)LogAnalytics._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
        }
        pFVar13 = pFVar13 + 0x20;
      }
    }
    piVar2 = &(this->CachedEventEntries).ArrayMax;
    pFVar5 = (FAnalyticsEventEntry *)(this->CachedEventEntries).AllocatorInstance.Data;
    iVar12 = (this->CachedEventEntries).ArrayNum;
    if ((this->CachedEventEntries).ArrayMax < 0) {
      DestructItems<FAnalyticsProviderETEventCache::FAnalyticsEventEntry,int>(pFVar5,iVar12);
      (this->CachedEventEntries).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->CachedEventEntries).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<FAnalyticsProviderETEventCache::FAnalyticsEventEntry,int>(pFVar5,iVar12);
      (this->CachedEventEntries).ArrayNum = 0;
    }
    pFVar13 = (this->FlushQueue).AllocatorInstance.Data;
    if (((pFVar13 <= pTVar1) && (pTVar1 < pFVar13 + (longlong)(this->FlushQueue).ArrayMax * 0x10))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = (this->FlushQueue).ArrayNum;
    piVar2 = &(this->FlushQueue).ArrayMax;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(this->FlushQueue).AllocatorInstance,piVar2);
    }
    pFVar13 = (this->FlushQueue).AllocatorInstance.Data;
    (this->FlushQueue).ArrayNum = iVar12 + 1;
    lVar14 = (longlong)iVar12;
    *(undefined8 *)(pFVar13 + lVar14 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar13 + lVar14 * 0x10) = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar13 + lVar14 * 0x10 + 8) = (this->CachedEventUTF8Stream).ArrayNum;
    *(int *)(pFVar13 + lVar14 * 0x10 + 0xc) = (this->CachedEventUTF8Stream).ArrayMax;
    (this->CachedEventUTF8Stream).ArrayNum = 0;
    (this->CachedEventUTF8Stream).ArrayMax = 0;
    EventCacheStatic::InitializePayloadBuffer(pTVar1,this->PreallocatedPayloadSize);
  }
  if (&this->CachedEventsCS != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->CachedEventsCS);
  }
  return;
}

// SetDefaultAttributes @ 1431a3820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnalyticsProviderETEventCache::SetDefaultAttributes
          (FAnalyticsProviderETEventCache *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_4c8 [32];
  FScriptContainerElement local_478;
  FScriptContainerElement local_477;
  undefined1 local_476 [6];
  LPCRITICAL_SECTION local_470;
  TStringBuilderWithBuffer<wchar_t,512> local_468;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CachedEventsCS;
  local_470 = lpCriticalSection;
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar2 = &this->CachedDefaultAttributes;
  if (pTVar2 != param_1) {
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)(pTVar2->AllocatorInstance).Data,
               (this->CachedDefaultAttributes).ArrayNum);
    pFVar10 = (pTVar2->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar2->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CachedDefaultAttributes).ArrayNum = param_1->ArrayNum;
    (this->CachedDefaultAttributes).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  iVar8 = EventCacheStatic::ComputeAttributeSize(pTVar2);
  pTVar3 = &this->CachedDefaultAttributeUTF8Stream;
  uVar1 = iVar8 + 10;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  piVar4 = &(this->CachedDefaultAttributeUTF8Stream).ArrayMax;
  (this->CachedDefaultAttributeUTF8Stream).ArrayNum = 0;
  if ((this->CachedDefaultAttributeUTF8Stream).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar1,&pTVar3->AllocatorInstance,0,piVar4);
  }
  iVar8 = (this->CachedDefaultAttributes).ArrayNum;
  if (0 < iVar8) {
    pFVar10 = (pTVar2->AllocatorInstance).Data;
    local_468._padding_ = (longlong)local_468.StringBuffer;
    local_468._padding_ = (longlong)local_468.StringBuffer;
    pFVar11 = pFVar10 + (longlong)iVar8 * 0x30;
    local_468._padding_ = (longlong)local_48;
    local_468._padding_._0_2_ = 0;
    while( true ) {
      if ((this->CachedDefaultAttributes).ArrayNum != iVar8) {
        local_476[0] = 0;
        `TCheckedPointerIterator<FAnalyticsEventAttribute,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_476);
      }
      if (pFVar10 == pFVar11) break;
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      local_478 = (FScriptContainerElement)0x2c;
      if ((pFVar5 <= &local_478) &&
         (&local_478 < pFVar5 + (this->CachedDefaultAttributeUTF8Stream).ArrayMax)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = (this->CachedDefaultAttributeUTF8Stream).ArrayNum;
      if (iVar9 == (this->CachedDefaultAttributeUTF8Stream).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&pTVar3->AllocatorInstance,piVar4);
      }
      (this->CachedDefaultAttributeUTF8Stream).ArrayNum = iVar9 + 1;
      (pTVar3->AllocatorInstance).Data[iVar9] = local_478;
      local_468._padding_ = local_468._padding_;
      AppendEscapeJsonString<TStringBuilderWithBuffer<wchar_t,512>_>(&local_468,(FString *)pFVar10);
      EventCacheStatic::AppendString
                (pTVar3,(wchar_t *)local_468._padding_,
                 (int)(local_468._padding_ - local_468._padding_ >> 1));
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      local_477 = (FScriptContainerElement)0x3a;
      if ((pFVar5 <= &local_477) &&
         (&local_477 < pFVar5 + (this->CachedDefaultAttributeUTF8Stream).ArrayMax)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = (this->CachedDefaultAttributeUTF8Stream).ArrayNum;
      if (iVar9 == (this->CachedDefaultAttributeUTF8Stream).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&pTVar3->AllocatorInstance,piVar4);
      }
      (this->CachedDefaultAttributeUTF8Stream).ArrayNum = iVar9 + 1;
      (pTVar3->AllocatorInstance).Data[iVar9] = local_477;
      if (*(int *)(pFVar10 + 0x2c) == 4) {
        if (*(int *)(pFVar10 + 0x18) == 0) {
          EventCacheStatic::AppendString(pTVar3,L"",0);
          pFVar10 = pFVar10 + 0x30;
        }
        else {
          EventCacheStatic::AppendString
                    (pTVar3,*(wchar_t **)&pFVar10[0x10].field_0x0,*(int *)(pFVar10 + 0x18) + -1);
          pFVar10 = pFVar10 + 0x30;
        }
      }
      else {
        local_468._padding_ = local_468._padding_;
        AppendEscapeJsonString<TStringBuilderWithBuffer<wchar_t,512>_>
                  (&local_468,(FString *)(pFVar10 + 0x10));
        EventCacheStatic::AppendString
                  (pTVar3,(wchar_t *)local_468._padding_,
                   (int)(local_468._padding_ - local_468._padding_ >> 1));
        pFVar10 = pFVar10 + 0x30;
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)&local_468);
    lpCriticalSection = local_470;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// SetPreallocatedPayloadSize @ 1431a41f0

void __thiscall
FAnalyticsProviderETEventCache::SetPreallocatedPayloadSize
          (FAnalyticsProviderETEventCache *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  ForAnyElementType _Src_00;
  bool bVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  int iVar6;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  this->PreallocatedPayloadSize = param_1;
  if (param_1 < 0) {
    param_1 = this->MaximumPayloadSize;
    this->PreallocatedPayloadSize = param_1;
  }
  if (param_1 < (this->CachedEventUTF8Stream).ArrayMax) {
    lpCriticalSection = &this->CachedEventsCS;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = this->PreallocatedPayloadSize;
    local_20._0_4_ = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar6 = 0;
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar1,&local_28,0,(int *)((longlong)&local_20 + 4));
      iVar6 = local_20._4_4_;
    }
    pTVar4 = &this->CachedEventUTF8Stream;
    iVar5 = (int)local_20;
    if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_28 != pTVar4) {
      iVar5 = (this->CachedEventUTF8Stream).ArrayNum;
      _Src = (pTVar4->AllocatorInstance).Data;
      local_20 = CONCAT44(local_20._4_4_,iVar5);
      if ((iVar5 == 0) && (iVar6 == 0)) {
        local_20 = 0;
        iVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar5,iVar6,&local_28,iVar5,(int *)((longlong)&local_20 + 4));
        if (iVar5 != 0) {
          memcpy(local_28.Data,_Src,(longlong)iVar5);
        }
        iVar5 = (int)local_20;
      }
    }
    _Src_00.Data = local_28.Data;
    if (pTVar4 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_28) {
      iVar6 = (this->CachedEventUTF8Stream).ArrayMax;
      (this->CachedEventUTF8Stream).ArrayNum = iVar5;
      if ((iVar5 == 0) && (iVar6 == 0)) {
        (this->CachedEventUTF8Stream).ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar5,iVar6,&pTVar4->AllocatorInstance,iVar5,
                   &(this->CachedEventUTF8Stream).ArrayMax);
        if (iVar5 != 0) {
          memcpy((pTVar4->AllocatorInstance).Data,_Src_00.Data,(longlong)iVar5);
        }
      }
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

