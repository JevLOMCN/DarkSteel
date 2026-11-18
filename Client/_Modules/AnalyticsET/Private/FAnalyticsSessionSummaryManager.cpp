// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 19

// FAnalyticsSessionSummaryManager @ 143193540

FAnalyticsSessionSummaryManager * __thiscall
FAnalyticsSessionSummaryManager::FAnalyticsSessionSummaryManager
          (FAnalyticsSessionSummaryManager *this,FString *param_1,FString *param_2,uint param_3,
          uint param_4,FString *param_5,FString *param_6,FString *param_7,FString *param_8,
          FString *param_9)

{
  FString *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  IFileManager *pIVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  FString local_28;
  
  (this->WeakPropertyStores).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeakPropertyStores).ArrayNum = 0;
  (this->WeakPropertyStores).ArrayMax = 0;
  (this->SummarySender).Object = (IAnalyticsSessionSummarySender *)0x0;
  (this->SummarySender).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&this->ProcessName,param_1);
  ::FString::FString(&this->ProcessGroupId,param_2);
  ::FString::FString(&this->UserId,param_5);
  ::FString::FString(&this->AppId,param_6);
  ::FString::FString(&this->AppVersion,param_7);
  ::FString::FString(&this->SessionId,param_8);
  this_00 = &this->SessionRootPath;
  ::FString::FString(this_00,param_9);
  this->CurrentProcessId = param_3;
  this->PrincipalProcessId = param_4;
  this->StoreCounter = 0;
  QueryPerformanceCounter(&local_res8);
  pwVar8 = L"";
  iVar1 = (this->SessionRootPath).Data.ArrayNum;
  dVar9 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->bOrphanGroupOwner = false;
  this->bIsPrincipal = param_3 == param_4;
  this->NextOrphanSessionCheckTimeSecs = dVar9 + __real_4170000000000000;
  if (1 < iVar1) {
    pIVar5 = IFileManager::Get();
    if ((this->SessionRootPath).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(this_00->Data).AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar5 + 0x58))(pIVar5,pwVar7);
    if (cVar3 != '\0') goto LAB_1431936cc;
  }
  pFVar6 = AnalyticsSessionUtils::GetDefaultSavedDir(&local_28);
  if (this_00 != pFVar6) {
    pFVar2 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this_00->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SessionRootPath).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->SessionRootPath).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_1431936cc:
  pIVar5 = IFileManager::Get();
  if ((this->SessionRootPath).Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)(this->SessionRootPath).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar5 + 0x60))(pIVar5,pwVar8,1);
  if (this->bIsPrincipal != false) {
    bVar4 = AnalyticsSessionUtils::TryAcquiringOrphanGroupsOwnership
                      (&this->SessionRootPath,&this->ProcessName,this->CurrentProcessId);
    this->bOrphanGroupOwner = bVar4;
  }
  return this;
}

// FAnalyticsSessionSummaryManager @ 143193740

FAnalyticsSessionSummaryManager * __thiscall
FAnalyticsSessionSummaryManager::FAnalyticsSessionSummaryManager
          (FAnalyticsSessionSummaryManager *this,FString *param_1,FString *param_2,FString *param_3,
          FString *param_4,FString *param_5,FString *param_6,FString *param_7)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = FWindowsPlatformProcess::GetCurrentProcessId();
  DVar2 = FWindowsPlatformProcess::GetCurrentProcessId();
  FAnalyticsSessionSummaryManager
            (this,param_1,param_2,DVar2,DVar1,param_3,param_4,param_5,param_6,param_7);
  return this;
}

// FAnalyticsSessionSummaryManager @ 1431937f0

FAnalyticsSessionSummaryManager * __thiscall
FAnalyticsSessionSummaryManager::FAnalyticsSessionSummaryManager
          (FAnalyticsSessionSummaryManager *this,FString *param_1,FString *param_2,uint param_3,
          FString *param_4)

