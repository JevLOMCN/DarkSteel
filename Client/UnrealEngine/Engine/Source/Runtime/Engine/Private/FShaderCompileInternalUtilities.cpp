// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// <lambda_invoker_cdecl> @ 1473398d0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
`FShaderCompileInternalUtilities::EnableDumpDebugInfoForRetry'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FShaderCompileJob *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  if ((param_1->Input).DumpDebugInfoPath.Data.ArrayNum < 2) {
    pFVar2 = FShaderCompilingManager::CreateShaderDebugInfoPath
                       (GShaderCompilingManager,&local_18,&param_1->Input);
    pFVar3 = &(param_1->Input).DumpDebugInfoPath;
    if (pFVar3 != pFVar2) {
      pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar3->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Input).DumpDebugInfoPath.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      (param_1->Input).DumpDebugInfoPath.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    LOCK();
    GShaderCompilingManager->NumDumpedShaderSources =
         (atomic<int>)((int)GShaderCompilingManager->NumDumpedShaderSources + 1);
    UNLOCK();
  }
  return;
}

// DumpDebugInfo @ 14734bcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FShaderCompileInternalUtilities::DumpDebugInfo(FShaderCommonCompileJob *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  FShaderCommonCompileJob *pFVar6;
  FShaderCommonCompileJob *pFVar7;
  FPendingShaderMapCompileResults *pFVar8;
  FShaderCommonCompileJob *pFVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  TTuple<EShaderFrequency,FString> *local_88;
  undefined8 local_80;
  FShaderCommonCompileJob *local_78;
  code *local_68;
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_58 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFShaderCompileJob___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `FShaderCompileInternalUtilities::EnableDumpDebugInfoForRetry'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  pFVar9 = (FShaderCommonCompileJob *)0x0;
  local_40 = (undefined ***)0x0;
  pFVar6 = pFVar9;
  if (param_1->Type == Single) {
    pFVar6 = param_1;
  }
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<void_(__cdecl*)(FShaderCompileJob_&),void,FShaderCompileJob_&>::Call
  ;
  local_78 = param_1;
  if (pFVar6 == (FShaderCommonCompileJob *)0x0) {
    pFVar6 = pFVar9;
    if (param_1->Type == Pipeline) {
      pFVar6 = param_1;
    }
    if (pFVar6 != (FShaderCommonCompileJob *)0x0) {
      pFVar8 = pFVar6[1].PendingShaderMap.Reference;
      iVar1 = pFVar6[1].NumRefs.Counter;
      plVar2 = (longlong *)&pFVar8->field_0x0;
      while( true ) {
        if (pFVar6[1].NumRefs.Counter != iVar1) {
          `TCheckedPointerIterator<TRefCountPtr<FShaderCompileJob>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_98);
        }
        param_1 = local_78;
        if (pFVar8 == (FPendingShaderMapCompileResults *)(plVar2 + iVar1)) break;
        pFVar7 = pFVar9;
        if ((*(FShaderCommonCompileJob **)pFVar8)->Type == Single) {
          pFVar7 = *(FShaderCommonCompileJob **)pFVar8;
        }
        if (pFVar7 == (FShaderCommonCompileJob *)0x0) {
LAB_14734be5c:
          pFVar8 = (FPendingShaderMapCompileResults *)&pFVar8->field_0x8;
        }
        else {
          UE::Core::Private::Function::CheckCallable(local_68);
          pcVar3 = local_68;
          pppuVar5 = &local_58;
          if (local_40 != (undefined ***)0x0) {
            pppuVar5 = local_40;
          }
          puVar4 = (undefined8 *)(*(code *)(*pppuVar5)[1])();
          if (pcVar3 != UE::Core::Private::Function::
                        TFunctionRefCaller<void_(__cdecl*)(FShaderCompileJob_&),void,FShaderCompileJob_&>
                        ::Call) {
            (*pcVar3)(puVar4,pFVar7);
            goto LAB_14734be5c;
          }
          (*(code *)*puVar4)(pFVar7);
          pFVar8 = (FPendingShaderMapCompileResults *)&pFVar8->field_0x8;
        }
      }
    }
  }
  else {
    UE::Core::Private::Function::CheckCallable
              (UE::Core::Private::Function::
               TFunctionRefCaller<void_(__cdecl*)(FShaderCompileJob_&),void,FShaderCompileJob_&>::
               Call);
    pcVar3 = local_68;
    pppuVar5 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar5 = local_40;
    }
    puVar4 = (undefined8 *)(*(code *)(*pppuVar5)[1])();
    if (pcVar3 == UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(FShaderCompileJob_&),void,FShaderCompileJob_&>
                  ::Call) {
      (*(code *)*puVar4)(pFVar6);
    }
    else {
      (*pcVar3)(puVar4,pFVar6);
    }
  }
  if (local_68 != (code *)0x0) {
    pppuVar5 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar5 = local_40;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  local_90[0] = 0;
  local_88 = (TTuple<EShaderFrequency,FString> *)0x0;
  local_80 = 0;
  (**(code **)(param_1->_padding_ + 0x18))(param_1,local_90);
  DestructItems<TTuple<enum_EShaderFrequency,FString>,int>(local_88,(int)local_80);
  if (local_88 != (TTuple<EShaderFrequency,FString> *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// EnableDumpDebugInfoForRetry @ 14734c350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FShaderCompileInternalUtilities::EnableDumpDebugInfoForRetry(FShaderCommonCompileJob *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  FShaderCommonCompileJob *pFVar6;
  longlong lVar7;
  FPendingShaderMapCompileResults *pFVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  code *local_68;
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_58 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFShaderCompileJob___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `FShaderCompileInternalUtilities::EnableDumpDebugInfoForRetry'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_40 = (undefined ***)0x0;
  pFVar6 = (FShaderCommonCompileJob *)0x0;
  if (param_1->Type == Single) {
    pFVar6 = param_1;
  }
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<void_(__cdecl*)(FShaderCompileJob_&),void,FShaderCompileJob_&>::Call
  ;
  if (pFVar6 == (FShaderCommonCompileJob *)0x0) {
    pFVar6 = (FShaderCommonCompileJob *)0x0;
    if (param_1->Type == Pipeline) {
      pFVar6 = param_1;
    }
    if (pFVar6 != (FShaderCommonCompileJob *)0x0) {
      pFVar8 = pFVar6[1].PendingShaderMap.Reference;
      iVar1 = pFVar6[1].NumRefs.Counter;
      plVar2 = (longlong *)&pFVar8->field_0x0;
      while( true ) {
        if (pFVar6[1].NumRefs.Counter != iVar1) {
          `TCheckedPointerIterator<TRefCountPtr<FShaderCompileJob>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_78);
        }
        if (pFVar8 == (FPendingShaderMapCompileResults *)(plVar2 + iVar1)) break;
        lVar7 = 0;
        if (*(char *)(*(longlong *)pFVar8 + 0x30) == '\0') {
          lVar7 = *(longlong *)pFVar8;
        }
        if (lVar7 == 0) {
LAB_14734c49a:
          pFVar8 = (FPendingShaderMapCompileResults *)&pFVar8->field_0x8;
        }
        else {
          UE::Core::Private::Function::CheckCallable(local_68);
          pcVar3 = local_68;
          pppuVar5 = &local_58;
          if (local_40 != (undefined ***)0x0) {
            pppuVar5 = local_40;
          }
          puVar4 = (undefined8 *)(*(code *)(*pppuVar5)[1])();
          if (pcVar3 != UE::Core::Private::Function::
                        TFunctionRefCaller<void_(__cdecl*)(FShaderCompileJob_&),void,FShaderCompileJob_&>
                        ::Call) {
            (*pcVar3)(puVar4,lVar7);
            goto LAB_14734c49a;
          }
          (*(code *)*puVar4)(lVar7);
          pFVar8 = (FPendingShaderMapCompileResults *)&pFVar8->field_0x8;
        }
      }
    }
  }
  else {
    UE::Core::Private::Function::CheckCallable
              (UE::Core::Private::Function::
               TFunctionRefCaller<void_(__cdecl*)(FShaderCompileJob_&),void,FShaderCompileJob_&>::
               Call);
    pcVar3 = local_68;
    pppuVar5 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar5 = local_40;
    }
    puVar4 = (undefined8 *)(*(code *)(*pppuVar5)[1])();
    if (pcVar3 == UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(FShaderCompileJob_&),void,FShaderCompileJob_&>
                  ::Call) {
      (*(code *)*puVar4)(pFVar6);
    }
    else {
      (*pcVar3)(puVar4,pFVar6);
    }
  }
  if (local_68 != (code *)0x0) {
    pppuVar5 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar5 = local_40;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// ExecuteShaderCompileJob @ 14734ccf0

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

void __cdecl
FShaderCompileInternalUtilities::ExecuteShaderCompileJob(FShaderCommonCompileJob *param_1)

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
  FName FStackX_8;
  undefined1 auStackX_10 [8];
  TArray<IShaderFormat_const_*,TSizedDefaultAllocator<32>_> TStack_68;
  FString FStack_58;
  FString FStack_48;
  
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
  ::FString::FString(&FStack_58,pwVar5);
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
  TStack_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar11 = 8;
  TStack_68.ArrayNum = *(int *)(puVar6 + 1);
  lVar9 = (longlong)TStack_68.ArrayNum;
  _Src = (void *)*puVar6;
  if (TStack_68.ArrayNum == 0) {
    TStack_68.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_68.ArrayNum,0,&TStack_68.AllocatorInstance,TStack_68.ArrayNum,
               &TStack_68.ArrayMax);
    memcpy(TStack_68.AllocatorInstance.Data,_Src,lVar9 << 3);
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
    LegacyShaderPlatformToShaderFormat((EShaderPlatform)&FStackX_8);
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
            ::FName::GetPlainNameString(&FStackX_8,&FStack_48);
            UE::Logging::Private::BasicFatalLog
                      (&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
            if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
            }
          }
          FShaderCommonCompileJob::Release(this);
        }
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar8 < (pFVar10->StageJobs).ArrayNum);
    }
    CompileShaderPipeline(&TStack_68,pFVar10,&FStack_58,(int *)0x0);
  }
  else {
    if ((pFVar7->Input).ShaderFormat == (FName)0x0) {
      LegacyShaderPlatformToShaderFormat((EShaderPlatform)auStackX_10);
    }
    CompileShader(&TStack_68,pFVar7,&FStack_58,(int *)0x0);
  }
  param_1->bFinalized = '\x01';
  if (TStack_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_68.AllocatorInstance.Data);
  }
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

