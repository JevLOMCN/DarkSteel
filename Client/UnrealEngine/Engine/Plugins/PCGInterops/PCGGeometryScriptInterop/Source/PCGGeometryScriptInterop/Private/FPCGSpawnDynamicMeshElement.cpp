// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 3

// CanExecuteOnlyOnMainThread @ 14cee8b80

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
FPCGSpawnDynamicMeshElement::CanExecuteOnlyOnMainThread
          (FPCGSpawnDynamicMeshElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 14cef01d0

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
FPCGSpawnDynamicMeshElement::ExecuteInternal(FPCGSpawnDynamicMeshElement *this,FPCGContext *param_1)

{
  int *piVar1;
  uint uVar2;
  UPCGNode *this_00;
  IPCGGraphExecutionSource *pIVar3;
  code *pcVar4;
  FObjectPtr_u_0 this_01;
  UDynamicMeshComponent *pUVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  UObject *pUVar11;
  AActor *pAVar12;
  FPCGTaggedData *pFVar13;
  FText *pFVar14;
  longlong lVar15;
  UPCGDynamicMeshManagedComponent *this_02;
  ulonglong uVar16;
  wchar_t *pwVar17;
  FObjectPtr_u_0 *pFVar18;
  uint uVar19;
  int iVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  bool bVar25;
  <lambda_1> local_res10;
  undefined1 local_res20 [8];
  undefined1 local_128 [2];
  undefined1 local_126;
  undefined1 local_125;
  TObjectPtr<UPCGSettings>_u_0 local_120;
  uint local_118;
  TObjectPtr<UPCGSettings>_u_0 local_110;
  FObjectPtr_u_0 local_108;
  AActor *local_100;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_f8;
  int local_e8;
  int local_e4;
  UDynamicMeshComponent *local_e0;
  FName local_d8;
  FScriptContainerElement *local_d0;
  int iStack_c8;
  uint uStack_c4;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  FScriptContainerElement *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FText local_70 [2];
  undefined4 local_44;
  
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId42,"FPCGSpawnDynamicMeshElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGSpawnDynamicMesh.cpp"
               ,0x2a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId42);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGSpawnDynamicMesh.cpp"
                         ,0x2c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar13 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnDynamicMeshSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar13 != (FPCGTaggedData *)0x0) {
        local_110.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar13->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_110.DebugPtr == (UPCGSettings *)0x0) goto LAB_14cef02f7;
          UE::GC::MarkAsReachable((UObject *)local_110.DebugPtr);
        }
        if (local_110.DebugPtr != (UPCGSettings *)0x0) {
          pUVar8 = UPCGSpawnDynamicMeshSettings::StaticClass();
          bVar6 = FObjectPtr::IsA(&local_110.ObjectPtr,pUVar8);
          TVar10 = local_110;
          local_120 = local_110;
          if (bVar6) goto LAB_14cef02ff;
        }
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_00);
      TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
        local_120.DebugPtr = TVar10.DebugPtr;
        pUVar8 = UPCGSpawnDynamicMeshSettings::StaticClass();
        iVar20 = (int)pUVar8->_padding_;
        if ((iVar20 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
            &pUVar8->_padding_)) goto LAB_14cef02ff;
      }
    }
LAB_14cef02f7:
    local_120.DebugPtr = (UPCGSettings *)0x0;
    TVar10.DebugPtr = local_120.DebugPtr;
  }
  else {
    pUVar8 = UPCGSpawnDynamicMeshSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (!bVar6) goto LAB_14cef02f7;
    local_120 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    TVar10 = local_120;
  }
