// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 62

// FDesktopPlatformBase @ 142d1b930

FDesktopPlatformBase * __thiscall
FDesktopPlatformBase::FDesktopPlatformBase(FDesktopPlatformBase *this)

{
  this->_padding_ = (longlong)&___7FDesktopPlatformBase__6B_;
  (this->CurrentEngineIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentEngineIdentifier).Data.ArrayNum = 0;
  (this->CurrentEngineIdentifier).Data.ArrayMax = 0;
  *(undefined8 *)&this->LauncherInstallationList = 0;
  *(undefined8 *)&(this->LauncherInstallationList).field_0x8 = 0;
  *(undefined8 *)&(this->LauncherInstallationList).field_0x20 = 0;
  *(undefined4 *)&(this->LauncherInstallationList).field_0x28 = 0;
  *(undefined4 *)&(this->LauncherInstallationList).field_0x2c = 0x80;
  *(undefined4 *)&(this->LauncherInstallationList).field_0x34 = 0;
  *(undefined4 *)&(this->LauncherInstallationList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LauncherInstallationList).field_0x40 = 0;
  *(undefined4 *)&(this->LauncherInstallationList).field_0x48 = 0;
  *(undefined8 *)&this->CachedProjectDictionaries = 0;
  *(undefined8 *)&(this->CachedProjectDictionaries).field_0x8 = 0;
  *(undefined8 *)&(this->CachedProjectDictionaries).field_0x20 = 0;
  *(undefined4 *)&(this->CachedProjectDictionaries).field_0x28 = 0;
  *(undefined4 *)&(this->CachedProjectDictionaries).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedProjectDictionaries).field_0x34 = 0;
  *(undefined4 *)&(this->CachedProjectDictionaries).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedProjectDictionaries).field_0x40 = 0;
  *(undefined4 *)&(this->CachedProjectDictionaries).field_0x48 = 0;
  *(undefined8 *)&this->ProjectFileToTargets = 0;
  *(undefined8 *)&(this->ProjectFileToTargets).field_0x8 = 0;
  *(undefined8 *)&(this->ProjectFileToTargets).field_0x20 = 0;
  *(undefined4 *)&(this->ProjectFileToTargets).field_0x28 = 0;
  *(undefined4 *)&(this->ProjectFileToTargets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProjectFileToTargets).field_0x34 = 0;
  *(undefined4 *)&(this->ProjectFileToTargets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ProjectFileToTargets).field_0x40 = 0;
  *(undefined4 *)&(this->ProjectFileToTargets).field_0x48 = 0;
  (this->HordeServerUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HordeServerUrl).Data.ArrayNum = 0;
  (this->HordeServerUrl).Data.ArrayMax = 0;
  (this->HordeServerUrlConfigSource).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HordeServerUrlConfigSource).Data.ArrayNum = 0;
  (this->HordeServerUrlConfigSource).Data.ArrayMax = 0;
  (this->LauncherInstallationTimestamp).Ticks = 0;
  this->bInitializedHordeServerUrl = false;
  return this;
}

// ~FDesktopPlatformBase @ 142d1c770

void __thiscall FDesktopPlatformBase::~FDesktopPlatformBase(FDesktopPlatformBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->HordeServerUrlConfigSource).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HordeServerUrl).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ProjectFileToTargets).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ProjectFileToTargets).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProjectFileToTargets);
  *(undefined4 *)&(this->CachedProjectDictionaries).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedProjectDictionaries).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FUProjectDictionary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FUProjectDictionary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FUProjectDictionary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedProjectDictionaries);
  *(undefined4 *)&(this->LauncherInstallationList).field_0x48 = 0;
  pvVar2 = *(void **)&(this->LauncherInstallationList).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LauncherInstallationList);
  pFVar1 = (this->CurrentEngineIdentifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IDesktopPlatform__6B_;
  return;
}

// operator() @ 142d1ce30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FDesktopPlatformBase::IsUnrealBuildToolRunning'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,bool param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  size_t sVar9;
  uchar *puVar10;
  IFileManager *pIVar11;
  ForAnyElementType FVar12;
  wchar_t *_Str;
  uint uVar13;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  uint local_1c8 [2];
  FString local_1c0;
  FString local_1b0;
  TStringView<wchar_t> local_1a0;
  FString local_190;
  undefined1 local_180;
  uchar local_17f [23];
  FMD5Hash local_168;
  FScriptContainerElement local_148 [128];
  ForAnyElementType local_c8;
  FScriptContainerElement *local_c0;
  int local_b8;
  FMD5 local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  if (param_2) {
    return true;
  }
  bVar3 = true;
  pFVar7 = ::FString::FString(&local_190,param_1);
  FPaths::GetBaseFilename(&local_1b0,pFVar7,true);
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_1b0.Data.ArrayNum != 0) {
    FVar12.Data = local_1b0.Data.AllocatorInstance.Data;
  }
  pwVar8 = wcschr((wchar_t *)FVar12.Data,L'_');
  if (pwVar8 == (wchar_t *)0x0) goto LAB_142d1d0d3;
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_1b0.Data.ArrayNum != 0) {
    FVar12.Data = local_1b0.Data.AllocatorInstance.Data;
  }
  local_1a0.Size = (int)((longlong)pwVar8 - (longlong)FVar12.Data >> 1);
  local_1a0.DataPtr = L"";
  if (local_1b0.Data.ArrayNum != 0) {
    local_1a0.DataPtr = (wchar_t *)local_1b0.Data.AllocatorInstance.Data;
  }
  local_1c8[0] = 0;
  ::LexFromString((int *)local_1c8,&local_1a0);
  FWindowsPlatformProcess::GetApplicationName(&local_1c0,local_1c8[0]);
  if (local_1c0.Data.ArrayNum < 2) {
LAB_142d1d09c:
    pIVar11 = IFileManager::Get();
    local_1d8 = 0;
    (**(code **)((longlong)*pIVar11 + 0x38))(pIVar11,param_1,0,0);
  }
  else {
    ::FString::ToUpperInline(&local_1c0);
    local_c8.Data = (FScriptContainerElement *)0x0;
    if (local_1c0.Data.ArrayNum == 0) {
      _Str = L"";
LAB_142d1cf68:
      sVar9 = wcslen(_Str);
      local_b8 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar9);
      uVar1 = local_b8 + 1;
      uVar13 = uVar1;
      if (uVar1 < 0x81) {
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          uVar13 = 0;
          goto LAB_142d1cfa7;
        }
      }
      else {
LAB_142d1cfa7:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar13,1);
      }
      local_c0 = local_148;
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        local_c0 = local_c8.Data;
      }
      puVar10 = UE::Core::Private::Convert((uchar *)local_c0,uVar1,_Str,(int)sVar9 + 1);
      if ((puVar10 == (uchar *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                             ,0x25,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else {
      _Str = (wchar_t *)local_1c0.Data.AllocatorInstance.Data;
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_142d1cf68;
      local_c0 = (FScriptContainerElement *)0x0;
      local_b8 = 0;
    }
    local_168.bIsValid = false;
    FMD5Hash::LexFromString(&local_168,pwVar8 + 1);
    FMD5::FMD5(&local_a8);
    FMD5::Update(&local_a8,(uchar *)local_c0,(longlong)local_b8);
    local_180 = 0;
    FMD5::Final(&local_a8,local_17f);
    local_180 = 1;
    if ((local_168.bIsValid == true) && (iVar6 = memcmp(local_168.Bytes,local_17f,0x10), iVar6 == 0)
       ) {
      bVar3 = false;
      **(undefined1 **)this = 1;
    }
    FMD5::~FMD5(&local_a8);
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
    if (bVar3) goto LAB_142d1d09c;
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
LAB_142d1d0d3:
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  return true;
}

// BuildUnrealBuildTool @ 142d1d660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FDesktopPlatformBase::BuildUnrealBuildTool
          (FDesktopPlatformBase *this,FString *param_1,FOutputDevice *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FString *pFVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  undefined1 auStackY_348 [32];
  undefined7 in_stack_fffffffffffffce1;
  uint in_stack_fffffffffffffcf4;
  FString local_2e8;
  void *local_2d8;
  FProcHandle local_2d0;
  void *local_2c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  wchar_t local_258 [264];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  FOutputDevice::LogfImpl(param_2,L"Building UnrealBuildTool in %s...");
  pFVar5 = ::operator/(&local_280,param_1,
                       L"Engine/Source/Programs/UnrealBuildTool/UnrealBuildTool.csproj");
  FPaths::ConvertRelativePathToFull(&local_2b0,pFVar5);
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  bVar2 = FPaths::FileExists(&local_2b0);
  if (!bVar2) {
    FOutputDevice::LogfImpl(param_2,L"Project file not found at %s");
    bVar2 = false;
    goto LAB_142d1da56;
  }
  local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.Data.ArrayNum = 0;
  local_2e8.Data.ArrayMax = 0;
  FVar8.Data = (FScriptContainerElement *)0x0;
  iVar4 = SHGetFolderPathW(0,0x8026,0,0);
  if (iVar4 < 0) {
LAB_142d1d90e:
    bVar2 = TryReadMsBuildInstallPath
                      (L"Microsoft\\MSBuild\\ToolsVersions\\14.0",L"MSBuildToolsPath",L"MSBuild.exe"
                       ,&local_2e8);
    if ((((bVar2) ||
         (bVar2 = TryReadMsBuildInstallPath
                            (L"Microsoft\\VisualStudio\\SxS\\VS7",L"15.0",
                             L"MSBuild\\15.0\\bin\\MSBuild.exe",&local_2e8), bVar2)) ||
        (bVar2 = TryReadMsBuildInstallPath
                           (L"Microsoft\\MSBuild\\ToolsVersions\\12.0",L"MSBuildToolsPath",
                            L"MSBuild.exe",&local_2e8), bVar2)) ||
       (bVar2 = TryReadMsBuildInstallPath
                          (L"Microsoft\\MSBuild\\ToolsVersions\\4.0",L"MSBuildToolsPath",
                           L"MSBuild.exe",&local_2e8), bVar2)) goto LAB_142d1d7e1;
    FOutputDevice::Log(param_2,L"Couldn\'t find MSBuild installation; skipping.");
    bVar2 = false;
  }
  else {
    pTVar6 = &::FString::FString(&local_270,local_258)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_2c0,pTVar6,0x1e - (uint)(pTVar6->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_2c0,L"MSBuild/14.0/bin/MSBuild.exe",0x1c);
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    bVar2 = FPaths::FileExists((FString *)&local_2c0);
    if (!bVar2) {
      if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.AllocatorInstance.Data);
      }
      goto LAB_142d1d90e;
    }
    iVar4 = local_2c0.ArrayNum + -1;
    if (local_2c0.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(&local_2e8,(wchar_t *)local_2c0.AllocatorInstance.Data,iVar4);
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
    }
LAB_142d1d7e1:
    ::FString::PrintfImpl
              (&local_2a0,
               L"/nologo /verbosity:quiet \"%s\" /property:Configuration=Development /property:Platform=AnyCPU"
              );
    iVar4 = local_2a0.Data.ArrayNum;
    FVar8.Data = local_2a0.Data.AllocatorInstance.Data;
    local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a0.Data.ArrayNum = 0;
    local_2a0.Data.ArrayMax = 0;
    FOutputDevice::LogfImpl(param_2,L"Running: %s %s");
    local_2c8 = (void *)0x0;
    local_2d8 = (void *)0x0;
    bVar2 = FWindowsPlatformProcess::CreatePipe(&local_2c8,&local_2d8,false);
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPlatformProcess::CreatePipe(PipeRead, PipeWrite)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DesktopPlatform\\Private\\DesktopPlatformBase.cpp"
                           ,0x7e2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (iVar4 != 0) {
      FVar9.Data = FVar8.Data;
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_2e8.Data.ArrayNum != 0) {
      FVar7.Data = local_2e8.Data.AllocatorInstance.Data;
    }
    FWindowsPlatformProcess::CreateProc
              ((wchar_t *)&local_2d0,(wchar_t *)FVar7.Data,SUB81(FVar9.Data,0),false,true,
               (uint *)CONCAT71(in_stack_fffffffffffffce1,1),0,
               (wchar_t *)((ulonglong)in_stack_fffffffffffffcf4 << 0x20),(void *)0x0,local_2d8);
    if (local_2d0 == (FProcHandle)0x0) {
      FOutputDevice::Log(param_2,L"Failed to start process.");
      FWindowsPlatformProcess::ClosePipe(local_2c8,local_2d8);
      bVar2 = false;
    }
    else {
      FWindowsPlatformProcess::WaitForProc(&local_2d0);
      FWindowsPlatformProcess::CloseProc(&local_2d0);
      FWindowsPlatformProcess::ClosePipe(local_2c8,local_2d8);
      GetUnrealBuildToolExecutableFilename(this,&local_290,param_1);
      bVar2 = FPaths::FileExists(&local_290);
      if (!bVar2) {
        FOutputDevice::LogfImpl(param_2,L"Missing %s after build");
      }
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
LAB_142d1da56:
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// CheckForLauncherEngineInstallation @ 142d1dd50

void __thiscall
FDesktopPlatformBase::CheckForLauncherEngineInstallation
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FJsonObject *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *pwVar7;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar8;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar9;
  TSharedPtr<FJsonObject,1> *pTVar10;
  int iVar11;
  ForAnyElementType FVar12;
  TSharedPtr<FJsonObject,1> local_118;
  FString local_108;
  StackState local_f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_c0;
  FString local_b0;
  FString local_a0;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  wchar_t *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FString *local_68;
  FString *local_60;
  FString local_58;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  ::FString::PrintfImpl(&local_b0,L"UnrealEngineLauncher/Data/Manifests/%s.manifest");
  pwVar7 = FWindowsPlatformProcess::ApplicationSettingsDir();
  pTVar8 = &::FString::FString(&local_58,pwVar7)->Data;
  iVar11 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  if ((pTVar8->ArrayNum != 0) || (iVar6 = 2, iVar11 == -1)) {
    iVar6 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_c0,pTVar8,iVar6 + iVar11);
  ::FString::PathAppend((FString *)&local_c0,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar11)
  ;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_c0.ArrayNum != 0) {
    FVar12.Data = local_c0.AllocatorInstance.Data;
  }
  bVar5 = FFileHelper::LoadFileToString(&local_108,(wchar_t *)FVar12.Data,None,0);
  if (bVar5) {
    local_118.Object = (FJsonObject *)0x0;
    local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = TJsonStringReader<wchar_t>::Create(&local_48,&local_108);
    pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
    pTVar2 = pTVar9->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    local_f8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Identifier.Data.ArrayNum = 0;
    local_f8.Identifier.Data.ArrayMax = 0;
    local_f8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Array.ArrayNum = 0;
    local_f8.Array.ArrayMax = 0;
    local_f8.Object.Object = (FJsonObject *)0x0;
    local_f8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar2,&local_f8,None);
    if (bVar5) {
      bVar5 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_f8,&local_118);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_f8.Array.AllocatorInstance.Data,
                 local_f8.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_f8.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_f8.Array.AllocatorInstance.Data);
      }
      if (local_f8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Identifier.Data.AllocatorInstance.Data);
      }
      if ((bVar5) && (local_118.Object != (FJsonObject *)0x0)) {
        if ((local_118.Object == (FJsonObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uStack_80 = 0xc;
        local_88 = L"CustomFields";
        local_38._12_4_ = uStack_7c;
        local_38.Size = 0xc;
        local_38.DataPtr = L"CustomFields";
        pTVar10 = FJsonObject::GetObjectField(local_118.Object,&local_38);
        pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
        this_00 = pTVar10->Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (this_00 != (FJsonObject *)0x0) {
          uStack_70 = 0xf;
          local_78 = L"InstallLocation";
          local_28._12_4_ = uStack_6c;
          local_28.Size = 0xf;
          local_28.DataPtr = L"InstallLocation";
          FJsonObject::GetStringField(this_00,&local_a0,&local_28);
          iVar11 = local_a0.Data.ArrayNum + -1;
          if (local_a0.Data.ArrayNum == 0) {
            iVar11 = 0;
          }
          if (0 < iVar11) {
            local_60 = &local_a0;
            local_68 = param_2;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                      ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)param_3,
                       (TPairInitializer<FString_const_&,FString_const_&> *)&stack0x00000010,
                       (bool *)&local_68);
          }
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_f8.Array.AllocatorInstance.Data,
                 local_f8.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_f8.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_f8.Array.AllocatorInstance.Data);
      }
      if (local_f8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Identifier.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
  }
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return;
}

// CleanGameProject @ 142d1e090

bool __thiscall
FDesktopPlatformBase::CleanGameProject
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2,FFeedbackContext *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FText *pFVar6;
  IFileManager *pIVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong in_stack_ffffffffffffff98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FText local_38;
  
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"DesktopPlatform",L"CleaningProject",
                      L"Removing stale build products...");
  FFeedbackContext::BeginSlowTask(param_3,pFVar6,true,false);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  uVar13 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  GetProjectBuildProducts(this,param_1,&local_48,&local_58);
  uVar14 = uVar13;
  if (0 < local_48.ArrayNum) {
    do {
      pIVar7 = IFileManager::Get();
      uVar12 = (uint)uVar13;
      pcVar2 = *(code **)((longlong)*pIVar7 + 0x38);
      uVar9 = 0;
      if ((int)uVar12 < local_48.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if (uVar9 == 0) {
        in_stack_ffffffffffffff98 = (ulonglong)(int)uVar12;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      if (*(int *)(local_48.AllocatorInstance.Data + uVar14 + 8) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)(local_48.AllocatorInstance.Data + uVar14);
      }
      in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
      cVar5 = (*pcVar2)(pIVar7,pwVar11,0,0,in_stack_ffffffffffffff98);
      if (cVar5 == '\0') {
        uVar9 = 0;
        if ((int)uVar12 < local_48.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        lVar10 = (longlong)(int)uVar12;
        iVar1 = *(int *)(local_48.AllocatorInstance.Data + lVar10 * 0x10 + 8);
        FVar8.Data = local_48.AllocatorInstance.Data;
        goto LAB_142d1e3bf;
      }
      FFeedbackContext::UpdateProgress(param_3,uVar12,local_58.ArrayNum + local_48.ArrayNum);
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 0x10;
    } while ((int)(uVar12 + 1) < local_48.ArrayNum);
  }
  uVar13 = 0;
  uVar14 = uVar13;
  if (0 < local_58.ArrayNum) {
    do {
      pIVar7 = IFileManager::Get();
      uVar12 = (uint)uVar13;
      pcVar2 = *(code **)((longlong)*pIVar7 + 0x68);
      uVar9 = 0;
      if ((int)uVar12 < local_58.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(int *)(local_58.AllocatorInstance.Data + uVar14 + 8) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)(local_58.AllocatorInstance.Data + uVar14);
      }
      cVar5 = (*pcVar2)(pIVar7,pwVar11,0,1);
      if (cVar5 == '\0') {
        uVar9 = 0;
        if ((int)uVar12 < local_58.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        lVar10 = (longlong)(int)uVar12;
        iVar1 = *(int *)(local_58.AllocatorInstance.Data + lVar10 * 0x10 + 8);
        FVar8.Data = local_58.AllocatorInstance.Data;
LAB_142d1e3bf:
        iVar15 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar15 = 0;
        }
        ::FString::AssignRange(param_2,*(wchar_t **)(FVar8.Data + lVar10 * 0x10),iVar15);
        bVar3 = false;
        goto LAB_142d1e2f5;
      }
      FFeedbackContext::UpdateProgress
                (param_3,local_48.ArrayNum + uVar12,local_58.ArrayNum + local_48.ArrayNum);
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 0x10;
    } while ((int)(uVar12 + 1) < local_58.ArrayNum);
  }
  bVar3 = true;
LAB_142d1e2f5:
  FFeedbackContext::EndSlowTask(param_3);
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar3;
}

// CompileGameProject @ 142d1e3e0

bool __thiscall
FDesktopPlatformBase::CompileGameProject
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2,FFeedbackContext *param_3,
          Type *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  FModuleManager *this_00;
  IFileManager *pIVar3;
  FText *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  Type local_res8 [2];
  FString local_58;
  FString local_48;
  FText local_38;
  
  this_00 = FModuleManager::Get();
  FGenericPlatformMisc::GetUBTPlatform();
  FModuleManager::GetUBTConfiguration();
  ::FString::PrintfImpl(&local_58,L"%s %s");
  if ((param_2->Data).ArrayNum < 2) {
    ::FString::ConcatCF(&local_48,L"UnrealEditor ",&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
    local_58.Data.ArrayMax = local_48.Data.ArrayMax;
  }
  else {
    pIVar3 = IFileManager::Get();
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar3 + 0x100))(pIVar3,&local_38,pwVar6);
    ::FString::PrintfImpl(&local_48,L" -Project=\"%s\" -TargetType=Editor");
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
  }
  ::FString::AppendChars(&local_58," -Progress -NoEngineChanges -NoHotReloadFromIDE",0x2f);
  pcVar1 = *(code **)(this->_padding_ + 0x120);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"DesktopPlatform",L"CompilingProject",L"Compiling project...");
  uVar2 = (*pcVar1)(this,pFVar4,param_1,&local_58,param_3,local_res8);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (param_4 != (Type *)0x0) {
    *param_4 = local_res8[0];
  }
  FModuleManager::ResetModulePathsCache(this_00);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// EnumerateLauncherEngineInstallations @ 142d1f340

void __thiscall
FDesktopPlatformBase::EnumerateLauncherEngineInstallations
          (FDesktopPlatformBase *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  void *_Src;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar4
  ;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  undefined1 local_98 [16];
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  ReadLauncherInstallationList(this);
  local_88 = &this->LauncherInstallationList;
  iVar2 = *(int *)&(this->LauncherInstallationList).field_0x28;
  local_78 = &(this->LauncherInstallationList).field_0x10;
  iVar8 = 0;
  uVar6 = 1;
  local_68 = 0;
  iStack_6c = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)&(this->LauncherInstallationList).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)local_78;
    }
    uVar3 = *puVar9;
    local_68 = 0;
    iVar8 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)iVar8;
      local_68 = local_68 + 0x20;
      iVar8 = iVar8 + 1;
      iStack_6c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_142d1f3e9;
      uVar3 = puVar9[lVar7 + 1];
    }
    uVar6 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_6c = (int)lVar7 + -1 + local_68;
    if (iVar2 < iStack_6c) {
      iStack_6c = iVar2;
    }
  }
LAB_142d1f3e9:
  uStack_80 = CONCAT44(uVar6,iVar8);
  uStack_70 = 0xffffffff;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._padding_ = uStack_80;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  iStack_64 = iStack_6c;
  local_58 = local_88;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar2) {
    do {
      iVar2 = TStack_50.CurrentBitIndex;
      pTVar4 = local_58;
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_4_ =
           *(int *)(*(longlong *)local_58 + 8 + (longlong)TStack_50.CurrentBitIndex * 0x28);
      lVar7 = (longlong)(int)local_98._8_4_;
      _Src = *(void **)(*(longlong *)local_58 + (longlong)TStack_50.CurrentBitIndex * 0x28);
      if (local_98._8_4_ == 0) {
        local_98._12_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_98._8_4_,0,(ForAnyElementType *)local_98,local_98._8_4_,
                   (int *)(local_98 + 0xc));
        memcpy((void *)local_98._0_8_,_Src,lVar7 * 2);
      }
      bVar5 = ::FString::RemoveFromStart((FString *)local_98,L"UE_",3,CaseSensitive);
      if (bVar5) {
        local_88 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    *)local_98;
        uStack_80 = *(longlong *)pTVar4 + ((longlong)iVar2 * 5 + 2) * 8;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)param_1,(TPairInitializer<FString_const_&,FString_const_&> *)&stack0x00000008,
                   (bool *)&local_88);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// EnumerateLauncherSampleInstallations @ 142d1f550

void __thiscall
FDesktopPlatformBase::EnumerateLauncherSampleInstallations
          (FDesktopPlatformBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  void *_Src;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar6
  ;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  FString local_98;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  ReadLauncherInstallationList(this);
  local_88 = &this->LauncherInstallationList;
  iVar8 = *(int *)&(this->LauncherInstallationList).field_0x28;
  local_78 = &(this->LauncherInstallationList).field_0x10;
  iStack_80 = 0;
  uStack_7c = 1;
  local_68 = 0;
  iStack_6c = 0;
  if (iVar8 != 0) {
    puVar10 = *(uint **)&(this->LauncherInstallationList).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)local_78;
    }
    uVar3 = *puVar10;
    local_68 = 0;
    iStack_80 = 0;
    while (uVar3 == 0) {
      lVar9 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_142d1f5fe;
      uVar3 = puVar10[lVar9 + 1];
    }
    uStack_7c = -uVar3 & uVar3;
    uVar2 = (ulonglong)uStack_7c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_6c = (int)lVar9 + -1 + local_68;
    if (iVar8 < iStack_6c) {
      iStack_6c = iVar8;
    }
  }
