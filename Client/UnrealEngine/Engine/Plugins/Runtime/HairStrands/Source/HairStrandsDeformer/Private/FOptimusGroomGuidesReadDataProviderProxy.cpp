// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 5

// FOptimusGroomGuidesReadDataProviderProxy @ 14e266930

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FOptimusGroomGuidesReadDataProviderProxy * __thiscall
FOptimusGroomGuidesReadDataProviderProxy::FOptimusGroomGuidesReadDataProviderProxy
          (FOptimusGroomGuidesReadDataProviderProxy *this,UMeshComponent *param_1)

{
  TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong *plVar3;
  UGroomComponent *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FOptimusGroomGuidesReadDataProviderProxy *pFVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  UMeshComponent *pUVar13;
  undefined8 *puVar14;
  UMeshComponent *pUVar15;
  longlong *plVar16;
  UMeshComponent *pUVar17;
  uint uVar18;
  undefined8 *puVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  uint local_res20;
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
  
  pUVar13 = (UMeshComponent *)0x0;
  local_res10[0] = 0;
  this->_padding_ = (longlong)&___7FOptimusGroomGuidesReadDataProviderProxy__6B_;
  (this->GroupInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupInstances).ArrayNum = 0;
  (this->GroupInstances).ArrayMax = 0;
  (this->BindingResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingResources).ArrayNum = 0;
  (this->BindingResources).ArrayMax = 0;
  (this->InstanceResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceResources).ArrayNum = 0;
  (this->InstanceResources).ArrayMax = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  uStack_10c = 0;
  uVar21 = 0;
  if (param_1 != (UMeshComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_UGroomComponent_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar7->_padding_)) {
      local_100 = param_1;
      if ((local_118.Data <= (FScriptContainerElement *)&local_100) &&
         (((FScriptContainerElement *)&local_100 < local_118.Data + (longlong)(int)uStack_10c * 8 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FOptimusGroomGuidesReadDataProviderProxy *)(*pcVar4)();
        return pFVar8;
      }
      if (local_110 == uStack_10c) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_118,(int *)&uStack_10c);
      }
      *(UMeshComponent **)(local_118.Data + (longlong)(int)local_110 * 8) = local_100;
      local_110 = local_110 + 1;
      goto LAB_14e266d51;
    }
  }
  local_100 = (UMeshComponent *)0x0;
  if (param_1 == (UMeshComponent *)0x0) {
LAB_14e266a9e:
    param_1 = pUVar13;
  }
  else {
    pUVar7 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar7->_padding_)) goto LAB_14e266a9e;
  }
  if (param_1 != (UMeshComponent *)0x0) {
    plVar3 = &param_1[1]._padding_;
    iVar6 = (int)param_1[1]._padding_;
    local_c8 = &param_1[1]._padding_;
    uStack_cc = 1;
    pUVar15 = pUVar13;
    iStack_bc = 0;
    if (iVar6 != 0) {
      plVar16 = (longlong *)param_1[1]._padding_;
      if ((longlong *)param_1[1]._padding_ == (longlong *)0x0) {
        plVar16 = local_c8;
      }
      pUVar17 = pUVar13;
      uVar21 = 0;
      for (uVar12 = (uint)*plVar16; uVar12 == 0;
          uVar12 = *(uint *)((longlong)plVar16 + (longlong)(int)uVar12 * 4)) {
        uVar12 = (int)pUVar15 + 1;
        pUVar15 = (UMeshComponent *)(ulonglong)uVar12;
        uVar21 = (int)pUVar17 + 0x20;
        pUVar17 = (UMeshComponent *)(ulonglong)uVar21;
        iStack_bc = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar12) goto LAB_14e266b2f;
      }
      uStack_cc = ~(uVar12 - 1) & uVar12;
      uVar10 = (ulonglong)uStack_cc * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_a8 = (int)lVar9;
      iStack_bc = local_a8 + -1 + uVar21;
      if (iVar6 < iStack_bc) {
        iStack_bc = iVar6;
      }
    }