{
  DWORD DVar1;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  DVar1 = FWindowsPlatformProcess::GetCurrentProcessId();
  FAnalyticsSessionSummaryManager
            (this,param_1,param_2,DVar1,param_3,&local_48,&local_38,&local_28,&local_18,param_4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FAnalyticsSessionSummaryManager @ 143194000

void __thiscall
FAnalyticsSessionSummaryManager::~FAnalyticsSessionSummaryManager
          (FAnalyticsSessionSummaryManager *this)

{
  FScriptContainerElement *pFVar1;
  
  if (this->bOrphanGroupOwner != false) {
    AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership
              (&this->SessionRootPath,&this->ProcessName,this->CurrentProcessId);
  }
  pFVar1 = (this->SessionRootPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SessionId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AppVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AppId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProcessGroupId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProcessName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SummarySender).SharedReferenceCount.ReferenceController);
  DestructItems<TWeakPtr<IAnalyticsPropertyStore,1>,int>
            ((TWeakPtr<IAnalyticsPropertyStore,1> *)
             (this->WeakPropertyStores).AllocatorInstance.Data,(this->WeakPropertyStores).ArrayNum);
  pFVar1 = (this->WeakPropertyStores).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 143194170

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
`FAnalyticsSessionSummaryManager::CleanupExpiredFiles'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,bool param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  FString *pFVar3;
  IFileManager *pIVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar7 [16];
  FString local_48;
  FString local_38;
  FRegexMatcher local_28;
  undefined8 extraout_XMM0_Qb;
  
  if (!param_2) {
    ::FString::FString(&local_48,param_1);
    pFVar3 = FPaths::GetCleanFilename(&local_38,&local_48);
    FRegexMatcher::FRegexMatcher(&local_28,*(FRegexPattern **)this,pFVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar2 = FRegexMatcher::FindNext(&local_28);
    if (bVar2) {
      pIVar4 = IFileManager::Get();
      auVar5._0_8_ = (double)(**(code **)((longlong)*pIVar4 + 0xd0))(pIVar4,param_1);
      auVar5._8_8_ = extraout_XMM0_Qb;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = __real_42b792f864800080;
      auVar7 = roundpd(in_XMM3,auVar6,1);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = __real_4269254d38001000;
      auVar6 = roundpd(auVar5,auVar1,1);
      if (((double)(longlong)auVar6._0_8_ + (double)(longlong)auVar7._0_8_) *
          __real_3e7ad7f29abcaf48 < auVar5._0_8_) {
        pIVar4 = IFileManager::Get();
        (**(code **)((longlong)*pIVar4 + 0x38))(pIVar4,param_1,0,0,0);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  }
  return true;
}

// operator() @ 143194290

/* WARNING: Removing unreachable block (ram,0x00014319460c) */
/* WARNING: Removing unreachable block (ram,0x00014319461b) */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
`FAnalyticsSessionSummaryManager::GetSessionFiles'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  int local_res18 [2];
  FString *local_res20;
  int local_d8 [2];
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FRegexMatcher local_a0;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if (param_2) {
    return true;
  }
  ::FString::FString(&local_80,param_1);
  pFVar8 = FPaths::GetCleanFilename(&local_70,&local_80);
  FRegexMatcher::FRegexMatcher(&local_a0,*(FRegexPattern **)((longlong)this + 0x10),pFVar8);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  bVar4 = FRegexMatcher::FindNext(&local_a0);
  if (!bVar4) goto LAB_14319462f;
  FRegexMatcher::GetCaptureGroup(&local_a0,&local_b0,1);
  iVar7 = *(int *)(*(longlong *)this + 0x38);
  if (local_b0.Data.ArrayNum == iVar7) {
    if (1 < local_b0.Data.ArrayNum) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_b0.Data.AllocatorInstance.Data,
                         *(wchar_t **)(*(longlong *)this + 0x30));
      bVar4 = iVar7 == 0;
      goto LAB_143194341;
    }
LAB_143194358:
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.Data.ArrayNum = 0;
    local_c0.Data.ArrayMax = 0;
    pFVar8 = FRegexMatcher::GetCaptureGroup(&local_a0,&local_60,3);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    lVar9 = _wtoi64(pwVar10);
    local_d8[0] = (int)lVar9;
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    pFVar8 = FRegexMatcher::GetCaptureGroup(&local_a0,&local_50,5);
    if (&local_d0 != pFVar8) {
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      local_d0.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      local_d0.Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    ::FString::operator=(&local_c0,param_1);
    pFVar8 = FRegexMatcher::GetCaptureGroup(&local_a0,&local_40,2);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    lVar9 = _wtoi64(pwVar10);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    this_00 = *(TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
                **)((longlong)this + 8);
    iVar7 = local_b0.Data.ArrayNum + -1;
    FVar3.Data = local_b0.Data.AllocatorInstance.Data;
    if (local_b0.Data.ArrayNum == 0) {
      iVar7 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar3.Data);
    iVar7 = TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(this_00,uVar6,&local_b0);
    if ((iVar7 == -1) ||
       (lVar11 = (longlong)iVar7 * 0x40 + *(longlong *)&this_00->Elements, lVar11 == 0)) {
      local_res20 = &local_b0;
      TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                (this_00,(uint)local_res18,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar6,
                 (bool *)&local_res20);
      lVar11 = (longlong)local_res18[0] * 0x40 + *(longlong *)&this_00->Elements;
    }
    *(int *)(lVar11 + 0x10) = (int)lVar9;
    if ((int)lVar9 == local_d8[0]) {
      iVar7 = local_d0.Data.ArrayNum + -1;
      if (local_d0.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AssignRange
                ((FString *)(lVar11 + 0x18),(wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar7);
    }
    if (((*(int **)(lVar11 + 0x28) <= local_d8) &&
        (local_d8 < *(int **)(lVar11 + 0x28) + (longlong)*(int *)(lVar11 + 0x34) * 10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    iVar7 = *(int *)(lVar11 + 0x30);
    if (iVar7 == *(int *)(lVar11 + 0x34)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,(ForAnyElementType *)(lVar11 + 0x28),(int *)(lVar11 + 0x34));
    }
    *(int *)(lVar11 + 0x30) = iVar7 + 1;
    piVar1 = (int *)(*(longlong *)(lVar11 + 0x28) + (longlong)iVar7 * 0x28);
    *piVar1 = local_d8[0];
    piVar1[2] = 0;
    piVar1[3] = 0;
    *(FScriptContainerElement **)(piVar1 + 2) = local_d0.Data.AllocatorInstance.Data;
    piVar1[4] = local_d0.Data.ArrayNum;
    piVar1[5] = local_d0.Data.ArrayMax;
    piVar1[6] = 0;
    piVar1[7] = 0;
    *(FScriptContainerElement **)(piVar1 + 6) = local_c0.Data.AllocatorInstance.Data;
    piVar1[8] = local_c0.Data.ArrayNum;
    piVar1[9] = local_c0.Data.ArrayMax;
    local_c0.Data.ArrayNum = 0;
    local_c0.Data.ArrayMax = 0;
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    bVar4 = local_b0.Data.ArrayNum + iVar7 == 1;
LAB_143194341:
    if ((bVar4) || (*(char *)(*(longlong *)this + 0xa8) != '\0')) goto LAB_143194358;
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
LAB_14319462f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  return true;
}

// operator() @ 143194660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FAnalyticsSessionSummaryManager::AggregateSummaries'::__l9::<lambda_2>::operator()
          (void *this,FAnalyticsEventAttribute *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar3;
  ForAnyElementType FVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FString *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  FAnalyticsEventAttribute *pFVar13;
  ForAnyElementType _Src;
  longlong lVar14;
  FString local_res10;
  FString local_58;
  FString local_48;
  
  _Src.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  iVar10 = AnalyticsManagerProperties::InternalPropertyPrefix.Data.ArrayNum + -1;
  FVar4.Data = AnalyticsManagerProperties::InternalPropertyPrefix.Data.AllocatorInstance.Data;
  if (AnalyticsManagerProperties::InternalPropertyPrefix.Data.ArrayNum == 0) {
    iVar10 = iVar7;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  bVar6 = ::FString::StartsWith(&param_1->AttrName,(wchar_t *)FVar4.Data,iVar10,IgnoreCase);
  if (bVar6) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (*(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
                ((longlong)this + 0x20),&local_res10,(bool *)param_1);
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    iVar7 = *(int *)&pFVar2[1].Data;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    pFVar12 = pFVar2->Data + (longlong)iVar7 * 0x30;
    ::FString::FString((FString *)pFVar12,&param_1->AttrName);
    ::FString::FString((FString *)(pFVar12 + 0x10),&param_1->AttrValueString);
    *(double *)(pFVar12 + 0x20) = param_1->AttrValueNumber;
    pFVar12[0x28] = (FScriptContainerElement)param_1->AttrValueBool;
    *(AttrTypeEnum *)(pFVar12 + 0x2c) = param_1->AttrType;
    return;
  }
  iVar10 = (param_1->AttrName).Data.ArrayNum;
  if (iVar10 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->AttrName).Data.AllocatorInstance.Data;
    iVar7 = iVar10 + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
  iVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&AnalyticsManagerProperties::ReservedKeys,uVar8,&param_1->AttrName);
  pTVar3 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
            ((longlong)this + 0x20);
  if (iVar7 == -1) {
    iVar7 = (param_1->AttrName).Data.ArrayNum;
    if (iVar7 == 0) {
      pwVar11 = L"";
      iVar7 = 0;
    }
    else {
      pwVar11 = (wchar_t *)(param_1->AttrName).Data.AllocatorInstance.Data;
      iVar7 = iVar7 + -1;
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
    iVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (pTVar3,uVar8,&param_1->AttrName);
    pTVar3 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
              ((longlong)this + 0x20);
    if (iVar7 == -1) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (pTVar3,&local_res10,(bool *)param_1);
      pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      iVar7 = *(int *)&pFVar2[1].Data;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar7 + 1;
      pFVar12 = pFVar2->Data + (longlong)iVar7 * 0x30;
      ::FString::FString((FString *)pFVar12,&param_1->AttrName);
      ::FString::FString((FString *)(pFVar12 + 0x10),&param_1->AttrValueString);
      *(double *)(pFVar12 + 0x20) = param_1->AttrValueNumber;
      pFVar12[0x28] = (FScriptContainerElement)param_1->AttrValueBool;
      *(AttrTypeEnum *)(pFVar12 + 0x2c) = param_1->AttrType;
      return;
    }
    local_res10.Data.AllocatorInstance.Data = *(FScriptContainerElement **)this;
    do {
      ::FString::PrintfImpl(&local_48,L"%s_%d");
      if (_Src.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src.Data);
      }
      uVar5 = local_48.Data._8_8_;
      _Src.Data = local_48.Data.AllocatorInstance.Data;
      iVar7 = local_48.Data.ArrayNum;
      lVar14 = (longlong)local_48.Data.ArrayNum;
      local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = local_48.Data.ArrayNum;
      local_58.Data.ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      if (iVar7 == 0) {
        pwVar11 = L"";
        iVar10 = 0;
      }
      else {
        iVar10 = iVar7 + -1;
        pwVar11 = (wchar_t *)_Src.Data;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
      iVar10 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(pTVar3,uVar8,&local_58);
    } while (iVar10 != -1);
    if (2 < (byte)LogAnalyticsSessionSummary._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Renamed_key___s_150a65980,
                 (FLogCategoryBase *)&LogAnalyticsSessionSummary);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (*(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
                ((longlong)this + 0x20),&local_res10,(bool *)param_1);
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    iVar10 = *(int *)&pFVar2[1].Data;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,pFVar2,piVar1);
    }
    local_58.Data.ArrayNum = iVar7;
    *(int *)&pFVar2[1].Data = iVar10 + 1;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = (FAnalyticsEventAttribute *)(pFVar2->Data + (longlong)iVar10 * 0x30);
    if (iVar7 == 0) {
      local_58.Data._8_8_ = uVar5 & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,(ForAnyElementType *)&local_58,iVar7,&local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,lVar14 * 2);
    }
    pFVar9 = FAnalyticsEventAttribute::CheckName(pFVar13,&local_58);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    ::FString::FString(&pFVar13->AttrValueString,&param_1->AttrValueString);
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = String;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_res10.Data._8_8_ = *(undefined8 *)this;
    do {
      ::FString::PrintfImpl(&local_58,L"%s_%d");
      if (_Src.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src.Data);
      }
      _Src.Data = local_58.Data.AllocatorInstance.Data;
      iVar7 = local_58.Data.ArrayNum;
      local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = local_58.Data.ArrayNum;
      local_48.Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      if (iVar7 == 0) {
        pwVar11 = L"";
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + -1;
        pwVar11 = (wchar_t *)_Src.Data;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
      iVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(pTVar3,uVar8,&local_48);
    } while (iVar7 != -1);
    if (2 < (byte)LogAnalyticsSessionSummary._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Renamed_key___s_150a65980,
                 (FLogCategoryBase *)&LogAnalyticsSessionSummary);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (*(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
                ((longlong)this + 0x20),&local_res10,(bool *)&local_48);
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    iVar7 = *(int *)&pFVar2[1].Data;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,pFVar2,piVar1);
    }
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    lVar14 = (longlong)local_48.Data.ArrayNum;
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
    pFVar13 = (FAnalyticsEventAttribute *)(pFVar2->Data + (longlong)iVar7 * 0x30);
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data._8_8_ = local_48.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,lVar14 * 2);
    }
    pFVar9 = FAnalyticsEventAttribute::CheckName(pFVar13,&local_58);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    ::FString::FString(&pFVar13->AttrValueString,&param_1->AttrValueString);
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = String;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (_Src.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src.Data);
  }
  return;
}

