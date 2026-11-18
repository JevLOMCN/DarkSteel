// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// Construct<FGenericPlatformMisc::FStaticData> @ 14160eaf0

void __cdecl FLazySingleton::Construct<FGenericPlatformMisc::FStaticData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Construct<TEventPool<1>_> @ 14160eb30

void __cdecl FLazySingleton::Construct<TEventPool<1>_>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = 0;
  return;
}

// Construct<TEventPool<0>_> @ 14160eb40

void __cdecl FLazySingleton::Construct<TEventPool<0>_>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = 0;
  return;
}

// Construct<FInternationalization> @ 1416ca8e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl FLazySingleton::Construct<FInternationalization>(void *param_1)

{
  bool bVar1;
  FICUInternationalization *this;
  FICUInternationalization *this_00;
  
  *(undefined1 *)param_1 = 0;
  this_00 = (FICUInternationalization *)0x0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  this = ::operator_new(0x270);
  if (this != (FICUInternationalization *)0x0) {
    this_00 = FICUInternationalization::FICUInternationalization(this,param_1);
  }
  *(FICUInternationalization **)((longlong)param_1 + 0x28) = this_00;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  if ((*(char *)param_1 == '\0') && (IsInitializing == false)) {
    IsInitializing = true;
    bVar1 = FICUInternationalization::Initialize(this_00);
    *(bool *)param_1 = bVar1;
    IsInitializing = false;
  }
  return;
}

// Construct<FTextCache> @ 141727fb0

void __cdecl FLazySingleton::Construct<FTextCache>(void *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x20;
  puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x80;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    puVar1 = puVar1 + 0xb;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// Construct<FTextKeyState> @ 141728000

void __cdecl FLazySingleton::Construct<FTextKeyState>(void *param_1)

{
  FGuid local_18;
  
  local_18.A = 0xd31281c0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  local_18.B = 0x182b4419;
  local_18.C = 0x814e25be;
  local_18.D = 0x4b7e7b41;
  UE::Core::FVisualizerDebuggingState::Assign(&local_18,param_1);
  return;
}

// Construct<FTextLocalizationManager> @ 141728090

void __cdecl FLazySingleton::Construct<FTextLocalizationManager>(void *param_1)

{
  ILocalizedTextSource *pIVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<ILocalizedTextSource,1> TStack_38;
  TSharedRef<ILocalizedTextSource,1> TStack_28;
  
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 2;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined2 *)((longlong)param_1 + 0x118) = 1;
  pTVar4 = ::operator_new(0x28);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x150) = 0x10;
    *(undefined8 *)((longlong)param_1 + 0x158) = 0;
    pTVar4 = pTVar5;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFLocalizationResourceTextSource___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)&___7FLocalizationResourceTextSource__6B_;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x150) = pTVar4 + 1;
    *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x158) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar4 = ::operator_new(0xe0);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x160) = 0x10;
    *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFPolyglotTextSource___00_SharedPointerInternals__6B_;
    memset(pTVar4 + 1,0,0xd0);
    pTVar4[1]._padding_ = (longlong)&___7FPolyglotTextSource__6B_;
    *(undefined4 *)((longlong)&pTVar4[4]._padding_ + 4) = 0x80;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    *(undefined4 *)((longlong)&pTVar4[9]._padding_ + 4) = 0x80;
    pTVar4[9].SharedReferenceCount = (atomic<int>)0xffffffff;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&pTVar4[0xb].SharedReferenceCount,4000);
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160) = pTVar4 + 1;
    *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x168) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  if (*(longlong *)((longlong)param_1 + 0x150) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x158);
  pIVar1 = *(ILocalizedTextSource **)((longlong)param_1 + 0x150);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar1 == (ILocalizedTextSource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_38.Object = pIVar1;
  TStack_38.SharedReferenceCount.ReferenceController = pTVar5;
  FTextLocalizationManager::RegisterTextSource(param_1,&TStack_38,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (*(longlong *)((longlong)param_1 + 0x160) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x168);
  pIVar1 = *(ILocalizedTextSource **)((longlong)param_1 + 0x160);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar1 == (ILocalizedTextSource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_28.Object = pIVar1;
  TStack_28.SharedReferenceCount.ReferenceController = pTVar5;
  FTextLocalizationManager::RegisterTextSource(param_1,&TStack_28,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Construct<FLogSuppressionImplementation> @ 141789400

void __cdecl FLazySingleton::Construct<FLogSuppressionImplementation>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLogSuppressionInterface__6B_;
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)((longlong)param_1 + 8));
  *(undefined ***)param_1 =
       &FLogSuppressionImplementation::_vftable__for__FLogSuppressionInterface__;
  *(undefined ***)((longlong)param_1 + 8) =
       &FLogSuppressionImplementation::_vftable__for__FSelfRegisteringExec__;
  *(undefined8 *)((longlong)param_1 + 0x810) = 0;
  *(undefined4 *)((longlong)param_1 + 0x818) = 0;
  *(undefined4 *)((longlong)param_1 + 0x81c) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x820) = 0;
  *(undefined8 *)((longlong)param_1 + 0x828) = 0;
  *(undefined8 *)((longlong)param_1 + 0x840) = 0;
  *(undefined4 *)((longlong)param_1 + 0x848) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x850) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x854) = 0;
  *(undefined8 *)((longlong)param_1 + 0x860) = 0;
  *(undefined4 *)((longlong)param_1 + 0x868) = 0;
  *(undefined8 *)((longlong)param_1 + 0x870) = 0;
  *(undefined8 *)((longlong)param_1 + 0x878) = 0;
  *(undefined8 *)((longlong)param_1 + 0x890) = 0;
  *(undefined4 *)((longlong)param_1 + 0x898) = 0;
  *(undefined4 *)((longlong)param_1 + 0x89c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x8a0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8ec) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x8f0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x900) = 0;
  *(undefined4 *)((longlong)param_1 + 0x908) = 0;
  *(undefined1 *)((longlong)param_1 + 0x910) = 0;
  return;
}