LAB_142d1f5fe:
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  iStack_64 = iStack_6c;
  local_58 = local_88;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar8) {
    do {
      iVar8 = TStack_50.CurrentBitIndex;
      pTVar6 = local_58;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum =
           *(int *)(*(longlong *)local_58 + 8 + (longlong)TStack_50.CurrentBitIndex * 0x28);
      lVar9 = (longlong)local_98.Data.ArrayNum;
      _Src = *(void **)(*(longlong *)local_58 + (longlong)TStack_50.CurrentBitIndex * 0x28);
      if (local_98.Data.ArrayNum == 0) {
        local_98.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                   local_98.Data.ArrayNum,&local_98.Data.ArrayMax);
        memcpy(local_98.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
      }
      bVar7 = ::FString::StartsWith(&local_98,L"UE_",3,CaseSensitive);
      if (!bVar7) {
        pFVar1 = (FScriptContainerElement *)(*(longlong *)pTVar6 + ((longlong)iVar8 * 5 + 2) * 8);
        pFVar4 = (param_1->AllocatorInstance).Data;
        if (((pFVar4 <= pFVar1) && (pFVar1 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10),
                           (FString *)pFVar1);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// EnumerateLauncherSampleProjects @ 142d1f7d0

void __thiscall
FDesktopPlatformBase::EnumerateLauncherSampleProjects
          (FDesktopPlatformBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  void *_Src;
  bool bVar3;
  int iVar4;
  IFileManager *pIVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  FString *pFVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString *local_48;
  undefined8 local_40;
  FString local_38;
  
  uVar7 = 0;
  local_48 = (FString *)0x0;
  local_40 = 0;
  (**(code **)(this->_padding_ + 0x58))(this,&local_48);
  uVar10 = uVar7;
  if (0 < (int)local_40) {
    do {
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      pIVar5 = IFileManager::Get();
      uVar8 = (uint)uVar7;
      pcVar2 = *(code **)((longlong)*pIVar5 + 0x80);
      uVar6 = 0;
      if ((int)uVar8 < (int)local_40) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = *(int *)((longlong)&(local_48->Data).ArrayNum + uVar10);
      _Src = *(void **)((longlong)&(local_48->Data).AllocatorInstance.Data + uVar10);
      uVar6 = (*(int *)((longlong)&(local_48->Data).ArrayNum + uVar10) == 0) + 0xb + iVar1;
      local_38.Data.ArrayNum = iVar1;
      if ((int)uVar6 < iVar1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      pFVar11 = &local_38;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar6,0,(ForAnyElementType *)pFVar11,iVar1,&local_38.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
      ::FString::PathAppend(&local_38,L"*.uproject",10);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar9.Data = local_38.Data.AllocatorInstance.Data;
      }
      (*pcVar2)(pIVar5,&local_58,FVar9.Data,1,(ulonglong)pFVar11 & 0xffffffffffffff00);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((param_1 == &local_58) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = local_58.ArrayNum;
      iVar4 = 0;
      if (local_58.ArrayNum != 0) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,local_58.ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        ConstructItems<FString,FString,int>
                  ((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10,
                   (FString *)local_58.AllocatorInstance.Data,iVar1);
        iVar4 = local_58.ArrayNum;
      }
      DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,iVar4);
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      uVar7 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x10;
    } while ((int)(uVar8 + 1) < (int)local_40);
  }
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// EnumerateProjectsKnownByEngine @ 142d1fa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDesktopPlatformBase::EnumerateProjectsKnownByEngine
          (FDesktopPlatformBase *this,FString *param_1,bool param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FString *pFVar10;
  size_t sVar11;
  FConfigSection *pFVar12;
  FName *pFVar13;
  IFileManager *pIVar14;
  FUProjectDictionary *this_00;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  undefined8 uVar18;
  FConfigSection *pFVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  FConfigSection *this_01;
  undefined1 auStackY_488 [32];
  uint local_434;
  FScriptContainerElement *local_430;
  undefined8 local_428;
  uint local_420;
  TArray<FString,TSizedDefaultAllocator<32>_> local_418;
  TArray<FString,TSizedDefaultAllocator<32>_> local_408;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3f8;
  uint local_3e8;
  FString *local_3e0;
  undefined8 local_3d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3d0;
  longlong local_3c0;
  longlong local_3b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3b0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3a0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_390;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_380;
  FString local_370;
  FString *local_360;
  undefined8 local_358;
  uint local_350;
  longlong local_348;
  longlong local_340;
  FString local_338;
  FString local_328;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_318;
  FDesktopPlatformBase *local_310;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_308;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2f8;
  FString local_2e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2d8;
  <lambda_1> local_2c8;
  FString local_2c0;
  FName local_2b0;
  FName local_2a8;
  void *local_2a0 [2];
  FString local_290;
  FString local_280;
  FString local_270;
  FConfigFile local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.Data.ArrayNum = 0;
  local_2e8.Data.ArrayMax = 0;
  local_318 = param_3;
  local_310 = this;
  cVar4 = (**(code **)(this->_padding_ + 0x68))(this,param_1,&local_2e8);
  if (cVar4 == '\0') {
    bVar5 = false;
  }
  else {
    (**(code **)(this->_padding_ + 0x90))(this,&local_430);
    iVar9 = (int)local_428 + -1;
    if ((int)local_428 == 0) {
      iVar9 = 0;
    }
    if (iVar9 == 0) {
      bVar5 = false;
    }
    else {
      local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_418.ArrayNum = 0;
      local_418.ArrayMax = 0;
      pFVar10 = (FString *)(**(code **)(this->_padding_ + 0x160))(this,local_2a0);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(&local_418,pFVar10);
      if (local_2a0[0] != (void *)0x0) {
        FMemory::Free(local_2a0[0]);
      }
      if ((4 < (byte)LogDesktopPlatform._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform),
         4 < (byte)LogDesktopPlatform._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
      }
      FConfigFile::FConfigFile(&local_258);
      pFVar10 = FPaths::GeneratedConfigDir(&local_290);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      pFVar16 = (FScriptContainerElement *)L"";
      if ((int)local_428 != 0) {
        pFVar16 = local_430;
      }
      bVar5 = FConfigCacheIni::LoadExternalIniFile
                        (&local_258,L"EditorSettings",(wchar_t *)0x0,(wchar_t *)pFVar16,false,
                         (wchar_t *)0x0,false,false,true,pwVar15);
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      pFVar16 = local_430;
      if (!bVar5) {
        local_430 = (FScriptContainerElement *)0x0;
        local_428 = 0;
        GetUserDir(this,&local_2c0,param_1);
        if (local_2c0.Data.ArrayNum < 2) {
          local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3d0.ArrayNum = 0;
          local_3d0.ArrayMax = 0;
          if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,"Windows",7,Yes);
          local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar25 = (0xe - (uint)(local_2c0.Data.ArrayNum != 0)) + local_2c0.Data.ArrayNum;
          if ((int)uVar25 < local_2c0.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
          }
          local_380.ArrayNum = local_2c0.Data.ArrayNum;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar25,0,&local_380.AllocatorInstance,local_2c0.Data.ArrayNum,
                     &local_380.ArrayMax);
          if (local_2c0.Data.ArrayNum != 0) {
            memcpy(local_380.AllocatorInstance.Data,local_2c0.Data.AllocatorInstance.Data,
                   (longlong)local_2c0.Data.ArrayNum * 2);
          }
          ::FString::PathAppend((FString *)&local_380,L"Saved/Config",0xc);
          sVar11 = wcslen(local_168.Ptr);
          iVar9 = (int)sVar11;
          if ((local_380.ArrayNum != 0) || (iVar7 = 2, iVar9 == -1)) {
            iVar7 = 1;
          }
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_3d0,&local_380,iVar9 + iVar7);
          ::FString::PathAppend((FString *)&local_3d0,local_168.Ptr,iVar9);
          if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_380.AllocatorInstance.Data);
          }
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
          if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
          }
        }
        if (local_430 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_430);
        }
        local_430 = local_3d0.AllocatorInstance.Data;
        local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_428._0_4_ = local_3d0.ArrayNum;
        local_428._4_4_ = local_3d0.ArrayMax;
        local_3d0.ArrayNum = 0;
        local_3d0.ArrayMax = 0;
        if (4 < (byte)LogDesktopPlatform._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
        }
        pFVar10 = FPaths::GeneratedConfigDir(&local_280);
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        pFVar24 = (FScriptContainerElement *)L"";
        if ((int)local_428 != 0) {
          pFVar24 = local_430;
        }
        FConfigCacheIni::LoadExternalIniFile
                  (&local_258,L"EditorSettings",(wchar_t *)0x0,(wchar_t *)pFVar24,false,
                   (wchar_t *)0x0,false,false,true,pwVar15);
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar16);
        }
      }
      pFVar19 = (FConfigSection *)0x0;
      ::FString::FString(&local_338,L"/Script/UnrealEd.EditorSettings");
      AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      iVar9 = local_338.Data.ArrayNum;
      FVar17.Data = (FScriptContainerElement *)L"";
      if (iVar9 != 0) {
        FVar17.Data = local_338.Data.AllocatorInstance.Data;
      }
      iVar7 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar7 = 0;
      }
      uVar25 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar17.Data);
      if ((int)local_258._padding_ != local_258._padding_._4_4_) {
        plVar26 = &local_258._padding_;
        if ((longlong *)local_258._padding_ != (longlong *)0x0) {
          plVar26 = (longlong *)local_258._padding_;
        }
        iVar9 = *(int *)((longlong)plVar26 + (ulonglong)((int)local_258._padding_ - 1U & uVar25) * 4
                        );
        uVar18 = local_338.Data._8_8_;
        lVar20 = local_258._padding_;
        while (iVar9 != -1) {
          lVar23 = (longlong)iVar9 * 0x110;
          iVar7 = *(int *)(lVar20 + 8 + lVar23);
          if (iVar7 == (int)uVar18) {
            if (1 < iVar7) {
              iVar7 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)(lVar20 + lVar23),
                                 (wchar_t *)local_338.Data.AllocatorInstance.Data);
              bVar5 = iVar7 == 0;
              lVar20 = local_258._padding_;
              uVar18 = local_338.Data._8_8_;
              goto LAB_142d1fefb;
            }
LAB_142d1ff10:
            pFVar12 = (FConfigSection *)(lVar20 + lVar23);
            if (iVar9 != -1) goto LAB_142d1ff1c;
            break;
          }
          bVar5 = iVar7 + (int)uVar18 == 1;
LAB_142d1fefb:
          if (bVar5) goto LAB_142d1ff10;
          iVar9 = *(int *)(lVar20 + 0x108 + lVar23);
        }
      }
      pFVar12 = pFVar19;
LAB_142d1ff1c:
      this_01 = (FConfigSection *)&pFVar12->_padding_;
      if (pFVar12 == (FConfigSection *)0x0) {
        this_01 = pFVar19;
      }
      ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      if (this_01 == (FConfigSection *)0x0) {
        pFVar10 = FPaths::GeneratedConfigDir(&local_270);
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        pFVar16 = (FScriptContainerElement *)L"";
        if ((int)local_428 != 0) {
          pFVar16 = local_430;
        }
        FConfigCacheIni::LoadExternalIniFile
                  (&local_258,L"EditorGameAgnostic",(wchar_t *)0x0,(wchar_t *)pFVar16,false,
                   (wchar_t *)0x0,false,false,true,pwVar15);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_328,L"/Script/UnrealEd.EditorGameAgnosticSettings");
        AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
        iVar9 = local_328.Data.ArrayNum + -1;
        FVar17.Data = local_328.Data.AllocatorInstance.Data;
        if (local_328.Data.ArrayNum == 0) {
          iVar9 = 0;
          FVar17.Data = (FScriptContainerElement *)L"";
        }
        uVar25 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar17.Data);
        if ((int)local_258._padding_ != local_258._padding_._4_4_) {
          plVar26 = &local_258._padding_;
          if ((longlong *)local_258._padding_ != (longlong *)0x0) {
            plVar26 = (longlong *)local_258._padding_;
          }
          iVar9 = *(int *)((longlong)plVar26 +
                          (ulonglong)((int)local_258._padding_ - 1U & uVar25) * 4);
          uVar18 = local_328.Data._8_8_;
          lVar20 = local_258._padding_;
          while (iVar9 != -1) {
            lVar23 = (longlong)iVar9 * 0x110;
            iVar7 = *(int *)(lVar20 + 8 + lVar23);
            if (iVar7 == (int)uVar18) {
              if (1 < iVar7) {
                iVar7 = FGenericPlatformStricmp::Stricmp
                                  (*(wchar_t **)(lVar20 + lVar23),
                                   (wchar_t *)local_328.Data.AllocatorInstance.Data);
                bVar5 = iVar7 == 0;
                lVar20 = local_258._padding_;
                uVar18 = local_328.Data._8_8_;
                goto LAB_142d2008b;
              }
LAB_142d200a0:
              pFVar12 = (FConfigSection *)(lVar20 + lVar23);
              if (iVar9 != -1) goto LAB_142d200ac;
              break;
            }
            bVar5 = iVar7 + (int)uVar18 == 1;
LAB_142d2008b:
            if (bVar5) goto LAB_142d200a0;
            iVar9 = *(int *)(lVar20 + 0x108 + lVar23);
          }
        }
        pFVar12 = pFVar19;
LAB_142d200ac:
        ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
        this_01 = (FConfigSection *)&pFVar12->_padding_;
        if (pFVar12 == (FConfigSection *)0x0) {
          this_01 = pFVar19;
        }
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
      }
      AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if (((int)local_258._padding_ == local_258._padding_._4_4_) &&
         (4 < (byte)LogDesktopPlatform._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
      }
      if (this_01 != (FConfigSection *)0x0) {
        if (4 < (byte)LogDesktopPlatform._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
        }
        local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_408.ArrayNum = 0;
        local_408.ArrayMax = 0;
        pFVar13 = ::FName::FName(&local_2b0,L"CreatedProjectPaths");
        FConfigSection::MultiFind<TSizedDefaultAllocator<32>_>(this_01,*pFVar13,&local_408,false);
        if (0 < local_408.ArrayNum) {
          lVar20 = 0;
          do {
            uVar8 = (uint)pFVar19;
            uVar22 = ~uVar8 >> 0x1f;
            uVar25 = 0;
            if ((int)uVar8 < local_408.ArrayNum) {
              uVar25 = uVar22;
            }
            if ((uVar25 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            FPaths::NormalizeDirectoryName((FString *)(local_408.AllocatorInstance.Data + lVar20));
            if (4 < (byte)LogDesktopPlatform._0_1_) {
              uVar25 = 0;
              if ((int)uVar8 < local_408.ArrayNum) {
                uVar25 = uVar22;
              }
              if ((uVar25 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
            }
            uVar25 = 0;
            if ((int)uVar8 < local_408.ArrayNum) {
              uVar25 = uVar22;
            }
            if ((uVar25 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                      (&local_418,(FString *)(local_408.AllocatorInstance.Data + lVar20));
            pFVar19 = (FConfigSection *)(ulonglong)(uVar8 + 1);
            lVar20 = lVar20 + 0x10;
            this = local_310;
          } while ((int)(uVar8 + 1) < local_408.ArrayNum);
        }
        uVar25 = 0;
        local_3f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3f8.ArrayNum = 0;
        local_3f8.ArrayMax = 0;
        pFVar13 = ::FName::FName(&local_2a8,L"RecentlyOpenedProjectFiles");
        FConfigSection::MultiFind<TSizedDefaultAllocator<32>_>(this_01,*pFVar13,&local_3f8,false);
        if (0 < local_3f8.ArrayNum) {
          lVar20 = 0;
          do {
            uVar22 = ~uVar25 >> 0x1f;
            uVar8 = 0;
            if ((int)uVar25 < local_3f8.ArrayNum) {
              uVar8 = uVar22;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            FPaths::NormalizeFilename((FString *)(local_3f8.AllocatorInstance.Data + lVar20));
            if (4 < (byte)LogDesktopPlatform._0_1_) {
              uVar8 = 0;
              if ((int)uVar25 < local_3f8.ArrayNum) {
                uVar8 = uVar22;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)&PTR_u_Found_project___1509dc810,
                         (FLogCategoryBase *)&LogDesktopPlatform);
            }
            uVar8 = 0;
            if ((int)uVar25 < local_3f8.ArrayNum) {
              uVar8 = uVar22;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                      (param_3,(FString *)(local_3f8.AllocatorInstance.Data + lVar20));
            uVar25 = uVar25 + 1;
            lVar20 = lVar20 + 0x10;
          } while ((int)uVar25 < local_3f8.ArrayNum);
        }
        DestructItems<FString,int>((FString *)local_3f8.AllocatorInstance.Data,local_3f8.ArrayNum);
        if (local_3f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f8.AllocatorInstance.Data);
        }
        DestructItems<FString,int>((FString *)local_408.AllocatorInstance.Data,local_408.ArrayNum);
        if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_408.AllocatorInstance.Data);
        }
      }
      local_434 = 0;
      if (0 < local_418.ArrayNum) {
        local_3c0 = 0;
        local_3b8 = 0;
        do {
          lVar23 = local_3b8;
          lVar20 = local_3c0;
          local_3e0 = (FString *)0x0;
          local_3d8 = 0;
          pIVar14 = IFileManager::Get();
          local_3e8 = ~local_434 >> 0x1f;
          pcVar3 = *(code **)((longlong)*pIVar14 + 0x80);
          uVar25 = 0;
          if ((int)local_434 < local_418.ArrayNum) {
            uVar25 = local_3e8;
          }
          if ((uVar25 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pFVar16 = local_418.AllocatorInstance.Data + lVar23;
          local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar9 = *(int *)(pFVar16 + 8);
          pvVar2 = *(void **)pFVar16;
          uVar25 = (*(int *)(pFVar16 + 8) == 0) + 2 + iVar9;
          local_370.Data.ArrayNum = iVar9;
          if ((int)uVar25 < iVar9) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar25,0,(ForAnyElementType *)&local_370,iVar9,&local_370.Data.ArrayMax);
          if (iVar9 != 0) {
            memcpy(local_370.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar9 * 2);
          }
          ::FString::PathAppend(&local_370,L"*",1);
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_370.Data.ArrayNum != 0) {
            FVar17.Data = local_370.Data.AllocatorInstance.Data;
          }
          (*pcVar3)(pIVar14,&local_3e0,FVar17.Data);
          if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_370.Data.AllocatorInstance.Data);
          }
          local_420 = 0;
          local_348 = 0;
          if (0 < (int)local_3d8) {
            local_340 = 0;
            do {
              lVar20 = local_340;
              uVar25 = local_420;
              local_360 = (FString *)0x0;
              local_358 = 0;
              pIVar14 = IFileManager::Get();
              local_350 = ~uVar25 >> 0x1f;
              pcVar3 = *(code **)((longlong)*pIVar14 + 0x80);
              uVar8 = 0;
              if ((int)uVar25 < (int)local_3d8) {
                uVar8 = local_350;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              puVar28 = (undefined8 *)((longlong)&(local_3e0->Data).AllocatorInstance.Data + lVar20)
              ;
              uVar8 = 0;
              if ((int)local_434 < local_418.ArrayNum) {
                uVar8 = local_3e8;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              iVar7 = *(int *)(puVar28 + 1);
              pFVar16 = local_418.AllocatorInstance.Data + local_3b8;
              iVar9 = iVar7 + -1;
              if (iVar7 == 0) {
                iVar9 = 0;
              }
              if ((*(int *)(pFVar16 + 8) != 0) || (iVar7 = 2, iVar9 == -1)) {
                iVar7 = 1;
              }
              local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              iVar1 = *(int *)(pFVar16 + 8);
              pvVar2 = *(void **)pFVar16;
              local_3b0.ArrayNum = iVar1;
              if ((iVar1 == 0) && (iVar9 + iVar7 == 0)) {
                local_3b0.ArrayMax = 0;
              }
              else {
                uVar8 = iVar1 + iVar9 + iVar7;
                if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
                }
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,uVar8,0,&local_3b0.AllocatorInstance,iVar1,&local_3b0.ArrayMax);
                if (iVar1 != 0) {
                  memcpy(local_3b0.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
                }
              }
              ::FString::PathAppend((FString *)&local_3b0,(wchar_t *)*puVar28,iVar9);
              TArray<wchar_t,TSizedDefaultAllocator<32>_>::
              TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                        (&local_2d8,&local_3b0,0xc - (uint)(local_3b0.ArrayNum != 0));
              ::FString::PathAppend((FString *)&local_2d8,L"*.uproject",10);
              FVar17.Data = (FScriptContainerElement *)L"";
              if (local_2d8.ArrayNum != 0) {
                FVar17.Data = local_2d8.AllocatorInstance.Data;
              }
              (*pcVar3)(pIVar14,&local_360,FVar17.Data);
              if (local_2d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2d8.AllocatorInstance.Data);
              }
              if (local_3b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3b0.AllocatorInstance.Data);
              }
              uVar21 = 0;
              uVar27 = uVar21;
              if (0 < (int)local_358) {
                do {
                  uVar22 = (uint)uVar21;
                  uVar8 = 0;
                  uVar25 = uVar8;
                  if ((int)uVar22 < (int)local_358) {
                    uVar25 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar25 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    uVar6 = (*pcVar3)();
                    return (bool)uVar6;
                  }
                  pFVar10 = local_360;
                  uVar25 = uVar8;
                  if ((int)local_420 < (int)local_3d8) {
                    uVar25 = local_350;
                  }
                  if ((uVar25 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    uVar6 = (*pcVar3)();
                    return (bool)uVar6;
                  }
                  puVar28 = (undefined8 *)
                            ((longlong)&(local_3e0->Data).AllocatorInstance.Data + local_340);
                  uVar25 = uVar8;
                  if ((int)local_434 < local_418.ArrayNum) {
                    uVar25 = local_3e8;
                  }
                  if ((uVar25 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    uVar6 = (*pcVar3)();
                    return (bool)uVar6;
                  }
                  iVar9 = *(int *)(puVar28 + 1);
                  pFVar16 = local_418.AllocatorInstance.Data + local_3b8;
                  uVar25 = iVar9 - 1;
                  if (iVar9 == 0) {
                    uVar25 = uVar8;
                  }
                  if ((*(int *)(pFVar16 + 8) != 0) || (iVar9 = 2, uVar25 == 0xffffffff)) {
                    iVar9 = 1;
                  }
                  local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  iVar7 = *(int *)(pFVar16 + 8);
                  pvVar2 = *(void **)pFVar16;
                  local_3a0.ArrayNum = iVar7;
                  if ((iVar7 == 0) && (uVar25 + iVar9 == 0)) {
                    local_3a0.ArrayMax = 0;
                  }
                  else {
                    uVar8 = iVar7 + uVar25 + iVar9;
                    if ((int)uVar8 < iVar7) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
                    }
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,uVar8,0,&local_3a0.AllocatorInstance,iVar7,&local_3a0.ArrayMax);
                    if (iVar7 != 0) {
                      memcpy(local_3a0.AllocatorInstance.Data,pvVar2,(longlong)iVar7 * 2);
                    }
                  }
                  ::FString::PathAppend((FString *)&local_3a0,(wchar_t *)*puVar28,uVar25);
                  iVar7 = *(int *)((longlong)&(pFVar10->Data).ArrayNum + uVar27);
                  iVar9 = iVar7 + -1;
                  if (iVar7 == 0) {
                    iVar9 = 0;
                  }
                  if ((local_3a0.ArrayNum != 0) || (iVar7 = 2, iVar9 == -1)) {
                    iVar7 = 1;
                  }
                  TArray<wchar_t,TSizedDefaultAllocator<32>_>::
                  TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                            (&local_308,&local_3a0,iVar9 + iVar7);
                  ::FString::PathAppend
                            ((FString *)&local_308,
                             *(wchar_t **)
                              ((longlong)&(pFVar10->Data).AllocatorInstance.Data + uVar27),iVar9);
                  if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3a0.AllocatorInstance.Data);
                  }
                  if (4 < (byte)LogDesktopPlatform._0_1_) {
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
                  }
                  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
                            (local_318,(FString *)&local_308);
                  if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_308.AllocatorInstance.Data);
                  }
                  uVar21 = (ulonglong)(uVar22 + 1);
                  uVar27 = uVar27 + 0x10;
                  uVar25 = local_420;
                } while ((int)(uVar22 + 1) < (int)local_358);
              }
              DestructItems<FString,int>(local_360,(int)local_358);
              if (local_360 != (FString *)0x0) {
                FMemory::Free(local_360);
              }
              local_420 = uVar25 + 1;
              local_348 = local_348 + 1;
              local_340 = local_340 + 0x10;
              lVar20 = local_3c0;
            } while ((int)local_420 < (int)local_3d8);
          }
          DestructItems<FString,int>(local_3e0,(int)local_3d8);
          if (local_3e0 != (FString *)0x0) {
            FMemory::Free(local_3e0);
          }
          local_434 = local_434 + 1;
          local_3b8 = local_3b8 + 0x10;
          local_3c0 = lVar20 + 1;
          param_3 = local_318;
          this = local_310;
        } while ((int)local_434 < local_418.ArrayNum);
      }
      uVar25 = 0;
      if (4 < (byte)LogDesktopPlatform._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
      }
      this_00 = GetCachedProjectDictionary(this,&local_2e8);
      if (param_2) {
        FUProjectDictionary::GetProjectPaths(this_00,&local_390);
        if (0 < local_390.ArrayNum) {
          lVar20 = 0;
          do {
            uVar22 = ~uVar25 >> 0x1f;
            uVar8 = 0;
            if ((int)uVar25 < local_390.ArrayNum) {
              uVar8 = uVar22;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            iVar9 = ::FString::Find((FString *)(local_390.AllocatorInstance.Data + lVar20),
                                    L"/Templates/",0xb,IgnoreCase,FromStart,-1);
            if (iVar9 == -1) {
              if (4 < (byte)LogDesktopPlatform._0_1_) {
                uVar8 = 0;
                if ((int)uVar25 < local_390.ArrayNum) {
                  uVar8 = uVar22;
                }
                if ((uVar8 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  uVar6 = (*pcVar3)();
                  return (bool)uVar6;
                }
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
              }
              uVar8 = 0;
              if ((int)uVar25 < local_390.ArrayNum) {
                uVar8 = uVar22;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                        (param_3,(FString *)(local_390.AllocatorInstance.Data + lVar20));
            }
            uVar25 = uVar25 + 1;
            lVar20 = lVar20 + 0x10;
          } while ((int)uVar25 < local_390.ArrayNum);
        }
        DestructItems<FString,int>((FString *)local_390.AllocatorInstance.Data,local_390.ArrayNum);
      }
      else {
        FUProjectDictionary::GetProjectPaths(this_00,&local_2f8);
        if (0 < local_2f8.ArrayNum) {
          do {
            uVar8 = 0;
            if ((int)uVar25 < local_2f8.ArrayNum) {
              uVar8 = ~uVar25 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            pFVar16 = (param_3->AllocatorInstance).Data;
            pFVar24 = local_2f8.AllocatorInstance.Data + (longlong)(int)uVar25 * 0x10;
            if (((pFVar16 <= pFVar24) && (pFVar24 < pFVar16 + (longlong)param_3->ArrayMax * 0x10))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            local_2c8.Item = (FString *)pFVar24;
            TArray<FString,TSizedDefaultAllocator<32>_>::
            RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                      (param_3,&local_2c8);
            uVar25 = uVar25 + 1;
          } while ((int)uVar25 < local_2f8.ArrayNum);
        }
        DestructItems<FString,int>((FString *)local_2f8.AllocatorInstance.Data,local_2f8.ArrayNum);
        local_390.AllocatorInstance.Data = local_2f8.AllocatorInstance.Data;
      }
      if (local_390.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.AllocatorInstance.Data);
      }
      bVar5 = true;
      FConfigFile::~FConfigFile(&local_258);
      DestructItems<FString,int>((FString *)local_418.AllocatorInstance.Data,local_418.ArrayNum);
      if (local_418.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.AllocatorInstance.Data);
      }
    }
    if (local_430 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_430);
    }
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GenerateProjectFiles @ 142d22380

bool __thiscall
FDesktopPlatformBase::GenerateProjectFiles
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2,FFeedbackContext *param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  FUProjectDictionary *pFVar6;
  IFileManager *pIVar7;
  FText *pFVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  int iVar11;
  FString local_48;
  FString local_38;
  FText local_28;
  
  ::FString::FString(&local_48,L" -projectfiles");
  if (1 < (param_2->Data).ArrayNum) {
    pFVar6 = GetCachedProjectDictionary(this,param_1);
    bVar3 = FUProjectDictionary::IsForeignProject(pFVar6,param_2);
    if (bVar3) {
      pFVar6 = GetCachedProjectDictionary(this,param_1);
      bVar3 = FUProjectDictionary::IsForeignProject(pFVar6,param_2);
      if (bVar3) {
        pIVar7 = IFileManager::Get();
        if ((param_2->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar7 + 0x100))(pIVar7,&local_28,pwVar10);
        ::FString::PrintfImpl(&local_38,L" -project=\"%s\"");
        iVar11 = local_38.Data.ArrayNum + -1;
        if (local_38.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        ::FString::AppendChars(&local_48,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar11);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_28.TextData.Reference);
        }
        ::FString::AppendChars(&local_48,L" -game",6);
        cVar4 = (**(code **)(this->_padding_ + 0xb0))(this,param_1);
        pwVar10 = L" -engine";
        if (cVar4 == '\0') {
          pwVar10 = L" -rocket";
        }
        ::FString::AppendChars(&local_48,pwVar10,8);
      }
    }
  }
  ::FString::AppendChars(&local_48,L" -progress",10);
  pFVar2 = param_4;
  if (1 < (param_4->Data).ArrayNum) {
    ::FString::PrintfImpl(&local_38,L" -log=\"%s\"");
    iVar11 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar11);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"DesktopPlatform",L"GeneratingProjectFiles",
                      L"Generating project files...");
  FFeedbackContext::BeginSlowTask(param_3,pFVar8,true,true);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pFVar9 = GetUnrealBuildToolExecutableFilename(this,(FString *)&local_28,param_1);
  bVar3 = FPaths::FileExists(pFVar9);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_28.TextData.Reference);
  }
  if (!bVar3) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"DesktopPlatform",L"BuildingUBT",L"Building UnrealBuildTool...");
    FFeedbackContext::StatusUpdate(param_3,0,1,pFVar8);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    uVar5 = BuildUnrealBuildTool(this,param_1,(FOutputDevice *)param_3);
    if (!(bool)uVar5) goto LAB_142d22684;
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"DesktopPlatform",L"GeneratingProjectFiles",
                      L"Generating project files...");
  FFeedbackContext::StatusUpdate(param_3,0,1,pFVar8);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"DesktopPlatform",L"GeneratingProjectFiles",
                      L"Generating project files...");
  uVar5 = (**(code **)(this->_padding_ + 0x120))(this,pFVar8,param_1,&local_48,param_3,&param_4);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