// AggregateSummaries @ 143195b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAnalyticsSessionSummaryManager::AggregateSummaries
          (FAnalyticsSessionSummaryManager *this,FString *param_1,FProcessGroup *param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_4)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  undefined1 uVar6;
  EStatusCode EVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  FString *pFVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte bVar15;
  FScriptContainerElement *pFVar16;
  code **ppcVar17;
  undefined8 uVar18;
  uint uVar19;
  ulonglong uVar20;
  wchar_t *pwVar21;
  TSparseSetElement<FString> *pTVar22;
  ForAnyElementType FVar23;
  FAnalyticsEventAttribute *pFVar24;
  uint uVar25;
  int *piVar26;
  ForElementType<unsigned_int> FVar27;
  ulonglong uVar28;
  int *piVar29;
  FScriptContainerElement *pFVar30;
  undefined1 auStackY_448 [32];
  undefined1 local_3f8 [8];
  ForAnyElementType local_3f0;
  undefined8 local_3e8;
  undefined1 local_3e0;
  undefined1 local_3df [3];
  int local_3dc;
  FString local_3d8;
  int local_3c8;
  uint local_3c4;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  int local_380;
  uint uStack_37c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_378;
  undefined4 local_370;
  int iStack_36c;
  int iStack_368;
  undefined4 uStack_364;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *local_360;
  FAnalyticsSessionSummaryManager *local_358;
  undefined4 local_350;
  int local_34c;
  wchar_t *local_348;
  FTimespan local_340;
  FScriptContainerElement *local_338;
  FString *local_330;
  longlong *local_328;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_320;
  FSparseArrayAllocationInfo local_300;
  FString local_2f0;
  undefined1 local_2d8 [32];
  ForElementType<unsigned_int> local_2b8;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  undefined1 local_2a0 [8];
  ForAnyElementType local_298;
  uint local_290;
  code *local_288 [2];
  code *local_278 [3];
  code **local_260;
  FAnalyticsPropertyStore local_258;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_360 = param_3;
  local_358 = this;
  local_330 = param_1;
  FAnalyticsPropertyStore::FAnalyticsPropertyStore(&local_258);
  local_3c4 = (param_2->PropertyFiles).ArrayNum;
  uVar20 = (ulonglong)(int)local_3c4;
  pFVar30 = (param_2->PropertyFiles).AllocatorInstance.Data;
  local_2d8._0_8_ = (FScriptContainerElement *)0x0;
  local_2d8._8_8_ = 0;
  local_2b8 = (ForElementType<unsigned_int>)0x0;
  local_338 = pFVar30 + uVar20 * 0x28;
  local_2b0 = 0;
  local_2ac = 0x80;
  local_2a8 = -1;
  local_2a4 = 0;
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290 = 0;
  local_3f0.Data = (FScriptContainerElement *)0x0;
  local_3e8 = 0;
  while( true ) {
    pFVar16 = local_338;
    pTVar22 = (TSparseSetElement<FString> *)0x0;
    if ((param_2->PropertyFiles).ArrayNum != (int)uVar20) {
      local_3f8[0] = 0;
      `TCheckedPointerIterator<FAnalyticsSessionSummaryManager::FPropertyFileInfo_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_3f8);
    }
    if (pFVar30 == pFVar16) break;
    bVar5 = FAnalyticsPropertyStore::Load(&local_258,(FString *)(pFVar30 + 0x18));
    if (bVar5) {
      bVar5 = FAnalyticsPropertyStore::Contains
                        (&local_258,&AnalyticsManagerProperties::InternalWasProcessed.Key);
      if (bVar5) goto LAB_143196414;
      EVar7 = FAnalyticsPropertyStore::Get(&local_258,&ShutdownTypeCodeProperty.Key,&local_3c8);
      if (EVar7 == Success) {
        iVar9 = AnalyticsManagerProperties::ShutdownType.Key.Data.ArrayNum + -1;
        FVar23 = AnalyticsManagerProperties::ShutdownType.Key.Data.AllocatorInstance;
        if (AnalyticsManagerProperties::ShutdownType.Key.Data.ArrayNum == 0) {
          iVar9 = 0;
          FVar23.Data = (FScriptContainerElement *)L"";
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar23.Data);
        if (local_2d8._8_4_ != local_2a4) {
          FVar23.Data = (FScriptContainerElement *)local_2a0;
          if ((ForElementType<FSetElementId>)local_298.Data != (ForElementType<FSetElementId>)0x0) {
            FVar23.Data = local_298.Data;
          }
          iVar9 = *(int *)((longlong)FVar23.Data + (ulonglong)(local_290 - 1 & uVar8) * 4);
          uVar18 = AnalyticsManagerProperties::ShutdownType.Key.Data._8_8_;
          pFVar16 = (FScriptContainerElement *)local_2d8._0_8_;
          while (iVar9 != -1) {
            lVar11 = (longlong)iVar9;
            iVar10 = *(int *)(pFVar16 + lVar11 * 0x18 + 8);
            if (iVar10 == (int)uVar18) {
              if (1 < iVar10) {
                iVar10 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(pFVar16 + lVar11 * 0x18),
                                    (wchar_t *)
                                    AnalyticsManagerProperties::ShutdownType.Key.Data.
                                    AllocatorInstance.Data);
                bVar5 = iVar10 == 0;
                pFVar16 = (FScriptContainerElement *)local_2d8._0_8_;
                uVar18 = AnalyticsManagerProperties::ShutdownType.Key.Data._8_8_;
                goto LAB_143195d68;
              }
LAB_143195d94:
              if (iVar9 != -1) goto LAB_14319625d;
              break;
            }
            bVar5 = iVar10 + (int)uVar18 == 1;
LAB_143195d68:
            if (bVar5) goto LAB_143195d94;
            iVar9 = *(int *)(pFVar16 + lVar11 * 0x18 + 0x10);
          }
        }
        switch(local_3c8) {
        case 0:
          local_348 = L"Shutdown";
          break;
        case 1:
          local_348 = L"Terminated";
          break;
        case 2:
          local_348 = L"Debugger";
          break;
        case 3:
          local_348 = L"Crashed";
          break;
        case 4:
          local_348 = L"AbnormalShutdown";
          break;
        default:
          local_348 = L"Unknown";
        }
        iVar9 = param_3->ArrayNum;
        if (iVar9 == param_3->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar9 + 1;
        pFVar16 = (param_3->AllocatorInstance).Data;
        pFVar12 = ::FString::FString(&local_2f0,&AnalyticsManagerProperties::ShutdownType.Key);
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<wchar_t_const_*>
                  ((FAnalyticsEventAttribute *)(pFVar16 + (longlong)iVar9 * 0x30),pFVar12,&local_348
                  );
        if (local_2a4 == 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,1,(ForAnyElementType *)local_2d8,(int *)(local_2d8 + 8),
                             (int *)(local_2d8 + 0xc));
          iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                             ((TBitArray<FDefaultBitArrayAllocator> *)(local_2d8 + 0x10),1);
          FVar27 = (ForElementType<unsigned_int>)((longlong)local_2d8 + 0x10);
          if (local_2b8 != (ForElementType<unsigned_int>)0x0) {
            FVar27 = local_2b8;
          }
          bVar15 = (byte)iVar10 & 0x1f;
          if (iVar10 < 0) {
            iVar10 = iVar10 + 0x1f;
            bVar15 = bVar15 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar27 + (longlong)(iVar10 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar15 & 0x1f));
          iVar10 = local_2a8;
        }
        else {
          local_2a4 = local_2a4 + -1;
          iVar10 = *(int *)(local_2d8._0_8_ + (longlong)local_2a8 * 0x18 + 4);
          iVar9 = local_2a8;
          if (local_2a4 != 0) {
            *(undefined4 *)(local_2d8._0_8_ + (longlong)iVar10 * 0x18) = 0xffffffff;
          }
        }
        local_2a8 = iVar10;
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_2d8,&local_300,iVar9);
        pvVar4 = local_300.Pointer;
        if (local_300.Pointer != (TSparseSetElement<FString> *)0x0) {
          *(undefined8 *)local_300.Pointer = 0;
          FVar23 = AnalyticsManagerProperties::ShutdownType.Key.Data.AllocatorInstance;
          iVar9 = AnalyticsManagerProperties::ShutdownType.Key.Data.ArrayNum;
          *(int *)((longlong)local_300.Pointer + 8) = iVar9;
          pTVar22 = pvVar4;
          if (iVar9 == 0) {
            *(undefined4 *)((longlong)local_300.Pointer + 0xc) = 0;
            *(undefined4 *)((longlong)local_300.Pointer + 0x10) = 0xffffffff;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar9,0,local_300.Pointer,iVar9,
                       (int *)((longlong)local_300.Pointer + 0xc));
            memcpy(*(void **)pvVar4,FVar23.Data,(longlong)iVar9 * 2);
            *(undefined4 *)((longlong)pvVar4 + 0x10) = 0xffffffff;
          }
        }
        local_3dc = local_300.Index;
        iVar9 = *(int *)&pTVar22->field_0x8 + -1;
        if (*(int *)&pTVar22->field_0x8 == 0) {
          pwVar21 = L"";
          iVar9 = 0;
        }
        else {
          pwVar21 = *(wchar_t **)pTVar22;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar21);
        bVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::TryReplaceExisting
                          ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                           local_2d8,uVar8,pTVar22,&local_3dc,(bool *)0x0);
        if (!bVar5) {
          uVar25 = 1;
          uVar19 = local_2d8._8_4_ - local_2a4;
          if (3 < uVar19) {
            uVar20 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
            lVar11 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            local_350 = (undefined4)lVar11;
            uVar25 = 1 << ((byte)lVar11 & 0x1f);
          }
          if (((int)uVar19 < 1) || ((int)uVar25 <= (int)local_290)) {
            uVar8 = local_290 - 1 & uVar8;
            *(uint *)&pTVar22->field_0x14 = uVar8;
            FVar23.Data = (FScriptContainerElement *)local_2a0;
            if ((ForElementType<FSetElementId>)local_298.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar23.Data = local_298.Data;
            }
            uVar20 = (longlong)(int)local_290 - 1U & (longlong)(int)uVar8;
            *(undefined4 *)&pTVar22->field_0x10 =
                 *(undefined4 *)((longlong)FVar23.Data + uVar20 * 4);
            *(int *)((longlong)FVar23.Data + uVar20 * 4) = local_3dc;
          }
          else {
            local_290 = uVar25;
            if ((ForElementType<FSetElementId>)local_298.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_298,0,0,4)
              ;
            }
            if (uVar25 != 0) {
              uVar8 = uVar25;
              if (uVar25 < 2) {
                if ((ForElementType<FSetElementId>)local_298.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar8 = 0;
                  goto LAB_143196037;
                }
              }
              else {
LAB_143196037:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_298,0,uVar8,4);
              }
              uVar20 = 0;
              if (0 < (int)uVar25) {
                uVar28 = (ulonglong)uVar25;
                do {
                  FVar23.Data = (FScriptContainerElement *)local_2a0;
                  if ((ForElementType<FSetElementId>)local_298.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar23.Data = local_298.Data;
                  }
                  uVar13 = (longlong)(int)uVar25 - 1U & uVar20;
                  uVar20 = uVar20 + 1;
                  *(undefined4 *)((longlong)FVar23.Data + uVar13 * 4) = 0xffffffff;
                  uVar28 = uVar28 - 1;
                } while (uVar28 != 0);
              }
            }
            if (local_290 != 0) {
              pTStack_378 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2d8 + 0x10);
              local_380 = 0;
              uStack_37c = 1;
              iStack_36c = 0;
              iStack_368 = 0;
              if (local_2b0 != 0) {
                FVar27 = (ForElementType<unsigned_int>)((longlong)local_2d8 + 0x10);
                if (local_2b8 != (ForElementType<unsigned_int>)0x0) {
                  FVar27 = local_2b8;
                }
                uVar8 = *(uint *)FVar27;
                iStack_368 = 0;
                local_380 = 0;
                while (uVar8 == 0) {
                  iStack_368 = iStack_368 + 0x20;
                  lVar11 = (longlong)local_380;
                  local_380 = local_380 + 1;
                  if ((int)(local_2b0 + -1 + (local_2b0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_380)
                  goto LAB_14319614b;
                  uVar8 = ((uint *)((longlong)FVar27 + 4))[lVar11];
                }
                uStack_37c = -uVar8 & uVar8;
                uVar20 = (ulonglong)uStack_37c * 2 + 1;
                lVar11 = 0x3f;
                if (uVar20 != 0) {
                  for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                  }
                }
                local_34c = (int)lVar11;
                iStack_36c = local_34c + -1 + iStack_368;
                if (local_2b0 < iStack_36c) {
LAB_14319614b:
                  iStack_36c = local_2b0;
                }
              }
              local_370 = 0xffffffff;
              local_328 = (longlong *)local_2d8;
              local_320._padding_ = CONCAT44(uStack_37c,local_380);
              local_320.CurrentBitIndex = iStack_36c;
              local_320.UnvisitedBitMask = 0xffffffff;
              local_320._28_4_ = uStack_364;
              local_320.BaseBitIndex = iStack_368;
              local_320.Array = pTStack_378;
              iVar9 = iStack_36c;
              if (iStack_36c < local_2b0) {
                do {
                  lVar11 = *local_328;
                  lVar14 = (longlong)iVar9;
                  iVar2 = *(int *)(lVar11 + 8 + lVar14 * 0x18);
                  iVar10 = iVar2 + -1;
                  if (iVar2 == 0) {
                    pwVar21 = L"";
                    iVar10 = 0;
                  }
                  else {
                    pwVar21 = *(wchar_t **)(lVar11 + lVar14 * 0x18);
                  }
                  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar21);
                  uVar8 = local_290 - 1 & uVar8;
                  *(uint *)(lVar11 + 0x14 + lVar14 * 0x18) = uVar8;
                  FVar23.Data = (FScriptContainerElement *)local_2a0;
                  if ((ForElementType<FSetElementId>)local_298.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar23.Data = local_298.Data;
                  }
                  uVar20 = (longlong)(int)local_290 - 1U & (longlong)(int)uVar8;
                  *(undefined4 *)(lVar11 + 0x10 + lVar14 * 0x18) =
                       *(undefined4 *)((longlong)FVar23.Data + uVar20 * 4);
                  *(int *)((longlong)FVar23.Data + uVar20 * 4) = iVar9;
                  local_320.UnvisitedBitMask =
                       local_320.UnvisitedBitMask & ~local_320._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_320);
                  param_3 = local_360;
                  iVar9 = local_320.CurrentBitIndex;
                } while (local_320.CurrentBitIndex < (local_320.Array)->NumBits);
              }
            }
          }
        }
      }
LAB_14319625d:
      local_288[0] = (code *)0x0;
      local_260 = (code **)0x0;
      local_260 = FMemory::Malloc(0x30,8);
      *local_260 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FAnalyticsSessionSummaryManager::AggregateSummaries'::`9'::<lambda_2>,0,1>
                            ::_vftable_;
      local_260[1] = (code *)pFVar30;
      local_260[2] = (code *)param_3;
      local_260[3] = (code *)param_4;
      local_260[4] = (code *)&local_3e0;
      local_260[5] = (code *)local_2d8;
      if (local_260 + 1 != (code **)0x0) {
        local_288[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FAnalyticsSessionSummaryManager::AggregateSummaries'::__l9::<lambda_2>,void,FAnalyticsEventAttribute_&&>
                       ::Call;
      }
      FAnalyticsPropertyStore::VisitAll
                (&local_258,(TFunction<void___cdecl(FAnalyticsEventAttribute_&&)> *)local_288);
      if (local_288[0] != (code *)0x0) {
        ppcVar17 = local_288 + 2;
        if (local_260 != (code **)0x0) {
          ppcVar17 = local_260;
        }
        (**(code **)(*ppcVar17 + 0x10))();
      }
      (**(code **)(local_258._padding_ + 0x80))
                (&local_258,&AnalyticsManagerProperties::InternalWasProcessed,1);
      local_340.Ticks = 0x7fffffffffffffff;
      FAnalyticsPropertyStore::Flush(&local_258,false,&local_340);
      uVar20 = (ulonglong)local_3c4;
      pFVar30 = pFVar30 + 0x28;
    }
    else {
      if (*(uint *)pFVar30 == param_2->PrincipalProcessId) {
LAB_143196414:
        bVar5 = false;
        goto LAB_143196923;
      }
      pFVar16 = pFVar30 + 8;
      if (((local_3f0.Data <= pFVar16) &&
          (pFVar16 < local_3f0.Data + (longlong)local_3e8._4_4_ * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar9 = (int)local_3e8;
      if ((int)local_3e8 == local_3e8._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_3f0,(int *)((longlong)&local_3e8 + 4));
      }
      local_3e8 = CONCAT44(local_3e8._4_4_,iVar9 + 1);
      ::FString::FString((FString *)(local_3f0.Data + (longlong)iVar9 * 0x10),(FString *)pFVar16);
      uVar20 = (ulonglong)local_3c4;
      pFVar30 = pFVar30 + 0x28;
    }
  }
  pFVar30 = (param_4->AllocatorInstance).Data;
  pFVar16 = pFVar30 + (longlong)param_4->ArrayNum * 0x30;
  uVar18 = AnalyticsManagerProperties::InternalSessionId.Key.Data._8_8_;
  for (; pFVar30 != pFVar16; pFVar30 = pFVar30 + 0x30) {
    iVar9 = *(int *)(pFVar30 + 8);
    if (iVar9 == (int)uVar18) {
      if (1 < iVar9) {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)pFVar30,
                           (wchar_t *)
                           AnalyticsManagerProperties::InternalSessionId.Key.Data.AllocatorInstance.
                           Data);
        bVar5 = iVar9 == 0;
        uVar18 = AnalyticsManagerProperties::InternalSessionId.Key.Data._8_8_;
        goto LAB_14319646f;
      }
LAB_1431964e3:
      iVar9 = param_3->ArrayNum;
      if (iVar9 == param_3->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar9 + 1;
      FVar23 = AnalyticsManagerProperties::SessionId.Key.Data.AllocatorInstance;
      iVar10 = AnalyticsManagerProperties::SessionId.Key.Data.ArrayNum;
      pFVar24 = (FAnalyticsEventAttribute *)
                ((param_3->AllocatorInstance).Data + (longlong)iVar9 * 0x30);
      local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c0.Data.ArrayNum = iVar10;
      if (iVar10 == 0) {
        local_3c0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar10,0,(ForAnyElementType *)&local_3c0,iVar10,&local_3c0.Data.ArrayMax);
        memcpy(local_3c0.Data.AllocatorInstance.Data,FVar23.Data,(longlong)iVar10 * 2);
      }
      pFVar12 = FAnalyticsEventAttribute::CheckName(pFVar24,&local_3c0);
      (pFVar24->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar24->AttrName).Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar24->AttrName).Data.ArrayNum = (pFVar12->Data).ArrayNum;
      (pFVar24->AttrName).Data.ArrayMax = (pFVar12->Data).ArrayMax;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
      ::FString::FString(&pFVar24->AttrValueString,(FString *)(pFVar30 + 0x10));
      pFVar24->AttrValueNumber = 0.0;
      pFVar24->AttrValueBool = false;
      pFVar24->AttrType = String;
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
      }
      break;
    }
    bVar5 = iVar9 + (int)uVar18 == 1;
