// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 5

// FOptimusGroomStrandsReadProviderProxy @ 14e2698c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FOptimusGroomStrandsReadProviderProxy * __thiscall
FOptimusGroomStrandsReadProviderProxy::FOptimusGroomStrandsReadProviderProxy
          (FOptimusGroomStrandsReadProviderProxy *this,UMeshComponent *param_1)

{
  int *piVar1;
  longlong *plVar2;
  UGroomComponent *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FOptimusGroomStrandsReadProviderProxy *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  UMeshComponent *pUVar12;
  undefined8 *puVar13;
  UMeshComponent *pUVar14;
  longlong *plVar15;
  UMeshComponent *pUVar16;
  TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  undefined8 *puVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *local_res20;
  ForAnyElementType local_118;
  uint local_110;
  uint uStack_10c;
  undefined8 *local_108;
  UMeshComponent *local_100;
  undefined8 local_f8;
  uint local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  longlong *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  uint local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4;
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  pUVar12 = (UMeshComponent *)0x0;
  pTVar17 = &this->GroupInstances;
  local_res10[0] = 0;
  this->_padding_ = (longlong)&___7FOptimusGroomStrandsReadProviderProxy__6B_;
  (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->GroupInstances).ArrayNum = 0;
  (this->GroupInstances).ArrayMax = 0;
  (this->BindingResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingResources).ArrayNum = 0;
  (this->BindingResources).ArrayMax = 0;
  (this->GroupResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupResources).ArrayNum = 0;
  (this->GroupResources).ArrayMax = 0;
  (this->GroupInterpolations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupInterpolations).ArrayNum = 0;
  (this->GroupInterpolations).ArrayMax = 0;
  this->FallbackByteAddressSRV = (FRDGBufferSRV *)0x0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  uStack_10c = 0;
  uVar21 = 0;
  local_res20 = pTVar17;
  if (param_1 != (UMeshComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_UGroomComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      local_100 = param_1;
      if ((local_118.Data <= (FScriptContainerElement *)&local_100) &&
         (((FScriptContainerElement *)&local_100 < local_118.Data + (longlong)(int)uStack_10c * 8 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FOptimusGroomStrandsReadProviderProxy *)(*pcVar3)();
        return pFVar7;
      }
      if (local_110 == uStack_10c) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_118,(int *)&uStack_10c);
      }
      *(UMeshComponent **)(local_118.Data + (longlong)(int)local_110 * 8) = local_100;
      local_110 = local_110 + 1;
      goto LAB_14e269cf4;
    }
  }
  local_100 = (UMeshComponent *)0x0;
  if (param_1 == (UMeshComponent *)0x0) {
LAB_14e269a43:
    param_1 = pUVar12;
  }
  else {
    pUVar6 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) goto LAB_14e269a43;
  }
  if (param_1 != (UMeshComponent *)0x0) {
    plVar2 = &param_1[1]._padding_;
    iVar5 = (int)param_1[1]._padding_;
    local_c8 = &param_1[1]._padding_;
    uStack_cc = 1;
    pUVar14 = pUVar12;
    iStack_bc = 0;
    if (iVar5 != 0) {
      plVar15 = (longlong *)param_1[1]._padding_;
      if ((longlong *)param_1[1]._padding_ == (longlong *)0x0) {
        plVar15 = local_c8;
      }
      pUVar16 = pUVar12;
      uVar21 = 0;
      for (uVar11 = (uint)*plVar15; uVar11 == 0;
          uVar11 = *(uint *)((longlong)plVar15 + (longlong)(int)uVar11 * 4)) {
        uVar11 = (int)pUVar14 + 1;
        pUVar14 = (UMeshComponent *)(ulonglong)uVar11;
        uVar21 = (int)pUVar16 + 0x20;
        pUVar16 = (UMeshComponent *)(ulonglong)uVar21;
        iStack_bc = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar11) goto LAB_14e269ad1;
      }
      uStack_cc = ~(uVar11 - 1) & uVar11;
      uVar9 = (ulonglong)uStack_cc * 2 + 1;
      lVar8 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_a8 = (int)lVar8;
      iStack_bc = local_a8 + -1 + uVar21;
      if (iVar5 < iStack_bc) {
        iStack_bc = iVar5;
      }
    }
LAB_14e269ad1:
    uVar11 = (uint)param_1[1]._padding_;
    uVar18 = uVar11 & 0xffffffe0;
    iStack_b0 = (int)param_1[1]._padding_ - *(int *)((longlong)&param_1[1]._padding_ + 4);
    uStack_c0 = 0xffffffff;
    TStack_88.CurrentBitIndex = iStack_bc;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    uStack_d0 = SUB84(pUVar14,0);
    TStack_88._padding_ = CONCAT44(uStack_cc,uStack_d0);
    iVar5 = (int)uVar11 >> 5;
    TStack_88._28_4_ = iStack_bc;
    TStack_88.BaseBitIndex = uVar21;
    uStack_68 = CONCAT44(uStack_ac,iStack_b0);
    local_d8 = plVar2;
    local_b8 = uVar21;
    iStack_b4 = iStack_bc;
    local_90 = plVar2;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
    if ((((int)uVar11 < 0) || ((int)param_1[1]._padding_ < (int)uVar11)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FOptimusGroomStrandsReadProviderProxy *)(*pcVar3)();
      return pFVar7;
    }
    uVar21 = (uint)param_1[1]._padding_;
    if (uVar11 != uVar21) {
      plVar15 = &param_1[1]._padding_;
      if ((longlong *)param_1[1]._padding_ != (longlong *)0x0) {
        plVar15 = (longlong *)param_1[1]._padding_;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)((longlong)plVar15 + (longlong)iVar5 * 4);
      while (uVar11 == 0) {
        iVar5 = iVar5 + 1;
        uVar18 = uVar18 + 0x20;
        uVar11 = uVar21;
        if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < iVar5)
        goto LAB_14e269be0;
        uVar11 = *(uint *)((longlong)plVar15 + (longlong)iVar5 * 4);
      }
      uVar9 = (ulonglong)(~(uVar11 - 1) & uVar11) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_a4 = (int)lVar8;
      uVar11 = (uVar18 - 1) + local_a4;
      if ((int)uVar21 < (int)uVar11) {
        uVar11 = uVar21;
      }
    }
