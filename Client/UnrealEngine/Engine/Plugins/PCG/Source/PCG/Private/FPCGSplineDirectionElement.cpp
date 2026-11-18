// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c68570

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
FPCGSplineDirectionElement::ExecuteInternal(FPCGSplineDirectionElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  code *pcVar2;
  FObjectPtr_u_0 FVar3;
  FObjectPtr_u_0 *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  TObjectPtr<UPCGSettings>_u_0 TVar12;
  FPCGTaggedData *pFVar13;
  FText *pFVar14;
  UPCGSplineData *pUVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  bool bVar18;
  bool bVar19;
  <lambda_1> local_res10 [8];
  uint local_res18;
  TObjectPtr<UPCGSettings>_u_0 local_res20;
  FObjectPtr_u_0 local_78;
  FObjectPtr_u_0 *local_70;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_68;
  FText local_58;
  FText local_48;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId160,"FPCGSplineDirectionElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineDirection.cpp"
               ,0xa0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId160);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineDirection.cpp"
                         ,0xa2,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar10 = UPCGReverseSplineSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    if (bVar5) {
      TVar12.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar12.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149c6869f;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
    pFVar13 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGReverseSplineSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_res10[0]);
    if (pFVar13 != (FPCGTaggedData *)0x0) {
      local_res20.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar13->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_res20.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c6869d;
        UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
      }
      if (local_res20.DebugPtr != (UPCGSettings *)0x0) {
        pUVar10 = UPCGReverseSplineSettings::StaticClass();
        bVar5 = FObjectPtr::IsA(&local_res20.ObjectPtr,pUVar10);
        TVar12 = local_res20;
        if (bVar5) goto LAB_149c6869f;
      }
    }
  }
  else {
    pUVar11 = UPCGNode::GetSettings(this_00);
    TVar12.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
    if (TVar12.DebugPtr != (UPCGSettings *)0x0) {
      pUVar10 = UPCGReverseSplineSettings::StaticClass();
      iVar9 = (int)pUVar10->_padding_;
      if ((iVar9 <= *(int *)((TVar12.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar9 * 8)
          == &pUVar10->_padding_)) goto LAB_149c6869f;
    }
  }
LAB_149c6869d:
  TVar12.DebugPtr = (UPCGSettings *)0x0;
LAB_149c6869f:
  if ((TVar12.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineDirection.cpp"
                         ,0xa5,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  bVar5 = false;
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_68,&PCGPinConstants::DefaultInputLabel);
  uVar16 = (ulonglong)local_68.ArrayNum;
  local_res18 = local_68.ArrayNum;
  local_70 = (FObjectPtr_u_0 *)(local_68.AllocatorInstance.Data + uVar16 * 0x78);
  FVar17.Data = local_68.AllocatorInstance.Data;
  do {
    pFVar4 = local_70;
    if (local_68.ArrayNum != (uint)uVar16) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if ((FObjectPtr_u_0 *)FVar17.Data == pFVar4) goto LAB_149c6881a;
    iVar9 = (param_1->OutputData).TaggedData.ArrayNum;
    piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
    }
    (param_1->OutputData).TaggedData.ArrayNum = iVar9 + 1;
    pFVar13 = FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)
                         ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                         (longlong)iVar9 * 0x78),(FPCGTaggedData *)FVar17.Data);
    local_78 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar17.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c6877a:
      if ((UPCGSplineData *)local_78.Handle != (UPCGSplineData *)0x0) {
        pUVar10 = Z_Construct_UClass_UPCGSplineData_NoRegister();
        bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_78,pUVar10);
        FVar3 = local_78;
        if (((bVar7) && ((UPCGSplineData *)local_78.Handle != (UPCGSplineData *)0x0)) &&
           (iVar9 = FPCGSplineStruct::GetNumberOfSplineSegments
                              ((FPCGSplineStruct *)&local_78.Handle[6].field_0x20), 0 < iVar9)) {
          iVar9 = (int)TVar12.DebugPtr[1]._padding_;
          if ((iVar9 == 1) || (iVar9 == 2)) {
            bVar8 = PCGSplineDirection::IsClockwiseXY((UPCGSplineData *)FVar3.Handle);
            bVar18 = (int)TVar12.DebugPtr[1]._padding_ == 1;
            bVar7 = bVar8 != bVar18;
            if ((*(char *)((longlong)&TVar12.DebugPtr[1]._padding_ + 4) != '\0') &&
               (bVar7 = bVar8 == bVar18, !bVar5)) {
              pFVar14 = FText::AsLocalizable_Advanced_LocText
                                  (&local_58,L"PCGSplineDirectionElement",
                                   L"WarningUpdateClockwiseAlgorithm",
                                   L"The clockwise detecting algorithm has been updated. Replace with a new copy of the node to remove this warning."
                                  );
              PCGLog::LogWarningOnGraph(pFVar14,param_1);
              if (local_58.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
              }
              bVar5 = true;
            }
            if (!bVar7) goto LAB_149c68980;
          }
          else if (iVar9 != 0) {
            pFVar14 = FText::AsLocalizable_Advanced_LocText
                                (&local_48,L"PCGSplineDirectionElement",L"InvalidOperation",
                                 L"Invalid operation enum value");
            PCGLog::LogErrorOnGraph(pFVar14,param_1);
            if (local_48.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
            }
LAB_149c6881a:
            DestructItems<FPCGTaggedData,int>
                      ((FPCGTaggedData *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
            if ((FPCGTaggedData *)local_68.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
              FMemory::Free(local_68.AllocatorInstance.Data);
            }
            if (bVar19) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            return true;
          }
          pUVar15 = PCGSplineDirection::Reverse((UPCGSplineData *)FVar3.Handle,param_1);
          FPCGDataPtrWrapper::operator=(&pFVar13->Data,(UPCGData *)pUVar15);
        }
      }
    }
    else if ((UPCGSplineData *)local_78.Handle != (UPCGSplineData *)0x0) {
      UE::GC::MarkAsReachable(local_78.Handle);
      goto LAB_149c6877a;
    }
LAB_149c68980:
    FVar17.Data = FVar17.Data + 0x78;
    uVar16 = (ulonglong)local_res18;
  } while( true );
}

// ExecutionLoopMode @ 149c75b20

EPCGElementExecutionLoopMode __thiscall
FPCGSplineDirectionElement::ExecutionLoopMode
          (FPCGSplineDirectionElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

