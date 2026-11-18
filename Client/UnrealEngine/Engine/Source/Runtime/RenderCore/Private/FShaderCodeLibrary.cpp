// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 27

// AddKnownChunkIDs @ 145e4a8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FShaderCodeLibrary::AddKnownChunkIDs(int *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FString local_58;
  FMountedPakFileInfo local_48;
  
  if ((param_1 == (int *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IDs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                         ,0x10dc,L"Invalid pointer to chunk IDs passed"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (3 < (byte)LogShaderLibrary._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
  }
  if (0 < param_2) {
    lVar4 = 0;
    do {
      iVar1 = param_1[lVar4];
      ::FString::FString(&local_48.PakFilename,L"Fake");
      local_48.MountPoint.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.MountPoint.Data.ArrayNum = 0;
      local_48.MountPoint.Data.ArrayMax = 0;
      local_48.ChunkId = iVar1;
      EnterCriticalSection
                ((LPCRITICAL_SECTION)
                 &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFilesAccessLock);
      TSet<UE::ShaderLibrary::Private::FMountedPakFileInfo,DefaultKeyFuncs<UE::ShaderLibrary::Private::FMountedPakFileInfo,0>,FDefaultSetAllocator>
      ::Emplace<UE::ShaderLibrary::Private::FMountedPakFileInfo_const_&>
                (&UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles,
                 (FMountedPakFileInfo *)&stack0x00000010,(bool *)&local_48);
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)
                 &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFilesAccessLock);
      if (FShaderLibrariesCollection::Impl == (FShaderLibrariesCollection *)0x0) {
        if (3 < (byte)LogShaderLibrary._0_1_) {
          ::FString::PrintfImpl(&local_58,L"ChunkID:%d Root:%s File:%s");
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        FShaderLibrariesCollection::OnPakFileMounted(FShaderLibrariesCollection::Impl,&local_48);
      }
      if (local_48.MountPoint.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.MountPoint.Data.AllocatorInstance.Data);
      }
      if (local_48.PakFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.PakFilename.Data.AllocatorInstance.Data);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < param_2);
  }
  return;
}

// AreShaderMapsPreloadedAtLoadTime @ 145e4cc50

bool __cdecl FShaderCodeLibrary::AreShaderMapsPreloadedAtLoadTime(void)

{
  return 0 < GPreloadShaderMaps;
}

// CloseLibrary @ 145e4d830

