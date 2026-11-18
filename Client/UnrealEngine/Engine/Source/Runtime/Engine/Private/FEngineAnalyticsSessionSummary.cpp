// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// <lambda_invoker_cdecl> @ 1473cb620

bool __cdecl
`FEngineAnalyticsSessionSummary::Tick'::__l2::<lambda_1>::<lambda_invoker_cdecl>(ulong64 *param_1)

{
  *param_1 = *param_1 + 1;
  return true;
}

// <lambda_invoker_cdecl> @ 1473cb630

bool __cdecl
`FEngineAnalyticsSessionSummary::UpdateSessionProgress'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (int *param_1,int *param_2)

{
  return *param_1 < *param_2;
}

// <lambda_invoker_cdecl> @ 1473cb640

bool __cdecl
`FEngineAnalyticsSessionSummary::Tick'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FDateTime *param_1,FDateTime *param_2)

{
  return param_1->Ticks < param_2->Ticks;
}

// <lambda_invoker_cdecl> @ 1473cb650

bool __cdecl
`FEngineAnalyticsSessionSummary::UpdateSessionProgress'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FDateTime *param_1,FDateTime *param_2)

{
  return param_1->Ticks < param_2->Ticks;
}

// <lambda_invoker_cdecl> @ 1473cb660

bool __cdecl
`FEngineAnalyticsSessionSummary::UpdateSessionProgress'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (ulong64 *param_1,ulong64 *param_2)

{
  return *param_1 < *param_2;
}

// FEngineAnalyticsSessionSummary @ 1473d5800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEngineAnalyticsSessionSummary * __thiscall
FEngineAnalyticsSessionSummary::FEngineAnalyticsSessionSummary
          (FEngineAnalyticsSessionSummary *this,TSharedPtr<IAnalyticsPropertyStore,1> *param_1,
          uint param_2)

{
  UGeneralProjectSettings *pUVar1;
  IAnalyticsPropertyStore *pIVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  IPluginManager *pIVar10;
  FScriptContainerElement *pFVar11;
  FEngineAnalyticsSessionSummary *pFVar12;
  UClass *this_00;
  FString *pFVar13;
  FPlatformMemoryStats *pFVar14;
  wchar_t *pwVar15;
  FEngineVersion *this_01;
  ulonglong uVar16;
  IProjectManager *pIVar17;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_02;
  ForAnyElementType FVar18;
  TSharedRef<IPlugin,1> *pTVar19;
  TSharedRef<IPlugin,1> *pTVar20;
  int iVar21;
  undefined8 uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  FIdentityFunctor local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_478;
  undefined8 local_470;
  undefined1 local_468 [8];
  TSharedRef<IPlugin,1> *local_460;
  uint local_458;
  ForAnyElementType local_450;
  int local_448;
  int local_444;
  FString local_440;
  undefined1 local_430 [8];
  FString local_428;
  FString local_418;
  FString local_408;
  LARGE_INTEGER local_3f8;
  LARGE_INTEGER local_3f0;
  undefined8 local_3e8;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [40];
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  FPlatformMemoryStats local_e8;
  
  this->_padding_ = (longlong)&___7FEngineAnalyticsSessionSummary__6B_;
  (this->Store).Object = param_1->Object;
  (this->Store).SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IAnalyticsPropertyStore *)0x0;
  FDateTime::UtcNow();
  QueryPerformanceCounter(&local_3f8);
  dVar5 = __real_4170000000000000;
  dVar23 = (double)local_3f8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->CurrSessionTickCount = 0;
  this->CrcProcessId = param_2;
  this->SessionStartTimeSecs = dVar23 + dVar5;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = __real_4197d78402000000;
  auVar24 = roundpd(auVar24,auVar24,1);
  (this->PersistPeriod).Ticks = (longlong)auVar24._0_8_;
  this->NextPersistTimeSeconds = 0.0;
  (this->CrcExitCode).bIsSet = false;
  this->bShutdown = false;
  this->bDebuggerIgnored = false;
  this->bWasEverDebugged = false;
  pIVar10 = IPluginManager::Get();
  (**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,&local_460);
  local_478.Data = (FScriptContainerElement *)0x0;
  local_470 = 0;
  if ((int)local_458 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_458);
  }
  if (0 < (int)local_458) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_458,&local_478,0,(int *)((longlong)&local_470 + 4));
  }
  uVar9 = local_458;
  pTVar19 = local_460 + (int)local_458;
  pTVar20 = local_460;
  while( true ) {
    if (local_458 != uVar9) {
      local_res18[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<TSharedRef<IPlugin,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pTVar20 == pTVar19) break;
    pFVar11 = (FScriptContainerElement *)(**(code **)(*(longlong *)pTVar20->Object + 8))();
    if (((local_478.Data <= pFVar11) &&
        (pFVar11 < local_478.Data + (longlong)local_470._4_4_ * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
      return pFVar12;
    }
    iVar8 = (int)local_470;
    if ((int)local_470 == local_470._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_478,(int *)((longlong)&local_470 + 4));
    }
    local_470 = CONCAT44(local_470._4_4_,iVar8 + 1);
    ::FString::FString((FString *)(local_478.Data + (longlong)iVar8 * 0x10),(FString *)pFVar11);
    pTVar20 = pTVar20 + 1;
  }
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
            ((FString *)local_478.Data,(int)local_470,local_res18[0],(TLess<void> *)local_468);
  local_418.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_418.Data.ArrayNum = 0;
  local_418.Data.ArrayMax = 0;
  local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.Data.ArrayNum = 0;
  local_408.Data.ArrayMax = 0;
  FWindowsPlatformMisc::GetOSVersions(&local_418,&local_408);
  local_128 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_120 = _UNK_15060db28;
  local_118 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_110 = _UNK_15060db28;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  local_100 = 0;
  (**(code **)(GDynamicRHI->_padding_ + 0x188))(GDynamicRHI,&local_128);
  this_00 = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (UGeneralProjectSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  pFVar13 = ::FString::FString((FString *)(local_1c0 + 8),"Windows");
  ::FString::FString(&local_390,L"Platform");
  (*pcVar4)(pIVar2,&local_390,pFVar13);
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  if ((IAnalyticsPropertyStore *)local_1c0._8_8_ != (IAnalyticsPropertyStore *)0x0) {
    FMemory::Free((void *)local_1c0._8_8_);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  ::FString::FString(&local_380,L"OSMajor");
  (*pcVar4)(pIVar2,&local_380,&local_418);
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  ::FString::FString(&local_370,L"OSMinor");
  (*pcVar4)(pIVar2,&local_370,&local_408);
  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  pFVar13 = FWindowsPlatformMisc::GetOSVersion((FString *)(local_1c0 + 0x18));
  ::FString::FString(&local_360,L"OSVersion");
  (*pcVar4)(pIVar2,&local_360,pFVar13);
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  if ((void *)local_1c0._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c0._24_8_);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x80);
  bVar6 = FWindowsPlatformMisc::Is64bitOperatingSystem();
  ::FString::FString(&local_350,L"Is64BitOS");
  (*pcVar4)(pIVar2,&local_350,bVar6);
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x98);
  pFVar14 = FWindowsPlatformMemory::GetStats(&local_e8);
  lVar3 = pFVar14->_padding_;
  ::FString::FString(&local_340,L"TotalPhysicalRAM");
  (*pcVar4)(pIVar2,&local_340,lVar3);
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0xb0);
  iVar8 = FWindowsPlatformMisc::NumberOfCores();
  ::FString::FString(&local_330,L"CPUPhysicalCores");
  (*pcVar4)(pIVar2,&local_330,iVar8);
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0xb0);
  iVar8 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  ::FString::FString(&local_320,L"CPULogicalCores");
  (*pcVar4)(pIVar2,&local_320,iVar8);
  if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  pFVar13 = FWindowsPlatformMisc::GetCPUVendor(&local_198);
  ::FString::FString(&local_310,L"CPUVendor");
  (*pcVar4)(pIVar2,&local_310,pFVar13);
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  if ((TOptional<int>)local_198.Data.AllocatorInstance.Data != (TOptional<int>)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  pFVar13 = FWindowsPlatformMisc::GetCPUBrand(&local_188);
  ::FString::FString(&local_300,L"CPUBrand");
  (*pcVar4)(pIVar2,&local_300,pFVar13);
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  if ((TOptional<int>)local_188.Data.AllocatorInstance.Data != (TOptional<int>)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0xa8);
  uVar9 = FWindowsPlatformMisc::GetCPUInfo();
  ::FString::FString(&local_2f0,L"CPUInfo");
  (*pcVar4)(pIVar2,&local_2f0,uVar9);
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  pFVar13 = FWindowsPlatformMisc::GetPrimaryGPUBrand(&local_178);
  ::FString::FString(&local_2e0,L"DesktopGPUAdapter");
  (*pcVar4)(pIVar2,&local_2e0,pFVar13);
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  if ((TOptional<int>)local_178.Data.AllocatorInstance.Data != (TOptional<int>)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  ::FString::FString(&local_2d0,L"RenderingGPUAdapter");
  (*pcVar4)(pIVar2,&local_2d0,0x155178018);
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  uVar9 = GRHIGlobals.GpuInfo.VendorId;
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0xa8);
  ::FString::FString(&local_2c0,L"GPUVendorID");
  (*pcVar4)(pIVar2,&local_2c0,uVar9);
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  uVar9 = GRHIGlobals.GpuInfo.DeviceId;
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0xa8);
  ::FString::FString(&local_2b0,L"GPUDeviceID");
  (*pcVar4)(pIVar2,&local_2b0,uVar9);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  uVar9 = GRHIGlobals.GpuInfo.DeviceRevision;
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0xa8);
  ::FString::FString(&local_2a0,L"GRHIDeviceRevision");
  (*pcVar4)(pIVar2,&local_2a0,uVar9);
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  ::FString::FString(&local_290,L"GRHIAdapterInternalDriverVersion");
  (*pcVar4)(pIVar2,&local_290,0x155178028);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  ::FString::FString(&local_280,L"GRHIAdapterUserDriverVersion");
  (*pcVar4)(pIVar2,&local_280,0x155178038);
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  if (GDynamicRHI == (FDynamicRHI *)0x0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
  }
  pFVar13 = ::FString::FString(&local_168,pwVar15);
  ::FString::FString(&local_270,L"GRHIName");
  (*pcVar4)(pIVar2,&local_270,pFVar13);
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  bVar6 = GRHIGlobals.GpuInfo.AdapterDriverOnDenyList;
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x80);
  ::FString::FString(&local_260,L"GRHIAdapterDriverOnDenyList");
  (*pcVar4)(pIVar2,&local_260,bVar6);
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x98);
  ::FString::FString(&local_250,L"GRHIAdapterMemory");
  (*pcVar4)(pIVar2,&local_250,local_128);
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  pFVar13 = EngineAnalyticsProperties::GetProjectName(&local_158,pUVar1);
  ::FString::FString(&local_240,L"ProjectName");
  (*pcVar4)(pIVar2,&local_240,pFVar13);
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428.Data.ArrayNum = 0;
  local_428.Data.ArrayMax = 0;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  FGuid::AppendString(&pUVar1->ProjectID,&local_428,DigitsWithHyphens);
  ::FString::FString(&local_230,L"ProjectID");
  (*pcVar4)(pIVar2,&local_230,&local_428);
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  ::FString::FString(&local_220,L"ProjectDescription");
  (*pcVar4)(pIVar2,&local_220,&pUVar1->Description);
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  ::FString::FString(&local_210,L"ProjectVersion");
  (*pcVar4)(pIVar2,&local_210,&pUVar1->ProjectVersion);
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  this_01 = FEngineVersion::Current();
  pFVar13 = FEngineVersion::ToString(this_01,&local_148,Changelist);
  ::FString::FString(&local_200,L"EngineVersion");
  (*pcVar4)(pIVar2,&local_200,pFVar13);
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  pwVar15 = FCommandLine::GetForLogging();
  pFVar13 = ::FString::FString(&local_138,pwVar15);
  ::FString::FString(&local_1f0,L"CommandLine");
  (*pcVar4)(pIVar2,&local_1f0,pFVar13);
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  uVar9 = this->CrcProcessId;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0xa8);
  ::FString::FString(&local_3e0,L"MonitorPid");
  (*pcVar4)(pIVar2,&local_3e0,uVar9);
  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  bVar6 = true;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x78);
  local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_440.Data.ArrayNum = 0;
  local_440.Data.ArrayMax = 0;
  iVar8 = (int)local_470;
  uVar16 = (ulonglong)(int)local_470;
  pFVar11 = local_478.Data + uVar16 * 0x10;
  FVar18.Data = local_478.Data;
  while( true ) {
    if ((int)uVar16 != iVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar18.Data == pFVar11) break;
    if (bVar6) {
      bVar6 = false;
    }
    else {
      ::FString::AppendChars(&local_440,L",",1);
    }
    iVar21 = *(int *)(FVar18.Data + 8) + -1;
    if (*(int *)(FVar18.Data + 8) == 0) {
      iVar21 = 0;
    }
    ::FString::AppendChars(&local_440,*(wchar_t **)FVar18.Data,iVar21);
    uVar16 = local_470 & 0xffffffff;
    FVar18.Data = FVar18.Data + 0x10;
  }
  ::FString::FString(&local_3d0,L"Plugins");
  (*pcVar4)(pIVar2,&local_3d0,&local_440);
  if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
  }
  if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x80);
  if (this->CrcProcessId == 0) {
    bVar6 = EngineAnalyticsProperties::IsCrcExecutableMissing();
  }
  else {
    bVar6 = false;
  }
  ::FString::FString(&local_3c0,L"IsCrcMissing");
  (*pcVar4)(pIVar2,&local_3c0,bVar6);
  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x80);
  pIVar17 = IProjectManager::Get();
  uVar7 = (**(code **)((longlong)*pIVar17 + 0xb0))(pIVar17);
  ::FString::FString(&local_3b0,L"IsInEnterprise");
  (*pcVar4)(pIVar2,&local_3b0,uVar7);
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
  }
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  pcVar4 = *(code **)((longlong)*pIVar2 + 0x70);
  ::FString::FString(&local_3a0,L"StartupTimestamp");
  (*pcVar4)(pIVar2,&local_3a0,&this->SessionStartTimeUtc);
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  FDateTime::UtcNow();
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2,&EngineAnalyticsProperties::Timestamp,local_430);
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x70))
            (pIVar2,&EngineAnalyticsProperties::LastTickTimestamp,local_430);
  QueryPerformanceCounter(&local_3f0);
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0xb0))
            (pIVar2,&EngineAnalyticsProperties::SessionDurationSecs,
             (int)(((double)local_3f0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5) -
                  this->SessionStartTimeSecs));
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x98))
            (pIVar2,&EngineAnalyticsProperties::EngineTickCount,GFrameCounter);
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x98))
            (pIVar2,&EngineAnalyticsProperties::SessionTickCount,this->CurrSessionTickCount);
  FVar18 = FUserActivityTracking::UserActivity.ActionName.Data.AllocatorInstance;
  if (FUserActivityTracking::UserActivity.ActionName.Data.ArrayNum < 2) {
    FVar18 = EngineAnalyticsProperties::UnknownUserActivity.Data.AllocatorInstance;
  }
  local_450.Data = (FScriptContainerElement *)0x0;
  iVar8 = EngineAnalyticsProperties::UnknownUserActivity.Data.ArrayNum;
  if (1 < FUserActivityTracking::UserActivity.ActionName.Data.ArrayNum) {
    iVar8 = FUserActivityTracking::UserActivity.ActionName.Data.ArrayNum;
  }
  local_448 = iVar8;
  if (iVar8 == 0) {
    local_444 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,&local_450,iVar8,&local_444);
    memcpy(local_450.Data,FVar18.Data,(longlong)iVar8 * 2);
  }
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x78))
            (pIVar2,&EngineAnalyticsProperties::UserActivity,&local_450,0);
  if (local_450.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.Data);
  }
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x90))(pIVar2,&EngineAnalyticsProperties::AverageFPS,GAverageFPS)
  ;
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&EngineAnalyticsProperties::IsTerminating,0);
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&EngineAnalyticsProperties::WasShutdown,0);
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&EngineAnalyticsProperties::IsCrashing,0);
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&EngineAnalyticsProperties::IsGpuCrash,0);
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&EngineAnalyticsProperties::IsUserLoggingOut,0);
  if ((GEngine == (UEngine *)0x0) || (GEngine->bIsVanillaProduct == false)) {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&EngineAnalyticsProperties::IsVanilla,uVar22);
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&EngineAnalyticsProperties::IsLowDriveSpace,0);
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&EngineAnalyticsProperties::WasDebuggerIgnored,0);
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&EngineAnalyticsProperties::WasEverDebugged,0);
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0xb0))(pIVar2,&EngineAnalyticsProperties::ShutdownType,4);
  bVar6 = FWindowsPlatformMisc::IsRunningOnBattery();
  pIVar2 = (this->Store).Object;
  (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&EngineAnalyticsProperties::RunningOnBattery,bVar6)
  ;
  if (((this->Store).Object == (IAnalyticsPropertyStore *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FEngineAnalyticsSessionSummary *)(*pcVar4)();
    return pFVar12;
  }
  pIVar2 = (this->Store).Object;
  local_3e8 = 0x7fffffffffffffff;
  (**(code **)((longlong)*pIVar2 + 0x150))(pIVar2,0,&local_3e8);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FEngineAnalyticsSessionSummary>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnHandleSystemError,(FEngineAnalyticsSessionSummary *)local_1e0,
             (pmf_1c640c14)this);
  this_02 = FCoreDelegates::GetApplicationWillTerminateDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
  AddRaw<FEngineAnalyticsSessionSummary>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             this_02,(FEngineAnalyticsSessionSummary *)(local_1e0 + 8),(pmf_1c640c14)this);
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddRaw<FEngineAnalyticsSessionSummary>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::IsVanillaProductChanged,(FEngineAnalyticsSessionSummary *)local_1c0,
             (pmf_c073a1f8)this);
  TMulticastDelegateRegistration<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>::
  AddRaw<FEngineAnalyticsSessionSummary>
            ((TMulticastDelegateRegistration<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::OnUserLoginChangedEvent,(FEngineAnalyticsSessionSummary *)local_1d0
             ,(pmf_83d26b5a)this);
  TMulticastDelegateRegistration<void___cdecl(FUserActivity_const_&),FDefaultDelegateUserPolicy>::
  AddRaw<FEngineAnalyticsSessionSummary>
            ((TMulticastDelegateRegistration<void___cdecl(FUserActivity_const_&),FDefaultDelegateUserPolicy>
              *)&FUserActivityTracking::OnActivityChanged,
             (FEngineAnalyticsSessionSummary *)(local_1d0 + 8),(pmf_15c6a300)this);
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_478.Data,(int)local_470);
  if (local_478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data);
  }
  DestructItems<TSharedRef<IPlugin,1>,int>(local_460,local_458);
  if (local_460 != (TSharedRef<IPlugin,1> *)0x0) {
    FMemory::Free(local_460);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FEngineAnalyticsSessionSummary @ 1473dacc0

void __thiscall
FEngineAnalyticsSessionSummary::~FEngineAnalyticsSessionSummary
          (FEngineAnalyticsSessionSummary *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Store).SharedReferenceCount.ReferenceController);
  return;
}

// LowDriveSpaceDetected @ 14740aad0

void __thiscall
FEngineAnalyticsSessionSummary::LowDriveSpaceDetected(FEngineAnalyticsSessionSummary *this)

{
  IAnalyticsPropertyStore *pIVar1;
  FTimespan local_res8 [4];
  
  pIVar1 = (this->Store).Object;
  (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,&EngineAnalyticsProperties::IsLowDriveSpace,1);
  local_res8[0].Ticks = 0;
  UpdateSessionProgress(this,true,local_res8,false);
  return;
}

// OnCrashing @ 14740d230

void __thiscall FEngineAnalyticsSessionSummary::OnCrashing(FEngineAnalyticsSessionSummary *this)

{
  IAnalyticsPropertyStore *pIVar1;
  undefined1 auVar2 [16];
  FTimespan local_res8 [4];
  
  pIVar1 = (this->Store).Object;
  (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,&EngineAnalyticsProperties::IsCrashing,1);
  pIVar1 = (this->Store).Object;
  (**(code **)((longlong)*pIVar1 + 0x80))
            (pIVar1,&EngineAnalyticsProperties::IsGpuCrash,GIsGPUCrashed);
  pIVar1 = (this->Store).Object;
  (**(code **)((longlong)*pIVar1 + 0xb0))(pIVar1,&EngineAnalyticsProperties::ShutdownType,3);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = __real_412e848100000000;
  auVar2 = roundpd(auVar2,auVar2,1);
  local_res8[0].Ticks = (long64)auVar2._0_8_;
  UpdateSessionProgress(this,false,local_res8,true);
  return;
}

// OnTerminate @ 14740d3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FEngineAnalyticsSessionSummary::OnTerminate(FEngineAnalyticsSessionSummary *this)

{
  IAnalyticsPropertyStore *pIVar1;
  undefined ***pppuVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_78 [32];
  FTimespan local_58 [2];
  code *local_48;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pIVar1 = (this->Store).Object;
  (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,&EngineAnalyticsProperties::IsTerminating,1);
  pIVar1 = (this->Store).Object;
  local_38 = &___7__TFunction_OwnedObject_P6A_NPEBHAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = (undefined ***)0x0;
  local_30 = EngineAnalyticsProperties::ShouldOverwriteShutdownType;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(int_const_*,int_const_&),bool,int_const_*,int_const_&>
             ::Call;
  (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,&EngineAnalyticsProperties::ShutdownType,1);
  if (local_48 != (code *)0x0) {
    pppuVar2 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar2 = local_20;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = __real_412e848100000000;
  auVar3 = roundpd(auVar3,auVar3,1);
  local_58[0].Ticks = (long64)auVar3._0_8_;
  UpdateSessionProgress(this,false,local_58,false);
  return;
}

// OnUserActivity @ 14740d480

void __thiscall
FEngineAnalyticsSessionSummary::OnUserActivity
          (FEngineAnalyticsSessionSummary *this,FUserActivity *param_1)

{
  FScriptContainerElement *_Src;
  IAnalyticsPropertyStore *pIVar1;
  FString *pFVar2;
  longlong lVar3;
  FTimespan local_res8;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pFVar2 = &EngineAnalyticsProperties::UnknownUserActivity;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (1 < (param_1->ActionName).Data.ArrayNum) {
    pFVar2 = &param_1->ActionName;
  }
  local_10 = (((FUserActivity *)pFVar2)->ActionName).Data.ArrayNum;
  lVar3 = (longlong)local_10;
  _Src = (((FUserActivity *)pFVar2)->ActionName).Data.AllocatorInstance.Data;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar3 * 2);
  }
  pIVar1 = (this->Store).Object;
  (**(code **)((longlong)*pIVar1 + 0x78))(pIVar1,&EngineAnalyticsProperties::UserActivity,&local_18)
  ;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  local_res8.Ticks = 0;
  UpdateSessionProgress(this,true,&local_res8,false);
  return;
}

// OnUserLoginChanged @ 14740d560

void __thiscall
FEngineAnalyticsSessionSummary::OnUserLoginChanged
          (FEngineAnalyticsSessionSummary *this,bool param_1,int param_2,int param_3)

{
  IAnalyticsPropertyStore *pIVar1;
  undefined4 in_register_00000084;
  undefined1 auVar2 [16];
  FTimespan local_18 [2];
  
  if (!param_1) {
    pIVar1 = (this->Store).Object;
    (**(code **)((longlong)*pIVar1 + 0x80))
              (pIVar1,&EngineAnalyticsProperties::IsUserLoggingOut,
               CONCAT71((int7)(CONCAT44(in_register_00000084,param_2) >> 8),1));
    auVar2._8_8_ = 0;
    auVar2._0_8_ = __real_412e848100000000;
    auVar2 = roundpd(auVar2,auVar2,1);
    local_18[0].Ticks = (long64)auVar2._0_8_;
    UpdateSessionProgress(this,false,local_18,false);
  }
  return;
}

// OnVanillaStateChanged @ 14740d5c0

void __thiscall
FEngineAnalyticsSessionSummary::OnVanillaStateChanged
          (FEngineAnalyticsSessionSummary *this,bool param_1)

{
  IAnalyticsPropertyStore *pIVar1;
  FTimespan local_res8 [4];
  
  pIVar1 = (this->Store).Object;
  (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,&EngineAnalyticsProperties::IsVanilla,param_1);
  local_res8[0].Ticks = 0;
  UpdateSessionProgress(this,true,local_res8,false);
  return;
}

// Shutdown @ 1474199a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FEngineAnalyticsSessionSummary::Shutdown(FEngineAnalyticsSessionSummary *this)

{
  IAnalyticsPropertyStore *pIVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  FTimespan local_58 [2];
  code *local_48;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (this->bShutdown == false) {
    (**(code **)(this->_padding_ + 8))();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnHandleSystemError,this);
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              FCoreDelegates::GetApplicationWillTerminateDelegate();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::IsVanillaProductChanged,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnUserLoginChangedEvent,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FUserActivityTracking::OnActivityChanged,this);
    pIVar1 = (this->Store).Object;
    (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,&EngineAnalyticsProperties::WasShutdown,1);
    pIVar1 = (this->Store).Object;
    local_38 = &___7__TFunction_OwnedObject_P6A_NPEBHAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
    local_20 = (undefined ***)0x0;
    local_30 = EngineAnalyticsProperties::ShouldOverwriteShutdownType;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<bool_(__cdecl*)(int_const_*,int_const_&),bool,int_const_*,int_const_&>
               ::Call;
    (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,&EngineAnalyticsProperties::ShutdownType,0);
    if (local_48 != (code *)0x0) {
      pppuVar2 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar2 = local_20;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    local_58[0].Ticks = 0x7fffffffffffffff;
    UpdateSessionProgress(this,false,local_58,false);
    this->bShutdown = true;
  }
  return;
}

// ShutdownInternal @ 147419ad0

void __thiscall
FEngineAnalyticsSessionSummary::ShutdownInternal(FEngineAnalyticsSessionSummary *this)

{
  return;
}

// Tick @ 147419fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FEngineAnalyticsSessionSummary::Tick(FEngineAnalyticsSessionSummary *this,float param_1)

{
  TOptional<int> *pTVar1;
  IAnalyticsPropertyStore *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FDateTime FVar7;
  undefined ***pppuVar8;
  undefined4 in_XMM1_Db;
  undefined1 auStack_148 [32];
  int local_128;
  char local_124;
  FTimespan local_120;
  LARGE_INTEGER local_118;
  FTimespan local_110;
  LARGE_INTEGER local_108 [2];
  code *local_f8 [2];
  undefined **local_e8;
  code *local_e0;
  undefined ***local_d0;
  code *local_c8;
  undefined **local_b8;
  code *local_b0;
  undefined ***local_a0;
  code *local_98;
  undefined **local_88;
  code *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (this->bShutdown == false) {
    pIVar2 = (this->Store).Object;
    local_e8 = &___7__TFunction_OwnedObject_P6A_NAEA_K_Z_0A__0A__Function_Private_Core_UE__6B_;
    local_e0 = `FEngineAnalyticsSessionSummary::Tick'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_f8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(unsigned___int64_&),bool,unsigned___int64_&>::
                  Call;
    local_d0 = (undefined ***)0x0;
    (**(code **)((longlong)*pIVar2 + 0xe0))(pIVar2,CONCAT44(in_XMM1_Db,param_1),local_f8);
    if (local_f8[0] != (code *)0x0) {
      pppuVar8 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar8 = local_d0;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    pIVar2 = (this->Store).Object;
    (**(code **)((longlong)*pIVar2 + 0x90))
              (pIVar2,&EngineAnalyticsProperties::AverageFPS,GAverageFPS);
    local_a0 = (undefined ***)0x0;
    local_b8 = &
               ___7__TFunction_OwnedObject_P6A_NPEBUFDateTime__AEBU1__Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_b0 = `FEngineAnalyticsSessionSummary::Tick'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<bool_(__cdecl*)(FDateTime_const_*,FDateTime_const_&),bool,FDateTime_const_*,FDateTime_const_&>
               ::Call;
    FVar7 = FDateTime::UtcNow();
    pIVar2 = (this->Store).Object;
    (**(code **)((longlong)*pIVar2 + 0x28))
              (pIVar2,&EngineAnalyticsProperties::LastTickTimestamp,FVar7.Ticks);
    if (local_c8 != (code *)0x0) {
      pppuVar8 = &local_b8;
      if (local_a0 != (undefined ***)0x0) {
        pppuVar8 = local_a0;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    if ((this->CrcProcessId == 0) ||
       ((((this->CrcExitCode).bIsSet != false && ((this->CrcExitCode).TypedValue != 0xbdb2d)) ||
        (FGenericCrashContext::GetOutOfProcessCrashReporterExitCode(), local_124 == '\0')))) {
      bVar5 = false;
    }
    else {
      pTVar1 = &this->CrcExitCode;
      if ((TOptional<int> *)&local_128 != pTVar1) {
        pTVar1->TypedValue = local_128;
        (this->CrcExitCode).bIsSet = true;
      }
      if (((this->CrcExitCode).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar2 = (this->Store).Object;
      (**(code **)((longlong)*pIVar2 + 0xb0))
                (pIVar2,&EngineAnalyticsProperties::MonitorExitCode,pTVar1->TypedValue);
      local_120.Ticks = 0;
      UpdateSessionProgress(this,true,&local_120,false);
      bVar5 = true;
    }
    bVar4 = false;
    if ((this->bDebuggerIgnored == false) && (GIgnoreDebugger != false)) {
      pIVar2 = (this->Store).Object;
      this->bDebuggerIgnored = true;
      this->bWasEverDebugged = true;
      bVar4 = true;
      (**(code **)((longlong)*pIVar2 + 0x80))
                (pIVar2,&EngineAnalyticsProperties::WasDebuggerIgnored,1);
      pIVar2 = (this->Store).Object;
      (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&EngineAnalyticsProperties::WasEverDebugged,1);
      pIVar2 = (this->Store).Object;
      local_70 = (undefined ***)0x0;
      local_88 = &___7__TFunction_OwnedObject_P6A_NPEBHAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
      local_80 = EngineAnalyticsProperties::ShouldOverwriteShutdownType;
      local_98 = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(int_const_*,int_const_&),bool,int_const_*,int_const_&>
                 ::Call;
      (**(code **)((longlong)*pIVar2 + 0x68))(pIVar2,&EngineAnalyticsProperties::ShutdownType,2);
      if (local_98 != (code *)0x0) {
        pppuVar8 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar8 = local_70;
        }
        (*(code *)(*pppuVar8)[2])();
      }
    }
    if ((this->bWasEverDebugged == false) &&
       (bVar6 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar6)) {
      pIVar2 = (this->Store).Object;
      bVar4 = true;
      this->bWasEverDebugged = true;
      (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,&EngineAnalyticsProperties::WasEverDebugged,1);
      pIVar2 = (this->Store).Object;
      local_40 = (undefined ***)0x0;
      local_58 = &___7__TFunction_OwnedObject_P6A_NPEBHAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
      local_50 = EngineAnalyticsProperties::ShouldOverwriteShutdownType;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(int_const_*,int_const_&),bool,int_const_*,int_const_&>
                 ::Call;
      (**(code **)((longlong)*pIVar2 + 0x68))(pIVar2,&EngineAnalyticsProperties::ShutdownType,2);
      if (local_68 != (code *)0x0) {
        pppuVar8 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar8 = local_40;
        }
        (*(code *)(*pppuVar8)[2])();
      }
    }
    if ((bVar4 || bVar5) ||
       (QueryPerformanceCounter(&local_118),
       this->NextPersistTimeSeconds <=
       (double)local_118.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000)
       ) {
      local_110.Ticks = 0;
      UpdateSessionProgress(this,true,&local_110,false);
      QueryPerformanceCounter(local_108);
      this->NextPersistTimeSeconds =
           (double)(this->PersistPeriod).Ticks * __real_3e7ad7f29abcaf48 +
           (double)local_108[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
    }
  }
  return;
}

// UpdateDebuggerStates @ 14741ad70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FEngineAnalyticsSessionSummary::UpdateDebuggerStates(FEngineAnalyticsSessionSummary *this)

{
  IAnalyticsPropertyStore *pIVar1;
  bool bVar2;
  undefined ***pppuVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar4 = false;
  if ((this->bDebuggerIgnored == false) && (GIgnoreDebugger)) {
    this->bDebuggerIgnored = true;
    this->bWasEverDebugged = true;
    pIVar1 = (this->Store).Object;
    bVar4 = true;
    (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,&EngineAnalyticsProperties::WasDebuggerIgnored,1)
    ;
    pIVar1 = (this->Store).Object;
    (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,&EngineAnalyticsProperties::WasEverDebugged,1);
    pIVar1 = (this->Store).Object;
    local_30 = (undefined ***)0x0;
    local_48 = &___7__TFunction_OwnedObject_P6A_NPEBHAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
    local_40 = EngineAnalyticsProperties::ShouldOverwriteShutdownType;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(int_const_*,int_const_&),bool,int_const_*,int_const_&>
                  ::Call;
    (**(code **)((longlong)*pIVar1 + 0x68))
              (pIVar1,&EngineAnalyticsProperties::ShutdownType,2,local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar3 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar3 = local_30;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  if ((this->bWasEverDebugged == false) &&
     (bVar2 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar2)) {
    pIVar1 = (this->Store).Object;
    this->bWasEverDebugged = true;
    (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,&EngineAnalyticsProperties::WasEverDebugged,1);
    pIVar1 = (this->Store).Object;
    local_30 = (undefined ***)0x0;
    local_48 = &___7__TFunction_OwnedObject_P6A_NPEBHAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
    local_40 = EngineAnalyticsProperties::ShouldOverwriteShutdownType;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(int_const_*,int_const_&),bool,int_const_*,int_const_&>
                  ::Call;
    (**(code **)((longlong)*pIVar1 + 0x68))
              (pIVar1,&EngineAnalyticsProperties::ShutdownType,2,local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar3 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar3 = local_30;
      }
      (*(code *)(*pppuVar3)[2])();
    }
    bVar4 = true;
  }
  return bVar4;
}

// UpdateExternalProcessReporterState @ 14741b1c0

bool __thiscall
FEngineAnalyticsSessionSummary::UpdateExternalProcessReporterState
          (FEngineAnalyticsSessionSummary *this,bool param_1)

{
  TOptional<int> *pTVar1;
  IAnalyticsPropertyStore *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FTimespan local_res8;
  FTimespan local_res18;
  int local_18;
  char local_14;
  
  if ((this->CrcProcessId != 0) &&
     ((pTVar1 = &this->CrcExitCode, (this->CrcExitCode).bIsSet == false ||
      (pTVar1->TypedValue == 0xbdb2d)))) {
    FGenericCrashContext::GetOutOfProcessCrashReporterExitCode();
    if (local_14 != '\0') {
      if ((TOptional<int> *)&local_18 != pTVar1) {
        pTVar1->TypedValue = local_18;
        (this->CrcExitCode).bIsSet = true;
      }
      if ((this->CrcExitCode).bIsSet == false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pIVar2 = (this->Store).Object;
      (**(code **)((longlong)*pIVar2 + 0xb0))
                (pIVar2,&EngineAnalyticsProperties::MonitorExitCode,pTVar1->TypedValue);
      local_res8.Ticks = 0;
      UpdateSessionProgress(this,true,&local_res8,false);
      return true;
    }
    if ((!param_1) && ((this->CrcExitCode).bIsSet == false)) {
      bVar4 = FWindowsPlatformProcess::IsApplicationRunning(this->CrcProcessId);
      if (!bVar4) {
        pTVar1->TypedValue = 0xbdb2d;
        (this->CrcExitCode).bIsSet = true;
        pIVar2 = (this->Store).Object;
        (**(code **)((longlong)*pIVar2 + 0xb0))
                  (pIVar2,&EngineAnalyticsProperties::MonitorExitCode,0xbdb2d);
        local_res18.Ticks = 0;
        UpdateSessionProgress(this,true,&local_res18,false);
        return true;
      }
    }
  }
  return false;
}

// UpdateSessionProgress @ 14741b5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FEngineAnalyticsSessionSummary::UpdateSessionProgress
          (FEngineAnalyticsSessionSummary *this,bool param_1,FTimespan *param_2,bool param_3)

{
  IAnalyticsPropertyStore *pIVar1;
  code *pcVar2;
  bool bVar3;
  FDateTime FVar4;
  undefined ***pppuVar5;
  float fVar6;
  undefined1 auStack_f8 [32];
  LARGE_INTEGER local_d8 [2];
  code *local_c8 [2];
  undefined **local_b8;
  code *local_b0;
  undefined ***local_a0;
  code *local_98 [2];
  undefined **local_88;
  code *local_80;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  (**(code **)(this->_padding_ + 0x10))(this,param_3);
  local_a0 = (undefined ***)0x0;
  local_b8 = &___7__TFunction_OwnedObject_P6A_NPEBHAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_b0 = `FEngineAnalyticsSessionSummary::UpdateSessionProgress'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_c8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(int_const_*,int_const_&),bool,int_const_*,int_const_&>
                ::Call;
  QueryPerformanceCounter(local_d8);
  pIVar1 = (this->Store).Object;
  fVar6 = (float)(((double)local_d8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
                  __real_4170000000000000) - this->SessionStartTimeSecs);
  (**(code **)((longlong)*pIVar1 + 0x68))
            (pIVar1,&EngineAnalyticsProperties::SessionDurationSecs,
             (int)ROUND((fVar6 + fVar6) - __real_3f000000) >> 1,local_c8);
  if (local_c8[0] != (code *)0x0) {
    pppuVar5 = &local_b8;
    if (local_a0 != (undefined ***)0x0) {
      pppuVar5 = local_a0;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  local_70 = (undefined ***)0x0;
  local_88 = &
             ___7__TFunction_OwnedObject_P6A_NPEBUFDateTime__AEBU1__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_80 = `FEngineAnalyticsSessionSummary::UpdateSessionProgress'::__l2::<lambda_2>::
             <lambda_invoker_cdecl>;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FDateTime_const_*,FDateTime_const_&),bool,FDateTime_const_*,FDateTime_const_&>
                ::Call;
  FVar4 = FDateTime::UtcNow();
  pIVar1 = (this->Store).Object;
  (**(code **)((longlong)*pIVar1 + 0x28))
            (pIVar1,&EngineAnalyticsProperties::Timestamp,FVar4.Ticks,local_98);
  if (local_98[0] != (code *)0x0) {
    pppuVar5 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar5 = local_70;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  pIVar1 = (this->Store).Object;
  local_58 = &___7__TFunction_OwnedObject_P6A_NPEB_KAEB_K_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_40 = (undefined ***)0x0;
  local_50 = `FEngineAnalyticsSessionSummary::UpdateSessionProgress'::__l2::<lambda_3>::
             <lambda_invoker_cdecl>;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(unsigned___int64_const_*,unsigned___int64_const_&),bool,unsigned___int64_const_*,unsigned___int64_const_&>
                ::Call;
  (**(code **)((longlong)*pIVar1 + 0x50))
            (pIVar1,&EngineAnalyticsProperties::EngineTickCount,GFrameCounter,local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar5 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar5 = local_40;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((this->Store).Object == (IAnalyticsPropertyStore *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Store).Object;
  (**(code **)((longlong)*pIVar1 + 0x150))(pIVar1,param_1,param_2);
  return;
}

// UpdateSessionProgressInternal @ 14741b7c0

bool __thiscall
FEngineAnalyticsSessionSummary::UpdateSessionProgressInternal
          (FEngineAnalyticsSessionSummary *this,bool param_1)

{
  return false;
}

