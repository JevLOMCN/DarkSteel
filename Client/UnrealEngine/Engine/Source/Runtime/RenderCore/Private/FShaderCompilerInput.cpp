// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// FShaderCompilerInput @ 145e41750

FShaderCompilerInput * __thiscall
FShaderCompilerInput::FShaderCompilerInput(FShaderCompilerInput *this)

{
  this->Target = (FShaderTarget_u_0)0x9bc;
  (this->ShaderFormat).ComparisonIndex = 0;
  *(undefined8 *)&(this->ShaderFormat).Number = 0;
  *(undefined8 *)&(this->CompressionFormat).Number = 0;
  *(undefined8 *)&(this->ShaderPlatformName).Number = 0;
  (this->PreferredShaderCodeFormat).Number = 0;
  (this->VirtualSourceFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualSourceFilePath).Data.ArrayNum = 0;
  (this->VirtualSourceFilePath).Data.ArrayMax = 0;
  (this->EntryPointName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryPointName).Data.ArrayNum = 0;
  (this->EntryPointName).Data.ArrayMax = 0;
  (this->ShaderName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderName).Data.ArrayNum = 0;
  (this->ShaderName).Data.ArrayMax = 0;
  this->SupportedHardwareMask = 0;
  this->DebugInfoFlags = Default;
  (this->RequiredSymbols).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequiredSymbols).ArrayNum = 0;
  (this->RequiredSymbols).ArrayMax = 0;
  (this->UsedOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedOutputs).ArrayNum = 0;
  (this->UsedOutputs).ArrayMax = 0;
  (this->DumpDebugInfoRootPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DumpDebugInfoRootPath).Data.ArrayNum = 0;
  (this->DumpDebugInfoRootPath).Data.ArrayMax = 0;
  (this->DumpDebugInfoPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DumpDebugInfoPath).Data.ArrayNum = 0;
  (this->DumpDebugInfoPath).Data.ArrayMax = 0;
  (this->DebugGroupName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugGroupName).Data.ArrayNum = 0;
  (this->DebugGroupName).Data.ArrayMax = 0;
  (this->DebugExtension).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugExtension).Data.ArrayNum = 0;
  (this->DebugExtension).Data.ArrayMax = 0;
  (this->DebugDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDescription).Data.ArrayNum = 0;
  (this->DebugDescription).Data.ArrayMax = 0;
  (this->Hash).Hash[0] = '\0';
  (this->Hash).Hash[1] = '\0';
  (this->Hash).Hash[2] = '\0';
  (this->Hash).Hash[3] = '\0';
  (this->Hash).Hash[4] = '\0';
  (this->Hash).Hash[5] = '\0';
  (this->Hash).Hash[6] = '\0';
  (this->Hash).Hash[7] = '\0';
  (this->Hash).Hash[8] = '\0';
  (this->Hash).Hash[9] = '\0';
  (this->Hash).Hash[10] = '\0';
  (this->Hash).Hash[0xb] = '\0';
  (this->Hash).Hash[0xc] = '\0';
  (this->Hash).Hash[0xd] = '\0';
  (this->Hash).Hash[0xe] = '\0';
  (this->Hash).Hash[0xf] = '\0';
  (this->Hash).Hash[0x10] = '\0';
  (this->Hash).Hash[0x11] = '\0';
  (this->Hash).Hash[0x12] = '\0';
  (this->Hash).Hash[0x13] = '\0';
  (this->Hash).Hash[0x14] = '\0';
  (this->Hash).Hash[0x15] = '\0';
  (this->Hash).Hash[0x16] = '\0';
  (this->Hash).Hash[0x17] = '\0';
  (this->Hash).Hash[0x18] = '\0';
  (this->Hash).Hash[0x19] = '\0';
  (this->Hash).Hash[0x1a] = '\0';
  (this->Hash).Hash[0x1b] = '\0';
  (this->Hash).Hash[0x1c] = '\0';
  (this->Hash).Hash[0x1d] = '\0';
  (this->Hash).Hash[0x1e] = '\0';
  (this->Hash).Hash[0x1f] = '\0';
  FShaderCompilerEnvironment::FShaderCompilerEnvironment(&this->Environment);
  (this->SharedEnvironment).Reference = (FSharedShaderCompilerEnvironment *)0x0;
  this->RootParametersStructure = (FShaderParametersMetadata *)0x0;
  (this->ExtraSettings).bExtractShaderSource = false;
  (this->ExtraSettings).OfflineCompilerPath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExtraSettings).OfflineCompilerPath.Data.ArrayNum = 0;
  (this->ExtraSettings).OfflineCompilerPath.Data.ArrayMax = 0;
  (this->ExtraSettings).OfflineCompiler = Mali;
  (this->ExtraSettings).GPUTarget.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtraSettings).GPUTarget.Data.ArrayNum = 0;
  (this->ExtraSettings).GPUTarget.Data.ArrayMax = 0;
  (this->ExtraSettings).bDumpAll = false;
  (this->ExtraSettings).bSaveCompilerStatsFiles = false;
  (this->ExtraSettings).bMobileMultiView = false;
  this->bCompilingForShaderPipeline = false;
  this->bIncludeUsedOutputs = false;
  this->bBindlessEnabled = false;
  return this;
}