/* WARNING: Removing unreachable block (ram,0x000145e4d91b) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FShaderCodeLibrary::CloseLibrary(FString *param_1)

{
  code *pcVar1;
  FShaderLibrariesCollection *pFVar2;
  TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
  this;
  bool bVar3;
  TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
  TStackX_8;
  
  pFVar2 = FShaderLibrariesCollection::Impl;
  if (FShaderLibrariesCollection::Impl == (FShaderLibrariesCollection *)0x0) {
    return;
  }
  if ((FShaderLibrariesCollection::Impl->ShaderPlatform == SP_NumPlatforms) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderPlatform != SP_NumPlatforms",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                         ,0xb9f,
                         L"Shader library has not been properly initialized for a cooked game"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TStackX_8.Ptr = (FNamedShaderLibrary *)0x0;
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar2->NamedLibrariesMutex);
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  ::RemoveAndCopyValue(&pFVar2->NamedLibrariesStack,param_1,&TStackX_8);
  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar2->NamedLibrariesMutex);
  this.Ptr = TStackX_8.Ptr;
  if (TStackX_8.Ptr != (FNamedShaderLibrary *)0x0) {
    if (3 < (byte)LogShaderLibrary._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_FShaderLibrariesCollection::CloseLibrary(FString_const&___ptr64)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
    }
    if (this.Ptr != (FNamedShaderLibrary *)0x0) {
      UE::ShaderLibrary::Private::FNamedShaderLibrary::_scalar_deleting_destructor_(this.Ptr,1);
    }
  }
  FShaderPipelineCache::ShaderLibraryStateChanged(Closed,pFVar2->ShaderPlatform,param_1,-1);
  return;
}

// ContainsShaderCode @ 145e4fa90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FShaderCodeLibrary::ContainsShaderCode(FSHAHash *param_1)

{
  FShaderLibraryInstance *pFVar1;
  int local_res10 [6];
  
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    pFVar1 = FShaderLibrariesCollection::FindShaderLibraryForShader
                       (FShaderLibrariesCollection::Impl,param_1,local_res10);
    return pFVar1 != (FShaderLibraryInstance *)0x0;
  }
  return false;
}

// ContainsShaderCode @ 145e4fad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FShaderCodeLibrary::ContainsShaderCode(FSHAHash *param_1,FString *param_2)

{
  int iVar1;
  FRHIShaderLibrary *pFVar2;
  int iVar3;
  FShaderLibraryInstance *pFVar4;
  bool bVar5;
  int local_res18 [4];
  
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    pFVar4 = FShaderLibrariesCollection::FindShaderLibraryForShader
                       (FShaderLibrariesCollection::Impl,param_1,local_res18);
    if (pFVar4 == (FShaderLibraryInstance *)0x0) {
      return false;
    }
    pFVar2 = (pFVar4->Library).Reference;
    iVar3 = (param_2->Data).ArrayNum;
    iVar1 = (pFVar2->LibraryName).Data.ArrayNum;
    if (iVar1 == iVar3) {
      if (iVar1 < 2) {
        return true;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar2->LibraryName).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = iVar1 + iVar3 == 1;
    }
    if (bVar5) {
      return true;
    }
  }
  return false;
}

// CreateAmplificationShader @ 145e50860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIAmplificationShader> __cdecl
FShaderCodeLibrary::CreateAmplificationShader(EShaderPlatform param_1,FSHAHash *param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderLibraryInstance *this;
  TRefCountPtr<FRHIAmplificationShader> TVar3;
  undefined6 in_register_0000000a;
  FSHAHash *in_R8;
  int local_res20 [2];
  longlong local_18 [2];
  
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    local_res20[0] = -1;
    this = FShaderLibrariesCollection::FindShaderLibraryForShader
                     (FShaderLibrariesCollection::Impl,in_R8,local_res20);
    if (this != (FShaderLibraryInstance *)0x0) {
      FShaderLibraryInstance::GetOrCreateShader(this,(int)local_18,SUB41(local_res20[0],0));
      if (*(char *)(local_18[0] + 0x104) != '\x02') {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader->GetFrequency() == Frequency",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                           ,0xd78,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar3.Reference = (FRHIAmplificationShader *)(*pcVar1)();
          return (TRefCountPtr<FRHIAmplificationShader>)TVar3.Reference;
        }
      }
      goto LAB_145e508f7;
    }
  }
  local_18[0] = 0;
LAB_145e508f7:
  *(longlong *)CONCAT62(in_register_0000000a,param_1) = local_18[0];
  return (TRefCountPtr<FRHIAmplificationShader>)
         (FRHIAmplificationShader *)CONCAT62(in_register_0000000a,param_1);
}

// CreateComputeShader @ 145e50910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIComputeShader> __cdecl
FShaderCodeLibrary::CreateComputeShader(EShaderPlatform param_1,FSHAHash *param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderLibraryInstance *this;
  TRefCountPtr<FRHIComputeShader> TVar3;
  undefined6 in_register_0000000a;
  FSHAHash *in_R8;
  int local_res20 [2];
  longlong local_18 [2];
  
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    local_res20[0] = -1;
    this = FShaderLibrariesCollection::FindShaderLibraryForShader
                     (FShaderLibrariesCollection::Impl,in_R8,local_res20);
    if (this != (FShaderLibraryInstance *)0x0) {
      FShaderLibraryInstance::GetOrCreateShader(this,(int)local_18,SUB41(local_res20[0],0));
      if (*(char *)(local_18[0] + 0x104) != '\x05') {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader->GetFrequency() == Frequency",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                           ,0xd78,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar3.Reference = (FRHIComputeShader *)(*pcVar1)();
          return (TRefCountPtr<FRHIComputeShader>)TVar3.Reference;
        }
      }
      goto LAB_145e509a7;
    }
  }
  local_18[0] = 0;
LAB_145e509a7:
  ((FRHIComputeShader *)CONCAT62(in_register_0000000a,param_1))->_padding_ = local_18[0];
  return (TRefCountPtr<FRHIComputeShader>)
         (FRHIComputeShader *)CONCAT62(in_register_0000000a,param_1);
}

// CreateGeometryShader @ 145e50e50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIGeometryShader> __cdecl
FShaderCodeLibrary::CreateGeometryShader(EShaderPlatform param_1,FSHAHash *param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderLibraryInstance *this;
  TRefCountPtr<FRHIGeometryShader> TVar3;
  undefined6 in_register_0000000a;
  FSHAHash *in_R8;
  int local_res20 [2];
  longlong local_18 [2];
  
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    local_res20[0] = -1;
    this = FShaderLibrariesCollection::FindShaderLibraryForShader
                     (FShaderLibrariesCollection::Impl,in_R8,local_res20);
    if (this != (FShaderLibraryInstance *)0x0) {
      FShaderLibraryInstance::GetOrCreateShader(this,(int)local_18,SUB41(local_res20[0],0));
      if (*(char *)(local_18[0] + 0x104) != '\x04') {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader->GetFrequency() == Frequency",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                           ,0xd78,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar3.Reference = (FRHIGeometryShader *)(*pcVar1)();
          return (TRefCountPtr<FRHIGeometryShader>)TVar3.Reference;
        }
      }
      goto LAB_145e50ee7;
    }
  }
  local_18[0] = 0;
LAB_145e50ee7:
  *(longlong *)CONCAT62(in_register_0000000a,param_1) = local_18[0];
  return (TRefCountPtr<FRHIGeometryShader>)
         (FRHIGeometryShader *)CONCAT62(in_register_0000000a,param_1);
}

// CreateMeshShader @ 145e50f00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIMeshShader> __cdecl
FShaderCodeLibrary::CreateMeshShader(EShaderPlatform param_1,FSHAHash *param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderLibraryInstance *this;
  TRefCountPtr<FRHIMeshShader> TVar3;
  undefined6 in_register_0000000a;
  FSHAHash *in_R8;
  int local_res20 [2];
  longlong local_18 [2];
  
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    local_res20[0] = -1;
    this = FShaderLibrariesCollection::FindShaderLibraryForShader
                     (FShaderLibrariesCollection::Impl,in_R8,local_res20);
    if (this != (FShaderLibraryInstance *)0x0) {
      FShaderLibraryInstance::GetOrCreateShader(this,(int)local_18,SUB41(local_res20[0],0));
      if (*(char *)(local_18[0] + 0x104) != '\x01') {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader->GetFrequency() == Frequency",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                           ,0xd78,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar3.Reference = (FRHIMeshShader *)(*pcVar1)();
          return (TRefCountPtr<FRHIMeshShader>)TVar3.Reference;
        }
      }
      goto LAB_145e50f97;
    }
  }
  local_18[0] = 0;
LAB_145e50f97:
  *(longlong *)CONCAT62(in_register_0000000a,param_1) = local_18[0];
  return (TRefCountPtr<FRHIMeshShader>)(FRHIMeshShader *)CONCAT62(in_register_0000000a,param_1);
}

// CreatePixelShader @ 145e50fb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIPixelShader> __cdecl
FShaderCodeLibrary::CreatePixelShader(EShaderPlatform param_1,FSHAHash *param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderLibraryInstance *this;
  TRefCountPtr<FRHIPixelShader> TVar3;
  undefined6 in_register_0000000a;
  FSHAHash *in_R8;
  int local_res20 [2];
  longlong local_18 [2];
  
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    local_res20[0] = -1;
    this = FShaderLibrariesCollection::FindShaderLibraryForShader
                     (FShaderLibrariesCollection::Impl,in_R8,local_res20);
    if (this != (FShaderLibraryInstance *)0x0) {
      FShaderLibraryInstance::GetOrCreateShader(this,(int)local_18,SUB41(local_res20[0],0));
      if (*(char *)(local_18[0] + 0x104) != '\x03') {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader->GetFrequency() == Frequency",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                           ,0xd78,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar3.Reference = (FRHIPixelShader *)(*pcVar1)();
          return (TRefCountPtr<FRHIPixelShader>)TVar3.Reference;
        }
      }
      goto LAB_145e51047;
    }
  }
  local_18[0] = 0;
LAB_145e51047:
  *(longlong *)CONCAT62(in_register_0000000a,param_1) = local_18[0];
  return (TRefCountPtr<FRHIPixelShader>)(FRHIPixelShader *)CONCAT62(in_register_0000000a,param_1);
}

// CreateRayTracingShader @ 145e51170

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIRayTracingShader> __cdecl
FShaderCodeLibrary::CreateRayTracingShader
          (EShaderPlatform param_1,FSHAHash *param_2,EShaderFrequency param_3)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIRayTracingShader> TVar3;
  TRefCountPtr<FRHIShader> TVar4;
  undefined6 in_register_0000000a;
  FRHIRayTracingShader *pFVar5;
  byte in_R9B;
  FRHIResource *local_18;
  
  pFVar5 = (FRHIRayTracingShader *)CONCAT62(in_register_0000000a,param_1);
  if (FShaderLibrariesCollection::Impl == (FShaderLibrariesCollection *)0x0) {
    pFVar5->_padding_ = 0;
  }
  else {
    if (3 < (byte)(in_R9B - 6)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Frequency >= SF_RayGen && Frequency <= SF_RayCallable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                         ,0x10be,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3.Reference = (FRHIRayTracingShader *)(*pcVar1)();
        return (TRefCountPtr<FRHIRayTracingShader>)TVar3.Reference;
      }
    }
    TVar4 = FShaderLibrariesCollection::CreateShader
                      (FShaderLibrariesCollection::Impl,0xe8,(FSHAHash *)(ulonglong)in_R9B);
    pFVar5->_padding_ = (TVar4.Reference)->_padding_;
    (TVar4.Reference)->_padding_ = 0;
    if (local_18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_18);
      return (TRefCountPtr<FRHIRayTracingShader>)pFVar5;
    }
  }
  return (TRefCountPtr<FRHIRayTracingShader>)pFVar5;
}

// CreateVertexShader @ 145e512e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIVertexShader> __cdecl
FShaderCodeLibrary::CreateVertexShader(EShaderPlatform param_1,FSHAHash *param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderLibraryInstance *this;
  TRefCountPtr<FRHIVertexShader> TVar3;
  undefined6 in_register_0000000a;
  FSHAHash *in_R8;
  int local_res20 [2];
  longlong local_18 [2];
  
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    local_res20[0] = -1;
    this = FShaderLibrariesCollection::FindShaderLibraryForShader
                     (FShaderLibrariesCollection::Impl,in_R8,local_res20);
    if (this != (FShaderLibraryInstance *)0x0) {
      FShaderLibraryInstance::GetOrCreateShader(this,(int)local_18,SUB41(local_res20[0],0));
      if (*(char *)(local_18[0] + 0x104) != '\0') {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader->GetFrequency() == Frequency",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                           ,0xd78,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar3.Reference = (FRHIVertexShader *)(*pcVar1)();
          return (TRefCountPtr<FRHIVertexShader>)TVar3.Reference;
        }
      }
      goto LAB_145e51377;
    }
  }
  local_18[0] = 0;
LAB_145e51377:
  *(longlong *)CONCAT62(in_register_0000000a,param_1) = local_18[0];
  return (TRefCountPtr<FRHIVertexShader>)(FRHIVertexShader *)CONCAT62(in_register_0000000a,param_1);
}

// DontOpenPluginShaderLibraryOnMount @ 145e520b0

void __cdecl FShaderCodeLibrary::DontOpenPluginShaderLibraryOnMount(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString local_res10;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                       ,0x126b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar3 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar3,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&UE::ShaderLibrary::Private::PluginsToIgnoreOnMount,&local_res10,(bool *)param_1);
  }
  return;
}

// GetRuntimeShaderPlatform @ 145e59d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPlatform __cdecl FShaderCodeLibrary::GetRuntimeShaderPlatform(void)

{
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    return FShaderLibrariesCollection::Impl->ShaderPlatform;
  }
  return SP_NumPlatforms;
}

// GetShaderCount @ 145e59e30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl FShaderCodeLibrary::GetShaderCount(void)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  FShaderLibrariesCollection *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStackX_8 [8];
  int iStackX_10;
  FPlatformRWLock *pFStackX_18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar5 = FShaderLibrariesCollection::Impl;
  if (FShaderLibrariesCollection::Impl == (FShaderLibrariesCollection *)0x0) {
    return 0;
  }
  pFStackX_18 = &FShaderLibrariesCollection::Impl->NamedLibrariesMutex;
  AcquireSRWLockShared((PSRWLOCK)pFStackX_18);
  iVar3 = *(int *)&(pFVar5->NamedLibrariesStack).field_0x28;
  puVar1 = &(pFVar5->NamedLibrariesStack).field_0x10;
  uVar16 = 0;
  iVar13 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(pFVar5->NamedLibrariesStack).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    iVar14 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_145e59f0d;
      uVar12 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStackX_10 = (int)lVar9;
    iVar8 = iVar14 + -1 + iStackX_10;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_145e59f0d:
  uVar12 = *(uint *)&(pFVar5->NamedLibrariesStack).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(pFVar5->NamedLibrariesStack).field_0x8 -
                       *(int *)&(pFVar5->NamedLibrariesStack).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  uVar7 = *(uint *)&(pFVar5->NamedLibrariesStack).field_0x28;
  uVar17 = 0;
  if (uVar12 != uVar7) {
    puVar10 = *(undefined1 **)&(pFVar5->NamedLibrariesStack).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar13 * 4);
    while (uVar17 = uVar16, uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar13) goto LAB_145e5a010;
      uVar12 = *(uint *)(puVar10 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_145e5a010:
  while( true ) {
    if (*(int *)&(pFVar5->NamedLibrariesStack).field_0x8 -
        *(int *)&(pFVar5->NamedLibrariesStack).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar7 = UE::ShaderLibrary::Private::FNamedShaderLibrary::GetShaderCount
                      (*(FNamedShaderLibrary **)
                        ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                        *(longlong *)&pFVar5->NamedLibrariesStack));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    uVar17 = uVar17 + uVar7;
  }
  ReleaseSRWLockShared((PSRWLOCK)pFStackX_18);
  return uVar17;
}

// InitForRuntime @ 145e5eae0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl FShaderCodeLibrary::InitForRuntime(EShaderPlatform param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FShaderLibrariesCollection *this;
  FShaderLibrariesCollection *pFVar4;
  FString *pFVar5;
  IPluginManager *pIVar6;
  TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *pTVar7;
  FDelegateHandle FVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  byte bVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  <lambda_1> local_res10 [8];
  TSharedRef<IPlugin,1> **local_res18;
  undefined1 local_res20 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_168;
  TSharedRef<IPlugin,1> *local_158;
  int local_150;
  FString local_148;
  FString local_138;
  TArrayView<std::nullptr_t,int> local_128;
  code *local_118;
  TSharedRef<IPlugin,1> ***local_110;
  FTextFormat local_108;
  FText local_f8;
  FFormatArgumentValue local_e8;
  undefined1 local_c8 [8];
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FText local_90;
  FString local_80;
  FString local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
  if (FShaderLibrariesCollection::Impl == (FShaderLibrariesCollection *)0x0) {
    local_res10[0] = (<lambda_1>)0x0;
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/UnrealEd.ProjectPackagingSettings",L"bShareMaterialShaderCode",
               (bool *)local_res10,&GGameIni);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar13 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar13,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
        && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
            == false)) && (local_res10[0] != (<lambda_1>)0x0)) {
      bVar12 = 1;
    }
    else {
      bVar12 = 0;
    }
    bVar3 = IsRunningCookOnTheFly();
    if ((bool)(bVar12 & !bVar3)) {
      this = ::operator_new(0x70);
      pFVar4 = (FShaderLibrariesCollection *)0x0;
      if (this != (FShaderLibrariesCollection *)0x0) {
        pFVar4 = FShaderLibrariesCollection::FShaderLibrariesCollection(this,param_1,false);
      }
      FShaderLibrariesCollection::Impl = pFVar4;
      pFVar5 = FPaths::ProjectContentDir(&local_c0);
      ::FString::FString(&local_148,L"Global");
      bVar3 = FShaderLibrariesCollection::OpenLibrary
                        (FShaderLibrariesCollection::Impl,&local_148,pFVar5,false);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pIVar6 = IPluginManager::Get();
        pTVar7 = (TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
                  *)(**(code **)((longlong)*pIVar6 + 0x120))(pIVar6);
        FVar8 = TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::
                AddStatic<>(pTVar7,(_func___cdecl_void_IPlugin_ptr *)local_res20);
                    /* WARNING: Load size is inaccurate */
        UE::ShaderLibrary::Private::OnPluginMountedDelegateHandle.ID = *FVar8.ID;
        pIVar6 = IPluginManager::Get();
        pTVar7 = (TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
                  *)(**(code **)((longlong)*pIVar6 + 0x138))(pIVar6);
        FVar8 = TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::
                AddStatic<>(pTVar7,(_func___cdecl_void_IPlugin_ptr *)local_c8);
                    /* WARNING: Load size is inaccurate */
        UE::ShaderLibrary::Private::OnPluginUnmountedDelegateHandle.ID = *FVar8.ID;
        pFVar5 = FPaths::ProjectContentDir(&local_b0);
        ::FString::FString(&local_138,L"Global_SC");
        FShaderLibrariesCollection::OpenLibrary
                  (FShaderLibrariesCollection::Impl,&local_138,pFVar5,false);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        pIVar6 = IPluginManager::Get();
        (**(code **)((longlong)*pIVar6 + 200))(pIVar6,&local_158);
        local_res18 = &local_158;
        local_128.DataPtr = (void **)0x0;
        local_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FShaderCodeLibrary::InitForRuntime'::__l18::<lambda_1>,void,int>
                    ::Call;
        local_110 = &local_res18;
        local_128.ArrayNum = 0;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",local_150,1,(TFunctionRef<void___cdecl(int)> *)&local_118,
                   local_res10[0],None,&local_128);
        DestructItems<TSharedRef<IPlugin,1>,int>(local_158,local_150);
        if (local_158 != (TSharedRef<IPlugin,1> *)0x0) {
          FMemory::Free(local_158);
        }
      }
      else {
        Shutdown();
        FWindowsPlatformSplash::Hide();
        pwVar13 = L"";
        if (1 < (byte)LogShaderLibrary._0_1_) {
          FPaths::ProjectContentDir(&local_a0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
        }
        pFVar5 = FPaths::ProjectContentDir(&local_70);
        pFVar5 = FPaths::ConvertRelativePathToFull(&local_80,pFVar5);
        pFVar9 = FText::FromString(&local_50,pFVar5);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_90,L"MessageDialog",L"MissingGlobalShaderLibraryFiles_Body",
                             L"Game files required to initialize the global shader library are missing from:\n\n{0}\n\nPlease make sure the game is installed correctly."
                            );
        pFVar11 = FTextFormat::FTextFormat(&local_40,pFVar10,Default);
        local_e8.Type = Text;
        FText::FText((FText *)&local_e8.TextValue,pFVar9);
        if ((local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_168.AllocatorInstance.Data,&local_e8,1);
        local_108.TextFormatData.Object = (pFVar11->TextFormatData).Object;
        local_108.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar11->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_108.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_108.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_108.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_f8,&local_108,&local_168);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
        if ((FFormatArgumentValue *)local_168.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_168.AllocatorInstance.Data);
        }
        if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar11->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar1 = (pFVar9->TextData).Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        if (local_90.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_60,L"MessageDialog",L"MissingGlobalShaderLibraryFiles_Title",
                            L"Missing game files");
        pFVar5 = FText::ToString(pFVar9);
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        pFVar5 = FText::ToString(&local_f8);
        if ((pFVar5->Data).ArrayNum != 0) {
          pwVar13 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        FWindowsPlatformMisc::MessageBoxExt(Ok,pwVar13,pwVar14);
        if (local_60.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
        }
        if (local_f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
        }
        FWindowsPlatformMisc::RequestExit(true,L"FShaderCodeLibrary::InitForRuntime");
      }
    }
  }
  else if ((FShaderLibrariesCollection::Impl->ShaderPlatform != param_1) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("FShaderLibrariesCollection::Impl->GetRuntimeShaderPlatform() == ShaderPlatform"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                              ,0xff1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// IsEnabled @ 145e60d10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FShaderCodeLibrary::IsEnabled(void)

{
  return FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0;
}

// LoadResource @ 145e61750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FShaderMapResource> __cdecl
FShaderCodeLibrary::LoadResource(FSHAHash *param_1,FArchive *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FShaderLibraryInstance *this;
  TRefCountPtr<FShaderMapResource_SharedCode> TVar4;
  longlong lVar5;
  FArchive *in_R8;
  uint local_res20;
  undefined4 uStackX_24;
  longlong local_38;
  
  if (FShaderLibrariesCollection::Impl == (FShaderLibrariesCollection *)0x0) {
    param_1->Hash[0] = '\0';
    param_1->Hash[1] = '\0';
    param_1->Hash[2] = '\0';
    param_1->Hash[3] = '\0';
    param_1->Hash[4] = '\0';
    param_1->Hash[5] = '\0';
    param_1->Hash[6] = '\0';
    param_1->Hash[7] = '\0';
  }
  else {
    if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId4202,"FShaderCodeLibrary_LoadResource",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                 ,0x106a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4202);
    }
    TMulticastDelegate<void___cdecl(FSHAHash_const_&,FArchive_*),FDefaultTSDelegateUserPolicy>::
    Broadcast(&OnSharedShaderCodeRequest,(FSHAHash *)param_2,in_R8);
    local_res20 = 0xffffffff;
    this = FShaderLibrariesCollection::FindShaderLibraryForShaderMap
                     (FShaderLibrariesCollection::Impl,(FSHAHash *)param_2,(int *)&stack0x00000020);
    if (this == (FShaderLibraryInstance *)0x0) {
      lVar5 = 0;
    }
    else {
      if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_class_TRefCountPtr<FShaderMapResource_SharedCode>___cdecl_FShaderLibrariesCollection::LoadResource(FSHAHash_const&___ptr64,FArchive*___ptr64)___ptr64'
                    ::__l5::__CpuProfilerEventSpecId3426,"LoadShaderResource_Internal",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                   ,0xd62);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_class_TRefCountPtr<FShaderMapResource_SharedCode>___cdecl_FShaderLibrariesCollection::LoadResource(FSHAHash_const&___ptr64,FArchive*___ptr64)___ptr64'
                   ::__l5::__CpuProfilerEventSpecId3426);
      }
      FShaderLibraryInstance::GetResource(this,(int)&stack0xffffffffffffffc8);
      lVar5 = local_38;
      if (local_38 == 0) {
        if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&`public:_class_TRefCountPtr<FShaderMapResource_SharedCode>___cdecl_FShaderLibrariesCollection::LoadResource(FSHAHash_const&___ptr64,FArchive*___ptr64)___ptr64'
                      ::__l8::__CpuProfilerEventSpecId3431,"LoadShaderResource_AddResource",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                     ,0xd67);
          FCpuProfilerTrace::OutputBeginEvent
                    (`public:_class_TRefCountPtr<FShaderMapResource_SharedCode>___cdecl_FShaderLibrariesCollection::LoadResource(FSHAHash_const&___ptr64,FArchive*___ptr64)___ptr64'
                     ::__l8::__CpuProfilerEventSpecId3431);
        }
        TVar4 = FShaderLibraryInstance::AddResource
                          (this,(int)&stack0x00000020,(FArchive *)(ulonglong)local_res20);
        if ((FShaderMapResource_SharedCode *)&stack0xffffffffffffffc8 != TVar4.Reference) {
          lVar5 = (TVar4.Reference)->_padding_;
          (TVar4.Reference)->_padding_ = 0;
        }
        if ((FShaderMapResource *)CONCAT44(uStackX_24,local_res20) != (FShaderMapResource *)0x0) {
          FShaderMapResource::Release((FShaderMapResource *)CONCAT44(uStackX_24,local_res20));
        }
        if (bVar1) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      if (bVar2) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    *(longlong *)param_1->Hash = lVar5;
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
      return (TRefCountPtr<FShaderMapResource>)(FShaderMapResource *)param_1;
    }
  }
  return (TRefCountPtr<FShaderMapResource>)(FShaderMapResource *)param_1;
}

