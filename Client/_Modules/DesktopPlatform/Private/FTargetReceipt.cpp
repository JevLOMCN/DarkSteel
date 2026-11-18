// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 5

// ~FTargetReceipt @ 142d1cb20

void __thiscall FTargetReceipt::~FTargetReceipt(FTargetReceipt *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FReceiptProperty,int>
            ((FReceiptProperty *)(this->AdditionalProperties).AllocatorInstance.Data,
             (this->AdditionalProperties).ArrayNum);
  pFVar1 = (this->AdditionalProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->BuildPlugins).AllocatorInstance.Data,(this->BuildPlugins).ArrayNum);
  pFVar1 = (this->BuildPlugins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PluginNameToEnabledState).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PluginNameToEnabledState).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PluginNameToEnabledState);
  DestructItems<FRuntimeDependency,int>
            ((FRuntimeDependency *)(this->RuntimeDependencies).AllocatorInstance.Data,
             (this->RuntimeDependencies).ArrayNum);
  pFVar1 = (this->RuntimeDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FBuildProduct,int>
            ((FBuildProduct *)(this->BuildProducts).AllocatorInstance.Data,
             (this->BuildProducts).ArrayNum);
  pFVar1 = (this->BuildProducts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((*(int *)((longlong)&(this->LaunchCmd).field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->LaunchCmd).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Launch).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).BuildUrl.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).BuildVersion.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).BuildId.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).BranchName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetBuildEnvironment).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BuildSettingsVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Architecture).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProjectDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProjectFile).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ExpandVariables @ 142d21210

void __thiscall FTargetReceipt::ExpandVariables(FTargetReceipt *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  ForAnyElementType FVar10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&EngineDirPrefix,L"$(EngineDir)");
    atexit(`FTargetReceipt::ExpandVariables'::__l2::
           _dynamic_atexit_destructor_for__EngineDirPrefix__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar7 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&ProjectDirPrefix,L"$(ProjectDir)");
    atexit(`FTargetReceipt::ExpandVariables'::__l2::
           _dynamic_atexit_destructor_for__ProjectDirPrefix__);
    _Init_thread_footer(&::_TSS1);
  }
  pwVar6 = L"";
  iVar4 = EngineDirPrefix.Data.ArrayNum;
  if (iVar4 != 0) {
    pwVar6 = (wchar_t *)EngineDirPrefix.Data.AllocatorInstance.Data;
  }
  iVar9 = 0;
  iVar8 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar8 = iVar9;
  }
  bVar3 = ::FString::StartsWith(param_1,pwVar6,iVar8,IgnoreCase);
  iVar4 = 0;
  if (bVar3) {
    FPaths::EngineDir(&local_78);
    iVar8 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar8 = iVar9;
    }
    if (0 < iVar8) {
      iVar8 = local_78.Data.ArrayNum + -2;
      if (local_78.Data.ArrayNum == 0) {
        iVar8 = -1;
      }
      if ((((iVar8 < 0) || (local_78.Data.ArrayNum == 0)) || (local_78.Data.ArrayNum + -1 <= iVar8))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                ,0x107,
                                L"String index out of bounds: Index %i from a string with a length of %i"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(short *)(local_78.Data.AllocatorInstance.Data + (longlong)iVar8 * 2) == 0x2f) {
        iVar8 = local_78.Data.ArrayNum + -2;
        iVar5 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar8 = -1;
          iVar5 = iVar9;
        }
        if (iVar8 < iVar5) {
          iVar5 = iVar8;
        }
        if (0 < iVar5) {
          iVar9 = iVar5;
        }
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar10.Data = local_78.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_48,(wchar_t *)FVar10.Data,iVar9);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        local_78.Data.ArrayNum = local_48.Data.ArrayNum;
        local_78.Data.ArrayMax = local_48.Data.ArrayMax;
      }
    }
    iVar8 = EngineDirPrefix.Data.ArrayNum + -1;
    if (EngineDirPrefix.Data.ArrayNum == 0) {
      iVar8 = iVar4;
    }
    ::FString::RightChop(param_1,&local_38,iVar8);
    ::FString::ConcatFF(&local_68,&local_78,&local_38);
    if (param_1 != &local_68) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_68.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      local_28.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    }
  }
  else {
    iVar8 = ProjectDirPrefix.Data.ArrayNum + -1;
    FVar10 = ProjectDirPrefix.Data.AllocatorInstance;
    if (ProjectDirPrefix.Data.ArrayNum == 0) {
      iVar8 = iVar4;
      FVar10.Data = (FScriptContainerElement *)L"";
    }
    bVar3 = ::FString::StartsWith(param_1,(wchar_t *)FVar10.Data,iVar8,IgnoreCase);
    if (!bVar3) {
      return;
    }
    iVar8 = (this->ProjectDir).Data.ArrayNum;
    iVar9 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar9 = iVar4;
    }
    if (iVar9 < 1) {
      return;
    }
    iVar8 = ProjectDirPrefix.Data.ArrayNum + -1;
    if (ProjectDirPrefix.Data.ArrayNum == 0) {
      iVar8 = iVar4;
    }
    ::FString::RightChop(param_1,&local_28,iVar8);
    ::FString::ConcatFF(&local_58,&this->ProjectDir,&local_28);
    if (param_1 != &local_58) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_58.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetDefaultPath @ 142d22eb0

