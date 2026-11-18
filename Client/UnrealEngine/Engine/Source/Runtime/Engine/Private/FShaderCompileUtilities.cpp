// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// CreateFileHelper @ 1485afe20

FArchive * __cdecl FShaderCompileUtilities::CreateFileHelper(FString *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  IFileManager *pIVar4;
  FArchive *pFVar5;
  wchar_t *pwVar6;
  int iVar7;
  
  fVar2 = __real_3c23d70a;
  iVar7 = 0;
  do {
    if (199 < iVar7) {
      pIVar4 = IFileManager::Get();
      if ((param_1->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pFVar5 = (FArchive *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,pwVar6,5);
      if (pFVar5 != (FArchive *)0x0) {
        return pFVar5;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("File",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerUtil.cpp"
                         ,0x55,L"Failed to create file %s!");
      if (!bVar3) {
        return (FArchive *)0x0;
      }
      pcVar1 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar1)();
      return pFVar5;
    }
    if (0 < iVar7) {
      FWindowsPlatformProcess::Sleep(fVar2);
    }
    pIVar4 = IFileManager::Get();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar5 = (FArchive *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,pwVar6,4);
    iVar7 = iVar7 + 1;
  } while (pFVar5 == (FArchive *)0x0);
  return pFVar5;
}

// DeleteFileHelper @ 1485b0e60

void __cdecl FShaderCompileUtilities::DeleteFileHelper(FString *param_1)

{
  code *pcVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  FPlatformFileManager *this;
  IPlatformFile *pIVar5;
  IFileManager *pIVar6;
  wchar_t *pwVar7;
  int iVar8;
  ulonglong in_stack_ffffffffffffffd8;
  
  this = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(this);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*pIVar5 + 0x78))(pIVar5,pwVar7);
  if (cVar3 != '\0') {
    pIVar6 = IFileManager::Get();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    in_stack_ffffffffffffffd8 = in_stack_ffffffffffffffd8 & 0xffffffffffffff00;
    cVar3 = (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,pwVar7,1,1,in_stack_ffffffffffffffd8);
    fVar2 = __real_3c23d70a;
    iVar8 = 0;
    while (cVar3 == '\0') {
      if (199 < iVar8) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bDeletedOutput",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerUtil.cpp"
                           ,0x94,L"Failed to delete %s!");
        if (!bVar4) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FWindowsPlatformProcess::Sleep(fVar2);
      pIVar6 = IFileManager::Get();
      if ((param_1->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      in_stack_ffffffffffffffd8 = in_stack_ffffffffffffffd8 & 0xffffffffffffff00;
      cVar3 = (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,pwVar7,1,1,in_stack_ffffffffffffffd8);
      iVar8 = iVar8 + 1;
    }
  }
  return;
}

// ExecuteShaderCompileJob @ 1485baf70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl FShaderCompileUtilities::ExecuteShaderCompileJob(FShaderCommonCompileJob *param_1)

{
  uint uVar1;
  void *_Src;
  FShaderCommonCompileJob *this;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  FShaderCompileJob *pFVar7;
  uint uVar8;
  longlong lVar9;
  FShaderPipelineCompileJob *pFVar10;
  longlong lVar11;
  bool bVar12;
  FName local_res8;
  undefined1 local_res10 [8];
  TArray<IShaderFormat_const_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId22,"FShaderCompileUtilities::ExecuteShaderCompileJob",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerUtil.cpp"
               ,0x16);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId22);
  }
  if ((param_1->bFinalized != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Job.bFinalized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerUtil.cpp"
                         ,0x18,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pwVar5 = FGenericPlatformProcess::ShaderDir();
  ::FString::FString(&local_58,pwVar5);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    TPM = GetTargetPlatformManagerRef();
    _Init_thread_footer(&::_TSS0);
  }
  pFVar7 = (FShaderCompileJob *)0x0;
  if (param_1->Type == Single) {
    pFVar7 = (FShaderCompileJob *)param_1;
  }
  puVar6 = (undefined8 *)(**(code **)((longlong)*TPM + 0xb0))();
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar11 = 8;
  local_68.ArrayNum = *(int *)(puVar6 + 1);
  lVar9 = (longlong)local_68.ArrayNum;
  _Src = (void *)*puVar6;
  if (local_68.ArrayNum == 0) {
    local_68.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
               &local_68.ArrayMax);
    memcpy(local_68.AllocatorInstance.Data,_Src,lVar9 << 3);
  }
  if (pFVar7 == (FShaderCompileJob *)0x0) {
    pFVar10 = (FShaderPipelineCompileJob *)0x0;
    if (param_1->Type == Pipeline) {
      pFVar10 = (FShaderPipelineCompileJob *)param_1;
    }
    if ((pFVar10 == (FShaderPipelineCompileJob *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PipelineJob",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerUtil.cpp"
                           ,0x26,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((pFVar10->StageJobs).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = *(uint *)(*(longlong *)(pFVar10->StageJobs).AllocatorInstance.Data + 0xd8);
    LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_res8);
    uVar8 = 1;
    if (1 < (pFVar10->StageJobs).ArrayNum) {
      do {
        uVar4 = 0;
        if ((int)uVar8 < (pFVar10->StageJobs).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this = *(FShaderCommonCompileJob **)((pFVar10->StageJobs).AllocatorInstance.Data + lVar11);
        if (this == (FShaderCommonCompileJob *)0x0) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers)
          ;
        }
        else {
          LOCK();
          (this->NumRefs).Counter = (this->NumRefs).Counter + 1;
          UNLOCK();
          if ((short)(uVar1 >> 4) != (short)(this[1].Hash >> 4)) {
            ::FName::GetPlainNameString(&local_res8,&local_48);
            UE::Logging::Private::BasicFatalLog
                      (&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          FShaderCommonCompileJob::Release(this);
        }
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar8 < (pFVar10->StageJobs).ArrayNum);
    }
    CompileShaderPipeline(&local_68,pFVar10,&local_58,(int *)0x0);
  }
  else {
    if ((pFVar7->Input).ShaderFormat == (FName)0x0) {
      LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    }
    CompileShader(&local_68,pFVar7,&local_58,(int *)0x0);
  }
  param_1->bFinalized = '\x01';
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FetchGBufferParamsRuntime @ 1485bb420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGBufferParams * __cdecl
FShaderCompileUtilities::FetchGBufferParamsRuntime
          (FGBufferParams *__return_storage_ptr__,EShaderPlatform param_1,EGBufferLayout param_2)

{
  code *pcVar1;
  bool bVar2;
  FGBufferParams *pFVar3;
  IConsoleManager *pIVar4;
  longlong *plVar5;
  TConsoleVariableData<int> *pTVar6;
  ulonglong uVar7;
  TConsoleVariableData<int> *pTVar8;
  
  bVar2 = FReadOnlyCVARCache::bAllowStaticLighting;
  pTVar8 = (TConsoleVariableData<int> *)0x0;
  __return_storage_ptr__->LegacyFormatIndex = 0;
  __return_storage_ptr__->bHasVelocity = false;
  __return_storage_ptr__->bHasTangent = false;
  __return_storage_ptr__->bUsesVelocityDepth = false;
  __return_storage_ptr__->bHasSingleLayerWaterSeparatedMainLight = false;
  __return_storage_ptr__->ShaderPlatform = param_1;
  __return_storage_ptr__->bHasPrecShadowFactor = bVar2;
  bVar2 = IsUsingBasePassVelocity((FStaticShaderPlatform)param_1);
  if ((bVar2) || (bVar2 = false, param_2 == GBL_ForceVelocity)) {
    bVar2 = true;
  }
  __return_storage_ptr__->bHasVelocity = bVar2;
  __return_storage_ptr__->bHasTangent = false;
  bVar2 = DoesProjectSupportDistanceFields();
  if (bVar2) {
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x20e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGBufferParams *)(*pcVar1)();
      return pFVar3;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsLumenGI == 0)
    goto LAB_1485bb4c8;
  }
  else {
LAB_1485bb4c8:
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x16c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGBufferParams *)(*pcVar1)();
      return pFVar3;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsRayTracing == 0) {
      bVar2 = false;
      goto LAB_1485bb508;
    }
  }
  bVar2 = true;
LAB_1485bb508:
  uVar7 = (ulonglong)_tls_index;
  __return_storage_ptr__->bUsesVelocityDepth = bVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar4 = IConsoleManager::Get();
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.GBufferFormat",1);
    pTVar6 = pTVar8;
    if (plVar5 != (longlong *)0x0) {
      pTVar6 = (TConsoleVariableData<int> *)(**(code **)(*plVar5 + 0x68))(plVar5);
    }
    CVarFormat = pTVar6;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar6 = CVarFormat;
  bVar2 = IsInParallelGameThread();
  if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
    pTVar8 = (TConsoleVariableData<int> *)&DAT_00000004;
  }
  __return_storage_ptr__->LegacyFormatIndex =
       *(int *)((longlong)pTVar8->ShadowedValue + (longlong)pTVar6->ShadowedValue);
  bVar2 = IsWaterSeparateMainDirLightEnabled((FStaticShaderPlatform)param_1);
  __return_storage_ptr__->bHasSingleLayerWaterSeparatedMainLight = bVar2;
  return __return_storage_ptr__;
}

