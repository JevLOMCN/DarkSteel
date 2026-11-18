// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 36

// StaticStruct @ 146abf010

UScriptStruct * __cdecl FGameplayTagContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainer,(UObject *)pUVar1,
                         L"GameplayTagContainer");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton;
}

// operator= @ 146ace000

FGameplayTagContainer * __thiscall
FGameplayTagContainer::operator=(FGameplayTagContainer *this,FGameplayTagContainer *param_1)

{
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    pFVar2 = (this->GameplayTags).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->GameplayTags).AllocatorInstance.Data = (param_1->GameplayTags).AllocatorInstance.Data;
    (param_1->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GameplayTags).ArrayNum = (param_1->GameplayTags).ArrayNum;
    (this->GameplayTags).ArrayMax = (param_1->GameplayTags).ArrayMax;
    (param_1->GameplayTags).ArrayNum = 0;
    (param_1->GameplayTags).ArrayMax = 0;
  }
  pTVar3 = &param_1->ParentTags;
  pTVar1 = &this->ParentTags;
  if (pTVar1 != pTVar3) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ParentTags).ArrayNum = (param_1->ParentTags).ArrayNum;
    (this->ParentTags).ArrayMax = (param_1->ParentTags).ArrayMax;
    (param_1->ParentTags).ArrayNum = 0;
    (param_1->ParentTags).ArrayMax = 0;
  }
  return this;
}

// operator= @ 146ace0a0

FGameplayTagContainer * __thiscall
FGameplayTagContainer::operator=(FGameplayTagContainer *this,FGameplayTagContainer *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FGameplayTagContainer *pFVar9;
  
  if (this != param_1) {
    uVar4 = (param_1->GameplayTags).ArrayNum;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    piVar1 = &(this->GameplayTags).ArrayMax;
    piVar2 = &(this->GameplayTags).ArrayNum;
    *piVar2 = 0;
    if (*piVar1 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar4,(ForAnyElementType *)this,0,piVar1);
    }
    iVar5 = (param_1->GameplayTags).ArrayNum;
    if (iVar5 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,iVar5,(ForAnyElementType *)this,piVar2,piVar1);
      memcpy((this->GameplayTags).AllocatorInstance.Data + (longlong)iVar8 * 8,
             (param_1->GameplayTags).AllocatorInstance.Data,(longlong)iVar5 << 3);
    }
    uVar4 = (param_1->ParentTags).ArrayNum;
    pTVar3 = &this->ParentTags;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    piVar1 = &(this->ParentTags).ArrayMax;
    piVar2 = &(this->ParentTags).ArrayNum;
    *piVar2 = 0;
    if (*piVar1 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar4,&pTVar3->AllocatorInstance,0,piVar1);
    }
    if ((pTVar3 == &param_1->ParentTags) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FGameplayTagContainer *)(*pcVar6)();
      return pFVar9;
    }
    iVar5 = (param_1->ParentTags).ArrayNum;
    if (iVar5 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,iVar5,&pTVar3->AllocatorInstance,piVar2,piVar1);
      memcpy((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 8,
             (param_1->ParentTags).AllocatorInstance.Data,(longlong)iVar5 << 3);
    }
  }
  return this;
}

// operator== @ 146ace510

bool __thiscall
FGameplayTagContainer::operator==(FGameplayTagContainer *this,FGameplayTagContainer *param_1)

{
  bool bVar1;
  
  if ((this->GameplayTags).ArrayNum != (param_1->GameplayTags).ArrayNum) {
    return false;
  }
  bVar1 = HasAllExact(this,param_1);
  return bVar1;
}

// operator!= @ 146ace7d0

bool __thiscall
FGameplayTagContainer::operator!=(FGameplayTagContainer *this,FGameplayTagContainer *param_1)

{
  bool bVar1;
  
  if ((this->GameplayTags).ArrayNum != (param_1->GameplayTags).ArrayNum) {
    return true;
  }
  bVar1 = HasAllExact(this,param_1);
  return !bVar1;
}

// AddLeafTag @ 146acfcc0

