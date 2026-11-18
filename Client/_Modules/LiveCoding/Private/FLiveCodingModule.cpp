// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveCoding
// Functions: 41

// FLiveCodingModule @ 146cd01c0

FLiveCodingModule * __thiscall FLiveCodingModule::FLiveCodingModule(FLiveCodingModule *this)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  FString *pFVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  (this->SettingsSection).Object = (ISettingsSection *)0x0;
  (this->SettingsSection).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->State = (atomic<FLiveCodingModule::EState>)0x0;
  this->bUpdateModulesInTick = (atomic<bool>)0x0;
  this->bHasReinstancingOccurred = false;
  this->bHasPatchBeenLoaded = false;
  this->LastResults = Success;
  *(undefined8 *)&(this->ConfiguredModules).Elements = 0;
  *(undefined8 *)&(this->ConfiguredModules).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConfiguredModules).Elements.field_0x20 = 0;
  this->_padding_ = (longlong)&___7FLiveCodingModule__6B_;
  this->bSettingsEnabledLastTick = false;
  this->bEnableReinstancingLastTick = false;
  this->bBuildArgumentsSet = false;
  *(undefined4 *)&(this->ConfiguredModules).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConfiguredModules).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfiguredModules).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfiguredModules).Elements.field_0x34 = 0;
  (this->ConfiguredModules).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConfiguredModules).HashSize = 0;
  (this->LppPendingTokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LppPendingTokens).ArrayNum = 0;
  (this->LppPendingTokens).ArrayMax = 0;
  this->CallbackCookie = (void *)0x0;
  (this->LastKnownTargetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastKnownTargetName).Data.ArrayNum = 0;
  (this->LastKnownTargetName).Data.ArrayMax = 0;
  FText::FText(&this->EnableErrorText);
  pFVar6 = FPaths::EngineDir(&local_48);
  FPaths::ConvertRelativePathToFull(&this->FullEngineDir,pFVar6);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar6 = FPaths::EnginePluginsDir(&local_48);
  FPaths::ConvertRelativePathToFull(&this->FullEnginePluginsDir,pFVar6);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar6 = FPaths::ProjectDir(&local_48);
  FPaths::ConvertRelativePathToFull(&this->FullProjectDir,pFVar6);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar6 = FPaths::ProjectPluginsDir(&local_48);
  FPaths::ConvertRelativePathToFull(&this->FullProjectPluginsDir,pFVar6);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar6 = &this->FullEngineDirFromExecutable;
  (this->FullProjectDirFromExecutable).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &this->FullEnginePluginsDirFromExecutable;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = &this->FullProjectPluginsDirFromExecutable;
  (this->FullEngineDirFromExecutable).Data.ArrayNum = 0;
  (this->FullEngineDirFromExecutable).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullEnginePluginsDirFromExecutable).Data.ArrayNum = 0;
  (this->FullEnginePluginsDirFromExecutable).Data.ArrayMax = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullProjectPluginsDirFromExecutable).Data.ArrayNum = 0;
  (this->FullProjectPluginsDirFromExecutable).Data.ArrayMax = 0;
  (this->FullProjectDirFromExecutable).Data.ArrayNum = 0;
  (this->FullProjectDirFromExecutable).Data.ArrayMax = 0;
  (this->EndFrameDelegateHandle).ID = 0;
  (this->ModulesChangedDelegateHandle).ID = 0;
  *(undefined8 *)&this->OnPatchCompleteDelegate = 0;
  *(undefined8 *)&(this->OnPatchCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPatchCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnPatchCompleteDelegate).field_0x18 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SetBuildArgumentsCs,4000);
  (this->Reload).Ptr = (FNullReload *)0x0;
  this->GlobalMutex = (void *)0x0;
  GLiveCodingModule = this;
  pwVar7 = FWindowsPlatformProcess::ExecutablePath();
  ::FString::FString(&local_48,pwVar7);
  FPaths::GetPath(&local_58,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar8 = FPaths::EngineDir(&local_48);
  FVar4.Data = local_58.Data.AllocatorInstance.Data;
  iVar9 = (pFVar8->Data).ArrayNum;
  iVar11 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar11 = 0;
  }
  iVar9 = local_58.Data.ArrayNum;
  if ((iVar9 != 0) || (iVar5 = 2, iVar11 == -1)) {
    iVar5 = 1;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = iVar9;
  if ((iVar9 == 0) && (iVar5 + iVar11 == 0)) {
    local_98.Data._8_8_ = local_58.Data._8_8_ & 0xffffffff;
  }
  else {
    uVar10 = iVar9 + iVar5 + iVar11;
    if ((int)uVar10 < iVar9) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar10,0,(ForAnyElementType *)&local_98,iVar9,&local_98.Data.ArrayMax);
    if (iVar9 != 0) {
      memcpy(local_98.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar9 * 2);
    }
  }
  ::FString::PathAppend(&local_98,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar11);
  if (pFVar6 != &local_98) {
    pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar6->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    (this->FullEngineDirFromExecutable).Data.ArrayNum = local_98.Data.ArrayNum;
    (this->FullEngineDirFromExecutable).Data.ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FPaths::NormalizeDirectoryName(pFVar6);
  FPaths::CollapseRelativeDirectories(pFVar6,false);
  pFVar6 = FPaths::EnginePluginsDir(&local_48);
  FVar4.Data = local_58.Data.AllocatorInstance.Data;
  iVar9 = (pFVar6->Data).ArrayNum;
  iVar11 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar11 = 0;
  }
  iVar9 = local_58.Data.ArrayNum;
  if ((iVar9 != 0) || (iVar5 = 2, iVar11 == -1)) {
    iVar5 = 1;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = iVar9;
  if ((iVar9 == 0) && (iVar11 + iVar5 == 0)) {
    local_88.Data._8_8_ = local_58.Data._8_8_ & 0xffffffff;
  }
  else {
    uVar10 = iVar11 + iVar5 + iVar9;
    if ((int)uVar10 < iVar9) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar10,0,(ForAnyElementType *)&local_88,iVar9,&local_88.Data.ArrayMax);
    if (iVar9 != 0) {
      memcpy(local_88.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar9 * 2);
    }
  }
  ::FString::PathAppend(&local_88,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar11);
  if (pFVar1 != &local_88) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    (this->FullEnginePluginsDirFromExecutable).Data.ArrayNum = local_88.Data.ArrayNum;
    (this->FullEnginePluginsDirFromExecutable).Data.ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FPaths::NormalizeDirectoryName(pFVar1);
  FPaths::CollapseRelativeDirectories(pFVar1,false);
  pFVar6 = FPaths::ProjectDir(&local_48);
  FVar4.Data = local_58.Data.AllocatorInstance.Data;
  iVar9 = (pFVar6->Data).ArrayNum;
  iVar11 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar11 = 0;
  }
  iVar9 = local_58.Data.ArrayNum;
  if ((iVar9 != 0) || (iVar5 = 2, iVar11 == -1)) {
    iVar5 = 1;
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = iVar9;
  if ((iVar9 == 0) && (iVar5 + iVar11 == 0)) {
    local_78.Data._8_8_ = local_58.Data._8_8_ & 0xffffffff;
  }
  else {
    uVar10 = iVar9 + iVar5 + iVar11;
    if ((int)uVar10 < iVar9) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar10,0,(ForAnyElementType *)&local_78,iVar9,&local_78.Data.ArrayMax);
    if (iVar9 != 0) {
      memcpy(local_78.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar9 * 2);
    }
  }
  ::FString::PathAppend(&local_78,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar11);
  pFVar6 = &this->FullProjectDirFromExecutable;
  if (pFVar6 != &local_78) {
    pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar6->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    (this->FullProjectDirFromExecutable).Data.ArrayNum = local_78.Data.ArrayNum;
    (this->FullProjectDirFromExecutable).Data.ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FPaths::NormalizeDirectoryName(pFVar6);
  FPaths::CollapseRelativeDirectories(pFVar6,false);
  pFVar6 = FPaths::ProjectPluginsDir(&local_48);
  FVar4.Data = local_58.Data.AllocatorInstance.Data;
  iVar9 = (pFVar6->Data).ArrayNum;
  iVar11 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar11 = 0;
  }
  iVar9 = local_58.Data.ArrayNum;
  if ((iVar9 != 0) || (iVar5 = 2, iVar11 == -1)) {
    iVar5 = 1;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = iVar9;
  if ((iVar9 == 0) && (iVar5 + iVar11 == 0)) {
    local_68.Data._8_8_ = local_58.Data._8_8_ & 0xffffffff;
  }
  else {
    uVar10 = iVar5 + iVar11 + iVar9;
    if ((int)uVar10 < iVar9) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar10,0,(ForAnyElementType *)&local_68,iVar9,&local_68.Data.ArrayMax);
    if (iVar9 != 0) {
      memcpy(local_68.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar9 * 2);
    }
  }
  ::FString::PathAppend(&local_68,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar11);
  if (pFVar2 != &local_68) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    (this->FullProjectPluginsDirFromExecutable).Data.ArrayNum = local_68.Data.ArrayNum;
    (this->FullProjectPluginsDirFromExecutable).Data.ArrayMax = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FPaths::NormalizeDirectoryName(pFVar2);
  FPaths::CollapseRelativeDirectories(pFVar2,false);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FLiveCodingModule @ 146cd13f0

void __thiscall FLiveCodingModule::~FLiveCodingModule(FLiveCodingModule *this)

{
  FNullReload *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  ITextData *pIVar4;
  ForElementType<FSetElementId> FVar5;
  
  this->_padding_ = (longlong)&___7FLiveCodingModule__6B_;
  GLiveCodingModule = (FLiveCodingModule *)0x0;
  pFVar1 = (this->Reload).Ptr;
  if (pFVar1 != (FNullReload *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SetBuildArgumentsCs);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPatchCompleteDelegate).field_0x8,
             *(int *)&(this->OnPatchCompleteDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnPatchCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPatchCompleteDelegate);
  pFVar3 = (this->FullProjectPluginsDirFromExecutable).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FullProjectDirFromExecutable).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FullEnginePluginsDirFromExecutable).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FullEngineDirFromExecutable).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FullProjectPluginsDir).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FullProjectDir).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FullEnginePluginsDir).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FullEngineDir).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pIVar4 = (this->EnableErrorText).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pFVar3 = (this->LastKnownTargetName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LppPendingTokens).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->ConfiguredModules).HashSize = 0;
  FVar5 = (this->ConfiguredModules).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ConfiguredModules).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SettingsSection).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

