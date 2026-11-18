// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// CacheOverridableParamDataIndices @ 1497f00d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGKernelParamsCache::CacheOverridableParamDataIndices
          (FPCGKernelParamsCache *this,FPCGContext *param_1,UPCGDataBinding *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UComputeKernel *pUVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  FName *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  UPCGSettings *pUVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined1 *puVar17;
  FPCGKernelOverridableParam *pFVar18;
  UPCGComputeGraph *pUVar19;
  FPCGKernelOverridableParam *pFVar20;
  bool bVar21;
  undefined1 local_res8 [8];
  FPCGContext *local_res10;
  uint local_res18 [2];
  int local_res20 [2];
  int local_b8;
  uint local_b4;
  uint *local_b0;
  UPCGComputeGraph *local_a8;
  FPCGKernelPin local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FTextFormat local_60 [2];
  
  bVar21 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId221,
               "FPCGKernelParamsCache::CacheOverridableParamDataIndices",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
               ,0xdd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId221);
  }
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDataBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                         ,0xde,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(this->OverridableParamDataIndices).field_0x8 ==
      *(int *)&(this->OverridableParamDataIndices).field_0x34) {
    pUVar19 = (param_2->Graph).field0_0x0.DebugPtr;
    local_a8 = pUVar19;
    if (pUVar19 == (UPCGComputeGraph *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<920666848813383908>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                         ,0xe4,"ComputeGraph");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      local_res18[0] = 0;
      if (0 < (int)pUVar19->_padding_) {
        do {
          pUVar7 = UPCGComputeGraph::GetKernel(pUVar19,local_res18[0]);
          if (pUVar7 == (UComputeKernel *)0x0) {
LAB_1497f04ee:
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<920666848813383917>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                               ,0xed,"Kernel");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            pUVar8 = UPCGComputeKernel::GetPrivateStaticClass();
            iVar6 = (int)pUVar8->_padding_;
            if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar6) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
                &pUVar8->_padding_)) goto LAB_1497f04ee;
            local_b4 = (uint)pUVar7[2]._padding_;
            uVar9 = (ulonglong)(int)local_b4;
            pFVar18 = (FPCGKernelOverridableParam *)pUVar7[2]._padding_;
            pFVar20 = pFVar18 + uVar9;
            while( true ) {
              if ((int)pUVar7[2]._padding_ != (int)uVar9) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<FPCGKernelOverridableParam_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(local_res8);
              }
              pUVar19 = local_a8;
              if (pFVar18 == pFVar20) break;
              if ((pFVar18->bIsPropertyOverriddenByPin == false) ||
                 (pFVar18->bRequiresGPUReadback == false)) {
LAB_1497f0457:
                uVar9 = (ulonglong)local_b4;
                pFVar18 = pFVar18 + 1;
              }
              else {
                pUVar19 = (param_2->Graph).field0_0x0.DebugPtr;
                iVar6 = -1;
                if (pUVar19 == (UPCGComputeGraph *)0x0) {
LAB_1497f0398:
                  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<9049822076394799379>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                                     ,0x113,"BindingIndex != INDEX_NONE");
                  if (bVar4) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                else {
                  local_a0.KernelIndex = *(int *)((longlong)&pUVar7[1]._padding_ + 4);
                  local_a0.PinLabel = pFVar18->Label;
                  local_a0.bIsInput = true;
                  iVar5 = UPCGComputeGraph::GetBindingIndex(pUVar19,&local_a0);
                  if (iVar5 == -1) goto LAB_1497f0398;
                  pFVar10 = UPCGComputeGraph::GetVirtualPinLabelFromBindingIndex
                                      ((param_2->Graph).field0_0x0.DebugPtr,iVar5);
                  if (pFVar10 != (FName *)0x0) {
                    pFVar1 = (param_2->InputDataCollection).TaggedData.AllocatorInstance.Data;
                    if (pFVar1 != pFVar1 + (longlong)
                                           (param_2->InputDataCollection).TaggedData.ArrayNum * 0x78
                       ) {
                      pFVar16 = pFVar1;
                      do {
                        if (*(FName *)(pFVar16 + 0x60) == *pFVar10) {
                          lVar15 = ((longlong)pFVar16 - (longlong)pFVar1) +
                                   SUB168(SEXT816(-0x7777777777777777) *
                                          SEXT816((longlong)pFVar16 - (longlong)pFVar1),8);
                          iVar6 = (int)(lVar15 >> 6) - (int)(lVar15 >> 0x3f);
                          break;
                        }
                        pFVar16 = pFVar16 + 0x78;
                      } while (pFVar16 !=
                               pFVar1 + (longlong)(param_2->InputDataCollection).TaggedData.ArrayNum
                                        * 0x78);
                    }
                  }
                }
                local_res20[0] = iVar6;
                if (iVar6 == -1) {
                  pFVar11 = FText::FromName(&local_70,&pFVar18->Label);
                  pFVar12 = FText::AsLocalizable_Advanced_LocText
                                      (&local_80,L"PCGKernelParamsCache",L"NoOverrideDataFound",
                                       L"No data found on connected override pin \'{0}\'.");
                  pFVar13 = FTextFormat::FTextFormat(local_60,pFVar12,Default);
                  pFVar11 = FText::Format<FText>(&local_90,pFVar13,pFVar11);
                  pUVar14 = (UPCGSettings *)(**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7);
                  PCGComputeHelpers::LogKernelWarning(local_res10,pUVar14,pFVar11);
                  if (local_90.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
                  }
                  if (local_80.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
                  }
                  goto LAB_1497f0457;
                }
                if (*(int *)&(this->OverridableParamDataIndices).field_0x8 !=
                    *(int *)&(this->OverridableParamDataIndices).field_0x34) {
                  puVar2 = *(undefined1 **)&(this->OverridableParamDataIndices).field_0x40;
                  puVar17 = &(this->OverridableParamDataIndices).field_0x38;
                  if (puVar2 != (undefined1 *)0x0) {
                    puVar17 = puVar2;
                  }
                  iVar6 = *(int *)(puVar17 +
                                  (ulonglong)
                                  (*(int *)&(this->OverridableParamDataIndices).field_0x48 - 1U &
                                  local_res18[0]) * 4);
                  if (iVar6 != -1) {
                    lVar15 = *(longlong *)&this->OverridableParamDataIndices;
                    do {
                      if (*(uint *)((longlong)iVar6 * 0x20 + lVar15) == local_res18[0]) {
                        if ((iVar6 != -1) && (lVar15 = (longlong)iVar6 * 0x20 + lVar15, lVar15 != 0)
                           ) goto LAB_1497f04a6;
                        break;
                      }
                      iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar15);
                    } while (iVar6 != -1);
                  }
                }
                local_b0 = local_res18;
                TSet<TTuple<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                          ((TSet<TTuple<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&this->OverridableParamDataIndices,(uint)&local_b8,
                           (TKeyInitializer<int_const_&> *)(ulonglong)local_res18[0],
                           (bool *)&local_b0);
                lVar15 = (longlong)local_b8 * 0x20 + *(longlong *)&this->OverridableParamDataIndices
                ;
LAB_1497f04a6:
                iVar6 = *(int *)(lVar15 + 0x10);
                if (iVar6 == *(int *)(lVar15 + 0x14)) {
                  iVar6 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x828,(ForAnyElementType *)(lVar15 + 8),(int *)(lVar15 + 0x14))
                  ;
                }
                *(int *)(lVar15 + 0x10) = iVar6 + 1;
                TTuple<FPCGKernelOverridableParam,int>::
                TTuple<FPCGKernelOverridableParam,int><FPCGKernelOverridableParam_const_&,int_const_&>
                          ((TTuple<FPCGKernelOverridableParam,int> *)
                           (((ForAnyElementType *)(lVar15 + 8))->Data + (longlong)iVar6 * 0x28),
                           pFVar18,local_res20);
                uVar9 = (ulonglong)local_b4;
                pFVar18 = pFVar18 + 1;
              }
            }
          }
          local_res18[0] = local_res18[0] + 1;
        } while ((int)local_res18[0] < (int)pUVar19->_padding_);
      }
    }
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateAndCacheKernelParams @ 1497fb6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGKernelParamsCache::CreateAndCacheKernelParams
          (FPCGKernelParamsCache *this,FPCGContext *param_1,UPCGDataBinding *param_2)

