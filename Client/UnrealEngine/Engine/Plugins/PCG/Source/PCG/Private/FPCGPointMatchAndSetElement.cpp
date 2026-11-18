// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c15800

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
FPCGPointMatchAndSetElement::ExecuteInternal(FPCGPointMatchAndSetElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  UPCGMatchAndSetBase *this_01;
  FObjectPtr_u_0 *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FObjectPtr_u_0 FVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  UClass *pUVar11;
  UPCGSettings *pUVar12;
  TObjectPtr<UPCGSettings>_u_0 TVar13;
  FText *pFVar14;
  FPCGTaggedData *pFVar15;
  UPCGPointData *this_02;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar16;
  ulonglong uVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  ForAnyElementType FVar21;
  longlong lVar22;
  bool bVar23;
  <lambda_1> local_res10;
  undefined1 local_res20 [8];
  TObjectPtr<UPCGSettings>_u_0 local_108;
  FObjectPtr_u_0 local_100;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_f8;
  int *local_e8;
  int *local_e0;
  int *local_d8;
  FObjectPtr_u_0 *local_d0;
  FString local_c8;
  FString local_b8;
  FText local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FString local_68;
  FString local_58;
  FText local_48;
  
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId187,"FPCGPointMatchAndSetElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointMatchAndSet.cpp"
               ,0xbb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId187);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar11 = UPCGPointMatchAndSetSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar11);
    if (bVar6) {
      TVar13.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar13.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149c1592d;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar12 = UPCGNode::GetSettings(this_00), pUVar12 == (UPCGSettings *)0x0)) {
    local_res10 = SUB81(param_1,0);
    pFVar15 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPointMatchAndSetSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_res10);
    if (pFVar15 != (FPCGTaggedData *)0x0) {
      local_108.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar15->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGPointMatchAndSetSettings *)local_108.DebugPtr ==
            (UPCGPointMatchAndSetSettings *)0x0) goto LAB_149c15926;
        UE::GC::MarkAsReachable((UObject *)local_108.DebugPtr);
      }
      if ((UPCGPointMatchAndSetSettings *)local_108.DebugPtr != (UPCGPointMatchAndSetSettings *)0x0)
      {
        pUVar11 = UPCGPointMatchAndSetSettings::StaticClass();
        bVar6 = FObjectPtr::IsA(&local_108.ObjectPtr,pUVar11);
        TVar13 = local_108;
        if (bVar6) goto LAB_149c1592d;
      }
    }
  }
  else {
    pUVar12 = UPCGNode::GetSettings(this_00);
    TVar13.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar12);
    if ((UPCGPointMatchAndSetSettings *)TVar13.DebugPtr != (UPCGPointMatchAndSetSettings *)0x0) {
      pUVar11 = UPCGPointMatchAndSetSettings::StaticClass();
      iVar1 = (int)pUVar11->_padding_;
      if ((iVar1 <= *(int *)((TVar13.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8)
          == &pUVar11->_padding_)) goto LAB_149c1592d;
    }
  }
LAB_149c15926:
  TVar13.DebugPtr = (UPCGSettings *)0x0;