LAB_142d22684:
  FFeedbackContext::EndSlowTask(param_3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (bool)uVar5;
}

// GetCachedProjectDictionary @ 142d228a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUProjectDictionary * __thiscall
FDesktopPlatformBase::GetCachedProjectDictionary(FDesktopPlatformBase *this,FString *param_1)

{
  FScriptContainerElement *_Src;
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  FUProjectDictionary *pFVar4;
  longlong lVar5;
  FUProjectDictionary *pFVar6;
  undefined1 auStackY_118 [32];
  FString local_d8;
  TPairInitializer<FString_const_&,FUProjectDictionary_&&> local_c8;
  FUProjectDictionary *local_b8;
  undefined1 local_a8 [96];
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_d8.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar5 = (longlong)local_d8.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_d8.Data.ArrayNum == 0) {
    local_d8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)&local_d8,local_d8.Data.ArrayNum,
               &local_d8.Data.ArrayMax);
    memcpy(local_d8.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  FPaths::NormalizeDirectoryName(&local_d8);
  iVar3 = local_d8.Data.ArrayNum + -1;
  FVar1.Data = local_d8.Data.AllocatorInstance.Data;
  if (local_d8.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
  iVar3 = TSet<TTuple<FString,FUProjectDictionary>,TDefaultMapHashableKeyFuncs<FString,FUProjectDictionary,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FUProjectDictionary>,TDefaultMapHashableKeyFuncs<FString,FUProjectDictionary,0>,FDefaultSetAllocator>
                      *)&this->CachedProjectDictionaries,uVar2,&local_d8);
  pFVar4 = (FUProjectDictionary *)0x0;
  if (iVar3 != -1) {
    pFVar4 = (FUProjectDictionary *)
             ((longlong)iVar3 * 0x88 + *(longlong *)&this->CachedProjectDictionaries);
  }
  pFVar6 = (FUProjectDictionary *)&pFVar4->ProjectRootDirs;
  if (pFVar4 == (FUProjectDictionary *)0x0) {
    pFVar6 = (FUProjectDictionary *)0x0;
  }
  if (pFVar6 == (FUProjectDictionary *)0x0) {
    local_c8.Value = (FUProjectDictionary *)param_1;
    local_b8 = FUProjectDictionary::FUProjectDictionary((FUProjectDictionary *)local_a8,param_1);
    TSet<TTuple<FString,FUProjectDictionary>,TDefaultMapHashableKeyFuncs<FString,FUProjectDictionary,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FUProjectDictionary_&&>_>
              ((TSet<TTuple<FString,FUProjectDictionary>,TDefaultMapHashableKeyFuncs<FString,FUProjectDictionary,0>,FDefaultSetAllocator>
                *)&this->CachedProjectDictionaries,&local_c8,(bool *)&local_c8.Value);
    local_40 = 0;
    pFVar6 = (FUProjectDictionary *)
             (*(longlong *)&this->CachedProjectDictionaries +
             (longlong)(int)local_c8.Key * 0x88 + 0x10);
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_a8 + 0x20));
    DestructItems<FString,int>((FString *)local_a8._16_8_,local_a8._24_4_);
    if ((FScriptContainerElement *)local_a8._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._16_8_);
    }
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return pFVar6;
}

// GetCurrentEngineIdentifier @ 142d22a50

FString * __thiscall
FDesktopPlatformBase::GetCurrentEngineIdentifier
          (FDesktopPlatformBase *this,FString *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  wchar_t *pwVar5;
  bool bVar6;
  int iVar7;
  FString local_28;
  
  iVar1 = (this->CurrentEngineIdentifier).Data.ArrayNum;
  bVar6 = false;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  if (iVar7 == 0) {
    pcVar2 = *(code **)(this->_padding_ + 0x70);
    pwVar5 = FGenericPlatformMisc::RootDir();
    ::FString::FString(&local_28,pwVar5);
    bVar6 = true;
    cVar4 = (*pcVar2)(this,&local_28,&this->CurrentEngineIdentifier);
    if (cVar4 == '\0') {
      bVar3 = true;
      goto LAB_142d22ab8;
    }
  }
  bVar3 = false;
LAB_142d22ab8:
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    ::FString::Empty(&this->CurrentEngineIdentifier);
  }
  ::FString::FString(__return_storage_ptr__,&this->CurrentEngineIdentifier);
  return __return_storage_ptr__;
}

// GetDefaultEngineIdentifier @ 142d22b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall
FDesktopPlatformBase::GetDefaultEngineIdentifier(FDesktopPlatformBase *this,FString *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  void *_Src;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint *puVar9;
  undefined1 auStackY_128 [32];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined1 *local_c0;
  int iStack_b8;
  uint uStack_b4;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  undefined1 local_88 [32];
  uint *local_68;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  iVar8 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  (**(code **)(this->_padding_ + 0x48))();
  if (0 < local_88._8_4_ - local_54) {
    uVar5 = 1;
    local_a0 = 0;
    iStack_a4 = local_a0;
    if (local_60 != 0) {
      puVar9 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar9 = local_68;
      }
      uVar3 = *puVar9;
      local_a0 = 0;
      iVar8 = 0;
      while (uVar3 == 0) {
        lVar6 = (longlong)iVar8;
        local_a0 = local_a0 + 0x20;
        iVar8 = iVar8 + 1;
        iStack_a4 = local_60;
        if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_142d22c0c;
        uVar3 = (puVar9 + 1)[lVar6];
      }
      uVar5 = -uVar3 & uVar3;
      uVar2 = (ulonglong)uVar5 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_a4 = (int)lVar6 + -1 + local_a0;
      if (local_60 < iStack_a4) {
        iStack_a4 = local_60;
      }
    }
LAB_142d22c0c:
    local_c0 = local_88;
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    iStack_9c = TStack_e0.CurrentBitIndex;
    TStack_e0._padding_ = CONCAT44(uVar5,iVar8);
    uStack_a8 = 0xffffffff;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    TStack_e0._28_4_ = TStack_e0.CurrentBitIndex;
    TStack_e0.BaseBitIndex = local_a0;
    iStack_b8 = iVar8;
    uStack_b4 = uVar5;
    local_b0 = TStack_e0.Array;
    TStack_e0.CurrentBitIndex = iStack_a4;
    ::FString::operator=(param_1,(FString *)(local_88._0_8_ + (longlong)iStack_a4 * 0x28));
    TStack_e0.UnvisitedBitMask = ~uVar5;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    if (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits) {
      do {
        lVar6 = (longlong)TStack_e0.CurrentBitIndex;
        cVar4 = (**(code **)(this->_padding_ + 0x80))
                          (this,(FScriptContainerElement *)(local_88._0_8_ + lVar6 * 0x28),param_1);
        if ((cVar4 != '\0') &&
           (pFVar7 = (FScriptContainerElement *)(local_88._0_8_ + lVar6 * 0x28),
           (FScriptContainerElement *)param_1 != pFVar7)) {
          iVar8 = *(int *)(pFVar7 + 8);
          piVar1 = &(param_1->Data).ArrayMax;
          _Src = *(void **)pFVar7;
          (param_1->Data).ArrayNum = iVar8;
          if ((iVar8 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar8,*piVar1,(ForAnyElementType *)param_1,iVar8,piVar1);
            if (iVar8 != 0) {
              memcpy((param_1->Data).AllocatorInstance.Data,_Src,(longlong)iVar8 * 2);
            }
          }
        }
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      } while (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits);
    }
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar8 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_54 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (uint *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return false;
}

// GetDefaultEngineRootDir @ 142d22e40

bool __thiscall
FDesktopPlatformBase::GetDefaultEngineRootDir(FDesktopPlatformBase *this,FString *param_1)

{
  char cVar1;
  bool bVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x78))(this,&local_18);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(this->_padding_ + 0x68))(this,&local_18,param_1);
    if (cVar1 != '\0') {
      bVar2 = true;
      goto LAB_142d22e86;
    }
  }
  bVar2 = false;
LAB_142d22e86:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return bVar2;
}

// GetDefaultProjectCreationPath @ 142d22fd0

FString * __thiscall
FDesktopPlatformBase::GetDefaultProjectCreationPath
          (FDesktopPlatformBase *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,L"Unreal Projects");
  pwVar1 = FWindowsPlatformProcess::UserDir();
  pFVar2 = ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFF(__return_storage_ptr__,pFVar2,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetEngineDescription @ 142d23040

FString * __thiscall
FDesktopPlatformBase::GetEngineDescription
          (FDesktopPlatformBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  void *_Src;
  char cVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  FString local_28;
  void *local_18;
  undefined8 local_10;
  
  cVar1 = (**(code **)(this->_padding_ + 0xa0))(this,param_1);
  if (cVar1 == '\0') {
    local_18 = (void *)0x0;
    local_10 = 0;
    cVar1 = (**(code **)(this->_padding_ + 0x68))(this,param_1,&local_18);
    _Src = local_18;
    if (cVar1 == '\0') {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
    }
    else {
      lVar3 = (longlong)(int)local_10;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = (int)local_10;
      if ((int)local_10 == 0) {
        local_28.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_10,0,(ForAnyElementType *)&local_28,(int)local_10,
                   &local_28.Data.ArrayMax);
        memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
      }
      FPaths::MakePlatformFilename(&local_28);
      cVar1 = (**(code **)(this->_padding_ + 0xb0))(this,&local_18);
      pwVar2 = L"Source build at %s";
      if (cVar1 == '\0') {
        pwVar2 = L"Binary build at %s";
      }
      ::FString::PrintfImpl(__return_storage_ptr__,pwVar2);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
  }
  else {
    ::FString::FString(__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetEngineIdentifierForProject @ 142d231a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FDesktopPlatformBase::GetEngineIdentifierForProject
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2)

{
  FJsonValue *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TSharedPtr<FJsonValue,1> *pTVar8;
  FString *pFVar9;
  size_t sVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *_Str;
  int iVar13;
  TReferenceControllerBase<1> *local_138;
  FString local_130;
  FString local_120;
  FEngineVersion local_110;
  FString local_f0;
  TSharedPtr<FJsonObject,1> local_e0;
  FString local_d0;
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  FJsonValue *local_88;
  TReferenceControllerBase<1> *local_80;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  
  ::FString::Empty(param_2);
  LoadProjectFile(this,&local_e0,param_1);
  if ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
       *)local_e0.Object ==
      (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
       *)0x0) {
    bVar2 = false;
    goto LAB_142d2366d;
  }
  _Str = L"";
  if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
        *)local_e0.Object ==
       (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
        *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uStack_b0 = 0x11;
  local_b8 = L"EngineAssociation";
  local_98._12_4_ = uStack_ac;
  local_98.Size = 0x11;
  local_98.DataPtr = L"EngineAssociation";
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(0x11,L"EngineAssociation");
  pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)local_e0.Object,uVar6,&local_98);
  if ((pTVar8 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (this_00 = pTVar8->Object, this_00 == (FJsonValue *)0x0)) {
    local_138 = (TReferenceControllerBase<1> *)0x0;
    local_38 = 0;
    uStack_30 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
LAB_142d2342d:
    bVar2 = false;
    FPaths::GetPath(&local_130,param_1);
    FPaths::NormalizeDirectoryName(&local_130);
    do {
      iVar7 = local_130.Data.ArrayNum;
      pFVar12 = local_130.Data.AllocatorInstance.Data + (longlong)iVar7 * 2;
      do {
        if (pFVar12 == local_130.Data.AllocatorInstance.Data) goto LAB_142d23483;
        pFVar12 = pFVar12 + -2;
      } while (*(short *)pFVar12 != 0x2f);
      iVar11 = (int)((longlong)pFVar12 - (longlong)local_130.Data.AllocatorInstance.Data >> 1);
      if (iVar11 == -1) {
LAB_142d23483:
        local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.Data.ArrayNum = 0;
        local_120.Data.ArrayMax = 0;
        if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)local_e0.Object ==
             (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        uStack_a0 = 0xd;
        local_a8 = L"EngineVersion";
        local_58._12_4_ = uStack_9c;
        local_58.Size = 0xd;
        local_58.DataPtr = L"EngineVersion";
        bVar5 = FJsonObject::TryGetStringField(local_e0.Object,&local_58,&local_120);
        if (bVar5) {
          iVar7 = local_120.Data.ArrayNum + -1;
          if (local_120.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          if (iVar7 < 1) goto LAB_142d23638;
          local_110._padding_._0_4_ = 0;
          local_110._padding_._4_2_ = 0;
          local_110._padding_._0_4_ = 0;
          local_110.Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_110.Branch.Data.ArrayNum = 0;
          local_110.Branch.Data.ArrayMax = 0;
          bVar5 = FEngineVersion::Parse(&local_120,&local_110);
          if ((bVar5) &&
             (bVar5 = FEngineVersionBase::HasChangelist((FEngineVersionBase *)&local_110), bVar5)) {
            bVar2 = true;
            pFVar9 = FEngineVersion::ToString(&local_110,&local_48,Minor);
            if ((pFVar9->Data).ArrayNum != 0) {
              _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            iVar7 = FGenericPlatformStricmp::Stricmp(_Str,L"4.0");
            if (iVar7 != 0) goto LAB_142d235e9;
            bVar5 = true;
          }
          else {
LAB_142d235e9:
            bVar5 = false;
          }
          if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (!bVar5) {
            if (local_110.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Branch.Data.AllocatorInstance.Data);
            }
            goto LAB_142d23638;
          }
          ::FString::operator=(param_2,L"4.0");
          if (local_110.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Branch.Data.AllocatorInstance.Data);
          }
          bVar2 = true;
        }
        else {
LAB_142d23638:
          bVar2 = false;
        }
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        goto LAB_142d23649;
      }
      iVar13 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar13 = 0;
      }
      ::FString::RemoveAt(&local_130,iVar11,iVar13 - iVar11,Default);
      cVar4 = (**(code **)(this->_padding_ + 0xc0))(this,&local_130);
    } while ((cVar4 == '\0') ||
            (cVar4 = (**(code **)(this->_padding_ + 0x70))(this,&local_130,param_2), cVar4 == '\0'))
    ;
    bVar2 = true;
LAB_142d23649:
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_138 = (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_138 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_138->SharedReferenceCount = (atomic<int>)((int)local_138->SharedReferenceCount + 1);
      UNLOCK();
      if (local_138 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_138->SharedReferenceCount = (atomic<int>)((int)local_138->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    local_88 = this_00;
    local_80 = local_138;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_138);
    if (this_00->Type != String) goto LAB_142d2342d;
    pFVar9 = FJsonValue::AsString(this_00,&local_78);
    ::FString::operator=(param_2,pFVar9);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    iVar11 = (param_2->Data).ArrayNum;
    bVar2 = false;
    iVar7 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar7 = 0;
    }
    if (iVar7 < 1) goto LAB_142d2342d;
    iVar7 = ::FString::Find(param_2,L"/",1,IgnoreCase,FromStart,-1);
    bVar5 = bVar2;
    if (iVar7 == -1) {
      ::FString::FString(&local_f0,"\\");
      bVar5 = true;
      if ((local_f0.Data.ArrayNum == 0) ||
         (_Str = (wchar_t *)local_f0.Data.AllocatorInstance.Data,
         local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        sVar10 = wcslen(_Str);
        iVar7 = ::FString::Find(param_2,_Str,(int)sVar10,IgnoreCase,FromStart,-1);
        if (iVar7 != -1) goto LAB_142d2337f;
        goto LAB_142d23386;
      }
    }
    else {
LAB_142d2337f:
      bVar2 = true;
      if (bVar5) {
LAB_142d23386:
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
    }
    if (bVar2) {
      pFVar9 = FPaths::GetPath(&local_68,param_1);
      FPaths::ConvertRelativePathToFull(&local_d0,pFVar9,param_2);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      cVar4 = (**(code **)(this->_padding_ + 0x70))(this,&local_d0,param_2);
      if (cVar4 != '\0') {
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        goto LAB_142d233f8;
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      bVar2 = false;
    }
    else {
LAB_142d233f8:
      bVar2 = true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_138);
LAB_142d2366d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// GetEngineIdentifierFromRootDir @ 142d236a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FDesktopPlatformBase::GetEngineIdentifierFromRootDir
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  longlong *plVar3;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  undefined1 auStackY_148 [32];
  FString local_108;
  undefined4 local_ec;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  longlong *local_c0;
  int iStack_b8;
  uint uStack_b4;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  undefined1 local_88 [32];
  uint *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  iVar6 = 0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  (**(code **)(this->_padding_ + 0x48))();
  local_108.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar5 = (longlong)local_108.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_108.Data.ArrayNum == 0) {
    local_108.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)&local_108,local_108.Data.ArrayNum
               ,&local_108.Data.ArrayMax);
    memcpy(local_108.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  FPaths::CollapseRelativeDirectories(&local_108,false);
  FPaths::NormalizeDirectoryName(&local_108);
  uStack_b4 = 1;
  local_a0 = 0;
  iStack_a4 = 0;
  if (local_60 != 0) {
    puVar7 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar7 = local_68;
    }
    uVar2 = *puVar7;
    local_a0 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)iVar6;
      local_a0 = local_a0 + 0x20;
      iVar6 = iVar6 + 1;
      iStack_a4 = local_60;
      if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar6) goto LAB_142d237ec;
      uVar2 = puVar7[lVar5 + 1];
    }
    uStack_b4 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_b4 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_a4 = (int)lVar5 + -1 + local_a0;
    if (local_60 < iStack_a4) {
      iStack_a4 = local_60;
    }
  }
LAB_142d237ec:
  local_e8 = (longlong *)local_88;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uStack_a8 = 0xffffffff;
  uStack_9c = local_ec;
  TStack_e0._padding_ = CONCAT44(uStack_b4,iVar6);
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._28_4_ = local_ec;
  TStack_e0.BaseBitIndex = local_a0;
  local_c0 = local_e8;
  iStack_b8 = iVar6;
  local_b0 = TStack_e0.Array;
  TStack_e0.CurrentBitIndex = iStack_a4;
  if (iStack_a4 < local_60) {
    do {
      plVar3 = local_e8;
      lVar5 = (longlong)TStack_e0.CurrentBitIndex * 0x28;
      iVar6 = *(int *)(*local_e8 + 0x18 + lVar5);
      if (iVar6 == local_108.Data.ArrayNum) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*local_e8 + 0x10 + lVar5),
                             (wchar_t *)local_108.Data.AllocatorInstance.Data);
          bVar8 = iVar6 == 0;
          goto LAB_142d2388d;
        }
LAB_142d2391e:
        ::FString::operator=(param_2,(FString *)(*plVar3 + lVar5));
        uVar4 = 1;
        goto LAB_142d238ce;
      }
      bVar8 = iVar6 + local_108.Data.ArrayNum == 1;
LAB_142d2388d:
      if (bVar8) goto LAB_142d2391e;
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    } while (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits);
  }
  uVar4 = (**(code **)(this->_padding_ + 0x40))(this,&local_108,param_2);
LAB_142d238ce:
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return (bool)uVar4;
}

// GetEngineRootDirFromIdentifier @ 142d23940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall
FDesktopPlatformBase::GetEngineRootDirFromIdentifier
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  undefined1 auStackY_118 [32];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined1 *local_c0;
  int iStack_b8;
  uint uStack_b4;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  undefined1 local_88 [32];
  uint *local_68;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  iVar5 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  (**(code **)(this->_padding_ + 0x48))();
  uStack_b4 = 1;
  local_a0 = iVar5;
  iStack_a4 = 0;
  if (local_60 != 0) {
    puVar6 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar6 = local_68;
    }
    uVar2 = *puVar6;
    local_a0 = 0;
    while (uVar2 == 0) {
      lVar4 = (longlong)iVar5;
      local_a0 = local_a0 + 0x20;
      iVar5 = iVar5 + 1;
      iStack_a4 = local_60;
      if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_142d23a1d;
      uVar2 = (puVar6 + 1)[lVar4];
    }
    uStack_b4 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_b4 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_a4 = (int)lVar4 + -1 + local_a0;
    if (local_60 < iStack_a4) {
      iStack_a4 = local_60;
    }
  }
