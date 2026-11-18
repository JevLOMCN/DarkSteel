// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 6

// operator() @ 1494c6a80

void __thiscall `FComputeGraphTaskWorker::SubmitWork'::__l2::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  
  pTVar3 = TSet<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)(*(longlong *)this + 8),*(FName *)((longlong)this + 8));
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
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)&pTVar3->field_0x8,0,(int *)&pTVar3->field_0x14);
  }
  return;
}

// Abort @ 1494c79d0

void __thiscall FComputeGraphTaskWorker::Abort(FComputeGraphTaskWorker *this,UObject *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  uint local_res18;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar14 = *(int *)&(this->GraphInvocationsPerGroup).field_0x28;
  puVar1 = &(this->GraphInvocationsPerGroup).field_0x10;
  iVar10 = 0;
  iVar12 = 0;
  uVar5 = 1;
  iVar6 = 0;
  if (iVar14 != 0) {
    puVar13 = *(uint **)&(this->GraphInvocationsPerGroup).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar8 = *puVar13;
    while (uVar8 == 0) {
      lVar7 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar6 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1494c7a7e;
      uVar8 = puVar13[lVar7 + 1];
    }
    uVar5 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar12;
    if (iVar14 < iVar6) {
      iVar6 = iVar14;
    }
  }
LAB_1494c7a7e:
  local_res18 = *(uint *)&(this->GraphInvocationsPerGroup).field_0x28;
  uVar8 = local_res18 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar5,iVar10);
  TStack_68.CurrentBitIndex = iVar6;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)local_res18 >> 5;
  TStack_68._28_4_ = iVar6;
  TStack_68.BaseBitIndex = iVar12;
  uStack_48 = CONCAT44(uStack_8c,
                       *(int *)&(this->GraphInvocationsPerGroup).field_0x8 -
                       *(int *)&(this->GraphInvocationsPerGroup).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_res18 < 0) || (iVar14 < (int)local_res18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(this->GraphInvocationsPerGroup).field_0x28;
  if (local_res18 != uVar5) {
    puVar11 = *(undefined1 **)&(this->GraphInvocationsPerGroup).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)local_res18 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar10;
      uVar8 = uVar8 + 0x20;
      iVar10 = iVar10 + 1;
      local_res18 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1494c7b80;
      uVar9 = *(uint *)(puVar11 + lVar7 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7 + -1 + uVar8;
    if ((int)uVar5 < (int)local_res18) {
      local_res18 = uVar5;
    }
  }
LAB_1494c7b80:
  do {
    if (*(int *)&(this->GraphInvocationsPerGroup).field_0x8 -
        *(int *)&(this->GraphInvocationsPerGroup).field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == local_res18) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    lVar7 = (longlong)TStack_68.CurrentBitIndex * 0x20 +
            *(longlong *)&this->GraphInvocationsPerGroup;
    iVar14 = *(int *)(lVar7 + 0x10);
    uVar5 = iVar14 - 1;
    if (-1 < (int)uVar5) {
      lVar15 = (longlong)(int)uVar5 * 0x50;
      do {
        uVar8 = 0;
        if ((int)uVar5 < *(int *)(lVar7 + 0x10)) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(UObject **)(*(longlong *)(lVar7 + 8) + 8 + lVar15) == param_1) {
          uVar8 = 0;
          if (iVar14 <= *(int *)(lVar7 + 0x10)) {
            uVar8 = ~uVar5 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>::
          RemoveAtImpl((TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>
                        *)(lVar7 + 8),uVar5,1);
        }
        iVar14 = iVar14 + -1;
        lVar15 = lVar15 + -0x50;
        uVar5 = uVar5 - 1;
      } while (-1 < (int)uVar5);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// Enqueue @ 1494ccde0

void __thiscall
FComputeGraphTaskWorker::Enqueue
          (FComputeGraphTaskWorker *this,FName param_1,FName param_2,uchar param_3,
          FComputeGraphRenderProxy *param_4,
          TArray<FComputeDataProviderRenderProxy_*,TSizedDefaultAllocator<32>_> *param_5,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_6,bool param_7,
          UObject *param_8)

{
  TArray<FComputeDataProviderRenderProxy_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_> *pTVar5;
  FName *pFVar6;
  FName local_res10;
  
  local_res10 = param_1;
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  pTVar5 = TMapBase<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->GraphInvocationsPerGroup,uVar3 + param_1.Number,&local_res10);
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar6 = (FName *)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 0x50);
  DefaultConstructItems<FComputeGraphTaskWorker::FGraphInvocation,int>(pFVar6,1);
  pTVar1 = (TArray<FComputeDataProviderRenderProxy_*,TSizedDefaultAllocator<32>_> *)(pFVar6 + 4);
  *pFVar6 = param_2;
  pFVar6[1] = (FName)param_8;
  pFVar6[3] = (FName)param_4;
  *(uchar *)&pFVar6[2].ComparisonIndex.Value = param_3;
  if (pTVar1 != param_5) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_5->AllocatorInstance).Data;
    (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pFVar6[5].ComparisonIndex.Value = param_5->ArrayNum;
    pFVar6[5].Number = param_5->ArrayMax;
    param_5->ArrayNum = 0;
    param_5->ArrayMax = 0;
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar6 + 6),param_6);
  *(bool *)&pFVar6[9].ComparisonIndex.Value = param_7;
  pFVar2 = (param_5->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6);
  return;
}

// HasWork @ 1494d3910

bool __thiscall FComputeGraphTaskWorker::HasWork(FComputeGraphTaskWorker *this,FName param_1)

{
  TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  undefined1 *puVar2;
  
  if (((this->ActiveAsyncReadbacks).ArrayNum == 0) ||
     (param_1 != ComputeTaskExecutionGroup::EndOfFrameUpdate)) {
    pTVar1 = TSet<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     *)&this->GraphInvocationsPerGroup,param_1);
    puVar2 = &pTVar1->field_0x8;
    if (pTVar1 == (TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      puVar2 = (undefined1 *)0x0;
    }
    if ((puVar2 == (undefined1 *)0x0) || (*(int *)(puVar2 + 8) == 0)) {
      return false;
    }
  }
  return true;
}

// SubmitWork @ 1494d7f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FComputeGraphTaskWorker::SubmitWork(FComputeGraphTaskWorker *this,FComputeContext *param_1)

{
  TArray<FComputeDataProviderRenderProxy::FReadbackData,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *pTVar4;
  FName this_00;
  FShaderParametersMetadata *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  TConsoleVariableData<int> *pTVar12;
  int *piVar13;
  FShader *pFVar14;
  FShaderMapBase *pFVar15;
  bool bVar16;
  byte bVar17;
  bool bVar18;
  ERDGPassFlags EVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  FRDGScope *pFVar23;
  TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>
  *pTVar24;
  FScriptContainerElement *pFVar25;
  FString *pFVar26;
  wchar_t *pwVar27;
  FRDGPass *this_01;
  FRHIGPUBufferReadback *this_02;
  FName *pFVar28;
  FRHIGPUBufferReadback *pFVar29;
  int iVar30;
  atomic<unsigned_char> *paVar31;
  longlong *plVar32;
  longlong *plVar33;
  int *piVar34;
  TUniqueFunction<void___cdecl(void)> *pTVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar39;
  ulonglong uVar40;
  FScriptContainerElement *pFVar41;
  uint uVar42;
  ulonglong uVar43;
  uint *puVar44;
  uint *puVar45;
  undefined8 *puVar46;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar47;
  int iVar48;
  longlong lVar49;
  FRDGBuilder *pFVar50;
  ulonglong uVar51;
  FName *pFVar52;
  int *piVar53;
  longlong lVar54;
  longlong lVar55;
  bool bVar56;
  undefined1 auStackY_478 [32];
  char *pcVar57;
  byte local_428;
  FIdentityFunctor local_426;
  FName *local_420;
  uint local_410;
  undefined1 local_400;
  char local_3ff;
  undefined1 local_3fe;
  undefined1 local_3fd;
  undefined1 local_3fc;
  undefined1 local_3fb [3];
  uint local_3f8;
  uint local_3f4;
  uint local_3f0;
  uint *local_3e8;
  FScriptContainerElement *local_3e0;
  FName *local_3d8;
  longlong local_3d0;
  undefined1 local_3c8 [4];
  uint local_3c4;
  FRDGBuilder *local_3c0;
  FScriptContainerElement *local_3b8;
  FScriptContainerElement *local_3b0;
  uint local_3a8;
  longlong local_3a0;
  ForAnyElementType local_398;
  undefined8 local_390;
  int *local_388;
  undefined8 local_380;
  uint *local_370;
  int *local_368;
  longlong *local_360;
  FComputeContext *local_358;
  TStridedView<FComputeKernelShader::FParameters,int> local_350;
  uint local_340;
  undefined4 local_33c;
  TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> local_338;
  FRDGExternalAccessQueue local_328;
  uint local_318;
  uint local_314;
  undefined1 local_310;
  undefined8 local_30c;
  int local_304;
  FParameters *local_300;
  FRDGEventName local_2f8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_2e0;
  char local_2d0;
  wchar_t *local_2c8;
  FScriptContainerElement *local_2c0;
  FScriptContainerElement *local_2b8 [2];
  TIntVector3<int>_u_0 local_2a8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_298;
  char local_288;
  uint local_280 [2];
  FRDGExternalAccessQueue *local_278;
  FRDGParameterStruct local_270;
  FShaderParametersMetadata *local_258;
  FScriptContainerElement *pFStack_250;
  FShader *local_248;
  FShaderMapBase *pFStack_240;
  FScriptContainerElement *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[9],wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[9],wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&>_>_>
  local_228;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33>_const_*,std::tuple<>_> local_1f8;
  FString local_1e8;
  FString local_1d8;
  FShader *local_1c8;
  FShaderMapBase *pFStack_1c0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1b8;
  initializer_list<FRDGResource_*> local_1a8;
  FName local_198 [2];
  uint uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  FReadAccessScope local_150;
  FScopedCapture local_138;
  FScopedCapture local_100;
  code *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FName local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_478;
  bVar56 = -1 < CpuChannel->Enabled;
  local_358 = param_1;
  if (bVar56) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId103,"ComputeFramework::ExecuteBatches",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraphWorker.cpp"
               ,0x67);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId103);
  }
  local_288 = '\0';
  cVar3 = *(char *)((longlong)&param_1->GraphBuilder->_padding_ + 6);
  if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->GraphBuilder->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_160 = 0x54c89540;
      uStack_15c = 1;
      ::Desc._padding_._0_4_ = 0x54c89540;
      ::Desc._padding_._4_4_ = uStack_164;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_ComputeFramewor;
      ::Desc._padding_ = (longlong)u_ComputeFramewor;
      ::Desc._padding_._0_4_ = 0x68;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FComputeGraphTaskWorker::SubmitWork'::__l7::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar50 = param_1->GraphBuilder;
    local_1f8._Myfirst._Val = &::Desc;
    local_298.State = (FRDGScopeState *)pFVar50;
    pFVar23 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&pFVar50->_padding_,(FRDGScope **)pFVar50);
    ((FState *)&pFVar50->_padding_)->Current = pFVar23;
    local_298.Scope = pFVar23;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33>_const_*,std::tuple<>_>_>
              (&(pFVar23->Impl).Impl,(FRDGScopeState *)pFVar50,&local_1f8);
    if (*(bool *)((longlong)&pFVar50->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(pFVar23,(FRHIComputeCommandList *)pFVar50->_padding_,false);
      FRDGScope::BeginGPU(pFVar23,(FRHIComputeCommandList *)pFVar50->_padding_);
    }
    local_288 = '\x01';
  }
  pFVar50 = param_1->GraphBuilder;
  local_3ff = 0 < GTriggerGPUCaptureDispatches;
  local_3c0 = pFVar50;
  RenderCaptureInterface::FScopedCapture::FScopedCapture
            (&local_138,(bool)local_3ff,pFVar50,L"FComputeGraphTaskWorker::SubmitWork",
             (wchar_t *)0x0);
  iVar30 = GTriggerGPUCaptureDispatches + -1;
  GTriggerGPUCaptureDispatches = 0;
  if (0 < iVar30) {
    GTriggerGPUCaptureDispatches = iVar30;
  }
  if (param_1->ExecutionGroupName == ComputeTaskExecutionGroup::EndOfFrameUpdate) {
    UpdateReadbacks(this);
  }
  pTVar24 = TSet<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&this->GraphInvocationsPerGroup,param_1->ExecutionGroupName);
  local_360 = (longlong *)&pTVar24->field_0x8;
  if (pTVar24 ==
      (TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    local_360 = (longlong *)0x0;
  }
  if ((local_360 != (longlong *)0x0) && ((int)local_360[1] != 0)) {
    pFVar25 = (FScriptContainerElement *)&this->SubmitDescs;
    local_3b0 = (FScriptContainerElement *)&(this->SubmitDescs).ArrayMax;
    piVar34 = &(this->SubmitDescs).ArrayNum;
    *piVar34 = 0;
    local_3b8 = pFVar25;
    local_368 = piVar34;
    if ((this->SubmitDescs).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)pFVar25,0,(int *)local_3b0);
    }
    piVar53 = &(this->Shaders).ArrayMax;
    local_388 = &(this->Shaders).ArrayNum;
    *local_388 = 0;
    if ((this->Shaders).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Shaders).AllocatorInstance,0,piVar53);
    }
    FSkeletalMeshUpdater::WaitForStage(pFVar50,MeshDeformer);
    local_328.Resources.AllocatorInstance.Data = (FResource *)0x0;
    local_328.Resources.ArrayNum = 0;
    local_328.Resources.ArrayMax = 0;
    local_3f8 = 0;
    iVar30 = (int)local_360[1];
    if (0 < iVar30) {
      local_3e8 = (uint *)0x0;
LAB_1494d81a1:
      plVar32 = local_360;
      puVar45 = local_3e8;
      uVar36 = 0;
      if ((int)local_3f8 < iVar30) {
        uVar36 = ~local_3f8 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_3c4 = (this->SubmitDescs).ArrayNum;
      lVar49 = (longlong)puVar45 * 0x50 + *plVar32;
      pFVar52 = *(FName **)(lVar49 + 0x18);
      local_3f4 = pFVar52[2].ComparisonIndex.Value;
      uVar36 = local_3c4 + local_3f4;
      local_3d8 = pFVar52;
      local_3d0 = lVar49;
      if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
      }
      if (((TArray<FComputeGraphTaskWorker::FSubmitDescription,TSizedDefaultAllocator<32>_> *)
          pFVar25)->ArrayMax < (int)uVar36) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar36,(ForAnyElementType *)pFVar25,local_3c4,
                   &((TArray<FComputeGraphTaskWorker::FSubmitDescription,TSizedDefaultAllocator<32>_>
                      *)pFVar25)->ArrayMax);
      }
      uVar36 = 0;
      local_3f0 = (this->Shaders).ArrayNum;
      local_428 = 1;
      local_380 = (FScriptContainerElement *)0x0;
      pFVar41 = (FScriptContainerElement *)
                &((TArray<FComputeGraphTaskWorker::FSubmitDescription,TSizedDefaultAllocator<32>_> *
                  )pFVar25)->ArrayMax;
LAB_1494d827c:
      pFVar2 = local_380;
      pFVar50 = local_3c0;
      uVar40 = 0;
      if ((int)uVar36 < (int)local_3f4) {
        iVar30 = ((TArray<FComputeGraphTaskWorker::FSubmitDescription,TSizedDefaultAllocator<32>_> *
                  )pFVar25)->ArrayNum;
        if (iVar30 == *(int *)pFVar41) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)pFVar25,(int *)pFVar41);
        }
        ((TArray<FComputeGraphTaskWorker::FSubmitDescription,TSizedDefaultAllocator<32>_> *)pFVar25)
        ->ArrayNum = iVar30 + 1;
        local_3e0 = (((TArray<FComputeGraphTaskWorker::FSubmitDescription,TSizedDefaultAllocator<32>_>
                       *)pFVar25)->AllocatorInstance).Data + (longlong)iVar30 * 8;
        *(undefined8 *)local_3e0 = 0;
        *(uint *)local_3e0 = (uVar36 & 0xfff) << 0xc | local_3f8 & 0xfff;
        local_3e0[3] = *(FScriptContainerElement *)(lVar49 + 0x10);
        *(uint *)(local_3e0 + 4) =
             *(uint *)(local_3e0 + 4) ^
             (*(uint *)(local_3e0 + 4) ^ (this->Shaders).ArrayNum) & 0x7fff;
        uVar37 = 0;
        if ((int)uVar36 < (int)pFVar52[2].ComparisonIndex.Value) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar55 = (longlong)pFVar2 * 0x88 + (longlong)local_3d8[1];
        if ((*(char *)(lVar49 + 0x48) == '\0') ||
           (uVar37 = 0x10000, *(char *)(lVar55 + 0x85) == '\0')) {
          uVar37 = 0;
        }
        *(uint *)(local_3e0 + 4) = *(uint *)(local_3e0 + 4) & 0xfffeffff;
        *(uint *)(local_3e0 + 4) = *(uint *)(local_3e0 + 4) | uVar37;
        piVar34 = &(this->PermutationIds).ArrayMax;
        (this->PermutationIds).ArrayNum = 0;
        if (*piVar34 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(this->PermutationIds).AllocatorInstance,0,piVar34);
        }
        (this->ThreadCounts).ArrayNum = 0;
        if ((this->ThreadCounts).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,&(this->ThreadCounts).AllocatorInstance,0,
                     &(this->ThreadCounts).ArrayMax);
        }
        uVar37 = *(uint *)(lVar55 + 0x80);
        uVar20 = 0;
        if ((int)uVar37 < *(int *)(lVar49 + 0x28)) {
          uVar20 = ~uVar37 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar32 = *(longlong **)(*(longlong *)(lVar49 + 0x20) + (longlong)(int)uVar37 * 8);
        uVar20 = (**(code **)(*plVar32 + 8))(plVar32,&this->ThreadCounts);
        pFVar25 = local_380;
        lVar49 = *(longlong *)(lVar55 + 0x28);
        uVar37 = 0;
        if ((int)uVar36 < (int)local_3d8[4].ComparisonIndex.Value) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        local_3a8 = uVar20;
        if ((uVar37 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_3a0 = (longlong)pFVar25 * 0x58 + (longlong)local_3d8[3];
        local_398.Data = (this->PermutationIds).AllocatorInstance.Data;
        (this->PermutationIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar30 = (this->PermutationIds).ArrayNum;
        local_390._0_4_ = (this->PermutationIds).ArrayNum;
        local_390._4_4_ = (this->PermutationIds).ArrayMax;
        (this->PermutationIds).ArrayNum = 0;
        (this->PermutationIds).ArrayMax = 0;
        if (iVar30 < (int)uVar20) {
          iVar21 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,uVar20 - iVar30,&local_398,(int *)&local_390,
                              (int *)((longlong)&local_390 + 4));
          memset(local_398.Data + (longlong)iVar21 * 4,0,(longlong)(int)(uVar20 - iVar30) << 2);
        }
        else {
          if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
          }
          if ((int)uVar20 < iVar30) {
            uVar37 = iVar30 - uVar20;
            if (((int)(uVar37 | uVar20) < 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (uVar37 != 0) {
              iVar30 = ((int)local_390 - uVar37) - uVar20;
              if (iVar30 != 0) {
                memmove(local_398.Data + (longlong)(int)uVar20 * 4,
                        local_398.Data + (longlong)(int)uVar20 * 4 + (longlong)(int)uVar37 * 4,
                        (longlong)iVar30 << 2);
              }
              iVar30 = (int)local_390 - uVar37;
              local_390 = CONCAT44(local_390._4_4_,iVar30);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&local_398,iVar30,(int *)((longlong)&local_390 + 4));
            }
          }
        }
        uVar40 = 0;
        uVar51 = uVar40;
        uVar43 = uVar40;
        while (local_428 != 0) {
          while( true ) {
            uVar37 = (uint)uVar43;
            if (*(int *)(lVar49 + 0x58) <= (int)uVar37) goto LAB_1494d8697;
            if (((int)uVar37 < 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar54 = *(longlong *)(lVar49 + 0x50);
            if (*(char *)(lVar54 + 0x18 + uVar51) != '\x14') break;
            uVar42 = 0;
            if ((int)uVar37 < *(int *)(lVar55 + 0x38)) {
              uVar42 = ~uVar37 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar42 = *(uint *)(*(longlong *)(lVar55 + 0x30) + uVar40 * 4);
            uVar22 = 0;
            if ((int)uVar42 < *(int *)(local_3d0 + 0x28)) {
              uVar22 = ~uVar42 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar32 = *(longlong **)(*(longlong *)(local_3d0 + 0x20) + (longlong)(int)uVar42 * 8);
            if (plVar32 == (longlong *)0x0) {
              iVar30 = 0xb4;
              pcVar57 = "DataProvider != nullptr";
              paVar31 = &bGEnsureHasExecuted<7505322987457872052>;
              goto LAB_1494d866f;
            }
            local_33c = *(undefined4 *)(*(longlong *)(lVar54 + 0x28 + uVar51) + 0x3c);
            local_340 = uVar20;
            bVar17 = (**(code **)(*plVar32 + 0x10))(plVar32);
            local_428 = local_428 & bVar17;
            if (local_428 == 0) goto LAB_1494d867a;
            (**(code **)(*plVar32 + 0x18))(plVar32);
            uVar43 = (ulonglong)(uVar37 + 1);
            uVar51 = uVar51 + 0x30;
            uVar40 = uVar40 + 1;
          }
          iVar30 = 0xb0;
          pcVar57 = "Member.GetBaseType() == EUniformBufferBaseType::UBMT_NESTED_STRUCT";
          paVar31 = &bGEnsureHasExecuted<7505322987457872048>;
LAB_1494d866f:
          bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (paVar31,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraphWorker.cpp"
                              ,iVar30,pcVar57);
          if (bVar16) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_1494d867a:
          uVar43 = (ulonglong)(uVar37 + 1);
          uVar40 = uVar40 + 1;
          uVar51 = uVar51 + 0x30;
        }
LAB_1494d8697:
        uVar40 = 0;
        uVar51 = uVar40;
        piVar34 = local_388;
        while (local_388 = piVar34, local_428 != 0) {
          uVar37 = (uint)uVar51;
          if ((int)uVar20 <= (int)uVar37) {
            if ((*(char *)(lVar55 + 0x84) != '\0') && (1 < (int)uVar20)) {
              bVar16 = true;
              iVar30 = 1;
              goto LAB_1494d8a38;
            }
            break;
          }
          lVar49 = *(longlong *)(lVar55 + 0x20);
          uVar42 = 0;
          if ((int)uVar37 < (int)local_390) {
            uVar42 = ~uVar37 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar30 = *(int *)(local_398.Data + uVar40);
          if (((GIsThreadedRendering != false) && (bVar16 = IsInGameThread(), bVar16)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!GIsThreadedRendering || !IsInGameThread()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShared.cpp"
                                  ,0x1bc,L""), bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FComputeKernelShaderMap::GetShader<FComputeKernelShader>
                    (*(FComputeKernelShaderMap **)(lVar49 + 0x20),&local_338,iVar30);
          local_428 = local_428 & local_338.ShaderContent != (FComputeKernelShader *)0x0;
          pTVar4 = (TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *)
                   (this->Shaders).AllocatorInstance.Data;
          if (((pTVar4 <= &local_338) && (&local_338 < pTVar4 + *piVar53)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar30 = (this->Shaders).ArrayNum;
          if (iVar30 == *piVar53) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this->Shaders).AllocatorInstance,piVar53);
          }
          uVar51 = (ulonglong)(uVar37 + 1);
          uVar40 = uVar40 + 4;
          pFVar25 = (this->Shaders).AllocatorInstance.Data + (longlong)iVar30 * 0x10;
          (this->Shaders).ArrayNum = iVar30 + 1;
          *(FComputeKernelShader **)pFVar25 = local_338.ShaderContent;
          *(FShaderMapBase **)(pFVar25 + 8) = local_338.ShaderMap;
          piVar34 = local_388;
        }
        goto LAB_1494d882f;
      }
      local_278 = &local_328;
      uVar51 = uVar40;
      local_280[0] = local_3f4;
      if (0 < *(int *)(lVar49 + 0x28)) {
        do {
          uVar37 = (uint)uVar40;
          uVar36 = 0;
          if ((int)uVar37 < *(int *)(lVar49 + 0x28)) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar32 = *(longlong **)(uVar51 + *(longlong *)(lVar49 + 0x20));
          if (plVar32 != (longlong *)0x0) {
            (**(code **)(*plVar32 + 0x20))(plVar32,pFVar50,local_280);
          }
          uVar40 = (ulonglong)(uVar37 + 1);
          uVar51 = uVar51 + 8;
        } while ((int)(uVar37 + 1) < *(int *)(lVar49 + 0x28));
      }
      goto LAB_1494d8e89;
    }
LAB_1494d8ec1:
    plVar32 = local_360;
    pTVar12 = CVarComputeFrameworkSortSubmit.Ref;
    bVar16 = IsInParallelRenderingThread();
    if ((!bVar16) &&
       (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pTVar12->ShadowedValue[1] != 0) {
      AlgoImpl::
      IntroSortInternal<FComputeGraphTaskWorker::FSubmitDescription,int,FIdentityFunctor,_FComputeGraphTaskWorker::SubmitWork_::__l49::<lambda_2>_>
                ((FSubmitDescription *)
                 (((TArray<FComputeGraphTaskWorker::FSubmitDescription,TSizedDefaultAllocator<32>_>
                    *)pFVar25)->AllocatorInstance).Data,*piVar34,local_426,(<lambda_2>)local_426);
    }
    local_3c4 = ((TArray<FComputeGraphTaskWorker::FSubmitDescription,TSizedDefaultAllocator<32>_> *)
                pFVar25)->ArrayNum;
    uVar40 = (ulonglong)(int)local_3c4;
    pFVar41 = (((TArray<FComputeGraphTaskWorker::FSubmitDescription,TSizedDefaultAllocator<32>_> *)
               pFVar25)->AllocatorInstance).Data;
    local_3b8 = pFVar41 + uVar40 * 8;
    piVar34 = &((TArray<FComputeGraphTaskWorker::FSubmitDescription,TSizedDefaultAllocator<32>_> *)
               pFVar25)->ArrayNum;
    while( true ) {
      pFVar25 = local_3b8;
      local_3e0 = pFVar41;
      if (*piVar34 != (int)uVar40) {
        local_400 = 0;
        `TCheckedPointerIterator<FComputeGraphTaskWorker::FSubmitDescription,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_400);
      }
      if (pFVar41 == pFVar25) break;
      uVar36 = *(uint *)pFVar41;
      if (((int)plVar32[1] <= (int)(uVar36 & 0xfff)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar52 = (FName *)((ulonglong)(uVar36 & 0xfff) * 0x50 + *plVar32);
      uVar36 = *(uint *)pFVar41 >> 0xc & 0xfff;
      this_00 = pFVar52[3];
      local_3f0 = uVar36;
      local_3d8 = pFVar52;
      if (((int)(((FName *)((longlong)this_00 + 0x10))->ComparisonIndex).Value <= (int)uVar36) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar46 = (undefined8 *)
                ((ulonglong)uVar36 * 0x88 + (longlong)*(FName *)((longlong)this_00 + 8));
      if (((*(uint *)(pFVar41 + 4) & 0x10000) == 0) || (local_3ff != '\0')) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      RenderCaptureInterface::FScopedCapture::FScopedCapture
                (&local_100,bVar16,pFVar50,L"FComputeGraphTaskWorker::SubmitWork::SubmitDesc",
                 (wchar_t *)0x0);
      cVar3 = *(char *)((longlong)&pFVar50->_padding_ + 6);
      local_2d0 = '\0';
      if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((pFVar50->_padding_ & 4) == 0)))) {
        if (*(int *)(puVar46 + 1) == 0) {
          local_2c8 = L"";
        }
        else {
          local_2c8 = (wchar_t *)*puVar46;
        }
        pFVar26 = ::FName::ToString((FName *)this_00,&local_1d8);
        if ((pFVar26->Data).ArrayNum == 0) {
          local_2c0 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_2c0 = (pFVar26->Data).AllocatorInstance.Data;
        }
        pFVar26 = ::FName::ToString(pFVar52,&local_1e8);
        if ((pFVar26->Data).ArrayNum == 0) {
          local_2b8[0] = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_2b8[0] = (pFVar26->Data).AllocatorInstance.Data;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          local_180 = 0;
          uStack_17c = 0;
          ::Desc._12_8_ = ZEXT48(uStack_184);
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_._0_4_ = 0x103;
          ::Desc._padding_ = (longlong)u__s__s__s;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FComputeGraphTaskWorker::SubmitWork'::__l58::<lambda_3>::
                 operator()<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>'::__l3::<lambda_2>::
                 operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[9],wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&>_>'
                 ::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_228._Myfirst._Val = &::Desc;
        local_228._padding_ = 0x151e56f70;
        local_2e0.State = (FRDGScopeState *)pFVar50;
        local_228._padding_ = (longlong)&local_2c8;
        local_228._padding_ = (longlong)&local_2c0;
        local_228._padding_ = (longlong)local_2b8;
        local_228._padding_ = (longlong)local_3c8;
        pFVar23 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&pFVar50->_padding_,(FRDGScope **)pFVar50);
        pFVar50->_padding_ = (longlong)pFVar23;
        uVar40 = (ulonglong)(pFVar23->Impl).Impl.TypeIndex;
        local_2e0.Scope = pFVar23;
        if ((3 < uVar40) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar40])(&pFVar23->Impl);
        FRDGScope_RHI::
        FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[9],wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[9],wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&>_>
                  ((FRDGScope_RHI *)&pFVar23->Impl,(FRDGScopeState *)pFVar50,&local_228);
        (pFVar23->Impl).Impl.TypeIndex = '\x02';
        if (*(char *)((longlong)&pFVar50->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(pFVar23,(FRHIComputeCommandList *)pFVar50->_padding_,false);
          FRDGScope::BeginGPU(pFVar23,(FRHIComputeCommandList *)pFVar50->_padding_);
        }
        local_2d0 = '\x01';
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
      }
      puVar44 = (uint *)puVar46[10];
      iVar30 = *(int *)(puVar46 + 0xb);
      pFVar52 = local_3d8 + 4;
      puVar45 = puVar44 + iVar30;
      local_420 = pFVar52;
      while( true ) {
        if (*(int *)(puVar46 + 0xb) != iVar30) {
          local_3fe = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_3fe);
          local_420 = pFVar52;
        }
        if (puVar44 == puVar45) break;
        uVar36 = *puVar44;
        local_420 = local_3d8 + 4;
        uVar37 = 0;
        if ((int)uVar36 < (int)local_3d8[5].ComparisonIndex.Value) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar32 = *(longlong **)((longlong)*local_420 + (longlong)(int)uVar36 * 8);
        if (plVar32 != (longlong *)0x0) {
          (**(code **)(*plVar32 + 0x40))(plVar32,local_358);
        }
        puVar44 = puVar44 + 1;
      }
      pTVar47 = &this->ThreadCounts;
      local_3b0 = (FScriptContainerElement *)&(this->ThreadCounts).ArrayNum;
      *(int *)local_3b0 = 0;
      if ((this->ThreadCounts).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&pTVar47->AllocatorInstance,0,&(this->ThreadCounts).ArrayMax);
        local_420 = pFVar52;
      }
      uVar36 = *(uint *)(puVar46 + 0x10);
      uVar37 = 0;
      if ((int)uVar36 < (int)local_420[1].ComparisonIndex.Value) {
        uVar37 = ~uVar36 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar32 = *(longlong **)((longlong)*local_420 + (longlong)(int)uVar36 * 8);
      local_410 = (**(code **)(*plVar32 + 8))(plVar32,pTVar47);
      local_3f4 = *(uint *)(local_3e0 + 4) >> 0xf & 0xffffff01;
      uVar36 = local_3f4;
      if ((*(uint *)(local_3e0 + 4) >> 0xf & 1) != 0) {
        uVar36 = 1;
        if (1 < (int)local_410) {
          lVar49 = 0xc;
          do {
            uVar37 = 0;
            if ((int)uVar36 < (this->ThreadCounts).ArrayNum) {
              uVar37 = ~uVar36 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar30 = *(int *)((pTVar47->AllocatorInstance).Data + lVar49);
            if (((this->ThreadCounts).ArrayNum < 1) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar25 = (pTVar47->AllocatorInstance).Data;
            uVar36 = uVar36 + 1;
            lVar49 = lVar49 + 0xc;
            *(int *)pFVar25 = *(int *)pFVar25 + iVar30;
          } while ((int)uVar36 < (int)local_410);
        }
        uVar36 = local_3f4;
        piVar53 = &(this->ThreadCounts).ArrayNum;
        piVar34 = &(this->ThreadCounts).ArrayMax;
        iVar30 = *piVar53;
        if (iVar30 < 1) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,1 - iVar30,&pTVar47->AllocatorInstance,piVar53,piVar34);
        }
        else if (1 < iVar30) {
          uVar37 = iVar30 - 1;
          if ((int)uVar37 < 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else if (uVar37 == 0) goto LAB_1494d954f;
          pFVar25 = (pTVar47->AllocatorInstance).Data + 0xc;
          if (~uVar37 + *piVar53 != 0) {
            memmove(pFVar25,pFVar25 + (longlong)(int)uVar37 * 0xc,
                    (longlong)(int)(~uVar37 + *piVar53) * 0xc);
          }
          *piVar53 = *piVar53 - uVar37;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,&pTVar47->AllocatorInstance,*piVar53,piVar34);
        }
LAB_1494d954f:
        local_410 = 1;
      }
      pFVar50 = local_3c0;
      FRDGBuilder::AllocParameters<FComputeKernelShader::FParameters>
                (local_3c0,&local_350,(FShaderParametersMetadata *)puVar46[5],local_410);
      local_318 = local_3f0;
      local_304 = local_350.BytesBetweenElements;
      local_310 = (undefined1)uVar36;
      local_30c = 0;
      local_314 = local_410;
      if ((local_350.NumElements < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                              ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar36 = local_3f4;
      uVar40 = 0;
      local_300 = local_350.FirstElementPtr;
      lVar49 = puVar46[5];
      plVar32 = (longlong *)(lVar49 + 0x50);
      iVar30 = *(int *)(lVar49 + 0x58);
      local_3e8 = (uint *)plVar32;
      if (0 < iVar30) {
        local_3d0 = 0;
        uVar51 = uVar40;
        do {
          lVar55 = local_3d0;
          uVar20 = (uint)uVar40;
          uVar42 = ~uVar20 >> 0x1f;
          uVar37 = 0;
          if ((int)uVar20 < iVar30) {
            uVar37 = uVar42;
          }
          if ((uVar37 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar54 = *plVar32 + lVar55;
          if (*(char *)(lVar54 + 0x18) == '\x14') {
            uVar37 = 0;
            if ((int)uVar20 < *(int *)(puVar46 + 7)) {
              uVar37 = uVar42;
            }
            if ((uVar37 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar37 = *(uint *)(puVar46[6] + uVar51 * 4);
            uVar22 = 0;
            if ((int)uVar37 < (int)local_420[1].ComparisonIndex.Value) {
              uVar22 = ~uVar37 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar33 = *(longlong **)((longlong)*local_420 + (longlong)(int)uVar37 * 8);
            if (plVar33 == (longlong *)0x0) {
              bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<7505322987457872172>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraphWorker.cpp"
                                  ,300,"DataProvider != nullptr");
              lVar55 = local_3d0;
              if (bVar16) goto code_r0x0001494d976e;
            }
            else {
              uVar37 = 0;
              if ((int)uVar20 < *(int *)(puVar46 + 0xf)) {
                uVar37 = uVar42;
              }
              if ((uVar37 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_310 = 1;
              if (*(char *)(puVar46[0xe] + uVar51) != '\0') {
                local_310 = (char)uVar36;
              }
              local_30c = CONCAT44(*(undefined4 *)(lVar54 + 0x14),
                                   *(undefined4 *)(*(longlong *)(lVar54 + 0x28) + 0x3c));
              (**(code **)(*plVar33 + 0x28))(plVar33,&local_318);
              lVar55 = local_3d0;
            }
          }
          else {
            bVar16 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<7505322987457872168>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraphWorker.cpp"
                                ,0x128,
                                "Member.GetBaseType() == EUniformBufferBaseType::UBMT_NESTED_STRUCT"
                               );
            if (bVar16) {
code_r0x0001494d976e:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar30 = *(int *)(lVar49 + 0x58);
          local_3d0 = lVar55 + 0x30;
          uVar40 = (ulonglong)(uVar20 + 1);
          uVar51 = uVar51 + 1;
          pFVar50 = local_3c0;
        } while ((int)(uVar20 + 1) < iVar30);
      }
      uVar40 = 0;
      local_3f8 = 0;
      if (0 < (int)local_410) {
        piVar34 = &(pFVar50->Passes).Array.ArrayMax;
        local_3e8 = (uint *)0x0;
        uVar51 = uVar40;
        do {
          puVar45 = local_3e8;
          uVar20 = (uint)uVar40;
          uVar37 = (*(uint *)(local_3e0 + 4) & 0x7fff) + uVar20;
          uVar36 = 0;
          if ((int)uVar37 < (this->Shaders).ArrayNum) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar25 = (this->Shaders).AllocatorInstance.Data + (longlong)(int)uVar37 * 0x10;
          local_1c8 = *(FShader **)pFVar25;
          pFStack_1c0 = *(FShaderMapBase **)(pFVar25 + 8);
          uVar36 = 0;
          if ((int)uVar20 < *(int *)local_3b0) {
            uVar36 = ~uVar20 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar30 = (*(int *)(puVar46 + 2) + -1 +
                   *(int *)((longlong)puVar45 +
                           (longlong)(this->ThreadCounts).AllocatorInstance.Data)) /
                   *(int *)(puVar46 + 2);
          if (((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < 0x80) ||
              (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < 0x80)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GRHIGlobals.MaxDispatchThreadGroupsPerDimension.X >= WrappedGroupStride && GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Y >= WrappedGroupStride"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                                  ,400,L""), bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar38 = 1;
          iVar48 = 1;
          iVar21 = iVar30;
          if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < iVar30) {
            iVar21 = 0x80;
            iVar38 = (int)((iVar30 + 0x7f >> 0x1f & 0x7fU) + iVar30 + 0x7f) >> 7;
          }
          if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < iVar38) {
            iVar48 = iVar38 + 0x7f;
            iVar38 = 0x80;
            iVar48 = (int)((iVar48 >> 0x1f & 0x7fU) + iVar48) >> 7;
          }
          if ((iVar48 * iVar38 * iVar21 < iVar30) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TargetGroupCount <= GroupCount.X * GroupCount.Y * GroupCount.Z",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                                  ,0x19f,L""), bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_380 = (FScriptContainerElement *)CONCAT44(iVar38,iVar21);
          uVar36 = 0;
          if ((int)local_3f8 < local_350.NumElements) {
            uVar36 = ~uVar20 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                                  ,0x96,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar25 = local_380;
          local_2a8._0_8_ = local_380;
          pFVar5 = (FShaderParametersMetadata *)puVar46[5];
          pFVar41 = (FScriptContainerElement *)
                    (&(local_350.FirstElementPtr)->field_0x0 +
                    (longlong)local_350.BytesBetweenElements * uVar51);
          local_2f8.EventFormat = L"";
          local_2f8.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f8.FormattedEventName.Data.ArrayNum = 0;
          local_2f8.FormattedEventName.Data.ArrayMax = 0;
          local_2a8._s_0.Z = iVar48;
          FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_2a8._s_0);
          pFVar15 = pFStack_1c0;
          pFVar14 = local_1c8;
          local_1b8.ShaderContent = local_1c8;
          local_1b8.ShaderMap = pFStack_1c0;
          ValidateShaderParameters(&local_1b8,pFVar5,pFVar41);
          local_1a8._First = (FRDGResource **)0x0;
          local_1a8._Last = (FRDGResource **)0x0;
          ClearUnusedGraphResourcesImpl(&pFVar14->Bindings,pFVar5,pFVar41,&local_1a8);
          pFVar50 = local_3c0;
          local_248 = pFVar14;
          pFStack_240 = pFVar15;
          local_238 = pFVar25;
          local_258 = pFVar5;
          pFStack_250 = pFVar41;
          iStack_230 = iVar48;
          FRDGUserValidation::ValidateAddPass
                    (&local_3c0->UserValidation,pFVar41,pFVar5,&local_2f8,NeverCull|Compute);
          FRDGBuilder::FlushAccessModeQueue(pFVar50);
          pwVar27 = FRDGEventName::GetTCHAR(&local_2f8);
          EVar19 = FRDGBuilder::OverridePassFlags(pFVar50,pwVar27,NeverCull|Compute);
          this_01 = FMemStackBase::Alloc((FMemStackBase *)&pFVar50->_padding_,0x1b8,8);
          local_270.Contents = (uchar *)pFVar41;
          if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsLayoutInitialized()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                  ,0x17c,L""), bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_270.Layout.Reference = (pFVar5->Layout).Reference;
          if (local_270.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_270.Layout.Reference);
          }
          local_270.Metadata = pFVar5;
          FRDGPass::FRDGPass(this_01,&local_2f8,&local_270,EVar19,Async);
          this_01[1].ParameterStruct.Contents = (uchar *)pFVar41;
          this_01->_padding_ =
               (longlong)
               &
               ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFComputeKernelShader___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFComputeKernelShader__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAUFParameters_FComputeKernelShader__U__TIntVector3_H_Math_UE___Z___6B_
          ;
          this_01[1]._padding_ = (longlong)local_258;
          this_01[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFStack_250;
          *(FShader **)&this_01[1].FullPathIfDebug.Data.ArrayNum = pFVar14;
          this_01[1].Name.EventFormat = (wchar_t *)pFVar15;
          this_01[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_238;
          this_01[1].Name.FormattedEventName.Data.ArrayNum = iStack_230;
          this_01[1].Name.FormattedEventName.Data.ArrayMax = uStack_22c;
          FRDGBuilder::ClobberPassOutputs(pFVar50,this_01);
          iVar30 = (pFVar50->Passes).Array.ArrayNum;
          if (iVar30 == *piVar34) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                               (0x808,(ForElementType<FRDGPass_*> *)&pFVar50->Passes,piVar34);
          }
          (pFVar50->Passes).Array.ArrayNum = iVar30 + 1;
          (pFVar50->Passes).Array.AllocatorInstance.Data[iVar30] = this_01;
          (this_01->Handle).Index = (pFVar50->Passes).Array.ArrayNum - 1;
          FRDGBuilder::SetupParameterPass(pFVar50,this_01);
          if (local_2f8.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.FormattedEventName.Data.AllocatorInstance.Data);
          }
          uVar51 = uVar51 + 1;
          local_3f8 = local_3f8 + 1;
          uVar40 = (ulonglong)local_3f8;
          local_3e8 = (uint *)((longlong)local_3e8 + 0xc);
        } while ((int)local_3f8 < (int)local_410);
      }
      puVar44 = (uint *)puVar46[0xc];
      iVar30 = *(int *)(puVar46 + 0xd);
      puVar45 = puVar44 + iVar30;
      while( true ) {
        if (*(int *)(puVar46 + 0xd) != iVar30) {
          local_3fd = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_3fd);
        }
        if (puVar44 == puVar45) break;
        uVar36 = *puVar44;
        uVar37 = 0;
        if ((int)uVar36 < (int)local_420[1].ComparisonIndex.Value) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar32 = *(longlong **)((longlong)*local_420 + (longlong)(int)uVar36 * 8);
        if (plVar32 != (longlong *)0x0) {
          (**(code **)(*plVar32 + 0x50))(plVar32,local_358);
        }
        puVar44 = puVar44 + 1;
      }
      local_3f0 = *(uint *)(puVar46 + 9);
      uVar40 = (ulonglong)(int)local_3f0;
      puVar45 = (uint *)puVar46[8];
      local_370 = puVar45 + uVar40;
      while( true ) {
        puVar44 = local_370;
        local_3e8 = puVar45;
        if (*(int *)(puVar46 + 9) != (int)uVar40) {
          local_3fc = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_3fc);
        }
        if (puVar45 == puVar44) break;
        uVar36 = *puVar45;
        uVar37 = 0;
        if ((int)uVar36 < (int)local_420[1].ComparisonIndex.Value) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar32 = *(longlong **)((longlong)*local_420 + (longlong)(int)uVar36 * 8);
        if (plVar32 != (longlong *)0x0) {
          pTVar1 = &this->ReadbackDatas;
          (this->ReadbackDatas).ArrayNum = 0;
          if ((this->ReadbackDatas).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&pTVar1->AllocatorInstance,0,&(this->ReadbackDatas).ArrayMax);
          }
          (**(code **)(*plVar32 + 0x30))(plVar32,pTVar1);
          pFVar52 = local_3d8;
          iVar30 = (this->ReadbackDatas).ArrayNum;
          pFVar41 = (pTVar1->AllocatorInstance).Data;
          pFVar25 = pFVar41 + (longlong)iVar30 * 0x18;
          local_3b0 = pFVar25;
          while( true ) {
            pFVar29 = (FRHIGPUBufferReadback *)0x0;
            if ((this->ReadbackDatas).ArrayNum != iVar30) {
              local_3fb[0] = 0;
              `TCheckedPointerIterator<FComputeDataProviderRenderProxy::FReadbackData,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_3fb);
            }
            if (pFVar41 == pFVar25) break;
            if (((*(longlong *)pFVar41 != 0) && (*(int *)(pFVar41 + 8) != 0)) &&
               (*(longlong *)(pFVar41 + 0x10) != 0)) {
              this_02 = ::operator_new(0x58);
              if (this_02 == (FRHIGPUBufferReadback *)0x0) {
LAB_1494d9e96:
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ReadbackRequest",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraphWorker.cpp"
                                    ,0x16a,L"");
                if (bVar16) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              else {
                pFVar28 = ::FName::FName(local_198,L"ComputeFrameworkBuffer");
                pFVar29 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(this_02,*pFVar28);
                if (pFVar29 == (FRHIGPUBufferReadback *)0x0) goto LAB_1494d9e96;
              }
              iVar21 = (this->ActiveAsyncReadbacks).ArrayNum;
              piVar34 = &(this->ActiveAsyncReadbacks).ArrayMax;
              if (iVar21 == *piVar34) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1050,&(this->ActiveAsyncReadbacks).AllocatorInstance,piVar34);
              }
              (this->ActiveAsyncReadbacks).ArrayNum = iVar21 + 1;
              pFVar25 = (this->ActiveAsyncReadbacks).AllocatorInstance.Data;
              lVar49 = (longlong)iVar21;
              *(undefined8 *)(pFVar25 + lVar49 * 0x50 + 8) = 0;
              *(undefined8 *)(pFVar25 + lVar49 * 0x50 + 0x18) = 0;
              *(undefined8 *)(pFVar25 + lVar49 * 0x50 + 0x28) = 0;
              *(undefined8 *)(pFVar25 + lVar49 * 0x50 + 0x30) = 0;
              *(undefined8 *)(pFVar25 + lVar49 * 0x50 + 0x38) = 0;
              *(undefined8 *)(pFVar25 + lVar49 * 0x50 + 0x40) = 0;
              *(undefined8 *)(pFVar25 + lVar49 * 0x50 + 0x10) = 0;
              *(undefined8 *)(pFVar25 + lVar49 * 0x50 + 0x20) = 0;
              *(undefined8 *)(pFVar25 + lVar49 * 0x50 + 0x48) = 0;
              *(FRHIGPUBufferReadback **)(pFVar25 + lVar49 * 0x50) = pFVar29;
              *(int *)(pFVar25 + lVar49 * 0x50 + 8) = *(int *)(pFVar41 + 8);
              *(FName *)(pFVar25 + lVar49 * 0x50 + 0x10) = pFVar52[1];
              plVar32 = *(longlong **)(pFVar41 + 0x10);
              uStack_70 = (longlong *)0x0;
              local_98 = *plVar32;
              if (local_98 != 0) {
                plVar33 = (longlong *)plVar32[5];
                if ((longlong *)plVar32[5] == (longlong *)0x0) {
                  plVar33 = plVar32 + 2;
                }
                (**(code **)*plVar33)(plVar33,&local_88);
              }
              lVar55 = *(longlong *)(pFVar25 + lVar49 * 0x50 + 0x20);
              lVar54 = *(longlong *)(pFVar25 + lVar49 * 0x50 + 0x20 + 8);
              pFVar2 = pFVar25 + lVar49 * 0x50 + 0x30;
              uVar7 = *(undefined4 *)pFVar2;
              uVar8 = *(undefined4 *)(pFVar2 + 4);
              uVar9 = *(undefined4 *)(pFVar2 + 8);
              uVar10 = *(undefined4 *)(pFVar2 + 0xc);
              uVar11 = *(undefined8 *)(pFVar25 + lVar49 * 0x50 + 0x40);
              plVar32 = *(longlong **)(pFVar25 + lVar49 * 0x50 + 0x40 + 8);
              *(longlong *)(pFVar25 + lVar49 * 0x50 + 0x20) = local_98;
              *(longlong *)(pFVar25 + lVar49 * 0x50 + 0x20 + 8) = lStack_90;
              pFVar2 = pFVar25 + lVar49 * 0x50 + 0x30;
              *(undefined4 *)pFVar2 = (undefined4)local_88;
              *(undefined4 *)(pFVar2 + 4) = local_88._4_4_;
              *(undefined4 *)(pFVar2 + 8) = uStack_80;
              *(undefined4 *)(pFVar2 + 0xc) = uStack_7c;
              pFVar2 = pFVar25 + lVar49 * 0x50 + 0x40;
              *(undefined4 *)pFVar2 = (undefined4)local_78;
              *(undefined4 *)(pFVar2 + 4) = local_78._4_4_;
              *(undefined4 *)(pFVar2 + 8) = (undefined4)uStack_70;
              *(undefined4 *)(pFVar2 + 0xc) = uStack_70._4_4_;
              local_98 = lVar55;
              lStack_90 = lVar54;
              local_88._0_4_ = uVar7;
              local_88._4_4_ = uVar8;
              uStack_80 = uVar9;
              uStack_7c = uVar10;
              local_78 = uVar11;
              uStack_70 = plVar32;
              if (lVar55 != 0) {
                plVar33 = &local_88;
                if (plVar32 != (longlong *)0x0) {
                  plVar33 = plVar32;
                }
                (**(code **)(*plVar33 + 0x10))();
              }
              AddEnqueueCopyPass(local_3c0,*(FRHIGPUBufferReadback **)(pFVar25 + lVar49 * 0x50),
                                 *(FRDGBuffer **)pFVar41,*(uint *)(pFVar25 + lVar49 * 0x50 + 8));
              pFVar25 = local_3b0;
            }
            pFVar41 = pFVar41 + 0x18;
          }
          uVar40 = (ulonglong)local_3f0;
          puVar45 = local_3e8;
        }
        puVar45 = puVar45 + 1;
      }
      if (local_2d0 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_2e0);
      }
      RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_100);
      uVar40 = (ulonglong)local_3c4;
      pFVar41 = local_3e0 + 8;
      piVar34 = local_368;
      plVar32 = local_360;
      pFVar50 = local_3c0;
    }
    FRDGExternalAccessQueue::Submit(&local_328,pFVar50);
    piVar34 = &(pFVar50->PostExecuteCallbacks).ArrayMax;
    local_b8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FComputeGraphTaskWorker::SubmitWork'::`2'::<lambda_4>,1,0>::
                _vftable_;
    uStack_b0 = this;
    local_a0 = (longlong *)0x0;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FComputeGraphTaskWorker::SubmitWork'::__l2::<lambda_4>,void>::
               Call;
    local_a8 = local_358->ExecutionGroupName;
    iVar30 = (pFVar50->PostExecuteCallbacks).ArrayNum;
    if (iVar30 == *piVar34) {
      iVar30 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_>
                         (0x1030,&(pFVar50->PostExecuteCallbacks).AllocatorInstance,piVar34);
    }
    (pFVar50->PostExecuteCallbacks).ArrayNum = iVar30 + 1;
    pTVar35 = (pFVar50->PostExecuteCallbacks).AllocatorInstance.Data + iVar30;
    *(code **)pTVar35 = local_c8;
    *(longlong **)&pTVar35->field_0x28 = local_a0;
    *(undefined4 *)&pTVar35->field_0x10 = (undefined4)local_b8;
    *(undefined4 *)&pTVar35->field_0x14 = local_b8._4_4_;
    *(undefined4 *)&pTVar35->field_0x18 = (undefined4)uStack_b0;
    *(undefined4 *)&pTVar35->field_0x1c = uStack_b0._4_4_;
    *(uint *)&pTVar35->field_0x20 = local_a8.ComparisonIndex.Value;
    *(uint *)&pTVar35->field_0x24 = local_a8.Number;
    if (*(longlong *)pTVar35 == 0) {
      if (local_c8 != (code *)0x0) {
        plVar32 = &local_b8;
        if (local_a0 != (longlong *)0x0) {
          plVar32 = local_a0;
        }
        (**(code **)(*plVar32 + 0x10))();
      }
    }
    else {
      local_c8 = (code *)0x0;
    }
    if ((local_328.Resources.ArrayNum != 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                            ,0x4fe,L"Submit must be called before destruction."), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_138);
  if (local_288 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_298);
  }
  if (bVar56) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
  while( true ) {
    uVar37 = *(uint *)(local_3e0 + 4);
    if ((*piVar34 <= (int)(uVar37 & 0x7fff)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar42 = (*(uint *)(pFVar25 + 4) & 0x7fff) + iVar30;
    pFVar25 = (this->Shaders).AllocatorInstance.Data + (ulonglong)(uVar37 & 0x7fff) * 0x10;
    uVar37 = 0;
    if ((int)uVar42 < *piVar34) {
      uVar37 = ~uVar42 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar41 = (this->Shaders).AllocatorInstance.Data + (longlong)(int)uVar42 * 0x10;
    if (*(longlong *)pFVar41 == *(longlong *)pFVar25) {
      if ((*(longlong *)(pFVar41 + 8) != *(longlong *)(pFVar25 + 8)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Lhs.GetShaderMap() == Rhs.GetShaderMap()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x4b5,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar17 = 1;
    }
    else {
      bVar17 = 0;
    }
    iVar30 = iVar30 + 1;
    bVar16 = (bool)(bVar16 & bVar17);
    if (!bVar16) break;
LAB_1494d8a38:
    pFVar25 = local_3e0;
    if ((int)uVar20 <= iVar30) {
      *(uint *)(local_3e0 + 4) = *(uint *)(local_3e0 + 4) | 0x8000;
      iVar30 = *piVar34;
      uVar37 = (*(uint *)(local_3e0 + 4) & 0x7fff) + 1;
      if (iVar30 < (int)uVar37) {
        iVar21 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar37 - iVar30,&(this->Shaders).AllocatorInstance,piVar34,
                            piVar53);
        DefaultConstructItems<TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable>,int>
                  ((this->Shaders).AllocatorInstance.Data + (longlong)iVar21 * 0x10,uVar37 - iVar30)
        ;
        break;
      }
      if (iVar30 <= (int)uVar37) break;
      iVar30 = iVar30 - uVar37;
      if (iVar30 < 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar16) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else if (iVar30 == 0) break;
      pFVar25 = (this->Shaders).AllocatorInstance.Data + (ulonglong)uVar37 * 0x10;
      iVar21 = (*piVar34 - uVar37) - iVar30;
      if (iVar21 != 0) {
        memmove(pFVar25,pFVar25 + (longlong)iVar30 * 0x10,(longlong)iVar21 << 4);
      }
      *piVar34 = *piVar34 - iVar30;
      break;
    }
  }
LAB_1494d882f:
  pTVar39 = &this->PermutationIds;
  if (pTVar39 != (TArray<int,TSizedDefaultAllocator<32>_> *)&local_398) {
    pFVar25 = (pTVar39->AllocatorInstance).Data;
    if (pFVar25 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar25);
    }
    (pTVar39->AllocatorInstance).Data = local_398.Data;
    (this->PermutationIds).ArrayNum = (int)local_390;
    (this->PermutationIds).ArrayMax = local_390._4_4_;
    local_390 = 0;
    local_398.Data = (FScriptContainerElement *)0x0;
  }
  if (local_398.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data);
  }
  piVar13 = local_368;
  pFVar25 = local_3b8;
  uVar37 = local_3c4;
  local_380 = local_380 + 1;
  uVar36 = uVar36 + 1;
  pFVar52 = local_3d8;
  pFVar41 = local_3b0;
  lVar49 = local_3d0;
  if (local_428 == 0) goto code_r0x0001494d88a9;
  goto LAB_1494d827c;
code_r0x0001494d88a9:
  iVar30 = *local_368;
  if (iVar30 < (int)local_3c4) {
    iVar30 = local_3c4 - iVar30;
    iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,iVar30,(ForAnyElementType *)local_3b8,local_368,(int *)local_3b0);
    DefaultConstructItems<FComputeGraphTaskWorker::FSubmitDescription,int>
              (((ForAnyElementType *)&pFVar25->field_0x0)->Data + (longlong)iVar21 * 8,iVar30);
  }
  else {
    if ((int)local_3c4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_3c4);
    }
    if ((int)local_3c4 < iVar30) {
      uVar36 = iVar30 - local_3c4;
      if (((int)(local_3c4 | uVar36) < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar36 != 0) {
        pFVar25 = ((ForAnyElementType *)&local_3b8->field_0x0)->Data + (longlong)(int)uVar37 * 8;
        iVar30 = (*piVar13 - uVar36) - uVar37;
        if (iVar30 != 0) {
          memmove(pFVar25,pFVar25 + (longlong)(int)uVar36 * 8,(longlong)iVar30 << 3);
        }
        *piVar13 = *piVar13 - uVar36;
      }
    }
  }
  uVar36 = local_3f0;
  iVar30 = *piVar34;
  if (iVar30 < (int)local_3f0) {
    iVar30 = local_3f0 - iVar30;
    iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar30,&(this->Shaders).AllocatorInstance,piVar34,piVar53);
    DefaultConstructItems<TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable>,int>
              ((this->Shaders).AllocatorInstance.Data + (longlong)iVar21 * 0x10,iVar30);
  }
  else {
    if ((int)local_3f0 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_3f0);
    }
    if ((int)local_3f0 < iVar30) {
      uVar37 = iVar30 - local_3f0;
      if (((int)(local_3f0 | uVar37) < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar37 != 0) {
        pFVar25 = (this->Shaders).AllocatorInstance.Data + (longlong)(int)uVar36 * 0x10;
        iVar30 = (*piVar34 - uVar37) - uVar36;
        if (iVar30 != 0) {
          memmove(pFVar25,pFVar25 + (longlong)(int)uVar37 * 0x10,(longlong)iVar30 << 4);
        }
        *piVar34 = *piVar34 - uVar37;
      }
    }
  }
  lVar49 = local_3d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_3d0 + 0x30),&local_150
            );
  if ((*(int *)(lVar49 + 0x40) != 0) &&
     (plVar32 = *(longlong **)(lVar49 + 0x38), plVar32 != (longlong *)0x0)) {
    (**(code **)(*plVar32 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_150);
LAB_1494d8e89:
  local_3f8 = local_3f8 + 1;
  local_3e8 = (uint *)((longlong)local_3e8 + 1);
  iVar30 = (int)local_360[1];
  piVar34 = local_368;
  pFVar50 = local_3c0;
  pFVar25 = local_3b8;
  if (iVar30 <= (int)local_3f8) goto LAB_1494d8ec1;
  goto LAB_1494d81a1;
}

// UpdateReadbacks @ 1494daa20

void __thiscall FComputeGraphTaskWorker::UpdateReadbacks(FComputeGraphTaskWorker *this)

{
  FRHIGPUBufferReadback *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  TArray<FComputeGraphTaskWorker::FAsyncReadback,TSizedDefaultAllocator<32>_> *this_01;
  uint uVar12;
  bool bVar13;
  uint local_res18 [2];
  void *local_res20;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId388,"ComputeFramework::UpdateReadbacks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraphWorker.cpp"
               ,0x184);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId388);
  }
  uVar10 = (this->ActiveAsyncReadbacks).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    this_01 = &this->ActiveAsyncReadbacks;
    lVar11 = (longlong)(int)uVar10 * 0x50;
    do {
      uVar12 = ~uVar10 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar10 < (this->ActiveAsyncReadbacks).ArrayNum) {
        uVar5 = uVar12;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FRHIGPUBufferReadback **)((this_01->AllocatorInstance).Data + lVar11);
      uVar5 = 0;
      if ((int)uVar10 < (this->ActiveAsyncReadbacks).ArrayNum) {
        uVar5 = uVar12;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)((this_01->AllocatorInstance).Data + lVar11 + 8);
      if (this_00 == (FRHIGPUBufferReadback *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7505322987457872267>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraphWorker.cpp"
                           ,0x18b,"Request");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else if ((this_00->_padding_ == 0) ||
              ((*(int *)(this_00->_padding_ + 0x18) == 0 &&
               (cVar4 = (**(code **)(*(longlong *)this_00->_padding_ + 0x20))(), cVar4 != '\0')))) {
        pvVar7 = FRHIGPUBufferReadback::Lock(this_00,uVar5);
        if (pvVar7 == (void *)0x0) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7505322987457872271>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraphWorker.cpp"
                             ,399,"ReadbackData");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          uVar6 = 0;
          if ((int)uVar10 < (this->ActiveAsyncReadbacks).ArrayNum) {
            uVar6 = uVar12;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this_01->AllocatorInstance).Data;
          local_res18[0] = uVar5;
          local_res20 = pvVar7;
          UE::Core::Private::Function::CheckCallable(*(void **)(pFVar1 + lVar11 + 0x20));
          pcVar2 = *(code **)(pFVar1 + lVar11 + 0x20);
          pFVar9 = pFVar1 + lVar11 + 0x30;
          if (*(FScriptContainerElement **)(pFVar1 + lVar11 + 0x48) !=
              (FScriptContainerElement *)0x0) {
            pFVar9 = *(FScriptContainerElement **)(pFVar1 + lVar11 + 0x48);
          }
          uVar8 = (**(code **)(*(longlong *)pFVar9 + 8))();
          (*pcVar2)(uVar8,&local_res20,local_res18);
        }
        uVar5 = 0;
        if ((int)uVar10 < (this->ActiveAsyncReadbacks).ArrayNum) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FComputeGraphTaskWorker::FAsyncReadback,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(this_01,uVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,&this_01->AllocatorInstance,(this->ActiveAsyncReadbacks).ArrayNum,
                   &(this->ActiveAsyncReadbacks).ArrayMax);
      }
      lVar11 = lVar11 + -0x50;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  if (!bVar13) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