bool __thiscall FGameplayTagContainer::AddLeafTag(FGameplayTagContainer *this,FGameplayTag *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UGameplayTagsManager *this_00;
  FName *pFVar8;
  FName *pFVar9;
  undefined1 local_res10 [8];
  FGameplayTag *local_res18;
  TSharedPtr<FGameplayTagNode,1> local_38;
  
  FVar4 = param_1->TagName;
  if (FVar4 != (FName)0x0) {
    pFVar9 = (FName *)(this->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (this->GameplayTags).ArrayNum;
    for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 1) {
      if (*pFVar9 == FVar4) {
        return true;
      }
    }
    pFVar9 = (FName *)(this->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (this->GameplayTags).ArrayNum;
    for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 1) {
      if (*pFVar9 == FVar4) {
        return false;
      }
    }
    pFVar9 = (FName *)(this->ParentTags).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (this->ParentTags).ArrayNum;
    for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 1) {
      if (*pFVar9 == FVar4) {
        return false;
      }
    }
  }
  this_00 = UGameplayTagsManager::Get();
  UGameplayTagsManager::FindTagNode(this_00,&local_38,param_1);
  if ((local_38.Object != (FGameplayTagNode *)0x0) ||
     (local_res18 = param_1,
     bVar6 = `FGameplayTagContainer::AddLeafTag'::__l9::<lambda_1>::operator()(&local_res18), bVar6)
     ) {
    if ((local_38.Object == (FGameplayTagNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar9 = (FName *)((local_38.Object)->CompleteTagWithParents).ParentTags.AllocatorInstance.Data;
    iVar3 = ((local_38.Object)->CompleteTagWithParents).ParentTags.ArrayNum;
    pFVar1 = pFVar9 + iVar3;
    while( true ) {
      if (((local_38.Object)->CompleteTagWithParents).ParentTags.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar9 == pFVar1) break;
      if (*pFVar9 == (FName)0x0) {
LAB_146acfe2d:
        pFVar9 = pFVar9 + 1;
      }
      else {
        pFVar8 = (FName *)(this->GameplayTags).AllocatorInstance.Data;
        pFVar2 = pFVar8 + (this->GameplayTags).ArrayNum;
        if (pFVar8 == pFVar2) goto LAB_146acfe2d;
        do {
          if (*pFVar8 == *pFVar9) {
            RemoveTag(this,(FGameplayTag *)pFVar9,false);
            goto LAB_146acfe2d;
          }
          pFVar8 = pFVar8 + 1;
        } while (pFVar8 != pFVar2);
        pFVar9 = pFVar9 + 1;
      }
    }
  }
  AddTag(this,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return true;
}

// AddParentsForTag @ 146ad01a0

void __thiscall
FGameplayTagContainer::AddParentsForTag(FGameplayTagContainer *this,FGameplayTag *param_1)

{
  UGameplayTagsManager *this_00;
  
  this_00 = UGameplayTagsManager::Get();
  UGameplayTagsManager::ExtractParentTags(this_00,param_1,&this->ParentTags);
  return;
}

// AddTag @ 146ad0660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGameplayTagContainer::AddTag(FGameplayTagContainer *this,FGameplayTag *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AddTag> FVar7;
  UGameplayTagsManager *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar8;
  FNameEntryId FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  FVar9.Value = 0;
  if (GEnableGameplayTagDetailedStats) {
    FVar7 = StatPtr_STAT_FGameplayTagContainer_AddTag;
    if (StatPtr_STAT_FGameplayTagContainer_AddTag ==
        (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AddTag>)0x0) {
      pFVar6 = ::FName::FName(local_res18,"STAT_FGameplayTagContainer_AddTag");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AddTag>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTagContainer_AddTag,
                         *pFVar6,L"FGameplayTagContainer::AddTag","STATGROUP_GameplayTags",
                         "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,
                         MCR_Invalid);
    }
  }
  else {
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AddTag>)
            &TStatId::TStatId_NAME_None;
  }
  FVar8 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar8.ComparisonIndex.Value;
  uVar5 = FVar8.Number;
  if ((FVar10.Value != 0) || (uVar5 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar10.Value;
        local_res10.s.HighPart = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x32a);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar10.Value;
      local_res10.s.HighPart = uVar5;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      bVar3 = true;
      FVar9.Value = FVar10.Value;
      goto LAB_146ad07d1;
    }
  }
  bVar3 = false;
  FVar8.ComparisonIndex.Value = 0;
  FVar8.Number = 0;
LAB_146ad07d1:
  if (param_1->TagName != (FName)0x0) {
    TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGameplayTag_const_&>
              (&this->GameplayTags,param_1);
    this_00 = UGameplayTagsManager::Get();
    UGameplayTagsManager::ExtractParentTags(this_00,param_1,&this->ParentTags);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar9.Value;
      QueryPerformanceCounter(&local_res10);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
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
  return;
}

// AddTagFast @ 146ad0a50

void __thiscall FGameplayTagContainer::AddTagFast(FGameplayTagContainer *this,FGameplayTag *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UGameplayTagsManager *this_00;
  
  pFVar2 = (this->GameplayTags).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->GameplayTags).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->GameplayTags).ArrayNum;
  piVar1 = &(this->GameplayTags).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,piVar1);
  }
  (this->GameplayTags).ArrayNum = iVar5 + 1;
  *(FName *)((this->GameplayTags).AllocatorInstance.Data + (longlong)iVar5 * 8) = param_1->TagName;
  this_00 = UGameplayTagsManager::Get();
  UGameplayTagsManager::ExtractParentTags(this_00,param_1,&this->ParentTags);
  return;
}

// AppendMatchingTags @ 146ad1e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGameplayTagContainer::AppendMatchingTags
          (FGameplayTagContainer *this,FGameplayTagContainer *param_1,FGameplayTagContainer *param_2
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FGameplayTagContainer *pFVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendMatchingTags> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar12;
  FNameEntryId FVar13;
  FScriptContainerElement *this_02;
  LARGE_INTEGER local_res10;
  FGameplayTagContainer *local_res18;
  uint local_res20;
  FStatMessage local_58;
  FName local_48;
  
  local_res20 = 0;
  local_res18 = param_2;
  if (GEnableGameplayTagDetailedStats) {
    FVar11 = StatPtr_STAT_FGameplayTagContainer_AppendMatchingTags;
    if (StatPtr_STAT_FGameplayTagContainer_AppendMatchingTags ==
        (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendMatchingTags>)0x0) {
      pFVar10 = ::FName::FName((FName *)&local_58,"STAT_FGameplayTagContainer_AppendMatchingTags");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendMatchingTags>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FGameplayTagContainer_AppendMatchingTags,*pFVar10,
                          L"FGameplayTagContainer::AppendMatchingTags","STATGROUP_GameplayTags",
                          "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
  }
  else {
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendMatchingTags>)
             &TStatId::TStatId_NAME_None;
  }
  FVar12 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar13 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar13.Value;
        local_res10.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x31d);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar13.Value;
      local_res10.s.HighPart = uVar9;
      local_48 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      local_res20 = local_48.ComparisonIndex.Value;
      goto LAB_146ad1f9c;
    }
  }
  bVar5 = false;
  FVar12 = local_48;
LAB_146ad1f9c:
  pFVar7 = local_res18;
  this_02 = (param_1->GameplayTags).AllocatorInstance.Data;
  iVar3 = (param_1->GameplayTags).ArrayNum;
  pFVar2 = this_02 + (longlong)iVar3 * 8;
  while( true ) {
    if ((param_1->GameplayTags).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    uVar9 = local_res20;
    if (this_02 == pFVar2) break;
    bVar8 = FGameplayTag::MatchesAny((FGameplayTag *)this_02,pFVar7);
    if (bVar8) {
      AddTag(this,(FGameplayTag *)this_02);
    }
    this_02 = this_02 + 8;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index.Value = uVar9;
      local_58.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
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
  return;
}

// AppendTags @ 146ad20f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGameplayTagContainer::AppendTags(FGameplayTagContainer *this,FGameplayTagContainer *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendTags> FVar14;
  FName FVar15;
  longlong lVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res20 [8];
  undefined1 local_68 [4];
  FColor_u_0 local_64;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  
  if (GEnableGameplayTagDetailedStats) {
    FVar14 = StatPtr_STAT_FGameplayTagContainer_AppendTags;
    if (StatPtr_STAT_FGameplayTagContainer_AppendTags ==
        (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendTags>)0x0) {
      pFVar13 = ::FName::FName(&local_50,"STAT_FGameplayTagContainer_AppendTags");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendTags>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FGameplayTagContainer_AppendTags,*pFVar13,
                          L"FGameplayTagContainer::AppendTags","STATGROUP_GameplayTags",
                          "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
  }
  else {
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendTags>)
             &TStatId::TStatId_NAME_None;
  }
  FVar15 = *(FName *)FVar14;
  bVar8 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_64.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_64._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_58.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_58,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x2e6);
        bVar8 = true;
        bVar7 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_60 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar9 = true;
      goto LAB_146ad227b;
    }
  }
  bVar8 = bVar10;
  bVar7 = bVar9;
  bVar9 = false;
  local_60 = local_48;
  FVar15 = local_48;
LAB_146ad227b:
  iVar3 = (param_1->GameplayTags).ArrayNum;
  if (iVar3 != 0) {
    iVar4 = (this->GameplayTags).ArrayNum;
    uVar17 = iVar4 + iVar3;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    piVar1 = &(this->GameplayTags).ArrayMax;
    if ((this->GameplayTags).ArrayMax < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar17,(ForAnyElementType *)this,iVar4,piVar1);
    }
    pFVar18 = (param_1->GameplayTags).AllocatorInstance.Data;
    iVar3 = (param_1->GameplayTags).ArrayNum;
    pFVar2 = pFVar18 + (longlong)iVar3 * 8;
    while( true ) {
      if ((param_1->GameplayTags).ArrayNum != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar18 == pFVar2) break;
      uVar17 = 0;
      lVar16 = 0;
      if (0 < (longlong)iVar4) {
        do {
          uVar11 = 0;
          if ((int)uVar17 < (this->GameplayTags).ArrayNum) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)((this->GameplayTags).AllocatorInstance.Data + lVar16 * 8) ==
              *(longlong *)pFVar18) goto LAB_146ad23fd;
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iVar4);
      }
      pFVar5 = (this->GameplayTags).AllocatorInstance.Data;
      if (((pFVar5 <= pFVar18) && (pFVar18 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (this->GameplayTags).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,(ForAnyElementType *)this,piVar1);
      }
      (this->GameplayTags).ArrayNum = iVar12 + 1;
      *(longlong *)((this->GameplayTags).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           *(longlong *)pFVar18;
LAB_146ad23fd:
      pFVar18 = pFVar18 + 8;
    }
    iVar3 = (this->ParentTags).ArrayNum;
    uVar17 = (param_1->ParentTags).ArrayNum + iVar3;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    piVar1 = &(this->ParentTags).ArrayMax;
    if ((this->ParentTags).ArrayMax < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar17,&(this->ParentTags).AllocatorInstance,iVar3,piVar1);
    }
    pFVar18 = (param_1->ParentTags).AllocatorInstance.Data;
    iVar4 = (param_1->ParentTags).ArrayNum;
    pFVar2 = pFVar18 + (longlong)iVar4 * 8;
    while( true ) {
      if ((param_1->ParentTags).ArrayNum != iVar4) {
        local_68[0] = 0;
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_68);
      }
      FVar15 = local_60;
      if (pFVar18 == pFVar2) break;
      uVar17 = 0;
      lVar16 = 0;
      if (0 < (longlong)iVar3) {
        do {
          uVar11 = 0;
          if ((int)uVar17 < (this->ParentTags).ArrayNum) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)((this->ParentTags).AllocatorInstance.Data + lVar16 * 8) ==
              *(longlong *)pFVar18) goto LAB_146ad2571;
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iVar3);
      }
      pFVar5 = (this->ParentTags).AllocatorInstance.Data;
      if (((pFVar5 <= pFVar18) && (pFVar18 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (this->ParentTags).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->ParentTags).AllocatorInstance,piVar1);
      }
      (this->ParentTags).ArrayNum = iVar12 + 1;
      *(longlong *)((this->ParentTags).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           *(longlong *)pFVar18;
LAB_146ad2571:
      pFVar18 = pFVar18 + 8;
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// FillParentTags @ 146ad8b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGameplayTagContainer::FillParentTags(FGameplayTagContainer *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_FillParentTags> FVar9;
  UGameplayTagsManager *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  FNameEntryId FVar11;
  FScriptContainerElement *pFVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_58;
  FStatMessage local_48;
  
  FVar9 = StatPtr_STAT_FGameplayTagContainer_FillParentTags;
  if (StatPtr_STAT_FGameplayTagContainer_FillParentTags ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_FillParentTags>)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"STAT_FGameplayTagContainer_FillParentTags");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_FillParentTags>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_FGameplayTagContainer_FillParentTags,*pFVar8,
                       L"FGameplayTagContainer::FillParentTags","STATGROUP_GameplayTags",
                       "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid
                      );
  }
  FVar4 = *(FName *)FVar9;
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar11 = FVar4.ComparisonIndex.Value;
  uVar10 = FVar4.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x29f);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar6 = true;
      local_58 = FVar4;
      goto LAB_146ad8c81;
    }
  }
  bVar6 = false;
LAB_146ad8c81:
  (this->ParentTags).ArrayNum = 0;
  if ((this->ParentTags).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ParentTags).AllocatorInstance,0,&(this->ParentTags).ArrayMax);
  }
  if (0 < (this->GameplayTags).ArrayNum) {
    this_00 = UGameplayTagsManager::Get();
    pFVar12 = (this->GameplayTags).AllocatorInstance.Data;
    iVar3 = (this->GameplayTags).ArrayNum;
    pFVar2 = pFVar12 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->GameplayTags).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FGameplayTag,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar12 == pFVar2) break;
      UGameplayTagsManager::ExtractParentTags(this_00,(FGameplayTag *)pFVar12,&this->ParentTags);
      pFVar12 = pFVar12 + 8;
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (local_58 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = local_58.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// Filter @ 146ad8e30

/* WARNING: Enum "Type": Some values do not have unique names */

FGameplayTagContainer * __thiscall
FGameplayTagContainer::Filter
          (FGameplayTagContainer *this,FGameplayTagContainer *__return_storage_ptr__,
          FGameplayTagContainer *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_Filter> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FScriptContainerElement *this_02;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_58;
  FStatMessage local_48;
  
  FVar10 = StatPtr_STAT_FGameplayTagContainer_Filter;
  if (StatPtr_STAT_FGameplayTagContainer_Filter ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_Filter>)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_FGameplayTagContainer_Filter");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_Filter>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTagContainer_Filter,
                        *pFVar9,L"FGameplayTagContainer::Filter","STATGROUP_GameplayTags",
                        "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar4 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar12 = FVar4.ComparisonIndex.Value;
  uVar11 = FVar4.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x2bf);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar6 = true;
      local_58 = FVar4;
      goto LAB_146ad8f96;
    }
  }
  bVar6 = false;
LAB_146ad8f96:
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
  this_02 = (this->GameplayTags).AllocatorInstance.Data;
  iVar3 = (this->GameplayTags).ArrayNum;
  pFVar2 = this_02 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->GameplayTags).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (this_02 == pFVar2) break;
    bVar8 = FGameplayTag::MatchesAny((FGameplayTag *)this_02,param_1);
    if (bVar8) {
      AddTagFast(__return_storage_ptr__,(FGameplayTag *)this_02);
    }
    this_02 = this_02 + 8;
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (local_58 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = local_58.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  return __return_storage_ptr__;
}

// FilterExact @ 146ad9130

/* WARNING: Enum "Type": Some values do not have unique names */

FGameplayTagContainer * __thiscall
FGameplayTagContainer::FilterExact
          (FGameplayTagContainer *this,FGameplayTagContainer *__return_storage_ptr__,
          FGameplayTagContainer *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_Filter> FVar11;
  FScriptContainerElement *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FScriptContainerElement *pFVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_58;
  FStatMessage local_48;
  
  FVar11 = StatPtr_STAT_FGameplayTagContainer_Filter;
  if (StatPtr_STAT_FGameplayTagContainer_Filter ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_Filter>)0x0) {
    pFVar10 = ::FName::FName(&local_res10,"STAT_FGameplayTagContainer_Filter");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_Filter>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTagContainer_Filter,
                        *pFVar10,L"FGameplayTagContainer::Filter","STATGROUP_GameplayTags",
                        "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar6 = *(FName *)FVar11;
  bVar7 = false;
  bVar9 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = FVar6.ComparisonIndex.Value;
  uVar13 = FVar6.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x2d0);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar14.Value;
      local_res8.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar6,CycleScopeStart);
      bVar8 = true;
      local_58 = FVar6;
      goto LAB_146ad9296;
    }
  }
  bVar8 = false;
LAB_146ad9296:
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
  pFVar15 = (this->GameplayTags).AllocatorInstance.Data;
  iVar4 = (this->GameplayTags).ArrayNum;
  pFVar2 = pFVar15 + (longlong)iVar4 * 8;
LAB_146ad92b2:
  do {
    if ((this->GameplayTags).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar15 == pFVar2) {
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar8) && (local_58 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_48.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
          local_48.NameAndInfo.Number = local_58.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_res8);
          local_48.StatData.Pad[4] = '\0';
          local_48.StatData.Pad[5] = '\0';
          local_48.StatData.Pad[6] = '\0';
          local_48.StatData.Pad[7] = '\0';
          local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
          local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
          local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
          local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_48);
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
      return __return_storage_ptr__;
    }
    iVar5 = (param_1->GameplayTags).ArrayNum;
    if (iVar5 != 0) {
      pFVar12 = (param_1->GameplayTags).AllocatorInstance.Data;
      pFVar3 = pFVar12 + (longlong)iVar5 * 8;
      if (pFVar12 != pFVar3) {
        do {
          if (*(longlong *)pFVar12 == *(longlong *)pFVar15) {
            AddTagFast(__return_storage_ptr__,(FGameplayTag *)pFVar15);
            goto LAB_146ad9301;
          }
          pFVar12 = pFVar12 + 8;
        } while (pFVar12 != pFVar3);
        pFVar15 = pFVar15 + 8;
        goto LAB_146ad92b2;
      }
    }
LAB_146ad9301:
    pFVar15 = pFVar15 + 8;
  } while( true );
}

// FromExportString @ 146ada7d0

void __thiscall
FGameplayTagContainer::FromExportString(FGameplayTagContainer *this,FString *param_1,int param_2)

{
  UScriptStruct *this_00;
  UPackage *pUVar1;
  wchar_t *pwVar2;
  FOutputDevice local_28;
  FString local_18;
  
  (this->GameplayTags).ArrayNum = 0;
  if ((this->GameplayTags).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,&(this->GameplayTags).ArrayMax);
  }
  (this->ParentTags).ArrayNum = 0;
  if ((this->ParentTags).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ParentTags).AllocatorInstance,0,&(this->ParentTags).ArrayMax);
  }
  FOutputDevice::FOutputDevice(&local_28);
  local_28._padding_ = (longlong)&___7FOutputDeviceNull__6B_;
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainer,(UObject *)pUVar1,
                         L"GameplayTagContainer");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton;
  ::FString::FString(&local_18,L"FGameplayTagContainer");
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

// GetGameplayTagArray @ 146ade2f0

TArray<FGameplayTag,TSizedDefaultAllocator<32>_> * __thiscall
FGameplayTagContainer::GetGameplayTagArray(FGameplayTagContainer *this)

{
  return &this->GameplayTags;
}

// GetGameplayTagParents @ 146ade410

/* WARNING: Enum "Type": Some values do not have unique names */

FGameplayTagContainer * __thiscall
FGameplayTagContainer::GetGameplayTagParents
          (FGameplayTagContainer *this,FGameplayTagContainer *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_GetGameplayTagParents> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FScriptContainerElement *pFVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  FVar13.Value = 0;
  FVar8 = StatPtr_STAT_FGameplayTagContainer_GetGameplayTagParents;
  if (StatPtr_STAT_FGameplayTagContainer_GetGameplayTagParents ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_GetGameplayTagParents>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_FGameplayTagContainer_GetGameplayTagParents");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_GetGameplayTagParents>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_FGameplayTagContainer_GetGameplayTagParents,*pFVar7,
                       L"FGameplayTagContainer::GetGameplayTagParents","STATGROUP_GameplayTags",
                       "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid
                      );
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x2af);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      FVar13.Value = FVar10.Value;
      goto LAB_146ade57b;
    }
  }
  bVar5 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_146ade57b:
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->GameplayTags,&this->GameplayTags);
  pFVar12 = (this->ParentTags).AllocatorInstance.Data;
  iVar3 = (this->ParentTags).ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ParentTags).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar12 == pFVar2) break;
    TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGameplayTag_const_&>
              (&__return_storage_ptr__->GameplayTags,(FGameplayTag *)pFVar12);
    pFVar12 = pFVar12 + 8;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  return __return_storage_ptr__;
}

// HasAll @ 146ae1660

bool __thiscall
FGameplayTagContainer::HasAll(FGameplayTagContainer *this,FGameplayTagContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  iVar3 = (param_1->GameplayTags).ArrayNum;
  if (iVar3 == 0) {
LAB_146ae16ea:
    bVar4 = true;
  }
  else {
    pFVar6 = (param_1->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar3 * 8;
    while( true ) {
      if ((param_1->GameplayTags).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar6 == pFVar1) goto LAB_146ae16ea;
      pFVar5 = (this->GameplayTags).AllocatorInstance.Data;
      pFVar2 = pFVar5 + (longlong)(this->GameplayTags).ArrayNum * 8;
      if (pFVar5 != pFVar2) {
        do {
          if (*(longlong *)pFVar5 == *(longlong *)pFVar6) goto LAB_146ae16e4;
          pFVar5 = pFVar5 + 8;
        } while (pFVar5 != pFVar2);
      }
      pFVar5 = (this->ParentTags).AllocatorInstance.Data;
      pFVar2 = pFVar5 + (longlong)(this->ParentTags).ArrayNum * 8;
      if (pFVar5 == pFVar2) break;
      while (*(longlong *)pFVar5 != *(longlong *)pFVar6) {
        pFVar5 = pFVar5 + 8;
        if (pFVar5 == pFVar2) goto LAB_146ae16e0;
      }
LAB_146ae16e4:
      pFVar6 = pFVar6 + 8;
    }
LAB_146ae16e0:
    bVar4 = false;
  }
  return bVar4;
}

// HasAllExact @ 146ae1710

bool __thiscall
FGameplayTagContainer::HasAllExact(FGameplayTagContainer *this,FGameplayTagContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  iVar3 = (param_1->GameplayTags).ArrayNum;
  if (iVar3 == 0) {
LAB_146ae1778:
    bVar4 = true;
  }
  else {
    pFVar6 = (param_1->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar3 * 8;
    while( true ) {
      if ((param_1->GameplayTags).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar6 == pFVar1) goto LAB_146ae1778;
      pFVar5 = (this->GameplayTags).AllocatorInstance.Data;
      pFVar2 = pFVar5 + (longlong)(this->GameplayTags).ArrayNum * 8;
      if (pFVar5 == pFVar2) break;
      while (*(longlong *)pFVar5 != *(longlong *)pFVar6) {
        pFVar5 = pFVar5 + 8;
        if (pFVar5 == pFVar2) goto LAB_146ae176e;
      }
      pFVar6 = pFVar6 + 8;
    }
LAB_146ae176e:
    bVar4 = false;
  }
  return bVar4;
}

// HasAny @ 146ae18f0

bool __thiscall
FGameplayTagContainer::HasAny(FGameplayTagContainer *this,FGameplayTagContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  iVar3 = (param_1->GameplayTags).ArrayNum;
  if (iVar3 != 0) {
    pFVar5 = (param_1->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)iVar3 * 8;
    while( true ) {
      if ((param_1->GameplayTags).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar1) break;
      pFVar4 = (this->GameplayTags).AllocatorInstance.Data;
      pFVar2 = pFVar4 + (longlong)(this->GameplayTags).ArrayNum * 8;
      if (pFVar4 != pFVar2) {
        do {
          if (*(longlong *)pFVar4 == *(longlong *)pFVar5) {
            return true;
          }
          pFVar4 = pFVar4 + 8;
        } while (pFVar4 != pFVar2);
      }
      pFVar4 = (this->ParentTags).AllocatorInstance.Data;
      pFVar2 = pFVar4 + (longlong)(this->ParentTags).ArrayNum * 8;
      if (pFVar4 != pFVar2) {
        do {
          if (*(longlong *)pFVar4 == *(longlong *)pFVar5) {
            return true;
          }
          pFVar4 = pFVar4 + 8;
        } while (pFVar4 != pFVar2);
      }
      pFVar5 = pFVar5 + 8;
    }
  }
  return false;
}

// HasAnyExact @ 146ae19a0

bool __thiscall
FGameplayTagContainer::HasAnyExact(FGameplayTagContainer *this,FGameplayTagContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  iVar3 = (param_1->GameplayTags).ArrayNum;
  if (iVar3 != 0) {
    pFVar5 = (param_1->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)iVar3 * 8;
    while( true ) {
      if ((param_1->GameplayTags).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar1) break;
      pFVar4 = (this->GameplayTags).AllocatorInstance.Data;
      pFVar2 = pFVar4 + (longlong)(this->GameplayTags).ArrayNum * 8;
      if (pFVar4 != pFVar2) {
        do {
          if (*(longlong *)pFVar4 == *(longlong *)pFVar5) {
            return true;
          }
          pFVar4 = pFVar4 + 8;
        } while (pFVar4 != pFVar2);
      }
      pFVar5 = pFVar5 + 8;
    }
  }
  return false;
}

// ImportTextItem @ 146ae2010

bool __thiscall
FGameplayTagContainer::ImportTextItem
          (FGameplayTagContainer *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UScriptStruct *this_00;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong local_48;
  FString local_40;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar6 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainer,(UObject *)pUVar6,
                         L"GameplayTagContainer");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton;
  ::FString::FString(&local_40,L"FGameplayTagContainer");
  pwVar7 = UScriptStruct::ImportText(this_00,*param_1,this,param_3,param_2,param_4,&local_40,false);
  *param_1 = pwVar7;
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (*param_1 != (wchar_t *)0x0) {
    pFVar2 = (this->GameplayTags).AllocatorInstance.Data;
    local_48 = 0;
    if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)(this->GameplayTags).ArrayMax * 8
        )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar1 = (this->GameplayTags).ArrayNum;
    if (iVar1 != 0) {
      iVar12 = 0;
      pFVar2 = (this->GameplayTags).AllocatorInstance.Data;
      bVar4 = *(longlong *)pFVar2 != local_48;
      lVar9 = 0;
      lVar8 = local_48;
      iVar10 = 0;
      do {
        iVar11 = iVar10;
        do {
          lVar9 = lVar9 + 1;
          iVar11 = iVar11 + 1;
          if (iVar1 <= lVar9) break;
        } while (bVar4 == (*(longlong *)(pFVar2 + lVar9 * 8) != lVar8));
        if (bVar4 != false) {
          if (iVar12 != iVar10) {
            memmove(pFVar2 + (longlong)iVar12 * 8,pFVar2 + (longlong)iVar10 * 8,
                    (longlong)(iVar11 - iVar10) << 3);
            lVar8 = local_48;
          }
          iVar12 = iVar12 + (iVar11 - iVar10);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar10 = iVar11;
      } while (lVar9 < iVar1);
      (this->GameplayTags).ArrayNum = iVar12;
    }
    FillParentTags(this);
  }
  return true;
}

// MatchesQuery @ 146ae5490

bool __thiscall
FGameplayTagContainer::MatchesQuery(FGameplayTagContainer *this,FGameplayTagQuery *param_1)

{
  bool bVar1;
  
  bVar1 = FGameplayTagQuery::Matches(param_1,this);
  return bVar1;
}

// NetSerialize @ 146ae5b30

bool __thiscall
FGameplayTagContainer::NetSerialize
          (FGameplayTagContainer *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  UGameplayTagsManager *pUVar9;
  int *piVar10;
  FName *this_00;
  uint uVar11;
  char local_res8 [8];
  ushort local_res10 [4];
  UPackageMap *local_res18;
  bool *local_res20;
  ushort local_78 [2];
  ushort local_74 [2];
  FName local_70;
  longlong local_68;
  FName local_60;
  FGameplayTagContainer *local_58;
  ushort *local_50;
  
  piVar1 = &(this->GameplayTags).ArrayNum;
  local_res8[0] = *piVar1 == 0;
  local_res18 = param_2;
  local_res20 = param_3;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res8);
  if (local_res8[0] == '\0') {
    pUVar9 = UGameplayTagsManager::Get();
    iVar8 = pUVar9->NumBitsForContainerSize;
    if ((param_1->field_0x28 & 4) == 0) {
      local_res10[0] = 0;
      (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,(longlong)iVar8);
      piVar10 = &(this->GameplayTags).ArrayMax;
      *piVar1 = 0;
      if (*piVar10 != (uint)local_res10[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(uint)local_res10[0],(ForAnyElementType *)this,0,piVar10);
      }
      uVar11 = (uint)local_res10[0];
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,uVar11,(ForAnyElementType *)this,piVar1,piVar10);
      DefaultConstructItems<FGameplayTag,int>
                ((this->GameplayTags).AllocatorInstance.Data + (longlong)iVar8 * 8,uVar11);
      uVar11 = 0;
      if (local_res10[0] != 0) {
        do {
          uVar7 = 0;
          if ((int)uVar11 < *piVar1) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          FGameplayTag::NetSerialize_Packed
                    ((FGameplayTag *)
                     ((this->GameplayTags).AllocatorInstance.Data + (longlong)(int)uVar11 * 8),
                     param_1,local_res18,param_3);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)(uint)local_res10[0]);
      }
      FillParentTags(this);
    }
    else {
      uVar11 = *piVar1;
      if (((uVar11 != (uVar11 & 0xffff)) || ((int)uVar11 < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5
         )) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      local_74[0] = (1 << ((byte)iVar8 & 0x1f)) - 1;
      local_78[0] = (ushort)uVar11;
      if ((int)(uint)local_74[0] < *piVar1) {
        local_50 = local_74;
        local_58 = this;
        bVar5 = `FGameplayTagContainer::NetSerialize'::__l12::<lambda_1>::operator()(&local_58);
        if (!bVar5) {
          local_78[0] = local_74[0];
        }
      }
      (**(code **)(*(longlong *)param_1 + 400))(param_1,local_78,(longlong)iVar8);
      uVar11 = 0;
      if (local_78[0] != 0) {
        local_68 = 0;
        do {
          lVar4 = local_68;
          uVar7 = 0;
          if ((int)uVar11 < *piVar1) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          this_00 = (FName *)((this->GameplayTags).AllocatorInstance.Data + lVar4);
          FGameplayTag::NetSerialize_Packed((FGameplayTag *)this_00,param_1,local_res18,param_3);
          pUVar9 = UGameplayTagsManager::Get();
          local_70 = *this_00;
          local_60 = local_70;
          uVar7 = ::GetTypeHash(local_70.ComparisonIndex.Value);
          piVar10 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                    ::FindOrAddImpl<FGameplayTag_const_&>
                              ((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                                *)&pUVar9->ReplicationCountMap,local_60.Number + uVar7,
                               (FGameplayTag *)&local_70);
          FVar3 = local_70;
          *piVar10 = *piVar10 + 1;
          uVar7 = ::GetTypeHash(local_70.ComparisonIndex.Value);
          piVar10 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                    ::FindOrAddImpl<FGameplayTag_const_&>
                              ((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                                *)&pUVar9->ReplicationCountMap_Containers,uVar7 + FVar3.Number,
                               (FGameplayTag *)&local_70);
          uVar11 = uVar11 + 1;
          local_68 = local_68 + 8;
          *piVar10 = *piVar10 + 1;
          param_3 = local_res20;
        } while ((int)uVar11 < (int)(uint)local_78[0]);
      }
    }
  }
  else if (0 < *piVar1) {
    *piVar1 = 0;
    if ((this->GameplayTags).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)this,0,&(this->GameplayTags).ArrayMax);
    }
    (this->ParentTags).ArrayNum = 0;
    if ((this->ParentTags).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->ParentTags).AllocatorInstance,0,&(this->ParentTags).ArrayMax);
    }
  }
  *param_3 = true;
  return true;
}

