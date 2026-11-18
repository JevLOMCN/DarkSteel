// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// operator() @ 149ad63c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGApplyHierarchyElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
          *param_1,FEmptyStruct *param_2,IterationState *param_3,uint param_4)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  IPCGAttributeAccessor *this_00;
  TTuple<int,int> *pTVar3;
  UPCGBasePointData *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar13;
  FPCGAttributeAccessorKeysPointsSubset *this_01;
  FPCGAttributeAccessorKeysPointsSubset *pFVar14;
  FPCGAttributeAccessorKeysPointsSubset *pFVar15;
  FText *pFVar16;
  UPCGBasePointData *this_02;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  TTuple<int,int> *pTVar21;
  uint uVar22;
  uint *puVar23;
  IterationState *pIVar24;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar25;
  uint uVar26;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar27;
  ForAnyElementType FVar28;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
  *pTVar29;
  uint uVar30;
  IterationState *pIVar31;
  undefined1 auStackY_3d8 [32];
  bool local_388;
  bool local_387;
  <lambda_3> local_386;
  undefined1 local_385;
  FIdentityFunctor local_384 [4];
  ForAnyElementType local_380;
  undefined8 local_378;
  TArray<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_370;
  <lambda_6> local_360;
  <lambda_8> local_35f [3];
  uint local_35c;
  uint local_358;
  FPCGAttributeAccessorKeysPointsSubset *local_350;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
  *local_348;
  TArray<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_340;
  TTuple<int,int> *local_330;
  IterationState *local_328;
  TArray<int,TSizedDefaultAllocator<32>_> local_320;
  TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> local_310;
  TPairInitializer<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,int_const_&>
  local_308;
  <lambda_12> local_2f8;
  <lambda_11> local_2f0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_2e8;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *local_2d8;
  uint *local_2d0;
  TArrayView<int_const_,int> local_2c8;
  FScriptContainerElement *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  TArrayView<int_const_,int> local_2a8;
  <lambda_9> local_298;
  <lambda_2> local_288;
  <lambda_1> local_270;
  <lambda_5> local_258;
  <lambda_10> local_240;
  <lambda_7> local_228;
  TArrayView<int,int> local_208;
  FText local_1f8;
  FPCGInitializeFromDataParams local_1e8;
  TSet<TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>,TDefaultMapHashableKeyFuncs<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int,0>,FDefaultSetAllocator>
  local_1a8;
  TArray<int,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> local_158;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_348 = param_1;
  local_328 = param_3;
  local_308.Value = this;
  if ((((int)param_4 < 0) || ((param_1->PerIterationStateResultArray).ArrayNum <= (int)param_4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < PerIterationStateResultArray.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                         ,0x48,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar22 = 0;
  if ((int)param_4 < (param_1->PerIterationStateResultArray).ArrayNum) {
    uVar22 = ~param_4 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if ((param_1->PerIterationStateResultArray).AllocatorInstance.Data[(int)param_4] !=
      (FScriptContainerElement)0x2) {
    pIVar31 = param_3;
    if (param_3->bParentMappingDone == false) {
      bVar6 = -1 < CpuChannel->Enabled;
      if (bVar6) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId269,"FPCGApplyHierarchyElement::Execute::ParentMapping",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyHierarchy.cpp"
                   ,0x10d);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId269);
      }
      local_270.PointKeys = &local_340;
      local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.ParentKeys = &local_370;
      local_288.PointKeys = &local_340;
      local_288.ParentKeys = &local_370;
      local_340.ArrayNum = 0;
      local_340.ArrayMax = 0;
      local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_370.ArrayNum = 0;
      local_370.ArrayMax = 0;
      local_288.IterState = param_3;
      local_270.IterState = param_3;
      if (((param_3->PointIndexKeys).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar9 = (**(code **)(**(longlong **)(param_3->PointIndexKeys).AllocatorInstance.Data + 0x10))
                        ();
      FPCGAsync::
      AsyncProcessingOneToOneRangeEx<__FPCGApplyHierarchyElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l8::<lambda_1>_&,__FPCGApplyHierarchyElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l8::<lambda_2>_&>
                ((FPCGAsyncState *)&param_1->_padding_,iVar9,&local_270,&local_288,false,0x100,true)
      ;
      local_1a8.Elements._0_8_ = 0;
      local_1a8.Elements._8_8_ = 0;
      local_1a8.Elements._32_8_ = 0;
      local_1a8.Elements._40_4_ = 0;
      local_1a8.Elements._44_4_ = 0x80;
      local_1a8.Elements._48_4_ = 0xffffffff;
      local_1a8.Elements._52_4_ = 0;
      local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_1a8.HashSize = 0;
      local_35c = 0;
      if (0 < local_340.ArrayNum) {
        do {
          uVar22 = local_35c;
          uVar26 = 0;
          if ((int)local_35c < local_340.ArrayNum) {
            uVar26 = ~local_35c >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_2d8 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                      (local_340.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x20);
          local_2d0 = &local_35c;
          TSet<TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>,TDefaultMapHashableKeyFuncs<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,int_const_&>_>
                    (&local_1a8,&local_308,(bool *)&local_2d8);
          local_35c = local_35c + 1;
        } while ((int)local_35c < local_340.ArrayNum);
      }
      pTVar25 = &param_3->ParentIndices;
      local_388 = false;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (pTVar25,local_370.ArrayNum,Default);
      uVar22 = 0;
      bVar8 = false;
      if (0 < local_370.ArrayNum) {
        local_350 = (FPCGAttributeAccessorKeysPointsSubset *)0x0;
        local_330 = (TTuple<int,int> *)0x0;
        do {
          pTVar21 = local_330;
          pFVar15 = local_350;
          uVar30 = ~uVar22 >> 0x1f;
          uVar26 = 0;
          if ((int)uVar22 < local_370.ArrayNum) {
            uVar26 = uVar30;
          }
          if (uVar26 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          pFVar17 = local_370.AllocatorInstance.Data + (longlong)pTVar21;
          pFVar19 = pFVar17;
          if (*(FScriptContainerElement **)(pFVar17 + 0x10) != (FScriptContainerElement *)0x0) {
            pFVar19 = *(FScriptContainerElement **)(pFVar17 + 0x10);
          }
          pFVar17 = pFVar19 + (longlong)*(int *)(pFVar17 + 0x18) * 4;
          uVar26 = 0;
          for (; pFVar19 != pFVar17; pFVar19 = pFVar19 + 4) {
            if (*(int *)pFVar19 == -1) {
              if ((int)uVar22 < (param_3->ParentIndices).ArrayNum) {
                uVar26 = uVar30;
              }
              if ((uVar26 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              *(undefined4 *)
               ((longlong)&pFVar15->_padding_ + (longlong)(pTVar25->AllocatorInstance).Data) =
                   0xffffffff;
              local_350 = pFVar15;
              local_330 = pTVar21;
              goto LAB_149ad6909;
            }
          }
          uVar10 = 0;
          if ((int)uVar22 < local_370.ArrayNum) {
            uVar10 = uVar30;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pTVar27 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                    (local_370.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x20);
          uVar10 = GetTypeHash<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                             (pTVar27);
          iVar9 = TSet<TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>,TDefaultMapHashableKeyFuncs<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int,0>,FDefaultSetAllocator>
                  ::
                  FindIndexByHash<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                            (&local_1a8,uVar10,pTVar27);
          if (iVar9 == -1) {
LAB_149ad68ad:
            if ((int)uVar22 < (param_3->ParentIndices).ArrayNum) {
              uVar26 = uVar30;
            }
            if ((uVar26 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            local_388 = true;
            *(undefined4 *)
             ((longlong)&local_350->_padding_ + (longlong)(pTVar25->AllocatorInstance).Data) =
                 0xfffffffe;
          }
          else {
            lVar11 = (longlong)iVar9 * 0x30 + local_1a8.Elements._0_8_;
            puVar12 = (uint *)(lVar11 + 0x20);
            if (lVar11 == 0) {
              puVar12 = (uint *)0x0;
            }
            if (puVar12 == (uint *)0x0) goto LAB_149ad68ad;
            local_358 = *puVar12;
            if ((int)uVar22 < (param_3->ParentIndices).ArrayNum) {
              uVar26 = uVar30;
            }
            if ((uVar26 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            *(uint *)((longlong)&local_350->_padding_ + (longlong)(pTVar25->AllocatorInstance).Data)
                 = local_358;
          }
LAB_149ad6909:
          local_330 = local_330 + 4;
          local_350 = (FPCGAttributeAccessorKeysPointsSubset *)((longlong)&local_350->_padding_ + 4)
          ;
          uVar22 = uVar22 + 1;
          param_1 = local_348;
          pIVar31 = local_328;
          bVar8 = local_388;
        } while ((int)uVar22 < local_370.ArrayNum);
      }
      pIVar31->bHasPointsWithInvalidParent = bVar8;
      pIVar31->bParentMappingDone = true;
      bVar8 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_);
      if (bVar8) {
        local_1a8.HashSize = 0;
        if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1a8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1a8.Elements);
        DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                  ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                   local_370.AllocatorInstance.Data,local_370.ArrayNum);
        if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
            local_370.AllocatorInstance.Data !=
            (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
          FMemory::Free(local_370.AllocatorInstance.Data);
        }
        DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                  ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                   local_340.AllocatorInstance.Data,local_340.ArrayNum);
        if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
            local_340.AllocatorInstance.Data !=
            (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
          FMemory::Free(local_340.AllocatorInstance.Data);
        }
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return false;
      }
      local_1a8.HashSize = 0;
      if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1a8.Elements);
      DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                 local_370.AllocatorInstance.Data,local_370.ArrayNum);
      if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
          local_370.AllocatorInstance.Data !=
          (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
        FMemory::Free(local_370.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                 local_340.AllocatorInstance.Data,local_340.ArrayNum);
      if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
          local_340.AllocatorInstance.Data !=
          (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
        FMemory::Free(local_340.AllocatorInstance.Data);
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    pFVar15 = (FPCGAttributeAccessorKeysPointsSubset *)0x0;
    if (pIVar31->bHierarchyDepthPartitionDone == false) {
      bVar6 = -1 < CpuChannel->Enabled;
      if (bVar6) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId375,
                   "FPCGApplyHierarchyElement::Execute::HierarchyDepthPartition",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyHierarchy.cpp"
                   ,0x177);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId375);
      }
      pTVar13 = PCGMetadataPartitionCommon::AttributeGenericPartition
                          (&local_2e8,(UPCGData *)pIVar31->InputData,
                           (FPCGAttributePropertySelector *)&pIVar31->HierarchyDepthSelector,
                           (FPCGContext *)param_1,false);
      pTVar1 = &pIVar31->HierarchyPartition;
      if (pTVar1 != pTVar13) {
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar1->AllocatorInstance).Data,
                   (int)*(longlong *)&(pIVar31->HierarchyPartition).ArrayNum);
        pFVar19 = (pTVar1->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar1->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
        (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pIVar31->HierarchyPartition).ArrayNum = pTVar13->ArrayNum;
        (pIVar31->HierarchyPartition).ArrayMax = pTVar13->ArrayMax;
        pTVar13->ArrayNum = 0;
        pTVar13->ArrayMax = 0;
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_2e8.AllocatorInstance.Data,
                 local_2e8.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_2e8.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_2e8.AllocatorInstance.Data);
      }
      if ((int)*(longlong *)&(pIVar31->HierarchyPartition).ArrayNum == 0) {
        bVar8 = true;
LAB_149ad6fc1:
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
          return bVar8;
        }
        return bVar8;
      }
      local_158.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_158.ArrayNum = 0;
      local_158.ArrayMax = 0x40;
      Algo::
      Transform<TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TArray<int,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_&,__FPCGApplyHierarchyElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l30::<lambda_3>_>
                (pTVar1,&local_158,local_386);
      this_01 = ::operator_new(0x38);
      iVar9 = local_158.ArrayNum;
      pFVar14 = pFVar15;
      if (this_01 != (FPCGAttributeAccessorKeysPointsSubset *)0x0) {
        local_2c8.DataPtr = (int *)&local_158;
        if (local_158.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          local_2c8.DataPtr = (int *)local_158.AllocatorInstance.SecondaryData;
        }
        if ((local_158.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_2c8.ArrayNum = iVar9;
        pFVar14 = FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset
                            (this_01,pIVar31->InputData,&local_2c8);
      }
      local_320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_320.ArrayNum = 0;
      local_320.ArrayMax = 0;
      local_350 = pFVar14;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_320,(int)*(longlong *)&(pIVar31->HierarchyPartition).ArrayNum,Default);
      iStack_2b0 = local_320.ArrayNum;
      this_00 = (pIVar31->HierarchyDepthAccessor).Ptr;
      local_2b8 = local_320.AllocatorInstance.Data;
      if ((local_320.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      local_208._12_4_ = uStack_2ac;
      local_208.ArrayNum = iStack_2b0;
      local_208.DataPtr = (int *)local_2b8;
      IPCGAttributeAccessor::GetRange<int>
                (this_00,&local_208,0,(IPCGAttributeAccessorKeys *)pFVar14,AllowConstructible);
      uVar18 = local_320._8_8_ & 0xffffffff;
      local_380.Data = (FScriptContainerElement *)0x0;
      local_378 = 0;
      if (local_320.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar18);
      }
      if (0 < local_320.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_320.ArrayNum,&local_380,0,(int *)((longlong)&local_378 + 4));
        uVar18 = local_320._8_8_ & 0xffffffff;
      }
      pFVar14 = pFVar15;
      if (0 < (int)uVar18) {
        do {
          uVar26 = (uint)pFVar14;
          uVar22 = 0;
          if ((int)uVar26 < (int)uVar18) {
            uVar22 = ~uVar26 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          FVar28.Data = local_320.AllocatorInstance.Data;
          if ((int)local_378 == local_378._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_380,(int *)((longlong)&local_378 + 4));
            local_378 = CONCAT44(local_378._4_4_,iVar9);
          }
          lVar11 = (longlong)(int)local_378;
          local_378 = CONCAT44(local_378._4_4_,(int)local_378 + 1);
          *(uint *)(local_380.Data + lVar11 * 8) = uVar26;
          *(undefined4 *)(local_380.Data + lVar11 * 8 + 4) =
               *(undefined4 *)(FVar28.Data + (longlong)pFVar15);
          pFVar15 = (FPCGAttributeAccessorKeysPointsSubset *)((longlong)&pFVar15->_padding_ + 4);
          uVar18 = local_320._8_8_ & 0xffffffff;
          pFVar14 = (FPCGAttributeAccessorKeysPointsSubset *)(ulonglong)(uVar26 + 1);
        } while ((int)(uVar26 + 1) < local_320.ArrayNum);
      }
      AlgoImpl::
      IntroSortInternal<TTuple<int,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<int,int>,__FPCGApplyHierarchyElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l30::<lambda_4>_>_>
                ((TTuple<int,int> *)local_380.Data,(int)local_378,local_384[0],
                 (<lambda_4> *)local_384);
      uVar18 = local_378 & 0xffffffff;
      if ((int)local_378 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar18);
      }
      pIVar24 = (IterationState *)&(pIVar31->HierarchyPartitionOrder).ArrayMax;
      local_328 = pIVar24;
      if (*(int *)pIVar24 < (int)local_378) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_378,&(pIVar31->HierarchyPartitionOrder).AllocatorInstance,
                   (int)*(longlong *)&(pIVar31->HierarchyPartitionOrder).ArrayNum,(int *)pIVar24);
        uVar18 = local_378 & 0xffffffff;
      }
      local_358 = (uint)uVar18;
      uVar20 = (ulonglong)(int)local_358;
      pTVar21 = (TTuple<int,int> *)(local_380.Data + uVar20 * 8);
      FVar28.Data = local_380.Data;
      local_330 = pTVar21;
      while( true ) {
        pTVar25 = &pIVar31->HierarchyPartitionOrder;
        if ((int)uVar18 != (int)uVar20) {
          local_385 = 0;
          `TCheckedPointerIterator<TTuple<int,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_385);
        }
        if ((TTuple<int,int> *)FVar28.Data == pTVar21) break;
        if ((int)*(longlong *)&(pIVar31->HierarchyPartitionOrder).ArrayNum ==
            *(int *)&((TTuple<int,int> *)FVar28.Data)->field_0x4) {
          pTVar3 = (TTuple<int,int> *)(pTVar25->AllocatorInstance).Data;
          if (((pTVar3 <= FVar28.Data) &&
              (FVar28.Data <
               (TTuple<int,int> *)
               ((longlong)&pTVar3->field_0x0 + (longlong)*(int *)&pIVar24->InputData * 4))) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar9 = (int)*(longlong *)&(pIVar31->HierarchyPartitionOrder).ArrayNum;
          if (iVar9 == *(int *)&pIVar24->InputData) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar25->AllocatorInstance,(int *)pIVar24);
          }
          (pIVar31->HierarchyPartitionOrder).ArrayNum = iVar9 + 1;
          *(uint *)((pTVar25->AllocatorInstance).Data + (longlong)iVar9 * 4) = *(uint *)FVar28.Data;
        }
        else {
          uVar22 = *(uint *)FVar28.Data;
          uVar26 = 0;
          if ((int)uVar22 < (int)*(longlong *)&(pIVar31->HierarchyPartition).ArrayNum) {
            uVar26 = ~uVar22 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar19 = (pIVar31->HierarchyPartition).AllocatorInstance.Data +
                    (longlong)(int)uVar22 * 0x10;
          puVar23 = *(uint **)pFVar19;
          iVar9 = *(int *)(pFVar19 + 8);
          puVar12 = puVar23 + iVar9;
          while( true ) {
            if (*(int *)(pFVar19 + 8) != iVar9) {
              local_386 = (<lambda_3>)0x0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_386);
            }
            if (puVar23 == puVar12) break;
            uVar22 = *puVar23;
            uVar26 = 0;
            if ((int)uVar22 < (int)*(longlong *)&(pIVar31->ParentIndices).ArrayNum) {
              uVar26 = ~uVar22 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            puVar23 = puVar23 + 1;
            *(undefined4 *)
             ((pIVar31->ParentIndices).AllocatorInstance.Data + (longlong)(int)uVar22 * 4) =
                 0xfffffffe;
          }
          pIVar31->bHasPointsWithInvalidParent = true;
          pTVar21 = local_330;
          pIVar24 = local_328;
        }
        uVar18 = local_378 & 0xffffffff;
        uVar20 = (ulonglong)local_358;
        FVar28.Data = FVar28.Data + 8;
      }
      pIVar31->bHierarchyDepthPartitionDone = true;
      bVar8 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&local_348->_padding_);
      if (bVar8) {
        bVar8 = false;
        if ((TTuple<int,int> *)local_380.Data != (TTuple<int,int> *)0x0) {
          FMemory::Free(local_380.Data);
        }
        if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.AllocatorInstance.Data);
        }
        if (local_350 != (FPCGAttributeAccessorKeysPointsSubset *)0x0) {
          (**(code **)local_350->_padding_)(local_350,1);
        }
        if (local_158.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
        }
        goto LAB_149ad6fc1;
      }
      if ((TTuple<int,int> *)local_380.Data != (TTuple<int,int> *)0x0) {
        FMemory::Free(local_380.Data);
      }
      if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.AllocatorInstance.Data);
      }
      if (local_350 != (FPCGAttributeAccessorKeysPointsSubset *)0x0) {
        (**(code **)local_350->_padding_)(local_350,1);
      }
      if (local_158.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
      }
      param_1 = local_348;
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
        param_1 = local_348;
      }
    }
    iVar9 = (int)*(longlong *)&(pIVar31->HierarchyPartitionOrder).ArrayNum;
    if (pIVar31->CurrentDepth < iVar9) {
      pIVar24 = (IterationState *)&param_1->_padding_;
      local_328 = pIVar24;
      do {
        bVar6 = -1 < CpuChannel->Enabled;
        if (bVar6) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId436,
                     "FPCGApplyHierarchyElement::Execute::ComputeTransforms",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyHierarchy.cpp"
                     ,0x1b4);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId436);
        }
        uVar22 = pIVar31->CurrentDepth;
        uVar26 = 0;
        if ((int)uVar22 < (int)*(longlong *)&(pIVar31->HierarchyPartitionOrder).ArrayNum) {
          uVar26 = ~uVar22 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar22 = *(uint *)((pIVar31->HierarchyPartitionOrder).AllocatorInstance.Data +
                          (longlong)(int)uVar22 * 4);
        uVar26 = 0;
        if ((int)uVar22 < (int)*(longlong *)&(pIVar31->HierarchyPartition).ArrayNum) {
          uVar26 = ~uVar22 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar9 = pIVar31->CurrentDepth;
        pTVar25 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  ((pIVar31->HierarchyPartition).AllocatorInstance.Data +
                  (longlong)(int)uVar22 * 0x10);
        pFVar15 = ::operator_new(0x38);
        if (pFVar15 == (FPCGAttributeAccessorKeysPointsSubset *)0x0) {
          local_310.Ptr = (IPCGAttributeAccessorKeys *)0x0;
        }
        else {
          local_2a8.DataPtr = (int *)(pTVar25->AllocatorInstance).Data;
          iVar2 = pTVar25->ArrayNum;
          if ((iVar2 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_2a8.ArrayNum = iVar2;
          local_310.Ptr =
               (IPCGAttributeAccessorKeys *)
               FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset
                         (pFVar15,pIVar31->InputData,&local_2a8);
          pIVar24 = local_328;
        }
        if (iVar9 == 0) {
          local_258.CurrentDepthIndices = pTVar25;
          local_258.IterState = pIVar31;
          local_258.SubsetKeys = &local_310;
          FPCGAsync::
          AsyncProcessingOneToOneRangeEx<__FPCGApplyHierarchyElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l58::<lambda_6>,__FPCGApplyHierarchyElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l58::<lambda_5>_&>
                    ((FPCGAsyncState *)pIVar24,pTVar25->ArrayNum,&local_360,&local_258,false,0x40,
                     true);
        }
        else {
          local_228.bHasPointsWithInvalidParent = &local_387;
          local_387 = false;
          local_228.CurrentDepthIndices = pTVar25;
          local_228.IterState = pIVar31;
          local_228.SubsetKeys = &local_310;
          FPCGAsync::
          AsyncProcessingOneToOneRangeEx<__FPCGApplyHierarchyElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l60::<lambda_8>,__FPCGApplyHierarchyElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l60::<lambda_7>_&>
                    ((FPCGAsyncState *)pIVar24,pTVar25->ArrayNum,local_35f,&local_228,false,0x40,
                     true);
          pIVar31->bHasPointsWithInvalidParent =
               (bool)(pIVar31->bHasPointsWithInvalidParent | local_387);
        }
        pIVar31->CurrentDepth = pIVar31->CurrentDepth + 1;
        if ((FPCGAttributeAccessorKeysPointsSubset *)local_310.Ptr !=
            (FPCGAttributeAccessorKeysPointsSubset *)0x0) {
          (**(code **)(local_310.Ptr)->_padding_)(local_310.Ptr,1);
        }
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (((pIVar31->CurrentDepth !=
              (int)*(longlong *)&(pIVar31->HierarchyPartitionOrder).ArrayNum) ||
            (pIVar31->bHasPointsWithInvalidParent != false)) &&
           (bVar6 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)pIVar24), bVar6)) {
          return false;
        }
        if ((pIVar31->CurrentDepth == (int)*(longlong *)&(pIVar31->HierarchyPartitionOrder).ArrayNum
            ) && (pIVar31->bHasPointsWithInvalidParent != false)) {
          pTVar29 = local_348;
          if (*(char *)(*(longlong *)local_308.Value + 0x240) != '\0') {
            pFVar16 = FText::AsLocalizable_Advanced_LocText
                                (&local_1f8,L"PCGApplyHierarchyElement",
                                 L"SomePointsHaveAnInvalidParent",
                                 L"Some points have either an invalid parent index, or an invalid depth. They will be culled from the final results."
                                );
            pTVar29 = local_348;
            PCGLog::LogWarningOnGraph(pFVar16,(FPCGContext *)local_348);
            if (local_1f8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
            }
          }
          pUVar4 = pIVar31->OutputData;
          this_02 = FPCGContext::NewPointData_AnyThread((FPCGContext *)pTVar29);
          FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                    (&local_1e8,(UPCGSpatialData *)pUVar4);
          local_1e8.bInheritSpatialData = false;
          UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_02,&local_1e8);
          uVar22 = (uint)*(longlong *)&pIVar31->OutputDataIndex;
          uVar26 = 0;
          if ((int)uVar22 < (int)pTVar29->_padding_) {
            uVar26 = ~uVar22 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          FPCGDataPtrWrapper::operator=
                    ((FPCGDataPtrWrapper *)((longlong)(int)uVar22 * 0x78 + pTVar29->_padding_),
                     (UPCGData *)this_02);
          local_2f8.FilteredData = this_02;
          local_2f0.FilteredData = this_02;
          local_298.FilteredData = this_02;
          local_298.OriginalData = pUVar4;
          local_240.FilteredData = this_02;
          local_240.OriginalData = pUVar4;
          local_240.IterState = pIVar31;
          iVar9 = (**(code **)(pUVar4->_padding_ + 0x488))(pUVar4);
          FPCGAsync::
          AsyncProcessingRangeEx<__FPCGApplyHierarchyElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l66::<lambda_9>_&,__FPCGApplyHierarchyElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l66::<lambda_10>_&,__FPCGApplyHierarchyElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l66::<lambda_11>_&,__FPCGApplyHierarchyElement::ExecuteInternal_::__l2::<lambda_1>::operator()_::__l66::<lambda_12>_&>
                    ((FPCGAsyncState *)&pTVar29->_padding_,iVar9,&local_298,&local_240,&local_2f0,
                     &local_2f8,false,0x40,true);
          DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                    ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                     local_1e8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                     Data,local_1e8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
          if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
              local_1e8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
              (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
            FMemory::Free(local_1e8.MetadataInitializeParams.DomainInitializeParams.
                          AllocatorInstance.Data);
          }
          if (local_1e8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
          }
        }
        iVar9 = (int)*(longlong *)&(pIVar31->HierarchyPartitionOrder).ArrayNum;
      } while (pIVar31->CurrentDepth < iVar9);
    }
    if (iVar9 == 0) {
      (**(code **)(pIVar31->OutputData->_padding_ + 0x490))(pIVar31->OutputData,0,1);
    }
  }
  return true;
}

// operator() @ 149ada8d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGApplyHierarchyElement::PrepareDataInternal'::__l2::<lambda_1>::operator()
          (void *this,IterationState *param_1,FEmptyStruct *param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  FPCGContext *pFVar5;
  IPCGAttributeAccessor *pIVar6;
  code *pcVar7;
  FObjectPtr_u_0 FVar8;
  bool bVar9;
  EPCGTimeSliceInitResult EVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  UClass *pUVar16;
  UPCGBasePointData *this_00;
  FText *pFVar17;
  FPCGAttributePropertySelector *pFVar18;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar19;
  FString *pFVar20;
  FScriptContainerElement *pFVar21;
  FObjectPtr_u_0 *pFVar22;
  undefined1 local_res20 [8];
  undefined1 local_168 [8];
  FObjectPtr_u_0 local_160;
  undefined8 local_158;
  FObjectPtr_u_0 local_150;
  FObjectPtr_u_0 local_148;
  undefined1 local_140 [72];
  FText local_f8;
  FText local_e8;
  FString local_d8;
  FText local_c8;
  FPCGAttributePropertySelector local_b8;
  undefined1 local_78 [48];
  int local_48;
  
  plVar3 = *(longlong **)this;
  uVar15 = 0;
  uVar14 = uVar15;
  if ((int)param_3 < (int)plVar3[1]) {
    uVar14 = ~param_3 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    EVar10 = (*pcVar7)();
    return EVar10;
  }
  pFVar22 = (FObjectPtr_u_0 *)(*plVar3 + (longlong)(int)param_3 * 0x78);
  local_160 = (FObjectPtr_u_0)pFVar22->Handle;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UPCGBasePointData *)local_160.Handle != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable(local_160.Handle);
  }
  if ((UPCGBasePointData *)local_160.Handle != (UPCGBasePointData *)0x0) {
    pUVar16 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_160,pUVar16);
    FVar8 = local_160;
    if (!bVar9) {
      return NoOperation;
    }
    local_148.Handle = local_160.Handle;
    if ((UPCGBasePointData *)local_160.Handle == (UPCGBasePointData *)0x0) {
      return NoOperation;
    }
    iVar12 = (**(code **)(*(longlong *)local_160.Handle + 0x488))(local_160.Handle);
    if (iVar12 == 0) {
      return NoOperation;
    }
    this_00 = FPCGContext::NewPointData_AnyThread(*(FPCGContext **)((longlong)this + 0x10));
    local_140._8_8_ = this_00;
    UPCGSpatialData::InitializeFromData
              ((UPCGSpatialData *)this_00,(UPCGSpatialData *)FVar8.Handle,(UPCGMetadata *)0x0,true,
               true);
    pcVar7 = *(code **)(this_00->_padding_ + 0x490);
    uVar13 = (**(code **)(*(longlong *)FVar8.Handle + 0x488))(FVar8.Handle);
    (*pcVar7)(this_00,uVar13,1);
    uVar14 = 1;
    cVar11 = (**(code **)(this_00->_padding_ + 0x440))(this_00);
    if (cVar11 == '\0') {
      uVar14 = (**(code **)(*(longlong *)FVar8.Handle + 0x640))(FVar8.Handle,1);
      uVar14 = uVar14 | 1;
    }
    (**(code **)(this_00->_padding_ + 0x498))(this_00,uVar14);
    param_1->InputData = (UPCGBasePointData *)FVar8;
    param_1->OutputData = this_00;
    param_1->OutputDataIndex = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x40);
    lVar4 = *(longlong *)((longlong)this + 0x10);
    if (((*(FObjectPtr_u_0 **)(lVar4 + 0x38) <= pFVar22) &&
        (pFVar22 < *(FObjectPtr_u_0 **)(lVar4 + 0x38) + (longlong)*(int *)(lVar4 + 0x44) * 0xf)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      EVar10 = (*pcVar7)();
      return EVar10;
    }
    iVar12 = *(int *)(lVar4 + 0x40);
    if (iVar12 == *(int *)(lVar4 + 0x44)) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,(ForAnyElementType *)(lVar4 + 0x38),(int *)(lVar4 + 0x44));
    }
    *(int *)(lVar4 + 0x40) = iVar12 + 1;
    FPCGTaggedData::FPCGTaggedData
              ((FPCGTaggedData *)((longlong)iVar12 * 0x78 + *(longlong *)(lVar4 + 0x38)),
               (FPCGTaggedData *)pFVar22);
    pFVar5 = *(FPCGContext **)((longlong)this + 0x10);
    lVar4 = *(longlong *)((longlong)this + 8);
    local_140._48_8_ = FVar8;
    local_140._24_8_ = FVar8;
    local_140._32_8_ = FVar8;
    local_140._16_8_ = pFVar5;
    local_140._40_8_ = pFVar5;
    if ((*(int *)(lVar4 + 0xd0) == 0) || (*(int *)(lVar4 + 0xe0) == 0)) {
      pFVar17 = FText::AsLocalizable_Advanced_LocText
                          (&local_c8,L"PCGApplyHierarchyElement",L"RequiresAtLeastOneAttribute",
                           L"Both the point key attribute and parent key attribute require valid entries to perform the Apply Hierarchy operation."
                          );
      PCGLog::LogErrorOnGraph(pFVar17,pFVar5);
      local_f8.TextData.Reference = local_c8.TextData.Reference;
    }
    else if (*(int *)(lVar4 + 0xd0) == *(int *)(lVar4 + 0xe0)) {
      bVar9 = ``FPCGApplyHierarchyElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l2
              ::<lambda_2>::operator()
                        (local_140 + 0x10,
                         (TArray<FPCGAttributePropertyInputSelector,TSizedDefaultAllocator<32>_> *)
                         (lVar4 + 200),&param_1->PointIndexAccessors,&param_1->PointIndexKeys);
      if (!bVar9) {
        return NoOperation;
      }
      bVar9 = ``FPCGApplyHierarchyElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::__l2
              ::<lambda_2>::operator()
                        (local_140 + 0x10,
                         (TArray<FPCGAttributePropertyInputSelector,TSizedDefaultAllocator<32>_> *)
                         (*(longlong *)((longlong)this + 8) + 0xd8),&param_1->ParentIndexAccessors,
                         &param_1->ParentIndexKeys);
      if (!bVar9) {
        return NoOperation;
      }
      if (((param_1->PointIndexKeys).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        EVar10 = (*pcVar7)();
        return EVar10;
      }
      if (*(longlong *)(param_1->PointIndexKeys).AllocatorInstance.Data != 0) {
        if (((param_1->PointIndexKeys).ArrayNum < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          EVar10 = (*pcVar7)();
          return EVar10;
        }
        uVar15 = (**(code **)(**(longlong **)(param_1->PointIndexKeys).AllocatorInstance.Data + 0x10
                             ))();
      }
      pFVar21 = (param_1->PointIndexKeys).AllocatorInstance.Data;
      bVar9 = uVar15 == 0;
      iVar12 = (param_1->PointIndexKeys).ArrayNum;
      pFVar1 = pFVar21 + (longlong)iVar12 * 8;
      while( true ) {
        if ((param_1->PointIndexKeys).ArrayNum != iVar12) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar21 == pFVar1) break;
        if ((*(longlong **)pFVar21 == (longlong *)0x0) ||
           (uVar14 = (**(code **)(**(longlong **)pFVar21 + 0x10))(), uVar14 != uVar15)) {
          bVar9 = true;
          pFVar21 = pFVar21 + 8;
        }
        else {
          pFVar21 = pFVar21 + 8;
        }
      }
      pFVar21 = (param_1->ParentIndexKeys).AllocatorInstance.Data;
      iVar12 = (param_1->ParentIndexKeys).ArrayNum;
      pFVar1 = pFVar21 + (longlong)iVar12 * 8;
      while( true ) {
        if ((param_1->ParentIndexKeys).ArrayNum != iVar12) {
          local_168[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_168);
        }
        FVar8 = local_148;
        if (pFVar21 == pFVar1) break;
        if ((*(longlong **)pFVar21 == (longlong *)0x0) ||
           (uVar14 = (**(code **)(**(longlong **)pFVar21 + 0x10))(), uVar14 != uVar15)) {
          bVar9 = true;
          pFVar21 = pFVar21 + 8;
        }
        else {
          pFVar21 = pFVar21 + 8;
        }
      }
      if (!bVar9) {
        pFVar18 = (FPCGAttributePropertySelector *)
                  FPCGAttributePropertyInputSelector::CopyAndFixLast
                            ((FPCGAttributePropertyInputSelector *)
                             (*(longlong *)((longlong)this + 8) + 0xe8),
                             (FPCGAttributePropertyInputSelector *)local_78,
                             (UPCGData *)local_148.Handle);
        FPCGAttributePropertySelector::operator=
                  ((FPCGAttributePropertySelector *)&param_1->HierarchyDepthSelector,pFVar18);
        DestructItems<FString,int>((FString *)local_78._40_8_,local_48);
        if ((FString *)local_78._40_8_ != (FString *)0x0) {
          FMemory::Free((void *)local_78._40_8_);
        }
        bVar9 = ``FPCGApplyHierarchyElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::
                __l2::<lambda_1>::operator()
                          (local_140 + 0x28,&param_1->HierarchyDepthSelector,
                           &param_1->HierarchyDepthAccessor,&param_1->HierarchyDepthKeys);
        if (!bVar9) {
          return NoOperation;
        }
        local_158 = *(undefined8 *)((longlong)this + 0x10);
        local_150.Handle = FVar8.Handle;
        bVar9 = ``FPCGApplyHierarchyElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::
                __l2::<lambda_3>::operator()
                          (&local_158,
                           (FPCGAttributePropertyInputSelector *)
                           (*(longlong *)((longlong)this + 8) + 0x170),
                           *(EPCGApplyHierarchyOption *)(*(longlong *)((longlong)this + 8) + 0x168),
                           &param_1->ApplyRotationAccessor,&param_1->bInvertApplyRotation);
        if (!bVar9) {
          return NoOperation;
        }
        bVar9 = ``FPCGApplyHierarchyElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::
                __l2::<lambda_3>::operator()
                          (&local_158,
                           (FPCGAttributePropertyInputSelector *)
                           (*(longlong *)((longlong)this + 8) + 0x1b8),
                           *(EPCGApplyHierarchyOption *)(*(longlong *)((longlong)this + 8) + 0x1b0),
                           &param_1->ApplyScaleAccessor,&param_1->bInvertApplyScale);
        if (!bVar9) {
          return NoOperation;
        }
        bVar9 = ``FPCGApplyHierarchyElement::PrepareDataInternal'::__l2::<lambda_1>::operator()'::
                __l2::<lambda_3>::operator()
                          (&local_158,
                           (FPCGAttributePropertyInputSelector *)
                           (*(longlong *)((longlong)this + 8) + 0x200),
                           *(EPCGApplyHierarchyOption *)(*(longlong *)((longlong)this + 8) + 0x1f8),
                           &param_1->ApplyHierarchyAccessor,&param_1->bInvertApplyHierarchy);
        if (!bVar9) {
          return NoOperation;
        }
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)(*(longlong *)((longlong)this + 8) + 0x128)
                   ,(FPCGAttributePropertyInputSelector *)&local_b8,(UPCGData *)FVar8.Handle);
        TVar19 = PCGAttributeAccessorHelpers::CreateConstAccessor
                           ((UPCGData *)local_140,(FPCGAttributePropertySelector *)FVar8.Handle,
                            SUB81(&local_b8,0));
        TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>::
        operator=(&param_1->RelativeTransformAccessor,
                  (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
                   *)TVar19.Ptr);
        if ((undefined8 *)local_140._0_8_ != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)local_140._0_8_)(local_140._0_8_,1);
        }
        pIVar6 = (param_1->RelativeTransformAccessor).Ptr;
        if (pIVar6 == (IPCGAttributeAccessor *)0x0) {
          PCGLog::Metadata::LogFailToCreateAccessorError
                    (&local_b8,*(FPCGContext **)((longlong)this + 0x10));
        }
        else {
          uVar2 = pIVar6->UnderlyingType;
          if ((uVar2 < 0xf) &&
             ((PCG::Private::BroadcastableTypes.Values[uVar2][8] != false ||
              (PCG::Private::ConstructibleTypes.Values[8][uVar2] != false)))) {
            lVar4 = *(longlong *)((longlong)this + 0x10);
            uVar15 = *(int *)(lVar4 + 0x40) - 1;
            uVar14 = 0;
            if ((int)uVar15 < *(int *)(lVar4 + 0x40)) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              EVar10 = (*pcVar7)();
              return EVar10;
            }
            FPCGDataPtrWrapper::operator=
                      ((FPCGDataPtrWrapper *)
                       ((longlong)(*(int *)(lVar4 + 0x40) + -1) * 0x78 + *(longlong *)(lVar4 + 0x38)
                       ),(UPCGData *)local_140._8_8_);
            EVar10 = Success;
            goto LAB_149adaf91;
          }
          pFVar5 = *(FPCGContext **)((longlong)this + 0x10);
          pFVar20 = FPCGAttributePropertySelector::ToString(&local_b8,&local_d8,false);
          FText::FromString((FText *)(local_140 + 0x38),pFVar20);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          PCGLog::Metadata::LogFailToGetAttributeError<UE::Math::TTransform<double>_>
                    ((FText *)(local_140 + 0x38),pIVar6,pFVar5);
          if ((UPCGMetadata *)local_140._56_8_ != (UPCGMetadata *)0x0) {
            (**(code **)(*(longlong *)local_140._56_8_ + 0x10))();
          }
        }
        EVar10 = NoOperation;
LAB_149adaf91:
        DestructItems<FString,int>
                  ((FString *)local_b8.ExtraNames.AllocatorInstance.Data,
                   local_b8.ExtraNames.ArrayNum);
        if (local_b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.ExtraNames.AllocatorInstance.Data);
          return EVar10;
        }
        return EVar10;
      }
      pFVar5 = *(FPCGContext **)((longlong)this + 0x10);
      pFVar17 = FText::AsLocalizable_Advanced_LocText
                          (&local_e8,L"PCGApplyHierarchyElement",L"CardinalityMismatch",
                           L"Point Key and Parent Key properties do not have the same cardinality.")
      ;
      PCGLog::LogErrorOnGraph(pFVar17,pFVar5);
      local_f8.TextData.Reference = local_e8.TextData.Reference;
    }
    else {
      pFVar17 = FText::AsLocalizable_Advanced_LocText
                          (&local_f8,L"PCGApplyHierarchyElement",
                           L"PointAndParentKeyAttributesMismatch",
                           L"There needs to be the same number of point key attributes as parent key attributes."
                          );
      PCGLog::LogErrorOnGraph(pFVar17,pFVar5);
    }
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
  }
  return NoOperation;
}

// ExecuteInternal @ 149b03c20

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
FPCGApplyHierarchyElement::ExecuteInternal(FPCGApplyHierarchyElement *this,FPCGContext *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 local_res10 [8];
  UPCGApplyHierarchySettings *local_res18 [2];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId237,"FPCGApplyHierarchyElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyHierarchy.cpp"
               ,0xed);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId237);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSlicedContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyHierarchy.cpp"
                         ,0xf0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
          ::DataIsPreparedForExecution
                    ((TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
                      *)param_1);
  if (bVar4) {
    if (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) != '\x02')
    {
      local_res18[0] = FPCGContext::GetInputSettings<UPCGApplyHierarchySettings>(param_1);
      if ((local_res18[0] == (UPCGApplyHierarchySettings *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Settings",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyHierarchy.cpp"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
      bVar4 = TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
              ::DataIsPreparedForExecution
                        ((TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
                          *)param_1);
      if (((bVar4) ||
          (local_res10[0] = bVar4,
          bVar4 = `TPCGTimeSlicedElementBase<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
                  ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), bVar4)) &&
         ((int)param_1[1].InputData.InactiveOutputPinBitmask != 0)) {
        do {
          uVar2 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
          uVar6 = 0;
          if ((int)uVar2 < (int)param_1[1].InputData.InactiveOutputPinBitmask) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          bVar4 = `FPCGApplyHierarchyElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                            (local_res18,
                             (TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
                              *)param_1,(FEmptyStruct *)&param_1[1].InputData.DataCrcs,
                             (IterationState *)
                             ((longlong)(int)uVar2 * 0x128 +
                             *(longlong *)&param_1[1].InputData.DataCrcs.ArrayNum),uVar2);
          if (!bVar4) {
            bVar4 = false;
            goto LAB_149b03cc0;
          }
          piVar1 = (int *)((longlong)&param_1[1]._padding_ + 4);
          *piVar1 = *piVar1 + 1;
        } while ((*(int *)((longlong)&param_1[1]._padding_ + 4) <
                  (int)param_1[1].InputData.InactiveOutputPinBitmask) &&
                (bVar4 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), !bVar4));
        bVar4 = *(int *)((longlong)&param_1[1]._padding_ + 4) ==
                (int)param_1[1].InputData.InactiveOutputPinBitmask;
      }
      else {
        bVar4 = true;
      }
      goto LAB_149b03cc0;
    }
    FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
  }
  bVar4 = true;
LAB_149b03cc0:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// ExecutionLoopMode @ 149b11a90

EPCGElementExecutionLoopMode __thiscall
FPCGApplyHierarchyElement::ExecutionLoopMode(FPCGApplyHierarchyElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// PrepareDataInternal @ 149b20c40

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
FPCGApplyHierarchyElement::PrepareDataInternal(FPCGApplyHierarchyElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGApplyHierarchySettings *pUVar4;
  bool bVar5;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> **local_30;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_28;
  UPCGApplyHierarchySettings *local_20;
  FPCGContext *local_18;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId36,"FPCGApplyHierarchyElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyHierarchy.cpp"
               ,0x24);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId36);
  }
  pUVar4 = FPCGContext::GetInputSettings<UPCGApplyHierarchySettings>(param_1);
  if ((pUVar4 == (UPCGApplyHierarchySettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyHierarchy.cpp"
                         ,0x27,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGApplyHierarchy.cpp"
                         ,0x2a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_48,&PCGPinConstants::DefaultInputLabel);
  if (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) == '\0') {
    *(undefined1 *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) = 1;
  }
  local_28 = &local_48;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPCGApplyHierarchyElement::PrepareDataInternal'::__l2::<lambda_1>,enum_EPCGTimeSliceInitResult,PCGApplyHierarchyElement::IterationState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int>
             ::Call;
  local_20 = pUVar4;
  local_18 = param_1;
  TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
  ::InitializePerIterationStates
            ((TPCGTimeSlicedContext<PCGTimeSlice::FEmptyStruct,PCGApplyHierarchyElement::IterationState,FPCGContext>
              *)param_1,local_48.ArrayNum,
             (TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGApplyHierarchyElement::IterationState_&,PCGTimeSlice::FEmptyStruct_const_&,unsigned_int)>
              *)&local_38);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FPCGTaggedData *)local_48.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149b2d0f0

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
FPCGApplyHierarchyElement::SupportsBasePointDataInputs
          (FPCGApplyHierarchyElement *this,FPCGContext *param_1)

{
  return true;
}

