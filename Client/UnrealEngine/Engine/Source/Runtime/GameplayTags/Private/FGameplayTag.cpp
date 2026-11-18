// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 22

// StaticStruct @ 146abed10

UScriptStruct * __cdecl FGameplayTag::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTag,(UObject *)pUVar1,L"GameplayTag");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton;
}

// FGameplayTag @ 146acb610

FGameplayTag * __thiscall FGameplayTag::FGameplayTag(FGameplayTag *this,FName *param_1)

{
  this->TagName = *param_1;
  return this;
}

// FromExportString @ 146ada6d0

void __thiscall FGameplayTag::FromExportString(FGameplayTag *this,FString *param_1,int param_2)

{
  UScriptStruct *this_00;
  UPackage *pUVar1;
  wchar_t *pwVar2;
  FOutputDevice local_28;
  FString local_18;
  
  this->TagName = (FName)0x0;
  FOutputDevice::FOutputDevice(&local_28);
  local_28._padding_ = (longlong)&___7FOutputDeviceNull__6B_;
  if (Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTag,(UObject *)pUVar1,L"GameplayTag");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton;
  ::FString::FString(&local_18,L"FGameplayTag");
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  UScriptStruct::ImportText(this_00,pwVar2,this,(UObject *)0x0,param_2,&local_28,&local_18,true);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FOutputDevice::~FOutputDevice(&local_28);
  return;
}

// GetGameplayTagParents @ 146ade310

FGameplayTagContainer * __thiscall
FGameplayTag::GetGameplayTagParents
          (FGameplayTag *this,FGameplayTagContainer *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  UGameplayTagsManager *pUVar3;
  FGameplayTagContainer *pFVar4;
  TSharedPtr<FGameplayTagNode,1> *pTVar5;
  
  pUVar3 = UGameplayTagsManager::Get();
  lpCriticalSection = &pUVar3->GameplayTagMapCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FGameplayTagContainer *)(*pcVar1)();
    return pFVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar5 = TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
           ::Find((TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
                   *)&pUVar3->GameplayTagNodeMap,this);
  if (pTVar5 != (TSharedPtr<FGameplayTagNode,1> *)0x0) {
    if ((pTVar5->Object == (FGameplayTagNode *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGameplayTagContainer *)(*pcVar1)();
      return pFVar4;
    }
    pFVar4 = &pTVar5->Object->CompleteTagWithParents;
    if (pFVar4 != (FGameplayTagContainer *)0x0) {
      FGameplayTagContainer::GetGameplayTagParents(pFVar4,__return_storage_ptr__);
      goto joined_r0x000146ade3dc;
    }
  }
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
joined_r0x000146ade3dc:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// GetSingleTagContainer @ 146ae0db0

/* WARNING: Enum "Type": Some values do not have unique names */

FGameplayTagContainer * __thiscall
FGameplayTag::GetSingleTagContainer
          (FGameplayTag *this,FGameplayTagContainer *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTag_GetSingleTagContainer> FVar8;
  UGameplayTagsManager *this_00;
  FGameplayTagContainer *pFVar9;
  FThreadStats *this_01;
  FThreadStatsPool *pFVar10;
  uint uVar11;
  FStatMessage *pFVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_88;
  FGameplayTag *local_80;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  TSharedPtr<FGameplayTagNode,1> local_58;
  FStatMessage local_48;
  FStatMessage local_38;
  
  FVar8 = StatPtr_STAT_FGameplayTag_GetSingleTagContainer;
  if (StatPtr_STAT_FGameplayTag_GetSingleTagContainer ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_GetSingleTagContainer>)0x0) {
    pFVar7 = ::FName::FName(&local_70,"STAT_FGameplayTag_GetSingleTagContainer");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_GetSingleTagContainer>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTag_GetSingleTagContainer
                       ,*pFVar7,L"FGameplayTag::GetSingleTagContainer","STATGROUP_GameplayTags",
                       "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid
                      );
  }
  FVar14 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar13.Value;
        local_res20.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x480);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88.s.LowPart = FVar13.Value;
      local_88.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar4 = true;
      goto LAB_146ae0ef2;
    }
  }
  bVar4 = false;
  FVar14 = local_68;
