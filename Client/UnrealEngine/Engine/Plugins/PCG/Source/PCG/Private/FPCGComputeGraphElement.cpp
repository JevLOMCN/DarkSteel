// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// operator() @ 1497e55e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FPCGModule *this_00;
  TWeakPtr<FPCGContextHandle,1> *pTVar3;
  TWeakPtr<FPCGContextHandle,1> local_48;
  code *local_38 [2];
  undefined **local_28;
  FPCGContextHandle *local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  *(undefined1 *)(*(longlong *)this + 0x138) = 1;
  this_00 = FPCGModule::GetPCGModuleChecked();
  pTVar3 = FPCGContext::GetOrCreateHandle(*(FPCGContext **)this,&local_48);
  local_20 = pTVar3->Object;
  local_18 = (pTVar3->WeakReferenceCount).ReferenceController;
  (pTVar3->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar3->Object = (FPCGContextHandle *)0x0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FPCGComputeGraphElement::ExecuteInternal'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  FPCGModule::ExecuteNextTick(this_00,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// operator() @ 1497e6640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FPCGComputeGraphElement::ExecuteInternal'::__l150::<lambda_2>::operator()(void *this)

{
  UPCGDataBinding *this_00;
  bool bVar1;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  TWeakPtr<FPCGContextHandle,1> local_38;
  FSharedContext<FPCGComputeGraphContext> local_28;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  local_38.Object = *(FPCGContextHandle **)this;
  local_38.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FPCGContext::FSharedContext<FPCGComputeGraphContext>::FSharedContext<FPCGComputeGraphContext>
            (&local_28,&local_38);
  if ((local_28.SharedHandle.Object != (FPCGContextHandle *)0x0) &&
     ((local_28.SharedHandle.Object)->Context != (FPCGContext *)0x0)) {
    this_00 = (UPCGDataBinding *)(local_28.SharedHandle.Object)->Context[1]._padding_;
    bVar1 = -1 < CpuChannel->Enabled;
    if (bVar1) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId62,"UPCGDataBinding::InitializeTables",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                 ,0x3e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId62);
    }
    TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::operator=
              (&(this_00->AttributeTable).AttributeTable,
               &(((this_00->Graph).field0_0x0.DebugPtr)->StaticAttributeTable).AttributeTable);
    local_38.Object = (FPCGContextHandle *)0x0;
    local_38.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    DestructItems<FString,int>
              ((FString *)(this_00->StringTable).AllocatorInstance.Data,
               (this_00->StringTable).ArrayNum);
    TArray<FString,TSizedDefaultAllocator<32>_>::CopyToEmpty<FString,int>
              (&this_00->StringTable,(FString *)&local_38,1,(this_00->StringTable).ArrayMax);
    if (local_38.Object != (FPCGContextHandle *)0x0) {
      FMemory::Free(local_38.Object);
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              (&this_00->StringTable,&((this_00->Graph).field0_0x0.DebugPtr)->StringTable);
    UPCGDataBinding::AddInputDataAttributesToTable(this_00);
    UPCGDataBinding::AddInputDataStringsToTable(this_00);
    UPCGDataBinding::AddInputDataTagsToTable(this_00);
    LOCK();
    this_00->bTablesInitialized = (atomic<bool>)0x1;
    UNLOCK();
    if (bVar1) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedHandle.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// operator() @ 1497e6810

void __thiscall
`FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  TObjectPtr<UComputeDataProvider_const_>_u_0 TVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TObjectPtr<UComputeDataProvider_const_>_u_0 local_res8;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                         ,0x123,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      pTVar8 = pTVar9;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1497e6876;
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar4 = aVar3 == aVar5;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar4);
    pTVar8 = pTVar1;
    if (*(longlong *)this != 0) {
      pTVar9 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x10);
    }
  }
LAB_1497e6876:
  TVar6.DebugPtr =
       (UComputeDataProvider *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
  if (((TVar6.DebugPtr != (UComputeDataProvider *)0x0) &&
      (pTVar9 != (TReferenceControllerBase<1> *)0x0)) &&
     (*(longlong *)((longlong)this + 0x18) ==
      *(longlong *)&((UObject *)(TVar6.DebugPtr + 3))->field_0x18)) {
    local_res8.DebugPtr = TVar6.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
    if (*(atomic<int> *)&pTVar9[0x2c]._padding_ != pTVar9[0x2e].WeakReferenceCount) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
      }
      uVar7 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      TSet<TObjectPtr<UComputeDataProvider>,DefaultKeyFuncs<TObjectPtr<UComputeDataProvider>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UComputeDataProvider_const_>_>
                ((TSet<TObjectPtr<UComputeDataProvider>,DefaultKeyFuncs<TObjectPtr<UComputeDataProvider>,0>,FDefaultSetAllocator>
                  *)&pTVar9[0x2b].SharedReferenceCount,uVar7 >> 0x10 ^ uVar7,
                 (TObjectPtr<UComputeDataProvider_const_> *)&local_res8.ObjectPtr);
    }
    if (*(atomic<int> *)&pTVar9[0x2c]._padding_ == pTVar9[0x2e].WeakReferenceCount) {
      *(undefined1 *)&pTVar9[0x13].SharedReferenceCount = 0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 1497e7500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FPCGComputeGraphElement::ExecuteInternal'::__l204::<lambda_4>::operator()(void *this)

{
  int iVar1;
  FPCGContext *pFVar2;
  UPCGDataBinding *this_00;
  UPCGComputeGraph *pUVar3;
  FScriptContainerElement *pFVar4;
  UComputeKernel *pUVar5;
  code *pcVar6;
  undefined8 *puVar7;
  bool bVar8;
  byte bVar9;
  UClass *pUVar10;
  FString *pFVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  byte bVar16;
  FPCGKernelPin *pFVar17;
  undefined8 *puVar18;
  bool bVar19;
  bool bVar20;
  uint local_res8 [2];
  undefined8 *local_res10;
  undefined1 local_res18 [8];
  FLLMScope local_res20 [2];
  TArray<FPCGKernelPin,TSizedDefaultAllocator<32>_> local_c8;
  FName local_b8;
  FMemScope local_b0;
  TWeakPtr<FPCGContextHandle,1> local_a8;
  FSharedContext<FPCGComputeGraphContext> local_98;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId389,"DataDescrPrimeAndValidateTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
               ,0x185);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId389);
  }
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_b8 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_b0,&local_b8,true);
  local_a8.Object = *(FPCGContextHandle **)this;
  local_a8.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FPCGContext::FSharedContext<FPCGComputeGraphContext>::FSharedContext<FPCGComputeGraphContext>
            (&local_98,&local_a8);
  if ((local_98.SharedHandle.Object != (FPCGContextHandle *)0x0) &&
     (pFVar2 = (local_98.SharedHandle.Object)->Context, pFVar2 != (FPCGContext *)0x0)) {
    this_00 = (UPCGDataBinding *)pFVar2[1]._padding_;
    bVar20 = -1 < CpuChannel->Enabled;
    if (bVar20) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId97,"UPCGDataBinding::PrimeDataDescriptionCache",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                 ,0x61);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId97);
    }
    if ((this_00->bIsDataDescriptionCachePrimed == (atomic<bool>)0x0) &&
       (*(int *)&(this_00->DataDescriptionCache).field_0x8 ==
        *(int *)&(this_00->DataDescriptionCache).field_0x34)) {
      pUVar3 = (this_00->Graph).field0_0x0.DebugPtr;
      if (pUVar3 == (UPCGComputeGraph *)0x0) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<9049822076394799209>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                           ,0x69,"Graph");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.ArrayNum = 0;
        local_c8.ArrayMax = 0;
        TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>
        ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                  ((TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>
                    *)&pUVar3->KernelPinToFirstBinding,&local_c8);
        iVar1 = local_c8.ArrayNum;
        uVar12 = (ulonglong)local_c8.ArrayNum;
        pFVar17 = (FPCGKernelPin *)(local_c8.AllocatorInstance.Data + uVar12 * 0x10);
        FVar14.Data = local_c8.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar12 != iVar1) {
            `TCheckedPointerIterator<FPCGKernelPin,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if ((FPCGKernelPin *)FVar14.Data == pFVar17) break;
          UPCGDataBinding::ComputeKernelPinDataDesc(this_00,&local_88,(FPCGKernelPin *)FVar14.Data);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          uVar12 = local_c8._8_8_ & 0xffffffff;
          FVar14.Data = FVar14.Data + 0x10;
        }
        if ((FPCGKernelPin *)local_c8.AllocatorInstance.Data != (FPCGKernelPin *)0x0) {
          FMemory::Free(local_c8.AllocatorInstance.Data);
        }
      }
      LOCK();
      this_00->bIsDataDescriptionCachePrimed = (atomic<bool>)0x1;
      UNLOCK();
    }
    else {
      `UPCGDataBinding::PrimeDataDescriptionCache'::__l5::<lambda_1>::operator()(&local_res10);
    }
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    pFVar4 = pFVar2[1].InputData.TaggedData.AllocatorInstance.Data;
    bVar20 = -1 < CpuChannel->Enabled;
    if (bVar20) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId187,"UPCGComputeGraph::IsGraphDataValid",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeGraph.cpp"
                 ,0xbb);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId187);
    }
    local_res8[0] = *(uint *)(pFVar4 + 0x30);
    uVar12 = (ulonglong)(int)local_res8[0];
    bVar16 = 1;
    puVar18 = *(undefined8 **)(pFVar4 + 0x28);
    local_res10 = puVar18 + uVar12;
    while( true ) {
      puVar7 = local_res10;
      if (*(int *)(pFVar4 + 0x30) != (int)uVar12) {
        `TCheckedPointerIterator<TObjectPtr<UComputeKernel>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (puVar18 == puVar7) break;
      pUVar5 = (UComputeKernel *)*puVar18;
      if (pUVar5 == (UComputeKernel *)0x0) {
        pFVar11 = GetTypeName<UPCGComputeKernel>(&local_58);
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar13);
      }
      pUVar10 = UPCGComputeKernel::GetPrivateStaticClass();
      iVar1 = (int)pUVar10->_padding_;
      if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar10->_padding_)) {
        pFVar11 = GetTypeName<UPCGComputeKernel>(&local_78);
        pwVar13 = L"";
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        pFVar11 = GetFullNameForCastLogError<UComputeKernel_const_>(&local_68,pUVar5);
        if ((pFVar11->Data).ArrayNum != 0) {
          pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar13,pwVar15);
      }
      bVar9 = (**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5,pFVar2);
      uVar12 = (ulonglong)local_res8[0];
      bVar16 = bVar16 & bVar9;
      puVar18 = puVar18 + 1;
    }
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    LOCK();
    pFVar2[1].AsyncState.field_0x29 = bVar16;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedHandle.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_res20);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AbortInternal @ 1497ea1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGComputeGraphElement::AbortInternal(FPCGComputeGraphElement *this,FPCGContext *param_1)

