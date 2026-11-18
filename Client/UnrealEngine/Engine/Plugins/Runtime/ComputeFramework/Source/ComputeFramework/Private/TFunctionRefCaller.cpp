// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 9

// Call @ 1494caae0

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
UE::Core::Private::Function::
TFunctionRefCaller<FComputeKernelShaderType_&___cdecl(void),FShaderType_&>::Call(void *param_1)

{
  FShaderType *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001494caae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FShaderType *)(*param_1)();
  return pFVar1;
}

// Call @ 1494caaf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
::Call(void *param_1,FShaderParametersMetadataBuilder *param_2,wchar_t **param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001494caafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,*param_3);
  return;
}

// Call @ 1494cab10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FComputeGraphInstance::EnqueueWork'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Src;
  FName FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  FName FStackX_8;
  ForAnyElementType FStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  ForAnyElementType FStack_50;
  int iStack_48;
  FDestructionSentinel FStack_40;
  
  lVar4 = *(longlong *)param_1;
  uVar5 = *(undefined8 *)((longlong)param_1 + 0x50);
  FVar2 = *(FScriptContainerElement *)((longlong)param_1 + 0x58);
  auStack_58 = (undefined1  [8])0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  iStack_48 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_58,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)param_1 + 0x38))
  ;
  iVar10 = *(int *)((longlong)param_1 + 0x30);
  _Src = *(void **)((longlong)param_1 + 0x28);
  FStack_68.Data = (FScriptContainerElement *)0x0;
  uStack_60 = CONCAT44(uStack_60._4_4_,iVar10);
  if (iVar10 == 0) {
    uStack_60 = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar10,0,&FStack_68,iVar10,(int *)((longlong)&uStack_60 + 4));
    memcpy(FStack_68.Data,_Src,(longlong)iVar10 << 3);
  }
  FVar6 = *(FName *)((longlong)param_1 + 8);
  uVar7 = *(undefined8 *)((longlong)param_1 + 0x20);
  FVar3 = *(FScriptContainerElement *)((longlong)param_1 + 0x18);
  uVar8 = *(undefined8 *)((longlong)param_1 + 0x10);
  FStackX_8 = FVar6;
  uVar9 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
  pTVar11 = TMapBase<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>_>
                        *)(lVar4 + 8),FVar6.Number + uVar9,&FStackX_8);
  iVar10 = pTVar11->ArrayNum;
  if (iVar10 == pTVar11->ArrayMax) {
    iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
  }
  pTVar11->ArrayNum = iVar10 + 1;
  pFVar12 = (pTVar11->AllocatorInstance).Data + (longlong)iVar10 * 0x50;
  DefaultConstructItems<FComputeGraphTaskWorker::FGraphInvocation,int>(pFVar12,1);
  *(undefined8 *)pFVar12 = uVar8;
  pFVar1 = pFVar12 + 0x20;
  *(undefined8 *)(pFVar12 + 8) = uVar5;
  pFVar12[0x10] = FVar3;
  *(undefined8 *)(pFVar12 + 0x18) = uVar7;
  if (pFVar1 != (FScriptContainerElement *)&FStack_68) {
    if (*(void **)pFVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar1);
    }
    *(FScriptContainerElement **)pFVar1 = FStack_68.Data;
    FStack_68.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar12 + 0x28) = (undefined4)uStack_60;
    *(undefined4 *)(pFVar12 + 0x2c) = uStack_60._4_4_;
    uStack_60 = 0;
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar12 + 0x30),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_58);
  pFVar12[0x48] = FVar2;
  if (FStack_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
             (FWriteAccessScope *)&FStack_40);
  if ((iStack_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    iStack_48 = 0;
  }
  if (FStack_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_58);
  return;
}

// Call @ 1494cab20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ComputeFramework::AbortWork'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FComputeGraphTaskWorker::Abort
            (*(FComputeGraphTaskWorker **)param_1,*(UObject **)((longlong)param_1 + 8));
  return;
}

// Call @ 1494cab40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ComputeFramework::FlushWork'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined1 auStackY_858 [32];
  FRDGEventName FStack_828;
  FRDGBuilder *pFStack_810;
  undefined8 uStack_808;
  Type TStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  FRDGBuilder FStack_7e8;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_858;
  FStack_828.EventFormat = L"";
  FStack_828.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_828.FormattedEventName.Data.ArrayNum = 0;
  FStack_828.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&FStack_7e8,param_2,&FStack_828,None,GMaxRHIShaderPlatform);
  pFStack_810 = &FStack_7e8;
  uStack_808 = *(undefined8 *)((longlong)param_1 + 8);
  TStack_800 = GMaxRHIFeatureLevel;
  uStack_7f8 = *(undefined8 *)((longlong)param_1 + 0x10);
  uStack_7f0 = 0;
  (**(code **)(**(longlong **)param_1 + 0x18))(*(longlong **)param_1,&pFStack_810);
  FRDGBuilder::Execute(&FStack_7e8);
  FRDGBuilder::~FRDGBuilder(&FStack_7e8);
  return;
}

// Call @ 1494cab50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UComputeGraph::ReleaseRenderProxy'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 != (void *)0x0) {
    TDefaultDelete<FShaderParametersMetadataAllocations>::operator()
              ((TDefaultDelete<FShaderParametersMetadataAllocations> *)((longlong)pvVar1 + 0x28),
               *(FShaderParametersMetadataAllocations **)((longlong)pvVar1 + 0x28));
    DestructItems<FComputeKernelPermutationVector,int>
              (*(FComputeKernelPermutationVector **)((longlong)pvVar1 + 0x18),
               *(int *)((longlong)pvVar1 + 0x20));
    if (*(void **)((longlong)pvVar1 + 0x18) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x18));
    }
    DestructItems<FComputeGraphRenderProxy::FKernelInvocation,int>
              (*(FKernelInvocation **)((longlong)pvVar1 + 8),*(int *)((longlong)pvVar1 + 0x10));
    if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 8));
    }
    ::operator_delete(pvVar1,0x30);
    return;
  }
  return;
}

// Call @ 1494cabc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FComputeKernelResource::ReleaseShaderMap'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShared.cpp"
                       ,0x123,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined8 *)(lVar1 + 0x20) = 0;
  return;
}

// Call @ 1494cac10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FComputeKernelResource::CacheShaders'::__l55::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 8);
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShared.cpp"
                       ,0x123,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  return;
}

// Call @ 1494cac70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FComputeGraphTaskWorker::SubmitWork'::__l2::<lambda_4>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  
  pTVar3 = TSet<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)(*(longlong *)param_1 + 8),*(FName *)((longlong)param_1 + 8));
  if (pTVar3 == (TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (-1 < *(int *)&pTVar3->field_0x14) {
    DestructItems<FComputeGraphTaskWorker::FGraphInvocation,int>
              (*(FGraphInvocation **)&pTVar3->field_0x8,*(int *)&pTVar3->field_0x10);
    *(undefined4 *)&pTVar3->field_0x10 = 0;
    return;
  }
  DestructItems<FComputeGraphTaskWorker::FGraphInvocation,int>
            (*(FGraphInvocation **)&pTVar3->field_0x8,*(int *)&pTVar3->field_0x10);
  *(undefined4 *)&pTVar3->field_0x10 = 0;
  if (*(int *)&pTVar3->field_0x14 != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)&pTVar3->field_0x8,0,(int *)&pTVar3->field_0x14);
  }
  return;
}

