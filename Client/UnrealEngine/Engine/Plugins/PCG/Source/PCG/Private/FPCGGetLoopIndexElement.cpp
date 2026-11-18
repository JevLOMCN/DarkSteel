// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c0b2e0

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
FPCGGetLoopIndexElement::ExecuteInternal(FPCGGetLoopIndexElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UPCGSettings *pUVar8;
  TObjectPtr<UPCGSettings>_u_0 TVar9;
  FPCGTaggedData *pFVar10;
  FPCGStack *pFVar11;
  FText *pFVar12;
  UPCGParamData *pUVar13;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<int> *pFVar14;
  FPCGDataPtrWrapper *this_02;
  bool bVar15;
  int local_res10 [2];
  TObjectPtr<UPCGSettings>_u_0 local_res18;
  FString local_a8;
  FString local_98;
  FText local_88;
  FString local_78;
  FString local_68;
  FText local_58;
  FName local_48;
  FPCGMetadataDomainID local_40;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId41,"FPCGGetLoopIndexElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetLoopIndex.cpp"
               ,0x29);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId41);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetLoopIndex.cpp"
                         ,0x2b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar8 = UPCGNode::GetSettings(this_00), pUVar8 == (UPCGSettings *)0x0)) {
      pFVar10 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetLoopIndexSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10[0]._0_1_);
      if (pFVar10 != (FPCGTaggedData *)0x0) {
        local_res18.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar10->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_res18.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c0b469;
          UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
        }
        if (local_res18.DebugPtr != (UPCGSettings *)0x0) {
          pUVar7 = UPCGGetLoopIndexSettings::StaticClass();
          bVar3 = FObjectPtr::IsA(&local_res18.ObjectPtr,pUVar7);
          TVar9 = local_res18;
          if (bVar3) goto LAB_149c0b46c;
        }
      }
    }
    else {
      pUVar8 = UPCGNode::GetSettings(this_00);
      TVar9.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar8);
      if (TVar9.DebugPtr != (UPCGSettings *)0x0) {
        pUVar7 = UPCGGetLoopIndexSettings::StaticClass();
        iVar6 = (int)pUVar7->_padding_;
        if ((iVar6 <= *(int *)((TVar9.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar9.DebugPtr)->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar7->_padding_)) goto LAB_149c0b46c;
      }
    }
LAB_149c0b469:
    TVar9.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar7 = UPCGGetLoopIndexSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar7);
    if (!bVar3) goto LAB_149c0b469;
    TVar9.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149c0b46c:
  if ((TVar9.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetLoopIndex.cpp"
                         ,0x2e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar11 = FPCGStackHandle::GetStack(&param_1->StackHandle);
  if (pFVar11 == (FPCGStack *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1422473342866161713>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetLoopIndex.cpp"
                       ,0x31,"Stack");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((byte)LogPCG._0_1_ < 2) goto LAB_149c0b83f;
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_88,L"PCGGetLoopIndexElement",L"ContextHasNoExecutionStack",
                         L"The execution context is malformed and has no call stack.");
    FText::ToString(pFVar12);
    FPCGContext::GetTaskName(param_1,&local_98);
    FPCGContext::GetExecutionSourceName(param_1,&local_a8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_58.TextData.Reference = local_88.TextData.Reference;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
      local_58.TextData.Reference = local_88.TextData.Reference;
    }
  }
  else {
    iVar6 = (pFVar11->StackFrames).ArrayNum;
    if (1 < iVar6) {
      uVar5 = 0;
      if ((int)(iVar6 - 2U) < iVar6) {
        uVar5 = ~(iVar6 - 2U) >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_res10[0] =
           *(int *)((pFVar11->StackFrames).AllocatorInstance.Data +
                   (longlong)(pFVar11->StackFrames).ArrayNum * 0x30 + -0x38);
      if (local_res10[0] != -1) {
        pUVar13 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
        if (((pUVar13 == (UPCGParamData *)0x0) || (pUVar13->_padding_ == 0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("LoopIndexParamData && LoopIndexParamData->Metadata",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetLoopIndex.cpp"
                               ,0x4d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar6 + 1;
        this_02 = (FPCGDataPtrWrapper *)
                  ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78)
        ;
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
        FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar13);
        local_40 = PCGMetadataDomainID::Default;
        local_48 = PCGGetLoopIndexConstants::LoopIndexAttributeName;
        this_01 = UPCGMetadata::FindOrCreateMetadataDomain
                            ((UPCGMetadata *)pUVar13->_padding_,&local_40);
        if (((this_01 == (FPCGMetadataDomain *)0x0) ||
            (pFVar14 = FPCGMetadataDomain::CreateAttribute<int>
                                 (this_01,local_48,local_res10,false,false),
            pFVar14 == (FPCGMetadataAttribute<int> *)0x0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("LoopIndexAttribute",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetLoopIndex.cpp"
                               ,0x53,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        UPCGMetadata::AddEntry((UPCGMetadata *)pUVar13->_padding_,-1);
        goto LAB_149c0b83f;
      }
    }
    if (((char)TVar9.DebugPtr[1]._padding_ == '\0') || ((byte)LogPCG._0_1_ < 3)) goto LAB_149c0b83f;
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_58,L"PCGGetLoopIndexElement",L"NotRunningALoop",
                         L"GetLoopIndex node executed outside of a loop. If this is okay, consider turning off this warning."
                        );
    FText::ToString(pFVar12);
    FPCGContext::GetTaskName(param_1,&local_68);
    FPCGContext::GetExecutionSourceName(param_1,&local_78);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
LAB_149c0b83f:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149c2d3e0

bool __thiscall
FPCGGetLoopIndexElement::IsCacheable(FPCGGetLoopIndexElement *this,UPCGSettings *param_1)

{
  return false;
}