LAB_14319646f:
    if (bVar5) goto LAB_1431964e3;
  }
  piVar29 = &param_3->ArrayMax;
  piVar26 = &param_3->ArrayNum;
  iVar9 = (int)local_3e8;
  if ((int)local_3e8 != 0) {
    pFVar30 = local_3f0.Data + (longlong)(int)local_3e8 * 0x10;
    local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.Data.ArrayNum = 0;
    local_3d8.Data.ArrayMax = 0;
    bVar5 = true;
    FVar23.Data = local_3f0.Data;
    while( true ) {
      if ((int)local_3e8 != iVar9) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_3df);
      }
      param_3 = local_360;
      if (FVar23.Data == pFVar30) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        ::FString::AppendChars(&local_3d8,L",",1);
      }
      iVar10 = *(int *)(FVar23.Data + 8) + -1;
      if (*(int *)(FVar23.Data + 8) == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_3d8,*(wchar_t **)FVar23.Data,iVar10);
      FVar23.Data = FVar23.Data + 0x10;
    }
    iVar9 = *piVar26;
    if (iVar9 == *piVar29) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&local_360->AllocatorInstance,piVar29);
      *piVar26 = iVar9;
    }
    *piVar26 = iVar9 + 1;
    FVar23 = AnalyticsManagerProperties::MissingDataFrom.Key.Data.AllocatorInstance;
    iVar10 = AnalyticsManagerProperties::MissingDataFrom.Key.Data.ArrayNum;
    pFVar24 = (FAnalyticsEventAttribute *)
              ((param_3->AllocatorInstance).Data + (longlong)iVar9 * 0x30);
    local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3b0.Data.ArrayNum = iVar10;
    if (iVar10 == 0) {
      local_3b0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,(ForAnyElementType *)&local_3b0,iVar10,&local_3b0.Data.ArrayMax);
      memcpy(local_3b0.Data.AllocatorInstance.Data,FVar23.Data,(longlong)iVar10 * 2);
    }
    pFVar12 = FAnalyticsEventAttribute::CheckName(pFVar24,&local_3b0);
    (pFVar24->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar24->AttrName).Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar24->AttrName).Data.ArrayNum = (pFVar12->Data).ArrayNum;
    (pFVar24->AttrName).Data.ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
    (pFVar24->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar24->AttrValueString).Data.AllocatorInstance.Data = local_3d8.Data.AllocatorInstance.Data;
    local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar24->AttrValueString).Data.ArrayNum = local_3d8.Data.ArrayNum;
    (pFVar24->AttrValueString).Data.ArrayMax = local_3d8.Data.ArrayMax;
    local_3d8.Data.ArrayNum = 0;
    local_3d8.Data.ArrayMax = 0;
    pFVar24->AttrValueNumber = 0.0;
    pFVar24->AttrValueBool = false;
    pFVar24->AttrType = String;
    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
    }
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
  iVar9 = (local_330->Data).ArrayNum;
  iVar10 = (local_358->ProcessGroupId).Data.ArrayNum;
  if (iVar9 == iVar10) {
    if (iVar9 < 2) goto LAB_14319674c;
    iVar9 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(local_330->Data).AllocatorInstance.Data,
                       (wchar_t *)(local_358->ProcessGroupId).Data.AllocatorInstance.Data);
    bVar5 = iVar9 == 0;
  }
  else {
    bVar5 = iVar9 + iVar10 == 1;
  }
  bVar5 = !bVar5;
