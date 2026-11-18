// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// ~IConsoleManager @ 141621460

void __thiscall IConsoleManager::~IConsoleManager(IConsoleManager *this)

{
  *this = (IConsoleManager)&___7IConsoleManager__6B_;
  return;
}

// operator() @ 141623110

void __thiscall
`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>::operator()
          (void *this,wchar_t *param_1,IConsoleObject *param_2)

{
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *this_00;
  char cVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  TPairInitializer<FName_&&,FConfigValue_&&> local_res18;
  FConfigValue **local_38;
  FConfigValue *local_30;
  FConfigValue local_28;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
  if (cVar1 < '\0') {
    this_00 = *(TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                **)((longlong)this + 8);
    ::FString::FString(&local_28.SavedValue,*(FString **)this);
    local_28.ValueType = Combined;
    local_28.bExpandOnDemand = false;
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_28.SavedValue.Data.ArrayNum != 0) {
      FVar3.Data = local_28.SavedValue.Data.AllocatorInstance.Data;
    }
    local_28.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar3.Data,0);
    bVar2 = FConfigValue::NeedsToExpandValue(&local_28);
    local_28.bExpandOnDemand = bVar2;
    ::FName::FName((FName *)&local_res18.Value,param_1);
    local_38 = &local_res18.Value;
    local_30 = &local_28;
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&&,FConfigValue_&&>_>(this_00,&local_res18,(bool *)&local_38);
    if (local_28.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SavedValue.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Get @ 14163dfd0

IConsoleManager * __cdecl IConsoleManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  IConsoleManager *pIVar3;
  
  if (((Singleton == (IConsoleManager *)0x0) &&
      (SetupSingleton(), Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IConsoleManager *)(*pcVar1)();
    return pIVar3;
  }
  return Singleton;
}

// SetupSingleton @ 14165fc00

void __cdecl IConsoleManager::SetupSingleton(void)

{
  code *pcVar1;
  bool bVar2;
  IConsoleManager *pIVar3;
  IConsoleManager *pIVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if ((Singleton != (IConsoleManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0xd1c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name3357,L"EngineMisc/ConsoleCommands");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name3357,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name3357,true);
  if (Singleton == (IConsoleManager *)0x0) {
    pIVar3 = ::operator_new(0x200);
    pIVar4 = (IConsoleManager *)0x0;
    if (pIVar3 != (IConsoleManager *)0x0) {
      pIVar3[1] = (IConsoleManager)0x0;
      pIVar3[2] = (IConsoleManager)0x0;
      pIVar3[5] = (IConsoleManager)0x0;
      *pIVar3 = (IConsoleManager)&___7FConsoleManager__6B_;
      *(undefined4 *)(pIVar3 + 6) = 0;
      *(undefined4 *)&pIVar3[6].field_0x4 = 0x80;
      *(undefined4 *)(pIVar3 + 7) = 0xffffffff;
      *(undefined4 *)&pIVar3[7].field_0x4 = 0;
      pIVar3[9] = (IConsoleManager)0x0;
      *(undefined4 *)(pIVar3 + 10) = 0;
      pIVar3[0xc] = (IConsoleManager)0x0;
      pIVar3[0xd] = (IConsoleManager)0x0;
      pIVar3[0x10] = (IConsoleManager)0x0;
      *(undefined1 *)(pIVar3 + 0xb) = 0;
      *(undefined4 *)(pIVar3 + 0x11) = 0;
      *(undefined4 *)&pIVar3[0x11].field_0x4 = 0x80;
      *(undefined4 *)(pIVar3 + 0x12) = 0xffffffff;
      *(undefined4 *)&pIVar3[0x12].field_0x4 = 0;
      pIVar3[0x14] = (IConsoleManager)0x0;
      *(undefined4 *)(pIVar3 + 0x15) = 0;
      pIVar3[0x16] = (IConsoleManager)0x0;
      pIVar3[0x17] = (IConsoleManager)0x0;
      pIVar3[0x18] = (IConsoleManager)0x0;
      pIVar3[0x19] = (IConsoleManager)0x0;
      pIVar3[0x1a] = (IConsoleManager)0x0;
      pIVar3[0x1b] = (IConsoleManager)0x2;
      pIVar3[0x1c] = (IConsoleManager)0x0;
      pIVar3[0x1d] = (IConsoleManager)0x0;
      pIVar3[0x1e] = (IConsoleManager)0x0;
      pIVar3[0x1f] = (IConsoleManager)0x2;
      pIVar3[0x20] = (IConsoleManager)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar3 + 0x21),4000);
      pIVar3[0x26] = (IConsoleManager)0x0;
      pIVar3[0x27] = (IConsoleManager)0x0;
      pIVar3[0x2a] = (IConsoleManager)0x0;
      *(undefined4 *)(pIVar3 + 0x2b) = 0;
      *(undefined4 *)&pIVar3[0x2b].field_0x4 = 0x80;
      *(undefined4 *)(pIVar3 + 0x2c) = 0xffffffff;
      *(undefined4 *)&pIVar3[0x2c].field_0x4 = 0;
      pIVar3[0x2e] = (IConsoleManager)0x0;
      *(undefined4 *)(pIVar3 + 0x2f) = 0;
      pIVar3[0x30] = (IConsoleManager)0x0;
      pIVar3[0x31] = (IConsoleManager)0x0;
      pIVar3[0x34] = (IConsoleManager)0x0;
      *(undefined4 *)(pIVar3 + 0x35) = 0;
      *(undefined4 *)&pIVar3[0x35].field_0x4 = 0x80;
      *(undefined4 *)(pIVar3 + 0x36) = 0xffffffff;
      *(undefined4 *)&pIVar3[0x36].field_0x4 = 0;
      pIVar3[0x38] = (IConsoleManager)0x0;
      *(undefined4 *)(pIVar3 + 0x39) = 0;
      *(undefined1 *)(pIVar3 + 0x3a) = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar3 + 0x3b),4000);
      pIVar4 = pIVar3;
    }
    Singleton = pIVar4;
    CreateConsoleVariables();
    if ((Singleton == (IConsoleManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                           ,0xd23,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// VisitPlatformCVarsForEmulation @ 141669630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

bool __cdecl
IConsoleManager::VisitPlatformCVarsForEmulation
          (FName param_1,FString *param_2,
          TFunctionRef<void___cdecl(FString_const_&,FString_const_&,EConsoleVariableFlags)> *param_3
          )

{
  ulonglong uVar1;
  uint uVar2;
  EConsoleVariableFlags EVar3;
  FName _Src;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  EConsoleVariableFlags EVar11;
  FString *pFVar12;
  FName *pFVar13;
  FConfigCacheIni *this;
  FConfigSection *pFVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  ulong64 uVar16;
  FString *pFVar17;
  longlong *plVar18;
  IConsoleManager *pIVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  byte bVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  ForAnyElementType FVar25;
  wchar_t *pwVar26;
  longlong lVar27;
  uint uVar28;
  EConsoleVariableFlags EVar29;
  void *_Src_00;
  uint *puVar30;
  FName local_res8 [2];
  undefined1 auStackY_658 [32];
  undefined1 local_617;
  undefined1 local_616 [2];
  uint local_614;
  FString local_610;
  undefined1 local_600 [16];
  FString local_5f0;
  FConfigSection *local_5e0;
  FString local_5d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5c8;
  FDelegateAllocation local_5c0;
  FConfigCacheIni *local_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  EConsoleVariableFlags EStack_590;
  EConsoleVariableFlags EStack_58c;
  int local_588;
  undefined4 uStack_584;
  int iStack_580;
  undefined4 uStack_57c;
  FConfigSection *local_578;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_570;
  int local_550;
  undefined4 uStack_54c;
  int local_548 [2];
  EConsoleVariableFlags local_540;
  int local_538;
  int local_534;
  EConsoleVariableFlags local_530;
  EConsoleVariableFlags local_528;
  FString local_520;
  FString local_510;
  FString *local_500;
  FString *local_4f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4f0;
  longlong lStack_4d0;
  int local_4c8;
  undefined4 uStack_4c4;
  FConfigSection *local_4c0;
  longlong lStack_4b8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4b0;
  uint uStack_4a8;
  int iStack_4a4;
  ulonglong uStack_4a0;
  int local_498;
  undefined4 uStack_494;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_470;
  TPairInitializer<FName_&&,FConfigValue_&&> local_450;
  FString *local_440;
  int local_438;
  FString *local_430;
  undefined1 local_428 [12];
  uint uStack_41c;
  TBitArray<FDefaultBitArrayAllocator> *local_418;
  undefined8 uStack_410;
  longlong local_408;
  int iStack_400;
  undefined4 uStack_3fc;
  FConfigSection *local_3f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3f0;
  undefined8 uStack_3d0;
  FName *local_3c8;
  FConfigValue *local_3c0;
  FString local_3b8;
  FDestructionSentinel local_3a8;
  FDestructionSentinel local_390;
  FDelegateAllocation *local_378;
  FName local_370;
  FConfigValue local_368;
  FString local_348;
  wchar_t *local_338;
  undefined4 local_330;
  wchar_t *local_328;
  undefined4 local_320;
  wchar_t *local_318;
  undefined4 local_310;
  wchar_t *local_308;
  undefined4 local_300;
  wchar_t *local_2f8;
  undefined4 local_2f0;
  wchar_t *local_2e8;
  undefined4 local_2e0;
  wchar_t *local_2d8;
  undefined4 local_2d0;
  wchar_t *local_2c8;
  undefined4 local_2c0;
  wchar_t *local_2b8;
  undefined4 local_2b0;
  FString local_2a8;
  FString local_298;
  FString local_288;
  void *local_278 [2];
  void *local_268 [2];
  void *local_258 [2];
  FName local_248;
  FString local_240;
  FString local_230;
  FConfigSection *local_220;
  longlong lStack_218;
  TBitArray<FDefaultBitArrayAllocator> *local_210;
  uint uStack_208;
  int iStack_204;
  ulonglong local_200;
  undefined8 uStack_1f8;
  FConfigSection *local_1f0;
  longlong lStack_1e8;
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  uint uStack_1d8;
  int iStack_1d4;
  ulonglong local_1d0;
  undefined8 uStack_1c8;
  TRangedForIterator local_1c0;
  FReadAccessScope local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_178;
  undefined4 local_13c;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
  local_138;
  undefined1 local_e8 [32];
  uint *local_c8;
  EConsoleVariableFlags local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [40];
  int local_70;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_658;
  uVar28 = 0;
  local_614 = 0;
  local_res8[0] = param_1;
  local_4f8 = param_2;
  pFVar12 = ::FName::ToString(local_res8,&local_230);
  if ((pFVar12->Data).ArrayNum == 0) {
    pwVar26 = L"";
  }
  else {
    pwVar26 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  pFVar13 = ::FName::FName(&local_248,pwVar26);
  this = FConfigCacheIni::ForPlatform(*pFVar13);
  local_5b0 = this;
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if (this == (FConfigCacheIni *)0x0) {
    bVar5 = false;
  }
  else {
    local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150649c18;
    local_338 = L"/Script/Engine.RendererSettings";
    pFVar12 = &local_348;
    local_348.Data.ArrayNum = 0x5000000;
    local_328 = L"/Script/Engine.RendererOverrideSettings";
    local_318 = L"/Script/Engine.StreamingSettings";
    local_308 = L"/Script/Engine.GarbageCollectionSettings";
    local_2f8 = L"/Script/Engine.NetworkSettings";
    local_2e8 = L"_Scalability";
    local_2c8 = L"Startup";
    local_2b8 = L"ConsoleVariables";
    local_330 = 0x4000000;
    local_320 = 0x4000000;
    local_310 = 0x4000000;
    local_300 = 0x4000000;
    local_2f0 = 0x4000000;
    local_2e0 = 0x7000000;
    local_2d8 = L"_NamedDeviceProfile";
    local_2d0 = 0x7000000;
    local_2c0 = 0xa000000;
    local_2b0 = 0x5000000;
    local_138.Elements._0_8_ = 0;
    local_138.Elements._8_8_ = 0;
    local_138.Elements._32_8_ = 0;
    local_138.Elements._40_4_ = 0;
    local_138.Elements._44_4_ = 0x80;
    local_138.Elements._48_4_ = 0xffffffff;
    local_138.Elements._52_4_ = 0;
    local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_138.HashSize = 0;
    local_500 = pFVar12;
    do {
      pFVar24 = (pFVar12->Data).AllocatorInstance.Data;
      bVar5 = false;
      local_500 = pFVar12;
      iVar9 = wcscmp((wchar_t *)pFVar24,L"_NamedDeviceProfile");
      iVar10 = wcscmp((wchar_t *)pFVar24,L"_Scalability");
      if (iVar9 == 0) {
        iVar10 = (param_2->Data).ArrayNum;
        iVar9 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar9 = 0;
        }
        if (iVar9 != 0) {
          bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                             &FCoreDelegates::GatherDeviceProfileCVars);
          if (bVar5) {
            pFVar14 = ::operator_new(0xf8);
            if (pFVar14 == (FConfigSection *)0x0) {
              pFVar14 = (FConfigSection *)0x0;
            }
            else {
              pFVar14 = FConfigSection::FConfigSection(pFVar14);
            }
            bVar5 = true;
            local_5e0 = pFVar14;
            if (5 < (byte)LogConsoleManager._0_1_) {
              ::FName::ToString(local_res8,&local_240);
              UE::Logging::Private::BasicLog<6>
                        (&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
              if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_240.Data.AllocatorInstance.Data);
              }
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &FCoreDelegates::GatherDeviceProfileCVars,&local_190);
            plVar18 = (longlong *)0x0;
            if (FCoreDelegates::GatherDeviceProfileCVars._16_4_ != 0) {
              plVar18 = (longlong *)FCoreDelegates::GatherDeviceProfileCVars._8_8_;
            }
            (**(code **)(*plVar18 + 0x60))(plVar18,local_98,param_2);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_190);
            local_490.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
            local_490._padding_._0_4_ = 0;
            local_490._padding_._4_4_ = 1;
            local_490.UnvisitedBitMask = 0xffffffff;
            local_490.CurrentBitIndex = 0;
            local_490.BaseBitIndex = 0;
            if (local_70 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_490);
            }
            TStack_570._padding_ =
                 CONCAT44(local_490._padding_._4_4_,(undefined4)local_490._padding_);
            local_578 = (FConfigSection *)local_98;
            TStack_570._16_8_ = CONCAT44(local_490.CurrentBitIndex,local_490.UnvisitedBitMask);
            TStack_570._24_8_ = CONCAT44(local_490._28_4_,local_490.BaseBitIndex);
            TStack_570.Array = local_490.Array;
            local_550 = local_98._8_4_ - local_64;
            local_418 = local_490.Array;
            iStack_400 = local_98._8_4_ - local_64;
            uStack_3fc = uStack_54c;
            local_428._0_8_ = local_578;
            unique0x100023c1 = TStack_570._padding_;
            uStack_410 = TStack_570._16_8_;
            local_408 = TStack_570._24_8_;
            pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                      TConstSetBitIterator<FDefaultBitArrayAllocator>
                                (&local_178,
                                 (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70)
            ;
            local_578 = (FConfigSection *)local_98;
            TStack_570._padding_ = pTVar15->_padding_;
            TStack_570.Array = pTVar15->Array;
            TStack_570.UnvisitedBitMask = pTVar15->UnvisitedBitMask;
            TStack_570.CurrentBitIndex = pTVar15->CurrentBitIndex;
            TStack_570._24_8_ = *(undefined8 *)&pTVar15->BaseBitIndex;
            local_550 = local_98._8_4_ - local_64;
            local_1c0.InitialNum = local_98._8_4_ - local_64;
            local_1c0._44_4_ = uStack_54c;
            local_1c0._padding_ = (longlong)local_578;
            local_1c0._padding_ = TStack_570._padding_;
            local_1c0._padding_ = (longlong)TStack_570.Array;
            local_1c0._padding_ = TStack_570._16_8_;
            local_1c0._padding_ = TStack_570._24_8_;
            bVar6 = TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!=((TRangedForIterator *)local_428,&local_1c0);
            if (bVar6) {
              local_3c8 = &local_370;
              local_3c0 = &local_368;
              do {
                pFVar13 = (FName *)((longlong)uStack_410._4_4_ * 0x20 + *(longlong *)local_428._0_8_
                                   );
                local_370 = *pFVar13;
                FConfigValue::FConfigValue(&local_368,(FString *)(pFVar13 + 1),Combined);
                TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FName_&&,FConfigValue_&&>_>
                          ((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                            *)pFVar14,&local_450,(bool *)&local_3c8);
                if (local_368.SavedValue.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_368.SavedValue.Data.AllocatorInstance.Data);
                }
                if (5 < (byte)LogConsoleManager._0_1_) {
                  ::FName::ToString(pFVar13,&local_2a8);
                  UE::Logging::Private::BasicLog<6>
                            (&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
                  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
                  }
                }
                uStack_410 = CONCAT44(uStack_410._4_4_,(uint)uStack_410 & ~uStack_41c);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_428 + 8));
                bVar6 = TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::TRangedForIterator::operator!=((TRangedForIterator *)local_428,&local_1c0)
                ;
              } while (bVar6);
            }
            local_50 = 0;
            if (local_58 != (void *)0x0) {
              FMemory::Free(local_58);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98);
            goto LAB_141669d42;
          }
          if (2 < (byte)LogConsoleManager._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
          }
        }
      }
      else {
        if (iVar10 == 0) {
          ::FString::PrintfImpl(&local_3b8,L"%d");
          pFVar14 = ::operator_new(0xf8);
          if (pFVar14 == (FConfigSection *)0x0) {
            pFVar14 = (FConfigSection *)0x0;
          }
          else {
            pFVar14 = FConfigSection::FConfigSection(pFVar14);
          }
          bVar5 = true;
          local_5e0 = pFVar14;
          pIVar19 = Get();
          local_5c8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_5c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_5c0.DelegateSize = 0;
          pcVar4 = *(code **)((longlong)*pIVar19 + 0xd8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_5c8,(FWriteAccessScope *)&local_390);
          local_378 = &local_5c0;
          puVar21 = UE::Core::Private::DelegateAllocate(0x28,&local_5c0);
          if (puVar21 != (undefined8 *)0x0) {
            *puVar21 = &
                       ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar16 = FDelegateHandle::GenerateNewID();
            puVar21[2] = uVar16;
            *puVar21 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::`80'::<lambda_2>_>
                        ::_vftable_;
            puVar21[3] = &local_3b8;
            puVar21[4] = pFVar14;
          }
          if (local_390.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_390.Accessor,&local_390);
          }
          (*pcVar4)(pIVar19,&local_5c8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_5c8,(FWriteAccessScope *)&local_3a8);
          if ((local_5c0.DelegateSize != 0) &&
             (local_5c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_5c0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_5c0,0,0,0x10);
            local_5c0.DelegateSize = 0;
          }
          if (local_3a8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a8.Accessor,&local_3a8);
          }
          if (local_5c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_5c0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_5c8.AccessDetector);
          uVar28 = local_614;
          if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
            uVar28 = local_614;
          }
        }
        else {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
            pFVar17 = FPaths::EngineDir(&local_298);
            ::FString::ConcatFC(&ConsoleVariablesIni,pFVar17,L"Config/ConsoleVariables.ini");
            if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.Data.AllocatorInstance.Data);
            }
            atexit(`IConsoleManager::VisitPlatformCVarsForEmulation'::__l82::
                   _dynamic_atexit_destructor_for__ConsoleVariablesIni__);
            _Init_thread_footer(&::_TSS2);
          }
          pFVar17 = &GEngineIni;
          if ((pFVar12->Data).ArrayNum == 0xa000000) {
            pFVar17 = &ConsoleVariablesIni;
          }
          pFVar14 = FConfigCacheIni::GetSection(this,(wchar_t *)pFVar24,false,pFVar17);
          local_5e0 = pFVar14;
        }
LAB_141669d42:
        this = local_5b0;
        if (pFVar14 != (FConfigSection *)0x0) {
          local_470.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pFVar14->_padding_;
          local_470._padding_._0_4_ = 0;
          local_470._padding_._4_4_ = 1;
          local_470.UnvisitedBitMask = 0xffffffff;
          local_470.CurrentBitIndex = 0;
          local_470.BaseBitIndex = 0;
          if ((int)pFVar14->_padding_ != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_470);
          }
          iVar9 = (int)pFVar14->_padding_;
          TStack_570._padding_ = CONCAT44(local_470._padding_._4_4_,(undefined4)local_470._padding_)
          ;
          bVar22 = (byte)iVar9 & 0x1f;
          local_4c8 = (int)pFVar14->_padding_ - *(int *)((longlong)&pFVar14->_padding_ + 4);
          TStack_570._16_8_ = CONCAT44(local_470.CurrentBitIndex,local_470.UnvisitedBitMask);
          TStack_570._24_8_ = CONCAT44(local_470._28_4_,local_470.BaseBitIndex);
          local_4f0._padding_ = CONCAT44(1 << bVar22,iVar9 >> 5);
          lStack_4d0 = TStack_570._24_8_;
          local_4f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pFVar14->_padding_;
          local_4f0.CurrentBitIndex = iVar9;
          local_4f0.UnvisitedBitMask = -1 << bVar22;
          local_4f0._24_8_ = CONCAT44(local_470.CurrentBitIndex,iVar9) & 0xffffffffffffffe0;
          uStack_54c = uStack_4c4;
          local_550 = local_4c8;
          TStack_570.Array = local_470.Array;
          local_578 = pFVar14;
          if ((iVar9 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          if (iVar9 != (int)pFVar14->_padding_) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4f0);
          }
          local_498 = (int)pFVar14->_padding_ - *(int *)((longlong)&pFVar14->_padding_ + 4);
          lStack_4b8 = local_4f0._padding_;
          pTStack_4b0 = local_4f0.Array;
          local_4c0 = pFVar14;
          uStack_4a8 = local_4f0.UnvisitedBitMask;
          iStack_4a4 = local_4f0.CurrentBitIndex;
          uStack_4a0 = local_4f0._24_8_;
          local_220 = pFVar14;
          lStack_218 = local_4f0._padding_;
          local_210 = local_4f0.Array;
          uStack_208 = local_4f0.UnvisitedBitMask;
          iStack_204 = local_4f0.CurrentBitIndex;
          local_200 = local_4f0._24_8_;
          uStack_1f8 = CONCAT44(uStack_494,local_498);
          while( true ) {
            pFVar14 = local_578;
            iVar9 = 0;
            if ((int)local_578->_padding_ - *(int *)((longlong)&local_578->_padding_ + 4) !=
                local_550) {
              local_617 = 0;
              `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_617);
            }
            if (((TStack_570.CurrentBitIndex == iStack_204) && (TStack_570.Array == local_210)) &&
               (pFVar14 == local_220)) break;
            pFVar13 = (FName *)(pFVar14->_padding_ + (longlong)TStack_570.CurrentBitIndex * 0x28);
            ::FName::ToString(pFVar13,&local_510);
            if (*(char *)((longlong)&pFVar13[3].Number + 1) == '\0') {
              uVar2 = pFVar13[2].ComparisonIndex.Value;
              uVar28 = uVar28 | 2;
              _Src = pFVar13[1];
              local_520.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_520.Data.ArrayNum = uVar2;
              local_614 = uVar28;
              if (uVar2 == 0) {
                local_520.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,uVar2,0,(ForAnyElementType *)&local_520,uVar2,
                           &local_520.Data.ArrayMax);
                memcpy(local_520.Data.AllocatorInstance.Data,(void *)_Src,(longlong)(int)uVar2 * 2);
              }
              pFVar17 = &local_520;
            }
            else {
              uVar28 = uVar28 | 1;
              local_614 = uVar28;
              pFVar17 = FConfigValue::ExpandValue(&local_288,(FString *)(pFVar13 + 1));
            }
            local_5d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_5d8.Data.ArrayNum = (pFVar17->Data).ArrayNum;
            lVar27 = (longlong)local_5d8.Data.ArrayNum;
            pFVar24 = (pFVar17->Data).AllocatorInstance.Data;
            if (local_5d8.Data.ArrayNum == 0) {
              local_5d8.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_5d8.Data.ArrayNum,0,(ForAnyElementType *)&local_5d8,
                         local_5d8.Data.ArrayNum,&local_5d8.Data.ArrayMax);
              memcpy(local_5d8.Data.AllocatorInstance.Data,pFVar24,lVar27 * 2);
            }
            if (((uVar28 & 2) != 0) &&
               (uVar28 = uVar28 & 0xfffffffd, local_614 = uVar28,
               local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_520.Data.AllocatorInstance.Data);
            }
            if (((uVar28 & 1) != 0) &&
               (local_614 = uVar28 & 0xfffffffe,
               local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_288.Data.AllocatorInstance.Data);
            }
            FVar25.Data = (FScriptContainerElement *)L"";
            if (local_510.Data.ArrayNum != 0) {
              FVar25.Data = local_510.Data.AllocatorInstance.Data;
            }
            if (((Singleton == (IConsoleManager *)0x0) &&
                (SetupSingleton(), Singleton == (IConsoleManager *)0x0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Singleton != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x4fb,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            plVar18 = (longlong *)
                      (**(code **)((longlong)*Singleton + 0xc0))(Singleton,FVar25.Data,0);
            EVar11 = ECVF_Default;
            if (plVar18 != (longlong *)0x0) {
              EVar11 = (**(code **)(*plVar18 + 0x18))(plVar18);
              EVar11 = EVar11 & ECVF_Preview;
            }
            bVar6 = ::FString::StartsWith(&local_510,L"sg.",3,IgnoreCase);
            if (bVar6) {
              local_e8._0_8_ = 0;
              local_e8._8_8_ = 0;
              local_c8 = (uint *)0x0;
              local_c0 = ECVF_Default;
              local_bc = 0x80;
              local_b8 = 0xffffffff;
              local_b4 = 0;
              local_a8 = (void *)0x0;
              local_a0 = 0;
              ExpandScalabilityCVar
                        (local_5b0,&local_510,&local_5d8,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_e8,true);
              EVar3 = local_c0;
              uVar28 = 1;
              EStack_58c = ECVF_Default;
              local_588 = iVar9;
              if (local_c0 != ECVF_Default) {
                puVar30 = (uint *)(local_e8 + 0x10);
                if (local_c8 != (uint *)0x0) {
                  puVar30 = local_c8;
                }
                uVar2 = *puVar30;
                while (uVar2 == 0) {
                  lVar27 = (longlong)iVar9;
                  local_588 = local_588 + 0x20;
                  iVar9 = iVar9 + 1;
                  EStack_58c = local_c0;
                  if ((int)((local_c0 - ECVF_Cheat) + ((int)(local_c0 - ECVF_Cheat) >> 0x1f & 0x1fU)
                           ) >> 5 < iVar9) goto LAB_14166a203;
                  uVar2 = (puVar30 + 1)[lVar27];
                }
                uVar28 = -uVar2 & uVar2;
                uVar1 = (ulonglong)uVar28 * 2 + 1;
                lVar27 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                  }
                }
                local_450.Key._4_4_ = (int)lVar27;
                EStack_58c = (int)lVar27 + -1 + local_588;
                if ((int)local_c0 < (int)EStack_58c) {
                  EStack_58c = local_c0;
                }
              }
LAB_14166a203:
              uStack_584 = local_13c;
              EVar29 = local_c0 & 0xffffffe0;
              iStack_580 = local_e8._8_4_ - local_b4;
              bVar22 = (byte)local_c0 & 0x1f;
              uStack_5a0 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar28,iVar9);
              iVar9 = (int)local_c0 >> 5;
              uVar28 = -1 << bVar22;
              local_5a8 = CONCAT44(1 << bVar22,iVar9);
              local_598._4_4_ = local_c0;
              local_598._0_4_ = uVar28;
              local_3f8 = (FConfigSection *)local_e8;
              TStack_3f0._padding_ = (longlong)uStack_5a0;
              TStack_3f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
              TStack_3f0.UnvisitedBitMask = 0xffffffff;
              TStack_3f0.CurrentBitIndex = EStack_58c;
              TStack_3f0.BaseBitIndex = local_588;
              TStack_3f0._28_4_ = local_13c;
              uStack_3d0 = CONCAT44(uStack_57c,iStack_580);
              uStack_5a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
              EStack_590 = EVar29;
              if (((int)local_c0 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x7af,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              if (EVar3 != local_c0) {
                puVar30 = (uint *)(local_e8 + 0x10);
                if (local_c8 != (uint *)0x0) {
                  puVar30 = local_c8;
                }
                uVar28 = uVar28 & puVar30[iVar9];
                while (uVar28 == 0) {
                  EStack_590 = EVar29 + ECVF_RenderThreadSafe;
                  lVar27 = (longlong)iVar9;
                  iVar9 = iVar9 + 1;
                  uVar1 = (ulonglong)local_5a8 >> 0x20;
                  local_5a8 = CONCAT44((int)uVar1,iVar9);
                  if ((int)((local_c0 - ECVF_Cheat) + ((int)(local_c0 - ECVF_Cheat) >> 0x1f & 0x1fU)
                           ) >> 5 < iVar9) {
                    local_598._4_4_ = local_c0;
                    goto LAB_14166a361;
                  }
                  uVar28 = (puVar30 + 1)[lVar27];
                  local_598._0_4_ = 0xffffffff;
                  local_598._4_4_ = 0;
                  EVar29 = EStack_590;
                }
                local_5a8 = CONCAT44(-uVar28 & uVar28,(undefined4)local_5a8);
                uVar1 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
                lVar27 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                  }
                }
                local_438 = (int)lVar27;
                local_598._4_4_ = (EVar29 - ECVF_Cheat) + local_438;
                if ((int)local_c0 < (int)local_598._4_4_) {
                  local_598._4_4_ = local_c0;
                }
              }
LAB_14166a361:
              local_4c0 = (FConfigSection *)local_e8;
              uStack_4a0 = CONCAT44(EStack_58c,EStack_590);
              local_498 = local_e8._8_4_ - local_b4;
              lStack_4b8 = local_5a8;
              pTStack_4b0 = uStack_5a0;
              uStack_4a8 = (uint)local_598;
              iStack_4a4 = local_598._4_4_;
              lStack_1e8 = local_5a8;
              uStack_1c8 = CONCAT44(uStack_494,local_498);
              local_1e0 = uStack_5a0;
              uStack_1d8 = (uint)local_598;
              iStack_1d4 = local_598._4_4_;
              local_1f0 = local_4c0;
              local_1d0 = uStack_4a0;
              while( true ) {
                pFVar14 = local_3f8;
                if ((int)local_3f8->_padding_ - *(int *)((longlong)&local_3f8->_padding_ + 4) !=
                    (int)uStack_3d0) {
                  local_616[0] = 0;
                  `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_616);
                }
                if (((TStack_3f0.CurrentBitIndex == iStack_1d4) && (TStack_3f0.Array == local_1e0))
                   && (pFVar14 == local_1f0)) break;
                puVar21 = (undefined8 *)
                          (pFVar14->_padding_ + (longlong)TStack_3f0.CurrentBitIndex * 0x28);
                if (((Singleton == (IConsoleManager *)0x0) &&
                    (SetupSingleton(), Singleton == (IConsoleManager *)0x0)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Singleton != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                       ,0x4fb,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                if (*(int *)(puVar21 + 1) == 0) {
                  pwVar26 = L"";
                }
                else {
                  pwVar26 = (wchar_t *)*puVar21;
                }
                plVar18 = (longlong *)
                          (**(code **)((longlong)*Singleton + 0xc0))(Singleton,pwVar26,0);
                if (plVar18 == (longlong *)0x0) {
                  iVar9 = *(int *)(puVar21 + 1);
                  _Src_00 = (void *)*puVar21;
LAB_14166a7a5:
                  local_600._0_8_ = (FScriptContainerElement *)0x0;
                  local_600._8_4_ = iVar9;
                  if (iVar9 == 0) {
                    local_600._12_4_ = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,iVar9,0,(ForAnyElementType *)local_600,iVar9,
                               (int *)(local_600 + 0xc));
                    memcpy((void *)local_600._0_8_,_Src_00,(longlong)iVar9 * 2);
                  }
                  if (((Singleton == (IConsoleManager *)0x0) &&
                      (SetupSingleton(), Singleton == (IConsoleManager *)0x0)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Singleton != nullptr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                         ,0x4fb,L""), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    uVar7 = (*pcVar4)();
                    return (bool)uVar7;
                  }
                  pFVar24 = (FScriptContainerElement *)L"";
                  if (local_600._8_4_ != 0) {
                    pFVar24 = (FScriptContainerElement *)local_600._0_8_;
                  }
                  plVar18 = (longlong *)
                            (**(code **)((longlong)*Singleton + 0xc0))(Singleton,pFVar24,0);
                  if ((plVar18 != (longlong *)0x0) &&
                     (cVar8 = (**(code **)(*plVar18 + 0x88))(plVar18), cVar8 != '\0')) {
                    pIVar19 = Get();
                    pcVar4 = *(code **)((longlong)*pIVar19 + 0xd0);
                    uVar20 = (**(code **)(*plVar18 + 0x90))(plVar18);
                    puVar21 = (undefined8 *)(*pcVar4)(pIVar19,local_268,uVar20);
                    if ((undefined8 *)local_600 != puVar21) {
                      if ((FScriptContainerElement *)local_600._0_8_ !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free((void *)local_600._0_8_);
                      }
                      local_600._0_8_ = *puVar21;
                      *puVar21 = 0;
                      local_600._8_4_ = *(undefined4 *)(puVar21 + 1);
                      local_600._12_4_ = *(int *)((longlong)puVar21 + 0xc);
                      puVar21[1] = 0;
                    }
                    if (local_268[0] != (void *)0x0) {
                      FMemory::Free(local_268[0]);
                    }
                  }
                  lVar27 = 0;
                  iVar9 = 0;
                  if (local_600._8_4_ == 0) {
                    pwVar26 = L"";
                    iVar10 = iVar9;
                  }
                  else {
                    pwVar26 = (wchar_t *)local_600._0_8_;
                    iVar10 = local_600._8_4_ + -1;
                  }
                  uVar28 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar26);
                  iVar10 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                           ::FindIndexByHash<FString>(&local_138,uVar28,(FString *)local_600);
                  if ((iVar10 == -1) ||
                     (lVar23 = (longlong)iVar10 * 0x20 + local_138.Elements._0_8_, lVar23 == 0)) {
                    local_450.Value = (FConfigValue *)local_600;
                    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                              (&local_138,(uint)&local_538,
                               (TKeyInitializer<FString_const_&> *)(ulonglong)uVar28,
                               (bool *)&local_450.Value);
                    lVar23 = (longlong)local_538 * 0x20 + local_138.Elements._0_8_;
                  }
                  if (*(int *)(lVar23 + 0x10) < 0x2000001) {
                    if (local_600._8_4_ == 0) {
                      pwVar26 = L"";
                    }
                    else {
                      iVar9 = local_600._8_4_ + -1;
                      pwVar26 = (wchar_t *)local_600._0_8_;
                    }
                    uVar28 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar26);
                    iVar9 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                            ::FindIndexByHash<FString>(&local_138,uVar28,(FString *)local_600);
                    if (((iVar9 == -1) ||
                        (lVar27 = (longlong)iVar9 * 0x20 + local_138.Elements._0_8_, lVar27 == 0))
                       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Pair != nullptr",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                              ,0x288,L""), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      uVar7 = (*pcVar4)();
                      return (bool)uVar7;
                    }
                    *(undefined4 *)(lVar27 + 0x10) = 0x2000000;
                    pFVar24 = (FScriptContainerElement *)L"";
                    if (local_600._8_4_ != 0) {
                      pFVar24 = (FScriptContainerElement *)local_600._0_8_;
                    }
                    local_528 = GetPreviewFlagsOfCvar((wchar_t *)pFVar24);
                    local_528 = local_528 | EVar11 | ECVF_SetByScalability;
                    (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_600);
                    FVar25.Data = (FScriptContainerElement *)local_600._0_8_;
                  }
                  else {
                    FVar25.Data = (FScriptContainerElement *)local_600._0_8_;
                    if (4 < (byte)LogConsoleManager._0_1_) {
                      UE::Logging::Private::BasicLog<5>
                                ((FStaticBasicLogRecord *)&PTR_u_Skipping_CVar___1506498a8,
                                 (FLogCategoryBase *)&LogConsoleManager);
                      FVar25.Data = (FScriptContainerElement *)local_600._0_8_;
                    }
                  }
                }
                else {
                  uVar28 = (**(code **)(*plVar18 + 0x18))(plVar18);
                  iVar9 = *(int *)(puVar21 + 1);
                  _Src_00 = (void *)*puVar21;
                  if ((uVar28 >> 0xc & 1) == 0) goto LAB_14166a7a5;
                  lVar27 = 0;
                  local_5f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  iVar10 = 0;
                  local_5f0.Data.ArrayNum = iVar9;
                  if (iVar9 == 0) {
                    local_5f0.Data.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,iVar9,0,(ForAnyElementType *)&local_5f0,iVar9,
                               &local_5f0.Data.ArrayMax);
                    memcpy(local_5f0.Data.AllocatorInstance.Data,_Src_00,(longlong)iVar9 * 2);
                  }
                  if (((Singleton == (IConsoleManager *)0x0) &&
                      (SetupSingleton(), Singleton == (IConsoleManager *)0x0)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Singleton != nullptr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                         ,0x4fb,L""), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    uVar7 = (*pcVar4)();
                    return (bool)uVar7;
                  }
                  FVar25.Data = (FScriptContainerElement *)L"";
                  if (local_5f0.Data.ArrayNum != 0) {
                    FVar25.Data = local_5f0.Data.AllocatorInstance.Data;
                  }
                  plVar18 = (longlong *)
                            (**(code **)((longlong)*Singleton + 0xc0))(Singleton,FVar25.Data,0);
                  if ((plVar18 != (longlong *)0x0) &&
                     (cVar8 = (**(code **)(*plVar18 + 0x88))(plVar18), cVar8 != '\0')) {
                    pIVar19 = Get();
                    pcVar4 = *(code **)((longlong)*pIVar19 + 0xd0);
                    uVar20 = (**(code **)(*plVar18 + 0x90))(plVar18);
                    pFVar12 = (FString *)(*pcVar4)(pIVar19,local_278,uVar20);
                    if (&local_5f0 != pFVar12) {
                      if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
                      }
                      local_5f0.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data
                      ;
                      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_5f0.Data.ArrayNum = (pFVar12->Data).ArrayNum;
                      local_5f0.Data.ArrayMax = (pFVar12->Data).ArrayMax;
                      (pFVar12->Data).ArrayNum = 0;
                      (pFVar12->Data).ArrayMax = 0;
                    }
                    if (local_278[0] != (void *)0x0) {
                      FMemory::Free(local_278[0]);
                    }
                  }
                  if (local_5f0.Data.ArrayNum == 0) {
                    pwVar26 = L"";
                  }
                  else {
                    iVar10 = local_5f0.Data.ArrayNum + -1;
                    pwVar26 = (wchar_t *)local_5f0.Data.AllocatorInstance.Data;
                  }
                  uVar28 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar26);
                  iVar9 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                          ::FindIndexByHash<FString>(&local_138,uVar28,&local_5f0);
                  if ((iVar9 == -1) ||
                     (lVar23 = (longlong)iVar9 * 0x20 + local_138.Elements._0_8_, lVar23 == 0)) {
                    local_440 = &local_5f0;
                    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                              (&local_138,(uint)local_548,
                               (TKeyInitializer<FString_const_&> *)(ulonglong)uVar28,
                               (bool *)&local_440);
                    lVar23 = (longlong)local_548[0] * 0x20 + local_138.Elements._0_8_;
                  }
                  if (*(int *)(lVar23 + 0x10) < 0x2000001) {
                    if (local_5f0.Data.ArrayNum == 0) {
                      pwVar26 = L"";
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = local_5f0.Data.ArrayNum + -1;
                      pwVar26 = (wchar_t *)local_5f0.Data.AllocatorInstance.Data;
                    }
                    uVar28 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar26);
                    iVar9 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                            ::FindIndexByHash<FString>(&local_138,uVar28,&local_5f0);
                    if (((iVar9 == -1) ||
                        (lVar27 = (longlong)iVar9 * 0x20 + local_138.Elements._0_8_, lVar27 == 0))
                       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Pair != nullptr",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                              ,0x288,L""), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      uVar7 = (*pcVar4)();
                      return (bool)uVar7;
                    }
                    *(undefined4 *)(lVar27 + 0x10) = 0x2000000;
                    FVar25.Data = (FScriptContainerElement *)L"";
                    if (local_5f0.Data.ArrayNum != 0) {
                      FVar25.Data = local_5f0.Data.AllocatorInstance.Data;
                    }
                    local_540 = GetPreviewFlagsOfCvar((wchar_t *)FVar25.Data);
                    local_540 = local_540 | ECVF_SetByScalability;
                    (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_5f0);
                    FVar25.Data = local_5f0.Data.AllocatorInstance.Data;
                  }
                  else {
                    FVar25.Data = local_5f0.Data.AllocatorInstance.Data;
                    if (4 < (byte)LogConsoleManager._0_1_) {
                      UE::Logging::Private::BasicLog<5>
                                ((FStaticBasicLogRecord *)&PTR_u_Skipping_CVar___1506498a8,
                                 (FLogCategoryBase *)&LogConsoleManager);
                      FVar25.Data = local_5f0.Data.AllocatorInstance.Data;
                    }
                  }
                }
                if (FVar25.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar25.Data);
                }
                TStack_3f0.UnvisitedBitMask =
                     TStack_3f0.UnvisitedBitMask & ~TStack_3f0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3f0);
              }
              local_a0 = 0;
              if (local_a8 != (void *)0x0) {
                FMemory::Free(local_a8);
              }
              TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_e8);
              pFVar12 = local_500;
            }
            iVar9 = local_510.Data.ArrayNum;
            FVar25.Data = local_510.Data.AllocatorInstance.Data;
            lVar27 = 0;
            local_610.Data.ArrayNum = local_510.Data.ArrayNum;
            EVar3 = (pFVar12->Data).ArrayNum;
            local_610.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_510.Data.ArrayNum == 0) {
              local_610.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_510.Data.ArrayNum,0,(ForAnyElementType *)&local_610,
                         local_510.Data.ArrayNum,&local_610.Data.ArrayMax);
              memcpy(local_610.Data.AllocatorInstance.Data,FVar25.Data,(longlong)iVar9 * 2);
            }
            if (((Singleton == (IConsoleManager *)0x0) &&
                (SetupSingleton(), Singleton == (IConsoleManager *)0x0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Singleton != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x4fb,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            FVar25.Data = (FScriptContainerElement *)L"";
            if (local_610.Data.ArrayNum != 0) {
              FVar25.Data = local_610.Data.AllocatorInstance.Data;
            }
            plVar18 = (longlong *)
                      (**(code **)((longlong)*Singleton + 0xc0))(Singleton,FVar25.Data,0);
            if ((plVar18 != (longlong *)0x0) &&
               (cVar8 = (**(code **)(*plVar18 + 0x88))(plVar18), cVar8 != '\0')) {
              pIVar19 = Get();
              pcVar4 = *(code **)((longlong)*pIVar19 + 0xd0);
              uVar20 = (**(code **)(*plVar18 + 0x90))(plVar18);
              pFVar17 = (FString *)(*pcVar4)(pIVar19,local_258,uVar20);
              if (&local_610 != pFVar17) {
                if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_610.Data.AllocatorInstance.Data);
                }
                local_610.Data.AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
                (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_610.Data.ArrayNum = (pFVar17->Data).ArrayNum;
                local_610.Data.ArrayMax = (pFVar17->Data).ArrayMax;
                (pFVar17->Data).ArrayNum = 0;
                (pFVar17->Data).ArrayMax = 0;
              }
              if (local_258[0] != (void *)0x0) {
                FMemory::Free(local_258[0]);
              }
            }
            EVar29 = EVar3 & ECVF_SetByMask;
            iVar9 = 0;
            if (local_610.Data.ArrayNum == 0) {
              pwVar26 = L"";
              iVar10 = iVar9;
            }
            else {
              pwVar26 = (wchar_t *)local_610.Data.AllocatorInstance.Data;
              iVar10 = local_610.Data.ArrayNum + -1;
            }
            uVar28 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar26);
            iVar10 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FString>(&local_138,uVar28,&local_610);
            if ((iVar10 == -1) ||
               (lVar23 = (longlong)iVar10 * 0x20 + local_138.Elements._0_8_, lVar23 == 0)) {
              local_430 = &local_610;
              TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                        (&local_138,(uint)&local_534,
                         (TKeyInitializer<FString_const_&> *)(ulonglong)uVar28,(bool *)&local_430);
              lVar23 = (longlong)local_534 * 0x20 + local_138.Elements._0_8_;
            }
            if ((int)EVar29 < *(int *)(lVar23 + 0x10)) {
              if (4 < (byte)LogConsoleManager._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)&PTR_u_Skipping_CVar___1506498a8,
                           (FLogCategoryBase *)&LogConsoleManager);
              }
            }
            else {
              if (local_610.Data.ArrayNum == 0) {
                pwVar26 = L"";
              }
              else {
                iVar9 = local_610.Data.ArrayNum + -1;
                pwVar26 = (wchar_t *)local_610.Data.AllocatorInstance.Data;
              }
              uVar28 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar26);
              iVar9 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      ::FindIndexByHash<FString>(&local_138,uVar28,&local_610);
              if (((iVar9 == -1) ||
                  (lVar27 = (longlong)iVar9 * 0x20 + local_138.Elements._0_8_, lVar27 == 0)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pair != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                     ,0x288,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              *(EConsoleVariableFlags *)(lVar27 + 0x10) = EVar29;
              FVar25.Data = (FScriptContainerElement *)L"";
              if (local_610.Data.ArrayNum != 0) {
                FVar25.Data = local_610.Data.AllocatorInstance.Data;
              }
              local_530 = GetPreviewFlagsOfCvar((wchar_t *)FVar25.Data);
              local_530 = local_530 | EVar11 | EVar3;
              (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_610);
            }
            if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_610.Data.AllocatorInstance.Data);
            }
            if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
            }
            if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_510.Data.AllocatorInstance.Data);
            }
            TStack_570.UnvisitedBitMask = TStack_570.UnvisitedBitMask & ~TStack_570._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_570);
            uVar28 = local_614;
          }
          param_2 = local_4f8;
          this = local_5b0;
          if (bVar5) {
            FConfigSection::~FConfigSection(local_5e0);
            ::operator_delete(local_5e0,0xf8);
            param_2 = local_4f8;
            this = local_5b0;
          }
        }
      }
      pFVar12 = pFVar12 + 1;
      local_500 = pFVar12;
    } while (pFVar12 != &local_2a8);
    local_138.HashSize = 0;
    if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_138.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_138.Elements);
    bVar5 = true;
  }
  return bVar5;
}