// PostScriptConstruct @ 146ae7d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGameplayTagContainer::PostScriptConstruct(FGameplayTagContainer *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_FillParentTags> FVar9;
  UGameplayTagsManager *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  FNameEntryId FVar11;
  FScriptContainerElement *pFVar12;
  LARGE_INTEGER LStackX_8;
  FName FStackX_10;
  FName FStack_58;
  FStatMessage FStack_48;
  
  FVar9 = StatPtr_STAT_FGameplayTagContainer_FillParentTags;
  if (StatPtr_STAT_FGameplayTagContainer_FillParentTags ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_FillParentTags>)0x0) {
    pFVar8 = ::FName::FName(&FStackX_10,"STAT_FGameplayTagContainer_FillParentTags");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_FillParentTags>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_FGameplayTagContainer_FillParentTags,*pFVar8,
                       L"FGameplayTagContainer::FillParentTags","STATGROUP_GameplayTags",
                       "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid
                      );
  }
  FVar4 = *(FName *)FVar9;
  bVar5 = false;
  bVar7 = false;
  FStack_58.ComparisonIndex.Value = 0;
  FStack_58.Number = 0;
  FVar11 = FVar4.ComparisonIndex.Value;
  uVar10 = FVar4.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar11.Value;
        LStackX_8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x29f);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar11.Value;
      LStackX_8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar6 = true;
      FStack_58 = FVar4;
      goto LAB_146ad8c81;
    }
  }
  bVar6 = false;
