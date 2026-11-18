// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FShaderMapCompileResults @ 14850f520

FShaderMapCompileResults * __thiscall
FShaderMapCompileResults::FShaderMapCompileResults
          (FShaderMapCompileResults *this,FShaderMapCompileResults *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  (this->FinishedJobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FinishedJobs).ArrayMax;
  iVar2 = (param_1->FinishedJobs).ArrayNum;
  pFVar3 = (param_1->FinishedJobs).AllocatorInstance.Data;
  (this->FinishedJobs).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<TRefCountPtr<FShaderCommonCompileJob>,TRefCountPtr<FShaderCommonCompileJob>,int>
              ((this->FinishedJobs).AllocatorInstance.Data,
               (TRefCountPtr<FShaderCommonCompileJob> *)pFVar3,iVar2);
  }
  (this->NumPendingJobs).Counter = (param_1->NumPendingJobs).Counter;
  this->bAllJobsSucceeded = param_1->bAllJobsSucceeded;
  this->bSkipResultProcessing = param_1->bSkipResultProcessing;
  this->TimeStarted = param_1->TimeStarted;
  this->bIsHung = param_1->bIsHung;
  return this;
}

// operator() @ 148514460

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

bool __thiscall
`FShaderMapCompileResults::CheckIfHung'::__l29::<lambda_1>::operator()
          (void *this,FShaderCommonCompileJob *param_1)

{
  FPendingShaderMapCompileResults *pFVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pFVar1 = (param_1->PendingShaderMap).Reference;
  puVar3 = &pFVar1->field_0x10;
  if (pFVar1 == (FPendingShaderMapCompileResults *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  if ((puVar3 == *(undefined1 **)this) && (param_1->bSucceeded == '\0')) {
    local_20 = (undefined ***)0x0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6AXAEAVFShaderCompileJob___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = ``FShaderMapCompileResults::CheckIfHung'::__l29::<lambda_1>::operator()'::__l5::
               <lambda_1>::<lambda_invoker_cdecl>;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(FShaderCompileJob_&),void,FShaderCompileJob_&>
                  ::Call;
    FShaderCommonCompileJob::ForEachSingleShaderJob
              (param_1,(TFunction<void___cdecl(FShaderCompileJob_&)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar2 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar2 = local_20;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    return true;
  }
  return false;
}

// CheckIfHung @ 14851a8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FShaderMapCompileResults::CheckIfHung(FShaderMapCompileResults *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FShaderCompilingManager *pFVar3;
  undefined ***pppuVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined1 local_b8 [8];
  LARGE_INTEGER local_b0;
  code *local_a8 [2];
  undefined **local_98;
  FShaderCompilingManager *local_90;
  code **local_88;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  FShaderMapCompileResults *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((this->bIsHung == false) &&
     (QueryPerformanceCounter(&local_b0),
     (double)GShaderMapCompilationTimeout <=
     ((double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000) -
     this->TimeStarted)) {
    this->bIsHung = true;
    if (1 < (byte)LogShaderCompilers._0_1_) {
      local_c8 = (this->FinishedJobs).ArrayNum;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
    pFVar3 = GShaderCompilingManager;
    if (GCrashOnHungShaderMaps != 0) {
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FShaderMapCompileResults::CheckIfHung'::`29'::<lambda_1>,0,0>
                  ::_vftable_;
      local_60 = this;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FShaderMapCompileResults::CheckIfHung'::__l29::<lambda_1>,bool,FShaderCommonCompileJob_*>
                    ::Call;
      local_50 = (undefined ***)0x0;
      pFVar5 = (GShaderCompilingManager->Threads).AllocatorInstance.Data;
      iVar2 = (GShaderCompilingManager->Threads).ArrayNum;
      pFVar1 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar3->Threads).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_b8);
        }
        if (pFVar5 == pFVar1) break;
        local_88 = local_78;
        local_80 = (undefined ***)0x0;
        local_98 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FShaderCompilingManager::DumpDebugInfoForEachPendingJob'::`13'::<lambda_1>,0,0>
                    ::_vftable_;
        local_90 = pFVar3;
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FShaderCompilingManager::DumpDebugInfoForEachPendingJob'::__l13::<lambda_1>,bool,FShaderCommonCompileJob_*>
                      ::Call;
        (**(code **)(**(longlong **)pFVar5 + 0x60))(*(longlong **)pFVar5,local_a8);
        if (local_a8[0] != (code *)0x0) {
          pppuVar4 = &local_98;
          if (local_80 != (undefined ***)0x0) {
            pppuVar4 = local_80;
          }
          (*(code *)(*pppuVar4)[2])();
        }
        pFVar5 = pFVar5 + 8;
      }
      if (local_78[0] != (code *)0x0) {
        pppuVar4 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar4 = local_50;
        }
        (*(code *)(*pppuVar4)[2])();
      }
      local_c8 = (this->FinishedJobs).ArrayNum;
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
  }
  return;
}

