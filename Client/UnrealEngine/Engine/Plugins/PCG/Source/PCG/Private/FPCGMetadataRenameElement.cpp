// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b108b0

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
FPCGMetadataRenameElement::ExecuteInternal(FPCGMetadataRenameElement *this,FPCGContext *param_1)

{
  UPCGNode *this_00;
  UPCGData *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGSettings *pUVar7;
  TObjectPtr<UPCGSettings>_u_0 TVar8;
  FPCGTaggedData *pFVar9;
  UPCGMetadata *this_01;
  FString *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  FPCGMetadataDomain *pFVar13;
  FText *pFVar14;
  FText *pFVar15;
  ulonglong uVar16;
  TRefCountPtr<ITextData> TVar17;
  int *piVar18;
  FPCGDataCollection *pFVar19;
  int *piVar20;
  ForAnyElementType FVar21;
  <lambda_1> <Var22;
  undefined1 local_res18 [8];
  uint local_res20;
  TObjectPtr<UPCGSettings>_u_0 local_1a0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_198;
  UPCGMetadata *local_188;
  FName local_180;
  FName local_178 [2];
  FPCGAttributePropertySelector local_168;
  FPCGTaggedData *local_128;
  FString local_120;
  FText local_110;
  FString local_100;
  FString local_f0;
  FText local_e0;
  FText local_d0;
  FString local_c0;
  FString local_b0;
  FText local_a0;
  FText local_90;
  FTextFormat local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  <Var22 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId63,"FPCGMetadataRenameElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataRenameElement.cpp"
               ,0x3f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId63);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar6 = UPCGMetadataRenameSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar6);
    if (bVar3) {
      TVar8.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar8.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149b109c8;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar7 = UPCGNode::GetSettings(this_00), pUVar7 == (UPCGSettings *)0x0)) {
    pFVar9 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMetadataRenameSettings>_::__l2::<lambda_1>_>
                       (&(param_1->InputData).TaggedData,<Var22);
    if (pFVar9 != (FPCGTaggedData *)0x0) {
      local_1a0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar9->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_1a0.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b109c1;
        UE::GC::MarkAsReachable((UObject *)local_1a0.DebugPtr);
      }
      if (local_1a0.DebugPtr != (UPCGSettings *)0x0) {
        pUVar6 = UPCGMetadataRenameSettings::StaticClass();
        bVar3 = FObjectPtr::IsA(&local_1a0.ObjectPtr,pUVar6);
        TVar8 = local_1a0;
        if (bVar3) goto LAB_149b109c8;
      }
    }
  }
  else {
    pUVar7 = UPCGNode::GetSettings(this_00);
    TVar8.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar7);
    if (TVar8.DebugPtr != (UPCGSettings *)0x0) {
      pUVar6 = UPCGMetadataRenameSettings::StaticClass();
      iVar5 = (int)pUVar6->_padding_;
      if ((iVar5 <= *(int *)((TVar8.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
          == &pUVar6->_padding_)) goto LAB_149b109c8;
    }
  }
LAB_149b109c1:
  TVar8.DebugPtr = (UPCGSettings *)0x0;
LAB_149b109c8:
  if ((TVar8.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataRenameElement.cpp"
                         ,0x42,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_198,&PCGPinConstants::DefaultInputLabel);
  local_180 = (FName)TVar8.DebugPtr[1]._padding_;
  uVar16 = (ulonglong)local_198.ArrayNum;
  local_128 = (FPCGTaggedData *)(local_198.AllocatorInstance.Data + uVar16 * 0x78);
  local_res20 = local_198.ArrayNum;
  FVar21.Data = local_198.AllocatorInstance.Data;
  do {
    while( true ) {
      pFVar9 = local_128;
      pFVar19 = &param_1->OutputData;
      if (local_198.ArrayNum != (uint)uVar16) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      piVar20 = &(param_1->OutputData).TaggedData.ArrayMax;
      piVar18 = &(param_1->OutputData).TaggedData.ArrayNum;
      if ((FPCGTaggedData *)FVar21.Data == pFVar9) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
        if ((FPCGTaggedData *)local_198.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_198.AllocatorInstance.Data);
        }
        if ((bool)<Var22) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      pFVar9 = (FPCGTaggedData *)(pFVar19->TaggedData).AllocatorInstance.Data;
      if (((pFVar9 <= FVar21.Data) && (FVar21.Data < pFVar9 + *piVar20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = *piVar18;
      if (iVar5 == *piVar20) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)pFVar19,piVar20);
      }
      *piVar18 = iVar5 + 1;
      pFVar9 = FPCGTaggedData::FPCGTaggedData
                         ((FPCGTaggedData *)
                          ((pFVar19->TaggedData).AllocatorInstance.Data + (longlong)iVar5 * 0x78),
                          (FPCGTaggedData *)FVar21.Data);
      pUVar1 = (((FPCGTaggedData *)FVar21.Data)->Data).Data.field0_0x0.DebugPtr;
      if ((pUVar1 != (UPCGData *)0x0) &&
         (this_01 = (UPCGMetadata *)(**(code **)(pUVar1->_padding_ + 800))(),
         this_01 != (UPCGMetadata *)0x0)) break;
      PCGLog::Metadata::LogInvalidMetadata(param_1);
LAB_149b10ec6:
      uVar16 = (ulonglong)local_res20;
      FVar21.Data = FVar21.Data + 0x78;
    }
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              ((FPCGAttributePropertyInputSelector *)(TVar8.DebugPtr + 1),
               (FPCGAttributePropertyInputSelector *)&local_168,
               (((FPCGTaggedData *)FVar21.Data)->Data).Data.field0_0x0.DebugPtr);
    bVar3 = FPCGAttributePropertySelector::IsBasicAttribute(&local_168);
    if (bVar3) {
      pFVar13 = UPCGMetadata::GetConstMetadataDomainFromSelector(this_01,&local_168);
      if (pFVar13 == (FPCGMetadataDomain *)0x0) {
        PCGLog::Metadata::LogInvalidMetadataDomain(&local_168,param_1);
      }
      else {
        local_178[0] = local_168.AttributeName;
        bVar3 = FPCGMetadataDomain::HasAttribute(pFVar13,local_168.AttributeName);
        if (bVar3) {
          local_188 = (UPCGMetadata *)0x0;
          PCGMetadataElementCommon::DuplicateTaggedData
                    (param_1,(FPCGTaggedData *)FVar21.Data,pFVar9,&local_188);
          if ((((local_188 == (UPCGMetadata *)0x0) ||
               (pFVar13 = UPCGMetadata::GetMetadataDomainFromSelector(local_188,&local_168),
               pFVar13 == (FPCGMetadataDomain *)0x0)) ||
              (bVar3 = FPCGMetadataDomain::RenameAttribute(pFVar13,local_178[0],local_180), !bVar3))
             && (2 < (byte)LogPCG._0_1_)) {
            pFVar11 = FText::FromName(&local_70,&local_180);
            pFVar14 = FText::FromName(&local_60,local_178);
            pFVar15 = FText::AsLocalizable_Advanced_LocText
                                (&local_90,L"PCGMetadataRenameElement",L"AttributeRenamedFailed",
                                 L"Failed to rename attribute from \'{0}\' to \'{1}\'");
            pFVar12 = FTextFormat::FTextFormat(&local_50,pFVar15,Default);
            pFVar11 = FText::Format<FText,FText>(&local_a0,pFVar12,pFVar14,pFVar11);
            FText::ToString(pFVar11);
            FPCGContext::GetTaskName(param_1,&local_b0);
            FPCGContext::GetExecutionSourceName(param_1,&local_c0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            TVar17.Reference = local_90.TextData.Reference;
            if (local_a0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
              TVar17.Reference = local_90.TextData.Reference;
            }
            goto LAB_149b10cd3;
          }
        }
      }
    }
    else if (2 < (byte)LogPCG._0_1_) {
      pFVar10 = FPCGAttributePropertySelector::ToString(&local_168,&local_120,false);
      FText::FromString(&local_110,pFVar10);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_d0,L"PCGMetadataRenameElement",L"InvalidInputName",
                           L"Attribute to rename \'{0}\' is not an attribute.");
      pFVar12 = FTextFormat::FTextFormat(&local_80,pFVar11,Default);
      pFVar11 = FText::Format<FText>(&local_e0,pFVar12,&local_110);
      FText::ToString(pFVar11);
      FPCGContext::GetTaskName(param_1,&local_f0);
      FPCGContext::GetExecutionSourceName(param_1,&local_100);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      TVar17.Reference = local_d0.TextData.Reference;
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
        TVar17.Reference = local_d0.TextData.Reference;
      }
LAB_149b10cd3:
      if (TVar17.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar17.Reference + 0x10))();
      }
    }
    DestructItems<FString,int>
              ((FString *)local_168.ExtraNames.AllocatorInstance.Data,local_168.ExtraNames.ArrayNum)
    ;
    if (local_168.ExtraNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
    goto LAB_149b10ec6;
    FMemory::Free(local_168.ExtraNames.AllocatorInstance.Data);
    uVar16 = (ulonglong)local_res20;
    FVar21.Data = FVar21.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 149b11bb0

EPCGElementExecutionLoopMode __thiscall
FPCGMetadataRenameElement::ExecutionLoopMode(FPCGMetadataRenameElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b2d210

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
FPCGMetadataRenameElement::SupportsBasePointDataInputs
          (FPCGMetadataRenameElement *this,FPCGContext *param_1)

{
  return true;
}