// Construct<FCoreTextsSingleton> @ 141846600

void __cdecl FLazySingleton::Construct<FCoreTextsSingleton>(void *param_1)

{
  FText::AsLocalizable_Advanced_LocText(param_1,L"Core",L"True",L"True");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)((longlong)param_1 + 0x10),L"Core",L"False",L"False");
  FText::AsLocalizable_Advanced_LocText((FText *)((longlong)param_1 + 0x20),L"Core",L"Yes",L"Yes");
  FText::AsLocalizable_Advanced_LocText((FText *)((longlong)param_1 + 0x30),L"Core",L"No",L"No");
  FText::AsLocalizable_Advanced_LocText((FText *)((longlong)param_1 + 0x40),L"Core",L"None",L"None")
  ;
  *(void **)((longlong)param_1 + 0x50) = param_1;
  *(FText **)((longlong)param_1 + 0x58) = (FText *)((longlong)param_1 + 0x10);
  *(longlong *)((longlong)param_1 + 0x60) = (longlong)param_1 + 0x20;
  *(longlong *)((longlong)param_1 + 0x68) = (longlong)param_1 + 0x30;
  *(longlong *)((longlong)param_1 + 0x70) = (longlong)param_1 + 0x40;
  return;
}

// Construct<FGlobalEngineVersions> @ 1418aba30

void __cdecl FLazySingleton::Construct<FGlobalEngineVersions>(void *param_1)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  wchar_t *pwVar6;
  FString FStack_38;
  FString FStack_28;
  
  pwVar6 = BuildSettings::GetBranchName();
  ::FString::FString(&FStack_38,pwVar6);
  uVar5 = BuildSettings::GetCurrentChangelist();
  bVar3 = BuildSettings::IsLicenseeVersion();
  FVar2.Data = FStack_38.Data.AllocatorInstance.Data;
  pFVar1 = (FString *)((longlong)param_1 + 0x10);
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(int *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)param_1 = 0x70005;
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(uint *)((longlong)param_1 + 8) = (uint)bVar3 << 0x1f | uVar5;
  if (pFVar1 != &FStack_38) {
    *(int *)((longlong)param_1 + 0x18) = FStack_38.Data.ArrayNum;
    if (FStack_38.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,FStack_38.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,FStack_38.Data.ArrayNum,
                 (int *)((longlong)param_1 + 0x1c));
      memcpy((pFVar1->Data).AllocatorInstance.Data,FVar2.Data,(longlong)FStack_38.Data.ArrayNum * 2)
      ;
    }
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  pwVar6 = BuildSettings::GetBranchName();
  ::FString::FString(&FStack_28,pwVar6);
  uVar5 = BuildSettings::GetCompatibleChangelist();
  bVar3 = BuildSettings::IsLicenseeVersion();
  bVar4 = BuildSettings::IsLicenseeVersion();
  FVar2.Data = FStack_28.Data.AllocatorInstance.Data;
  pFVar1 = (FString *)((longlong)param_1 + 0x30);
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(uint *)((longlong)param_1 + 0x28) = (uint)bVar3 << 0x1f | uVar5;
  *(int *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x70005;
  *(ushort *)((longlong)param_1 + 0x24) = (ushort)bVar4;
  if (pFVar1 != &FStack_28) {
    *(int *)((longlong)param_1 + 0x38) = FStack_28.Data.ArrayNum;
    if (FStack_28.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,FStack_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,FStack_28.Data.ArrayNum,
                 (int *)((longlong)param_1 + 0x3c));
      memcpy((pFVar1->Data).AllocatorInstance.Data,FVar2.Data,(longlong)FStack_28.Data.ArrayNum * 2)
      ;
    }
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return;
}

// Construct<FPaths::FStaticData> @ 141907420

void __cdecl FLazySingleton::Construct<FPaths::FStaticData>(void *param_1)

{
  InitializeCriticalSectionAndSpinCount(param_1,4000);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  *(undefined2 *)((longlong)param_1 + 0x124) = 0;
  return;
}