LAB_14319674c:
  iVar9 = *piVar26;
  if (iVar9 == *piVar29) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_3->AllocatorInstance,piVar29);
    *piVar26 = iVar9;
  }
  *piVar26 = iVar9 + 1;
  FVar23 = AnalyticsManagerProperties::DelayedSend.Key.Data.AllocatorInstance;
  iVar10 = AnalyticsManagerProperties::DelayedSend.Key.Data.ArrayNum;
  pFVar24 = (FAnalyticsEventAttribute *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 0x30)
  ;
  local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a0.Data.ArrayNum = iVar10;
  if (iVar10 == 0) {
    local_3a0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar10,0,(ForAnyElementType *)&local_3a0,iVar10,&local_3a0.Data.ArrayMax);
    memcpy(local_3a0.Data.AllocatorInstance.Data,FVar23.Data,(longlong)iVar10 * 2);
  }
  pFVar12 = FAnalyticsEventAttribute::CheckName(pFVar24,&local_3a0);
  (pFVar24->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar21 = L"true";
  (pFVar24->AttrName).Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar24->AttrName).Data.ArrayNum = (pFVar12->Data).ArrayNum;
  (pFVar24->AttrName).Data.ArrayMax = (pFVar12->Data).ArrayMax;
  (pFVar12->Data).ArrayNum = 0;
  (pFVar12->Data).ArrayMax = 0;
  if (!bVar5) {
    pwVar21 = L"false";
  }
  ::FString::FString(&pFVar24->AttrValueString,pwVar21);
  pFVar24->AttrValueNumber = 0.0;
  pFVar24->AttrValueBool = false;
  pFVar24->AttrType = JsonFragment;
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  iVar9 = *piVar26;
  if (iVar9 == *piVar29) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_3->AllocatorInstance,piVar29);
    *piVar26 = iVar9;
  }
  local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar26 = iVar9 + 1;
  FVar23 = AnalyticsManagerProperties::SentFrom.Key.Data.AllocatorInstance;
  iVar10 = AnalyticsManagerProperties::SentFrom.Key.Data.ArrayNum;
  pFVar24 = (FAnalyticsEventAttribute *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 0x30)
  ;
  local_390.Data.ArrayNum = iVar10;
  if (iVar10 == 0) {
    local_390.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar10,0,(ForAnyElementType *)&local_390,iVar10,&local_390.Data.ArrayMax);
    memcpy(local_390.Data.AllocatorInstance.Data,FVar23.Data,(longlong)iVar10 * 2);
  }
  pFVar12 = FAnalyticsEventAttribute::CheckName(pFVar24,&local_390);
  (pFVar24->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar24->AttrName).Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar24->AttrName).Data.ArrayNum = (pFVar12->Data).ArrayNum;
  (pFVar24->AttrName).Data.ArrayMax = (pFVar12->Data).ArrayMax;
  (pFVar12->Data).ArrayNum = 0;
  (pFVar12->Data).ArrayMax = 0;
  ::FString::FString(&pFVar24->AttrValueString,&local_358->ProcessName);
  pFVar24->AttrValueNumber = 0.0;
  pFVar24->AttrValueBool = false;
  pFVar24->AttrType = String;
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  bVar5 = true;
LAB_143196923:
  DestructItems<FString,int>((FString *)local_3f0.Data,(int)local_3e8);
  if (local_3f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.Data);
  }
  local_290 = 0;
  if ((ForElementType<FSetElementId>)local_298.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_298.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2d8);
  FAnalyticsPropertyStore::~FAnalyticsPropertyStore(&local_258);
  return bVar5;
}

// CleanupExpiredFiles @ 143197210

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl FAnalyticsSessionSummaryManager::CleanupExpiredFiles(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  char cVar4;
  FString *pFVar5;
  IFileManager *pIVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  FRegexPattern *local_res8;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  undefined1 local_48 [12];
  int iStack_3c;
  FRegexPattern local_38;
  FString local_28;
  
  local_res8 = (FRegexPattern *)((ulonglong)local_res8 & 0xffffffff00000000);
  iVar1 = (param_1->Data).ArrayNum;
  bVar3 = 1 < iVar1;
  if (bVar3) {
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    local_48._0_8_ = (FScriptContainerElement *)0x0;
    stack0xffffffffffffffc0 = (FRegexPattern **)CONCAT44(iStack_3c,iVar1);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)local_48,iVar1,&iStack_3c);
    memcpy((void *)local_48._0_8_,pFVar2,(longlong)iVar1 * 2);
    pFVar5 = (FString *)local_48;
  }
  else {
    pFVar5 = AnalyticsSessionUtils::GetDefaultSavedDir(&local_28);
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = (pFVar5->Data).ArrayNum;
  lVar8 = (longlong)local_50;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar2,lVar8 * 2);
  }
  if (bVar3) {
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  if ((!bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pIVar6 = IFileManager::Get();
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_50 != 0) {
    FVar7.Data = local_58.Data;
  }
  cVar4 = (**(code **)((longlong)*pIVar6 + 0x58))(pIVar6,FVar7.Data);
  if (cVar4 != '\0') {
    ::FString::FString((FString *)local_48,L"(^[0-9A-Za-z]+)_([0-9]+)_([0-9]+)(_[0-9]+)?_(.*)");
    FRegexPattern::FRegexPattern(&local_38,(FString *)local_48,None);
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
    pIVar6 = IFileManager::Get();
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_50 != 0) {
      FVar7.Data = local_58.Data;
    }
    local_res8 = &local_38;
    unique0x00008e00 = &local_res8;
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAnalyticsSessionSummaryManager::CleanupExpiredFiles'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>
         ::Call;
    (**(code **)((longlong)*pIVar6 + 0x90))(pIVar6,FVar7.Data,local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.Implementation.SharedReferenceCount.ReferenceController);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// CleanupFiles @ 1431973e0

bool __thiscall
FAnalyticsSessionSummaryManager::CleanupFiles
          (FAnalyticsSessionSummaryManager *this,
          TArray<FAnalyticsSessionSummaryManager::FPropertyFileInfo,TSizedDefaultAllocator<32>_>
          *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  byte bVar3;
  IFileManager *pIVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res10 [8];
  
  iVar2 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  bVar7 = true;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x28;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAnalyticsSessionSummaryManager::FPropertyFileInfo_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar1) break;
    pIVar4 = IFileManager::Get();
    if (*(int *)(pFVar6 + 0x20) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)(pFVar6 + 0x18);
    }
    bVar3 = (**(code **)((longlong)*pIVar4 + 0x38))(pIVar4,pwVar5,0,1,1);
    bVar7 = (bool)(bVar7 & bVar3);
    pFVar6 = pFVar6 + 0x28;
  }
  return bVar7;
}

