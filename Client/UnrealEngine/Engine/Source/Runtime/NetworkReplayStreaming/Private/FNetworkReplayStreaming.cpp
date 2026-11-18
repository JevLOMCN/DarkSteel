// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkReplayStreaming
// Functions: 11

// GetFactory @ 144643430

INetworkReplayStreamingFactory * __thiscall
FNetworkReplayStreaming::GetFactory(FNetworkReplayStreaming *this,wchar_t *param_1)

{
  FName FVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FModuleManager *pFVar4;
  FName *pFVar5;
  IModuleInterface *pIVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FName local_res8;
  FName local_res10;
  FString local_48;
  FString local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&DefaultFactoryName,L"LocalFileNetworkReplayStreaming");
      atexit(`FNetworkReplayStreaming::GetFactory'::__l2::
             _dynamic_atexit_destructor_for__DefaultFactoryName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7.Data = DefaultFactoryName.Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar8 = DefaultFactoryName.Data.ArrayNum;
  local_48.Data.ArrayNum = iVar8;
  if (iVar8 == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,(ForAnyElementType *)&local_48,iVar8,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,FVar7.Data,(longlong)iVar8 * 2);
  }
  if (param_1 == (wchar_t *)0x0) {
    FConfigCacheIni::GetString
              (GConfig,L"NetworkReplayStreaming",L"DefaultFactoryName",&local_48,&GEngineIni);
  }
  else {
    ::FString::operator=(&local_48,param_1);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pwVar3 = FCommandLine::Get();
  bVar2 = FParse::Value(pwVar3,L"-REPLAYSTREAMER=",&local_38,true,(wchar_t **)0x0);
  if (!bVar2) {
    pwVar3 = FCommandLine::Get();
    bVar2 = FParse::Value(pwVar3,L"-REPLAYSTREAMEROVERRIDE=",&local_38,true,(wchar_t **)0x0);
    if (!bVar2) goto LAB_144643574;
  }
  iVar8 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange(&local_48,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar8);
LAB_144643574:
  pFVar4 = FModuleManager::Get();
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
  bVar2 = FModuleManager::IsModuleLoaded(pFVar4,*pFVar5);
  if (!bVar2) {
    pFVar4 = FModuleManager::Get();
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    pFVar5 = ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
    FModuleManager::LoadModule(pFVar4,*pFVar5,None);
    pFVar4 = FModuleManager::Get();
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    pFVar5 = ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
    bVar2 = FModuleManager::IsModuleLoaded(pFVar4,*pFVar5);
    FVar7 = DefaultFactoryName.Data.AllocatorInstance;
    if (!bVar2) {
      iVar8 = DefaultFactoryName.Data.ArrayNum;
      local_48.Data.ArrayNum = iVar8;
      if ((iVar8 == 0) && (local_48.Data.ArrayMax == 0)) {
        local_48.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,local_48.Data.ArrayMax,(ForAnyElementType *)&local_48,iVar8,
                   &local_48.Data.ArrayMax);
        if (iVar8 != 0) {
          memcpy(local_48.Data.AllocatorInstance.Data,FVar7.Data,(longlong)iVar8 * 2);
        }
      }
    }
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,(wchar_t *)FVar7.Data);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (&this->LoadedFactories,&local_res8,(bool *)&local_res10);
  FModuleManager::Get();
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
  FVar1 = *pFVar5;
  pFVar4 = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModuleChecked(pFVar4,FVar1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return (INetworkReplayStreamingFactory *)pIVar6;
}

// GetAutomaticReplayPrefixExtern @ 144643740

FString * __thiscall
FNetworkReplayStreaming::GetAutomaticReplayPrefixExtern
          (FNetworkReplayStreaming *this,FString *__return_storage_ptr__)

{
  TConsoleVariableData<FString> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarReplayStreamerAutoDemoPrefix.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 0x10;
      goto LAB_14464376f;
    }
  }
  lVar3 = 0;
LAB_14464376f:
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     ((longlong)&pTVar1->ShadowedValue[0].Data.AllocatorInstance.Data + lVar3));
  return __return_storage_ptr__;
}

// GetMaxNumberOfAutomaticReplaysExtern @ 144643790

int __thiscall
FNetworkReplayStreaming::GetMaxNumberOfAutomaticReplaysExtern(FNetworkReplayStreaming *this)

{
  bool bVar1;
  int iVar2;
  int local_res10 [2];
  int *local_res18 [2];
  
  local_res10[0] = 10;
  FConfigCacheIni::GetInt
            (GConfig,L"NetworkReplayStreaming",L"MaxNumberAutomaticReplays",local_res10,&GEngineIni)
  ;
  iVar2 = local_res10[0];
  if (local_res10[0] < 0) {
    local_res18[0] = local_res10;
    bVar1 = `FNetworkReplayStreaming::GetMaxNumberOfAutomaticReplays'::__l3::<lambda_1>::operator()
                      (local_res18);
    iVar2 = 10;
    if (bVar1) {
      iVar2 = local_res10[0];
    }
  }
  return iVar2;
}

