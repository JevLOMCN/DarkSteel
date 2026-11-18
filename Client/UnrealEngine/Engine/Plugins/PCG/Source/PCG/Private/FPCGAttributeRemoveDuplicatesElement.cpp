// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b08200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeRemoveDuplicatesElement::ExecuteInternal
          (FPCGAttributeRemoveDuplicatesElement *this,FPCGContext *param_1)

{
  ForAnyElementType *pFVar1;
  UPCGNode *this_00;
  FString *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  UPCGSettings *pUVar14;
  TObjectPtr<UPCGSettings>_u_0 TVar15;
  FPCGAttributePropertySelector *this_01;
  FPCGAttributePropertyInputSelector *pFVar16;
  FPCGTaggedData *pFVar17;
  UPCGData *pUVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  int *piVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  FPCGDataCollection *pFVar25;
  bool bVar26;
  <lambda_1> local_res10;
  undefined1 local_res20 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [32];
  longlong local_120;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_118;
  uint local_108;
  TObjectPtr<UPCGSettings>_u_0 local_100;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  UPCGSettings *local_e8;
  FPCGTaggedData *local_e0;
  undefined **local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  undefined1 local_a0;
  FPCGTaggedData *local_98;
  TObjectPtr<UPropertyBag_const_>_u_0 local_90;
  int local_88;
  undefined1 local_80 [48];
  int local_50;
  
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId53,"FPCGMetadataPartitionElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeRemoveDuplicates.cpp"
               ,0x35);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId53);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeRemoveDuplicates.cpp"
                         ,0x36,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar14 = UPCGNode::GetSettings(this_00), pUVar14 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar17 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeRemoveDuplicatesSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar17 != (FPCGTaggedData *)0x0) {
        local_100.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar17->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_100.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_100.DebugPtr);
        }
        if (local_100.DebugPtr != (UPCGSettings *)0x0) {
          pUVar13 = UPCGAttributeRemoveDuplicatesSettings::StaticClass();
          bVar8 = FObjectPtr::IsA(&local_100.ObjectPtr,pUVar13);
          TVar15 = local_100;
          if (bVar8) goto LAB_149b0838e;
        }
      }
    }
    else {
      pUVar14 = UPCGNode::GetSettings(this_00);
      TVar15.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar14);
      if (TVar15.DebugPtr != (UPCGSettings *)0x0) {
        pUVar13 = UPCGAttributeRemoveDuplicatesSettings::StaticClass();
        iVar12 = (int)pUVar13->_padding_;
        if ((iVar12 <= *(int *)((TVar15.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar15.DebugPtr)->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
            &pUVar13->_padding_)) goto LAB_149b0838e;
      }
    }
  }
  else {
    pUVar13 = UPCGAttributeRemoveDuplicatesSettings::StaticClass();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar13);
    if (bVar8) {
      TVar15.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      goto LAB_149b0838e;
    }
  }
  TVar15.DebugPtr = (UPCGSettings *)0x0;