LAB_146ad8c81:
  (this->ParentTags).ArrayNum = 0;
  if ((this->ParentTags).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ParentTags).AllocatorInstance,0,&(this->ParentTags).ArrayMax);
  }
  if (0 < (this->GameplayTags).ArrayNum) {
    this_00 = UGameplayTagsManager::Get();
    pFVar12 = (this->GameplayTags).AllocatorInstance.Data;
    iVar3 = (this->GameplayTags).ArrayNum;
    pFVar2 = pFVar12 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->GameplayTags).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FGameplayTag,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&LStackX_8);
      }
      if (pFVar12 == pFVar2) break;
      UGameplayTagsManager::ExtractParentTags(this_00,(FGameplayTag *)pFVar12,&this->ParentTags);
      pFVar12 = pFVar12 + 8;
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FStack_58 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      FStack_48.NameAndInfo.Index.Value = FStack_58.ComparisonIndex.Value;
      FStack_48.NameAndInfo.Number = FStack_58.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_8);
      FStack_48.StatData.Pad[4] = '\0';
      FStack_48.StatData.Pad[5] = '\0';
      FStack_48.StatData.Pad[6] = '\0';
      FStack_48.StatData.Pad[7] = '\0';
      FStack_48.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_48.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_48.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_48.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&FStack_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// RemoveTag @ 146aeae90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGameplayTagContainer::RemoveTag(FGameplayTagContainer *this,FGameplayTag *param_1,bool param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_RemoveTag> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_38;
  
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_FGameplayTagContainer_RemoveTag;
  if (StatPtr_STAT_FGameplayTagContainer_RemoveTag ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_RemoveTag>)0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_FGameplayTagContainer_RemoveTag");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_RemoveTag>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTagContainer_RemoveTag,
                       *pFVar6,L"FGameplayTagContainer::RemoveTag","STATGROUP_GameplayTags",
                       "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid
                      );
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x35e);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_146aeaff9;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_146aeaff9:
  iVar5 = TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::RemoveSingle
                    (&this->GameplayTags,param_1);
  if (iVar5 < 1) {
    bVar12 = false;
  }
  else {
    if (!param_2) {
      FillParentTags(this);
    }
    bVar12 = true;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  return bVar12;
}

