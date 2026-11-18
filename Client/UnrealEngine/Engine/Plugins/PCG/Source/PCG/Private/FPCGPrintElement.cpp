// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// CanExecuteOnlyOnMainThread @ 149c01910

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
FPCGPrintElement::CanExecuteOnlyOnMainThread(FPCGPrintElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c16910

/* WARNING: Removing unreachable block (ram,0x000149c16d2a) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall FPCGPrintElement::ExecuteInternal(FPCGPrintElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
  char cVar2;
  UPCGNode *this_00;
  IPCGGraphExecutionSource *pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar10;
  UClass *pUVar11;
  UPCGSettings *pUVar12;
  TObjectPtr<UPCGSettings>_u_0 TVar13;
  FPCGTaggedData *pFVar14;
  UPCGComponent *pUVar15;
  UPCGGraph *pUVar16;
  FString *pFVar17;
  ulonglong uVar18;
  size_t sVar19;
  FText *pFVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  TObjectPtr<UPCGSettings>_u_0 TVar23;
  ForAnyElementType FVar24;
  int iVar25;
  TObjectPtr<UPCGSettings>_u_0 TVar26;
  FScriptContainerElement *pFVar27;
  bool bVar28;
  <lambda_1> local_res10;
  FScriptContainerElement *local_res20;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  FString local_298;
  TObjectPtr<UPCGSettings>_u_0 local_288;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FText local_1c0;
  FString local_1b0;
  FText local_1a0;
  FString local_190;
  FText local_180;
  FText local_170;
  FString local_160;
  FString local_150;
  FText local_140;
  FString local_130;
  FString local_120;
  FText local_110;
  FString local_100;
  FString local_f0;
  FText local_e0;
  FString local_d0;
  FString local_c0;
  FText local_b0;
  FString local_a0;
  FString local_90;
  FText local_80;
  FString local_70;
  FString local_60;
  FText local_50;
  
  TVar26.DebugPtr = (UPCGSettings *)0x0;
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId67,"FPCGPrintElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPrintElement.cpp"
               ,0x43);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId67);
  }
  pTVar10 = FPCGDataCollection::GetInputsByPin
                      (&param_1->InputData,&local_220,&PCGPinConstants::DefaultInputLabel);
  pFVar1 = &param_1->OutputData;
  if (pFVar1 != (FPCGDataCollection *)pTVar10) {
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data,
               (param_1->OutputData).TaggedData.ArrayNum);
    pFVar21 = (pFVar1->TaggedData).AllocatorInstance.Data;
    if (pFVar21 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar21);
    }
    (pFVar1->TaggedData).AllocatorInstance.Data = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->OutputData).TaggedData.ArrayNum = pTVar10->ArrayNum;
    (param_1->OutputData).TaggedData.ArrayMax = pTVar10->ArrayMax;
    pTVar10->ArrayNum = 0;
    pTVar10->ArrayMax = 0;
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_220.AllocatorInstance.Data,local_220.ArrayNum);
  if ((FPCGTaggedData *)local_220.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_220.AllocatorInstance.Data);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar12 = UPCGNode::GetSettings(this_00), pUVar12 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar14 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPrintElementSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar14 != (FPCGTaggedData *)0x0) {
        local_288.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar14->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_288.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c16adf;
          UE::GC::MarkAsReachable((UObject *)local_288.DebugPtr);
        }
        if (local_288.DebugPtr != (UPCGSettings *)0x0) {
          pUVar11 = UPCGPrintElementSettings::StaticClass();
          bVar7 = FObjectPtr::IsA(&local_288.ObjectPtr,pUVar11);
          TVar13 = local_288;
          if (bVar7) goto LAB_149c16ae2;
        }
      }
    }
    else {
      pUVar12 = UPCGNode::GetSettings(this_00);
      TVar13.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar12);
      if (TVar13.DebugPtr != (UPCGSettings *)0x0) {
        pUVar11 = UPCGPrintElementSettings::StaticClass();
        iVar9 = (int)pUVar11->_padding_;
        if ((iVar9 <= *(int *)((TVar13.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar11->_padding_)) goto LAB_149c16ae2;
      }
    }
LAB_149c16adf:
    TVar13.DebugPtr = TVar26.DebugPtr;
  }
  else {
    pUVar11 = UPCGPrintElementSettings::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar11);
    if (!bVar7) goto LAB_149c16adf;
    TVar13.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149c16ae2:
  if ((TVar13.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPrintElement.cpp"
                         ,0x48,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if ((*(char *)((longlong)&TVar13.DebugPtr[1]._padding_ + 6) == '\0') ||
     ((char)TVar13.DebugPtr[1]._padding_ == '\0')) goto LAB_149c1757b;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
     (((bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar7 ||
       (pIVar3 = (param_1->ExecutionSource).InterfaceInstance,
       pIVar3 == (IPCGGraphExecutionSource *)0x0)) ||
      (pUVar15 = (UPCGComponent *)(**(code **)((longlong)*pIVar3 + 8))(),
      pUVar15 == (UPCGComponent *)0x0)))) {
LAB_149c16b8e:
    pUVar15 = (UPCGComponent *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar11->_padding_)) goto LAB_149c16b8e;
    pUVar15 = UPCGComponent::GetOriginalComponent(pUVar15);
  }
  TVar23.DebugPtr = TVar26.DebugPtr;
  if ((*(char *)((longlong)&TVar13.DebugPtr[1]._padding_ + 1) != '\0') &&
     (TVar23.DebugPtr = (UPCGSettings *)0x0, pUVar15 != (UPCGComponent *)0x0)) {
    TVar23.DebugPtr = TVar26.DebugPtr;
    if (*(char *)((longlong)&TVar13.DebugPtr[1]._padding_ + 2) != '\0') {
      if (pUVar15->_padding_ == 0) {
        TVar23 = (TObjectPtr<UPCGSettings>_u_0)0x6;
        pFVar20 = FText::AsLocalizable_Advanced_LocText
                            (&local_1c0,L"PCGPrintElement",L"MissingOwner",L"Missing Owner");
        pFVar17 = FText::ToString(pFVar20);
        pFVar17 = ::FString::FString(&local_1d0,pFVar17);
      }
      else {
        local_240 = *(FName *)(pUVar15->_padding_ + 0x18);
        TVar23 = (TObjectPtr<UPCGSettings>_u_0)0x1;
        ::FName::ToString(&local_240,&local_210);
        pFVar17 = &local_210;
      }
      iVar9 = (int)local_2a0;
      if ((int)local_2a0 == local_2a0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2a8,(int *)((longlong)&local_2a0 + 4));
      }
      local_2a0 = CONCAT44(local_2a0._4_4_,iVar9 + 1);
      ::FString::FString((FString *)(local_2a8.Data + (longlong)iVar9 * 0x10),pFVar17);
      if ((((ulonglong)TVar23.DebugPtr & 4) != 0) &&
         (TVar23._0_4_ = TVar23._0_4_ & 0xfffffffb, TVar23._4_4_ = 0,
         local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)TVar23.DebugPtr & 2) != 0) &&
         (TVar23._0_4_ = TVar23._0_4_ & 0xfffffffd, TVar23._4_4_ = 0,
         local_1c0.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
      }
      if ((((ulonglong)TVar23.DebugPtr & 1) != 0) &&
         (TVar23._0_4_ = TVar23._0_4_ & 0xfffffffe, TVar23._4_4_ = 0,
         local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
    }
    if (*(char *)((longlong)&TVar13.DebugPtr[1]._padding_ + 3) != '\0') {
      local_238 = (FName)pUVar15->_padding_;
      ::FName::ToString(&local_238,&local_280);
      iVar9 = (int)local_2a0;
      if ((int)local_2a0 == local_2a0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2a8,(int *)((longlong)&local_2a0 + 4));
        local_2a0 = CONCAT44(local_2a0._4_4_,iVar9 + 1);
      }
      else {
        local_2a0 = CONCAT44(local_2a0._4_4_,(int)local_2a0 + 1);
      }
      pFVar21 = local_2a8.Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar21 = 0;
      *(FScriptContainerElement **)pFVar21 = local_280.Data.AllocatorInstance.Data;
      local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar21 + 8) = local_280.Data.ArrayNum;
      *(int *)(pFVar21 + 0xc) = local_280.Data.ArrayMax;
      local_280.Data.ArrayNum = 0;
      local_280.Data.ArrayMax = 0;
    }
    if (*(char *)((longlong)&TVar13.DebugPtr[1]._padding_ + 4) != '\0') {
      pUVar16 = UPCGComponent::GetGraph(pUVar15);
      if (pUVar16 == (UPCGGraph *)0x0) {
        uVar22 = TVar23._0_4_ | 0x30;
        pFVar20 = FText::AsLocalizable_Advanced_LocText
                            (&local_1a0,L"PCGPrintElement",L"MissingGraph",L"Missing Graph");
        pFVar17 = FText::ToString(pFVar20);
        pFVar17 = ::FString::FString(&local_1b0,pFVar17);
      }
      else {
        pUVar16 = UPCGComponent::GetGraph(pUVar15);
        uVar22 = TVar23._0_4_ | 8;
        local_230 = (FName)pUVar16->_padding_;
        ::FName::ToString(&local_230,&local_200);
        pFVar17 = &local_200;
      }
      TVar23._4_4_ = 0;
      TVar23._0_4_ = uVar22;
      iVar9 = (int)local_2a0;
      if ((int)local_2a0 == local_2a0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2a8,(int *)((longlong)&local_2a0 + 4));
      }
      local_2a0 = CONCAT44(local_2a0._4_4_,iVar9 + 1);
      ::FString::FString((FString *)(local_2a8.Data + (longlong)iVar9 * 0x10),pFVar17);
      if (((uVar22 & 0x20) != 0) &&
         (TVar23._0_4_ = uVar22 & 0xffffffdf, TVar23._4_4_ = 0,
         local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)TVar23.DebugPtr & 0x10) != 0) &&
         (TVar23._0_4_ = TVar23._0_4_ & 0xffffffef, TVar23._4_4_ = 0,
         local_1a0.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
      }
      if ((((ulonglong)TVar23.DebugPtr & 8) != 0) &&
         (TVar23._0_4_ = TVar23._0_4_ & 0xfffffff7, TVar23._4_4_ = 0,
         local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
    }
  }
  if (*(char *)((longlong)&TVar13.DebugPtr[1]._padding_ + 5) != '\0') {
    if (param_1->Node == (UPCGNode *)0x0) {
      uVar22 = TVar23._0_4_ | 0x180;
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_180,L"PCGPrintElement",L"MissingNode",L"Missing Node");
      pFVar17 = FText::ToString(pFVar20);
      pFVar17 = ::FString::FString(&local_190,pFVar17);
    }
    else {
      local_228 = (FName)param_1->Node->_padding_;
      uVar22 = TVar23._0_4_ | 0x40;
      ::FName::ToString(&local_228,&local_1f0);
      pFVar17 = &local_1f0;
    }
    iVar9 = (int)local_2a0;
    if ((int)local_2a0 == local_2a0._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_2a8,(int *)((longlong)&local_2a0 + 4));
    }
    local_2a0 = CONCAT44(local_2a0._4_4_,iVar9 + 1);
    ::FString::FString((FString *)(local_2a8.Data + (longlong)iVar9 * 0x10),pFVar17);
    if ((uVar22 >> 8 != 0) &&
       (uVar22 = uVar22 & 0xfffffeff,
       local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    if (((char)uVar22 < '\0') &&
       (uVar22 = uVar22 & 0xffffff7f, local_180.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
    }
    if (((uVar22 & 0x40) != 0) &&
       (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
  }
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.Data.ArrayNum = 0;
  local_298.Data.ArrayMax = 0;
  if ((int)local_2a0 != 0) {
    pFVar17 = FText::ToString(&PCGPrintElementConstants::Delimiter);
    if ((pFVar17->Data).ArrayNum == 0) {
      local_res20 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_res20 = (pFVar17->Data).AllocatorInstance.Data;
    }
    pFVar21 = local_res20;
    iVar9 = (int)local_2a0;
    uVar18 = (ulonglong)(int)local_2a0;
    bVar7 = true;
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    pFVar27 = local_2a8.Data + uVar18 * 0x10;
    FVar24.Data = local_2a8.Data;
    while( true ) {
      if ((int)uVar18 != iVar9) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res20);
      }
      if (FVar24.Data == pFVar27) break;
      if (bVar7) {
        bVar7 = false;
      }
      else {
        sVar19 = wcslen((wchar_t *)pFVar21);
        ::FString::AppendChars(&local_270,(wchar_t *)pFVar21,(int)sVar19);
      }
      iVar25 = *(int *)(FVar24.Data + 8) + -1;
      if (*(int *)(FVar24.Data + 8) == 0) {
        iVar25 = 0;
      }
      ::FString::AppendChars(&local_270,*(wchar_t **)FVar24.Data,iVar25);
      uVar18 = local_2a0 & 0xffffffff;
      FVar24.Data = FVar24.Data + 0x10;
    }
    ::FString::PrintfImpl(&local_250,L"[%s]: ");
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    uVar5 = local_250.Data._8_8_;
    local_298.Data.AllocatorInstance.Data = local_250.Data.AllocatorInstance.Data;
    local_250.Data.ArrayNum = 0;
    local_250.Data.ArrayMax = 0;
    uVar6 = local_250.Data._8_8_;
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.Data.ArrayNum = (int)uVar5;
    local_250.Data.ArrayMax = SUB84(uVar5,4);
    local_298.Data.ArrayNum = local_250.Data.ArrayNum;
    local_298.Data.ArrayMax = local_250.Data.ArrayMax;
    local_250.Data._8_8_ = uVar6;
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
  }
  ::FString::ConcatFF(&local_1e0,(FString *)&TVar13.DebugPtr[1]._padding_,&local_298);
  ::FString::ConcatFF(&local_260,&local_1e0,(FString *)(TVar13.DebugPtr + 1));
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  cVar2 = (char)TVar13.DebugPtr[1]._padding_;
  if (cVar2 == '\0') goto LAB_149c17540;
  if (cVar2 == '\x02') {
    if ((char)TVar13.DebugPtr[1]._padding_ == '\0') {
      if (1 < (byte)LogPCG._0_1_) {
        pFVar20 = FText::FromString(&local_50,&local_260);
        FText::ToString(pFVar20);
        FPCGContext::GetTaskName(param_1,&local_60);
        FPCGContext::GetExecutionSourceName(param_1,&local_70);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        local_170.TextData.Reference = local_50.TextData.Reference;
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
          local_170.TextData.Reference = local_50.TextData.Reference;
        }
        goto LAB_149c17535;
      }
    }
    else if (1 < (byte)LogPCG._0_1_) {
      pFVar20 = FText::FromString(&local_80,&local_260);
      FText::ToString(pFVar20);
      FPCGContext::GetTaskName(param_1,&local_90);
      FPCGContext::GetExecutionSourceName(param_1,&local_a0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      local_170.TextData.Reference = local_80.TextData.Reference;
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
        local_170.TextData.Reference = local_80.TextData.Reference;
      }
LAB_149c17535:
      if (local_170.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    if (cVar2 != '\x03') {
      if (cVar2 == '\x04') {
        if ((byte)LogPCG._0_1_ < 4) goto LAB_149c17540;
        pFVar20 = FText::FromString(&local_110,&local_260);
        FText::ToString(pFVar20);
        FPCGContext::GetTaskName(param_1,&local_120);
        FPCGContext::GetExecutionSourceName(param_1,&local_130);
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u___s____s____s_151f91ac0,
                   (FLogCategoryBase *)&LogPCG);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        local_170.TextData.Reference = local_110.TextData.Reference;
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
          local_170.TextData.Reference = local_110.TextData.Reference;
        }
      }
      else if (cVar2 == '\x05') {
        if ((byte)LogPCG._0_1_ < 5) goto LAB_149c17540;
        pFVar20 = FText::FromString(&local_140,&local_260);
        FText::ToString(pFVar20);
        FPCGContext::GetTaskName(param_1,&local_150);
        FPCGContext::GetExecutionSourceName(param_1,&local_160);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        local_170.TextData.Reference = local_140.TextData.Reference;
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
          local_170.TextData.Reference = local_140.TextData.Reference;
        }
      }
      else {
        pFVar20 = FText::AsLocalizable_Advanced_LocText
                            (&local_170,L"PCGPrintElement",L"InvalidVerbosity",
                             L"Invalid verbosity selected. Please use Log, Display, Warning, or Error. See EPCGPrintVerbosity for more details."
                            );
        PCGLog::LogErrorOnGraph(pFVar20,param_1);
      }
      goto LAB_149c17535;
    }
    if ((char)TVar13.DebugPtr[1]._padding_ == '\0') {
      if (2 < (byte)LogPCG._0_1_) {
        pFVar20 = FText::FromString(&local_b0,&local_260);
        FText::ToString(pFVar20);
        FPCGContext::GetTaskName(param_1,&local_c0);
        FPCGContext::GetExecutionSourceName(param_1,&local_d0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        local_170.TextData.Reference = local_b0.TextData.Reference;
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          local_170.TextData.Reference = local_b0.TextData.Reference;
        }
        goto LAB_149c17535;
      }
    }
    else if (2 < (byte)LogPCG._0_1_) {
      pFVar20 = FText::FromString(&local_e0,&local_260);
      FText::ToString(pFVar20);
      FPCGContext::GetTaskName(param_1,&local_f0);
      FPCGContext::GetExecutionSourceName(param_1,&local_100);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      local_170.TextData.Reference = local_e0.TextData.Reference;
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        local_170.TextData.Reference = local_e0.TextData.Reference;
      }
      goto LAB_149c17535;
    }
  }
LAB_149c17540:
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_2a8.Data,(int)local_2a0);
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
LAB_149c1757b:
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149c2d490

bool __thiscall FPCGPrintElement::IsCacheable(FPCGPrintElement *this,UPCGSettings *param_1)

{
  return false;
}

// SupportsBasePointDataInputs @ 149c35820

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
FPCGPrintElement::SupportsBasePointDataInputs(FPCGPrintElement *this,FPCGContext *param_1)

{
  return true;
}

