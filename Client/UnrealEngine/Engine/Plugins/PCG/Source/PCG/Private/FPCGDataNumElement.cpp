// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149b78e60

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

bool __thiscall FPCGDataNumElement::ExecuteInternal(FPCGDataNumElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGSettings *pUVar7;
  TObjectPtr<UPCGSettings>_u_0 TVar8;
  FPCGTaggedData *pFVar9;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar10;
  UPCGParamData *pUVar11;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<int> *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FPCGDataPtrWrapper *this_02;
  bool bVar16;
  int local_res10 [2];
  TObjectPtr<UPCGSettings>_u_0 local_res18;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_b8;
  FName local_a8;
  FPCGMetadataDomainID local_a0;
  FString local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  TVar8.DebugPtr = (UPCGSettings *)0x0;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId59,"FPCGDataNumElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataNum.cpp"
               ,0x3b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId59);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataNum.cpp"
                         ,0x3d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar6 = UPCGDataNumSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar6);
    if (bVar3) {
      TVar8.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    goto LAB_149b78fde;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar7 = UPCGNode::GetSettings(this_00), pUVar7 == (UPCGSettings *)0x0)) {
    pFVar9 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDataNumSettings>_::__l2::<lambda_1>_>
                       (&(param_1->InputData).TaggedData,local_res10[0]._0_1_);
    if (pFVar9 != (FPCGTaggedData *)0x0) {
      local_res18.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar9->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_res18.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b78fdb;
        UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
      }
      if (local_res18.DebugPtr != (UPCGSettings *)0x0) {
        pUVar6 = UPCGDataNumSettings::StaticClass();
        bVar3 = FObjectPtr::IsA(&local_res18.ObjectPtr,pUVar6);
        TVar8 = local_res18;
        if (bVar3) goto LAB_149b78fde;
      }
    }
  }
  else {
    pUVar7 = UPCGNode::GetSettings(this_00);
    TVar8.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar7);
    if (TVar8.DebugPtr != (UPCGSettings *)0x0) {
      pUVar6 = UPCGDataNumSettings::StaticClass();
      iVar5 = (int)pUVar6->_padding_;
      if ((iVar5 <= *(int *)((TVar8.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
          == &pUVar6->_padding_)) goto LAB_149b78fde;
    }
  }
LAB_149b78fdb:
  TVar8.DebugPtr = (UPCGSettings *)0x0;
LAB_149b78fde:
  if ((TVar8.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataNum.cpp"
                         ,0x40,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pTVar10 = FPCGDataCollection::GetInputsByPin
                      (&param_1->InputData,&local_b8,&PCGPinConstants::DefaultInputLabel);
  local_res10[0] = pTVar10->ArrayNum;
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FPCGTaggedData *)local_b8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  pUVar11 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
  local_a8 = (FName)TVar8.DebugPtr[1]._padding_;
  local_a0 = PCGMetadataDomainID::Default;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar11->_padding_,&local_a0);
  if ((this_01 == (FPCGMetadataDomain *)0x0) ||
     (pFVar12 = FPCGMetadataDomain::CreateAttribute<int>(this_01,local_a8,local_res10,false,false),
     pFVar12 == (FPCGMetadataAttribute<int> *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar13 = FText::FromName(&local_48,(FName *)(TVar8.DebugPtr + 1));
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_58,L"PCGDataNumElement",L"AttributeCreationFailed",
                           L"Failed to create attribute {0}");
      pFVar15 = FTextFormat::FTextFormat(&local_38,pFVar14,Default);
      pFVar13 = FText::Format<FText>(&local_68,pFVar15,pFVar13);
      FText::ToString(pFVar13);
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
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    UPCGMetadata::AddEntry((UPCGMetadata *)pUVar11->_padding_,-1);
    iVar5 = (param_1->OutputData).TaggedData.ArrayNum;
    piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
    }
    (param_1->OutputData).TaggedData.ArrayNum = iVar5 + 1;
    this_02 = (FPCGDataPtrWrapper *)
              ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar5 * 0x78);
    this_02[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    (this_02->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    (this_02->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    this_02[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
    this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
    FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar11);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149b98900

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
FPCGDataNumElement::SupportsBasePointDataInputs(FPCGDataNumElement *this,FPCGContext *param_1)

{
  return true;
}