// RemoveTagByExplicitName @ 146aeb120

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGameplayTagContainer::RemoveTagByExplicitName(FGameplayTagContainer *this,FName *param_1)

{
  int *piVar1;
  LARGE_INTEGER *pLVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_RemoveTagByExplicitName> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar9;
  bool bVar10;
  LARGE_INTEGER *pLVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_48;
  
  FVar12.Value = 0;
  FVar8 = StatPtr_STAT_FGameplayTagContainer_RemoveTagByExplicitName;
  if (StatPtr_STAT_FGameplayTagContainer_RemoveTagByExplicitName ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_RemoveTagByExplicitName>)0x0) {
    pFVar7 = ::FName::FName(local_res18,"STAT_FGameplayTagContainer_RemoveTagByExplicitName");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_RemoveTagByExplicitName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_FGameplayTagContainer_RemoveTagByExplicitName,*pFVar7,
                       L"FGameplayTagContainer::RemoveTagByExplicitName","STATGROUP_GameplayTags",
                       "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid
                      );
  }
  LVar9 = *(LARGE_INTEGER *)FVar8;
  bVar4 = false;
  bVar6 = false;
  if ((LVar9.s.LowPart != 0) || (LVar9.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x289);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar9;
      FThreadStats::AddMessage((FName)LVar9.s,CycleScopeStart);
      bVar5 = true;
      FVar12.Value = LVar9.s.LowPart;
      goto LAB_146aeb288;
    }
  }
  bVar5 = false;
  LVar9._0_4_ = 0;
  LVar9._4_4_ = 0;
