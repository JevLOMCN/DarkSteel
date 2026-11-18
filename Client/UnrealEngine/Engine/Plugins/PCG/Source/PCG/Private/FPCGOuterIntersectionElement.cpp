// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149c14100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGOuterIntersectionElement::ExecuteInternal
          (FPCGOuterIntersectionElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
  UPCGNode *pUVar2;
  longlong lVar3;
  FObjectPtr_u_0 *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  UClass *pUVar11;
  UPCGSettings *pUVar12;
  TObjectPtr<UPCGSettings>_u_0 TVar13;
  FPCGDataTypeIdentifier *pFVar14;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar15;
  FObjectPtr_u_0 FVar16;
  FPCGTaggedData *pFVar17;
  ulonglong uVar18;
  FObjectPtr_u_0 *pFVar19;
  ForAnyElementType FVar20;
  TObjectPtr<UPCGSettings>_u_0 TVar21;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  ForAnyElementType FVar25;
  bool bVar26;
  <lambda_1> local_res10;
  undefined1 local_res20 [8];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6 [6];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  TObjectPtr<UPCGSettings>_u_0 local_e0;
  bool local_d8 [8];
  FPCGDataCollection *local_d0;
  UPCGSpatialData *local_c8;
  int *local_c0;
  TObjectPtr<UPCGSettings>_u_0 local_b8;
  FObjectPtr_u_0 local_b0;
  FObjectPtr_u_0 *local_a8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_a0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_90;
  FScriptContainerElement *local_88;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_80;
  FPCGDataTypeIdentifier local_70;
  FPCGDataTypeIdentifier local_58;
  
  TVar21.DebugPtr = (UPCGSettings *)0x0;
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId75,"FPCGOuterIntersectionElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGOuterIntersectionElement.cpp"
               ,0x4b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId75);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    pUVar2 = param_1->Node;
    pFVar1 = &param_1->InputData;
    local_d0 = pFVar1;
    if ((pUVar2 == (UPCGNode *)0x0) ||
       (pUVar12 = UPCGNode::GetSettings(pUVar2), pUVar12 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar17 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGOuterIntersectionSettings>_::__l2::<lambda_1>_>
                          (&pFVar1->TaggedData,local_res10);
      if (pFVar17 != (FPCGTaggedData *)0x0) {
        local_b8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar17->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_b8.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c1422b;
          UE::GC::MarkAsReachable((UObject *)local_b8.DebugPtr);
        }
        if (local_b8.DebugPtr != (UPCGSettings *)0x0) {
          pUVar11 = UPCGOuterIntersectionSettings::StaticClass();
          bVar6 = FObjectPtr::IsA(&local_b8.ObjectPtr,pUVar11);
          if (bVar6) {
            local_e0.DebugPtr = local_b8.DebugPtr;
            TVar13 = local_b8;
            goto LAB_149c14233;
          }
        }
      }
    }
    else {
      pUVar12 = UPCGNode::GetSettings(pUVar2);
      TVar13.DebugPtr = FPCGDataCollection::GetSettings(pFVar1,pUVar12);
      if (TVar13.DebugPtr != (UPCGSettings *)0x0) {
        local_e0.DebugPtr = TVar13.DebugPtr;
        pUVar11 = UPCGOuterIntersectionSettings::StaticClass();
        iVar9 = (int)pUVar11->_padding_;
        if ((iVar9 <= *(int *)((TVar13.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar11->_padding_)) goto LAB_149c14233;
      }
    }
LAB_149c1422b:
    local_e0.DebugPtr = (UPCGSettings *)0x0;
    TVar13.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar11 = UPCGOuterIntersectionSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar11);
    if (bVar6) {
      local_e0 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      local_d0 = &param_1->InputData;
      TVar13 = local_e0;
    }
    else {
      local_d0 = &param_1->InputData;
      local_e0.DebugPtr = (UPCGSettings *)0x0;
      TVar13.DebugPtr = TVar21.DebugPtr;
    }
  }
