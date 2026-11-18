// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 4

// CreateGameplayDataTable @ 146ad4eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDataTable * __thiscall FGameplayTagTestBase::CreateGameplayDataTable(FGameplayTagTestBase *this)

{
  FName FVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  FName *pFVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UDataTable *pUVar8;
  TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
  *this_00;
  TTuple<FName,unsigned_char_*> *pTVar9;
  longlong *plVar10;
  uint uVar11;
  wchar_t **ppwVar12;
  undefined1 auStack_4c8 [32];
  wchar_t *local_4a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_498;
  FString local_488;
  wchar_t *local_478 [5];
  undefined8 local_450;
  wchar_t *local_448;
  undefined8 local_440;
  wchar_t *local_438;
  undefined8 local_430;
  wchar_t *local_428;
  undefined8 local_420;
  wchar_t *local_418;
  undefined8 local_410;
  wchar_t *local_408;
  undefined8 local_400;
  wchar_t *local_3f8;
  undefined8 local_3f0;
  wchar_t *local_3e8;
  undefined8 local_3e0;
  wchar_t *local_3d8;
  undefined8 local_3d0;
  wchar_t *local_3c8;
  undefined8 local_3c0;
  wchar_t *local_3b8;
  undefined8 local_3b0;
  wchar_t *local_3a8;
  undefined8 local_3a0;
  wchar_t *local_398;
  undefined8 local_390;
  wchar_t *local_388;
  undefined8 local_380;
  wchar_t *local_378;
  undefined8 local_370;
  wchar_t *local_368;
  undefined8 local_360;
  wchar_t *local_358;
  undefined8 local_350;
  wchar_t *local_348;
  undefined8 local_340;
  wchar_t *local_338;
  undefined8 local_330;
  wchar_t *local_328;
  undefined8 local_320;
  wchar_t *local_318;
  undefined8 local_310;
  wchar_t *local_308;
  undefined8 local_300;
  wchar_t *local_2f8;
  undefined8 local_2f0;
  wchar_t *local_2e8;
  undefined8 local_2e0;
  wchar_t *local_2d8;
  undefined8 local_2d0;
  wchar_t *local_2c8;
  undefined8 local_2c0;
  wchar_t *local_2b8;
  undefined8 local_2b0;
  wchar_t *local_2a8;
  undefined8 local_2a0;
  wchar_t *local_298;
  undefined8 local_290;
  wchar_t *local_288;
  undefined8 local_280;
  wchar_t *local_278;
  undefined8 local_270;
  wchar_t *local_268;
  undefined8 local_260;
  wchar_t *local_258;
  undefined8 local_250;
  wchar_t *local_248;
  undefined8 local_240;
  wchar_t *local_238;
  undefined8 local_230;
  wchar_t *local_228;
  undefined8 local_220;
  wchar_t *local_218;
  undefined8 local_210;
  wchar_t *local_208;
  undefined8 local_200;
  wchar_t *local_1f8;
  undefined8 local_1f0;
  wchar_t *local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  undefined8 local_1d0;
  wchar_t *local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined8 local_140;
  wchar_t *local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  FName local_a8;
  FName local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_4c8;
  local_478[1] = (wchar_t *)0xd;
  local_478[2] = L"Effect.Damage.Basic";
  local_478[0] = L"Effect.Damage";
  local_478[4] = L"Effect.Damage.Type1";
  local_448 = L"Effect.Damage.Type2";
  local_438 = L"Effect.Damage.Reduce";
  local_428 = L"Effect.Damage.Buffable";
  local_418 = L"Effect.Damage.Buff";
  local_408 = L"Effect.Damage.Physical";
  local_3f8 = L"Effect.Damage.Fire";
  local_3e8 = L"Effect.Damage.Buffed.FireBuff";
  local_3d8 = L"Effect.Damage.Mitigated.Armor";
  local_3c8 = L"Effect.Lifesteal";
  local_3b8 = L"Effect.Shield";
  local_3a8 = L"Effect.Buff";
  local_398 = L"Effect.Immune";
  local_388 = L"Effect.FireDamage";
  local_378 = L"Effect.Shield.Absorb";
  local_368 = L"Effect.Protect.Damage";
  local_358 = L"Stackable";
  local_348 = L"Stack.DiminishingReturns";
  local_338 = L"GameplayCue.Burning";
  local_328 = L"Expensive.Status.Tag.Type.1";
  local_318 = L"Expensive.Status.Tag.Type.2";
  local_308 = L"Expensive.Status.Tag.Type.3";
  local_2f8 = L"Expensive.Status.Tag.Type.4";
  local_2e8 = L"Expensive.Status.Tag.Type.5";
  local_2d8 = L"Expensive.Status.Tag.Type.6";
  local_478[3] = (wchar_t *)0x13;
  local_450 = 0x13;
  local_440 = 0x13;
  local_430 = 0x14;
  local_420 = 0x16;
  local_410 = 0x12;
  local_400 = 0x16;
  local_3f0 = 0x12;
  local_3e0 = 0x1d;
  local_3d0 = 0x1d;
  local_3c0 = 0x10;
  local_3b0 = 0xd;
  local_3a0 = 0xb;
  local_390 = 0xd;
  local_380 = 0x11;
  local_370 = 0x14;
  local_360 = 0x15;
  local_350 = 9;
  local_340 = 0x18;
  local_330 = 0x13;
  local_320 = 0x1b;
  local_310 = 0x1b;
  local_300 = 0x1b;
  local_2f0 = 0x1b;
  local_2e0 = 0x1b;
  local_2d0 = 0x1b;
  local_2c0 = 0x1b;
  local_2c8 = L"Expensive.Status.Tag.Type.7";
  local_2b8 = L"Expensive.Status.Tag.Type.8";
  local_2a8 = L"Expensive.Status.Tag.Type.9";
  local_298 = L"Expensive.Status.Tag.Type.10";
  local_288 = L"Expensive.Status.Tag.Type.11";
  local_278 = L"Expensive.Status.Tag.Type.12";
  local_268 = L"Expensive.Status.Tag.Type.13";
  local_258 = L"Expensive.Status.Tag.Type.14";
  local_248 = L"Expensive.Status.Tag.Type.15";
  local_238 = L"Expensive.Status.Tag.Type.16";
  local_228 = L"Expensive.Status.Tag.Type.17";
  local_218 = L"Expensive.Status.Tag.Type.18";
  local_208 = L"Expensive.Status.Tag.Type.19";
  local_1f8 = L"Expensive.Status.Tag.Type.20";
  local_1e8 = L"Expensive.Status.Tag.Type.21";
  local_1d8 = L"Expensive.Status.Tag.Type.22";
  local_1c8 = L"Expensive.Status.Tag.Type.23";
  local_1b8 = L"Expensive.Status.Tag.Type.24";
  local_1a8 = L"Expensive.Status.Tag.Type.25";
  local_198 = L"Expensive.Status.Tag.Type.26";
  local_188 = L"Expensive.Status.Tag.Type.27";
  local_178 = L"Expensive.Status.Tag.Type.28";
  local_168 = L"Expensive.Status.Tag.Type.29";
  local_158 = L"Expensive.Status.Tag.Type.30";
  local_148 = L"Expensive.Status.Tag.Type.31";
  local_138 = L"Expensive.Status.Tag.Type.32";
  local_128 = L"Expensive.Status.Tag.Type.33";
  local_2b0 = 0x1b;
  local_2a0 = 0x1b;
  local_290 = 0x1c;
  local_280 = 0x1c;
  local_270 = 0x1c;
  local_260 = 0x1c;
  local_250 = 0x1c;
  local_240 = 0x1c;
  local_230 = 0x1c;
  local_220 = 0x1c;
  local_210 = 0x1c;
  local_200 = 0x1c;
  local_1f0 = 0x1c;
  local_1e0 = 0x1c;
  local_1d0 = 0x1c;
  local_1c0 = 0x1c;
  local_1b0 = 0x1c;
  local_1a0 = 0x1c;
  local_190 = 0x1c;
  local_180 = 0x1c;
  local_170 = 0x1c;
  local_160 = 0x1c;
  local_150 = 0x1c;
  local_140 = 0x1c;
  local_130 = 0x1c;
  local_120 = 0x1c;
  local_110 = 0x1c;
  local_118 = L"Expensive.Status.Tag.Type.34";
  local_100 = 0x1c;
  local_108 = L"Expensive.Status.Tag.Type.35";
  local_f0 = 0x1c;
  local_f8 = L"Expensive.Status.Tag.Type.36";
  local_e8 = L"Expensive.Status.Tag.Type.37";
  local_d8 = L"Expensive.Status.Tag.Type.38";
  local_c8 = L"Expensive.Status.Tag.Type.39";
  local_b8 = L"Expensive.Status.Tag.Type.40";
  local_e0 = 0x1c;
  local_d0 = 0x1c;
  local_c0 = 0x1c;
  local_b0 = 0x1c;
  pFVar5 = ::FName::FName(&local_a8,L"TempDataTable");
  FVar1 = *pFVar5;
  pUVar6 = GetTransientPackage();
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = Z_Construct_UClass_UDataTable_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar7);
  uVar11 = 0;
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._8_8_ = pUVar6;
  local_98._16_8_ = FVar1;
  pUVar8 = (UDataTable *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar10 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTagTableRow.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagTableRow,(UObject *)pUVar6,
                         L"GameplayTagTableRow");
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FGameplayTagTableRow.OuterSingleton;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UScriptStruct_FGameplayTagTableRow.OuterSingleton != (UScriptStruct *)0x0)
     ) {
    UE::GC::MarkAsReachable
              ((UObject *)Z_Registration_Info_UScriptStruct_FGameplayTagTableRow.OuterSingleton);
  }
  (pUVar8->RowStruct).field0_0x0.DebugPtr = pUVar3;
  ::FString::FString(&local_488,L",Tag,CategoryText,");
  ppwVar12 = local_478 + 1;
  do {
    local_4a8 = ppwVar12[0xffffffffffffffff];
    ::FString::AppendfImpl(&local_488,L"\r\n%d,%.*s");
    uVar11 = uVar11 + 1;
    ppwVar12 = ppwVar12 + 2;
  } while (uVar11 < 0x3d);
  UDataTable::CreateTableFromCSVString(pUVar8,&local_498,&local_488);
  DestructItems<FString,int>((FString *)local_498.AllocatorInstance.Data,local_498.ArrayNum);
  if (local_498.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.AllocatorInstance.Data);
  }
  this_00 = (TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
             *)(**(code **)(pUVar8->_padding_ + 0x2c8))(pUVar8);
  pFVar5 = ::FName::FName(&local_a0,"0");
  pTVar9 = TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
           ::Find(this_00,*pFVar5);
  if (pTVar9 == (TTuple<FName,unsigned_char_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar8 = (UDataTable *)(*pcVar2)();
      return pUVar8;
    }
  }
  if (*(longlong *)&pTVar9->field_0x8 != 0) {
    bVar4 = ::FName::Equals(*(FName *)(*(longlong *)&pTVar9->field_0x8 + 8),L"Effect.Damage");
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Row->Tag == L\"Effect.Damage\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\Tests\\GameplayTagTests.cpp"
                         ,0x6b,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pUVar8 = (UDataTable *)(*pcVar2)();
        return pUVar8;
      }
    }
  }
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  return pUVar8;
}