LAB_146aeb288:
  pLVar11 = (LARGE_INTEGER *)(this->GameplayTags).AllocatorInstance.Data;
  iVar3 = (this->GameplayTags).ArrayNum;
  pLVar2 = pLVar11 + iVar3;
  while( true ) {
    if ((this->GameplayTags).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FGameplayTag,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pLVar11 == pLVar2) break;
    local_res8 = (LARGE_INTEGER)pLVar11->QuadPart;
    if ((FName)local_res8.QuadPart == *param_1) {
      RemoveTag(this,(FGameplayTag *)&local_res8.s,false);
      bVar10 = true;
LAB_146aeb2dd:
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar5) && ((FName)LVar9.QuadPart != (FName)0x0)) &&
          (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff))
      {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_48.NameAndInfo.Number = LVar9.s.HighPart & 0xffff6fffU | 0x6000;
          local_48.NameAndInfo.Index.Value = FVar12.Value;
          QueryPerformanceCounter(&local_res8);
          local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
          FThreadStats::AddStatMessage(this_00,&local_48);
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
      return bVar10;
    }
    pLVar11 = pLVar11 + 1;
  }
  bVar10 = false;
  goto LAB_146aeb2dd;
}

// RemoveTags @ 146aeb5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGameplayTagContainer::RemoveTags(FGameplayTagContainer *this,FGameplayTagContainer *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_RemoveTags> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FNameEntryId FVar15;
  FName FVar16;
  uint uVar17;
  uint uVar18;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  uVar18 = 0;
  FVar11 = StatPtr_STAT_FGameplayTagContainer_RemoveTags;
  if (StatPtr_STAT_FGameplayTagContainer_RemoveTags ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_RemoveTags>)0x0) {
    pFVar10 = ::FName::FName(&local_68,"STAT_FGameplayTagContainer_RemoveTags");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_RemoveTags>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTagContainer_RemoveTags,
                        *pFVar10,L"FGameplayTagContainer::RemoveTags","STATGROUP_GameplayTags",
                        "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar12 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar15.Value;
        local_res18.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x370);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar15.Value;
      local_res20.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar6 = true;
      goto LAB_146aeb72b;
    }
  }
  bVar6 = false;
  FVar16 = local_60;
