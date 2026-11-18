// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 4

// FOptimusGroomGuidesWriteProviderProxy @ 14e267150

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

FOptimusGroomGuidesWriteProviderProxy * __thiscall
FOptimusGroomGuidesWriteProviderProxy::FOptimusGroomGuidesWriteProviderProxy
          (FOptimusGroomGuidesWriteProviderProxy *this,UMeshComponent *param_1,ulong64 param_2)

{
  int *piVar1;
  longlong *plVar2;
  UGroomComponent *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FOptimusGroomGuidesWriteProviderProxy *pFVar7;
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
  this->_padding_ = (longlong)&___7FOptimusGroomGuidesWriteProviderProxy__6B_;
  (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->GroupInstances).ArrayNum = 0;
  (this->GroupInstances).ArrayMax = 0;
  (this->InstanceResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceResources).ArrayNum = 0;
  (this->InstanceResources).ArrayMax = 0;
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
        pFVar7 = (FOptimusGroomGuidesWriteProviderProxy *)(*pcVar3)();
        return pFVar7;
      }
      if (local_110 == uStack_10c) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_118,(int *)&uStack_10c);
      }
      *(UMeshComponent **)(local_118.Data + (longlong)(int)local_110 * 8) = local_100;
      local_110 = local_110 + 1;
      goto LAB_14e267574;
    }
  }
  local_100 = (UMeshComponent *)0x0;
  if (param_1 == (UMeshComponent *)0x0) {
LAB_14e2672c3:
    param_1 = pUVar12;
  }
  else {
    pUVar6 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) goto LAB_14e2672c3;
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar11) goto LAB_14e267351;
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
LAB_14e267351:
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
      pFVar7 = (FOptimusGroomGuidesWriteProviderProxy *)(*pcVar3)();
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
        goto LAB_14e267460;
        uVar11 = *(uint *)((longlong)plVar15 + (longlong)iVar5 * 4);
      }
      uVar9 = (ulonglong)(~(uVar11 - 1) & uVar11) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_a4 = (int)lVar8;
      uVar11 = local_a4 + -1 + uVar18;
      if ((int)uVar21 < (int)uVar11) {
        uVar11 = uVar21;
      }
    }
LAB_14e267460:
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
        pFVar7 = (FOptimusGroomGuidesWriteProviderProxy *)(*pcVar3)();
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
LAB_14e267574:
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
                pFVar7 = (FOptimusGroomGuidesWriteProviderProxy *)(*pcVar3)();
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
                  pFVar7 = (FOptimusGroomGuidesWriteProviderProxy *)(*pcVar3)();
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
                pFVar7 = (FOptimusGroomGuidesWriteProviderProxy *)(*pcVar3)();
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

// AllocateResources @ 14e26dd00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusGroomGuidesWriteProviderProxy::AllocateResources
          (FOptimusGroomGuidesWriteProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  FRDGImportedBuffer *pFVar7;
  FRDGExternalBuffer *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  FRDGImportedBuffer local_68;
  FRDGImportedBuffer local_50;
  
  piVar1 = &(this->InstanceResources).ArrayMax;
  (this->InstanceResources).ArrayNum = 0;
  local_res10 = param_1;
  if ((this->InstanceResources).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->InstanceResources).AllocatorInstance,0,piVar1);
  }
  pFVar9 = (this->GroupInstances).AllocatorInstance.Data;
  iVar4 = (this->GroupInstances).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->GroupInstances).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar2) break;
    lVar5 = *(longlong *)pFVar9;
    if (lVar5 != 0) {
      iVar6 = (this->InstanceResources).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(this->InstanceResources).AllocatorInstance,piVar1);
      }
      (this->InstanceResources).ArrayNum = iVar6 + 1;
      pFVar3 = (this->InstanceResources).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
      DefaultConstructItems<FOptimusGroomGuidesWriteProviderProxy::FInstanceResources,int>(pFVar3,1)
      ;
      pFVar7 = ::Register(&local_68,local_res10,
                          (FRDGExternalBuffer *)
                          (((ulonglong)*(uint *)(*(longlong *)(lVar5 + 0x20) + 0x198) + 5) * 0x20 +
                          *(longlong *)(lVar5 + 0x20)),CreateSRV,None);
      local_68.UAV = pFVar7->UAV;
      *(FRDGBufferSRV **)pFVar3 = pFVar7->SRV;
      pFVar7 = ::Register(&local_68,local_res10,
                          (FRDGExternalBuffer *)(*(longlong *)(lVar5 + 0x18) + 0x60),CreateSRV,None)
      ;
      local_68.UAV = pFVar7->UAV;
      *(FRDGBufferSRV **)(pFVar3 + 8) = pFVar7->SRV;
      pFVar8 = FHairStrandsDeformedResource::GetDeformerBuffer
                         (*(FHairStrandsDeformedResource **)(lVar5 + 0x20),local_res10);
      pFVar7 = ::Register(&local_50,local_res10,pFVar8,CreateUAV,None);
      local_68.UAV = pFVar7->UAV;
      local_68.Buffer = pFVar7->Buffer;
      local_68.SRV = pFVar7->SRV;
      *(FRDGBufferUAV **)(pFVar3 + 0x10) = local_68.UAV;
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// GatherDispatchData @ 14e272710