LAB_146ae0ef2:
  this_00 = UGameplayTagsManager::Get();
  UGameplayTagsManager::FindTagNode(this_00,&local_58,this);
  if (local_58.Object == (FGameplayTagNode *)0x0) {
    if (this->TagName != (FName)0x0) {
      local_80 = this;
      `FGameplayTag::GetSingleTagContainer'::__l2::<lambda_1>::operator()(&local_80);
    }
    (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
    (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
    (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ParentTags).ArrayNum = 0;
    (__return_storage_ptr__->ParentTags).ArrayMax = 0;
    FGameplayTagContainer::operator=(__return_storage_ptr__,&FGameplayTagContainer::EmptyContainer);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar4) {
      return __return_storage_ptr__;
    }
    if (FVar14 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(pFVar10);
    }
    if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
    local_38.NameAndInfo.Index.Value = FVar14.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_78);
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_38.StatData.Pad[0] = local_78.s.LowPart._0_1_;
    local_38.StatData.Pad[1] = local_78.s.LowPart._1_1_;
    local_38.StatData.Pad[2] = local_78.s.LowPart._2_1_;
    local_38.StatData.Pad[3] = local_78.s.LowPart._3_1_;
    pFVar12 = &local_38;
  }
  else {
    if ((local_58.Object == (FGameplayTagNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FGameplayTagContainer *)(*pcVar2)();
      return pFVar9;
    }
    (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
    (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
    (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ParentTags).ArrayNum = 0;
    (__return_storage_ptr__->ParentTags).ArrayMax = 0;
    FGameplayTagContainer::operator=
              (__return_storage_ptr__,&(local_58.Object)->CompleteTagWithParents);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar4) {
      return __return_storage_ptr__;
    }
    if (FVar14 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(pFVar10);
    }
    if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
    local_48.NameAndInfo.Index.Value = FVar14.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_88);
    local_48.StatData.Pad[4] = '\0';
    local_48.StatData.Pad[5] = '\0';
    local_48.StatData.Pad[6] = '\0';
    local_48.StatData.Pad[7] = '\0';
    local_48.StatData.Pad[0] = local_88.s.LowPart._0_1_;
    local_48.StatData.Pad[1] = local_88.s.LowPart._1_1_;
    local_48.StatData.Pad[2] = local_88.s.LowPart._2_1_;
    local_48.StatData.Pad[3] = local_88.s.LowPart._3_1_;
    pFVar12 = &local_48;
  }
  FThreadStats::AddStatMessage(this_01,pFVar12);
  piVar1 = &this_01->ScopeCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FThreadStats::Flush(this_01,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_01,false,false);
  }
  return __return_storage_ptr__;
}

// GetTagLeafName @ 146ae1200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall FGameplayTag::GetTagLeafName(FGameplayTag *this)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  FName *pFVar4;
  FName in_RDX;
  int iVar5;
  undefined1 auStack_898 [32];
  FName local_878 [2];
  TStringView<wchar_t> local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_898;
  local_878[0] = this->TagName;
  if (local_878[0] == (FName)0x0) {
    *(FName *)in_RDX = (FName)0x0;
  }
  else {
    local_858.Base = local_838;
    local_858.CurPos = local_838;
    local_858.End = local_22;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    ::FName::AppendString(local_878,&local_858);
    pwVar1 = local_858.Base;
    iVar5 = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
    local_868.Size = iVar5;
    local_868.DataPtr = local_858.Base;
    iVar2 = UE::String::FindLastChar(&local_868,L'.',CaseSensitive);
    if (iVar2 == -1) {
      *(FName *)in_RDX = local_878[0];
    }
    else {
      iVar3 = (iVar5 - iVar2) + -1;
      iVar2 = iVar5;
      if (iVar3 < iVar5) {
        iVar2 = iVar3;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      pFVar4 = ::FName::FName((FName *)&local_868,iVar3,pwVar1 + ((longlong)iVar5 - (longlong)iVar3)
                              ,FNAME_Add);
      *(FName *)in_RDX = *pFVar4;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  }
  return in_RDX;
}

// ImportTextItem @ 146ae1e00

bool __thiscall
FGameplayTag::ImportTextItem
          (FGameplayTag *this,wchar_t **param_1,int param_2,UObject *param_3,FOutputDevice *param_4)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  UScriptStruct *this_00;
  UGameplayTagsManager *pUVar7;
  FName *pFVar8;
  ForAnyElementType FVar9;
  FName local_50;
  FName local_48;
  FString local_40;
  FString local_30;
  
  bVar3 = false;
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  pwVar6 = FPropertyHelpers::ReadToken(*param_1,&local_40,true);
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar1 = *param_1;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar9.Data = local_40.Data.AllocatorInstance.Data;
    }
    *param_1 = pwVar6;
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L"None");
    if ((iVar5 == 0) || (local_40.Data.ArrayNum < 2)) {
      this->TagName = (FName)0x0;
    }
    else {
      iVar5 = local_40.Data.ArrayNum + -1;
      if (local_40.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      if ((iVar5 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(wchar_t *)local_40.Data.AllocatorInstance.Data != L'(') {
        pUVar7 = UGameplayTagsManager::Get();
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_40.Data.ArrayNum != 0) {
          FVar9.Data = local_40.Data.AllocatorInstance.Data;
        }
        pFVar8 = ::FName::FName(&local_48,(wchar_t *)FVar9.Data);
        bVar3 = UGameplayTagsManager::ImportSingleGameplayTag
                          (pUVar7,this,*pFVar8,((uint)param_2 >> 5 & 1) != 0);
        goto LAB_146ae1fc1;
      }
      this_00 = StaticStruct();
      local_50 = (FName)this_00->_padding_;
      ::FName::ToString(&local_50,&local_30);
      pwVar6 = UScriptStruct::ImportText
                         (this_00,pwVar1,this,param_3,param_2,param_4,&local_30,false);
      *param_1 = pwVar6;
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      pUVar7 = UGameplayTagsManager::Get();
      UGameplayTagsManager::ImportSingleGameplayTag
                (pUVar7,this,this->TagName,(bool)((byte)((uint)param_2 >> 5) & 1));
    }
    bVar3 = true;
  }
LAB_146ae1fc1:
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// IsValidGameplayTagString @ 146ae2cb0

bool __cdecl
FGameplayTag::IsValidGameplayTagString(FString *param_1,FText *param_2,FString *param_3)

{
  int iVar1;
  bool bVar2;
  UGameplayTagsManager *pUVar3;
  TStringView<wchar_t> local_18;
  
  pUVar3 = UGameplayTagsManager::Get();
  iVar1 = (param_1->Data).ArrayNum;
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  bVar2 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,param_2,param_3,&pUVar3->InvalidTagCharacters);
  return bVar2;
}

// MatchesAny @ 146ae5140

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FGameplayTag::MatchesAny(FGameplayTag *this,FGameplayTagContainer *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTag_MatchesAny> FVar9;
  UGameplayTagsManager *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  TSharedPtr<FGameplayTagNode,1> local_50;
  FStatMessage local_40;
  
  if (GEnableGameplayTagDetailedStats) {
    FVar9 = StatPtr_STAT_FGameplayTag_MatchesAny;
    if (StatPtr_STAT_FGameplayTag_MatchesAny ==
        (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_MatchesAny>)0x0) {
      pFVar8 = ::FName::FName(&local_68,"STAT_FGameplayTag_MatchesAny");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_MatchesAny>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTag_MatchesAny,*pFVar8,
                         L"FGameplayTag::MatchesAny","STATGROUP_GameplayTags","STATCAT_Advanced",
                         L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  else {
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_MatchesAny>)&TStatId::TStatId_NAME_None;
  }
  FVar10 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  if ((FVar10.ComparisonIndex.Value.Value != 0) || (FVar10.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar10.ComparisonIndex.Value.Value;
        local_res20.Number = FVar10.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x4dc);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      goto LAB_146ae52a0;
    }
  }
  bVar4 = false;
  FVar10 = local_60;
LAB_146ae52a0:
  this_00 = UGameplayTagsManager::Get();
  UGameplayTagsManager::FindTagNode(this_00,&local_50,this);
  if (local_50.Object == (FGameplayTagNode *)0x0) {
    if (this->TagName != (FName)0x0) {
      local_78 = (FName)this;
      `FGameplayTag::MatchesAny'::__l2::<lambda_1>::operator()(&local_78);
    }
    bVar6 = false;
  }
  else {
    if (local_50.Object == (FGameplayTagNode *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    bVar6 = FGameplayTagContainer::HasAny(&(local_50.Object)->CompleteTagWithParents,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_40.NameAndInfo.Index = FVar10.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_40);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return bVar6;
}

// MatchesTag @ 146ae54b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FGameplayTag::MatchesTag(FGameplayTag *this,FGameplayTag *param_1)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTag_MatchesTag> FVar10;
  UGameplayTagsManager *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName *pFVar11;
  FName FVar12;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  TSharedPtr<FGameplayTagNode,1> local_50;
  FStatMessage local_40;
  
  if (GEnableGameplayTagDetailedStats) {
    FVar10 = StatPtr_STAT_FGameplayTag_MatchesTag;
    if (StatPtr_STAT_FGameplayTag_MatchesTag ==
        (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_MatchesTag>)0x0) {
      pFVar9 = ::FName::FName(&local_68,"STAT_FGameplayTag_MatchesTag");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_MatchesTag>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTag_MatchesTag,*pFVar9
                          ,L"FGameplayTag::MatchesTag","STATGROUP_GameplayTags","STATCAT_Advanced",
                          L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  else {
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_MatchesTag>)&TStatId::TStatId_NAME_None;
  }
  FVar12 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  if ((FVar12.ComparisonIndex.Value.Value == 0) && (FVar12.Number == 0)) {
LAB_146ae560b:
    bVar5 = false;
    FVar12 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar12.ComparisonIndex.Value.Value;
        local_res20.Number = FVar12.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x4ca);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146ae560b;
    local_78 = FVar12;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar5 = true;
  }
  this_00 = UGameplayTagsManager::Get();
  UGameplayTagsManager::FindTagNode(this_00,&local_50,this);
  if (local_50.Object == (FGameplayTagNode *)0x0) {
    if (this->TagName != (FName)0x0) {
      local_78 = (FName)this;
      `FGameplayTag::MatchesTag'::__l2::<lambda_1>::operator()(&local_78);
    }
  }
  else {
    if ((local_50.Object == (FGameplayTagNode *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    FVar2 = param_1->TagName;
    if (FVar2 != (FName)0x0) {
      pFVar11 = (FName *)((local_50.Object)->CompleteTagWithParents).GameplayTags.AllocatorInstance.
                         Data;
      pFVar9 = pFVar11 + ((local_50.Object)->CompleteTagWithParents).GameplayTags.ArrayNum;
      for (; pFVar11 != pFVar9; pFVar11 = pFVar11 + 1) {
        if (*pFVar11 == FVar2) goto LAB_146ae56b5;
      }
      pFVar11 = (FName *)((local_50.Object)->CompleteTagWithParents).ParentTags.AllocatorInstance.
                         Data;
      pFVar9 = pFVar11 + ((local_50.Object)->CompleteTagWithParents).ParentTags.ArrayNum;
      for (; pFVar11 != pFVar9; pFVar11 = pFVar11 + 1) {
        if (*pFVar11 == FVar2) goto LAB_146ae56b5;
      }
    }
  }
  bVar7 = false;
LAB_146ae56d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_40.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_40);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return bVar7;
LAB_146ae56b5:
  bVar7 = true;
  goto LAB_146ae56d2;
}

// MatchesTagDepth @ 146ae5830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FGameplayTag::MatchesTagDepth(FGameplayTag *this,FGameplayTag *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ForElementType<FName> FVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ForElementType<FName> FVar10;
  undefined1 auStack_298 [32];
  ulonglong local_278;
  longlong local_270;
  UGameplayTagsManager *local_268 [2];
  TArray<FName,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_258;
  TArray<FName,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  local_268[0] = UGameplayTagsManager::Get();
  iVar4 = 0;
  local_148.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  local_148.ArrayNum = 0;
  local_258.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  local_258.ArrayNum = 0;
  local_148.ArrayMax = 0x20;
  local_258.ArrayMax = 0x20;
  `UGameplayTagsManager::GameplayTagsMatchDepth'::__l2::<lambda_1>::operator()
            (local_268,&local_148,this);
  `UGameplayTagsManager::GameplayTagsMatchDepth'::__l2::<lambda_1>::operator()
            (local_268,&local_258,param_1);
  uVar6 = local_258.ArrayNum - 1;
  uVar8 = local_148.ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar6 * 8;
    lVar7 = (longlong)(int)uVar8 * 8;
    do {
      if ((int)uVar6 < 0) break;
      uVar3 = 0;
      if ((int)uVar6 < local_258.ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_278 = (ulonglong)(int)uVar6;
        local_270 = (longlong)local_258.ArrayNum;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      FVar10 = (ForElementType<FName>)&local_258;
      if (local_258.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
        FVar10 = local_258.AllocatorInstance.SecondaryData;
      }
      uVar3 = 0;
      if ((int)uVar8 < local_148.ArrayNum) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_278 = (ulonglong)uVar8;
        local_270 = (longlong)local_148.ArrayNum;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      FVar5 = (ForElementType<FName>)&local_148;
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
        FVar5 = local_148.AllocatorInstance.SecondaryData;
      }
      if (*(longlong *)(lVar7 + (longlong)FVar5) != *(longlong *)(lVar9 + (longlong)FVar10)) break;
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + -8;
      uVar6 = uVar6 - 1;
      lVar9 = lVar9 + -8;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  if (local_258.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_258.AllocatorInstance.SecondaryData);
  }
  if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
  }
  return iVar4;
}

// NetSerialize @ 146ae5a80

bool __thiscall
FGameplayTag::NetSerialize(FGameplayTag *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  FName FVar1;
  uint uVar2;
  UGameplayTagsManager *pUVar3;
  int *piVar4;
  FName local_res10 [2];
  FName local_res20;
  
  if ((param_1->field_0x28 & 4) != 0) {
    pUVar3 = UGameplayTagsManager::Get();
    local_res10[0] = this->TagName;
    local_res20 = local_res10[0];
    uVar2 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
    piVar4 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
             ::FindOrAddImpl<FGameplayTag_const_&>
                       ((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                         *)&pUVar3->ReplicationCountMap,local_res20.Number + uVar2,
                        (FGameplayTag *)local_res10);
    FVar1 = local_res10[0];
    *piVar4 = *piVar4 + 1;
    uVar2 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
    piVar4 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
             ::FindOrAddImpl<FGameplayTag_const_&>
                       ((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                         *)&pUVar3->ReplicationCountMap_SingleTags,uVar2 + FVar1.Number,
                        (FGameplayTag *)local_res10);
    *piVar4 = *piVar4 + 1;
  }
  NetSerialize_Packed(this,param_1,param_2,param_3);
  *param_3 = true;
  return true;
}

// NetSerialize_ForReplayUsingFastReplication @ 146ae6930

/* WARNING: Removing unreachable block (ram,0x000146ae6a8b) */
/* WARNING: Removing unreachable block (ram,0x000146ae6ab5) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FGameplayTag::NetSerialize_ForReplayUsingFastReplication
          (FGameplayTag *this,FArchive *param_1,UPackageMapClient *param_2)

{
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  FNetFieldExportGroup *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  UGameplayTagsManager *this_00;
  TSharedPtr<FNetFieldExportGroup,1> *pTVar9;
  uint uVar10;
  FName local_res20;
  TSharedPtr<FNetFieldExportGroup,1> local_88;
  FString local_78;
  FString local_68;
  TSharedPtr<FNetFieldExportGroup,1> local_58;
  TSharedPtr<FNetFieldExportGroup,1> local_48;
  FString local_38;
  
  this_00 = UGameplayTagsManager::Get();
  uVar10 = 0xffff;
  ::FString::FString(&local_78,L"NetworkGameplayTagNodeIndex");
  UPackageMapClient::GetNetFieldExportGroup(param_2,&local_88,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_1->field_0x28 & 4) != 0) {
    if (local_88.Object == (FNetFieldExportGroup *)0x0) {
      pTVar9 = CreateNetfieldExportGroupForNetworkGameplayTags
                         (&local_58,this_00,L"NetworkGameplayTagNodeIndex");
      if (&local_88 != pTVar9) {
        local_88.Object = pTVar9->Object;
        pTVar9->Object = (FNetFieldExportGroup *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_88.SharedReferenceCount,&pTVar9->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      local_48.Object = local_88.Object;
      local_48.SharedReferenceCount.ReferenceController =
           local_88.SharedReferenceCount.ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      ::FString::FString(&local_68,L"NetworkGameplayTagNodeIndex");
      UPackageMapClient::AddNetFieldExportGroup(param_2,&local_68,&local_48);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    uVar7 = UGameplayTagsManager::GetNetIndexFromTag(this_00,this);
    uVar10 = (uint)uVar7;
    uVar8 = UGameplayTagsManager::GetInvalidTagNetIndex(this_00);
    if ((uVar7 == uVar8) || (uVar7 == 0xffff)) {
      uVar10 = 0xffff;
    }
    else {
      UPackageMapClient::TrackNetFieldExport(param_2,local_88.Object,(uint)uVar7);
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1);
  if ((param_1->field_0x28 & 1) == 0) goto LAB_146ae6b0f;
  if ((ushort)uVar10 == 0xffff) {
LAB_146ae6b00:
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
  }
  else {
    if (local_88.Object == (FNetFieldExportGroup *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7958607028354546350>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                         ,0x552,"NetFieldExportGroup.IsValid()");
      if (bVar5) {
code_r0x000146ae6b99:
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      goto LAB_146ae6b00;
    }
    if ((local_88.Object == (FNetFieldExportGroup *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pFVar4 = local_88.Object;
    if (((local_88.Object)->NetFieldExports).ArrayNum <= (int)uVar10) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7958607028354546350>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                         ,0x552,"NetIndex < NetFieldExportGroup->NetFieldExports.Num()");
      if (bVar5) goto code_r0x000146ae6b99;
      goto LAB_146ae6b00;
    }
    if ((((local_88.Object)->NetFieldExports).ArrayNum <= (int)uVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    lVar1 = (ulonglong)(ushort)uVar10 * 0x28;
    FVar2 = *(FName *)((pFVar4->NetFieldExports).AllocatorInstance.Data + lVar1 + 0x18);
    this->TagName = FVar2;
    UGameplayTagsManager::RequestGameplayTag
              (this_00,(FName)&local_res20,FVar2.ComparisonIndex.Value._0_1_);
    if (local_res20 == (FName)0x0) {
      if ((local_88.Object == (FNetFieldExportGroup *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar4 = local_88.Object;
      if ((((local_88.Object)->NetFieldExports).ArrayNum <= (int)uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((pFVar4->NetFieldExports).AllocatorInstance.Data[lVar1 + 0x23] ==
          (FScriptContainerElement)0x0) {
        if (2 < (byte)LogGameplayTags._0_1_) {
          ::FName::ToString(&this->TagName,&local_38);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        if ((local_88.Object == (FNetFieldExportGroup *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar4 = local_88.Object;
        if ((((local_88.Object)->NetFieldExports).ArrayNum <= (int)uVar10) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        (pFVar4->NetFieldExports).AllocatorInstance.Data[lVar1 + 0x23] =
             (FScriptContainerElement)0x1;
      }
    }
  }
  this->TagName = local_res20;
LAB_146ae6b0f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return true;
}

// NetSerialize_Packed @ 146ae6d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FGameplayTag::NetSerialize_Packed
          (FGameplayTag *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTag_NetSerialize> FVar15;
  UGameplayTagsManager *this_00;
  UClass *pUVar16;
  FName FVar17;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar18;
  FNameEntryId FVar19;
  char local_res10 [8];
  char local_68 [8];
  LARGE_INTEGER local_60;
  FStatMessage local_58;
  FName local_48;
  
  FVar19.Value = 0;
  if (GEnableGameplayTagDetailedStats) {
    FVar15 = StatPtr_STAT_FGameplayTag_NetSerialize;
    if (StatPtr_STAT_FGameplayTag_NetSerialize ==
        (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_NetSerialize>)0x0) {
      pFVar14 = ::FName::FName((FName *)&local_58,"STAT_FGameplayTag_NetSerialize");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_NetSerialize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTag_NetSerialize,
                          *pFVar14,L"FGameplayTag::NetSerialize","STATGROUP_GameplayTags",
                          "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
  }
  else {
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_NetSerialize>)
             &TStatId::TStatId_NAME_None;
  }
  uVar8 = local_60.s.LowPart._2_2_;
  uVar6 = local_60.s.LowPart._0_2_;
  FVar18 = *(FName *)FVar15;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  uVar11 = FVar18.Number;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (uVar11 == 0)) {
LAB_146ae6e9e:
    bVar4 = false;
    FVar18 = local_48;
  }
  else {
    local_60.s.LowPart._0_2_ = FVar18.ComparisonIndex.Value._0_2_;
    uVar7 = local_60.s.LowPart._0_2_;
    local_60.s.LowPart._2_2_ = FVar18.ComparisonIndex.Value._2_2_;
    uVar9 = local_60.s.LowPart._2_2_;
    local_60.s.LowPart._0_2_ = uVar6;
    local_60.s.LowPart._2_2_ = uVar8;
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_60.s.LowPart._0_2_ = 0;
      local_60.s.LowPart._2_2_ = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_60.s,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_60.s.LowPart._0_2_ = uVar7;
        local_60.s.LowPart._2_2_ = uVar9;
        local_60.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_60.s,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x619);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146ae6e9e;
    local_60.s.LowPart._0_2_ = uVar7;
    local_60.s.LowPart._2_2_ = uVar9;
    local_60.s.HighPart = uVar11;
    local_48 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar4 = true;
    FVar19.Value = local_48.ComparisonIndex.Value;
  }
  this_00 = UGameplayTagsManager::Get();
  local_res10[0] = this_00->bUseFastReplication;
  if ((this_00->bUseFastReplication == false) && (this_00->bUseDynamicReplication != false)) {
    local_68[0] = '\x01';
  }
  else {
    local_68[0] = '\0';
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEngineNetworkCustomVersion::Guid);
  uVar11 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if (uVar11 < 0x24) {
    local_res10[0] = GOldReplaysUseGameplayTagFastReplication;
    local_68[0] = '\0';
LAB_146ae6f3b:
    if (local_res10[0] != '\0') goto LAB_146ae6f43;
    if (local_68[0] == '\0') {
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
    }
    else {
      UE::GameplayTags::GameplayTagDynamicSerialization::NetSerialize(this,param_1,param_2);
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
    if (local_res10[0] == '\0') {
      (**(code **)(*(longlong *)param_1 + 400))(param_1,local_68);
      goto LAB_146ae6f3b;
    }
LAB_146ae6f43:
    if (param_2 != (UPackageMap *)0x0) {
      pUVar16 = Z_Construct_UClass_UPackageMapClient_NoRegister();
      iVar12 = (int)pUVar16->_padding_;
      if ((((iVar12 <= *(int *)(param_2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
            &pUVar16->_padding_)) &&
          (lVar2 = *(longlong *)&param_2[1].TrackedUnmappedNetGuids.Elements.field_0x20, lVar2 != 0)
          ) && ((*(byte *)(lVar2 + 0xfc) & 1) != 0)) {
        bVar10 = NetSerialize_ForReplayUsingFastReplication
                           (this,param_1,(UPackageMapClient *)param_2);
        goto LAB_146ae7049;
      }
    }
    local_60.s.LowPart._0_2_ = 0xffff;
    if ((param_1->field_0x28 & 4) == 0) {
      iVar12 = UGameplayTagsManager::GetNetIndexTrueBitNum(this_00);
      iVar13 = UGameplayTagsManager::GetNetIndexFirstBitSegment(this_00);
      SerializeTagNetIndexPacked(param_1,(ushort *)&local_60.QuadPart,iVar13,iVar12);
      FVar17 = UGameplayTagsManager::GetTagNameFromNetIndex(this_00,(ushort)&local_58);
      this->TagName = *(FName *)FVar17;
    }
    else {
      local_60.s.LowPart._0_2_ = UGameplayTagsManager::GetNetIndexFromTag(this_00,this);
      iVar12 = UGameplayTagsManager::GetNetIndexTrueBitNum(this_00);
      iVar13 = UGameplayTagsManager::GetNetIndexFirstBitSegment(this_00);
      SerializeTagNetIndexPacked(param_1,(ushort *)&local_60.QuadPart,iVar13,iVar12);
    }
  }
  bVar10 = true;
  *param_3 = true;
LAB_146ae7049:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_58.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar19.Value;
      QueryPerformanceCounter(&local_60);
      local_58.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      local_58.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      FThreadStats::AddStatMessage(this_01,&local_58);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return bVar10;
}

// ParseParentTags @ 146ae79d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGameplayTag::ParseParentTags
          (FGameplayTag *this,TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FName *pFVar2;
  int iVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined1 auStack_8d8 [32];
  wchar_t *local_8b8;
  ulonglong uStack_8b0;
  TStringView<wchar_t> local_8a8;
  FName local_898;
  FName local_890;
  FName local_888 [2];
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8d8;
  local_898 = this->TagName;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = local_32;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  ::FName::AppendString(&local_898,&local_868);
  pwVar5 = local_868.Base;
  local_8b8 = local_868.Base;
  uVar4 = (longlong)local_868.CurPos - (longlong)local_868.Base >> 1;
  uStack_8b0 = CONCAT44(uStack_8b0._4_4_,(int)uVar4);
  local_8a8.DataPtr = local_868.Base;
  local_8a8._8_8_ = uStack_8b0;
  iVar1 = UE::String::FindLastChar(&local_8a8,L'.',CaseSensitive);
  if (iVar1 != -1) {
    while( true ) {
      iVar3 = (int)uVar4;
      if (iVar1 < (int)uVar4) {
        iVar3 = iVar1;
      }
      iVar6 = 0;
      if (0 < iVar3) {
        iVar6 = iVar3;
      }
      local_8a8.Size = iVar6;
      uStack_8b0 = local_8a8._8_8_;
      local_878.Size = iVar6;
      local_878._12_4_ = local_8a8._12_4_;
      local_8b8 = pwVar5;
      local_8a8.DataPtr = pwVar5;
      local_878.DataPtr = pwVar5;
      iVar1 = UE::String::FindLastChar(&local_878,L'.',CaseSensitive);
      pFVar2 = ::FName::FName(local_888,iVar6,pwVar5,FNAME_Add);
      local_890 = *pFVar2;
      TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGameplayTag>
                (param_1,(FGameplayTag *)&local_890);
      if (iVar1 == -1) break;
      uVar4 = uStack_8b0 & 0xffffffff;
      pwVar5 = local_8b8;
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return;
}

// PostSerialize @ 146ae7d40

void __thiscall FGameplayTag::PostSerialize(FGameplayTag *this,FArchive *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UGameplayTagsManager *pUVar4;
  TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
  *this_00;
  FName *pFVar5;
  UPackage *pUVar6;
  UScriptStruct *local_res10;
  
  if ((((param_1->field_0x28 & 1) != 0) && ((param_1->field_0x29 & 1) != 0)) &&
     ((*(uint *)&param_1->field_0x34 & 0x401000) == 0)) {
    pUVar4 = UGameplayTagsManager::Get();
    lpCriticalSection = &pUVar4->GameplayTagMapCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FVar1 = this->TagName;
    this_00 = (TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
               *)FGameplayTagRedirectors::Get();
    pFVar5 = &TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
              ::Find(this_00,FVar1)->TagName;
    if ((pFVar5 != (FName *)0x0) && (*pFVar5 != (FName)0x0)) {
      this->TagName = *pFVar5;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy>::Broadcast
              (&pUVar4->OnGameplayTagLoadedDelegate,this);
  }
  if (((param_1->field_0x28 & 4) != 0) && (this->TagName != (FName)0x0)) {
    pcVar2 = *(code **)(*(longlong *)param_1 + 0x228);
    if (Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_GameplayTags();
      Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTag,(UObject *)pUVar6,L"GameplayTag");
    }
    local_res10 = Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable
                ((UObject *)Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton);
    }
    (*pcVar2)(param_1,&local_res10,this);
  }
  return;
}

// RequestDirectParent @ 146aebc10

FGameplayTag __thiscall FGameplayTag::RequestDirectParent(FGameplayTag *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FGameplayTagNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  UGameplayTagsManager *this_00;
  FGameplayTag FVar5;
  FName in_RDX;
  TSharedPtr<FGameplayTagNode,1> local_18;
  
  this_00 = UGameplayTagsManager::Get();
  UGameplayTagsManager::FindTagNode(this_00,&local_18,this);
  if (local_18.Object != (FGameplayTagNode *)0x0) {
    if (local_18.Object == (FGameplayTagNode *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5.TagName = (FName)(*pcVar3)();
        return (FGameplayTag)FVar5.TagName;
      }
    }
    pTVar1 = ((local_18.Object)->ParentNode).SharedReferenceCount.ReferenceController;
    pFVar2 = ((local_18.Object)->ParentNode).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 != (FGameplayTagNode *)0x0) {
      if ((pFVar2->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
        *(FName *)in_RDX = EmptyTag.TagName;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
      else {
        *(FName *)in_RDX =
             *(FName *)(pFVar2->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
      goto LAB_146aebcbf;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  *(FName *)in_RDX = (FName)0x0;
LAB_146aebcbf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (FGameplayTag)in_RDX;
}

// RequestGameplayTag @ 146aebce0

FGameplayTag __cdecl FGameplayTag::RequestGameplayTag(FName *param_1,bool param_2)

{
  UGameplayTagsManager *this;
  undefined7 in_register_00000011;
  
  this = UGameplayTagsManager::Get();
  UGameplayTagsManager::RequestGameplayTag
            (this,(FName)param_1,SUB81(*(undefined8 *)CONCAT71(in_register_00000011,param_2),0));
  return (FGameplayTag)(FName)param_1;
}

// SerializeFromMismatchedTag @ 146aed1a0

bool __thiscall
FGameplayTag::SerializeFromMismatchedTag
          (FGameplayTag *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res10 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),this);
    return true;
  }
  return false;
}

// operator() @ 1504f82d0

bool __thiscall `FGameplayTag::GetSingleTagContainer'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7958607028354546550>);
  if (bVar2) {
    local_res10[0] = **(FName **)this;
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7958607028354546550>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504f8344;
    }
  }
  bVar2 = false;
LAB_1504f8344:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504f8380

bool __thiscall `FGameplayTag::MatchesAny'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7958607028354546457>);
  if (bVar2) {
    local_res10[0] = **(FName **)this;
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7958607028354546457>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504f83f4;
    }
  }
  bVar2 = false;
LAB_1504f83f4:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504f8430

bool __thiscall `FGameplayTag::MatchesTag'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7958607028354546475>);
  if (bVar2) {
    local_res10[0] = **(FName **)this;
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7958607028354546475>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504f84a4;
    }
  }
  bVar2 = false;
LAB_1504f84a4:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

