// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// operator() @ 145cd36c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`RHIValidation::FOperation::Replay'::__l4::<lambda_6>::operator()
          (void *this,FSubresourceState *param_1,FSubresourceIndex *param_2)

{
  char cVar1;
  char cVar2;
  FResource *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  FString local_38;
  FString local_28;
  
  pFVar3 = *(FResource **)(*(longlong *)this + 8);
  cVar1 = *(char *)(*(longlong *)this + 0x28);
  cVar2 = **(char **)((longlong)this + 8);
  if (pFVar3->LoggingMode != None) {
    ::FString::PrintfImpl(&local_38,L"Allow: %s");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar4.Data = local_38.Data.AllocatorInstance.Data;
    }
    RHIValidation::Log(pFVar3,param_2,(void *)0x0,(wchar_t *)0x0,L"UAVOverlap",(wchar_t *)FVar4.Data
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((cVar2 == '\x01') || (lVar5 = 0x4c, cVar2 != '\x02')) {
    lVar5 = 0x24;
  }
  if ((&(param_1->LastTransitionFences).field_0x0)[lVar5] == cVar1) {
    if (((param_2->MipIndex == -1) && (param_2->ArraySlice == -1)) && (param_2->PlaneIndex == -1)) {
      ::FString::PrintfImpl(&local_38,L"\"%s\" (0x%p) (Whole Resource)");
    }
    else {
      ::FString::PrintfImpl(&local_38,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
    }
    ::FString::PrintfImpl
              (&local_28,
               L"RHI validation failed: UAV overlap mismatch:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nMismatched call to %sUAVOverlap(FRHIUnorderedAccessView*) for the resource %s.\n\n    --- Ensure all calls to RHICmdList.BeginUAVOverlap() are paired with a call to RHICmdList.EndUAVOverlap().\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar4.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  (&(param_1->LastTransitionFences).field_0x0)[lVar5] = cVar1;
  return;
}

// AllocStringCopy @ 145cd4b80

void __cdecl RHIValidation::FOperation::AllocStringCopy(wchar_t **param_1,wchar_t *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  size_t sVar3;
  ulong64 uVar4;
  wchar_t *_Dst;
  
  sVar3 = wcslen(param_2);
  iVar2 = (int)sVar3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(iVar2 + 1);
  uVar4 = SUB168(ZEXT816(2) * auVar1,0);
  if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  _Dst = operator_new__(uVar4);
  *param_1 = _Dst;
  memcpy(_Dst,param_2,(longlong)iVar2 * 2);
  (*param_1)[iVar2] = L'\0';
  return;
}

// Replay @ 145cef900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall RHIValidation::FOperation::Replay(FOperation *this,FOpQueueState *param_1)

{
  EStatus *pEVar1;
  ulonglong uVar2;
  char cVar3;
  FRHIBreadcrumbNode *pFVar4;
  FResource *pFVar5;
  wchar_t *pwVar6;
  code *pcVar7;
  longlong *plVar8;
  byte bVar9;
  bool bVar10;
  undefined1 uVar11;
  FRHIBreadcrumbNode *pFVar12;
  byte bVar13;
  longlong lVar14;
  FRHIBreadcrumbNode *pFVar15;
  ForAnyElementType FVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint *puVar21;
  TFunctionRef<void___cdecl(RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&)>
  *pTVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined1 auStackY_298 [32];
  undefined1 local_257;
  undefined1 local_256;
  <lambda_1> local_255;
  FSubresourceIndex local_254;
  FSubresourceRange local_248;
  undefined8 local_230;
  int local_228;
  FString local_220;
  FString local_210;
  longlong *local_200;
  uint uStack_1f8;
  uint uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *local_1f0;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  uint local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  longlong *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  FOperation *local_1a0;
  FOpQueueState *local_198;
  code *local_190;
  FOperation **local_188;
  FOperation *local_180;
  FOpQueueState *local_178;
  code *local_170;
  FOperation **local_168;
  FOperation *local_160;
  FOpQueueState *local_158;
  code *local_150;
  FOperation **local_148;
  FOperation *local_140;
  FOpQueueState *local_138;
  code *local_130;
  FOperation **local_128;
  FOperation *local_120;
  FOpQueueState *local_118;
  code *local_110;
  FOperation **local_108;
  FOuter local_100;
  FString local_e8;
  FString local_d8;
  FString local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  switch(this->Type) {
  case BeginTransition:
    local_188 = &local_1a0;
    pTVar22 = (TFunctionRef<void___cdecl(RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&)>
               *)&local_190;
    local_190 = UE::Core::Private::Function::
                TFunctionRefCaller<`RHIValidation::FOperation::Replay'::__l4::<lambda_2>,void,RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&>
                ::Call;
    bVar10 = true;
    local_1a0 = this;
    local_198 = param_1;
    goto LAB_145cf04ef;
  case EndTransition:
    local_168 = &local_180;
    pTVar22 = (TFunctionRef<void___cdecl(RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&)>
               *)&local_170;
    local_170 = UE::Core::Private::Function::
                TFunctionRefCaller<`RHIValidation::FOperation::Replay'::__l4::<lambda_3>,void,RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&>
                ::Call;
    local_180 = this;
    local_178 = param_1;
    goto LAB_145cf04ec;
  case SetTrackedAccess:
    pFVar5 = (this->field1_0x8).Data_BeginTransition.Identity.Resource;
    local_148 = &local_160;
    local_150 = UE::Core::Private::Function::
                TFunctionRefCaller<`RHIValidation::FOperation::Replay'::__l116::<lambda_4>,void,RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&>
                ::Call;
    local_248.NumMips = pFVar5->NumMips;
    local_248.NumArraySlices = pFVar5->NumArraySlices;
    local_248.NumPlanes = pFVar5->NumPlanes;
    local_248.MipIndex = 0;
    local_248.ArraySlice = 0;
    local_248.PlaneIndex = 0;
    local_160 = this;
    local_158 = param_1;
    FResource::EnumerateSubresources
              (pFVar5,&local_248,
               (TFunctionRef<void___cdecl(RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&)>
                *)&local_150,false);
    pFVar5 = (this->field1_0x8).Data_BeginTransition.Identity.Resource;
    if (pFVar5->LoggingMode != None) {
      GetRHIPipelineName(local_c8,param_1->Pipeline);
      GetRHIPipelineName(&local_d8,*(ERHIPipeline *)((longlong)&this->field1_0x8 + 0xc));
      GetRHIAccessName(&local_e8,(this->field1_0x8).Data_SetTrackedAccess.State.Access);
      ::FString::PrintfImpl(&local_220,L"Access: (%s), Pipelines: (%s), Executing Pipeline: (%s)");
      local_254.MipIndex = -1;
      local_254.ArraySlice = -1;
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_220.Data.ArrayNum != 0) {
        FVar16.Data = local_220.Data.AllocatorInstance.Data;
      }
      local_254.PlaneIndex = -1;
      RHIValidation::Log(pFVar5,&local_254,(void *)0x0,L"SetTrackedAccess",L"SetTrackedAccess",
                         (wchar_t *)FVar16.Data);
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
      }
    }
    pFVar5->TrackedState =
         *(FState *)&(this->field1_0x8).Data_BeginTransition.Identity.SubresourceRange;
    FResource::ReleaseOpRef(pFVar5);
    break;
  case AliasingOverlap:
    FTransientState::AliasingOverlap
              ((this->field1_0x8).Data_BeginTransition.Identity.Resource,
               *(FResource **)&(this->field1_0x8).Data_BeginTransition.Identity.SubresourceRange,
               (this->field1_0x8).Data_AliasingOverlap.CreateBacktrace);
    FResource::ReleaseOpRef((this->field1_0x8).Data_BeginTransition.Identity.Resource);
    FResource::ReleaseOpRef
              (*(FResource **)&(this->field1_0x8).Data_BeginTransition.Identity.SubresourceRange);
    break;
  case AcquireTransient:
    pFVar5 = (this->field1_0x8).Data_BeginTransition.Identity.Resource;
    FTransientState::Acquire
              (&pFVar5->TransientState,pFVar5,
               (this->field1_0x8).Data_AcquireTransient.CreateBacktrace,param_1->Pipeline);
    FResource::ReleaseOpRef((this->field1_0x8).Data_BeginTransition.Identity.Resource);
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                        ,0xaa4,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    break;
  case InitTransient:
    pFVar5 = (this->field1_0x8).Data_BeginTransition.Identity.Resource;
    pwVar6 = (this->field1_0x8).Data_InitTransient.DebugName;
    pEVar1 = &(pFVar5->TransientState).Status;
    if ((((pFVar5->TransientState).bTransient == false) || (*pEVar1 == Acquired)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TransientState.bTransient && TransientState.Status != FTransientState::EStatus::Acquired"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0x8f2,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    *pEVar1 = None;
    ::FString::operator=(&pFVar5->DebugName,pwVar6);
    bVar9 = 3;
    do {
      bVar13 = bVar9 & ~bVar9 + 1;
      if ((bVar13 == 1) || (bVar13 != 2)) {
        lVar14 = 0xc;
        lVar23 = 8;
        lVar18 = 0;
      }
      else {
        lVar14 = 0x34;
        lVar23 = 0x30;
        lVar18 = 0x28;
      }
      *(undefined4 *)(&(pFVar5->WholeResourceState).States.field_0x0 + lVar23) = 0x40000;
      (&(pFVar5->WholeResourceState).States.field_0x0)[lVar14] = bVar13;
      *(undefined8 *)(&(pFVar5->WholeResourceState).States.field_0x0 + lVar18) =
           *(undefined8 *)(&(pFVar5->WholeResourceState).States.field_0x0 + lVar23);
      bVar9 = bVar9 & ~(~bVar9 + 1);
    } while (bVar9 != 0);
    (pFVar5->SubresourceStates).ArrayNum = 0;
    if ((pFVar5->SubresourceStates).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&(pFVar5->SubresourceStates).AllocatorInstance,0,
                 &(pFVar5->SubresourceStates).ArrayMax);
    }
    operator_delete__((this->field1_0x8).Data_AcquireTransient.CreateBacktrace);
    FResource::ReleaseOpRef((this->field1_0x8).Data_BeginTransition.Identity.Resource);
    break;
  case Assert:
    local_128 = &local_140;
    pTVar22 = (TFunctionRef<void___cdecl(RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&)>
               *)&local_130;
    local_130 = UE::Core::Private::Function::
                TFunctionRefCaller<`RHIValidation::FOperation::Replay'::__l4::<lambda_5>,void,RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&>
                ::Call;
    local_140 = this;
    local_138 = param_1;
    goto LAB_145cf04ec;
  case Rename:
    FResource::SetDebugName
              ((this->field1_0x8).Data_BeginTransition.Identity.Resource,
               (this->field1_0x8).Data_InitTransient.DebugName,(this->field1_0x8).Data_Rename.Suffix
              );
    operator_delete__((this->field1_0x8).Data_AcquireTransient.CreateBacktrace);
    FResource::ReleaseOpRef((this->field1_0x8).Data_BeginTransition.Identity.Resource);
    break;
  case Signal:
    if ((*(ERHIPipeline *)
          ((longlong)&((this->field1_0x8).Data_BeginTransition.Identity.Resource)->NumMips + 1) !=
         param_1->Pipeline) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Data_Signal.Fence->SrcPipe == Queue.Pipeline",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xb48,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    *(undefined1 *)&((this->field1_0x8).Data_BeginTransition.Identity.Resource)->NumMips = 1;
    param_1->FenceValue = param_1->FenceValue + 1;
    ((this->field1_0x8).Data_BreadcrumbRange.Range.First)->Parent =
         (FRHIBreadcrumbNode *)param_1->FenceValue;
    break;
  case Wait:
    pFVar4 = (this->field1_0x8).Data_BreadcrumbRange.Range.First;
    if ((*(ERHIPipeline *)((longlong)&pFVar4->_padding_ + 2) != param_1->Pipeline) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Fence->DstPipe == Queue.Pipeline",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xb50,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    if ((char)pFVar4->_padding_ == '\0') {
      return false;
    }
    cVar3 = *(char *)((longlong)&pFVar4->_padding_ + 1);
    if ((cVar3 == '\x01') || (cVar3 != '\x02')) {
      pFVar15 = *(FRHIBreadcrumbNode **)&param_1->MaxAwaitedFenceValues;
      if (*(FRHIBreadcrumbNode **)&param_1->MaxAwaitedFenceValues < pFVar4->Parent) {
        pFVar15 = pFVar4->Parent;
      }
      if ((cVar3 == '\x01') || (cVar3 != '\x02')) {
        lVar18 = 0x10;
      }
      else {
        lVar18 = 0x18;
      }
    }
    else {
      pFVar15 = *(FRHIBreadcrumbNode **)&(param_1->MaxAwaitedFenceValues).field_0x8;
      lVar18 = 0x18;
      if (pFVar15 < pFVar4->Parent) {
        pFVar15 = pFVar4->Parent;
      }
    }
    *(FRHIBreadcrumbNode **)(&param_1->Pipeline + lVar18) = pFVar15;
    ::operator_delete(pFVar4,0x10);
    break;
  case AllUAVsOverlap:
    if (param_1->bAllowAllUAVsOverlap == (this->field1_0x8).Data_AllUAVsOverlap.bAllow) {
      ::FString::PrintfImpl
                (&local_210,
                 L"RHI validation failed: UAV overlap mismatch:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nMismatched call to %sUAVOverlap.\n\n    --- Ensure all calls to RHICmdList.BeginUAVOverlap() are paired with a call to RHICmdList.EndUAVOverlap().\n\n\n--------------------------------------------------------------------\n\n\n"
                );
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_210.Data.ArrayNum != 0) {
        FVar16.Data = local_210.Data.AllocatorInstance.Data;
      }
      FValidationRHI::ReportValidationFailure((wchar_t *)FVar16.Data);
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
    }
    param_1->bAllowAllUAVsOverlap = (this->field1_0x8).Data_AllUAVsOverlap.bAllow;
    break;
  case SpecificUAVOverlap:
    local_108 = &local_120;
    pTVar22 = (TFunctionRef<void___cdecl(RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&)>
               *)&local_110;
    local_110 = UE::Core::Private::Function::
                TFunctionRefCaller<`RHIValidation::FOperation::Replay'::__l4::<lambda_6>,void,RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&>
                ::Call;
    local_120 = this;
    local_118 = param_1;
LAB_145cf04ec:
    bVar10 = false;
LAB_145cf04ef:
    FResource::EnumerateSubresources
              ((this->field1_0x8).Data_BeginTransition.Identity.Resource,
               &(this->field1_0x8).Data_BeginTransition.Identity.SubresourceRange,pTVar22,bVar10);
    FResource::ReleaseOpRef((this->field1_0x8).Data_BeginTransition.Identity.Resource);
    break;
  case BeginBreadcrumbGPU:
    pFVar4 = (this->field1_0x8).Data_BreadcrumbRange.Range.First;
    if (((pFVar4 == (FRHIBreadcrumbNode *)0x0) || (pFVar4 == FRHIBreadcrumbNode::Sentinel)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Node && Node != FRHIBreadcrumbNode::Sentinel",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xaac,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    if ((pFVar4->Parent == FRHIBreadcrumbNode::Sentinel) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Node->GetParent() != FRHIBreadcrumbNode::Sentinel",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xaad,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    if ((pFVar4->Parent != (param_1->Breadcrumbs).Current) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Node->GetParent() == Queue.Breadcrumbs.Current",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xaae,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    if (((GRHICommandList.bLatchedBypass == false) &&
        (bVar10 = IsInRange(&(param_1->Breadcrumbs).Range,pFVar4,param_1->Pipeline), !bVar10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("GRHICommandList.Bypass() || IsInRange(Queue.Breadcrumbs.Range, Node, Queue.Pipeline)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xaaf,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    if ((((byte)pFVar4->BeginPipes & param_1->Pipeline) != param_1->Pipeline) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("EnumHasAllFlags(static_cast<ERHIPipeline>(Node->BeginPipes.load()), Queue.Pipeline)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xab0,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    LogNode(pFVar4,true,param_1->Pipeline);
    (param_1->Breadcrumbs).Current = pFVar4;
    break;
  case EndBreadcrumbGPU:
    pFVar4 = (this->field1_0x8).Data_BreadcrumbRange.Range.First;
    if (((pFVar4 == (FRHIBreadcrumbNode *)0x0) || (pFVar4 == FRHIBreadcrumbNode::Sentinel)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Node && Node != FRHIBreadcrumbNode::Sentinel",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xabc,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    if ((pFVar4->Parent == FRHIBreadcrumbNode::Sentinel) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Node->GetParent() != FRHIBreadcrumbNode::Sentinel",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xabd,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    if ((pFVar4 != (param_1->Breadcrumbs).Current) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Node == Queue.Breadcrumbs.Current",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xabe,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    if (((GRHICommandList.bLatchedBypass == false) &&
        (bVar10 = IsInRange(&(param_1->Breadcrumbs).Range,pFVar4,param_1->Pipeline), !bVar10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("GRHICommandList.Bypass() || IsInRange(Queue.Breadcrumbs.Range, Node, Queue.Pipeline)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xabf,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    if ((((byte)pFVar4->EndPipes & param_1->Pipeline) != param_1->Pipeline) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("EnumHasAllFlags(static_cast<ERHIPipeline>(Node->EndPipes.load()), Queue.Pipeline)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xac0,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    LogNode(pFVar4,false,param_1->Pipeline);
    (param_1->Breadcrumbs).Current = pFVar4->Parent;
    break;
  case SetBreadcrumbRange:
    pFVar4 = *(FRHIBreadcrumbNode **)
              &(this->field1_0x8).Data_BeginTransition.Identity.SubresourceRange;
    uVar20 = 0;
    (param_1->Breadcrumbs).Range.First =
         (FRHIBreadcrumbNode *)(this->field1_0x8).Data_BeginTransition.Identity.Resource;
    (param_1->Breadcrumbs).Range.Last = pFVar4;
    if ((((param_1->Breadcrumbs).Range.First == (FRHIBreadcrumbNode *)0x0) !=
         ((param_1->Breadcrumbs).Range.Last == (FRHIBreadcrumbNode *)0x0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Queue.Breadcrumbs.Range.First == !Queue.Breadcrumbs.Range.Last",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0xacb,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    FRHIBreadcrumbRange::Enumerate(&(param_1->Breadcrumbs).Range,&local_100,param_1->Pipeline);
    pFVar4 = local_100.Range.First;
    while (pFVar4 != (FRHIBreadcrumbNode *)0x0) {
      TSet<FRHIBreadcrumbAllocator_*,DefaultKeyFuncs<FRHIBreadcrumbAllocator_*,0>,FDefaultSetAllocator>
      ::Emplace<FRHIBreadcrumbAllocator_*_const_&>
                ((TSet<FRHIBreadcrumbAllocator_*,DefaultKeyFuncs<FRHIBreadcrumbAllocator_*,0>,FDefaultSetAllocator>
                  *)local_98,(FRHIBreadcrumbAllocator **)&local_230,(bool *)&pFVar4->Allocator);
      pFVar12 = FRHIBreadcrumbNode::Sentinel;
      pFVar15 = pFVar4;
      do {
        if ((pFVar15 == pFVar12) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Other != FRHIBreadcrumbNode::Sentinel",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                                ,0xad5,L""), pFVar12 = FRHIBreadcrumbNode::Sentinel, bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        if ((pFVar15->Parent == pFVar12) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Other->GetParent() != FRHIBreadcrumbNode::Sentinel",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                                ,0xad6,L""), pFVar12 = FRHIBreadcrumbNode::Sentinel, bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        pFVar15 = pFVar15->Parent;
      } while (pFVar15 != (FRHIBreadcrumbNode *)0x0);
      if (pFVar4 == local_100.Range.Last) break;
      if ((local_100.Pipeline == Graphics) || (lVar18 = 0x20, local_100.Pipeline != AsyncCompute)) {
        lVar18 = 0x18;
      }
      pFVar4 = *(FRHIBreadcrumbNode **)((longlong)(pFVar4->NextPtrs).Elements + lVar18 + -0x18);
      if ((pFVar4 == (FRHIBreadcrumbNode *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Next",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                              ,0x25e,
                              L"Nullptr \'Next\' breadcrumb found before reaching the \'Last\' breadcrumb in the range. (First: 0x%p, Last: 0x%p, Current: 0x%p)"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    uVar24 = local_70;
    uStack_1f4 = 1;
    uStack_1e4 = uVar20;
    local_1e0 = uVar20;
    if (local_70 != 0) {
      puVar21 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar21 = local_78;
      }
      uVar25 = *puVar21;
      local_1e0 = 0;
      uVar20 = 0;
      while (uVar25 == 0) {
        lVar18 = (longlong)(int)uVar20;
        local_1e0 = local_1e0 + 0x20;
        uVar20 = uVar20 + 1;
        uStack_1e4 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
        goto LAB_145cefde4;
        uVar25 = puVar21[lVar18 + 1];
      }
      uStack_1f4 = -uVar25 & uVar25;
      uVar2 = (ulonglong)uStack_1f4 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_230._4_4_ = (int)lVar18;
      uStack_1e4 = (local_1e0 - 1) + local_230._4_4_;
      if ((int)local_70 < (int)uStack_1e4) {
        uStack_1e4 = local_70;
      }
    }
LAB_145cefde4:
    local_200 = (longlong *)local_98;
    uStack_1dc = local_9c;
    local_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar25 = local_70 & 0xffffffe0;
    iStack_1d8 = local_98._8_4_ - local_64;
    uStack_1e8 = 0xffffffff;
    TStack_1c8.CurrentBitIndex = uStack_1e4;
    TStack_1c8.UnvisitedBitMask = 0xffffffff;
    TStack_1c8._padding_ = CONCAT44(uStack_1f4,uVar20);
    iVar17 = (int)local_70 >> 5;
    TStack_1c8._28_4_ = local_9c;
    TStack_1c8.BaseBitIndex = local_1e0;
    uStack_1a8 = CONCAT44(uStack_1d4,iStack_1d8);
    bVar9 = (byte)local_70;
    uStack_1f8 = uVar20;
    local_1d0 = local_200;
    TStack_1c8.Array = local_1f0;
    if (((int)local_70 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    if (uVar24 != local_70) {
      puVar21 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar21 = local_78;
      }
      uVar20 = -1 << (bVar9 & 0x1f) & puVar21[iVar17];
      while (uVar20 == 0) {
        lVar18 = (longlong)iVar17;
        uVar25 = uVar25 + 0x20;
        iVar17 = iVar17 + 1;
        uVar24 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_145cefef5;
        uVar20 = puVar21[lVar18 + 1];
      }
      uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_228 = (int)lVar18;
      uVar24 = (uVar25 - 1) + local_228;
      if ((int)local_70 < (int)uVar24) {
        uVar24 = local_70;
      }
    }
LAB_145cefef5:
    while( true ) {
      plVar8 = local_1d0;
      if ((int)local_1d0[1] - *(int *)((longlong)local_1d0 + 0x34) != (int)uStack_1a8) {
        local_257 = 0;
        `TSparseArray<TSparseSetElement<FRHIBreadcrumbAllocator_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_257);
      }
      if (((TStack_1c8.CurrentBitIndex == uVar24) &&
          (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar8 == (longlong *)local_98)) break;
      lVar18 = *(longlong *)(*plVar8 + (longlong)TStack_1c8.CurrentBitIndex * 0x10);
      if ((*(char *)(lVar18 + 0x68) != '\0') &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Current->bVisited",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                              ,0xadf,L"Circular reference detected in breadcrumb allocators."),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      *(undefined1 *)(lVar18 + 0x68) = 1;
      puVar19 = (undefined8 *)(lVar18 + 0x38);
      iVar17 = *(int *)(lVar18 + 0x60);
      if (*(undefined8 **)(lVar18 + 0x58) != (undefined8 *)0x0) {
        puVar19 = *(undefined8 **)(lVar18 + 0x58);
      }
      puVar26 = puVar19 + (longlong)iVar17 * 2;
      while( true ) {
        if (*(int *)(lVar18 + 0x60) != iVar17) {
          local_256 = 0;
          `TCheckedPointerIterator<TSharedRef<FRHIBreadcrumbAllocator,1>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_256);
        }
        if (puVar19 == puVar26) break;
        `RHIValidation::FOperation::Replay'::__l115::<lambda_1>::
        operator()<_RHIValidation::FOperation::Replay_::__l115::<lambda_1>_>
                  (&local_255,(FRHIBreadcrumbAllocator *)*puVar19,&local_255);
        puVar19 = puVar19 + 2;
      }
      *(undefined1 *)(lVar18 + 0x68) = 0;
      TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<FRHIBreadcrumbAllocator_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FRHIBreadcrumbAllocator_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FRHIBreadcrumbAllocator_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  return true;
}

