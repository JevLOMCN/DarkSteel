// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149b80640

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
FPCGFilterByIndexElement::ExecuteInternal(FPCGFilterByIndexElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGNode *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  EPCGParserResult EVar8;
  uint uVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  TObjectPtr<UPCGSettings>_u_0 TVar12;
  FPCGTaggedData *pFVar13;
  FName FVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  FPCGDataCollection *pFVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStackY_2e8 [32];
  <lambda_1> local_2a8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_2a0;
  TObjectPtr<UPCGSettings>_u_0 local_290;
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  TStringView<wchar_t> local_268;
  FPCGIndexCollection local_258;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId54,"FPCGFilterByIndexElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterByIndex.cpp"
               ,0x36);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId54);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
      pFVar13 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGFilterByIndexSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_2a8);
      if (pFVar13 != (FPCGTaggedData *)0x0) {
        local_290.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar13->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_290.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_290.DebugPtr);
        }
        if (local_290.DebugPtr != (UPCGSettings *)0x0) {
          pUVar10 = UPCGFilterByIndexSettings::StaticClass();
          bVar6 = FObjectPtr::IsA(&local_290.ObjectPtr,pUVar10);
          TVar12 = local_290;
          if (bVar6) goto LAB_149b807cc;
        }
      }
    }
    else {
      pUVar11 = UPCGNode::GetSettings(this_00);
      TVar12.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
      if (TVar12.DebugPtr != (UPCGSettings *)0x0) {
        pUVar10 = UPCGFilterByIndexSettings::StaticClass();
        iVar2 = (int)pUVar10->_padding_;
        if ((iVar2 <= *(int *)((TVar12.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar10->_padding_)) goto LAB_149b807cc;
      }
    }
    TVar12.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar10 = UPCGFilterByIndexSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    TVar12.DebugPtr = (UPCGSettings *)0x0;
    if (bVar6) {
      TVar12.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_149b807cc:
  uVar16 = 0;
  if ((TVar12.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterByIndex.cpp"
                         ,0x39,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_2a0,&PCGPinConstants::DefaultInputLabel);
  if (local_2a0.ArrayNum == 0) goto LAB_149b80a57;
  local_258.IndexRanges.AllocatorInstance.SecondaryData =
       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
  uVar19 = 0;
  local_258.IndexRanges.ArrayNum = 0;
  local_258.IndexRanges.ArrayMax = 0x40;
  local_258.ArraySize = -1;
  if (-1 < local_2a0.ArrayNum) {
    local_258.ArraySize = local_2a0.ArrayNum;
  }
  local_288.DataPtr = (wchar_t *)TVar12.DebugPtr[1]._padding_;
  iVar2 = (int)TVar12.DebugPtr[1]._padding_;
  local_288.Size = iVar2 - 1;
  if (iVar2 == 0) {
    local_288.Size = uVar19;
  }
  EVar8 = PCGParser::ParseIndexRanges(&local_258,&local_288);
  if (EVar8 == Success) {
LAB_149b808c0:
    pFVar18 = &param_1->OutputData;
    if (pFVar18 != (FPCGDataCollection *)&local_2a0) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(pFVar18->TaggedData).AllocatorInstance.Data,
                 (param_1->OutputData).TaggedData.ArrayNum);
      iVar5 = local_2a0.ArrayNum;
      FVar4.Data = local_2a0.AllocatorInstance.Data;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      iVar2 = *piVar1;
      (param_1->OutputData).TaggedData.ArrayNum = local_2a0.ArrayNum;
      if ((local_2a0.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,local_2a0.ArrayNum,iVar2,(ForAnyElementType *)pFVar18,local_2a0.ArrayNum,
                   piVar1);
        ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                  ((pFVar18->TaggedData).AllocatorInstance.Data,(FPCGTaggedData *)FVar4.Data,iVar5);
      }
    }
    uVar17 = uVar16;
    if (0 < (param_1->OutputData).TaggedData.ArrayNum) {
      do {
        uVar15 = (uint)uVar16;
        bVar6 = PCGIndexing::FPCGIndexCollection::ContainsIndex(&local_258,uVar15);
        if ((char)TVar12.DebugPtr[1]._padding_ != '\0') {
          bVar6 = !bVar6;
        }
        FVar14 = PCGPinConstants::DefaultInFilterLabel;
        if (bVar6 == false) {
          FVar14 = PCGPinConstants::DefaultOutFilterLabel;
        }
        uVar9 = uVar19;
        if ((int)uVar15 < (param_1->OutputData).TaggedData.ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        uVar16 = (ulonglong)(uVar15 + 1);
        *(FName *)((pFVar18->TaggedData).AllocatorInstance.Data + uVar17 + 0x60) = FVar14;
        uVar17 = uVar17 + 0x78;
      } while ((int)(uVar15 + 1) < (param_1->OutputData).TaggedData.ArrayNum);
    }
  }
  else if (EVar8 == InvalidCharacter) {
    local_268.DataPtr = (wchar_t *)TVar12.DebugPtr[1]._padding_;
    iVar2 = (int)TVar12.DebugPtr[1]._padding_;
    local_268.Size = iVar2 - 1;
    if (iVar2 == 0) {
      local_268.Size = uVar19;
    }
    PCGLog::Parsing::LogInvalidCharacterInParsedStringError(&local_268,param_1);
  }
  else if (EVar8 == InvalidExpression) {
    local_278.DataPtr = (wchar_t *)TVar12.DebugPtr[1]._padding_;
    iVar2 = (int)TVar12.DebugPtr[1]._padding_;
    local_278.Size = iVar2 - 1;
    if (iVar2 == 0) {
      local_278.Size = uVar19;
    }
    PCGLog::Parsing::LogInvalidExpressionInParsedStringError(&local_278,param_1);
  }
  else {
    if (EVar8 == EmptyExpression) {
      PCGLog::Parsing::LogEmptyExpressionWarning(param_1);
      goto LAB_149b808c0;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterByIndex.cpp"
                       ,0x58,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  if (local_258.IndexRanges.AllocatorInstance.SecondaryData !=
      (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
    FMemory::Free((void *)local_258.IndexRanges.AllocatorInstance.SecondaryData);
  }
LAB_149b80a57:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_2a0.AllocatorInstance.Data,local_2a0.ArrayNum);
  if ((FPCGTaggedData *)local_2a0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_2a0.AllocatorInstance.Data);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149b98a70

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
FPCGFilterByIndexElement::SupportsBasePointDataInputs
          (FPCGFilterByIndexElement *this,FPCGContext *param_1)

{
  return true;
}

