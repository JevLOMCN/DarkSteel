// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 4

// FOptimusGroomStrandsWriteProviderProxy @ 14e26a0f0

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

FOptimusGroomStrandsWriteProviderProxy * __thiscall
FOptimusGroomStrandsWriteProviderProxy::FOptimusGroomStrandsWriteProviderProxy
          (FOptimusGroomStrandsWriteProviderProxy *this,UMeshComponent *param_1,ulong64 param_2)

{
  int *piVar1;
  longlong *plVar2;
  UGroomComponent *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FOptimusGroomStrandsWriteProviderProxy *pFVar7;
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
  this->_padding_ = (longlong)&___7FOptimusGroomStrandsWriteProviderProxy__6B_;
  (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->GroupInstances).ArrayNum = 0;
  (this->GroupInstances).ArrayMax = 0;
  (this->GroupResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupResources).ArrayNum = 0;
  (this->GroupResources).ArrayMax = 0;
  this->FallbackPositionBufferSRV = (FRDGBufferSRV *)0x0;
  this->FallbackPositionBufferUAV = (FRDGBufferUAV *)0x0;
  this->FallbackAttributeBufferUAV = (FRDGBufferUAV *)0x0;
  this->OutputMask = param_2;
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
        pFVar7 = (FOptimusGroomStrandsWriteProviderProxy *)(*pcVar3)();
        return pFVar7;
      }
      if (local_110 == uStack_10c) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_118,(int *)&uStack_10c);
      }
      *(UMeshComponent **)(local_118.Data + (longlong)(int)local_110 * 8) = local_100;
      local_110 = local_110 + 1;
      goto LAB_14e26a524;
    }
  }
  local_100 = (UMeshComponent *)0x0;
  if (param_1 == (UMeshComponent *)0x0) {
LAB_14e26a26f:
    param_1 = pUVar12;
  }
  else {
    pUVar6 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) goto LAB_14e26a26f;
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar11) goto LAB_14e26a2ff;
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
LAB_14e26a2ff:
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
      pFVar7 = (FOptimusGroomStrandsWriteProviderProxy *)(*pcVar3)();
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
        goto LAB_14e26a410;
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
LAB_14e26a410:
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
        pFVar7 = (FOptimusGroomStrandsWriteProviderProxy *)(*pcVar3)();
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
LAB_14e26a524:
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
                pFVar7 = (FOptimusGroomStrandsWriteProviderProxy *)(*pcVar3)();
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
                  pFVar7 = (FOptimusGroomStrandsWriteProviderProxy *)(*pcVar3)();
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
                pFVar7 = (FOptimusGroomStrandsWriteProviderProxy *)(*pcVar3)();
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