LAB_14e269be0:
    while( true ) {
      plVar15 = local_90;
      if ((int)local_90[1] - *(int *)((longlong)local_90 + 0x34) != (int)uStack_68) {
        local_res10[0] = local_res10[0] & 0xffffff00;
        `TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_88.CurrentBitIndex == uVar11) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_1[1]._padding_)) &&
         (pTVar17 = local_res20, plVar15 == plVar2)) break;
      local_f8 = *(undefined8 *)(*plVar15 + (longlong)TStack_88.CurrentBitIndex * 0x10);
      if (((local_118.Data <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 < local_118.Data + (longlong)(int)uStack_10c * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FOptimusGroomStrandsReadProviderProxy *)(*pcVar3)();
        return pFVar7;
      }
      if (local_110 == uStack_10c) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_118,(int *)&uStack_10c);
      }
      lVar8 = (longlong)(int)local_110;
      local_110 = local_110 + 1;
      *(undefined8 *)(local_118.Data + lVar8 * 8) = local_f8;
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
LAB_14e269cf4:
  pFVar22 = (pTVar17->AllocatorInstance).Data;
  if (pTVar17->ArrayMax < 0) {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar22,pTVar17->ArrayNum);
    pTVar17->ArrayNum = 0;
    if (pTVar17->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar17->AllocatorInstance,0,&pTVar17->ArrayMax);
    }
  }
  else {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar22,pTVar17->ArrayNum);
    pTVar17->ArrayNum = 0;
  }
  uVar9 = (ulonglong)(int)local_110;
  local_f0 = local_110;
  pFVar22 = local_118.Data + uVar9 * 8;
  puVar10 = local_60;
  puVar13 = local_58;
  FVar20.Data = local_118.Data;
  local_e8 = pFVar22;
  do {
    local_e0 = FVar20.Data;
    if (local_110 != (uint)uVar9) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UGroomComponent_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar20.Data == pFVar22) {
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data);
      }
      return this;
    }
    this_00 = *(UGroomComponent **)FVar20.Data;
    if (this_00 != (UGroomComponent *)0x0) {
      iVar5 = (this_00->HairGroupInstances).ArrayNum;
      uVar21 = 0;
      local_res20 = (TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *)
                    CONCAT44(local_res20._4_4_,iVar5);
      pFVar22 = local_e8;
      if (iVar5 != 0) {
        do {
          bVar4 = UGroomComponent::IsDeformationEnable(this_00,uVar21);
          if (bVar4) {
            if (((int)uVar21 < 0) || ((this_00->HairGroupInstances).ArrayNum <= (int)uVar21)) {
              pUVar12 = (UMeshComponent *)(ulonglong)((uint)pUVar12 | 2);
              local_a0 = (undefined8 *)0x0;
              puVar19 = (undefined8 *)0x0;
            }
            else {
              pUVar12 = (UMeshComponent *)(ulonglong)((uint)pUVar12 | 1);
              if (((this_00->HairGroupInstances).ArrayNum <= (int)uVar21) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FOptimusGroomStrandsReadProviderProxy *)(*pcVar3)();
                return pFVar7;
              }
              puVar19 = *(undefined8 **)
                         ((this_00->HairGroupInstances).AllocatorInstance.Data +
                         (longlong)(int)uVar21 * 8);
              local_98 = puVar19;
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
            }
            if ((((ulonglong)pUVar12 & 2) != 0) &&
               (pUVar12 = (UMeshComponent *)(ulonglong)((uint)pUVar12 & 0xfffffffd),
               local_a0 != (undefined8 *)0x0)) {
              piVar1 = (int *)(local_a0 + 1);
              LOCK();
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar5 == 1) && ((piVar1 != (int *)0x0 && (local_a0 != (undefined8 *)0x0)))) {
                (**(code **)*local_a0)(local_a0,1);
              }
            }
            if ((((ulonglong)pUVar12 & 1) != 0) &&
               (pUVar12 = (UMeshComponent *)(ulonglong)((uint)pUVar12 & 0xfffffffe),
               local_98 != (undefined8 *)0x0)) {
              piVar1 = (int *)(local_98 + 1);
              LOCK();
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar5 == 1) && ((piVar1 != (int *)0x0 && (local_98 != (undefined8 *)0x0)))) {
                (**(code **)*local_98)(local_98,1);
              }
            }
            if (puVar19 != (undefined8 *)0x0) {
              if (((int)uVar21 < 0) || ((this_00->HairGroupInstances).ArrayNum <= (int)uVar21)) {
                uVar11 = (uint)pUVar12 | 8;
                puVar13 = (undefined8 *)0x0;
                puVar19 = (undefined8 *)0x0;
              }
              else {
                uVar11 = (uint)pUVar12 | 4;
                if (((this_00->HairGroupInstances).ArrayNum <= (int)uVar21) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FOptimusGroomStrandsReadProviderProxy *)(*pcVar3)();
                  return pFVar7;
                }
                puVar10 = *(undefined8 **)
                           ((this_00->HairGroupInstances).AllocatorInstance.Data +
                           (longlong)(int)uVar21 * 8);
                puVar19 = puVar10;
                if (puVar10 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
                  UNLOCK();
                }
              }
              pUVar12 = (UMeshComponent *)(ulonglong)uVar11;
              if (((uVar11 & 8) != 0) &&
                 (pUVar12 = (UMeshComponent *)(ulonglong)(uVar11 & 0xfffffff7),
                 puVar13 != (undefined8 *)0x0)) {
                piVar1 = (int *)(puVar13 + 1);
                LOCK();
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar5 == 1) && (piVar1 != (int *)0x0)) {
                  (**(code **)*puVar13)(puVar13,1);
                }
              }
              if ((((ulonglong)pUVar12 & 4) != 0) &&
                 (pUVar12 = (UMeshComponent *)(ulonglong)((uint)pUVar12 & 0xfffffffb),
                 puVar10 != (undefined8 *)0x0)) {
                piVar1 = (int *)(puVar10 + 1);
                LOCK();
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar5 == 1) && (piVar1 != (int *)0x0)) {
                  (**(code **)*puVar10)(puVar10,1);
                }
              }
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
              pFVar22 = (pTVar17->AllocatorInstance).Data;
              piVar1 = &pTVar17->ArrayMax;
              local_108 = puVar19;
              if (((pFVar22 <= (FScriptContainerElement *)&local_108) &&
                  ((FScriptContainerElement *)&local_108 < pFVar22 + (longlong)*piVar1 * 8)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FOptimusGroomStrandsReadProviderProxy *)(*pcVar3)();
                return pFVar7;
              }
              iVar5 = pTVar17->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&pTVar17->AllocatorInstance,piVar1);
              }
              pTVar17->ArrayNum = iVar5 + 1;
              pFVar22 = (pTVar17->AllocatorInstance).Data;
              *(undefined8 *)(pFVar22 + (longlong)iVar5 * 8) = 0;
              *(undefined8 **)(pFVar22 + (longlong)iVar5 * 8) = local_108;
              if (local_108 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(local_108 + 1) = *(int *)(local_108 + 1) + 1;
                UNLOCK();
                if (local_108 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_108 + 1);
                  LOCK();
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (((iVar5 == 1) && (piVar1 != (int *)0x0)) && (local_108 != (undefined8 *)0x0))
                  {
                    (**(code **)*local_108)(local_108,1);
                  }
                }
              }
            }
          }
          uVar21 = uVar21 + 1;
          FVar20.Data = local_e0;
          pFVar22 = local_e8;
        } while (uVar21 < (uint)local_res20);
      }
    }
    uVar9 = (ulonglong)local_f0;
    FVar20.Data = FVar20.Data + 8;
  } while( true );
}

// AllocateResources @ 14e26e1b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusGroomStrandsReadProviderProxy::AllocateResources
          (FOptimusGroomStrandsReadProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2
          )

{
  TArray<FHairStrandsInstanceResourceParameters,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FHairStrandsInstanceInterpolationParameters,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FOptimusGroomStrandsReadProviderProxy::FBindingResources,TSizedDefaultAllocator<32>_>
  *pTVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  bool bVar28;
  int iVar29;
  uint uVar30;
  FRDGBufferSRV *pFVar31;
  ulonglong uVar32;
  longlong lVar33;
  FOptimusGroomStrandsReadProviderProxy *pFVar34;
  FScriptContainerElement *pFVar35;
  uint uVar36;
  int *piVar37;
  FScriptContainerElement *pFVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 local_128 [4];
  uint local_124;
  longlong *local_120;
  FOptimusGroomStrandsReadProviderProxy *local_118;
  FScriptContainerElement *local_110;
  FRDGBufferSRVDesc local_108;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  
  local_118 = this;
  if (this->FallbackByteAddressSRV == (FRDGBufferSRV *)0x0) {
    local_108.Buffer =
         FSystemTextures::GetDefaultByteAddressBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x10);
    local_108._padding_._4_4_ = 0;
    local_108._padding_._0_4_ = 0xffffffff;
    local_108._padding_ = 0;
    local_108._padding_._0_1_ = 0;
    if ((((local_108.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_108._padding_._0_1_ = 0x1c;
    }
    pFVar31 = FRDGBuilder::CreateSRV(param_1,&local_108);
    this->FallbackByteAddressSRV = pFVar31;
  }
  pTVar1 = &this->GroupResources;
  (this->GroupResources).ArrayNum = 0;
  if ((this->GroupResources).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&pTVar1->AllocatorInstance,0,&(this->GroupResources).ArrayMax);
  }
  pTVar2 = &this->GroupInterpolations;
  (this->GroupInterpolations).ArrayNum = 0;
  if ((this->GroupInterpolations).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,0,&pTVar2->AllocatorInstance,0,&(this->GroupInterpolations).ArrayMax);
  }
  pTVar3 = &this->BindingResources;
  (this->BindingResources).ArrayNum = 0;
  if ((this->BindingResources).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,&pTVar3->AllocatorInstance,0,&(this->BindingResources).ArrayMax);
  }
  local_124 = (this->GroupInstances).ArrayNum;
  uVar32 = (ulonglong)(int)local_124;
  pFVar38 = (this->GroupInstances).AllocatorInstance.Data;
  local_110 = pFVar38 + uVar32 * 8;
  pFVar34 = this;
  do {
    while( true ) {
      pFVar35 = local_110;
      piVar37 = &(this->GroupResources).ArrayMax;
      if ((pFVar34->GroupInstances).ArrayNum != (int)uVar32) {
        local_128[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_128);
      }
      if (pFVar38 == pFVar35) {
        return;
      }
      lVar33 = *(longlong *)pFVar38;
      if (lVar33 != 0) break;
LAB_14e26ea17:
      uVar32 = (ulonglong)local_124;
      pFVar38 = pFVar38 + 8;
    }
    iVar29 = (this->GroupResources).ArrayNum;
    if (iVar29 == *piVar37) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1040,&pTVar1->AllocatorInstance,piVar37);
    }
    (this->GroupResources).ArrayNum = iVar29 + 1;
    pFVar35 = (pTVar1->AllocatorInstance).Data + (longlong)iVar29 * 0x40;
    DefaultConstructItems<FHairStrandsInstanceResourceParameters,int>(pFVar35,1);
    pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar33 + 0x40) + 0x60));
    *(FRDGBufferSRV **)pFVar35 = pFVar31;
    pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar33 + 0x40) + 0x80));
    *(FRDGBufferSRV **)(pFVar35 + 8) = pFVar31;
    pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar33 + 0x40) + 0x160));
    *(FRDGBufferSRV **)(pFVar35 + 0x10) = pFVar31;
    pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar33 + 0x40) + 0x140));
    *(FRDGBufferSRV **)(pFVar35 + 0x18) = pFVar31;
    pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar33 + 0x40) + 0xe0));
    *(FRDGBufferSRV **)(pFVar35 + 0x20) = pFVar31;
    pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar33 + 0x40) + 0xc0));
    *(FRDGBufferSRV **)(pFVar35 + 0x28) = pFVar31;
    pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar33 + 0x40) + 0x100));
    *(FRDGBufferSRV **)(pFVar35 + 0x30) = pFVar31;
    pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar33 + 0x40) + 0x120));
    *(FRDGBufferSRV **)(pFVar35 + 0x38) = pFVar31;
    iVar29 = (this->GroupInterpolations).ArrayNum;
    if (iVar29 == (this->GroupInterpolations).ArrayMax) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1010,&pTVar2->AllocatorInstance,&(this->GroupInterpolations).ArrayMax);
    }
    (this->GroupInterpolations).ArrayNum = iVar29 + 1;
    pFVar35 = (pTVar2->AllocatorInstance).Data + (longlong)iVar29 * 0x10;
    DefaultConstructItems<FHairStrandsInstanceInterpolationParameters,int>(pFVar35,1);
    if (*(longlong *)(lVar33 + 0x50) == 0) {
      pFVar31 = (FRDGBufferSRV *)0x0;
    }
    else {
      pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar33 + 0x50) + 0x60));
    }
    *(FRDGBufferSRV **)pFVar35 = pFVar31;
    if (*(longlong *)(lVar33 + 0x50) == 0) {
      pFVar31 = (FRDGBufferSRV *)0x0;
    }
    else {
      pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar33 + 0x50) + 0x80));
    }
    *(FRDGBufferSRV **)(pFVar35 + 8) = pFVar31;
    iVar29 = (this->BindingResources).ArrayNum;
    if (iVar29 == (this->BindingResources).ArrayMax) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10b0,&pTVar3->AllocatorInstance,&(this->BindingResources).ArrayMax);
    }
    (this->BindingResources).ArrayNum = iVar29 + 1;
    pFVar35 = (pTVar3->AllocatorInstance).Data + (longlong)iVar29 * 0xb0;
    DefaultConstructItems<FOptimusGroomStrandsReadProviderProxy::FBindingResources,int>(pFVar35,1);
    if (*(int *)(lVar33 + 0x46c) != 2) {
      dVar21 = *(double *)(lVar33 + 0x210);
      dVar22 = *(double *)(lVar33 + 0x218);
      dVar7 = *(double *)(lVar33 + 0x200);
      dVar23 = *(double *)(lVar33 + 0x208);
      auVar4 = *(undefined1 (*) [16])(lVar33 + 0x240);
      dVar20 = dVar23 + dVar23;
      dVar39 = dVar21 + dVar21;
      dVar16 = (dVar7 + dVar7) * dVar7;
      dVar14 = dVar20 * *(double *)(lVar33 + 0x200);
      dVar15 = dVar39 * *(double *)(lVar33 + 0x208);
      auVar41 = blendpd(auVar4,*(undefined1 (*) [16])(lVar33 + 0x250),2);
      dVar19 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
      dVar24 = *(double *)(lVar33 + 0x248);
      dVar9 = dVar22 * (dVar7 + dVar7);
      dVar25 = *(double *)(lVar33 + 0x230);
      dVar26 = *(double *)(lVar33 + 0x248);
      dVar7 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
      dVar18 = *(double *)(lVar33 + 0x200) * dVar39;
      dVar17 = SUB168(*(undefined1 (*) [16])(lVar33 + 0x250),0);
      dVar8 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
      dVar40 = *(double *)(lVar33 + 0x220);
      dVar27 = *(double *)(lVar33 + 0x228);
      auVar10._4_4_ = (float)((dVar22 * dVar39 + dVar14) * *(double *)(lVar33 + 0x240));
      auVar10._0_4_ =
           (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                   (dVar39 * dVar21 + dVar20 * dVar23)) * *(double *)(lVar33 + 0x240));
      auVar10._8_4_ = (float)(auVar41._0_8_ * (dVar18 - dVar20 * dVar22));
      auVar10._12_4_ = 0;
      *(undefined1 (*) [16])(pFVar35 + 0x40) = auVar10;
      auVar11._4_4_ = (float)((dVar19 - (dVar39 * dVar21 + dVar16)) * dVar24);
      auVar11._0_4_ = (float)(auVar4._8_8_ * (dVar14 - dVar22 * dVar39));
      auVar11._8_4_ = (float)((dVar9 + dVar15) * dVar26);
      auVar11._12_4_ = 0;
      *(undefined1 (*) [16])(pFVar35 + 0x50) = auVar11;
      auVar4._4_4_ = (float)(dVar17 * (dVar15 - dVar9));
      auVar4._0_4_ = (float)((dVar20 * dVar22 + dVar18) * dVar17);
      auVar4._8_4_ = (float)((dVar7 - (dVar16 + dVar20 * dVar23)) * dVar17);
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])(pFVar35 + 0x60) = auVar4;
      *(float *)(pFVar35 + 0x70) = (float)dVar40;
      *(float *)(pFVar35 + 0x74) = (float)dVar27;
      *(float *)(pFVar35 + 0x78) = (float)dVar25;
      *(float *)(pFVar35 + 0x7c) = (float)dVar8;
      local_d8 = *(double *)(lVar33 + 0x1b0);
      dStack_d0 = *(double *)(lVar33 + 0x1b8);
      dVar7 = *(double *)(lVar33 + 0x1a0);
      dVar21 = *(double *)(lVar33 + 0x1a8);
      auVar4 = *(undefined1 (*) [16])(lVar33 + 0x1e0);
      dVar20 = dVar21 + dVar21;
      dVar40 = local_d8 + local_d8;
      dVar16 = (dVar7 + dVar7) * dVar7;
      dVar14 = dVar20 * *(double *)(lVar33 + 0x1a0);
      dVar15 = dVar40 * *(double *)(lVar33 + 0x1a8);
      auVar41 = blendpd(auVar4,*(undefined1 (*) [16])(lVar33 + 0x1f0),2);
      dVar19 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
      local_e8 = *(undefined8 *)(lVar33 + 0x1a0);
      uStack_e0 = *(undefined8 *)(lVar33 + 0x1a8);
      dVar22 = *(double *)(lVar33 + 0x1e8);
      dVar9 = dStack_d0 * (dVar7 + dVar7);
      dVar23 = *(double *)(lVar33 + 0x1d0);
      dVar24 = *(double *)(lVar33 + 0x1e8);
      dVar7 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
      dVar18 = *(double *)(lVar33 + 0x1a0) * dVar40;
      dVar17 = SUB168(*(undefined1 (*) [16])(lVar33 + 0x1f0),0);
      dVar8 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
      dVar25 = *(double *)(lVar33 + 0x1c0);
      dVar26 = *(double *)(lVar33 + 0x1c8);
      auVar12._4_4_ = (float)((dStack_d0 * dVar40 + dVar14) * *(double *)(lVar33 + 0x1e0));
      auVar12._0_4_ =
           (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                   (dVar40 * local_d8 + dVar20 * dVar21)) * *(double *)(lVar33 + 0x1e0));
      auVar12._8_4_ = (float)(auVar41._0_8_ * (dVar18 - dVar20 * dStack_d0));
      auVar12._12_4_ = 0;
      *(undefined1 (*) [16])pFVar35 = auVar12;
      auVar13._4_4_ = (float)((dVar19 - (dVar40 * local_d8 + dVar16)) * dVar22);
      auVar13._0_4_ = (float)(auVar4._8_8_ * (dVar14 - dStack_d0 * dVar40));
      auVar13._8_4_ = (float)((dVar9 + dVar15) * dVar24);
      auVar13._12_4_ = 0;
      *(undefined1 (*) [16])(pFVar35 + 0x10) = auVar13;
      auVar41._4_4_ = (float)(dVar17 * (dVar15 - dVar9));
      auVar41._0_4_ = (float)((dVar20 * dStack_d0 + dVar18) * dVar17);
      auVar41._8_4_ = (float)((dVar7 - (dVar16 + dVar20 * dVar21)) * dVar17);
      auVar41._12_4_ = 0;
      *(undefined1 (*) [16])(pFVar35 + 0x20) = auVar41;
      *(float *)(pFVar35 + 0x30) = (float)dVar25;
      *(float *)(pFVar35 + 0x34) = (float)dVar26;
      *(float *)(pFVar35 + 0x38) = (float)dVar23;
      *(float *)(pFVar35 + 0x3c) = (float)dVar8;
      pFVar34 = local_118;
      goto LAB_14e26ea17;
    }
    local_120 = *(longlong **)(lVar33 + 0x68);
    uVar36 = (uint)*(float *)(*(longlong *)(lVar33 + 0x460) + 0x50c);
    uVar30 = 0;
    if ((int)uVar36 < (int)local_120[1]) {
      uVar30 = ~uVar36 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)(*local_120 + (longlong)(int)uVar36 * 8);
    local_120 = *(longlong **)(lVar33 + 0x70);
    uVar36 = (uint)*(float *)(*(longlong *)(lVar33 + 0x460) + 0x50c);
    uVar30 = 0;
    if ((int)uVar36 < (int)local_120[1]) {
      uVar30 = ~uVar36 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar33 = *(longlong *)(*local_120 + (longlong)(int)uVar36 * 8);
    pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar5 + 0x88));
    *(FRDGBufferSRV **)(pFVar35 + 0x98) = pFVar31;
    pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar5 + 200));
    *(FRDGBufferSRV **)(pFVar35 + 0x80) = pFVar31;
    bVar28 = IsHairStrandContinuousDecimationReorderingEnabled();
    if (bVar28) {
      lVar33 = (ulonglong)*(uint *)(lVar33 + 0x130) * 0x20 + lVar33;
    }
    pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar33 + 0x68));
    *(FRDGBufferSRV **)(pFVar35 + 0x88) = pFVar31;
    pFVar31 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar5 + 0xa8));
    uVar32 = (ulonglong)local_124;
    pFVar38 = pFVar38 + 8;
    *(FRDGBufferSRV **)(pFVar35 + 0x90) = pFVar31;
    pFVar34 = local_118;
  } while( true );
}

// GatherDispatchData @ 14e273140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOptimusGroomStrandsReadProviderProxy::GatherDispatchData
          (FOptimusGroomStrandsReadProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FHairGroupInstance *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  FHairStrandsInstanceCommonParameters *pFVar9;
  uchar *puVar10;
  bool bVar11;
  uint uVar12;
  FHairStrandsInstanceCommonParameters *pFVar13;
  uchar *puVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  uchar *puVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_508 [32];
  longlong local_4e8;
  longlong local_4e0;
  int local_4d8;
  int local_4d4;
  int local_4d0;
  uint local_4cc;
  longlong local_4c8;
  longlong local_4c0;
  uchar *local_4b8;
  FVertexFactoryInput local_4a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_508;
  if ((param_1->NumInvocations != (this->GroupInstances).ArrayNum) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDispatchData.NumInvocations == GroupInstances.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomStrandsRead.cpp"
                          ,0x156,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_4b8 = param_1->ParameterBuffer + param_1->ParameterBufferOffset;
  iVar1 = param_1->NumInvocations;
  uVar18 = param_1->ParameterBufferStride;
  local_4cc = uVar18;
  if ((iVar1 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x3f,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((int)uVar18 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x40,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((uVar18 & 0xf) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements % alignof(ElementType) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x41,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar20 = 0;
  lVar21 = 0;
  uVar18 = 0;
  local_4d8 = 0;
  local_4d4 = 0;
  local_4d0 = 0;
  if (0 < iVar1) {
    local_4c8 = 0;
    local_4c0 = 0;
    do {
      lVar16 = local_4c0;
      iVar2 = (this->GroupInstances).ArrayNum;
      uVar19 = ~uVar18 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar18 < iVar2) {
        uVar12 = uVar19;
      }
      if ((uVar12 == 0) &&
         (local_4e8 = lVar21, local_4e0 = (longlong)iVar2,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = *(FHairGroupInstance **)((this->GroupInstances).AllocatorInstance.Data + lVar21 * 8);
      if (pFVar4 != (FHairGroupInstance *)0x0) {
        uVar12 = 0;
        if ((int)uVar18 < iVar1) {
          uVar12 = uVar19;
        }
        if ((uVar12 == 0) &&
           (local_4e8 = lVar21, local_4e0 = (longlong)iVar1,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                               ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar17 = local_4b8 + (int)local_4cc * lVar21;
        ComputeHairStrandsVertexInputData(&local_4a8,pFVar4,None);
        lVar16 = 2;
        pFVar9 = &local_4a8.Strands.Common;
        puVar10 = puVar17;
        do {
          puVar14 = puVar10;
          pFVar13 = pFVar9;
          uVar6 = *(undefined8 *)&pFVar13->RootScale;
          pFVar9 = (FHairStrandsInstanceCommonParameters *)
                   ((pFVar13->LocalToWorldPrimitiveTransform).M + 1);
          *(undefined8 *)puVar14 = *(undefined8 *)pFVar13;
          *(undefined8 *)(puVar14 + 8) = uVar6;
          uVar6 = *(undefined8 *)&pFVar13->RaytracingRadiusScale;
          *(undefined8 *)(puVar14 + 0x10) = *(undefined8 *)&pFVar13->Length;
          *(undefined8 *)(puVar14 + 0x18) = uVar6;
          uVar6 = *(undefined8 *)&pFVar13->PointCount;
          *(undefined8 *)(puVar14 + 0x20) = *(undefined8 *)&pFVar13->GroupIndex;
          *(undefined8 *)(puVar14 + 0x28) = uVar6;
          uVar6 = *(undefined8 *)&pFVar13->bSimulation;
          *(undefined8 *)(puVar14 + 0x30) = *(undefined8 *)&pFVar13->RaytracingProceduralSplits;
          *(undefined8 *)(puVar14 + 0x38) = uVar6;
          uVar6 = *(undefined8 *)&pFVar13->SourcePointCount;
          *(undefined8 *)(puVar14 + 0x40) = *(undefined8 *)&pFVar13->bPointRemapping;
          *(undefined8 *)(puVar14 + 0x48) = uVar6;
          uVar6 = *(undefined8 *)((longlong)&(pFVar13->PositionOffset).field0_0x0 + 8);
          *(undefined8 *)(puVar14 + 0x50) = *(undefined8 *)&(pFVar13->PositionOffset).field0_0x0;
          *(undefined8 *)(puVar14 + 0x58) = uVar6;
          uVar6 = *(undefined8 *)((longlong)&(pFVar13->PrevPositionOffset).field0_0x0 + 8);
          *(undefined8 *)(puVar14 + 0x60) = *(undefined8 *)&(pFVar13->PrevPositionOffset).field0_0x0
          ;
          *(undefined8 *)(puVar14 + 0x68) = uVar6;
          uVar6 = *(undefined8 *)((pFVar13->LocalToWorldPrimitiveTransform).M[0] + 2);
          *(undefined8 *)(puVar14 + 0x70) =
               *(undefined8 *)(pFVar13->LocalToWorldPrimitiveTransform).M[0];
          *(undefined8 *)(puVar14 + 0x78) = uVar6;
          lVar16 = lVar16 + -1;
          puVar10 = puVar14 + 0x80;
        } while (lVar16 != 0);
        uVar6 = *(undefined8 *)((pFVar13->LocalToWorldPrimitiveTransform).M[1] + 2);
        *(undefined8 *)(puVar14 + 0x80) = *(undefined8 *)pFVar9;
        *(undefined8 *)(puVar14 + 0x88) = uVar6;
        uVar6 = *(undefined8 *)((pFVar13->LocalToWorldPrimitiveTransform).M[2] + 2);
        *(undefined8 *)(puVar14 + 0x90) =
             *(undefined8 *)(pFVar13->LocalToWorldPrimitiveTransform).M[2];
        *(undefined8 *)(puVar14 + 0x98) = uVar6;
        uVar6 = *(undefined8 *)((pFVar13->LocalToWorldPrimitiveTransform).M[3] + 2);
        *(undefined8 *)(puVar14 + 0xa0) =
             *(undefined8 *)(pFVar13->LocalToWorldPrimitiveTransform).M[3];
        *(undefined8 *)(puVar14 + 0xa8) = uVar6;
        uVar6 = *(undefined8 *)(pFVar13->LocalToTranslatedWorldPrimitiveTransform).M[0];
        uVar7 = *(undefined8 *)((pFVar13->LocalToTranslatedWorldPrimitiveTransform).M[0] + 2);
        *(int *)(puVar17 + 0x140) = local_4d8;
        *(undefined8 *)(puVar14 + 0xb0) = uVar6;
        *(undefined8 *)(puVar14 + 0xb8) = uVar7;
        local_4d8 = local_4d8 + *(int *)(puVar17 + 0x28);
        *(int *)(puVar17 + 0x144) = local_4d4;
        local_4d4 = local_4d4 + *(int *)(puVar17 + 0x2c);
        *(int *)(puVar17 + 0x148) = local_4d0;
        local_4d0 = local_4d0 + (((pFVar4->Guides).RestResource)->BulkData->Header).PointCount;
        iVar2 = (this->GroupResources).ArrayNum;
        uVar12 = 0;
        if ((int)uVar18 < iVar2) {
          uVar12 = uVar19;
        }
        if ((uVar12 == 0) &&
           (local_4e8 = lVar21, local_4e0 = (longlong)iVar2,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar15 = (this->GroupResources).AllocatorInstance.Data;
        uVar6 = *(undefined8 *)(pFVar15 + local_4c0 + 8);
        *(undefined8 *)(puVar17 + 0x160) = *(undefined8 *)(pFVar15 + local_4c0);
        *(undefined8 *)(puVar17 + 0x168) = uVar6;
        uVar6 = *(undefined8 *)(pFVar15 + local_4c0 + 0x10 + 8);
        *(undefined8 *)(puVar17 + 0x170) = *(undefined8 *)(pFVar15 + local_4c0 + 0x10);
        *(undefined8 *)(puVar17 + 0x178) = uVar6;
        uVar6 = *(undefined8 *)(pFVar15 + local_4c0 + 0x20 + 8);
        *(undefined8 *)(puVar17 + 0x180) = *(undefined8 *)(pFVar15 + local_4c0 + 0x20);
        *(undefined8 *)(puVar17 + 0x188) = uVar6;
        uVar6 = *(undefined8 *)(pFVar15 + local_4c0 + 0x30 + 8);
        *(undefined8 *)(puVar17 + 400) = *(undefined8 *)(pFVar15 + local_4c0 + 0x30);
        *(undefined8 *)(puVar17 + 0x198) = uVar6;
        iVar2 = (this->GroupInterpolations).ArrayNum;
        uVar12 = 0;
        if ((int)uVar18 < iVar2) {
          uVar12 = uVar19;
        }
        if ((uVar12 == 0) &&
           (local_4e8 = lVar21, local_4e0 = (longlong)iVar2,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)((this->GroupInterpolations).AllocatorInstance.Data + lVar20) == 0) {
          *(FRDGBufferSRV **)(puVar17 + 0x1a0) = this->FallbackByteAddressSRV;
          *(FRDGBufferSRV **)(puVar17 + 0x1a8) = this->FallbackByteAddressSRV;
        }
        else {
          iVar2 = (this->GroupInterpolations).ArrayNum;
          uVar12 = 0;
          if ((int)uVar18 < iVar2) {
            uVar12 = uVar19;
          }
          if ((uVar12 == 0) &&
             (local_4e8 = lVar21, local_4e0 = (longlong)iVar2,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar15 = (this->GroupInterpolations).AllocatorInstance.Data + lVar20;
          uVar6 = *(undefined8 *)(pFVar15 + 8);
          *(undefined8 *)(puVar17 + 0x1a0) = *(undefined8 *)pFVar15;
          *(undefined8 *)(puVar17 + 0x1a8) = uVar6;
        }
        iVar2 = (this->BindingResources).ArrayNum;
        uVar12 = 0;
        if ((int)uVar18 < iVar2) {
          uVar12 = uVar19;
        }
        if ((uVar12 == 0) &&
           (local_4e8 = lVar21, local_4e0 = (longlong)iVar2,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar15 = (this->BindingResources).AllocatorInstance.Data + local_4c8;
        if (pFVar4->BindingType == Skinning) {
          *(undefined8 *)(puVar17 + 0x248) = *(undefined8 *)(pFVar15 + 0x98);
          *(undefined8 *)(puVar17 + 0x240) = *(undefined8 *)(pFVar15 + 0x90);
          *(undefined8 *)(puVar17 + 0x230) = *(undefined8 *)(pFVar15 + 0x80);
          *(undefined8 *)(puVar17 + 0x238) = *(undefined8 *)(pFVar15 + 0x88);
        }
        else {
          uVar6 = *(undefined8 *)(pFVar15 + 0x48);
          *(undefined8 *)(puVar17 + 0x1f0) = *(undefined8 *)(pFVar15 + 0x40);
          *(undefined8 *)(puVar17 + 0x1f8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar15 + 0x58);
          *(undefined8 *)(puVar17 + 0x200) = *(undefined8 *)(pFVar15 + 0x50);
          *(undefined8 *)(puVar17 + 0x208) = uVar6;
          uVar6 = *(undefined8 *)(pFVar15 + 0x68);
          *(undefined8 *)(puVar17 + 0x210) = *(undefined8 *)(pFVar15 + 0x60);
          *(undefined8 *)(puVar17 + 0x218) = uVar6;
          uVar6 = *(undefined8 *)(pFVar15 + 0x78);
          *(undefined8 *)(puVar17 + 0x220) = *(undefined8 *)(pFVar15 + 0x70);
          *(undefined8 *)(puVar17 + 0x228) = uVar6;
          uVar6 = *(undefined8 *)(pFVar15 + 8);
          *(undefined8 *)(puVar17 + 0x1b0) = *(undefined8 *)pFVar15;
          *(undefined8 *)(puVar17 + 0x1b8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar15 + 0x18);
          *(undefined8 *)(puVar17 + 0x1c0) = *(undefined8 *)(pFVar15 + 0x10);
          *(undefined8 *)(puVar17 + 0x1c8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar15 + 0x28);
          *(undefined8 *)(puVar17 + 0x1d0) = *(undefined8 *)(pFVar15 + 0x20);
          *(undefined8 *)(puVar17 + 0x1d8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar15 + 0x38);
          *(undefined8 *)(puVar17 + 0x1e0) = *(undefined8 *)(pFVar15 + 0x30);
          *(undefined8 *)(puVar17 + 0x1e8) = uVar6;
        }
        FHairGroupPublicData::FVertexFactoryInput::FStrands::~FStrands(&local_4a8.Strands);
        lVar16 = local_4c0;
      }
      iVar8 = local_4d4;
      iVar2 = local_4d8;
      local_4c0 = lVar16 + 0x40;
      local_4c8 = local_4c8 + 0xb0;
      uVar18 = uVar18 + 1;
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x10;
    } while ((int)uVar18 < iVar1);
    lVar20 = 0;
    uVar18 = 0;
    do {
      iVar3 = (this->GroupInstances).ArrayNum;
      local_4e0 = (longlong)iVar3;
      uVar12 = 0;
      if ((int)uVar18 < iVar3) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (local_4e8 = lVar20,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)((this->GroupInstances).AllocatorInstance.Data + lVar20 * 8) != 0) {
        uVar12 = 0;
        if ((int)uVar18 < iVar1) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_4e8 = lVar20, local_4e0 = (longlong)iVar1,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                               ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(int *)(local_4b8 + (int)local_4cc * lVar20 + 0x14c) = iVar2;
        *(int *)(local_4b8 + (int)local_4cc * lVar20 + 0x150) = iVar8;
      }
      uVar18 = uVar18 + 1;
      lVar20 = lVar20 + 1;
    } while ((int)uVar18 < iVar1);
  }
  return;
}

// GatherPermutations @ 14e273da0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FOptimusGroomStrandsReadProviderProxy::GatherPermutations
          (FOptimusGroomStrandsReadProviderProxy *this,FPermutationData *param_1)

{
  FComputeKernelPermutationVector *this_00;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  this_00 = param_1->PermutationVector;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar7 < `public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                        ::__l2::Name,L"ENABLE_SKINNED_TRANSFORM");
    atexit(`FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds'::__l2::
           _dynamic_atexit_destructor_for__Name__);
    _Init_thread_footer(&`public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar9 = 0;
  if ((*piVar7 < `public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    iVar6 = `public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l2::Name.Data.ArrayNum + -1;
    FVar2 = `public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l2::Name.Data.AllocatorInstance;
    if (`public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
        ::__l2::Name.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    `public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
    ::__l2::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    _Init_thread_footer(&`public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  uVar4 = FComputeKernelPermutationVector::GetPermutationBits
                    (this_00,&`public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                              ::__l2::Name,
                     `public:___cdecl_FOptimusGroomStrandsReadPermutationIds::FOptimusGroomStrandsReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                     ::__l2::Hash,1);
  pFVar10 = (this->GroupInstances).AllocatorInstance.Data;
  lVar8 = 0;
  iVar6 = (this->GroupInstances).ArrayNum;
  pFVar12 = pFVar10 + (longlong)iVar6 * 8;
  local_res10 = pFVar12;
  do {
    if ((this->GroupInstances).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar12) {
      return;
    }
    if (*(longlong *)pFVar10 != 0) {
      uVar11 = 0;
      if (*(int *)(*(longlong *)pFVar10 + 0x46c) == 2) {
        uVar11 = uVar4;
      }
      uVar5 = 0;
      if ((int)uVar9 < (param_1->PermutationIds).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar12 = (param_1->PermutationIds).AllocatorInstance.Data + lVar8;
      *(uint *)pFVar12 = *(uint *)pFVar12 | uVar11;
      pFVar12 = local_res10;
    }
    uVar9 = uVar9 + 1;
    lVar8 = lVar8 + 4;
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// IsValid @ 14e289170

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FOptimusGroomStrandsReadProviderProxy::IsValid
          (FOptimusGroomStrandsReadProviderProxy *this,FValidationData *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  
  if (param_1->ParameterStructSize != 0x250) {
    return false;
  }
  iVar4 = (this->GroupInstances).ArrayNum;
  if (param_1->NumInvocations != iVar4) {
    return false;
  }
  pFVar10 = (this->GroupInstances).AllocatorInstance.Data;
  pFVar2 = pFVar10 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->GroupInstances).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar2) {
      pFVar10 = (this->GroupInstances).AllocatorInstance.Data;
      iVar4 = (this->GroupInstances).ArrayNum;
      pFVar2 = pFVar10 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this->GroupInstances).ArrayNum != iVar4) {
          `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar10 == pFVar2) {
          return true;
        }
        puVar9 = *(undefined8 **)pFVar10;
        if (puVar9 == (undefined8 *)0x0) {
          return false;
        }
        piVar1 = (int *)(puVar9 + 1);
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if ((puVar9[0x8c] == 0) ||
           ((*(int *)((longlong)puVar9 + 0x46c) == 2 &&
            (bVar7 = UE::Groom::Private::HaveValidSkinnedResources<FHairGroupInstance::FStrands>
                               ((FStrands *)(puVar9 + 8),(int)*(float *)(puVar9[0x8c] + 0x50c)),
            !bVar7)))) break;
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
          (**(code **)*puVar9)(puVar9,1);
        }
        pFVar10 = pFVar10 + 8;
      }
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return false;
      }
      if (piVar1 == (int *)0x0) {
        return false;
      }
      puVar8 = (undefined8 *)*puVar9;
      goto LAB_14e289235;
    }
    puVar9 = *(undefined8 **)pFVar10;
    if (puVar9 == (undefined8 *)0x0) {
      return false;
    }
    piVar1 = (int *)(puVar9 + 1);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    lVar5 = puVar9[8];
    if (((((lVar5 == 0) || (lVar6 = puVar9[9], lVar6 == 0)) || (*(int *)(lVar5 + 0x18) == -1)) ||
        ((*(char *)(lVar5 + 0x21) == '\0' || (*(int *)(lVar6 + 0x18) == -1)))) ||
       (*(char *)(lVar6 + 0x21) == '\0')) break;
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar9)(puVar9,1);
    }
    pFVar10 = pFVar10 + 8;
  }
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 != 1) {
    return false;
  }
  if (piVar1 == (int *)0x0) {
    return false;
  }
  puVar8 = (undefined8 *)*puVar9;
LAB_14e289235:
  (*(code *)*puVar8)(puVar9,1);
  return false;
}