// GameplayTagTest_PerfTest @ 146adad80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FGameplayTagTestBase::GameplayTagTest_PerfTest(FGameplayTagTestBase *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  code *pcVar2;
  FName FVar3;
  wchar_t *pwVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  UGameplayTagsManager *pUVar8;
  FName *pFVar9;
  void *pvVar10;
  ForAnyElementType FVar11;
  undefined1 *puVar12;
  uint uVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  FName *pFVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStackY_5c8 [32];
  FName local_598;
  FGameplayTagContainer local_590;
  undefined1 local_570;
  undefined1 local_56f [7];
  FGameplayTagContainer local_568;
  FGameplayTagContainer local_548;
  FGameplayTag local_528;
  FGameplayTag local_520;
  FGameplayTag local_518;
  FGameplayTagContainer local_510;
  FGameplayTagContainer local_4f0;
  FGameplayTagContainer local_4d0;
  FGameplayTagContainer local_4b0;
  FGameplayTag local_490;
  FAutomationTestBase *local_488;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FName local_390;
  undefined1 local_388 [8];
  FName local_380;
  FName local_378;
  FName local_370;
  FName local_368;
  FName local_360;
  FGameplayTagContainer local_358;
  FConditionalScopeLogTime local_338;
  FConditionalScopeLogTime local_310;
  FConditionalScopeLogTime local_2e8;
  FConditionalScopeLogTime local_2c0;
  FConditionalScopeLogTime local_298;
  FConditionalScopeLogTime local_270;
  FConditionalScopeLogTime local_248;
  FConditionalScopeLogTime local_220;
  FConditionalScopeLogTime local_1f8;
  FConditionalScopeLogTime local_1d0;
  FConditionalScopeLogTime local_1a8;
  FConditionalScopeLogTime local_180;
  FConditionalScopeLogTime local_158;
  FConditionalScopeLogTime local_130;
  FConditionalScopeLogTime local_108;
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_488 = (FAutomationTestBase *)this;
  pUVar8 = UGameplayTagsManager::Get();
  pFVar9 = ::FName::FName(&local_390,0xd,L"Effect.Damage",FNAME_Add);
  UGameplayTagsManager::RequestGameplayTag(pUVar8,(FName)&local_518,(*pFVar9).ComparisonIndex);
  pUVar8 = UGameplayTagsManager::Get();
  pFVar9 = ::FName::FName(&local_360,0x13,L"Effect.Damage.Type1",FNAME_Add);
  UGameplayTagsManager::RequestGameplayTag(pUVar8,(FName)&local_598,(*pFVar9).ComparisonIndex);
  pUVar8 = UGameplayTagsManager::Get();
  pFVar9 = ::FName::FName(&local_368,0x13,L"Effect.Damage.Type2",FNAME_Add);
  UGameplayTagsManager::RequestGameplayTag(pUVar8,(FName)&local_528,(*pFVar9).ComparisonIndex);
  pUVar8 = UGameplayTagsManager::Get();
  pFVar9 = ::FName::FName(&local_370,0x13,L"GameplayCue.Burning",FNAME_Add);
  UGameplayTagsManager::RequestGameplayTag(pUVar8,(FName)&local_520,(*pFVar9).ComparisonIndex);
  lVar16 = 10000;
  local_590.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_590.GameplayTags.ArrayNum = 0;
  local_590.GameplayTags.ArrayMax = 0;
  local_590.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_590.ParentTags.ArrayNum = 0;
  local_590.ParentTags.ArrayMax = 0;
  ::FString::PrintfImpl(&local_470,L"%d get tag");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_470.Data.ArrayNum != 0) {
    FVar15.Data = local_470.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_338,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Data.AllocatorInstance.Data);
  }
  do {
    pUVar8 = UGameplayTagsManager::Get();
    pFVar9 = ::FName::FName(&local_380,L"Effect.Damage");
    UGameplayTagsManager::RequestGameplayTag(pUVar8,(FName)local_388,(*pFVar9).ComparisonIndex);
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_338);
  lVar16 = 1000;
  ::FString::PrintfImpl(&local_460,L"%d container constructions");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_460.Data.ArrayNum != 0) {
    FVar15.Data = local_460.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_310,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  lVar19 = 1000;
  do {
    if ((FName *)local_590.GameplayTags.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_590.GameplayTags.AllocatorInstance.Data);
    }
    local_590.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_590.GameplayTags.ArrayNum = 0;
    local_590.GameplayTags.ArrayMax = 0;
    if ((FName *)local_590.ParentTags.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_590.ParentTags.AllocatorInstance.Data);
    }
    local_590.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_590.ParentTags.ArrayNum = 0;
    local_590.ParentTags.ArrayMax = 0;
    FGameplayTagContainer::AddTag(&local_590,(FGameplayTag *)&local_598);
    FGameplayTagContainer::AddTag(&local_590,&local_528);
    FGameplayTagContainer::AddTag(&local_590,&local_520);
    iVar20 = 1;
    do {
      local_d8.Base = local_b8;
      local_d8.bIsDynamic = false;
      local_d8.bIsExternal = false;
      local_d8.CurPos = local_b8;
      local_d8.End = (wchar_t *)local_38;
      pvVar10 = FGenericPlatformString::Memcpy(local_b8,L"Expensive.Status.Tag.Type.",0x34);
      local_d8.CurPos = (wchar_t *)((longlong)pvVar10 + 0x34);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_d8,L"%d");
      pwVar4 = local_d8.Base;
      lVar14 = (longlong)local_d8.CurPos - (longlong)local_d8.Base;
      pUVar8 = UGameplayTagsManager::Get();
      pFVar9 = ::FName::FName(&local_378,(int)(lVar14 >> 1),pwVar4,FNAME_Add);
      UGameplayTagsManager::RequestGameplayTag(pUVar8,(FName)&local_490,(*pFVar9).ComparisonIndex);
      FGameplayTagContainer::AddTag(&local_590,&local_490);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
      iVar20 = iVar20 + 1;
    } while (iVar20 < 0x29);
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_310);
  ::FString::PrintfImpl(&local_450,L"%d container copy and move");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_450.Data.ArrayNum != 0) {
    FVar15.Data = local_450.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_2e8,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.Data.AllocatorInstance.Data);
  }
  lVar19 = 1000;
  bVar5 = true;
  do {
    local_568.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.GameplayTags.ArrayNum = 0;
    local_568.GameplayTags.ArrayMax = 0;
    local_568.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.ParentTags.ArrayNum = 0;
    local_568.ParentTags.ArrayMax = 0;
    FGameplayTagContainer::AddTag(&local_568,&local_518);
    FGameplayTagContainer::operator=(&local_568,&local_590);
    FVar11.Data = local_568.ParentTags.AllocatorInstance.Data;
    FVar15.Data = local_568.GameplayTags.AllocatorInstance.Data;
    bVar21 = false;
    if (local_568.GameplayTags.ArrayNum == local_590.GameplayTags.ArrayNum) {
      bVar21 = bVar5;
    }
    local_568.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.GameplayTags.ArrayNum = 0;
    local_568.GameplayTags.ArrayMax = 0;
    local_568.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.ParentTags.ArrayNum = 0;
    local_568.ParentTags.ArrayMax = 0;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
    if (FVar15.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar15.Data);
    }
    if (local_568.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.ParentTags.AllocatorInstance.Data);
    }
    if (local_568.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.GameplayTags.AllocatorInstance.Data);
    }
    lVar19 = lVar19 + -1;
    bVar5 = bVar21;
  } while (lVar19 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_2e8);
  ::FString::PrintfImpl(&local_440,L"%d container addtag");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_440.Data.ArrayNum != 0) {
    FVar15.Data = local_440.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_2c0,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data.AllocatorInstance.Data);
  }
  lVar19 = 1000;
  iVar20 = local_590.GameplayTags.ArrayNum;
  do {
    local_4b0.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4b0.GameplayTags.ArrayNum = 0;
    local_4b0.GameplayTags.ArrayMax = 0;
    local_4b0.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4b0.ParentTags.ArrayNum = 0;
    local_4b0.ParentTags.ArrayMax = 0;
    for (uVar13 = 0; (-1 < (int)uVar13 && ((int)uVar13 < iVar20)); uVar13 = uVar13 + 1) {
      uVar7 = 0;
      if ((int)uVar13 < iVar20) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FGameplayTagContainer::AddTag
                (&local_4b0,
                 (FGameplayTag *)
                 (local_590.GameplayTags.AllocatorInstance.Data + (longlong)(int)uVar13 * 8));
      iVar20 = local_590.GameplayTags.ArrayNum;
    }
    if (local_4b0.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b0.ParentTags.AllocatorInstance.Data);
      iVar20 = local_590.GameplayTags.ArrayNum;
    }
    if (local_4b0.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b0.GameplayTags.AllocatorInstance.Data);
      iVar20 = local_590.GameplayTags.ArrayNum;
    }
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_2c0);
  ::FString::PrintfImpl(&local_430,L"%d container partial appends");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_430.Data.ArrayNum != 0) {
    FVar15.Data = local_430.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_298,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data.AllocatorInstance.Data);
  }
  lVar19 = 1000;
  do {
    local_510.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_510.GameplayTags.ArrayNum = 0;
    local_510.GameplayTags.ArrayMax = 0;
    local_510.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_510.ParentTags.ArrayNum = 0;
    local_510.ParentTags.ArrayMax = 0;
    FGameplayTagContainer::AddTag(&local_510,(FGameplayTag *)&local_598);
    FGameplayTagContainer::AppendTags(&local_510,&local_590);
    if (local_510.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_510.ParentTags.AllocatorInstance.Data);
    }
    if (local_510.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_510.GameplayTags.AllocatorInstance.Data);
    }
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_298);
  ::FString::PrintfImpl(&local_420,L"%d container full appends");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_420.Data.ArrayNum != 0) {
    FVar15.Data = local_420.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_270,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data.AllocatorInstance.Data);
  }
  do {
    local_4d0.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4d0.GameplayTags.ArrayNum = 0;
    local_4d0.GameplayTags.ArrayMax = 0;
    local_4d0.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4d0.ParentTags.ArrayNum = 0;
    local_4d0.ParentTags.ArrayMax = 0;
    FGameplayTagContainer::operator=(&local_4d0,&local_590);
    FGameplayTagContainer::AppendTags(&local_4d0,&local_590);
    if (local_4d0.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d0.ParentTags.AllocatorInstance.Data);
    }
    if (local_4d0.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d0.GameplayTags.AllocatorInstance.Data);
    }
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_270);
  ::FString::PrintfImpl(&local_3c0,L"%d container gets");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_3c0.Data.ArrayNum != 0) {
    FVar15.Data = local_3c0.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_248,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
  }
  lVar16 = 10000;
  do {
    FGameplayTag::GetSingleTagContainer((FGameplayTag *)&local_598,&local_358);
    if (local_358.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.ParentTags.AllocatorInstance.Data);
    }
    if (local_358.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.GameplayTags.AllocatorInstance.Data);
    }
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_248);
  ::FString::PrintfImpl(&local_410,L"%d parent gets");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_410.Data.ArrayNum != 0) {
    FVar15.Data = local_410.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_220,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Data.AllocatorInstance.Data);
  }
  lVar16 = 10000;
  do {
    pUVar8 = UGameplayTagsManager::Get();
    lpCriticalSection = &pUVar8->GameplayTagMapCritical;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FVar3 = local_598;
    uVar13 = ::GetTypeHash(local_598.ComparisonIndex.Value);
    if (*(int *)&(pUVar8->GameplayTagNodeMap).field_0x8 !=
        *(int *)&(pUVar8->GameplayTagNodeMap).field_0x34) {
      puVar1 = *(undefined1 **)&(pUVar8->GameplayTagNodeMap).field_0x40;
      puVar12 = &(pUVar8->GameplayTagNodeMap).field_0x38;
      if (puVar1 != (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      uVar13 = *(uint *)(puVar12 +
                        (ulonglong)
                        (*(int *)&(pUVar8->GameplayTagNodeMap).field_0x48 - 1U &
                        FVar3.Number + uVar13) * 4);
      if (uVar13 != 0xffffffff) {
        do {
          pFVar9 = (FName *)((longlong)(int)uVar13 * 0x20 + *(longlong *)&pUVar8->GameplayTagNodeMap
                            );
          if (*pFVar9 == local_598) {
            pFVar17 = pFVar9 + 1;
            if (pFVar9 == (FName *)0x0) {
              pFVar17 = (FName *)0x0;
            }
            if (pFVar17 != (FName *)0x0) {
              if ((*pFVar17 == (FName)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((FGameplayTagContainer *)((longlong)*pFVar17 + 8) != (FGameplayTagContainer *)0x0)
              {
                FGameplayTagContainer::GetGameplayTagParents
                          ((FGameplayTagContainer *)((longlong)*pFVar17 + 8),&local_4f0);
                if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) goto LAB_146adb672;
                goto LAB_146adb665;
              }
            }
            break;
          }
          uVar13 = pFVar9[3].ComparisonIndex.Value;
        } while (uVar13 != 0xffffffff);
      }
    }
    local_4f0.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4f0.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4f0.GameplayTags.ArrayNum = 0;
    local_4f0.GameplayTags.ArrayMax = 0;
    local_4f0.ParentTags.ArrayNum = 0;
    local_4f0.ParentTags.ArrayMax = 0;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
LAB_146adb665:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
LAB_146adb672:
    if (local_4f0.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f0.ParentTags.AllocatorInstance.Data);
    }
    if (local_4f0.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f0.GameplayTags.AllocatorInstance.Data);
    }
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_220);
  local_548.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_548.GameplayTags.ArrayNum = 0;
  local_548.GameplayTags.ArrayMax = 0;
  local_548.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_548.ParentTags.ArrayNum = 0;
  local_548.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::AddTag(&local_548,(FGameplayTag *)&local_598);
  FGameplayTagContainer::AddTag(&local_548,&local_528);
  FGameplayTagContainer::AddTag(&local_548,&local_520);
  lVar16 = 10000;
  ::FString::PrintfImpl(&local_400,L"%d MatchesAnyExact checks");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_400.Data.ArrayNum != 0) {
    FVar15.Data = local_400.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_1f8,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data.AllocatorInstance.Data);
  }
  lVar19 = 10000;
  do {
    if (local_590.GameplayTags.ArrayNum != 0) {
      for (FVar15.Data = local_590.GameplayTags.AllocatorInstance.Data;
          (FName *)FVar15.Data !=
          (FName *)(local_590.GameplayTags.AllocatorInstance.Data +
                   (longlong)local_590.GameplayTags.ArrayNum * 8); FVar15.Data = FVar15.Data + 8) {
        if (*(FName *)FVar15.Data == local_598) {
          bVar6 = 1;
          goto LAB_146adb767;
        }
      }
    }
    bVar6 = 0;
LAB_146adb767:
    bVar21 = (bool)(bVar21 & bVar6);
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_1f8);
  ::FString::PrintfImpl(&local_3f0,L"%d MatchesAny checks");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_3f0.Data.ArrayNum != 0) {
    FVar15.Data = local_3f0.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_1d0,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
  }
  lVar19 = 10000;
  do {
    bVar5 = FGameplayTag::MatchesAny((FGameplayTag *)&local_598,&local_590);
    bVar21 = (bool)(bVar21 & bVar5);
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_1d0);
  ::FString::PrintfImpl(&local_3e0,L"%d MatchesTag checks");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_3e0.Data.ArrayNum != 0) {
    FVar15.Data = local_3e0.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_1a8,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
  }
  lVar19 = 10000;
  do {
    bVar5 = FGameplayTag::MatchesTag((FGameplayTag *)&local_598,&local_518);
    bVar21 = (bool)(bVar21 & bVar5);
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_1a8);
  ::FString::PrintfImpl(&local_3d0,L"%d HasTagExact checks");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_3d0.Data.ArrayNum != 0) {
    FVar15.Data = local_3d0.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_180,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
  }
  lVar19 = 10000;
  do {
    if (local_598 != (FName)0x0) {
      for (FVar15.Data = local_590.GameplayTags.AllocatorInstance.Data;
          (FName *)FVar15.Data !=
          (FName *)(local_590.GameplayTags.AllocatorInstance.Data +
                   (longlong)local_590.GameplayTags.ArrayNum * 8); FVar15.Data = FVar15.Data + 8) {
        if (*(FName *)FVar15.Data == local_598) {
          bVar6 = 1;
          goto LAB_146adb8fb;
        }
      }
    }
    bVar6 = 0;
LAB_146adb8fb:
    bVar21 = (bool)(bVar21 & bVar6);
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_180);
  ::FString::PrintfImpl(&local_480,L"%d HasTag checks");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_480.Data.ArrayNum != 0) {
    FVar15.Data = local_480.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_158,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.Data.AllocatorInstance.Data);
  }
  lVar19 = 10000;
