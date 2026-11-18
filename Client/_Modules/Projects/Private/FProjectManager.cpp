// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 30

// FProjectManager @ 141e0e210

/* WARNING: Enum "Type": Some values do not have unique names */

FProjectManager * __thiscall FProjectManager::FProjectManager(FProjectManager *this)

{
  *(undefined8 *)&(this->OnTargetPlatformsForCurrentProjectChangedEvent).field_0x18 = 2;
  this->_padding_ = (longlong)&___7FProjectManager__6B_;
  (this->CurrentProject).Object = (FProjectDescriptor *)0x0;
  (this->CurrentProject).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentProjectModuleContextInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentProjectModuleContextInfos).ArrayNum = 0;
  (this->CurrentProjectModuleContextInfos).ArrayMax = 0;
  this->bIsCurrentProjectDirty = false;
  *(undefined8 *)&this->OnTargetPlatformsForCurrentProjectChangedEvent = 0;
  *(undefined8 *)&(this->OnTargetPlatformsForCurrentProjectChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnTargetPlatformsForCurrentProjectChangedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnLoadingPhaseCompleteEvent = 0;
  *(undefined8 *)&(this->OnLoadingPhaseCompleteEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadingPhaseCompleteEvent).field_0x10 = 0;
  (this->SuppressProjectFileWriteList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuppressProjectFileWriteList).ArrayNum = 0;
  (this->SuppressProjectFileWriteList).ArrayMax = 0;
  *(undefined8 *)&(this->OnLoadingPhaseCompleteEvent).field_0x18 = 2;
  return this;
}

// AddSuppressProjectFileWrite @ 141e14c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FProjectManager::AddSuppressProjectFileWrite(FProjectManager *this,FName param_1)

{
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&this->SuppressProjectFileWriteList,local_res10);
  return;
}

// ClearSupportedTargetPlatformsForCurrentProject @ 141e15ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FProjectManager::ClearSupportedTargetPlatformsForCurrentProject(FProjectManager *this)

{
  int *piVar1;
  FProjectDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  FText local_28;
  FString local_18;
  
  pFVar2 = (this->CurrentProject).Object;
  if (pFVar2 != (FProjectDescriptor *)0x0) {
    piVar1 = &(pFVar2->TargetPlatforms).ArrayMax;
    (pFVar2->TargetPlatforms).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(pFVar2->TargetPlatforms).AllocatorInstance,0,piVar1);
    }
    FText::FText(&local_28);
    if ((this->CurrentProject).Object == (FProjectDescriptor *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->CurrentProject).Object;
    pFVar5 = FPaths::GetProjectFilePath(&local_18);
    FProjectDescriptor::Save(pFVar2,pFVar5,&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnTargetPlatformsForCurrentProjectChangedEvent);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ClearSupportedTargetPlatformsForProject @ 141e15bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FProjectManager::ClearSupportedTargetPlatformsForProject(FProjectManager *this,FString *param_1)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  undefined1 auStackY_1c8 [32];
  FString local_198;
  FString local_188;
  FText local_178;
  FString local_168;
  FProjectDescriptor local_158;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  FProjectDescriptor::FProjectDescriptor(&local_158);
  FText::FText(&local_178);
  bVar1 = FProjectDescriptor::Load(&local_158,param_1,&local_178);
  if (!bVar1) goto LAB_141e15cee;
  local_158.TargetPlatforms.ArrayNum = 0;
  if (local_158.TargetPlatforms.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&local_158.TargetPlatforms.AllocatorInstance,0,
               &local_158.TargetPlatforms.ArrayMax);
  }
  FProjectDescriptor::Save(&local_158,param_1,&local_178);
  pFVar3 = FPaths::GetProjectFilePath(&local_168);
  FPaths::ConvertRelativePathToFull(&local_188,pFVar3);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  FPaths::ConvertRelativePathToFull(&local_198,param_1);
  if (local_188.Data.ArrayNum == local_198.Data.ArrayNum) {
    if (1 < local_188.Data.ArrayNum) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_188.Data.AllocatorInstance.Data,
                         (wchar_t *)local_198.Data.AllocatorInstance.Data);
      bVar1 = iVar2 == 0;
      goto LAB_141e15cc0;
    }
LAB_141e15cc7:
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnTargetPlatformsForCurrentProjectChangedEvent);
  }
  else {
    bVar1 = local_188.Data.ArrayNum + local_198.Data.ArrayNum == 1;
LAB_141e15cc0:
    if (bVar1) goto LAB_141e15cc7;
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
LAB_141e15cee:
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
  }
  FProjectDescriptor::~FProjectDescriptor(&local_158);
  return;
}

// GetAdditionalPluginDirectories @ 141e21c00

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FProjectManager::GetAdditionalPluginDirectories(FProjectManager *this)

{
  FProjectDescriptor *pFVar1;
  
  pFVar1 = (this->CurrentProject).Object;
  if (pFVar1 == (FProjectDescriptor *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`FProjectManager::GetAdditionalPluginDirectories'::__l5::
               _dynamic_atexit_destructor_for__EmptyList__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    return &EmptyList;
  }
  return &pFVar1->AdditionalPluginDirectories;
}

// GetAutoLoadProjectFileName @ 141e21f40

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FProjectManager::GetAutoLoadProjectFileName(FProjectManager *this)

{
  FString *pFVar1;
  size_t sVar2;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FPaths::GameAgnosticSavedDir(&local_38);
      if ((pFVar1->Data).ArrayNum == 0) {
        local_28.DataPtr = L"";
      }
      else {
        local_28.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
      }
      local_28.Size = 0;
      if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
        sVar2 = wcslen(local_28.DataPtr);
        local_28.Size = (int)sVar2;
      }
      local_10 = 0x13;
      local_18 = L"AutoLoadProject.txt";
      FPaths::CombineInternal(&RecentProjectFileName,&local_28,2);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      atexit(`FProjectManager::GetAutoLoadProjectFileName'::__l2::
             _dynamic_atexit_destructor_for__RecentProjectFileName__);
      _Init_thread_footer(&::_TSS0);
      return &RecentProjectFileName;
    }
  }
  return &RecentProjectFileName;
}

// GetCurrentProject @ 141e22fc0

/* WARNING: Enum "Type": Some values do not have unique names */

FProjectDescriptor * __thiscall FProjectManager::GetCurrentProject(FProjectManager *this)

{
  return (this->CurrentProject).Object;
}

// GetCurrentProjectModuleContextInfos @ 141e22fd0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FModuleContextInfo,TSizedDefaultAllocator<32>_> * __thiscall
FProjectManager::GetCurrentProjectModuleContextInfos(FProjectManager *this)

{
  return &this->CurrentProjectModuleContextInfos;
}