LAB_14e266b2f:
    uVar12 = (uint)param_1[1]._padding_;
    uVar18 = uVar12 & 0xffffffe0;
    iStack_b0 = (int)param_1[1]._padding_ - *(int *)((longlong)&param_1[1]._padding_ + 4);
    uStack_c0 = 0xffffffff;
    TStack_88.CurrentBitIndex = iStack_bc;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    uStack_d0 = SUB84(pUVar15,0);
    TStack_88._padding_ = CONCAT44(uStack_cc,uStack_d0);
    iVar6 = (int)uVar12 >> 5;
    TStack_88._28_4_ = iStack_bc;
    TStack_88.BaseBitIndex = uVar21;
    uStack_68 = CONCAT44(uStack_ac,iStack_b0);
    local_d8 = plVar3;
    local_b8 = uVar21;
    iStack_b4 = iStack_bc;
    local_90 = plVar3;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
    if ((((int)uVar12 < 0) || ((int)param_1[1]._padding_ < (int)uVar12)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FOptimusGroomGuidesReadDataProviderProxy *)(*pcVar4)();
      return pFVar8;
    }
    uVar21 = (uint)param_1[1]._padding_;
    if (uVar12 != uVar21) {
      plVar16 = &param_1[1]._padding_;
      if ((longlong *)param_1[1]._padding_ != (longlong *)0x0) {
        plVar16 = (longlong *)param_1[1]._padding_;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar16 + (longlong)iVar6 * 4);
      while (uVar12 == 0) {
        iVar6 = iVar6 + 1;
        uVar18 = uVar18 + 0x20;
        uVar12 = uVar21;
        if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < iVar6)
        goto LAB_14e266c40;
        uVar12 = *(uint *)((longlong)plVar16 + (longlong)iVar6 * 4);
      }
      uVar10 = (ulonglong)(~(uVar12 - 1) & uVar12) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_a4 = (int)lVar9;
      uVar12 = local_a4 + -1 + uVar18;
      if ((int)uVar21 < (int)uVar12) {
        uVar12 = uVar21;
      }
    }