{
  UObject *pUVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  IPCGGraphExecutionSource *pIVar5;
  
  if (param_1 != (FPCGContext *)0x0) {
    if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
       (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar2)) {
      pIVar5 = (IPCGGraphExecutionSource *)0x0;
    }
    else {
      pIVar5 = (param_1->ExecutionSource).InterfaceInstance;
    }
    lVar4._0_1_ = param_1[1].InputData.bCancelExecutionOnEmpty;
    lVar4._1_1_ = param_1[1].InputData.bCancelExecution;
    lVar4._2_6_ = *(undefined6 *)&param_1[1].InputData.field_0x12;
    if (((lVar4 != 0) && (param_1[1]._padding_ != 0)) && (pIVar5 != (IPCGGraphExecutionSource *)0x0)
       ) {
      plVar3 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
      lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
      if (lVar4 != 0) {
        pUVar1 = (UObject *)param_1[1]._padding_;
        plVar3 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        ComputeFramework::AbortWork(*(FSceneInterface **)(lVar4 + 600),pUVar1);
      }
    }
  }
  ResetAsyncOperations(this,param_1);
  return;
}

// CanExecuteOnlyOnMainThread @ 1497f0d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGComputeGraphElement::CanExecuteOnlyOnMainThread
          (FPCGComputeGraphElement *this,FPCGContext *param_1)

{
  return true;
}

// CreateContext @ 1497fd120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall FPCGComputeGraphElement::CreateContext(FPCGComputeGraphElement *this)