LAB_149b0838e:
  if ((TVar15.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeRemoveDuplicates.cpp"
                         ,0x39,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  local_140._0_8_ = (FPCGAttributePropertyInputSelector *)0x0;
  local_140._8_8_ = 0;
  PCGHelpers::GetStringArrayFromCommaSeparatedList
            (&local_f8,(FString *)&TVar15.DebugPtr[1]._padding_);
  uVar19 = (ulonglong)(uint)local_f8.ArrayNum;
  if (local_f8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar19);
  }
  if ((int)local_140._12_4_ < local_f8.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,local_f8.ArrayNum,(ForAnyElementType *)local_140,local_140._8_4_,
               (int *)(local_140 + 0xc));
    uVar19 = (ulonglong)(uint)local_f8.ArrayNum;
  }
  iVar12 = (int)uVar19;
  pFVar24 = local_f8.AllocatorInstance.Data + (longlong)iVar12 * 0x10;
  FVar21.Data = local_f8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar19 != iVar12) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar21.Data == pFVar24) break;
    iVar10 = local_140._8_4_;
    if (local_140._8_4_ == local_140._12_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,(ForAnyElementType *)local_140,(int *)(local_140 + 0xc));
    }
    local_140._8_4_ = iVar10 + 1;
    this_01 = (FPCGAttributePropertySelector *)
              FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                        ((FPCGAttributePropertyInputSelector *)
                         (local_140._0_8_ + (longlong)iVar10 * 0x40));
    FPCGAttributePropertySelector::Update(this_01,(FString *)FVar21.Data);
    uVar19 = (ulonglong)(uint)local_f8.ArrayNum;
    FVar21.Data = FVar21.Data + 0x10;
  }
  if (local_140._8_4_ == 0) {
    pUVar14 = TVar15.DebugPtr + 1;
  }
  else {
    pUVar14 = (UPCGSettings *)local_140;
  }
  local_140._16_8_ = pUVar14;
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_118,&PCGPinConstants::DefaultInputLabel);
  local_140._24_8_ = (UPropertyBag *)0x0;
  local_120 = 0;
  pFVar25 = &param_1->OutputData;
  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *)(local_140 + 0x18)
             ,(int)pUVar14->_padding_,Default);
  uVar5 = local_140._16_8_;
  if ((int)local_120 == 0) {
    if (pFVar25 != (FPCGDataCollection *)&local_118) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(pFVar25->TaggedData).AllocatorInstance.Data,
                 (param_1->OutputData).TaggedData.ArrayNum);
      iVar10 = local_118.ArrayNum;
      FVar21.Data = local_118.AllocatorInstance.Data;
      piVar22 = &(param_1->OutputData).TaggedData.ArrayMax;
      iVar12 = *piVar22;
      (param_1->OutputData).TaggedData.ArrayNum = local_118.ArrayNum;
      if ((local_118.ArrayNum == 0) && (iVar12 == 0)) {
        *piVar22 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,local_118.ArrayNum,iVar12,(ForAnyElementType *)pFVar25,local_118.ArrayNum,
                   piVar22);
        ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                  ((pFVar25->TaggedData).AllocatorInstance.Data,(FPCGTaggedData *)FVar21.Data,iVar10
                  );
      }
    }
  }
  else {
    uVar20 = (ulonglong)local_118.ArrayNum;
    local_108 = local_118.ArrayNum;
    local_98 = (FPCGTaggedData *)(local_118.AllocatorInstance.Data + uVar20 * 0x78);
    uVar19 = uVar20;
    FVar21.Data = local_118.AllocatorInstance.Data;
    while( true ) {
      pFVar17 = local_98;
      local_e0 = (FPCGTaggedData *)FVar21.Data;
      if ((int)uVar20 != (int)uVar19) {
        local_148[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_148);
      }
      if ((FPCGTaggedData *)FVar21.Data == pFVar17) break;
      local_e8 = (UPCGSettings *)(((FPCGTaggedData *)FVar21.Data)->Data).Data.field0_0x0.DebugPtr;
      if (0 < (int)local_120) {
        local_140._16_8_ = 0;
        uVar23 = 0;
        do {
          pUVar14 = local_e8;
          uVar11 = 0;
          if ((int)uVar23 < (int)*(longlong *)(uVar5 + 8)) {
            uVar11 = ~uVar23 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          pFVar16 = FPCGAttributePropertyInputSelector::CopyAndFixLast
                              ((FPCGAttributePropertyInputSelector *)
                               ((longlong)(int)uVar23 * 0x40 + *(longlong *)uVar5),
                               (FPCGAttributePropertyInputSelector *)local_80,(UPCGData *)pUVar14);
          local_d8 = &___7FPCGAttributePropertySelector__6B_;
          local_d0 = *(undefined4 *)&pFVar16->field_0x8;
          local_cc = *(undefined8 *)&pFVar16->field_0xc;
          local_c4 = *(undefined8 *)&pFVar16->field_0x14;
          local_bc = *(undefined8 *)&pFVar16->field_0x1c;
          local_b0.Data = (FScriptContainerElement *)0x0;
          iVar12 = *(int *)&pFVar16->field_0x30;
          pFVar2 = *(FString **)&pFVar16->field_0x28;
          local_a8 = iVar12;
          if (iVar12 == 0) {
            local_a4 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar12,0,&local_b0,iVar12,&local_a4);
            ConstructItems<FString,FString,int>(local_b0.Data,pFVar2,iVar12);
          }
          local_a0 = pFVar16->field_0x38;
          uVar11 = 0;
          if ((int)uVar23 < (int)local_120) {
            uVar11 = ~uVar23 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          uVar6 = local_140._16_8_;
          plVar4 = (longlong *)local_140._24_8_;
          *(undefined4 *)(local_140._16_8_ + 8 + (longlong)plVar4) = local_d0;
          pFVar1 = (ForAnyElementType *)(local_140._16_8_ + 0x28 + (longlong)plVar4);
          *(undefined8 *)(local_140._16_8_ + 0xc + (longlong)plVar4) = local_cc;
          *(undefined8 *)(local_140._16_8_ + 0x14 + (longlong)plVar4) = local_c4;
          *(undefined8 *)(local_140._16_8_ + 0x1c + (longlong)plVar4) = local_bc;
          if (pFVar1 != &local_b0) {
            DestructItems<FString,int>
                      ((FString *)pFVar1->Data,*(int *)(local_140._16_8_ + 0x30 + (longlong)plVar4))
            ;
            iVar12 = local_a8;
            FVar21.Data = local_b0.Data;
            piVar22 = (int *)(uVar6 + 0x34 + (longlong)plVar4);
            *(int *)(uVar6 + 0x30 + (longlong)plVar4) = local_a8;
            if ((local_a8 == 0) && (*piVar22 == 0)) {
              *piVar22 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_a8,*piVar22,pFVar1,local_a8,piVar22);
              ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)FVar21.Data,iVar12);
            }
          }
          uVar7 = local_140._16_8_;
          *(undefined1 *)(uVar6 + 0x38 + (longlong)plVar4) = local_a0;
          DestructItems<FString,int>((FString *)local_b0.Data,local_a8);
          if (local_b0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data);
          }
          DestructItems<FString,int>((FString *)local_80._40_8_,local_50);
          if ((FString *)local_80._40_8_ != (FString *)0x0) {
            FMemory::Free((void *)local_80._40_8_);
          }
          local_140._16_8_ = uVar7 + 0x40;
          uVar23 = uVar23 + 1;
          FVar21.Data = (FScriptContainerElement *)local_e0;
        } while ((int)uVar23 < (int)local_120);
      }
      piVar22 = &(param_1->OutputData).TaggedData.ArrayMax;
      pFVar25 = &param_1->OutputData;
      pFVar17 = (FPCGTaggedData *)(pFVar25->TaggedData).AllocatorInstance.Data;
      if (((pFVar17 <= FVar21.Data) && (FVar21.Data < pFVar17 + *piVar22)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      iVar12 = (param_1->OutputData).TaggedData.ArrayNum;
      if (iVar12 == *piVar22) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar25,piVar22);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar12 + 1;
      pFVar17 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar25->TaggedData).AllocatorInstance.Data + (longlong)iVar12 * 0x78),
                           (FPCGTaggedData *)FVar21.Data);
      iVar12 = (int)local_120;
      local_90 = (TObjectPtr<UPropertyBag_const_>_u_0)local_140._24_8_;
      if (((int)local_120 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      local_88 = iVar12;
      pUVar18 = PCGMetadataPartitionCommon::RemoveDuplicates
                          ((UPCGData *)local_e8,
                           (TArrayView<FPCGAttributePropertySelector_const_,int> *)
                           &local_90.ObjectPtr,param_1,false);
      if (pUVar18 != (UPCGData *)0x0) {
        FPCGDataPtrWrapper::operator=(&pFVar17->Data,pUVar18);
      }
      uVar20 = (ulonglong)(uint)local_118.ArrayNum;
      FVar21.Data = FVar21.Data + 0x78;
      uVar19 = (ulonglong)local_108;
    }
  }
  DestructItems<FPCGAttributePropertySelector,int>
            ((FPCGAttributePropertySelector *)local_140._24_8_,(int)local_120);
  if ((UPropertyBag *)local_140._24_8_ != (UPropertyBag *)0x0) {
    FMemory::Free((void *)local_140._24_8_);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
  if ((FPCGTaggedData *)local_118.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  DestructItems<FPCGAttributePropertyInputSelector,int>
            ((FPCGAttributePropertyInputSelector *)local_140._0_8_,local_140._8_4_);
  if ((FPCGAttributePropertyInputSelector *)local_140._0_8_ !=
      (FPCGAttributePropertyInputSelector *)0x0) {
    FMemory::Free((void *)local_140._0_8_);
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b11b40

EPCGElementExecutionLoopMode __thiscall
FPCGAttributeRemoveDuplicatesElement::ExecutionLoopMode
          (FPCGAttributeRemoveDuplicatesElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b2d170

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
FPCGAttributeRemoveDuplicatesElement::SupportsBasePointDataInputs
          (FPCGAttributeRemoveDuplicatesElement *this,FPCGContext *param_1)

{
  return true;
}