LAB_14e266c40:
    while( true ) {
      plVar16 = local_90;
      if ((int)local_90[1] - *(int *)((longlong)local_90 + 0x34) != (int)uStack_68) {
        local_res10[0] = local_res10[0] & 0xffffff00;
        `TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_88.CurrentBitIndex == uVar12) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_1[1]._padding_)) &&
         (plVar16 == plVar3)) break;
      local_f8 = *(undefined8 *)(*plVar16 + (longlong)TStack_88.CurrentBitIndex * 0x10);
      if (((local_118.Data <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 < local_118.Data + (longlong)(int)uStack_10c * 8))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FOptimusGroomGuidesReadDataProviderProxy *)(*pcVar4)();
        return pFVar8;
      }
      if (local_110 == uStack_10c) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_118,(int *)&uStack_10c);
      }
      lVar9 = (longlong)(int)local_110;
      local_110 = local_110 + 1;
      *(undefined8 *)(local_118.Data + lVar9 * 8) = local_f8;
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
LAB_14e266d51:
  pTVar1 = &this->GroupInstances;
  pFVar22 = (pTVar1->AllocatorInstance).Data;
  iVar6 = (this->GroupInstances).ArrayNum;
  if ((this->GroupInstances).ArrayMax < 0) {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar22,iVar6);
    (this->GroupInstances).ArrayNum = 0;
    if ((this->GroupInstances).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar1->AllocatorInstance,0,&(this->GroupInstances).ArrayMax);
    }
  }
  else {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar22,iVar6);
    (this->GroupInstances).ArrayNum = 0;
  }
  uVar10 = (ulonglong)(int)local_110;
  local_f0 = local_110;
  pFVar22 = local_118.Data + uVar10 * 8;
  puVar11 = local_60;
  puVar14 = local_58;
  FVar20.Data = local_118.Data;
  local_e8 = pFVar22;
  do {
    local_e0 = FVar20.Data;
    if (local_110 != (uint)uVar10) {
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
      local_res20 = (this_00->HairGroupInstances).ArrayNum;
      uVar21 = 0;
      pFVar22 = local_e8;
      if (local_res20 != 0) {
        do {
          bVar5 = UGroomComponent::IsDeformationEnable(this_00,uVar21);
          if (bVar5) {
            if (((int)uVar21 < 0) || ((this_00->HairGroupInstances).ArrayNum <= (int)uVar21)) {
              pUVar13 = (UMeshComponent *)(ulonglong)((uint)pUVar13 | 2);
              local_a0 = (undefined8 *)0x0;
              puVar19 = (undefined8 *)0x0;
            }
            else {
              pUVar13 = (UMeshComponent *)(ulonglong)((uint)pUVar13 | 1);
              if (((this_00->HairGroupInstances).ArrayNum <= (int)uVar21) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FOptimusGroomGuidesReadDataProviderProxy *)(*pcVar4)();
                return pFVar8;
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
            if ((((ulonglong)pUVar13 & 2) != 0) &&
               (pUVar13 = (UMeshComponent *)(ulonglong)((uint)pUVar13 & 0xfffffffd),
               local_a0 != (undefined8 *)0x0)) {
              piVar2 = (int *)(local_a0 + 1);
              LOCK();
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((iVar6 == 1) && ((piVar2 != (int *)0x0 && (local_a0 != (undefined8 *)0x0)))) {
                (**(code **)*local_a0)(local_a0,1);
              }
            }
            if ((((ulonglong)pUVar13 & 1) != 0) &&
               (pUVar13 = (UMeshComponent *)(ulonglong)((uint)pUVar13 & 0xfffffffe),
               local_98 != (undefined8 *)0x0)) {
              piVar2 = (int *)(local_98 + 1);
              LOCK();
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((iVar6 == 1) && ((piVar2 != (int *)0x0 && (local_98 != (undefined8 *)0x0)))) {
                (**(code **)*local_98)(local_98,1);
              }
            }
            if (puVar19 != (undefined8 *)0x0) {
              if (((int)uVar21 < 0) || ((this_00->HairGroupInstances).ArrayNum <= (int)uVar21)) {
                uVar12 = (uint)pUVar13 | 8;
                puVar14 = (undefined8 *)0x0;
                puVar19 = (undefined8 *)0x0;
              }
              else {
                uVar12 = (uint)pUVar13 | 4;
                if (((this_00->HairGroupInstances).ArrayNum <= (int)uVar21) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FOptimusGroomGuidesReadDataProviderProxy *)(*pcVar4)();
                  return pFVar8;
                }
                puVar11 = *(undefined8 **)
                           ((this_00->HairGroupInstances).AllocatorInstance.Data +
                           (longlong)(int)uVar21 * 8);
                puVar19 = puVar11;
                if (puVar11 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
                  UNLOCK();
                }
              }
              pUVar13 = (UMeshComponent *)(ulonglong)uVar12;
              if (((uVar12 & 8) != 0) &&
                 (pUVar13 = (UMeshComponent *)(ulonglong)(uVar12 & 0xfffffff7),
                 puVar14 != (undefined8 *)0x0)) {
                piVar2 = (int *)(puVar14 + 1);
                LOCK();
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((iVar6 == 1) && (piVar2 != (int *)0x0)) {
                  (**(code **)*puVar14)(puVar14,1);
                }
              }
              if ((((ulonglong)pUVar13 & 4) != 0) &&
                 (pUVar13 = (UMeshComponent *)(ulonglong)((uint)pUVar13 & 0xfffffffb),
                 puVar11 != (undefined8 *)0x0)) {
                piVar2 = (int *)(puVar11 + 1);
                LOCK();
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((iVar6 == 1) && (piVar2 != (int *)0x0)) {
                  (**(code **)*puVar11)(puVar11,1);
                }
              }
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
              pFVar22 = (pTVar1->AllocatorInstance).Data;
              piVar2 = &(this->GroupInstances).ArrayMax;
              local_108 = puVar19;
              if (((pFVar22 <= (FScriptContainerElement *)&local_108) &&
                  ((FScriptContainerElement *)&local_108 < pFVar22 + (longlong)*piVar2 * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FOptimusGroomGuidesReadDataProviderProxy *)(*pcVar4)();
                return pFVar8;
              }
              iVar6 = (this->GroupInstances).ArrayNum;
              if (iVar6 == *piVar2) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&pTVar1->AllocatorInstance,piVar2);
              }
              (this->GroupInstances).ArrayNum = iVar6 + 1;
              pFVar22 = (pTVar1->AllocatorInstance).Data;
              *(undefined8 *)(pFVar22 + (longlong)iVar6 * 8) = 0;
              *(undefined8 **)(pFVar22 + (longlong)iVar6 * 8) = local_108;
              if (local_108 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(local_108 + 1) = *(int *)(local_108 + 1) + 1;
                UNLOCK();
                if (local_108 != (undefined8 *)0x0) {
                  piVar2 = (int *)(local_108 + 1);
                  LOCK();
                  iVar6 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (((iVar6 == 1) && (piVar2 != (int *)0x0)) && (local_108 != (undefined8 *)0x0))
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
        } while (uVar21 < local_res20);
      }
    }
    uVar10 = (ulonglong)local_f0;
    FVar20.Data = FVar20.Data + 8;
  } while( true );
}

// AllocateResources @ 14e26d460

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusGroomGuidesReadDataProviderProxy::AllocateResources
          (FOptimusGroomGuidesReadDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  TArray<FOptimusGroomGuidesReadDataProviderProxy::FInstanceResources,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<FOptimusGroomGuidesReadDataProviderProxy::FBindingResources,TSizedDefaultAllocator<32>_>
  *pTVar2;
  double *pdVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  __m128d _Var21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  FRDGBufferSRV *pFVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  int *piVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  int *piVar32;
  FOptimusGroomGuidesReadDataProviderProxy *pFVar33;
  FScriptContainerElement *pFVar34;
  FScriptContainerElement *pFVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 local_128 [4];
  uint local_124;
  longlong *local_118;
  undefined8 uStack_110;
  FScriptContainerElement *local_108;
  FOptimusGroomGuidesReadDataProviderProxy *local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  
  pTVar1 = &this->InstanceResources;
  (this->InstanceResources).ArrayNum = 0;
  local_100 = this;
  if ((this->InstanceResources).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar1->AllocatorInstance,0,&(this->InstanceResources).ArrayMax);
  }
  pTVar2 = &this->BindingResources;
  (this->BindingResources).ArrayNum = 0;
  if ((this->BindingResources).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,0x10,0,&pTVar2->AllocatorInstance,0,&(this->BindingResources).ArrayMax);
  }
  local_124 = (this->GroupInstances).ArrayNum;
  uVar27 = (ulonglong)(int)local_124;
  pFVar34 = (this->GroupInstances).AllocatorInstance.Data;
  pFVar35 = pFVar34 + uVar27 * 8;
  pFVar33 = this;
  local_108 = pFVar35;
  do {
    piVar29 = &(this->InstanceResources).ArrayMax;
    piVar32 = &(this->BindingResources).ArrayMax;
    if ((pFVar33->GroupInstances).ArrayNum != (int)uVar27) {
      local_128[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_128);
    }
    if (pFVar34 == pFVar35) {
      return;
    }
    lVar6 = *(longlong *)pFVar34;
    if (lVar6 != 0) {
      iVar23 = (this->InstanceResources).ArrayNum;
      if (iVar23 == *piVar29) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&pTVar1->AllocatorInstance,piVar29);
      }
      (this->InstanceResources).ArrayNum = iVar23 + 1;
      pFVar30 = (pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 0x28;
      DefaultConstructItems<FOptimusGroomGuidesReadDataProviderProxy::FInstanceResources,int>
                (pFVar30,1);
      pFVar25 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar6 + 0x18) + 0x60));
      *(FRDGBufferSRV **)(pFVar30 + 8) = pFVar25;
      pFVar25 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar6 + 0x18) + 0x160));
      *(FRDGBufferSRV **)pFVar30 = pFVar25;
      pFVar25 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar6 + 0x18) + 0x140));
      *(FRDGBufferSRV **)(pFVar30 + 0x10) = pFVar25;
      pFVar25 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar6 + 0x18) + 0x100));
      *(FRDGBufferSRV **)(pFVar30 + 0x18) = pFVar25;
      pFVar25 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(*(longlong *)(lVar6 + 0x18) + 0x120));
      *(FRDGBufferSRV **)(pFVar30 + 0x20) = pFVar25;
      iVar23 = (this->BindingResources).ArrayNum;
      if (iVar23 == *piVar32) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10a0,&pTVar2->AllocatorInstance,piVar32);
      }
      (this->BindingResources).ArrayNum = iVar23 + 1;
      pFVar30 = (pTVar2->AllocatorInstance).Data + (longlong)iVar23 * 0xa0;
      DefaultConstructItems<FOptimusGroomGuidesReadDataProviderProxy::FBindingResources,int>
                (pFVar30,1);
      if (*(int *)(lVar6 + 0x46c) == 2) {
        plVar7 = *(longlong **)(lVar6 + 0x28);
        uVar31 = (uint)*(float *)(*(longlong *)(lVar6 + 0x460) + 0x50c);
        uVar24 = 0;
        if ((int)uVar31 < (int)plVar7[1]) {
          uVar24 = ~uVar31 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar26 = *(longlong *)(*plVar7 + (longlong)(int)uVar31 * 8);
        local_118 = *(longlong **)(lVar6 + 0x30);
        uVar31 = (uint)*(float *)(*(longlong *)(lVar6 + 0x460) + 0x50c);
        uVar24 = 0;
        if ((int)uVar31 < (int)local_118[1]) {
          uVar24 = ~uVar31 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar28 = *(longlong *)(*local_118 + (longlong)(int)uVar31 * 8);
        pFVar25 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar26 + 0x88));
        *(FRDGBufferSRV **)(pFVar30 + 0x98) = pFVar25;
        pFVar25 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar26 + 200));
        *(FRDGBufferSRV **)(pFVar30 + 0x80) = pFVar25;
        bVar22 = IsHairStrandContinuousDecimationReorderingEnabled();
        if (bVar22) {
          lVar28 = (ulonglong)*(uint *)(lVar28 + 0x130) * 0x20 + lVar28;
        }
        pFVar25 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar28 + 0x68));
        *(FRDGBufferSRV **)(pFVar30 + 0x88) = pFVar25;
        pFVar25 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar26 + 0xa8));
        *(FRDGBufferSRV **)(pFVar30 + 0x90) = pFVar25;
        pFVar35 = local_108;
      }
      _Var21.m128d_f64 = GlobalVectorConstants::DoubleOne2d.m128d_f64;
      lVar26 = 0x2c0;
      if (*(int *)(lVar6 + 0x46c) != 2) {
        lVar26 = 0x200;
      }
      pdVar3 = (double *)(lVar26 + 0x10 + lVar6);
      dVar16 = *pdVar3;
      dVar17 = pdVar3[1];
      dVar10 = *(double *)(lVar26 + lVar6);
      dVar18 = ((double *)(lVar26 + lVar6))[1];
      dVar12 = *(double *)(lVar26 + lVar6);
      auVar5 = *(undefined1 (*) [16])(lVar26 + 0x40 + lVar6);
      dVar15 = dVar18 + dVar18;
      dVar11 = dVar10 * (dVar10 + dVar10);
      dVar40 = dVar16 + dVar16;
      auVar43 = blendpd(auVar5,*(undefined1 (*) [16])(lVar26 + 0x50 + lVar6),2);
      dVar36 = dVar15 * dVar12;
      dVar38 = dVar40 * ((double *)(lVar26 + lVar6))[1];
      dVar13 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
      pdVar3 = (double *)(lVar26 + 0x40 + lVar6);
      dVar19 = pdVar3[1];
      dVar9 = dVar17 * (dVar10 + dVar10);
      dVar12 = dVar12 * dVar40;
      pdVar4 = (double *)(lVar26 + 0x40 + lVar6);
      dVar37 = *pdVar4;
      dVar39 = pdVar4[1];
      dVar42 = *(double *)(lVar26 + 0x50 + lVar6) * (dVar38 - dVar9);
      dVar10 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
      dVar41 = *(double *)(lVar26 + 0x50 + lVar6);
      dVar14 = (dVar15 * dVar17 + dVar12) * *(double *)(lVar26 + 0x50 + lVar6);
      dVar44 = *(double *)(lVar26 + 0x30 + lVar6);
      auVar45._8_4_ = SUB84(dVar42,0);
      auVar45._0_8_ = dVar14;
      auVar45._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      pdVar4 = (double *)(lVar26 + 0x20 + lVar6);
      dVar42 = *pdVar4;
      dVar20 = pdVar4[1];
      dStack_f0 = auVar45._8_8_;
      *(float *)(pFVar30 + 0x40) =
           (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                   (dVar16 * dVar40 + dVar18 * dVar15)) * *pdVar3);
      *(float *)(pFVar30 + 0x44) = (float)(auVar5._8_8_ * (dVar36 - dVar17 * dVar40));
      *(float *)(pFVar30 + 0x48) = (float)dVar14;
      *(float *)(pFVar30 + 0x4c) = (float)dVar42;
      *(float *)(pFVar30 + 0x50) = (float)((dVar17 * dVar40 + dVar36) * dVar37);
      *(float *)(pFVar30 + 0x54) = (float)((dVar13 - (dVar16 * dVar40 + dVar11)) * dVar19);
      *(float *)(pFVar30 + 0x58) = (float)dStack_f0;
      *(float *)(pFVar30 + 0x5c) = (float)dVar20;
      *(float *)(pFVar30 + 0x60) = (float)(auVar43._0_8_ * (dVar12 - dVar15 * dVar17));
      *(float *)(pFVar30 + 100) = (float)((dVar9 + dVar38) * dVar39);
      *(float *)(pFVar30 + 0x68) = (float)((dVar10 - (dVar11 + dVar18 * dVar15)) * dVar41);
      *(float *)(pFVar30 + 0x6c) = (float)dVar44;
      *(undefined4 *)(pFVar30 + 0x70) = 0;
      *(undefined4 *)(pFVar30 + 0x74) = 0;
      *(undefined4 *)(pFVar30 + 0x78) = 0;
      *(float *)(pFVar30 + 0x7c) = (float)_Var21.m128d_f64[1];
      _Var21 = GlobalVectorConstants::DoubleOne2d;
      lVar26 = 0x260;
      if (*(int *)(lVar6 + 0x46c) != 2) {
        lVar26 = 0x1a0;
      }
      pdVar3 = (double *)(lVar26 + 0x10 + lVar6);
      local_e8 = *pdVar3;
      dStack_e0 = pdVar3[1];
      dVar10 = *(double *)(lVar26 + lVar6);
      dVar13 = ((double *)(lVar26 + lVar6))[1];
      dVar11 = *(double *)(lVar26 + lVar6);
      dVar44 = dVar13 + dVar13;
      dVar41 = local_e8 + local_e8;
      dVar9 = dVar10 * (dVar10 + dVar10);
      dVar37 = dVar44 * dVar11;
      dVar39 = dVar41 * ((double *)(lVar26 + lVar6))[1];
      dVar12 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
      pdVar3 = (double *)(lVar26 + 0x40 + lVar6);
      dVar14 = pdVar3[1];
      dVar10 = dStack_e0 * (dVar10 + dVar10);
      dVar11 = dVar11 * dVar41;
      pdVar4 = (double *)(lVar26 + 0x20 + lVar6);
      dVar15 = *pdVar4;
      dVar16 = pdVar4[1];
      auVar5 = *(undefined1 (*) [16])(lVar26 + 0x40 + lVar6);
      auVar45 = blendpd(auVar5,*(undefined1 (*) [16])(lVar26 + 0x50 + lVar6),2);
      pdVar4 = (double *)(lVar26 + 0x40 + lVar6);
      dVar17 = *pdVar4;
      dVar18 = pdVar4[1];
      dStack_f0 = *(double *)(lVar26 + 0x50 + lVar6) * (dVar39 - dVar10);
      local_118 = (longlong *)
                  ((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar9 + dVar13 * dVar44)) *
                  *(double *)(lVar26 + 0x50 + lVar6));
      uStack_110 = 0;
      local_f8 = (dVar44 * dStack_e0 + dVar11) * *(double *)(lVar26 + 0x50 + lVar6);
      dVar19 = *(double *)(lVar26 + 0x30 + lVar6);
      *(float *)pFVar30 =
           (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                   (local_e8 * dVar41 + dVar13 * dVar44)) * *pdVar3);
      *(float *)(pFVar30 + 4) = (float)(auVar5._8_8_ * (dVar37 - dStack_e0 * dVar41));
      *(float *)(pFVar30 + 8) = (float)local_f8;
      *(float *)(pFVar30 + 0xc) = (float)dVar15;
      *(float *)(pFVar30 + 0x10) = (float)((dStack_e0 * dVar41 + dVar37) * dVar17);
      *(float *)(pFVar30 + 0x14) = (float)((dVar12 - (local_e8 * dVar41 + dVar9)) * dVar14);
      *(float *)(pFVar30 + 0x18) = (float)dStack_f0;
      *(float *)(pFVar30 + 0x1c) = (float)dVar16;
      *(float *)(pFVar30 + 0x20) = (float)(auVar45._0_8_ * (dVar11 - dVar44 * dStack_e0));
      *(float *)(pFVar30 + 0x24) = (float)((dVar10 + dVar39) * dVar18);
      *(float *)(pFVar30 + 0x28) = (float)(double)local_118;
      *(float *)(pFVar30 + 0x2c) = (float)dVar19;
      *(undefined8 *)(pFVar30 + 0x30) = 0;
      *(ulonglong *)(pFVar30 + 0x38) = (ulonglong)(uint)(float)_Var21.m128d_f64[1] << 0x20;
    }
    pFVar34 = pFVar34 + 8;
    uVar27 = (ulonglong)local_124;
    pFVar33 = local_100;
  } while( true );
}

// GatherDispatchData @ 14e272210

void __thiscall
FOptimusGroomGuidesReadDataProviderProxy::GatherDispatchData
          (FOptimusGroomGuidesReadDataProviderProxy *this,FDispatchData *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uchar *puVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  undefined8 uVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  int local_res8;
  int local_res10;
  longlong local_68;
  
  if ((param_1->NumInvocations != (this->GroupInstances).ArrayNum) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDispatchData.NumInvocations == GroupInstances.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomGuidesRead.cpp"
                          ,0x111,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar5 = param_1->ParameterBufferOffset;
  puVar10 = param_1->ParameterBuffer;
  uVar6 = param_1->ParameterBufferStride;
  iVar7 = param_1->NumInvocations;
  if ((iVar7 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x3f,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if (((int)uVar6 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x40,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if (((uVar6 & 0xf) != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements % alignof(ElementType) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x41,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  dVar16 = __real_3fe0000000000000;
  uVar22 = 0;
  lVar23 = 0;
  local_res8 = 0;
  local_res10 = 0;
  if (0 < iVar7) {
    lVar20 = 0;
    local_68 = 0;
    do {
      uVar19 = ~uVar22 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar22 < (this->GroupInstances).ArrayNum) {
        uVar18 = uVar19;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      lVar11 = *(longlong *)((this->GroupInstances).AllocatorInstance.Data + lVar23 * 8);
      if (lVar11 != 0) {
        uVar18 = 0;
        if ((int)uVar22 < iVar7) {
          uVar18 = uVar19;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                                ,0x96,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar17)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar21 = (int)uVar6 * lVar23;
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x180) + 0xc);
        *(int *)(puVar10 + lVar21 + iVar5) = iVar8;
        iVar9 = *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x180) + 8);
        *(int *)(puVar10 + lVar21 + 8 + (longlong)iVar5) = local_res8;
        local_res8 = local_res8 + iVar8;
        *(int *)(puVar10 + lVar21 + 4 + (longlong)iVar5) = iVar9;
        *(uint *)(puVar10 + lVar21 + 0x18 + (longlong)iVar5) = uVar22;
        *(int *)(puVar10 + lVar21 + 0xc + (longlong)iVar5) = local_res10;
        local_res10 = local_res10 + iVar9;
        lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x180);
        dVar1 = *(double *)(lVar12 + 0x48);
        dVar2 = *(double *)(lVar12 + 0x30);
        dVar3 = *(double *)(lVar12 + 0x50);
        dVar4 = *(double *)(lVar12 + 0x38);
        *(float *)(puVar10 + lVar21 + 0x20 + (longlong)iVar5) =
             (float)((*(double *)(lVar12 + 0x40) + *(double *)(lVar12 + 0x28)) * dVar16);
        *(float *)(puVar10 + lVar21 + 0x24 + (longlong)iVar5) = (float)((dVar1 + dVar2) * dVar16);
        *(float *)(puVar10 + lVar21 + 0x28 + (longlong)iVar5) = (float)((dVar3 + dVar4) * dVar16);
        uVar18 = 0;
        if ((int)uVar22 < (this->InstanceResources).ArrayNum) {
          uVar18 = uVar19;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar13 = (this->InstanceResources).AllocatorInstance.Data;
        *(undefined8 *)(puVar10 + lVar21 + 0x30 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + local_68 + 8);
        *(undefined8 *)(puVar10 + lVar21 + 0x38 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + local_68);
        *(undefined8 *)(puVar10 + lVar21 + 0x40 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + local_68 + 0x10);
        *(undefined8 *)(puVar10 + lVar21 + 0x48 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + local_68 + 0x18);
        *(undefined8 *)(puVar10 + lVar21 + 0x50 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + local_68 + 0x20);
        uVar18 = 0;
        if ((int)uVar22 < (this->BindingResources).ArrayNum) {
          uVar18 = uVar19;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar13 = (this->BindingResources).AllocatorInstance.Data;
        if (*(int *)(lVar11 + 0x46c) == 2) {
          *(undefined8 *)(puVar10 + lVar21 + 0xf8 + (longlong)iVar5) =
               *(undefined8 *)(pFVar13 + lVar20 + 0x98);
          *(undefined8 *)(puVar10 + lVar21 + 0xf0 + (longlong)iVar5) =
               *(undefined8 *)(pFVar13 + lVar20 + 0x90);
          *(undefined8 *)(puVar10 + lVar21 + 0xe0 + (longlong)iVar5) =
               *(undefined8 *)(pFVar13 + lVar20 + 0x80);
          *(undefined8 *)(puVar10 + lVar21 + 0xe8 + (longlong)iVar5) =
               *(undefined8 *)(pFVar13 + lVar20 + 0x88);
        }
        uVar15 = *(undefined8 *)(pFVar13 + lVar20 + 0x40 + 8);
        *(undefined8 *)(puVar10 + lVar21 + 0xa0 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + lVar20 + 0x40);
        *(undefined8 *)(puVar10 + lVar21 + 0xa0 + (longlong)iVar5 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar13 + lVar20 + 0x50 + 8);
        *(undefined8 *)(puVar10 + lVar21 + 0xb0 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + lVar20 + 0x50);
        *(undefined8 *)(puVar10 + lVar21 + 0xb0 + (longlong)iVar5 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar13 + lVar20 + 0x60 + 8);
        *(undefined8 *)(puVar10 + lVar21 + 0xc0 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + lVar20 + 0x60);
        *(undefined8 *)(puVar10 + lVar21 + 0xc0 + (longlong)iVar5 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar13 + lVar20 + 0x70 + 8);
        *(undefined8 *)(puVar10 + lVar21 + 0xd0 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + lVar20 + 0x70);
        *(undefined8 *)(puVar10 + lVar21 + 0xd0 + (longlong)iVar5 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar13 + lVar20 + 8);
        *(undefined8 *)(puVar10 + lVar21 + 0x60 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + lVar20);
        *(undefined8 *)(puVar10 + lVar21 + 0x60 + (longlong)iVar5 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar13 + lVar20 + 0x10 + 8);
        *(undefined8 *)(puVar10 + lVar21 + 0x70 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + lVar20 + 0x10);
        *(undefined8 *)(puVar10 + lVar21 + 0x70 + (longlong)iVar5 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar13 + lVar20 + 0x20 + 8);
        *(undefined8 *)(puVar10 + lVar21 + 0x80 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + lVar20 + 0x20);
        *(undefined8 *)(puVar10 + lVar21 + 0x80 + (longlong)iVar5 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar13 + lVar20 + 0x30 + 8);
        *(undefined8 *)(puVar10 + lVar21 + 0x90 + (longlong)iVar5) =
             *(undefined8 *)(pFVar13 + lVar20 + 0x30);
        *(undefined8 *)(puVar10 + lVar21 + 0x90 + (longlong)iVar5 + 8) = uVar15;
      }
      local_68 = local_68 + 0x28;
      uVar22 = uVar22 + 1;
      lVar23 = lVar23 + 1;
      lVar20 = lVar20 + 0xa0;
    } while ((int)uVar22 < iVar7);
    lVar23 = 0;
    uVar22 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar22 < (this->GroupInstances).ArrayNum) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if (*(longlong *)((this->GroupInstances).AllocatorInstance.Data + lVar23 * 8) != 0) {
        uVar18 = 0;
        if ((int)uVar22 < iVar7) {
          uVar18 = ~uVar22 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                                ,0x96,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar17)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        *(int *)(puVar10 + (int)uVar6 * lVar23 + 0x10 + (longlong)iVar5) = local_res8;
        *(int *)(puVar10 + (int)uVar6 * lVar23 + 0x14 + (longlong)iVar5) = local_res10;
      }
      uVar22 = uVar22 + 1;
      lVar23 = lVar23 + 1;
    } while ((int)uVar22 < iVar7);
  }
  return;
}

// GatherPermutations @ 14e273ba0

void __thiscall
FOptimusGroomGuidesReadDataProviderProxy::GatherPermutations
          (FOptimusGroomGuidesReadDataProviderProxy *this,FPermutationData *param_1)

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
  if ((*piVar7 < `public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                        ::__l2::Name,L"ENABLE_SKINNED_TRANSFORM");
    atexit(`FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds'::__l2::
           _dynamic_atexit_destructor_for__Name__);
    _Init_thread_footer(&`public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar9 = 0;
  if ((*piVar7 < `public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    iVar6 = `public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l2::Name.Data.ArrayNum + -1;
    FVar2 = `public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l2::Name.Data.AllocatorInstance;
    if (`public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
        ::__l2::Name.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    `public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
    ::__l2::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    _Init_thread_footer(&`public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  uVar4 = FComputeKernelPermutationVector::GetPermutationBits
                    (this_00,&`public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                              ::__l2::Name,
                     `public:___cdecl_FOptimusGroomGuidesReadPermutationIds::FOptimusGroomGuidesReadPermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
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

// IsValid @ 14e289060

bool __thiscall
FOptimusGroomGuidesReadDataProviderProxy::IsValid
          (FOptimusGroomGuidesReadDataProviderProxy *this,FValidationData *param_1)

{
  bool bVar1;
  
  if ((param_1->ParameterStructSize == 0x100) &&
     (param_1->NumInvocations == (this->GroupInstances).ArrayNum)) {
    bVar1 = UE::Groom::Private::HaveGuidesInstanceResources(&this->GroupInstances);
    if (bVar1) {
      bVar1 = UE::Groom::Private::HaveGuidesSkinnedResources(&this->GroupInstances);
      return bVar1;
    }
  }
  return false;
}