// OpenLibrary @ 145e647d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FShaderCodeLibrary::OpenLibrary(FString *param_1,FString *param_2,bool param_3)

{
  bool bVar1;
  
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    bVar1 = FShaderLibrariesCollection::OpenLibrary
                      (FShaderLibrariesCollection::Impl,param_1,param_2,param_3);
    return bVar1;
  }
  return false;
}

// OpenPluginShaderLibrary @ 145e65440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FShaderCodeLibrary::OpenPluginShaderLibrary(IPlugin *param_1,bool param_2)

{
  char cVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  void *local_18 [2];
  
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x68))();
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1), cVar1 != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar4 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar4,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      if ((!param_2) && (3 < (byte)LogShaderLibrary._0_1_)) {
        (**(code **)(*(longlong *)param_1 + 8))(param_1);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
      }
      pFVar2 = (FString *)(**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_18);
      pFVar3 = (FString *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
      if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
        FShaderLibrariesCollection::OpenLibrary(FShaderLibrariesCollection::Impl,pFVar3,pFVar2,true)
        ;
      }
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
  }
  return;
}

// PreInit @ 145e67700

void __cdecl FShaderCodeLibrary::PreInit(void)

{
  TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> *this;
  FDelegateHandle FVar1;
  undefined1 local_res8 [32];
  
  this = FCoreDelegates::GetOnPakFileMounted2();
  FVar1 = TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
                         *)this,(_func___cdecl_void_IPakFile_ptr *)local_res8);
                    /* WARNING: Load size is inaccurate */
  UE::ShaderLibrary::Private::OnPakFileMountedDelegateHandle.ID = *FVar1.ID;
  return;
}