LAB_146adb972:
  if (local_598 != (FName)0x0) {
    for (FVar15.Data = local_590.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar15.Data !=
        (FName *)(local_590.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_590.GameplayTags.ArrayNum * 8); FVar15.Data = FVar15.Data + 8) {
      if (*(FName *)FVar15.Data == local_598) goto LAB_146adbb23;
    }
    for (FVar15.Data = local_590.ParentTags.AllocatorInstance.Data;
        (FName *)FVar15.Data !=
        (FName *)(local_590.ParentTags.AllocatorInstance.Data +
                 (longlong)local_590.ParentTags.ArrayNum * 8); FVar15.Data = FVar15.Data + 8) {
      if (*(FName *)FVar15.Data == local_598) goto LAB_146adbb23;
    }
  }
  bVar6 = 0;
  goto LAB_146adb9b5;
LAB_146adbb23:
  bVar6 = 1;
LAB_146adb9b5:
  bVar21 = (bool)(bVar21 & bVar6);
  lVar19 = lVar19 + -1;
  if (lVar19 == 0) goto code_r0x000146adb9be;
  goto LAB_146adb972;
code_r0x000146adb9be:
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_158);
  ::FString::PrintfImpl(&local_3b0,L"%d HasAll checks");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_3b0.Data.ArrayNum != 0) {
    FVar15.Data = local_3b0.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_130,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
  }
  lVar19 = 10000;
  iVar20 = local_548.GameplayTags.ArrayNum;
  do {
    iVar18 = iVar20;
    if (iVar20 == 0) {
LAB_146adbb33:
      bVar6 = 1;
      iVar20 = iVar18;
    }
    else {
      pFVar9 = (FName *)(local_548.GameplayTags.AllocatorInstance.Data + (longlong)iVar20 * 8);
      FVar15.Data = local_548.GameplayTags.AllocatorInstance.Data;
      while( true ) {
        if (iVar18 != iVar20) {
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_570);
          iVar18 = local_548.GameplayTags.ArrayNum;
        }
        if ((FName *)FVar15.Data == pFVar9) goto LAB_146adbb33;
        if ((FName *)local_590.GameplayTags.AllocatorInstance.Data !=
            (FName *)(local_590.GameplayTags.AllocatorInstance.Data +
                     (longlong)local_590.GameplayTags.ArrayNum * 8)) {
          FVar11.Data = local_590.GameplayTags.AllocatorInstance.Data;
          do {
            if (*(FName *)FVar11.Data == *(FName *)FVar15.Data) goto LAB_146adbb2a;
            FVar11.Data = FVar11.Data + 8;
          } while ((FName *)FVar11.Data !=
                   (FName *)(local_590.GameplayTags.AllocatorInstance.Data +
                            (longlong)local_590.GameplayTags.ArrayNum * 8));
        }
        if ((FName *)local_590.ParentTags.AllocatorInstance.Data ==
            (FName *)(local_590.ParentTags.AllocatorInstance.Data +
                     (longlong)local_590.ParentTags.ArrayNum * 8)) break;
        FVar11.Data = local_590.ParentTags.AllocatorInstance.Data;
        while (*(FName *)FVar11.Data != *(FName *)FVar15.Data) {
          FVar11.Data = FVar11.Data + 8;
          if ((FName *)FVar11.Data ==
              (FName *)(local_590.ParentTags.AllocatorInstance.Data +
                       (longlong)local_590.ParentTags.ArrayNum * 8)) goto LAB_146adbab2;
        }
LAB_146adbb2a:
        FVar15.Data = FVar15.Data + 8;
      }
LAB_146adbab2:
      bVar6 = 0;
      iVar20 = iVar18;
    }
    bVar21 = (bool)(bVar21 & bVar6);
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_130);
  ::FString::PrintfImpl(&local_3a0,L"%d HasAny checks");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_3a0.Data.ArrayNum != 0) {
    FVar15.Data = local_3a0.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_108,true,(wchar_t *)FVar15.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Milliseconds);
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  iVar20 = local_548.GameplayTags.ArrayNum;
LAB_146adbba4:
  iVar18 = iVar20;
  if (iVar20 != 0) {
    pFVar9 = (FName *)(local_548.GameplayTags.AllocatorInstance.Data + (longlong)iVar20 * 8);
    FVar15.Data = local_548.GameplayTags.AllocatorInstance.Data;
    while( true ) {
      if (iVar18 != iVar20) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_56f);
        iVar18 = local_548.GameplayTags.ArrayNum;
      }
      if ((FName *)FVar15.Data == pFVar9) break;
      if ((FName *)local_590.GameplayTags.AllocatorInstance.Data !=
          (FName *)(local_590.GameplayTags.AllocatorInstance.Data +
                   (longlong)local_590.GameplayTags.ArrayNum * 8)) {
        FVar11.Data = local_590.GameplayTags.AllocatorInstance.Data;
        do {
          if (*(FName *)FVar11.Data == *(FName *)FVar15.Data) goto LAB_146adbc1a;
          FVar11.Data = FVar11.Data + 8;
        } while ((FName *)FVar11.Data !=
                 (FName *)(local_590.GameplayTags.AllocatorInstance.Data +
                          (longlong)local_590.GameplayTags.ArrayNum * 8));
      }
      if ((FName *)local_590.ParentTags.AllocatorInstance.Data !=
          (FName *)(local_590.ParentTags.AllocatorInstance.Data +
                   (longlong)local_590.ParentTags.ArrayNum * 8)) {
        FVar11.Data = local_590.ParentTags.AllocatorInstance.Data;
        do {
          if (*(FName *)FVar11.Data == *(FName *)FVar15.Data) goto LAB_146adbc1a;
          FVar11.Data = FVar11.Data + 8;
        } while ((FName *)FVar11.Data !=
                 (FName *)(local_590.ParentTags.AllocatorInstance.Data +
                          (longlong)local_590.ParentTags.ArrayNum * 8));
      }
      FVar15.Data = FVar15.Data + 8;
    }
  }
  bVar6 = 0;
  iVar20 = iVar18;
  goto LAB_146adbc20;