// Exec @ 144643800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNetworkReplayStreaming::Exec
          (FNetworkReplayStreaming *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  wchar_t *local_res18 [2];
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  FString local_18;
  
  local_res18[0] = param_2;
  bVar2 = FParse::Command(local_res18,L"REPLAYSTREAMER",true);
  if (!bVar2) {
    return false;
  }
  FParse::Token(&local_18,local_res18,false);
  if (1 < local_18.Data.ArrayNum) {
    plVar4 = (longlong *)
             (**(code **)(*(longlong *)&this[-1].LoadedFactories.HashSize + 0x40))
                       (&this[-1].LoadedFactories.HashSize,local_18.Data.AllocatorInstance.Data);
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_28);
    if (local_28 != (longlong *)0x0) {
      if ((local_28 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      (**(code **)(*local_28 + 0x1b8))(local_28,local_res18[0],param_3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// ~FNetworkReplayStreaming @ 144643cf0

void __thiscall FNetworkReplayStreaming::~FNetworkReplayStreaming(FNetworkReplayStreaming *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&_vftable__for__IModuleInterface__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  (this->LoadedFactories).HashSize = 0;
  FVar1 = (this->LoadedFactories).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LoadedFactories).Elements);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

// Flush @ 144644340

void __thiscall FNetworkReplayStreaming::Flush(FNetworkReplayStreaming *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FModuleManager *pFVar9;
  IModuleInterface *pIVar10;
  longlong lVar11;
  FName *pFVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(this->LoadedFactories).Elements.field_0x28;
  puVar1 = &(this->LoadedFactories).Elements.field_0x10;
  iVar15 = 0;
  uVar7 = 1;
  iVar17 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(this->LoadedFactories).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1446443dd;
      uVar14 = puVar18[lVar11 + 1];
    }
    uVar7 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar8 = local_res10 + -1 + iVar17;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1446443dd:
  uVar14 = *(uint *)&(this->LoadedFactories).Elements.field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar15);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar17;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->LoadedFactories).Elements.field_0x8 -
                       *(int *)&(this->LoadedFactories).Elements.field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->LoadedFactories).Elements.field_0x28;
  if (uVar14 != uVar7) {
    puVar16 = *(undefined1 **)&(this->LoadedFactories).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      uVar13 = uVar13 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1446444e0;
      uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar7 < (int)uVar14) {
      uVar14 = uVar7;
    }
  }
LAB_1446444e0:
  while( true ) {
    if (*(int *)&(this->LoadedFactories).Elements.field_0x8 -
        *(int *)&(this->LoadedFactories).Elements.field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar14) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar12 = (FName *)(*(longlong *)&(this->LoadedFactories).Elements +
                       (longlong)TStack_50.CurrentBitIndex * 0x10);
    pFVar9 = FModuleManager::Get();
    bVar6 = FModuleManager::IsModuleLoaded(pFVar9,*pFVar12);
    if (bVar6) {
      FModuleManager::Get();
      FVar4 = *pFVar12;
      pFVar9 = FModuleManager::Get();
      pIVar10 = FModuleManager::LoadModuleChecked(pFVar9,FVar4);
      (**(code **)((longlong)*pIVar10 + 0x48))(pIVar10);
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// GetAutomaticReplayPrefix @ 144644590

FString * __cdecl FNetworkReplayStreaming::GetAutomaticReplayPrefix(FString *__return_storage_ptr__)

{
  TConsoleVariableData<FString> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarReplayStreamerAutoDemoPrefix.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 0x10;
      goto LAB_1446445bf;
    }
  }
  lVar3 = 0;
LAB_1446445bf:
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     ((longlong)&pTVar1->ShadowedValue[0].Data.AllocatorInstance.Data + lVar3));
  return __return_storage_ptr__;
}

// GetMaxNumberOfAutomaticReplays @ 144644610

int __cdecl FNetworkReplayStreaming::GetMaxNumberOfAutomaticReplays(void)

{
  bool bVar1;
  int iVar2;
  int local_res8 [2];
  int *local_res10 [3];
  
  local_res8[0] = 10;
  FConfigCacheIni::GetInt
            (GConfig,L"NetworkReplayStreaming",L"MaxNumberAutomaticReplays",local_res8,&GEngineIni);
  iVar2 = local_res8[0];
  if (local_res8[0] < 0) {
    local_res10[0] = local_res8;
    bVar1 = `FNetworkReplayStreaming::GetMaxNumberOfAutomaticReplays'::__l3::<lambda_1>::operator()
                      (local_res10);
    iVar2 = 10;
    if (bVar1) {
      iVar2 = local_res8[0];
    }
  }
  return iVar2;
}

// GetReplayFileExtension @ 144644680

FString * __cdecl FNetworkReplayStreaming::GetReplayFileExtension(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L".replay");
  return __return_storage_ptr__;
}

// UseDateTimeAsAutomaticReplayPostfix @ 144644820

bool __cdecl FNetworkReplayStreaming::UseDateTimeAsAutomaticReplayPostfix(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarReplayStreamerAutoDemoUseDateTimePostfix.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

// operator() @ 1504c20f0

bool __thiscall
`FNetworkReplayStreaming::GetMaxNumberOfAutomaticReplays'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6311919655149633480>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6311919655149633480>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

