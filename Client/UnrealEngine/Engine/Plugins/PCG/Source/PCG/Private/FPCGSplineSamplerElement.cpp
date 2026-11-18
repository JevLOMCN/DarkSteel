// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// ExecuteInternal @ 149c6b6f0

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
FPCGSplineSamplerElement::ExecuteInternal(FPCGSplineSamplerElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGNode *this_00;
  code *pcVar3;
  FObjectPtr_u_0 FVar4;
  FObjectPtr_u_0 FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 TVar11;
  IPCGGraphExecutionSource *pIVar12;
  longlong *plVar13;
  UPCGSpatialData *pUVar14;
  FText *this_01;
  UPCGPolyLineData *pUVar15;
  FPCGTaggedData *pFVar16;
  UPCGBasePointData *this_02;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  ForAnyElementType FVar19;
  FPCGDataCollection *this_03;
  bool bVar20;
  <lambda_1> local_res10;
  bool local_res20 [8];
  undefined1 local_118 [8];
  UPCGSpatialData *local_110;
  FPCGProjectionParams local_108;
  TObjectPtr<UPCGSettings>_u_0 local_e8;
  FObjectPtr_u_0 local_e0;
  FObjectPtr_u_0 local_d8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_d0;
  FString local_c0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_b0;
  FPCGSplineSamplerParams *local_a0;
  FString local_98;
  FText local_88;
  FPCGInitializeFromDataParams local_78;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1536,"FPCGSplineSamplerElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineSampler.cpp"
               ,0x600);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1536);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar16 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineSamplerSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar16 != (FPCGTaggedData *)0x0) {
        local_e8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar16->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_e8.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c6b7f8;
          UE::GC::MarkAsReachable((UObject *)local_e8.DebugPtr);
        }
        if (local_e8.DebugPtr != (UPCGSettings *)0x0) {
          pUVar9 = UPCGSplineSamplerSettings::StaticClass();
          bVar6 = FObjectPtr::IsA(&local_e8.ObjectPtr,pUVar9);
          TVar11 = local_e8;
          if (bVar6) goto LAB_149c6b7fa;
        }
      }
    }
    else {
      pUVar10 = UPCGNode::GetSettings(this_00);
      TVar11.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
      if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
        pUVar9 = UPCGSplineSamplerSettings::StaticClass();
        iVar2 = (int)pUVar9->_padding_;
        if ((iVar2 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar9->_padding_)) goto LAB_149c6b7fa;
      }
    }
