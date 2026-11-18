// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149b70a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGCreateAttributeElement::ExecuteInternal(FPCGCreateAttributeElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  UPCGData *this_01;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGSettings *pUVar7;
  FObjectPtr_u_0 FVar8;
  FPCGTaggedData *pFVar9;
  UPCGParamData *pUVar10;
  UPCGMetadata *this_02;
  FPCGMetadataDomain *this_03;
  FPCGMetadataAttributeBase *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  FPCGDataPtrWrapper *this_04;
  bool bVar14;
  FObjectPtr_u_0 local_res10;
  FName local_res18 [2];
  <lambda_1> local_a8;
  FPCGMetadataDomainID local_98;
  FString local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId524,"FPCGCreateAttributeElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateAttribute.cpp"
               ,0x20c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId524);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateAttribute.cpp"
                         ,0x20e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar7 = UPCGNode::GetSettings(this_00), pUVar7 == (UPCGSettings *)0x0)) {
      pFVar9 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateAttributeSetSettings>_::__l2::<lambda_1>_>
                         (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
      if (pFVar9 != (FPCGTaggedData *)0x0) {
        local_res10 = (FObjectPtr_u_0)(pFVar9->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGSettings *)local_res10.Handle == (UPCGSettings *)0x0) goto LAB_149b70b9d;
          UE::GC::MarkAsReachable(local_res10.Handle);
        }
        if ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0) {
          pUVar6 = UPCGCreateAttributeSetSettings::StaticClass();
          bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar6);
          FVar8 = local_res10;
          if (bVar3) goto LAB_149b70ba0;
        }
      }
    }
    else {
      pUVar7 = UPCGNode::GetSettings(this_00);
      FVar8.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar7);
      if ((UPCGSettings *)FVar8.Handle != (UPCGSettings *)0x0) {
        pUVar6 = UPCGCreateAttributeSetSettings::StaticClass();
        iVar5 = (int)pUVar6->_padding_;
        if ((iVar5 <= *(int *)(*(longlong *)&(FVar8.Handle)->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&(FVar8.Handle)->field_0x10 + 0x30) + (longlong)iVar5 * 8)
            == &pUVar6->_padding_)) goto LAB_149b70ba0;
      }
    }
LAB_149b70b9d:
    FVar8.Handle = (UObject *)0x0;
  }
  else {
    pUVar6 = UPCGCreateAttributeSetSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar6);
    if (!bVar3) goto LAB_149b70b9d;
    FVar8 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149b70ba0:
  if (((UPCGSettings *)FVar8.Handle == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateAttribute.cpp"
                         ,0x211,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FPCGAttributePropertySelector::GetName
            ((FPCGAttributePropertySelector *)
             &((UPCGSettings *)(FVar8.Handle + 10))->OverriddenSettingsPropertyBag);
  pUVar6 = Z_Construct_UClass_UPCGParamData_NoRegister();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  this_01 = (UPCGData *)(pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  (**(code **)(this_01->_padding_ + 0x348))
            (this_01,&local_98,&((UPCGSettings *)(FVar8.Handle + 10))->OverriddenSettingsPropertyBag
            );
  bVar3 = UPCGData::IsSupportedMetadataDomainID(this_01,&local_98);
  if (bVar3) {
    pUVar10 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
    if ((pUVar10 == (UPCGParamData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutputData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateAttribute.cpp"
                           ,0x21e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_02 = (UPCGMetadata *)(**(code **)(pUVar10->_padding_ + 0x328))(pUVar10);
    this_03 = UPCGMetadata::GetMetadataDomainFromSelector
                        (this_02,(FPCGAttributePropertySelector *)
                                 &((UPCGSettings *)(FVar8.Handle + 10))->
                                  OverriddenSettingsPropertyBag);
    if (this_03 != (FPCGMetadataDomain *)0x0) {
      FPCGMetadataDomain::AddEntry(this_03,-1);
      local_a8.OutputAttributeName = local_res18[0];
      local_a8.Metadata = this_03;
      pFVar11 = FPCGMetadataTypesConstantStruct::
                Dispatcher<_PCGCreateAttribute::ClearOrCreateAttribute_::__l2::<lambda_1>_>
                          ((FPCGMetadataTypesConstantStruct *)
                           &((UPCGSettings *)(FVar8.Handle + 5))->_padding_,&local_a8);
      if (pFVar11 == (FPCGMetadataAttributeBase *)0x0) {
        if (1 < (byte)LogPCG._0_1_) {
          pFVar12 = FText::FromName(&local_58,local_res18);
          pFVar13 = FTextFormat::FTextFormat
                              (&local_48,&PCGCreateAttributeConstants::ErrorCreatingAttributeMessage
                               ,Default);
          pFVar12 = FText::Format<FText>(&local_68,pFVar13,pFVar12);
          FText::ToString(pFVar12);
          FPCGContext::GetTaskName(param_1,&local_78);
          FPCGContext::GetExecutionSourceName(param_1,&local_88);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
        }
      }
      else {
        iVar5 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar5 + 1;
        this_04 = (FPCGDataPtrWrapper *)
                  ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar5 * 0x78)
        ;
        this_04[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_04[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_04[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_04[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_04[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (this_04->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_04->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        this_04[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_04[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_04[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_04[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_04[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&this_04[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&this_04[4].Data.field0_0x0 + 4) = 0;
        this_04[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_04[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&this_04[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_04[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(this_04,(UPCGData *)pUVar10);
      }
      goto LAB_149b70e49;
    }
  }
  PCGLog::Metadata::LogInvalidMetadataDomain
            ((FPCGAttributePropertySelector *)
             &((UPCGSettings *)(FVar8.Handle + 10))->OverriddenSettingsPropertyBag,param_1);
LAB_149b70e49:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149b98890

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
FPCGCreateAttributeElement::SupportsBasePointDataInputs
          (FPCGCreateAttributeElement *this,FPCGContext *param_1)

{
  return true;
}