// GetSessionFiles @ 14319d980

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TMap<FString,FAnalyticsSessionSummaryManager::FProcessGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>_>
* __thiscall
FAnalyticsSessionSummaryManager::GetSessionFiles
          (FAnalyticsSessionSummaryManager *this,
          TMap<FString,FAnalyticsSessionSummaryManager::FProcessGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>_>
          *__return_storage_ptr__)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IFileManager *pIVar6;
  TMap<FString,FAnalyticsSessionSummaryManager::FProcessGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>_>
  *pTVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
  *local_b8;
  undefined2 local_b0;
  FString local_a8;
  code *local_98;
  FAnalyticsSessionSummaryManager **local_90;
  FRegexPattern local_88;
  FAnalyticsSessionSummaryManager *local_78;
  TMap<FString,FAnalyticsSessionSummaryManager::FProcessGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>_>
  *local_70;
  FRegexPattern *local_68;
  undefined1 local_60 [32];
  longlong local_40;
  TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
  *pTStack_38;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  ::FString::FString(&local_a8,L"(^[0-9A-Za-z]+)_([0-9]+)_([0-9]+)(_[0-9]+)?_(.*)");
  FRegexPattern::FRegexPattern(&local_88,&local_a8,None);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pIVar6 = IFileManager::Get();
  local_68 = &local_88;
  local_90 = &local_78;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAnalyticsSessionSummaryManager::GetSessionFiles'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>
             ::Call;
  if ((this->SessionRootPath).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(this->SessionRootPath).Data.AllocatorInstance.Data;
  }
  local_78 = this;
  local_70 = __return_storage_ptr__;
  (**(code **)((longlong)*pIVar6 + 0x90))(pIVar6,pwVar9,&local_98);
  if (this->bOrphanGroupOwner != false) {
    if ((this->bIsPrincipal == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsPrincipalProcess()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\AnalyticsSessionSummaryManager.cpp"
                           ,0x184,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TMap<FString,FAnalyticsSessionSummaryManager::FProcessGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>_>
                *)(*pcVar3)();
      return pTVar7;
    }
    TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_60,
               (TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__);
    local_b0 = 0;
    stack0xffffffffffffff28 = local_60._16_16_;
    auStack_e0._0_8_ = local_60._8_8_;
    local_c8 = local_40;
    pTStack_c0 = pTStack_38;
    uVar8 = local_60._24_8_ >> 0x20;
    uVar11 = local_60._28_4_;
    local_b8 = (TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__;
    if ((int)uVar11 < *(int *)(local_60._16_8_ + 0x18)) {
      do {
        if (*(int *)((longlong)(int)uVar8 * 0x40 + 0x20 + *(longlong *)local_60._0_8_) < 2) {
LAB_14319db55:
          lVar12 = *(longlong *)local_60._0_8_ + (longlong)(int)uVar11 * 0x40;
          if (*(uint *)(lVar12 + 0x10) != this->PrincipalProcessId) {
            iVar5 = *(int *)(lVar12 + 0x30);
            puVar10 = *(uint **)(lVar12 + 0x28);
            puVar1 = puVar10 + (longlong)iVar5 * 10;
            while( true ) {
              if (*(int *)(lVar12 + 0x30) != iVar5) {
                `TCheckedPointerIterator<FAnalyticsSessionSummaryManager::FPropertyFileInfo,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res8);
              }
              if (puVar10 == puVar1) goto LAB_14319dbb4;
              bVar4 = FWindowsPlatformProcess::IsApplicationRunning(*puVar10);
              if (bVar4) break;
              puVar10 = puVar10 + 10;
            }
            goto LAB_14319dba7;
          }
        }
        else {
          iVar5 = (this->ProcessName).Data.ArrayNum;
          lVar12 = (longlong)(int)uVar11 * 0x40 + *(longlong *)local_60._0_8_;
          iVar2 = *(int *)(lVar12 + 0x20);
          if (iVar2 == iVar5) {
            if (iVar2 < 2) goto LAB_14319db55;
            iVar5 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(lVar12 + 0x18),
                               (wchar_t *)(this->ProcessName).Data.AllocatorInstance.Data);
            bVar4 = iVar5 == 0;
          }
          else {
            bVar4 = iVar2 + iVar5 == 1;
          }
          if (bVar4) goto LAB_14319db55;
LAB_14319dba7:
          TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_c0,uVar11);
          local_b0 = CONCAT11(local_b0._1_1_,1);
        }
LAB_14319dbb4:
        uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
        uVar8 = (ulonglong)uStack_cc;
        uVar11 = uStack_cc;
      } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
      if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
        uVar11 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
        if (uVar11 < 4) {
          iVar5 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar12 & 0x1f);
        }
        if (((0 < (int)uVar11) && (local_b8->HashSize < iVar5)) || (iVar5 < local_b8->HashSize)) {
          local_b8->HashSize = iVar5;
          TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
          ::Rehash(local_b8);
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.Implementation.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// IsPrincipalProcess @ 14319deb0

bool __thiscall
FAnalyticsSessionSummaryManager::IsPrincipalProcess(FAnalyticsSessionSummaryManager *this)

{
  return this->bIsPrincipal;
}

// MakeStore @ 14319dfb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<IAnalyticsPropertyStore,1> * __thiscall
FAnalyticsSessionSummaryManager::MakeStore
          (FAnalyticsSessionSummaryManager *this,
          TSharedPtr<IAnalyticsPropertyStore,1> *__return_storage_ptr__,uint param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FSharedReferencer<1> FVar6;
  TSharedPtr<IAnalyticsPropertyStore,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FAnalyticsPropertyStore *pFVar10;
  uint uVar11;
  FAnalyticsPropertyStore *this_00;
  FSharedReferencer<1> FVar12;
  FSharedReferencer<1> FStack_80;
  FString local_78;
  FAnalyticsPropertyStore *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FString local_58;
  undefined8 local_48;
  FSharedReferencer<1> local_40 [3];
  
  ::FString::PrintfImpl(&local_58,L"%s_%d_%d_%d_%s");
  iVar5 = (this->SessionRootPath).Data.ArrayNum;
  iVar9 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  local_78.Data.ArrayNum = iVar5;
  if ((iVar5 == 0) && (iVar9 != -1)) {
    pFVar8 = (this->SessionRootPath).Data.AllocatorInstance.Data;
    iVar4 = iVar9 + 2;
LAB_14319e07f:
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar4 != 0) goto LAB_14319e089;
    local_78.Data.ArrayMax = 0;
  }
  else {
    pFVar8 = (this->SessionRootPath).Data.AllocatorInstance.Data;
    iVar4 = iVar9 + 1;
    if (iVar5 == 0) goto LAB_14319e07f;
LAB_14319e089:
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar11 = iVar5 + iVar4;
    if ((int)uVar11 < iVar5) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar11,0,(ForAnyElementType *)&local_78,iVar5,&local_78.Data.ArrayMax);
    if (iVar5 != 0) {
      memcpy(local_78.Data.AllocatorInstance.Data,pFVar8,(longlong)iVar5 * 2);
    }
  }
  ::FString::PathAppend(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar9);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar6.ReferenceController = ::operator_new(0x218);
  FVar12.ReferenceController = _UNK_150651568;
  pFVar10 = ___xmm_00000000000000000000000000000010;
  if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FStack_80.ReferenceController = _UNK_150651568;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FVar6.ReferenceController = FVar12.ReferenceController;
    this_00 = (FAnalyticsPropertyStore *)&DAT_00000010;
LAB_14319e1b1:
    bVar3 = FAnalyticsPropertyStore::Create(this_00,&local_78,param_1);
    if (bVar3) {
      if ((this->bIsPrincipal != false) && (this->StoreCounter == 0)) {
        (**(code **)(this_00->_padding_ + 0x78))
                  (this_00,&AnalyticsManagerProperties::InternalSessionUserId,&this->UserId,0);
        (**(code **)(this_00->_padding_ + 0x78))
                  (this_00,&AnalyticsManagerProperties::InternalSessionAppId,&this->AppId,0);
        (**(code **)(this_00->_padding_ + 0x78))
                  (this_00,&AnalyticsManagerProperties::InternalSessionAppVersion,&this->AppVersion,
                   0);
        (**(code **)(this_00->_padding_ + 0x78))
                  (this_00,&AnalyticsManagerProperties::InternalSessionId,&this->SessionId,0);
      }
      this->StoreCounter = this->StoreCounter + 1;
      pTStack_60 = FVar12.ReferenceController;
      goto LAB_14319e269;
    }
  }
  else {
    (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar6.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar6.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAnalyticsPropertyStore___00_SharedPointerInternals__6B_
    ;
    FAnalyticsPropertyStore::FAnalyticsPropertyStore
              ((FAnalyticsPropertyStore *)(FVar6.ReferenceController + 1));
    pFVar10 = (FAnalyticsPropertyStore *)(FVar6.ReferenceController + 1);
    if ((pFVar10 == (FAnalyticsPropertyStore *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<IAnalyticsPropertyStore,1> *)(*pcVar2)();
      return pTVar7;
    }
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FStack_80.ReferenceController = FVar6.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
    this_00 = pFVar10;
    FVar12.ReferenceController = FStack_80.ReferenceController;
    if (pFVar10 != (FAnalyticsPropertyStore *)0x0) goto LAB_14319e1b1;
  }
  local_40[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_48 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_80,local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40[0].ReferenceController);
  pFVar10 = (FAnalyticsPropertyStore *)0x0;
  FVar6.ReferenceController = FStack_80.ReferenceController;
  pTStack_60 = FStack_80.ReferenceController;
LAB_14319e269:
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->WeakReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar8 = (this->WeakPropertyStores).AllocatorInstance.Data;
  local_68 = pFVar10;
  if (((pFVar8 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar8 + (longlong)(this->WeakPropertyStores).ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<IAnalyticsPropertyStore,1> *)(*pcVar2)();
    return pTVar7;
  }
  iVar5 = (this->WeakPropertyStores).ArrayNum;
  piVar1 = &(this->WeakPropertyStores).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->WeakPropertyStores).ArrayNum = iVar5 + 1;
  pFVar8 = (this->WeakPropertyStores).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FAnalyticsPropertyStore **)pFVar8 = local_68;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTStack_60;
  PruneTrackedPropertyStores(this);
  __return_storage_ptr__->Object = (IAnalyticsPropertyStore *)pFVar10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ProcessSummary @ 14319e3d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FAnalyticsSessionSummaryManager::ProcessSummary
          (FAnalyticsSessionSummaryManager *this,FString *param_1,FProcessGroup *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IAnalyticsSessionSummarySender *pIVar3;
  code *pcVar4;
  double dVar5;
  ulonglong uVar6;
  bool bVar7;
  int iVar8;
  IFileManager *pIVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  FAnalyticsEventAttribute *pFVar13;
  FAnalyticsEventAttribute *pFVar14;
  FAnalyticsEventAttribute *pFVar15;
  ForAnyElementType FVar16;
  FAnalyticsEventAttribute *pFVar17;
  FAnalyticsEventAttribute *pFVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_90;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_80 [4];
  undefined8 extraout_XMM0_Qb;
  
  iVar8 = (param_2->PropertyFiles).ArrayNum;
  pFVar12 = (param_2->PropertyFiles).AllocatorInstance.Data;
  pFVar1 = pFVar12 + (longlong)iVar8 * 0x28;
  while( true ) {
    if ((param_2->PropertyFiles).ArrayNum != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FAnalyticsSessionSummaryManager::FPropertyFileInfo_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar12 == pFVar1) break;
    if ((*(uint *)pFVar12 != this->CurrentProcessId) &&
       (bVar7 = FWindowsPlatformProcess::IsApplicationRunning(*(uint *)pFVar12), bVar7)) {
      return;
    }
    pFVar12 = pFVar12 + 0x28;
  }
  iVar8 = (param_1->Data).ArrayNum;
  iVar2 = (this->ProcessGroupId).Data.ArrayNum;
  if (iVar8 == iVar2) {
    if (1 < iVar8) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)(this->ProcessGroupId).Data.AllocatorInstance.Data);
      bVar7 = iVar8 == 0;
      goto LAB_14319e476;
    }
  }
  else {
    bVar7 = iVar8 + iVar2 == 1;
LAB_14319e476:
    if (!bVar7) {
      if ((this->bOrphanGroupOwner == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsOrphanGroupsOwner()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\AnalyticsSessionSummaryManager.cpp"
                             ,0x1b0,
                             L"Should not process summary of other process group if this wasn\'t allowed in first place."
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = __real_42b792f864800080;
      dVar5 = __real_3e7ad7f29abcaf48;
      iVar8 = (param_2->PropertyFiles).ArrayNum;
      pFVar12 = (param_2->PropertyFiles).AllocatorInstance.Data;
      pFVar1 = pFVar12 + (longlong)iVar8 * 0x28;
      while( true ) {
        if ((param_2->PropertyFiles).ArrayNum != iVar8) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FAnalyticsSessionSummaryManager::FPropertyFileInfo_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar12 == pFVar1) break;
        pIVar9 = IFileManager::Get();
        if (*(int *)(pFVar12 + 0x20) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)(pFVar12 + 0x18);
        }
        auVar19._0_8_ = (double)(**(code **)((longlong)*pIVar9 + 0xd0))(pIVar9,pwVar11);
        auVar19._8_8_ = extraout_XMM0_Qb;
        if ((0.0 < auVar19._0_8_) &&
           (auVar19._0_8_ <=
            (double)AnalyticsSessionUtils::ProcessGroupDeathGracePeriod.Ticks * dVar5)) {
          return;
        }
        if ((param_2->PrincipalProcessId == *(uint *)pFVar12) &&
           (auVar20._8_8_ = 0, auVar20._0_8_ = uVar6, auVar20 = roundpd(auVar19,auVar20,1),
           (double)(longlong)auVar20._0_8_ * dVar5 < auVar19._0_8_)) goto LAB_14319e579;
        pFVar12 = pFVar12 + 0x28;
      }
      if (1 < (param_2->PrincipalProcessName).Data.ArrayNum) goto LAB_14319e5de;
LAB_14319e579:
      iVar8 = (param_2->PropertyFiles).ArrayNum;
      pFVar12 = (param_2->PropertyFiles).AllocatorInstance.Data;
      pFVar1 = pFVar12 + (longlong)iVar8 * 0x28;
      while( true ) {
        if ((param_2->PropertyFiles).ArrayNum != iVar8) {
          `TCheckedPointerIterator<FAnalyticsSessionSummaryManager::FPropertyFileInfo_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_98);
        }
        if (pFVar12 == pFVar1) break;
        pIVar9 = IFileManager::Get();
        if (*(int *)(pFVar12 + 0x20) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)(pFVar12 + 0x18);
        }
        (**(code **)((longlong)*pIVar9 + 0x38))(pIVar9,pwVar11,0,1,1);
        pFVar12 = pFVar12 + 0x28;
      }
      return;
    }
  }
LAB_14319e5de:
  pFVar18 = (FAnalyticsEventAttribute *)0x0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  local_80[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80[0].ArrayNum = 0;
  local_80[0].ArrayMax = 0;
  bVar7 = AggregateSummaries(this,param_1,param_2,local_80,&local_90);
  if (bVar7) {
    if (this->bIsPrincipal != false) {
      iVar8 = (param_1->Data).ArrayNum;
      iVar2 = (this->ProcessGroupId).Data.ArrayNum;
      if (iVar8 == iVar2) {
        if (1 < iVar8) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                             (wchar_t *)(this->ProcessGroupId).Data.AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
          goto LAB_14319e652;
        }
      }
      else {
        bVar7 = iVar8 + iVar2 == 1;
LAB_14319e652:
        if (!bVar7) goto LAB_14319e6c7;
      }
      CleanupFiles(this,&param_2->PropertyFiles,true);
      if (((this->SummarySender).Object == (IAnalyticsSessionSummarySender *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar3 = (this->SummarySender).Object;
      (**(code **)((longlong)*pIVar3 + 8))
                (pIVar3,&this->UserId,&this->AppId,&this->AppVersion,&this->SessionId,local_80);
      goto LAB_14319e8c8;
    }
LAB_14319e6c7:
    pFVar13 = (FAnalyticsEventAttribute *)
              (local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 0x30);
    uVar10 = AnalyticsManagerProperties::InternalSessionUserId.Key.Data._8_8_;
    FVar16.Data = local_90.AllocatorInstance.Data;
    pFVar17 = pFVar18;
    if ((FAnalyticsEventAttribute *)local_90.AllocatorInstance.Data != pFVar13) {
      do {
        iVar8 = (((FAnalyticsEventAttribute *)FVar16.Data)->AttrName).Data.ArrayNum;
        pFVar17 = (FAnalyticsEventAttribute *)FVar16.Data;
        if (iVar8 == (int)uVar10) {
          if (iVar8 < 2) break;
          iVar8 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)
                             (((FAnalyticsEventAttribute *)FVar16.Data)->AttrName).Data.
                             AllocatorInstance.Data,
                             (wchar_t *)
                             AnalyticsManagerProperties::InternalSessionUserId.Key.Data.
                             AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
          uVar10 = AnalyticsManagerProperties::InternalSessionUserId.Key.Data._8_8_;
        }
        else {
          bVar7 = iVar8 + (int)uVar10 == 1;
        }
        if ((bVar7) ||
           (FVar16.Data = FVar16.Data + 0x30, pFVar17 = pFVar18,
           (FAnalyticsEventAttribute *)FVar16.Data == pFVar13)) break;
      } while( true );
    }
    pFVar14 = (FAnalyticsEventAttribute *)
              (local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 0x30);
    uVar10 = AnalyticsManagerProperties::InternalSessionAppId.Key.Data._8_8_;
    FVar16.Data = local_90.AllocatorInstance.Data;
    pFVar13 = pFVar18;
    if ((FAnalyticsEventAttribute *)local_90.AllocatorInstance.Data != pFVar14) {
      do {
        iVar8 = (((FAnalyticsEventAttribute *)FVar16.Data)->AttrName).Data.ArrayNum;
        pFVar13 = (FAnalyticsEventAttribute *)FVar16.Data;
        if (iVar8 == (int)uVar10) {
          if (iVar8 < 2) break;
          iVar8 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)
                             (((FAnalyticsEventAttribute *)FVar16.Data)->AttrName).Data.
                             AllocatorInstance.Data,
                             (wchar_t *)
                             AnalyticsManagerProperties::InternalSessionAppId.Key.Data.
                             AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
          uVar10 = AnalyticsManagerProperties::InternalSessionAppId.Key.Data._8_8_;
        }
        else {
          bVar7 = iVar8 + (int)uVar10 == 1;
        }
        if ((bVar7) ||
           (FVar16.Data = FVar16.Data + 0x30, pFVar13 = pFVar18,
           (FAnalyticsEventAttribute *)FVar16.Data == pFVar14)) break;
      } while( true );
    }
    pFVar15 = (FAnalyticsEventAttribute *)
              (local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 0x30);
    uVar10 = AnalyticsManagerProperties::InternalSessionAppVersion.Key.Data._8_8_;
    FVar16.Data = local_90.AllocatorInstance.Data;
    pFVar14 = pFVar18;
    if ((FAnalyticsEventAttribute *)local_90.AllocatorInstance.Data != pFVar15) {
      do {
        iVar8 = (((FAnalyticsEventAttribute *)FVar16.Data)->AttrName).Data.ArrayNum;
        pFVar14 = (FAnalyticsEventAttribute *)FVar16.Data;
        if (iVar8 == (int)uVar10) {
          if (iVar8 < 2) break;
          iVar8 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)
                             (((FAnalyticsEventAttribute *)FVar16.Data)->AttrName).Data.
                             AllocatorInstance.Data,
                             (wchar_t *)
                             AnalyticsManagerProperties::InternalSessionAppVersion.Key.Data.
                             AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
          uVar10 = AnalyticsManagerProperties::InternalSessionAppVersion.Key.Data._8_8_;
        }
        else {
          bVar7 = iVar8 + (int)uVar10 == 1;
        }
        if ((bVar7) ||
           (FVar16.Data = FVar16.Data + 0x30, pFVar14 = pFVar18,
           (FAnalyticsEventAttribute *)FVar16.Data == pFVar15)) break;
      } while( true );
    }
    pFVar18 = (FAnalyticsEventAttribute *)
              (local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 0x30);
    uVar10 = AnalyticsManagerProperties::InternalSessionId.Key.Data._8_8_;
    for (FVar16.Data = local_90.AllocatorInstance.Data;
        (FAnalyticsEventAttribute *)FVar16.Data != pFVar18; FVar16.Data = FVar16.Data + 0x30) {
      iVar8 = (((FAnalyticsEventAttribute *)FVar16.Data)->AttrName).Data.ArrayNum;
      if (iVar8 == (int)uVar10) {
        if (iVar8 < 2) goto LAB_14319e83d;
        iVar8 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)
                           (((FAnalyticsEventAttribute *)FVar16.Data)->AttrName).Data.
                           AllocatorInstance.Data,
                           (wchar_t *)
                           AnalyticsManagerProperties::InternalSessionId.Key.Data.AllocatorInstance.
                           Data);
        bVar7 = iVar8 == 0;
        uVar10 = AnalyticsManagerProperties::InternalSessionId.Key.Data._8_8_;
      }
      else {
        bVar7 = iVar8 + (int)uVar10 == 1;
      }
      if (bVar7) goto LAB_14319e83d;
    }
    FVar16.Data = (FScriptContainerElement *)0x0;
LAB_14319e83d:
    if ((((pFVar17 != (FAnalyticsEventAttribute *)0x0) &&
         (pFVar13 != (FAnalyticsEventAttribute *)0x0)) &&
        (pFVar14 != (FAnalyticsEventAttribute *)0x0)) &&
       ((FAnalyticsEventAttribute *)FVar16.Data != (FAnalyticsEventAttribute *)0x0)) {
      CleanupFiles(this,&param_2->PropertyFiles,true);
      if (((this->SummarySender).Object == (IAnalyticsSessionSummarySender *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar3 = (this->SummarySender).Object;
      (**(code **)((longlong)*pIVar3 + 8))
                (pIVar3,&pFVar17->AttrValueString,&pFVar13->AttrValueString,
                 &pFVar14->AttrValueString,
                 &((FAnalyticsEventAttribute *)FVar16.Data)->AttrValueString,local_80);
      goto LAB_14319e8c8;
    }
  }
  CleanupFiles(this,&param_2->PropertyFiles,false);
LAB_14319e8c8:
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_80[0].AllocatorInstance.Data,local_80[0].ArrayNum);
  if ((FAnalyticsEventAttribute *)local_80[0].AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_80[0].AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_90.AllocatorInstance.Data == (FAnalyticsEventAttribute *)0x0
     ) {
    return;
  }
  FMemory::Free(local_90.AllocatorInstance.Data);
  return;
}

// PruneTrackedPropertyStores @ 14319e930

void __thiscall
FAnalyticsSessionSummaryManager::PruneTrackedPropertyStores(FAnalyticsSessionSummaryManager *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = (this->WeakPropertyStores).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->WeakPropertyStores).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->WeakPropertyStores).AllocatorInstance.Data;
      if (((*(longlong *)(pFVar1 + lVar7) == 0) ||
          (lVar2 = *(longlong *)(pFVar1 + lVar7 + 8), lVar2 == 0)) || (*(int *)(lVar2 + 8) < 1)) {
        uVar5 = 0;
        if ((int)uVar6 < (this->WeakPropertyStores).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<TWeakPtr<IAnalyticsPropertyStore,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->WeakPropertyStores,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->WeakPropertyStores).ArrayNum,
                   &(this->WeakPropertyStores).ArrayMax);
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// SetSender @ 1431a44c0