LAB_146adbc1a:
  bVar6 = 1;
  iVar20 = iVar18;
LAB_146adbc20:
  bVar21 = (bool)(bVar21 & bVar6);
  lVar16 = lVar16 + -1;
  if (lVar16 == 0) {
    FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_108);
    FAutomationTestBase::TestTrue(local_488,L"Performance Tests succeeded",bVar21);
    if (local_548.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.ParentTags.AllocatorInstance.Data);
    }
    if ((FName *)local_548.GameplayTags.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_548.GameplayTags.AllocatorInstance.Data);
    }
    if ((FName *)local_590.ParentTags.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_590.ParentTags.AllocatorInstance.Data);
    }
    if ((FName *)local_590.GameplayTags.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_590.GameplayTags.AllocatorInstance.Data);
    }
    return;
  }
  goto LAB_146adbba4;
}

// GameplayTagTest_TagComparisonTest @ 146adbcc0

void __thiscall FGameplayTagTestBase::GameplayTagTest_TagComparisonTest(FGameplayTagTestBase *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  FGameplayTag FVar5;
  bool bVar6;
  uint uVar7;
  UGameplayTagsManager *pUVar8;
  FName *pFVar9;
  FName FVar10;
  FName FVar11;
  undefined1 *puVar12;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  undefined1 local_48 [16];
  
  pUVar8 = UGameplayTagsManager::Get();
  pFVar9 = ::FName::FName(&local_68,0xd,L"Effect.Damage",FNAME_Add);
  UGameplayTagsManager::RequestGameplayTag(pUVar8,(FName)&local_res20,(*pFVar9).ComparisonIndex);
  pUVar8 = UGameplayTagsManager::Get();
  pFVar9 = ::FName::FName(&local_60,0x13,L"Effect.Damage.Type1",FNAME_Add);
  UGameplayTagsManager::RequestGameplayTag(pUVar8,(FName)&local_res10,(*pFVar9).ComparisonIndex);
  pUVar8 = UGameplayTagsManager::Get();
  pFVar9 = ::FName::FName(&local_58,0x13,L"Effect.Damage.Type2",FNAME_Add);
  UGameplayTagsManager::RequestGameplayTag(pUVar8,(FName)&local_70,(*pFVar9).ComparisonIndex);
  pUVar8 = UGameplayTagsManager::Get();
  pFVar9 = ::FName::FName(&local_50,0x13,L"GameplayCue.Burning",FNAME_Add);
  UGameplayTagsManager::RequestGameplayTag(pUVar8,(FName)local_48,(*pFVar9).ComparisonIndex);
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"EffectDamage1Tag == EffectDamage1Tag",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"EffectDamage1Tag != EffectDamage2Tag",
             local_res10 != local_70);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"EffectDamage1Tag != EffectDamageTag",
             local_res10 != local_res20);
  bVar6 = FGameplayTag::MatchesTag((FGameplayTag *)&local_res10,(FGameplayTag *)&local_res20);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"EffectDamage1Tag.MatchesTag(EffectDamageTag)",bVar6);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!EffectDamage1Tag.MatchesTagExact(EffectDamageTag)",
             local_res20 == (FName)0x0 || local_res10 != local_res20);
  bVar6 = FGameplayTag::MatchesTag((FGameplayTag *)&local_res10,(FGameplayTag *)&local_res18);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!EffectDamage1Tag.MatchesTag(EmptyTag)",!bVar6);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!EffectDamage1Tag.MatchesTagExact(EmptyTag)",
             local_res18 == (FName)0x0 || local_res10 != local_res18);
  bVar6 = FGameplayTag::MatchesTag((FGameplayTag *)&local_res18,(FGameplayTag *)&local_res18);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!EmptyTag.MatchesTag(EmptyTag)",!bVar6);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!EmptyTag.MatchesTagExact(EmptyTag)",
             local_res18 == (FName)0x0);
  pUVar8 = UGameplayTagsManager::Get();
  lpCriticalSection = &pUVar8->GameplayTagMapCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar11 = local_res10;
  uVar7 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  if (*(int *)&(pUVar8->GameplayTagNodeMap).field_0x8 !=
      *(int *)&(pUVar8->GameplayTagNodeMap).field_0x34) {
    puVar12 = *(undefined1 **)&(pUVar8->GameplayTagNodeMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(pUVar8->GameplayTagNodeMap).field_0x38;
    }
    uVar7 = *(uint *)(puVar12 +
                     (ulonglong)
                     (*(int *)&(pUVar8->GameplayTagNodeMap).field_0x48 - 1U & uVar7 + FVar11.Number)
                     * 4);
    if (uVar7 != 0xffffffff) {
      do {
        pFVar9 = (FName *)((longlong)(int)uVar7 * 0x20 + *(longlong *)&pUVar8->GameplayTagNodeMap);
        if (*pFVar9 == local_res10) {
          FVar11 = (FName)(pFVar9 + 1);
          if (pFVar9 == (FName *)0x0) {
            FVar11 = FVar10;
          }
          if (FVar11 != (FName)0x0) {
            FVar1 = *(FName *)FVar11;
            FVar11 = *(FName *)((longlong)FVar11 + 8);
            if (FVar11 != (FName)0x0) {
              LOCK();
              *(int *)((longlong)FVar11 + 8) = *(int *)((longlong)FVar11 + 8) + 1;
              UNLOCK();
            }
            if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            }
            if (FVar1 != (FName)0x0) {
              pTVar2 = *(TReferenceControllerBase<1> **)((longlong)FVar1 + 0x40);
              lVar3 = *(longlong *)((longlong)FVar1 + 0x38);
              if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                UNLOCK();
              }
              FVar5.TagName = FGameplayTag::EmptyTag.TagName;
              if (lVar3 == 0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar2);
              }
              else if (*(int *)(lVar3 + 0x10) < 1) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar2);
                FVar10 = FVar5.TagName;
              }
              else {
                FVar10 = **(FName **)(lVar3 + 8);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar2);
              }
            }
            goto LAB_146adbf8f;
          }
          break;
        }
        uVar7 = pFVar9[3].ComparisonIndex.Value;
      } while (uVar7 != 0xffffffff);
    }
  }
  FVar11 = FVar10;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