// ~FShaderCompilerInput @ 145e43a80

void __thiscall FShaderCompilerInput::~FShaderCompilerInput(FShaderCompilerInput *this)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FSharedShaderCompilerEnvironment *pFVar4;
  
  pFVar3 = (this->ExtraSettings).GPUTarget.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ExtraSettings).OfflineCompilerPath.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->SharedEnvironment).Reference;
  if (pFVar4 != (FSharedShaderCompilerEnvironment *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  FShaderCompilerEnvironment::~FShaderCompilerEnvironment(&this->Environment);
  pFVar3 = (this->DebugDescription).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DebugExtension).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DebugGroupName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DumpDebugInfoPath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DumpDebugInfoRootPath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FString,int>
            ((FString *)(this->UsedOutputs).AllocatorInstance.Data,(this->UsedOutputs).ArrayNum);
  pFVar3 = (this->UsedOutputs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FString,int>
            ((FString *)(this->RequiredSymbols).AllocatorInstance.Data,
             (this->RequiredSymbols).ArrayNum);
  pFVar3 = (this->RequiredSymbols).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ShaderName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->EntryPointName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->VirtualSourceFilePath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// operator= @ 145e45430

FShaderCompilerInput * __thiscall
FShaderCompilerInput::operator=(FShaderCompilerInput *this,FShaderCompilerInput *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FSharedShaderCompilerEnvironment *pFVar3;
  FSharedShaderCompilerEnvironment *pFVar4;
  undefined8 uVar5;
  
  (this->Target).field0_0x0 = (param_1->Target).field0_0x0;
  this->ShaderFormat = param_1->ShaderFormat;
  this->CompressionFormat = param_1->CompressionFormat;
  this->ShaderPlatformName = param_1->ShaderPlatformName;
  this->PreferredShaderCodeFormat = param_1->PreferredShaderCodeFormat;
  ::FString::operator=(&this->VirtualSourceFilePath,&param_1->VirtualSourceFilePath);
  ::FString::operator=(&this->EntryPointName,&param_1->EntryPointName);
  ::FString::operator=(&this->ShaderName,&param_1->ShaderName);
  this->SupportedHardwareMask = param_1->SupportedHardwareMask;
  this->DebugInfoFlags = param_1->DebugInfoFlags;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->RequiredSymbols,&param_1->RequiredSymbols);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->UsedOutputs,&param_1->UsedOutputs);
  ::FString::operator=(&this->DumpDebugInfoRootPath,&param_1->DumpDebugInfoRootPath);
  ::FString::operator=(&this->DumpDebugInfoPath,&param_1->DumpDebugInfoPath);
  ::FString::operator=(&this->DebugGroupName,&param_1->DebugGroupName);
  ::FString::operator=(&this->DebugExtension,&param_1->DebugExtension);
  ::FString::operator=(&this->DebugDescription,&param_1->DebugDescription);
  uVar5 = *(undefined8 *)((param_1->Hash).Hash + 8);
  *(undefined8 *)(this->Hash).Hash = *(undefined8 *)(param_1->Hash).Hash;
  *(undefined8 *)((this->Hash).Hash + 8) = uVar5;
  uVar5 = *(undefined8 *)((param_1->Hash).Hash + 0x18);
  *(undefined8 *)((this->Hash).Hash + 0x10) = *(undefined8 *)((param_1->Hash).Hash + 0x10);
  *(undefined8 *)((this->Hash).Hash + 0x18) = uVar5;
  FShaderCompilerEnvironment::operator=(&this->Environment,&param_1->Environment);
  pFVar3 = (param_1->SharedEnvironment).Reference;
  pFVar4 = (this->SharedEnvironment).Reference;
  if (pFVar4 != pFVar3) {
    (this->SharedEnvironment).Reference = pFVar3;
    if (pFVar3 != (FSharedShaderCompilerEnvironment *)0x0) {
      LOCK();
      *(int *)&pFVar3->field_0x8 = *(int *)&pFVar3->field_0x8 + 1;
      UNLOCK();
    }
    if (pFVar4 != (FSharedShaderCompilerEnvironment *)0x0) {
      puVar1 = &pFVar4->field_0x8;
      LOCK();
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
      }
    }
  }
  this->RootParametersStructure = param_1->RootParametersStructure;
  (this->ExtraSettings).bExtractShaderSource = (param_1->ExtraSettings).bExtractShaderSource;
  ::FString::operator=
            (&(this->ExtraSettings).OfflineCompilerPath,
             &(param_1->ExtraSettings).OfflineCompilerPath);
  (this->ExtraSettings).OfflineCompiler = (param_1->ExtraSettings).OfflineCompiler;
  ::FString::operator=(&(this->ExtraSettings).GPUTarget,&(param_1->ExtraSettings).GPUTarget);
  (this->ExtraSettings).bDumpAll = (param_1->ExtraSettings).bDumpAll;
  (this->ExtraSettings).bSaveCompilerStatsFiles = (param_1->ExtraSettings).bSaveCompilerStatsFiles;
  (this->ExtraSettings).bMobileMultiView = (param_1->ExtraSettings).bMobileMultiView;
  this->OodleCompressor = param_1->OodleCompressor;
  this->OodleLevel = param_1->OodleLevel;
  this->bCompilingForShaderPipeline = param_1->bCompilingForShaderPipeline;
  this->bIncludeUsedOutputs = param_1->bIncludeUsedOutputs;
  this->bBindlessEnabled = param_1->bBindlessEnabled;
  return this;
}