LAB_14cef02ff:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGSpawnDynamicMesh.cpp"
                         ,0x2f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)(TVar10.DebugPtr + 1));
  if (pUVar11 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar20 = (int)pUVar8->_padding_;
    if ((iVar20 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar20 * 8) ==
        &pUVar8->_padding_)) {
      pAVar12 = (AActor *)
                TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)(TVar10.DebugPtr + 1));
      if (pAVar12 != (AActor *)0x0) {
        local_100 = pAVar12;
        pUVar8 = Z_Construct_UClass_AActor_NoRegister();
        iVar20 = (int)pUVar8->_padding_;
        if ((iVar20 <= *(int *)(pAVar12->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar12->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
            &pUVar8->_padding_)) goto LAB_14cef042d;
      }
      pAVar12 = (AActor *)0x0;
      local_100 = pAVar12;
      goto LAB_14cef042d;
    }
  }
  pAVar12 = FPCGContext::GetTargetActor(param_1,(UPCGSpatialData *)0x0);
  local_100 = pAVar12;
LAB_14cef042d:
  if (pAVar12 == (AActor *)0x0) {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (local_70,L"PCGSpawnDynamicMeshElement",L"InvalidTargetActor",
                         L"Invalid target actor.");
    PCGLog::LogErrorOnGraph(pFVar14,param_1);
    if (local_70[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70[0].TextData.Reference + 0x10))();
    }
  }
  else if (((((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
            (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar6))
           && (pIVar3 = (param_1->ExecutionSource).InterfaceInstance,
              pIVar3 != (IPCGGraphExecutionSource *)0x0)) &&
          (lVar15 = (**(code **)((longlong)*pIVar3 + 8))(), lVar15 != 0)) {
    pUVar8 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar20 = (int)pUVar8->_padding_;
    if ((iVar20 <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar20 * 8)
        == &pUVar8->_padding_)) {
      FPCGDataCollection::GetInputsByPin
                (&param_1->InputData,&local_f8,&PCGPinConstants::DefaultInputLabel);
      uVar16 = (ulonglong)local_f8.ArrayNum;
      local_118 = local_f8.ArrayNum;
      pFVar23 = local_f8.AllocatorInstance.Data + 0x38;
      pFVar18 = (FObjectPtr_u_0 *)(local_f8.AllocatorInstance.Data + uVar16 * 0x78);
      while( true ) {
        if (local_f8.ArrayNum != (uint)uVar16) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if ((FObjectPtr_u_0 *)(pFVar23 + -0x38) == pFVar18) break;
        local_108 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(pFVar23 + -0x38))->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14cef055f:
          if ((UPCGDynamicMeshData *)local_108.Handle == (UPCGDynamicMeshData *)0x0)
          goto LAB_14cef0847;
          pUVar8 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_108,pUVar8);
          this_01 = local_108;
          if ((!bVar6) || ((UPCGDynamicMeshData *)local_108.Handle == (UPCGDynamicMeshData *)0x0))
          goto LAB_14cef0847;
          local_125 = 0;
          this_02 = PCGDynamicMeshManagedComponent::GetOrCreateDynamicMeshManagedComponent
                              (param_1,(UPCGSettingsInterface *)TVar10.DebugPtr,
                               (UPCGDynamicMeshData *)local_108.Handle,pAVar12,SUB82(&local_126,0));
          if ((this_02 == (UPCGDynamicMeshManagedComponent *)0x0) ||
             (local_e0 = UPCGDynamicMeshManagedComponent::GetComponent(this_02),
             local_e0 == (UDynamicMeshComponent *)0x0)) goto LAB_14cef084f;
          UPCGDynamicMeshData::InitializeDynamicMeshComponentFromData
                    ((UPCGDynamicMeshData *)this_01.Handle,local_e0);
          uVar19 = *(uint *)pFVar23;
          iStack_c8 = 0;
          local_b0 = 0;
          uStack_c4 = 1;
          uStack_b4 = 0;
          if (uVar19 != 0) {
            pFVar22 = *(FScriptContainerElement **)(pFVar23 + -8);
            if (pFVar22 == (FScriptContainerElement *)0x0) {
              pFVar22 = pFVar23 + -0x18;
            }
            uVar24 = *(uint *)pFVar22;
            while (uVar24 == 0) {
              iStack_c8 = iStack_c8 + 1;
              local_b0 = local_b0 + 0x20;
              uStack_b4 = uVar19;
              if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_c8)
              goto LAB_14cef065f;
              uVar24 = *(uint *)(pFVar22 + (longlong)iStack_c8 * 4);
            }
            uStack_c4 = -uVar24 & uVar24;
            uVar16 = (ulonglong)uStack_c4 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_e8 = (int)lVar15;
            uStack_b4 = local_e8 + -1 + local_b0;
            if ((int)uVar19 < (int)uStack_b4) {
              uStack_b4 = uVar19;
            }
          }
LAB_14cef065f:
          local_d0 = pFVar23 + -0x28;
          local_c0 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar23 + -0x18);
          uStack_ac = local_44;
          iStack_a8 = *(uint *)(pFVar23 + -0x20) - *(uint *)(pFVar23 + 0xc);
          uVar24 = uVar19 & 0xffffffe0;
          TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
          uStack_b8 = 0xffffffff;
          TStack_98.CurrentBitIndex = uStack_b4;
          TStack_98.UnvisitedBitMask = 0xffffffff;
          iVar20 = (int)uVar19 >> 5;
          TStack_98._28_4_ = local_44;
          TStack_98.BaseBitIndex = local_b0;
          uStack_78 = CONCAT44(uStack_a4,iStack_a8);
          local_a0 = local_d0;
          TStack_98.Array = local_c0;
          if (((int)uVar19 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          pUVar5 = local_e0;
          uVar2 = *(uint *)pFVar23;
          if (uVar19 != uVar2) {
            pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar23 + -0x18);
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar23 + -8) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar23 + -8);
            }
            uVar19 = -1 << ((byte)uVar19 & 0x1f) &
                     *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
            while (uVar19 == 0) {
              iVar20 = iVar20 + 1;
              uVar24 = uVar24 + 0x20;
              uVar19 = uVar2;
              if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar20)
              goto LAB_14cef076e;
              uVar19 = *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
            }
            uVar16 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_e4 = (int)lVar15;
            uVar19 = (uVar24 - 1) + local_e4;
            if ((int)uVar2 < (int)uVar19) {
              uVar19 = uVar2;
            }
          }