{
  undefined1 *puVar1;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar2;
  UPCGData *pUVar3;
  ITextData *pIVar4;
  FName FVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  UPCGDataBinding *pUVar9;
  FName *pFVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  UComputeKernel *pUVar15;
  UClass *pUVar16;
  UPCGSettings *pUVar17;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar18;
  UPropertyBag *this_00;
  FProperty *pFVar19;
  FText *pFVar20;
  FText *pFVar21;
  FText *pFVar22;
  FTextFormat *pFVar23;
  FScriptContainerElement *pFVar24;
  ForElementType<FSetElementId> FVar25;
  undefined1 *puVar26;
  uchar *puVar27;
  longlong lVar28;
  int iVar29;
  TKeyInitializer<int_const_&> *pTVar30;
  FName *pFVar31;
  longlong *plVar32;
  bool bVar33;
  undefined1 auStackY_258 [32];
  undefined1 local_216 [2];
  uint local_214;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_210;
  int local_200;
  int local_1fc;
  FPCGKernelParamsCache *local_1f8;
  FPCGContext *local_1f0;
  longlong *local_1e8;
  UPCGSettings *local_1e0;
  UPCGSettings *local_1d8;
  UPCGDataBinding *local_1d0;
  FName local_1c8;
  FName *local_1c0;
  FName *local_1b8;
  uint *local_1b0;
  UPCGComputeGraph *local_1a8;
  FTextFormat local_1a0;
  FText local_190;
  FString local_180;
  FProperty *local_170;
  uchar *puStack_168;
  FFormatArgumentValue local_158;
  undefined4 local_138;
  FText local_128;
  FInstancedStruct local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FTextFormat local_d8;
  FWeakObjectPtr local_c8;
  TObjectPtr<UScriptStruct_const_>_u_0 local_c0;
  uchar *local_b8;
  undefined1 local_b0 [32];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  ForElementType<FSetElementId> local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  bVar33 = -1 < CpuChannel->Enabled;
  local_1f8 = this;
  local_1f0 = param_1;
  local_1d0 = param_2;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId292,"FPCGKernelParamsCache::CreateAndCacheKernelParams",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
               ,0x124);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId292);
  }
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDataBinding",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                          ,0x125,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = _UNK_150631d98;
  lVar7 = ___xmm_00000000ffffffff0000008000000000;
  local_1a8 = (param_2->Graph).field0_0x0.DebugPtr;
  if (local_1a8 == (UPCGComputeGraph *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<920666848813383977>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                        ,0x129,"ComputeGraph");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    local_214 = 0;
    if (0 < (int)local_1a8->_padding_) {
LAB_1497fb830:
      pUVar15 = UPCGComputeGraph::GetKernel(local_1a8,local_214);
      if (pUVar15 != (UComputeKernel *)0x0) {
        pUVar16 = UPCGComputeKernel::GetPrivateStaticClass();
        iVar29 = (int)pUVar16->_padding_;
        if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar29) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
            &pUVar16->_padding_)) goto LAB_1497fc106;
        pUVar17 = (UPCGSettings *)(**(code **)(pUVar15->_padding_ + 0x2b0))(pUVar15);
        local_1d8 = pUVar17;
        if (pUVar17 == (UPCGSettings *)0x0) goto LAB_1497fc12c;
        local_c8.ObjectIndex = 0;
        local_c8.ObjectSerialNumber = 0;
        FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_c0.ObjectPtr);
        local_b0._0_8_ = (FScriptContainerElement *)0x0;
        local_b0._8_8_ = 0;
        local_90 = (void *)0x0;
        local_88 = lVar7;
        uStack_80 = uVar8;
        local_70 = (ForElementType<FSetElementId>)0x0;
        local_68 = 0;
        local_1e0 = pUVar17;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_1e0);
        if (*(int *)&(this->OverridableParamDataIndices).field_0x8 ==
            *(int *)&(this->OverridableParamDataIndices).field_0x34) goto LAB_1497fbfe9;
        puVar1 = *(undefined1 **)&(this->OverridableParamDataIndices).field_0x40;
        pTVar30 = (TKeyInitializer<int_const_&> *)(ulonglong)local_214;
        puVar26 = &(this->OverridableParamDataIndices).field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar26 = puVar1;
        }
        iVar29 = *(int *)(puVar26 +
                         (ulonglong)
                         (*(int *)&(this->OverridableParamDataIndices).field_0x48 - 1U & local_214)
                         * 4);
        if (iVar29 != -1) {
          lVar28 = *(longlong *)&this->OverridableParamDataIndices;
          do {
            if (*(uint *)((longlong)iVar29 * 0x20 + lVar28) == local_214) {
              if (((iVar29 != -1) && (lVar28 = (longlong)iVar29 * 0x20 + lVar28, lVar28 != 0)) &&
                 (plVar32 = (longlong *)(lVar28 + 8), local_1e8 = plVar32,
                 plVar32 != (longlong *)0x0)) {
                bVar11 = -1 < CpuChannel->Enabled;
                if (bVar11) {
                  FCpuProfilerTrace::GetOrCreateSpecId
                            (&__CpuProfilerEventSpecId318,"OverrideKernelParamValues",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                             ,0x13e);
                  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId318);
                }
                pTVar18 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
                          UPCGSettings::CreateEmptyPropertyBagInstance
                                    (pUVar17,(FInstancedPropertyBag *)&local_118);
                if (&local_c0 != pTVar18) {
                  FInstancedStruct::Reset((FInstancedStruct *)&local_c0.ObjectPtr);
                  puVar27 = *(uchar **)(&pTVar18->ObjectPtr + 1);
                  TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar18->ObjectPtr).field0_0x0.Handle;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (TVar2.DebugPtr != (UScriptStruct *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
                  }
                  (pTVar18->ObjectPtr).field0_0x0.Handle = (UObject *)0x0;
                  (&pTVar18->ObjectPtr)[1] = (FObjectPtr_u_0)0x0;
                  plVar32 = local_1e8;
                  this = local_1f8;
                  local_c0.ObjectPtr.field0_0x0 = TVar2.ObjectPtr.field0_0x0;
                  local_b8 = puVar27;
                }
                FInstancedStruct::Reset(&local_118);
                this_00 = FInstancedPropertyBag::GetPropertyBagStruct
                                    ((FInstancedPropertyBag *)&local_c0.ObjectPtr);
                pUVar17 = local_1d8;
                if (this_00 != (UPropertyBag *)0x0) {
                  lVar28 = plVar32[1];
                  pFVar31 = (FName *)*plVar32;
                  local_1b8 = pFVar31 + (longlong)(int)lVar28 * 5;
                  goto LAB_1497fbb67;
                }
                bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<920666848813384004>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                                    ,0x144,"KernelParamsStructType");
                if (bVar12) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (bVar11) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
                local_68 = 0;
                if (local_70 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_70);
                }
                bVar11 = local_b0._12_4_ != 0;
                local_b0._8_8_ = (ulonglong)(uint)local_b0._12_4_ << 0x20;
                if (bVar11) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
                }
                uVar14 = local_88._4_4_;
                uStack_80 = 0xffffffff;
                local_88 = (ulonglong)local_88._4_4_ << 0x20;
                if (0x80 < uVar14) {
                  local_88 = 0x8000000000;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
                }
                if (local_90 != (void *)0x0) {
                  FMemory::Free(local_90);
                }
                if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_b0._0_8_);
                }
                FInstancedStruct::Reset((FInstancedStruct *)&local_c0.ObjectPtr);
                goto LAB_1497fc12c;
              }
              break;
            }
            iVar29 = *(int *)((longlong)iVar29 * 0x20 + 0x18 + lVar28);
          } while (iVar29 != -1);
        }
        goto LAB_1497fbfee;
      }
