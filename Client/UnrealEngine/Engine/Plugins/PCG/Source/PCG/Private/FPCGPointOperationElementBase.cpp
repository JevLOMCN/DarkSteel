// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// ExecutionLoopMode @ 149b11bc0

EPCGElementExecutionLoopMode __thiscall
FPCGPointOperationElementBase::ExecutionLoopMode
          (FPCGPointOperationElementBase *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// GetPropertiesToAllocate @ 149b18890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGPointNativeProperties __thiscall
FPCGPointOperationElementBase::GetPropertiesToAllocate
          (FPCGPointOperationElementBase *this,FPCGContext *param_1)

{
  return All;
}

// ShouldCopyPoints @ 149b2cdf0

bool __thiscall FPCGPointOperationElementBase::ShouldCopyPoints(FPCGPointOperationElementBase *this)

{
  return false;
}

// operator() @ 149bf1250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGPointOperationElementBase::PreparePointOperationData'::__l2::<lambda_1>::operator()
          (void *this,IterationState *param_1,FEmptyStruct *param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  FPCGContext *pFVar4;
  longlong lVar5;
  code *pcVar6;
  FObjectPtr_u_0 this_00;
  bool bVar7;
  EPCGTimeSliceInitResult EVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  UClass *pUVar13;
  UPCGBasePointData *pUVar14;
  FText *pFVar15;
  UPCGPointData *pUVar16;
  FPCGTaggedData *pFVar17;
  bool bVar18;
  undefined1 auStack_138 [32];
  FObjectPtr_u_0 local_e8;
  longlong local_e0;
  FText local_d8;
  FText local_c8;
  TVector<double>_u_0 local_b8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_87;
  undefined2 local_83;
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId36,
               "FPCGPointOperationElementBase::InitializePerIterationStates",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointOperationElementBase.cpp"
               ,0x24);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId36);
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x18);
  uVar11 = 0;
  if ((int)param_3 < (int)plVar2[1]) {
    uVar11 = ~param_3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    EVar8 = (*pcVar6)();
    return EVar8;
  }
  local_e0 = (longlong)(int)param_3 * 0x78;
  pFVar17 = (FPCGTaggedData *)(*plVar2 + local_e0);
  if ((((FPCGTaggedData *)pFVar3->Data <= pFVar17) &&
      (pFVar17 < (FPCGTaggedData *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    EVar8 = (*pcVar6)();
    return EVar8;
  }
  iVar10 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar10 + 1;
  pFVar17 = FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)(pFVar3->Data + (longlong)iVar10 * 0x78),pFVar17);
  plVar2 = *(longlong **)((longlong)this + 0x10);
  uVar11 = 0;
  if ((int)param_3 < (int)plVar2[1]) {
    uVar11 = ~param_3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    EVar8 = (*pcVar6)();
    return EVar8;
  }
  local_e8 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(local_e0 + *plVar2))->Handle;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149bf1432:
    if ((UPCGSpatialData *)local_e8.Handle == (UPCGSpatialData *)0x0) goto LAB_149bf1644;
    pUVar13 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_e8,pUVar13);
    this_00 = local_e8;
    if ((!bVar7) || ((UPCGSpatialData *)local_e8.Handle == (UPCGSpatialData *)0x0))
    goto LAB_149bf1644;
    cVar9 = (**(code **)(**(longlong **)this + 0xb0))
                      (*(longlong **)this,**(undefined8 **)((longlong)this + 8));
    if (cVar9 == '\0') {
      local_50 = 0;
      local_4f = 0;
      local_4b = 0;
      local_49 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      pUVar14 = (UPCGBasePointData *)
                (**(code **)(*(longlong *)this_00.Handle + 0x3b0))
                          (this_00.Handle,**(undefined8 **)((longlong)this + 8));
    }
    else {
      local_88 = 0;
      local_87 = 0;
      local_83 = 0;
      local_81 = 0;
      local_b8._s_0.X = 0.0;
      local_b8._s_0.Y = 0.0;
      local_b8._s_0.Z = 0.0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      pUVar14 = UPCGSpatialData::ToBasePointData
                          ((UPCGSpatialData *)this_00.Handle,
                           (FPCGContext *)**(undefined8 **)((longlong)this + 8),
                           (TBox<double> *)&local_b8._s_0);
    }
    param_1->InputData = pUVar14;
    if (pUVar14 != (UPCGBasePointData *)0x0) {
      iVar10 = (**(code **)(pUVar14->_padding_ + 0x488))();
      param_1->NumPoints = iVar10;
      cVar9 = (**(code **)(**(longlong **)this + 0xb0))
                        (*(longlong **)this,**(undefined8 **)((longlong)this + 8));
      if (cVar9 == '\0') {
        pUVar16 = FPCGContext::NewObject_AnyThread<UPCGPointData>
                            ((FPCGContext *)**(undefined8 **)((longlong)this + 8));
      }
      else {
        pUVar16 = (UPCGPointData *)
                  FPCGContext::NewPointData_AnyThread
                            ((FPCGContext *)**(undefined8 **)((longlong)this + 8));
      }
      param_1->OutputData = (UPCGBasePointData *)pUVar16;
      UPCGSpatialData::InitializeFromData
                ((UPCGSpatialData *)pUVar16,(UPCGSpatialData *)param_1->InputData,
                 (UPCGMetadata *)0x0,true,true);
      (**(code **)(param_1->OutputData->_padding_ + 0x490))
                (param_1->OutputData,param_1->NumPoints,0);
      uVar11 = (**(code **)(**(longlong **)this + 0xb8))
                         (*(longlong **)this,**(undefined8 **)((longlong)this + 8));
      cVar9 = (**(code **)(param_1->OutputData->_padding_ + 0x440))();
      if (cVar9 == '\0') {
        lVar5 = param_1->InputData->_padding_;
        uVar12 = (**(code **)(lVar5 + 0x640))
                           (param_1->InputData,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
        uVar11 = uVar11 | uVar12;
      }
      (**(code **)(param_1->OutputData->_padding_ + 0x498))(param_1->OutputData,uVar11);
      FPCGDataPtrWrapper::operator=(&pFVar17->Data,(UPCGData *)param_1->OutputData);
      pUVar16 = (UPCGPointData *)param_1->InputData;
      if (pUVar16 == (UPCGPointData *)0x0) {
LAB_149bf1608:
        pUVar16 = (UPCGPointData *)0x0;
      }
      else {
        pUVar13 = Z_Construct_UClass_UPCGPointData_NoRegister();
        iVar10 = (int)pUVar13->_padding_;
        if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar10) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
            &pUVar13->_padding_)) goto LAB_149bf1608;
      }
      param_1->InputPointData = pUVar16;
      pUVar16 = (UPCGPointData *)param_1->OutputData;
      if (pUVar16 == (UPCGPointData *)0x0) {
LAB_149bf1639:
        pUVar16 = (UPCGPointData *)0x0;
      }
      else {
        pUVar13 = Z_Construct_UClass_UPCGPointData_NoRegister();
        iVar10 = (int)pUVar13->_padding_;
        if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar10) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
            &pUVar13->_padding_)) goto LAB_149bf1639;
      }
      param_1->OutputPointData = pUVar16;
      EVar8 = Success;
      goto LAB_149bf1686;
    }
    pFVar4 = (FPCGContext *)**(undefined8 **)((longlong)this + 8);
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_d8,L"PCGPointOperationElementBase",L"InputMissingPointData",
                         L"Unable to get Point data from input");
    PCGLog::LogErrorOnGraph(pFVar15,pFVar4);
  }
  else {
    if ((UPCGSpatialData *)local_e8.Handle != (UPCGSpatialData *)0x0) {
      UE::GC::MarkAsReachable(local_e8.Handle);
      goto LAB_149bf1432;
    }
LAB_149bf1644:
    pFVar4 = (FPCGContext *)**(undefined8 **)((longlong)this + 8);
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_c8,L"PCGPointOperationElementBase",L"InputMissingSpatialData",
                         L"Unable to get Spatial data from input");
    PCGLog::LogErrorOnGraph(pFVar15,pFVar4);
    local_d8.TextData.Reference = local_c8.TextData.Reference;
  }
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  EVar8 = NoOperation;
LAB_149bf1686:
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar8;
}