LAB_146adbf8f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar11);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"EffectDamage1Tag.RequestDirectParent() == EffectDamageTag",FVar10 == local_res20);
  return;
}

// GameplayTagTest_TagContainerTest @ 146adc040

void __thiscall FGameplayTagTestBase::GameplayTagTest_TagContainerTest(FGameplayTagTestBase *this)

{
  int iVar1;
  undefined8 uVar2;
  FName FVar3;
  bool bVar4;
  bool bVar5;
  UGameplayTagsManager *pUVar6;
  FName *pFVar7;
  ForAnyElementType FVar8;
  FGameplayTagContainer *pFVar9;
  FName *pFVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FGameplayTagContainer local_178;
  FGameplayTagContainer local_158;
  FGameplayTagContainer local_138;
  FGameplayTagContainer local_118;
  FName local_f8;
  FGameplayTagContainer local_f0;
  FGameplayTagContainer local_d0;
  FName local_b0;
  FGameplayTagContainer local_a8;
  FGameplayTagContainer local_88;
  FGameplayTag local_68;
  FGameplayTagContainer local_60;
  
  pUVar6 = UGameplayTagsManager::Get();
  pFVar7 = ::FName::FName(&local_res10,0xd,L"Effect.Damage",FNAME_Add);
  UGameplayTagsManager::RequestGameplayTag(pUVar6,(FName)&local_res20,(*pFVar7).ComparisonIndex);
  pUVar6 = UGameplayTagsManager::Get();
  pFVar7 = ::FName::FName(&local_res10,0x13,L"Effect.Damage.Type1",FNAME_Add);
  UGameplayTagsManager::RequestGameplayTag(pUVar6,(FName)&local_res18,(*pFVar7).ComparisonIndex);
  pUVar6 = UGameplayTagsManager::Get();
  pFVar7 = ::FName::FName(&local_res10,0x13,L"Effect.Damage.Type2",FNAME_Add);
  UGameplayTagsManager::RequestGameplayTag(pUVar6,(FName)&local_68,(*pFVar7).ComparisonIndex);
  pUVar6 = UGameplayTagsManager::Get();
  pFVar7 = ::FName::FName(&local_res10,0x13,L"GameplayCue.Burning",FNAME_Add);
  UGameplayTagsManager::RequestGameplayTag(pUVar6,(FName)&local_f8,(*pFVar7).ComparisonIndex);
  bVar13 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  local_178.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.GameplayTags.ArrayNum = 0;
  local_178.GameplayTags.ArrayMax = 0;
  local_178.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ParentTags.ArrayNum = 0;
  local_178.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::AddTag(&local_178,(FGameplayTag *)&local_res18);
  FGameplayTagContainer::AddTag(&local_178,(FGameplayTag *)&local_f8);
  local_d0.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.GameplayTags.ArrayNum = 0;
  local_d0.GameplayTags.ArrayMax = 0;
  local_d0.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ParentTags.ArrayNum = 0;
  local_d0.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::AddTag(&local_d0,(FGameplayTag *)&local_f8);
  FGameplayTagContainer::AddTag(&local_d0,(FGameplayTag *)&local_res18);
  local_138.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.GameplayTags.ArrayNum = 0;
  local_138.GameplayTags.ArrayMax = 0;
  local_138.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ParentTags.ArrayNum = 0;
  local_138.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::AddTag(&local_138,&local_68);
  FGameplayTagContainer::AddTag(&local_138,(FGameplayTag *)&local_f8);
  iVar1 = local_178.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_178.GameplayTags.ArrayNum;
  if (local_178.GameplayTags.ArrayNum == 0) {
LAB_146adc24b:
    bVar12 = true;
  }
  else {
    pFVar7 = (FName *)(local_178.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
    FVar11.Data = local_178.GameplayTags.AllocatorInstance.Data;
    FVar8.Data = local_178.GameplayTags.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar1) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        uVar14 = local_178.GameplayTags._8_8_ & 0xffffffff;
        FVar8.Data = local_178.GameplayTags.AllocatorInstance.Data;
      }
      if ((FName *)FVar11.Data == pFVar7) goto LAB_146adc24b;
      if ((FName *)FVar8.Data == (FName *)((longlong)FVar8.Data + (longlong)(int)uVar14 * 8)) break;
      pFVar10 = (FName *)FVar8.Data;
      while (*pFVar10 != *(FName *)FVar11.Data) {
        pFVar10 = pFVar10 + 1;
        if (pFVar10 == (FName *)((longlong)FVar8.Data + (longlong)(int)uVar14 * 8))
        goto LAB_146adc240;
      }
      FVar11.Data = FVar11.Data + 8;
    }