// AllocateResources @ 14e26eaa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusGroomStrandsWriteProviderProxy::AllocateResources
          (FOptimusGroomStrandsWriteProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  FRDGBufferSRV *pFVar9;
  FRDGBufferUAV *pFVar10;
  FRDGImportedBuffer *pFVar11;
  FRDGExternalBuffer *pFVar12;
  undefined1 uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  FRDGImportedBuffer local_d8;
  undefined1 local_c0 [32];
  FRDGBuffer *local_a0;
  FRDGBufferSRV *pFStack_98;
  FShaderParametersMetadata *local_90;
  FRDGImportedBuffer local_88;
  FRDGImportedBuffer local_70;
  FRDGImportedBuffer local_58;
  
  if (this->FallbackPositionBufferSRV == (FRDGBufferSRV *)0x0) {
    local_c0._24_8_ =
         FSystemTextures::GetDefaultByteAddressBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x10);
    local_c0._8_4_ = 0xffffffff;
    local_c0._16_8_ = (FRHIUnorderedAccessView *)0x0;
    uVar13 = 0;
    if (((((FRDGBuffer *)local_c0._24_8_)->Desc).Usage & DrawIndirect) != None) {
      uVar13 = 0x1c;
    }
    local_c0._0_8_ = CONCAT71(SUB87(local_c0._0_8_,1),uVar13) & 0xffffffff;
    pFVar9 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)local_c0);
    this->FallbackPositionBufferSRV = pFVar9;
  }
  if (this->FallbackPositionBufferUAV == (FRDGBufferUAV *)0x0) {
    local_d8.SRV = (FRDGBufferSRV *)CONCAT44(local_d8.SRV._4_4_,0x10119);
    local_d8.Buffer = (FRDGBuffer *)0x400000004;
    local_d8.UAV = (FRDGBufferUAV *)0x0;
    local_a0 = (FRDGBuffer *)0x400000004;
    pFStack_98 = local_d8.SRV;
    local_90 = (FShaderParametersMetadata *)0x0;
    local_d8.SRV = (FRDGBufferSRV *)
                   FRDGBuilder::CreateBuffer
                             (param_1,(FRDGBufferDesc *)&local_a0,
                              L"Groom.Deformer.FallbackDeformedPositionBuffer",None);
    uVar13 = 0;
    if (((((FRDGBuffer *)local_d8.SRV)->Desc).Usage & DrawIndirect) != None) {
      uVar13 = 0x1c;
    }
    local_d8.Buffer =
         (FRDGBuffer *)
         (CONCAT71((int7)((ulonglong)local_d8.Buffer >> 8),uVar13) & 0xffffffffff0000ff);
    pFVar10 = FRDGBuilder::CreateUAV(param_1,(FRDGBufferUAVDesc *)&local_d8,SkipBarrier);
    this->FallbackPositionBufferUAV = pFVar10;
  }
  if (this->FallbackAttributeBufferUAV == (FRDGBufferUAV *)0x0) {
    local_d8.SRV = (FRDGBufferSRV *)CONCAT44(local_d8.SRV._4_4_,0x10119);
    local_d8.Buffer = (FRDGBuffer *)0x400000004;
    local_d8.UAV = (FRDGBufferUAV *)0x0;
    local_a0 = (FRDGBuffer *)0x400000004;
    pFStack_98 = local_d8.SRV;
    local_90 = (FShaderParametersMetadata *)0x0;
    local_d8.SRV = (FRDGBufferSRV *)
                   FRDGBuilder::CreateBuffer
                             (param_1,(FRDGBufferDesc *)&local_a0,
                              L"Groom.Deformer.FallbackDeformedAttributeBuffer",None);
    uVar13 = 0;
    if (((((FRDGBuffer *)local_d8.SRV)->Desc).Usage & DrawIndirect) != None) {
      uVar13 = 0x1c;
    }
    local_d8.Buffer =
         (FRDGBuffer *)
         (CONCAT71((int7)((ulonglong)local_d8.Buffer >> 8),uVar13) & 0xffffffffff0000ff);
    pFVar10 = FRDGBuilder::CreateUAV(param_1,(FRDGBufferUAVDesc *)&local_d8,SkipBarrier);
    this->FallbackAttributeBufferUAV = pFVar10;
  }
  pFVar14 = (this->GroupInstances).AllocatorInstance.Data;
  iVar5 = (this->GroupInstances).ArrayNum;
  pFVar3 = pFVar14 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->GroupInstances).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar3) break;
    lVar6 = *(longlong *)pFVar14;
    if (lVar6 != 0) {
      iVar8 = (this->GroupResources).ArrayNum;
      piVar1 = &(this->GroupResources).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&(this->GroupResources).AllocatorInstance,piVar1);
      }
      (this->GroupResources).ArrayNum = iVar8 + 1;
      pFVar4 = (this->GroupResources).AllocatorInstance.Data + (longlong)iVar8 * 0x28;
      DefaultConstructItems<FOptimusGroomStrandsWriteProviderProxy::FDispatchResources,int>
                (pFVar4,1);
      if ((((this->OutputMask & 7) != 0) && (*(longlong *)(lVar6 + 0x40) != 0)) &&
         (*(longlong *)(lVar6 + 0x48) != 0)) {
        pFVar11 = ::Register((FRDGImportedBuffer *)&local_a0,param_1,
                             (FRDGExternalBuffer *)(*(longlong *)(lVar6 + 0x40) + 0x80),CreateSRV,
                             None);
        local_90 = (FShaderParametersMetadata *)pFVar11->UAV;
        *(FRDGBufferSRV **)pFVar4 = pFVar11->SRV;
        pFVar11 = ::Register((FRDGImportedBuffer *)&local_a0,param_1,
                             (FRDGExternalBuffer *)(*(longlong *)(lVar6 + 0x40) + 0x60),CreateSRV,
                             None);
        local_90 = (FShaderParametersMetadata *)pFVar11->UAV;
        *(FRDGBufferSRV **)(pFVar4 + 8) = pFVar11->SRV;
        pFVar12 = FHairStrandsDeformedResource::GetDeformerBuffer
                            (*(FHairStrandsDeformedResource **)(lVar6 + 0x48),param_1);
        pFVar11 = ::Register(&local_d8,param_1,pFVar12,CreateUAV,None);
        local_90 = (FShaderParametersMetadata *)pFVar11->UAV;
        local_a0 = pFVar11->Buffer;
        pFStack_98 = pFVar11->SRV;
        *(FShaderParametersMetadata **)(pFVar4 + 0x10) = local_90;
      }
      if ((*(longlong *)(lVar6 + 0x40) != 0) &&
         (*(FHairStrandsDeformedResource **)(lVar6 + 0x48) != (FHairStrandsDeformedResource *)0x0))
      {
        if ((this->OutputMask & 0x38) != 0) {
          pFVar12 = FHairStrandsDeformedResource::GetDeformerCurveAttributeBuffer
                              (*(FHairStrandsDeformedResource **)(lVar6 + 0x48),param_1);
          local_c0._0_8_ = (pFVar12->Buffer).Reference;
          if ((FRDGPooledBuffer *)local_c0._0_8_ != (FRDGPooledBuffer *)0x0) {
            LOCK();
            *(int *)&((FRDGPooledBuffer *)local_c0._0_8_)->_padding_ =
                 (int)((FRDGPooledBuffer *)local_c0._0_8_)->_padding_ + 1;
            UNLOCK();
          }
          local_c0._8_8_ = (pFVar12->SRV).Reference;
          if ((FRHIShaderResourceView *)local_c0._8_8_ != (FRHIShaderResourceView *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_c0._8_8_);
          }
          local_c0._16_8_ = (pFVar12->UAV).Reference;
          if ((FRHIUnorderedAccessView *)local_c0._16_8_ != (FRHIUnorderedAccessView *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_c0._16_8_);
          }
          local_c0[0x18] = pFVar12->Format;
          if ((FRDGPooledBuffer *)local_c0._0_8_ != (FRDGPooledBuffer *)0x0) {
            pFVar11 = ::Register(&local_88,param_1,(FRDGExternalBuffer *)local_c0,CreateUAV,None);
            local_d8.Buffer = pFVar11->Buffer;
            local_d8.SRV = pFVar11->SRV;
            local_90 = (FShaderParametersMetadata *)pFVar11->UAV;
            pFVar11 = ::Register(&local_70,param_1,
                                 (FRDGExternalBuffer *)(*(longlong *)(lVar6 + 0x40) + 0xe0),None,
                                 None);
            local_58.UAV = pFVar11->UAV;
            if (pFVar11->Buffer != (FRDGBuffer *)0x0) {
              AddCopyBufferPass(param_1,local_d8.Buffer,pFVar11->Buffer);
            }
            *(FShaderParametersMetadata **)(pFVar4 + 0x20) = local_90;
          }
          if ((FRHIUnorderedAccessView *)local_c0._16_8_ != (FRHIUnorderedAccessView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_c0._16_8_);
          }
          if ((FRHIShaderResourceView *)local_c0._8_8_ != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_c0._8_8_);
          }
          if ((FRDGPooledBuffer *)local_c0._0_8_ != (FRDGPooledBuffer *)0x0) {
            plVar2 = (longlong *)(local_c0._0_8_ + 8);
            LOCK();
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if (((int)lVar7 == 1) && (plVar2 != (longlong *)0x0)) {
              (**(code **)*(longlong *)local_c0._0_8_)(local_c0._0_8_,1);
            }
          }
        }
        if ((this->OutputMask & 0x1c0) != 0) {
          pFVar12 = FHairStrandsDeformedResource::GetDeformerPointAttributeBuffer
                              (*(FHairStrandsDeformedResource **)(lVar6 + 0x48),param_1);
          local_c0._0_8_ = (pFVar12->Buffer).Reference;
          if ((FRDGPooledBuffer *)local_c0._0_8_ != (FRDGPooledBuffer *)0x0) {
            LOCK();
            *(int *)&((FRDGPooledBuffer *)local_c0._0_8_)->_padding_ =
                 (int)((FRDGPooledBuffer *)local_c0._0_8_)->_padding_ + 1;
            UNLOCK();
          }
          local_c0._8_8_ = (pFVar12->SRV).Reference;
          if ((FRHIShaderResourceView *)local_c0._8_8_ != (FRHIShaderResourceView *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_c0._8_8_);
          }
          local_c0._16_8_ = (pFVar12->UAV).Reference;
          if ((FRHIUnorderedAccessView *)local_c0._16_8_ != (FRHIUnorderedAccessView *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_c0._16_8_);
          }
          local_c0[0x18] = pFVar12->Format;
          if ((FRDGPooledBuffer *)local_c0._0_8_ != (FRDGPooledBuffer *)0x0) {
            pFVar11 = ::Register(&local_58,param_1,(FRDGExternalBuffer *)local_c0,CreateUAV,None);
            local_d8.Buffer = pFVar11->Buffer;
            local_d8.SRV = pFVar11->SRV;
            local_90 = (FShaderParametersMetadata *)pFVar11->UAV;
            pFVar11 = ::Register(&local_70,param_1,
                                 (FRDGExternalBuffer *)(*(longlong *)(lVar6 + 0x40) + 0xc0),None,
                                 None);
            local_88.UAV = pFVar11->UAV;
            if (pFVar11->Buffer != (FRDGBuffer *)0x0) {
              AddCopyBufferPass(param_1,local_d8.Buffer,pFVar11->Buffer);
            }
            *(FShaderParametersMetadata **)(pFVar4 + 0x18) = local_90;
          }
          if ((FRHIUnorderedAccessView *)local_c0._16_8_ != (FRHIUnorderedAccessView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_c0._16_8_);
          }
          if ((FRHIShaderResourceView *)local_c0._8_8_ != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_c0._8_8_);
          }
          if ((FRDGPooledBuffer *)local_c0._0_8_ != (FRDGPooledBuffer *)0x0) {
            plVar2 = (longlong *)(local_c0._0_8_ + 8);
            LOCK();
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if (((int)lVar6 == 1) && (plVar2 != (longlong *)0x0)) {
              (**(code **)*(longlong *)local_c0._0_8_)(local_c0._0_8_,1);
            }
          }
        }
      }
    }
    pFVar14 = pFVar14 + 8;
  }
  return;
}