void __thiscall
FOptimusGroomGuidesWriteProviderProxy::GatherDispatchData
          (FOptimusGroomGuidesWriteProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uchar *puVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uchar *puVar16;
  int local_res10;
  
  iVar1 = param_1->ParameterBufferOffset;
  puVar5 = param_1->ParameterBuffer;
  iVar2 = param_1->NumInvocations;
  uVar3 = param_1->ParameterBufferStride;
  if ((iVar2 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((int)uVar3 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((uVar3 & 0xf) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar14 = 0;
  uVar11 = 0;
  local_res10 = 0;
  if (0 < iVar2) {
    lVar15 = 0;
    lVar12 = 0;
    do {
      uVar13 = ~uVar11 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar11 < (this->GroupInstances).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar14 = local_res10, bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)((this->GroupInstances).AllocatorInstance.Data + lVar12 * 8);
      if (lVar6 != 0) {
        uVar10 = 0;
        if ((int)uVar11 < iVar2) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                               ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar16 = puVar5 + (int)uVar3 * lVar12 + (longlong)iVar1;
        uVar10 = 0;
        if ((int)uVar11 < (this->InstanceResources).ArrayNum) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (this->InstanceResources).AllocatorInstance.Data;
        iVar4 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x18) + 0x180) + 0xc);
        *(int *)(puVar16 + 0xc) = local_res10;
        iVar14 = local_res10 + iVar4;
        *(int *)(puVar16 + 4) = iVar4;
        *(undefined4 *)puVar16 = *(undefined4 *)(lVar6 + 0x10);
        *(undefined8 *)(puVar16 + 0x10) = *(undefined8 *)(pFVar7 + lVar15);
        *(undefined8 *)(puVar16 + 0x18) = *(undefined8 *)(pFVar7 + lVar15 + 8);
        *(undefined8 *)(puVar16 + 0x20) = *(undefined8 *)(pFVar7 + lVar15 + 0x10);
        local_res10 = iVar14;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
      lVar15 = lVar15 + 0x18;
    } while ((int)uVar11 < iVar2);
    lVar12 = 0;
    uVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar11 < (this->GroupInstances).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar14 = local_res10, bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(longlong *)((this->GroupInstances).AllocatorInstance.Data + lVar12 * 8) != 0) {
        uVar10 = 0;
        if ((int)uVar11 < iVar2) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                               ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
           iVar14 = local_res10, bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(int *)(puVar5 + (int)uVar3 * lVar12 + 8 + (longlong)iVar1) = iVar14;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
    } while ((int)uVar11 < iVar2);
  }
  return;
}

// IsValid @ 14e2890b0

bool __thiscall
FOptimusGroomGuidesWriteProviderProxy::IsValid
          (FOptimusGroomGuidesWriteProviderProxy *this,FValidationData *param_1)

{
  bool bVar1;
  
  if ((param_1->ParameterStructSize == 0x30) &&
     (param_1->NumInvocations == (this->GroupInstances).ArrayNum)) {
    bVar1 = UE::Groom::Private::HaveGuidesInstanceResources(&this->GroupInstances);
    return bVar1;
  }
  return false;
}