// AttemptSyncLivePatching @ 146cd27f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveCodingModule::AttemptSyncLivePatching(FLiveCodingModule *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<void_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Dst;
  Event *this_00;
  HANDLE hHandle;
  FNullReload *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  FUObjectItem *pFVar8;
  ClientStartupThread *pCVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  EInternalObjectFlags EVar15;
  UObjectBase *pUVar16;
  FUObjectItem *pFVar17;
  UClass *pUVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  UObjectBase *pUVar22;
  uint uVar23;
  ulonglong uVar24;
  FIdentityFunctor local_res8;
  ForAnyElementType local_148;
  undefined8 local_140;
  ForAnyElementType local_138;
  undefined8 local_130;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  local_128;
  FUObjectItem_u_8 local_120;
  TObjectIterator<UClass> local_118;
  FName local_100;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  undefined1 local_d0 [32];
  EObjectFlags local_b0;
  uint local_ac;
  undefined1 local_a8 [32];
  EObjectFlags local_88;
  uint local_84;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  
  iVar14 = (this->LppPendingTokens).ArrayNum;
  uVar24 = (ulonglong)iVar14;
  if (0 < iVar14) {
    pTVar3 = &this->LppPendingTokens;
    lVar20 = uVar24 * 8;
    do {
      lVar20 = lVar20 + -8;
      iVar14 = (int)uVar24;
      uVar21 = uVar24 & 0xffffffff;
      uVar23 = iVar14 - 1;
      uVar24 = (ulonglong)uVar23;
      uVar19 = 0;
      if ((int)uVar23 < (this->LppPendingTokens).ArrayNum) {
        uVar19 = (uint)-iVar14 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pCVar9 = g_startupThread;
      this_00 = *(Event **)((pTVar3->AllocatorInstance).Data + lVar20);
      if (g_startupThread == (ClientStartupThread *)0x0) {
        Logging::Log(USER,LOG_ERROR,"%s%s\n");
      }
      else if (this_00 == (Event *)0x0) {
LAB_146cd298e:
        uVar19 = 0;
        if ((int)uVar23 < (this->LppPendingTokens).ArrayNum) {
          uVar19 = (uint)-iVar14 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        _Dst = (pTVar3->AllocatorInstance).Data + uVar21 * 8 + -8;
        iVar14 = (this->LppPendingTokens).ArrayNum - iVar14;
        if (iVar14 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar14 << 3);
        }
        piVar1 = &(this->LppPendingTokens).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar3->AllocatorInstance,(this->LppPendingTokens).ArrayNum,
                   &(this->LppPendingTokens).ArrayMax);
      }
      else {
        hHandle = (g_startupThread->m_thread).m_value;
        if (hHandle != Thread::INVALID_HANDLE.m_value) {
          WaitForSingleObject(hHandle,0xffffffff);
          CloseHandle((pCVar9->m_thread).m_value);
          (pCVar9->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
        }
        if (pCVar9->m_userCommandThread != (ClientUserCommandThread *)0x0) {
          if (((pCVar9->m_userCommandThread->m_thread).m_value == Thread::INVALID_HANDLE.m_value) ||
             (bVar10 = Event::WaitTimeout(this_00,0), !bVar10)) {
            bVar10 = false;
          }
          else {
            CloseHandle(this_00->m_event);
            ::operator_delete(this_00,8);
            bVar10 = true;
          }
          if (bVar10) goto LAB_146cd298e;
        }
      }
    } while (0 < (int)uVar23);
  }
  bVar10 = false;
  pUVar22 = (UObjectBase *)0x0;
  LppSyncPoint();
  if (((GIsCompileActive == false) || (GTriggerReload != false)) &&
     (pFVar4 = (this->Reload).Ptr, pFVar4 != (FNullReload *)0x0)) {
    if (GHasLoadedPatch == false) {
      if (GTriggerReload != false) {
        LppSyncPoint();
      }
    }
    else {
      local_138.Data = (FScriptContainerElement *)0x0;
      local_130 = 0;
      cVar11 = (**(code **)(pFVar4->_padding_ + 0x18))();
      if (cVar11 != '\0') {
        if (local_130._4_4_ < 0x400) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0x400,&local_138,(uint)local_130,(int *)((longlong)&local_130 + 4));
        }
        TObjectIterator<UObject>::TObjectIterator<UObject>
                  ((TObjectIterator<UObject> *)local_d0,RF_NoFlags,true,Borrowed);
        pFVar8 = (FUObjectItem *)local_d0._16_8_;
joined_r0x000146cd2afb:
        if (pFVar8 != (FUObjectItem *)0x0) {
          local_120 = pFVar8->field1_0x8;
          if (((local_138.Data <= &local_120) &&
              (local_130._4_4_ = (int)((ulonglong)local_130 >> 0x20),
              lVar20 = (longlong)local_130._4_4_,
              &local_120 < (FUObjectItem_u_8 *)((longlong)local_138.Data + lVar20 * 8))) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar14 = (uint)local_130;
          if ((uint)local_130 == local_130._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_138,(int *)((longlong)&local_130 + 4));
          }
          local_130 = CONCAT44(local_130._4_4_,iVar14 + 1);
          *(FUObjectItem_u_8 *)(local_138.Data + (longlong)iVar14 * 8) = local_120;
          do {
            do {
              bVar12 = FUObjectArray::TIterator::Advance((TIterator *)local_d0);
              pFVar8 = (FUObjectItem *)local_d0._16_8_;
              if (!bVar12) goto joined_r0x000146cd2afb;
              pUVar16 = pUVar22;
              if ((FUObjectItem *)local_d0._16_8_ != (FUObjectItem *)0x0) {
                pUVar16 = ((FUObjectItem_u_8 *)(local_d0._16_8_ + 8))->Object;
              }
            } while ((local_b0 & pUVar16->ObjectFlags) != RF_NoFlags);
            pUVar16 = pUVar22;
            if ((FUObjectItem *)local_d0._16_8_ != (FUObjectItem *)0x0) {
              pUVar16 = ((FUObjectItem_u_8 *)(local_d0._16_8_ + 8))->Object;
            }
            pFVar17 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar16->InternalIndex);
          } while ((local_ac & (uint)((ulonglong)(pFVar17->field0_0x0).FlagsAndRefCount >> 0x20)) !=
                   0);
          goto joined_r0x000146cd2afb;
        }
        LeaveCriticalSection
                  ((LPCRITICAL_SECTION)&((FUObjectArray *)local_d0._0_8_)->ObjObjectsCritical);
        local_res8 = SUB81(this,0);
        AlgoImpl::IntroSortInternal<UObject_*,int,FIdentityFunctor,TLess<void>_>
                  ((UObject **)local_138.Data,(uint)local_130,local_res8,(TLess<void>)local_res8);
      }
      ProcessNewlyLoadedUObjects((FName)0x0,true);
      local_148.Data = (FScriptContainerElement *)0x0;
      local_140 = 0;
      cVar11 = (**(code **)(((this->Reload).Ptr)->_padding_ + 0x18))();
      if (cVar11 != '\0') {
        TObjectIterator<UObject>::TObjectIterator<UObject>
                  ((TObjectIterator<UObject> *)local_a8,RF_NoFlags,true,Borrowed);
        pFVar8 = (FUObjectItem *)local_a8._16_8_;
joined_r0x000146cd2c92:
        if (pFVar8 != (FUObjectItem *)0x0) {
          pUVar16 = pUVar22;
          uVar19 = (uint)local_130;
          if ((int)(uint)local_130 < 1) {
LAB_146cd2ced:
            pUVar16 = pUVar22;
            if (pFVar8 != (FUObjectItem *)0x0) {
              pUVar16 = (pFVar8->field1_0x8).Object;
            }
            if (-1 < (int)((pUVar16->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr)->ClassFlags) {
              if (pFVar8 == (FUObjectItem *)0x0) {
                local_128.Object = (UObject *)0x0;
              }
              else {
                pUVar16 = (pFVar8->field1_0x8).Object;
                local_128.Object = (UObject *)0x0;
                if (pUVar16 != (UObjectBase *)0x0) {
                  UObjectBase::AddRef(pUVar16);
                  local_128.Object = (UObject *)pUVar16;
                }
              }
              if (((local_148.Data <= (FScriptContainerElement *)&local_128) &&
                  ((FScriptContainerElement *)&local_128 <
                   local_148.Data + (longlong)(int)local_140._4_4_ * 8)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar14 = (int)local_140;
              if ((int)local_140 == local_140._4_4_) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_148,(int *)((longlong)&local_140 + 4));
              }
              local_140 = CONCAT44(local_140._4_4_,iVar14 + 1);
              *(UObject **)(local_148.Data + (longlong)iVar14 * 8) = local_128.Object;
              local_128.Object = (UObject *)0x0;
            }
          }
          else {
            do {
              uVar23 = uVar19 >> 1;
              iVar14 = uVar23 + (int)pUVar16;
              if (((FUObjectItem_u_8 *)((longlong)local_138.Data + (longlong)iVar14 * 8))->Object <
                  (pFVar8->field1_0x8).Object) {
                pUVar16 = (UObjectBase *)(ulonglong)((uVar19 & 1) + iVar14);
              }
              uVar19 = uVar23;
            } while (uVar23 != 0);
            iVar14 = (int)pUVar16;
            if ((((int)(uint)local_130 <= iVar14) ||
                ((pFVar8->field1_0x8).Object <
                 ((FUObjectItem_u_8 *)((longlong)local_138.Data + (longlong)iVar14 * 8))->Object))
               || (iVar14 == -1)) goto LAB_146cd2ced;
          }
          do {
            do {
              bVar12 = FUObjectArray::TIterator::Advance((TIterator *)local_a8);
              pFVar8 = (FUObjectItem *)local_a8._16_8_;
              if (!bVar12) goto joined_r0x000146cd2c92;
              pUVar16 = pUVar22;
              if ((FUObjectItem *)local_a8._16_8_ != (FUObjectItem *)0x0) {
                pUVar16 = ((FUObjectItem_u_8 *)(local_a8._16_8_ + 8))->Object;
              }
            } while ((local_88 & pUVar16->ObjectFlags) != RF_NoFlags);
            pUVar16 = pUVar22;
            if ((FUObjectItem *)local_a8._16_8_ != (FUObjectItem *)0x0) {
              pUVar16 = ((FUObjectItem_u_8 *)(local_a8._16_8_ + 8))->Object;
            }
            pFVar17 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar16->InternalIndex);
          } while ((local_84 & (uint)((ulonglong)(pFVar17->field0_0x0).FlagsAndRefCount >> 0x20)) !=
                   0);
          goto joined_r0x000146cd2c92;
        }
        LeaveCriticalSection
                  ((LPCRITICAL_SECTION)&((FUObjectArray *)local_a8._0_8_)->ObjObjectsCritical);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          pUVar18 = Z_Construct_UClass_UObject_NoRegister();
          DummyDefaultObject = (pUVar18->ClassDefaultObject).field0_0x0.DebugPtr;
          _Init_thread_footer(&::_TSS0);
        }
        local_118.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.ObjectArray.ArrayNum = 0;
        local_118.ObjectArray.ArrayMax = 0;
        local_118.Index = 0xffffffff;
        EVar15 = UE::GetAsyncLoadingInternalFlagsExclusion();
        pUVar18 = Z_Construct_UClass_UClass_NoRegister();
        GetObjectsOfClass(pUVar18,&local_118.ObjectArray,true,RF_ClassDefaultObject,
                          EVar15 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
        while( true ) {
          TObjectIterator<UClass>::Advance(&local_118);
          lVar20 = (longlong)local_118.Index;
          if ((local_118.Index < 0) || (local_118.ObjectArray.ArrayNum <= local_118.Index)) break;
          uVar19 = 0;
          if (local_118.Index < local_118.ObjectArray.ArrayNum) {
            uVar19 = (uint)~local_118.Index >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar18 = *(UClass **)(local_118.ObjectArray.AllocatorInstance.Data + lVar20 * 8);
          local_100 = (FName)pUVar18->_padding_;
          ::FName::ToString(&local_100,&local_e0);
          bVar13 = ::FString::StartsWith(&local_e0,L"LIVECODING_",0xb,IgnoreCase);
          bVar12 = bVar10;
          if (bVar13) {
LAB_146cd2f90:
            bVar10 = bVar12;
            bVar12 = true;
          }
          else {
            local_f8 = (FName)pUVar18->_padding_;
            bVar10 = true;
            ::FName::ToString(&local_f8,&local_f0);
            bVar13 = ::FString::StartsWith(&local_f0,L"REINST_",7,IgnoreCase);
            bVar12 = true;
            if (bVar13) goto LAB_146cd2f90;
            bVar12 = false;
          }
          if ((bVar10) &&
             (bVar10 = false, local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (bVar12) {
            UClass::SetDefaultObject(pUVar18,DummyDefaultObject);
          }
        }
        if (local_118.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.ObjectArray.AllocatorInstance.Data);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreUObjectDelegates::ReloadCompleteDelegate,(FWriteAccessScope *)&local_80);
      bVar10 = false;
      FCoreUObjectDelegates::ReloadCompleteDelegate._28_4_ =
           FCoreUObjectDelegates::ReloadCompleteDelegate._28_4_ + 1;
      uVar19 = FCoreUObjectDelegates::ReloadCompleteDelegate._16_4_ - 1;
      if (-1 < (int)uVar19) {
        lVar20 = (longlong)(int)uVar19 << 4;
        bVar10 = false;
        do {
          uVar23 = 0;
          if ((int)uVar19 < (int)FCoreUObjectDelegates::ReloadCompleteDelegate._16_4_) {
            uVar23 = ~uVar19 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (((*(int *)(FCoreUObjectDelegates::ReloadCompleteDelegate._8_8_ + 8 + lVar20) == 0) ||
              (*(longlong **)(FCoreUObjectDelegates::ReloadCompleteDelegate._8_8_ + lVar20) ==
               (longlong *)0x0)) ||
             (cVar11 = (**(code **)(**(longlong **)
                                      (FCoreUObjectDelegates::ReloadCompleteDelegate._8_8_ + lVar20)
                                   + 0x68))(), cVar11 == '\0')) {
            bVar10 = true;
          }
          lVar20 = lVar20 + -0x10;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      FCoreUObjectDelegates::ReloadCompleteDelegate._28_4_ =
           FCoreUObjectDelegates::ReloadCompleteDelegate._28_4_ + -1;
      if (bVar10) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FCoreUObjectDelegates::ReloadCompleteDelegate,false);
      }
      if (local_80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
      }
      CollectGarbage(RF_NoFlags,true);
      if (GTriggerReload != false) {
        LppSyncPoint();
      }
      DestructItems<TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                ((TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                  *)local_148.Data,(int)local_140);
      bVar10 = local_140._4_4_ != 0;
      local_140 = (ulonglong)local_140._4_4_ << 0x20;
      if (bVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_148,0,(int *)((longlong)&local_140 + 4));
      }
      FDelayedAutoRegisterHelper::RunAndClearDelayedAutoRegisterDelegates(LiveCodingReload);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnPatchCompleteDelegate,(FWriteAccessScope *)&local_68);
      puVar2 = &(this->OnPatchCompleteDelegate).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + 1;
      bVar10 = false;
      uVar19 = *(int *)&(this->OnPatchCompleteDelegate).field_0x10 - 1;
      if (-1 < (int)uVar19) {
        lVar20 = (longlong)(int)uVar19 << 4;
        bVar10 = false;
        do {
          uVar23 = 0;
          if ((int)uVar19 < *(int *)&(this->OnPatchCompleteDelegate).field_0x10) {
            uVar23 = ~uVar19 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)&(this->OnPatchCompleteDelegate).field_0x8;
          if (((*(int *)(lVar20 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar20 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*plVar6 + 0x68))(), cVar11 == '\0')) {
            bVar10 = true;
          }
          lVar20 = lVar20 + -0x10;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      puVar2 = &(this->OnPatchCompleteDelegate).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      if (bVar10) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnPatchCompleteDelegate,false);
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      GHasLoadedPatch = false;
      this->bHasReinstancingOccurred =
           (bool)(this->bHasReinstancingOccurred | ((this->Reload).Ptr)->bHasReinstancingOccurred);
      DestructItems<TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                ((TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                  *)local_148.Data,(int)local_140);
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data);
      }
      if ((FUObjectItem_u_8 *)local_138.Data != (FUObjectItem_u_8 *)0x0) {
        FMemory::Free(local_138.Data);
      }
    }
    if (GIsCompileActive == false) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FString::FString(&Success,"Live coding succeeded");
        atexit(`FLiveCodingModule::AttemptSyncLivePatching'::__l44::
               _dynamic_atexit_destructor_for__Success__);
        _Init_thread_footer(&::_TSS1);
      }
      pFVar4 = (this->Reload).Ptr;
      if (pFVar4 != (FNullReload *)0x0) {
        (this->Reload).Ptr = (FNullReload *)0x0;
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
      if (GPostCompileResult == Success) {
        this->LastResults = Success;
        if (this->bHasReinstancingOccurred == false) {
          if (3 < (byte)LogLiveCoding._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
          }
        }
        else if (2 < (byte)LogLiveCoding._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
        }
      }
      else if (GPostCompileResult == NoChanges) {
        this->LastResults = NoChanges;
        if (3 < (byte)LogLiveCoding._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
        }
      }
      else if (GPostCompileResult == Failure) {
        this->LastResults = Failure;
        if (1 < (byte)LogLiveCoding._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
        }
      }
      else if (GPostCompileResult == Cancelled) {
        this->LastResults = Cancelled;
        if (1 < (byte)LogLiveCoding._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Live_coding_can_15145a558,
                     (FLogCategoryBase *)&LogLiveCoding);
        }
      }
      else {
        this->LastResults = Failure;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Windows\\LiveCoding\\Private\\LiveCodingModule.cpp"
                            ,0x3c3,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    else {
      ((this->Reload).Ptr)->bHasReinstancingOccurred = false;
    }
  }
  GTriggerReload = false;
  return;
}

// AutomaticallyCompileNewClasses @ 146cd34c0

bool __thiscall FLiveCodingModule::AutomaticallyCompileNewClasses(FLiveCodingModule *this)

{
  return this->Settings->bAutomaticallyCompileNewClasses;
}

// BeginReload @ 146cd34d0

void __cdecl FLiveCodingModule::BeginReload(void)

{
  FNullReload *pFVar1;
  FLiveCodingModule *pFVar2;
  FNullReload *pFVar3;
  
  if ((GLiveCodingModule != (FLiveCodingModule *)0x0) &&
     ((GLiveCodingModule->Reload).Ptr == (FNullReload *)0x0)) {
    GLiveCodingModule->bHasReinstancingOccurred = false;
    GLiveCodingModule->bHasPatchBeenLoaded = false;
    pFVar2 = GLiveCodingModule;
    GPostCompileResult = Success;
    pFVar3 = ::operator_new(0x18);
    if (pFVar3 == (FNullReload *)0x0) {
      pFVar3 = (FNullReload *)0x0;
    }
    else {
      pFVar3->LiveCodingModule = GLiveCodingModule;
      pFVar3->_padding_ = (longlong)&___7FNullReload__6B_;
      pFVar3->bEnabledMessage = false;
      pFVar3->bHasReinstancingOccurred = false;
      ::BeginReload(LiveCoding,(IReload *)pFVar3);
    }
    pFVar1 = (pFVar2->Reload).Ptr;
    if ((pFVar1 != pFVar3) && ((pFVar2->Reload).Ptr = pFVar3, pFVar1 != (FNullReload *)0x0)) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  return;
}

// CanEnableForSession @ 146cd3920

bool __thiscall FLiveCodingModule::CanEnableForSession(FLiveCodingModule *this)

{
  return true;
}

// Compile @ 146cd3bd0

void __thiscall FLiveCodingModule::Compile(FLiveCodingModule *this)

{
  Compile(this,None,(ELiveCodingCompileResult *)0x0);
  return;
}

// Compile @ 146cd3be0

bool __thiscall
FLiveCodingModule::Compile
          (FLiveCodingModule *this,ELiveCodingCompileFlags param_1,ELiveCodingCompileResult *param_2
          )

{
  ELiveCodingCompileResult EVar1;
  atomic<FLiveCodingModule::EState> aVar2;
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  float fVar3;
  ClientStartupThread *pCVar4;
  BaseCommand *pBVar5;
  void *pvVar6;
  FText *pFVar7;
  FText local_98;
  FText local_88;
  FSlowTask local_78;
  
  if (GIsCompileActive) {
    if (param_2 != (ELiveCodingCompileResult *)0x0) {
      *param_2 = CompileStillActive;
    }
  }
  else {
    EnableForSession(this,true);
    aVar2 = this->State;
    if (((aVar2 != (atomic<FLiveCodingModule::EState>)0x0) &&
        (aVar2 != (atomic<FLiveCodingModule::EState>)0x1)) &&
       ((aVar2 == (atomic<FLiveCodingModule::EState>)0x2 ||
        (aVar2 == (atomic<FLiveCodingModule::EState>)0x3)))) {
      UpdateModules(this,false);
      GIsCompileActive = true;
      this->LastResults = Failure;
      pCVar4 = g_startupThread;
      if (g_startupThread == (ClientStartupThread *)0x0) {
        Logging::Log(USER,LOG_ERROR,"%s%s\n");
      }
      else {
        hHandle = (g_startupThread->m_thread).m_value;
        if (hHandle != Thread::INVALID_HANDLE.m_value) {
          WaitForSingleObject(hHandle,0xffffffff);
          CloseHandle((pCVar4->m_thread).m_value);
          (pCVar4->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
        }
        this_00 = pCVar4->m_userCommandThread;
        if (this_00 != (ClientUserCommandThread *)0x0) {
          pBVar5 = ::operator_new(0x30);
          if (pBVar5 == (BaseCommand *)0x0) {
            pBVar5 = (BaseCommand *)0x0;
          }
          else {
            pBVar5->m_expectResponse = false;
            pBVar5->_padding_ = (longlong)&ProxyCommand<commands::TriggerRecompile>::_vftable_;
            pvVar6 = operator_new__(0);
            *(void **)&pBVar5[1].m_expectResponse = pvVar6;
            pBVar5[2]._padding_ = 0;
            *(undefined8 *)&pBVar5[2].m_expectResponse = 0;
          }
          ClientUserCommandThread::PushUserCommand(this_00,pBVar5);
        }
      }
      if ((param_1 & WaitForCompletion) == None) {
        if (param_2 != (ELiveCodingCompileResult *)0x0) {
          *param_2 = InProgress;
        }
        return true;
      }
      FText::AsLocalizable_Advanced_LocText
                (&local_98,L"LiveCodingModule",L"CompileStatusMessage",L"Compiling...");
      FSlowTask::FSlowTask(&local_78,0.0,&local_98,GIsSlowTask,GWarn);
      FSlowTask::Initialize(&local_78);
      FSlowTask::MakeDialog(&local_78,false,false);
      fVar3 = __real_3c23d70a;
      while (GIsCompileActive != false) {
        pFVar7 = FText::FText(&local_88);
        FSlowTask::EnterProgressFrame(&local_78,0.0,pFVar7);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        AttemptSyncLivePatching(this);
        FWindowsPlatformProcess::Sleep(fVar3);
      }
      AttemptSyncLivePatching(this);
      EVar1 = this->LastResults;
      if (param_2 != (ELiveCodingCompileResult *)0x0) {
        *param_2 = EVar1;
      }
      FSlowTask::Destroy(&local_78);
      if (local_78.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_78.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.DefaultMessage.TextData.Reference + 0x10))();
      }
      if (local_98.TextData.Reference == (ITextData *)0x0) {
        return EVar1 < CompileStillActive;
      }
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      return EVar1 < CompileStillActive;
    }
    if (param_2 != (ELiveCodingCompileResult *)0x0) {
      *param_2 = NotStarted;
    }
  }
  return false;
}

// EnableByDefault @ 146cd6f50

void __thiscall FLiveCodingModule::EnableByDefault(FLiveCodingModule *this,bool param_1)

{
  ISettingsSection *pIVar1;
  
  if (this->Settings->bEnabled != param_1) {
    this->Settings->bEnabled = param_1;
    pIVar1 = (this->SettingsSection).Object;
    if (pIVar1 != (ISettingsSection *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x90))();
    }
  }
  EnableForSession(this,param_1);
  return;
}

// EnableConsoleCommand @ 146cd7000

void __thiscall
FLiveCodingModule::EnableConsoleCommand(FLiveCodingModule *this,FOutputDevice *param_1)

{
  bool bVar1;
  
  EnableForSession(this,true);
  bVar1 = FText::IsEmpty(&this->EnableErrorText);
  if (!bVar1) {
    FOutputDevice::Log(param_1,&this->EnableErrorText);
  }
  return;
}

// EnableForSession @ 146cd7050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveCodingModule::EnableForSession(FLiveCodingModule *this,bool param_1)

{
  atomic<FLiveCodingModule::EState> aVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  bool bVar4;
  FText *pFVar5;
  FLiveCodingModule *local_res18;
  code *local_18;
  FLiveCodingModule **local_10;
  
  if (param_1) {
    pFVar5 = FText::GetEmpty();
    pIVar2 = (this->EnableErrorText).TextData.Reference;
    pIVar3 = (pFVar5->TextData).Reference;
    if (pIVar2 != pIVar3) {
      (this->EnableErrorText).TextData.Reference = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))();
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->EnableErrorText).Flags = pFVar5->Flags;
    aVar1 = this->State;
    if (aVar1 == (atomic<FLiveCodingModule::EState>)0x0) {
      bVar4 = SetupConsolePath(this);
      if (bVar4) {
        StartLiveCoding(this,Manual);
        ShowConsole(this,false);
        return;
      }
    }
    else if (aVar1 == (atomic<FLiveCodingModule::EState>)0x1) {
      if (this->State == (atomic<FLiveCodingModule::EState>)0x1) {
        if (3 < (byte)LogLiveCoding._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
        }
        local_10 = &local_res18;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FLiveCodingModule::WaitForStartup'::__l5::<lambda_1>,bool>::
                   Call;
        local_res18 = this;
        FGenericPlatformProcess::ConditionalSleep((TFunctionRef<bool___cdecl(void)> *)&local_18,0.0)
        ;
        return;
      }
    }
    else if ((aVar1 == (atomic<FLiveCodingModule::EState>)0x2) ||
            (aVar1 == (atomic<FLiveCodingModule::EState>)0x3)) {
      LOCK();
      this->State = (atomic<FLiveCodingModule::EState>)0x3;
      UNLOCK();
      ShowConsole(this,false);
      return;
    }
  }
  else if ((this->State == (atomic<FLiveCodingModule::EState>)0x2) ||
          (this->State == (atomic<FLiveCodingModule::EState>)0x3)) {
    aVar1 = this->State;
    if (((aVar1 != (atomic<FLiveCodingModule::EState>)0x0) &&
        (aVar1 != (atomic<FLiveCodingModule::EState>)0x1)) &&
       ((aVar1 == (atomic<FLiveCodingModule::EState>)0x2 ||
        (aVar1 == (atomic<FLiveCodingModule::EState>)0x3)))) {
      if (3 < (byte)LogLiveCoding._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
      }
      LppSetActive(false);
      LppSetVisible(false);
    }
    LOCK();
    this->State = (atomic<FLiveCodingModule::EState>)0x2;
    UNLOCK();
  }
  return;
}

// GetEnableErrorText @ 146cdb430

FText * __thiscall FLiveCodingModule::GetEnableErrorText(FLiveCodingModule *this)

{
  return &this->EnableErrorText;
}

// GetOnPatchCompleteDelegate @ 146cdbb00

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FLiveCodingModule::GetOnPatchCompleteDelegate(FLiveCodingModule *this)

{
  return &this->OnPatchCompleteDelegate;
}

// GetReservePagesGlobalData @ 146cdbd30

ReservePagesGlobalData * __cdecl FLiveCodingModule::GetReservePagesGlobalData(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton.ModuleChanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::Singleton.ModuleChanges.ArrayNum = 0;
      ::Singleton.ModuleChanges.ArrayMax = 0;
      ::Singleton.ReservedPages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::Singleton.ReservedPages.ArrayNum = 0;
      ::Singleton.ReservedPages.ArrayMax = 0;
      ::Singleton.LastReservePagesModuleCount = 0;
      ::Singleton.ReservePagesTaskRef.Reference = (FBaseGraphTask *)0x0;
      atexit(`FLiveCodingModule::GetReservePagesGlobalData'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// HasStarted @ 146cdc490

bool __thiscall FLiveCodingModule::HasStarted(FLiveCodingModule *this,bool param_1)

{
  atomic<FLiveCodingModule::EState> aVar1;
  
  aVar1 = this->State;
  if (aVar1 != (atomic<FLiveCodingModule::EState>)0x0) {
    if (aVar1 == (atomic<FLiveCodingModule::EState>)0x1) {
      return param_1;
    }
    if ((aVar1 == (atomic<FLiveCodingModule::EState>)0x2) ||
       (aVar1 == (atomic<FLiveCodingModule::EState>)0x3)) {
      return true;
    }
  }
  return false;
}

// HasStarted @ 146cdc4c0

bool __thiscall FLiveCodingModule::HasStarted(FLiveCodingModule *this)

{
  atomic<FLiveCodingModule::EState> aVar1;
  
  aVar1 = this->State;
  if (((aVar1 != (atomic<FLiveCodingModule::EState>)0x0) &&
      (aVar1 != (atomic<FLiveCodingModule::EState>)0x1)) &&
     ((aVar1 == (atomic<FLiveCodingModule::EState>)0x2 ||
      (aVar1 == (atomic<FLiveCodingModule::EState>)0x3)))) {
    return true;
  }
  return false;
}

// HideConsole @ 146cdc8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveCodingModule::HideConsole(FLiveCodingModule *this)

{
  atomic<FLiveCodingModule::EState> aVar1;
  
  aVar1 = this->State;
  if (((aVar1 != (atomic<FLiveCodingModule::EState>)0x0) &&
      (aVar1 != (atomic<FLiveCodingModule::EState>)0x1)) &&
     ((aVar1 == (atomic<FLiveCodingModule::EState>)0x2 ||
      (aVar1 == (atomic<FLiveCodingModule::EState>)0x3)))) {
    if (3 < (byte)LogLiveCoding._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
    }
    LppSetActive(false);
    LppSetVisible(false);
    return;
  }
  return;
}

// IsCompiling @ 146cdca30

bool __thiscall FLiveCodingModule::IsCompiling(FLiveCodingModule *this)

{
  return GIsCompileActive;
}

// IsEnabledByDefault @ 146cdca60

bool __thiscall FLiveCodingModule::IsEnabledByDefault(FLiveCodingModule *this)

{
  return this->Settings->bEnabled;
}

// IsEnabledForSession @ 146cdca70

bool __thiscall FLiveCodingModule::IsEnabledForSession(FLiveCodingModule *this)

{
  atomic<FLiveCodingModule::EState> aVar1;
  
  aVar1 = this->State;
  if ((((aVar1 != (atomic<FLiveCodingModule::EState>)0x0) &&
       (aVar1 != (atomic<FLiveCodingModule::EState>)0x1)) &&
      (aVar1 != (atomic<FLiveCodingModule::EState>)0x2)) &&
     (aVar1 == (atomic<FLiveCodingModule::EState>)0x3)) {
    return true;
  }
  return false;
}

// IsPatchDll @ 146cdcaa0

bool __thiscall FLiveCodingModule::IsPatchDll(FLiveCodingModule *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FPaths::GetBaseFilename(&local_18,param_1,true);
  FPaths::GetExtension(&local_38,&local_18,false);
  ::FString::FString(&local_28,"patch_");
  iVar7 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  bVar3 = ::FString::StartsWith(&local_38,(wchar_t *)FVar2.Data,iVar7,IgnoreCase);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    iVar7 = 6;
    lVar8 = 0xc;
    while( true ) {
      iVar6 = local_38.Data.ArrayNum;
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      if (iVar5 <= iVar7) {
        bVar3 = true;
        goto LAB_146cdcbba;
      }
      if ((((iVar7 < 0) || (iVar6 == 0)) || (iVar6 + -1 <= iVar7)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      iVar5 = iswdigit(*(wint_t *)(local_38.Data.AllocatorInstance.Data + lVar8));
      if (iVar5 == 0) break;
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 2;
    }
  }
  bVar3 = false;
LAB_146cdcbba:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// IsReinstancingEnabled @ 146cdcc00

bool __thiscall FLiveCodingModule::IsReinstancingEnabled(FLiveCodingModule *this)

{
  return false;
}

// IsUEDll @ 146cdcc70

bool __thiscall FLiveCodingModule::IsUEDll(FLiveCodingModule *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  FPaths::GetBaseFilename(&local_38,param_1,true);
  FPaths::GetExtension(&local_48,&local_38,false);
  ::FString::FString(&local_28,"patch_");
  pwVar9 = L"";
  iVar8 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar8 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  bVar3 = ::FString::StartsWith(&local_48,(wchar_t *)FVar2.Data,iVar8,IgnoreCase);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    iVar8 = 6;
    lVar10 = 0xc;
    while( true ) {
      iVar6 = local_48.Data.ArrayNum;
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      if (iVar5 <= iVar8) {
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        return false;
      }
      if ((((iVar8 < 0) || (iVar6 == 0)) || (iVar6 + -1 <= iVar8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      iVar5 = iswdigit(*(wint_t *)(local_48.Data.AllocatorInstance.Data + lVar10));
      if (iVar5 == 0) break;
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 2;
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  iVar5 = (this->FullEngineDir).Data.ArrayNum;
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->FullEngineDir).Data.AllocatorInstance.Data;
  }
  bVar3 = ::FString::StartsWith(param_1,pwVar7,iVar8,IgnoreCase);
  if (!bVar3) {
    iVar5 = (this->FullEnginePluginsDir).Data.ArrayNum;
    iVar8 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar8 = 0;
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(this->FullEnginePluginsDir).Data.AllocatorInstance.Data;
    }
    bVar3 = ::FString::StartsWith(param_1,pwVar7,iVar8,IgnoreCase);
    if (!bVar3) {
      iVar5 = (this->FullProjectDir).Data.ArrayNum;
      iVar8 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar8 = 0;
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(this->FullProjectDir).Data.AllocatorInstance.Data;
      }
      bVar3 = ::FString::StartsWith(param_1,pwVar7,iVar8,IgnoreCase);
      if (!bVar3) {
        iVar5 = (this->FullProjectPluginsDir).Data.ArrayNum;
        iVar8 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar8 = 0;
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(this->FullProjectPluginsDir).Data.AllocatorInstance.Data;
        }
        bVar3 = ::FString::StartsWith(param_1,pwVar7,iVar8,IgnoreCase);
        if (!bVar3) {
          iVar5 = (this->FullEngineDirFromExecutable).Data.ArrayNum;
          iVar8 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar8 = 0;
            pwVar7 = L"";
          }
          else {
            pwVar7 = (wchar_t *)(this->FullEngineDirFromExecutable).Data.AllocatorInstance.Data;
          }
          bVar3 = ::FString::StartsWith(param_1,pwVar7,iVar8,IgnoreCase);
          if (!bVar3) {
            iVar5 = (this->FullEnginePluginsDirFromExecutable).Data.ArrayNum;
            iVar8 = iVar5 + -1;
            if (iVar5 == 0) {
              iVar8 = 0;
              pwVar7 = L"";
            }
            else {
              pwVar7 = (wchar_t *)
                       (this->FullEnginePluginsDirFromExecutable).Data.AllocatorInstance.Data;
            }
            bVar3 = ::FString::StartsWith(param_1,pwVar7,iVar8,IgnoreCase);
            if (!bVar3) {
              iVar5 = (this->FullProjectDirFromExecutable).Data.ArrayNum;
              iVar8 = iVar5 + -1;
              if (iVar5 == 0) {
                iVar8 = 0;
                pwVar7 = L"";
              }
              else {
                pwVar7 = (wchar_t *)(this->FullProjectDirFromExecutable).Data.AllocatorInstance.Data
                ;
              }
              bVar3 = ::FString::StartsWith(param_1,pwVar7,iVar8,IgnoreCase);
              if (!bVar3) {
                iVar5 = (this->FullProjectPluginsDirFromExecutable).Data.ArrayNum;
                iVar8 = iVar5 + -1;
                if (iVar5 == 0) {
                  iVar8 = 0;
                }
                else {
                  pwVar9 = (wchar_t *)
                           (this->FullProjectPluginsDirFromExecutable).Data.AllocatorInstance.Data;
                }
                bVar3 = ::FString::StartsWith(param_1,pwVar9,iVar8,IgnoreCase);
                return bVar3;
              }
            }
          }
        }
      }
    }
  }
  return true;
}

// OnDllLoaded @ 146cdf990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveCodingModule::OnDllLoaded(FLiveCodingModule *this,FString *param_1)

{
  int *piVar1;
  TRefCountPtr<FBaseGraphTask> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FBaseGraphTask *pFVar6;
  bool bVar7;
  int iVar8;
  ReservePagesGlobalData *lpCriticalSection;
  FName *pFVar9;
  undefined ***pppuVar10;
  FName local_res18;
  TStatIdData *local_res20;
  undefined1 local_68 [8];
  FName local_60;
  undefined1 local_58;
  undefined3 uStack_57;
  TStatId local_48 [2];
  undefined **local_38;
  FLiveCodingModule *local_30;
  undefined ***local_20;
  
  bVar7 = IsUEDll(this,param_1);
  if (bVar7) {
    lpCriticalSection = GetReservePagesGlobalData();
    if (lpCriticalSection == (ReservePagesGlobalData *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar4 = (param_1->Data).ArrayNum;
    iVar8 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar8 = 0;
    }
    pFVar9 = ::FName::FName(&local_res18,iVar8,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                            FNAME_Add);
    piVar1 = &(lpCriticalSection->ModuleChanges).ArrayMax;
    local_58 = 1;
    local_60 = *pFVar9;
    iVar8 = (lpCriticalSection->ModuleChanges).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&(lpCriticalSection->ModuleChanges).AllocatorInstance,piVar1);
    }
    (lpCriticalSection->ModuleChanges).ArrayNum = iVar8 + 1;
    pTVar2 = &lpCriticalSection->ReservePagesTaskRef;
    pFVar5 = (lpCriticalSection->ModuleChanges).AllocatorInstance.Data;
    *(FName *)(pFVar5 + (longlong)iVar8 * 0xc) = local_60;
    *(undefined4 *)(pFVar5 + (longlong)iVar8 * 0xc + 8) = _local_58;
    if ((pTVar2->Reference == (FBaseGraphTask *)0x0) &&
       (0x7f < (uint)((lpCriticalSection->ModuleChanges).ArrayNum -
                     lpCriticalSection->LastReservePagesModuleCount))) {
      local_20 = (undefined ***)0x0;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FLiveCodingModule::OnDllLoaded'::`8'::<lambda_1>,1,0>::
                  _vftable_;
      local_48[0].StatIdPtr =
           (TStatIdData *)
           UE::Core::Private::Function::
           TFunctionRefCaller<`FLiveCodingModule::OnDllLoaded'::__l8::<lambda_1>,void>::Call;
      local_res18.ComparisonIndex.Value = 0xff;
      local_res20 = &TStatId::TStatId_NAME_None;
      local_60.ComparisonIndex.Value = 0;
      local_60.Number = 0;
      local_30 = this;
      TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TStatId_&,enum_ENamedThreads::Type_&>
                ((FConstructor *)&local_60,(TUniqueFunction<void___cdecl(void)> *)local_68,local_48,
                 (Type *)&local_res20);
      if (local_48[0].StatIdPtr != (TStatIdData *)0x0) {
        pppuVar10 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar10 = local_20;
        }
        (*(code *)(*pppuVar10)[2])();
      }
      if (pTVar2 != (TRefCountPtr<FBaseGraphTask> *)local_68) {
        pFVar6 = pTVar2->Reference;
        pTVar2->Reference = (FBaseGraphTask *)local_68;
        local_68 = (undefined1  [8])pFVar6;
      }
      if (local_68 != (undefined1  [8])0x0) {
        LOCK();
        puVar3 = &((FBaseGraphTask *)local_68)->field_0x30;
        iVar8 = *(int *)puVar3;
        *(int *)puVar3 = *(int *)puVar3 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (*(code *)**(undefined8 **)local_68)(local_68,1);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnDllNotification @ 146cdfb70

void __cdecl FLiveCodingModule::OnDllNotification(uint param_1,void *param_2,void *param_3)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  ReservePagesGlobalData *lpCriticalSection;
  FName *pFVar5;
  int iVar6;
  FName local_res10 [3];
  uint local_20;
  FString local_18;
  
  ::FString::ConstructFromPtrSize
            (&local_18,*(wchar_t **)(*(ushort **)((longlong)param_2 + 8) + 4),
             (uint)(**(ushort **)((longlong)param_2 + 8) >> 1));
  FPaths::NormalizeFilename(&local_18);
  if (param_1 == 1) {
    OnDllLoaded(param_3,&local_18);
  }
  else if (param_1 == 2) {
    bVar4 = IsUEDll(param_3,&local_18);
    if (bVar4) {
      lpCriticalSection = GetReservePagesGlobalData();
      if (lpCriticalSection == (ReservePagesGlobalData *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar6 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar5 = ::FName::FName(local_res10,iVar6,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                              FNAME_Add);
      piVar1 = &(lpCriticalSection->ModuleChanges).ArrayMax;
      local_20 = local_20 & 0xffffff00;
      FVar2 = *pFVar5;
      iVar6 = (lpCriticalSection->ModuleChanges).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&(lpCriticalSection->ModuleChanges).AllocatorInstance,piVar1);
      }
      (lpCriticalSection->ModuleChanges).ArrayNum = iVar6 + 1;
      pFVar3 = (lpCriticalSection->ModuleChanges).AllocatorInstance.Data;
      *(FName *)(pFVar3 + (longlong)iVar6 * 0xc) = FVar2;
      *(uint *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = local_20;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnDllUnloaded @ 146cdfca0

void __thiscall FLiveCodingModule::OnDllUnloaded(FLiveCodingModule *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  ReservePagesGlobalData *lpCriticalSection;
  FName *pFVar7;
  FName local_res18 [2];
  uint local_10;
  
  bVar5 = IsUEDll(this,param_1);
  if (bVar5) {
    lpCriticalSection = GetReservePagesGlobalData();
    if (lpCriticalSection == (ReservePagesGlobalData *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = (param_1->Data).ArrayNum;
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    pFVar7 = ::FName::FName(local_res18,iVar6,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                            FNAME_Add);
    piVar1 = &(lpCriticalSection->ModuleChanges).ArrayMax;
    local_10 = local_10 & 0xffffff00;
    FVar3 = *pFVar7;
    iVar6 = (lpCriticalSection->ModuleChanges).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&(lpCriticalSection->ModuleChanges).AllocatorInstance,piVar1);
    }
    (lpCriticalSection->ModuleChanges).ArrayNum = iVar6 + 1;
    pFVar4 = (lpCriticalSection->ModuleChanges).AllocatorInstance.Data;
    *(FName *)(pFVar4 + (longlong)iVar6 * 0xc) = FVar3;
    *(uint *)(pFVar4 + (longlong)iVar6 * 0xc + 8) = local_10;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnModulesChanged @ 146cdfd70

void __thiscall
FLiveCodingModule::OnModulesChanged
          (FLiveCodingModule *this,FName param_1,EModuleChangeReason param_2)

{
  return;
}

// ReservePagesTask @ 146ce1420

void __cdecl FLiveCodingModule::ReservePagesTask(void)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
  TRefCountPtr<FBaseGraphTask> *pTVar2;
  undefined1 *puVar3;
  FScriptContainerElement *_Src;
  FName *pFVar4;
  FBaseGraphTask *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ReservePagesGlobalData *lpCriticalSection;
  FString *pFVar11;
  HMODULE pHVar12;
  wchar_t *lpModuleName;
  ulonglong uVar13;
  uint uVar14;
  ForAnyElementType this;
  longlong lVar15;
  undefined1 local_res8 [8];
  HMODULE local_78;
  longlong local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_58;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  lpCriticalSection = GetReservePagesGlobalData();
  while( true ) {
    if (lpCriticalSection == (ReservePagesGlobalData *)0x0) {
      local_60 = 0;
      local_68.Data = (FScriptContainerElement *)0x0;
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    local_60 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar14 = (lpCriticalSection->ModuleChanges).ArrayNum -
             lpCriticalSection->LastReservePagesModuleCount;
    if (uVar14 < 0x80) {
      pTVar2 = &lpCriticalSection->ReservePagesTaskRef;
      if (pTVar2 != (TRefCountPtr<FBaseGraphTask> *)&local_70) {
        pFVar5 = pTVar2->Reference;
        pTVar2->Reference = (FBaseGraphTask *)0x0;
        if (pFVar5 != (FBaseGraphTask *)0x0) {
          LOCK();
          puVar3 = &pFVar5->field_0x30;
          iVar9 = *(int *)puVar3;
          *(int *)puVar3 = *(int *)puVar3 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
          }
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((FName *)local_68.Data != (FName *)0x0) {
        FMemory::Free(local_68.Data);
      }
      return;
    }
    _Src = (lpCriticalSection->ModuleChanges).AllocatorInstance.Data +
           (longlong)lpCriticalSection->LastReservePagesModuleCount * 0xc;
    if (((_Src == (FScriptContainerElement *)0x0) && (uVar14 != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,uVar14,&local_68,(int *)&local_60,(int *)((longlong)&local_60 + 4));
    if (uVar14 != 0) {
      memcpy(local_68.Data + (longlong)iVar9 * 0xc,_Src,(longlong)(int)uVar14 * 0xc);
    }
    lpCriticalSection->LastReservePagesModuleCount = (lpCriticalSection->ModuleChanges).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1425,"LiveCodingReservePages",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Windows\\LiveCoding\\Private\\LiveCodingModule.cpp"
                 ,0x591);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1425);
    }
    uVar13 = local_60 & 0xffffffff;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    if ((int)local_60 < 0) break;
    if (0 < (int)local_60) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(int)local_60,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
      uVar13 = local_60 & 0xffffffff;
    }
    iVar9 = (int)uVar13;
    pFVar4 = (FName *)(local_68.Data + (longlong)iVar9 * 0xc);
    this.Data = local_68.Data;
    while( true ) {
      if ((int)uVar13 != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FLiveCodingModule::ModuleChange,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        uVar13 = local_60 & 0xffffffff;
      }
      if ((FName *)this.Data == pFVar4) break;
      if ((char)(((FName *)((longlong)this.Data + 8))->ComparisonIndex).Value != '\0') {
        pFVar11 = ::FName::ToString((FName *)this.Data,&local_38);
        if ((pFVar11->Data).ArrayNum == 0) {
          lpModuleName = L"";
        }
        else {
          lpModuleName = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        pHVar12 = GetModuleHandleW(lpModuleName);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        local_78 = pHVar12;
        if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = local_58.ArrayNum;
        if (local_58.ArrayNum == local_58.ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
        }
        local_58.ArrayNum = iVar10 + 1;
        *(HMODULE *)(local_58.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_78;
        uVar13 = local_60 & 0xffffffff;
      }
      this.Data = (FScriptContainerElement *)&((FName *)((longlong)this.Data + 8))->Number;
    }
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    ::`anonymous_namespace'::ReservePages(&local_48,&local_58,0x8000000,0x10000);
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = &lpCriticalSection->ReservedPages;
    if ((pTVar1 == &local_48) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar15 = (longlong)local_48.ArrayNum;
    if (local_48.ArrayNum != 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_48.ArrayNum,&pTVar1->AllocatorInstance,
                         &(lpCriticalSection->ReservedPages).ArrayNum,
                         &(lpCriticalSection->ReservedPages).ArrayMax);
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8,local_48.AllocatorInstance.Data,
             lVar15 << 3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((FName *)local_68.Data != (FName *)0x0) {
      FMemory::Free(local_68.Data);
    }
    lpCriticalSection = GetReservePagesGlobalData();
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar13);
}

// SetBuildArguments @ 146ce21f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveCodingModule::SetBuildArguments(FLiveCodingModule *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  ClientStartupThread *pCVar1;
  EBuildConfiguration EVar2;
  int iVar3;
  DWORD DVar4;
  wchar_t *pwVar5;
  BaseCommand *pBVar6;
  void *pvVar7;
  BaseCommand *pBVar8;
  ForAnyElementType _Src;
  int iVar9;
  bool bVar10;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  lpCriticalSection = &this->SetBuildArgumentsCs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pwVar5 = FGenericPlatformMisc::GetUBTTargetName();
  ::FString::FString(&local_68,pwVar5);
  iVar3 = (this->LastKnownTargetName).Data.ArrayNum;
  if (local_68.Data.ArrayNum == iVar3) {
    if (local_68.Data.ArrayNum < 2) goto LAB_146ce247a;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_68.Data.AllocatorInstance.Data,
                       (wchar_t *)(this->LastKnownTargetName).Data.AllocatorInstance.Data);
    bVar10 = iVar3 == 0;
  }
  else {
    bVar10 = iVar3 + local_68.Data.ArrayNum == 1;
  }
  if (!bVar10) {
    pBVar8 = (BaseCommand *)0x0;
    iVar9 = 0;
    iVar3 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar3 = iVar9;
    }
    ::FString::AssignRange
              (&this->LastKnownTargetName,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar3);
    EVar2 = FApp::GetBuildConfiguration();
    ::LexToString(EVar2);
    FGenericPlatformMisc::GetUBTPlatform();
    ::FString::PrintfImpl(&local_58,L"%s %s %s");
    if (3 < (byte)LogLiveCoding._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
    }
    (**(code **)(*(longlong *)this->SourceProjectVariable + 0xd8))();
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = iVar9;
    }
    if (0 < iVar3) {
      FPaths::ConvertRelativePathToFull(&local_28,&local_38);
      ::FString::PrintfImpl(&local_48,L" -Project=\"%s\"");
      iVar3 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar3 = iVar9;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pCVar1 = g_startupThread;
    _Src.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      _Src.Data = local_58.Data.AllocatorInstance.Data;
    }
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar1->m_thread).m_value);
      (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    this_00 = pCVar1->m_userCommandThread;
    if (this_00 != (ClientUserCommandThread *)0x0) {
      pBVar6 = ::operator_new(0x830);
      if (pBVar6 != (BaseCommand *)0x0) {
        pBVar6->m_expectResponse = false;
        pBVar6->_padding_ = (longlong)&ProxyCommand<commands::SetBuildArguments>::_vftable_;
        memset((void *)((longlong)&pBVar6[1]._padding_ + 4),0,0x800);
        *(undefined4 *)&pBVar6[1]._padding_ = 0;
        pvVar7 = operator_new__(0);
        *(void **)&pBVar6[0x81].m_expectResponse = pvVar7;
        pBVar6[0x82]._padding_ = 0;
        *(undefined8 *)&pBVar6[0x82].m_expectResponse = 0;
        pBVar8 = pBVar6;
      }
      DVar4 = GetCurrentProcessId();
      *(DWORD *)&pBVar8[1]._padding_ = DVar4;
      wcscpy_s((wchar_t *)((longlong)&pBVar8[1]._padding_ + 4),0x400,(wchar_t *)_Src.Data);
      ClientUserCommandThread::PushUserCommand(this_00,pBVar8);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
LAB_146ce247a:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetupConsolePath @ 146ce2880

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLiveCodingModule::SetupConsolePath(FLiveCodingModule *this)

{
  IConsoleVariable *pIVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  int iVar11;
  ForAnyElementType FVar12;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_118
  ;
  FString local_108;
  FString local_f8;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FFormatArgumentValue local_98;
  void *local_78 [2];
  FText local_68;
  FText local_58;
  FString local_48;
  undefined1 local_38 [16];
  FTextFormat local_28;
  
  pFVar6 = (FString *)
           (**(code **)(*(longlong *)this->ConsolePathVariable + 0xd8))
                     (this->ConsolePathVariable,local_78);
  if (pFVar6 != &GLiveCodingConsolePath) {
    if (GLiveCodingConsolePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GLiveCodingConsolePath.Data.AllocatorInstance.Data);
    }
    GLiveCodingConsolePath.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GLiveCodingConsolePath.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    GLiveCodingConsolePath.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_78[0] != (void *)0x0) {
    FMemory::Free(local_78[0]);
  }
  bVar4 = FPaths::FileExists(&GLiveCodingConsolePath);
  if (!bVar4) {
    ::operator/(&local_f8,&this->FullEngineDirFromExecutable,DefaultConsolePath);
    FPaths::CollapseRelativeDirectories(&local_f8,false);
    bVar4 = FPaths::FileExists(&local_f8);
    if (!bVar4) {
      local_118.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Pairs.ArrayNum = 0;
      local_118.Pairs.ArrayMax = 0;
      pFVar7 = FText::FromString(&local_68,&GLiveCodingConsolePath);
      local_98.Type = Text;
      FText::FText((FText *)&local_98.TextValue,pFVar7);
      if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      ::FString::FString(&local_c8,L"Executable");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_118,&local_c8,&local_98);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        FText::AsLocalizable_Advanced_LocText
                  (&FormatString,L"LiveCodingModule",L"LiveCodingMissingExecutable",
                   L"Unable to start live coding session. Missing executable \'{Executable}\'. Use the LiveCoding.ConsolePath console variable to modify."
                  );
        atexit(`FLiveCodingModule::SetupConsolePath'::__l8::
               _dynamic_atexit_destructor_for__FormatString__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar8 = FTextFormat::FTextFormat(&local_28,&FormatString,Default);
      pFVar7 = FText::Format(&local_58,pFVar8,&local_118);
      FText::operator=(&this->EnableErrorText,pFVar7);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (1 < (byte)LogLiveCoding._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_118.Pairs.AllocatorInstance.Data,
                 local_118.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_118.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_118.Pairs.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      return false;
    }
    iVar11 = local_f8.Data.ArrayNum + -1;
    if (local_f8.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    ::FString::AssignRange
              (&GLiveCodingConsolePath,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar11);
    pwVar9 = FWindowsPlatformProcess::ExecutablePath();
    ::FString::FString(&local_b8,pwVar9);
    FPaths::GetPath(&local_a8,&local_b8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    pFVar6 = FPaths::GetProjectFilePath(&local_48);
    ::operator/(&local_108,&local_a8,pFVar6);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    FPaths::NormalizeDirectoryName(&local_108);
    FPaths::CollapseRelativeDirectories(&local_108,false);
    iVar11 = local_108.Data.ArrayNum + -1;
    if (local_108.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    if ((0 < iVar11) && (bVar4 = FPaths::FileExists(&local_108), bVar4)) {
      pIVar1 = this->SourceProjectVariable;
      lVar2 = *(longlong *)pIVar1;
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar12.Data = local_108.Data.AllocatorInstance.Data;
      }
      local_e8 = 0xe000000;
      local_e4 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d4 = 0xf000000;
      local_d0 = 0x1000000;
      uVar10 = (**(code **)(lVar2 + 0xa8))(pIVar1,local_38,&local_e8);
      (**(code **)(lVar2 + 0xb0))(pIVar1,FVar12.Data,uVar10);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// ShouldPreloadModule @ 146ce2c80

bool __thiscall
FLiveCodingModule::ShouldPreloadModule
          (FLiveCodingModule *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,FString *param_2)

{
  FName FVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  FName *pFVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  int iVar10;
  FName local_res20;
  FString local_28;
  
  FPaths::GetBaseFilename(&local_28,param_2,true);
  iVar10 = 0;
  iVar6 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar6 = iVar10;
  }
  pFVar5 = ::FName::FName(&local_res20,iVar6,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                          FNAME_Find);
  FVar1 = *pFVar5;
  if (FVar1 != (FName)0x0) {
    uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
      FVar7 = (param_1->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&param_1->Hash;
      }
      iVar6 = *(int *)((longlong)FVar7 +
                      (ulonglong)(param_1->HashSize - 1U & FVar1.Number + uVar4) * 4);
      if (iVar6 != -1) {
        do {
          if (*(FName *)(*(longlong *)&param_1->Elements + (longlong)iVar6 * 0x10) == FVar1) {
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
            return true;
          }
          iVar6 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar6 = (this->FullProjectDir).Data.ArrayNum;
  pwVar9 = L"";
  if (iVar6 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->FullProjectDir).Data.AllocatorInstance.Data;
    iVar10 = iVar6 + -1;
  }
  bVar2 = ::FString::StartsWith(param_2,pwVar8,iVar10,IgnoreCase);
  iVar10 = 0;
  if (bVar2) {
    cVar3 = this->Settings->bPreloadProjectModules;
    if ((bool)cVar3 != this->Settings->bPreloadProjectPluginModules) {
      iVar6 = (this->FullProjectPluginsDir).Data.ArrayNum;
      if (iVar6 != 0) {
        pwVar9 = (wchar_t *)(this->FullProjectPluginsDir).Data.AllocatorInstance.Data;
        iVar10 = iVar6 + -1;
      }
      bVar2 = ::FString::StartsWith(param_2,pwVar9,iVar10,IgnoreCase);
      if (bVar2) {
        cVar3 = this->Settings->bPreloadProjectPluginModules;
      }
      else {
        cVar3 = this->Settings->bPreloadProjectModules;
      }
    }
  }
  else {
    bVar2 = FApp::IsEngineInstalled();
    if (bVar2) {
      cVar3 = '\0';
    }
    else {
      cVar3 = this->Settings->bPreloadEngineModules;
      if ((bool)cVar3 != this->Settings->bPreloadEnginePluginModules) {
        iVar6 = (this->FullEnginePluginsDir).Data.ArrayNum;
        if (iVar6 != 0) {
          pwVar9 = (wchar_t *)(this->FullEnginePluginsDir).Data.AllocatorInstance.Data;
          iVar10 = iVar6 + -1;
        }
        bVar2 = ::FString::StartsWith(param_2,pwVar9,iVar10,IgnoreCase);
        if (bVar2) {
          cVar3 = this->Settings->bPreloadEnginePluginModules;
        }
        else {
          cVar3 = this->Settings->bPreloadEngineModules;
        }
      }
    }
  }
  return (bool)cVar3;
}

// ShowConsole @ 146ce2f60

void __thiscall FLiveCodingModule::ShowConsole(FLiveCodingModule *this,bool param_1)

{
  atomic<FLiveCodingModule::EState> aVar1;
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  ClientStartupThread *pCVar2;
  BaseCommand *pBVar3;
  void *pvVar4;
  
  aVar1 = this->State;
  if (aVar1 != (atomic<FLiveCodingModule::EState>)0x0) {
    if (aVar1 == (atomic<FLiveCodingModule::EState>)0x1) {
      if (!param_1) {
        return;
      }
    }
    else if ((aVar1 != (atomic<FLiveCodingModule::EState>)0x2) &&
            (aVar1 != (atomic<FLiveCodingModule::EState>)0x3)) {
      return;
    }
    LppSetVisible(true);
    LppSetActive(true);
    pCVar2 = g_startupThread;
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar2->m_thread).m_value);
      (pCVar2->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    this_00 = pCVar2->m_userCommandThread;
    if (this_00 != (ClientUserCommandThread *)0x0) {
      pBVar3 = ::operator_new(0x30);
      if (pBVar3 == (BaseCommand *)0x0) {
        pBVar3 = (BaseCommand *)0x0;
      }
      else {
        pBVar3->m_expectResponse = false;
        pBVar3->_padding_ = (longlong)&ProxyCommand<commands::ShowConsole>::_vftable_;
        pvVar4 = operator_new__(0);
        *(void **)&pBVar3[1].m_expectResponse = pvVar4;
        pBVar3[2]._padding_ = 0;
        *(undefined8 *)&pBVar3[2].m_expectResponse = 0;
      }
      ClientUserCommandThread::PushUserCommand(this_00,pBVar3);
    }
  }
  return;
}

// ShowConsole @ 146ce3050

void __thiscall FLiveCodingModule::ShowConsole(FLiveCodingModule *this)

{
  ShowConsole(this,false);
  return;
}

// ShutdownModule @ 146ce3100

void __thiscall FLiveCodingModule::ShutdownModule(FLiveCodingModule *this)

{
  HANDLE hHandle;
  ulong64 uVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  ClientStartupThread *pCVar4;
  Event *pEVar5;
  bool bVar6;
  uint uVar7;
  ulong64 *puVar8;
  HMODULE hModule;
  FARPROC pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ForAnyElementType *this_00;
  FDestructionSentinel FStack_48;
  
  pEVar5 = g_requestRestart;
  uVar11 = 0;
  if (this->CallbackCookie != (void *)0x0) {
    if (g_requestRestart != (Event *)0x0) {
      CloseHandle(g_requestRestart->m_event);
      ::operator_delete(pEVar5,8);
    }
    pEVar5 = g_restartPrepared;
    g_requestRestart = (Event *)0x0;
    if (g_restartPrepared != (Event *)0x0) {
      CloseHandle(g_restartPrepared->m_event);
      ::operator_delete(pEVar5,8);
    }
    pEVar5 = g_executeRestart;
    g_restartPrepared = (Event *)0x0;
    if (g_executeRestart != (Event *)0x0) {
      CloseHandle(g_executeRestart->m_event);
      ::operator_delete(pEVar5,8);
    }
    pCVar4 = g_startupThread;
    g_executeRestart = (Event *)0x0;
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar4->m_thread).m_value);
      (pCVar4->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    pCVar4 = g_startupThread;
    if (g_startupThread != (ClientStartupThread *)0x0) {
      ClientStartupThread::~ClientStartupThread(g_startupThread);
      ::operator_delete(pCVar4,0x68);
    }
    g_startupThread = (ClientStartupThread *)0x0;
    uVar1 = (this->EndFrameDelegateHandle).ID;
    if (uVar1 != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreDelegates::OnEndFrame,(FWriteAccessScope *)&FStack_48);
      uVar12 = uVar11;
      if (0 < (int)FCoreDelegates::OnEndFrame._16_4_) {
        do {
          uVar10 = (uint)uVar11;
          uVar7 = 0;
          if ((int)uVar10 < (int)FCoreDelegates::OnEndFrame._16_4_) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          this_00 = (ForAnyElementType *)(FCoreDelegates::OnEndFrame._8_8_ + uVar12);
          if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
             && (puVar8 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
                *puVar8 == uVar1)) {
            if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0)
               ) {
              (*(code *)**(undefined8 **)this_00->Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10)
              ;
              *(undefined4 *)&this_00[1].Data = 0;
            }
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &FCoreDelegates::OnEndFrame,false);
            break;
          }
          uVar11 = (ulonglong)(uVar10 + 1);
          uVar12 = uVar12 + 0x10;
        } while ((int)(uVar10 + 1) < (int)FCoreDelegates::OnEndFrame._16_4_);
      }
      if (FStack_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
      }
    }
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar3 = IConsoleManager::Singleton;
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
              (IConsoleManager::Singleton,this->SourceProjectVariable,1);
    (**(code **)((longlong)*pIVar3 + 0xb8))(pIVar3,this->ConsolePathVariable,1);
    (**(code **)((longlong)*pIVar3 + 0xb8))(pIVar3,this->CompileCommand,1);
    (**(code **)((longlong)*pIVar3 + 0xb8))(pIVar3,this->CompileSyncCommand,1);
    (**(code **)((longlong)*pIVar3 + 0xb8))(pIVar3,this->EnableCommand,1);
    hModule = LoadLibraryW(L"ntdll.dll");
    if ((hModule == (HMODULE)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NtDll",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Windows\\LiveCoding\\Private\\LiveCodingModule.cpp"
                           ,299,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = GetProcAddress(hModule,"LdrUnregisterDllNotification");
    (*pFVar9)(this->CallbackCookie);
    this->CallbackCookie = (void *)0x0;
  }
  if (this->GlobalMutex != (HANDLE)0x0) {
    ReleaseMutex(this->GlobalMutex);
    this->GlobalMutex = (void *)0x0;
  }
  return;
}

// StartLiveCoding @ 146ce3c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveCodingModule::StartLiveCoding(FLiveCodingModule *this,ELiveCodingStartupMode param_1)

{
  short sVar1;
  ushort uVar2;
  atomic<FLiveCodingModule::EState> aVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  code *pcVar6;
  ulong64 uVar7;
  bool bVar8;
  undefined1 uVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  HANDLE pvVar12;
  wchar_t *pwVar13;
  FString *pFVar14;
  void *pvVar15;
  TStringBuilderBase<wchar_t> *this_00;
  size_t sVar16;
  FModuleManager *pFVar17;
  FDelegateHandle FVar18;
  int iVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  wchar_t wVar22;
  int iVar23;
  wchar_t *pwVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  ForAnyElementType FVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  uint uVar31;
  undefined1 auStack_498 [32];
  char *local_478;
  int local_470;
  ELiveCodingStartupMode local_468;
  FString local_460;
  FString local_450;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_440
  ;
  FString local_430;
  FString local_420;
  undefined1 local_410 [8];
  pmf_0dc9b289 local_408;
  pmf_0dc9b289 local_400;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FFormatArgumentValue local_3a8;
  undefined1 local_388 [32];
  FText local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FTextFormat local_308;
  TStringBuilderBase<wchar_t> local_2f8;
  FScriptContainerElement local_2d8 [512];
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_498;
  local_468 = param_1;
  local_408 = (pmf_0dc9b289)this;
  pFVar10 = FText::GetEmpty();
  pIVar4 = (this->EnableErrorText).TextData.Reference;
  pIVar5 = (pFVar10->TextData).Reference;
  if (pIVar4 != pIVar5) {
    (this->EnableErrorText).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_410);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (this->EnableErrorText).Flags = pFVar10->Flags;
  aVar3 = this->State;
  if (((aVar3 == (atomic<FLiveCodingModule::EState>)0x0) ||
      (aVar3 == (atomic<FLiveCodingModule::EState>)0x1)) ||
     ((aVar3 != (atomic<FLiveCodingModule::EState>)0x2 &&
      (aVar3 != (atomic<FLiveCodingModule::EState>)0x3)))) {
    pwVar24 = L"-Hidden";
    LOCK();
    this->State = (atomic<FLiveCodingModule::EState>)0x1;
    UNLOCK();
    if (param_1 != AutomaticButHidden) {
      pwVar24 = L"";
    }
    ::FString::operator=(&GLiveCodingConsoleArguments,pwVar24);
    (**(code **)(*(longlong *)this->SourceProjectVariable + 0xd8))
              (this->SourceProjectVariable,&local_460);
    pFVar25 = (FScriptContainerElement *)0x0;
    iVar20 = 0;
    iVar29 = local_460.Data.ArrayNum + -1;
    if (local_460.Data.ArrayNum == 0) {
      iVar29 = iVar20;
    }
    if ((iVar29 < 1) || (bVar8 = FPaths::FileExists(&local_460), bVar8)) {
      pwVar24 = FWindowsPlatformProcess::ExecutablePath();
      ::FString::FString(&local_3b8,pwVar24);
      FPaths::ConvertRelativePathToFull(&local_420,&local_3b8);
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_430,L"Global\\LiveCoding_");
      pFVar26 = pFVar25;
      pFVar21 = pFVar25;
      while( true ) {
        iVar23 = local_420.Data.ArrayNum;
        iVar19 = iVar23 + -1;
        iVar29 = iVar19;
        if (iVar23 == 0) {
          iVar29 = iVar20;
        }
        iVar28 = (int)pFVar21;
        if (iVar29 <= iVar28) break;
        if (iVar28 < 0) {
LAB_146ce3f35:
          local_470 = iVar19;
          if (iVar23 == 0) {
            local_470 = iVar20;
          }
          local_478 = (char *)CONCAT44(local_478._4_4_,iVar28);
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        else {
          if (iVar23 == 0) {
            iVar19 = -1;
            goto LAB_146ce3f35;
          }
          if (iVar19 <= iVar28) goto LAB_146ce3f35;
        }
        wVar22 = *(wchar_t *)(local_420.Data.AllocatorInstance.Data + (longlong)pFVar26);
        if (((wVar22 == L'/') || (wVar22 == L'\\')) || (wVar22 == L':')) {
          wVar22 = L'+';
        }
        ::FString::AppendChar(&local_430,wVar22);
        pFVar21 = (FScriptContainerElement *)(ulonglong)(iVar28 + 1);
        pFVar26 = pFVar26 + 2;
      }
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_430.Data.ArrayNum != 0) {
        FVar27.Data = local_430.Data.AllocatorInstance.Data;
      }
      pvVar12 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,(LPCWSTR)FVar27.Data);
      this->GlobalMutex = pvVar12;
      if (pvVar12 != (HANDLE)0x0) {
        if (3 < (byte)LogLiveCoding._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
        }
        if (g_startupThread == (ClientStartupThread *)0x0) {
          local_478 = "Live++ was not started properly. Call lppStartup() first.";
          Logging::Log(USER,LOG_ERROR,"%s%s\n");
        }
        else {
          g_runMode = EXTERNAL_BUILD_SYSTEM;
        }
        pwVar24 = BuildSettings::GetVfsPathsWide();
        if (*pwVar24 != L'\0') {
          local_2f8.Base = (wchar_t *)local_2d8;
          local_2f8.bIsDynamic = false;
          local_2f8.bIsExternal = false;
          local_2f8.CurPos = (wchar_t *)local_2d8;
          local_2f8.End = (wchar_t *)local_d8;
          iVar19 = 0;
          iVar29 = local_460.Data.ArrayNum + -1;
          if (local_460.Data.ArrayNum == 0) {
            iVar29 = iVar19;
          }
          if (0 < iVar29) {
            local_450.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_450.Data.ArrayNum = 0;
            local_450.Data.ArrayMax = 0;
            pwVar13 = wcschr(pwVar24,L';');
            pFVar14 = ::FString::ConstructFromPtrSize
                                (&local_358,pwVar24,
                                 (int)((longlong)pwVar13 - (longlong)pwVar24 >> 1));
            if (&local_450 != pFVar14) {
              if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_450.Data.AllocatorInstance.Data);
              }
              local_450.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
              (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_450.Data.ArrayNum = (pFVar14->Data).ArrayNum;
              local_450.Data.ArrayMax = (pFVar14->Data).ArrayMax;
              (pFVar14->Data).ArrayNum = 0;
              (pFVar14->Data).ArrayMax = 0;
            }
            if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_358.Data.AllocatorInstance.Data);
            }
            FPaths::GetPath(&local_3f8,&local_450);
            if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_450.Data.AllocatorInstance.Data);
            }
            FVar27.Data = local_3f8.Data.AllocatorInstance.Data;
            iVar29 = local_3f8.Data.ArrayNum + -1;
            if (local_3f8.Data.ArrayNum == 0) {
              iVar29 = iVar19;
            }
            uVar7 = (longlong)iVar29 * 2;
            if (local_2f8.End < (FScriptContainerElement *)((longlong)local_2f8.CurPos + uVar7)) {
              TStringBuilderBase<wchar_t>::Extend(&local_2f8,(longlong)iVar29);
            }
            if (iVar29 != 0) {
              pvVar15 = FGenericPlatformString::Memcpy(local_2f8.CurPos,FVar27.Data,uVar7);
              local_2f8.CurPos = (wchar_t *)((longlong)pvVar15 + uVar7);
            }
            if (local_2f8.End < (FScriptContainerElement *)((longlong)local_2f8.CurPos + 2)) {
              TStringBuilderBase<wchar_t>::Extend(&local_2f8,1);
            }
            *local_2f8.CurPos = 0x2f;
            local_2f8.CurPos = (wchar_t *)((longlong)local_2f8.CurPos + 2);
            pFVar14 = FPaths::GetBaseFilename(&local_338,&local_460,true);
            iVar29 = (pFVar14->Data).ArrayNum;
            iVar23 = iVar29 + -1;
            if (iVar29 == 0) {
              iVar23 = iVar19;
            }
            this_00 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                                (&local_2f8,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar23
                                );
            if (this_00->End < this_00->CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(this_00,1);
            }
            *this_00->CurPos = L';';
            this_00->CurPos = this_00->CurPos + 1;
            pFVar14 = FPaths::GetPath(&local_348,&local_460);
            iVar29 = (pFVar14->Data).ArrayNum;
            iVar23 = iVar29 + -1;
            if (iVar29 == 0) {
              iVar23 = iVar19;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      (this_00,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar23);
            if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_348.Data.AllocatorInstance.Data);
            }
            if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_338.Data.AllocatorInstance.Data);
            }
            if (local_2f8.End < (FScriptContainerElement *)((longlong)local_2f8.CurPos + 2)) {
              TStringBuilderBase<wchar_t>::Extend(&local_2f8,1);
            }
            *local_2f8.CurPos = 0;
            sVar1 = *local_2f8.Base;
            pFVar26 = (FScriptContainerElement *)local_2f8.Base;
            while (sVar1 != 0) {
              if (sVar1 == 0x2f) {
                *(short *)pFVar26 = 0x5c;
              }
              pFVar21 = pFVar26 + 2;
              pFVar26 = pFVar26 + 2;
              sVar1 = *(short *)pFVar21;
            }
            if (local_2f8.End < (FScriptContainerElement *)((longlong)local_2f8.CurPos + 2)) {
              TStringBuilderBase<wchar_t>::Extend(&local_2f8,1);
            }
            *local_2f8.CurPos = 0;
            LppApplySettingString("Vfs",local_2f8.Base);
            local_2f8.CurPos = local_2f8.Base;
            if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
            }
          }
          pwVar13 = wcschr(pwVar24,L';');
          while (pwVar13 != (wchar_t *)0x0) {
            pwVar13 = wcschr(pwVar13 + 1,L';');
            iVar29 = (int)((longlong)pwVar13 - (longlong)pwVar24 >> 1);
            uVar7 = (longlong)iVar29 * 2;
            if (local_2f8.End < (FScriptContainerElement *)((longlong)local_2f8.CurPos + uVar7)) {
              TStringBuilderBase<wchar_t>::Extend(&local_2f8,(longlong)iVar29);
            }
            if (iVar29 != 0) {
              pvVar15 = FGenericPlatformString::Memcpy(local_2f8.CurPos,pwVar24,uVar7);
              local_2f8.CurPos = (wchar_t *)((longlong)pvVar15 + uVar7);
            }
            if (local_2f8.End < (FScriptContainerElement *)((longlong)local_2f8.CurPos + 2)) {
              TStringBuilderBase<wchar_t>::Extend(&local_2f8,1);
            }
            *local_2f8.CurPos = 0;
            LppApplySettingString("Vfs",local_2f8.Base);
            pwVar24 = pwVar13 + 1;
            local_2f8.CurPos = local_2f8.Base;
            pwVar13 = wcschr(pwVar24,L';');
            this = (FLiveCodingModule *)local_408;
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2f8);
        }
        pFVar14 = FPaths::ProjectDir(&local_318);
        pFVar14 = FPaths::ConvertRelativePathToFull(&local_328,pFVar14);
        ::FString::ToLower(pFVar14,&local_3d8);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
        if (local_3d8.Data.ArrayNum == 0) {
          pwVar24 = L"";
        }
        else {
          iVar20 = local_3d8.Data.ArrayNum + -1;
          pwVar24 = (wchar_t *)local_3d8.Data.AllocatorInstance.Data;
        }
        FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar24);
        ::FString::PrintfImpl(&local_3e8,L"UE_%s_0x%08x");
        local_58.Data = (FScriptContainerElement *)0x0;
        if (local_3e8.Data.ArrayNum == 0) {
          pwVar24 = L"";
LAB_146ce44dc:
          sVar16 = wcslen(pwVar24);
          local_48 = (int)sVar16;
          uVar31 = local_48 + 1;
          FVar27.Data = pFVar25;
          if (0x80 < uVar31) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar31,1);
            FVar27.Data = local_58.Data;
          }
          lVar30 = (longlong)(int)uVar31;
          pFVar26 = local_d8;
          if (FVar27.Data != (FScriptContainerElement *)0x0) {
            pFVar26 = FVar27.Data;
          }
          bVar8 = false;
          pFVar21 = pFVar25;
          local_50 = pFVar26;
          if (0 < (int)uVar31) {
            do {
              uVar2 = *(ushort *)((longlong)pwVar24 + (longlong)pFVar21 * 2);
              pFVar26[(longlong)pFVar21] = SUB21(uVar2,0);
              pFVar21 = pFVar21 + 1;
              bVar8 = (bool)(bVar8 | 0x7f < uVar2);
            } while ((longlong)pFVar21 < lVar30);
            if (bVar8) {
              do {
                if (0x7f < *(ushort *)((longlong)pwVar24 + (longlong)pFVar25 * 2)) {
                  pFVar26[(longlong)pFVar25] = (FScriptContainerElement)0x3f;
                }
                pFVar25 = pFVar25 + 1;
              } while ((longlong)pFVar25 < lVar30);
            }
          }
          if ((pFVar26 + lVar30 == (FScriptContainerElement *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        else {
          pwVar24 = (wchar_t *)local_3e8.Data.AllocatorInstance.Data;
          if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_146ce44dc;
          local_50 = (FScriptContainerElement *)0x0;
          local_48 = 0;
        }
        pFVar25 = local_50;
        if (g_startupThread == (ClientStartupThread *)0x0) {
          local_478 = "Live++ was not started properly. Call lppStartup() first.";
          Logging::Log(USER,LOG_ERROR,"%s%s\n");
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)&g_ensureOneTimeStartup);
          if (firstTime == false) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&g_ensureOneTimeStartup);
          }
          else {
            firstTime = false;
            LeaveCriticalSection((LPCRITICAL_SECTION)&g_ensureOneTimeStartup);
            ClientStartupThread::Start(g_startupThread,(char *)pFVar25,g_runMode);
          }
        }
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
        SetBuildArguments(this);
        if (PRIVATE_GIsRunningCommandlet == false) {
          LOCK();
          *(undefined1 *)((longlong)this + 0x28) = 1;
          UNLOCK();
        }
        else {
          UpdateModules(this,true);
        }
        if (local_468 == Automatic) {
          ShowConsole(this,true);
        }
        pFVar17 = FModuleManager::Get();
        FVar18 = TMulticastDelegateRegistration<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
                 ::AddRaw<FLiveCodingModule>
                           (&pFVar17->ModulesChangedEvent,(FLiveCodingModule *)local_388,
                            (pmf_0dc9b289)this);
        *(undefined8 *)((longlong)this + 0x168) = *(undefined8 *)FVar18.ID;
        LOCK();
        *(undefined4 *)((longlong)this + 0x24) = 3;
        UNLOCK();
        local_400 = (pmf_0dc9b289)this;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddLambda<_FLiveCodingModule::StartLiveCoding_::__l5::<lambda_1>_>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &FCoreDelegates::OnPreExit,(<lambda_1> *)(local_388 + 8));
        if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
        }
        if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
        }
        if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_430.Data.AllocatorInstance.Data);
        }
        if ((TTuple<FString,FFormatArgumentValue> *)local_420.Data.AllocatorInstance.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(local_420.Data.AllocatorInstance.Data);
        }
        if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_460.Data.AllocatorInstance.Data);
        }
        goto LAB_146ce46fd;
      }
      LOCK();
      this->State = (atomic<FLiveCodingModule::EState>)0x0;
      UNLOCK();
      if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_430.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_440.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_440.Pairs.ArrayNum = 0;
      local_440.Pairs.ArrayMax = 0;
      pFVar10 = FText::FromString((FText *)(local_388 + 0x10),&local_460);
      local_3a8.Type = Text;
      FText::FText((FText *)&local_3a8.TextValue,pFVar10);
      if ((local_3a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      ::FString::FString(&local_3c8,L"ProjectFile");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_440,&local_3c8,&local_3a8);
      if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      }
      if (local_3a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_3a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if ((ISettingsSection *)local_388._16_8_ != (ISettingsSection *)0x0) {
        (**(code **)((longlong)*(ISettingsSection *)local_388._16_8_ + 0x10))();
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        FText::AsLocalizable_Advanced_LocText
                  (&FormatString,L"LiveCodingModule",L"LiveCodingMissingProjectFile",
                   L"Unable to start live coding session. Unable to find source project file \'{ProjectFile}\'."
                  );
        atexit(`FLiveCodingModule::StartLiveCoding'::__l34::
               _dynamic_atexit_destructor_for__FormatString__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar11 = FTextFormat::FTextFormat(&local_308,&FormatString,Default);
      pFVar10 = FText::Format(&local_368,pFVar11,&local_440);
      FText::operator=(&this->EnableErrorText,pFVar10);
      if (local_368.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
      }
      if (1 < (byte)LogLiveCoding._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
      }
      LOCK();
      this->State = (atomic<FLiveCodingModule::EState>)0x0;
      UNLOCK();
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_440.Pairs.AllocatorInstance.Data,
                 local_440.Pairs.ArrayNum);
      local_420.Data.AllocatorInstance.Data = local_440.Pairs.AllocatorInstance.Data;
    }
    if ((TTuple<FString,FFormatArgumentValue> *)local_420.Data.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
    if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data.AllocatorInstance.Data);
    }
    bVar8 = false;
  }
  else {
LAB_146ce46fd:
    bVar8 = true;
  }
  return bVar8;
}