// GatherDispatchData @ 14e273730

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
FOptimusGroomStrandsWriteProviderProxy::GatherDispatchData
          (FOptimusGroomStrandsWriteProviderProxy *this,FDispatchData *param_1)

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
  bool bVar12;
  uint uVar13;
  FHairStrandsInstanceCommonParameters *pFVar14;
  FRDGBufferUAV *pFVar15;
  uchar *puVar16;
  uchar *puVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_4f8 [32];
  longlong local_4d8;
  longlong local_4d0;
  int local_4c8;
  int local_4c4;
  uint local_4c0;
  longlong local_4b8;
  uchar *local_4b0;
  FVertexFactoryInput local_4a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4f8;
  local_4b0 = param_1->ParameterBuffer + param_1->ParameterBufferOffset;
  iVar1 = param_1->NumInvocations;
  uVar19 = param_1->ParameterBufferStride;
  local_4c0 = uVar19;
  if ((iVar1 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x3f,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((int)uVar19 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x40,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((uVar19 & 0xf) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements % alignof(ElementType) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x41,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar22 = 0;
  uVar19 = 0;
  local_4c8 = 0;
  local_4c4 = 0;
  if (0 < iVar1) {
    local_4b8 = 0;
    do {
      lVar21 = local_4b8;
      iVar2 = (this->GroupInstances).ArrayNum;
      uVar18 = ~uVar19 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar19 < iVar2) {
        uVar13 = uVar18;
      }
      if ((uVar13 == 0) &&
         (local_4d8 = lVar22, local_4d0 = (longlong)iVar2,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = *(FHairGroupInstance **)((this->GroupInstances).AllocatorInstance.Data + lVar22 * 8);
      uVar13 = local_4c0;
      if (pFVar4 != (FHairGroupInstance *)0x0) {
        iVar2 = (this->GroupResources).ArrayNum;
        uVar13 = 0;
        if ((int)uVar19 < iVar2) {
          uVar13 = uVar18;
        }
        if ((uVar13 == 0) &&
           (local_4d8 = lVar22, local_4d0 = (longlong)iVar2,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = (this->GroupResources).AllocatorInstance.Data + lVar21;
        if (((*(longlong *)(pFVar20 + 0x10) == 0) || (*(longlong *)(pFVar20 + 8) == 0)) ||
           (*(longlong *)pFVar20 == 0)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        ComputeHairStrandsVertexInputData(&local_4a8,pFVar4,None);
        uVar13 = 0;
        if ((int)uVar19 < iVar1) {
          uVar13 = uVar18;
        }
        if ((uVar13 == 0) &&
           (local_4d8 = lVar22, local_4d0 = (longlong)iVar1,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                               ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar13 = local_4c0;
        lVar21 = 2;
        puVar17 = local_4b0 + (int)local_4c0 * lVar22;
        pFVar9 = &local_4a8.Strands.Common;
        puVar10 = puVar17;
        do {
          puVar16 = puVar10;
          pFVar14 = pFVar9;
          uVar6 = *(undefined8 *)&pFVar14->RootScale;
          pFVar9 = (FHairStrandsInstanceCommonParameters *)
                   ((pFVar14->LocalToWorldPrimitiveTransform).M + 1);
          *(undefined8 *)puVar16 = *(undefined8 *)pFVar14;
          *(undefined8 *)(puVar16 + 8) = uVar6;
          uVar6 = *(undefined8 *)&pFVar14->RaytracingRadiusScale;
          *(undefined8 *)(puVar16 + 0x10) = *(undefined8 *)&pFVar14->Length;
          *(undefined8 *)(puVar16 + 0x18) = uVar6;
          uVar6 = *(undefined8 *)&pFVar14->PointCount;
          *(undefined8 *)(puVar16 + 0x20) = *(undefined8 *)&pFVar14->GroupIndex;
          *(undefined8 *)(puVar16 + 0x28) = uVar6;
          uVar6 = *(undefined8 *)&pFVar14->bSimulation;
          *(undefined8 *)(puVar16 + 0x30) = *(undefined8 *)&pFVar14->RaytracingProceduralSplits;
          *(undefined8 *)(puVar16 + 0x38) = uVar6;
          uVar6 = *(undefined8 *)&pFVar14->SourcePointCount;
          *(undefined8 *)(puVar16 + 0x40) = *(undefined8 *)&pFVar14->bPointRemapping;
          *(undefined8 *)(puVar16 + 0x48) = uVar6;
          uVar6 = *(undefined8 *)((longlong)&(pFVar14->PositionOffset).field0_0x0 + 8);
          *(undefined8 *)(puVar16 + 0x50) = *(undefined8 *)&(pFVar14->PositionOffset).field0_0x0;
          *(undefined8 *)(puVar16 + 0x58) = uVar6;
          uVar6 = *(undefined8 *)((longlong)&(pFVar14->PrevPositionOffset).field0_0x0 + 8);
          *(undefined8 *)(puVar16 + 0x60) = *(undefined8 *)&(pFVar14->PrevPositionOffset).field0_0x0
          ;
          *(undefined8 *)(puVar16 + 0x68) = uVar6;
          uVar6 = *(undefined8 *)((pFVar14->LocalToWorldPrimitiveTransform).M[0] + 2);
          *(undefined8 *)(puVar16 + 0x70) =
               *(undefined8 *)(pFVar14->LocalToWorldPrimitiveTransform).M[0];
          *(undefined8 *)(puVar16 + 0x78) = uVar6;
          lVar21 = lVar21 + -1;
          puVar10 = puVar16 + 0x80;
        } while (lVar21 != 0);
        uVar6 = *(undefined8 *)((pFVar14->LocalToWorldPrimitiveTransform).M[1] + 2);
        *(undefined8 *)(puVar16 + 0x80) = *(undefined8 *)pFVar9;
        *(undefined8 *)(puVar16 + 0x88) = uVar6;
        uVar6 = *(undefined8 *)((pFVar14->LocalToWorldPrimitiveTransform).M[2] + 2);
        *(undefined8 *)(puVar16 + 0x90) =
             *(undefined8 *)(pFVar14->LocalToWorldPrimitiveTransform).M[2];
        *(undefined8 *)(puVar16 + 0x98) = uVar6;
        uVar6 = *(undefined8 *)((pFVar14->LocalToWorldPrimitiveTransform).M[3] + 2);
        *(undefined8 *)(puVar16 + 0xa0) =
             *(undefined8 *)(pFVar14->LocalToWorldPrimitiveTransform).M[3];
        *(undefined8 *)(puVar16 + 0xa8) = uVar6;
        uVar6 = *(undefined8 *)(pFVar14->LocalToTranslatedWorldPrimitiveTransform).M[0];
        uVar7 = *(undefined8 *)((pFVar14->LocalToTranslatedWorldPrimitiveTransform).M[0] + 2);
        *(int *)(puVar17 + 0x140) = local_4c8;
        *(undefined8 *)(puVar16 + 0xb0) = uVar6;
        *(undefined8 *)(puVar16 + 0xb8) = uVar7;
        local_4c8 = local_4c8 + *(int *)(puVar17 + 0x28);
        *(int *)(puVar17 + 0x144) = local_4c4;
        local_4c4 = local_4c4 + *(int *)(puVar17 + 0x2c);
        if (bVar11) {
          *(longlong *)(puVar17 + 0x150) = *(longlong *)pFVar20;
          *(longlong *)(puVar17 + 0x158) = *(longlong *)(pFVar20 + 8);
          *(longlong *)(puVar17 + 0x160) = *(longlong *)(pFVar20 + 0x10);
          pFVar15 = *(FRDGBufferUAV **)(pFVar20 + 0x18);
          pFVar20 = pFVar20 + 0x20;
        }
        else {
          pFVar20 = (FScriptContainerElement *)&this->FallbackAttributeBufferUAV;
          *(FRDGBufferSRV **)(puVar17 + 0x150) = this->FallbackPositionBufferSRV;
          *(FRDGBufferSRV **)(puVar17 + 0x158) = this->FallbackPositionBufferSRV;
          *(FRDGBufferUAV **)(puVar17 + 0x160) = this->FallbackPositionBufferUAV;
          pFVar15 = *(FRDGBufferUAV **)pFVar20;
        }
        *(FRDGBufferUAV **)(puVar17 + 0x170) = pFVar15;
        *(longlong *)(puVar17 + 0x168) = *(longlong *)pFVar20;
        FHairGroupPublicData::FVertexFactoryInput::FStrands::~FStrands(&local_4a8.Strands);
        lVar21 = local_4b8;
      }
      iVar8 = local_4c4;
      iVar2 = local_4c8;
      local_4b8 = lVar21 + 0x28;
      uVar19 = uVar19 + 1;
      lVar22 = lVar22 + 1;
    } while ((int)uVar19 < iVar1);
    lVar22 = 0;
    uVar19 = 0;
    do {
      iVar3 = (this->GroupInstances).ArrayNum;
      local_4d0 = (longlong)iVar3;
      uVar18 = 0;
      if ((int)uVar19 < iVar3) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_4d8 = lVar22,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)((this->GroupInstances).AllocatorInstance.Data + lVar22 * 8) != 0) {
        uVar18 = 0;
        if ((int)uVar19 < iVar1) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (local_4d8 = lVar22, local_4d0 = (longlong)iVar1,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                               ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(int *)(local_4b0 + (int)uVar13 * lVar22 + 0x148) = iVar2;
        *(int *)(local_4b0 + (int)uVar13 * lVar22 + 0x14c) = iVar8;
      }
      uVar19 = uVar19 + 1;
      lVar22 = lVar22 + 1;
    } while ((int)uVar19 < iVar1);
  }
  return;
}

// IsValid @ 14e289310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FOptimusGroomStrandsWriteProviderProxy::IsValid
          (FOptimusGroomStrandsWriteProviderProxy *this,FValidationData *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  if (param_1->ParameterStructSize == 0x180) {
    iVar4 = (this->GroupInstances).ArrayNum;
    if (param_1->NumInvocations == iVar4) {
      pFVar8 = (this->GroupInstances).AllocatorInstance.Data;
      pFVar2 = pFVar8 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this->GroupInstances).ArrayNum != iVar4) {
          `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar8 == pFVar2) {
          return true;
        }
        puVar7 = *(undefined8 **)pFVar8;
        if (puVar7 == (undefined8 *)0x0) {
          return false;
        }
        LOCK();
        *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
        UNLOCK();
        lVar5 = puVar7[8];
        if ((((lVar5 == 0) || (lVar6 = puVar7[9], lVar6 == 0)) || (*(int *)(lVar5 + 0x18) == -1)) ||
           (((*(char *)(lVar5 + 0x21) == '\0' || (*(int *)(lVar6 + 0x18) == -1)) ||
            (*(char *)(lVar6 + 0x21) == '\0')))) break;
        piVar1 = (int *)(puVar7 + 1);
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if (piVar1 == (int *)0x0) {
            puVar7 = (undefined8 *)0x0;
          }
          if (puVar7 != (undefined8 *)0x0) {
            (**(code **)*puVar7)(puVar7,1);
          }
        }
        pFVar8 = pFVar8 + 8;
      }
      piVar1 = (int *)(puVar7 + 1);
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        if (piVar1 == (int *)0x0) {
          puVar7 = (undefined8 *)0x0;
        }
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
  }
  return false;
}

