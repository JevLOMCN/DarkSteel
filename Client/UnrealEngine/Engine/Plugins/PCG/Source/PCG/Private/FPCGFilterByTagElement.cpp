// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b80ad0

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
FPCGFilterByTagElement::ExecuteInternal(FPCGFilterByTagElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
  int iVar2;
  UPCGNode *this_00;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 TVar11;
  FPCGTaggedData *pFVar12;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  <lambda_1> <Var17;
  int *piVar18;
  char cVar19;
  FScriptContainerElement *pFVar20;
  int *piVar21;
  <lambda_1> <Var22;
  undefined1 local_res18 [8];
  char local_res20;
  TObjectPtr<UPCGSettings>_u_0 local_90;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_88;
  FPCGTaggedData *local_78;
  FPCGTaggedData *local_70;
  FScriptContainerElement *local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_60;
  TArray<FString,TSizedDefaultAllocator<32>_> local_50;
  
  <Var22 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId75,"FPCGFilterByTagElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterByTag.cpp"
               ,0x4b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId75);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterByTag.cpp"
                         ,0x4c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
      pFVar12 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGFilterByTagSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,<Var22);
      if (pFVar12 != (FPCGTaggedData *)0x0) {
        local_90.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_90.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b80c50;
          UE::GC::MarkAsReachable((UObject *)local_90.DebugPtr);
        }
        if (local_90.DebugPtr != (UPCGSettings *)0x0) {
          pUVar9 = UPCGFilterByTagSettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_90.ObjectPtr,pUVar9);
          TVar11 = local_90;
          if (bVar5) goto LAB_149b80c53;
        }
      }
    }
    else {
      pUVar10 = UPCGNode::GetSettings(this_00);
      TVar11.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
      if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
        pUVar9 = UPCGFilterByTagSettings::StaticClass();
        iVar2 = (int)pUVar9->_padding_;
        if ((iVar2 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar9->_padding_)) goto LAB_149b80c53;
      }
    }
  }
  else {
    pUVar9 = UPCGFilterByTagSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
    if (bVar5) {
      TVar11.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      goto LAB_149b80c53;
    }
  }
LAB_149b80c50:
  TVar11.DebugPtr = (UPCGSettings *)0x0;
LAB_149b80c53:
  local_res20 = (int)TVar11.DebugPtr[1]._padding_ == 0;
  bVar5 = (char)TVar11.DebugPtr[1]._padding_ == '\0';
  if (bVar5) {
    pTVar13 = PCGHelpers::GetStringArrayFromCommaSeparatedList
                        (&local_60,(FString *)&TVar11.DebugPtr[1]._padding_);
  }
  else {
    pTVar13 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                        (&local_50,(FString *)&TVar11.DebugPtr[1]._padding_,param_1);
  }
  <Var17.Tag = (FString *)(pTVar13->AllocatorInstance).Data;
  (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar13->ArrayNum;
  pTVar13->ArrayNum = 0;
  pTVar13->ArrayMax = 0;
  local_68 = (FScriptContainerElement *)<Var17.Tag;
  if ((bVar5) &&
     (DestructItems<FString,int>((FString *)local_60.AllocatorInstance.Data,local_60.ArrayNum),
     local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if ((!bVar5) &&
     (DestructItems<FString,int>((FString *)local_50.AllocatorInstance.Data,local_50.ArrayNum),
     local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_88,&PCGPinConstants::DefaultInputLabel);
  iVar4 = local_88.ArrayNum;
  uVar14 = (ulonglong)local_88.ArrayNum;
  pFVar1 = &param_1->OutputData;
  local_78 = (FPCGTaggedData *)(local_88.AllocatorInstance.Data + uVar14 * 0x78);
  FVar16.Data = local_88.AllocatorInstance.Data;
  do {
    if (local_88.ArrayNum != (uint)uVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    piVar21 = &(param_1->OutputData).TaggedData.ArrayMax;
    piVar18 = &(param_1->OutputData).TaggedData.ArrayNum;
    if ((FPCGTaggedData *)FVar16.Data == local_78) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
      if ((FPCGTaggedData *)local_88.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      DestructItems<FString,int>(<Var17.Tag,iVar2);
      if ((FScriptContainerElement *)<Var17.Tag != (FScriptContainerElement *)0x0) {
        FMemory::Free(<Var17.Tag);
      }
      if ((bool)<Var22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    pFVar12 = (FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data;
    if (((pFVar12 <= FVar16.Data) && (FVar16.Data < pFVar12 + *piVar21)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar7 = *piVar18;
    if (iVar7 == *piVar21) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)pFVar1,piVar21);
    }
    *piVar18 = iVar7 + 1;
    local_70 = FPCGTaggedData::FPCGTaggedData
                         ((FPCGTaggedData *)
                          ((pFVar1->TaggedData).AllocatorInstance.Data + (longlong)iVar7 * 0x78),
                          (FPCGTaggedData *)FVar16.Data);
    cVar19 = '\0';
    pFVar20 = (FScriptContainerElement *)((longlong)<Var17.Tag + (longlong)iVar2 * 0x10);
    local_70->Pin = PCGPinConstants::DefaultOutFilterLabel;
    for (; (FScriptContainerElement *)<Var17.Tag != pFVar20; <Var17.Tag = <Var17.Tag + 1) {
      if (*(char *)((longlong)&TVar11.DebugPtr[1]._padding_ + 4) == '\0') {
        iVar7 = ((<Var17.Tag)->Data).ArrayNum;
        if (iVar7 == 0) {
          pwVar15 = L"";
          iVar7 = 0;
        }
        else {
          pwVar15 = (wchar_t *)((<Var17.Tag)->Data).AllocatorInstance.Data;
          iVar7 = iVar7 + -1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar15);
        iVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                FindIndexByHash<FString>(&((FPCGTaggedData *)FVar16.Data)->Tags,uVar8,<Var17.Tag);
        if (iVar7 == -1) goto LAB_149b80e6e;
LAB_149b80ea6:
        cVar19 = '\x01';
        break;
      }
LAB_149b80e6e:
      if (((*(char *)((longlong)&TVar11.DebugPtr[1]._padding_ + 4) == '\x01') &&
          (bVar5 = Algo::
                   NoneOf<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,_FPCGFilterByTagElement::ExecuteInternal_::__l18::<lambda_1>_>
                             (&((FPCGTaggedData *)FVar16.Data)->Tags,<Var17), !bVar5)) ||
         ((*(char *)((longlong)&TVar11.DebugPtr[1]._padding_ + 4) == '\x02' &&
          (bVar5 = Algo::
                   NoneOf<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,_FPCGFilterByTagElement::ExecuteInternal_::__l18::<lambda_2>_>
                             (&((FPCGTaggedData *)FVar16.Data)->Tags,(<lambda_2>)<Var17.Tag), !bVar5
          )))) goto LAB_149b80ea6;
    }
    if (local_res20 == cVar19) {
      local_70->Pin = PCGPinConstants::DefaultInFilterLabel;
    }
    uVar14 = (ulonglong)(uint)iVar4;
    FVar16.Data = FVar16.Data + 0x78;
    <Var17.Tag = (FString *)local_68;
  } while( true );
}

// ExecutionLoopMode @ 149b88be0

EPCGElementExecutionLoopMode __thiscall
FPCGFilterByTagElement::ExecutionLoopMode(FPCGFilterByTagElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b98a80

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
FPCGFilterByTagElement::SupportsBasePointDataInputs
          (FPCGFilterByTagElement *this,FPCGContext *param_1)

{
  return true;
}