LAB_149c6b7f8:
    TVar11.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar9 = UPCGSplineSamplerSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
    if (bVar6) {
      TVar11.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar11.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_149c6b7fa:
  this_03 = &param_1->InputData;
  if ((TVar11.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineSampler.cpp"
                         ,0x603,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  FPCGDataCollection::GetInputsByPin(this_03,&local_d0,&PCGSplineSamplerConstants::SplineLabel);
  FPCGDataCollection::GetInputsByPin
            (this_03,&local_b0,&PCGSplineSamplerConstants::BoundingShapeLabel);
  local_a0 = (FPCGSplineSamplerParams *)(TVar11.DebugPtr + 1);
  local_110 = (UPCGSpatialData *)0x0;
  if (TVar11.DebugPtr[2].bUseSeed == false) {
    local_res20[0] = false;
    local_110 = FPCGDataCollection::GetSpatialUnionOfInputsByPin
                          (this_03,param_1,&PCGSplineSamplerConstants::BoundingShapeLabel,
                           local_res20);
    if (((local_110 == (UPCGSpatialData *)0x0) &&
        ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0)) &&
       (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar6)) {
      pIVar12 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->(&param_1->ExecutionSource);
      plVar13 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x18))(pIVar12);
      pUVar14 = (UPCGSpatialData *)(**(code **)(*plVar13 + 8))(plVar13);
      if (pUVar14 != (UPCGSpatialData *)0x0) {
        local_110 = pUVar14;
        pUVar9 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
        iVar2 = (int)pUVar9->_padding_;
        if ((iVar2 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar9->_padding_)) goto LAB_149c6ba4c;
      }
      local_110 = (UPCGSpatialData *)0x0;
    }
  }
  else if ((0 < local_b0.ArrayNum) && (5 < (byte)LogPCG._0_1_)) {
    this_01 = FText::AsLocalizable_Advanced_LocText
                        (&local_88,L"PCGSplineSamplerElement",L"BoundsIgnored",
                         L"The bounds of the Bounding Shape input pin will be ignored because the Unbounded option is enabled."
                        );
    FText::ToString(this_01);
    FPCGContext::GetTaskName(param_1,&local_98);
    FPCGContext::GetExecutionSourceName(param_1,&local_c0);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
LAB_149c6ba4c:
  iVar2 = local_d0.ArrayNum;
  uVar17 = (ulonglong)local_d0.ArrayNum;
  FVar19.Data = local_d0.AllocatorInstance.Data + uVar17 * 0x78;
  FVar18.Data = local_d0.AllocatorInstance.Data;
  local_c0.Data.AllocatorInstance.Data = FVar19.Data;
  do {
    if (local_d0.ArrayNum != (uint)uVar17) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_118);
    }
    if (FVar18.Data == FVar19.Data) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum);
      if ((FPCGTaggedData *)local_b0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
      if ((FPCGTaggedData *)local_d0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    local_e0.Handle = (UObject *)(((FPCGTaggedData *)FVar18.Data)->Data).Data.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c6babf:
      if ((UPCGSpatialData *)local_e0.Handle != (UPCGSpatialData *)0x0) {
        pUVar9 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_e0,pUVar9);
        FVar4 = local_e0;
        if (((bVar6) && ((UPCGSpatialData *)local_e0.Handle != (UPCGSpatialData *)0x0)) &&
           (pUVar15 = PCGSplineSamplerHelpers::GetPolyLineData((UPCGSpatialData *)local_e0.Handle),
           pUVar15 != (UPCGPolyLineData *)0x0)) {
          local_108.bProjectPositions = true;
          local_108.bProjectRotations = true;
          local_108.bProjectScales = false;
          local_108.ColorBlendMode = SourceValue;
          pUVar14 = (UPCGSpatialData *)0x0;
          ::FString::FString(&local_108.AttributeList,L"");
          local_d8.Handle =
               (UObject *)(((FPCGTaggedData *)FVar18.Data)->Data).Data.field0_0x0.DebugPtr;
          local_108.AttributeMode = ExcludeAttributes;
          local_108.AttributeMergeOperation = TargetValue;
          local_108.TagMergeOperation = Source;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c6bb51:
            if ((UPCGSplineProjectionData *)local_d8.Handle != (UPCGSplineProjectionData *)0x0) {
              pUVar9 = Z_Construct_UClass_UPCGSplineProjectionData_NoRegister();
              bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_d8,pUVar9);
              FVar5 = local_d8;
              if ((bVar6) &&
                 (pUVar14 = (UPCGSpatialData *)0x0,
                 (UPCGSplineProjectionData *)local_d8.Handle != (UPCGSplineProjectionData *)0x0)) {
                pUVar14 = UPCGSplineProjectionData::GetSurface
                                    ((UPCGSplineProjectionData *)local_d8.Handle);
                local_108.bProjectPositions = (bool)(FVar5.Handle + 400)->field_0x0;
                local_108.bProjectRotations = (bool)(FVar5.Handle + 400)->field_0x1;
                local_108.bProjectScales = (bool)(FVar5.Handle + 400)->field_0x2;
                local_108.ColorBlendMode = (FVar5.Handle + 400)->field_0x3;
                ::FString::operator=
                          (&local_108.AttributeList,(FString *)&FVar5.Handle[10].field_0x8);
                local_108._24_2_ = *(undefined2 *)&FVar5.Handle[10].field_0x18;
                local_108.TagMergeOperation = FVar5.Handle[10].field_0x1a;
              }
            }
          }
          else if ((UPCGSplineProjectionData *)local_d8.Handle != (UPCGSplineProjectionData *)0x0) {
            UE::GC::MarkAsReachable(local_d8.Handle);
            goto LAB_149c6bb51;
          }
          iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
          piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
          pFVar16 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                               (longlong)iVar8 * 0x78),(FPCGTaggedData *)FVar18.Data);
          this_02 = FPCGContext::NewPointData_AnyThread(param_1);
          FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                    (&local_78,(UPCGSpatialData *)FVar4.Handle);
          local_78.bInheritSpatialData = false;
          UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_02,&local_78);
          FPCGDataPtrWrapper::operator=(&pFVar16->Data,(UPCGData *)this_02);
          if (local_a0->Dimension == OnInterior) {
            PCGSplineSamplerHelpers::SampleInteriorData
                      (param_1,pUVar15,local_110,pUVar14,&local_108,local_a0,this_02);
          }
          else {
            PCGSplineSamplerHelpers::SampleLineData
                      (param_1,pUVar15,local_110,pUVar14,&local_108,local_a0,this_02);
          }
          DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                    ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                     local_78.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data
                     ,local_78.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
          if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
              local_78.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
              (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
            FMemory::Free(local_78.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance
                          .Data);
          }
          if (local_78.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
          }
          FVar19.Data = local_c0.Data.AllocatorInstance.Data;
          if (local_108.AttributeList.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_108.AttributeList.Data.AllocatorInstance.Data);
            FVar19.Data = local_c0.Data.AllocatorInstance.Data;
          }
        }
      }
    }
    else if ((UPCGSpatialData *)local_e0.Handle != (UPCGSpatialData *)0x0) {
      UE::GC::MarkAsReachable(local_e0.Handle);
      goto LAB_149c6babf;
    }
    uVar17 = (ulonglong)(uint)iVar2;
    FVar18.Data = FVar18.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 149c75b30