LAB_146adc240:
    bVar12 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"TagContainer == TagContainer",bVar12);
  iVar1 = local_d0.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_d0.GameplayTags.ArrayNum;
  if (local_178.GameplayTags.ArrayNum == local_d0.GameplayTags.ArrayNum) {
    if (local_d0.GameplayTags.ArrayNum != 0) {
      pFVar7 = (FName *)(local_d0.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
      FVar11.Data = local_d0.GameplayTags.AllocatorInstance.Data;
      iVar15 = local_178.GameplayTags.ArrayNum;
      while( true ) {
        if ((int)uVar14 != iVar1) {
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
          uVar14 = local_d0.GameplayTags._8_8_ & 0xffffffff;
          iVar15 = local_178.GameplayTags.ArrayNum;
        }
        if ((FName *)FVar11.Data == pFVar7) break;
        if ((FName *)local_178.GameplayTags.AllocatorInstance.Data ==
            (FName *)(local_178.GameplayTags.AllocatorInstance.Data + (longlong)iVar15 * 8))
        goto LAB_146adc26c;
        FVar8.Data = local_178.GameplayTags.AllocatorInstance.Data;
        while (*(FName *)FVar8.Data != *(FName *)FVar11.Data) {
          FVar8.Data = FVar8.Data + 8;
          if ((FName *)FVar8.Data ==
              (FName *)(local_178.GameplayTags.AllocatorInstance.Data + (longlong)iVar15 * 8)) {
            bVar12 = false;
            goto LAB_146adc2d1;
          }
        }
        FVar11.Data = FVar11.Data + 8;
      }
    }
    bVar12 = true;
  }
  else {
LAB_146adc26c:
    bVar12 = false;
  }
LAB_146adc2d1:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"TagContainer == ReverseTagContainer",bVar12);
  iVar1 = local_138.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_138.GameplayTags.ArrayNum;
  bVar12 = false;
  if (local_178.GameplayTags.ArrayNum == local_138.GameplayTags.ArrayNum) {
    bVar16 = bVar12;
    if (local_138.GameplayTags.ArrayNum != 0) {
      pFVar7 = (FName *)(local_138.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
      FVar11.Data = local_138.GameplayTags.AllocatorInstance.Data;
      iVar15 = local_178.GameplayTags.ArrayNum;
      while( true ) {
        if ((int)uVar14 != iVar1) {
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
          uVar14 = local_138.GameplayTags._8_8_ & 0xffffffff;
          iVar15 = local_178.GameplayTags.ArrayNum;
        }
        if ((FName *)FVar11.Data == pFVar7) break;
        if ((FName *)local_178.GameplayTags.AllocatorInstance.Data ==
            (FName *)(local_178.GameplayTags.AllocatorInstance.Data + (longlong)iVar15 * 8))
        goto LAB_146adc2ef;
        FVar8.Data = local_178.GameplayTags.AllocatorInstance.Data;
        while (*(FName *)FVar8.Data != *(FName *)FVar11.Data) {
          FVar8.Data = FVar8.Data + 8;
          if ((FName *)FVar8.Data ==
              (FName *)(local_178.GameplayTags.AllocatorInstance.Data + (longlong)iVar15 * 8)) {
            bVar16 = true;
            goto LAB_146adc35c;
          }
        }
        FVar11.Data = FVar11.Data + 8;
      }
    }
  }
  else {
LAB_146adc2ef:
    bVar16 = true;
  }
LAB_146adc35c:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"TagContainer != TagContainer2",bVar16)
  ;
  local_158.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.GameplayTags.ArrayNum = 0;
  local_158.GameplayTags.ArrayMax = 0;
  local_158.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ParentTags.ArrayNum = 0;
  local_158.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::operator=(&local_158,&local_178);
  iVar1 = local_178.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_178.GameplayTags.ArrayNum;
  if (local_158.GameplayTags.ArrayNum == local_178.GameplayTags.ArrayNum) {
    if (local_178.GameplayTags.ArrayNum != 0) {
      pFVar7 = (FName *)(local_178.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
      FVar11.Data = local_178.GameplayTags.AllocatorInstance.Data;
      iVar15 = local_158.GameplayTags.ArrayNum;
      while( true ) {
        if ((int)uVar14 != iVar1) {
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
          uVar14 = local_178.GameplayTags._8_8_ & 0xffffffff;
          iVar15 = local_158.GameplayTags.ArrayNum;
        }
        if ((FName *)FVar11.Data == pFVar7) break;
        if ((FName *)local_158.GameplayTags.AllocatorInstance.Data ==
            (FName *)(local_158.GameplayTags.AllocatorInstance.Data + (longlong)iVar15 * 8))
        goto LAB_146adc39d;
        FVar8.Data = local_158.GameplayTags.AllocatorInstance.Data;
        while (*(FName *)FVar8.Data != *(FName *)FVar11.Data) {
          FVar8.Data = FVar8.Data + 8;
          if ((FName *)FVar8.Data ==
              (FName *)(local_158.GameplayTags.AllocatorInstance.Data + (longlong)iVar15 * 8)) {
            bVar16 = false;
            goto LAB_146adc404;
          }
        }
        FVar11.Data = FVar11.Data + 8;
      }
    }
    bVar16 = true;
  }
  else {
LAB_146adc39d:
    bVar16 = false;
  }
LAB_146adc404:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"TagContainerCopy == TagContainer",bVar16);
  iVar1 = local_138.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_138.GameplayTags.ArrayNum;
  if (local_158.GameplayTags.ArrayNum == local_138.GameplayTags.ArrayNum) {
    if (local_138.GameplayTags.ArrayNum != 0) {
      pFVar7 = (FName *)(local_138.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
      FVar11.Data = local_138.GameplayTags.AllocatorInstance.Data;
      iVar15 = local_158.GameplayTags.ArrayNum;
      while( true ) {
        if ((int)uVar14 != iVar1) {
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
          uVar14 = local_138.GameplayTags._8_8_ & 0xffffffff;
          iVar15 = local_158.GameplayTags.ArrayNum;
        }
        if ((FName *)FVar11.Data == pFVar7) break;
        if ((FName *)local_158.GameplayTags.AllocatorInstance.Data ==
            (FName *)(local_158.GameplayTags.AllocatorInstance.Data + (longlong)iVar15 * 8))
        goto LAB_146adc422;
        FVar8.Data = local_158.GameplayTags.AllocatorInstance.Data;
        while (*(FName *)FVar8.Data != *(FName *)FVar11.Data) {
          FVar8.Data = FVar8.Data + 8;
          if ((FName *)FVar8.Data ==
              (FName *)(local_158.GameplayTags.AllocatorInstance.Data + (longlong)iVar15 * 8)) {
            bVar16 = true;
            goto LAB_146adc48c;
          }
        }
        FVar11.Data = FVar11.Data + 8;
      }
    }
    bVar16 = false;
  }
  else {
LAB_146adc422:
    bVar16 = true;
  }
LAB_146adc48c:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"TagContainerCopy != TagContainer2",bVar16);
  uVar2 = local_158.GameplayTags._8_8_;
  local_158.GameplayTags._8_8_ = local_158.GameplayTags._8_8_ & 0xffffffff00000000;
  if ((longlong)uVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&local_158,0,&local_158.GameplayTags.ArrayMax);
  }
  uVar2 = local_158.ParentTags._8_8_;
  local_158.ParentTags._8_8_ = local_158.ParentTags._8_8_ & 0xffffffff00000000;
  if ((longlong)uVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&local_158.ParentTags.AllocatorInstance,0,&local_158.ParentTags.ArrayMax);
  }
  FGameplayTagContainer::AppendTags(&local_158,&local_178);
  iVar1 = local_178.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_178.GameplayTags.ArrayNum;
  if (local_158.GameplayTags.ArrayNum == local_178.GameplayTags.ArrayNum) {
    if (local_178.GameplayTags.ArrayNum != 0) {
      pFVar7 = (FName *)(local_178.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
      FVar11.Data = local_178.GameplayTags.AllocatorInstance.Data;
      iVar15 = local_158.GameplayTags.ArrayNum;
      while( true ) {
        if ((int)uVar14 != iVar1) {
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
          uVar14 = local_178.GameplayTags._8_8_ & 0xffffffff;
          iVar15 = local_158.GameplayTags.ArrayNum;
        }
        if ((FName *)FVar11.Data == pFVar7) break;
        if ((FName *)local_158.GameplayTags.AllocatorInstance.Data ==
            (FName *)(local_158.GameplayTags.AllocatorInstance.Data + (longlong)iVar15 * 8))
        goto LAB_146adc51d;
        FVar8.Data = local_158.GameplayTags.AllocatorInstance.Data;
        while (*(FName *)FVar8.Data != *(FName *)FVar11.Data) {
          FVar8.Data = FVar8.Data + 8;
          if ((FName *)FVar8.Data ==
              (FName *)(local_158.GameplayTags.AllocatorInstance.Data + (longlong)iVar15 * 8)) {
            bVar16 = false;
            goto LAB_146adc584;
          }
        }
        FVar11.Data = FVar11.Data + 8;
      }
    }
    bVar16 = true;
  }
  else {
LAB_146adc51d:
    bVar16 = false;
  }
LAB_146adc584:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"TagContainerCopy == TagContainer",bVar16);
  iVar1 = local_138.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_138.GameplayTags.ArrayNum;
  if (local_158.GameplayTags.ArrayNum == local_138.GameplayTags.ArrayNum) {
    bVar16 = bVar12;
    if (local_138.GameplayTags.ArrayNum != 0) {
      pFVar7 = (FName *)(local_138.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
      FVar11.Data = local_138.GameplayTags.AllocatorInstance.Data;
      iVar15 = local_158.GameplayTags.ArrayNum;
      while( true ) {
        if ((int)uVar14 != iVar1) {
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
          uVar14 = local_138.GameplayTags._8_8_ & 0xffffffff;
          iVar15 = local_158.GameplayTags.ArrayNum;
        }
        if ((FName *)FVar11.Data == pFVar7) break;
        if ((FName *)local_158.GameplayTags.AllocatorInstance.Data ==
            (FName *)(local_158.GameplayTags.AllocatorInstance.Data + (longlong)iVar15 * 8))
        goto LAB_146adc5a2;
        FVar8.Data = local_158.GameplayTags.AllocatorInstance.Data;
        while (*(FName *)FVar8.Data != *(FName *)FVar11.Data) {
          FVar8.Data = FVar8.Data + 8;
          if ((FName *)FVar8.Data ==
              (FName *)(local_158.GameplayTags.AllocatorInstance.Data + (longlong)iVar15 * 8)) {
            bVar16 = true;
            goto LAB_146adc60c;
          }
        }
        FVar11.Data = FVar11.Data + 8;
      }
    }
  }
  else {
LAB_146adc5a2:
    bVar16 = true;
  }
LAB_146adc60c:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"TagContainerCopy != TagContainer2",bVar16);
  iVar1 = local_138.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_138.GameplayTags.ArrayNum;
  if (local_138.GameplayTags.ArrayNum != 0) {
    pFVar7 = (FName *)(local_138.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
    FVar11.Data = local_138.GameplayTags.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar1) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        uVar14 = local_138.GameplayTags._8_8_ & 0xffffffff;
      }
      if ((FName *)FVar11.Data == pFVar7) break;
      if ((FName *)local_178.GameplayTags.AllocatorInstance.Data !=
          (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                   (longlong)local_178.GameplayTags.ArrayNum * 8)) {
        FVar8.Data = local_178.GameplayTags.AllocatorInstance.Data;
        do {
          if (*(FName *)FVar8.Data == *(FName *)FVar11.Data) goto LAB_146adc69a;
          FVar8.Data = FVar8.Data + 8;
        } while ((FName *)FVar8.Data !=
                 (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                          (longlong)local_178.GameplayTags.ArrayNum * 8));
      }
      if ((FName *)local_178.ParentTags.AllocatorInstance.Data !=
          (FName *)(local_178.ParentTags.AllocatorInstance.Data +
                   (longlong)local_178.ParentTags.ArrayNum * 8)) {
        FVar8.Data = local_178.ParentTags.AllocatorInstance.Data;
        do {
          if (*(FName *)FVar8.Data == *(FName *)FVar11.Data) goto LAB_146adc69a;
          FVar8.Data = FVar8.Data + 8;
        } while ((FName *)FVar8.Data !=
                 (FName *)(local_178.ParentTags.AllocatorInstance.Data +
                          (longlong)local_178.ParentTags.ArrayNum * 8));
      }
      FVar11.Data = FVar11.Data + 8;
    }
  }
  bVar16 = false;
LAB_146adc6a3:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"TagContainer.HasAny(TagContainer2)",bVar16);
  iVar1 = local_138.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_138.GameplayTags.ArrayNum;
  if (local_138.GameplayTags.ArrayNum != 0) {
    pFVar7 = (FName *)(local_138.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
    FVar11.Data = local_138.GameplayTags.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar1) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        uVar14 = local_138.GameplayTags._8_8_ & 0xffffffff;
      }
      if ((FName *)FVar11.Data == pFVar7) break;
      if ((FName *)local_178.GameplayTags.AllocatorInstance.Data !=
          (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                   (longlong)local_178.GameplayTags.ArrayNum * 8)) {
        FVar8.Data = local_178.GameplayTags.AllocatorInstance.Data;
        do {
          if (*(FName *)FVar8.Data == *(FName *)FVar11.Data) {
            bVar16 = true;
            goto LAB_146adc71d;
          }
          FVar8.Data = FVar8.Data + 8;
        } while ((FName *)FVar8.Data !=
                 (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                          (longlong)local_178.GameplayTags.ArrayNum * 8));
      }
      FVar11.Data = FVar11.Data + 8;
    }
  }
  bVar16 = false;