void __thiscall
FAnalyticsSessionSummaryManager::SetSender
          (FAnalyticsSessionSummaryManager *this,
          TSharedPtr<IAnalyticsSessionSummarySender,1> *param_1)

{
  IAnalyticsSessionSummarySender *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pIVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SummarySender).SharedReferenceCount.ReferenceController;
  (this->SummarySender).Object = pIVar1;
  (this->SummarySender).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetUserId @ 1431a4e90

void __thiscall
FAnalyticsSessionSummaryManager::SetUserId(FAnalyticsSessionSummaryManager *this,FString *param_1)

{
  int iVar1;
  longlong *plVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  undefined8 local_res18 [2];
  
  ::FString::operator=(&this->UserId,param_1);
  PruneTrackedPropertyStores(this);
  iVar1 = (this->WeakPropertyStores).ArrayNum;
  pFVar7 = (this->WeakPropertyStores).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->WeakPropertyStores).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TWeakPtr<IAnalyticsPropertyStore,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar6) {
        return;
      }
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) break;
LAB_1431a4f10:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      pFVar7 = pFVar7 + 0x10;
    }
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1431a4f10;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    plVar2 = *(longlong **)pFVar7;
    if (plVar2 == (longlong *)0x0) goto LAB_1431a4f10;
    (**(code **)(*plVar2 + 0x78))
              (plVar2,&AnalyticsManagerProperties::InternalSessionUserId,&this->UserId,0);
    local_res18[0] = 0x7fffffffffffffff;
    (**(code **)(*plVar2 + 0x150))(plVar2,0,local_res18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// Shutdown @ 1431a5010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnalyticsSessionSummaryManager::Shutdown(FAnalyticsSessionSummaryManager *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  FProcessGroup *pFVar7;
  undefined1 auStack_88 [32];
  TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((this->SummarySender).Object == (IAnalyticsSessionSummarySender *)0x0) {
    if (param_1) {
      GetSessionFiles(this,(TMap<FString,FAnalyticsSessionSummaryManager::FProcessGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>_>
                            *)&local_68);
      iVar2 = (this->ProcessGroupId).Data.ArrayNum;
      if (iVar2 == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(this->ProcessGroupId).Data.AllocatorInstance.Data;
      }
      iVar3 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
      iVar2 = TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(&local_68,uVar1,&this->ProcessGroupId);
      if (iVar2 != -1) {
        lVar5 = (longlong)iVar2 * 0x40 + local_68.Elements._0_8_;
        lVar6 = lVar5 + 0x10;
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        if (lVar6 != 0) {
          CleanupFiles(this,(TArray<FAnalyticsSessionSummaryManager::FPropertyFileInfo,TSizedDefaultAllocator<32>_>
                             *)(lVar6 + 0x18),false);
        }
      }
      local_68.HashSize = 0;
      if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_68.Elements);
      this->StoreCounter = 0;
    }
    else {
      this->StoreCounter = 0;
    }
  }
  else {
    GetSessionFiles(this,(TMap<FString,FAnalyticsSessionSummaryManager::FProcessGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>_>
                          *)&local_68);
    iVar2 = (this->ProcessGroupId).Data.ArrayNum;
    if (iVar2 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(this->ProcessGroupId).Data.AllocatorInstance.Data;
    }
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    iVar2 = TSet<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(&local_68,uVar1,&this->ProcessGroupId);
    if (iVar2 != -1) {
      lVar6 = (longlong)iVar2 * 0x40 + local_68.Elements._0_8_;
      pFVar7 = (FProcessGroup *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        pFVar7 = (FProcessGroup *)0x0;
      }
      if (pFVar7 != (FProcessGroup *)0x0) {
        if (param_1) {
          CleanupFiles(this,&pFVar7->PropertyFiles,false);
        }
        else {
          ProcessSummary(this,&this->ProcessGroupId,pFVar7);
        }
      }
    }
    local_68.HashSize = 0;
    if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_68.Elements);
    this->StoreCounter = 0;
  }
  return;
}