LAB_146aeb72b:
  uVar12 = (param_1->GameplayTags).ArrayNum;
  uVar17 = uVar18;
LAB_146aeb735:
  do {
    if (uVar18 == uVar12) {
      if (0 < (int)uVar17) {
        FillParentTags(this);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar6) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_50.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
          local_50.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_res20);
          local_50.StatData.Pad[4] = '\0';
          local_50.StatData.Pad[5] = '\0';
          local_50.StatData.Pad[6] = '\0';
          local_50.StatData.Pad[7] = '\0';
          local_50.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
          local_50.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
          local_50.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
          local_50.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_50);
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
      return;
    }
    uVar9 = 0;
    if ((int)uVar18 < (param_1->GameplayTags).ArrayNum) {
      uVar9 = ~uVar18 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->GameplayTags).AllocatorInstance.Data;
    iVar2 = (this->GameplayTags).ArrayNum;
    for (pFVar14 = pFVar3; pFVar14 != pFVar3 + (longlong)iVar2 * 8; pFVar14 = pFVar14 + 8) {
      if (*(longlong *)pFVar14 ==
          *(longlong *)((param_1->GameplayTags).AllocatorInstance.Data + (longlong)(int)uVar18 * 8))
      {
        iVar13 = (int)((longlong)pFVar14 - (longlong)pFVar3 >> 3);
        if (iVar13 != -1) {
          memmove(pFVar3 + (longlong)iVar13 * 8,pFVar3 + (longlong)iVar13 * 8 + 8,
                  (longlong)((iVar2 - iVar13) + -1) << 3);
          piVar1 = &(this->GameplayTags).ArrayNum;
          *piVar1 = *piVar1 + -1;
          uVar17 = uVar17 + 1;
          uVar18 = uVar18 + 1;
          goto LAB_146aeb735;
        }
        break;
      }
    }
    uVar18 = uVar18 + 1;
  } while( true );
}

// Reset @ 146aec890

void __thiscall FGameplayTagContainer::Reset(FGameplayTagContainer *this,int param_1)