LAB_142d23a1d:
  local_c0 = local_88;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uStack_a8 = 0xffffffff;
  iStack_9c = TStack_e0.CurrentBitIndex;
  TStack_e0._padding_ = CONCAT44(uStack_b4,iVar5);
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._28_4_ = TStack_e0.CurrentBitIndex;
  TStack_e0.BaseBitIndex = local_a0;
  iStack_b8 = iVar5;
  local_b0 = TStack_e0.Array;
  TStack_e0.CurrentBitIndex = iStack_a4;
  if (iStack_a4 < local_60) {
    do {
      lVar4 = (longlong)TStack_e0.CurrentBitIndex * 0x28;
      iVar5 = (param_1->Data).ArrayNum;
      iVar3 = *(int *)(local_88._0_8_ + lVar4 + 8);
      if (iVar3 == iVar5) {
        if (1 < iVar3) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(local_88._0_8_ + lVar4),
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar7 = iVar5 == 0;
          goto LAB_142d23ac9;
        }
LAB_142d23bc6:
        ::FString::operator=(param_2,(FString *)(local_88._0_8_ + lVar4 + 0x10));
        bVar7 = true;
        goto LAB_142d23af8;
      }
      bVar7 = iVar3 + iVar5 == 1;
LAB_142d23ac9:
      if (bVar7) goto LAB_142d23bc6;
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    } while (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits);
  }
  bVar7 = false;
LAB_142d23af8:
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar5 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_54 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (uint *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return bVar7;
}

// GetEngineSavedConfigDirectory @ 142d23bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDesktopPlatformBase::GetEngineSavedConfigDirectory
          (FDesktopPlatformBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  uint uVar1;
  undefined1 auStackY_1a8 [32];
  FString local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  GetUserDir(this,&local_158,param_1);
  if (local_158.Data.ArrayNum < 2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"Windows",7,Yes);
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar1 = (0xe - (uint)(local_158.Data.ArrayNum != 0)) + local_158.Data.ArrayNum;
    if ((int)uVar1 < local_158.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar1,0,(ForAnyElementType *)&local_168,local_158.Data.ArrayNum,
               &local_168.Data.ArrayMax);
    if (local_158.Data.ArrayNum != 0) {
      memcpy(local_168.Data.AllocatorInstance.Data,local_158.Data.AllocatorInstance.Data,
             (longlong)local_158.Data.ArrayNum * 2);
    }
    ::FString::PathAppend(&local_168,L"Saved/Config",0xc);
    ::operator/(__return_storage_ptr__,&local_168,local_148.Ptr);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetHordeAccessToken @ 142d23d60

bool __thiscall
FDesktopPlatformBase::GetHordeAccessToken
          (FDesktopPlatformBase *this,FString *param_1,EDesktopLoginInteractionLevel param_2,
          FFeedbackContext *param_3,FString *param_4,FDateTime *param_5,bool *param_6)

{
  ForAnyElementType _Src;
  FString *pFVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FWindowsPlatformMisc::GetEnvironmentVariable(&local_58,L"UE_HORDE_TOKEN");
  if (1 < local_58.Data.ArrayNum) {
    FWindowsPlatformMisc::GetEnvironmentVariable(&local_68,L"UE_HORDE_URL");
    pFVar1 = ::operator/(&local_38,param_1,L"");
    _Src.Data = local_68.Data.AllocatorInstance.Data;
    local_78.Data.ArrayNum = local_68.Data.ArrayNum;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar2 = (2 - (uint)(local_68.Data.ArrayNum != 0)) + local_68.Data.ArrayNum;
    if ((int)uVar2 < local_68.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar2,0,(ForAnyElementType *)&local_78,local_68.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    if (local_68.Data.ArrayNum != 0) {
      memcpy(local_78.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
    ::FString::PathAppend(&local_78,L"",0);
    iVar3 = (pFVar1->Data).ArrayNum;
    if (local_78.Data.ArrayNum == iVar3) {
      if (local_78.Data.ArrayNum < 2) {
        bVar4 = true;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_78.Data.AllocatorInstance.Data,
                           (wchar_t *)(pFVar1->Data).AllocatorInstance.Data);
        bVar4 = iVar3 == 0;
      }
    }
    else {
      bVar4 = local_78.Data.ArrayNum + iVar3 == 1;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      iVar3 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::AssignRange(param_4,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar3);
      param_5->Ticks = 0;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      bVar4 = true;
      goto LAB_142d23f5e;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl(&local_48,L" --HordeUrl=\"%s\"");
  pFVar1 = FPaths::RootDir(&local_38);
  bVar4 = GetOidcAccessTokenInternal(this,pFVar1,&local_48,param_2,param_3,param_4,param_5,param_6);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_142d23f5e:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetHordeAccessToken @ 142d23fa0

bool __thiscall
FDesktopPlatformBase::GetHordeAccessToken
          (FDesktopPlatformBase *this,FString *param_1,bool param_2,FFeedbackContext *param_3,
          FString *param_4,FDateTime *param_5,bool *param_6)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d23fb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x1b0))(this,param_1,!param_2 * '\x02');
  return (bool)uVar1;
}

// GetHordeUrl @ 142d23fc0

bool __thiscall
FDesktopPlatformBase::GetHordeUrl(FDesktopPlatformBase *this,FString *param_1,FString *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  FString local_58;
  FString local_48;
  undefined8 local_38 [2];
  
  if (this->bInitializedHordeServerUrl == false) {
    pFVar1 = &this->HordeServerUrlConfigSource;
    FWindowsPlatformMisc::GetEnvironmentVariable(&local_58,L"UE_HORDE_URL");
    if (local_58.Data.ArrayNum < 2) {
      bVar3 = FWindowsPlatformMisc::QueryRegKey
                        ((HKEY__ *)0xffffffff80000001,L"SOFTWARE\\Epic Games\\Horde",L"Url",
                         &local_58);
      if ((bVar3) && (1 < local_58.Data.ArrayNum)) {
        ::FString::operator=
                  (pFVar1,L"Windows registry \"HKEY_CURRENT_USER\\SOFTWARE\\Epic Games\\Horde\"");
        FVar4.Data = local_58.Data.AllocatorInstance.Data;
        iVar6 = local_58.Data.ArrayNum;
        iVar5 = local_58.Data.ArrayMax;
      }
      else {
        bVar3 = FWindowsPlatformMisc::QueryRegKey
                          ((HKEY__ *)&DAT_ffffffff80000002,L"SOFTWARE\\Epic Games\\Horde",L"Url",
                           &local_58);
        if ((bVar3) && (1 < local_58.Data.ArrayNum)) {
          ::FString::operator=
                    (pFVar1,L"Windows registry \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Epic Games\\Horde\"")
          ;
          FVar4.Data = local_58.Data.AllocatorInstance.Data;
          iVar6 = local_58.Data.ArrayNum;
          iVar5 = local_58.Data.ArrayMax;
        }
        else {
          bVar3 = FConfigCacheIni::GetString(GConfig,L"Horde",L"ServerUrl",&local_58,&GEngineIni);
          if (bVar3) {
            ::FString::PrintfImpl(&local_48,L"%s INI configuration");
            if (pFVar1 != &local_48) {
              pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
              if (pFVar2 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar2);
              }
              (pFVar1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
              (this->HordeServerUrlConfigSource).Data.ArrayNum = local_48.Data.ArrayNum;
              (this->HordeServerUrlConfigSource).Data.ArrayMax = local_48.Data.ArrayMax;
              local_48.Data.ArrayNum = 0;
              local_48.Data.ArrayMax = 0;
              local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            FVar4.Data = local_58.Data.AllocatorInstance.Data;
            iVar6 = local_58.Data.ArrayNum;
            iVar5 = local_58.Data.ArrayMax;
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
              FVar4.Data = local_58.Data.AllocatorInstance.Data;
              iVar6 = local_58.Data.ArrayNum;
              iVar5 = local_58.Data.ArrayMax;
            }
          }
          else {
            ::FString::operator=(pFVar1,L"Not found");
            FVar4.Data = (FScriptContainerElement *)0x0;
            iVar6 = 0;
            iVar5 = 0;
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
    else {
      ::FString::operator=(pFVar1,L"Environment variable \"UE_HORDE_URL\"");
      FVar4.Data = local_58.Data.AllocatorInstance.Data;
      iVar6 = local_58.Data.ArrayNum;
      iVar5 = local_58.Data.ArrayMax;
    }
    pFVar1 = &this->HordeServerUrl;
    if (pFVar1 != (FString *)local_38) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = FVar4.Data;
      FVar4.Data = (FScriptContainerElement *)0x0;
      (this->HordeServerUrl).Data.ArrayNum = iVar6;
      (this->HordeServerUrl).Data.ArrayMax = iVar5;
    }
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
    this->bInitializedHordeServerUrl = true;
  }
  iVar5 = (this->HordeServerUrl).Data.ArrayNum;
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  ::FString::AssignRange
            (param_1,(wchar_t *)(this->HordeServerUrl).Data.AllocatorInstance.Data,iVar6);
  if (param_2 != (FString *)0x0) {
    iVar5 = (this->HordeServerUrlConfigSource).Data.ArrayNum;
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (param_2,(wchar_t *)(this->HordeServerUrlConfigSource).Data.AllocatorInstance.Data,
               iVar6);
  }
  return 1 < (param_1->Data).ArrayNum;
}

// GetLegacyEngineSavedConfigDirectory @ 142d24260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDesktopPlatformBase::GetLegacyEngineSavedConfigDirectory
          (FDesktopPlatformBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  uint uVar1;
  undefined1 auStackY_1a8 [32];
  FString local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  GetUserDir(this,&local_158,param_1);
  if (local_158.Data.ArrayNum < 2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"Windows",7,Yes);
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar1 = (0xe - (uint)(local_158.Data.ArrayNum != 0)) + local_158.Data.ArrayNum;
    if ((int)uVar1 < local_158.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar1,0,(ForAnyElementType *)&local_168,local_158.Data.ArrayNum,
               &local_168.Data.ArrayMax);
    if (local_158.Data.ArrayNum != 0) {
      memcpy(local_168.Data.AllocatorInstance.Data,local_158.Data.AllocatorInstance.Data,
             (longlong)local_158.Data.ArrayNum * 2);
    }
    ::FString::PathAppend(&local_168,L"Saved/Config",0xc);
    ::operator/(__return_storage_ptr__,&local_168,local_148.Ptr);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOidcAccessToken @ 142d24520

bool __thiscall
FDesktopPlatformBase::GetOidcAccessToken
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2,FString *param_3,
          EDesktopLoginInteractionLevel param_4,FFeedbackContext *param_5,FString *param_6,
          FDateTime *param_7,bool *param_8)

{
  code *pcVar1;
  bool bVar2;
  IFileManager *pIVar3;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  ::FString::PrintfImpl(&local_58,L" --Service=\"%s\"");
  iVar6 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  iVar6 = (param_2->Data).ArrayNum;
  iVar5 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    pIVar3 = IFileManager::Get();
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x100);
    if ((param_2->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_48,pwVar7);
    pFVar4 = FPaths::GetPath(&local_28,&local_48);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    (*pcVar1)(pIVar3,local_38,pwVar7);
    ::FString::PrintfImpl(&local_58,L" --project=\"%s\"");
    iVar6 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  bVar2 = GetOidcAccessTokenInternal(this,param_1,&local_68,param_4,param_5,param_6,param_7,param_8)
  ;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetOidcAccessToken @ 142d24740

bool __thiscall
FDesktopPlatformBase::GetOidcAccessToken
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2,FString *param_3,
          bool param_4,FFeedbackContext *param_5,FString *param_6,FDateTime *param_7,bool *param_8)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d2475c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x170))();
  return (bool)uVar1;
}

// GetOidcAccessTokenInteractive @ 142d24770

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDesktopPlatformBase::GetOidcAccessTokenInteractive
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2,
          EDesktopLoginInteractionLevel param_3,FFeedbackContext *param_4,int *param_5)

{
  code *pcVar1;
  float fVar2;
  double dVar3;
  FFeedbackContext *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  Type TVar9;
  FText *pFVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  int iVar13;
  wchar_t *pwVar14;
  undefined1 local_108 [8];
  void *local_100;
  void *local_f8;
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FSlowTask local_a8;
  
  pFVar4 = GWarn;
  if (param_3 == None) {
    *param_5 = -1;
    return false;
  }
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_c0,L"OidcToken",L"OidcToken_WaitingForToken",
                       L"Waiting for OidcToken to finish login");
  FSlowTask::FSlowTask(&local_a8,0.0,pFVar10,true,pFVar4);
  FSlowTask::Initialize(&local_a8);
  if (local_c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
  }
  iVar13 = 0;
  local_f8 = (void *)0x0;
  local_100 = (void *)0x0;
  *param_5 = 1;
  bVar5 = FWindowsPlatformProcess::CreatePipe(&local_f8,&local_100,false);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformProcess::CreatePipe(PipeRead, PipeWrite)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DesktopPlatform\\Private\\DesktopPlatformBase.cpp"
                         ,0x49a,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  InvokeOidcTokenToolAsync(this,(FString *)local_108,(void **)param_2,&local_f8);
  bVar5 = local_108 != (undefined1  [8])0x0;
  QueryPerformanceCounter(&local_f0);
  dVar3 = __real_403e000000000000;
  fVar2 = __real_3dcccccd;
  do {
    bVar7 = FWindowsPlatformProcess::IsProcRunning((FProcHandle *)local_108);
    QueryPerformanceCounter(&local_e8);
    if (iVar13 != 0) {
      if (((double)(ulonglong)(local_e8.QuadPart - (longlong)local_f0) *
           FGenericPlatformTime::SecondsPerCycle64 <= dVar3) || (iVar13 != 1)) goto LAB_142d24a21;
      if (param_3 == TimeLimited) goto LAB_142d24b15;
      FText::AsLocalizable_Advanced_LocText
                (&local_d0,L"OidcToken",L"OidcToken_LongWaitPromptTitle",L"Wait for user login?");
      FText::AsLocalizable_Advanced_LocText
                (&local_e0,L"OidcToken",L"OidcToken_LongWaitPromptText",
                 L"Login is taking a long time, make sure you have entered your credentials in your browser window. It can be in a tab in an already existing window. Keep waiting?"
                );
      pFVar11 = FText::ToString(&local_d0);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      pFVar11 = FText::ToString(&local_e0);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      TVar9 = FWindowsPlatformMisc::MessageBoxExt(YesNo,pwVar12,pwVar14);
      if (TVar9 != No) {
        iVar13 = 2;
        if (local_e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
        }
        if (local_d0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
        }
        goto LAB_142d24a21;
      }
      bVar7 = FWindowsPlatformProcess::IsProcRunning((FProcHandle *)local_108);
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
      }
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
LAB_142d24b22:
      if (bVar7 != false) {
        *param_5 = -1;
        FWindowsPlatformProcess::ClosePipe(local_f8,local_100);
        FWindowsPlatformProcess::TerminateProc((FProcHandle *)local_108,false);
        if (local_108 != (undefined1  [8])0x0) {
          FWindowsPlatformProcess::CloseProc((FProcHandle *)local_108);
        }
        bVar5 = false;
        goto LAB_142d24a7d;
      }
      break;
    }
    FSlowTask::MakeDialog(&local_a8,true,false);
    if (3 < (byte)LogDesktopPlatform._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
    }
    iVar13 = 1;
LAB_142d24a21:
    bVar8 = FSlowTask::ShouldCancel(&local_a8);
    if (bVar8) {
LAB_142d24b15:
      bVar7 = FWindowsPlatformProcess::IsProcRunning((FProcHandle *)local_108);
      goto LAB_142d24b22;
    }
    FWindowsPlatformProcess::Sleep(fVar2);
  } while (bVar7);
  bVar7 = FWindowsPlatformProcess::GetProcReturnCode((FProcHandle *)local_108,param_5);
  if (!bVar7) {
    *param_5 = -1;
  }
  FWindowsPlatformProcess::ClosePipe(local_f8,local_100);
  if (local_108 != (undefined1  [8])0x0) {
    FWindowsPlatformProcess::CloseProc((FProcHandle *)local_108);
  }
LAB_142d24a7d:
  FSlowTask::Destroy(&local_a8);
  if (local_a8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_a8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.DefaultMessage.TextData.Reference + 0x10))();
  }
  return bVar5;
}

// GetOidcAccessTokenInternal @ 142d24b70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDesktopPlatformBase::GetOidcAccessTokenInternal
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2,
          EDesktopLoginInteractionLevel param_3,FFeedbackContext *param_4,FString *param_5,
          FDateTime *param_6,bool *param_7)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  IFileManager *pIVar6;
  FString *pFVar7;
  FText *pFVar8;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint *puVar13;
  uint local_1a4;
  FString local_1a0;
  FString local_190;
  TSharedPtr<FJsonObject,1> local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  TSharedRef<TJsonReader<wchar_t>,1> local_130;
  FString local_120;
  FString local_110;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  FString local_d8;
  FString local_c8;
  FText local_b8;
  void *local_a8 [2];
  void *local_98 [2];
  void *local_88 [2];
  TSharedRef<TJsonStringReader<wchar_t>,1> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  void *local_48 [2];
  FString local_38;
  
  pIVar6 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar6 + 0x60);
  pFVar7 = FPaths::ProjectIntermediateDir(&local_d8);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar6,pwVar11,1);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pFVar7 = FPaths::ProjectIntermediateDir(&local_c8);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FPaths::CreateTempFilename(&local_190,pwVar11,L"oidcToken.json",L".tmp");
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatCF(&local_1a0,L" ",param_2);
  ::FString::PrintfImpl(&local_110,L" --OutFile=\"%s\"");
  iVar12 = local_110.Data.ArrayNum + -1;
  if (local_110.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_1a0,(wchar_t *)local_110.Data.AllocatorInstance.Data,iVar12);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  FVar10.Data = local_1a0.Data.AllocatorInstance.Data;
  local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_1a0.Data.ArrayNum == 0) {
    local_170.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1a0.Data.ArrayNum,0,(ForAnyElementType *)&local_170,local_1a0.Data.ArrayNum
               ,&local_170.Data.ArrayMax);
    memcpy(local_170.Data.AllocatorInstance.Data,FVar10.Data,(longlong)local_1a0.Data.ArrayNum * 2);
  }
  ::FString::AppendChars(&local_170,L" --Unattended=true",0x12);
  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.Data.ArrayNum = 0;
  local_120.Data.ArrayMax = 0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"DesktopPlatform",L"GetOidcAccessToken",
                      L"Fetching OIDC Access Token...");
  puVar13 = &local_1a4;
  bVar4 = InvokeOidcTokenToolSync(this,pFVar8,param_1,&local_170,param_4,(int *)puVar13,&local_120);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  *param_7 = false;
  if (local_1a4 == 10) {
    puVar13 = &local_1a4;
    bVar4 = GetOidcAccessTokenInteractive(this,param_1,&local_1a0,param_3,param_4,(int *)puVar13);
    *param_7 = true;
    if (!bVar4) {
      if (param_3 == Interactive) {
        if (1 < (byte)LogDesktopPlatform._0_1_) {
          (**(code **)(this->_padding_ + 400))(this,local_98,param_1);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
          local_a8[0] = local_98[0];
          goto LAB_142d24f2e;
        }
      }
      else if (2 < (byte)LogDesktopPlatform._0_1_) {
        (**(code **)(this->_padding_ + 400))(this,local_a8,param_1);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
LAB_142d24f2e:
        if (local_a8[0] != (void *)0x0) {
          FMemory::Free(local_a8[0]);
        }
      }
LAB_142d24f38:
      bVar4 = false;
      goto LAB_142d25230;
    }
  }
  else if (!bVar4) {
    if (2 < (byte)LogDesktopPlatform._0_1_) {
      (**(code **)(this->_padding_ + 400))(this,local_88,param_1);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
      local_a8[0] = local_88[0];
      goto LAB_142d24f2e;
    }
    goto LAB_142d24f38;
  }
  if (local_1a4 == 0xb) {
    if (3 < (byte)LogDesktopPlatform._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
    }
    if (param_5 != &local_38) {
      pFVar2 = (param_5->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_5->Data).ArrayNum = 0;
      (param_5->Data).ArrayMax = 0;
    }
    bVar4 = true;
    param_6->Ticks = 0x2bca2875f4373fff;
    goto LAB_142d25230;
  }
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_190.Data.ArrayNum != 0) {
    FVar10.Data = local_190.Data.AllocatorInstance.Data;
  }
  local_140.Data.ArrayNum = 0;
  local_140.Data.ArrayMax = 0;
  bVar4 = FFileHelper::LoadFileToString(&local_140,(wchar_t *)FVar10.Data,None,0);
  if (bVar4) {
    local_180.Object = (FJsonObject *)0x0;
    local_180.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = TJsonStringReader<wchar_t>::Create(&local_78,&local_140);
    pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
    local_130.Object = (TJsonReader<wchar_t> *)pTVar9->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_130.SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      (&local_130,&local_180,None);
    if ((!bVar4) || (local_180.Object == (FJsonObject *)0x0)) {
LAB_142d25163:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_180.SharedReferenceCount.ReferenceController);
      goto LAB_142d25175;
    }
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.Data.ArrayNum = 0;
    local_150.Data.ArrayMax = 0;
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.Data.ArrayNum = 0;
    local_160.Data.ArrayMax = 0;
    if ((local_180.Object == (FJsonObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    uStack_f0 = 5;
    local_f8 = L"Token";
    local_68._12_4_ = uStack_ec;
    local_68.Size = 5;
    local_68.DataPtr = L"Token";
    bVar4 = FJsonObject::TryGetStringField(local_180.Object,&local_68,&local_150);
    if (!bVar4) {
LAB_142d25147:
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      goto LAB_142d25163;
    }
    if ((local_180.Object == (FJsonObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    local_e8 = L"ExpiresAt";
    uStack_e0 = 9;
    local_58._12_4_ = uStack_dc;
    local_58.Size = 9;
    local_58.DataPtr = L"ExpiresAt";
    bVar4 = FJsonObject::TryGetStringField(local_180.Object,&local_58,&local_160);
    if (!bVar4) goto LAB_142d25147;
    iVar12 = local_150.Data.ArrayNum + -1;
    if (local_150.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    ::FString::AssignRange(param_5,(wchar_t *)local_150.Data.AllocatorInstance.Data,iVar12);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_160.Data.ArrayNum != 0) {
      FVar10.Data = local_160.Data.AllocatorInstance.Data;
    }
    FDateTime::ParseIso8601((wchar_t *)FVar10.Data,param_6);
    pIVar6 = IFileManager::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_190.Data.ArrayNum != 0) {
      FVar10.Data = local_190.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,FVar10.Data,1,0,1);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.SharedReferenceCount.ReferenceController);
    bVar4 = true;
  }
  else {
LAB_142d25175:
    if (2 < (byte)LogDesktopPlatform._0_1_) {
      (**(code **)(this->_padding_ + 400))(this,local_48,param_1);
      puVar13 = (uint *)(ulonglong)local_1a4;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    pIVar6 = IFileManager::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_190.Data.ArrayNum != 0) {
      FVar10.Data = local_190.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,FVar10.Data,1,0,1,puVar13);
    bVar4 = false;
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
LAB_142d25230:
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  pIVar6 = IFileManager::Get();
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_190.Data.ArrayNum != 0) {
    FVar10.Data = local_190.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,FVar10.Data,0,1,1);
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetOidcAccessTokenWithRemoteConfig @ 142d252d0

bool __thiscall
FDesktopPlatformBase::GetOidcAccessTokenWithRemoteConfig
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2,
          EDesktopLoginInteractionLevel param_3,FFeedbackContext *param_4,FString *param_5,
          FDateTime *param_6,bool *param_7)

{
  bool bVar1;
  int iVar2;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::FString::PrintfImpl(&local_18,L" --AuthConfigUrl=\"%s\"");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  bVar1 = GetOidcAccessTokenInternal(this,param_1,&local_28,param_3,param_4,param_5,param_6,param_7)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetOidcAccessTokenWithRemoteConfig @ 142d253d0

bool __thiscall
FDesktopPlatformBase::GetOidcAccessTokenWithRemoteConfig
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2,bool param_3,
          FFeedbackContext *param_4,FString *param_5,FDateTime *param_6,bool *param_7)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d253e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x180))();
  return (bool)uVar1;
}

