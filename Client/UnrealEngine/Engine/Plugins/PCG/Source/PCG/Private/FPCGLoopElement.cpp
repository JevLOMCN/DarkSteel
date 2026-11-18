// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c0fd80

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

bool __thiscall FPCGLoopElement::ExecuteInternal(FPCGLoopElement *this,FPCGContext *param_1)

{
  int *piVar1;
  FPCGDataCollection *pFVar2;
  FPCGContext *pFVar3;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_00;
  bool *pbVar4;
  int iVar5;
  UPCGNode *pUVar6;
  ulong64 uVar7;
  FPCGTaggedData *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  UClass *pUVar15;
  UPCGSettings *pUVar16;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar17;
  TObjectPtr<UPCGSettings>_u_0 TVar18;
  FText *pFVar19;
  FPCGStack *pFVar20;
  ForAnyElementType *pFVar21;
  TObjectPtr<UPCGSettings>_u_0 TVar22;
  TObjectPtr<UPCGSettings>_u_0 TVar23;
  ForAnyElementType FVar24;
  int iVar25;
  ForAnyElementType FVar26;
  ulonglong uVar27;
  FPCGTaggedData *pFVar28;
  uint uVar29;
  FPCGStackFrame *pFVar30;
  longlong *plVar31;
  bool *pbVar32;
  uint uVar33;
  IPCGElement *pIVar34;
  TObjectPtr<UPCGSettings>_u_0 TVar35;
  longlong lVar36;
  bool bVar37;
  <lambda_1> local_res10;
  longlong local_res18;
  undefined1 local_318;
  undefined1 local_317 [3];
  uint local_314;
  uint local_310;
  int local_30c;
  TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> local_308;
  FPCGStack local_2f8;
  ForAnyElementType local_2e0;
  undefined8 local_2d8;
  FPCGDataCollection local_2d0;
  ulong64 local_2a0;
  TObjectPtr<UPCGSettings>_u_0 local_298;
  ulong64 local_290;
  ForAnyElementType local_288;
  undefined8 local_280;
  TArray<FName,TSizedDefaultAllocator<32>_> local_278;
  FPCGDataCollection local_268;
  ulong64 local_238;
  ForAnyElementType local_230;
  int local_228;
  int local_224;
  TArray<FName,TSizedDefaultAllocator<32>_> local_220;
  TObjectPtr<UPCGSettings>_u_0 local_210;
  FPCGDataCollection local_208;
  undefined8 local_1d8;
  IPCGElement *local_1d0;
  FPCGDataCollection local_1c8;
  FPCGDataCollection local_198;
  TArray<FName,TSizedDefaultAllocator<32>_> local_168;
  FPCGDataCollection local_158;
  undefined8 local_128;
  ForAnyElementType local_120;
  undefined8 local_118;
  undefined1 local_110 [8];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_108;
  UPCGGraph *local_f8;
  UPCGNode *local_f0;
  FPCGScheduleGraphParams local_e8;
  FString local_98;
  FString local_88;
  FText local_78;
  FString local_68;
  FString local_58;
  FText local_48;
  
  TVar35.DebugPtr = (UPCGSettings *)0x0;
  local_314 = 0;
  bVar37 = -1 < CpuChannel->Enabled;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId183,"FPCGLoopElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGLoopElement.cpp"
               ,0xb7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId183);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    pUVar6 = param_1->Node;
    if ((pUVar6 == (UPCGNode *)0x0) ||
       (pUVar16 = UPCGNode::GetSettings(pUVar6), pUVar16 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar28 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGLoopSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar28 != (FPCGTaggedData *)0x0) {
        local_210.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar28->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGLoopSettings *)local_210.DebugPtr == (UPCGLoopSettings *)0x0) goto LAB_149c0fee1;
          UE::GC::MarkAsReachable((UObject *)local_210.DebugPtr);
        }
        if ((UPCGLoopSettings *)local_210.DebugPtr != (UPCGLoopSettings *)0x0) {
          pUVar15 = UPCGLoopSettings::StaticClass();
          bVar10 = FObjectPtr::IsA(&local_210.ObjectPtr,pUVar15);
          TVar22 = local_210;
          if (bVar10) goto LAB_149c0fee4;
        }
      }
    }
    else {
      pUVar16 = UPCGNode::GetSettings(pUVar6);
      TVar22.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar16);
      if ((UPCGLoopSettings *)TVar22.DebugPtr != (UPCGLoopSettings *)0x0) {
        pUVar15 = UPCGLoopSettings::StaticClass();
        iVar25 = (int)pUVar15->_padding_;
        if ((iVar25 <= *(int *)((TVar22.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar22.DebugPtr)->_padding_ + 0x30) + (longlong)iVar25 * 8) ==
            &pUVar15->_padding_)) goto LAB_149c0fee4;
      }
    }
