// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b03740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGAddTagElement::ExecuteInternal(FPCGAddTagElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
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
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  <lambda_1> <Var22;
  undefined1 local_res18 [8];
  int local_res20;
  TObjectPtr<UPCGSettings>_u_0 local_f8;
  FScriptContainerElement *local_f0;
  int local_e8;
  int local_e4;
  FString local_e0;
  FString local_d0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_c0;
  undefined1 local_b0 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  TVar8.DebugPtr = (UPCGSettings *)0x0;
  <Var22 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId43,"FPCGAddTagElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAddTag.cpp"
               ,0x2b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId43);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAddTag.cpp"
                         ,0x2d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar6 = UPCGAddTagSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar6);
    if (bVar3) {
      TVar8.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    goto LAB_149b038c6;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar7 = UPCGNode::GetSettings(this_00), pUVar7 == (UPCGSettings *)0x0)) {
    pFVar9 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAddTagSettings>_::__l2::<lambda_1>_>
                       (&(param_1->InputData).TaggedData,<Var22);
    if (pFVar9 != (FPCGTaggedData *)0x0) {
      local_f8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar9->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_f8.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b038c3;
        UE::GC::MarkAsReachable((UObject *)local_f8.DebugPtr);
      }
      if (local_f8.DebugPtr != (UPCGSettings *)0x0) {
        pUVar6 = UPCGAddTagSettings::StaticClass();
        bVar3 = FObjectPtr::IsA(&local_f8.ObjectPtr,pUVar6);
        TVar8 = local_f8;
        if (bVar3) goto LAB_149b038c6;
      }
    }
  }
  else {
    pUVar7 = UPCGNode::GetSettings(this_00);
    TVar8.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar7);
    if (TVar8.DebugPtr != (UPCGSettings *)0x0) {
      pUVar6 = UPCGAddTagSettings::StaticClass();
      iVar16 = (int)pUVar6->_padding_;
      if ((iVar16 <= *(int *)((TVar8.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar16 * 8)
          == &pUVar6->_padding_)) goto LAB_149b038c6;
    }
  }
LAB_149b038c3:
  TVar8.DebugPtr = (UPCGSettings *)0x0;