// PreloadShader @ 145e67910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FShaderCodeLibrary::PreloadShader(FSHAHash *param_1,FArchive *param_2)

{
  FShaderLibraryInstance *this;
  int local_res18 [4];
  
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    TMulticastDelegate<void___cdecl(FSHAHash_const_&,FArchive_*),FDefaultTSDelegateUserPolicy>::
    Broadcast(&OnSharedShaderCodeRequest,param_1,param_2);
    local_res18[0] = -1;
    this = FShaderLibrariesCollection::FindShaderLibraryForShader
                     (FShaderLibrariesCollection::Impl,param_1,local_res18);
    if (this != (FShaderLibraryInstance *)0x0) {
      FShaderLibraryInstance::PreloadShader(this,local_res18[0],param_2);
      return true;
    }
  }
  return false;
}

// RegisterSharedShaderCodeRequestDelegate_Handle @ 145e69720

FDelegateHandle __cdecl
FShaderCodeLibrary::RegisterSharedShaderCodeRequestDelegate_Handle
          (TDelegate<void___cdecl(FSHAHash_const_&,FArchive_*),FDefaultTSDelegateUserPolicy>
           *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(FSHAHash_const_&,FArchive_*),FDefaultTSDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FSHAHash_const_&,FArchive_*),FDefaultTSDelegateUserPolicy>
         *)&OnSharedShaderCodeRequest,param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// ReleasePreloadedShader @ 145e6a580

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FShaderCodeLibrary::ReleasePreloadedShader(FSHAHash *param_1)