{
  uint uVar1;
  FPCGContext *this_00;
  
  this_00 = ::operator_new(800);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,800);
    FPCGContext::FPCGContext(this_00);
    this_00->_padding_ = (longlong)&___7FPCGComputeGraphContext__6B_;
    this_00[1]._padding_ = 0;
    this_00[1].InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar1 = PCGHiGenGrid::UninitializedGridSize();
    this_00[1].InputData.TaggedData.ArrayNum = uVar1;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    this_00[1].OutputData.bCancelExecutionOnEmpty = false;
    this_00[1].OutputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].OutputData.field_0x12 = 0;
    this_00[1].OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.DataCrcs.ArrayNum = 0;
    this_00[1].OutputData.DataCrcs.ArrayMax = 0;
    this_00[1].OutputData.InactiveOutputPinBitmask = 0;
    this_00[1].ExecutionSource.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this_00[1].bInputDataModified = 0;
    this_00[1].InputData.TaggedData.ArrayMax = -1;
    *(undefined2 *)&this_00[1].InputData.DataCrcs.ArrayNum = 0;
    *(undefined2 *)&this_00[1].OutputData.TaggedData.AllocatorInstance.Data = 0;
    *(undefined4 *)&this_00[1].AsyncState.EndTime = 0;
    *(undefined4 *)((longlong)&this_00[1].AsyncState.EndTime + 4) = 0x80;
    this_00[1].AsyncState.NumAvailableTasks = -1;
    this_00[1].AsyncState.AsyncCurrentReadIndex = 0;
    this_00[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this_00[1].AsyncState.TasksChunksStartEnd.ArrayNum = 0;
    *(undefined2 *)&this_00[1].AsyncState.bStarted = 1;
    this_00[1].AsyncState.CurrentChunkToCollapse = 0;
    this_00[1].AsyncState._padding_ = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap = 0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteInternal @ 149800490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGComputeGraphElement::ExecuteInternal(FPCGComputeGraphElement *this,FPCGContext *param_1)

{
  atomic<int> *paVar1;
  atomic<unsigned_int> *paVar2;
  undefined1 *puVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  FPCGDataCollection *pFVar5;
  bool *this_00;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar6;
  int *piVar7;
  atomic<unsigned_int> aVar8;
  atomic<int> aVar9;
  FTaskBase *pFVar10;
  UComputeGraph *pUVar11;
  FPCGContextHandle *pFVar12;
  FName FVar13;
  FScriptContainerElement *pFVar14;
  FPCGTaggedData *pFVar15;
  void *_Src;
  code *pcVar16;
  FName FVar17;
  bool bVar18;
  undefined1 uVar19;
  byte bVar20;
  bool bVar21;
  uint uVar24;
  int iVar25;
  bool bVar22;
  char cVar23;
  int iVar26;
  longlong *plVar27;
  longlong lVar28;
  UPCGGraph *pUVar29;
  IPCGBaseSubsystem *this_01;
  UPCGComputeGraph *pUVar30;
  UPCGComputeKernel *pUVar31;
  UObject *pUVar32;
  UPCGDataBinding *pUVar33;
  FPCGStack *pFVar34;
  UPCGGraph *pUVar35;
  TSharedPtr<FComputeGraphInstance,1> *pTVar36;
  FTaskBase *pFVar37;
  FTask *pFVar38;
  undefined8 uVar39;
  FComputeGraphRenderProxy *pFVar40;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar41;
  TWeakPtr<FPCGContextHandle,1> *pTVar42;
  undefined8 *puVar43;
  ulong64 uVar44;
  IPCGGraphExecutionSource *pIVar45;
  FName *pFVar46;
  FText *this_02;
  FComputeGraphInstance *pFVar47;
  UClass *pUVar48;
  FStaticBasicLogRecord *pFVar49;
  UPCGGraph *pUVar50;
  wchar_t *pwVar51;
  uint uVar52;
  undefined8 *puVar53;
  FScriptContainerElement *pFVar54;
  longlong lVar55;
  int iVar56;
  int *piVar57;
  int iVar58;
  byte bVar59;
  TReferenceControllerBase<1> *pTVar60;
  FScriptContainerElement *pFVar61;
  ulong64 *puVar62;
  bool bVar63;
  bool local_2b8 [2];
  FGCScopeGuard local_2b6;
  undefined1 local_2b5;
  undefined1 local_2b4;
  undefined1 local_2b3;
  undefined1 local_2b2;
  undefined1 local_2b1;
  undefined1 local_2b0 [8];
  FPCGContext *local_2a8;
  longlong local_2a0;
  longlong local_298;
  TTuple<unsigned_int,int> local_290;
  FWeakObjectPtr local_288;
  undefined1 local_280 [8];
  FDelegateAllocation local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_268;
  FName local_248;
  FName local_240;
  UPCGDataBinding *local_238;
  UObject *local_230;
  UObject *local_228;
  UObject *local_220;
  UObject *local_218;
  FScriptContainerElement *local_210;
  FName local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  undefined1 local_1d0 [8];
  FScriptContainerElement *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  FPCGContextHandle *local_198;
  TReferenceControllerBase<1> *local_190;
  FWeakObjectPtr local_188;
  undefined8 local_180;
  undefined1 local_178 [40];
  int local_150;
  undefined4 uStack_14c;
  FDestructionSentinel local_148;
  FDelegateAllocation *local_130;
  FName local_128;
  TWeakPtr<FPCGContextHandle,1> local_120;
  TSharedPtr<FComputeGraphInstance,1> local_110;
  TWeakPtr<FPCGContextHandle,1> local_100;
  TWeakPtr<FPCGContextHandle,1> local_f0;
  void *local_e0 [2];
  undefined1 local_d0 [40];
  FText local_a8;
  longlong local_98;
  TWeakPtr<FPCGContextHandle,1> local_90;
  longlong local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  bVar63 = -1 < CpuChannel->Enabled;
  if (bVar63) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId120,"FPCGComputeGraphElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
               ,0x78);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId120);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                          ,0x79,L""), bVar18)) {
    pcVar16 = (code *)swi(3);
    uVar19 = (*pcVar16)();
    return (bool)uVar19;
  }
  if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
     (bVar18 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar18)) {
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    goto switchD_14980060c_default;
  }
  if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
      (bVar18 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar18)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                          ,0x8d,L""), bVar18)) {
    pcVar16 = (code *)swi(3);
    uVar19 = (*pcVar16)();
    return (bool)uVar19;
  }
  plVar27 = (longlong *)
            (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
  lVar28 = (**(code **)(*plVar27 + 0x20))(plVar27);
  if (lVar28 == 0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    goto switchD_14980060c_default;
  }
  local_2a8 = param_1;
  switch(param_1[1].AsyncState.bStarted) {
  case true:
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId158,"GetComputeGraph",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                 ,0x9e);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId158);
    }
    if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
        (bVar22 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar22)) ||
       (pIVar45 = (param_1->ExecutionSource).InterfaceInstance,
       pIVar45 == (IPCGGraphExecutionSource *)0x0)) {
LAB_14980099b:
      if (1 < (byte)LogPCG._0_1_) {
        pFVar49 = &::LOG_Static;
LAB_1498009ab:
        UE::Logging::Private::BasicLog<2>(pFVar49,(FLogCategoryBase *)&LogPCG);
      }
LAB_1498009b7:
      bVar22 = true;
    }
    else {
      plVar27 = (longlong *)(**(code **)((longlong)*pIVar45 + 0x10))(pIVar45);
      pUVar35 = (UPCGGraph *)(**(code **)(*plVar27 + 0x60))(plVar27);
      if (pUVar35 == (UPCGGraph *)0x0) goto LAB_14980099b;
      pFVar34 = FPCGStackHandle::GetStack(&param_1->StackHandle);
      if (pFVar34 == (FPCGStack *)0x0) {
        if ((byte)LogPCG._0_1_ < 2) goto LAB_1498009b7;
        pFVar49 = &::LOG_Static;
        goto LAB_1498009ab;
      }
      pUVar29 = FPCGStack::GetNearestDynamicSubgraphForCurrentFrame(pFVar34);
      if ((pUVar35->bUseHierarchicalGeneration != false) && (pUVar29 == (UPCGGraph *)0x0)) {
        plVar27 = (longlong *)(**(code **)((longlong)*pIVar45 + 0x10))(pIVar45);
        iVar56 = (**(code **)(*plVar27 + 0xf8))(plVar27);
        param_1[1].InputData.TaggedData.ArrayNum = iVar56;
      }
      plVar27 = (longlong *)(**(code **)((longlong)*pIVar45 + 0x10))(pIVar45);
      this_01 = (IPCGBaseSubsystem *)(**(code **)(*plVar27 + 0xb0))(plVar27);
      if (this_01 == (IPCGBaseSubsystem *)0x0) {
        if (1 < (byte)LogPCG._0_1_) {
          pFVar49 = &::LOG_Static;
          goto LAB_1498009ab;
        }
        goto LAB_1498009b7;
      }
      pUVar50 = pUVar35;
      if (pUVar29 != (UPCGGraph *)0x0) {
        pUVar50 = pUVar29;
      }
      pUVar30 = IPCGBaseSubsystem::GetComputeGraph
                          (this_01,pUVar50,param_1[1].InputData.TaggedData.ArrayNum,
                           this->ComputeGraphIndex);
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (pUVar30 == (UPCGComputeGraph *)0x0)) {
        param_1[1].InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)pUVar30;
        if (pUVar30 == (UPCGComputeGraph *)0x0) {
          if (1 < (byte)LogPCG._0_1_) {
            if (pUVar29 == (UPCGGraph *)0x0) {
              local_240 = (FName)pUVar35->_padding_;
              ::FName::ToString(&local_240,&local_1f0);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
              }
            }
            else {
              local_248 = (FName)pUVar29->_padding_;
              ::FName::ToString(&local_248,&local_200);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_200.Data.AllocatorInstance.Data);
              }
            }
          }
          goto LAB_1498009b7;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pUVar30);
        param_1[1].InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)pUVar30;
      }
      param_1[1].InputData.TaggedData.ArrayMax = this->ComputeGraphIndex;
      bVar22 = -1 < CpuChannel->Enabled;
      if (bVar22) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId172,"UPCGComputeGraph::AreGraphSettingsValid",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeGraph.cpp"
                   ,0xac);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId172);
      }
      puVar53 = (undefined8 *)pUVar30->_padding_;
      bVar59 = 1;
      iVar56 = (int)pUVar30->_padding_;
      puVar43 = puVar53 + iVar56;
      while( true ) {
        if ((int)pUVar30->_padding_ != iVar56) {
          local_2b8[1] = false;
          `TCheckedPointerIterator<TObjectPtr<UComputeKernel>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_2b8 + 1);
        }
        if (puVar53 == puVar43) break;
        pUVar31 = CastChecked<UPCGComputeKernel,UComputeKernel_const_>((UComputeKernel *)*puVar53);
        bVar20 = (**(code **)(pUVar31->_padding_ + 0x2b8))(pUVar31);
        bVar59 = bVar59 & bVar20;
        puVar53 = puVar53 + 1;
      }
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar59 == 0) goto LAB_1498009b7;
      param_1[1].AsyncState.bStarted = true;
      bVar22 = FPCGAsyncState::ShouldStop(&param_1->AsyncState);
      if (!bVar22) {
        if (bVar18) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        goto switchD_14980060c_caseD_2;
      }
      bVar22 = false;
    }
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_149802520;
  case true:
switchD_14980060c_caseD_2:
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId221,"InitializeDataBindingAndComputeGraph",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                 ,0xdd);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId221);
    }
    if ((param_1[1]._padding_ != 0) &&
       (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_7867665438073683746>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                            ,0xde,"!Context->DataBinding"), bVar22)) {
      pcVar16 = (code *)swi(3);
      uVar19 = (*pcVar16)();
      return (bool)uVar19;
    }
    bVar22 = IsInGameThread();
    if (bVar22) {
      pUVar32 = GetTransientPackageAsObject();
      pUVar33 = NewObject<UPCGDataBinding>(pUVar32);
    }
    else {
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4331830188552749348>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                              ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar22)) {
        pcVar16 = (code *)swi(3);
        uVar19 = (*pcVar16)();
        return (bool)uVar19;
      }
      FGCScopeGuard::FGCScopeGuard(&local_2b6);
      pUVar32 = GetTransientPackageAsObject();
      pUVar33 = NewObject<UPCGDataBinding>(pUVar32);
      FGCScopeGuard::~FGCScopeGuard(&local_2b6);
      if ((pUVar33 == (UPCGDataBinding *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                              ,0x12a,L""), bVar22)) {
        pcVar16 = (code *)swi(3);
        uVar19 = (*pcVar16)();
        return (bool)uVar19;
      }
      local_238 = pUVar33;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar33 != (UPCGDataBinding *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar33);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>
                (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_1d0,(bool *)&local_238);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar33 != (UPCGDataBinding *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar33);
    }
    param_1[1]._padding_ = (longlong)pUVar33;
    UPCGDataBinding::Initialize
              (pUVar33,(UPCGComputeGraph *)param_1[1].InputData.TaggedData.AllocatorInstance.Data,
               param_1);
    pTVar42 = FPCGContext::GetOrCreateHandle(param_1,&local_120);
    pFVar12 = pTVar42->Object;
    pTVar60 = (pTVar42->WeakReferenceCount).ReferenceController;
    (pTVar42->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar42->Object = (FPCGContextHandle *)0x0;
    pFVar37 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (pFVar37 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
      pFVar37 = (FTaskBase *)0x0;
      if (pTVar60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar60->WeakReferenceCount;
        aVar9 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        pFVar37 = (FTaskBase *)0x0;
        if (aVar9 == (atomic<int>)0x1) {
          (**(code **)(pTVar60->_padding_ + 8))(pTVar60);
        }
      }
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar37,2,true);
      pFVar37->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FPCGComputeGraphElement::ExecuteInternal'::`150'::<lambda_2>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (pFVar37,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp(230)"
                 ,Default,None,None);
      pFVar37[1]._padding_ = (longlong)pFVar12;
      pFVar37->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`FPCGComputeGraphElement::ExecuteInternal'::`150'::<lambda_2>_>::
            _vftable_;
      pFVar37[1]._padding_ = (longlong)pTVar60;
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar37,0x100);
    }
    if (local_120.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_120.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar9 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar9 == (atomic<int>)0x1) &&
         (local_120.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)((local_120.WeakReferenceCount.ReferenceController)->_padding_ + 8))();
      }
    }
    pFVar34 = FPCGStackHandle::GetStack(&param_1->StackHandle);
    if (pFVar34 == (FPCGStack *)0x0) {
      local_290._0_4_ = param_1[1].InputData.TaggedData.ArrayNum;
      local_290._4_4_ = this->ComputeGraphIndex;
LAB_149800f86:
      bVar22 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7867665438073683721>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                          ,0xf7,"Graph");
      if (bVar22) {
        pcVar16 = (code *)swi(3);
        uVar19 = (*pcVar16)();
        return (bool)uVar19;
      }
      bVar22 = true;
    }
    else {
      pUVar35 = FPCGStack::GetNearestNonInlinedGraphForCurrentFrame(pFVar34);
      local_290._0_4_ = param_1[1].InputData.TaggedData.ArrayNum;
      local_290._4_4_ = this->ComputeGraphIndex;
      if (pUVar35 == (UPCGGraph *)0x0) goto LAB_149800f86;
      local_2b8[0] = false;
      pTVar36 = UPCGGraph::RetrieveComputeGraphInstanceFromPool
                          (pUVar35,&local_110,&local_290,local_2b8);
      this_00 = &param_1[1].InputData.bCancelExecutionOnEmpty;
      if ((TSharedPtr<FComputeGraphInstance,1> *)this_00 != pTVar36) {
        *(FComputeGraphInstance **)this_00 = pTVar36->Object;
        pTVar36->Object = (FComputeGraphInstance *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&param_1[1].InputData.DataCrcs,
                   &pTVar36->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.SharedReferenceCount.ReferenceController);
      if (local_2b8[0] == false) {
        pFVar47 = TSharedPtr<FComputeGraphInstance,1>::operator->
                            ((TSharedPtr<FComputeGraphInstance,1> *)this_00);
        local_228 = (UObject *)param_1[1]._padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_228);
        }
        FComputeGraphInstance::InitializeDataProviders
                  (pFVar47,(UComputeGraph *)param_1[1].InputData.TaggedData.AllocatorInstance.Data,0
                   ,(TObjectPtr<UObject>)&local_228);
      }
      else {
        pFVar47 = TSharedPtr<FComputeGraphInstance,1>::operator->
                            ((TSharedPtr<FComputeGraphInstance,1> *)this_00);
        local_230 = (UObject *)param_1[1]._padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_230 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_230);
        }
        FComputeGraphInstance::CreateDataProviders
                  (pFVar47,(UComputeGraph *)param_1[1].InputData.TaggedData.AllocatorInstance.Data,0
                   ,(TObjectPtr<UObject>)&local_230);
      }
      *(undefined1 *)&param_1[1].InputData.DataCrcs.ArrayNum = 1;
      pFVar47 = TSharedPtr<FComputeGraphInstance,1>::operator->
                          ((TSharedPtr<FComputeGraphInstance,1> *)
                           &param_1[1].InputData.bCancelExecutionOnEmpty);
      iVar56 = (pFVar47->DataProviders).ArrayNum;
      pFVar61 = (pFVar47->DataProviders).AllocatorInstance.Data;
      local_210 = pFVar61 + (longlong)iVar56 * 8;
      while( true ) {
        pFVar54 = local_210;
        if ((pFVar47->DataProviders).ArrayNum != iVar56) {
          local_2b5 = 0;
          `TCheckedPointerIterator<TObjectPtr<UComputeDataProvider>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2b5);
        }
        if (pFVar61 == pFVar54) break;
        pUVar32 = *(UObject **)pFVar61;
        if (pUVar32 != (UObject *)0x0) {
          pUVar48 = Z_Construct_UClass_UPCGExportableDataProvider_NoRegister();
          iVar58 = (int)pUVar48->_padding_;
          if (((iVar58 <= *(int *)(*(longlong *)&pUVar32->field_0x10 + 0x38)) &&
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar32->field_0x10 + 0x30) + (longlong)iVar58 * 8) ==
               &pUVar48->_padding_)) && (pUVar32[3].field_0x20 != '\0')) {
            local_220 = pUVar32;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar32);
            }
            TSet<TObjectPtr<UComputeDataProvider>,DefaultKeyFuncs<TObjectPtr<UComputeDataProvider>,0>,FDefaultSetAllocator>
            ::Emplace<TObjectPtr<UComputeDataProvider>_>
                      ((TSet<TObjectPtr<UComputeDataProvider>,DefaultKeyFuncs<TObjectPtr<UComputeDataProvider>,0>,FDefaultSetAllocator>
                        *)&param_1[1].OutputData.InactiveOutputPinBitmask,
                       (TObjectPtr<UComputeDataProvider> *)(local_1d0 + 4),(bool *)&local_220);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar32);
            }
            local_288.ObjectIndex = 0;
            local_288.ObjectSerialNumber = 0;
            local_218 = pUVar32;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar32);
            }
            FWeakObjectPtr::operator=(&local_288,(FObjectPtr)&local_218);
            uVar39 = *(undefined8 *)&pUVar32[3].field_0x18;
            pTVar42 = FPCGContext::GetOrCreateHandle(param_1,&local_100);
            local_198 = pTVar42->Object;
            local_190 = (pTVar42->WeakReferenceCount).ReferenceController;
            (pTVar42->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pTVar42->Object = (FPCGContextHandle *)0x0;
            local_188 = local_288;
            local_180 = uVar39;
            TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddLambda<_FPCGComputeGraphElement::ExecuteInternal_::__l168::<lambda_3>_>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)(pUVar32 + 4),(<lambda_3> *)local_d0);
            if (local_190 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &local_190->WeakReferenceCount;
              aVar9 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar9 == (atomic<int>)0x1) {
                (**(code **)(local_190->_padding_ + 8))();
              }
            }
            if (local_100.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(local_100.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
              aVar9 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if ((aVar9 == (atomic<int>)0x1) &&
                 (local_100.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0)) {
                (**(code **)((local_100.WeakReferenceCount.ReferenceController)->_padding_ + 8))();
              }
            }
          }
        }
        pFVar61 = pFVar61 + 8;
      }
      if (pFVar37 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::Wait(pFVar37);
      }
      param_1[1].AsyncState.bStarted = true;
      bVar22 = FPCGAsyncState::ShouldStop(&param_1->AsyncState);
      if (!bVar22) {
        if (pFVar37 != (FTaskBase *)0x0) {
          LOCK();
          paVar2 = &pFVar37->RefCount;
          aVar8 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar8 == (atomic<unsigned_int>)0x1) {
            (**(code **)pFVar37->_padding_)(pFVar37);
          }
        }
        if (bVar18) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        goto switchD_14980060c_caseD_3;
      }
      bVar22 = false;
    }
    if (pFVar37 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar37->RefCount;
      aVar8 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar8 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar37->_padding_)(pFVar37,1);
      }
    }
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_149802520;
  case true:
switchD_14980060c_caseD_3:
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId324,"InitializeKernelParams",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                 ,0x144);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId324);
    }
    pUVar33 = (UPCGDataBinding *)param_1[1]._padding_;
    if (pUVar33 == (UPCGDataBinding *)0x0) {
      bVar22 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7867665438073683642>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                          ,0x146,"DataBinding");
      if (bVar22) {
        pcVar16 = (code *)swi(3);
        uVar19 = (*pcVar16)();
        return (bool)uVar19;
      }
LAB_1498010c2:
      param_1[1].AsyncState.bStarted = true;
      bVar22 = FPCGAsyncState::ShouldStop(&param_1->AsyncState);
      if (!bVar22) {
        if (bVar18) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        goto switchD_14980060c_caseD_4;
      }
    }
    else {
      bVar22 = -1 < CpuChannel->Enabled;
      if (bVar22) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId188,"FPCGKernelParamsCache::Initialize",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                   ,0xbc);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId188);
      }
      FPCGKernelParamsCache::CacheOverridableParamDataIndices
                (&pUVar33->KernelParamsCache,param_1,pUVar33);
      bVar21 = FPCGKernelParamsCache::ReadbackOverridableParamData
                         (&pUVar33->KernelParamsCache,pUVar33);
      if (bVar21) {
        FPCGKernelParamsCache::CreateAndCacheKernelParams
                  (&pUVar33->KernelParamsCache,param_1,pUVar33);
        if (bVar22) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        goto LAB_1498010c2;
      }
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      `FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()(&local_2a8);
    }
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
      bVar22 = false;
      goto LAB_149802520;
    }
    goto LAB_14980198f;
  case true:
