// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b7bc00

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
FPCGDifferenceElement::ExecuteInternal(FPCGDifferenceElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  UPCGNode *this_00;
  UPCGData *pUVar5;
  longlong lVar6;
  FObjectPtr_u_0 *pFVar7;
  code *pcVar8;
  bool bVar9;
  byte bVar10;
  FObjectPtr_u_0 FVar11;
  FPCGContext *pFVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  int iVar16;
  UClass *pUVar17;
  UPCGSettings *pUVar18;
  TObjectPtr<UPCGSettings>_u_0 TVar19;
  UObject *pUVar20;
  UPCGDifferenceData *this_01;
  UPCGBasePointData *pUVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  FPCGContext *pFVar24;
  FObjectPtr_u_0 *pFVar25;
  ForAnyElementType FVar26;
  ForAnyElementType FVar27;
  FPCGTaggedData *pFVar28;
  bool bVar29;
  undefined1 auStackY_128 [32];
  <lambda_1> local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  FGCScopeGuard local_d2 [2];
  TObjectPtr<UPCGSettings>_u_0 local_d0;
  FObjectPtr_u_0 *local_c8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_c0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_b0;
  uint local_a0;
  TObjectPtr<UPCGSettings>_u_0 local_98;
  FObjectPtr_u_0 local_90;
  FObjectPtr_u_0 local_88;
  FPCGContext *local_80;
  TObjectPtr<UObject> local_78;
  UPCGDifferenceData *local_70;
  TVector<double>_u_0 local_68;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar29 = -1 < CpuChannel->Enabled;
  local_80 = param_1;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId142,"FPCGDifferenceElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDifferenceElement.cpp"
               ,0x8e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId142);
  }
  if (((param_1->Node != (UPCGNode *)0x0) &&
      (bVar13 = UPCGNode::IsInputPinConnected(param_1->Node,&PCGDifferenceConstants::SourceLabel),
      !bVar13)) &&
     (bVar13 = UPCGNode::IsInputPinConnected
                         (param_1->Node,&PCGDifferenceConstants::DifferencesLabel), !bVar13))
  goto LAB_149b7c3be;
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar17 = UPCGDifferenceSettings::StaticClass();
    bVar13 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar17);
    pFVar24 = param_1;
    if (bVar13) {
      local_d0 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar19 = local_d0;
    }
    else {
      local_d0.DebugPtr = (UPCGSettings *)0x0;
      TVar19.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149b7bd7d;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar18 = UPCGNode::GetSettings(this_00), pUVar18 == (UPCGSettings *)0x0)) {
    pFVar28 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDifferenceSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_d5);
    if (pFVar28 != (FPCGTaggedData *)0x0) {
      local_98.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar28->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_98.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b7bd71;
        UE::GC::MarkAsReachable((UObject *)local_98.DebugPtr);
      }
      if (local_98.DebugPtr != (UPCGSettings *)0x0) {
        pUVar17 = UPCGDifferenceSettings::StaticClass();
        bVar13 = FObjectPtr::IsA(&local_98.ObjectPtr,pUVar17);
        pFVar24 = local_80;
        TVar19 = local_98;
        local_d0 = local_98;
        if (bVar13) goto LAB_149b7bd7d;
      }
    }
  }
  else {
    pUVar18 = UPCGNode::GetSettings(this_00);
    TVar19.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar18);
    if (TVar19.DebugPtr != (UPCGSettings *)0x0) {
      local_d0.DebugPtr = TVar19.DebugPtr;
      pUVar17 = UPCGDifferenceSettings::StaticClass();
      iVar16 = (int)pUVar17->_padding_;
      if ((iVar16 <= *(int *)((TVar19.DebugPtr)->_padding_ + 0x38)) &&
         (pFVar24 = local_80,
         (longlong *)
         *(undefined1 **)(*(longlong *)((TVar19.DebugPtr)->_padding_ + 0x30) + (longlong)iVar16 * 8)
         == &pUVar17->_padding_)) goto LAB_149b7bd7d;
    }
  }
LAB_149b7bd71:
  local_d0.DebugPtr = (UPCGSettings *)0x0;
  pFVar24 = local_80;
  TVar19.DebugPtr = local_d0.DebugPtr;