LAB_149c0fee1:
    TVar22.DebugPtr = TVar35.DebugPtr;
  }
  else {
    pUVar15 = UPCGLoopSettings::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar15);
    if (!bVar10) goto LAB_149c0fee1;
    TVar22.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149c0fee4:
  if (((UPCGLoopSettings *)TVar22.DebugPtr == (UPCGLoopSettings *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGLoopElement.cpp"
                          ,0xbc,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  uVar14 = 0;
  if ((char)param_1[1].InputData.TaggedData.ArrayNum == '\0') {
    if (TVar22.DebugPtr[1]._padding_ != 0) {
      if (CpuChannel->Enabled < 0) {
        FPCGSubgraphContext::UpdateOverridesWithOverriddenGraph((FPCGSubgraphContext *)param_1);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId195,
                   "FPCGLoopElement::ExecuteInternal::DynamicTrackingAndOverrides",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGLoopElement.cpp"
                   ,0xc3);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId195);
        FPCGSubgraphContext::UpdateOverridesWithOverriddenGraph((FPCGSubgraphContext *)param_1);
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    local_f8 = UPCGBaseSubgraphSettings::GetSubgraph((UPCGBaseSubgraphSettings *)TVar22.DebugPtr);
    if (local_f8 == (UPCGGraph *)0x0) {
      pTVar17 = FPCGDataCollection::GetInputsByPin
                          (&param_1->InputData,&local_108,&PCGPinConstants::DefaultInputLabel);
      TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::operator=
                (&(param_1->OutputData).TaggedData,pTVar17);
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
      if ((FPCGTaggedData *)local_108.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      bVar10 = true;
      goto LAB_149c11368;
    }
    local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.ArrayNum = 0;
    local_308.ArrayMax = 0;
    local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.ArrayNum = 0;
    local_278.ArrayMax = 0;
    local_198.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.TaggedData.ArrayNum = 0;
    local_198.TaggedData.ArrayMax = 0;
    local_198.bCancelExecutionOnEmpty = false;
    local_198.bCancelExecution = false;
    local_198.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.DataCrcs.ArrayNum = 0;
    local_198.DataCrcs.ArrayMax = 0;
    local_198.InactiveOutputPinBitmask = 0;
    local_158.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.TaggedData.ArrayNum = 0;
    local_158.TaggedData.ArrayMax = 0;
    local_158.bCancelExecutionOnEmpty = false;
    local_158.bCancelExecution = false;
    local_158.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.DataCrcs.ArrayNum = 0;
    local_158.DataCrcs.ArrayMax = 0;
    local_158.InactiveOutputPinBitmask = 0;
    PrepareLoopDataCollections
              (this,param_1,(UPCGLoopSettings *)TVar22.DebugPtr,&local_308,&local_198,&local_278,
               &local_158);
    uVar27 = (ulonglong)local_308.ArrayNum;
    if (local_308.ArrayNum == 0) {
LAB_149c10f04:
      if (5 < (byte)LogPCG._0_1_) {
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_48,L"PCGLoopElement",L"EmptyLoopCollection",
                             L"Loop data is empty - will not do anything.");
        FText::ToString(pFVar19);
        FPCGContext::GetTaskName(param_1,&local_58);
        FPCGContext::GetExecutionSourceName(param_1,&local_68);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
LAB_149c10fc4:
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
      }
LAB_149c10fcf:
      bVar10 = true;
    }
    else {
      if (local_308.ArrayNum < 1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        uVar27 = local_308._8_8_ & 0xffffffff;
      }
      if (*(int *)(local_308.AllocatorInstance.Data + 8) == 0) goto LAB_149c10f04;
      if ((int)uVar27 < 1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        uVar27 = local_308._8_8_ & 0xffffffff;
      }
      uVar29 = 1;
      local_30c = *(int *)(local_308.AllocatorInstance.Data + 8);
      if (1 < (int)uVar27) {
        lVar36 = 0x30;
        do {
          uVar33 = 0;
          if ((int)uVar29 < (int)uVar27) {
            uVar33 = ~uVar29 >> 0x1f;
          }
          if (uVar33 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            uVar27 = local_308._8_8_ & 0xffffffff;
          }
          if (*(int *)(local_308.AllocatorInstance.Data + lVar36 + 8) != local_30c) {
            if ((byte)LogPCG._0_1_ < 2) goto LAB_149c10fcf;
            pFVar19 = FText::AsLocalizable_Advanced_LocText
                                (&local_78,L"PCGLoopElement",L"MismatchLoopCollections",
                                 L"Data to loop on does not have the same number of entries for all pins!"
                                );
            FText::ToString(pFVar19);
            FPCGContext::GetTaskName(param_1,&local_88);
            FPCGContext::GetExecutionSourceName(param_1,&local_98);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            local_48.TextData.Reference = local_78.TextData.Reference;
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
              local_48.TextData.Reference = local_78.TextData.Reference;
            }
            goto LAB_149c10fc4;
          }
          uVar29 = uVar29 + 1;
          lVar36 = lVar36 + 0x30;
        } while ((int)uVar29 < (int)uVar27);
      }
      local_1c8.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.TaggedData.ArrayNum = 0;
      local_1c8.TaggedData.ArrayMax = 0;
      local_1c8.bCancelExecutionOnEmpty = false;
      local_1c8.bCancelExecution = false;
      local_1c8.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.DataCrcs.ArrayNum = 0;
      local_1c8.DataCrcs.ArrayMax = 0;
      local_1c8.InactiveOutputPinBitmask = 0;
      FPCGSubgraphElement::PrepareSubgraphUserParameters
                ((FPCGSubgraphElement *)this,(UPCGSubgraphSettings *)TVar22.DebugPtr,
                 (FPCGSubgraphContext *)param_1,&local_1c8);
      FPCGSubgraphContext::AddToReferencedObjects((FPCGSubgraphContext *)param_1,&local_1c8);
      TVar18.DebugPtr = ::operator_new(0x48);
      if ((UPCGLoopSettings *)TVar18.DebugPtr == (UPCGLoopSettings *)0x0) {
        local_298.DebugPtr = (UPCGSettings *)0x0;
        local_1d0 = (IPCGElement *)&DAT_00000010;
        TVar18.DebugPtr = TVar35.DebugPtr;
      }
      else {
        *(undefined4 *)&(TVar18.DebugPtr)->_padding_ = 1;
        *(undefined4 *)((longlong)&(TVar18.DebugPtr)->_padding_ + 4) = 1;
        (TVar18.DebugPtr)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPCGInputForwardingElement___00_SharedPointerInternals__6B_
        ;
        FPCGInputForwardingElement::FPCGInputForwardingElement
                  ((FPCGInputForwardingElement *)&(TVar18.DebugPtr)->_padding_,&local_1c8);
        local_1d0 = (IPCGElement *)&(TVar18.DebugPtr)->_padding_;
        local_298.DebugPtr = TVar18.DebugPtr;
        if ((local_1d0 == (IPCGElement *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        LOCK();
        *(int *)&(TVar18.DebugPtr)->_padding_ = (int)(TVar18.DebugPtr)->_padding_ + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)TVar18.DebugPtr);
      local_268.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_268.TaggedData.ArrayNum = 0;
      local_268.TaggedData.ArrayMax = 0;
      local_268.bCancelExecutionOnEmpty = false;
      local_268.bCancelExecution = false;
      local_268.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_268.DataCrcs.ArrayNum = 0;
      local_268.DataCrcs.ArrayMax = 0;
      local_268.InactiveOutputPinBitmask = 0;
      FPCGSubgraphElement::PrepareSubgraphData
                ((FPCGSubgraphElement *)this,(UPCGSubgraphSettings *)TVar22.DebugPtr,
                 (FPCGSubgraphContext *)param_1,&local_158,&local_268);
      if (1 < local_30c) {
        iVar25 = local_268.TaggedData.ArrayNum;
        pFVar28 = (FPCGTaggedData *)
                  (local_268.TaggedData.AllocatorInstance.Data +
                  (longlong)local_268.TaggedData.ArrayNum * 0x78);
        FVar26.Data = local_268.TaggedData.AllocatorInstance.Data;
        while( true ) {
          if (local_268.TaggedData.ArrayNum != iVar25) {
            local_318 = 0;
            `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_318);
          }
          if ((FPCGTaggedData *)FVar26.Data == pFVar28) break;
          ((FPCGTaggedData *)FVar26.Data)->bIsUsedMultipleTimes = true;
          FVar26.Data = FVar26.Data + 0x78;
        }
      }
      bVar10 = local_278.ArrayNum != 0;
      local_290 = 0xffffffffffffffff;
      local_310 = 0;
      if (0 < local_30c) {
        do {
          FVar26.Data = local_268.TaggedData.AllocatorInstance.Data;
          iVar25 = local_268.TaggedData.ArrayNum;
          local_2d0.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2d0.TaggedData.ArrayNum = local_268.TaggedData.ArrayNum;
          if (local_268.TaggedData.ArrayNum == 0) {
            local_2d0.TaggedData.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,local_268.TaggedData.ArrayNum,0,(ForAnyElementType *)&local_2d0,
                       local_268.TaggedData.ArrayNum,&local_2d0.TaggedData.ArrayMax);
            ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                      (local_2d0.TaggedData.AllocatorInstance.Data,(FPCGTaggedData *)FVar26.Data,
                       iVar25);
          }
          FVar26.Data = local_268.DataCrcs.AllocatorInstance.Data;
          lVar36 = (longlong)local_268.DataCrcs.ArrayNum;
          local_2d0.bCancelExecutionOnEmpty = local_268.bCancelExecutionOnEmpty;
          local_2d0.bCancelExecution = local_268.bCancelExecution;
          local_2d0.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2d0.DataCrcs.ArrayNum = local_268.DataCrcs.ArrayNum;
          if (local_268.DataCrcs.ArrayNum == 0) {
            local_2d0.DataCrcs.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,local_268.DataCrcs.ArrayNum,0,&local_2d0.DataCrcs.AllocatorInstance,
                       local_268.DataCrcs.ArrayNum,&local_2d0.DataCrcs.ArrayMax);
            memcpy(local_2d0.DataCrcs.AllocatorInstance.Data,FVar26.Data,lVar36 << 3);
          }
          local_2d0.InactiveOutputPinBitmask = local_268.InactiveOutputPinBitmask;
          if (0 < local_308.ArrayNum) {
            uVar27 = (ulonglong)local_310;
            lVar36 = uVar27 * 0x78;
            TVar22.DebugPtr = TVar35.DebugPtr;
            TVar18.DebugPtr = TVar35.DebugPtr;
            do {
              uVar33 = TVar18._0_4_;
              uVar29 = uVar14;
              if ((int)uVar33 < local_308.ArrayNum) {
                uVar29 = ~uVar33 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar11 = (*pcVar9)();
                return (bool)uVar11;
              }
              FVar26.Data = local_308.AllocatorInstance.Data;
              if ((*(int *)(local_308.AllocatorInstance.Data + 8 + (longlong)TVar22.DebugPtr) <=
                   (int)uVar27) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar11 = (*pcVar9)();
                return (bool)uVar11;
              }
              pFVar28 = (FPCGTaggedData *)
                        (*(longlong *)(FVar26.Data + (longlong)TVar22.DebugPtr) + lVar36);
              if (((local_2d0.TaggedData.AllocatorInstance.Data <= pFVar28) &&
                  (pFVar28 < (FPCGTaggedData *)
                             (local_2d0.TaggedData.AllocatorInstance.Data +
                             (longlong)local_2d0.TaggedData.ArrayMax * 0x78))) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar11 = (*pcVar9)();
                return (bool)uVar11;
              }
              if (local_2d0.TaggedData.ArrayNum == local_2d0.TaggedData.ArrayMax) {
                local_2d0.TaggedData.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)&local_2d0,&local_2d0.TaggedData.ArrayMax
                               );
              }
              iVar25 = local_2d0.TaggedData.ArrayNum - uVar33;
              local_2d0.TaggedData.ArrayNum = local_2d0.TaggedData.ArrayNum + 1;
              memmove(local_2d0.TaggedData.AllocatorInstance.Data + (longlong)(int)uVar33 * 0x78 +
                      0x78,local_2d0.TaggedData.AllocatorInstance.Data +
                           (longlong)(int)uVar33 * 0x78,(longlong)iVar25 * 0x78);
              FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)
                         (local_2d0.TaggedData.AllocatorInstance.Data + (longlong)(int)uVar33 * 0x78
                         ),pFVar28);
              TVar18._0_4_ = uVar33 + 1;
              TVar18._4_4_ = 0;
              uVar27 = (ulonglong)local_310;
              TVar22.DebugPtr = (UPCGSettings *)&(TVar22.DebugPtr)->_padding_;
            } while ((int)TVar18._0_4_ < local_308.ArrayNum);
          }
          if (((local_290 == 0xffffffffffffffff) && (bVar10)) &&
             (iVar25 = local_198.TaggedData.ArrayNum, local_198.TaggedData.ArrayNum != 0)) {
            iVar13 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x78,8,local_198.TaggedData.ArrayNum,(ForAnyElementType *)&local_2d0
                                ,&local_2d0.TaggedData.ArrayNum,&local_2d0.TaggedData.ArrayMax);
            ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                      (local_2d0.TaggedData.AllocatorInstance.Data + (longlong)iVar13 * 0x78,
                       (FPCGTaggedData *)local_198.TaggedData.AllocatorInstance.Data,iVar25);
          }
          pFVar20 = FPCGStackHandle::GetStack(&param_1->StackHandle);
          if (pFVar20 == (FPCGStack *)0x0) {
            bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<7898047564279185694>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGLoopElement.cpp"
                                ,0x11e,"Stack");
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            local_314 = local_314 | 0x10;
            pFVar21 = &local_120;
            local_128 = 0xffffffffffffffff;
            local_120.Data = (FScriptContainerElement *)0x0;
            local_118 = 0;
            local_2f8.GraphExecutionTaskId = 0xffffffffffffffff;
            iVar25 = 0;
          }
          else {
            iVar25 = (pFVar20->StackFrames).ArrayNum;
            local_314 = local_314 | 0x20;
            local_238 = pFVar20->GraphExecutionTaskId;
            pFVar30 = (FPCGStackFrame *)(pFVar20->StackFrames).AllocatorInstance.Data;
            local_230.Data = (FScriptContainerElement *)0x0;
            local_228 = iVar25;
            if (iVar25 == 0) {
              local_224 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,iVar25,0,&local_230,iVar25,&local_224);
              ConstructItems<FPCGStackFrame,FPCGStackFrame,int>(local_230.Data,pFVar30,iVar25);
            }
            pFVar21 = &local_230;
            local_2f8.GraphExecutionTaskId = local_238;
            iVar25 = (int)local_118;
          }
          FVar26.Data = local_120.Data;
          iVar13 = *(int *)&pFVar21[1].Data;
          pFVar30 = (FPCGStackFrame *)pFVar21->Data;
          local_2f8.StackFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f8.StackFrames.ArrayNum = iVar13;
          if (iVar13 == 0) {
            local_2f8.StackFrames.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar13,0,&local_2f8.StackFrames.AllocatorInstance,iVar13,
                       &local_2f8.StackFrames.ArrayMax);
            ConstructItems<FPCGStackFrame,FPCGStackFrame,int>
                      (local_2f8.StackFrames.AllocatorInstance.Data,pFVar30,iVar13);
          }
          uVar29 = local_314;
          if ((local_314 & 0x20) != 0) {
            uVar29 = local_314 & 0xffffffdf;
            local_314 = uVar29;
            DestructItems<FPCGStackFrame,int>((FPCGStackFrame *)local_230.Data,local_228);
            if ((FPCGStackFrame *)local_230.Data != (FPCGStackFrame *)0x0) {
              FMemory::Free(local_230.Data);
            }
          }
          if ((uVar29 & 0x10) != 0) {
            local_314 = uVar29 & 0xffffffef;
            DestructItems<FPCGStackFrame,int>((FPCGStackFrame *)FVar26.Data,iVar25);
            if ((FPCGStackFrame *)FVar26.Data != (FPCGStackFrame *)0x0) {
              FMemory::Free(FVar26.Data);
            }
          }
          uVar29 = local_2f8.StackFrames.ArrayNum + 2;
          if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
          }
          if (local_2f8.StackFrames.ArrayMax < (int)uVar29) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,uVar29,&local_2f8.StackFrames.AllocatorInstance,
                       local_2f8.StackFrames.ArrayNum,&local_2f8.StackFrames.ArrayMax);
          }
          if (local_2f8.StackFrames.ArrayNum == local_2f8.StackFrames.ArrayMax) {
            local_2f8.StackFrames.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_2f8.StackFrames.AllocatorInstance,
                            &local_2f8.StackFrames.ArrayMax);
          }
          lVar36 = (longlong)local_2f8.StackFrames.ArrayNum;
          pUVar6 = param_1->Node;
          local_1d8 = 0;
          local_2f8.StackFrames.ArrayNum = local_2f8.StackFrames.ArrayNum + 1;
          pFVar30 = (FPCGStackFrame *)(local_2f8.StackFrames.AllocatorInstance.Data + lVar36 * 0x30)
          ;
          *(undefined8 *)&(pFVar30->Object).SoftObjectPtr.field_0x18 = 0;
          *(undefined8 *)&(pFVar30->Object).SoftObjectPtr.field_0x20 = 0;
          *(undefined8 *)&(pFVar30->Object).SoftObjectPtr = 0;
          *(undefined8 *)&(pFVar30->Object).SoftObjectPtr.field_0x10 = 0;
          *(undefined8 *)&(pFVar30->Object).SoftObjectPtr.field_0x8 = 0;
          FUtf8String::Reset((FUtf8String *)&(pFVar30->Object).SoftObjectPtr.field_0x18,0);
          pFVar30->LoopIndex = -1;
          pFVar30->Hash = 0;
          local_f0 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPCGNode *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)pFVar30,(FObjectPtr)&local_f0);
          pFVar30->LoopIndex = -1;
          FPCGStackFrame::ComputeHash(pFVar30);
          if (local_2f8.StackFrames.ArrayNum == local_2f8.StackFrames.ArrayMax) {
            local_2f8.StackFrames.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_2f8.StackFrames.AllocatorInstance,
                            &local_2f8.StackFrames.ArrayMax);
          }
          lVar36 = (longlong)local_2f8.StackFrames.ArrayNum;
          local_2f8.StackFrames.ArrayNum = local_2f8.StackFrames.ArrayNum + 1;
          FPCGStackFrame::FPCGStackFrame
                    ((FPCGStackFrame *)
                     (local_2f8.StackFrames.AllocatorInstance.Data + lVar36 * 0x30),local_310);
          uVar7 = local_290;
          local_288.Data = (FScriptContainerElement *)0x0;
          local_280 = 0;
          if ((local_290 != 0xffffffffffffffff) && (bVar10)) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_288,(int *)((longlong)&local_280 + 4));
            local_280 = CONCAT44(local_280._4_4_,iVar25 + 1);
            *(ulong64 *)(local_288.Data + (longlong)iVar25 * 8) = uVar7;
          }
          FPCGSubgraphContext::AddToReferencedObjects((FPCGSubgraphContext *)param_1,&local_2d0);
          TVar22.DebugPtr = ::operator_new(0x60);
          if ((UPCGLoopSettings *)TVar22.DebugPtr == (UPCGLoopSettings *)0x0) {
            pIVar34 = (IPCGElement *)&DAT_00000010;
            TVar22.DebugPtr = TVar35.DebugPtr;
          }
          else {
            *(undefined4 *)&(TVar22.DebugPtr)->_padding_ = 1;
            *(undefined4 *)((longlong)&(TVar22.DebugPtr)->_padding_ + 4) = 1;
            (TVar22.DebugPtr)->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFPCGLoopInputForwardingElement___00_SharedPointerInternals__6B_
            ;
            FPCGInputForwardingElement::FPCGInputForwardingElement
                      ((FPCGInputForwardingElement *)&(TVar22.DebugPtr)->_padding_,&local_2d0);
            FVar26.Data = local_278.AllocatorInstance.Data;
            (TVar22.DebugPtr)->_padding_ = uVar7;
            (TVar22.DebugPtr)->_padding_ = (longlong)&___7FPCGLoopInputForwardingElement__6B_;
            plVar31 = (longlong *)&(TVar22.DebugPtr)->Seed;
            *plVar31 = 0;
            piVar1 = (int *)((longlong)&(TVar22.DebugPtr)->OriginalSettings + 4);
            lVar36 = (longlong)local_278.ArrayNum;
            *(int *)&(TVar22.DebugPtr)->OriginalSettings = local_278.ArrayNum;
            if (local_278.ArrayNum == 0) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,local_278.ArrayNum,0,(ForAnyElementType *)plVar31,local_278.ArrayNum,
                         piVar1);
              memcpy((void *)*plVar31,FVar26.Data,lVar36 << 3);
            }
            pIVar34 = (IPCGElement *)&(TVar22.DebugPtr)->_padding_;
            if ((pIVar34 == (IPCGElement *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            LOCK();
            *(int *)&(TVar22.DebugPtr)->_padding_ = (int)(TVar22.DebugPtr)->_padding_ + 1;
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)TVar22.DebugPtr);
          FVar26.Data = local_288.Data;
          lVar36 = (longlong)(int)local_280;
          local_2e0.Data = (FScriptContainerElement *)0x0;
          local_2d8 = CONCAT44(local_2d8._4_4_,(int)local_280);
          if ((int)local_280 == 0) {
            local_2d8 = local_280 & 0xffffffff;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(int)local_280,0,&local_2e0,(int)local_280,
                       (int *)((longlong)&local_2d8 + 4));
            memcpy(local_2e0.Data,FVar26.Data,lVar36 << 3);
          }
          TVar18 = local_298;
          if ((UPCGLoopSettings *)TVar22.DebugPtr != (UPCGLoopSettings *)0x0) {
            LOCK();
            *(int *)&(TVar22.DebugPtr)->_padding_ = (int)(TVar22.DebugPtr)->_padding_ + 1;
            UNLOCK();
          }
          if ((UPCGLoopSettings *)local_298.DebugPtr != (UPCGLoopSettings *)0x0) {
            LOCK();
            *(int *)&(local_298.DebugPtr)->_padding_ = (int)(local_298.DebugPtr)->_padding_ + 1;
            UNLOCK();
          }
          TVar23.DebugPtr = TVar35.DebugPtr;
          if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
             (bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar12)
             ) {
            TVar23 = (TObjectPtr<UPCGSettings>_u_0)(param_1->ExecutionSource).InterfaceInstance;
          }
          local_e8.PreGraphElement.Object = local_1d0;
          local_e8.Graph = local_f8;
          local_e8.PreGraphElement.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)TVar18;
          if ((UPCGLoopSettings *)TVar18.DebugPtr != (UPCGLoopSettings *)0x0) {
            LOCK();
            *(int *)&(TVar18.DebugPtr)->_padding_ = (int)(TVar18.DebugPtr)->_padding_ + 1;
            UNLOCK();
          }
          if ((UPCGLoopSettings *)TVar22.DebugPtr != (UPCGLoopSettings *)0x0) {
            LOCK();
            *(int *)&(TVar22.DebugPtr)->_padding_ = (int)(TVar22.DebugPtr)->_padding_ + 1;
            UNLOCK();
          }
          local_e8.ExternalDependencies.AllocatorInstance.Data = local_2e0.Data;
          local_e8.ExternalDependencies.ArrayNum = (int)local_2d8;
          local_e8.ExternalDependencies.ArrayMax = local_2d8._4_4_;
          local_e8.FromStack = &local_2f8;
          local_2e0.Data = (FScriptContainerElement *)0x0;
          local_2d8 = 0;
          local_e8.bAllowHierarchicalGeneration = false;
          local_e8.ExecutionSource = (IPCGGraphExecutionSource *)TVar23;
          local_e8.InputElement.Object = pIVar34;
          local_e8.InputElement.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)TVar22;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)TVar18.DebugPtr);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)TVar22.DebugPtr);
          if (local_2e0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.Data);
          }
          local_2a0 = FPCGContext::ScheduleGraph(param_1,&local_e8);
          if (local_e8.ExternalDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_e8.ExternalDependencies.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.InputElement.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.PreGraphElement.SharedReferenceCount.ReferenceController);
          if (local_2a0 != 0xffffffffffffffff) {
            pFVar3 = param_1 + 1;
            if (bVar10) {
              local_290 = local_2a0;
            }
            if ((((FScriptContainerElement *)pFVar3->_padding_ <=
                  (FScriptContainerElement *)&local_2a0) &&
                ((FScriptContainerElement *)&local_2a0 <
                 (FScriptContainerElement *)pFVar3->_padding_ +
                 (longlong)
                 *(int *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 4) * 8
                )) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar12)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            iVar25 = *(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data;
            piVar1 = (int *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 4);
            if (iVar25 == *piVar1) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,(ForAnyElementType *)pFVar3,piVar1);
            }
            *(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data = iVar25 + 1;
            *(ulong64 *)((FScriptContainerElement *)pFVar3->_padding_ + (longlong)iVar25 * 8) =
                 local_2a0;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)TVar22.DebugPtr);
          if (local_288.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data);
          }
          DestructItems<FPCGStackFrame,int>
                    ((FPCGStackFrame *)local_2f8.StackFrames.AllocatorInstance.Data,
                     local_2f8.StackFrames.ArrayNum);
          if ((FPCGStackFrame *)local_2f8.StackFrames.AllocatorInstance.Data !=
              (FPCGStackFrame *)0x0) {
            FMemory::Free(local_2f8.StackFrames.AllocatorInstance.Data);
          }
          if (local_2d0.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.DataCrcs.AllocatorInstance.Data);
          }
          DestructItems<FPCGTaggedData,int>
                    ((FPCGTaggedData *)local_2d0.TaggedData.AllocatorInstance.Data,
                     local_2d0.TaggedData.ArrayNum);
          if ((FPCGTaggedData *)local_2d0.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0
             ) {
            FMemory::Free(local_2d0.TaggedData.AllocatorInstance.Data);
          }
          local_310 = local_310 + 1;
        } while ((int)local_310 < local_30c);
      }
      if (*(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data == 0) {
        bVar10 = true;
      }
      else {
        *(undefined1 *)&param_1[1].InputData.TaggedData.ArrayNum = 1;
        this_00 = &param_1->DynamicDependencies;
        param_1->bIsPaused = true;
        if (bVar10) {
          iVar25 = *(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data;
          uVar29 = iVar25 - 1;
          if ((int)uVar29 < iVar25) {
            uVar14 = ~uVar29 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64_const_&>
                    (this_00,(ulong64 *)local_110,
                     (bool *)(param_1[1]._padding_ +
                             (longlong)
                             (*(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + -1)
                             * 8));
          bVar10 = false;
        }
        else {
          iVar25 = *(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data;
          pbVar32 = (bool *)param_1[1]._padding_;
          if ((iVar25 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          uVar14 = *(int *)&(param_1->DynamicDependencies).Elements.field_0x8 -
                   *(int *)&(param_1->DynamicDependencies).Elements.field_0x34;
          uVar29 = uVar14 + iVar25;
          if (uVar14 < uVar29) {
            if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar29);
            }
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,uVar29);
            iVar13 = 1;
            if (3 < uVar29) {
              uVar27 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
              lVar36 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                }
              }
              iVar13 = 1 << ((byte)lVar36 & 0x1f);
            }
            iVar5 = (param_1->DynamicDependencies).HashSize;
            if ((iVar5 == 0) || (iVar5 < iVar13)) {
              (param_1->DynamicDependencies).HashSize = iVar13;
              TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
              Rehash(this_00);
            }
          }
          pbVar4 = pbVar32 + (longlong)iVar25 * 8;
          for (; pbVar32 != pbVar4; pbVar32 = pbVar32 + 8) {
            TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
            Emplace<unsigned___int64_const_&>(this_00,(ulong64 *)(local_110 + 4),pbVar32);
          }
          bVar10 = false;
        }
      }
      if (local_268.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.DataCrcs.AllocatorInstance.Data);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_268.TaggedData.AllocatorInstance.Data,
                 local_268.TaggedData.ArrayNum);
      if ((FPCGTaggedData *)local_268.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_268.TaggedData.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_298.DebugPtr);
      if (local_1c8.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.DataCrcs.AllocatorInstance.Data);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_1c8.TaggedData.AllocatorInstance.Data,
                 local_1c8.TaggedData.ArrayNum);
      if ((FPCGTaggedData *)local_1c8.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_1c8.TaggedData.AllocatorInstance.Data);
      }
    }
    if (local_158.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_158.TaggedData.AllocatorInstance.Data,
               local_158.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_158.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_158.TaggedData.AllocatorInstance.Data);
    }
    if (local_198.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_198.TaggedData.AllocatorInstance.Data,
               local_198.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_198.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_198.TaggedData.AllocatorInstance.Data);
    }
    if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.AllocatorInstance.Data);
    }
    DestructItems<FPCGDataCollection,int>
              ((FPCGDataCollection *)local_308.AllocatorInstance.Data,local_308.ArrayNum);
    FVar26.Data = local_308.AllocatorInstance.Data;
  }
  else {
    if (param_1->bIsPaused != false) {
      bVar10 = false;
      goto LAB_149c11368;
    }
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.ArrayNum = 0;
    local_220.ArrayMax = 0;
    UPCGLoopSettings::GetLoopPinNames
              ((UPCGLoopSettings *)TVar22.DebugPtr,param_1,&local_168,&local_220,true);
    if (0 < *(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data) {
      local_res18 = 0;
      do {
        uVar33 = TVar35._0_4_;
        uVar29 = uVar14;
        if ((int)uVar33 < *(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data) {
          uVar29 = ~uVar33 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        iVar25 = *(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data;
        uVar7 = *(ulong64 *)(local_res18 + param_1[1]._padding_);
        local_208.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.TaggedData.ArrayNum = 0;
        local_208.TaggedData.ArrayMax = 0;
        local_208.bCancelExecutionOnEmpty = false;
        local_208.bCancelExecution = false;
        local_208.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.DataCrcs.ArrayNum = 0;
        local_208.DataCrcs.ArrayMax = 0;
        local_208.InactiveOutputPinBitmask = 0;
        bVar10 = FPCGContext::GetOutputData(param_1,uVar7,&local_208);
        if (bVar10) {
          if ((local_220.ArrayNum == 0) || (uVar33 == iVar25 - 1U)) {
            pFVar2 = &param_1->OutputData;
            if ((pFVar2 == &local_208) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x96e,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            iVar25 = local_208.TaggedData.ArrayNum;
            if (local_208.TaggedData.ArrayNum != 0) {
              iVar13 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x78,8,local_208.TaggedData.ArrayNum,(ForAnyElementType *)pFVar2,
                                  &(param_1->OutputData).TaggedData.ArrayNum,
                                  &(param_1->OutputData).TaggedData.ArrayMax);
              ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                        ((pFVar2->TaggedData).AllocatorInstance.Data + (longlong)iVar13 * 0x78,
                         (FPCGTaggedData *)local_208.TaggedData.AllocatorInstance.Data,iVar25);
            }
          }
          else {
            pFVar2 = &param_1->OutputData;
            iVar25 = local_208.TaggedData.ArrayNum;
            pFVar28 = (FPCGTaggedData *)
                      (local_208.TaggedData.AllocatorInstance.Data +
                      (longlong)local_208.TaggedData.ArrayNum * 0x78);
            FVar26.Data = local_208.TaggedData.AllocatorInstance.Data;
            while( true ) {
              if (local_208.TaggedData.ArrayNum != iVar25) {
                local_317[0] = 0;
                `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(local_317);
              }
              if ((FPCGTaggedData *)FVar26.Data == pFVar28) break;
              if ((FName *)local_220.AllocatorInstance.Data !=
                  (FName *)(local_220.AllocatorInstance.Data + (longlong)local_220.ArrayNum * 8)) {
                FVar24.Data = local_220.AllocatorInstance.Data;
                do {
                  if (*(FName *)FVar24.Data == ((FPCGTaggedData *)FVar26.Data)->Pin)
                  goto LAB_149c11261;
                  FVar24.Data = FVar24.Data + 8;
                } while ((FName *)FVar24.Data !=
                         (FName *)(local_220.AllocatorInstance.Data +
                                  (longlong)local_220.ArrayNum * 8));
              }
              pFVar8 = (FPCGTaggedData *)(pFVar2->TaggedData).AllocatorInstance.Data;
              if (((pFVar8 <= FVar26.Data) &&
                  (FVar26.Data < pFVar8 + (param_1->OutputData).TaggedData.ArrayMax)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar9 = (code *)swi(3);
                uVar11 = (*pcVar9)();
                return (bool)uVar11;
              }
              iVar13 = (param_1->OutputData).TaggedData.ArrayNum;
              piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
              if (iVar13 == *piVar1) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x878,(ForAnyElementType *)pFVar2,piVar1);
              }
              (param_1->OutputData).TaggedData.ArrayNum = iVar13 + 1;
              FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)
                         ((pFVar2->TaggedData).AllocatorInstance.Data + (longlong)iVar13 * 0x78),
                         (FPCGTaggedData *)FVar26.Data);
LAB_149c11261:
              FVar26.Data = FVar26.Data + 0x78;
            }
          }
          FPCGContext::ClearOutputData(param_1,uVar7);
        }
        if (local_208.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.DataCrcs.AllocatorInstance.Data);
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_208.TaggedData.AllocatorInstance.Data,
                   local_208.TaggedData.ArrayNum);
        if ((FPCGTaggedData *)local_208.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0)
        {
          FMemory::Free(local_208.TaggedData.AllocatorInstance.Data);
        }
        local_res18 = local_res18 + 8;
        TVar35._0_4_ = uVar33 + 1;
        TVar35._4_4_ = 0;
      } while ((int)TVar35._0_4_ < *(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data);
    }
    bVar10 = true;
    FVar26.Data = local_168.AllocatorInstance.Data;
    if ((FName *)local_220.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_220.AllocatorInstance.Data);
      FVar26.Data = local_168.AllocatorInstance.Data;
    }
  }
  if ((FPCGDataCollection *)FVar26.Data != (FPCGDataCollection *)0x0) {
    FMemory::Free(FVar26.Data);
  }
