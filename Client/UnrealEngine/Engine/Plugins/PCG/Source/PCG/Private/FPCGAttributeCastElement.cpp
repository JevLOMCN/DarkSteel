// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 1499e2620

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

bool __thiscall
FPCGAttributeCastElement::ExecuteInternal(FPCGAttributeCastElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  FObjectPtr_u_0 FVar10;
  longlong lVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  FPCGTaggedData *pFVar15;
  UPCGData *pUVar16;
  FPCGTaggedData *pFVar17;
  uint uVar18;
  FObjectPtr_u_0 local_res10;
  longlong local_res18;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_198;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_188;
  FTextFormat local_178;
  FText local_168;
  TSharedPtr<FCulture,1> local_158;
  FFormatArgumentValue local_148;
  FString local_128;
  FString local_118;
  FText local_108;
  TObjectPtr<UPCGData_const_>_u_0 local_f8;
  UPCGData *pUStack_f0;
  TObjectPtr<UPCGData_const_>_u_0 local_e8 [5];
  FString *local_c0;
  int local_b8;
  FPCGAttributePropertySelector local_a8;
  FPCGContext *local_68;
  undefined2 local_60;
  FText local_58;
  FTextFormat local_48;
  
  local_res10.Handle = local_res10.Handle & 0xffffffff00000000;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGAttributeCast.cpp"
                         ,0x4d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar8 = UPCGAttributeCastSettings::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (bVar4) {
      FVar10 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      FVar10.Handle = (UObject *)0x0;
    }
    goto LAB_1499e2720;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
    pFVar17 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeCastSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
    if (pFVar17 != (FPCGTaggedData *)0x0) {
      local_res10 = (FObjectPtr_u_0)(pFVar17->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSettings *)local_res10.Handle == (UPCGSettings *)0x0) goto LAB_1499e271d;
        UE::GC::MarkAsReachable(local_res10.Handle);
      }
      if ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0) {
        pUVar8 = UPCGAttributeCastSettings::StaticClass();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar8);
        FVar10 = local_res10;
        if (bVar4) goto LAB_1499e2720;
      }
    }
  }
  else {
    pUVar9 = UPCGNode::GetSettings(this_00);
    FVar10.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
    if ((UPCGSettings *)FVar10.Handle != (UPCGSettings *)0x0) {
      pUVar8 = UPCGAttributeCastSettings::StaticClass();
      iVar7 = (int)pUVar8->_padding_;
      if ((iVar7 <= *(int *)(*(longlong *)&(FVar10.Handle)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(FVar10.Handle)->field_0x10 + 0x30) + (longlong)iVar7 * 8)
          == &pUVar8->_padding_)) goto LAB_1499e2720;
    }
  }
LAB_1499e271d:
  FVar10.Handle = (UObject *)0x0;
