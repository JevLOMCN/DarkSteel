// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// CanExecuteOnlyOnMainThread @ 149af9fd0

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
FPCGApplyOnObjectElement::CanExecuteOnlyOnMainThread
          (FPCGApplyOnObjectElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149b03e40

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
FPCGApplyOnObjectElement::ExecuteInternal(FPCGApplyOnObjectElement *this,FPCGContext *param_1)

{
  undefined4 *puVar1;
  ulong64 uVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  UPCGApplyOnActorSettings *pUVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  longlong lVar22;
  FPCGDataCollection *pFVar23;
  bool bVar24;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<TTuple<UObject_*,int>,TSizedDefaultAllocator<32>_> local_d8;
  uint local_c8;
  TArray<UFunction_const_*,TSizedDefaultAllocator<32>_> local_c0;
  FScriptContainerElement *local_b0;
  UPCGApplyOnActorSettings *local_a8;
  longlong local_a0;
  TArray<UFunction_*,TSizedDefaultAllocator<32>_> local_98;
  UObject *local_88;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_80;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_48;
  
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId115,"FPCGApplyOnActorElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyOnActor.cpp"
               ,0x73);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId115);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyOnActor.cpp"
                         ,0x75,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pUVar11 = FPCGContext::GetInputSettings<UPCGApplyOnActorSettings>(param_1);
  local_a8 = pUVar11;
  if ((pUVar11 == (UPCGApplyOnActorSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyOnActor.cpp"
                         ,0x79,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_c8 = 0;
  if (*(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data < 1) {
LAB_149b04344:
    pTVar15 = FPCGDataCollection::GetInputsByPin
                        (&param_1->InputData,&local_80,&PCGPinConstants::DefaultInputLabel);
    pFVar23 = &param_1->OutputData;
    if (pFVar23 != (FPCGDataCollection *)pTVar15) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(pFVar23->TaggedData).AllocatorInstance.Data,
                 (param_1->OutputData).TaggedData.ArrayNum);
      pFVar17 = (pFVar23->TaggedData).AllocatorInstance.Data;
      if (pFVar17 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar17);
      }
      (pFVar23->TaggedData).AllocatorInstance.Data = (pTVar15->AllocatorInstance).Data;
      (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (param_1->OutputData).TaggedData.ArrayNum = pTVar15->ArrayNum;
      (param_1->OutputData).TaggedData.ArrayMax = pTVar15->ArrayMax;
      pTVar15->ArrayNum = 0;
      pTVar15->ArrayMax = 0;
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
    if ((FPCGTaggedData *)local_80.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (bVar24) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return true;
  }
  local_a0 = 0;
  iVar8 = 0;
  do {
    lVar22 = local_a0;
    uVar21 = local_c8;
    local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    if ((iVar8 < 0) && (iVar8 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
    }
    uVar9 = 0;
    if ((int)uVar21 < *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data) {
      uVar9 = ~uVar21 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    lVar19 = lVar22 * 0x28;
    iVar8 = *(int *)(lVar19 + 0x20 + param_1[1].InputData.InactiveOutputPinBitmask);
    uVar9 = local_c8;
    lVar5 = local_a0;
    if ((int)uVar21 < *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data) {
      do {
        uVar16 = ~uVar21 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar21 < *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pUVar11 = local_a8;
        uVar9 = uVar21;
        lVar5 = lVar22;
        if (iVar8 != *(int *)(param_1[1].InputData.InactiveOutputPinBitmask + 0x20 + lVar19)) break;
        uVar9 = 0;
        if ((int)uVar21 < *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        uVar2 = param_1[1].InputData.InactiveOutputPinBitmask;
        uVar9 = 0;
        if ((int)uVar21 < *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pUVar12 = FSoftObjectPath::ResolveObject
                            ((FSoftObjectPath *)
                             (param_1[1].InputData.InactiveOutputPinBitmask + lVar19));
        iVar10 = local_d8.ArrayNum;
        if (local_d8.ArrayNum == local_d8.ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
        }
        local_d8.ArrayNum = iVar10 + 1;
        uVar21 = uVar21 + 1;
        lVar22 = lVar22 + 1;
        *(UObject **)(local_d8.AllocatorInstance.Data + (longlong)iVar10 * 0x10) = pUVar12;
        puVar1 = (undefined4 *)(uVar2 + 0x24 + lVar19);
        lVar19 = lVar19 + 0x28;
        *(undefined4 *)(local_d8.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8) = *puVar1;
        pUVar11 = local_a8;
        uVar9 = uVar21;
        lVar5 = lVar22;
      } while ((int)uVar21 < *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data);
    }
    local_a0 = lVar5;
    local_c8 = uVar9;
    PCGObjectPropertyOverrideHelpers::ApplyOverrides
              (&pUVar11->PropertyOverrideDescriptions,&local_d8,
               PCGApplyOnActorConstants::ObjectPropertyOverridesLabel,iVar8,param_1,false);
    iVar8 = local_d8.ArrayNum;
    pFVar17 = local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayNum * 0x10;
    FVar20.Data = local_d8.AllocatorInstance.Data;
    local_b0 = pFVar17;
    while( true ) {
      if (local_d8.ArrayNum != iVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TTuple<UObject_*,int>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar20.Data == pFVar17) break;
      plVar3 = *(longlong **)FVar20.Data;
      if (plVar3 != (longlong *)0x0) {
        iStack_60 = 0x15;
        local_68 = L"PrototypeWithNoParams";
        pUVar13 = Z_Construct_UClass_UPCGFunctionPrototypes_NoRegister();
        pUVar14 = Z_Construct_UClass_UFunction_NoRegister();
        local_48._12_4_ = uStack_5c;
        local_48.Size = iStack_60;
        local_48.DataPtr = local_68;
        pUVar12 = StaticFindObject(pUVar14,(UObject *)pUVar13,&local_48,None);
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,1,0,&local_c0.AllocatorInstance,1,&local_c0.ArrayMax);
        *(UObject **)local_c0.AllocatorInstance.Data = pUVar12;
        local_88 = (UObject *)plVar3[2];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_88);
        }
        PCGHelpers::FindUserFunctions
                  (&local_98,(TSubclassOf<UObject>)&local_88,&pUVar11->PostProcessFunctionNames,
                   &local_c0,param_1);
        if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.AllocatorInstance.Data);
        }
        iVar10 = local_98.ArrayNum;
        pFVar17 = local_98.AllocatorInstance.Data + (longlong)iVar10 * 8;
        FVar18.Data = local_98.AllocatorInstance.Data;
        while( true ) {
          if (local_98.ArrayNum != iVar10) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<UFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (FVar18.Data == pFVar17) break;
          (**(code **)(*plVar3 + 0x260))(plVar3,*(undefined8 *)FVar18.Data);
          FVar18.Data = FVar18.Data + 8;
        }
        pFVar17 = local_b0;
        if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
          pFVar17 = local_b0;
        }
      }
      FVar20.Data = FVar20.Data + 0x10;
      pUVar11 = local_a8;
    }
    if (*(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data <= (int)local_c8)
    goto LAB_149b04344;
    iVar8 = local_d8.ArrayMax;
  } while( true );
}

// IsCacheable @ 149b1cfc0

bool __thiscall
FPCGApplyOnObjectElement::IsCacheable(FPCGApplyOnObjectElement *this,UPCGSettings *param_1)

{
  return false;
}

// PrepareDataInternal @ 149b20da0

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
FPCGApplyOnObjectElement::PrepareDataInternal(FPCGApplyOnObjectElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGApplyOnActorSettings *pUVar4;
  bool bVar5;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_18;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId98,"FPCGApplyOnActorElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyOnActor.cpp"
               ,0x62);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId98);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyOnActor.cpp"
                         ,99,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar4 = FPCGContext::GetInputSettings<UPCGApplyOnActorSettings>(param_1);
  if ((pUVar4 == (UPCGApplyOnActorSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyOnActor.cpp"
                         ,0x66,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  bVar2 = FPCGLoadObjectsFromPathContext::InitializeAndRequestLoad
                    ((FPCGLoadObjectsFromPathContext *)param_1,PCGPinConstants::DefaultInputLabel,
                     &pUVar4->ObjectReferenceAttribute,&local_18,false,
                     pUVar4->bSilenceErrorOnEmptyObjectPath,pUVar4->bSynchronousLoad);
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FSoftObjectPath *)local_18.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// SupportsBasePointDataInputs @ 149b2d100

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
FPCGApplyOnObjectElement::SupportsBasePointDataInputs
          (FPCGApplyOnObjectElement *this,FPCGContext *param_1)

{
  return true;
}