LAB_1497fc106:
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<920666848813383985>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                          ,0x131,"Kernel");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_1497fc12c;
    }
  }
LAB_1497fc170:
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
LAB_1497fbb67:
  pFVar10 = local_1b8;
  if ((int)plVar32[1] != (int)lVar28) {
    local_216[0] = 0;
    `TCheckedPointerIterator<TTuple<FPCGKernelOverridableParam,int>_const_,int,0>::operator!='::__l2
    ::<lambda_1>::operator()(local_216);
  }
  pUVar9 = local_1d0;
  if (pFVar31 != pFVar10) {
    uVar14 = pFVar31[4].ComparisonIndex.Value;
    uVar13 = 0;
    if ((int)uVar14 < (local_1d0->InputDataCollection).TaggedData.ArrayNum) {
      uVar13 = ~uVar14 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar3 = *(UPCGData **)
              ((pUVar9->InputDataCollection).TaggedData.AllocatorInstance.Data +
              (longlong)(int)uVar14 * 0x78);
    pFVar19 = UStruct::FindPropertyByName((UStruct *)this_00,*pFVar31);
    puVar27 = local_b8;
    if (pFVar19 == (FProperty *)0x0) {
      local_1c8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_1c8,&local_180);
      pFVar20 = FText::FromString(&local_f8,&local_180);
      pFVar21 = FText::FromName(&local_e8,pFVar31);
      pFVar22 = FText::AsLocalizable_Advanced_LocText
                          (&local_108,L"PCGKernelParamsCache",L"OverridePropertyNotFound",
                           L"Overridden property \'{0}\' was not found in container \'{1}\'.");
      pFVar23 = FTextFormat::FTextFormat(&local_d8,pFVar22,Default);
      local_158.Type = Text;
      FText::FText((FText *)&local_158.TextValue,pFVar21);
      if ((local_158.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_138 = 4;
      FText::FText(&local_128,pFVar20);
      if ((local_128.TextData.Reference == (ITextData *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_210.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_210.AllocatorInstance,2,&local_210.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_210.AllocatorInstance.Data,&local_158,2);
      local_1a0.TextFormatData.Object = (pFVar23->TextFormatData).Object;
      local_1a0.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar23->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_1a0.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1a0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1a0.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_190,&local_1a0,&local_210);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_210.AllocatorInstance.Data,local_210.ArrayNum);
      if ((FFormatArgumentValue *)local_210.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_210.AllocatorInstance.Data);
      }
      if (local_128.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
      }
      if (local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar23->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar4 = (pFVar21->TextData).Reference;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))();
      }
      pIVar4 = (pFVar20->TextData).Reference;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))();
      }
      PCGComputeHelpers::LogKernelError(local_1f0,pUVar17,&local_190);
      if (local_190.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
      }
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      if (local_180.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_1497fbfc6;
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
      pFVar31 = pFVar31 + 5;
      plVar32 = local_1e8;
    }
    else {
      if ((pFVar19->ArrayDim < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((puVar27 == (uchar *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar27 = puVar27 + pFVar19->Offset_Internal;
      if (puVar27 == (uchar *)0x0) {
        bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<920666848813384023>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                            ,0x157,"OverrideValuePtr");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        PCGKernelParamsHelpers::OverrideKernelParamValue
                  (local_1f0,pUVar17,(FInstancedPropertyBag *)&local_c0.ObjectPtr,(UStruct *)this_00
                   ,*pFVar31,pFVar19,puVar27,pUVar3);
        FVar5 = *pFVar31;
        local_170 = pFVar19;
        puStack_168 = puVar27;
        uVar14 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
        uVar14 = uVar14 + FVar5.Number;
        if (local_b0._8_4_ != uStack_80._4_4_) {
          FVar25 = (ForElementType<FSetElementId>)local_78;
          if (local_70 != (ForElementType<FSetElementId>)0x0) {
            FVar25 = local_70;
          }
          iVar29 = *(int *)((longlong)FVar25 + (ulonglong)(local_68 - 1U & uVar14) * 4);
          if (iVar29 != -1) {
            do {
              if (*(FName *)(local_b0._0_8_ + (longlong)iVar29 * 0x20) == *pFVar31) {
                if ((iVar29 != -1) &&
                   (pFVar24 = (FScriptContainerElement *)(local_b0._0_8_ + (longlong)iVar29 * 0x20),
                   pFVar24 != (FScriptContainerElement *)0x0)) goto LAB_1497fbfbe;
                break;
              }
              iVar29 = *(int *)(local_b0._0_8_ + (longlong)iVar29 * 0x20 + 0x18);
            } while (iVar29 != -1);
          }
        }
        local_1c0 = pFVar31;
        TSet<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                  ((TSet<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>,FDefaultSetAllocator>
                    *)local_b0,(uint)&local_200,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar14,
                   (bool *)&local_1c0);
        pFVar24 = (FScriptContainerElement *)(local_b0._0_8_ + (longlong)local_200 * 0x20);
LAB_1497fbfbe:
        *(FProperty **)(pFVar24 + 8) = local_170;
        *(uchar **)(pFVar24 + 0x10) = puStack_168;
      }
LAB_1497fbfc6:
      pFVar31 = pFVar31 + 5;
      plVar32 = local_1e8;
    }
    goto LAB_1497fbb67;
  }
  this = local_1f8;
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
    this = local_1f8;
  }
LAB_1497fbfe9:
  pTVar30 = (TKeyInitializer<int_const_&> *)(ulonglong)local_214;
LAB_1497fbfee:
  if (*(int *)&(this->KernelParams).field_0x8 != *(int *)&(this->KernelParams).field_0x34) {
    puVar1 = *(undefined1 **)&(this->KernelParams).field_0x40;
    puVar26 = &(this->KernelParams).field_0x38;
    if (puVar1 != (undefined1 *)0x0) {
      puVar26 = puVar1;
    }
    iVar29 = *(int *)(puVar26 +
                     ((ulonglong)(*(int *)&(this->KernelParams).field_0x48 - 1) & (ulonglong)pTVar30
                     ) * 4);
    if (iVar29 != -1) {
      lVar28 = *(longlong *)&this->KernelParams;
      do {
        if (*(int *)((longlong)iVar29 * 0x78 + lVar28) == (int)pTVar30) {
          if ((iVar29 != -1) && (lVar28 = (longlong)iVar29 * 0x78 + lVar28, lVar28 != 0))
          goto LAB_1497fc06d;
          break;
        }
        iVar29 = *(int *)((longlong)iVar29 * 0x78 + 0x70 + lVar28);
      } while (iVar29 != -1);
    }
  }
  local_1b0 = &local_214;
  TSet<TTuple<int,FPCGKernelParams>,TDefaultMapHashableKeyFuncs<int,FPCGKernelParams,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            ((TSet<TTuple<int,FPCGKernelParams>,TDefaultMapHashableKeyFuncs<int,FPCGKernelParams,0>,FDefaultSetAllocator>
              *)this,(uint)&local_1fc,pTVar30,(bool *)&local_1b0);
  lVar28 = (longlong)local_1fc * 0x78 + *(longlong *)&this->KernelParams;
LAB_1497fc06d:
  *(FWeakObjectPtr *)(lVar28 + 8) = local_c8;
  FInstancedPropertyBag::operator=
            ((FInstancedPropertyBag *)(lVar28 + 0x10),(FInstancedPropertyBag *)&local_c0.ObjectPtr);
  if ((TSet<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>,FDefaultSetAllocator>
       *)(lVar28 + 0x20) !=
      (TSet<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>,FDefaultSetAllocator>
       *)local_b0) {
    TSet<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>,FDefaultSetAllocator>
                *)(lVar28 + 0x20),
               (TSet<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>,FDefaultSetAllocator>
                *)local_b0);
  }
  local_68 = 0;
  if (local_70 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TTuple<FProperty_const_*,void_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b0);
  FInstancedStruct::Reset((FInstancedStruct *)&local_c0.ObjectPtr);
LAB_1497fc12c:
  local_214 = local_214 + 1;
  if ((int)local_1a8->_padding_ <= (int)local_214) goto LAB_1497fc170;
  goto LAB_1497fb830;
}

// GetCachedKernelParams @ 149811ed0

FPCGKernelParams * __thiscall
FPCGKernelParamsCache::GetCachedKernelParams(FPCGKernelParamsCache *this,int param_1)

{
  int iVar1;
  FPCGKernelParams *pFVar2;
  FPCGKernelParams *pFVar3;
  undefined1 *puVar4;
  FPCGKernelParams *pFVar5;
  
  pFVar5 = (FPCGKernelParams *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->KernelParams).field_0x8 != *(int *)&(this->KernelParams).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KernelParams).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KernelParams).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->KernelParams).field_0x48 - 1U & param_1) *
                              4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FPCGKernelParams *)((longlong)iVar1 * 0x78 + *(longlong *)&this->KernelParams);
        if ((pFVar2->WeakSettings).WeakPtr.ObjectIndex == param_1) break;
        iVar1 = *(int *)&pFVar2[1].OverriddenValues.Value.ScriptStruct.field0_0x0;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FPCGKernelParams *)&pFVar2->OverriddenValues;
  if (pFVar2 == (FPCGKernelParams *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// Initialize @ 14981ddc0

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
FPCGKernelParamsCache::Initialize
          (FPCGKernelParamsCache *this,FPCGContext *param_1,UPCGDataBinding *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId188,"FPCGKernelParamsCache::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
               ,0xbc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId188);
  }
  if (param_2 == (UPCGDataBinding *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<920666848813383870>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                       ,0xbe,"InDataBinding");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    CacheOverridableParamDataIndices(this,param_1,param_2);
    bVar2 = ReadbackOverridableParamData(this,param_2);
    if (!bVar2) {
      bVar2 = false;
      goto LAB_14981de89;
    }
    CreateAndCacheKernelParams(this,param_1,param_2);
  }
  bVar2 = true;
LAB_14981de89:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// ReadbackOverridableParamData @ 149827130

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
FPCGKernelParamsCache::ReadbackOverridableParamData
          (FPCGKernelParamsCache *this,UPCGDataBinding *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_e8;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId263,"FPCGKernelParamsCache::ReadbackOverridableParamData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
               ,0x107);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId263);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDataBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                         ,0x108,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar4 = *(int *)&(this->OverridableParamDataIndices).field_0x28;
  puVar3 = &(this->OverridableParamDataIndices).field_0x10;
  iVar15 = 0;
  iVar17 = 0;
  bVar6 = true;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OverridableParamDataIndices).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar19 = *puVar18;
    while (uVar19 == 0) {
      lVar12 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14982725f;
      uVar19 = puVar18[lVar12 + 1];
    }
    uVar10 = -uVar19 & uVar19;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar17;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_14982725f:
  local_e8 = *(uint *)&(this->OverridableParamDataIndices).field_0x28;
  uVar19 = local_e8 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar10,iVar15);
  TStack_98.CurrentBitIndex = iVar11;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)local_e8 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar17;
  uStack_78 = CONCAT44(uStack_a4,
                       *(int *)&(this->OverridableParamDataIndices).field_0x8 -
                       *(int *)&(this->OverridableParamDataIndices).field_0x34);
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)local_e8 < 0) || (iVar4 < (int)local_e8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar10 = *(uint *)&(this->OverridableParamDataIndices).field_0x28;
  if (local_e8 != uVar10) {
    puVar16 = *(undefined1 **)&(this->OverridableParamDataIndices).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar3;
    }
    uVar13 = -1 << ((byte)local_e8 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      local_e8 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_149827370;
      uVar13 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_e8 = (int)lVar12 + -1 + uVar19;
    if ((int)uVar10 < (int)local_e8) {
      local_e8 = uVar10;
    }
  }
LAB_149827370:
  do {
    if (*(int *)&(this->OverridableParamDataIndices).field_0x8 -
        *(int *)&(this->OverridableParamDataIndices).field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_98.CurrentBitIndex == local_e8) &&
       (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) {
      bVar6 = true;
      goto LAB_149827427;
    }
    lVar20 = (longlong)TStack_98.CurrentBitIndex * 0x20 +
             *(longlong *)&this->OverridableParamDataIndices;
    iVar4 = *(int *)(lVar20 + 0x10);
    lVar14 = *(longlong *)(lVar20 + 8);
    lVar12 = lVar14 + (longlong)iVar4 * 0x28;
    bVar8 = bVar6;
    while( true ) {
      bVar6 = bVar8;
      if (*(int *)(lVar20 + 0x10) != iVar4) {
        `TCheckedPointerIterator<TTuple<FPCGKernelOverridableParam,int>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res20);
      }
      if (lVar14 == lVar12) break;
      piVar1 = (int *)(lVar14 + 0x20);
      lVar14 = lVar14 + 0x28;
      bVar9 = UPCGDataBinding::ReadbackInputDataToCPU(param_1,*piVar1);
      bVar8 = false;
      if (bVar9) {
        bVar8 = bVar6;
      }
    }
    if (!bVar6) {
      bVar6 = false;
LAB_149827427:
      if (bVar21) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return bVar6;
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// Reset @ 14982baa0

void __thiscall FPCGKernelParamsCache::Reset(FPCGKernelParamsCache *this)

{
  TSet<TTuple<int,FPCGKernelParams>,TDefaultMapHashableKeyFuncs<int,FPCGKernelParams,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FPCGKernelParams>,TDefaultMapHashableKeyFuncs<int,FPCGKernelParams,0>,FDefaultSetAllocator>
           *)this);
  TSet<TTuple<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->OverridableParamDataIndices);
  return;
}