// DumpDebugInfoEnabled @ 145e52270

bool __thiscall FShaderCompilerInput::DumpDebugInfoEnabled(FShaderCompilerInput *this)

{
  char cVar1;
  int iVar2;
  IFileManager *pIVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pwVar5 = L"";
  if ((this->DumpDebugInfoPath).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(this->DumpDebugInfoPath).Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,L"");
  if (iVar2 != 0) {
    pIVar3 = IFileManager::Get();
    if ((this->DumpDebugInfoPath).Data.ArrayNum != 0) {
      pwVar5 = (wchar_t *)(this->DumpDebugInfoPath).Data.AllocatorInstance.Data;
    }
    cVar1 = (**(code **)((longlong)*pIVar3 + 0x58))(pIVar3,pwVar5);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// GenerateShaderName @ 145e55f20

FString * __thiscall
FShaderCompilerInput::GenerateShaderName(FShaderCompilerInput *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((this->DebugGroupName).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->DebugGroupName).Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,L"Global");
  if (iVar2 == 0) {
    ::FString::ConcatFC(&local_48,&this->VirtualSourceFilePath,L"|");
    ::FString::ConcatFF(&local_68,&local_48,&this->EntryPointName);
    if (__return_storage_ptr__ != &local_68) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  else {
    ::FString::ConcatFC(&local_28,&this->DebugGroupName,L":");
    ::FString::ConcatFF(&local_38,&local_28,&this->VirtualSourceFilePath);
    ::FString::ConcatFC(&local_48,&local_38,L"|");
    ::FString::ConcatFF(&local_58,&local_48,&this->EntryPointName);
    if (__return_storage_ptr__ != &local_58) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOrCreateShaderDebugInfoPath @ 145e598f0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FShaderCompilerInput::GetOrCreateShaderDebugInfoPath
          (FShaderCompilerInput *this,FString *__return_storage_ptr__)

{
  int iVar1;
  char cVar2;
  IFileManager *pIVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3876,"FShaderCompilerInput::GetOrCreateShaderDebugInfoPath",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
               ,0xf24);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3876);
  }
  ::FString::ConcatFF(&local_38,&this->DebugGroupName,&this->DebugExtension);
  local_28.DataPtr = (wchar_t *)(this->DumpDebugInfoRootPath).Data.AllocatorInstance.Data;
  iVar1 = (this->DumpDebugInfoRootPath).Data.ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18 = local_38.Data.AllocatorInstance.Data;
  local_10 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    local_10 = 0;
  }
  FPaths::CombineInternal(&local_48,&local_28,2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::ReplaceInline(&local_48,L"<",L"(",IgnoreCase);
  ::FString::ReplaceInline(&local_48,L">",L")",IgnoreCase);
  ::FString::ReplaceInline(&local_48,L"::",L"==",IgnoreCase);
  ::FString::ReplaceInline(&local_48,L"|",L"_",IgnoreCase);
  ::FString::ReplaceInline(&local_48,L"*",L"-",IgnoreCase);
  ::FString::ReplaceInline(&local_48,L"?",L"!",IgnoreCase);
  ::FString::ReplaceInline(&local_48,L"\"",L"\'",IgnoreCase);
  pIVar3 = IFileManager::Get();
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar3 + 0x58))(pIVar3,FVar4.Data);
  if (cVar2 == '\0') {
    pIVar3 = IFileManager::Get();
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x60))(pIVar3,FVar4.Data,1);
    if (cVar2 == '\0') {
      FWindowsPlatformMisc::GetLastError();
      if (2 < (byte)LogShaders._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      goto LAB_145e59b42;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_145e59b42:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// IsRayTracingShader @ 145ea5c20

bool __thiscall FShaderCompilerInput::IsRayTracingShader(FShaderCompilerInput *this)

{
  switch(*(byte *)&(this->Target).field0_0x0 & 0xf) {
  default:
    return false;
  case 6:
  case 7:
  case 8:
  case 9:
    return true;
  }
}