LAB_146adc71d:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"TagContainer.HasAnyExact(TagContainer2)",bVar16);
  iVar1 = local_138.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_138.GameplayTags.ArrayNum;
  if (local_138.GameplayTags.ArrayNum == 0) {
LAB_146adc7b1:
    bVar16 = false;
  }
  else {
    pFVar7 = (FName *)(local_138.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
    FVar11.Data = local_138.GameplayTags.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar1) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        uVar14 = local_138.GameplayTags._8_8_ & 0xffffffff;
      }
      if ((FName *)FVar11.Data == pFVar7) goto LAB_146adc7b1;
      if ((FName *)local_178.GameplayTags.AllocatorInstance.Data !=
          (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                   (longlong)local_178.GameplayTags.ArrayNum * 8)) {
        FVar8.Data = local_178.GameplayTags.AllocatorInstance.Data;
        do {
          if (*(FName *)FVar8.Data == *(FName *)FVar11.Data) goto LAB_146adc7ab;
          FVar8.Data = FVar8.Data + 8;
        } while ((FName *)FVar8.Data !=
                 (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                          (longlong)local_178.GameplayTags.ArrayNum * 8));
      }
      if ((FName *)local_178.ParentTags.AllocatorInstance.Data ==
          (FName *)(local_178.ParentTags.AllocatorInstance.Data +
                   (longlong)local_178.ParentTags.ArrayNum * 8)) break;
      FVar8.Data = local_178.ParentTags.AllocatorInstance.Data;
      while (*(FName *)FVar8.Data != *(FName *)FVar11.Data) {
        FVar8.Data = FVar8.Data + 8;
        if ((FName *)FVar8.Data ==
            (FName *)(local_178.ParentTags.AllocatorInstance.Data +
                     (longlong)local_178.ParentTags.ArrayNum * 8)) goto LAB_146adc7a5;
      }
LAB_146adc7ab:
      FVar11.Data = FVar11.Data + 8;
    }
LAB_146adc7a5:
    bVar16 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!TagContainer.HasAll(TagContainer2)",bVar16);
  iVar1 = local_138.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_138.GameplayTags.ArrayNum;
  if (local_138.GameplayTags.ArrayNum == 0) {
LAB_146adc82b:
    bVar16 = false;
  }
  else {
    pFVar7 = (FName *)(local_138.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
    FVar11.Data = local_138.GameplayTags.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar1) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        uVar14 = local_138.GameplayTags._8_8_ & 0xffffffff;
      }
      if ((FName *)FVar11.Data == pFVar7) goto LAB_146adc82b;
      if ((FName *)local_178.GameplayTags.AllocatorInstance.Data ==
          (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                   (longlong)local_178.GameplayTags.ArrayNum * 8)) break;
      FVar8.Data = local_178.GameplayTags.AllocatorInstance.Data;
      while (*(FName *)FVar8.Data != *(FName *)FVar11.Data) {
        FVar8.Data = FVar8.Data + 8;
        if ((FName *)FVar8.Data ==
            (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                     (longlong)local_178.GameplayTags.ArrayNum * 8)) goto LAB_146adc81f;
      }
      FVar11.Data = FVar11.Data + 8;
    }
LAB_146adc81f:
    bVar16 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!TagContainer.HasAllExact(TagContainer2)",bVar16);
  iVar1 = local_158.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_158.GameplayTags.ArrayNum;
  bVar16 = true;
  if (local_158.GameplayTags.ArrayNum == 0) {
LAB_146adc8c1:
    bVar5 = true;
  }
  else {
    pFVar7 = (FName *)(local_158.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
    FVar11.Data = local_158.GameplayTags.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar1) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        uVar14 = local_158.GameplayTags._8_8_ & 0xffffffff;
      }
      if ((FName *)FVar11.Data == pFVar7) goto LAB_146adc8c1;
      if ((FName *)local_178.GameplayTags.AllocatorInstance.Data !=
          (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                   (longlong)local_178.GameplayTags.ArrayNum * 8)) {
        FVar8.Data = local_178.GameplayTags.AllocatorInstance.Data;
        do {
          if (*(FName *)FVar8.Data == *(FName *)FVar11.Data) goto LAB_146adc8bb;
          FVar8.Data = FVar8.Data + 8;
        } while ((FName *)FVar8.Data !=
                 (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                          (longlong)local_178.GameplayTags.ArrayNum * 8));
      }
      if ((FName *)local_178.ParentTags.AllocatorInstance.Data ==
          (FName *)(local_178.ParentTags.AllocatorInstance.Data +
                   (longlong)local_178.ParentTags.ArrayNum * 8)) break;
      FVar8.Data = local_178.ParentTags.AllocatorInstance.Data;
      while (*(FName *)FVar8.Data != *(FName *)FVar11.Data) {
        FVar8.Data = FVar8.Data + 8;
        if ((FName *)FVar8.Data ==
            (FName *)(local_178.ParentTags.AllocatorInstance.Data +
                     (longlong)local_178.ParentTags.ArrayNum * 8)) goto LAB_146adc8b6;
      }
LAB_146adc8bb:
      FVar11.Data = FVar11.Data + 8;
    }
LAB_146adc8b6:
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"TagContainer.HasAll(TagContainerCopy)",bVar5);
  iVar1 = local_158.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_158.GameplayTags.ArrayNum;
  if (local_158.GameplayTags.ArrayNum == 0) {
LAB_146adc93a:
    bVar5 = true;
  }
  else {
    pFVar7 = (FName *)(local_158.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
    FVar11.Data = local_158.GameplayTags.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar1) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        uVar14 = local_158.GameplayTags._8_8_ & 0xffffffff;
      }
      if ((FName *)FVar11.Data == pFVar7) goto LAB_146adc93a;
      if ((FName *)local_178.GameplayTags.AllocatorInstance.Data ==
          (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                   (longlong)local_178.GameplayTags.ArrayNum * 8)) break;
      FVar8.Data = local_178.GameplayTags.AllocatorInstance.Data;
      while (*(FName *)FVar8.Data != *(FName *)FVar11.Data) {
        FVar8.Data = FVar8.Data + 8;
        if ((FName *)FVar8.Data ==
            (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                     (longlong)local_178.GameplayTags.ArrayNum * 8)) goto LAB_146adc92f;
      }
      FVar11.Data = FVar11.Data + 8;
    }
LAB_146adc92f:
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"TagContainer.HasAllExact(TagContainerCopy)",bVar5);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"TagContainer.HasAll(EmptyContainer)",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"TagContainer.HasAllExact(EmptyContainer)",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!TagContainer.HasAny(EmptyContainer)",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!TagContainer.HasAnyExact(EmptyContainer)",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"EmptyContainer.HasAll(EmptyContainer)",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"EmptyContainer.HasAllExact(EmptyContainer)",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!EmptyContainer.HasAny(EmptyContainer)",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!EmptyContainer.HasAnyExact(EmptyContainer)",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!EmptyContainer.HasAll(TagContainer)",
             local_178.GameplayTags.ArrayNum != 0 &&
             (FName *)local_178.GameplayTags.AllocatorInstance.Data !=
             (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                      (longlong)local_178.GameplayTags.ArrayNum * 8));
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!EmptyContainer.HasAllExact(TagContainer)",
             local_178.GameplayTags.ArrayNum != 0 &&
             (FName *)local_178.GameplayTags.AllocatorInstance.Data !=
             (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                      (longlong)local_178.GameplayTags.ArrayNum * 8));
  iVar1 = local_178.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_178.GameplayTags.ArrayNum;
  if (local_178.GameplayTags.ArrayNum != 0) {
    pFVar7 = (FName *)(local_178.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
    FVar11.Data = local_178.GameplayTags.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar1) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        uVar14 = local_178.GameplayTags._8_8_ & 0xffffffff;
      }
      if ((FName *)FVar11.Data == pFVar7) break;
      FVar11.Data = FVar11.Data + 8;
    }
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!EmptyContainer.HasAny(TagContainer)",true);
  iVar1 = local_178.GameplayTags.ArrayNum;
  uVar14 = (ulonglong)local_178.GameplayTags.ArrayNum;
  if (local_178.GameplayTags.ArrayNum != 0) {
    pFVar7 = (FName *)(local_178.GameplayTags.AllocatorInstance.Data + uVar14 * 8);
    FVar11.Data = local_178.GameplayTags.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar1) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        uVar14 = local_178.GameplayTags._8_8_ & 0xffffffff;
      }
      if ((FName *)FVar11.Data == pFVar7) break;
      FVar11.Data = FVar11.Data + 8;
    }
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!EmptyContainer.HasAnyExact(TagContainer)",true);
  if (local_res20 != (FName)0x0) {
    for (FVar11.Data = local_178.GameplayTags.AllocatorInstance.Data; bVar5 = bVar16,
        (FName *)FVar11.Data !=
        (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_178.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_res20) goto LAB_146adcb3b;
    }
    for (FVar11.Data = local_178.ParentTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_178.ParentTags.AllocatorInstance.Data +
                 (longlong)local_178.ParentTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_res20) goto LAB_146adcb3b;
    }
  }
  bVar5 = false;
LAB_146adcb3b:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"TagContainer.HasTag(EffectDamageTag)",bVar5);
  if (local_res20 != (FName)0x0) {
    for (FVar11.Data = local_178.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_178.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      bVar5 = bVar12;
      if (*(FName *)FVar11.Data == local_res20) goto LAB_146adcb85;
    }
  }
  bVar5 = true;
LAB_146adcb85:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!TagContainer.HasTagExact(EffectDamageTag)",bVar5);
  FVar3 = local_b0;
  if (local_b0 != (FName)0x0) {
    for (FVar11.Data = local_178.GameplayTags.AllocatorInstance.Data; bVar5 = bVar12,
        (FName *)FVar11.Data !=
        (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_178.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_b0) goto LAB_146adcbea;
    }
    for (FVar11.Data = local_178.ParentTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_178.ParentTags.AllocatorInstance.Data +
                 (longlong)local_178.ParentTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_b0) goto LAB_146adcbea;
    }
  }
  bVar5 = true;