// Tick @ 1431a6780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAnalyticsSessionSummaryManager::Tick(FAnalyticsSessionSummaryManager *this)

{
  ulonglong uVar1;
  code *pcVar2;
  double dVar3;
  longlong *plVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  FString *pFVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  longlong *local_100;
  int iStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  int local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((((this->SummarySender).Object != (IAnalyticsSessionSummarySender *)0x0) &&
      (this->bOrphanGroupOwner != false)) &&
     (QueryPerformanceCounter(&local_c8),
     dVar3 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000,
     this->NextOrphanSessionCheckTimeSecs <= dVar3 && dVar3 != this->NextOrphanSessionCheckTimeSecs)
     ) {
    QueryPerformanceCounter(&local_c0);
    this->NextOrphanSessionCheckTimeSecs =
         (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         (double)AnalyticsSessionUtils::OrphanSessionCheckPeriod.Ticks * __real_3e7ad7f29abcaf48 +
         __real_4170000000000000;
    GetSessionFiles(this,(TMap<FString,FAnalyticsSessionSummaryManager::FProcessGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAnalyticsSessionSummaryManager::FProcessGroup,0>_>
                          *)local_88);
    uVar10 = local_60;
    iStack_f8 = 0;
    local_e0 = 0;
    uStack_f4 = 1;
    uStack_e4 = 0;
    if (local_60 != 0) {
      puVar11 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar11 = local_68;
      }
      uVar12 = *puVar11;
      while (uVar12 == 0) {
        lVar7 = (longlong)iStack_f8;
        local_e0 = local_e0 + 0x20;
        iStack_f8 = iStack_f8 + 1;
        uStack_e4 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_f8)
        goto LAB_1431a68f1;
        uVar12 = puVar11[lVar7 + 1];
      }
      uStack_f4 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_f4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_d0 = (int)lVar7;
      uStack_e4 = local_e0 + -1 + local_d0;
      if ((int)local_60 < (int)uStack_e4) {
        uStack_e4 = local_60;
      }
    }
LAB_1431a68f1:
    local_100 = (longlong *)local_88;
    local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    iStack_d8 = local_88._8_4_ - local_54;
    uVar12 = local_60 & 0xffffffe0;
    uStack_e8 = 0xffffffff;
    TStack_b0.CurrentBitIndex = uStack_e4;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    TStack_b0._padding_ = CONCAT44(uStack_f4,iStack_f8);
    iVar9 = (int)local_60 >> 5;
    TStack_b0._28_4_ = uStack_e4;
    TStack_b0.BaseBitIndex = local_e0;
    uStack_90 = CONCAT44(uStack_d4,iStack_d8);
    bVar6 = (byte)local_60;
    uStack_dc = uStack_e4;
    local_b8 = local_100;
    TStack_b0.Array = local_f0;
    if (((int)local_60 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar10 != local_60) {
      puVar11 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar11 = local_68;
      }
      uVar10 = -1 << (bVar6 & 0x1f) & puVar11[iVar9];
      while (uVar10 == 0) {
        lVar7 = (longlong)iVar9;
        uVar12 = uVar12 + 0x20;
        iVar9 = iVar9 + 1;
        uVar10 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_1431a6a20;
        uVar10 = puVar11[lVar7 + 1];
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar10 = (int)lVar7 + -1 + uVar12;
      if ((int)local_60 < (int)uVar10) {
        uVar10 = local_60;
      }
    }
LAB_1431a6a20:
    while( true ) {
      plVar4 = local_b8;
      if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
        `TSparseArray<TSparseSetElement<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
      }
      if (((TStack_b0.CurrentBitIndex == uVar10) &&
          (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar4 == (longlong *)local_88)) break;
      pFVar8 = (FString *)((longlong)TStack_b0.CurrentBitIndex * 0x40 + *plVar4);
      if (*(uint *)&pFVar8[1].Data.AllocatorInstance.Data != this->PrincipalProcessId) {
        ProcessSummary(this,pFVar8,(FProcessGroup *)(pFVar8 + 1));
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FAnalyticsSessionSummaryManager::FProcessGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  return;
}