// GetOidcTokenStatus @ 142d25470

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDesktopPlatformBase::GetOidcTokenStatus
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2,FString *param_3,
          FFeedbackContext *param_4,int *param_5)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TJsonStringReader<wchar_t> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  IFileManager *pIVar6;
  FString *pFVar7;
  FText *pFVar8;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar9;
  ForAnyElementType FVar10;
  int iVar11;
  wchar_t *pwVar12;
  int local_res20 [2];
  FString local_178;
  TSharedPtr<FJsonObject,1> local_168;
  FString local_158;
  FString local_148;
  StackState local_138;
  FString local_100;
  int local_f0 [2];
  FString local_e8;
  FString local_d8;
  FString local_c8;
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  FString local_a8;
  FString local_98;
  void *local_88 [2];
  FString local_78;
  FText local_68;
  void *local_58 [2];
  TSharedRef<TJsonStringReader<wchar_t>,1> local_48;
  TStringView<wchar_t> local_38;
  
  pIVar6 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar6 + 0x60);
  pFVar7 = FPaths::ProjectIntermediateDir(&local_a8);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar6,pwVar12,1);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pFVar7 = FPaths::ProjectIntermediateDir(&local_98);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FPaths::CreateTempFilename(&local_178,pwVar12,L"oidcToken-status.json",L".tmp");
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_148,L" ");
  ::FString::PrintfImpl(&local_e8,L" --Service=\"%s\"");
  iVar11 = local_e8.Data.ArrayNum + -1;
  if (local_e8.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  ::FString::AppendChars(&local_148,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar11);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_d8,L" --OutFile=\"%s\"");
  iVar11 = local_d8.Data.ArrayNum + -1;
  if (local_d8.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  ::FString::AppendChars(&local_148,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar11);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pIVar6 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar6 + 0x100);
  pFVar7 = FPaths::ProjectDir(&local_78);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar6,local_88,pwVar12);
  ::FString::PrintfImpl(&local_c8,L" --project=\"%s\"");
  iVar11 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  ::FString::AppendChars(&local_148,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar11);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_88[0] != (void *)0x0) {
    FMemory::Free(local_88[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.Data.ArrayNum = 0;
  local_100.Data.ArrayMax = 0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"DesktopPlatform",L"GetOidcAccessTokenStatus",
                      L"Fetching OIDC Access Token Status...");
  bVar4 = InvokeOidcTokenToolSync(this,pFVar8,param_1,&local_148,param_4,local_f0,&local_100);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (!bVar4) {
    if (2 < (byte)LogDesktopPlatform._0_1_) {
      (**(code **)(this->_padding_ + 400))(this,local_58,param_1);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
    bVar4 = false;
    goto LAB_142d25839;
  }
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_178.Data.ArrayNum != 0) {
    FVar10.Data = local_178.Data.AllocatorInstance.Data;
  }
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  bVar4 = FFileHelper::LoadFileToString(&local_158,(wchar_t *)FVar10.Data,None,0);
  if (bVar4) {
    local_168.Object = (FJsonObject *)0x0;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = TJsonStringReader<wchar_t>::Create(&local_48,&local_158);
    pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
    pTVar3 = pTVar9->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    local_138.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Identifier.Data.ArrayNum = 0;
    local_138.Identifier.Data.ArrayMax = 0;
    local_138.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Array.ArrayNum = 0;
    local_138.Array.ArrayMax = 0;
    local_138.Object.Object = (FJsonObject *)0x0;
    local_138.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar3,&local_138,None);
    if (!bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data,
                 local_138.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_138.Array.AllocatorInstance.Data);
      }
      if (local_138.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Identifier.Data.AllocatorInstance.Data);
      }
LAB_142d257eb:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      goto LAB_142d257fd;
    }
    bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_138,&local_168);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data,
               local_138.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_138.Array.AllocatorInstance.Data);
    }
    if (local_138.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Identifier.Data.AllocatorInstance.Data);
    }
    if ((!bVar4) || (local_168.Object == (FJsonObject *)0x0)) goto LAB_142d257eb;
    if ((local_168.Object == (FJsonObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    uStack_b0 = 6;
    local_b8 = L"Status";
    local_38._12_4_ = uStack_ac;
    local_38.Size = 6;
    local_38.DataPtr = L"Status";
    bVar4 = FJsonObject::TryGetNumberField(local_168.Object,&local_38,local_res20);
    if (!bVar4) goto LAB_142d257eb;
    *param_5 = local_res20[0];
    pIVar6 = IFileManager::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar10.Data = local_178.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,FVar10.Data,1,0,1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    bVar4 = true;
  }
  else {
LAB_142d257fd:
    pIVar6 = IFileManager::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar10.Data = local_178.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,FVar10.Data,1,0,1);
    bVar4 = false;
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
LAB_142d25839:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetProjectBuildProducts @ 142d259b0

/* WARNING: Removing unreachable block (ram,0x000142d25e58) */

void __thiscall
FDesktopPlatformBase::GetProjectBuildProducts
          (FDesktopPlatformBase *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  code *pcVar2;
  void *_Src;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  IFileManager *pIVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  int *piVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar19;
  int *piVar20;
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString *local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  ulonglong uVar11;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  local_68.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar10 = (longlong)local_68.Data.ArrayNum;
  uVar12 = 0;
  pFVar13 = (param_1->Data).AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,pFVar13,lVar10 * 2);
  }
  FPaths::NormalizeDirectoryName(&local_68);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_88,(int *)((longlong)&local_80 + 4));
  FVar15.Data = local_68.Data.AllocatorInstance.Data;
  pFVar13 = local_88.Data + (longlong)iVar5 * 0x10;
  local_80 = CONCAT44(local_80._4_4_,iVar5 + 1);
  *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
  lVar10 = (longlong)local_68.Data.ArrayNum;
  *(int *)(pFVar13 + 8) = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar13 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_68.Data.ArrayNum,
               (int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar13,FVar15.Data,lVar10 * 2);
  }
  local_58 = (FString *)0x0;
  local_50 = 0;
  pIVar6 = IFileManager::Get();
  iVar5 = local_68.Data.ArrayNum;
  FVar15.Data = local_68.Data.AllocatorInstance.Data;
  lVar10 = (longlong)local_68.Data.ArrayNum;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = local_68.Data.ArrayNum;
  pcVar2 = *(code **)((longlong)*pIVar6 + 0x88);
  uVar14 = (9 - (uint)(local_68.Data.ArrayNum != 0)) + local_68.Data.ArrayNum;
  if ((int)uVar14 < local_68.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar20 = &local_48.Data.ArrayMax;
  uVar11 = CONCAT44(uVar19,local_68.Data.ArrayNum);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar14,0,(ForAnyElementType *)&local_48,local_68.Data.ArrayNum,piVar20);
  if (iVar5 != 0) {
    memcpy(local_48.Data.AllocatorInstance.Data,FVar15.Data,lVar10 * 2);
  }
  ::FString::PathAppend(&local_48,L"Plugins",7);
  piVar20 = (int *)CONCAT71((int7)((ulonglong)piVar20 >> 8),1);
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar15.Data = local_48.Data.AllocatorInstance.Data;
  }
  FVar7.Data = (FScriptContainerElement *)(uVar11 & 0xffffffffffffff00);
  (*pcVar2)(pIVar6,&local_58,FVar15.Data,L"*.uplugin",1,FVar7.Data,piVar20);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  uVar11 = uVar12;
  if (0 < (int)local_50) {
    do {
      uVar9 = (uint)uVar11;
      uVar14 = 0;
      if ((int)uVar9 < (int)local_50) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if (uVar14 == 0) {
        FVar7.Data = (FScriptContainerElement *)(longlong)(int)local_50;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar13 = (FScriptContainerElement *)FPaths::GetPath(&local_38,local_58 + (int)uVar9);
      if (local_88.Data <= pFVar13) {
        piVar16 = (int *)(longlong)local_80._4_4_;
        if ((pFVar13 < local_88.Data + (longlong)piVar16 * 0x10) &&
           (FVar7.Data = local_88.Data,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), piVar20 = piVar16, bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar5 + 1);
      pFVar8 = local_88.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar8 = 0;
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar13;
      *(undefined8 *)pFVar13 = 0;
      *(int *)(pFVar8 + 8) = *(int *)(pFVar13 + 8);
      *(int *)(pFVar8 + 0xc) = *(int *)(pFVar13 + 0xc);
      *(undefined8 *)(pFVar13 + 8) = 0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      uVar11 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < (int)local_50);
  }
  uVar11 = uVar12;
  uVar18 = uVar12;
  iVar5 = (int)local_50;
  FVar15.Data = local_78.Data.AllocatorInstance.Data;
  uVar3 = local_78.Data._8_8_;
  if (0 < (int)local_80) {
    do {
      local_78.Data._8_8_ = uVar3;
      local_78.Data.AllocatorInstance.Data = FVar15.Data;
      iVar5 = (int)((ulonglong)FVar7.Data >> 0x20);
      uVar9 = (uint)uVar11;
      uVar14 = 0;
      if ((int)uVar9 < (int)local_80) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if (uVar14 == 0) {
        iVar5 = (int)local_80 >> 0x1f;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = *(int *)(local_88.Data + uVar18 + 8);
      _Src = *(void **)(local_88.Data + uVar18);
      local_78.Data.ArrayNum = iVar1;
      uVar14 = iVar1 + 0xd + (uint)(*(int *)(local_88.Data + uVar18 + 8) == 0);
      if ((int)uVar14 < iVar1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      piVar20 = &local_78.Data.ArrayMax;
      FVar7.Data = (FScriptContainerElement *)CONCAT44(iVar5,iVar1);
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar14,0,(ForAnyElementType *)&local_78,iVar1,piVar20);
      if (iVar1 != 0) {
        memcpy(local_78.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
      ::FString::PathAppend(&local_78,L"Intermediate",0xc);
      pFVar13 = (param_3->AllocatorInstance).Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_78) &&
          (piVar16 = (int *)(longlong)param_3->ArrayMax,
          (FScriptContainerElement *)&local_78 < pFVar13 + (longlong)piVar16 * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), FVar7.Data = pFVar13, piVar20 = piVar16, bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_3->ArrayNum;
      if (iVar5 == param_3->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar5 + 1;
      pFVar13 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar13 = 0;
      *(FScriptContainerElement **)pFVar13 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar15.Data = local_78.Data.AllocatorInstance.Data;
      *(int *)(pFVar13 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar13 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      uVar3 = local_78.Data._8_8_;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar11 = (ulonglong)(uVar9 + 1);
      uVar18 = uVar18 + 0x10;
    } while ((int)(uVar9 + 1) < (int)local_80);
    iVar5 = (int)local_50;
  }
  uVar11 = uVar12;
  if (0 < param_3->ArrayNum) {
    do {
      pIVar6 = IFileManager::Get();
      pFVar13 = (FScriptContainerElement *)(longlong)param_3->ArrayNum;
      uVar9 = (uint)uVar12;
      pcVar2 = *(code **)((longlong)*pIVar6 + 0x88);
      uVar14 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar7.Data = pFVar13, bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar13 = (param_3->AllocatorInstance).Data;
      if (*(int *)(pFVar13 + uVar11 + 8) == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = *(wchar_t **)(pFVar13 + uVar11);
      }
      piVar20 = (int *)((ulonglong)piVar20 & 0xffffffffffffff00);
      FVar7.Data = FVar7.Data & 0xffffffffffffff00;
      (*pcVar2)(pIVar6,param_2,pwVar17,L"*",1,FVar7.Data,piVar20);
      uVar12 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 0x10;
    } while ((int)(uVar9 + 1) < param_3->ArrayNum);
    iVar5 = (int)local_50;
  }
  DestructItems<FString,int>(local_58,iVar5);
  if (local_58 != (FString *)0x0) {
    FMemory::Free(local_58);
  }
  DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// GetTargetsForCurrentProject @ 142d27280

TArray<FTargetInfo,TSizedDefaultAllocator<32>_> * __thiscall
FDesktopPlatformBase::GetTargetsForCurrentProject(FDesktopPlatformBase *this)

{
  code *pcVar1;
  FString *pFVar2;
  TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x138);
  pFVar2 = FPaths::GetProjectFilePath(&local_18);
  pTVar3 = (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)(this,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pTVar3;
}

// GetTargetsForProject @ 142d272d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FTargetInfo,TSizedDefaultAllocator<32>_> * __thiscall
FDesktopPlatformBase::GetTargetsForProject(FDesktopPlatformBase *this,FString *param_1)

{
  ulonglong *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FDesktopPlatformBase *pFVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  IFileManager *pIVar10;
  FOutputDeviceRedirector *pFVar11;
  int iVar12;
  ForAnyElementType FVar13;
  int iVar14;
  ulonglong *puVar15;
  longlong lVar16;
  TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *pTVar17;
  wchar_t *pwVar18;
  TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *_Src;
  TSet<TTuple<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar19;
  bool bVar20;
  undefined1 auStackY_1a8 [32];
  undefined1 local_168 [8];
  TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *local_160;
  undefined1 local_158 [8];
  undefined1 local_150 [12];
  int iStack_144;
  int local_140;
  FString local_138;
  undefined1 local_128 [16];
  FString local_118;
  TSet<TTuple<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_108;
  TArray<FTargetInfo,TSizedDefaultAllocator<32>_> local_100;
  FString local_f0;
  void *local_e0;
  undefined8 local_d8;
  FDesktopPlatformBase *local_d0;
  undefined1 *local_c8;
  FString local_c0;
  undefined1 local_b0 [16];
  FDateTime local_a0 [2];
  byte local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  _Src = (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)0x0;
  bVar20 = -1 < CpuChannel->Enabled;
  local_d0 = this;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1469,"FDesktopPlatfomrBase::GetTargetsForProject",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DesktopPlatform\\Private\\DesktopPlatformBase.cpp"
               ,0x5bd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1469);
  }
  local_128._8_4_ = (param_1->Data).ArrayNum;
  lVar16 = (longlong)(int)local_128._8_4_;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  if (local_128._8_4_ == 0) {
    local_128._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_128._8_4_,0,(ForAnyElementType *)local_128,local_128._8_4_,
               (int *)(local_128 + 0xc));
    memcpy((void *)local_128._0_8_,pFVar2,lVar16 * 2);
  }
  FPaths::NormalizeFilename((FString *)local_128);
  pTVar19 = (TSet<TTuple<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&this->ProjectFileToTargets;
  iVar8 = local_128._8_4_ + -1;
  pFVar2 = (FScriptContainerElement *)local_128._0_8_;
  if (local_128._8_4_ == 0) {
    iVar8 = 0;
    pFVar2 = (FScriptContainerElement *)L"";
  }
  local_108 = pTVar19;
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)pFVar2);
  iVar8 = TSet<TTuple<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(pTVar19,uVar7,(FString *)local_128);
  if (iVar8 != -1) {
    lVar16 = *(longlong *)
              &((TMap<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>,0>_>
                 *)pTVar19)->field_0x0 + (longlong)iVar8 * 0x28;
    pTVar17 = (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)(lVar16 + 0x10);
    if (lVar16 == 0) {
      pTVar17 = _Src;
    }
    if (pTVar17 != (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_142d27c3b;
  }
  iVar12 = (param_1->Data).ArrayNum;
  iVar14 = 0;
  iVar8 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar8 = 0;
  }
  if (iVar8 == 0) {
    pFVar9 = FPaths::EngineDir((FString *)local_168);
    if (&local_c0 != pFVar9) {
      _Src = (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)
             (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar14 = (pFVar9->Data).ArrayNum;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
  }
  else {
    pFVar9 = FPaths::GetPath((FString *)local_168,param_1);
    if (&local_c0 != pFVar9) {
      _Src = (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)
             (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar14 = (pFVar9->Data).ArrayNum;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
  }
  if (local_168 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_168);
  }
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = iVar14;
  if (iVar14 == 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,8,0,(ForAnyElementType *)&local_138,0,&local_138.Data.ArrayMax);
  }
  else {
    uVar7 = iVar14 + 7;
    if ((int)uVar7 < iVar14) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,0,(ForAnyElementType *)&local_138,iVar14,&local_138.Data.ArrayMax);
    memcpy(local_138.Data.AllocatorInstance.Data,_Src,(longlong)iVar14 * 2);
  }
  ::FString::PathAppend(&local_138,L"Source",6);
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar7 = (0x1e - (uint)(iVar14 != 0)) + iVar14;
  local_118.Data.ArrayNum = iVar14;
  if ((int)uVar7 < iVar14) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar7,0,(ForAnyElementType *)&local_118,iVar14,&local_118.Data.ArrayMax);
  if (iVar14 != 0) {
    memcpy(local_118.Data.AllocatorInstance.Data,_Src,(longlong)iVar14 * 2);
  }
  ::FString::PathAppend(&local_118,L"Intermediate/TargetInfo.json",0x1c);
  pIVar10 = IFileManager::Get();
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar13.Data = local_118.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar10 + 0x70))(pIVar10,local_b0,FVar13.Data);
  if ((local_90 & 4) == 0) {
LAB_142d278a3:
    pIVar10 = IFileManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      FVar13.Data = local_138.Data.AllocatorInstance.Data;
    }
    cVar6 = (**(code **)((longlong)*pIVar10 + 0x58))(pIVar10,FVar13.Data);
    if (cVar6 == '\0') {
      local_150._0_8_ = local_128;
      local_168 = (undefined1  [8])0x0;
      unique0x00009c00 = local_168;
      local_160 = (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)0x0;
      TSet<TTuple<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_&&>_>
                (pTVar19,(TPairInitializer<FString_const_&,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_&&>
                          *)local_158,(bool *)local_150);
      pTVar17 = (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)
                (*(longlong *)&pTVar19->Elements + ((longlong)(int)local_158._0_4_ * 5 + 2) * 8);
      goto LAB_142d2784b;
    }
    ::FString::FString(&local_f0,L"-Mode=QueryTargets");
    iVar8 = (param_1->Data).ArrayNum;
    iVar14 = 0;
    iVar12 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar12 = iVar14;
    }
    if (0 < iVar12) {
      pIVar10 = IFileManager::Get();
      if ((param_1->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar10 + 0x100))(pIVar10,local_150,pwVar18);
      ::FString::PrintfImpl((FString *)local_168,L" -Project=\"%s\"");
      iVar8 = (int)local_160 + -1;
      if ((int)local_160 == 0) {
        iVar8 = iVar14;
      }
      ::FString::AppendChars(&local_f0,(wchar_t *)local_168,iVar8);
      if (local_168 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_168);
      }
      if ((FScriptContainerElement *)local_150._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_150._0_8_);
      }
    }
    pIVar10 = IFileManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar13.Data = local_118.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar10 + 0x100))(pIVar10,local_150,FVar13.Data);
    ::FString::PrintfImpl((FString *)local_168,L" -Output=\"%s\"");
    iVar8 = (int)local_160 + -1;
    if ((int)local_160 == 0) {
      iVar8 = iVar14;
    }
    ::FString::AppendChars(&local_f0,(wchar_t *)local_168,iVar8);
    if (local_168 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_168);
    }
    if ((FScriptContainerElement *)local_150._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_150._0_8_);
    }
    ::FString::AppendChars(&local_f0,L" -IncludeAllTargets",0x13);
    ::FString::AppendChars(&local_f0,L" -DontIncludeParentAssembly",0x1b);
    local_e0 = (void *)0x0;
    local_d8 = 0;
    local_140 = 0;
    pFVar9 = FPaths::RootDir((FString *)local_150);
    pFVar4 = local_d0;
    pFVar9 = GetUnrealBuildToolExecutableFilename(local_d0,(FString *)local_168,pFVar9);
    bVar5 = FPaths::FileExists(pFVar9);
    if (bVar5) {
      pcVar3 = *(code **)(pFVar4->_padding_ + 0x110);
      pFVar11 = GetGlobalLogSingleton();
      cVar6 = (*pcVar3)(pFVar4,&local_f0,pFVar11,1);
      if ((cVar6 == '\0') || (local_140 != 0)) goto LAB_142d27ae5;
      bVar5 = false;
    }
    else {
LAB_142d27ae5:
      bVar5 = true;
    }
    if (local_168 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_168);
    }
    if ((FScriptContainerElement *)local_150._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_150._0_8_);
    }
    if ((bVar5) && (GIsBuildMachine == false)) {
      pcVar3 = *(code **)(pFVar4->_padding_ + 0x110);
      pFVar11 = GetGlobalLogSingleton();
      (*pcVar3)(pFVar4,&local_f0,pFVar11,0);
    }
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    bVar5 = ReadTargetInfo(&local_118,&local_100);
    if ((!bVar5) && (2 < (byte)LogDesktopPlatform._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
    }
    local_168 = (undefined1  [8])local_128;
    local_160 = &local_100;
    TSet<TTuple<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_&&>_>
              (pTVar19,(TPairInitializer<FString_&&,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_&&>
                        *)local_158,(bool *)local_168);
    pTVar17 = (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)
              (*(longlong *)&pTVar19->Elements + ((longlong)(int)local_158._0_4_ * 5 + 2) * 8);
    DestructItems<FTargetInfo,int>
              ((FTargetInfo *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
    if ((FTargetInfo *)local_100.AllocatorInstance.Data != (FTargetInfo *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
    if (local_e0 != (void *)0x0) {
      FMemory::Free(local_e0);
    }
  }
  else {
    local_168 = (undefined1  [8])0x0;
    local_160 = (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)0x0;
    bVar5 = ReadTargetInfo(&local_118,(TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)local_168);
    FVar13.Data = local_138.Data.AllocatorInstance.Data;
    if (!bVar5) {
LAB_142d27886:
      DestructItems<FTargetInfo,int>((FTargetInfo *)local_168,(int)local_160);
      if (local_168 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_168);
      }
      goto LAB_142d278a3;
    }
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar16 = (longlong)local_138.Data.ArrayNum;
    local_88.Data.ArrayNum = local_138.Data.ArrayNum;
    if (local_138.Data.ArrayNum == 0) {
      local_88.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_138.Data.ArrayNum,0,(ForAnyElementType *)&local_88,
                 local_138.Data.ArrayNum,&local_88.Data.ArrayMax);
      memcpy(local_88.Data.AllocatorInstance.Data,FVar13.Data,lVar16 * 2);
    }
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar7 = (9 - (uint)(iVar14 != 0)) + iVar14;
    local_78.Data.ArrayNum = iVar14;
    if ((int)uVar7 < iVar14) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,0,(ForAnyElementType *)&local_78,iVar14,&local_78.Data.ArrayMax);
    if (iVar14 != 0) {
      memcpy(local_78.Data.AllocatorInstance.Data,_Src,(longlong)iVar14 * 2);
    }
    ::FString::PathAppend(&local_78,L"Plugins",7);
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar7 = (0xb - (uint)(iVar14 != 0)) + iVar14;
    local_68.Data.ArrayNum = iVar14;
    if ((int)uVar7 < iVar14) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,0,(ForAnyElementType *)&local_68,iVar14,&local_68.Data.ArrayMax);
    if (iVar14 != 0) {
      memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar14 * 2);
    }
    ::FString::PathAppend(&local_68,L"Platforms",9);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar7 = (0xc - (uint)(iVar14 != 0)) + iVar14;
    local_58.Data.ArrayNum = iVar14;
    if ((int)uVar7 < iVar14) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,0,(ForAnyElementType *)&local_58,iVar14,&local_58.Data.ArrayMax);
    if (iVar14 != 0) {
      memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)iVar14 * 2);
    }
    ::FString::PathAppend(&local_58,L"Restricted",10);
    lVar16 = 4;
    local_150._0_8_ = (FScriptContainerElement *)0x0;
    stack0xfffffffffffffeb8 = (undefined1 *)CONCAT44(iStack_144,4);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,4,0,(ForAnyElementType *)local_150,4,&iStack_144);
    ConstructItems<FString,FString,int>((void *)local_150._0_8_,&local_88,4);
    puVar15 = local_48;
    do {
      puVar1 = puVar15 + -2;
      puVar15 = puVar15 + -2;
      lVar16 = lVar16 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
    } while (lVar16 != 0);
    bVar5 = IsTargetInfoValid((TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)local_168,
                              (TArray<FString,TSizedDefaultAllocator<32>_> *)local_150,local_a0);
    pTVar19 = local_108;
    if (!bVar5) {
      DestructItems<FString,int>((FString *)local_150._0_8_,local_150._8_4_);
      pTVar19 = local_108;
      if ((FScriptContainerElement *)local_150._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_150._0_8_);
        pTVar19 = local_108;
      }
      goto LAB_142d27886;
    }
    local_d0 = (FDesktopPlatformBase *)local_128;
    local_c8 = local_168;
    TSet<TTuple<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_&&>_>
              (local_108,
               (TPairInitializer<FString_&&,TArray<FTargetInfo,TSizedDefaultAllocator<32>_>_&&> *)
               local_158,(bool *)&local_d0);
    pTVar17 = (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)
              (*(longlong *)&pTVar19->Elements + ((longlong)(int)local_158._0_4_ * 5 + 2) * 8);
    DestructItems<FString,int>((FString *)local_150._0_8_,local_150._8_4_);
    if ((FScriptContainerElement *)local_150._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_150._0_8_);
    }
