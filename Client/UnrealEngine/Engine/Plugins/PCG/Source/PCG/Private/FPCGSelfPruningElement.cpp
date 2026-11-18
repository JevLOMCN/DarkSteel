// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// operator() @ 149beff20

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
`FPCGSelfPruningElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
          *param_1,FEmptyStruct *param_2,FIterationState *param_3,uint param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  FPCGTaggedData *pFVar9;
  
  bVar4 = PCGSelfPruningElement::ExecuteSlice
                    (param_3,(FPCGSelfPruningParameters *)(*(longlong *)this + 200),
                     (FPCGContext *)param_1);
  if (bVar4) {
    plVar2 = *(longlong **)((longlong)this + 8);
    uVar7 = 0;
    if ((int)param_4 < (int)plVar2[1]) {
      uVar7 = ~param_4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pFVar9 = (FPCGTaggedData *)((longlong)(int)param_4 * 0x78 + *plVar2);
    if ((((FPCGTaggedData *)param_1->_padding_ <= pFVar9) &&
        (pFVar9 < (FPCGTaggedData *)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar8 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar8 + 1;
    pFVar9 = FPCGTaggedData::FPCGTaggedData
                       ((FPCGTaggedData *)((longlong)iVar8 * 0x78 + param_1->_padding_),pFVar9);
    if (param_3->OutputData != (UPCGBasePointData *)0x0) {
      FPCGDataPtrWrapper::operator=(&pFVar9->Data,(UPCGData *)param_3->OutputData);
    }
  }
  return bVar4;
}

// operator() @ 149bf0e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGSelfPruningElement::PrepareDataInternal'::__l2::<lambda_1>::operator()
          (void *this,FIterationState *param_1,FEmptyStruct *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  EPCGTimeSliceInitResult EVar6;
  uint uVar7;
  UClass *pUVar8;
  UPCGPointData *pUVar9;
  FText *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  FString *pFVar13;
  UPCGPointData *pUVar14;
  wchar_t *pwVar15;
  undefined1 auStack_178 [32];
  FScriptContainerElement *local_158;
  longlong local_150;
  FObjectPtr_u_0 local_148;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_140;
  undefined1 local_130 [16];
  TSharedPtr<FCulture,1> local_120;
  FString local_110;
  FString local_100;
  TObjectPtr<UPCGMetadata>_u_0 local_f0 [2];
  FText local_e0;
  undefined1 local_c8 [48];
  int local_98;
  FText local_88;
  FTextFormat local_78;
  TVector<double>_u_0 local_68;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_178;
  pUVar14 = (UPCGPointData *)0x0;
  local_148.Handle = local_148.Handle & 0xffffffff00000000;
  plVar2 = *(longlong **)this;
  iVar1 = (int)plVar2[1];
  uVar7 = 0;
  if (param_3 < iVar1) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_158 = (FScriptContainerElement *)(longlong)param_3, local_150 = (longlong)iVar1,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    EVar6 = (*pcVar4)();
    return EVar6;
  }
  local_148 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)((longlong)param_3 * 0x78 + *plVar2))->Handle;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UPCGSpatialData *)local_148.Handle == (UPCGSpatialData *)0x0) goto LAB_149bf10ce;
    UE::GC::MarkAsReachable(local_148.Handle);
  }
  if ((UPCGSpatialData *)local_148.Handle == (UPCGSpatialData *)0x0) {
LAB_149bf10ce:
    if (1 < (byte)LogPCG._0_1_) {
      local_120.Object = (FCulture *)0x0;
      local_120.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar10 = FText::AsNumber(&local_88,param_3,(FNumberFormattingOptions *)0x0,&local_120);
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_e0,L"PCGSelfPruningElement",L"InvalidInputDataType",
                           L"Input {0}: Input data must be of type Spatial");
      pFVar12 = FTextFormat::FTextFormat(&local_78,pFVar11,Default);
      pFVar10 = FText::Format<FText>((FText *)&local_f0[0].ObjectPtr,pFVar12,pFVar10);
      pFVar13 = FText::ToString(pFVar10);
      if ((pFVar13->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
      if (*(FPCGContext **)((longlong)this + 0x10) != (FPCGContext *)0x0) {
        pUVar14 = (UPCGPointData *)&DAT_00000001;
        FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x10),&local_100);
      }
      if (*(FPCGContext **)((longlong)this + 0x10) != (FPCGContext *)0x0) {
        pUVar14 = (UPCGPointData *)(ulonglong)((uint)pUVar14 | 2);
        FPCGContext::GetExecutionSourceName(*(FPCGContext **)((longlong)this + 0x10),&local_110);
      }
      local_158 = (FScriptContainerElement *)pwVar15;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar14 & 2) != 0) &&
         (pUVar14 = (UPCGPointData *)(ulonglong)((uint)pUVar14 & 0xfffffffd),
         local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pUVar14 & 1) != 0) &&
         ((FPCGCrc)local_100.Data.AllocatorInstance.Data != (FPCGCrc)0x0)) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_f0[0].DebugPtr != (UPCGMetadata *)0x0) {
        (**(code **)((local_f0[0].DebugPtr)->_padding_ + 0x10))();
      }
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
    }
    return NoOperation;
  }
  pUVar8 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
  bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_148,pUVar8);
  if ((!bVar5) || ((UPCGSpatialData *)local_148.Handle == (UPCGSpatialData *)0x0))
  goto LAB_149bf10ce;
  local_38 = 0;
  local_37 = 0;
  local_33 = 0;
  local_68._s_0.X = 0.0;
  local_68._s_0.Y = 0.0;
  local_31 = 0;
  local_68._s_0.Z = 0.0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  pUVar9 = (UPCGPointData *)
           UPCGSpatialData::ToBasePointData
                     ((UPCGSpatialData *)local_148.Handle,*(FPCGContext **)((longlong)this + 0x10),
                      (TBox<double> *)&local_68._s_0);
  param_1->InputData = (UPCGBasePointData *)pUVar9;
  if (pUVar9 != (UPCGPointData *)0x0) {
    pUVar8 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) goto LAB_149bf0fce;
  }
  pUVar9 = pUVar14;
LAB_149bf0fce:
  param_1->InputPointData = pUVar9;
  if (param_1->InputData == (UPCGBasePointData *)0x0) {
    return NoOperation;
  }
  lVar3 = *(longlong *)((longlong)this + 8);
  if ((*(char *)(lVar3 + 200) != '\x04') && (*(char *)(lVar3 + 0x115) != '\0')) {
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              ((FPCGAttributePropertyInputSelector *)(lVar3 + 0x118),
               (FPCGAttributePropertyInputSelector *)local_c8,(UPCGData *)param_1->InputData);
    PCGAttributeAccessorHelpers::CreateConstAccessor
              ((UPCGData *)(local_130 + 8),(FPCGAttributePropertySelector *)param_1->InputData,
               SUB81(local_c8,0));
    PCGAttributeAccessorHelpers::CreateConstKeys
              ((UPCGData *)local_130,(FPCGAttributePropertySelector *)param_1->InputData);
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    bVar5 = FPCGCollisionWrapper::Prepare
                      (&param_1->CollisionWrapper,(IPCGAttributeAccessor *)local_130._8_8_,
                       (IPCGAttributeAccessorKeys *)local_130._0_8_,&local_140);
    if (bVar5) {
      FPCGCollisionWrapper::CreateBodyInstances(&param_1->CollisionWrapper,&local_140);
    }
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
    if ((FSoftObjectPath *)local_140.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    if ((IPCGAttributeAccessorKeys *)local_130._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
      (**(code **)*(longlong *)local_130._0_8_)(local_130._0_8_,1);
    }
    if ((IPCGAttributeAccessor *)local_130._8_8_ != (IPCGAttributeAccessor *)0x0) {
      (**(code **)*(longlong *)local_130._8_8_)(local_130._8_8_,1);
    }
    DestructItems<FString,int>((FString *)local_c8._40_8_,local_98);
    if ((FString *)local_c8._40_8_ != (FString *)0x0) {
      FMemory::Free((void *)local_c8._40_8_);
    }
  }
  return Success;
}

// CanExecuteOnlyOnMainThread @ 149c01960

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
FPCGSelfPruningElement::CanExecuteOnlyOnMainThread
          (FPCGSelfPruningElement *this,FPCGContext *param_1)

{
  UPCGSelfPruningSettings *pUVar1;
  
  if (param_1 != (FPCGContext *)0x0) {
    pUVar1 = FPCGContext::GetInputSettings<UPCGSelfPruningSettings>(param_1);
    if (pUVar1 != (UPCGSelfPruningSettings *)0x0) {
      return (pUVar1->Parameters).bUseCollisionAttribute;
    }
  }
  return false;
}

// ExecuteInternal @ 149c1d130

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
FPCGSelfPruningElement::ExecuteInternal(FPCGSelfPruningElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  UPCGSelfPruningSettings *pUVar8;
  bool bVar9;
  undefined1 local_res10 [8];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_28;
  UPCGSelfPruningSettings *local_18;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_10;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId847,"FPCGSelfPruningElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSelfPruning.cpp"
               ,0x34f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId847);
  }
  pUVar8 = FPCGContext::GetInputSettings<UPCGSelfPruningSettings>(param_1);
  if ((pUVar8 == (UPCGSelfPruningSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSelfPruning.cpp"
                         ,0x352,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSlicedContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSelfPruning.cpp"
                         ,0x355,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  bVar5 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
          ::DataIsPreparedForExecution
                    ((TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
                      *)param_1);
  if (bVar5) {
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,&local_28,&PCGPinConstants::DefaultInputLabel);
    *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
    local_10 = &local_28;
    local_18 = pUVar8;
    bVar5 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
            ::DataIsPreparedForExecution
                      ((TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
                        *)param_1);
    if (((bVar5) ||
        (local_res10[0] = bVar5,
        bVar5 = `TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
                ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), bVar5)) &&
       ((int)param_1[1].InputData.InactiveOutputPinBitmask != 0)) {
      do {
        uVar3 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
        uVar7 = 0;
        if ((int)uVar3 < (int)param_1[1].InputData.InactiveOutputPinBitmask) {
          uVar7 = ~uVar3 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        bVar5 = `FPCGSelfPruningElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                          (&local_18,
                           (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
                            *)param_1,(FEmptyStruct *)&param_1[1].InputData.DataCrcs,
                           (FIterationState *)
                           ((longlong)(int)uVar3 * 0xe0 +
                           *(longlong *)&param_1[1].InputData.DataCrcs.ArrayNum),uVar3);
        if (!bVar5) {
          bVar5 = false;
          goto LAB_149c1d35c;
        }
        piVar1 = (int *)((longlong)&param_1[1]._padding_ + 4);
        *piVar1 = *piVar1 + 1;
      } while ((*(int *)((longlong)&param_1[1]._padding_ + 4) <
                (int)param_1[1].InputData.InactiveOutputPinBitmask) &&
              (bVar5 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), !bVar5));
      bVar5 = *(int *)((longlong)&param_1[1]._padding_ + 4) ==
              (int)param_1[1].InputData.InactiveOutputPinBitmask;
    }
    else {
      bVar5 = true;
    }
LAB_149c1d35c:
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FPCGTaggedData *)local_28.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  else {
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data,
               (param_1->OutputData).TaggedData.ArrayNum);
    iVar2 = (param_1->OutputData).TaggedData.ArrayMax;
    (param_1->OutputData).TaggedData.ArrayNum = 0;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,(ForAnyElementType *)&param_1->OutputData,0,
                 &(param_1->OutputData).TaggedData.ArrayMax);
    }
    bVar5 = true;
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// ExecutionLoopMode @ 149c22910

EPCGElementExecutionLoopMode __thiscall
FPCGSelfPruningElement::ExecutionLoopMode(FPCGSelfPruningElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// PrepareDataInternal @ 149c305a0

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
FPCGSelfPruningElement::PrepareDataInternal(FPCGSelfPruningElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGSelfPruningSettings *pUVar4;
  bool bVar5;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> **local_30;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_28;
  UPCGSelfPruningSettings *local_20;
  FPCGContext *local_18;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId790,"FPCGSelfPruningElement::PrepareDataInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSelfPruning.cpp"
               ,0x316);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId790);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSlicedContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSelfPruning.cpp"
                         ,0x319,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar4 = FPCGContext::GetInputSettings<UPCGSelfPruningSettings>(param_1);
  if ((pUVar4 == (UPCGSelfPruningSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSelfPruning.cpp"
                         ,0x31c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  *(undefined1 *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data = 1;
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_48,&PCGPinConstants::DefaultInputLabel);
  if (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) == '\0') {
    *(undefined1 *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) = 1;
  }
  local_28 = &local_48;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPCGSelfPruningElement::PrepareDataInternal'::__l2::<lambda_1>,enum_EPCGTimeSliceInitResult,PCGSelfPruningElement::FIterationState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int>
             ::Call;
  local_20 = pUVar4;
  local_18 = param_1;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
  ::InitializePerIterationStates
            ((TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGSelfPruningElement::FIterationState,FPCGContext>
              *)param_1,local_48.ArrayNum,
             (TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGSelfPruningElement::FIterationState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int)>
              *)&local_38);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FPCGTaggedData *)local_48.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149c358b0

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
FPCGSelfPruningElement::SupportsBasePointDataInputs
          (FPCGSelfPruningElement *this,FPCGContext *param_1)

{
  return true;
}

