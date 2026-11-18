// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149b04e10

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
FPCGAttributeGetFromIndexElement::ExecuteInternal
          (FPCGAttributeGetFromIndexElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  UPCGMetadata *this_01;
  code *pcVar2;
  longlong lVar3;
  FObjectPtr_u_0 FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  long64 lVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  UPCGParamData *pUVar14;
  FPCGTaggedData *pFVar15;
  ulonglong uVar16;
  FObjectPtr_u_0 *pFVar17;
  FFormatArgumentValue_u_8 FVar18;
  ForAnyElementType FVar19;
  bool bVar20;
  <lambda_1> local_res10;
  undefined1 local_res20 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_138;
  uint local_128;
  TObjectPtr<UPCGSettings>_u_0 local_120;
  FObjectPtr_u_0 local_118;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_110;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_100;
  TArray<FName,TSizedDefaultAllocator<32>_> local_f0;
  long64 local_e0;
  FTextFormat local_d8;
  FText local_c8;
  FFormatArgumentValue local_b8;
  undefined4 local_98;
  long64 local_90;
  longlong *local_88;
  undefined4 local_80;
  FString local_78;
  FString local_68;
  FText local_58;
  FTextFormat local_48;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId56,"FPCGAttributeGetFromIndexElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeGetFromIndexElement.cpp"
               ,0x38);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId56);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeGetFromIndexElement.cpp"
                         ,0x3a,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar8 = UPCGAttributeGetFromIndexSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (bVar5) {
      TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar10.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149b04f4e;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
    local_res10 = SUB81(param_1,0);
    pFVar15 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeGetFromIndexSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_res10);
    if (pFVar15 != (FPCGTaggedData *)0x0) {
      local_120.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar15->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_120.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b04f4c;
        UE::GC::MarkAsReachable((UObject *)local_120.DebugPtr);
      }
      if (local_120.DebugPtr != (UPCGSettings *)0x0) {
        pUVar8 = UPCGAttributeGetFromIndexSettings::StaticClass();
        bVar5 = FObjectPtr::IsA(&local_120.ObjectPtr,pUVar8);
        TVar10 = local_120;
        if (bVar5) goto LAB_149b04f4e;
      }
    }
  }
  else {
    pUVar9 = UPCGNode::GetSettings(this_00);
    TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
    if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
      pUVar8 = UPCGAttributeGetFromIndexSettings::StaticClass();
      iVar7 = (int)pUVar8->_padding_;
      if ((iVar7 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8)
          == &pUVar8->_padding_)) goto LAB_149b04f4e;
    }
  }
LAB_149b04f4c:
  TVar10.DebugPtr = (UPCGSettings *)0x0;
LAB_149b04f4e:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeGetFromIndexElement.cpp"
                         ,0x3d,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_110,&PCGPinConstants::DefaultInputLabel);
  lVar3 = TVar10.DebugPtr[1]._padding_;
  uVar16 = (ulonglong)local_110.ArrayNum;
  pFVar17 = (FObjectPtr_u_0 *)(local_110.AllocatorInstance.Data + uVar16 * 0x78);
  local_128 = local_110.ArrayNum;
  FVar19.Data = local_110.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_110.ArrayNum != (uint)uVar16) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if ((FObjectPtr_u_0 *)FVar19.Data == pFVar17) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_110.AllocatorInstance.Data,local_110.ArrayNum);
        if ((FPCGTaggedData *)local_110.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_110.AllocatorInstance.Data);
        }
        if (bVar20) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      local_118 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar19.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if ((UPCGData *)local_118.Handle != (UPCGData *)0x0) {
        UE::GC::MarkAsReachable(local_118.Handle);
        break;
      }
LAB_149b052bc:
      uVar16 = (ulonglong)local_128;
      FVar19.Data = FVar19.Data + 0x78;
    }
    if ((UPCGData *)local_118.Handle == (UPCGData *)0x0) goto LAB_149b052bc;
    pUVar8 = Z_Construct_UClass_UPCGParamData_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_118,pUVar8);
    FVar4 = local_118;
    if (((!bVar5) || ((UPCGData *)local_118.Handle == (UPCGData *)0x0)) ||
       (this_01 = (((TObjectPtr<UPCGMetadata> *)&local_118.Handle[1].field_0x10)->field0_0x0).
                  DebugPtr, this_01 == (UPCGMetadata *)0x0)) goto LAB_149b052bc;
    lVar11 = UPCGMetadata::GetLocalItemCount(this_01);
    FVar18 = (FFormatArgumentValue_u_8)(longlong)(int)lVar3;
    if (lVar11 <= FVar18.IntValue) {
      if (2 < (byte)LogPCG._0_1_) {
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_58,L"PCGAttributeGetFromIndexElement",L"InvalidParamIndex",
                             L"Unable to retrieve entry {0} because there are {1} entries in the AttributeSet"
                            );
        pFVar13 = FTextFormat::FTextFormat(&local_48,pFVar12,Default);
        local_b8.Type = Int;
        local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_b8.TextValue.field0_0x0.TypedValue.Flags = 0;
        local_98 = 0;
        local_88 = (longlong *)0x0;
        local_80 = 0;
        local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.ArrayNum = 2;
        local_b8.field1_0x8 = FVar18;
        local_90 = lVar11;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_138.AllocatorInstance,2,&local_138.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_138.AllocatorInstance.Data,&local_b8,2);
        local_d8.TextFormatData.Object = (pFVar13->TextFormatData).Object;
        local_d8.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar13->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_d8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_c8,&local_d8,&local_138);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
        if ((FFormatArgumentValue *)local_138.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_138.AllocatorInstance.Data);
        }
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 0x10))();
        }
        if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar13->TextFormatData).SharedReferenceCount.ReferenceController);
        FText::ToString(&local_c8);
        FPCGContext::GetTaskName(param_1,&local_68);
        FPCGContext::GetExecutionSourceName(param_1,&local_78);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
      }
      goto LAB_149b052bc;
    }
    pUVar14 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
    if ((pUVar14->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SubParam->Metadata",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeGetFromIndexElement.cpp"
                           ,0x55,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    PCGMetadataHelpers::InitializeMetadataWithDataDomainCopyAndElementsNoCopy
              ((UPCGData *)FVar4.Handle,(UPCGData *)pUVar14);
    local_e0 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar14->_padding_,-1);
    UPCGMetadata::SetAttributes
              ((UPCGMetadata *)pUVar14->_padding_,FVar18.IntValue,this_01,&local_e0);
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    UPCGMetadata::GetAttributes((UPCGMetadata *)pUVar14->_padding_,&local_f0,&local_100);
    iVar7 = (param_1->OutputData).TaggedData.ArrayNum;
    piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
    }
    (param_1->OutputData).TaggedData.ArrayNum = iVar7 + 1;
    pFVar15 = FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)
                         ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                         (longlong)iVar7 * 0x78),(FPCGTaggedData *)FVar19.Data);
    FPCGDataPtrWrapper::operator=(&pFVar15->Data,(UPCGData *)pUVar14);
    if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
    if (local_f0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_149b052bc;
    FMemory::Free(local_f0.AllocatorInstance.Data);
    uVar16 = (ulonglong)local_128;
    FVar19.Data = FVar19.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 149b11ab0

EPCGElementExecutionLoopMode __thiscall
FPCGAttributeGetFromIndexElement::ExecutionLoopMode
          (FPCGAttributeGetFromIndexElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