LAB_149c11368:
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar10;
}

// PrepareLoopDataCollections @ 149c318a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGLoopElement::PrepareLoopDataCollections
          (FPCGLoopElement *this,FPCGContext *param_1,UPCGLoopSettings *param_2,
          TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *param_3,
          FPCGDataCollection *param_4,TArray<FName,TSizedDefaultAllocator<32>_> *param_5,
          FPCGDataCollection *param_6)

{
  int *piVar1;
  int *piVar2;
  FName *pFVar3;
  FPCGDataCollection *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  FName *pFVar10;
  FPCGTaggedData *pFVar11;
  int iVar12;
  FPCGTaggedData *pFVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FPCGTaggedData *pFVar17;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FName,TSizedDefaultAllocator<32>_> local_50;
  
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  if (param_2 == (UPCGLoopSettings *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGLoopElement.cpp"
                       ,0x184,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UPCGLoopSettings::GetLoopPinNames(param_2,param_1,&local_50,param_5,false);
  piVar1 = &param_3->ArrayMax;
  pFVar4 = (FPCGDataCollection *)(param_3->AllocatorInstance).Data;
  piVar2 = &param_3->ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FPCGDataCollection,int>(pFVar4,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&param_3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPCGDataCollection,int>(pFVar4,*piVar2);
    *piVar2 = 0;
  }
  iVar7 = local_50.ArrayNum;
  iVar12 = *piVar2;
  if (iVar12 < local_50.ArrayNum) {
    iVar12 = local_50.ArrayNum - iVar12;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar12,&param_3->AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<FPCGDataCollection,int>
              ((param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x30,iVar12);
  }
  else {
    if (local_50.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_50._8_8_ & 0xffffffff);
    }
    if (local_50.ArrayNum < iVar12) {
      uVar16 = iVar12 - local_50.ArrayNum;
      if ((int)(uVar16 | local_50.ArrayNum) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (uVar16 != 0) {
        TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_>::RemoveAtImpl(param_3,iVar7,uVar16);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&param_3->AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  local_res20 = (param_1->InputData).TaggedData.ArrayNum;
  uVar9 = (ulonglong)(int)local_res20;
  pFVar17 = (FPCGTaggedData *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
  pFVar13 = pFVar17 + uVar9;
  do {
    if ((param_1->InputData).TaggedData.ArrayNum != (int)uVar9) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar17 == pFVar13) {
      if ((FName *)local_50.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      return;
    }
    if ((FName *)local_50.AllocatorInstance.Data !=
        (FName *)(local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8)) {
      FVar14.Data = local_50.AllocatorInstance.Data;
      do {
        if (*(FName *)FVar14.Data == pFVar17->Pin) {
          uVar16 = (uint)((longlong)FVar14.Data - (longlong)local_50.AllocatorInstance.Data >> 3);
          goto LAB_149c31aa7;
        }
        FVar14.Data = FVar14.Data + 8;
      } while ((FName *)FVar14.Data !=
               (FName *)(local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8));
    }
    uVar16 = 0xffffffff;
LAB_149c31aa7:
    pFVar10 = (FName *)(param_5->AllocatorInstance).Data;
    pFVar3 = pFVar10 + param_5->ArrayNum;
    if (pFVar10 != pFVar3) {
      do {
        if (*pFVar10 == pFVar17->Pin) {
          bVar6 = true;
          goto LAB_149c31ad4;
        }
        pFVar10 = pFVar10 + 1;
      } while (pFVar10 != pFVar3);
    }
    bVar6 = false;
LAB_149c31ad4:
    if (uVar16 == 0xffffffff) {
      if (bVar6) {
        pFVar11 = (FPCGTaggedData *)(param_4->TaggedData).AllocatorInstance.Data;
        if ((pFVar11 <= pFVar17) && (pFVar17 < pFVar11 + (param_4->TaggedData).ArrayMax)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar12 = (param_4->TaggedData).ArrayNum;
        piVar1 = &(param_4->TaggedData).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)param_4,piVar1);
        }
        (param_4->TaggedData).ArrayNum = iVar12 + 1;
        pFVar11 = (FPCGTaggedData *)
                  ((param_4->TaggedData).AllocatorInstance.Data + (longlong)iVar12 * 0x78);
      }
      else {
        pFVar11 = (FPCGTaggedData *)(param_6->TaggedData).AllocatorInstance.Data;
        if ((pFVar11 <= pFVar17) && (pFVar17 < pFVar11 + (param_6->TaggedData).ArrayMax)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar12 = (param_6->TaggedData).ArrayNum;
        piVar1 = &(param_6->TaggedData).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)param_6,piVar1);
        }
        (param_6->TaggedData).ArrayNum = iVar12 + 1;
        pFVar11 = (FPCGTaggedData *)
                  ((param_6->TaggedData).AllocatorInstance.Data + (longlong)iVar12 * 0x78);
      }
    }
    else {
      uVar8 = 0;
      if ((int)uVar16 < *piVar2) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar15 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x30;
      if ((*(FPCGTaggedData **)&pFVar15->field_0x0 <= pFVar17) &&
         (pFVar17 < *(FPCGTaggedData **)&pFVar15->field_0x0 + *(int *)(pFVar15 + 0xc))) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar12 = *(int *)&pFVar15[8].field_0x0;
      if (iVar12 == *(int *)(pFVar15 + 0xc)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
      }
      *(int *)&pFVar15[8].field_0x0 = iVar12 + 1;
      pFVar11 = (FPCGTaggedData *)
                (*(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)iVar12 * 0x78);
    }
    FPCGTaggedData::FPCGTaggedData(pFVar11,pFVar17);
    uVar9 = (ulonglong)local_res20;
    pFVar17 = pFVar17 + 1;
  } while( true );
}