LAB_149b7bd7d:
  if ((TVar19.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDifferenceElement.cpp"
                          ,0x97,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_b0,&PCGDifferenceConstants::SourceLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_c0,&PCGDifferenceConstants::DifferencesLabel);
  iVar16 = local_c0.ArrayNum;
  pFVar1 = &pFVar24->OutputData;
  bVar13 = false;
  pFVar28 = (FPCGTaggedData *)(local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 0x78)
  ;
  FVar26.Data = local_c0.AllocatorInstance.Data;
  do {
    if (local_c0.ArrayNum != iVar16) {
      local_d4 = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_d4);
    }
    if ((FPCGTaggedData *)FVar26.Data == pFVar28) {
      if (pFVar1 != (FPCGDataCollection *)&local_b0) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data,
                   (pFVar24->OutputData).TaggedData.ArrayNum);
        iVar4 = local_b0.ArrayNum;
        FVar26.Data = local_b0.AllocatorInstance.Data;
        piVar2 = &(pFVar24->OutputData).TaggedData.ArrayMax;
        iVar16 = *piVar2;
        (pFVar24->OutputData).TaggedData.ArrayNum = local_b0.ArrayNum;
        if ((local_b0.ArrayNum == 0) && (iVar16 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,local_b0.ArrayNum,iVar16,(ForAnyElementType *)pFVar1,local_b0.ArrayNum,
                     piVar2);
          ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                    ((pFVar1->TaggedData).AllocatorInstance.Data,(FPCGTaggedData *)FVar26.Data,iVar4
                    );
        }
      }
      goto LAB_149b7c365;
    }
    pUVar5 = (((FPCGTaggedData *)FVar26.Data)->Data).Data.field0_0x0.DebugPtr;
    if (pUVar5 != (UPCGData *)0x0) {
      pUVar17 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      lVar6 = pUVar5->_padding_;
      iVar4 = (int)pUVar17->_padding_;
      if ((iVar4 <= *(int *)(lVar6 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar17->_padding_)) break;
    }
    FVar26.Data = FVar26.Data + 0x78;
  } while( true );
  pUVar5 = (((FPCGTaggedData *)FVar26.Data)->Data).Data.field0_0x0.DebugPtr;
  pUVar17 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
  pFVar12 = local_80;
  lVar6 = pUVar5->_padding_;
  iVar16 = (int)pUVar17->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar16) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar16 * 8) !=
      &pUVar17->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  uVar22 = (ulonglong)local_b0.ArrayNum;
  local_a0 = local_b0.ArrayNum;
  local_c8 = (FObjectPtr_u_0 *)(local_b0.AllocatorInstance.Data + uVar22 * 0x78);
  uVar23 = uVar22;
  pFVar25 = local_c8;
  FVar26.Data = local_b0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar22 != (int)uVar23) {
      local_d3 = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_d3);
    }
    if ((FObjectPtr_u_0 *)FVar26.Data == pFVar25) break;
    local_90 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar26.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b7bf49:
      if ((UPCGSpatialData *)local_90.Handle == (UPCGSpatialData *)0x0) goto LAB_149b7c246;
      pUVar17 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar15 = FObjectPtr::IsA((FObjectPtr *)&local_90,pUVar17);
      FVar11 = local_90;
      if ((!bVar15) || ((UPCGSpatialData *)local_90.Handle == (UPCGSpatialData *)0x0))
      goto LAB_149b7c246;
      pUVar17 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      lVar6 = *(longlong *)&(FVar11.Handle)->field_0x10;
      iVar16 = (int)pUVar17->_padding_;
      if ((*(int *)(lVar6 + 0x38) < iVar16) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar16 * 8) !=
          &pUVar17->_padding_)) {
        bVar10 = 0;
      }
      else {
        bVar10 = 1;
      }
      bVar13 = (bool)(bVar13 | bVar10);
      bVar15 = IsInGameThread();
      if (bVar15) {
        pUVar20 = GetTransientPackageAsObject();
        this_01 = NewObject<UPCGDifferenceData>(pUVar20);
      }
      else {
        if (((pFVar12->AsyncState).bIsRunningOnMainThread != false) &&
           (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4331830188552749348>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        FGCScopeGuard::FGCScopeGuard(local_d2);
        pUVar20 = GetTransientPackageAsObject();
        this_01 = NewObject<UPCGDifferenceData>(pUVar20);
        FGCScopeGuard::~FGCScopeGuard(local_d2);
        if ((this_01 == (UPCGDifferenceData *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                ,0x12a,L""), bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        local_70 = this_01;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UPCGDifferenceData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_>(&pFVar12->AsyncObjects,&local_78,(bool *)&local_70);
      }
      UPCGDifferenceData::Initialize(this_01,(UPCGSpatialData *)FVar11.Handle);
      iVar16 = local_c0.ArrayNum;
      pFVar25 = (FObjectPtr_u_0 *)
                (local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 0x78);
      FVar27.Data = local_c0.AllocatorInstance.Data;
      while( true ) {
        if (local_c0.ArrayNum != iVar16) {
          local_d5 = (<lambda_1>)0x0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_d5);
        }
        TVar19 = local_d0;
        if ((FObjectPtr_u_0 *)FVar27.Data == pFVar25) break;
        local_88 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar27.Data;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b7c0cc:
          if ((UPCGSpatialData *)local_88.Handle != (UPCGSpatialData *)0x0) {
            pUVar17 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
            bVar15 = FObjectPtr::IsA((FObjectPtr *)&local_88,pUVar17);
            if ((bVar15) && ((UPCGSpatialData *)local_88.Handle != (UPCGSpatialData *)0x0)) {
              UPCGDifferenceData::AddDifference(this_01,pFVar12,(UPCGSpatialData *)local_88.Handle);
            }
          }
        }
        else if ((UPCGSpatialData *)local_88.Handle != (UPCGSpatialData *)0x0) {
          UE::GC::MarkAsReachable(local_88.Handle);
          goto LAB_149b7c0cc;
        }
        FVar27.Data = FVar27.Data + 0x78;
      }
      UPCGDifferenceData::SetDensityFunction
                (this_01,(EPCGDifferenceDensityFunction)local_d0.DebugPtr[1]._padding_);
      this_01->bDiffMetadata = *(bool *)((longlong)&TVar19.DebugPtr[1]._padding_ + 2);
      *(undefined1 *)&this_01->_padding_ =
           *(undefined1 *)((longlong)&TVar19.DebugPtr[1]._padding_ + 3);
      pFVar25 = (FObjectPtr_u_0 *)(pFVar1->TaggedData).AllocatorInstance.Data;
      if (((pFVar25 <= FVar26.Data) &&
          (FVar26.Data < pFVar25 + (longlong)(pFVar24->OutputData).TaggedData.ArrayMax * 0xf)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      iVar16 = (pFVar24->OutputData).TaggedData.ArrayNum;
      piVar2 = &(pFVar24->OutputData).TaggedData.ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar1,piVar2);
      }
      (pFVar24->OutputData).TaggedData.ArrayNum = iVar16 + 1;
      pFVar28 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar1->TaggedData).AllocatorInstance.Data + (longlong)iVar16 * 0x78),
                           (FPCGTaggedData *)FVar26.Data);
      FPCGDataPtrWrapper::operator=(&pFVar28->Data,(UPCGData *)this_01);
      cVar3 = *(char *)((longlong)&TVar19.DebugPtr[1]._padding_ + 1);
      if ((cVar3 == '\x02') || (((cVar3 == '\0' && (bVar13)) && (bVar9)))) {
        local_38 = 0;
        local_37 = 0;
        local_33 = 0;
        local_31 = 0;
        local_68._s_0.X = 0.0;
        local_68._s_0.Y = 0.0;
        local_68._s_0.Z = 0.0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        pUVar21 = UPCGSpatialData::ToBasePointData
                            ((UPCGSpatialData *)this_01,pFVar12,(TBox<double> *)&local_68._s_0);
        FPCGDataPtrWrapper::operator=(&pFVar28->Data,(UPCGData *)pUVar21);
      }
      uVar22 = (ulonglong)(uint)local_b0.ArrayNum;
      FVar26.Data = FVar26.Data + 0x78;
      uVar23 = (ulonglong)local_a0;
      pFVar25 = local_c8;
    }
    else {
      if ((UPCGSpatialData *)local_90.Handle != (UPCGSpatialData *)0x0) {
        UE::GC::MarkAsReachable(local_90.Handle);
        goto LAB_149b7bf49;
      }
LAB_149b7c246:
      pFVar7 = (FObjectPtr_u_0 *)(pFVar1->TaggedData).AllocatorInstance.Data;
      if (((pFVar7 <= FVar26.Data) &&
          (FVar26.Data < pFVar7 + (longlong)(pFVar24->OutputData).TaggedData.ArrayMax * 0xf)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      iVar16 = (pFVar24->OutputData).TaggedData.ArrayNum;
      piVar2 = &(pFVar24->OutputData).TaggedData.ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar1,piVar2);
      }
      (pFVar24->OutputData).TaggedData.ArrayNum = iVar16 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((pFVar1->TaggedData).AllocatorInstance.Data + (longlong)iVar16 * 0x78),
                 (FPCGTaggedData *)FVar26.Data);
      uVar22 = (ulonglong)(uint)local_b0.ArrayNum;
      FVar26.Data = FVar26.Data + 0x78;
      uVar23 = (ulonglong)local_a0;
    }
  }
LAB_149b7c365:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
  if ((FPCGTaggedData *)local_c0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum);
  if ((FPCGTaggedData *)local_b0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
LAB_149b7c3be:
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b88b40

EPCGElementExecutionLoopMode __thiscall
FPCGDifferenceElement::ExecutionLoopMode(FPCGDifferenceElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b98960

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
FPCGDifferenceElement::SupportsBasePointDataInputs(FPCGDifferenceElement *this,FPCGContext *param_1)

{
  return true;
}

