// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator() @ 149ad80b0

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

void __thiscall
`FPCGAttributeGetFromPointIndexElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,FPCGTaggedData *param_1)

{
  longlong lVar1;
  code *pcVar2;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGBasePointData *this_00;
  FPCGTaggedData *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined1 auStack_418 [32];
  FPCGTaggedData *local_3f8;
  FPCGTaggedData *local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  FObjectPtr_u_0 local_3c8 [2];
  FPCGInitializeFromDataParams local_3b8;
  FString local_378;
  FString local_368;
  FString local_358;
  FConstPCGPointValueRanges local_348;
  FPCGPointValueRanges local_1b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_418;
  if ((*(UPCGNode **)(*(longlong *)this + 0x120) != (UPCGNode *)0x0) &&
     (bVar4 = UPCGNode::IsOutputPinConnected
                        (*(UPCGNode **)(*(longlong *)this + 0x120),
                         &PCGAttributeGetFromPointIndexConstants::OutputPointLabel), bVar4)) {
    local_3c8[0] = (FObjectPtr_u_0)(param_1->Data).Data.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UPCGBasePointData *)local_3c8[0].Handle != (UPCGBasePointData *)0x0)) {
      UE::GC::MarkAsReachable(local_3c8[0].Handle);
    }
    if ((UPCGBasePointData *)local_3c8[0].Handle == (UPCGBasePointData *)0x0) {
      pFVar8 = GetTypeName<UPCGBasePointData>(&local_358);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar9);
    }
    pUVar6 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)local_3c8,pUVar6);
    FVar3 = local_3c8[0];
    if ((!bVar4) || ((UPCGBasePointData *)local_3c8[0].Handle == (UPCGBasePointData *)0x0)) {
      pFVar8 = GetTypeName<UPCGBasePointData>(&local_378);
      pwVar9 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UPCGData_const_>
                         (&local_368,(UPCGData *)local_3c8[0].Handle);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar9,pwVar10);
    }
    this_00 = FPCGContext::NewPointData_AnyThread(*(FPCGContext **)this);
    FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
              (&local_3b8,(UPCGSpatialData *)FVar3.Handle);
    local_3b8.bInheritSpatialData = false;
    UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_00,&local_3b8);
    (**(code **)(this_00->_padding_ + 0x490))(this_00,1);
    (**(code **)(this_00->_padding_ + 0x4b0))(this_00,FVar3.Handle);
    FConstPCGPointValueRanges::FConstPCGPointValueRanges
              (&local_348,(UPCGBasePointData *)FVar3.Handle);
    FPCGPointValueRanges::FPCGPointValueRanges(&local_1b8,this_00,false);
    FPCGPointValueRanges::SetFromValueRanges(&local_1b8,0,&local_348,*(int *)((longlong)this + 8));
    lVar1 = *(longlong *)this;
    pFVar7 = *(FPCGTaggedData **)(lVar1 + 0x38);
    if ((pFVar7 <= param_1) && (param_1 < pFVar7 + *(int *)(lVar1 + 0x44))) {
      local_3e0 = (longlong)*(int *)(lVar1 + 0x40);
      local_3d8 = 0x78;
      local_3f8 = param_1;
      local_3f0 = pFVar7;
      local_3e8 = (longlong)*(int *)(lVar1 + 0x44);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = *(int *)(lVar1 + 0x40);
    if (iVar5 == *(int *)(lVar1 + 0x44)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)(lVar1 + 0x38),(int *)(lVar1 + 0x44));
    }
    *(int *)(lVar1 + 0x40) = iVar5 + 1;
    pFVar7 = FPCGTaggedData::FPCGTaggedData
                       ((FPCGTaggedData *)((longlong)iVar5 * 0x78 + *(longlong *)(lVar1 + 0x38)),
                        param_1);
    FPCGDataPtrWrapper::operator=(&pFVar7->Data,(UPCGData *)this_00);
    pFVar7->Pin = PCGAttributeGetFromPointIndexConstants::OutputPointLabel;
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_3b8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
               local_3b8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_3b8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_3b8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data
                   );
    }
    if (local_3b8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
    }
  }
  return;
}

// ExecuteInternal @ 149b05420

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

bool __thiscall
FPCGAttributeGetFromPointIndexElement::ExecuteInternal
          (FPCGAttributeGetFromPointIndexElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UPCGSettings *pUVar6;
  TObjectPtr<UPCGSettings>_u_0 TVar7;
  FPCGTaggedData *pFVar8;
  undefined ***pppuVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  <lambda_1> local_a8;
  TObjectPtr<UPCGSettings>_u_0 local_a0;
  FPCGContext *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [80];
  undefined **local_38;
  FPCGContext *local_30;
  undefined8 uStack_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId94,"FPCGAttributeGetFromPointIndexElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeGetFromPointIndexElement.cpp"
               ,0x5e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId94);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeGetFromPointIndexElement.cpp"
                         ,0x60,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar5 = UPCGAttributeGetFromPointIndexSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar5);
    if (bVar3) {
      TVar7.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar7.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149b05556;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar6 = UPCGNode::GetSettings(this_00), pUVar6 == (UPCGSettings *)0x0)) {
    pFVar8 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeGetFromPointIndexSettings>_::__l2::<lambda_1>_>
                       (&(param_1->InputData).TaggedData,local_a8);
    if (pFVar8 != (FPCGTaggedData *)0x0) {
      local_a0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar8->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_a0.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b0554c;
        UE::GC::MarkAsReachable((UObject *)local_a0.DebugPtr);
      }
      if (local_a0.DebugPtr != (UPCGSettings *)0x0) {
        pUVar5 = UPCGAttributeGetFromPointIndexSettings::StaticClass();
        bVar3 = FObjectPtr::IsA(&local_a0.ObjectPtr,pUVar5);
        TVar7 = local_a0;
        if (bVar3) goto LAB_149b05556;
      }
    }
  }
  else {
    pUVar6 = UPCGNode::GetSettings(this_00);
    TVar7.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar6);
    if (TVar7.DebugPtr != (UPCGSettings *)0x0) {
      pUVar5 = UPCGAttributeGetFromPointIndexSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)((TVar7.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar7.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8)
          == &pUVar5->_padding_)) goto LAB_149b05556;
    }
  }
LAB_149b0554c:
  TVar7.DebugPtr = (UPCGSettings *)0x0;
LAB_149b05556:
  if ((TVar7.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeGetFromPointIndexElement.cpp"
                         ,99,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uStack_90 = (undefined4)TVar7.DebugPtr[1]._padding_;
  local_88._8_8_ = TVar7.DebugPtr + 1;
  local_88._16_4_ = (undefined4)TVar7.DebugPtr[1]._padding_;
  local_88._24_8_ = &TVar7.DebugPtr[1]._padding_;
  local_98 = param_1;
  local_88._0_8_ = param_1;
  local_88._32_8_ = Z_Construct_UClass_UPCGBasePointData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_88._32_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_88._32_8_);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_88._32_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_88._32_8_);
  }
  uStack_28._4_4_ = uStack_8c;
  uStack_28._0_4_ = uStack_90;
  local_88._48_4_ = PCGPinConstants::DefaultInputLabel.ComparisonIndex.Value;
  local_88._52_4_ = PCGPinConstants::DefaultInputLabel.Number;
  local_88._56_4_ =
       PCGAttributeGetFromPointIndexConstants::OutputAttributeLabel.ComparisonIndex.Value;
  local_88._60_4_ = PCGAttributeGetFromPointIndexConstants::OutputAttributeLabel.Number;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPCGAttributeGetFromPointIndexElement::ExecuteInternal'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_88._64_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FPCGAttributeGetFromPointIndexElement::ExecuteInternal'::__l2::<lambda_1>,void,FPCGTaggedData_const_&>
       ::Call;
  local_88[0x28] = true;
  local_20 = (undefined ***)0x0;
  local_30 = local_98;
  PCGExtractAttribute::ExtractAttribute((FExtractAttributeParams *)local_88);
  if ((code *)local_88._64_8_ != (code *)0x0) {
    pppuVar9 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar9 = local_20;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b11ac0

EPCGElementExecutionLoopMode __thiscall
FPCGAttributeGetFromPointIndexElement::ExecutionLoopMode
          (FPCGAttributeGetFromPointIndexElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b2d140

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
FPCGAttributeGetFromPointIndexElement::SupportsBasePointDataInputs
          (FPCGAttributeGetFromPointIndexElement *this,FPCGContext *param_1)

{
  return true;
}

