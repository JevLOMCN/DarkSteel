// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b10f30

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
FPCGTagsToAttributeSetElement::ExecuteInternal
          (FPCGTagsToAttributeSetElement *this,FPCGContext *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  long64 lVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *pUVar9;
  UPCGParamData *pUVar10;
  FPCGTaggedData *this_00;
  ulonglong uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FPCGDataCollection *pFVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  bool bVar19;
  undefined1 local_res20 [8];
  FGCScopeGuard local_108;
  undefined1 local_107 [3];
  uint local_104;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_100;
  undefined4 local_f0;
  undefined4 local_ec;
  TObjectPtr<UObject> local_e8;
  int local_e0;
  UPCGParamData *local_d8;
  long64 local_d0;
  FPCGDataCollection *local_c8;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  uint uStack_ac;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FScriptContainerElement *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId138,"FPCGTagsToAttributeSetElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGConvertToAttributeSet.cpp"
               ,0x8a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId138);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGConvertToAttributeSet.cpp"
                         ,0x8b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_100,&PCGPinConstants::DefaultInputLabel);
  uVar11 = (ulonglong)local_100.ArrayNum;
  pFVar17 = &param_1->OutputData;
  pFVar15 = local_100.AllocatorInstance.Data + uVar11 * 0x78;
  local_104 = local_100.ArrayNum;
  pFVar13 = local_100.AllocatorInstance.Data + 0x30;
  local_c8 = pFVar17;
  local_c0 = pFVar15;
  do {
    if (local_100.ArrayNum != (uint)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar13 + -0x30 == pFVar15) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
      if ((FPCGTaggedData *)local_100.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    if (*(longlong *)&pFVar13[-0x30].field_0x0 != 0) {
      bVar6 = IsInGameThread();
      if (param_1 == (FPCGContext *)0x0) {
        if ((!bVar6) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4331830188552749225>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0xa9,"Context != nullptr || IsInGameThread()"), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
LAB_149b11072:
        pUVar9 = GetTransientPackageAsObject();
        pUVar10 = NewObject<UPCGParamData>(pUVar9);
      }
      else {
        if (bVar6) goto LAB_149b11072;
        if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4331830188552749348>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        FGCScopeGuard::FGCScopeGuard(&local_108);
        pUVar9 = GetTransientPackageAsObject();
        pUVar10 = NewObject<UPCGParamData>(pUVar9);
        FGCScopeGuard::~FGCScopeGuard(&local_108);
        if ((pUVar10 == (UPCGParamData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0x12a,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        local_d8 = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UPCGParamData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_e8,(bool *)&local_d8);
      }
      if (((pUVar10 == (UPCGParamData *)0x0) || (pUVar10->_padding_ == 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParamData && ParamData->Metadata",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGConvertToAttributeSet.cpp"
                             ,0x98,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      iVar8 = (pFVar17->TaggedData).ArrayNum;
      piVar1 = &(pFVar17->TaggedData).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)pFVar17,piVar1);
      }
      (pFVar17->TaggedData).ArrayNum = iVar8 + 1;
      this_00 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar17->TaggedData).AllocatorInstance.Data + (longlong)iVar8 * 0x78),
                           (FPCGTaggedData *)(pFVar13 + -0x30));
      FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)pUVar10);
      local_d0 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar10->_padding_,-1);
      uVar14 = *(uint *)(pFVar13 + 8);
      iStack_b0 = 0;
      local_98 = 0;
      uStack_ac = 1;
      uStack_9c = 0;
      if (uVar14 != 0) {
        pFVar15 = *(FScriptContainerElement **)pFVar13;
        if (pFVar15 == (FScriptContainerElement *)0x0) {
          pFVar15 = pFVar13 + -0x10;
        }
        uVar16 = *(uint *)pFVar15;
        while (uVar16 == 0) {
          lVar12 = (longlong)iStack_b0;
          local_98 = local_98 + 0x20;
          iStack_b0 = iStack_b0 + 1;
          uStack_9c = uVar14;
          if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b0)
          goto LAB_149b1117e;
          uVar16 = *(uint *)(pFVar15 + lVar12 * 4 + 4);
        }
        uStack_ac = -uVar16 & uVar16;
        uVar11 = (ulonglong)uStack_ac * 2 + 1;
        lVar12 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_e8.field0_0x0._4_4_ = (undefined4)lVar12;
        uStack_9c = local_98 + -1 + local_e8.field0_0x0._4_4_;
        if ((int)uVar14 < (int)uStack_9c) {
          uStack_9c = uVar14;
        }
      }
LAB_149b1117e:
      local_b8 = pFVar13 + -0x20;
      pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar13 + -0x10);
      TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
      uStack_94 = local_3c;
      iStack_90 = *(int *)(pFVar13 + -0x18) - *(int *)(pFVar13 + 0x14);
      uVar16 = uVar14 & 0xffffffe0;
      uStack_a0 = 0xffffffff;
      TStack_80.CurrentBitIndex = uStack_9c;
      TStack_80.UnvisitedBitMask = 0xffffffff;
      iVar8 = (int)uVar14 >> 5;
      TStack_80._28_4_ = local_3c;
      TStack_80.BaseBitIndex = local_98;
      uStack_60 = CONCAT44(uStack_8c,iStack_90);
      local_a8 = pTVar18;
      local_88 = local_b8;
      TStack_80.Array = pTVar18;
      if (((int)uVar14 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      lVar4 = local_d0;
      uVar2 = *(uint *)(pFVar13 + 8);
      if (uVar14 != uVar2) {
        if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar13 !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar13;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) &
                 *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
        while (uVar14 == 0) {
          lVar12 = (longlong)iVar8;
          uVar16 = uVar16 + 0x20;
          iVar8 = iVar8 + 1;
          uVar14 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
          goto LAB_149b11280;
          uVar14 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
        }
        uVar11 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_e0 = (int)lVar12;
        uVar14 = local_e0 + -1 + uVar16;
        if ((int)uVar2 < (int)uVar14) {
          uVar14 = uVar2;
        }
      }
LAB_149b11280:
      while( true ) {
        pFVar5 = local_88;
        if (*(int *)(local_88 + 8) - *(int *)(local_88 + 0x34) != (int)uStack_60) {
          local_107[0] = 0;
          `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_107);
        }
        if (((TStack_80.CurrentBitIndex == uVar14) &&
            (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar13 + -0x10))) &&
           (pFVar15 = local_c0, pFVar17 = local_c8, pFVar5 == pFVar13 + -0x20)) break;
        local_f0 = 0xffffffff;
        local_ec = 0;
        PCG::Private::SetAttributeFromTag
                  ((FString *)(*(longlong *)pFVar5 + (longlong)TStack_80.CurrentBitIndex * 0x18),
                   (UPCGMetadata *)pUVar10->_padding_,lVar4,CreateAttribute,(FParseTagResult *)0x0,
                   (TOptional<FName>)&local_f0);
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      }
    }
    uVar11 = (ulonglong)local_104;
    pFVar13 = pFVar13 + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 149b11bd0

EPCGElementExecutionLoopMode __thiscall
FPCGTagsToAttributeSetElement::ExecutionLoopMode
          (FPCGTagsToAttributeSetElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b2d220

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
FPCGTagsToAttributeSetElement::SupportsBasePointDataInputs
          (FPCGTagsToAttributeSetElement *this,FPCGContext *param_1)

{
  return true;
}

