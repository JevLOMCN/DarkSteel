// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// FBudget @ 145d09220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FBudget * __thiscall
DynamicRenderScaling::FBudget::FBudget
          (FBudget *this,wchar_t *param_1,_func___cdecl_FHeuristicSettings *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined3 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FBudget *pFVar14;
  size_t sVar15;
  size_t sVar16;
  FName *pFVar17;
  FHeuristicSettings *pFVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  uint uVar22;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar23;
  undefined1 auStackY_348 [32];
  undefined1 local_308 [8];
  undefined1 local_300 [8];
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [8];
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [8];
  undefined4 local_2b8 [2];
  undefined4 local_2b0 [2];
  undefined4 local_2a8 [2];
  undefined4 local_2a0 [2];
  undefined4 local_298 [2];
  int *local_290;
  FName local_288;
  TStatIdData *local_280;
  FName local_278;
  TStatIdData *local_270;
  FName local_268;
  TStatIdData *local_260;
  FName local_258;
  TStatIdData *local_250;
  FName local_248;
  TStatIdData *local_240;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FName *local_1e8;
  undefined4 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  FName *local_1c8;
  undefined4 *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  FName *local_1a8;
  undefined4 *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  FName *local_188;
  undefined4 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  FName *local_168;
  undefined4 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FHeuristicSettings local_120;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  this->Name = param_1;
  (this->AnsiName).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->AnsiName).ArrayNum;
  local_290 = &(this->AnsiName).ArrayMax;
  *piVar1 = 0;
  *local_290 = 0;
  this->HeuristicSettingsGetter = param_2;
  (this->StatId_TargetMs).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatId_MeasuredMs).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatId_MinScaling).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatId_MaxScaling).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatId_CurrentScaling).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink).Element = this;
  (this->CachedSettings).Model = Unknown;
  (this->CachedSettings).bModelScalesWithPrimaryScreenPercentage = false;
  (this->CachedSettings).MinResolutionFraction = 0.5;
  (this->CachedSettings).MaxResolutionFraction = 1.0;
  (this->CachedSettings).ThrottlingMaxResolutionFraction = 0.0;
  (this->CachedSettings).BudgetMs = 0.0;
  (this->CachedSettings).ChangeThreshold = 0.02;
  (this->CachedSettings).TargetedHeadRoom = 0.05;
  (this->CachedSettings).IncreaseAmortizationFactor = 0.9;
  (this->CachedSettings).FractionQuantization = 0;
  *(undefined8 *)&(this->CachedSettings).UpperBoundQuantization = 0;
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InName",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DynamicRenderScaling.cpp"
                          ,0x80,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    pFVar14 = (FBudget *)(*pcVar2)();
    return pFVar14;
  }
  sVar15 = wcslen(param_1);
  iVar13 = *piVar1;
  uVar21 = (int)sVar15 + 1;
  if (iVar13 < (int)uVar21) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,uVar21 - iVar13,&(this->AnsiName).AllocatorInstance,piVar1,local_290);
    memset((this->AnsiName).AllocatorInstance.Data + iVar12,0,(longlong)(int)(uVar21 - iVar13));
  }
  else {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if ((int)uVar21 < iVar13) {
      uVar22 = iVar13 - uVar21;
      if (((int)(uVar22 | uVar21) < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar11)) {
        pcVar2 = (code *)swi(3);
        pFVar14 = (FBudget *)(*pcVar2)();
        return pFVar14;
      }
      if (uVar22 != 0) {
        pFVar19 = (this->AnsiName).AllocatorInstance.Data + (int)uVar21;
        iVar13 = (*piVar1 - uVar22) - uVar21;
        if (iVar13 != 0) {
          memmove(pFVar19,pFVar19 + (int)uVar22,(longlong)iVar13);
        }
        *piVar1 = *piVar1 - uVar22;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&(this->AnsiName).AllocatorInstance,*piVar1,local_290);
      }
    }
  }
  pTVar23 = &this->GlobalListLink;
  sVar15 = (size_t)(this->AnsiName).ArrayNum;
  local_e8._padding_ = 0;
  if (param_1 == (wchar_t *)0x0) {
    local_e8.Ptr = (char *)0x0;
    local_e8.StringLength = 0;
  }
  else {
    sVar16 = wcslen(param_1);
    TStringConversion<TStringConvert<wchar_t,char>,128>::Init(&local_e8,param_1,(int)sVar16,Yes);
  }
  pFVar19 = (this->AnsiName).AllocatorInstance.Data;
  strncpy((char *)pFVar19,local_e8.Ptr,sVar15);
  pFVar19[sVar15 - 1] = (FScriptContainerElement)0x0;
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  if (GDynamicScalingBudgetsList != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
    GDynamicScalingBudgetsList->_padding_ = (longlong)pTVar23;
  }
  pTVar23->_padding_ = (longlong)GDynamicScalingBudgetsList;
  (this->GlobalListLink)._padding_ = (longlong)&GDynamicScalingBudgetsList;
  GDynamicScalingBudgetsList = pTVar23;
  this->BudgetId = GRDSGlobalListLinkSize;
  GRDSGlobalListLinkSize = GRDSGlobalListLinkSize + 1;
  if ((0x10 < GRDSGlobalListLinkSize) && (2 < (byte)LogRendererCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
  }
  ::FString::PrintfImpl(&local_238,L"%s_TargetMs");
  local_300[0] = 1;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_238.Data.ArrayNum != 0) {
    FVar20.Data = local_238.Data.AllocatorInstance.Data;
  }
  local_308[0] = 0;
  local_2b8[0] = 3;
  pFVar17 = ::FName::FName(&local_148,(wchar_t *)FVar20.Data);
  local_288 = *pFVar17;
  local_1e8 = &local_288;
  local_1e0 = local_2b8;
  local_1d8 = local_308;
  local_1d0 = local_300;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_RenderScaling>'::__l2::<lambda_1>::
  operator()(&local_1e8);
  (this->StatId_TargetMs).StatIdPtr = local_280;
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_228,L"%s_MeasuredMs");
  local_2f0[0] = 1;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar20.Data = local_228.Data.AllocatorInstance.Data;
  }
  local_2f8[0] = 0;
  local_2b0[0] = 3;
  pFVar17 = ::FName::FName(&local_140,(wchar_t *)FVar20.Data);
  local_278 = *pFVar17;
  local_1c8 = &local_278;
  local_1c0 = local_2b0;
  local_1b8 = local_2f8;
  local_1b0 = local_2f0;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_RenderScaling>'::__l2::<lambda_1>::
  operator()(&local_1c8);
  (this->StatId_MeasuredMs).StatIdPtr = local_270;
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_218,L"%s_MinFraction");
  local_2e0[0] = 1;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar20.Data = local_218.Data.AllocatorInstance.Data;
  }
  local_2e8[0] = 0;
  local_2a8[0] = 3;
  pFVar17 = ::FName::FName(&local_138,(wchar_t *)FVar20.Data);
  local_268 = *pFVar17;
  local_1a8 = &local_268;
  local_1a0 = local_2a8;
  local_198 = local_2e8;
  local_190 = local_2e0;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_RenderScaling>'::__l2::<lambda_1>::
  operator()(&local_1a8);
  (this->StatId_MinScaling).StatIdPtr = local_260;
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_208,L"%s_MaxFraction");
  local_2d0[0] = 1;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_208.Data.ArrayNum != 0) {
    FVar20.Data = local_208.Data.AllocatorInstance.Data;
  }
  local_2d8[0] = 0;
  local_2a0[0] = 3;
  pFVar17 = ::FName::FName(&local_130,(wchar_t *)FVar20.Data);
  local_258 = *pFVar17;
  local_188 = &local_258;
  local_180 = local_2a0;
  local_178 = local_2d8;
  local_170 = local_2d0;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_RenderScaling>'::__l2::<lambda_1>::
  operator()(&local_188);
  (this->StatId_MaxScaling).StatIdPtr = local_250;
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1f8,L"%s_Fraction");
  local_2c0[0] = 1;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_1f8.Data.ArrayNum != 0) {
    FVar20.Data = local_1f8.Data.AllocatorInstance.Data;
  }
  local_2c8[0] = 0;
  local_298[0] = 3;
  pFVar17 = ::FName::FName(&local_128,(wchar_t *)FVar20.Data);
  local_248 = *pFVar17;
  local_160 = local_298;
  local_158 = local_2c8;
  local_150 = local_2c0;
  local_168 = &local_248;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_RenderScaling>'::__l2::<lambda_1>::
  operator()(&local_168);
  (this->StatId_CurrentScaling).StatIdPtr = local_240;
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  pFVar18 = (*this->HeuristicSettingsGetter)(&local_120);
  bVar11 = pFVar18->bModelScalesWithPrimaryScreenPercentage;
  uVar3 = *(undefined3 *)&pFVar18->field_0x5;
  fVar4 = pFVar18->MinResolutionFraction;
  fVar5 = pFVar18->MaxResolutionFraction;
  iVar13 = pFVar18->UpperBoundQuantization;
  fVar6 = pFVar18->ThrottlingMaxResolutionFraction;
  fVar7 = pFVar18->BudgetMs;
  fVar8 = pFVar18->ChangeThreshold;
  fVar9 = pFVar18->TargetedHeadRoom;
  fVar10 = pFVar18->IncreaseAmortizationFactor;
  iVar12 = pFVar18->FractionQuantization;
  (this->CachedSettings).Model = pFVar18->Model;
  (this->CachedSettings).bModelScalesWithPrimaryScreenPercentage = bVar11;
  *(undefined3 *)&(this->CachedSettings).field_0x5 = uVar3;
  (this->CachedSettings).MinResolutionFraction = fVar4;
  (this->CachedSettings).MaxResolutionFraction = fVar5;
  (this->CachedSettings).ThrottlingMaxResolutionFraction = fVar6;
  (this->CachedSettings).BudgetMs = fVar7;
  (this->CachedSettings).ChangeThreshold = fVar8;
  (this->CachedSettings).TargetedHeadRoom = fVar9;
  (this->CachedSettings).IncreaseAmortizationFactor = fVar10;
  (this->CachedSettings).FractionQuantization = iVar12;
  (this->CachedSettings).UpperBoundQuantization = iVar13;
  return this;
}

// ~FBudget @ 145d0be60

void __thiscall DynamicRenderScaling::FBudget::~FBudget(FBudget *this)

{
  longlong lVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FLowLevelMemTracker *this_00;
  
  GRDSGlobalListLinkSize = GRDSGlobalListLinkSize + -1;
  lVar1 = (this->GlobalListLink)._padding_;
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 8) = (this->GlobalListLink)._padding_;
  }
  plVar2 = (longlong *)(this->GlobalListLink)._padding_;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (this->GlobalListLink)._padding_;
  }
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  pFVar3 = (this->AnsiName).AllocatorInstance.Data;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar3,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar3);
  }
  return;
}

// GetGlobalList @ 145d2b740

TLinkedList<DynamicRenderScaling::FBudget_*> ** __cdecl
DynamicRenderScaling::FBudget::GetGlobalList(void)

{
  return &GDynamicScalingBudgetsList;
}

// GetGlobalListSize @ 145d2b750

int __cdecl DynamicRenderScaling::FBudget::GetGlobalListSize(void)

{
  return GRDSGlobalListLinkSize;
}