// GetDefaultEnabledPlugins @ 141e22fe0

void __cdecl
FProjectManager::GetDefaultEnabledPlugins
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2,bool param_3)

{
  int iVar1;
  char cVar2;
  IPluginManager *pIVar3;
  longlong lVar4;
  FString *pFVar5;
  TSharedRef<IPlugin,1> *pTVar6;
  TSharedRef<IPlugin,1> *pTVar7;
  undefined1 local_res20 [8];
  TSharedRef<IPlugin,1> *local_28;
  int local_20;
  
  pIVar3 = IPluginManager::Get();
  (**(code **)((longlong)*pIVar3 + 0xe0))(pIVar3,&local_28);
  iVar1 = local_20;
  pTVar7 = local_28 + local_20;
  pTVar6 = local_28;
  do {
    if (local_20 != iVar1) {
      `TCheckedPointerIterator<TSharedRef<IPlugin,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pTVar6 == pTVar7) {
      DestructItems<TSharedRef<IPlugin,1>,int>(local_28,local_20);
      if (local_28 != (TSharedRef<IPlugin,1> *)0x0) {
        FMemory::Free(local_28);
      }
      return;
    }
    cVar2 = (**(code **)(*(longlong *)pTVar6->Object + 0x50))(pTVar6->Object,param_3);
    if (cVar2 != '\0') {
      if (!param_2) {
        lVar4 = (**(code **)(*(longlong *)pTVar6->Object + 0xa0))();
        if (*(char *)(lVar4 + 0x13c) != '\0') goto LAB_141e23084;
      }
      pFVar5 = (FString *)(**(code **)(*(longlong *)pTVar6->Object + 8))();
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>(param_1,pFVar5);
    }
LAB_141e23084:
    pTVar6 = pTVar6 + 1;
  } while( true );
}

// HasDefaultPluginSettings @ 141e25da0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectManager::HasDefaultPluginSettings(FProjectManager *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  pwVar2 = FGenericPlatformMisc::GetUBTPlatform();
  ::FString::FString(&local_18,pwVar2);
  bVar1 = ::HasDefaultPluginSettings(&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsCurrentProjectDirty @ 141e26600

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectManager::IsCurrentProjectDirty(FProjectManager *this)

{
  return this->bIsCurrentProjectDirty;
}

// IsEnterpriseProject @ 141e267c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectManager::IsEnterpriseProject(FProjectManager *this)

{
  FProjectDescriptor *pFVar1;
  
  pFVar1 = (this->CurrentProject).Object;
  if (pFVar1 != (FProjectDescriptor *)0x0) {
    return pFVar1->bIsEnterpriseProject;
  }
  return false;
}

// IsSuppressingProjectFileWrite @ 141e26dd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectManager::IsSuppressingProjectFileWrite(FProjectManager *this)

{
  return 0 < (this->SuppressProjectFileWriteList).ArrayNum;
}

// LoadModulesForProject @ 141e28a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FProjectManager::LoadModulesForProject(FProjectManager *this,Type param_1)

{
  ulonglong uVar1;
  FProjectDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FProjectManager::LoadModulesForProject(ELoadingPhase::Type)_::_2_::FStat_STAT_GameModule>
  FVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  uint uVar13;
  longlong lVar14;
  FNameEntryId FVar15;
  FName FVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  undefined1 auStackY_2f8 [32];
  FText local_298;
  FColor_u_0 local_288 [2];
  uint local_280;
  uint uStack_27c;
  FText local_278;
  FName local_268;
  FName local_260;
  int local_250;
  undefined1 local_24c [4];
  undefined1 local_248 [4];
  undefined1 local_244 [4];
  undefined1 local_240 [8];
  longlong *local_238;
  int iStack_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *local_228;
  undefined4 uStack_220;
  int iStack_21c;
  int local_218;
  int iStack_214;
  longlong *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  FText local_1e0;
  FText local_1d0;
  FText local_1c0;
  FText local_1b0;
  FText local_1a0;
  FText local_190;
  FText local_180;
  FText local_170;
  FText local_160;
  FText local_150;
  FText local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FName local_f0;
  FName local_e8;
  FTextFormat local_e0;
  FTextFormat local_d0;
  FTextFormat local_c0;
  FTextFormat local_b0;
  FTextFormat local_a0;
  undefined1 local_88 [32];
  uint *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  iVar19 = 0;
  iVar17 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_GameModule ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FProjectManager::LoadModulesForProject(ELoadingPhase::Type)_::_2_::FStat_STAT_GameModule>
         )0x0) {
      pFVar9 = ::FName::FName(&local_f0,"STAT_GameModule");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameModule,*pFVar9,
                 L"Loading Game Modules","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_GameModule;
  if (StatPtr_STAT_GameModule ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FProjectManager::LoadModulesForProject(ELoadingPhase::Type)_::_2_::FStat_STAT_GameModule>
       )0x0) {
    pFVar9 = ::FName::FName(&local_e8,"STAT_GameModule");
    FVar10 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FProjectManager::LoadModulesForProject(ELoadingPhase::Type)_::_2_::FStat_STAT_GameModule>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameModule,*pFVar9,
                          L"Loading Game Modules","STATGROUP_LoadTime","STATCAT_Advanced",
                          L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_260.ComparisonIndex.Value = 0;
  local_260.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_288[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_288[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_268.ComparisonIndex.Value = FVar15.Value;
        local_268.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_268,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\ProjectManager.cpp"
                   ,0x35);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_280 = FVar15.Value;
      uStack_27c = uVar13;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar5 = true;
      goto LAB_141e28be2;
    }
  }
  bVar5 = false;
  FVar16 = local_260;
LAB_141e28be2:
  pFVar2 = (this->CurrentProject).Object;
  bVar7 = true;
  if (pFVar2 != (FProjectDescriptor *)0x0) {
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    FModuleDescriptor::LoadModulesForPhase
              (param_1,&pFVar2->Modules,
               (TMap<FName,EModuleLoadResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,EModuleLoadResult,0>_>
                *)local_88);
    bVar7 = true;
    if (0 < local_88._8_4_ - local_54) {
      FText::FText(&local_278);
      uStack_22c = 1;
      local_218 = iVar17;
      iStack_21c = iVar19;
      if (local_60 != 0) {
        puVar18 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar18 = local_68;
        }
        uVar13 = *puVar18;
        local_218 = iVar19;
        iVar17 = iVar19;
        while (uVar13 == 0) {
          lVar14 = (longlong)iVar17;
          local_218 = local_218 + 0x20;
          iVar17 = iVar17 + 1;
          if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_141e28ce9;
          uVar13 = puVar18[lVar14 + 1];
        }
        uStack_22c = -uVar13 & uVar13;
        uVar1 = (ulonglong)uStack_22c * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_250 = (int)lVar14;
        iStack_21c = local_250 + -1 + local_218;
        if (local_60 < iStack_21c) {
LAB_141e28ce9:
          iStack_21c = local_60;
        }
      }
      local_238 = (longlong *)local_88;
      local_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uStack_220 = 0xffffffff;
      TStack_200._padding_ = CONCAT44(uStack_22c,iVar17);
      TStack_200.CurrentBitIndex = iStack_21c;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = iStack_21c;
      TStack_200.BaseBitIndex = local_218;
      iVar19 = iStack_21c;
      iStack_230 = iVar17;
      iStack_214 = iStack_21c;
      local_208 = local_238;
      TStack_200.Array = local_228;
      if (iStack_21c < local_60) {
        do {
          iVar17 = *(int *)(*local_208 + 8 + (longlong)iVar19 * 0x14);
          if (iVar17 != 0) {
            FText::FromName(&local_298,(FName *)(*local_208 + (longlong)iVar19 * 0x14));
            if (iVar17 == 1) {
              local_1c0.TextData.Reference = local_298.TextData.Reference;
              if (local_298.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_298.TextData.Reference + 8))
                          (local_298.TextData.Reference,local_24c);
              }
              local_1c0.Flags = local_298.Flags;
              pFVar11 = FText::AsLocalizable_Advanced_LocText
                                  (&local_180,L"ProjectManager",L"PrimaryGameModuleNotFound",
                                   L"The game module \'{0}\' could not be found. Please ensure that this module exists and that it is compiled."
                                  );
              pFVar12 = FTextFormat::FTextFormat(&local_b0,pFVar11,Default);
              pFVar11 = FText::Format<FText>(&local_190,pFVar12,&local_1c0);
              FText::operator=(&local_278,pFVar11);
              local_100.TextData.Reference = local_180.TextData.Reference;
              if (local_190.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
                local_100.TextData.Reference = local_180.TextData.Reference;
              }
            }
            else if (iVar17 == 2) {
              local_1b0.TextData.Reference = local_298.TextData.Reference;
              if (local_298.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_298.TextData.Reference + 8))
                          (local_298.TextData.Reference,local_248);
              }
              local_1b0.Flags = local_298.Flags;
              pFVar11 = FText::AsLocalizable_Advanced_LocText
                                  (&local_160,L"ProjectManager",L"PrimaryGameModuleIncompatible",
                                   L"The game module \'{0}\' does not appear to be up to date. This may happen after updating the engine. Please recompile this module and try again."
                                  );
              pFVar12 = FTextFormat::FTextFormat(&local_a0,pFVar11,Default);
              pFVar11 = FText::Format<FText>(&local_170,pFVar12,&local_1b0);
              FText::operator=(&local_278,pFVar11);
              local_100.TextData.Reference = local_160.TextData.Reference;
              if (local_170.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
                local_100.TextData.Reference = local_160.TextData.Reference;
              }
            }
            else if (iVar17 == 4) {
              local_1a0.TextData.Reference = local_298.TextData.Reference;
              if (local_298.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_298.TextData.Reference + 8))
                          (local_298.TextData.Reference,local_244);
              }
              local_1a0.Flags = local_298.Flags;
              pFVar11 = FText::AsLocalizable_Advanced_LocText
                                  (&local_140,L"ProjectManager",
                                   L"PrimaryGameModuleFailedToInitialize",
                                   L"The game module \'{0}\' could not be successfully initialized after it was loaded."
                                  );
              pFVar12 = FTextFormat::FTextFormat(&local_e0,pFVar11,Default);
              pFVar11 = FText::Format<FText>(&local_150,pFVar12,&local_1a0);
              FText::operator=(&local_278,pFVar11);
              local_100.TextData.Reference = local_140.TextData.Reference;
              if (local_150.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
                local_100.TextData.Reference = local_140.TextData.Reference;
              }
            }
            else if (iVar17 == 3) {
              local_1e0.TextData.Reference = local_298.TextData.Reference;
              if (local_298.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_298.TextData.Reference + 8))
                          (local_298.TextData.Reference,local_240);
              }
              local_1e0.Flags = local_298.Flags;
              pFVar11 = FText::AsLocalizable_Advanced_LocText
                                  (&local_120,L"ProjectManager",L"PrimaryGameModuleCouldntBeLoaded",
                                   L"The game module \'{0}\' could not be loaded. There may be an operating system error, the module may not be properly set up, or a plugin which has been included into the build has not been turned on."
                                  );
              pFVar12 = FTextFormat::FTextFormat(&local_d0,pFVar11,Default);
              pFVar11 = FText::Format<FText>(&local_130,pFVar12,&local_1e0);
              FText::operator=(&local_278,pFVar11);
              local_100.TextData.Reference = local_120.TextData.Reference;
              if (local_130.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
                local_100.TextData.Reference = local_120.TextData.Reference;
              }
            }
            else {
              bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<6771103632491282523>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\ProjectManager.cpp"
                                 ,0x5b,"0");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              local_1d0.TextData.Reference = local_298.TextData.Reference;
              if (local_298.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_298.TextData.Reference + 8))
                          (local_298.TextData.Reference,&local_280);
              }
              local_1d0.Flags = local_298.Flags;
              pFVar11 = FText::AsLocalizable_Advanced_LocText
                                  (&local_100,L"ProjectManager",
                                   L"PrimaryGameModuleGenericLoadFailure",
                                   L"The game module \'{0}\' failed to load for an unspecified reason.  Please report this error."
                                  );
              pFVar12 = FTextFormat::FTextFormat(&local_c0,pFVar11,Default);
              pFVar11 = FText::Format<FText>(&local_110,pFVar12,&local_1d0);
              FText::operator=(&local_278,pFVar11);
              if (local_110.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
              }
            }
            if (local_100.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
            }
            if (local_298.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
            }
            break;
          }
          TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
          iVar19 = TStack_200.CurrentBitIndex;
        } while (TStack_200.CurrentBitIndex < (TStack_200.Array)->NumBits);
      }
      FMessageDialog::Open(Ok,&local_278);
      bVar7 = false;
      if (local_278.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
      }
    }
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,enum_EModuleLoadResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,enum_EModuleLoadResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_88);
  }
  TMulticastDelegate<void___cdecl(enum_ELoadingPhase::Type,bool),FDefaultDelegateUserPolicy>::
  Broadcast(&this->OnLoadingPhaseCompleteEvent,param_1,bVar7);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return bVar7;
}

// LoadProjectFile @ 141e29200

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectManager::LoadProjectFile(FProjectManager *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FModuleContextInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FProjectDescriptor *this_00;
  TRawPtrProxy<FProjectDescriptor> local_res18;
  TSharedPtr<FProjectDescriptor,1> local_38;
  FText local_28;
  FProjectDescriptor *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  FText::FText(&local_28);
  this_00 = ::operator_new(0x138);
  local_res18.Object = (FProjectDescriptor *)0x0;
  if (this_00 != (FProjectDescriptor *)0x0) {
    local_res18.Object = FProjectDescriptor::FProjectDescriptor(this_00);
  }
  TSharedPtr<FProjectDescriptor,1>::TSharedPtr<FProjectDescriptor,1><FProjectDescriptor>
            (&local_38,&local_res18);
  if ((local_38.Object == (FProjectDescriptor *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  bVar5 = FProjectDescriptor::Load(local_38.Object,param_1,&local_28);
  if (bVar5) {
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = (this->CurrentProject).Object;
    pTStack_10 = (this->CurrentProject).SharedReferenceCount.ReferenceController;
    (this->CurrentProject).Object = local_38.Object;
    (this->CurrentProject).SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    piVar1 = &(this->CurrentProjectModuleContextInfos).ArrayMax;
    pFVar3 = (FModuleContextInfo *)(this->CurrentProjectModuleContextInfos).AllocatorInstance.Data;
    iVar2 = (this->CurrentProjectModuleContextInfos).ArrayNum;
    if ((this->CurrentProjectModuleContextInfos).ArrayMax < 0) {
      DestructItems<FModuleContextInfo,int>(pFVar3,iVar2);
      (this->CurrentProjectModuleContextInfos).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&(this->CurrentProjectModuleContextInfos).AllocatorInstance,0,piVar1);
      }
      bVar5 = true;
    }
    else {
      DestructItems<FModuleContextInfo,int>(pFVar3,iVar2);
      (this->CurrentProjectModuleContextInfos).ArrayNum = 0;
      bVar5 = true;
    }
  }
  else {
    if (1 < (byte)LogProjectManager._0_1_) {
      FText::ToString(&local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogProjectManager);
    }
    FMessageDialog::Open(Ok,&local_28);
    bVar5 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return bVar5;
}

// OnLoadingPhaseComplete @ 141e2ab60

/* WARNING: Enum "Type": Some values do not have unique names */

FLoadingModulesForPhaseEvent * __thiscall
FProjectManager::OnLoadingPhaseComplete(FProjectManager *this)

{
  return &this->OnLoadingPhaseCompleteEvent;
}

// OnTargetPlatformsForCurrentProjectChanged @ 141e2abc0

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FProjectManager::OnTargetPlatformsForCurrentProjectChanged(FProjectManager *this)

{
  return &this->OnTargetPlatformsForCurrentProjectChangedEvent;
}

// QueryStatusForCurrentProject @ 141e2cfa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FProjectManager::QueryStatusForCurrentProject(FProjectManager *this,FProjectStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_18;
  
  if ((this->CurrentProject).Object == (FProjectDescriptor *)0x0) {
    return false;
  }
  pFVar4 = FPaths::GetProjectFilePath(&local_18);
  if ((this->CurrentProject).Object == (FProjectDescriptor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  QueryStatusForProjectImpl((this->CurrentProject).Object,pFVar4,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// QueryStatusForProject @ 141e2d040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FProjectManager::QueryStatusForProject
          (FProjectManager *this,FString *param_1,FProjectStatus *param_2)

{
  bool bVar1;
  undefined1 auStack_188 [32];
  FText local_168;
  FProjectDescriptor local_158;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  FText::FText(&local_168);
  FProjectDescriptor::FProjectDescriptor(&local_158);
  bVar1 = FProjectDescriptor::Load(&local_158,param_1,&local_168);
  if (bVar1) {
    QueryStatusForProjectImpl(&local_158,param_1,param_2);
  }
  FProjectDescriptor::~FProjectDescriptor(&local_158);
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  return bVar1;
}

// QueryStatusForProjectImpl @ 141e2d0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FProjectManager::QueryStatusForProjectImpl
          (FProjectDescriptor *param_1,FString *param_2,FProjectStatus *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  FProjectStatus *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  int iVar10;
  FString local_18;
  
  pFVar7 = (FProjectStatus *)FPaths::GetBaseFilename(&local_18,param_2,true);
  if (param_3 != pFVar7) {
    pFVar5 = (param_3->Name).Data.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (param_3->Name).Data.AllocatorInstance.Data = (pFVar7->Name).Data.AllocatorInstance.Data;
    (pFVar7->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Name).Data.ArrayNum = (pFVar7->Name).Data.ArrayNum;
    (param_3->Name).Data.ArrayMax = (pFVar7->Name).Data.ArrayMax;
    (pFVar7->Name).Data.ArrayNum = 0;
    (pFVar7->Name).Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::operator=(&param_3->Description,&param_1->Description);
  ::FString::operator=(&param_3->Category,&param_1->Category);
  iVar10 = 0;
  param_3->bCodeBasedProject = 0 < (param_1->Modules).ArrayNum;
  pFVar8 = FPaths::GetCleanFilename(&local_18,param_2);
  iVar3 = (pFVar8->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    iVar10 = iVar3 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar9);
  uVar4 = param_1->EpicSampleNameHash;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  param_3->bSignedSampleProject = uVar4 == uVar6;
  pTVar1 = &param_3->TargetPlatforms;
  param_3->bRequiresUpdate = (int)param_1->FileVersion < 3;
  if (pTVar1 != &param_1->TargetPlatforms) {
    iVar3 = (param_1->TargetPlatforms).ArrayNum;
    piVar2 = &(param_3->TargetPlatforms).ArrayMax;
    pFVar5 = (param_1->TargetPlatforms).AllocatorInstance.Data;
    (param_3->TargetPlatforms).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar3 << 3);
      }
    }
  }
  return;
}

// RemovePluginReference @ 141e35700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FProjectManager::RemovePluginReference(FProjectManager *this,FString *param_1,FText *param_2)

{
  int iVar1;
  FProjectDescriptor *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  FText *pFVar9;
  uint uVar10;
  longlong lVar11;
  FText local_28;
  
  pFVar2 = (this->CurrentProject).Object;
  if (pFVar2 == (FProjectDescriptor *)0x0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"ProjectManager",L"NoProjectLoaded",
                        L"No project is currently loaded");
    FText::operator=(param_2,pFVar9);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    return false;
  }
  uVar10 = (pFVar2->Plugins).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 * 0xb8;
    do {
      if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = (this->CurrentProject).Object;
      uVar7 = 0;
      if ((int)uVar10 < (pFVar2->Plugins).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar3 = (pFVar2->Plugins).AllocatorInstance.Data;
      iVar8 = (param_1->Data).ArrayNum;
      iVar1 = *(int *)(pFVar3 + lVar11 + 8);
      if (iVar1 == iVar8) {
        if (iVar1 < 2) goto LAB_141e3584e;
        iVar8 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar3 + lVar11),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar5 = iVar8 == 0;
      }
      else {
        bVar5 = iVar1 + iVar8 == 1;
      }
      if (bVar5) {
LAB_141e3584e:
        if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&((this->CurrentProject).Object)->Plugins,uVar10,Default);
        return true;
      }
      lVar11 = lVar11 + -0xb8;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return false;
}

// RemoveSuppressProjectFileWrite @ 141e35b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FProjectManager::RemoveSuppressProjectFileWrite(FProjectManager *this,FName param_1)

{
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<FName,TSizedDefaultAllocator<32>_>::Remove(&this->SuppressProjectFileWriteList,local_res10)
  ;
  return;
}

// SaveCurrentProjectToDisk @ 141e36b60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectManager::SaveCurrentProjectToDisk(FProjectManager *this,FText *param_1)

{
  FProjectDescriptor *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_18;
  
  if ((this->CurrentProject).Object == (FProjectDescriptor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = (this->CurrentProject).Object;
  pFVar4 = FPaths::GetProjectFilePath(&local_18);
  bVar2 = FProjectDescriptor::Save(this_00,pFVar4,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    this->bIsCurrentProjectDirty = false;
    return true;
  }
  return false;
}

// SetIsEnterpriseProject @ 141e36c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FProjectManager::SetIsEnterpriseProject(FProjectManager *this,bool param_1)

{
  FProjectDescriptor *pFVar1;
  
  pFVar1 = (this->CurrentProject).Object;
  if (pFVar1 != (FProjectDescriptor *)0x0) {
    pFVar1->bIsEnterpriseProject = param_1;
  }
  return;
}

// SetPluginEnabled @ 141e36c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FProjectManager::SetPluginEnabled
          (FProjectManager *this,FString *param_1,bool param_2,FText *param_3)

{
  int *piVar1;
  FProjectDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  FText *pFVar10;
  FString *pFVar11;
  IPluginManager *pIVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  FPluginReferenceDescriptor *pFVar20;
  TSharedRef<IPlugin,1> *pTVar21;
  longlong lVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  longlong lVar26;
  TSharedRef<IPlugin,1> *pTVar27;
  undefined1 local_177;
  char local_176;
  uint local_174;
  ForAnyElementType local_170;
  undefined8 local_168;
  int *local_160;
  longlong *local_158;
  TReferenceControllerBase<1> *local_150;
  TSharedRef<IPlugin,1> *local_148;
  int local_140;
  FPluginReferenceDescriptor local_138;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FText local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  FString local_48;
  
  if ((this->CurrentProject).Object == (FProjectDescriptor *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_68,L"ProjectManager",L"NoProjectLoaded",
                         L"No project is currently loaded");
    FText::operator=(param_3,pFVar10);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    return false;
  }
  uVar19 = 0;
  local_174 = 0;
  bVar6 = false;
  uVar25 = uVar19;
  do {
    uVar8 = (uint)uVar25;
    if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->CurrentProject).Object;
    if (uVar8 == (pFVar2->Plugins).ArrayNum) {
      if ((pFVar2 == (FProjectDescriptor *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->CurrentProject).Object;
      pFVar11 = ::FString::FString(&local_48,param_1);
      local_138.Name.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Name.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_138.Name.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
      local_138.bOptional = false;
      local_138.bActivate = false;
      local_138.Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Description.Data.ArrayNum = 0;
      local_138.Description.Data.ArrayMax = 0;
      local_138.MarketplaceURL.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.MarketplaceURL.Data.ArrayNum = 0;
      local_138.MarketplaceURL.Data.ArrayMax = 0;
      local_138.PlatformAllowList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.PlatformAllowList.ArrayNum = 0;
      local_138.PlatformAllowList.ArrayMax = 0;
      local_138.PlatformDenyList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.PlatformDenyList.ArrayNum = 0;
      local_138.PlatformDenyList.ArrayMax = 0;
      local_138.TargetConfigurationAllowList.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      local_138.TargetConfigurationAllowList.ArrayNum = 0;
      local_138.TargetConfigurationAllowList.ArrayMax = 0;
      local_138.TargetConfigurationDenyList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.TargetConfigurationDenyList.ArrayNum = 0;
      local_138.TargetConfigurationDenyList.ArrayMax = 0;
      local_138.TargetAllowList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.TargetAllowList.ArrayNum = 0;
      local_138.TargetAllowList.ArrayMax = 0;
      local_138.TargetDenyList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.TargetDenyList.ArrayNum = 0;
      local_138.TargetDenyList.ArrayMax = 0;
      local_138.SupportedTargetPlatforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.SupportedTargetPlatforms.ArrayNum = 0;
      local_138.SupportedTargetPlatforms.ArrayMax = 0;
      local_138.bHasExplicitPlatforms = false;
      local_138.RequestedVersion.bIsSet = false;
      pFVar13 = (pFVar11->Data).AllocatorInstance.Data;
      local_138.bEnabled = param_2;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      pFVar20 = (FPluginReferenceDescriptor *)(pFVar2->Plugins).AllocatorInstance.Data;
      if (((pFVar20 <= &local_138) && (&local_138 < pFVar20 + (pFVar2->Plugins).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar8 = (pFVar2->Plugins).ArrayNum;
      piVar1 = &(pFVar2->Plugins).ArrayMax;
      if (uVar8 == *piVar1) {
        local_174 = uVar8;
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8b8,&(pFVar2->Plugins).AllocatorInstance,piVar1);
      }
      (pFVar2->Plugins).ArrayNum = uVar8 + 1;
      local_174 = uVar8;
      FPluginReferenceDescriptor::FPluginReferenceDescriptor
                ((FPluginReferenceDescriptor *)
                 ((pFVar2->Plugins).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xb8),&local_138
                );
      FPluginReferenceDescriptor::~FPluginReferenceDescriptor(&local_138);
      goto LAB_141e37112;
    }
    if ((pFVar2 == (FProjectDescriptor *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->CurrentProject).Object;
    uVar15 = ~uVar8 >> 0x1f;
    uVar18 = 0;
    if ((int)uVar8 < (pFVar2->Plugins).ArrayNum) {
      uVar18 = uVar15;
    }
    if ((uVar18 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar13 = (pFVar2->Plugins).AllocatorInstance.Data;
    local_160 = &(param_1->Data).ArrayNum;
    iVar14 = *(int *)(pFVar13 + uVar19 + 8);
    if (iVar14 == *local_160) {
      if (iVar14 < 2) break;
      iVar14 = FGenericPlatformStricmp::Stricmp
                         (*(wchar_t **)(pFVar13 + uVar19),
                          (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar4 = iVar14 == 0;
    }
    else {
      bVar4 = iVar14 + *local_160 == 1;
    }
    if (bVar4) break;
    local_174 = uVar8 + 1;
    uVar25 = (ulonglong)local_174;
    uVar19 = uVar19 + 0xb8;
  } while( true );
  if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar2 = (this->CurrentProject).Object;
  uVar18 = 0;
  if ((int)uVar8 < (pFVar2->Plugins).ArrayNum) {
    uVar18 = uVar15;
  }
  if ((uVar18 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((pFVar2->Plugins).AllocatorInstance.Data[(longlong)(int)uVar8 * 0xb8 + 0x10] !=
      (FScriptContainerElement)param_2) {
    if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->CurrentProject).Object;
    uVar18 = 0;
    if ((int)uVar8 < (pFVar2->Plugins).ArrayNum) {
      uVar18 = uVar15;
    }
    if ((uVar18 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    (pFVar2->Plugins).AllocatorInstance.Data[(longlong)(int)uVar8 * 0xb8 + 0x10] =
         (FScriptContainerElement)param_2;
LAB_141e37112:
    local_160 = &(param_1->Data).ArrayNum;
    bVar6 = true;
  }
  if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar22 = (longlong)(int)uVar8;
  uVar18 = (((this->CurrentProject).Object)->Plugins).ArrayNum - 1;
  lVar23 = (longlong)(int)uVar18;
  if (lVar22 < lVar23) {
    lVar26 = lVar23 * 0xb8;
    do {
      if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->CurrentProject).Object;
      uVar15 = ~uVar18 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar18 < (pFVar2->Plugins).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar13 = (pFVar2->Plugins).AllocatorInstance.Data;
      iVar14 = *(int *)(pFVar13 + lVar26 + 8);
      iVar9 = (param_1->Data).ArrayNum;
      if (iVar14 == iVar9) {
        if (1 < iVar14) {
          iVar14 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(pFVar13 + lVar26),
                              (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar4 = iVar14 == 0;
          goto LAB_141e37217;
        }
LAB_141e37222:
        if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = (this->CurrentProject).Object;
        uVar8 = 0;
        if ((int)uVar18 < (pFVar2->Plugins).ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar20 = (FPluginReferenceDescriptor *)((pFVar2->Plugins).AllocatorInstance.Data + lVar26);
        FPluginReferenceDescriptor::~FPluginReferenceDescriptor(pFVar20);
        iVar14 = (pFVar2->Plugins).ArrayNum + ~uVar18;
        if (iVar14 != 0) {
          memmove(pFVar20,pFVar20 + 1,(longlong)iVar14 * 0xb8);
        }
        piVar1 = &(pFVar2->Plugins).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb8,8,&(pFVar2->Plugins).AllocatorInstance,(pFVar2->Plugins).ArrayNum,
                   &(pFVar2->Plugins).ArrayMax);
        bVar6 = true;
      }
      else {
        bVar4 = iVar14 + iVar9 == 1;
LAB_141e37217:
        if (bVar4) goto LAB_141e37222;
      }
      uVar18 = uVar18 - 1;
      lVar23 = lVar23 + -1;
      lVar26 = lVar26 + -0xb8;
      uVar8 = local_174;
    } while (lVar22 < lVar23);
  }
  if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar2 = (this->CurrentProject).Object;
  uVar18 = 0;
  if ((int)uVar8 < (pFVar2->Plugins).ArrayNum) {
    uVar18 = ~uVar8 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar13 = (pFVar2->Plugins).AllocatorInstance.Data;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FPluginManager::FPluginManager(&PluginManager);
    atexit(`IPluginManager::Get'::__l2::_dynamic_atexit_destructor_for__PluginManager__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar24 = (param_1->Data).AllocatorInstance.Data;
  iStack_70 = *local_160 + -1;
  if (*local_160 == 0) {
    iStack_70 = 0;
  }
  local_78._0_4_ = SUB84(pFVar24,0);
  local_78._4_4_ = (undefined4)((ulonglong)pFVar24 >> 0x20);
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  uStack_4c = uStack_6c;
  local_78 = pFVar24;
  iStack_50 = iStack_70;
  (**(code **)(PluginManager._padding_ + 0x70))(&PluginManager,&local_158,&local_58);
  if (local_158 != (longlong *)0x0) {
    if ((local_158 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar23 = (**(code **)(*local_158 + 0xa0))();
    iVar14 = *(int *)(pFVar13 + lVar22 * 0xb8 + 0x30);
    if (iVar14 == *(int *)(lVar23 + 0x80)) {
      if (1 < iVar14) {
        iVar14 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)(pFVar13 + lVar22 * 0xb8 + 0x28),
                            *(wchar_t **)(lVar23 + 0x78));
        bVar4 = iVar14 == 0;
        goto LAB_141e3747b;
      }
    }
    else {
      bVar4 = iVar14 + *(int *)(lVar23 + 0x80) == 1;
LAB_141e3747b:
      if (!bVar4) {
        ::FString::operator=((FString *)(pFVar13 + lVar22 * 0xb8 + 0x28),(FString *)(lVar23 + 0x78))
        ;
        bVar6 = true;
      }
    }
    if ((*(int *)(pFVar13 + lVar22 * 0xb8 + 0xa0) != *(int *)(lVar23 + 0xc0)) ||
       (bVar4 = CompareItems<FString,int>
                          (*(FString **)(pFVar13 + lVar22 * 0xb8 + 0x98),
                           *(FString **)(lVar23 + 0xb8),*(int *)(pFVar13 + lVar22 * 0xb8 + 0xa0)),
       !bVar4)) {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar13 + lVar22 * 0xb8 + 0x98),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar23 + 0xb8));
      bVar6 = true;
    }
  }
  if ((*(int *)(pFVar13 + lVar22 * 0xb8 + 0x40) == 0) &&
     (*(int *)(pFVar13 + lVar22 * 0xb8 + 0x50) == 0)) {
    if (local_158 != (longlong *)0x0) {
      if ((local_158 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar22 = (**(code **)(*local_158 + 0xa0))();
      if (*(char *)(lVar22 + 0x13c) != '\0') goto LAB_141e37839;
    }
    local_170.Data = (FScriptContainerElement *)0x0;
    local_168 = 0;
    if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    cVar7 = ((this->CurrentProject).Object)->bDisableEnginePluginsByDefault;
    local_176 = cVar7;
    pIVar12 = IPluginManager::Get();
    (**(code **)((longlong)*pIVar12 + 0xe0))(pIVar12,&local_148);
    iVar14 = local_140;
    pTVar21 = local_148 + local_140;
    pTVar27 = local_148;
    while( true ) {
      if (local_140 != iVar14) {
        local_177 = 0;
        `TCheckedPointerIterator<TSharedRef<IPlugin,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_177);
      }
      if (pTVar27 == pTVar21) break;
      cVar7 = (**(code **)(*(longlong *)pTVar27->Object + 0x50))(pTVar27->Object,cVar7 == '\0');
      if ((cVar7 != '\0') &&
         (lVar22 = (**(code **)(*(longlong *)pTVar27->Object + 0xa0))(),
         *(char *)(lVar22 + 0x13c) == '\0')) {
        pFVar13 = (FScriptContainerElement *)(**(code **)(*(longlong *)pTVar27->Object + 8))();
        FVar17.Data = local_170.Data;
        pFVar24 = local_170.Data + (longlong)(int)local_168 * 0x10;
        FVar16.Data = local_170.Data;
        if (local_170.Data != pFVar24) {
          do {
            iVar9 = *(int *)(FVar16.Data + 8);
            if (iVar9 == *(int *)(pFVar13 + 8)) {
              if (1 < iVar9) {
                iVar9 = FGenericPlatformStricmp::Stricmp
                                  (*(wchar_t **)FVar16.Data,*(wchar_t **)pFVar13);
                bVar4 = iVar9 == 0;
                goto LAB_141e3766d;
              }
LAB_141e3767f:
              if ((int)((longlong)FVar16.Data - (longlong)FVar17.Data >> 4) != -1)
              goto LAB_141e3773a;
              break;
            }
            bVar4 = iVar9 + *(int *)(pFVar13 + 8) == 1;
LAB_141e3766d:
            if (bVar4) goto LAB_141e3767f;
            FVar16.Data = FVar16.Data + 0x10;
          } while (FVar16.Data != pFVar24);
        }
        iVar9 = (int)local_168;
        if ((local_170.Data <= pFVar13) &&
           (pFVar13 < local_170.Data + (longlong)local_168._4_4_ * 0x10)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar9 = (int)local_168;
        }
        if (iVar9 == local_168._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_170,(int *)((longlong)&local_168 + 4));
        }
        local_168 = CONCAT44(local_168._4_4_,iVar9 + 1);
        ::FString::FString((FString *)(local_170.Data + (longlong)iVar9 * 0x10),(FString *)pFVar13);
      }
LAB_141e3773a:
      pTVar27 = pTVar27 + 1;
      cVar7 = local_176;
    }
    DestructItems<TSharedRef<IPlugin,1>,int>(local_148,local_140);
    if (local_148 != (TSharedRef<IPlugin,1> *)0x0) {
      FMemory::Free(local_148);
    }
    piVar1 = local_160;
    pFVar13 = local_170.Data + (longlong)(int)local_168 * 0x10;
    for (FVar17.Data = local_170.Data; FVar17.Data != pFVar13; FVar17.Data = FVar17.Data + 0x10) {
      iVar14 = *(int *)(FVar17.Data + 8);
      if (iVar14 == *piVar1) {
        if (1 < iVar14) {
          iVar14 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)FVar17.Data,
                              (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar4 = iVar14 == 0;
          goto LAB_141e377a9;
        }
LAB_141e37812:
        bVar4 = true;
        goto LAB_141e377bb;
      }
      bVar4 = iVar14 + *piVar1 == 1;
LAB_141e377a9:
      if (bVar4) goto LAB_141e37812;
    }
    bVar4 = false;
LAB_141e377bb:
    if (bVar4 == param_2) {
      if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_>::RemoveAt
                (&((this->CurrentProject).Object)->Plugins,local_174,Default);
      bVar6 = true;
    }
    DestructItems<FString,int>((FString *)local_170.Data,(int)local_168);
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
  }
LAB_141e37839:
  if (bVar6) {
    this->bIsCurrentProjectDirty = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
  return true;
}

// SignSampleProject @ 141e379e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FProjectManager::SignSampleProject
          (FProjectManager *this,FString *param_1,FString *param_2,FText *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_1c8 [32];
  FString local_188;
  FProjectDescriptor local_178;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  FProjectDescriptor::FProjectDescriptor(&local_178);
  bVar2 = FProjectDescriptor::Load(&local_178,param_1,param_3);
  if (bVar2) {
    pFVar3 = FPaths::GetCleanFilename(&local_188,param_1);
    iVar1 = (pFVar3->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    local_178.EpicSampleNameHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (&local_178.Category != param_2) {
      iVar4 = (param_2->Data).ArrayNum;
      _Src = (param_2->Data).AllocatorInstance.Data;
      local_178.Category.Data.ArrayNum = iVar4;
      if ((iVar4 == 0) && (local_178.Category.Data.ArrayMax == 0)) {
        local_178.Category.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar4,local_178.Category.Data.ArrayMax,
                   (ForAnyElementType *)&local_178.Category,iVar4,&local_178.Category.Data.ArrayMax)
        ;
        if (iVar4 != 0) {
          memcpy(local_178.Category.Data.AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
        }
      }
    }
    bVar2 = FProjectDescriptor::Save(&local_178,param_1,param_3);
  }
  else {
    bVar2 = false;
  }
  FProjectDescriptor::~FProjectDescriptor(&local_178);
  return bVar2;
}

// SubstituteModule @ 141e37b40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FProjectManager::SubstituteModule(FProjectManager *this,FString *param_1,FString *param_2)

{
  FProjectDescriptor *pFVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  FName *pFVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FName local_res8;
  FName local_48 [2];
  
  pFVar1 = (this->CurrentProject).Object;
  if (pFVar1 != (FProjectDescriptor *)0x0) {
    lVar8 = (longlong)(pFVar1->Modules).ArrayNum;
    uVar11 = 0;
    uVar13 = uVar11;
    uVar14 = uVar11;
    if (0 < lVar8) {
      do {
        if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar1 = (this->CurrentProject).Object;
        uVar12 = (uint)uVar13;
        uVar7 = 0;
        if ((int)uVar12 < (pFVar1->Modules).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar2 = (pFVar1->Modules).AllocatorInstance.Data;
        if ((param_1->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_res8,pwVar10);
        if ((*(uint *)(pFVar2 + uVar14) == local_res8.ComparisonIndex.Value) &&
           (*(uint *)(pFVar2 + uVar14 + 4) == local_res8.Number)) {
          if ((param_2->Data).ArrayNum == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
          }
          pFVar9 = ::FName::FName(local_48,pwVar10);
          FVar3 = *pFVar9;
          if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar1 = (this->CurrentProject).Object;
          uVar7 = 0;
          if ((int)uVar12 < (pFVar1->Modules).ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          *(FName *)((pFVar1->Modules).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x168) =
               FVar3;
          return true;
        }
        uVar11 = uVar11 + 1;
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 0x168;
      } while ((longlong)uVar11 < lVar8);
    }
  }
  return false;
}

// UpdateAdditionalPluginDirectory @ 141e3e9b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FProjectManager::UpdateAdditionalPluginDirectory
          (FProjectManager *this,FString *param_1,bool param_2)

{
  int *piVar1;
  FProjectDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FString *local_res8;
  FString local_48;
  FText local_38;
  FString local_28;
  
  if ((this->CurrentProject).Object == (FProjectDescriptor *)0x0) {
    return false;
  }
  FPaths::ConvertRelativePathToFull(&local_48,param_1);
  pFVar2 = (this->CurrentProject).Object;
  if (param_2) {
    if ((pFVar2 == (FProjectDescriptor *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = FProjectDescriptor::AddPluginDirectory((this->CurrentProject).Object,&local_48);
  }
  else {
    if ((pFVar2 == (FProjectDescriptor *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->CurrentProject).Object;
    bVar4 = FPaths::IsRelative(&local_48);
    if (bVar4) {
      local_res8 = &local_48;
      bVar4 = `FProjectDescriptor::RemovePluginDirectory'::__l3::<lambda_1>::operator()(&local_res8)
      ;
      if (!bVar4) {
        bVar4 = false;
        goto LAB_141e3eb01;
      }
    }
    iVar11 = (pFVar2->AdditionalPluginDirectories).ArrayNum;
    pFVar10 = (pFVar2->AdditionalPluginDirectories).AllocatorInstance.Data;
    uVar9 = local_48.Data._8_8_;
    for (pFVar12 = pFVar10; pFVar12 != pFVar10 + (longlong)iVar11 * 0x10; pFVar12 = pFVar12 + 0x10)
    {
      iVar7 = *(int *)(pFVar12 + 8);
      if (iVar7 == (int)uVar9) {
        if (1 < iVar7) {
          iVar7 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar12,(wchar_t *)local_48.Data.AllocatorInstance.Data);
          bVar4 = iVar7 == 0;
          uVar9 = local_48.Data._8_8_;
          goto LAB_141e3eadb;
        }
LAB_141e3eba7:
        iVar11 = (int)((longlong)pFVar12 - (longlong)pFVar10 >> 4);
        if (iVar11 != -1) {
          bVar4 = true;
          pFVar10 = (pFVar2->AdditionalPluginDirectories).AllocatorInstance.Data +
                    (longlong)iVar11 * 0x10;
          DestructItems<FString,int>((FString *)pFVar10,1);
          memmove(pFVar10,pFVar10 + 0x10,
                  (longlong)(((pFVar2->AdditionalPluginDirectories).ArrayNum - iVar11) + -1) << 4);
          piVar1 = &(pFVar2->AdditionalPluginDirectories).ArrayNum;
          *piVar1 = *piVar1 + -1;
          goto LAB_141e3eb01;
        }
        break;
      }
      bVar4 = iVar7 + (int)uVar9 == 1;
LAB_141e3eadb:
      if (bVar4) goto LAB_141e3eba7;
    }
    bVar4 = false;
  }
LAB_141e3eb01:
  if (bVar4 != false) {
    FText::FText(&local_38);
    if (((this->CurrentProject).Object == (FProjectDescriptor *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->CurrentProject).Object;
    pFVar8 = FPaths::GetProjectFilePath(&local_28);
    bVar6 = FProjectDescriptor::Save(pFVar2,pFVar8,&local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      this->bIsCurrentProjectDirty = false;
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// UpdateSupportedTargetPlatformsForCurrentProject @ 141e447a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FProjectManager::UpdateSupportedTargetPlatformsForCurrentProject
          (FProjectManager *this,FName *param_1,bool param_2)

{
  FProjectDescriptor *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FText local_28;
  FString local_18;
  
  pFVar1 = (this->CurrentProject).Object;
  if (pFVar1 != (FProjectDescriptor *)0x0) {
    this_00 = &pFVar1->TargetPlatforms;
    if (param_2) {
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,param_1);
    }
    else {
      TArray<FName,TSizedDefaultAllocator<32>_>::Remove(this_00,param_1);
    }
    FText::FText(&local_28);
    if ((this->CurrentProject).Object == (FProjectDescriptor *)0x0) {
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
    pFVar1 = (this->CurrentProject).Object;
    pFVar4 = FPaths::GetProjectFilePath(&local_18);
    FProjectDescriptor::Save(pFVar1,pFVar4,&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnTargetPlatformsForCurrentProjectChangedEvent);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  return;
}

// UpdateSupportedTargetPlatformsForProject @ 141e44860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FProjectManager::UpdateSupportedTargetPlatformsForProject
          (FProjectManager *this,FString *param_1,FName *param_2,bool param_3)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  undefined1 auStack_1c8 [32];
  FString local_1a8;
  FString local_198;
  FText local_188;
  FString local_178;
  FProjectDescriptor local_168;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FProjectDescriptor::FProjectDescriptor(&local_168);
  FText::FText(&local_188);
  bVar1 = FProjectDescriptor::Load(&local_168,param_1,&local_188);
  if (!bVar1) goto LAB_141e44976;
  if (param_3) {
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              (&local_168.TargetPlatforms,param_2);
  }
  else {
    TArray<FName,TSizedDefaultAllocator<32>_>::Remove(&local_168.TargetPlatforms,param_2);
  }
  FProjectDescriptor::Save(&local_168,param_1,&local_188);
  pFVar3 = FPaths::GetProjectFilePath(&local_178);
  FPaths::ConvertRelativePathToFull(&local_198,pFVar3);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  FPaths::ConvertRelativePathToFull(&local_1a8,param_1);
  if (local_198.Data.ArrayNum == local_1a8.Data.ArrayNum) {
    if (1 < local_198.Data.ArrayNum) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_198.Data.AllocatorInstance.Data,
                         (wchar_t *)local_1a8.Data.AllocatorInstance.Data);
      bVar1 = iVar2 == 0;
      goto LAB_141e44948;
    }
LAB_141e4494f:
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnTargetPlatformsForCurrentProjectChangedEvent);
  }
  else {
    bVar1 = local_198.Data.ArrayNum + local_1a8.Data.ArrayNum == 1;
LAB_141e44948:
    if (bVar1) goto LAB_141e4494f;
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
LAB_141e44976:
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  FProjectDescriptor::~FProjectDescriptor(&local_168);
  return;
}

