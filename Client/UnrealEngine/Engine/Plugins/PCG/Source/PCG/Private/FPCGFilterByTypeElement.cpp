// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b80f50

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
FPCGFilterByTypeElement::ExecuteInternal(FPCGFilterByTypeElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGNode *this_00;
  UPCGData *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  TObjectPtr<UPCGSettings>_u_0 TVar12;
  FPCGDataTypeBaseId *pFVar13;
  FPCGTaggedData *pFVar14;
  FName FVar15;
  FPCGTaggedData *pFVar16;
  ForAnyElementType FVar17;
  <lambda_1> <Var18;
  undefined1 local_res18 [8];
  TObjectPtr<UPCGSettings>_u_0 local_res20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_68;
  FPCGDataTypeIdentifier local_58;
  
  <Var18 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId67,"FPCGFilterByTypeElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterByType.cpp"
               ,0x43);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId67);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterByType.cpp"
                         ,0x44,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar10 = UPCGFilterByTypeSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    if (bVar5) {
      TVar12.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar12.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149b81097;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
    pFVar16 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGFilterByTypeSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,<Var18);
    if (pFVar16 != (FPCGTaggedData *)0x0) {
      local_res20.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar16->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_res20.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b81095;
        UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
      }
      if (local_res20.DebugPtr != (UPCGSettings *)0x0) {
        pUVar10 = UPCGFilterByTypeSettings::StaticClass();
        bVar5 = FObjectPtr::IsA(&local_res20.ObjectPtr,pUVar10);
        TVar12 = local_res20;
        if (bVar5) goto LAB_149b81097;
      }
    }
  }
  else {
    pUVar11 = UPCGNode::GetSettings(this_00);
    TVar12.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
    if (TVar12.DebugPtr != (UPCGSettings *)0x0) {
      pUVar10 = UPCGFilterByTypeSettings::StaticClass();
      iVar2 = (int)pUVar10->_padding_;
      if ((iVar2 <= *(int *)((TVar12.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8)
          == &pUVar10->_padding_)) goto LAB_149b81097;
    }
  }
LAB_149b81095:
  TVar12.DebugPtr = (UPCGSettings *)0x0;
LAB_149b81097:
  if ((TVar12.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterByType.cpp"
                         ,0x47,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_68,&PCGPinConstants::DefaultInputLabel);
  iVar2 = local_68.ArrayNum;
  pFVar16 = (FPCGTaggedData *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x78)
  ;
  FVar17.Data = local_68.AllocatorInstance.Data;
  do {
    if (local_68.ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((FPCGTaggedData *)FVar17.Data == pFVar16) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
      if ((FPCGTaggedData *)local_68.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      if ((bool)<Var18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    pUVar3 = (((FPCGTaggedData *)FVar17.Data)->Data).Data.field0_0x0.DebugPtr;
    bVar5 = false;
    if (pUVar3 == (UPCGData *)0x0) {
LAB_149b81182:
      if ((char)TVar12.DebugPtr[1]._padding_ != '\0') goto LAB_149b8118f;
    }
    else {
      pFVar13 = (FPCGDataTypeBaseId *)(**(code **)(pUVar3->_padding_ + 0x2b8))();
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_58,pFVar13);
      bVar7 = FPCGDataTypeIdentifier::Intersects
                        (&local_58,(FPCGDataTypeIdentifier *)(TVar12.DebugPtr + 1));
      bVar8 = FPCGDataTypeIdentifier::IsWider
                        (&local_58,(FPCGDataTypeIdentifier *)(TVar12.DebugPtr + 1));
      if ((bVar7) && (!bVar8)) {
        bVar5 = true;
      }
      if (local_58.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Ids.AllocatorInstance.Data);
      }
      if (!bVar5) goto LAB_149b81182;
LAB_149b8118f:
      pFVar14 = (FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
      if (((pFVar14 <= FVar17.Data) &&
          (FVar17.Data < pFVar14 + (param_1->OutputData).TaggedData.ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar9 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar9 + 1;
      pFVar14 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                           (longlong)iVar9 * 0x78),(FPCGTaggedData *)FVar17.Data);
      FVar15 = PCGPinConstants::DefaultOutFilterLabel;
      if (bVar5) {
        FVar15 = PCGPinConstants::DefaultInFilterLabel;
      }
      pFVar14->Pin = FVar15;
    }
    FVar17.Data = FVar17.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 149b88bf0

EPCGElementExecutionLoopMode __thiscall
FPCGFilterByTypeElement::ExecutionLoopMode(FPCGFilterByTypeElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b98a90

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
FPCGFilterByTypeElement::SupportsBasePointDataInputs
          (FPCGFilterByTypeElement *this,FPCGContext *param_1)

{
  return true;
}