// StartLiveCodingAsync @ 146ce47a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveCodingModule::StartLiveCodingAsync(FLiveCodingModule *this,ELiveCodingStartupMode param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined ***pppuVar4;
  TStatIdData *local_res20;
  FConstructor local_58;
  undefined8 *local_50 [3];
  TStatId local_38 [2];
  undefined **local_28;
  FLiveCodingModule *local_20;
  ELiveCodingStartupMode local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  undefined ***local_10;
  
  bVar3 = SetupConsolePath(this);
  if (!bVar3) {
    LOCK();
    this->State = (atomic<FLiveCodingModule::EState>)0x0;
    UNLOCK();
    return;
  }
  if (PRIVATE_GIsRunningCommandlet != false) {
    StartLiveCoding(this,param_1);
    return;
  }
  local_10 = (undefined ***)0x0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLiveCodingModule::StartLiveCodingAsync'::`10'::<lambda_1>,1,0>
              ::_vftable_;
  local_17 = local_50[1]._1_4_;
  local_13 = local_50[1]._5_2_;
  local_11 = local_50[1]._7_1_;
  local_38[0].StatIdPtr =
       (TStatIdData *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`FLiveCodingModule::StartLiveCodingAsync'::__l10::<lambda_1>,void>::Call;
  local_res20 = &TStatId::TStatId_NAME_None;
  local_58.Prerequisites =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  local_20 = this;
  local_18 = param_1;
  TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>::FConstructor::
  ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TStatId_&,enum_ENamedThreads::Type_&>
            (&local_58,(TUniqueFunction<void___cdecl(void)> *)local_50,local_38,(Type *)&local_res20
            );
  if (local_38[0].StatIdPtr != (TStatIdData *)0x0) {
    pppuVar4 = &local_28;
    if (local_10 != (undefined ***)0x0) {
      pppuVar4 = local_10;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if (local_50[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_50[0] + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_50[0])(local_50[0],1);
    }
  }
  return;
}

// StartupModule @ 146ce4c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLiveCodingModule::StartupModule(FLiveCodingModule *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  UObject *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  ULiveCodingSettings *pUVar7;
  code *pcVar8;
  IConsoleManager *pIVar9;
  ForAnyElementType _Src;
  bool bVar10;
  int iVar11;
  HMODULE hModule;
  FARPROC pFVar12;
  HANDLE pvVar13;
  FString *pFVar14;
  UClass *pUVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  IConsoleCommand *pIVar18;
  wchar_t *pwVar19;
  size_t sVar20;
  IConsoleVariable *pIVar21;
  wchar_t *pwVar22;
  FDelegateHandle FVar23;
  FName *pFVar24;
  IModuleInterface *pIVar25;
  ELiveCodingStartupMode EVar26;
  longlong *plVar27;
  byte bVar28;
  uint uVar29;
  int iVar30;
  FScriptContainerElement *pFVar31;
  undefined1 auStackY_488 [32];
  bool local_448 [8];
  FString local_440;
  FLLMScope local_430 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_428;
  FDelegateAllocation local_420;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_410;
  FDelegateAllocation local_408;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3f8;
  FDelegateAllocation local_3f0;
  FString local_3e0;
  FWeakObjectPtr local_3d0;
  FName local_3c8;
  FString local_3c0;
  FString local_3b0;
  UObject *local_3a0;
  FName local_398;
  FName local_390;
  FName local_388;
  FMemScope local_380;
  FDestructionSentinel local_378;
  FDestructionSentinel local_360;
  FDestructionSentinel local_348;
  FDestructionSentinel local_330;
  FDelegateAllocation *local_318;
  FDestructionSentinel local_310;
  FDelegateAllocation *local_2f8;
  FDestructionSentinel local_2f0;
  FDelegateAllocation *local_2d8;
  undefined1 local_2d0 [32];
  FString local_2b0;
  FString local_2a0;
  undefined1 local_290 [8];
  TReferenceControllerBase<1> *local_288;
  FText local_280;
  FText local_270;
  FString local_260;
  wchar_t local_248 [264];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_488;
  FLLMScope::FLLMScope(local_430,LLMTagDeclaration_LiveCoding.UniqueName,false,None,Default,true);
  local_3c8 = LLMTagDeclaration_LiveCoding.UniqueName;
  FMemScope::FMemScope(&local_380,&local_3c8,true);
  hModule = LoadLibraryW(L"ntdll.dll");
  if ((hModule == (HMODULE)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NtDll",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Windows\\LiveCoding\\Private\\LiveCodingModule.cpp"
                          ,299,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar12 = GetProcAddress(hModule,"LdrRegisterDllNotification");
  (*pFVar12)(0,OnDllNotification,this,&this->CallbackCookie);
  pFVar31 = (FScriptContainerElement *)0x0;
  iVar30 = 0;
  pvVar13 = GetCurrentProcess();
  iVar11 = K32GetModuleFileNameExW(pvVar13,0,local_248,0x104);
  pFVar14 = ::FString::ConstructFromPtrSize((FString *)(local_2d0 + 0x10),local_248,iVar11);
  if (&local_260 != pFVar14) {
    pFVar31 = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar30 = (pFVar14->Data).ArrayNum;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
  }
  if ((ISettingsSection *)local_2d0._16_8_ != (ISettingsSection *)0x0) {
    FMemory::Free((void *)local_2d0._16_8_);
  }
  plVar27 = *(longlong **)(*(longlong *)(*(longlong *)((longlong)Self + 0x60) + 0x18) + 0x20);
  lVar3 = plVar27[1];
  do {
    if (plVar27[4] == 0) break;
    ::FString::ConstructFromPtrSize
              (&local_3c0,(wchar_t *)plVar27[8],(uint)(*(ushort *)(plVar27 + 7) >> 1));
    iVar11 = local_3c0.Data.ArrayNum;
    if (iVar11 == iVar30) {
      if (1 < iVar11) {
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_3c0.Data.AllocatorInstance.Data,(wchar_t *)pFVar31);
        bVar10 = iVar11 == 0;
        goto LAB_146ce4dfd;
      }
    }
    else {
      bVar10 = iVar11 + iVar30 == 1;
LAB_146ce4dfd:
      if (!bVar10) {
        FPaths::NormalizeFilename(&local_3c0);
        OnDllLoaded(this,&local_3c0);
      }
    }
    plVar27 = (longlong *)*plVar27;
    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
    }
  } while (plVar27 != (longlong *)lVar3);
  pUVar15 = ULiveCodingSettings::StaticClass();
  if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar15);
  }
  this->Settings = (ULiveCodingSettings *)(pUVar15->ClassDefaultObject).field0_0x0;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pIVar9 = IConsoleManager::Singleton;
  local_428.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_420.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_420.DelegateSize = 0;
  pcVar8 = *(code **)((longlong)*IConsoleManager::Singleton + 0x78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_428,(FWriteAccessScope *)&local_330);
  local_318 = &local_420;
  puVar16 = UE::Core::Private::DelegateAllocate(0x28,&local_420);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFLiveCodingModule____A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[4] = EnableConsoleCommand;
    puVar16[3] = this;
  }
  if (local_330.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
  }
  pIVar18 = (IConsoleCommand *)
            (*pcVar8)(pIVar9,L"LiveCoding",L"Enables live coding support",&local_428);
  this->EnableCommand = pIVar18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_428,(FWriteAccessScope *)&local_378);
  if ((local_420.DelegateSize != 0) &&
     (local_420.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_420.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_420,0,0,0x10);
    local_420.DelegateSize = 0;
  }
  if (local_378.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
  }
  if (local_420.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_420.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_428.AccessDetector);
  local_410.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_408.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_408.DelegateSize = 0;
  pcVar8 = *(code **)((longlong)*pIVar9 + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_410,(FWriteAccessScope *)&local_310);
  local_2f8 = &local_408;
  puVar16 = UE::Core::Private::DelegateAllocate(0x20,&local_408);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLiveCodingModule::StartupModule'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar16[3] = this;
  }
  if (local_310.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_310.Accessor,&local_310);
  }
  pIVar18 = (IConsoleCommand *)
            (*pcVar8)(pIVar9,L"LiveCoding.Compile",L"Initiates a live coding compile",&local_410);
  this->CompileCommand = pIVar18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_410,(FWriteAccessScope *)&local_360);
  if ((local_408.DelegateSize != 0) &&
     (local_408.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_408.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_408,0,0,0x10);
    local_408.DelegateSize = 0;
  }
  if (local_360.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
  }
  if (local_408.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_408.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_410.AccessDetector);
  local_3f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_3f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3f0.DelegateSize = 0;
  pcVar8 = *(code **)((longlong)*pIVar9 + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3f8,(FWriteAccessScope *)&local_2f0);
  local_2d8 = &local_3f0;
  puVar16 = UE::Core::Private::DelegateAllocate(0x20,&local_3f0);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLiveCodingModule::StartupModule'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar16[3] = this;
  }
  if (local_2f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f0.Accessor,&local_2f0);
  }
  pIVar18 = (IConsoleCommand *)(*pcVar8)(pIVar9,L"LiveCoding.CompileSync");
  this->CompileSyncCommand = pIVar18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3f8,(FWriteAccessScope *)&local_348);
  if ((local_3f0.DelegateSize != 0) &&
     (local_3f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3f0,0,0,0x10);
    local_3f0.DelegateSize = 0;
  }
  if (local_348.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
  }
  if (local_3f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3f8.AccessDetector);
  pwVar19 = BuildSettings::GetLiveCodingEngineDir();
  ::FString::FString(&local_3b0,pwVar19);
  pwVar19 = DefaultConsolePath;
  local_3c8 = *(FName *)*pIVar9;
  sVar20 = wcslen(DefaultConsolePath);
  _Src.Data = local_3b0.Data.AllocatorInstance.Data;
  local_440.Data.ArrayNum = local_3b0.Data.ArrayNum;
  iVar30 = (int)sVar20;
  if ((local_3b0.Data.ArrayNum == 0) && (iVar30 != -1)) {
    iVar11 = iVar30 + 2;
LAB_146ce5243:
    local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar11 != 0) goto LAB_146ce524d;
    local_440.Data.ArrayMax = 0;
  }
  else {
    iVar11 = iVar30 + 1;
    if (local_3b0.Data.ArrayNum == 0) goto LAB_146ce5243;
LAB_146ce524d:
    local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar29 = local_3b0.Data.ArrayNum + iVar11;
    if ((int)uVar29 < local_3b0.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar29,0,(ForAnyElementType *)&local_440,local_3b0.Data.ArrayNum,
               &local_440.Data.ArrayMax);
    if (local_3b0.Data.ArrayNum != 0) {
      memcpy(local_440.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_3b0.Data.ArrayNum * 2);
    }
  }
  ::FString::PathAppend(&local_440,pwVar19,iVar30);
  pFVar14 = FPaths::ConvertRelativePathToFull(&local_2b0,&local_440);
  pIVar21 = (IConsoleVariable *)
            (*(code *)local_3c8)
                      (pIVar9,L"LiveCoding.ConsolePath",pFVar14,
                       L"Path to the live coding console application");
  this->ConsolePathVariable = pIVar21;
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data.AllocatorInstance.Data);
  }
  pwVar22 = BuildSettings::GetLiveCodingProject();
  pwVar19 = L"";
  if (pwVar22 != (wchar_t *)0x0) {
    pwVar19 = pwVar22;
  }
  ::FString::FString(&local_3e0,pwVar19);
  iVar30 = local_3e0.Data.ArrayNum + -1;
  if (local_3e0.Data.ArrayNum == 0) {
    iVar30 = 0;
  }
  if (0 < iVar30) {
    pFVar14 = FPaths::ConvertRelativePathToFull(&local_2a0,&local_3e0);
    if (&local_3e0 != pFVar14) {
      if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
      }
      local_3e0.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3e0.Data.ArrayNum = (pFVar14->Data).ArrayNum;
      local_3e0.Data.ArrayMax = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
    }
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
  }
  pIVar21 = (IConsoleVariable *)
            (**(code **)*pIVar9)
                      (pIVar9,L"LiveCoding.SourceProject",&local_3e0,
                       L"Path to the project that this target was built from");
  this->SourceProjectVariable = pIVar21;
  FVar23 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
           AddRaw<FLiveCodingModule>
                     ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                       *)&FCoreDelegates::OnEndFrame,(FLiveCodingModule *)local_2d0,
                      (pmf_7d64effa)this);
                    /* WARNING: Load size is inaccurate */
  (this->EndFrameDelegateHandle).ID = *FVar23.ID;
  pFVar24 = ::FName::FName((FName *)(local_2d0 + 8),"Settings");
  pIVar25 = FModuleManager::GetModulePtr_Internal(*pFVar24);
  if (pIVar25 != (IModuleInterface *)0x0) {
    pcVar8 = *(code **)((longlong)*pIVar25 + 0x58);
    pUVar15 = ULiveCodingSettings::StaticClass();
    if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar15);
    }
    pUVar4 = (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_3d0.ObjectIndex = 0;
    local_3d0.ObjectSerialNumber = 0;
    local_3a0 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(&local_3d0,(FObjectPtr)&local_3a0);
    FText::AsLocalizable_Advanced_LocText
              (&local_270,L"LiveCodingModule",L"LiveCodintSettingsDescription",
               L"Settings for recompiling C++ code while the engine is running.");
    FText::AsLocalizable_Advanced_LocText
              (&local_280,L"LiveCodingModule",L"LiveCodingSettingsName",L"Live Coding");
    ::FName::FName(&local_398,"Live Coding");
    ::FName::FName(&local_390,"General");
    ::FName::FName(&local_388,"Editor");
    puVar16 = (undefined8 *)(*pcVar8)(pIVar25,local_290,&local_388,&local_390);
    if (&this->SettingsSection != (TSharedPtr<ISettingsSection,1> *)puVar16) {
      (this->SettingsSection).Object = (ISettingsSection *)*puVar16;
      *puVar16 = 0;
      pTVar5 = (TReferenceControllerBase<1> *)puVar16[1];
      pTVar6 = (this->SettingsSection).SharedReferenceCount.ReferenceController;
      if (pTVar5 != pTVar6) {
        puVar16[1] = 0;
        (this->SettingsSection).SharedReferenceCount.ReferenceController = pTVar5;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar6->SharedReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)pTVar6->_padding_)(pTVar6);
            LOCK();
            paVar1 = &pTVar6->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_288);
    if (local_280.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
    }
    if (local_270.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_270.TextData.Reference + 0x10))();
    }
  }
  LppStartup();
  bVar28 = 1;
  pwVar19 = FCommandLine::Get();
  bVar10 = FParse::Bool(pwVar19,L"-LiveCoding=",local_448);
  if (bVar10) {
    bVar28 = local_448[0] & 1;
  }
  else {
    pwVar19 = FCommandLine::Get();
    bVar10 = FParse::Param(pwVar19,L"LiveCoding");
    local_448[0] = false;
    if (bVar10) {
      local_448[0] = true;
    }
  }
  pUVar7 = this->Settings;
  this->bSettingsEnabledLastTick = pUVar7->bEnabled;
  if ((((pUVar7->bEnabled == false) || (pUVar7->Startup == Manual)) ||
      (bVar10 = FApp::IsUnattended(), bVar10)) || (bVar28 == 0)) {
    if (local_448[0] == false) goto LAB_146ce5639;
    EVar26 = Manual;
  }
  else {
    EVar26 = this->Settings->Startup;
  }
  StartLiveCodingAsync(this,EVar26);
LAB_146ce5639:
  this->bEnableReinstancingLastTick = false;
  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
  }
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
  }
  if (pFVar31 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar31);
  }
  FMemScope::~FMemScope(&local_380);
  FLLMScope::~FLLMScope(local_430);
  return;
}

// StopLiveCoding @ 146ce58b0

void __thiscall FLiveCodingModule::StopLiveCoding(FLiveCodingModule *this)

{
  HANDLE hHandle;
  ulong64 uVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  ClientStartupThread *pCVar4;
  Event *pEVar5;
  bool bVar6;
  uint uVar7;
  ulong64 *puVar8;
  HMODULE hModule;
  FARPROC pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ForAnyElementType *this_00;
  FDestructionSentinel local_48;
  
  pEVar5 = g_requestRestart;
  uVar11 = 0;
  if (this->CallbackCookie != (void *)0x0) {
    if (g_requestRestart != (Event *)0x0) {
      CloseHandle(g_requestRestart->m_event);
      ::operator_delete(pEVar5,8);
    }
    pEVar5 = g_restartPrepared;
    g_requestRestart = (Event *)0x0;
    if (g_restartPrepared != (Event *)0x0) {
      CloseHandle(g_restartPrepared->m_event);
      ::operator_delete(pEVar5,8);
    }
    pEVar5 = g_executeRestart;
    g_restartPrepared = (Event *)0x0;
    if (g_executeRestart != (Event *)0x0) {
      CloseHandle(g_executeRestart->m_event);
      ::operator_delete(pEVar5,8);
    }
    pCVar4 = g_startupThread;
    g_executeRestart = (Event *)0x0;
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar4->m_thread).m_value);
      (pCVar4->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    pCVar4 = g_startupThread;
    if (g_startupThread != (ClientStartupThread *)0x0) {
      ClientStartupThread::~ClientStartupThread(g_startupThread);
      ::operator_delete(pCVar4,0x68);
    }
    g_startupThread = (ClientStartupThread *)0x0;
    uVar1 = (this->EndFrameDelegateHandle).ID;
    if (uVar1 != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreDelegates::OnEndFrame,(FWriteAccessScope *)&local_48);
      uVar12 = uVar11;
      if (0 < (int)FCoreDelegates::OnEndFrame._16_4_) {
        do {
          uVar10 = (uint)uVar11;
          uVar7 = 0;
          if ((int)uVar10 < (int)FCoreDelegates::OnEndFrame._16_4_) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          this_00 = (ForAnyElementType *)(FCoreDelegates::OnEndFrame._8_8_ + uVar12);
          if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
             && (puVar8 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
                *puVar8 == uVar1)) {
            if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0)
               ) {
              (*(code *)**(undefined8 **)this_00->Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10)
              ;
              *(undefined4 *)&this_00[1].Data = 0;
            }
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &FCoreDelegates::OnEndFrame,false);
            break;
          }
          uVar11 = (ulonglong)(uVar10 + 1);
          uVar12 = uVar12 + 0x10;
        } while ((int)(uVar10 + 1) < (int)FCoreDelegates::OnEndFrame._16_4_);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar3 = IConsoleManager::Singleton;
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
              (IConsoleManager::Singleton,this->SourceProjectVariable,1);
    (**(code **)((longlong)*pIVar3 + 0xb8))(pIVar3,this->ConsolePathVariable,1);
    (**(code **)((longlong)*pIVar3 + 0xb8))(pIVar3,this->CompileCommand,1);
    (**(code **)((longlong)*pIVar3 + 0xb8))(pIVar3,this->CompileSyncCommand,1);
    (**(code **)((longlong)*pIVar3 + 0xb8))(pIVar3,this->EnableCommand,1);
    hModule = LoadLibraryW(L"ntdll.dll");
    if ((hModule == (HMODULE)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NtDll",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Windows\\LiveCoding\\Private\\LiveCodingModule.cpp"
                           ,299,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = GetProcAddress(hModule,"LdrUnregisterDllNotification");
    (*pFVar9)(this->CallbackCookie);
    this->CallbackCookie = (void *)0x0;
  }
  if (this->GlobalMutex != (HANDLE)0x0) {
    ReleaseMutex(this->GlobalMutex);
    this->GlobalMutex = (void *)0x0;
  }
  return;
}

// Tick @ 146ce7660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveCodingModule::Tick(FLiveCodingModule *this)

{
  atomic<FLiveCodingModule::EState> aVar1;
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  ClientStartupThread *pCVar2;
  bool bVar3;
  DWORD DVar4;
  BaseCommand *pBVar5;
  void *pvVar6;
  BaseCommand *pBVar7;
  
  if ((this->Settings->bEnabled != this->bSettingsEnabledLastTick) &&
     (this->Settings->Startup != Manual)) {
    if (this->State == (atomic<FLiveCodingModule::EState>)0x0) {
      this->bSettingsEnabledLastTick = this->Settings->bEnabled;
      if (this->Settings->bEnabled != false) {
        EnableForSession(this,true);
        aVar1 = this->State;
        if ((((aVar1 == (atomic<FLiveCodingModule::EState>)0x0) ||
             (aVar1 == (atomic<FLiveCodingModule::EState>)0x1)) ||
            (aVar1 == (atomic<FLiveCodingModule::EState>)0x2)) ||
           (aVar1 != (atomic<FLiveCodingModule::EState>)0x3)) {
          FMessageDialog::Open(Ok,&this->EnableErrorText);
        }
      }
    }
    else if (((this->State == (atomic<FLiveCodingModule::EState>)0x3) &&
             (this->bSettingsEnabledLastTick = this->Settings->bEnabled,
             this->Settings->bEnabled == false)) &&
            ((this->State == (atomic<FLiveCodingModule::EState>)0x2 ||
             (this->State == (atomic<FLiveCodingModule::EState>)0x3)))) {
      aVar1 = this->State;
      if (((aVar1 != (atomic<FLiveCodingModule::EState>)0x0) &&
          (aVar1 != (atomic<FLiveCodingModule::EState>)0x1)) &&
         ((aVar1 == (atomic<FLiveCodingModule::EState>)0x2 ||
          (aVar1 == (atomic<FLiveCodingModule::EState>)0x3)))) {
        if (3 < (byte)LogLiveCoding._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
        }
        LppSetActive(false);
        LppSetVisible(false);
      }
      LOCK();
      this->State = (atomic<FLiveCodingModule::EState>)0x2;
      UNLOCK();
    }
  }
  aVar1 = this->State;
  if (aVar1 == (atomic<FLiveCodingModule::EState>)0x0) {
    return;
  }
  if (aVar1 == (atomic<FLiveCodingModule::EState>)0x1) {
    return;
  }
  if ((aVar1 != (atomic<FLiveCodingModule::EState>)0x2) &&
     (aVar1 != (atomic<FLiveCodingModule::EState>)0x3)) {
    return;
  }
  if (g_startupThread != (ClientStartupThread *)0x0) {
    bVar3 = Event::WaitTimeout(g_requestRestart,0);
    if (!bVar3) goto LAB_146ce7803;
    if (g_startupThread != (ClientStartupThread *)0x0) {
      SetEvent(g_restartPrepared->m_event);
      Event::WaitTimeout(g_executeRestart,0xffffffff);
      FWindowsPlatformMisc::RequestExit(true,(wchar_t *)0x0);
      goto LAB_146ce7803;
    }
  }
  Logging::Log(USER,LOG_ERROR,"%s%s\n");
LAB_146ce7803:
  aVar1 = this->State;
  pBVar7 = (BaseCommand *)0x0;
  if ((((aVar1 != (atomic<FLiveCodingModule::EState>)0x0) &&
       (aVar1 != (atomic<FLiveCodingModule::EState>)0x1)) &&
      ((aVar1 == (atomic<FLiveCodingModule::EState>)0x2 ||
       (aVar1 == (atomic<FLiveCodingModule::EState>)0x3)))) &&
     (this->bEnableReinstancingLastTick != false)) {
    this->bEnableReinstancingLastTick = false;
    pCVar2 = g_startupThread;
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar2->m_thread).m_value);
      (pCVar2->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    this_00 = pCVar2->m_userCommandThread;
    if (this_00 != (ClientUserCommandThread *)0x0) {
      pBVar5 = ::operator_new(0x30);
      if (pBVar5 != (BaseCommand *)0x0) {
        pBVar5->m_expectResponse = false;
        pBVar5->_padding_ = (longlong)&ProxyCommand<commands::SetReinstancingFlow>::_vftable_;
        pBVar5[1]._padding_ = 0;
        pvVar6 = operator_new__(0);
        *(void **)&pBVar5[1].m_expectResponse = pvVar6;
        pBVar5[2]._padding_ = 0;
        *(undefined8 *)&pBVar5[2].m_expectResponse = 0;
        pBVar7 = pBVar5;
      }
      DVar4 = GetCurrentProcessId();
      *(undefined1 *)((longlong)&pBVar7[1]._padding_ + 4) = 0;
      *(DWORD *)&pBVar7[1]._padding_ = DVar4;
      ClientUserCommandThread::PushUserCommand(this_00,pBVar7);
    }
  }
  if (this->bUpdateModulesInTick != (atomic<bool>)0x0) {
    UpdateModules(this,false);
    LOCK();
    this->bUpdateModulesInTick = (atomic<bool>)0x0;
    UNLOCK();
  }
  AttemptSyncLivePatching(this);
  return;
}

// UpdateModules @ 146ce8390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLiveCodingModule::UpdateModules(FLiveCodingModule *this,bool param_1)

{
  undefined1 *puVar1;
  int iVar2;
  atomic<FLiveCodingModule::EState> aVar3;
  FBaseGraphTask *pFVar4;
  code *pcVar5;
  HANDLE hHandle;
  ClientStartupThread *pCVar6;
  bool bVar7;
  DWORD DVar8;
  ReservePagesGlobalData *lpCriticalSection;
  FTaskGraphInterface *pFVar9;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  FBaseGraphTask *pFVar11;
  undefined1 auStackY_2d8 [32];
  TRefCountPtr<FBaseGraphTask> local_298;
  WCHAR *local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  int iStack_280;
  int iStack_27c;
  FScriptContainerElement *local_278;
  undefined8 uStack_270;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_268;
  int local_240;
  int local_23c;
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  aVar3 = this->State;
  if (aVar3 != (atomic<FLiveCodingModule::EState>)0x0) {
    if (aVar3 == (atomic<FLiveCodingModule::EState>)0x1) {
      if (!param_1) {
        return;
      }
    }
    else if ((aVar3 != (atomic<FLiveCodingModule::EState>)0x2) &&
            (aVar3 != (atomic<FLiveCodingModule::EState>)0x3)) {
      return;
    }
    SetBuildArguments(this);
    lpCriticalSection = GetReservePagesGlobalData();
    if (lpCriticalSection == (ReservePagesGlobalData *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_278 = (lpCriticalSection->ModuleChanges).AllocatorInstance.Data;
    uStack_270._0_4_ = (lpCriticalSection->ModuleChanges).ArrayNum;
    uStack_270._4_4_ = (lpCriticalSection->ModuleChanges).ArrayMax;
    pFVar11 = (FBaseGraphTask *)0x0;
    (lpCriticalSection->ModuleChanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (lpCriticalSection->ModuleChanges).ArrayNum = 0;
    (lpCriticalSection->ModuleChanges).ArrayMax = 0;
    local_288 = *(undefined4 *)&(lpCriticalSection->ReservedPages).AllocatorInstance.Data;
    uStack_284 = *(undefined4 *)
                  ((longlong)&(lpCriticalSection->ReservedPages).AllocatorInstance.Data + 4);
    iStack_280 = (lpCriticalSection->ReservedPages).ArrayNum;
    iStack_27c = (lpCriticalSection->ReservedPages).ArrayMax;
    (lpCriticalSection->ReservedPages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (lpCriticalSection->ReservedPages).ArrayNum = 0;
    (lpCriticalSection->ReservedPages).ArrayMax = 0;
    pFVar4 = (lpCriticalSection->ReservePagesTaskRef).Reference;
    if (pFVar4 == (FBaseGraphTask *)0x0) {
      lpCriticalSection->LastReservePagesModuleCount = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      LOCK();
      *(int *)&pFVar4->field_0x30 = *(int *)&pFVar4->field_0x30 + 1;
      UNLOCK();
      lpCriticalSection->LastReservePagesModuleCount = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar9 = FTaskGraphInterface::Get();
      pcVar5 = *(code **)((longlong)*pFVar9 + 0x60);
      LOCK();
      *(int *)&pFVar4->field_0x30 = *(int *)&pFVar4->field_0x30 + 1;
      UNLOCK();
      local_268.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_240 = 1;
      local_298.Reference = pFVar4;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,1,0,&local_268,1,&local_23c);
      FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_268;
      if (local_268.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar10 = local_268.SecondaryData;
      }
      ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                ((void *)FVar10,&local_298,1);
      (*pcVar5)(pFVar9,&local_268,0xff);
      FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_268;
      if (local_268.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar10 = local_268.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar10,local_240);
      if (local_268.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_268.SecondaryData);
      }
      pFVar11 = pFVar4;
      if (local_298.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(local_298.Reference)->field_0x30;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)local_298.Reference)(local_298.Reference,1);
        }
      }
    }
    DVar8 = GetModuleFileNameW((HMODULE)hInstance,local_238,0x104);
    if ((DVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetModuleFileNameW(hInstance, FullFilePath, (sizeof(UEArrayCountHelper(FullFilePath)) - 1))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Windows\\LiveCoding\\Private\\LiveCodingModule.cpp"
                           ,0x52e,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pCVar6 = g_startupThread;
    if (g_startupThread == (ClientStartupThread *)0x0) {
      Logging::Log(USER,LOG_ERROR,"%s%s\n");
    }
    else {
      hHandle = (g_startupThread->m_thread).m_value;
      if (hHandle != Thread::INVALID_HANDLE.m_value) {
        WaitForSingleObject(hHandle,0xffffffff);
        CloseHandle((pCVar6->m_thread).m_value);
        (pCVar6->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
      }
      if (pCVar6->m_userCommandThread != (ClientUserCommandThread *)0x0) {
        local_290 = local_238;
        ClientUserCommandThread::EnableModules(pCVar6->m_userCommandThread,&local_290,1);
      }
    }
    if (pFVar11 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar11->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)pFVar11)(pFVar11,1);
      }
    }
    if ((void *)CONCAT44(uStack_284,local_288) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(uStack_284,local_288));
    }
    if (local_278 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278);
    }
  }
  return;
}

// WaitForStartup @ 146ce87d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveCodingModule::WaitForStartup(FLiveCodingModule *this)

{
  FLiveCodingModule *local_res8 [4];
  code *local_18;
  FLiveCodingModule **local_10;
  
  if (this->State == (atomic<FLiveCodingModule::EState>)0x1) {
    if (3 < (byte)LogLiveCoding._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
    }
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FLiveCodingModule::WaitForStartup'::__l5::<lambda_1>,bool>::Call;
    local_res8[0] = this;
    FGenericPlatformProcess::ConditionalSleep((TFunctionRef<bool___cdecl(void)> *)&local_18,0.0);
  }
  return;
}