LAB_14cef076e:
          while( true ) {
            pFVar22 = local_a0;
            if (*(uint *)(local_a0 + 8) - *(uint *)(local_a0 + 0x34) != (int)uStack_78) {
              local_128[0] = 0;
              `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
            }
            if (((TStack_98.CurrentBitIndex == uVar19) &&
                (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar23 + -0x18))) &&
               (pFVar22 == pFVar23 + -0x28)) break;
            lVar15 = *(longlong *)pFVar22;
            if (*(int *)(lVar15 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18) == 0) {
              pwVar17 = L"";
            }
            else {
              pwVar17 = *(wchar_t **)(lVar15 + (longlong)TStack_98.CurrentBitIndex * 0x18);
            }
            ::FName::FName(&local_d8,pwVar17);
            TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
                      ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar5->_padding_,&local_d8);
            TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
          }
          piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
          iVar20 = (param_1->OutputData).TaggedData.ArrayNum;
          if (iVar20 == *piVar1) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar20 + 1;
          FPCGTaggedData::FPCGTaggedData
                    ((FPCGTaggedData *)
                     ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                     (longlong)iVar20 * 0x78),(FPCGTaggedData *)(pFVar23 + -0x38));
          uVar16 = (ulonglong)local_118;
          pFVar23 = pFVar23 + 0x78;
          pAVar12 = local_100;
          TVar10 = local_120;
        }
        else {
          if ((UPCGDynamicMeshData *)local_108.Handle != (UPCGDynamicMeshData *)0x0) {
            UE::GC::MarkAsReachable(local_108.Handle);
            goto LAB_14cef055f;
          }
LAB_14cef0847:
          PCGLog::InputOutput::LogInvalidInputDataError(param_1);
LAB_14cef084f:
          uVar16 = (ulonglong)local_118;
          pFVar23 = pFVar23 + 0x78;
        }
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if ((FPCGTaggedData *)local_f8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
    }
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 14cef4190

bool __thiscall
FPCGSpawnDynamicMeshElement::IsCacheable(FPCGSpawnDynamicMeshElement *this,UPCGSettings *param_1)

{
  return false;
}