{
  FShaderLibraryInstance *this;
  int local_res10 [6];
  
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    local_res10[0] = -1;
    this = FShaderLibrariesCollection::FindShaderLibraryForShader
                     (FShaderLibrariesCollection::Impl,param_1,local_res10);
    if (this != (FShaderLibraryInstance *)0x0) {
      FShaderLibraryInstance::ReleasePreloadedShader(this,local_res10[0]);
      return true;
    }
  }
  return false;
}

// SafeAssignHash @ 145e6c030

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl FShaderCodeLibrary::SafeAssignHash(FRHIShader *param_1,FSHAHash *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (FRHIShader *)0x0) {
    uVar1 = *(undefined8 *)(param_2->Hash + 8);
    *(undefined8 *)(param_1->Hash).Hash = *(undefined8 *)param_2->Hash;
    *(undefined8 *)((param_1->Hash).Hash + 8) = uVar1;
    *(undefined4 *)((param_1->Hash).Hash + 0x10) = *(undefined4 *)(param_2->Hash + 0x10);
  }
  return;
}

// Shutdown @ 145e6f9c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FShaderCodeLibrary::Shutdown(void)

{
  bool bVar1;
  FShaderLibrariesCollection *pFVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this;
  IPluginManager *pIVar3;
  TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *pTVar4;
  
  if (UE::ShaderLibrary::Private::OnPakFileMountedDelegateHandle.ID != 0) {
    this = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
           FCoreDelegates::GetOnPakFileMounted2();
    if (UE::ShaderLibrary::Private::OnPakFileMountedDelegateHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                (this,UE::ShaderLibrary::Private::OnPakFileMountedDelegateHandle);
    }
    UE::ShaderLibrary::Private::OnPakFileMountedDelegateHandle.ID = 0;
  }
  if (UE::ShaderLibrary::Private::OnPluginMountedDelegateHandle.ID != 0) {
    pIVar3 = IPluginManager::Get();
    pTVar4 = (TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *)
             (**(code **)((longlong)*pIVar3 + 0x120))(pIVar3);
    TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::Remove
              (pTVar4,UE::ShaderLibrary::Private::OnPluginMountedDelegateHandle);
    UE::ShaderLibrary::Private::OnPluginMountedDelegateHandle.ID = 0;
  }
  if (UE::ShaderLibrary::Private::OnPluginUnmountedDelegateHandle.ID != 0) {
    pIVar3 = IPluginManager::Get();
    pTVar4 = (TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *)
             (**(code **)((longlong)*pIVar3 + 0x138))(pIVar3);
    TMulticastDelegateRegistration<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::Remove
              (pTVar4,UE::ShaderLibrary::Private::OnPluginUnmountedDelegateHandle);
    UE::ShaderLibrary::Private::OnPluginUnmountedDelegateHandle.ID = 0;
  }
  bVar1 = 1 < UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.HashSize;
  if (!bVar1) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements
              (&UE::ShaderLibrary::Private::PluginsToIgnoreOnMount);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements,0,
                    UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements._8_4_);
  UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements._8_4_ = 0;
  if (UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&UE::ShaderLibrary::Private::PluginsToIgnoreOnMount,0,
               (int *)&UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements.field_0xc);
  }
  UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements._48_4_ = 0xffffffff;
  UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements._52_4_ = 0;
  UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements._40_4_ = 0;
  if (0x80 < (uint)UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements._44_4_) {
    UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements.field_0x10,0);
  }
  if (bVar1) {
    UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.HashSize = 1;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash
              (&UE::ShaderLibrary::Private::PluginsToIgnoreOnMount);
  }
  pFVar2 = FShaderLibrariesCollection::Impl;
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    FShaderLibrariesCollection::~FShaderLibrariesCollection(FShaderLibrariesCollection::Impl);
    ::operator_delete(pFVar2,0x70);
    FShaderLibrariesCollection::Impl = (FShaderLibrariesCollection *)0x0;
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFilesAccessLock);
  bVar1 = 1 < UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.HashSize;
  if (!bVar1) {
    TSet<UE::ShaderLibrary::Private::FMountedPakFileInfo,DefaultKeyFuncs<UE::ShaderLibrary::Private::FMountedPakFileInfo,0>,FDefaultSetAllocator>
    ::UnhashElements(&UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles);
  }
  TSparseArray<TSparseSetElement<UE::ShaderLibrary::Private::FMountedPakFileInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements,0,
                    UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements._8_4_);
  UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements._8_4_ = 0;
  if (UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)
                        &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles,0,
               (int *)&UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements.
                       field_0xc);
  }
  UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements._48_4_ = 0xffffffff;
  UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements._52_4_ = 0;
  UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements._40_4_ = 0;
  if (0x80 < (uint)UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements._44_4_) {
    UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements.field_0x10,0
              );
  }
  if (bVar1) {
    UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.HashSize = 1;
    TSet<UE::ShaderLibrary::Private::FMountedPakFileInfo,DefaultKeyFuncs<UE::ShaderLibrary::Private::FMountedPakFileInfo,0>,FDefaultSetAllocator>
    ::Rehash(&UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles);
  }
                    /* WARNING: Could not recover jumptable at 0x000145e6fc17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFilesAccessLock);
  return;
}

// UnregisterSharedShaderCodeRequestDelegate_Handle @ 145e71a10

void __cdecl
FShaderCodeLibrary::UnregisterSharedShaderCodeRequestDelegate_Handle(FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&OnSharedShaderCodeRequest,
               param_1);
    return;
  }
  return;
}