switchD_14980060c_caseD_4:
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId345,"PreExecuteReadbacks",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                 ,0x159);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId345);
    }
    bVar22 = true;
    pFVar47 = TSharedPtr<FComputeGraphInstance,1>::operator->
                        ((TSharedPtr<FComputeGraphInstance,1> *)
                         &param_1[1].InputData.bCancelExecutionOnEmpty);
    pFVar54 = (pFVar47->DataProviders).AllocatorInstance.Data;
    iVar56 = (pFVar47->DataProviders).ArrayNum;
    pFVar61 = pFVar54 + (longlong)iVar56 * 8;
    while( true ) {
      if ((pFVar47->DataProviders).ArrayNum != iVar56) {
        local_2b4 = 0;
        `TCheckedPointerIterator<TObjectPtr<UComputeDataProvider>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_2b4);
      }
      if (pFVar54 == pFVar61) break;
      plVar27 = *(longlong **)pFVar54;
      if (plVar27 == (longlong *)0x0) {
LAB_1498011d0:
        pFVar54 = pFVar54 + 8;
      }
      else {
        pUVar48 = Z_Construct_UClass_UPCGComputeDataProvider_NoRegister();
        iVar58 = (int)pUVar48->_padding_;
        if ((*(int *)(plVar27[2] + 0x38) < iVar58) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar27[2] + 0x30) + (longlong)iVar58 * 8) !=
            &pUVar48->_padding_)) goto LAB_1498011d0;
        cVar23 = (**(code **)(*plVar27 + 0x2c8))(plVar27);
        if (cVar23 == '\0') {
          bVar22 = false;
        }
        pFVar54 = pFVar54 + 8;
      }
    }
    if (!bVar22) goto LAB_14980197c;
    param_1[1].AsyncState.bStarted = true;
    bVar22 = FPCGAsyncState::ShouldStop(&param_1->AsyncState);
    if (!bVar22) {
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto switchD_14980060c_caseD_5;
    }
    break;
  case true:
switchD_14980060c_caseD_5:
    uVar52 = 0;
    if (*(char *)((longlong)&param_1[1].InputData.DataCrcs.ArrayNum + 1) != '\0') {
      uVar44 = param_1[1].InputData.InactiveOutputPinBitmask;
      if (uVar44 == 0) {
        bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_7867665438073683560>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                            ,0x198,"Context->DataDescrPrimeAndValidateTask.IsValid()");
        if (bVar18) {
          pcVar16 = (code *)swi(3);
          uVar19 = (*pcVar16)();
          return (bool)uVar19;
        }
      }
      else {
        if (*(char *)(uVar44 + 0xd0) == '\0') {
          `FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()(&local_2a8);
          bVar22 = false;
          goto LAB_149802520;
        }
        pUVar33 = (UPCGDataBinding *)param_1[1]._padding_;
        if ((pUVar33->bIsDataDescriptionCachePrimed == (atomic<bool>)0x0) &&
           (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<9049822076394799708>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                                ,0x25c,"IsDataDescriptionCachePrimed()"), bVar18)) {
          pcVar16 = (code *)swi(3);
          uVar19 = (*pcVar16)();
          return (bool)uVar19;
        }
        pUVar30 = (pUVar33->Graph).field0_0x0.DebugPtr;
        if ((pUVar30 != (UPCGComputeGraph *)0x0) && (pUVar30->bLogDataDescriptions != false)) {
          if (3 < (byte)LogPCG._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          }
          FPCGKernelAttributeTable::DebugLog(&pUVar33->AttributeTable);
          if (3 < (byte)LogPCG._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          }
          bVar59 = LogPCG._0_1_;
          if (0 < (pUVar33->StringTable).ArrayNum) {
            do {
              if (3 < bVar59) {
                uVar24 = 0;
                if ((int)uVar52 < (pUVar33->StringTable).ArrayNum) {
                  uVar24 = ~uVar52 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar16 = (code *)swi(3);
                  uVar19 = (*pcVar16)();
                  return (bool)uVar19;
                }
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                bVar59 = LogPCG._0_1_;
              }
              uVar52 = uVar52 + 1;
            } while ((int)uVar52 < (pUVar33->StringTable).ArrayNum);
          }
          if (3 < bVar59) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          }
          UPCGComputeGraph::DebugLogDataDescriptions((pUVar33->Graph).field0_0x0.DebugPtr,pUVar33);
        }
        if (param_1[1].AsyncState.field_0x29 != '\0') {
          piVar7 = &param_1[1].OutputData.TaggedData.ArrayNum;
          pFVar47 = TSharedPtr<FComputeGraphInstance,1>::operator->
                              ((TSharedPtr<FComputeGraphInstance,1> *)
                               &param_1[1].InputData.bCancelExecutionOnEmpty);
          pFVar54 = (pFVar47->DataProviders).AllocatorInstance.Data;
          iVar56 = (pFVar47->DataProviders).ArrayNum;
          pFVar61 = pFVar54 + (longlong)iVar56 * 8;
          while( true ) {
            if ((pFVar47->DataProviders).ArrayNum != iVar56) {
              local_2b3 = 0;
              `TCheckedPointerIterator<TObjectPtr<UComputeDataProvider>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_2b3);
            }
            if (pFVar54 == pFVar61) break;
            lVar28 = *(longlong *)pFVar54;
            if (lVar28 == 0) {
LAB_1498016ba:
              local_298 = 0;
            }
            else {
              pUVar48 = Z_Construct_UClass_UPCGComputeDataProvider_NoRegister();
              iVar58 = (int)pUVar48->_padding_;
              if ((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < iVar58) ||
                 (local_298 = lVar28,
                 (longlong *)
                 *(undefined1 **)
                  (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) + (longlong)iVar58 * 8) !=
                 &pUVar48->_padding_)) goto LAB_1498016ba;
            }
            if (((*(longlong **)piVar7 <= &local_298) &&
                (&local_298 < *(longlong **)piVar7 + *(int *)&param_1[1].OutputData.field_0x14)) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar18)) {
              pcVar16 = (code *)swi(3);
              uVar19 = (*pcVar16)();
              return (bool)uVar19;
            }
            iVar25._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
            iVar25._1_1_ = param_1[1].OutputData.bCancelExecution;
            iVar25._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
            puVar3 = &param_1[1].OutputData.field_0x14;
            if (iVar25 == *(int *)puVar3) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,(ForAnyElementType *)piVar7,(int *)puVar3);
            }
            pFVar54 = pFVar54 + 8;
            *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty = iVar25 + 1;
            *(longlong *)(*(longlong *)piVar7 + (longlong)iVar25 * 8) = local_298;
          }
          param_1[1].AsyncState.bStarted = true;
          bVar18 = FPCGAsyncState::ShouldStop(&param_1->AsyncState);
          if (bVar18) {
            bVar22 = false;
            goto LAB_149802520;
          }
          goto switchD_14980060c_caseD_6;
        }
      }
      goto switchD_14980060c_default;
    }
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId381,"PrimeDataDescriptionsAndValidateData",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                 ,0x17d);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
    }
    *(undefined1 *)((longlong)&param_1[1].InputData.DataCrcs.ArrayNum + 1) = 1;
    pTVar42 = FPCGContext::GetOrCreateHandle(param_1,&local_f0);
    pFVar12 = pTVar42->Object;
    pTVar60 = (pTVar42->WeakReferenceCount).ReferenceController;
    (pTVar42->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar42->Object = (FPCGContextHandle *)0x0;
    pFVar37 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (pFVar37 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar37,2,true);
      pFVar37->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FPCGComputeGraphElement::ExecuteInternal'::`204'::<lambda_4>,void,void>
            ::_vftable_;
      if ((((uint)(int)(char)*(undefined8 *)&(pFVar37->LowLevelTask).field_0x38 >> 5 & 1) == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsCompleted()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                              ,0x1dd,L"State: %d"), bVar22)) {
        pcVar16 = (code *)swi(3);
        uVar19 = (*pcVar16)();
        return (bool)uVar19;
      }
      (**(code **)(*(longlong *)&(pFVar37->LowLevelTask).field_0x28 + 0x18))
                (&(pFVar37->LowLevelTask).field_0x28,&pFVar37->LowLevelTask);
      *(FTaskBase **)&pFVar37->LowLevelTask = pFVar37;
      *(undefined ***)&(pFVar37->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&(pFVar37->LowLevelTask).field_0x8 = pFVar37;
      pFVar38 = LowLevelTasks::FTask::GetActiveTask();
      uVar39 = 0;
      if (pFVar38 != (FTask *)0x0) {
        uVar39 = *(undefined8 *)&pFVar38->field_0x30;
      }
      *(undefined8 *)&(pFVar37->LowLevelTask).field_0x30 = uVar39;
      *(undefined8 *)&(pFVar37->LowLevelTask).field_0x38 = 0xc80000547bad1c00;
      pFVar37->ExtendedPriority = None;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&pFVar37->_padding_);
      pFVar37[1]._padding_ = (longlong)pFVar12;
      pFVar37[1]._padding_ = (longlong)pTVar60;
      pTVar60 = (TReferenceControllerBase<1> *)0x0;
      pFVar37->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`FPCGComputeGraphElement::ExecuteInternal'::`204'::<lambda_4>_>::
            _vftable_;
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar37,0x100);
    puVar62 = &param_1[1].InputData.InactiveOutputPinBitmask;
    if (puVar62 == (ulong64 *)&local_98) {
      if (pFVar37 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar37->RefCount;
        aVar8 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar8 == (atomic<unsigned_int>)0x1) {
          puVar43 = (undefined8 *)pFVar37->_padding_;
          goto LAB_14980140c;
        }
      }
    }
    else {
      pFVar10 = (FTaskBase *)*puVar62;
      *puVar62 = (ulong64)pFVar37;
      if (pFVar10 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar10->RefCount;
        aVar8 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar8 == (atomic<unsigned_int>)0x1) {
          puVar43 = (undefined8 *)pFVar10->_padding_;
          pFVar37 = pFVar10;
LAB_14980140c:
          (*(code *)*puVar43)(pFVar37,1);
        }
      }
    }
    if (pTVar60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar60->WeakReferenceCount;
      aVar9 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar9 == (atomic<int>)0x1) {
        (**(code **)(pTVar60->_padding_ + 8))(pTVar60,1);
      }
    }
    if (local_f0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_f0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar9 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar9 == (atomic<int>)0x1) &&
         (local_f0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)((local_f0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_f0.WeakReferenceCount.ReferenceController,1);
      }
    }
    break;
  case true:
switchD_14980060c_caseD_6:
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId440,"PrepareForExecute",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                 ,0x1b8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId440);
    }
    iVar56 = *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty + -1;
    if (-1 < iVar56) {
      lVar55 = (longlong)iVar56;
      piVar7 = &param_1[1].OutputData.TaggedData.ArrayNum;
      lVar28 = lVar55 * 8;
      do {
        iVar58._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
        iVar58._1_1_ = param_1[1].OutputData.bCancelExecution;
        iVar58._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
        if ((iVar58 <= iVar56) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar16 = (code *)swi(3);
          uVar19 = (*pcVar16)();
          return (bool)uVar19;
        }
        plVar27 = *(longlong **)(*(longlong *)piVar7 + lVar28);
        if ((plVar27 == (longlong *)0x0) ||
           (cVar23 = (**(code **)(*plVar27 + 0x2d0))(plVar27,param_1[1]._padding_), cVar23 != '\0'))
        {
          iVar26._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar26._1_1_ = param_1[1].OutputData.bCancelExecution;
          iVar26._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
          if ((iVar26 <= iVar56) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar19 = (*pcVar16)();
            return (bool)uVar19;
          }
          iVar58 = *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar26 = (iVar58 - iVar56) + -1;
          if (1 < iVar26) {
            iVar26 = 1;
          }
          if (iVar26 != 0) {
            memmove((void *)(*(longlong *)piVar7 + lVar55 * 8),
                    (void *)(*(longlong *)piVar7 + (longlong)(iVar58 - iVar26) * 8),
                    (longlong)iVar26 << 3);
          }
          iVar58 = *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty + -1;
          *(int *)&param_1[1].OutputData.bCancelExecutionOnEmpty = iVar58;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)piVar7,iVar58,(int *)&param_1[1].OutputData.field_0x14
                    );
        }
        lVar55 = lVar55 + -1;
        lVar28 = lVar28 + -8;
        iVar56 = iVar56 + -1;
      } while (-1 < iVar56);
    }
    iVar56._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
    iVar56._1_1_ = param_1[1].OutputData.bCancelExecution;
    iVar56._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
    if (iVar56 == 0) {
      param_1[1].AsyncState.bStarted = true;
      bVar22 = FPCGAsyncState::ShouldStop(&param_1->AsyncState);
      if (bVar22) break;
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto switchD_14980060c_caseD_7;
    }