LAB_142d2784b:
    DestructItems<FTargetInfo,int>((FTargetInfo *)local_168,(int)local_160);
    local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_168;
  }
  if ((FTargetInfo *)local_f0.Data.AllocatorInstance.Data != (FTargetInfo *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (_Src != (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(_Src);
  }
LAB_142d27c3b:
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pTVar17;
}

// GetUnrealBuildToolExecutableFilename @ 142d27cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDesktopPlatformBase::GetUnrealBuildToolExecutableFilename
          (FDesktopPlatformBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  FString *pFVar4;
  FConfigSection *pFVar5;
  int iVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  longlong *plVar9;
  FConfigSection *this_00;
  int iVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *_Src;
  wchar_t *pwVar14;
  undefined1 auStackY_1d8 [32];
  FString local_188;
  FString local_178;
  FString local_168;
  TStringView<wchar_t> local_158;
  wchar_t *local_148;
  undefined4 local_140;
  FConfigFile local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  FConfigFile::FConfigFile(&local_138);
  pFVar4 = FPaths::GeneratedConfigDir(&local_188);
  pwVar11 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  local_158.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar10 = (param_1->Data).ArrayNum;
  local_148 = L"Engine/Config/";
  local_140 = 0xe;
  iVar6 = 0;
  local_158.Size = iVar10 + -1;
  if (iVar10 == 0) {
    local_158.Size = iVar6;
  }
  FPaths::CombineInternal(&local_168,&local_158,2);
  local_158.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar10 = (param_1->Data).ArrayNum;
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar8.Data = local_168.Data.AllocatorInstance.Data;
  }
  local_148 = L"Engine/Config/";
  local_140 = 0xe;
  local_158.Size = iVar10 + -1;
  if (iVar10 == 0) {
    local_158.Size = iVar6;
  }
  FPaths::CombineInternal(&local_178,&local_158,2);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_178.Data.ArrayNum != 0) {
    FVar13.Data = local_178.Data.AllocatorInstance.Data;
  }
  bVar1 = FConfigCacheIni::LoadExternalIniFile
                    (&local_138,L"Engine",(wchar_t *)FVar13.Data,(wchar_t *)FVar8.Data,true,
                     (wchar_t *)0x0,false,false,true,pwVar14);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    ::FString::FString(&local_188,L"PlatformPaths");
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_188.Data.ArrayNum != 0) {
      iVar6 = local_188.Data.ArrayNum + -1;
      pwVar11 = (wchar_t *)local_188.Data.AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar11);
    if ((int)local_138._padding_ != local_138._padding_._4_4_) {
      plVar9 = &local_138._padding_;
      if ((longlong *)local_138._padding_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_138._padding_;
      }
      iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)local_138._padding_ - 1U & uVar2) * 4);
      iVar6 = local_188.Data.ArrayNum;
      lVar7 = local_138._padding_;
      while (iVar10 != -1) {
        lVar12 = (longlong)iVar10 * 0x110;
        iVar3 = *(int *)(lVar7 + 8 + lVar12);
        if (iVar3 == iVar6) {
          if (1 < iVar3) {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(lVar7 + lVar12),
                               (wchar_t *)local_188.Data.AllocatorInstance.Data);
            bVar1 = iVar6 == 0;
            lVar7 = local_138._padding_;
            iVar6 = local_188.Data.ArrayNum;
            goto LAB_142d27eca;
          }
LAB_142d27edf:
          pFVar5 = (FConfigSection *)(lVar12 + lVar7);
          if (iVar10 != -1) goto LAB_142d27eeb;
          break;
        }
        bVar1 = iVar3 + iVar6 == 1;
LAB_142d27eca:
        if (bVar1) goto LAB_142d27edf;
        iVar10 = *(int *)(lVar12 + 0x108 + lVar7);
      }
    }
    pFVar5 = (FConfigSection *)0x0;
LAB_142d27eeb:
    this_00 = (FConfigSection *)&pFVar5->_padding_;
    if (pFVar5 == (FConfigSection *)0x0) {
      this_00 = (FConfigSection *)0x0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if ((this_00 != (FConfigSection *)0x0) &&
       (bVar1 = FConfigSection::GetString(this_00,L"UnrealBuildTool",&local_168), bVar1)) {
      iVar6 = (param_1->Data).ArrayNum;
      iVar10 = local_168.Data.ArrayNum + -1;
      if (local_168.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      iVar3 = iVar10 + 1;
      local_188.Data.ArrayNum = iVar6;
      if ((iVar6 == 0) && (iVar3 != 0)) {
        _Src = (param_1->Data).AllocatorInstance.Data;
        iVar3 = iVar10 + 2;
LAB_142d27f73:
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar3 != 0) goto LAB_142d27f7e;
        local_188.Data.ArrayMax = 0;
      }
      else {
        _Src = (param_1->Data).AllocatorInstance.Data;
        if (iVar6 == 0) goto LAB_142d27f73;
LAB_142d27f7e:
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar2 = iVar6 + iVar3;
        if ((int)uVar2 < iVar6) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar2,0,(ForAnyElementType *)&local_188,iVar6,&local_188.Data.ArrayMax);
        if (iVar6 != 0) {
          memcpy(local_188.Data.AllocatorInstance.Data,_Src,(longlong)iVar6 * 2);
        }
      }
      ::FString::PathAppend(&local_188,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar10);
      FPaths::ConvertRelativePathToFull(&local_178,&local_188);
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayMax = local_178.Data.ArrayMax;
      (__return_storage_ptr__->Data).ArrayNum = local_178.Data.ArrayNum;
      local_178.Data.ArrayNum = 0;
      local_178.Data.ArrayMax = 0;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar8.Data = local_168.Data.AllocatorInstance.Data;
      goto LAB_142d28053;
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = ::operator/(&local_178,param_1,
                       L"Engine/Binaries/DotNET/UnrealBuildTool/UnrealBuildTool.exe");
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,pFVar4);
  FVar8.Data = local_178.Data.AllocatorInstance.Data;
LAB_142d28053:
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  FConfigFile::~FConfigFile(&local_138);
  return __return_storage_ptr__;
}

// GetUnrealBuildToolProjectFileName @ 142d280b0

FString * __thiscall
FDesktopPlatformBase::GetUnrealBuildToolProjectFileName
          (FDesktopPlatformBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::operator/(&local_18,param_1,
                       L"Engine/Source/Programs/UnrealBuildTool/UnrealBuildTool.csproj");
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUserDir @ 142d28100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDesktopPlatformBase::GetUserDir
          (FDesktopPlatformBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  char cVar1;
  FString *pFVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *_Str;
  ForAnyElementType FVar5;
  wchar_t *_Str_00;
  int iVar6;
  undefined1 auStack_c8 [32];
  FString local_a8;
  FScriptContainerElement *local_98;
  undefined8 local_90;
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  undefined4 local_70;
  TStringView<wchar_t> local_68;
  FScriptContainerElement *local_58;
  int local_50;
  FScriptContainerElement *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  iVar4 = 0;
  local_98 = (FScriptContainerElement *)0x0;
  local_90 = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x68))(this,param_1,&local_98);
  if (cVar1 == '\0') {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    cVar1 = (**(code **)(this->_padding_ + 0xa0))(this,param_1);
    _Str = L"";
    if (cVar1 == '\0') {
      local_88.DataPtr = _Str;
      if ((int)local_90 != 0) {
        local_88.DataPtr = (wchar_t *)local_98;
      }
      if ((FScriptContainerElement *)local_88.DataPtr != (FScriptContainerElement *)0x0) {
        sVar3 = wcslen(local_88.DataPtr);
        iVar4 = (int)sVar3;
      }
      local_78 = L"Engine";
      local_70 = 6;
      local_88.Size = iVar4;
      FPaths::CombineInternal(&local_a8,&local_88,2);
      FVar5.Data = local_a8.Data.AllocatorInstance.Data;
      iVar4 = local_a8.Data.ArrayNum;
      iVar6 = local_a8.Data.ArrayMax;
    }
    else {
      if ((param_1->Data).ArrayNum == 0) {
        _Str_00 = L"";
      }
      else {
        _Str_00 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pFVar2 = FApp::GetEpicProductIdentifier((FString *)&local_88);
      if ((pFVar2->Data).ArrayNum != 0) {
        _Str = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      }
      local_68.DataPtr = FWindowsPlatformProcess::UserSettingsDir();
      iVar4 = 0;
      local_68.Size = iVar4;
      if (local_68.DataPtr != (wchar_t *)0x0) {
        sVar3 = wcslen(local_68.DataPtr);
        local_68.Size = (int)sVar3;
      }
      local_50 = iVar4;
      local_58 = (FScriptContainerElement *)_Str;
      if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
        sVar3 = wcslen(_Str);
        local_50 = (int)sVar3;
      }
      local_48 = (FScriptContainerElement *)_Str_00;
      if ((FScriptContainerElement *)_Str_00 != (FScriptContainerElement *)0x0) {
        sVar3 = wcslen(_Str_00);
        iVar4 = (int)sVar3;
      }
      local_40 = iVar4;
      FPaths::CombineInternal(&local_a8,&local_68,3);
      FVar5.Data = local_a8.Data.AllocatorInstance.Data;
      iVar4 = local_a8.Data.ArrayNum;
      iVar6 = local_a8.Data.ArrayMax;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      if ((FScriptContainerElement *)local_88.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.DataPtr);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar5.Data;
    (__return_storage_ptr__->Data).ArrayMax = iVar6;
    (__return_storage_ptr__->Data).ArrayNum = iVar4;
  }
  if (local_98 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98);
  }
  return __return_storage_ptr__;
}

// InvokeOidcTokenToolAsync @ 142d28360

/* WARNING: Enum "Type": Some values do not have unique names */

FProcHandle __thiscall
FDesktopPlatformBase::InvokeOidcTokenToolAsync
          (FDesktopPlatformBase *this,FString *param_1,void **param_2,void **param_3)