LAB_1499e2720:
  if (((UPCGSettings *)FVar10.Handle == (UPCGSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGAttributeCast.cpp"
                         ,0x50,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_188,&PCGPinConstants::DefaultInputLabel);
  uVar18 = 0;
  if (0 < local_188.ArrayNum) {
    local_res18 = 0;
    do {
      lVar11 = local_res18;
      uVar6 = 0;
      if ((int)uVar18 < local_188.ArrayNum) {
        uVar6 = ~uVar18 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar17 = (FPCGTaggedData *)(local_188.AllocatorInstance.Data + lVar11);
      pUVar16 = (pFVar17->Data).Data.field0_0x0.DebugPtr;
      if (pUVar16 == (UPCGData *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7859889528633294937>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGAttributeCast.cpp"
                           ,0x59,"Input.Data");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
LAB_1499e28a7:
        if (1 < (byte)LogPCG._0_1_) {
          local_158.Object = (FCulture *)0x0;
          local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar12 = FText::AsNumber(&local_58,uVar18,(FNumberFormattingOptions *)0x0,&local_158);
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_108,L"PCGAttributeCastElement",L"InvalidData",
                               L"Only support Spatial and Attribute Set, Input {0} is neither of them. Skipped"
                              );
          pFVar14 = FTextFormat::FTextFormat(&local_48,pFVar13,Default);
          local_148.Type = Text;
          FText::FText((FText *)&local_148.TextValue,pFVar12);
          if ((local_148.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_198.AllocatorInstance,1,&local_198.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_198.AllocatorInstance.Data,&local_148,1);
          local_178.TextFormatData.Object = (pFVar14->TextFormatData).Object;
          local_178.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar14->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_178.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_178.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_178.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_168,&local_178,&local_198);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
          if ((FFormatArgumentValue *)local_198.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_198.AllocatorInstance.Data);
          }
          if (local_148.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_148.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar14->TextFormatData).SharedReferenceCount.ReferenceController);
          pIVar2 = (pFVar12->TextData).Reference;
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 0x10))();
          }
          FText::ToString(&local_168);
          FPCGContext::GetTaskName(param_1,&local_118);
          FPCGContext::GetExecutionSourceName(param_1,&local_128);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (local_168.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
          }
          if (local_108.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_158.SharedReferenceCount.ReferenceController);
        }
      }
      else {
        lVar11 = (**(code **)(pUVar16->_padding_ + 800))();
        if (lVar11 == 0) goto LAB_1499e28a7;
        pFVar15 = (FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
        if (((pFVar15 <= pFVar17) && (pFVar17 < pFVar15 + (param_1->OutputData).TaggedData.ArrayMax)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
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
                             (longlong)iVar7 * 0x78),pFVar17);
        pUVar16 = (pFVar17->Data).Data.field0_0x0.DebugPtr;
        pUVar16 = (UPCGData *)(**(code **)(pUVar16->_padding_ + 0x310))(pUVar16,param_1,1);
        if ((pUVar16 == (UPCGData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutputData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGAttributeCast.cpp"
                               ,0x62,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        local_f8.DebugPtr = (UPCGData *)0x0;
        pUStack_f0 = (UPCGData *)0x0;
        FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                  ((FPCGAttributePropertyInputSelector *)&local_e8[0].ObjectPtr);
        FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
                  ((FPCGAttributePropertyOutputSelector *)&local_a8);
        local_68 = (FPCGContext *)0x0;
        local_60 = 0xff;
        local_f8 = (pFVar17->Data).Data.field0_0x0;
        pUStack_f0 = pUVar16;
        FPCGAttributePropertySelector::operator=
                  ((FPCGAttributePropertySelector *)&local_e8[0].ObjectPtr,
                   (FPCGAttributePropertySelector *)(FVar10.Handle + 5));
        FPCGAttributePropertySelector::operator=
                  (&local_a8,
                   (FPCGAttributePropertySelector *)
                   &((UPCGSettings *)(FVar10.Handle + 5))->_padding_);
        local_60 = CONCAT11(1,(char)((UPCGSettings *)(FVar10.Handle + 5))->_padding_);
        local_68 = param_1;
        bVar4 = PCGMetadataHelpers::CopyAttribute((FPCGCopyAttributeParams *)&local_f8.ObjectPtr);
        if (bVar4) {
          FPCGDataPtrWrapper::operator=(&pFVar15->Data,pUVar16);
        }
        DestructItems<FString,int>
                  ((FString *)local_a8.ExtraNames.AllocatorInstance.Data,
                   local_a8.ExtraNames.ArrayNum);
        if (local_a8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.ExtraNames.AllocatorInstance.Data);
        }
        DestructItems<FString,int>(local_c0,local_b8);
        if (local_c0 != (FString *)0x0) {
          FMemory::Free(local_c0);
        }
      }
      local_res18 = local_res18 + 0x78;
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < local_188.ArrayNum);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
  if ((FPCGTaggedData *)local_188.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  return true;
}

// ExecutionLoopMode @ 1499f1a40

EPCGElementExecutionLoopMode __thiscall
FPCGAttributeCastElement::ExecutionLoopMode(FPCGAttributeCastElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149a101f0

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
FPCGAttributeCastElement::SupportsBasePointDataInputs
          (FPCGAttributeCastElement *this,FPCGContext *param_1)

{
  return true;
}