// MoveFileHelper @ 1485cfcb0

void __cdecl FShaderCompileUtilities::MoveFileHelper(FString *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  FPlatformFileManager *this;
  IPlatformFile *pIVar8;
  int iVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  int iVar13;
  wchar_t *pwVar14;
  FString local_48;
  FString local_38 [2];
  
  this = FPlatformFileManager::Get();
  pIVar8 = FPlatformFileManager::GetPlatformFile(this);
  if ((param_2->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  cVar4 = (**(code **)((longlong)*pIVar8 + 0x78))(pIVar8,pwVar14);
  if (cVar4 != '\0') {
    uVar1 = (param_1->Data).ArrayNum;
    iVar13 = 0;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = _Src + (longlong)(int)uVar1 * 2;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    do {
      if (pFVar11 == _Src) goto LAB_1485cfd53;
      pFVar11 = pFVar11 + -2;
    } while (*(short *)pFVar11 != 0x2f);
    iVar9 = (int)((longlong)pFVar11 - (longlong)_Src >> 1);
    if (iVar9 == -1) {
LAB_1485cfd53:
      fVar3 = __real_3c23d70a;
      if ((&local_48 != param_1) &&
         (local_48.Data.ArrayMax = 0, local_48.Data.ArrayNum = uVar1, uVar1 != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)&local_48,uVar1,&local_48.Data.ArrayMax);
        memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
        fVar3 = __real_3c23d70a;
      }
    }
    else {
      iVar7 = uVar1 - 1;
      if (uVar1 == 0) {
        iVar7 = 0;
      }
      if (iVar9 < iVar7) {
        iVar7 = iVar9;
      }
      iVar9 = 0;
      if (0 < iVar7) {
        iVar9 = iVar7;
      }
      pFVar11 = (FScriptContainerElement *)L"";
      if (uVar1 != 0) {
        pFVar11 = _Src;
      }
      ::FString::ConstructFromPtrSize(local_38,(wchar_t *)pFVar11,iVar9);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.AllocatorInstance.Data = local_38[0].Data.AllocatorInstance.Data;
      local_48.Data.ArrayNum = local_38[0].Data.ArrayNum;
      local_48.Data.ArrayMax = local_38[0].Data.ArrayMax;
      local_38[0].Data.ArrayNum = 0;
      local_38[0].Data.ArrayMax = 0;
      local_38[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      fVar3 = __real_3c23d70a;
    }
    do {
      if (199 < iVar13) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Success",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerUtil.cpp"
                           ,0x7f,L"Failed to move file %s to %s!");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        break;
      }
      if (0 < iVar13) {
        FWindowsPlatformProcess::Sleep(fVar3);
      }
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar10.Data = local_48.Data.AllocatorInstance.Data;
      }
      cVar5 = (**(code **)((longlong)*pIVar8 + 0x200))(pIVar8,FVar10.Data);
      cVar4 = '\0';
      if (cVar5 != '\0') {
        if ((param_2->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        if ((param_1->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        cVar4 = (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,pwVar12,pwVar14);
      }
      iVar13 = iVar13 + 1;
    } while (cVar4 == '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