{
  void *pvVar1;
  code *pcVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined8 *in_stack_00000028;
  int in_stack_ffffffffffffff90;
  int iVar8;
  undefined4 in_stack_ffffffffffffff94;
  uint in_stack_ffffffffffffffa4;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  wchar_t *local_28;
  int local_20;
  FString local_18;
  
  iVar8 = *(int *)(param_2 + 1);
  lVar6 = (longlong)iVar8;
  pvVar1 = *param_2;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = iVar8;
  if (iVar8 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,&local_38,iVar8,&local_2c);
    memcpy(local_38.Data,pvVar1,lVar6 * 2);
    in_stack_ffffffffffffff90 = iVar8;
  }
  pcVar2 = *(code **)(this->_padding_ + 400);
  pFVar3 = FPaths::RootDir(&local_18);
  (*pcVar2)(this,&local_28,pFVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (3 < (byte)LogDesktopPlatform._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
  }
  pvVar1 = (void *)*in_stack_00000028;
  pwVar4 = FWindowsPlatformProcess::BaseDir();
  uVar7 = 0x6c;
  if (local_30 != 0) {
    uVar7 = (char)local_38.Data;
  }
  pwVar5 = L"";
  if (local_20 != 0) {
    pwVar5 = local_28;
  }
  FWindowsPlatformProcess::CreateProc
            ((wchar_t *)param_1,pwVar5,(bool)uVar7,false,true,
             (uint *)CONCAT44(in_stack_ffffffffffffff94,
                              CONCAT31((int3)((uint)in_stack_ffffffffffffff90 >> 8),1)),0,
             (wchar_t *)((ulonglong)in_stack_ffffffffffffffa4 << 0x20),pwVar4,pvVar1);
  if (((param_1->Data).AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
     (2 < (byte)LogDesktopPlatform._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return (FProcHandle)param_1;
}

// InvokeOidcTokenToolSync @ 142d28520

bool __thiscall
FDesktopPlatformBase::InvokeOidcTokenToolSync
          (FDesktopPlatformBase *this,FText *param_1,FString *param_2,FString *param_3,
          FFeedbackContext *param_4,int *param_5,FString *param_6)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  FString *pFVar7;
  int iVar8;
  bool bVar9;
  undefined1 local_48 [8];
  void *local_40;
  void *local_38;
  FString local_30 [2];
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1269,"FDesktopPlatformBase::InvokeOidcTokenToolSync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DesktopPlatform\\Private\\DesktopPlatformBase.cpp"
               ,0x4f5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1269);
  }
  local_40 = (void *)0x0;
  local_38 = (void *)0x0;
  *param_5 = 1;
  bVar4 = FWindowsPlatformProcess::CreatePipe(&local_40,&local_38,false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformProcess::CreatePipe(PipeRead, PipeWrite)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DesktopPlatform\\Private\\DesktopPlatformBase.cpp"
                         ,0x4fb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  InvokeOidcTokenToolAsync(this,(FString *)local_48,(void **)param_3,&local_40);
  if (local_48 == (undefined1  [8])0x0) {
    bVar4 = false;
    *param_5 = -1;
    ::FString::operator=(param_6,L"");
  }
  else {
    bVar4 = FWindowsPlatformProcess::IsProcRunning((FProcHandle *)local_48);
    fVar3 = __real_3dcccccd;
    if (bVar4) {
      do {
        pFVar7 = FWindowsPlatformProcess::ReadPipe(local_30,local_40);
        iVar1 = (pFVar7->Data).ArrayNum;
        iVar8 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars(param_6,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar8);
        if (local_30[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30[0].Data.AllocatorInstance.Data);
        }
        FWindowsPlatformProcess::Sleep(fVar3);
        bVar4 = FWindowsPlatformProcess::IsProcRunning((FProcHandle *)local_48);
      } while (bVar4);
    }
    bVar4 = true;
    bVar6 = FWindowsPlatformProcess::GetProcReturnCode((FProcHandle *)local_48,param_5);
    if (!bVar6) {
      *param_5 = -1;
    }
  }
  FWindowsPlatformProcess::ClosePipe(local_40,local_38);
  if (local_48 != (undefined1  [8])0x0) {
    FWindowsPlatformProcess::CloseProc((FProcHandle *)local_48);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// InvokeUnrealBuildToolAsync @ 142d28710

/* WARNING: Enum "Type": Some values do not have unique names */

FProcHandle __thiscall
FDesktopPlatformBase::InvokeUnrealBuildToolAsync
          (FDesktopPlatformBase *this,FString *param_1,FOutputDevice *param_2,void **param_3,
          void **param_4,bool param_5)

{
  void *_Src;
  bool bVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  undefined1 uVar5;
  FScriptContainerElement *local_res18 [2];
  undefined7 in_stack_00000031;
  char in_stack_00000038;
  int in_stack_ffffffffffffff50;
  int iVar6;
  undefined4 in_stack_ffffffffffffff54;
  uint in_stack_ffffffffffffff64;
  FString local_78;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar6._0_1_ = param_2->bSuppressEventTag;
  iVar6._1_1_ = param_2->bAutoEmitLineTerminator;
  iVar6._2_2_ = *(undefined2 *)&param_2->field_0xa;
  lVar4 = (longlong)iVar6;
  _Src = (void *)param_2->_padding_;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = iVar6;
  if (iVar6 == 0) {
    local_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,&local_68,iVar6,&local_5c);
    memcpy(local_68.Data,_Src,lVar4 * 2);
    in_stack_ffffffffffffff50 = iVar6;
  }
  pFVar2 = FPaths::RootDir(&local_58);
  GetUnrealBuildToolExecutableFilename(this,&local_78,pFVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar1 = FApp::IsEngineInstalled();
  if (((!bVar1) && (in_stack_00000038 == '\0')) && (bSuccessfullyBuiltUBTOnce == false)) {
    FOutputDevice::Log((FOutputDevice *)param_3,L"Building UnrealBuildTool...");
    pFVar2 = FPaths::RootDir(&local_58);
    bVar1 = BuildUnrealBuildTool(this,pFVar2,(FOutputDevice *)param_3);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (!bVar1) {
      FOutputDevice::Log((FOutputDevice *)param_3,L"Failed to build UnrealBuildTool.");
      if (2 < (byte)LogDesktopPlatform._0_1_) {
        pFVar2 = FPaths::RootDir(&local_38);
        pFVar2 = ::operator/(&local_48,pFVar2,
                             L"Engine/Source/Programs/UnrealBuildTool/UnrealBuildTool.csproj");
        FPaths::ConvertRelativePathToFull(&local_58,pFVar2);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      goto LAB_142d288df;
    }
    bSuccessfullyBuiltUBTOnce = true;
  }
  FOutputDevice::LogfImpl((FOutputDevice *)param_3,L"Launching UnrealBuildTool... [%s %s]");
  uVar5 = 0x6c;
  if (local_60 != 0) {
    uVar5 = (char)local_68.Data;
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar3.Data = local_78.Data.AllocatorInstance.Data;
  }
  FWindowsPlatformProcess::CreateProc
            ((wchar_t *)local_res18,(wchar_t *)FVar3.Data,(bool)uVar5,false,true,
             (uint *)CONCAT44(in_stack_ffffffffffffff54,
                              CONCAT31((int3)((uint)in_stack_ffffffffffffff50 >> 8),1)),0,
             (wchar_t *)((ulonglong)in_stack_ffffffffffffff64 << 0x20),(void *)0x0,
             *(void **)CONCAT71(in_stack_00000031,param_5));
  if (local_res18[0] == (FScriptContainerElement *)0x0) {
    if (2 < (byte)LogDesktopPlatform._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
    }
    FOutputDevice::LogfImpl((FOutputDevice *)param_3,L"Failed to launch Unreal Build Tool. (%s)");
  }
  (param_1->Data).AllocatorInstance.Data = local_res18[0];
LAB_142d288df:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return (FProcHandle)param_1;
}

// InvokeUnrealBuildToolSync @ 142d289d0

bool __thiscall
FDesktopPlatformBase::InvokeUnrealBuildToolSync
          (FDesktopPlatformBase *this,FString *param_1,FOutputDevice *param_2,bool param_3,
          int *param_4,FString *param_5)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  FString *pFVar7;
  int iVar8;
  bool bVar9;
  FProcHandle local_res8;
  void *local_48;
  void *local_40;
  FString local_38 [2];
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId668,"FDesktopPlatformBase::InvokeUnrealBuildToolSync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DesktopPlatform\\Private\\DesktopPlatformBase.cpp"
               ,0x29c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId668);
  }
  local_48 = (void *)0x0;
  local_40 = (void *)0x0;
  bVar4 = FWindowsPlatformProcess::CreatePipe(&local_48,&local_40,false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformProcess::CreatePipe(PipeRead, PipeWrite)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DesktopPlatform\\Private\\DesktopPlatformBase.cpp"
                         ,0x2a0,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  (**(code **)(this->_padding_ + 0x118))
            (this,&local_res8,param_1,param_2,&local_48,&local_40,param_3);
  if (local_res8 == (FProcHandle)0x0) {
    bVar4 = false;
    *param_4 = -1;
    ::FString::operator=(param_5,L"");
  }
  else {
    bVar4 = FWindowsPlatformProcess::IsProcRunning(&local_res8);
    fVar3 = __real_3dcccccd;
    if (bVar4) {
      do {
        pFVar7 = FWindowsPlatformProcess::ReadPipe(local_38,local_48);
        iVar1 = (pFVar7->Data).ArrayNum;
        iVar8 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars(param_5,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar8);
        if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
        }
        FWindowsPlatformProcess::Sleep(fVar3);
        bVar4 = FWindowsPlatformProcess::IsProcRunning(&local_res8);
      } while (bVar4);
    }
    bVar4 = true;
    bVar6 = FWindowsPlatformProcess::GetProcReturnCode(&local_res8,param_4);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bGotReturnCode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DesktopPlatform\\Private\\DesktopPlatformBase.cpp"
                           ,0x2ae,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  FWindowsPlatformProcess::ClosePipe(local_48,local_40);
  if (local_res8 != (FProcHandle)0x0) {
    FWindowsPlatformProcess::CloseProc(&local_res8);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// IsPerforceBuild @ 142d28c20

bool __thiscall FDesktopPlatformBase::IsPerforceBuild(FDesktopPlatformBase *this,FString *param_1)

{
  IFileManager *pIVar1;
  byte extraout_var;
  ForAnyElementType FVar2;
  FString local_18;
  
  ::operator/(&local_18,param_1,L"Engine/Build/PerforceBuild.txt");
  pIVar1 = IFileManager::Get();
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)(extraout_var >> 7 ^ 1);
}

// IsPreferredEngineIdentifier @ 142d28d10

bool __thiscall
FDesktopPlatformBase::IsPreferredEngineIdentifier
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  iVar2 = ParseReleaseVersion(this,param_1);
  iVar3 = ParseReleaseVersion(this,param_2);
  if (iVar2 == iVar3) {
    pwVar4 = L"";
    if ((param_1->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    if ((param_2->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
    bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
  }
  else {
    bVar1 = iVar3 <= iVar2;
  }
  return bVar1;
}

// IsSourceDistribution @ 142d28d90

bool __thiscall
FDesktopPlatformBase::IsSourceDistribution(FDesktopPlatformBase *this,FString *param_1)

{
  IFileManager *pIVar1;
  byte extraout_var;
  ForAnyElementType FVar2;
  FString local_18;
  
  ::operator/(&local_18,param_1,L"Engine/Build/SourceDistribution.txt");
  pIVar1 = IFileManager::Get();
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)(extraout_var >> 7 ^ 1);
}

// IsStockEngineRelease @ 142d28f90

bool __thiscall
FDesktopPlatformBase::IsStockEngineRelease(FDesktopPlatformBase *this,FString *param_1)

{
  bool bVar1;
  FGuid local_18;
  
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
  bVar1 = FGuid::Parse(param_1,&local_18);
  return !bVar1;
}

// IsUnrealBuildToolAvailable @ 142d298c0

bool __thiscall FDesktopPlatformBase::IsUnrealBuildToolAvailable(FDesktopPlatformBase *this)

{
  bool bVar1;
  FString *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar1 = FApp::IsEngineInstalled();
  if (bVar1) {
    pFVar2 = FPaths::RootDir(&local_28);
    pFVar2 = GetUnrealBuildToolExecutableFilename(this,&local_38,pFVar2);
    bVar1 = FPaths::FileExists(pFVar2);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar2 = FPaths::RootDir(&local_18);
    pFVar2 = ::operator/(&local_28,pFVar2,
                         L"Engine/Source/Programs/UnrealBuildTool/UnrealBuildTool.csproj");
    FPaths::ConvertRelativePathToFull(&local_38,pFVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    bVar1 = FPaths::FileExists(&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsUnrealBuildToolRunning @ 142d29990

bool __thiscall FDesktopPlatformBase::IsUnrealBuildToolRunning(FDesktopPlatformBase *this)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  IFileManager *pIVar4;
  ForAnyElementType FVar5;
  undefined1 uVar6;
  undefined1 local_res10 [8];
  undefined1 *local_res18 [2];
  FString local_48;
  undefined1 local_38 [16];
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pFVar3 = FPaths::EngineIntermediateDir((FString *)local_38);
  local_10 = 7;
  local_28.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18 = L"UbtRuns";
  FPaths::CombineInternal(&local_48,&local_28,2);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  bVar2 = FPaths::DirectoryExists(&local_48);
  if (bVar2) {
    local_res10[0] = 0;
    pIVar4 = IFileManager::Get();
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    local_res18[0] = local_res10;
    local_38._8_8_ = local_res18;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDesktopPlatformBase::IsUnrealBuildToolRunning'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>
         ::Call;
    (**(code **)((longlong)*pIVar4 + 0x90))(pIVar4,FVar5.Data,local_38);
    uVar6 = local_res10[0];
  }
  else {
    uVar6 = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return (bool)uVar6;
}

// IsValidRootDirectory @ 142d2a400

bool __thiscall
FDesktopPlatformBase::IsValidRootDirectory(FDesktopPlatformBase *this,FString *param_1)

{
  char cVar1;
  IFileManager *pIVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FString local_28;
  FString local_18;
  
  ::operator/(&local_18,param_1,L"Engine/Binaries");
  FPaths::NormalizeDirectoryName(&local_18);
  pIVar2 = IFileManager::Get();
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,FVar3.Data);
  if (cVar1 == '\0') {
    bVar4 = false;
  }
  else {
    ::operator/(&local_28,param_1,L"Engine/Build");
    FPaths::NormalizeDirectoryName(&local_28);
    pIVar2 = IFileManager::Get();
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
    }
    cVar1 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,FVar3.Data);
    bVar4 = cVar1 != '\0';
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// LoadProjectFile @ 142d2a730

TSharedPtr<FJsonObject,1> * __thiscall
FDesktopPlatformBase::LoadProjectFile
          (FDesktopPlatformBase *this,TSharedPtr<FJsonObject,1> *__return_storage_ptr__,
          FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  bool bVar3;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar4;
  wchar_t *pwVar5;
  TSharedPtr<FJsonObject,1> local_78;
  FString local_68;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_58;
  StackState local_48;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FFileHelper::LoadFileToString(&local_68,pwVar5,None,0);
  if (!bVar3) {
    __return_storage_ptr__->Object = (FJsonObject *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  local_78.Object = (FJsonObject *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = TJsonStringReader<wchar_t>::Create(&local_58,&local_68);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  local_48.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Identifier.Data.ArrayNum = 0;
  local_48.Identifier.Data.ArrayMax = 0;
  local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Array.ArrayNum = 0;
  local_48.Array.ArrayMax = 0;
  local_48.Object.Object = (FJsonObject *)0x0;
  local_48.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_48,None);
  if (bVar3) {
    bVar3 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_48,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (local_78.Object != (FJsonObject *)0x0)) {
      __return_storage_ptr__->Object = local_78.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_78.SharedReferenceCount.ReferenceController;
      local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_78.Object = (FJsonObject *)0x0;
      goto LAB_142d2a839;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->Object = (FJsonObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_142d2a839:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OpenProject @ 142d2b3b0

bool __thiscall FDesktopPlatformBase::OpenProject(FDesktopPlatformBase *this,FString *param_1)

{
  wchar_t *pwVar1;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformProcess::LaunchFileInDefaultExternalApplication(pwVar1,(wchar_t *)0x0,Open,true);
  return true;
}

// ParseReleaseVersion @ 142d2bc70

int __thiscall
FDesktopPlatformBase::ParseReleaseVersion(FDesktopPlatformBase *this,FString *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  longlong lVar7;
  wchar_t *local_res10 [3];
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar5 = _wcstoui64(_Str,local_res10,10);
  if (uVar5 < 0x7fff) {
    wVar1 = *local_res10[0];
    local_res10[0] = local_res10[0] + 1;
    if (wVar1 == L'.') {
      uVar6 = _wcstoui64(local_res10[0],local_res10,10);
      if ((uVar6 < 0x7fff) && (*local_res10[0] == L'\0')) {
        lVar7 = uVar5 * 0x10000 + uVar6;
        iVar4 = (int)lVar7;
        if ((lVar7 != iVar4) || (iVar4 < 0)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
        }
        return iVar4;
      }
    }
  }
  return -1;
}

// ReadHordeUrlWithoutCache @ 142d2f940

FString * __cdecl
FDesktopPlatformBase::ReadHordeUrlWithoutCache(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString local_28;
  FString local_18;
  
  FWindowsPlatformMisc::GetEnvironmentVariable(&local_28,L"UE_HORDE_URL");
  if (local_28.Data.ArrayNum < 2) {
    bVar2 = FWindowsPlatformMisc::QueryRegKey
                      ((HKEY__ *)0xffffffff80000001,L"SOFTWARE\\Epic Games\\Horde",L"Url",&local_28)
    ;
    if ((bVar2) && (1 < local_28.Data.ArrayNum)) {
      pwVar3 = L"Windows registry \"HKEY_CURRENT_USER\\SOFTWARE\\Epic Games\\Horde\"";
    }
    else {
      bVar2 = FWindowsPlatformMisc::QueryRegKey
                        ((HKEY__ *)&DAT_ffffffff80000002,L"SOFTWARE\\Epic Games\\Horde",L"Url",
                         &local_28);
      if ((!bVar2) || (local_28.Data.ArrayNum < 2)) {
        bVar2 = FConfigCacheIni::GetString(GConfig,L"Horde",L"ServerUrl",&local_28,&GEngineIni);
        if (!bVar2) {
          ::FString::operator=(param_1,L"Not found");
          (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (__return_storage_ptr__->Data).ArrayNum = 0;
          (__return_storage_ptr__->Data).ArrayMax = 0;
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          return __return_storage_ptr__;
        }
        ::FString::PrintfImpl(&local_18,L"%s INI configuration");
        if (param_1 != &local_18) {
          pFVar1 = (param_1->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
          (param_1->Data).ArrayNum = local_18.Data.ArrayNum;
          (param_1->Data).ArrayMax = local_18.Data.ArrayMax;
          local_18.Data.ArrayNum = 0;
          local_18.Data.ArrayMax = 0;
          local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        goto LAB_142d2f97d;
      }
      pwVar3 = L"Windows registry \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Epic Games\\Horde\"";
    }
  }
  else {
    pwVar3 = L"Environment variable \"UE_HORDE_URL\"";
  }
  ::FString::operator=(param_1,pwVar3);
LAB_142d2f97d:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
  return __return_storage_ptr__;
}

// ReadLauncherInstallationList @ 142d2faf0

void __thiscall FDesktopPlatformBase::ReadLauncherInstallationList(FDesktopPlatformBase *this)

{
  TJsonStringReader<wchar_t> *pTVar1;
  TSharedPtr<FJsonValue,1> *pTVar2;
  FJsonObject *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  wchar_t *pwVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  IFileManager *pIVar8;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar9;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined8 *puVar11;
  int iVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  ulonglong uVar15;
  TReferenceControllerBase<1> *pTVar16;
  ulonglong uVar17;
  TPairInitializer<FString_const_&,FString_const_&> local_res10;
  TReferenceControllerBase<1> *local_res20;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_198;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  TSharedPtr<FJsonObject,1> local_178;
  FString local_168;
  StackState local_158;
  FString local_120;
  FString local_110;
  TStringView<wchar_t> local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FString *local_88;
  FString *local_80;
  FString local_78;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  pwVar6 = FWindowsPlatformProcess::ApplicationSettingsDir();
  pTVar7 = &::FString::FString(&local_78,pwVar6)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_198,pTVar7,0x2c - (uint)(pTVar7->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_198,L"UnrealEngineLauncher/LauncherInstalled.dat",0x2a);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pIVar8 = IFileManager::Get();
  (**(code **)((longlong)*pIVar8 + 0xd8))(pIVar8,&local_res10.Value);
  if (local_res10.Value == (FString *)0x0) {
    if (*(int *)&(this->LauncherInstallationList).field_0x8 !=
        *(int *)&(this->LauncherInstallationList).field_0x34) goto LAB_142d300d7;
    ::FString::FString(&local_d8,L"UE_4.0");
    ::FString::FString(&local_e8,L"40003");
    CheckForLauncherEngineInstallation(this,&local_e8,&local_d8,&this->LauncherInstallationList);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_b8,L"UE_4.1");
    ::FString::FString(&local_c8,L"1040003");
    CheckForLauncherEngineInstallation(this,&local_c8,&local_b8,&this->LauncherInstallationList);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (local_res10.Value == (FString *)(this->LauncherInstallationTimestamp).Ticks)
    goto LAB_142d300d7;
    uVar15 = 0;
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_198.ArrayNum != 0) {
      FVar13.Data = local_198.AllocatorInstance.Data;
    }
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    bVar4 = FFileHelper::LoadFileToString(&local_168,(wchar_t *)FVar13.Data,None,0);
    local_b8.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
    if (!bVar4) goto LAB_142d300cd;
    local_178.Object = (FJsonObject *)0x0;
    local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = TJsonStringReader<wchar_t>::Create(&local_68,&local_168);
    pTVar16 = (pTVar9->SharedReferenceCount).ReferenceController;
    pTVar1 = pTVar9->Object;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res20 = pTVar16;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    local_158.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Identifier.Data.ArrayNum = 0;
    local_158.Identifier.Data.ArrayMax = 0;
    local_158.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Array.ArrayNum = 0;
    local_158.Array.ArrayMax = 0;
    local_158.Object.Object = (FJsonObject *)0x0;
    local_158.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar1,&local_158,None);
    if (bVar4) {
      bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_158,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_158.Array.AllocatorInstance.Data,
                 local_158.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_158.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_158.Array.AllocatorInstance.Data);
      }
      if ((TSharedPtr<FJsonValue,1> *)local_158.Identifier.Data.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_158.Identifier.Data.AllocatorInstance.Data);
      }
      if ((bVar4) && (local_178.Object != (FJsonObject *)0x0)) {
        if ((local_178.Object == (FJsonObject *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uStack_a0 = 0x10;
        local_a8 = L"InstallationList";
        local_58._12_4_ = uStack_9c;
        local_58.Size = 0x10;
        local_58.DataPtr = L"InstallationList";
        pTVar10 = FJsonObject::GetArrayField(local_178.Object,&local_58);
        local_1a8.Data = (FScriptContainerElement *)0x0;
        iVar12 = pTVar10->ArrayNum;
        pTVar2 = (TSharedPtr<FJsonValue,1> *)(pTVar10->AllocatorInstance).Data;
        local_1a0 = iVar12;
        if (iVar12 == 0) {
          local_19c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar12,0,&local_1a8,iVar12,&local_19c);
          ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                    (local_1a8.Data,pTVar2,iVar12);
        }
        uVar17 = uVar15;
        if (0 < local_1a0) {
          do {
            uVar14 = (uint)uVar15;
            uVar5 = 0;
            if ((int)uVar14 < local_1a0) {
              uVar5 = ~uVar14 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar13.Data = local_1a8.Data;
            if ((*(longlong *)(local_1a8.Data + uVar17) == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar11 = (undefined8 *)(**(code **)**(undefined8 **)(FVar13.Data + uVar17))();
            pTVar16 = (TReferenceControllerBase<1> *)puVar11[1];
            this_00 = (FJsonObject *)*puVar11;
            if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((this_00 == (FJsonObject *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_188 = L"AppName";
            uStack_180 = 7;
            local_f8._12_4_ = uStack_17c;
            local_f8.Size = 7;
            local_f8.DataPtr = L"AppName";
            FJsonObject::GetStringField(this_00,&local_110,&local_f8);
            if ((this_00 == (FJsonObject *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStack_90 = 0xf;
            local_98 = L"InstallLocation";
            local_48._12_4_ = uStack_8c;
            local_48.Size = 0xf;
            local_48.DataPtr = L"InstallLocation";
            FJsonObject::GetStringField(this_00,&local_120,&local_48);
            iVar12 = local_110.Data.ArrayNum + -1;
            if (local_110.Data.ArrayNum == 0) {
              iVar12 = 0;
            }
            if (0 < iVar12) {
              iVar12 = local_120.Data.ArrayNum + -1;
              if (local_120.Data.ArrayNum == 0) {
                iVar12 = 0;
              }
              if (0 < iVar12) {
                FPaths::NormalizeDirectoryName(&local_120);
                local_88 = &local_110;
                local_80 = &local_120;
                TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                          ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)&this->LauncherInstallationList,&local_res10,(bool *)&local_88);
              }
            }
            if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.Data.AllocatorInstance.Data);
            }
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar16);
            uVar15 = (ulonglong)(uVar14 + 1);
            pTVar16 = local_res20;
            uVar17 = uVar17 + 0x10;
          } while ((int)(uVar14 + 1) < local_1a0);
        }
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_1a8.Data,local_1a0);
        FVar13.Data = local_1a8.Data;
        goto LAB_142d30092;
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_158.Array.AllocatorInstance.Data,
                 local_158.Array.ArrayNum);
      FVar13.Data = local_158.Identifier.Data.AllocatorInstance.Data;
      if ((TSharedPtr<FJsonValue,1> *)local_158.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_158.Array.AllocatorInstance.Data);
        FVar13.Data = local_158.Identifier.Data.AllocatorInstance.Data;
      }
LAB_142d30092:
      if ((TSharedPtr<FJsonValue,1> *)FVar13.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(FVar13.Data);
      }
    }
    (this->LauncherInstallationTimestamp).Ticks = (long64)local_res10.Value;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    local_b8.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
  }
LAB_142d300cd:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
LAB_142d300d7:
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  return;
}

// ReadTargetInfo @ 142d30110

bool __cdecl
FDesktopPlatformBase::ReadTargetInfo
          (FString *param_1,TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  undefined8 *puVar3;
  FJsonObject *this;
  code *pcVar4;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_res18;
  longlong local_res20;
  FScriptContainerElement local_1b8 [8];
  FString local_1b0;
  TSharedPtr<FJsonObject,1> local_1a0;
  FString local_190;
  StackState local_180;
  FString local_148;
  TReferenceControllerBase<1> *local_138;
  FString local_130;
  wchar_t *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  undefined8 local_a8;
  int local_a0;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  uVar15 = 0;
  local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.Data.ArrayNum = 0;
  local_190.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar7 = FFileHelper::LoadFileToString(&local_190,pwVar14,None,0);
  if (!bVar7) {
    bVar7 = false;
    goto LAB_142d30224;
  }
  local_1a0.Object = (FJsonObject *)0x0;
  local_1a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = TJsonStringReader<wchar_t>::Create(&local_98,&local_190);
  pTVar2 = pTVar11->Object;
  local_138 = (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_138 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_138->SharedReferenceCount = (atomic<int>)((int)local_138->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  local_180.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.Identifier.Data.ArrayNum = 0;
  local_180.Identifier.Data.ArrayMax = 0;
  local_180.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.Array.ArrayNum = 0;
  local_180.Array.ArrayMax = 0;
  local_180.Object.Object = (FJsonObject *)0x0;
  local_180.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar7 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_180,None);
  if (bVar7) {
    bVar7 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_180,&local_1a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_180.Array.AllocatorInstance.Data,
               local_180.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_180.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_180.Array.AllocatorInstance.Data);
    }
    if (local_180.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Identifier.Data.AllocatorInstance.Data);
    }
    if ((!bVar7) || (local_1a0.Object == (FJsonObject *)0x0)) goto LAB_142d3020f;
    if ((local_1a0.Object == (FJsonObject *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    uStack_110 = 7;
    local_118 = L"Targets";
    local_88._12_4_ = uStack_10c;
    local_88.Size = 7;
    local_88.DataPtr = L"Targets";
    bVar7 = FJsonObject::TryGetArrayField(local_1a0.Object,&local_88,&local_res18);
    if (!bVar7) goto LAB_142d3020f;
    piVar1 = &param_2->ArrayNum;
    iVar19 = *piVar1;
    uVar10 = local_res18->ArrayNum;
    if (iVar19 < (int)uVar10) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,uVar10 - iVar19,&param_2->AllocatorInstance,piVar1,
                         &param_2->ArrayMax);
      DefaultConstructItems<FTargetInfo,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x28,uVar10 - iVar19);
    }
    else {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if ((int)uVar10 < iVar19) {
        uVar17 = iVar19 - uVar10;
        if (((int)(uVar17 | uVar10) < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        if (uVar17 != 0) {
          TArray<FTargetInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl(param_2,uVar10,uVar17);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
    FPaths::GetPath(&local_130,param_1);
    if (0 < local_res18->ArrayNum) {
      local_res20 = 0;
      uVar20 = uVar15;
      do {
        lVar6 = local_res20;
        pTVar5 = local_res18;
        uVar17 = (uint)uVar15;
        uVar18 = ~uVar17 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar17 < local_res18->ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        puVar3 = *(undefined8 **)((pTVar5->AllocatorInstance).Data + lVar6);
        if (*(int *)(puVar3 + 1) != 6) {
LAB_142d30911:
          bVar7 = false;
          goto LAB_142d308e3;
        }
        plVar12 = (longlong *)(**(code **)*puVar3)();
        if ((*plVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        this = (FJsonObject *)*plVar12;
        uVar10 = 0;
        if ((int)uVar17 < *piVar1) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        local_108 = L"Name";
        uStack_100 = 4;
        local_78._12_4_ = uStack_fc;
        local_78.Size = 4;
        local_78.DataPtr = L"Name";
        bVar7 = FJsonObject::TryGetStringField
                          (this,&local_78,(FString *)((param_2->AllocatorInstance).Data + uVar20));
        if (!bVar7) goto LAB_142d30911;
        uVar10 = 0;
        if ((int)uVar17 < *piVar1) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        local_f8 = L"Path";
        uStack_f0 = 4;
        local_68._12_4_ = uStack_ec;
        local_68.Size = 4;
        local_68.DataPtr = L"Path";
        bVar7 = FJsonObject::TryGetStringField
                          (this,&local_68,
                           (FString *)((param_2->AllocatorInstance).Data + uVar20 + 0x10));
        if (!bVar7) goto LAB_142d30911;
        uStack_e0 = 4;
        local_e8 = L"Type";
        local_58._12_4_ = uStack_dc;
        local_58.Size = 4;
        local_58.DataPtr = L"Type";
        local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.Data.ArrayNum = 0;
        local_1b0.Data.ArrayMax = 0;
        bVar7 = FJsonObject::TryGetStringField(this,&local_58,&local_1b0);
        if (!bVar7) {
LAB_142d30902:
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
          goto LAB_142d30911;
        }
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_1b0.Data.ArrayNum != 0) {
          FVar16.Data = local_1b0.Data.AllocatorInstance.Data;
        }
        uVar10 = 0;
        if ((int)uVar17 < *piVar1) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        bVar7 = LexTryParseString((EBuildTargetType *)
                                  ((param_2->AllocatorInstance).Data + uVar20 + 0x20),
                                  (wchar_t *)FVar16.Data);
        if (!bVar7) goto LAB_142d30902;
        uVar10 = 0;
        if ((int)uVar17 < *piVar1) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        if ((param_2->AllocatorInstance).Data[uVar20 + 0x20] == (FScriptContainerElement)0x0)
        goto LAB_142d30902;
        uStack_d0 = 0xd;
        local_d8 = L"DefaultTarget";
        local_48._12_4_ = uStack_cc;
        local_48.Size = 0xd;
        local_48.DataPtr = L"DefaultTarget";
        bVar7 = FJsonObject::TryGetBoolField(this,&local_48,(bool *)local_1b8);
        if (bVar7) {
          uVar10 = 0;
          if ((int)uVar17 < *piVar1) {
            uVar10 = uVar18;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          pFVar13 = (param_2->AllocatorInstance).Data + uVar20 + 0x21;
          if (local_1b8 != pFVar13) {
            *pFVar13 = local_1b8[0];
            pFVar13[1] = (FScriptContainerElement)0x1;
          }
        }
        uVar10 = 0;
        if ((int)uVar17 < *piVar1) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar13 = (param_2->AllocatorInstance).Data;
        local_b8.DataPtr = (wchar_t *)local_130.Data.AllocatorInstance.Data;
        local_a8 = *(undefined8 *)(pFVar13 + uVar20 + 0x10);
        local_b8.Size = local_130.Data.ArrayNum - 1;
        if (local_130.Data.ArrayNum == 0) {
          local_b8.Size = 0;
        }
        iVar19 = *(int *)(pFVar13 + uVar20 + 0x18);
        local_a0 = iVar19 + -1;
        if (iVar19 == 0) {
          local_a0 = 0;
        }
        FPaths::CombineInternal(&local_c8,&local_b8,2);
        FPaths::ConvertRelativePathToFull(&local_148,&local_c8);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        FPaths::MakePlatformFilename(&local_148);
        uVar10 = 0;
        if ((int)uVar17 < *piVar1) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar19 = local_148.Data.ArrayNum + -1;
        if (local_148.Data.ArrayNum == 0) {
          iVar19 = 0;
        }
        ::FString::AssignRange
                  ((FString *)((param_2->AllocatorInstance).Data + uVar20 + 0x10),
                   (wchar_t *)local_148.Data.AllocatorInstance.Data,iVar19);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        local_res20 = local_res20 + 0x10;
        uVar15 = (ulonglong)(uVar17 + 1);
        uVar20 = uVar20 + 0x28;
      } while ((int)(uVar17 + 1) < local_res18->ArrayNum);
    }
    bVar7 = true;
LAB_142d308e3:
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_180.Array.AllocatorInstance.Data,
               local_180.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_180.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_180.Array.AllocatorInstance.Data);
    }
    if (local_180.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Identifier.Data.AllocatorInstance.Data);
    }
LAB_142d3020f:
    bVar7 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_138);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.SharedReferenceCount.ReferenceController);
LAB_142d30224:
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// RunUnrealBuildTool @ 142d31810

bool __thiscall
FDesktopPlatformBase::RunUnrealBuildTool
          (FDesktopPlatformBase *this,FText *param_1,FString *param_2,FString *param_3,
          FFeedbackContext *param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x120))();
  return (bool)uVar1;
}

// SaveProjectFile @ 142d31bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FDesktopPlatformBase::SaveProjectFile
          (FDesktopPlatformBase *this,FString *param_1,TSharedPtr<FJsonObject,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FArchiveState *pFVar6;
  FArchiveState *this_00;
  TReferenceControllerBase<1> *pTVar7;
  IFileManager *pIVar8;
  FArchiveState *pFVar9;
  wchar_t *pwVar10;
  FArchiveState *pFVar11;
  TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> local_a8;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *local_a0;
  wchar_t *local_98;
  undefined8 local_90;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_88;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> local_78;
  TSharedPtr<FJsonObject,1> local_68;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  
  pFVar11 = (FArchiveState *)0x0;
  local_98 = (wchar_t *)0x0;
  local_90 = 0;
  pFVar6 = ::operator_new(0x40);
  local_a8.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)pFVar11;
  if (pFVar6 != (FArchiveState *)0x0) {
    this_00 = ::operator_new(0xa8);
    pFVar9 = pFVar11;
    if (this_00 != (FArchiveState *)0x0) {
      this_00->_padding_ = 0;
      this_00->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this_00->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this_00->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this_00->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this_00->field_0x28 = 0;
      this_00->ArSerializingDefaults = 0;
      this_00->ArPortFlags = 0;
      this_00->ArMaxSerializeSize = 0;
      (this_00->ArUEVer).FileVersionUE4 = 0;
      (this_00->ArUEVer).FileVersionUE5 = 0;
      this_00->ArLicenseeUEVer = 0;
      (this_00->ArEngineVer).Major = 0;
      (this_00->ArEngineVer).Minor = 0;
      (this_00->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this_00->ArEngineVer).field_0x6 = 0;
      (this_00->ArEngineVer).Changelist = 0;
      this_00->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this_00->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this_00->SavePackageData = (FArchiveSavePackageData *)0x0;
      this_00->SerializedProperty = (FProperty *)0x0;
      this_00->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this_00->bCustomVersionsAreReset = 0;
      this_00->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this_00);
      this_00[1]._padding_ = 0;
      this_00->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_
      ;
      this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)&pFVar6->field_0x28;
      this_00[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      FArchiveState::SetIsSaving(this_00,true);
      (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
      this_00->_padding_ = (longlong)&___7FMemoryWriter__6B_;
      pFVar9 = this_00;
    }
    pFVar6->ActiveFPLB = (FFastPathLoadBuffer *)pFVar9;
    pFVar6->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
    pFVar6->ArMaxSerializeSize = (long64)&local_98;
    (pFVar6->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
    (pFVar6->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
    (pFVar6->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
    *(undefined8 *)&pFVar6->field_0x28 = 0;
    pFVar6->ArSerializingDefaults = 0;
    pFVar6->ArPortFlags = 0;
    local_a8.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)pFVar6;
  }
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1>::
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>
            (&local_78,&local_a8);
  local_a0 = local_78.Object;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pwVar10 = L"";
  if ((param_2->Object == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = ::operator_new(0x38);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_88.Object = ___xmm_00000000000000000000000000000010;
    local_88.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pFVar6 = ::operator_new(0x30);
    if (pFVar6 == (FArchiveState *)0x0) {
      pTVar7[2]._padding_ = 0x10;
      pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      *(undefined4 *)&pFVar6->ActiveFPLB = 1;
      *(undefined4 *)((longlong)&pFVar6->ActiveFPLB + 4) = 1;
      pFVar6->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.Object = pFVar2;
      local_68.SharedReferenceCount.ReferenceController = pTVar1;
      FJsonValueObject::FJsonValueObject((FJsonValueObject *)&pFVar6->InlineFPLB,&local_68);
      if ((&pFVar6->InlineFPLB == (FFastPathLoadBuffer *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pTVar7[2]._padding_ = (longlong)&pFVar6->InlineFPLB;
      *(FArchiveState **)&pTVar7[2].SharedReferenceCount = pFVar6;
      LOCK();
      *(int *)&pFVar6->ActiveFPLB = *(int *)&pFVar6->ActiveFPLB + 1;
      UNLOCK();
      pFVar11 = pFVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    local_88.Object = (FElement *)(pTVar7 + 1);
    *(undefined2 *)&pTVar7[3]._padding_ = 0;
    local_88.SharedReferenceCount.ReferenceController = pTVar7;
    if ((local_88.Object == (FElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                    (&local_88,(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)local_a0,
                     true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar4) {
    pIVar8 = IFileManager::Get();
    if ((param_1->Data).ArrayNum != 0) {
      pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    local_58 = local_98;
    iStack_50 = (int)local_90 + -1;
    if ((int)local_90 == 0) {
      iStack_50 = 0;
    }
    local_48._12_4_ = uStack_4c;
    local_48.Size = iStack_50;
    local_48.DataPtr = local_98;
    bVar4 = FFileHelper::SaveStringToFile(&local_48,pwVar10,AutoDetect,pIVar8,0);
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if (local_98 != (wchar_t *)0x0) {
        FMemory::Free(local_98);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if (local_98 != (wchar_t *)0x0) {
    FMemory::Free(local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// SetEngineIdentifierForProject @ 142d32390

bool __thiscall
FDesktopPlatformBase::SetEngineIdentifierForProject
          (FDesktopPlatformBase *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *_Src;
  char cVar1;
  bool bVar2;
  int iVar3;
  FUProjectDictionary *this_00;
  longlong lVar4;
  FString local_48;
  FString local_38;
  TSharedPtr<FJsonObject,1> local_28;
  
  LoadProjectFile(this,&local_28,param_1);
  if (local_28.Object == (FJsonObject *)0x0) {
    bVar2 = false;
  }
  else {
    local_48.Data.ArrayNum = (param_2->Data).ArrayNum;
    lVar4 = (longlong)local_48.Data.ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
    }
    iVar3 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    if (0 < iVar3) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      cVar1 = (**(code **)(this->_padding_ + 0x68))(this,&local_48,&local_38);
      if (cVar1 != '\0') {
        this_00 = GetCachedProjectDictionary(this,&local_38);
        bVar2 = FUProjectDictionary::IsForeignProject(this_00,param_1);
        if (!bVar2) {
          ::FString::Empty(&local_48);
        }
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    ::FString::FString(&local_38,L"EngineAssociation");
    FJsonObject::SetStringField(local_28.Object,&local_38,&local_48);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = SaveProjectFile(this,param_1,&local_28);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// SetHordeUrl @ 142d32530

void __thiscall FDesktopPlatformBase::SetHordeUrl(FDesktopPlatformBase *this,FString *param_1)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::operator=(&this->HordeServerUrl,param_1);
  this->bInitializedHordeServerUrl = true;
  ::FString::operator=(&this->HordeServerUrlConfigSource,L"Unspecified");
  if ((param_1->Data).ArrayNum < 2) {
    ::FString::FString(&local_18,L"Url");
    ::FString::FString(&local_28,L"Horde");
    ::FString::FString(&local_38,L"Epic Games");
    FWindowsPlatformMisc::DeleteStoredValue(&local_38,&local_28,&local_18);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      local_38.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    }
  }
  else {
    ::FString::FString(&local_38,L"Url");
    ::FString::FString(&local_28,L"Horde");
    ::FString::FString(&local_18,L"Epic Games");
    FWindowsPlatformMisc::SetStoredValue(&local_18,&local_28,&local_38,param_1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// TryGetEngineVersion @ 142d33ea0

bool __thiscall
FDesktopPlatformBase::TryGetEngineVersion
          (FDesktopPlatformBase *this,FString *param_1,FEngineVersion *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  wchar_t wVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FString *pFVar16;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar17;
  FEngineVersion *pFVar18;
  FScriptContainerElement *pFVar19;
  wchar_t *pwVar20;
  ForAnyElementType FVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  int local_res20;
  ForAnyElementType local_288;
  undefined8 local_280;
  uint local_278 [2];
  TSharedPtr<FJsonObject,1> local_270;
  int local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  int local_250;
  uint local_24c;
  int local_248;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  StackState local_200;
  FString local_1c8;
  FString local_1b8;
  wchar_t *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  wchar_t *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FString local_148;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FEngineVersion local_78;
  FEngineVersion local_58;
  
  uVar15 = 0;
  local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.Data.ArrayNum = 0;
  local_210.Data.ArrayMax = 0;
  pFVar16 = ::operator/(&local_148,param_1,L"Engine/Build/Build.version");
  if ((pFVar16->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
  }
  bVar6 = FFileHelper::LoadFileToString(&local_210,pwVar20,None,0);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    local_270.Object = (FJsonObject *)0x0;
    local_270.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar17 = TJsonStringReader<wchar_t>::Create(&local_138,&local_210);
    pTVar1 = (pTVar17->SharedReferenceCount).ReferenceController;
    pTVar2 = pTVar17->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.SharedReferenceCount.ReferenceController);
    local_200.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.Identifier.Data.ArrayNum = 0;
    local_200.Identifier.Data.ArrayMax = 0;
    local_200.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.Array.ArrayNum = 0;
    local_200.Array.ArrayMax = 0;
    local_200.Object.Object = (FJsonObject *)0x0;
    local_200.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar6 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar2,&local_200,None);
    if (bVar6) {
      bVar6 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_200,&local_270);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_200.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_200.Array.AllocatorInstance.Data,
                 local_200.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_200.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_200.Array.AllocatorInstance.Data);
      }
      if (local_200.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Identifier.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && (local_270.Object != (FJsonObject *)0x0)) {
        local_254 = 0;
        local_258 = 0;
        local_25c = 0;
        if ((local_270.Object == (FJsonObject *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        uStack_1a0 = 0xc;
        local_1a8 = L"MajorVersion";
        local_128._12_4_ = uStack_19c;
        local_128.Size = 0xc;
        local_128.DataPtr = L"MajorVersion";
        bVar6 = FJsonObject::TryGetNumberField(local_270.Object,&local_128,(int *)&local_254);
        if (bVar6) {
          if ((local_270.Object == (FJsonObject *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_198 = L"MinorVersion";
          uStack_190 = 0xc;
          local_118._12_4_ = uStack_18c;
          local_118.Size = 0xc;
          local_118.DataPtr = L"MinorVersion";
          bVar6 = FJsonObject::TryGetNumberField(local_270.Object,&local_118,(int *)&local_258);
          if (bVar6) {
            if ((local_270.Object == (FJsonObject *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            local_188 = L"PatchVersion";
            uStack_180 = 0xc;
            local_108._12_4_ = uStack_17c;
            local_108.Size = 0xc;
            local_108.DataPtr = L"PatchVersion";
            bVar6 = FJsonObject::TryGetNumberField(local_270.Object,&local_108,(int *)&local_25c);
            if (bVar6) {
              local_278[0] = 0;
              if ((local_270.Object == (FJsonObject *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              local_158 = L"Changelist";
              uStack_150 = 10;
              local_f8._12_4_ = uStack_14c;
              local_f8.Size = 10;
              local_f8.DataPtr = L"Changelist";
              bVar6 = FJsonObject::TryGetNumberField(local_270.Object,&local_f8,(int *)local_278);
              if (!bVar6) {
                local_278[0] = 0;
              }
              local_260 = 0;
              if ((local_270.Object == (FJsonObject *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              local_178 = L"IsLicenseeVersion";
              uStack_170 = 0x11;
              local_e8._12_4_ = uStack_16c;
              local_e8.Size = 0x11;
              local_e8.DataPtr = L"IsLicenseeVersion";
              bVar6 = FJsonObject::TryGetNumberField(local_270.Object,&local_e8,&local_260);
              if (!bVar6) {
                local_260 = 0;
              }
              local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_230.Data.ArrayNum = 0;
              local_230.Data.ArrayMax = 0;
              if ((local_270.Object == (FJsonObject *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              local_168 = L"BranchName";
              uStack_160 = 10;
              local_d8._12_4_ = uStack_15c;
              local_d8.Size = 10;
              local_d8.DataPtr = L"BranchName";
              bVar6 = FJsonObject::TryGetStringField(local_270.Object,&local_d8,&local_230);
              if (!bVar6) {
                if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_230.Data.AllocatorInstance.Data);
                }
                local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_230.Data.ArrayNum = 0;
                local_230.Data.ArrayMax = 0;
              }
              uVar15 = local_278[0];
              if (local_260 != 0) {
                uVar15 = FEngineVersionBase::EncodeLicenseeChangelist(local_278[0]);
              }
              uVar9 = (ushort)local_25c;
              if (((local_25c != (local_25c & 0xffff)) || ((int)local_25c < 0)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IntFitsIn<OutType>(In)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                     ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"
                                    ), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              uVar10 = (ushort)local_258;
              if (((local_258 != (local_258 & 0xffff)) || ((int)local_258 < 0)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IntFitsIn<OutType>(In)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                     ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"
                                    ), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              uVar11 = (ushort)local_254;
              if (((local_254 != (local_254 & 0xffff)) || ((int)local_254 < 0)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IntFitsIn<OutType>(In)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                     ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"
                                    ), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              pFVar18 = FEngineVersion::FEngineVersion
                                  (&local_78,uVar11,uVar10,uVar9,uVar15,&local_230);
              FEngineVersion::operator=(param_2,pFVar18);
              if (local_78.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Branch.Data.AllocatorInstance.Data);
              }
              if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_230.Data.AllocatorInstance.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar1);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_270.SharedReferenceCount.ReferenceController);
              bVar6 = true;
              goto LAB_142d35199;
            }
          }
        }
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_200.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_200.Array.AllocatorInstance.Data,
                 local_200.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_200.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_200.Array.AllocatorInstance.Data);
      }
      if (local_200.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Identifier.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_270.SharedReferenceCount.ReferenceController);
  }
  local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220.Data.ArrayNum = 0;
  local_220.Data.ArrayMax = 0;
  pFVar16 = ::operator/(&local_c8,param_1,L"Engine/Source/Runtime/Launch/Resources/Version.h");
  if ((pFVar16->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
  }
  bVar6 = FFileHelper::LoadFileToString(&local_220,pwVar20,None,0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    iVar13 = -1;
    local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_220.Data.ArrayNum != 0) {
      FVar21.Data = local_220.Data.AllocatorInstance.Data;
    }
    iVar14 = -1;
    local_240.Data.ArrayNum = 0;
    local_240.Data.ArrayMax = 0;
    local_250 = -1;
    local_res20 = -1;
    wVar8 = *(wchar_t *)FVar21.Data;
    local_24c = 0;
    local_248 = 0;
    uVar24 = uVar15;
    if (wVar8 == L'\0') {
LAB_142d35174:
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      goto LAB_142d35181;
    }
    do {
      iVar12 = iswspace(wVar8);
      while (iVar12 != 0) {
        pFVar22 = FVar21.Data + 2;
        FVar21.Data = FVar21.Data + 2;
        iVar12 = iswspace(*(wchar_t *)pFVar22);
      }
      wVar8 = *(wchar_t *)FVar21.Data;
      local_288.Data = (FScriptContainerElement *)0x0;
      local_280 = 0;
      while ((wVar8 != L'\n' && (iVar14 = local_250, uVar15 = local_24c, wVar8 != L'\0'))) {
        if (((ushort)wVar8 < 0x21) && ((0x100002200U >> ((ulonglong)(ushort)wVar8 & 0x3f) & 1) != 0)
           ) {
          pFVar22 = FVar21.Data + 2;
          goto LAB_142d348d5;
        }
        iVar14 = iswalnum(wVar8);
        pFVar22 = FVar21.Data;
        if ((iVar14 == 0) && (wVar8 != L'_')) {
          if (*(wchar_t *)FVar21.Data == L'\"') {
            pFVar23 = FVar21.Data + 2;
            wVar8 = *(wchar_t *)pFVar23;
            pFVar22 = pFVar23;
            while ((wVar8 != L'\0' &&
                   ((pFVar22 == pFVar23 || (*(wchar_t *)(pFVar22 + -2) != L'\"'))))) {
              pFVar22 = pFVar22 + 2;
              wVar8 = *(wchar_t *)pFVar22;
            }
            pFVar23 = (FScriptContainerElement *)
                      ::FString::ConstructFromPtrSize
                                (&local_b8,FVar21.Data,
                                 (int)((longlong)pFVar22 - (longlong)FVar21.Data >> 1));
            if (((local_288.Data <= pFVar23) &&
                (pFVar23 < local_288.Data + (longlong)local_280._4_4_ * 0x10)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            iVar14 = (int)local_280;
            if ((int)local_280 == local_280._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_288,(int *)((longlong)&local_280 + 4));
            }
            local_280 = CONCAT44(local_280._4_4_,iVar14 + 1);
            pFVar19 = local_288.Data + (longlong)iVar14 * 0x10;
            *(undefined8 *)pFVar19 = 0;
            *(undefined8 *)pFVar19 = *(undefined8 *)pFVar23;
            *(undefined8 *)pFVar23 = 0;
            *(int *)(pFVar19 + 8) = *(int *)(pFVar23 + 8);
            *(int *)(pFVar19 + 0xc) = *(int *)(pFVar23 + 0xc);
            *(undefined8 *)(pFVar23 + 8) = 0;
            FVar21.Data = local_b8.Data.AllocatorInstance.Data;
            goto LAB_142d348cb;
          }
          if (*(wchar_t *)FVar21.Data == L'/') {
            if (*(wchar_t *)(FVar21.Data + 2) == L'/') {
              pFVar22 = FVar21.Data + 4;
              wVar8 = *(wchar_t *)(FVar21.Data + 4);
              while ((wVar8 != L'\n' && (wVar8 != L'\0'))) {
                pFVar23 = pFVar22 + 2;
                pFVar22 = pFVar22 + 2;
                wVar8 = *(wchar_t *)pFVar23;
              }
            }
            else {
              if (((*(wchar_t *)(FVar21.Data + 2) != L'*') ||
                  (*(wchar_t *)(FVar21.Data + 4) == L'\0')) ||
                 (*(wchar_t *)(FVar21.Data + 6) == L'\0')) goto LAB_142d346e3;
              pFVar22 = FVar21.Data + 8;
              wVar8 = *(wchar_t *)pFVar22;
              while ((wVar8 != L'\0' &&
                     ((*(wchar_t *)(pFVar22 + -4) != L'*' || (*(wchar_t *)(pFVar22 + -2) != L'/'))))
                    ) {
                pFVar22 = pFVar22 + 2;
                wVar8 = *(wchar_t *)pFVar22;
              }
            }
          }
          else {
LAB_142d346e3:
            pFVar22 = (FScriptContainerElement *)
                      ::FString::ConstructFromPtrSize(&local_a8,FVar21.Data,1);
            if (((local_288.Data <= pFVar22) &&
                (pFVar22 < local_288.Data + (longlong)local_280._4_4_ * 0x10)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            iVar14 = (int)local_280;
            if ((int)local_280 == local_280._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_288,(int *)((longlong)&local_280 + 4));
            }
            local_280 = CONCAT44(local_280._4_4_,iVar14 + 1);
            pFVar23 = local_288.Data + (longlong)iVar14 * 0x10;
            *(undefined8 *)pFVar23 = 0;
            *(undefined8 *)pFVar23 = *(undefined8 *)pFVar22;
            *(undefined8 *)pFVar22 = 0;
            *(int *)(pFVar23 + 8) = *(int *)(pFVar22 + 8);
            *(int *)(pFVar23 + 0xc) = *(int *)(pFVar22 + 0xc);
            *(undefined8 *)(pFVar22 + 8) = 0;
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            pFVar22 = FVar21.Data + 2;
          }
        }
        else {
          do {
            do {
              wVar8 = *(wchar_t *)(pFVar22 + 2);
              pFVar22 = pFVar22 + 2;
              iVar14 = iswalnum(wVar8);
            } while (iVar14 != 0);
          } while (wVar8 == L'_');
          pFVar23 = (FScriptContainerElement *)
                    ::FString::ConstructFromPtrSize
                              (&local_98,FVar21.Data,
                               (int)((longlong)pFVar22 - (longlong)FVar21.Data >> 1));
          if (((local_288.Data <= pFVar23) &&
              (pFVar23 < local_288.Data + (longlong)local_280._4_4_ * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          iVar14 = (int)local_280;
          if ((int)local_280 == local_280._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_288,(int *)((longlong)&local_280 + 4));
          }
          local_280 = CONCAT44(local_280._4_4_,iVar14 + 1);
          pFVar19 = local_288.Data + (longlong)iVar14 * 0x10;
          *(undefined8 *)pFVar19 = 0;
          *(undefined8 *)pFVar19 = *(undefined8 *)pFVar23;
          *(undefined8 *)pFVar23 = 0;
          *(int *)(pFVar19 + 8) = *(int *)(pFVar23 + 8);
          *(int *)(pFVar19 + 0xc) = *(int *)(pFVar23 + 0xc);
          *(undefined8 *)(pFVar23 + 8) = 0;
          FVar21.Data = local_98.Data.AllocatorInstance.Data;
LAB_142d348cb:
          if (FVar21.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar21.Data);
          }
        }
LAB_142d348d5:
        FVar21.Data = pFVar22;
        iVar14 = local_250;
        uVar15 = local_24c;
        wVar8 = *(wchar_t *)pFVar22;
      }
      if (3 < (int)local_280) {
        if (*(int *)(local_288.Data + 8) == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = *(wchar_t **)local_288.Data;
        }
        iVar12 = FGenericPlatformStricmp::Stricmp(pwVar20,"#");
        if (iVar12 == 0) {
          if (((int)local_280 < 2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          if (*(int *)(local_288.Data + 0x18) == 0) {
            pwVar20 = L"";
          }
          else {
            pwVar20 = *(wchar_t **)(local_288.Data + 0x10);
          }
          iVar12 = FGenericPlatformStricmp::Stricmp(pwVar20,"define");
          if (iVar12 == 0) {
            if (((int)local_280 < 4) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            FVar4.Data = local_288.Data;
            iVar12 = *(int *)(local_288.Data + 0x38) + -1;
            if (*(int *)(local_288.Data + 0x38) == 0) {
              iVar12 = 0;
            }
            if ((iVar12 < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x107,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            iVar12 = iswdigit(**(wint_t **)(FVar4.Data + 0x30));
            if (iVar12 == 0) {
              if (((int)local_280 < 4) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              FVar5.Data = local_288.Data;
              ::FString::FString(&local_1b8,"\"");
              iVar12 = local_1b8.Data.ArrayNum + -1;
              FVar4.Data = local_1b8.Data.AllocatorInstance.Data;
              if (local_1b8.Data.ArrayNum == 0) {
                iVar12 = 0;
                FVar4.Data = (FScriptContainerElement *)L"";
              }
              bVar6 = ::FString::StartsWith
                                ((FString *)(FVar5.Data + 0x30),(wchar_t *)FVar4.Data,iVar12,
                                 IgnoreCase);
              if (bVar6) {
                if (((int)local_280 < 4) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
                FVar5.Data = local_288.Data;
                ::FString::FString(&local_1c8,"\"");
                uVar24 = 2;
                iVar12 = local_1c8.Data.ArrayNum + -1;
                FVar4.Data = local_1c8.Data.AllocatorInstance.Data;
                if (local_1c8.Data.ArrayNum == 0) {
                  iVar12 = 0;
                  FVar4.Data = (FScriptContainerElement *)L"";
                }
                bVar6 = ::FString::EndsWith((FString *)(FVar5.Data + 0x30),(wchar_t *)FVar4.Data,
                                            iVar12,IgnoreCase);
                if (!bVar6) goto LAB_142d34f66;
                bVar6 = true;
              }
              else {
LAB_142d34f66:
                bVar6 = false;
              }
              if ((uVar24 != 0) &&
                 (uVar24 = 0,
                 local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
              if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
              }
              if (bVar6) {
                if (((int)local_280 < 3) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
                if (*(int *)(local_288.Data + 0x28) == 0) {
                  pwVar20 = L"";
                }
                else {
                  pwVar20 = *(wchar_t **)(local_288.Data + 0x20);
                }
                iVar12 = FGenericPlatformStricmp::Stricmp(pwVar20,"BRANCH_NAME");
                if (iVar12 == 0) {
                  if (((int)local_280 < 4) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    uVar7 = (*pcVar3)();
                    return (bool)uVar7;
                  }
                  pFVar16 = ::FString::TrimQuotes
                                      ((FString *)(local_288.Data + 0x30),&local_88,(bool *)0x0);
                  if (&local_240 != pFVar16) {
                    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_240.Data.AllocatorInstance.Data);
                    }
                    local_240.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
                    (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_240.Data.ArrayNum = (pFVar16->Data).ArrayNum;
                    local_240.Data.ArrayMax = (pFVar16->Data).ArrayMax;
                    (pFVar16->Data).ArrayNum = 0;
                    (pFVar16->Data).ArrayMax = 0;
                  }
                  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_88.Data.AllocatorInstance.Data);
                  }
                }
              }
            }
            else {
              if (((int)local_280 < 3) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              if (*(int *)(local_288.Data + 0x28) == 0) {
                pwVar20 = L"";
              }
              else {
                pwVar20 = *(wchar_t **)(local_288.Data + 0x20);
              }
              iVar12 = FGenericPlatformStricmp::Stricmp(pwVar20,"ENGINE_MAJOR_VERSION");
              if (iVar12 == 0) {
                if (((int)local_280 < 4) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
                if (*(int *)(local_288.Data + 0x38) == 0) {
                  iVar13 = _wtoi(L"");
                }
                else {
                  iVar13 = _wtoi(*(wchar_t **)(local_288.Data + 0x30));
                }
              }
              else {
                if (((int)local_280 < 3) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
                if (*(int *)(local_288.Data + 0x28) == 0) {
                  pwVar20 = L"";
                }
                else {
                  pwVar20 = *(wchar_t **)(local_288.Data + 0x20);
                }
                iVar12 = FGenericPlatformStricmp::Stricmp(pwVar20,"ENGINE_MINOR_VERSION");
                if (iVar12 == 0) {
                  if (((int)local_280 < 4) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    uVar7 = (*pcVar3)();
                    return (bool)uVar7;
                  }
                  if (*(int *)(local_288.Data + 0x38) == 0) {
                    iVar14 = _wtoi(L"");
                    local_250 = iVar14;
                  }
                  else {
                    iVar14 = _wtoi(*(wchar_t **)(local_288.Data + 0x30));
                    local_250 = iVar14;
                  }
                }
                else {
                  if (((int)local_280 < 3) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    uVar7 = (*pcVar3)();
                    return (bool)uVar7;
                  }
                  if (*(int *)(local_288.Data + 0x28) == 0) {
                    pwVar20 = L"";
                  }
                  else {
                    pwVar20 = *(wchar_t **)(local_288.Data + 0x20);
                  }
                  iVar12 = FGenericPlatformStricmp::Stricmp(pwVar20,"ENGINE_PATCH_VERSION");
                  if (iVar12 == 0) {
                    if (((int)local_280 < 4) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar3 = (code *)swi(3);
                      uVar7 = (*pcVar3)();
                      return (bool)uVar7;
                    }
                    if (*(int *)(local_288.Data + 0x38) == 0) {
                      local_res20 = _wtoi(L"");
                    }
                    else {
                      local_res20 = _wtoi(*(wchar_t **)(local_288.Data + 0x30));
                    }
                  }
                  else {
                    if (((int)local_280 < 3) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar3 = (code *)swi(3);
                      uVar7 = (*pcVar3)();
                      return (bool)uVar7;
                    }
                    if (*(int *)(local_288.Data + 0x28) == 0) {
                      pwVar20 = L"";
                    }
                    else {
                      pwVar20 = *(wchar_t **)(local_288.Data + 0x20);
                    }
                    iVar12 = FGenericPlatformStricmp::Stricmp(pwVar20,"BUILT_FROM_CHANGELIST");
                    if (iVar12 == 0) {
                      if (((int)local_280 < 4) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar6)) {
                        pcVar3 = (code *)swi(3);
                        uVar7 = (*pcVar3)();
                        return (bool)uVar7;
                      }
                      if (*(int *)(local_288.Data + 0x38) == 0) {
                        local_24c = _wtoi(L"");
                        uVar15 = local_24c;
                      }
                      else {
                        local_24c = _wtoi(*(wchar_t **)(local_288.Data + 0x30));
                        uVar15 = local_24c;
                      }
                    }
                    else {
                      if (((int)local_280 < 3) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar6)) {
                        pcVar3 = (code *)swi(3);
                        uVar7 = (*pcVar3)();
                        return (bool)uVar7;
                      }
                      if (*(int *)(local_288.Data + 0x28) == 0) {
                        pwVar20 = L"";
                      }
                      else {
                        pwVar20 = *(wchar_t **)(local_288.Data + 0x20);
                      }
                      iVar12 = FGenericPlatformStricmp::Stricmp
                                         (pwVar20,"ENGINE_IS_LICENSEE_VERSION");
                      if (iVar12 == 0) {
                        if (((int)local_280 < 4) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar6)) {
                          pcVar3 = (code *)swi(3);
                          uVar7 = (*pcVar3)();
                          return (bool)uVar7;
                        }
                        if (*(int *)(local_288.Data + 0x38) == 0) {
                          local_248 = _wtoi(L"");
                        }
                        else {
                          local_248 = _wtoi(*(wchar_t **)(local_288.Data + 0x30));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      DestructItems<FString,int>((FString *)local_288.Data,(int)local_280);
      if (local_288.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data);
      }
      wVar8 = *(wchar_t *)FVar21.Data;
    } while (wVar8 != L'\0');
    if (((iVar13 == -1) || (iVar14 == -1)) || (local_res20 == -1)) goto LAB_142d35174;
    if (local_248 != 0) {
      uVar15 = FEngineVersionBase::EncodeLicenseeChangelist(uVar15);
    }
    uVar9 = IntCastChecked<unsigned_short,int>(local_res20);
    uVar10 = IntCastChecked<unsigned_short,int>(iVar14);
    uVar11 = IntCastChecked<unsigned_short,int>(iVar13);
    pFVar18 = FEngineVersion::FEngineVersion(&local_58,uVar11,uVar10,uVar9,uVar15,&local_240);
    FEngineVersion::operator=(param_2,pFVar18);
    if (local_58.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Branch.Data.AllocatorInstance.Data);
    }
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
    bVar6 = true;
  }
  else {
LAB_142d35181:
    bVar6 = false;
  }
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
LAB_142d35199:
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

// TryParseStockEngineVersion @ 142d35400

bool __thiscall
FDesktopPlatformBase::TryParseStockEngineVersion
          (FDesktopPlatformBase *this,FString *param_1,FEngineVersion *param_2)

{
  wchar_t wVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  FEngineVersion *pFVar6;
  wchar_t *_Str;
  wchar_t *local_res10;
  FString local_38;
  FEngineVersion local_28;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = _wcstoui64(_Str,&local_res10,10);
  if (uVar4 < 0x10000) {
    wVar1 = *local_res10;
    local_res10 = local_res10 + 1;
    if (wVar1 == L'.') {
      uVar5 = _wcstoui64(local_res10,&local_res10,10);
      if ((uVar5 < 0x10000) && (*local_res10 == L'\0')) {
        ::FString::FString(&local_38,L"");
        uVar2 = IntCastChecked<unsigned_short,unsigned___int64>(uVar5);
        uVar3 = IntCastChecked<unsigned_short,unsigned___int64>(uVar4);
        pFVar6 = FEngineVersion::FEngineVersion(&local_28,uVar3,uVar2,0,0,&local_38);
        FEngineVersion::operator=(param_2,pFVar6);
        if (local_28.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Branch.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        return true;
      }
    }
  }
  return false;
}