LAB_14980197c:
    `FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()(&local_2a8);
    break;
  case true:
switchD_14980060c_caseD_7:
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId469,"ValidateComputeGraphCompilation",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                 ,0x1d5);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId469);
    }
    bVar22 = UComputeGraph::HasKernelResourcesPendingShaderCompilation
                       ((UComputeGraph *)param_1[1].InputData.TaggedData.AllocatorInstance.Data);
    if (bVar22) {
      if (5 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      `FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()(&local_2a8);
      bVar22 = false;
    }
    else {
      pFVar40 = UComputeGraph::GetRenderProxy
                          ((UComputeGraph *)param_1[1].InputData.TaggedData.AllocatorInstance.Data);
      if (pFVar40 == (FComputeGraphRenderProxy *)0x0) {
        if (CpuChannel->Enabled < 0) {
          pUVar11 = (UComputeGraph *)param_1[1].InputData.TaggedData.AllocatorInstance.Data;
          bVar22 = ComputeFramework::IsDeferredCompilation();
          UComputeGraph::UpdateResources(pUVar11,!bVar22);
          `FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()(&local_2a8);
          bVar22 = false;
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId479,"Context->ComputeGraph->UpdateResources",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                     ,0x1df);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId479);
          pUVar11 = (UComputeGraph *)param_1[1].InputData.TaggedData.AllocatorInstance.Data;
          bVar22 = ComputeFramework::IsDeferredCompilation();
          UComputeGraph::UpdateResources(pUVar11,!bVar22);
          `FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()(&local_2a8);
          FCpuProfilerTrace::OutputEndEvent();
          bVar22 = false;
        }
      }
      else {
        pFVar61 = param_1[1].InputData.TaggedData.AllocatorInstance.Data;
        pFVar54 = pFVar61 + 0xe0;
        local_268._padding_._4_4_ = 1;
        local_268._padding_._0_4_ = 0;
        local_268.UnvisitedBitMask = 0xffffffff;
        pTVar4 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar61 + 0xf0);
        local_268.CurrentBitIndex = 0;
        local_268.BaseBitIndex = 0;
        local_268.Array = pTVar4;
        if (*(int *)(pFVar61 + 0x108) != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_268);
        }
        TStack_1c0._padding_ = CONCAT44(local_268._padding_._4_4_,(undefined4)local_268._padding_);
        TStack_1c0.CurrentBitIndex = local_268.CurrentBitIndex;
        TStack_1c0.UnvisitedBitMask = local_268.UnvisitedBitMask;
        TStack_1c0._28_4_ = local_268._28_4_;
        TStack_1c0.BaseBitIndex = local_268.BaseBitIndex;
        local_150 = *(int *)(pFVar61 + 0xe8) - *(int *)(pFVar61 + 0x114);
        local_178._16_8_ = local_268.Array;
        uStack_1a0 = CONCAT44(uStack_14c,local_150);
        TStack_1c0.Array = local_268.Array;
        local_1c8 = pFVar54;
        local_178._0_8_ = pFVar54;
        local_178._8_8_ = TStack_1c0._padding_;
        local_178._24_8_ = TStack_1c0._16_8_;
        local_178._32_8_ = TStack_1c0._24_8_;
        pTVar41 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_178,pTVar4,
                             *(int *)(pFVar61 + 0x108));
        local_78 = pTVar41->_padding_;
        pTStack_70 = pTVar41->Array;
        local_68._0_4_ = pTVar41->UnvisitedBitMask;
        local_68._4_4_ = pTVar41->CurrentBitIndex;
        uStack_60 = *(undefined8 *)&pTVar41->BaseBitIndex;
        while( true ) {
          pFVar61 = local_1c8;
          if (*(int *)(local_1c8 + 8) - *(int *)(local_1c8 + 0x34) != (int)uStack_1a0) {
            local_2b2 = 0;
            `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b2);
          }
          if (((TStack_1c0.CurrentBitIndex == local_68._4_4_) && (TStack_1c0.Array == pTStack_70))
             && (pFVar61 == pFVar54)) break;
          lVar28 = (longlong)TStack_1c0.CurrentBitIndex * 0x20 + *(longlong *)pFVar61;
          iVar56 = *(int *)(lVar28 + 0x10);
          piVar57 = *(int **)(lVar28 + 8);
          piVar7 = piVar57 + (longlong)iVar56 * 0x12;
          while( true ) {
            if (*(int *)(lVar28 + 0x10) != iVar56) {
              local_2b1 = 0;
              `TCheckedPointerIterator<FComputeKernelCompileMessage_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(&local_2b1);
            }
            if (piVar57 == piVar7) break;
            if ((*piVar57 == 3) ||
               (iVar58 = ::FString::Find((FString *)(piVar57 + 2),L"failed",6,IgnoreCase,FromStart,
                                         -1), iVar58 != -1)) {
              bVar22 = true;
              goto LAB_149801c77;
            }
            piVar57 = piVar57 + 0x12;
          }
          TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
        }
        param_1[1].AsyncState.bStarted = true;
        bVar22 = FPCGAsyncState::ShouldStop(&param_1->AsyncState);
        if (!bVar22) {
          if (bVar18) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          goto switchD_14980060c_caseD_8;
        }
        bVar22 = false;
      }
    }