{
  if (-1 < param_1) {
    (this->GameplayTags).ArrayNum = 0;
    if ((this->GameplayTags).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,(ForAnyElementType *)this,0,&(this->GameplayTags).ArrayMax);
    }
    (this->ParentTags).ArrayNum = 0;
    if ((this->ParentTags).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&(this->ParentTags).AllocatorInstance,0,&(this->ParentTags).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Serialize @ 146aecc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FGameplayTagContainer::Serialize(FGameplayTagContainer *this,FStructuredArchiveSlot param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FArchive *pFVar3;
  uint *puVar4;
  code *pcVar5;
  FSlotBase FVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FArchive *pFVar10;
  FArchiveState *pFVar11;
  UGameplayTagsManager *this_00;
  UPackage *pUVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int *piVar15;
  FSlotBase local_res10;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  FSlotBase local_48;
  UScriptStruct *local_40;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar10 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if (*(int *)&pFVar10->field_0x40 < 0x178) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    operator<<<FName>((FStructuredArchiveSlot)local_res10.StructuredArchive,&local_38);
    if (1 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  else {
    piVar15 = &(this->GameplayTags).ArrayNum;
    local_res20[0] = *piVar15;
    local_48.StructuredArchive = local_res10.StructuredArchive;
    pFVar3 = (local_res10.StructuredArchive)->Formatter->Inner;
    puVar4 = (uint *)**(undefined8 **)&pFVar3->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar4 + 1) {
      if ((pFVar3->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar3,local_res20);
      }
    }
    else {
      local_res20[0] = *puVar4;
      **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 4;
    }
    FVar6.StructuredArchive = local_48.StructuredArchive;
    pFVar11 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_48);
    if (pFVar11->ArIsLoading != 0) {
      TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::SetNum
                (&this->GameplayTags,local_res20[0],Default);
    }
    uVar14 = 0;
    if (0 < (int)local_res20[0]) {
      do {
        uVar9 = 0;
        if ((int)uVar14 < *piVar15) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar3 = (FVar6.StructuredArchive)->Formatter->Inner;
        (**(code **)(*(longlong *)pFVar3 + 0x178))
                  (pFVar3,(this->GameplayTags).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)local_res20[0]);
    }
  }
  piVar15 = &(this->GameplayTags).ArrayNum;
  if ((pFVar10->field_0x28 & 1) != 0) {
    if (((pFVar10->field_0x29 & 1) != 0) && ((*(uint *)&pFVar10->field_0x34 & 0x401000) == 0)) {
      this_00 = UGameplayTagsManager::Get();
      UGameplayTagsManager::GameplayTagContainerLoaded
                (this_00,this,*(FProperty **)&pFVar10->field_0x70);
    }
    FillParentTags(this);
  }
  if ((pFVar10->field_0x28 & 4) != 0) {
    pFVar13 = (this->GameplayTags).AllocatorInstance.Data;
    iVar2 = *piVar15;
    pFVar1 = pFVar13 + (longlong)iVar2 * 8;
    while( true ) {
      if (*piVar15 != iVar2) {
        `TCheckedPointerIterator<FGameplayTag,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar13 == pFVar1) break;
      pcVar5 = *(code **)(*(longlong *)pFVar10 + 0x228);
      if (Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar12 = Z_Construct_UPackage__Script_GameplayTags();
        Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTag,(UObject *)pUVar12,
                             L"GameplayTag");
      }
      local_40 = Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton);
      }
      (*pcVar5)(pFVar10,&local_40,pFVar13);
      pFVar13 = pFVar13 + 8;
    }
  }
  return true;
}

// ToMatchingText @ 146aeeb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FGameplayTagContainer::ToMatchingText
          (FGameplayTagContainer *this,FText *__return_storage_ptr__,
          EGameplayContainerMatchType param_1,bool param_2)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  undefined1 auStackY_138 [32];
  FString local_f8;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_e8;
  FString local_d8;
  FFormatArgumentValue local_c8;
  FText local_a8;
  FTextFormat local_98;
  FText local_88 [3];
  FText local_58;
  ulonglong local_48 [3];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar9 = (ulonglong)param_2;
  FText::AsLocalizable_Advanced_LocText
            (local_88,L"FGameplayTagContainer",L"MatchesAnyGameplayTags",
             L"Has any tags in set: {GameplayTagSet}");
  FText::AsLocalizable_Advanced_LocText
            (local_88 + 1,L"FGameplayTagContainer",L"NotMatchesAnyGameplayTags",
             L"Does not have any tags in set: {GameplayTagSet}");
  FText::AsLocalizable_Advanced_LocText
            (local_88 + 2,L"FGameplayTagContainer",L"MatchesAllGameplayTags",
             L"Has all tags in set: {GameplayTagSet}");
  FText::AsLocalizable_Advanced_LocText
            (&local_58,L"FGameplayTagContainer",L"NotMatchesAllGameplayTags",
             L"Does not have all tags in set: {GameplayTagSet}");
  if (param_1 != Any) {
    if (param_1 == All) {
      uVar9 = (ulonglong)(param_2 | 2);
    }
    else if (2 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
    }
  }
  local_e8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Pairs.ArrayNum = 0;
  local_e8.Pairs.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  ::FString::Reserve(&local_f8,0x800);
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar4 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainer,(UObject *)pUVar4,
                         L"GameplayTagContainer");
  }
  UScriptStruct::ExportText
            (Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton,&local_f8,this,
             this,(UObject *)0x0,0,(UObject *)0x0,true);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar7.Data = local_f8.Data.AllocatorInstance.Data;
  }
  pFVar5 = FText::FromString(&local_a8,(wchar_t *)FVar7.Data);
  lVar8 = 4;
  local_c8.Type = Text;
  FText::FText((FText *)&local_c8.TextValue,pFVar5);
  if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  ::FString::FString(&local_d8,L"GameplayTagSet");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_e8,&local_d8,&local_c8);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  pFVar6 = FTextFormat::FTextFormat(&local_98,local_88 + uVar9,Default);
  FText::Format(__return_storage_ptr__,pFVar6,&local_e8);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_e8.Pairs.AllocatorInstance.Data,
             local_e8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_e8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_e8.Pairs.AllocatorInstance.Data);
  }
  puVar10 = local_48;
  do {
    puVar1 = puVar10 + -2;
    puVar10 = puVar10 + -2;
    lVar8 = lVar8 + -1;
    if ((longlong *)*puVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*puVar1 + 0x10))();
    }
  } while (lVar8 != 0);
  return __return_storage_ptr__;
}

// ToString @ 146aeeda0

FString * __thiscall
FGameplayTagContainer::ToString(FGameplayTagContainer *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::Reserve(__return_storage_ptr__,0x800);
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainer,(UObject *)pUVar1,
                         L"GameplayTagContainer");
  }
  UScriptStruct::ExportText
            (Z_Registration_Info_UScriptStruct_FGameplayTagContainer.OuterSingleton,
             __return_storage_ptr__,this,this,(UObject *)0x0,0,(UObject *)0x0,true);
  return __return_storage_ptr__;
}

// ToStringSimple @ 146aeee40

FString * __thiscall
FGameplayTagContainer::ToStringSimple
          (FGameplayTagContainer *this,FString *__return_storage_ptr__,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  int iVar6;
  FString local_18;
  
  uVar5 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (0 < (this->GameplayTags).ArrayNum) {
    do {
      if (param_1) {
        ::FString::AppendChars(__return_storage_ptr__,L"\"",1);
      }
      uVar3 = 0;
      if ((int)uVar5 < (this->GameplayTags).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      ::FName::ToString((FName *)((this->GameplayTags).AllocatorInstance.Data +
                                 (longlong)(int)uVar5 * 8),&local_18);
      iVar6 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar6);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (param_1) {
        ::FString::AppendChars(__return_storage_ptr__,L"\"",1);
      }
      if ((int)uVar5 < (this->GameplayTags).ArrayNum + -1) {
        ::FString::AppendChars(__return_storage_ptr__,L", ",2);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->GameplayTags).ArrayNum);
  }
  return __return_storage_ptr__;
}

// ToStringsMaxLen @ 146aeef90

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FGameplayTagContainer::ToStringsMaxLen
          (FGameplayTagContainer *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::Reserve(&local_58,param_1);
  iVar5 = (this->GameplayTags).ArrayNum;
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar5) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
      ::FName::ToString((FName *)((this->GameplayTags).AllocatorInstance.Data +
                                 (longlong)(int)uVar8 * 8),&local_48);
      if ((int)uVar8 < (this->GameplayTags).ArrayNum + -1) {
        ::FString::AppendChars(&local_48,L",",1);
      }
      uVar4 = local_58.Data.ArrayNum - 1;
      if (local_58.Data.ArrayNum == 0) {
        uVar4 = 0;
      }
      iVar5 = local_48.Data.ArrayNum;
      if (iVar5 == 0) {
        iVar5 = 1;
      }
      if ((int)(uVar4 + iVar5) < param_1) {
        ::FString::ConcatFC(&local_38,&local_48,L" ");
        iVar5 = local_38.Data.ArrayNum + -1;
        if (local_38.Data.ArrayNum == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars(&local_58,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar6;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        FVar2.Data = local_58.Data.AllocatorInstance.Data;
        pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(undefined8 *)&pFVar7->field_0x0 = 0;
        lVar9 = (longlong)local_58.Data.ArrayNum;
        *(int *)&pFVar7[8].field_0x0 = local_58.Data.ArrayNum;
        if (local_58.Data.ArrayNum == 0) {
          *(int *)(pFVar7 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_58.Data.ArrayNum
                     ,(int *)(pFVar7 + 0xc));
          memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,lVar9 * 2);
        }
        iVar5 = local_48.Data.ArrayNum + -1;
        if (local_48.Data.ArrayNum == 0) {
          iVar5 = 0;
        }
        ::FString::AssignRange(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      iVar5 = (this->GameplayTags).ArrayNum;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar5);
  }
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_58.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    lVar9 = (longlong)local_58.Data.ArrayNum;
    *(int *)&pFVar7[8].field_0x0 = local_58.Data.ArrayNum;
    if (local_58.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_58.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,lVar9 * 2);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 1504f8650

bool __thiscall `FGameplayTagContainer::AddLeafTag'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7958607028354546869>);
  if (bVar2) {
    local_res10[0] = **(FName **)this;
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7958607028354546869>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504f86c4;
    }
  }
  bVar2 = false;
LAB_1504f86c4:
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

// operator() @ 1504f88c0

bool __thiscall `FGameplayTagContainer::NetSerialize'::__l12::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FString local_28;
  FString local_18;
  
  uVar6 = 0;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7958607028354546636>);
  if (bVar3) {
    plVar1 = *(longlong **)this;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    iVar7 = (int)plVar1[1];
    if (0 < iVar7) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < iVar7) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        ::FName::ToString((FName *)(*plVar1 + (longlong)(int)uVar6 * 8),&local_18);
        iVar7 = local_18.Data.ArrayNum + -1;
        if (local_18.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar7);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if ((int)uVar6 < (int)plVar1[1] + -1) {
          ::FString::AppendChars(&local_28,L", ",2);
        }
        iVar7 = (int)plVar1[1];
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar7);
    }
    uVar6 = 1;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7958607028354546636>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504f8a16;
    }
  }
  bVar3 = false;
LAB_1504f8a16:
  if ((uVar6 != 0) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