EPCGElementExecutionLoopMode __thiscall
FPCGSplineSamplerElement::ExecutionLoopMode(FPCGSplineSamplerElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// GetDependenciesCrc @ 149c76600

void __thiscall
FPCGSplineSamplerElement::GetDependenciesCrc
          (FPCGSplineSamplerElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

{
  int iVar1;
  UPCGSettings *pUVar2;
  UClass *pUVar3;
  FName *pFVar4;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  UPCGData *this_00;
  FPCGCrc FVar7;
  bool local_res10 [8];
  FPCGCrc local_res18;
  FName local_res20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18.Value = 0;
  local_res18._4_4_ = local_res18._4_4_ & 0xffffff00;
  IPCGElement::GetDependenciesCrc((IPCGElement *)this,param_1,&local_res18);
  pUVar2 = param_1->Settings;
  if (pUVar2 != (UPCGSettings *)0x0) {
    pUVar3 = UPCGSplineSamplerSettings::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pFVar4 = ::FName::FName(&local_res20,10,L"bUnbounded",FNAME_Add);
      PCGSettingsHelpers::GetOverrideValue<bool>
                (param_1->InputData,pUVar2,*pFVar4,&pUVar2[2].bUseSeed,local_res10);
      pTVar5 = FPCGDataCollection::GetInputsByPin
                         (param_1->InputData,&local_28,
                          &PCGSplineSamplerConstants::BoundingShapeLabel);
      iVar1 = pTVar5->ArrayNum;
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      if ((FPCGTaggedData *)local_28.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      if (((local_res10[0] == false) && (iVar1 < 1)) &&
         (param_1->ExecutionSource != (IPCGGraphExecutionSource *)0x0)) {
        plVar6 = (longlong *)(**(code **)((longlong)*param_1->ExecutionSource + 0x18))();
        this_00 = (UPCGData *)(**(code **)(*plVar6 + 8))(plVar6);
        if (this_00 != (UPCGData *)0x0) {
          FVar7 = UPCGData::GetOrComputeCrc(this_00,SUB81(&local_res20,0));
          local_res18.Value =
               local_res18.Value ^
               *(int *)FVar7 + local_res18.Value * 0x40 + (local_res18.Value >> 2) + -0x61c88647;
        }
      }
    }
  }
  FVar7.bValid = local_res18.bValid;
  FVar7._5_3_ = local_res18._5_3_;
  FVar7.Value = local_res18.Value;
  *param_2 = FVar7;
  return;
}

// ShouldComputeFullOutputDataCrc @ 149c8caa0

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
FPCGSplineSamplerElement::ShouldComputeFullOutputDataCrc
          (FPCGSplineSamplerElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsBasePointDataInputs @ 149c928e0

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
FPCGSplineSamplerElement::SupportsBasePointDataInputs
          (FPCGSplineSamplerElement *this,FPCGContext *param_1)

{
  return true;
}