LAB_146adcbea:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"!TagContainer.HasTag(EmptyTag)",bVar5)
  ;
  bVar5 = false;
  if (FVar3 != (FName)0x0) {
    for (FVar11.Data = local_178.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_178.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_178.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      bVar4 = bVar5;
      if (*(FName *)FVar11.Data == FVar3) goto LAB_146adcc26;
    }
  }
  bVar4 = true;
LAB_146adcc26:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!TagContainer.HasTagExact(EmptyTag)",bVar4);
  local_118.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.GameplayTags.ArrayNum = 0;
  local_118.GameplayTags.ArrayMax = 0;
  local_118.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ParentTags.ArrayNum = 0;
  local_118.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::AddTag(&local_118,(FGameplayTag *)&local_res20);
  bVar4 = FGameplayTag::MatchesAny((FGameplayTag *)&local_res18,&local_118);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"EffectDamage1Tag.MatchesAny(FGameplayTagContainer(EffectDamageTag))",bVar4);
  if (local_118.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.ParentTags.AllocatorInstance.Data);
  }
  if (local_118.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.GameplayTags.AllocatorInstance.Data);
  }
  local_118.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.GameplayTags.ArrayNum = 0;
  local_118.GameplayTags.ArrayMax = 0;
  local_118.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ParentTags.ArrayNum = 0;
  local_118.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::AddTag(&local_118,(FGameplayTag *)&local_res20);
  if (local_118.GameplayTags.ArrayNum != 0) {
    for (FVar11.Data = local_118.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_118.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_118.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_res18) goto LAB_146adccf5;
    }
  }
  bVar5 = true;
LAB_146adccf5:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"!EffectDamage1Tag.MatchesAnyExact(FGameplayTagContainer(EffectDamageTag))",bVar5);
  if (local_118.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.ParentTags.AllocatorInstance.Data);
  }
  if ((FName *)local_118.GameplayTags.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_118.GameplayTags.AllocatorInstance.Data);
  }
  bVar5 = FGameplayTag::MatchesAny((FGameplayTag *)&local_res18,&local_178);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"EffectDamage1Tag.MatchesAny(TagContainer)",bVar5);
  FGameplayTagContainer::FilterExact(&local_178,&local_f0,&local_138);
  if (local_f8 != (FName)0x0) {
    for (FVar11.Data = local_f0.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_f0.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_f0.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      bVar5 = bVar16;
      if (*(FName *)FVar11.Data == local_f8) goto LAB_146adcd86;
    }
  }
  bVar5 = false;
LAB_146adcd86:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FilteredTagContainer.HasTagExact(CueTag)",bVar5);
  if (local_res18 != (FName)0x0) {
    for (FVar11.Data = local_f0.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_f0.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_f0.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_res18) goto LAB_146adcdc7;
    }
  }
  bVar12 = true;
LAB_146adcdc7:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!FilteredTagContainer.HasTagExact(EffectDamage1Tag)",
             bVar12);
  local_118.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.GameplayTags.ArrayNum = 0;
  local_118.GameplayTags.ArrayMax = 0;
  local_118.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ParentTags.ArrayNum = 0;
  local_118.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::AddTag(&local_118,(FGameplayTag *)&local_res20);
  pFVar9 = FGameplayTagContainer::Filter(&local_178,&local_60,&local_118);
  FGameplayTagContainer::operator=(&local_f0,pFVar9);
  if (local_60.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.ParentTags.AllocatorInstance.Data);
  }
  if (local_60.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.GameplayTags.AllocatorInstance.Data);
  }
  if (local_118.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.ParentTags.AllocatorInstance.Data);
  }
  if (local_118.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.GameplayTags.AllocatorInstance.Data);
  }
  if (local_f8 != (FName)0x0) {
    for (FVar11.Data = local_f0.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_f0.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_f0.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      bVar12 = bVar13;
      if (*(FName *)FVar11.Data == local_f8) goto LAB_146adce7b;
    }
  }
  bVar12 = true;
LAB_146adce7b:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!FilteredTagContainer.HasTagExact(CueTag)",bVar12);
  if (local_res18 != (FName)0x0) {
    for (FVar11.Data = local_f0.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_f0.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_f0.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      bVar12 = bVar16;
      if (*(FName *)FVar11.Data == local_res18) goto LAB_146adcebc;
    }
  }
  bVar12 = false;
LAB_146adcebc:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FilteredTagContainer.HasTagExact(EffectDamage1Tag)",
             bVar12);
  FGameplayTagContainer::Reset(&local_f0,0);
  FGameplayTagContainer::AppendMatchingTags(&local_f0,&local_178,&local_138);
  if (local_f8 != (FName)0x0) {
    for (FVar11.Data = local_f0.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_f0.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_f0.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      bVar12 = bVar16;
      if (*(FName *)FVar11.Data == local_f8) goto LAB_146adcf18;
    }
  }
  bVar12 = false;
LAB_146adcf18:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FilteredTagContainer.HasTagExact(CueTag)",bVar12);
  if (local_res18 != (FName)0x0) {
    for (FVar11.Data = local_f0.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_f0.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_f0.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      bVar12 = bVar13;
      if (*(FName *)FVar11.Data == local_res18) goto LAB_146adcf59;
    }
  }
  bVar12 = true;
LAB_146adcf59:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!FilteredTagContainer.HasTagExact(EffectDamage1Tag)",
             bVar12);
  FGameplayTag::GetSingleTagContainer((FGameplayTag *)&local_res18,&local_88);
  FGameplayTag::GetGameplayTagParents((FGameplayTag *)&local_res18,&local_a8);
  if (local_res18 != (FName)0x0) {
    for (FVar11.Data = local_88.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_88.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_88.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_res18) {
        bVar12 = true;
        goto LAB_146adcfba;
      }
    }
  }
  bVar12 = false;
LAB_146adcfba:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"SingleTagContainer.HasTagExact(EffectDamage1Tag)",bVar12)
  ;
  if (local_res20 != (FName)0x0) {
    for (FVar11.Data = local_88.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_88.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_88.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_res20) goto LAB_146add025;
    }
    for (FVar11.Data = local_88.ParentTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_88.ParentTags.AllocatorInstance.Data +
                 (longlong)local_88.ParentTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_res20) goto LAB_146add025;
    }
  }
  bVar16 = false;
LAB_146add025:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"SingleTagContainer.HasTag(EffectDamageTag)",bVar16);
  bVar12 = true;
  if (local_res20 != (FName)0x0) {
    for (FVar11.Data = local_88.GameplayTags.AllocatorInstance.Data;
        (bVar12 = true,
        (FName *)FVar11.Data !=
        (FName *)(local_88.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_88.GameplayTags.ArrayNum * 8) &&
        (bVar12 = bVar13, *(FName *)FVar11.Data != local_res20)); FVar11.Data = FVar11.Data + 8) {
    }
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"!SingleTagContainer.HasTagExact(EffectDamageTag)",bVar12)
  ;
  if (local_res18 != (FName)0x0) {
    for (FVar11.Data = local_a8.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_a8.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_a8.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_res18) {
        bVar13 = true;
        goto LAB_146add136;
      }
    }
  }
  bVar13 = false;
LAB_146add136:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"ParentContainer.HasTagExact(EffectDamage1Tag)",bVar13);
  if (local_res20 != (FName)0x0) {
    for (FVar11.Data = local_a8.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_a8.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_a8.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_res20) goto LAB_146add2cc;
    }
    for (FVar11.Data = local_a8.ParentTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_a8.ParentTags.AllocatorInstance.Data +
                 (longlong)local_a8.ParentTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_res20) goto LAB_146add2cc;
    }
  }
  bVar13 = false;
LAB_146add19a:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"ParentContainer.HasTag(EffectDamageTag)",bVar13);
  if (local_res20 != (FName)0x0) {
    for (FVar11.Data = local_a8.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar11.Data !=
        (FName *)(local_a8.GameplayTags.AllocatorInstance.Data +
                 (longlong)local_a8.GameplayTags.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
      if (*(FName *)FVar11.Data == local_res20) {
        bVar13 = true;
        goto LAB_146add1db;
      }
    }
  }
  bVar13 = false;
LAB_146add1db:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"ParentContainer.HasTagExact(EffectDamageTag)",bVar13);
  if (local_a8.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ParentTags.AllocatorInstance.Data);
  }
  if (local_a8.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.GameplayTags.AllocatorInstance.Data);
  }
  if ((FName *)local_88.ParentTags.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_88.ParentTags.AllocatorInstance.Data);
  }
  if ((FName *)local_88.GameplayTags.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_88.GameplayTags.AllocatorInstance.Data);
  }
  if (local_f0.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.ParentTags.AllocatorInstance.Data);
  }
  if ((FName *)local_f0.GameplayTags.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_f0.GameplayTags.AllocatorInstance.Data);
  }
  if (local_158.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.ParentTags.AllocatorInstance.Data);
  }
  if ((FName *)local_158.GameplayTags.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_158.GameplayTags.AllocatorInstance.Data);
  }
  if (local_138.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ParentTags.AllocatorInstance.Data);
  }
  if ((FName *)local_138.GameplayTags.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_138.GameplayTags.AllocatorInstance.Data);
  }
  if (local_d0.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.ParentTags.AllocatorInstance.Data);
  }
  if ((FName *)local_d0.GameplayTags.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_d0.GameplayTags.AllocatorInstance.Data);
  }
  if ((FName *)local_178.ParentTags.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_178.ParentTags.AllocatorInstance.Data);
  }
  if ((FName *)local_178.GameplayTags.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_178.GameplayTags.AllocatorInstance.Data);
  }
  return;
LAB_146adc69a:
  bVar16 = true;
  goto LAB_146adc6a3;
LAB_146add2cc:
  bVar13 = true;
  goto LAB_146add19a;
}