LAB_149c1592d:
  if (((UPCGPointMatchAndSetSettings *)TVar13.DebugPtr == (UPCGPointMatchAndSetSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointMatchAndSet.cpp"
                         ,0xbe,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  this_01 = (((TObjectPtr<UPCGMatchAndSetBase> *)&TVar13.DebugPtr[1]._padding_)->field0_0x0).
            DebugPtr;
  if (this_01 == (UPCGMatchAndSetBase *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_a8,L"PCGPointMatchAndSetElement",L"InvalidMatchAndSetInstance",
                           L"Invalid MatchAndSet instance, try recreating this node from the node palette"
                          );
      FText::ToString(pFVar14);
      FPCGContext::GetTaskName(param_1,&local_b8);
      FPCGContext::GetExecutionSourceName(param_1,&local_c8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,&local_f8,&PCGPinConstants::DefaultInputLabel);
    iVar1 = local_f8.ArrayNum;
    uVar17 = (ulonglong)local_f8.ArrayNum;
    local_d0 = (FObjectPtr_u_0 *)(local_f8.AllocatorInstance.Data + uVar17 * 0x78);
    local_e8 = &(param_1->OutputData).TaggedData.ArrayMax;
    piVar19 = &(param_1->OutputData).TaggedData.ArrayNum;
    FVar21.Data = local_f8.AllocatorInstance.Data;
    local_e0 = local_e8;
    local_d8 = piVar19;
    while( true ) {
      piVar20 = local_e8;
      if (local_f8.ArrayNum != (uint)uVar17) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        piVar19 = local_d8;
        piVar20 = local_e0;
      }
      local_e8 = piVar20;
      if ((FObjectPtr_u_0 *)FVar21.Data == local_d0) break;
      pFVar2 = (FObjectPtr_u_0 *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
      if (((pFVar2 <= FVar21.Data) && (FVar21.Data < pFVar2 + (longlong)*piVar20 * 0xf)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      iVar9 = *piVar19;
      if (iVar9 == *piVar20) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->OutputData,piVar20);
      }
      *piVar19 = iVar9 + 1;
      pFVar15 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                           (longlong)iVar9 * 0x78),(FPCGTaggedData *)FVar21.Data);
      local_100 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar21.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c15be2:
        if ((UPCGPointData *)local_100.Handle == (UPCGPointData *)0x0) goto LAB_149c15e7e;
        pUVar11 = Z_Construct_UClass_UPCGPointData_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_100,pUVar11);
        FVar5 = local_100;
        if ((!bVar6) || ((UPCGPointData *)local_100.Handle == (UPCGPointData *)0x0))
        goto LAB_149c15e7e;
        bVar6 = UPCGMatchAndSetBase::ValidatePreconditions
                          (this_01,(UPCGPointData *)local_100.Handle);
        if (bVar6) {
          this_02 = FPCGContext::NewObject_AnyThread<UPCGPointData>(param_1);
          FPCGDataPtrWrapper::operator=(&pFVar15->Data,(UPCGData *)this_02);
          UPCGSpatialData::InitializeFromData
                    ((UPCGSpatialData *)this_02,(UPCGSpatialData *)FVar5.Handle,(UPCGMetadata *)0x0,
                     true,true);
          pTVar16 = UPCGPointData::GetMutablePoints(this_02);
          if (pTVar16 !=
              (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)&FVar5.Handle[10].field_0x20) {
            iVar9 = *(int *)(FVar5.Handle + 0xb);
            piVar20 = &pTVar16->ArrayMax;
            pFVar3 = (((TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)&FVar5.Handle[10].field_0x20
                      )->AllocatorInstance).Data;
            pTVar16->ArrayNum = iVar9;
            if ((iVar9 == 0) && (*piVar20 == 0)) {
              *piVar20 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xd0,0x10,iVar9,*piVar20,&pTVar16->AllocatorInstance,iVar9,piVar20);
              if (iVar9 != 0) {
                memcpy((pTVar16->AllocatorInstance).Data,pFVar3,(longlong)iVar9 * 0xd0);
              }
            }
          }
          UPCGMatchAndSetBase::MatchAndSet
                    (this_01,param_1,(UPCGPointMatchAndSetSettings *)TVar13.DebugPtr,
                     (UPCGPointData *)FVar5.Handle,this_02);
          cVar8 = (**(code **)(this_01->_padding_ + 0x2b8))(this_01);
          if (cVar8 != '\0') {
            pTVar16 = UPCGPointData::GetMutablePoints(this_02);
            uVar18 = 0;
            iVar9 = pTVar16->ArrayNum;
            if (0 < iVar9) {
              lVar22 = 0;
              do {
                uVar10 = 0;
                if ((int)uVar18 < iVar9) {
                  uVar10 = ~uVar18 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                pFVar3 = (pTVar16->AllocatorInstance).Data;
                iVar9 = PCGHelpers::ComputeSeed(*(int *)(pFVar3 + lVar22 + 0xc4),uVar18);
                *(int *)(pFVar3 + lVar22 + 0xc4) = iVar9;
                uVar18 = uVar18 + 1;
                iVar9 = pTVar16->ArrayNum;
                lVar22 = lVar22 + 0xd0;
              } while ((int)uVar18 < iVar9);
            }
          }
          goto LAB_149c15cfb;
        }
        if (1 < (byte)LogPCG._0_1_) {
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_78,L"PCGPointMatchAndSetElement",L"PreconditionsFailed",
                               L"MatchAndSet failed to validate preconditions on input data");
          FText::ToString(pFVar14);
          FPCGContext::GetTaskName(param_1,&local_88);
          FPCGContext::GetExecutionSourceName(param_1,&local_98);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          goto LAB_149c15cfb;
        }
        FVar21.Data = FVar21.Data + 0x78;
        uVar17 = (ulonglong)(uint)iVar1;
      }
      else {
        if ((UPCGPointData *)local_100.Handle != (UPCGPointData *)0x0) {
          UE::GC::MarkAsReachable(local_100.Handle);
          goto LAB_149c15be2;
        }
LAB_149c15e7e:
        if (1 < (byte)LogPCG._0_1_) {
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_48,L"PCGPointMatchAndSetElement",L"InvalidInputDataType",
                               L"Input data must be of type Point");
          FText::ToString(pFVar14);
          FPCGContext::GetTaskName(param_1,&local_58);
          FPCGContext::GetExecutionSourceName(param_1,&local_68);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
          }
        }
LAB_149c15cfb:
        uVar17 = (ulonglong)(uint)iVar1;
        FVar21.Data = FVar21.Data + 0x78;
      }
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FPCGTaggedData *)local_f8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149c228b0

EPCGElementExecutionLoopMode __thiscall
FPCGPointMatchAndSetElement::ExecutionLoopMode
          (FPCGPointMatchAndSetElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