FString * __cdecl
FTargetReceipt::GetDefaultPath
          (FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,
          EBuildConfiguration param_4,wchar_t *param_5)

{
  size_t sVar1;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  if (((param_5 == (wchar_t *)0x0) || (*param_5 == L'\0')) && (param_4 == Development)) {
    ::FString::PrintfImpl(&local_38,L"Binaries/%s/%s.target");
  }
  else {
    ::LexToString(param_4);
    ::FString::PrintfImpl(&local_38,L"Binaries/%s/%s-%s-%s%s.target");
  }
  local_28.Size = 0;
  local_28.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    local_28.Size = (int)sVar1;
  }
  local_18 = local_38.Data.AllocatorInstance.Data;
  local_10 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    local_10 = 0;
  }
  FPaths::CombineInternal(__return_storage_ptr__,&local_28,2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LaunchesCurrentExecutable @ 142d2a510

bool __thiscall
FTargetReceipt::LaunchesCurrentExecutable(FTargetReceipt *this,bool param_1,bool param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  pwVar2 = FWindowsPlatformProcess::ExecutablePath();
  ::FString::FString(&local_18,pwVar2);
  if (param_1) {
    bVar1 = FPaths::IsSamePath(&this->Launch,&local_18);
    if (!bVar1) goto LAB_142d2a554;
LAB_142d2a577:
    bVar1 = true;
  }
  else {
LAB_142d2a554:
    if ((param_2) && (*(int *)((longlong)&(this->LaunchCmd).field0_0x0 + 0xc) != -1)) {
      bVar1 = FPaths::IsSamePath((FString *)&this->LaunchCmd,&local_18);
      if (bVar1) goto LAB_142d2a577;
    }
    bVar1 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// Read @ 142d2e0c0

/* WARNING: Removing unreachable block (ram,0x000142d2f26a) */
/* WARNING: Removing unreachable block (ram,0x000142d2f8ae) */
/* WARNING: Removing unreachable block (ram,0x000142d2f278) */
/* WARNING: Removing unreachable block (ram,0x000142d2ef0f) */
/* WARNING: Removing unreachable block (ram,0x000142d2f8bc) */
/* WARNING: Removing unreachable block (ram,0x000142d2ef1e) */

bool __thiscall FTargetReceipt::Read(FTargetReceipt *this,FString *param_1,bool param_2)

{
  TOptional<FString> *pTVar1;
  int *piVar2;
  TArray<FBuildProduct,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRuntimeDependency,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FReceiptProperty,TSizedDefaultAllocator<32>_> *pTVar5;
  TJsonStringReader<wchar_t> *pTVar6;
  FJsonObject *this_00;
  code *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar16;
  FString *pFVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  longlong *plVar22;
  FScriptContainerElement *pFVar23;
  TReferenceControllerBase<1> *pTVar24;
  longlong *plVar25;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  TSharedPtr<FJsonObject,1> local_668;
  undefined1 local_658;
  bool local_657 [7];
  FString local_650;
  FString local_640;
  FString local_630;
  FString local_620;
  FString local_610;
  FString local_600;
  FString local_5f0;
  undefined1 local_5e0 [104];
  longlong *local_578;
  longlong *local_570;
  longlong *local_568;
  TReferenceControllerBase<1> *local_560;
  FString local_558;
  undefined1 local_548 [24];
  ForAnyElementType local_530;
  ForAnyElementType local_528;
  FJsonObject *local_520;
  ForAnyElementType FStack_518;
  TPairInitializer<FString_const_&,bool_const_&> local_510;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_500;
  undefined1 local_4f8 [16];
  ForAnyElementType local_4e8 [2];
  wchar_t *local_4d8;
  int iStack_4d0;
  int iStack_4cc;
  wchar_t *local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  wchar_t *local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  wchar_t *local_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  wchar_t *local_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  wchar_t *local_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  wchar_t *local_478;
  int iStack_470;
  int iStack_46c;
  wchar_t *local_468;
  int iStack_460;
  int iStack_45c;
  wchar_t *local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  wchar_t *local_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  wchar_t *local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  wchar_t *local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  wchar_t *local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  wchar_t *local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  wchar_t *local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  wchar_t *local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  wchar_t *local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  wchar_t *local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  wchar_t *local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  wchar_t *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  wchar_t *local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  wchar_t *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  wchar_t *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  wchar_t *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  wchar_t *local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  wchar_t *local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 *local_338;
  bool *local_330;
  wchar_t *local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  wchar_t *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  wchar_t *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  wchar_t *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  wchar_t *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  wchar_t *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  wchar_t *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  wchar_t *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  TStringView<wchar_t> local_2a8;
  FScriptContainerElement *local_298;
  int local_290;
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  TStringView<wchar_t> local_268;
  TStringView<wchar_t> local_258;
  TStringView<wchar_t> local_248;
  TStringView<wchar_t> local_238;
  TStringView<wchar_t> local_228;
  TStringView<wchar_t> local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_1c8;
  TStringView<wchar_t> local_1b8;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  local_558.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_558.Data.ArrayNum = 0;
  local_558.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar11 = FFileHelper::LoadFileToString(&local_558,pwVar19,None,0);
  if (!bVar11) {
    bVar11 = false;
    goto LAB_142d2e206;
  }
  local_668.Object = (FJsonObject *)0x0;
  local_668.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar16 = TJsonStringReader<wchar_t>::Create(&local_1c8,&local_558);
  pTVar24 = (pTVar16->SharedReferenceCount).ReferenceController;
  pTVar6 = pTVar16->Object;
  if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_560 = pTVar24;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  local_548._8_8_ = (FScriptContainerElement *)0x0;
  local_548._16_8_ = (FScriptContainerElement *)0x0;
  local_530.Data = (FScriptContainerElement *)0x0;
  local_528.Data = (FScriptContainerElement *)0x0;
  local_520 = (FJsonObject *)0x0;
  FStack_518.Data = (FScriptContainerElement *)0x0;
  bVar11 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                     ((TJsonReader<wchar_t> *)pTVar6,(StackState *)local_548,None);
  if (bVar11) {
    bVar11 = FJsonSerializerPolicy_JsonObject::GetValueFromState((StackState *)local_548,&local_668)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_518.Data);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_530.Data,(int)local_528.Data);
    if ((TSharedPtr<FJsonValue,1> *)local_530.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_530.Data);
    }
    if ((FScriptContainerElement *)local_548._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_548._8_8_);
    }
    if ((!bVar11) || (local_668.Object == (FJsonObject *)0x0)) goto LAB_142d2e1e2;
    local_5e0._80_8_ = (FScriptContainerElement *)0x0;
    local_5e0._88_4_ = 0;
    local_5e0._92_4_ = 0;
    if ((local_668.Object == (FJsonObject *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    uStack_2e0 = 7;
    local_2e8 = L"Project";
    local_88._12_4_ = uStack_2dc;
    local_88.Size = 7;
    local_88.DataPtr = L"Project";
    bVar11 = FJsonObject::TryGetStringField
                       (local_668.Object,&local_88,(FString *)(local_5e0 + 0x50));
    if (bVar11) {
      pFVar17 = FPaths::GetPath(&local_78,param_1);
      local_2a8.DataPtr = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
      iVar15 = (pFVar17->Data).ArrayNum;
      local_2a8.Size = iVar15 + -1;
      if (iVar15 == 0) {
        local_2a8.Size = 0;
      }
      local_298 = (FScriptContainerElement *)local_5e0._80_8_;
      local_290 = local_5e0._88_4_ + -1;
      if (local_5e0._88_4_ == 0) {
        local_290 = 0;
      }
      FPaths::CombineInternal((FString *)local_5e0,&local_2a8,2);
      if (this != (FTargetReceipt *)local_5e0) {
        pFVar21 = (this->ProjectFile).Data.AllocatorInstance.Data;
        if (pFVar21 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar21);
        }
        (this->ProjectFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_5e0._0_8_
        ;
        (this->ProjectFile).Data.ArrayNum = local_5e0._8_4_;
        (this->ProjectFile).Data.ArrayMax = local_5e0._12_4_;
        local_5e0._8_4_ = 0;
        local_5e0._12_4_ = 0;
        local_5e0._0_8_ = (FScriptContainerElement *)0x0;
      }
      if ((FScriptContainerElement *)local_5e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_5e0._0_8_);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      FPaths::MakeStandardFilename(&this->ProjectFile);
      pFVar17 = FPaths::GetPath(&local_68,&this->ProjectFile);
      ::FString::operator=(&this->ProjectDir,pFVar17);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if ((local_668.Object == (FJsonObject *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    local_2d8 = L"TargetName";
    uStack_2d0 = 10;
    local_58._12_4_ = uStack_2cc;
    local_58.Size = 10;
    local_58.DataPtr = L"TargetName";
    bVar11 = FJsonObject::TryGetStringField(local_668.Object,&local_58,&this->TargetName);
    if (bVar11) {
      if ((local_668.Object == (FJsonObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      local_2c8 = L"Platform";
      uStack_2c0 = 8;
      local_288._12_4_ = uStack_2bc;
      local_288.Size = 8;
      local_288.DataPtr = L"Platform";
      bVar11 = FJsonObject::TryGetStringField(local_668.Object,&local_288,&this->Platform);
      if (!bVar11) goto LAB_142d2f916;
      if ((local_668.Object == (FJsonObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      local_2b8 = L"Architecture";
      uStack_2b0 = 0xc;
      local_278._12_4_ = uStack_2ac;
      local_278.Size = 0xc;
      local_278.DataPtr = L"Architecture";
      bVar11 = FJsonObject::TryGetStringField(local_668.Object,&local_278,&this->Architecture);
      if (!bVar11) goto LAB_142d2f916;
      if ((local_668.Object == (FJsonObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      local_4d8 = L"BuildSettingsVersion";
      iStack_4d0 = 0x14;
      local_268._12_4_ = iStack_4cc;
      local_268.Size = 0x14;
      local_268.DataPtr = L"BuildSettingsVersion";
      FJsonObject::TryGetStringField(local_668.Object,&local_268,&this->BuildSettingsVersion);
      if ((local_668.Object == (FJsonObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      local_4c8 = L"TargetBuildEnvironment";
      uStack_4c0 = 0x16;
      local_258._12_4_ = uStack_4bc;
      local_258.Size = 0x16;
      local_258.DataPtr = L"TargetBuildEnvironment";
      FJsonObject::TryGetStringField(local_668.Object,&local_258,&this->TargetBuildEnvironment);
      local_5e0._64_8_ = (FScriptContainerElement *)0x0;
      local_5e0._72_4_ = 0;
      local_5e0._76_4_ = 0;
      if ((local_668.Object == (FJsonObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      local_4b8 = L"Configuration";
      uStack_4b0 = 0xd;
      local_248._12_4_ = uStack_4ac;
      local_248.Size = 0xd;
      local_248.DataPtr = L"Configuration";
      bVar11 = FJsonObject::TryGetStringField
                         (local_668.Object,&local_248,(FString *)(local_5e0 + 0x40));
      if (bVar11) {
        pFVar21 = (FScriptContainerElement *)L"";
        if (local_5e0._72_4_ != 0) {
          pFVar21 = (FScriptContainerElement *)local_5e0._64_8_;
        }
        bVar11 = LexTryParseString(&this->Configuration,(wchar_t *)pFVar21);
        if (!bVar11) goto LAB_142d2f90f;
        local_5e0._48_8_ = (FScriptContainerElement *)0x0;
        local_5e0._56_4_ = 0;
        local_5e0._60_4_ = 0;
        if ((local_668.Object == (FJsonObject *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        local_4a8 = L"TargetType";
        uStack_4a0 = 10;
        local_238._12_4_ = uStack_49c;
        local_238.Size = 10;
        local_238.DataPtr = L"TargetType";
        bVar11 = FJsonObject::TryGetStringField
                           (local_668.Object,&local_238,(FString *)(local_5e0 + 0x30));
        if (bVar11) {
          pFVar21 = (FScriptContainerElement *)L"";
          if (local_5e0._56_4_ != 0) {
            pFVar21 = (FScriptContainerElement *)local_5e0._48_8_;
          }
          bVar11 = LexTryParseString(&this->TargetType,(wchar_t *)pFVar21);
          if (!bVar11) goto LAB_142d2ef4a;
          if ((local_668.Object == (FJsonObject *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          local_498 = L"Version";
          uStack_490 = 7;
          local_228._12_4_ = uStack_48c;
          local_228.Size = 7;
          local_228.DataPtr = L"Version";
          bVar11 = FJsonObject::TryGetObjectField
                             (local_668.Object,&local_228,
                              (TSharedPtr<FJsonObject,1> **)&local_510.Value);
          if ((!bVar11) ||
             (this_00 = *(FJsonObject **)local_510.Value, this_00 == (FJsonObject *)0x0))
          goto LAB_142d2ef4a;
          uStack_480 = 0xc;
          local_488 = L"MajorVersion";
          local_218._12_4_ = uStack_47c;
          local_218.Size = 0xc;
          local_218.DataPtr = L"MajorVersion";
          bVar11 = FJsonObject::TryGetNumberField(this_00,&local_218,&(this->Version).MajorVersion);
          if (!bVar11) goto LAB_142d2ef4a;
          iStack_470 = 0xc;
          local_478 = L"MinorVersion";
          local_208._12_4_ = iStack_46c;
          local_208.Size = 0xc;
          local_208.DataPtr = L"MinorVersion";
          bVar11 = FJsonObject::TryGetNumberField(this_00,&local_208,&(this->Version).MinorVersion);
          if (!bVar11) goto LAB_142d2ef4a;
          iStack_460 = 0xc;
          local_468 = L"PatchVersion";
          local_1f8._12_4_ = iStack_45c;
          local_1f8.Size = 0xc;
          local_1f8.DataPtr = L"PatchVersion";
          bVar11 = FJsonObject::TryGetNumberField(this_00,&local_1f8,&(this->Version).PatchVersion);
          if (!bVar11) goto LAB_142d2ef4a;
          uStack_450 = 10;
          local_458 = L"Changelist";
          local_1e8._12_4_ = uStack_44c;
          local_1e8.Size = 10;
          local_1e8.DataPtr = L"Changelist";
          FJsonObject::TryGetNumberField(this_00,&local_1e8,&(this->Version).Changelist);
          uStack_440 = 0x14;
          local_448 = L"CompatibleChangelist";
          local_1d8._12_4_ = uStack_43c;
          local_1d8.Size = 0x14;
          local_1d8.DataPtr = L"CompatibleChangelist";
          FJsonObject::TryGetNumberField(this_00,&local_1d8,&(this->Version).CompatibleChangelist);
          uStack_430 = 0x11;
          local_438 = L"IsLicenseeVersion";
          local_108._12_4_ = uStack_42c;
          local_108.Size = 0x11;
          local_108.DataPtr = L"IsLicenseeVersion";
          FJsonObject::TryGetNumberField(this_00,&local_108,&(this->Version).IsLicenseeVersion);
          uStack_420 = 0xf;
          local_428 = L"IsPromotedBuild";
          local_1b8._12_4_ = uStack_41c;
          local_1b8.Size = 0xf;
          local_1b8.DataPtr = L"IsPromotedBuild";
          FJsonObject::TryGetNumberField(this_00,&local_1b8,&(this->Version).IsPromotedBuild);
          uStack_410 = 10;
          local_418 = L"BranchName";
          local_1a8._12_4_ = uStack_40c;
          local_1a8.Size = 10;
          local_1a8.DataPtr = L"BranchName";
          FJsonObject::TryGetStringField(this_00,&local_1a8,&(this->Version).BranchName);
          uStack_400 = 7;
          local_408 = L"BuildId";
          local_198._12_4_ = uStack_3fc;
          local_198.Size = 7;
          local_198.DataPtr = L"BuildId";
          FJsonObject::TryGetStringField(this_00,&local_198,&(this->Version).BuildId);
          uStack_3f0 = 0xc;
          local_3f8 = L"BuildVersion";
          local_188._12_4_ = uStack_3ec;
          local_188.Size = 0xc;
          local_188.DataPtr = L"BuildVersion";
          FJsonObject::TryGetStringField(this_00,&local_188,&(this->Version).BuildVersion);
          local_5f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5f0.Data.ArrayNum = 0;
          local_5f0.Data.ArrayMax = 0;
          if ((local_668.Object == (FJsonObject *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          local_3e8 = L"LaunchCmd";
          uStack_3e0 = 9;
          local_178._12_4_ = uStack_3dc;
          local_178.Size = 9;
          local_178.DataPtr = L"LaunchCmd";
          bVar11 = FJsonObject::TryGetStringField(local_668.Object,&local_178,&local_5f0);
          if ((bVar11) && (pTVar1 = &this->LaunchCmd, &local_5f0 != (FString *)pTVar1)) {
            pFVar21 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
            if (pFVar21 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar21);
            }
            (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                 local_5f0.Data.AllocatorInstance.Data;
            *(int *)((longlong)&(this->LaunchCmd).field0_0x0 + 8) = local_5f0.Data.ArrayNum;
            iVar15 = local_5f0.Data.ArrayMax;
            local_5f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)((longlong)&(this->LaunchCmd).field0_0x0 + 0xc) = local_5f0.Data.ArrayMax;
            local_5f0.Data.ArrayNum = 0;
            local_5f0.Data.ArrayMax = 0;
            if ((iVar15 == -1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x171,
                                    L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                   ), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
          }
          if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
          }
          if ((local_668.Object == (FJsonObject *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          local_3d8 = L"Launch";
          uStack_3d0 = 6;
          local_168._12_4_ = uStack_3cc;
          local_168.Size = 6;
          local_168.DataPtr = L"Launch";
          bVar11 = FJsonObject::TryGetStringField(local_668.Object,&local_168,&this->Launch);
          piVar2 = (int *)((longlong)&(this->LaunchCmd).field0_0x0 + 0xc);
          if (!bVar11) {
            if (*piVar2 == -1) goto LAB_142d2ef4a;
            iVar15 = *(int *)((longlong)&(this->LaunchCmd).field0_0x0 + 8);
            iVar14 = iVar15 + -1;
            if (iVar15 == 0) {
              iVar14 = 0;
            }
            ::FString::AssignRange
                      (&this->Launch,
                       (wchar_t *)
                       (this->LaunchCmd).field0_0x0.TypedValue.Data.AllocatorInstance.Data,iVar14);
          }
          if ((param_2) && (ExpandVariables(this,&this->Launch), *piVar2 != -1)) {
            ExpandVariables(this,(FString *)&this->LaunchCmd);
          }
          if ((local_668.Object == (FJsonObject *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          local_3c8 = L"BuildProducts";
          uStack_3c0 = 0xd;
          local_158._12_4_ = uStack_3bc;
          local_158.Size = 0xd;
          local_158.DataPtr = L"BuildProducts";
          bVar11 = FJsonObject::TryGetArrayField(local_668.Object,&local_158,&local_500);
          if (bVar11) {
            iVar15 = local_500->ArrayNum;
            pFVar21 = (local_500->AllocatorInstance).Data;
            pFVar23 = pFVar21 + (longlong)iVar15 * 0x10;
            while( true ) {
              if (local_500->ArrayNum != iVar15) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res10);
              }
              if (pFVar21 == pFVar23) goto LAB_142d2ef7d;
              if ((*(longlong *)pFVar21 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              cVar13 = (**(code **)(**(longlong **)pFVar21 + 0x88))
                                 (*(longlong **)pFVar21,local_5e0 + 0x60);
              uVar8 = local_5e0._96_8_;
              if (cVar13 == '\0') goto LAB_142d2ef4a;
              local_650.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_640.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_650.Data.ArrayNum = 0;
              local_650.Data.ArrayMax = 0;
              local_640.Data.ArrayNum = 0;
              local_640.Data.ArrayMax = 0;
              if ((*(longlong *)local_5e0._96_8_ == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              local_3b8 = L"Type";
              uStack_3b0 = 4;
              local_148._12_4_ = uStack_3ac;
              local_148.Size = 4;
              local_148.DataPtr = L"Type";
              bVar11 = FJsonObject::TryGetStringField(*(FJsonObject **)uVar8,&local_148,&local_640);
              uVar8 = local_5e0._96_8_;
              if (!bVar11) break;
              if ((*(longlong *)local_5e0._96_8_ == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              local_3a8 = L"Path";
              uStack_3a0 = 4;
              local_138._12_4_ = uStack_39c;
              local_138.Size = 4;
              local_138.DataPtr = L"Path";
              bVar11 = FJsonObject::TryGetStringField(*(FJsonObject **)uVar8,&local_138,&local_650);
              if (!bVar11) break;
              if (param_2) {
                ExpandVariables(this,&local_650);
              }
              pTVar3 = &this->BuildProducts;
              pFVar20 = (pTVar3->AllocatorInstance).Data;
              if (((pFVar20 <= (FScriptContainerElement *)&local_650) &&
                  ((FScriptContainerElement *)&local_650 <
                   pFVar20 + (longlong)(this->BuildProducts).ArrayMax * 0x20)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              iVar14 = (this->BuildProducts).ArrayNum;
              piVar2 = &(this->BuildProducts).ArrayMax;
              if (iVar14 == *piVar2) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&pTVar3->AllocatorInstance,piVar2);
              }
              (this->BuildProducts).ArrayNum = iVar14 + 1;
              pFVar20 = (pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 0x20;
              *(undefined8 *)pFVar20 = 0;
              *(FScriptContainerElement **)pFVar20 = local_650.Data.AllocatorInstance.Data;
              *(int *)(pFVar20 + 8) = local_650.Data.ArrayNum;
              *(int *)(pFVar20 + 0xc) = local_650.Data.ArrayMax;
              *(undefined8 *)(pFVar20 + 0x10) = 0;
              *(FScriptContainerElement **)(pFVar20 + 0x10) = local_640.Data.AllocatorInstance.Data;
              *(int *)(pFVar20 + 0x18) = local_640.Data.ArrayNum;
              *(int *)(pFVar20 + 0x1c) = local_640.Data.ArrayMax;
              local_640.Data.ArrayNum = 0;
              local_640.Data.ArrayMax = 0;
              local_640.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_650.Data.ArrayNum = 0;
              local_650.Data.ArrayMax = 0;
              local_650.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              pFVar21 = pFVar21 + 0x10;
            }
            FVar18.Data = local_650.Data.AllocatorInstance.Data;
            if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_640.Data.AllocatorInstance.Data);
              FVar18.Data = local_650.Data.AllocatorInstance.Data;
            }
LAB_142d2ef40:
            if (FVar18.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar18.Data);
            }
            goto LAB_142d2ef4a;
          }
LAB_142d2ef7d:
          if ((local_668.Object == (FJsonObject *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          local_398 = L"RuntimeDependencies";
          uStack_390 = 0x13;
          local_128._12_4_ = uStack_38c;
          local_128.Size = 0x13;
          local_128.DataPtr = L"RuntimeDependencies";
          bVar11 = FJsonObject::TryGetArrayField
                             (local_668.Object,&local_128,
                              (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> **)
                              local_4f8);
          if (bVar11) {
            iVar15 = *(int *)(local_4f8._0_8_ + 8);
            plVar22 = *(longlong **)local_4f8._0_8_;
            plVar25 = plVar22 + (longlong)iVar15 * 2;
            while( true ) {
              if (*(int *)(local_4f8._0_8_ + 8) != iVar15) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res20);
              }
              if (plVar22 == plVar25) goto LAB_142d2f29d;
              if ((*plVar22 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              cVar13 = (**(code **)(*(longlong *)*plVar22 + 0x88))((longlong *)*plVar22,&local_578);
              plVar10 = local_578;
              if (cVar13 == '\0') goto LAB_142d2ef4a;
              local_630.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_620.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_630.Data.ArrayNum = 0;
              local_630.Data.ArrayMax = 0;
              local_620.Data.ArrayNum = 0;
              local_620.Data.ArrayMax = 0;
              if ((*local_578 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              local_388 = L"Path";
              uStack_380 = 4;
              local_118._12_4_ = uStack_37c;
              local_118.Size = 4;
              local_118.DataPtr = L"Path";
              bVar11 = FJsonObject::TryGetStringField((FJsonObject *)*plVar10,&local_118,&local_630)
              ;
              plVar10 = local_578;
              if (!bVar11) break;
              if ((*local_578 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              local_378 = L"Type";
              uStack_370 = 4;
              local_48._12_4_ = uStack_36c;
              local_48.Size = 4;
              local_48.DataPtr = L"Type";
              bVar11 = FJsonObject::TryGetStringField((FJsonObject *)*plVar10,&local_48,&local_620);
              if (!bVar11) break;
              if (param_2) {
                ExpandVariables(this,&local_630);
              }
              pTVar4 = &this->RuntimeDependencies;
              pFVar21 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar21 <= (FScriptContainerElement *)&local_630) &&
                  ((FScriptContainerElement *)&local_630 <
                   pFVar21 + (longlong)(this->RuntimeDependencies).ArrayMax * 0x20)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              iVar14 = (this->RuntimeDependencies).ArrayNum;
              piVar2 = &(this->RuntimeDependencies).ArrayMax;
              if (iVar14 == *piVar2) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&pTVar4->AllocatorInstance,piVar2);
              }
              (this->RuntimeDependencies).ArrayNum = iVar14 + 1;
              pFVar21 = (pTVar4->AllocatorInstance).Data + (longlong)iVar14 * 0x20;
              *(undefined8 *)pFVar21 = 0;
              *(FScriptContainerElement **)pFVar21 = local_630.Data.AllocatorInstance.Data;
              *(int *)(pFVar21 + 8) = local_630.Data.ArrayNum;
              *(int *)(pFVar21 + 0xc) = local_630.Data.ArrayMax;
              *(undefined8 *)(pFVar21 + 0x10) = 0;
              *(FScriptContainerElement **)(pFVar21 + 0x10) = local_620.Data.AllocatorInstance.Data;
              *(int *)(pFVar21 + 0x18) = local_620.Data.ArrayNum;
              *(int *)(pFVar21 + 0x1c) = local_620.Data.ArrayMax;
              local_620.Data.ArrayNum = 0;
              local_620.Data.ArrayMax = 0;
              local_620.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_630.Data.ArrayNum = 0;
              local_630.Data.ArrayMax = 0;
              local_630.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              plVar22 = plVar22 + 2;
            }
            FVar18.Data = local_630.Data.AllocatorInstance.Data;
            if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_620.Data.AllocatorInstance.Data);
              FVar18.Data = local_630.Data.AllocatorInstance.Data;
            }
            goto LAB_142d2ef40;
          }
LAB_142d2f29d:
          if ((local_668.Object == (FJsonObject *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          local_368 = L"Plugins";
          uStack_360 = 7;
          local_f8._12_4_ = uStack_35c;
          local_f8.Size = 7;
          local_f8.DataPtr = L"Plugins";
          bVar11 = FJsonObject::TryGetArrayField
                             (local_668.Object,&local_f8,
                              (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> **)
                              (local_4f8 + 8));
          if (bVar11) {
            iVar15 = *(int *)(local_4f8._8_8_ + 8);
            plVar22 = *(longlong **)local_4f8._8_8_;
            plVar25 = plVar22 + (longlong)iVar15 * 2;
            while( true ) {
              if (*(int *)(local_4f8._8_8_ + 8) != iVar15) {
                local_658 = 0;
                `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_658);
              }
              if (plVar22 == plVar25) goto LAB_142d2f4d0;
              if ((*plVar22 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              cVar13 = (**(code **)(*(longlong *)*plVar22 + 0x88))((longlong *)*plVar22,&local_570);
              plVar10 = local_570;
              if (cVar13 == '\0') goto LAB_142d2ef4a;
              local_5e0._32_8_ = (FScriptContainerElement *)0x0;
              local_5e0._40_4_ = 0;
              local_5e0._44_4_ = 0;
              if ((*local_570 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              local_358 = L"Name";
              uStack_350 = 4;
              local_e8._12_4_ = uStack_34c;
              local_e8.Size = 4;
              local_e8.DataPtr = L"Name";
              bVar11 = FJsonObject::TryGetStringField
                                 ((FJsonObject *)*plVar10,&local_e8,(FString *)(local_5e0 + 0x20));
              plVar10 = local_570;
              FVar18.Data = (FScriptContainerElement *)local_5e0._32_8_;
              if (!bVar11) break;
              if ((*local_570 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              local_348 = L"Enabled";
              uStack_340 = 7;
              local_d8._12_4_ = uStack_33c;
              local_d8.Size = 7;
              local_d8.DataPtr = L"Enabled";
              bVar11 = FJsonObject::TryGetBoolField((FJsonObject *)*plVar10,&local_d8,local_657);
              FVar18.Data = (FScriptContainerElement *)local_5e0._32_8_;
              if (!bVar11) break;
              local_338 = (undefined8 *)(local_5e0 + 0x20);
              local_330 = local_657;
              TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FString_const_&,bool_const_&>_>
                        ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                          *)&this->PluginNameToEnabledState,&local_510,(bool *)&local_338);
              if ((FScriptContainerElement *)local_5e0._32_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_5e0._32_8_);
              }
              plVar22 = plVar22 + 2;
            }
            goto LAB_142d2ef40;
          }
LAB_142d2f4d0:
          local_5e0._16_8_ = (FScriptContainerElement *)0x0;
          local_5e0._24_4_ = 0;
          local_5e0._28_4_ = 0;
          if ((local_668.Object == (FJsonObject *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          local_328 = L"BuildPlugins";
          uStack_320 = 0xc;
          local_c8._12_4_ = uStack_31c;
          local_c8.Size = 0xc;
          local_c8.DataPtr = L"BuildPlugins";
          bVar11 = FJsonObject::TryGetStringArrayField
                             (local_668.Object,&local_c8,
                              (TArray<FString,TSizedDefaultAllocator<32>_> *)(local_5e0 + 0x10));
          uVar8 = local_5e0._16_8_;
          if (bVar11) {
            uVar9 = local_5e0._24_4_;
            if ((((FScriptContainerElement *)local_5e0._16_8_ == (FScriptContainerElement *)0x0) &&
                (local_5e0._24_4_ != 0)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Ptr != nullptr || Count == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x9c1,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            iVar15 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,uVar9,&(this->BuildPlugins).AllocatorInstance,
                                &(this->BuildPlugins).ArrayNum,&(this->BuildPlugins).ArrayMax);
            ConstructItems<FString,FString,int>
                      ((this->BuildPlugins).AllocatorInstance.Data + (longlong)iVar15 * 0x10,
                       (FString *)uVar8,uVar9);
          }
          if ((local_668.Object == (FJsonObject *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          local_318 = L"AdditionalProperties";
          uStack_310 = 0x14;
          local_b8._12_4_ = uStack_30c;
          local_b8.Size = 0x14;
          local_b8.DataPtr = L"AdditionalProperties";
          bVar11 = FJsonObject::TryGetArrayField
                             (local_668.Object,&local_b8,
                              (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> **)
                              local_4e8);
          if (bVar11) {
            iVar15 = *(int *)(local_4e8[0].Data + 8);
            plVar22 = *(longlong **)local_4e8[0].Data;
            plVar25 = plVar22 + (longlong)iVar15 * 2;
            while( true ) {
              if (*(int *)(local_4e8[0].Data + 8) != iVar15) {
                local_657[1] = false;
                `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_657 + 1);
              }
              if (plVar22 == plVar25) goto LAB_142d2f8ea;
              if ((*plVar22 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              cVar13 = (**(code **)(*(longlong *)*plVar22 + 0x88))((longlong *)*plVar22,&local_568);
              plVar10 = local_568;
              if (cVar13 == '\0') break;
              local_610.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_600.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_610.Data.ArrayNum = 0;
              local_610.Data.ArrayMax = 0;
              local_600.Data.ArrayNum = 0;
              local_600.Data.ArrayMax = 0;
              if ((*local_568 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              local_308 = L"Name";
              uStack_300 = 4;
              local_a8._12_4_ = uStack_2fc;
              local_a8.Size = 4;
              local_a8.DataPtr = L"Name";
              bVar11 = FJsonObject::TryGetStringField((FJsonObject *)*plVar10,&local_a8,&local_610);
              plVar10 = local_568;
              if (!bVar11) {
LAB_142d2f8ca:
                if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_600.Data.AllocatorInstance.Data);
                }
                if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_610.Data.AllocatorInstance.Data);
                }
                break;
              }
              if ((*local_568 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              local_2f8 = L"Value";
              uStack_2f0 = 5;
              local_98._12_4_ = uStack_2ec;
              local_98.Size = 5;
              local_98.DataPtr = L"Value";
              bVar11 = FJsonObject::TryGetStringField((FJsonObject *)*plVar10,&local_98,&local_600);
              if (!bVar11) goto LAB_142d2f8ca;
              if (param_2) {
                ExpandVariables(this,&local_600);
              }
              pTVar5 = &this->AdditionalProperties;
              pFVar21 = (pTVar5->AllocatorInstance).Data;
              if (((pFVar21 <= (FScriptContainerElement *)&local_610) &&
                  ((FScriptContainerElement *)&local_610 <
                   pFVar21 + (longlong)(this->AdditionalProperties).ArrayMax * 0x20)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              iVar14 = (this->AdditionalProperties).ArrayNum;
              piVar2 = &(this->AdditionalProperties).ArrayMax;
              if (iVar14 == *piVar2) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&pTVar5->AllocatorInstance,piVar2);
              }
              (this->AdditionalProperties).ArrayNum = iVar14 + 1;
              pFVar21 = (pTVar5->AllocatorInstance).Data + (longlong)iVar14 * 0x20;
              *(undefined8 *)pFVar21 = 0;
              *(FScriptContainerElement **)pFVar21 = local_610.Data.AllocatorInstance.Data;
              *(int *)(pFVar21 + 8) = local_610.Data.ArrayNum;
              *(int *)(pFVar21 + 0xc) = local_610.Data.ArrayMax;
              *(undefined8 *)(pFVar21 + 0x10) = 0;
              *(FScriptContainerElement **)(pFVar21 + 0x10) = local_600.Data.AllocatorInstance.Data;
              *(int *)(pFVar21 + 0x18) = local_600.Data.ArrayNum;
              *(int *)(pFVar21 + 0x1c) = local_600.Data.ArrayMax;
              local_600.Data.ArrayNum = 0;
              local_600.Data.ArrayMax = 0;
              local_600.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_610.Data.ArrayNum = 0;
              local_610.Data.ArrayMax = 0;
              local_610.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              plVar22 = plVar22 + 2;
            }
            bVar11 = false;
          }
          else {
LAB_142d2f8ea:
            bVar11 = true;
          }
          DestructItems<FString,int>((FString *)local_5e0._16_8_,local_5e0._24_4_);
          if ((FScriptContainerElement *)local_5e0._16_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_5e0._16_8_);
          }
        }
        else {
LAB_142d2ef4a:
          bVar11 = false;
        }
        pTVar24 = local_560;
        if ((FScriptContainerElement *)local_5e0._48_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_5e0._48_8_);
          pTVar24 = local_560;
        }
      }
      else {
LAB_142d2f90f:
        bVar11 = false;
      }
      if ((FScriptContainerElement *)local_5e0._64_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_5e0._64_8_);
      }
    }
    else {
LAB_142d2f916:
      bVar11 = false;
    }
    if ((FScriptContainerElement *)local_5e0._80_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_5e0._80_8_);
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_518.Data);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_530.Data,(int)local_528.Data);
    if ((TSharedPtr<FJsonValue,1> *)local_530.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_530.Data);
    }
    if ((FScriptContainerElement *)local_548._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_548._8_8_);
    }
LAB_142d2e1e2:
    bVar11 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_668.SharedReferenceCount.ReferenceController);
LAB_142d2e206:
  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data.AllocatorInstance.Data);
  }
  return bVar11;
}