LAB_149b038c6:
  if ((TVar8.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAddTag.cpp"
                         ,0x30,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pTVar10 = FPCGDataCollection::GetInputsByPin
                      (&param_1->InputData,&local_c0,&PCGPinConstants::DefaultInputLabel);
  pFVar1 = &param_1->OutputData;
  if (pFVar1 != (FPCGDataCollection *)pTVar10) {
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data,
               (param_1->OutputData).TaggedData.ArrayNum);
    pFVar20 = (pFVar1->TaggedData).AllocatorInstance.Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pFVar1->TaggedData).AllocatorInstance.Data = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->OutputData).TaggedData.ArrayNum = pTVar10->ArrayNum;
    (param_1->OutputData).TaggedData.ArrayMax = pTVar10->ArrayMax;
    pTVar10->ArrayNum = 0;
    pTVar10->ArrayMax = 0;
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
  if ((FPCGTaggedData *)local_c0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  bVar3 = *(char *)((longlong)&TVar8.DebugPtr[1]._padding_ + 1) == '\0';
  if (bVar3) {
    pTVar11 = PCGHelpers::GetStringArrayFromCommaSeparatedList
                        (&local_a8,(FString *)(TVar8.DebugPtr + 1));
  }
  else {
    pTVar11 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                        (&local_98,(FString *)(TVar8.DebugPtr + 1),param_1);
  }
  pFVar20 = (pTVar11->AllocatorInstance).Data;
  (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_res20 = pTVar11->ArrayNum;
  lVar21 = (longlong)local_res20;
  pTVar11->ArrayNum = 0;
  pTVar11->ArrayMax = 0;
  local_c0.AllocatorInstance.Data = pFVar20;
  if ((bVar3) &&
     (DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum),
     local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if ((!bVar3) &&
     (DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum),
     local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  pFVar14 = pFVar20 + lVar21 * 0x10;
  do {
    FVar12.Data = local_c0.AllocatorInstance.Data;
    if (pFVar20 == pFVar14) {
      DestructItems<FString,int>((FString *)local_c0.AllocatorInstance.Data,local_res20);
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
      if ((bool)<Var22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    if ((char)TVar8.DebugPtr[1]._padding_ == '\0') {
      pwVar13 = *(wchar_t **)pFVar20;
      for (pwVar17 = pwVar13; pwVar17 != pwVar13 + *(int *)(pFVar20 + 8); pwVar17 = pwVar17 + 1) {
        if (*pwVar17 == L':') {
          iVar16 = (int)((longlong)pwVar17 - (longlong)pwVar13 >> 1);
          if (iVar16 != -1) {
            if (*(int *)(pFVar20 + 8) == 0) {
              pwVar13 = L"";
              iVar5 = 0;
              if (iVar16 < 0) {
                iVar5 = iVar16;
              }
            }
            else {
              iVar5 = *(int *)(pFVar20 + 8) + -1;
              if (iVar16 < iVar5) {
                iVar5 = iVar16;
              }
            }
            iVar19 = 0;
            if (0 < iVar5) {
              iVar19 = iVar5;
            }
            ::FString::ConstructFromPtrSize(&local_58,pwVar13,iVar19);
            ::FString::RightChop((FString *)pFVar20,&local_68,iVar16);
            ::FString::ConcatFF(&local_78,(FString *)&TVar8.DebugPtr[1]._padding_,&local_58);
            ::FString::ConcatFF(&local_88,&local_78,(FString *)&TVar8.DebugPtr[1]._padding_);
            ::FString::ConcatFF(&local_e0,&local_88,&local_68);
            local_f0 = local_e0.Data.AllocatorInstance.Data;
            local_e8 = local_e0.Data.ArrayNum;
            local_e4 = local_e0.Data.ArrayMax;
            local_e0.Data.ArrayNum = 0;
            local_e0.Data.ArrayMax = 0;
            local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            FVar12.Data = local_58.Data.AllocatorInstance.Data;
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
              FVar12.Data = local_58.Data.AllocatorInstance.Data;
            }
            goto LAB_149b03a85;
          }
          break;
        }
      }
    }
    ::FString::ConcatFF(&local_48,(FString *)&TVar8.DebugPtr[1]._padding_,(FString *)pFVar20);
    ::FString::ConcatFF(&local_d0,&local_48,(FString *)&TVar8.DebugPtr[1]._padding_);
    local_f0 = local_d0.Data.AllocatorInstance.Data;
    local_e8 = local_d0.Data.ArrayNum;
    local_e4 = local_d0.Data.ArrayMax;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar12.Data = local_48.Data.AllocatorInstance.Data;
LAB_149b03a85:
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    iVar16 = (param_1->OutputData).TaggedData.ArrayNum;
    pFVar18 = (pFVar1->TaggedData).AllocatorInstance.Data;
    pFVar15 = pFVar18 + (longlong)iVar16 * 0x78;
    while( true ) {
      if ((param_1->OutputData).TaggedData.ArrayNum != iVar16) {
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar18 == pFVar15) break;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar18 + 0x10),
                 (FString *)local_b0,(bool *)&local_f0);
      pFVar18 = pFVar18 + 0x78;
    }
    if (local_f0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0);
    }
    pFVar20 = pFVar20 + 0x10;
  } while( true );
}

// ExecutionLoopMode @ 149b11a80

EPCGElementExecutionLoopMode __thiscall
FPCGAddTagElement::ExecutionLoopMode(FPCGAddTagElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b2d0e0

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
FPCGAddTagElement::SupportsBasePointDataInputs(FPCGAddTagElement *this,FPCGContext *param_1)

{
  return true;
}