LAB_149801c77:
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_149802520;
  case true:
switchD_14980060c_caseD_8:
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId518,"ScheduleComputeGraph",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                 ,0x206);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId518);
    }
    if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
        (bVar22 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar22)) ||
       (pIVar45 = (param_1->ExecutionSource).InterfaceInstance,
       pIVar45 == (IPCGGraphExecutionSource *)0x0)) {
LAB_149801cc0:
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("ExecutionSource&& ExecutionSource->GetExecutionState().GetWorld()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                          ,0x208,L"");
      if (bVar22) {
        pcVar16 = (code *)swi(3);
        uVar19 = (*pcVar16)();
        return (bool)uVar19;
      }
    }
    else {
      plVar27 = (longlong *)(**(code **)((longlong)*pIVar45 + 0x18))();
      lVar28 = (**(code **)(*plVar27 + 0x20))(plVar27);
      if (lVar28 == 0) goto LAB_149801cc0;
    }
    pFVar47 = TSharedPtr<FComputeGraphInstance,1>::operator->
                        ((TSharedPtr<FComputeGraphInstance,1> *)
                         &param_1[1].InputData.bCancelExecutionOnEmpty);
    pUVar32 = (UObject *)param_1[1]._padding_;
    pTVar42 = FPCGContext::GetOrCreateHandle(param_1,&local_90);
    pFVar12 = pTVar42->Object;
    pTVar60 = (pTVar42->WeakReferenceCount).ReferenceController;
    (pTVar42->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar42->Object = (FPCGContextHandle *)0x0;
    local_280 = (undefined1  [8])0x0;
    local_278.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_278.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
               (FWriteAccessScope *)&local_148);
    local_130 = &local_278;
    puVar43 = UE::Core::Private::DelegateAllocate(0x28,&local_278);
    if (puVar43 != (undefined8 *)0x0) {
      *puVar43 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar44 = FDelegateHandle::GenerateNewID();
      puVar43[2] = uVar44;
      *puVar43 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::`273'::<lambda_6>_>
                  ::_vftable_;
      puVar43[4] = pTVar60;
      pTVar60 = (TReferenceControllerBase<1> *)0x0;
      puVar43[3] = pFVar12;
    }
    if (local_148.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
    }
    pIVar45 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->(&param_1->ExecutionSource);
    plVar27 = (longlong *)(**(code **)((longlong)*pIVar45 + 0x18))(pIVar45);
    puVar43 = (undefined8 *)(**(code **)(*plVar27 + 0x18))(plVar27,local_e0);
    if (*(int *)(puVar43 + 1) == 0) {
      pwVar51 = L"";
    }
    else {
      pwVar51 = (wchar_t *)*puVar43;
    }
    pFVar46 = ::FName::FName(&local_128,pwVar51);
    FVar17 = ComputeTaskExecutionGroup::EndOfFrameUpdate;
    FVar13 = *pFVar46;
    pIVar45 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->(&param_1->ExecutionSource);
    plVar27 = (longlong *)(**(code **)((longlong)*pIVar45 + 0x18))(pIVar45);
    lVar28 = (**(code **)(*plVar27 + 0x20))(plVar27);
    bVar22 = FComputeGraphInstance::EnqueueWork
                       (pFVar47,(UComputeGraph *)
                                param_1[1].InputData.TaggedData.AllocatorInstance.Data,
                        *(FSceneInterface **)(lVar28 + 600),FVar17,FVar13,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_280,
                        pUVar32,'\0');
    if (local_e0[0] != (void *)0x0) {
      FMemory::Free(local_e0[0]);
    }
    if (pTVar60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar60->WeakReferenceCount;
      aVar9 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar9 == (atomic<int>)0x1) {
        (**(code **)(pTVar60->_padding_ + 8))(pTVar60);
      }
    }
    if (local_90.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_90.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar9 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar9 == (atomic<int>)0x1) &&
         (local_90.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)((local_90.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_90.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (bVar22) {
      param_1[1].AsyncState.bStarted = true;
      `FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()(&local_2a8);
      bVar22 = false;
    }
    else {
      if (1 < (byte)LogPCG._0_1_) {
        this_02 = FText::AsLocalizable_Advanced_LocText
                            (&local_a8,L"PCGComputeGraphElement",L"EnqueueFailed",
                             L"Compute graph enqueue failed, check log for errors.");
        FText::ToString(this_02);
        FPCGContext::GetTaskName(param_1,(FString *)(local_d0 + 0x18));
        FPCGContext::GetExecutionSourceName(param_1,(FString *)(local_d0 + 8));
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((TReferenceControllerBase<1> *)local_d0._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          FMemory::Free((void *)local_d0._8_8_);
        }
        if ((void *)local_d0._24_8_ != (void *)0x0) {
          FMemory::Free((void *)local_d0._24_8_);
        }
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
      }
      ResetAsyncOperations(this,param_1);
      bVar22 = true;
    }
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_149802520;
  case true:
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId568,"WaitForExecutionComplete",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                 ,0x238);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId568);
    }
    if (*(char *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data == '\0') {
      if (param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex ==
          param_1[1].AsyncState.AsyncCurrentReadIndex) {
        *(undefined1 *)((longlong)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data + 1) = 1;
        pTVar6 = &param_1[1].OutputData.DataCrcs;
        pFVar47 = TSharedPtr<FComputeGraphInstance,1>::operator->
                            ((TSharedPtr<FComputeGraphInstance,1> *)
                             &param_1[1].InputData.bCancelExecutionOnEmpty);
        uVar52 = (pFVar47->DataProviders).ArrayNum;
        if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
        }
        if (param_1[1].OutputData.DataCrcs.ArrayMax < (int)uVar52) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar52,&pTVar6->AllocatorInstance,param_1[1].OutputData.DataCrcs.ArrayNum,
                     &param_1[1].OutputData.DataCrcs.ArrayMax);
        }
        pFVar47 = TSharedPtr<FComputeGraphInstance,1>::operator->
                            ((TSharedPtr<FComputeGraphInstance,1> *)
                             &param_1[1].InputData.bCancelExecutionOnEmpty);
        pFVar54 = (pFVar47->DataProviders).AllocatorInstance.Data;
        iVar56 = (pFVar47->DataProviders).ArrayNum;
        pFVar61 = pFVar54 + (longlong)iVar56 * 8;
        while( true ) {
          if ((pFVar47->DataProviders).ArrayNum != iVar56) {
            local_2b0[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UComputeDataProvider>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_2b0);
          }
          if (pFVar54 == pFVar61) break;
          lVar28 = *(longlong *)pFVar54;
          if (lVar28 == 0) {
LAB_1498021f4:
            local_2a0 = 0;
            pFVar54 = pFVar54 + 8;
          }
          else {
            pUVar48 = Z_Construct_UClass_UPCGComputeDataProvider_NoRegister();
            iVar58 = (int)pUVar48->_padding_;
            if ((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < iVar58) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) + (longlong)iVar58 * 8) !=
                &pUVar48->_padding_)) goto LAB_1498021f4;
            pFVar14 = (pTVar6->AllocatorInstance).Data;
            local_2a0 = lVar28;
            if ((pFVar14 <= (FScriptContainerElement *)&local_2a0) &&
               (((FScriptContainerElement *)&local_2a0 <
                 pFVar14 + (longlong)param_1[1].OutputData.DataCrcs.ArrayMax * 8 &&
                (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar22)))) {
              pcVar16 = (code *)swi(3);
              uVar19 = (*pcVar16)();
              return (bool)uVar19;
            }
            iVar58 = param_1[1].OutputData.DataCrcs.ArrayNum;
            if (iVar58 == param_1[1].OutputData.DataCrcs.ArrayMax) {
              iVar58 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar6->AllocatorInstance,
                                  &param_1[1].OutputData.DataCrcs.ArrayMax);
            }
            pFVar54 = pFVar54 + 8;
            param_1[1].OutputData.DataCrcs.ArrayNum = iVar58 + 1;
            *(longlong *)((pTVar6->AllocatorInstance).Data + (longlong)iVar58 * 8) = local_2a0;
          }
        }
        param_1[1].AsyncState.bStarted = true;
        bVar22 = FPCGAsyncState::ShouldStop(&param_1->AsyncState);
        if (!bVar22) {
          if (bVar18) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          goto switchD_14980060c_caseD_a;
        }
      }
      else {
        `FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()(&local_2a8);
      }
      bVar22 = false;
    }
    else {
      if (2 < (byte)LogPCG._0_1_) {
        local_208 = *(FName *)(param_1[1].InputData.TaggedData.AllocatorInstance.Data + 0x18);
        ::FName::ToString(&local_208,&local_1e0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
      }
      bVar22 = true;
    }
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_149802520;
  case true:
switchD_14980060c_caseD_a:
    iVar56 = param_1[1].OutputData.DataCrcs.ArrayNum + -1;
    if (-1 < iVar56) {
      lVar55 = (longlong)iVar56;
      pTVar6 = &param_1[1].OutputData.DataCrcs;
      lVar28 = lVar55 * 8;
      do {
        if ((param_1[1].OutputData.DataCrcs.ArrayNum <= iVar56) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          uVar19 = (*pcVar16)();
          return (bool)uVar19;
        }
        plVar27 = *(longlong **)((pTVar6->AllocatorInstance).Data + lVar28);
        if ((plVar27 == (longlong *)0x0) ||
           (cVar23 = (**(code **)(*plVar27 + 0x2d8))(), cVar23 != '\0')) {
          if ((param_1[1].OutputData.DataCrcs.ArrayNum <= iVar56) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar16 = (code *)swi(3);
            uVar19 = (*pcVar16)();
            return (bool)uVar19;
          }
          iVar58 = param_1[1].OutputData.DataCrcs.ArrayNum;
          pFVar61 = (pTVar6->AllocatorInstance).Data;
          iVar26 = (iVar58 - iVar56) + -1;
          if (1 < iVar26) {
            iVar26 = 1;
          }
          if (iVar26 != 0) {
            memmove(pFVar61 + lVar55 * 8,pFVar61 + (longlong)(iVar58 - iVar26) * 8,
                    (longlong)iVar26 << 3);
          }
          iVar58 = param_1[1].OutputData.DataCrcs.ArrayNum + -1;
          param_1[1].OutputData.DataCrcs.ArrayNum = iVar58;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar6->AllocatorInstance,iVar58,&param_1[1].OutputData.DataCrcs.ArrayMax)
          ;
        }
        lVar55 = lVar55 + -1;
        lVar28 = lVar28 + -8;
        iVar56 = iVar56 + -1;
      } while (-1 < iVar56);
    }
    if (param_1[1].OutputData.DataCrcs.ArrayNum != 0) {
      `FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()(&local_2a8);
      bVar22 = false;
      goto LAB_149802520;
    }
    if (*(char *)((longlong)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data + 1) == '\0') {
      bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7867665438073683346>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                          ,0x26e,"Context->bExecutionSuccess");
      if (bVar18) {
code_r0x000149802407:
        pcVar16 = (code *)swi(3);
        uVar19 = (*pcVar16)();
        return (bool)uVar19;
      }
      param_1[1].AsyncState.bStarted = true;
    }
    else {
      lVar28 = param_1[1]._padding_;
      if (lVar28 == 0) {
        bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_7867665438073683346>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                            ,0x26e,"Context->DataBinding");
        if (bVar18) goto code_r0x000149802407;
      }
      else {
        pFVar5 = &param_1->OutputData;
        if (pFVar5 != (FPCGDataCollection *)(lVar28 + 0x60)) {
          DestructItems<FPCGTaggedData,int>
                    ((FPCGTaggedData *)(pFVar5->TaggedData).AllocatorInstance.Data,
                     (param_1->OutputData).TaggedData.ArrayNum);
          iVar56 = *(int *)(lVar28 + 0x68);
          piVar7 = &(param_1->OutputData).TaggedData.ArrayMax;
          pFVar15 = *(FPCGTaggedData **)(lVar28 + 0x60);
          iVar58 = *piVar7;
          (param_1->OutputData).TaggedData.ArrayNum = iVar56;
          if ((iVar56 == 0) && (iVar58 == 0)) {
            *piVar7 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar56,iVar58,(ForAnyElementType *)pFVar5,iVar56,piVar7);
            ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                      ((pFVar5->TaggedData).AllocatorInstance.Data,pFVar15,iVar56);
          }
        }
        (param_1->OutputData).bCancelExecutionOnEmpty = *(bool *)(lVar28 + 0x70);
        pTVar6 = &(param_1->OutputData).DataCrcs;
        (param_1->OutputData).bCancelExecution = *(bool *)(lVar28 + 0x71);
        if (pTVar6 != (TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *)(lVar28 + 0x78)) {
          iVar56 = *(int *)(lVar28 + 0x80);
          piVar7 = &(param_1->OutputData).DataCrcs.ArrayMax;
          _Src = *(void **)(lVar28 + 0x78);
          iVar58 = *piVar7;
          (param_1->OutputData).DataCrcs.ArrayNum = iVar56;
          if ((iVar56 == 0) && (iVar58 == 0)) {
            *piVar7 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar56,iVar58,&pTVar6->AllocatorInstance,iVar56,piVar7);
            if (iVar56 != 0) {
              memcpy((pTVar6->AllocatorInstance).Data,_Src,(longlong)iVar56 << 3);
            }
          }
        }
        (param_1->OutputData).InactiveOutputPinBitmask = *(ulong64 *)(lVar28 + 0x88);
      }
      param_1[1].AsyncState.bStarted = true;
    }
  default:
switchD_14980060c_default:
    bVar22 = true;
    goto LAB_149802520;
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14980198f:
  bVar22 = false;
LAB_149802520:
  if (bVar63) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar22;
}

// IsCacheable @ 14981fcb0

bool __thiscall
FPCGComputeGraphElement::IsCacheable(FPCGComputeGraphElement *this,UPCGSettings *param_1)

{
  return false;
}

// PostExecuteInternal @ 149825250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGComputeGraphElement::PostExecuteInternal(FPCGComputeGraphElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGStack *pFVar3;
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                       ,0x2a6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FPCGStackHandle::GetStack(&param_1->StackHandle);
  if ((param_1[1]._padding_ != 0) && (pFVar3 == (FPCGStack *)0x0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7867665438073683287>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                       ,0x2a9,"Stack");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ResetAsyncOperations @ 14982bbd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGComputeGraphElement::ResetAsyncOperations(FPCGComputeGraphElement *this,FPCGContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 *this_00;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\Elements\\PCGComputeGraphElement.cpp"
                       ,0x2ce,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1 != (FPCGContext *)0x0) &&
     (this_00 = &param_1[1].OutputData.InactiveOutputPinBitmask,
     param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex !=
     param_1[1].AsyncState.AsyncCurrentReadIndex)) {
    TSet<TObjectPtr<UComputeDataProvider>,DefaultKeyFuncs<TObjectPtr<UComputeDataProvider>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TObjectPtr<UComputeDataProvider>,DefaultKeyFuncs<TObjectPtr<UComputeDataProvider>,0>,FDefaultSetAllocator>
                      *)this_00);
    iVar1 = param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectSerialNumber;
    param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this_00,0,
                 &param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectSerialNumber);
    }
    param_1[1].AsyncState.AsyncCurrentReadIndex = 0;
    *(undefined4 *)&param_1[1].AsyncState.EndTime = 0;
    param_1[1].AsyncState.NumAvailableTasks = -1;
  }
  return;
}

// SupportsBasePointDataInputs @ 149847280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGComputeGraphElement::SupportsBasePointDataInputs
          (FPCGComputeGraphElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsGPUResidentData @ 1498472a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGComputeGraphElement::SupportsGPUResidentData(FPCGComputeGraphElement *this,FPCGContext *param_1)

{
  return true;
}

