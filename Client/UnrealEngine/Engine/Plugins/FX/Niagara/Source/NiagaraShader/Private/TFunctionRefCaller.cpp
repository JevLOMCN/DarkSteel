// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 6

// Call @ 148df6180

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

FShaderType * __cdecl
UE::Core::Private::Function::TFunctionRefCaller<FNiagaraShaderType_&___cdecl(void),FShaderType_&>::
Call(void *param_1)

{
  FShaderType *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148df6180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FShaderType *)(*param_1)();
  return pFVar1;
}

// Call @ 148df6190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraShaderScript::BuildScriptParametersMetadata'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x10);
  lVar2 = *(longlong *)param_1;
  uVar3 = *(undefined8 *)((longlong)param_1 + 8);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar2 + 0x38);
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  *(longlong *)(lVar2 + 0x38) = lVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 148df61d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraShaderScript::ReleaseShaderMap'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)param_1;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShared.cpp"
                       ,0x1c2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined8 *)(lVar1 + 0x18) = 0;
  return;
}

// Call @ 148df6220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraShaderScript::UpdateCachedData_PostCompile'::__l45::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined8 *)(*(longlong *)param_1 + 0xa8) = *(undefined8 *)((longlong)param_1 + 8);
  return;
}

// Call @ 148df6240

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraShaderScript::QueueForRelease'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  LOCK();
  **(undefined4 **)param_1 = 1;
  UNLOCK();
  return;
}

// Call @ 148df6260

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraAsyncGpuTraceProviderHwrt::PostRenderOpaque'::__l22::<lambda_2>,unsigned_int,FRayTracingMeshCommand_const_&>
::Call(void *param_1,FRayTracingMeshCommand *param_2)

{
  return 0;
}