LAB_149c14233:
  if ((TVar13.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGOuterIntersectionElement.cpp"
                         ,0x4e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pUVar2 = param_1->Node;
  local_90 = &(param_1->OutputData).TaggedData;
  iVar9 = FPCGDataCollection::GetSpatialInputCountByPin
                    (&param_1->InputData,&PCGIntersectionConstants::PrimaryLabel);
  if (iVar9 == 0) goto LAB_149c1485d;
  local_c0 = &(pUVar2->InputPins).ArrayNum;
  if (*(char *)((longlong)&TVar13.DebugPtr[1]._padding_ + 1) == '\0') {
    pFVar23 = (pUVar2->InputPins).AllocatorInstance.Data;
    iVar9 = *local_c0;
    local_88 = pFVar23 + (longlong)iVar9 * 8;
    do {
      pFVar24 = local_88;
      if (*local_c0 != iVar9) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar23 == pFVar24) {
        local_d0 = &param_1->InputData;
        break;
      }
      lVar3 = *(longlong *)pFVar23;
      if ((lVar3 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InputPin",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGOuterIntersectionElement.cpp"
                             ,0x5e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((*(FName *)(lVar3 + 0x48) == PCGIntersectionConstants::PrimaryLabel) ||
         (*(char *)(lVar3 + 0x50) == '\x03')) {
LAB_149c143b8:
        bVar6 = false;
      }
      else {
        TVar21 = (TObjectPtr<UPCGSettings>_u_0)0x1;
        pFVar14 = FPCGDataTypeIdentifier::operator&
                            ((FPCGDataTypeIdentifier *)(lVar3 + 0x58),&local_70,Spatial);
        bVar6 = FPCGDataTypeIdentifier::operator!(pFVar14);
        if ((bVar6) ||
           (iVar10 = FPCGDataCollection::GetSpatialInputCountByPin(local_d0,(FName *)(lVar3 + 0x48))
           , iVar10 != 0)) goto LAB_149c143b8;
        bVar6 = true;
      }
      if ((TVar21.DebugPtr != (UPCGSettings *)0x0) &&
         (TVar21.DebugPtr = (UPCGSettings *)0x0,
         local_70.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_70.Ids.AllocatorInstance.Data);
      }
      if (bVar6) goto LAB_149c143e9;
      pFVar23 = pFVar23 + 8;
    } while( true );
  }
  pFVar1 = local_d0;
  bVar6 = false;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  pFVar24 = (pUVar2->InputPins).AllocatorInstance.Data;
  iVar9 = *local_c0;
  pFVar23 = pFVar24 + (longlong)iVar9 * 8;
  while( true ) {
    if (*local_c0 != iVar9) {
      local_f8 = 0;
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_f8);
    }
    pTVar22 = local_90;
    if (pFVar24 == pFVar23) break;
    lVar3 = *(longlong *)pFVar24;
    if ((*(FName *)(lVar3 + 0x48) == PCGIntersectionConstants::PrimaryLabel) ||
       (*(char *)(lVar3 + 0x50) == '\x03')) {
LAB_149c144a1:
      bVar8 = true;
    }
    else {
      bVar6 = true;
      pFVar14 = FPCGDataTypeIdentifier::operator&
                          ((FPCGDataTypeIdentifier *)(lVar3 + 0x58),&local_58,Spatial);
      bVar8 = FPCGDataTypeIdentifier::operator!(pFVar14);
      if (bVar8) goto LAB_149c144a1;
      bVar8 = false;
    }
    if ((bVar6) &&
       (bVar6 = false, local_58.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Ids.AllocatorInstance.Data);
    }
    if ((bVar8) ||
       (local_c8 = FPCGDataCollection::GetSpatialUnionOfInputsByPin
                             (pFVar1,param_1,(FName *)(lVar3 + 0x48),local_d8),
       local_c8 == (UPCGSpatialData *)0x0)) {
      pFVar24 = pFVar24 + 8;
    }
    else {
      if ((local_f0.Data <= (FScriptContainerElement *)&local_c8) &&
         (((FScriptContainerElement *)&local_c8 < local_f0.Data + (longlong)local_e8._4_4_ * 8 &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)))) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar10 = (int)local_e8;
      if ((int)local_e8 == local_e8._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_f0,(int *)((longlong)&local_e8 + 4));
      }
      pFVar24 = pFVar24 + 8;
      local_e8 = CONCAT44(local_e8._4_4_,iVar10 + 1);
      *(UPCGSpatialData **)(local_f0.Data + (longlong)iVar10 * 8) = local_c8;
    }
  }
  if ((int)local_e8 == 0) {
    if (*(char *)((longlong)&local_e0.DebugPtr[1]._padding_ + 1) != '\0') {
      pTVar15 = FPCGDataCollection::GetInputsByPin
                          (&param_1->InputData,&local_80,&PCGIntersectionConstants::PrimaryLabel);
      if (pTVar22 != pTVar15) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)(pTVar22->AllocatorInstance).Data,pTVar22->ArrayNum);
        pFVar23 = (pTVar22->AllocatorInstance).Data;
        if (pFVar23 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar23);
        }
        (pTVar22->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
        (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar22->ArrayNum = pTVar15->ArrayNum;
        pTVar22->ArrayMax = pTVar15->ArrayMax;
        pTVar15->ArrayNum = 0;
        pTVar15->ArrayMax = 0;
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
      goto LAB_149c14844;
    }
  }
  else {
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,&local_a0,&PCGIntersectionConstants::PrimaryLabel);
    uVar18 = (ulonglong)local_a0.ArrayNum;
    local_d0 = (FPCGDataCollection *)CONCAT44(local_d0._4_4_,local_a0.ArrayNum);
    local_a8 = (FObjectPtr_u_0 *)(local_a0.AllocatorInstance.Data + uVar18 * 0x78);
    pFVar19 = local_a8;
    FVar25.Data = local_a0.AllocatorInstance.Data;
    while( true ) {
      if (local_a0.ArrayNum != (int)uVar18) {
        local_f7 = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_f7);
      }
      if ((FObjectPtr_u_0 *)FVar25.Data == pFVar19) break;
      local_b0 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar25.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c146a6:
        if ((UPCGData *)local_b0.Handle == (UPCGData *)0x0) goto LAB_149c14794;
        pUVar11 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_b0,pUVar11);
        TVar21 = local_e0;
        if ((!bVar6) || ((UPCGData *)local_b0.Handle == (UPCGData *)0x0)) goto LAB_149c14794;
        iVar9 = (int)local_e8;
        uVar18 = (ulonglong)(int)local_e8;
        pFVar23 = local_f0.Data + uVar18 * 8;
        FVar16 = local_b0;
        FVar20.Data = local_f0.Data;
        while( true ) {
          if ((int)uVar18 != iVar9) {
            local_f6[0] = 0;
            `TCheckedPointerIterator<UPCGSpatialData_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_f6);
          }
          pTVar22 = local_90;
          if (FVar20.Data == pFVar23) break;
          FVar16.Handle =
               (UObject *)
               (**(code **)(*(longlong *)FVar16.Handle + 1000))
                         (FVar16.Handle,param_1,*(UPCGSpatialData **)FVar20.Data);
          FVar20.Data = FVar20.Data + 8;
          *(char *)&((TObjectPtr<UPCGMetadata> *)&FVar16.Handle[6].field_0x20)->field0_0x0 =
               (char)TVar21.DebugPtr[1]._padding_;
          *(undefined1 *)(FVar16.Handle + 2) =
               *(undefined1 *)((longlong)&TVar21.DebugPtr[1]._padding_ + 2);
          uVar18 = local_e8 & 0xffffffff;
        }
        uVar18 = (ulonglong)local_d0 & 0xffffffff;
        iVar9 = local_90->ArrayNum;
        if (iVar9 == local_90->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,&local_90->AllocatorInstance,&local_90->ArrayMax);
        }
        pTVar22->ArrayNum = iVar9 + 1;
        pFVar17 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((pTVar22->AllocatorInstance).Data + (longlong)iVar9 * 0x78),
                             (FPCGTaggedData *)FVar25.Data);
        FPCGDataPtrWrapper::operator=(&pFVar17->Data,(UPCGData *)FVar16.Handle);
        FVar25.Data = FVar25.Data + 0x78;
        pFVar19 = local_a8;
      }
      else {
        if ((UPCGData *)local_b0.Handle != (UPCGData *)0x0) {
          UE::GC::MarkAsReachable(local_b0.Handle);
          goto LAB_149c146a6;
        }
LAB_149c14794:
        pFVar4 = (FObjectPtr_u_0 *)(pTVar22->AllocatorInstance).Data;
        if (((pFVar4 <= FVar25.Data) && (FVar25.Data < pFVar4 + (longlong)pTVar22->ArrayMax * 0xf))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar9 = pTVar22->ArrayNum;
        if (iVar9 == pTVar22->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,&pTVar22->AllocatorInstance,&pTVar22->ArrayMax);
        }
        pTVar22->ArrayNum = iVar9 + 1;
        FPCGTaggedData::FPCGTaggedData
                  ((FPCGTaggedData *)((pTVar22->AllocatorInstance).Data + (longlong)iVar9 * 0x78),
                   (FPCGTaggedData *)FVar25.Data);
        FVar25.Data = FVar25.Data + 0x78;
      }
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
    local_80.AllocatorInstance.Data = local_a0.AllocatorInstance.Data;
LAB_149c14844:
    if ((FPCGTaggedData *)local_80.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
LAB_149c1485d:
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
LAB_149c143e9:
  if (5 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  goto LAB_149c1485d;
}

// ExecutionLoopMode @ 149c228a0

EPCGElementExecutionLoopMode __thiscall
FPCGOuterIntersectionElement::ExecutionLoopMode
          (FPCGOuterIntersectionElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c357d0

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
FPCGOuterIntersectionElement::SupportsBasePointDataInputs
          (FPCGOuterIntersectionElement *this,FPCGContext *param_1)

{
  return true;
}