// ExecutePointOperationWithIndices @ 149c20de0

bool __thiscall
FPCGPointOperationElementBase::ExecutePointOperationWithIndices
          (FPCGPointOperationElementBase *this,
          TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
          *param_1,TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>
                   *param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int local_res8 [2];
  undefined1 local_res20 [8];
  undefined8 local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 **local_40;
  undefined8 *local_38;
  int *local_30;
  undefined1 *local_28;
  
  local_res20[0] = (**(code **)((longlong)*this + 0xc0))();
  local_58 = *(undefined8 *)param_2;
  local_50 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = -1 < CpuChannel->Enabled;
  local_res8[0] = param_3;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`bool___cdecl_PCGPointOperationElementBase::ExecutePointOperation<TFunctionRef<bool___cdecl(UPCGBasePointData_const*___ptr64,UPCGBasePointData*___ptr64,int,int)>_>(FPCGPointOperationElementBase_const*___ptr64,TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(UPCGBasePointData_const*___ptr64,UPCGBasePointData*___ptr64,int,int)>,int,bool)'
                ::__l2::__CpuProfilerEventSpecId145,
               "FPCGPointOperationElementBase::ExecutePointProcessing",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointOperationElementBase.cpp"
               ,0x91);
    FCpuProfilerTrace::OutputBeginEvent
              (`bool___cdecl_PCGPointOperationElementBase::ExecutePointOperation<TFunctionRef<bool___cdecl(UPCGBasePointData_const*___ptr64,UPCGBasePointData*___ptr64,int,int)>_>(FPCGPointOperationElementBase_const*___ptr64,TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(UPCGBasePointData_const*___ptr64,UPCGBasePointData*___ptr64,int,int)>,int,bool)'
               ::__l2::__CpuProfilerEventSpecId145);
  }
  if ((param_1 ==
       (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
        *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointOperationElementBase.cpp"
                         ,0x92,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if ((bVar3) && (param_1->ExecutionStateResult == Success)) {
    local_38 = &local_58;
    local_30 = local_res8;
    local_28 = local_res20;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGPointOperationElementBase::ExecutePointOperation<TFunctionRef<bool___cdecl(UPCGBasePointData_const_*,UPCGBasePointData_*,int,int)>_>'::__l2::<lambda_1>,bool,TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_const_&,PCGPointOperation::IterationState_&,unsigned_int>
               ::Call;
    bVar3 = TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
            ::ExecuteSlice((TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                            *)this,param_1,
                           (TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_const_&,PCGPointOperation::IterationState_&,unsigned_int)>
                            *)&local_48);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar3;
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)param_1->_padding_,(int)param_1->_padding_);
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)&param_1->_padding_,0,piVar1);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutePointOperationWithPoints @ 149c20f70

bool __thiscall
FPCGPointOperationElementBase::ExecutePointOperationWithPoints
          (FPCGPointOperationElementBase *this,
          TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
          *param_1,TFunctionRef<bool___cdecl(FPCGPoint_const_&,FPCGPoint_&)> *param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int local_res8 [2];
  undefined1 local_res20 [8];
  undefined8 local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 **local_40;
  undefined8 *local_38;
  int *local_30;
  undefined1 *local_28;
  
  local_res20[0] = (**(code **)((longlong)*this + 0xc0))();
  local_58 = *(undefined8 *)param_2;
  local_50 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = -1 < CpuChannel->Enabled;
  local_res8[0] = param_3;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`bool___cdecl_PCGPointOperationElementBase::ExecutePointOperation<TFunctionRef<bool___cdecl(FPCGPoint_const&___ptr64,FPCGPoint&___ptr64)>_>(FPCGPointOperationElementBase_const*___ptr64,TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(FPCGPoint_const&___ptr64,FPCGPoint&___ptr64)>,int,bool)'
                ::__l2::__CpuProfilerEventSpecId145,
               "FPCGPointOperationElementBase::ExecutePointProcessing",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointOperationElementBase.cpp"
               ,0x91);
    FCpuProfilerTrace::OutputBeginEvent
              (`bool___cdecl_PCGPointOperationElementBase::ExecutePointOperation<TFunctionRef<bool___cdecl(FPCGPoint_const&___ptr64,FPCGPoint&___ptr64)>_>(FPCGPointOperationElementBase_const*___ptr64,TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>*___ptr64,TFunctionRef<bool___cdecl(FPCGPoint_const&___ptr64,FPCGPoint&___ptr64)>,int,bool)'
               ::__l2::__CpuProfilerEventSpecId145);
  }
  if ((param_1 ==
       (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
        *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointOperationElementBase.cpp"
                         ,0x92,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
          ::DataIsPreparedForExecution(param_1);
  if ((bVar3) && (param_1->ExecutionStateResult == Success)) {
    local_38 = &local_58;
    local_30 = local_res8;
    local_28 = local_res20;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`PCGPointOperationElementBase::ExecutePointOperation<TFunctionRef<bool___cdecl(FPCGPoint_const_&,FPCGPoint_&)>_>'::__l2::<lambda_1>,bool,TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_const_&,PCGPointOperation::IterationState_&,unsigned_int>
               ::Call;
    bVar3 = TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
            ::ExecuteSlice((TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                            *)this,param_1,
                           (TFunctionRef<bool___cdecl(TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>_*,PCGTimeSlice::FEmptyStruct_const_&,PCGPointOperation::IterationState_&,unsigned_int)>
                            *)&local_48);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar3;
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)param_1->_padding_,(int)param_1->_padding_);
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)&param_1->_padding_,0,piVar1);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// PrepareDataInternal @ 149c30400

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
FPCGPointOperationElementBase::PrepareDataInternal
          (FPCGPointOperationElementBase *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
  *local_res8;
  FName local_res10;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  FPCGPointOperationElementBase **local_30;
  FPCGPointOperationElementBase *local_28;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
  **local_20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_18;
  longlong *local_10;
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointOperationElementBase.cpp"
                       ,0xd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PointProcessContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointOperationElementBase.cpp"
                       ,0xf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_res10 = PCGPinConstants::DefaultInputLabel;
  bVar2 = -1 < CpuChannel->Enabled;
  local_res8 = (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
                *)param_1;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId23,"FPCGPointOperationElementBase::PreparePointProcessing",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointOperationElementBase.cpp"
               ,0x17);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId23);
  }
  if ((local_res8 ==
       (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
        *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointOperationElementBase.cpp"
                         ,0x18,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)&local_res8->_padding_,&local_48,&local_res10);
  local_10 = &local_res8->_padding_;
  if (local_res8->ExecutionStateResult == Uninitialized) {
    local_res8->ExecutionStateResult = Success;
  }
  local_20 = &local_res8;
  local_30 = &local_28;
  local_18 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPCGPointOperationElementBase::PreparePointOperationData'::__l2::<lambda_1>,enum_EPCGTimeSliceInitResult,PCGPointOperation::IterationState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int>
             ::Call;
  local_28 = this;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>::
  InitializePerIterationStates
            (local_res8,local_48.ArrayNum,
             (TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGPointOperation::IterationState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int)>
              *)&local_38);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FPCGTaggedData *)local_48.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// PreparePointOperationData @ 149c31d50

bool __thiscall
FPCGPointOperationElementBase::PreparePointOperationData
          (FPCGPointOperationElementBase *this,
          TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
          *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
  *local_res10;
  FName local_res18 [2];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  FPCGPointOperationElementBase **local_30;
  FPCGPointOperationElementBase *local_28;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
  **local_20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_18;
  longlong *local_10;
  
  bVar4 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId23,"FPCGPointOperationElementBase::PreparePointProcessing",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointOperationElementBase.cpp"
               ,0x17);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId23);
  }
  if ((local_res10 ==
       (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>
        *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointOperationElementBase.cpp"
                         ,0x18,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)&local_res10->_padding_,&local_48,local_res18);
  local_10 = &local_res10->_padding_;
  if (local_res10->ExecutionStateResult == Uninitialized) {
    local_res10->ExecutionStateResult = Success;
  }
  local_20 = &local_res10;
  local_30 = &local_28;
  local_18 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPCGPointOperationElementBase::PreparePointOperationData'::__l2::<lambda_1>,enum_EPCGTimeSliceInitResult,PCGPointOperation::IterationState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int>
             ::Call;
  local_28 = this;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGPointOperation::IterationState,FPCGContext>::
  InitializePerIterationStates
            (local_res10,local_48.ArrayNum,
             (TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGPointOperation::IterationState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int)>
              *)&local_38);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FPCGTaggedData *)local_48.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

