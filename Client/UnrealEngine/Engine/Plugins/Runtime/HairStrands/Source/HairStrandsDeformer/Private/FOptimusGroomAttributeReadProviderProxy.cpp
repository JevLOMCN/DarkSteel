// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 6

// FOptimusGroomAttributeReadProviderProxy @ 14e264290

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

FOptimusGroomAttributeReadProviderProxy * __thiscall
FOptimusGroomAttributeReadProviderProxy::FOptimusGroomAttributeReadProviderProxy
          (FOptimusGroomAttributeReadProviderProxy *this,UMeshComponent *param_1,FName *param_2,
          EOptimusGroomExecDomain param_3,EOptimusGroomAttributeTypes param_4)

{
  TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  EOptimusGroomExecDomain EVar5;
  UGroomComponent *pUVar6;
  TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements> *pTVar7;
  longlong lVar8;
  code *pcVar9;
  UGroomComponent *pUVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  UClass *pUVar14;
  FOptimusGroomAttributeReadProviderProxy *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  FName FVar19;
  FRefCountBase *pFVar20;
  FRefCountBase *pFVar21;
  FScriptContainerElement *pFVar22;
  UMeshComponent *pUVar23;
  undefined8 *puVar24;
  ForAnyElementType FVar25;
  FRefCountBase *pFVar26;
  uint uVar27;
  UMeshComponent *pUVar28;
  longlong *plVar29;
  UMeshComponent *pUVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  uint uVar33;
  undefined8 *puVar34;
  FRefCountBase *pFVar35;
  FRefCountBase *pFVar36;
  FName FVar37;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_2f0;
  ForAnyElementType local_2e8;
  uint local_2e0;
  uint uStack_2dc;
  undefined1 local_2d8 [8];
  FScriptContainerElement *local_2d0;
  uint local_2c8;
  uint local_2c4;
  ForAnyElementType local_2c0;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  uint local_2ac;
  int local_2a8 [2];
  FGroupElements local_2a0;
  UGroomComponent *local_270;
  FRefCountBase *local_268;
  FGroupElements local_260;
  UMeshComponent *local_230;
  FRefCountBase *local_228;
  FRefCountBase *local_220;
  FRefCountBase *local_218;
  undefined8 local_210;
  FScriptContainerElement *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  int local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  int local_1d8;
  longlong *local_1d0;
  undefined1 auStack_1c8 [32];
  int iStack_1a8;
  int iStack_1a4;
  undefined1 local_1a0 [56];
  undefined1 local_168 [56];
  FRefCountBase *local_130;
  FRefCountBase *local_128;
  FRefCountBase *local_120;
  FRefCountBase *local_118;
  FRefCountBase *local_110;
  FRefCountBase *local_108;
  undefined8 *local_100;
  FRefCountBase *local_f8;
  FRefCountBase *local_f0;
  FRefCountBase *local_e8;
  undefined1 local_e0 [56];
  undefined1 local_a8 [84];
  undefined4 local_54;
  
  pUVar23 = (UMeshComponent *)0x0;
  local_res20[0] = 0;
  (this->GroupInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupInstances).ArrayNum = 0;
  (this->GroupInstances).ArrayMax = 0;
  (this->GroupElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupElements).ArrayNum = 0;
  (this->GroupElements).ArrayMax = 0;
  (this->NumElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumElements).ArrayNum = 0;
  (this->NumElements).ArrayMax = 0;
  (this->AttributeValuesResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeValuesResources).ArrayNum = 0;
  (this->AttributeValuesResources).ArrayMax = 0;
  (this->IndexMappingResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexMappingResources).ArrayNum = 0;
  (this->IndexMappingResources).ArrayMax = 0;
  (this->bHasIndexMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->bHasIndexMapping).ArrayNum = 0;
  (this->bHasIndexMapping).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FOptimusGroomAttributeReadProviderProxy__6B_;
  (this->GroomAttributeName).ComparisonIndex = 0;
  (this->GroomAttributeName).Number = 0;
  this->GroomAttributeGroup = GuidesPoints;
  this->GroomAttributeType = Float;
  this->FallbackStructuredSRV = (FRDGBufferSRV *)0x0;
  this->GroomAttributeName = *param_2;
  this->GroomAttributeType = param_4;
  this->GroomAttributeGroup = param_3;
  local_2e8.Data = (FScriptContainerElement *)0x0;
  local_2e0 = 0;
  uStack_2dc = 0;
  if (param_1 == (UMeshComponent *)0x0) {
LAB_14e26440b:
    local_230 = (UMeshComponent *)0x0;
    if (param_1 == (UMeshComponent *)0x0) {
LAB_14e264437:
      param_1 = pUVar23;
    }
    else {
      pUVar14 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
      iVar12 = (int)pUVar14->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar12) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
          &pUVar14->_padding_)) goto LAB_14e264437;
    }
    if (param_1 != (UMeshComponent *)0x0) {
      plVar4 = &param_1[1]._padding_;
      iVar12 = (int)param_1[1]._padding_;
      local_2a0.GroupOffsets.AllocatorInstance.Data =
           (FScriptContainerElement *)&param_1[1]._padding_;
      local_2a0.GroupIndices.ArrayMax = 1;
      pUVar28 = pUVar23;
      pUVar30 = pUVar23;
      local_2a0.GroupOffsets.ArrayMax = 0;
      if (iVar12 != 0) {
        plVar29 = (longlong *)param_1[1]._padding_;
        if ((longlong *)param_1[1]._padding_ == (longlong *)0x0) {
          plVar29 = (longlong *)local_2a0.GroupOffsets.AllocatorInstance.Data;
        }
        for (uVar33 = (uint)*plVar29; uVar33 == 0;
            uVar33 = *(uint *)((longlong)plVar29 + (longlong)(int)uVar33 * 4)) {
          uVar33 = (int)pUVar28 + 1;
          pUVar28 = (UMeshComponent *)(ulonglong)uVar33;
          pUVar30 = (UMeshComponent *)(ulonglong)((int)pUVar30 + 0x20);
          local_2a0.GroupOffsets.ArrayMax = iVar12;
          if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar33)
          goto LAB_14e2644c3;
        }
        local_2a0.GroupIndices.ArrayMax = ~(uVar33 - 1) & uVar33;
        uVar17 = (ulonglong)(uint)local_2a0.GroupIndices.ArrayMax * 2 + 1;
        lVar16 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1d8 = (int)lVar16;
        local_2a0.GroupOffsets.ArrayMax = (int)pUVar30 + -1 + local_1d8;
        if (iVar12 < local_2a0.GroupOffsets.ArrayMax) {
          local_2a0.GroupOffsets.ArrayMax = iVar12;
        }
      }
LAB_14e2644c3:
      uVar33 = (uint)param_1[1]._padding_;
      uVar27 = uVar33 & 0xffffffe0;
      iStack_1a8 = (int)param_1[1]._padding_ - *(int *)((longlong)&param_1[1]._padding_ + 4);
      local_2a0.GroupIndices.ArrayNum = (int)pUVar28;
      local_2a0.GroupInstances.ArrayNum = iStack_1a8;
      local_2a0.GroupOffsets.ArrayNum = 0xffffffff;
      local_2a0.GroupInstances.AllocatorInstance.Data._4_4_ = local_54;
      local_2a0.GroupInstances.AllocatorInstance.Data._0_4_ = (int)pUVar30;
      auStack_1c8._0_4_ = (int)pUVar28;
      auStack_1c8._4_4_ = local_2a0.GroupIndices.ArrayMax;
      iVar12 = (int)uVar33 >> 5;
      auStack_1c8._16_4_ = 0xffffffff;
      auStack_1c8._20_4_ = local_2a0.GroupOffsets.ArrayMax;
      auStack_1c8._24_8_ = local_2a0.GroupInstances.AllocatorInstance.Data;
      iStack_1a4 = local_2a0.GroupInstances.ArrayMax;
      local_2a0.GroupIndices.AllocatorInstance.Data = (FScriptContainerElement *)plVar4;
      local_1d0 = plVar4;
      auStack_1c8._8_8_ = local_2a0.GroupOffsets.AllocatorInstance.Data;
      if ((((int)uVar33 < 0) || ((int)param_1[1]._padding_ < (int)uVar33)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
        return pFVar15;
      }
      uVar32 = (uint)param_1[1]._padding_;
      if (uVar33 != uVar32) {
        plVar29 = &param_1[1]._padding_;
        if ((longlong *)param_1[1]._padding_ != (longlong *)0x0) {
          plVar29 = (longlong *)param_1[1]._padding_;
        }
        uVar33 = -1 << ((byte)uVar33 & 0x1f) & *(uint *)((longlong)plVar29 + (longlong)iVar12 * 4);
        while (uVar33 == 0) {
          iVar12 = iVar12 + 1;
          uVar27 = uVar27 + 0x20;
          uVar33 = uVar32;
          if ((int)(((int)(uVar32 - 1) >> 0x1f & 0x1fU) + (uVar32 - 1)) >> 5 < iVar12)
          goto LAB_14e2645d0;
          uVar33 = *(uint *)((longlong)plVar29 + (longlong)iVar12 * 4);
        }
        uVar17 = (ulonglong)(~(uVar33 - 1) & uVar33) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1f0 = (int)lVar16;
        uVar33 = (uVar27 - 1) + local_1f0;
        if ((int)uVar32 < (int)uVar33) {
          uVar33 = uVar32;
        }
      }
LAB_14e2645d0:
      while( true ) {
        plVar29 = local_1d0;
        if ((int)local_1d0[1] - *(int *)((longlong)local_1d0 + 0x34) != iStack_1a8) {
          param_4 = None;
          `TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&param_4);
        }
        if (((auStack_1c8._20_4_ == uVar33) &&
            ((longlong *)auStack_1c8._8_8_ == &param_1[1]._padding_)) && (plVar29 == plVar4)) break;
        local_210 = *(undefined8 *)(*plVar29 + (longlong)(int)auStack_1c8._20_4_ * 0x10);
        if (((local_2e8.Data <= (FScriptContainerElement *)&local_210) &&
            ((FScriptContainerElement *)&local_210 < local_2e8.Data + (longlong)(int)uStack_2dc * 8)
            ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
          return pFVar15;
        }
        if (local_2e0 == uStack_2dc) {
          local_2e0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_2e8,(int *)&uStack_2dc);
        }
        lVar16 = (longlong)(int)local_2e0;
        local_2e0 = local_2e0 + 1;
        *(undefined8 *)(local_2e8.Data + lVar16 * 8) = local_210;
        auStack_1c8._16_4_ = auStack_1c8._16_4_ & ~auStack_1c8._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1c8);
      }
    }
  }
  else {
    pUVar14 = Z_Construct_UClass_UGroomComponent_NoRegister();
    iVar12 = (int)pUVar14->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar14->_padding_)) goto LAB_14e26440b;
    local_230 = param_1;
    if (((local_2e8.Data <= (FScriptContainerElement *)&local_230) &&
        ((FScriptContainerElement *)&local_230 < local_2e8.Data + (longlong)(int)uStack_2dc * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
      return pFVar15;
    }
    if (local_2e0 == uStack_2dc) {
      local_2e0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_2e8,(int *)&uStack_2dc);
    }
    *(UMeshComponent **)(local_2e8.Data + (longlong)(int)local_2e0 * 8) = local_230;
    local_2e0 = local_2e0 + 1;
  }
  pTVar1 = &this->GroupInstances;
  pFVar18 = (pTVar1->AllocatorInstance).Data;
  iVar12 = (this->GroupInstances).ArrayNum;
  if ((this->GroupInstances).ArrayMax < 0) {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar18,iVar12);
    (this->GroupInstances).ArrayNum = 0;
    if ((this->GroupInstances).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar1->AllocatorInstance,0,&(this->GroupInstances).ArrayMax);
    }
  }
  else {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar18,iVar12);
    (this->GroupInstances).ArrayNum = 0;
  }
  uVar17 = (ulonglong)(int)local_2e0;
  local_2c8 = local_2e0;
  pFVar18 = local_2e8.Data + uVar17 * 8;
  pFVar20 = local_108;
  FVar25.Data = local_2e8.Data;
  puVar34 = local_100;
  local_2d0 = pFVar18;
  while( true ) {
    if (local_2e0 != (uint)uVar17) {
      local_res20[0] = local_res20[0] & 0xffffff00;
      `TCheckedPointerIterator<UGroomComponent_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar25.Data == pFVar18) break;
    pUVar6 = *(UGroomComponent **)FVar25.Data;
    if (pUVar6 != (UGroomComponent *)0x0) {
      uVar33 = (pUVar6->HairGroupInstances).ArrayNum;
      uVar27 = 0;
      pFVar18 = local_2d0;
      if (uVar33 != 0) {
        do {
          bVar11 = UGroomComponent::IsDeformationEnable(pUVar6,uVar27);
          if (bVar11) {
            if (((int)uVar27 < 0) || ((pUVar6->HairGroupInstances).ArrayNum <= (int)uVar27)) {
              pUVar23 = (UMeshComponent *)(ulonglong)((uint)pUVar23 | 2);
              local_1e8 = (undefined8 *)0x0;
              puVar24 = (undefined8 *)0x0;
            }
            else {
              pUVar23 = (UMeshComponent *)(ulonglong)((uint)pUVar23 | 1);
              if (((pUVar6->HairGroupInstances).ArrayNum <= (int)uVar27) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
                return pFVar15;
              }
              puVar24 = *(undefined8 **)
                         ((pUVar6->HairGroupInstances).AllocatorInstance.Data +
                         (longlong)(int)uVar27 * 8);
              local_1e0 = puVar24;
              if (puVar24 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                UNLOCK();
              }
            }
            if ((((ulonglong)pUVar23 & 2) != 0) &&
               (pUVar23 = (UMeshComponent *)(ulonglong)((uint)pUVar23 & 0xfffffffd),
               local_1e8 != (undefined8 *)0x0)) {
              piVar2 = (int *)(local_1e8 + 1);
              LOCK();
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((iVar12 == 1) && ((piVar2 != (int *)0x0 && (local_1e8 != (undefined8 *)0x0)))) {
                (**(code **)*local_1e8)(local_1e8,1);
              }
            }
            if ((((ulonglong)pUVar23 & 1) != 0) &&
               (pUVar23 = (UMeshComponent *)(ulonglong)((uint)pUVar23 & 0xfffffffe),
               local_1e0 != (undefined8 *)0x0)) {
              piVar2 = (int *)(local_1e0 + 1);
              LOCK();
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((iVar12 == 1) && ((piVar2 != (int *)0x0 && (local_1e0 != (undefined8 *)0x0)))) {
                (**(code **)*local_1e0)(local_1e0,1);
              }
            }
            if (puVar24 != (undefined8 *)0x0) {
              if (((int)uVar27 < 0) || ((pUVar6->HairGroupInstances).ArrayNum <= (int)uVar27)) {
                uVar32 = (uint)pUVar23 | 8;
                puVar34 = (undefined8 *)0x0;
                pFVar21 = (FRefCountBase *)0x0;
              }
              else {
                uVar32 = (uint)pUVar23 | 4;
                if (((pUVar6->HairGroupInstances).ArrayNum <= (int)uVar27) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
                  return pFVar15;
                }
                pFVar20 = *(FRefCountBase **)
                           ((pUVar6->HairGroupInstances).AllocatorInstance.Data +
                           (longlong)(int)uVar27 * 8);
                pFVar21 = pFVar20;
                if (pFVar20 != (FRefCountBase *)0x0) {
                  LOCK();
                  *(int *)&pFVar20->field_0x8 = *(int *)&pFVar20->field_0x8 + 1;
                  UNLOCK();
                }
              }
              pUVar23 = (UMeshComponent *)(ulonglong)uVar32;
              if (((uVar32 & 8) != 0) &&
                 (pUVar23 = (UMeshComponent *)(ulonglong)(uVar32 & 0xfffffff7),
                 puVar34 != (undefined8 *)0x0)) {
                piVar2 = (int *)(puVar34 + 1);
                LOCK();
                iVar12 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((iVar12 == 1) && (piVar2 != (int *)0x0)) {
                  (**(code **)*puVar34)(puVar34,1);
                }
              }
              if ((((ulonglong)pUVar23 & 4) != 0) &&
                 (pUVar23 = (UMeshComponent *)(ulonglong)((uint)pUVar23 & 0xfffffffb),
                 pFVar20 != (FRefCountBase *)0x0)) {
                puVar3 = &pFVar20->field_0x8;
                LOCK();
                iVar12 = *(int *)puVar3;
                *(int *)puVar3 = *(int *)puVar3 + -1;
                UNLOCK();
                if ((iVar12 == 1) && (puVar3 != (undefined1 *)0x0)) {
                  (*(code *)**(undefined8 **)pFVar20)(pFVar20,1);
                }
              }
              if (pFVar21 != (FRefCountBase *)0x0) {
                LOCK();
                *(int *)&pFVar21->field_0x8 = *(int *)&pFVar21->field_0x8 + 1;
                UNLOCK();
              }
              pFVar18 = (pTVar1->AllocatorInstance).Data;
              piVar2 = &(this->GroupInstances).ArrayMax;
              local_268 = pFVar21;
              if (((pFVar18 <= (FScriptContainerElement *)&local_268) &&
                  ((FScriptContainerElement *)&local_268 < pFVar18 + (longlong)*piVar2 * 8)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar9 = (code *)swi(3);
                pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
                return pFVar15;
              }
              iVar12 = (this->GroupInstances).ArrayNum;
              if (iVar12 == *piVar2) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar1->AllocatorInstance,piVar2);
              }
              (this->GroupInstances).ArrayNum = iVar12 + 1;
              pFVar18 = (pTVar1->AllocatorInstance).Data;
              *(undefined8 *)(pFVar18 + (longlong)iVar12 * 8) = 0;
              *(FRefCountBase **)(pFVar18 + (longlong)iVar12 * 8) = local_268;
              if (local_268 != (FRefCountBase *)0x0) {
                LOCK();
                *(int *)&local_268->field_0x8 = *(int *)&local_268->field_0x8 + 1;
                UNLOCK();
                if (local_268 != (FRefCountBase *)0x0) {
                  FRefCountBase::Release(local_268);
                }
              }
            }
          }
          uVar27 = uVar27 + 1;
          pFVar18 = local_2d0;
        } while (uVar27 < uVar33);
      }
    }
    uVar17 = (ulonglong)local_2c8;
    FVar25.Data = FVar25.Data + 8;
  }
  EVar5 = this->GroomAttributeGroup;
  FVar37 = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Points;
  if (((EVar5 != ControlPoint) &&
      (FVar37 = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Curves, EVar5 != Curve)
      ) && (((FVar37 = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Edges,
             EVar5 != StrandsEdges &&
             ((FVar37 = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Objects,
              EVar5 != StrandsObjects &&
              (FVar37 = UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Points,
              EVar5 != GuidesPoints)))) &&
            ((FVar37 = UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Curves,
             EVar5 != GuidesCurves &&
             ((FVar37 = UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Edges,
              EVar5 != GuidesEdges &&
              (FVar37 = UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Objects,
              EVar5 != GuidesObjects)))))))) {
    local_1f8 = 0;
    FVar37.ComparisonIndex.Value = 0;
    FVar37.Number = 0;
  }
  pTVar7 = (TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements> *)
           (this->GroupElements).AllocatorInstance.Data;
  iVar12 = (this->GroupElements).ArrayNum;
  if ((this->GroupElements).ArrayMax < 0) {
    DestructItems<TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements>,int>(pTVar7,iVar12);
    (this->GroupElements).ArrayNum = 0;
    if ((this->GroupElements).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->GroupElements).AllocatorInstance,0,&(this->GroupElements).ArrayMax
                );
    }
  }
  else {
    DestructItems<TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements>,int>(pTVar7,iVar12);
    (this->GroupElements).ArrayNum = 0;
  }
  uVar17 = (ulonglong)(int)local_2e0;
  local_208 = local_2e8.Data + uVar17 * 8;
  local_2c4 = local_2e0;
  pFVar21 = local_130;
  pFVar26 = local_128;
  pFVar20 = local_f8;
  FVar25.Data = local_2e8.Data;
  pFVar36 = local_f0;
  while( true ) {
    local_2d0 = FVar25.Data;
    if (local_2e0 != (uint)uVar17) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UGroomComponent_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar25.Data == local_208) break;
    pUVar6 = *(UGroomComponent **)FVar25.Data;
    local_270 = pUVar6;
    if (pUVar6 != (UGroomComponent *)0x0) {
      local_260.GroupIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.GroupIndices.ArrayNum = 0;
      local_260.GroupIndices.ArrayMax = 0;
      local_260.GroupOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.GroupOffsets.ArrayNum = 0;
      local_260.GroupOffsets.ArrayMax = 0;
      local_260.GroupInstances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.GroupInstances.ArrayNum = 0;
      local_260.GroupInstances.ArrayMax = 0;
      UE::Groom::Private::GetGroomGroupElementOffsets(pUVar6,FVar37,&local_260.GroupOffsets,true);
      pUVar10 = local_270;
      local_2c8 = (pUVar6->HairGroupInstances).ArrayNum;
      local_2f0 = 0;
      if (local_2c8 != 0) {
        do {
          bVar11 = UGroomComponent::IsDeformationEnable(pUVar10,local_2f0);
          if (bVar11) {
            if (((int)local_2f0 < 0) || ((pUVar10->HairGroupInstances).ArrayNum <= (int)local_2f0))
            {
              uVar33 = (uint)pUVar23 | 0x20;
              pFVar36 = (FRefCountBase *)0x0;
              local_218 = (FRefCountBase *)0x0;
            }
            else {
              uVar33 = (uint)pUVar23 | 0x10;
              if (((pUVar10->HairGroupInstances).ArrayNum <= (int)local_2f0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
                return pFVar15;
              }
              pFVar20 = *(FRefCountBase **)
                         ((pUVar10->HairGroupInstances).AllocatorInstance.Data +
                         (longlong)(int)local_2f0 * 8);
              local_218 = pFVar20;
              if (pFVar20 != (FRefCountBase *)0x0) {
                LOCK();
                *(int *)&pFVar20->field_0x8 = *(int *)&pFVar20->field_0x8 + 1;
                UNLOCK();
              }
            }
            pUVar23 = (UMeshComponent *)(ulonglong)uVar33;
            if (((uVar33 & 0x20) != 0) &&
               (pUVar23 = (UMeshComponent *)(ulonglong)(uVar33 & 0xffffffdf),
               pFVar36 != (FRefCountBase *)0x0)) {
              FRefCountBase::Release(pFVar36);
            }
            if ((((ulonglong)pUVar23 & 0x10) != 0) &&
               (pUVar23 = (UMeshComponent *)(ulonglong)((uint)pUVar23 & 0xffffffef),
               pFVar20 != (FRefCountBase *)0x0)) {
              FRefCountBase::Release(pFVar20);
            }
            if (local_218 != (FRefCountBase *)0x0) {
              local_2b0 = local_2f0;
              if (((local_260.GroupIndices.AllocatorInstance.Data <=
                    (FScriptContainerElement *)&local_2b0) &&
                  ((FScriptContainerElement *)&local_2b0 <
                   local_260.GroupIndices.AllocatorInstance.Data +
                   (longlong)local_260.GroupIndices.ArrayMax * 4)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar9 = (code *)swi(3);
                pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
                return pFVar15;
              }
              iVar12 = local_260.GroupIndices.ArrayNum;
              if (local_260.GroupIndices.ArrayNum == local_260.GroupIndices.ArrayMax) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)&local_260,
                                    &local_260.GroupIndices.ArrayMax);
              }
              local_260.GroupIndices.ArrayNum = iVar12 + 1;
              *(uint *)(local_260.GroupIndices.AllocatorInstance.Data + (longlong)iVar12 * 4) =
                   local_2b0;
              if (((int)local_2f0 < 0) || ((pUVar10->HairGroupInstances).ArrayNum <= (int)local_2f0)
                 ) {
                uVar33 = (uint)pUVar23 | 0x80;
                pFVar26 = (FRefCountBase *)0x0;
                pFVar35 = (FRefCountBase *)0x0;
              }
              else {
                uVar33 = (uint)pUVar23 | 0x40;
                if (((pUVar10->HairGroupInstances).ArrayNum <= (int)local_2f0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
                  return pFVar15;
                }
                pFVar21 = *(FRefCountBase **)
                           ((pUVar10->HairGroupInstances).AllocatorInstance.Data +
                           (longlong)(int)local_2f0 * 8);
                pFVar35 = pFVar21;
                if (pFVar21 != (FRefCountBase *)0x0) {
                  LOCK();
                  *(int *)&pFVar21->field_0x8 = *(int *)&pFVar21->field_0x8 + 1;
                  UNLOCK();
                }
              }
              pUVar23 = (UMeshComponent *)(ulonglong)uVar33;
              if (((char)uVar33 < '\0') &&
                 (pUVar23 = (UMeshComponent *)(ulonglong)(uVar33 & 0xffffff7f),
                 pFVar26 != (FRefCountBase *)0x0)) {
                FRefCountBase::Release(pFVar26);
              }
              if ((((ulonglong)pUVar23 & 0x40) != 0) &&
                 (pUVar23 = (UMeshComponent *)(ulonglong)((uint)pUVar23 & 0xffffffbf),
                 pFVar21 != (FRefCountBase *)0x0)) {
                FRefCountBase::Release(pFVar21);
              }
              if (pFVar35 != (FRefCountBase *)0x0) {
                LOCK();
                *(int *)&pFVar35->field_0x8 = *(int *)&pFVar35->field_0x8 + 1;
                UNLOCK();
              }
              local_228 = pFVar35;
              if (((local_260.GroupInstances.AllocatorInstance.Data <=
                    (FScriptContainerElement *)&local_228) &&
                  ((FScriptContainerElement *)&local_228 <
                   local_260.GroupInstances.AllocatorInstance.Data +
                   (longlong)local_260.GroupInstances.ArrayMax * 8)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar9 = (code *)swi(3);
                pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
                return pFVar15;
              }
              iVar12 = local_260.GroupInstances.ArrayNum;
              if (local_260.GroupInstances.ArrayNum == local_260.GroupInstances.ArrayMax) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_260.GroupInstances.AllocatorInstance,
                                    &local_260.GroupInstances.ArrayMax);
              }
              local_260.GroupInstances.ArrayNum = iVar12 + 1;
              *(undefined8 *)
               (local_260.GroupInstances.AllocatorInstance.Data + (longlong)iVar12 * 8) = 0;
              *(FRefCountBase **)
               (local_260.GroupInstances.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_228;
              local_228 = (FRefCountBase *)0x0;
            }
          }
          local_2f0 = local_2f0 + 1;
        } while (local_2f0 < local_2c8);
      }
      TTuple<TObjectPtr<UGroomAsset>,UE::Groom::Private::FGroupElements>::
      TTuple<TObjectPtr<UGroomAsset>,UE::Groom::Private::FGroupElements><TObjectPtr<UGroomAsset>_const_&,UE::Groom::Private::FGroupElements_&>
                ((TTuple<TObjectPtr<UGroomAsset>,UE::Groom::Private::FGroupElements> *)local_e0,
                 &local_270->GroomAsset,&local_260);
      local_1a0._0_8_ = local_e0._0_8_;
      UE::Groom::Private::FGroupElements::FGroupElements
                ((FGroupElements *)(local_1a0 + 8),(FGroupElements *)(local_e0 + 8));
      pFVar18 = (this->GroupElements).AllocatorInstance.Data;
      if (((pFVar18 <= (FScriptContainerElement *)local_1a0) &&
          ((FScriptContainerElement *)local_1a0 <
           pFVar18 + (longlong)(this->GroupElements).ArrayMax * 0x38)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
        return pFVar15;
      }
      iVar12 = (this->GroupElements).ArrayNum;
      if (iVar12 == (this->GroupElements).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&(this->GroupElements).AllocatorInstance,
                            &(this->GroupElements).ArrayMax);
      }
      (this->GroupElements).ArrayNum = iVar12 + 1;
      pFVar18 = (this->GroupElements).AllocatorInstance.Data + (longlong)iVar12 * 0x38;
      *(undefined8 *)pFVar18 = local_1a0._0_8_;
      UE::Groom::Private::FGroupElements::FGroupElements
                ((FGroupElements *)(pFVar18 + 8),(FGroupElements *)(local_1a0 + 8));
      UE::Core::Private::Tuple::TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2>::
      ~TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2>
                ((TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2> *)(local_1a0 + 8));
      UE::Core::Private::Tuple::TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2>::
      ~TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2>
                ((TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2> *)(local_e0 + 8));
      DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
                ((TRefCountPtr<FHairGroupInstance_const_> *)
                 local_260.GroupInstances.AllocatorInstance.Data,local_260.GroupInstances.ArrayNum);
      if (local_260.GroupInstances.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.GroupInstances.AllocatorInstance.Data);
      }
      if (local_260.GroupOffsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.GroupOffsets.AllocatorInstance.Data);
      }
      if (local_260.GroupIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.GroupIndices.AllocatorInstance.Data);
      }
    }
    uVar17 = (ulonglong)local_2c4;
    FVar25.Data = local_2d0 + 8;
  }
  FVar19.ComparisonIndex.Value = 0;
  FVar19.Number = 0;
  local_2c0.Data = (FScriptContainerElement *)0x0;
  local_2b4 = 0;
  EVar5 = this->GroomAttributeGroup;
  FVar37 = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Points;
  if ((((((EVar5 != ControlPoint) &&
         (FVar37 = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Curves,
         EVar5 != Curve)) &&
        (FVar37 = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Edges,
        EVar5 != StrandsEdges)) &&
       ((FVar37 = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Objects,
        EVar5 != StrandsObjects &&
        (FVar37 = UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Points,
        EVar5 != GuidesPoints)))) &&
      (FVar37 = UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Curves,
      EVar5 != GuidesCurves)) &&
     ((FVar37 = UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Edges,
      EVar5 != GuidesEdges &&
      (FVar37 = UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Objects,
      EVar5 != GuidesObjects)))) {
    local_200 = 0;
    FVar37 = FVar19;
  }
  DestructItems<TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements>,int>
            ((TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements> *)0x0,0);
  uVar17 = (ulonglong)(int)local_2e0;
  pFVar18 = local_2e8.Data + uVar17 * 8;
  local_2b8 = 0;
  local_2c8 = local_2e0;
  pFVar21 = local_110;
  pFVar26 = local_e8;
  pFVar20 = local_120;
  FVar25.Data = local_2e8.Data;
  pFVar36 = local_118;
  local_2d0 = pFVar18;
  while( true ) {
    local_218 = (FRefCountBase *)FVar25.Data;
    if (local_2e0 != (uint)uVar17) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UGroomComponent_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
      pFVar18 = local_2d0;
    }
    uVar33 = local_2b8;
    if (FVar25.Data == pFVar18) break;
    pUVar6 = *(UGroomComponent **)FVar25.Data;
    local_270 = pUVar6;
    if (pUVar6 != (UGroomComponent *)0x0) {
      local_2a0.GroupIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.GroupOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.GroupInstances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.GroupIndices.ArrayNum = 0;
      local_2a0.GroupIndices.ArrayMax = 0;
      local_2a0.GroupOffsets.ArrayNum = 0;
      local_2a0.GroupOffsets.ArrayMax = 0;
      local_2a0.GroupInstances.ArrayNum = 0;
      local_2a0.GroupInstances.ArrayMax = 0;
      UE::Groom::Private::GetGroomGroupElementOffsets(pUVar6,FVar37,&local_2a0.GroupOffsets,false);
      pUVar10 = local_270;
      local_2c4 = (pUVar6->HairGroupInstances).ArrayNum;
      local_2f0 = 0;
      if (local_2c4 != 0) {
        do {
          bVar11 = UGroomComponent::IsDeformationEnable(pUVar10,local_2f0);
          if (bVar11) {
            if (((int)local_2f0 < 0) || ((pUVar10->HairGroupInstances).ArrayNum <= (int)local_2f0))
            {
              uVar33 = (uint)pUVar23 | 0x200;
              pFVar36 = (FRefCountBase *)0x0;
              pFVar35 = (FRefCountBase *)0x0;
            }
            else {
              uVar33 = (uint)pUVar23 | 0x100;
              if (((pUVar10->HairGroupInstances).ArrayNum <= (int)local_2f0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
                return pFVar15;
              }
              pFVar20 = *(FRefCountBase **)
                         ((pUVar10->HairGroupInstances).AllocatorInstance.Data +
                         (longlong)(int)local_2f0 * 8);
              pFVar35 = pFVar20;
              if (pFVar20 != (FRefCountBase *)0x0) {
                LOCK();
                *(int *)&pFVar20->field_0x8 = *(int *)&pFVar20->field_0x8 + 1;
                UNLOCK();
              }
            }
            pUVar23 = (UMeshComponent *)(ulonglong)uVar33;
            if (((uVar33 >> 9 & 1) != 0) &&
               (pUVar23 = (UMeshComponent *)(ulonglong)(uVar33 & 0xfffffdff),
               pFVar36 != (FRefCountBase *)0x0)) {
              FRefCountBase::Release(pFVar36);
            }
            if ((((uint)pUVar23 >> 8 & 1) != 0) &&
               (pUVar23 = (UMeshComponent *)(ulonglong)((uint)pUVar23 & 0xfffffeff),
               pFVar20 != (FRefCountBase *)0x0)) {
              FRefCountBase::Release(pFVar20);
            }
            if (pFVar35 != (FRefCountBase *)0x0) {
              local_2ac = local_2f0;
              if (((local_2a0.GroupIndices.AllocatorInstance.Data <=
                    (FScriptContainerElement *)&local_2ac) &&
                  ((FScriptContainerElement *)&local_2ac <
                   local_2a0.GroupIndices.AllocatorInstance.Data +
                   (longlong)local_2a0.GroupIndices.ArrayMax * 4)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar9 = (code *)swi(3);
                pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
                return pFVar15;
              }
              iVar12 = local_2a0.GroupIndices.ArrayNum;
              if (local_2a0.GroupIndices.ArrayNum == local_2a0.GroupIndices.ArrayMax) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)&local_2a0,
                                    &local_2a0.GroupIndices.ArrayMax);
              }
              local_2a0.GroupIndices.ArrayNum = iVar12 + 1;
              *(uint *)(local_2a0.GroupIndices.AllocatorInstance.Data + (longlong)iVar12 * 4) =
                   local_2ac;
              if (((int)local_2f0 < 0) || ((pUVar10->HairGroupInstances).ArrayNum <= (int)local_2f0)
                 ) {
                uVar33 = (uint)pUVar23 | 0x800;
                pFVar26 = (FRefCountBase *)0x0;
                pFVar35 = (FRefCountBase *)0x0;
              }
              else {
                uVar33 = (uint)pUVar23 | 0x400;
                if (((pUVar10->HairGroupInstances).ArrayNum <= (int)local_2f0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
                  return pFVar15;
                }
                pFVar21 = *(FRefCountBase **)
                           ((pUVar10->HairGroupInstances).AllocatorInstance.Data +
                           (longlong)(int)local_2f0 * 8);
                pFVar35 = pFVar21;
                if (pFVar21 != (FRefCountBase *)0x0) {
                  LOCK();
                  *(int *)&pFVar21->field_0x8 = *(int *)&pFVar21->field_0x8 + 1;
                  UNLOCK();
                }
              }
              pUVar23 = (UMeshComponent *)(ulonglong)uVar33;
              if ((uVar33 >> 0xb != 0) &&
                 (pUVar23 = (UMeshComponent *)(ulonglong)(uVar33 & 0xfffff7ff),
                 pFVar26 != (FRefCountBase *)0x0)) {
                FRefCountBase::Release(pFVar26);
              }
              if ((((uint)pUVar23 >> 10 & 1) != 0) &&
                 (pUVar23 = (UMeshComponent *)(ulonglong)((uint)pUVar23 & 0xfffffbff),
                 pFVar21 != (FRefCountBase *)0x0)) {
                FRefCountBase::Release(pFVar21);
              }
              if (pFVar35 != (FRefCountBase *)0x0) {
                LOCK();
                *(int *)&pFVar35->field_0x8 = *(int *)&pFVar35->field_0x8 + 1;
                UNLOCK();
              }
              local_220 = pFVar35;
              if (((local_2a0.GroupInstances.AllocatorInstance.Data <=
                    (FScriptContainerElement *)&local_220) &&
                  ((FScriptContainerElement *)&local_220 <
                   local_2a0.GroupInstances.AllocatorInstance.Data +
                   (longlong)local_2a0.GroupInstances.ArrayMax * 8)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar9 = (code *)swi(3);
                pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
                return pFVar15;
              }
              iVar12 = local_2a0.GroupInstances.ArrayNum;
              if (local_2a0.GroupInstances.ArrayNum == local_2a0.GroupInstances.ArrayMax) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_2a0.GroupInstances.AllocatorInstance,
                                    &local_2a0.GroupInstances.ArrayMax);
              }
              local_2a0.GroupInstances.ArrayNum = iVar12 + 1;
              *(undefined8 *)
               (local_2a0.GroupInstances.AllocatorInstance.Data + (longlong)iVar12 * 8) = 0;
              *(FRefCountBase **)
               (local_2a0.GroupInstances.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_220;
              local_220 = (FRefCountBase *)0x0;
            }
          }
          local_2f0 = local_2f0 + 1;
        } while (local_2f0 < local_2c4);
      }
      TTuple<TObjectPtr<UGroomAsset>,UE::Groom::Private::FGroupElements>::
      TTuple<TObjectPtr<UGroomAsset>,UE::Groom::Private::FGroupElements><TObjectPtr<UGroomAsset>_const_&,UE::Groom::Private::FGroupElements_&>
                ((TTuple<TObjectPtr<UGroomAsset>,UE::Groom::Private::FGroupElements> *)local_a8,
                 &local_270->GroomAsset,&local_2a0);
      local_168._0_8_ = local_a8._0_8_;
      UE::Groom::Private::FGroupElements::FGroupElements
                ((FGroupElements *)(local_168 + 8),(FGroupElements *)(local_a8 + 8));
      if (((local_2c0.Data <= (TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements> *)local_168)
          && ((FScriptContainerElement *)local_168 <
              local_2c0.Data + (longlong)(int)local_2b4 * 0x38)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
        return pFVar15;
      }
      if (local_2b8 == local_2b4) {
        local_2b8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x838,&local_2c0,(int *)&local_2b4);
      }
      lVar16 = (longlong)(int)local_2b8;
      *(undefined8 *)(local_2c0.Data + lVar16 * 0x38) = local_168._0_8_;
      local_2b8 = local_2b8 + 1;
      UE::Groom::Private::FGroupElements::FGroupElements
                ((FGroupElements *)(local_2c0.Data + lVar16 * 0x38 + 8),
                 (FGroupElements *)(local_168 + 8));
      UE::Core::Private::Tuple::TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2>::
      ~TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2>
                ((TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2> *)(local_168 + 8));
      UE::Core::Private::Tuple::TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2>::
      ~TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2>
                ((TTupleBaseElement<UE::Groom::Private::FGroupElements,1,2> *)(local_a8 + 8));
      DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
                ((TRefCountPtr<FHairGroupInstance_const_> *)
                 local_2a0.GroupInstances.AllocatorInstance.Data,local_2a0.GroupInstances.ArrayNum);
      if (local_2a0.GroupInstances.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.GroupInstances.AllocatorInstance.Data);
      }
      if (local_2a0.GroupOffsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.GroupOffsets.AllocatorInstance.Data);
      }
      pFVar18 = local_2d0;
      if (local_2a0.GroupIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.GroupIndices.AllocatorInstance.Data);
        pFVar18 = local_2d0;
      }
    }
    uVar17 = (ulonglong)local_2c8;
    FVar25.Data = (FScriptContainerElement *)((longlong)local_218 + 8);
  }
  iVar12 = (this->NumElements).ArrayNum;
  if (iVar12 < (int)local_2b8) {
    iVar12 = local_2b8 - iVar12;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar12,&(this->NumElements).AllocatorInstance,
                        &(this->NumElements).ArrayNum,&(this->NumElements).ArrayMax);
    memset((this->NumElements).AllocatorInstance.Data + (longlong)iVar13 * 0x10,0,
           (longlong)iVar12 << 4);
  }
  else {
    if ((int)local_2b8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_2b8);
    }
    if ((int)local_2b8 < iVar12) {
      iVar12 = iVar12 - local_2b8;
      if (iVar12 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
          return pFVar15;
        }
      }
      else if (iVar12 == 0) goto LAB_14e2656d7;
      TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (&this->NumElements,uVar33,iVar12);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->NumElements).AllocatorInstance,(this->NumElements).ArrayNum,
                 &(this->NumElements).ArrayMax);
    }
  }
LAB_14e2656d7:
  uVar17 = (ulonglong)(int)local_2b8;
  uVar33 = 0;
  local_2c4 = local_2b8;
  pFVar18 = local_2c0.Data + 0x20;
  local_270 = (UGroomComponent *)(local_2c0.Data + uVar17 * 0x38);
  pFVar22 = (FScriptContainerElement *)0x0;
  do {
    pUVar6 = local_270;
    local_2d0 = pFVar22;
    if (local_2b8 != (uint)uVar17) {
      local_2d8[0] = 0;
      `TCheckedPointerIterator<TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_2d8);
    }
    if ((UGroomComponent *)(pFVar18 + -0x20) == pUVar6) {
      DestructItems<TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements>,int>
                ((TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements> *)local_2c0.Data,
                 local_2b8);
      if ((TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements> *)local_2c0.Data !=
          (TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements> *)0x0) {
        FMemory::Free(local_2c0.Data);
      }
      if (local_2e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data);
      }
      return this;
    }
    uVar27 = 0;
    if ((int)uVar33 < (this->NumElements).ArrayNum) {
      uVar27 = ~uVar33 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
      return pFVar15;
    }
    pFVar31 = (this->NumElements).AllocatorInstance.Data + (longlong)pFVar22;
    iVar12 = *(int *)(pFVar31 + 0xc);
    *(undefined4 *)&pFVar31[8].field_0x0 = 0;
    if (iVar12 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar31,0,(int *)(pFVar31 + 0xc));
    }
    uVar27 = 0;
    lVar16 = 0;
    local_208 = (FScriptContainerElement *)(longlong)(*(int *)pFVar18 + -1);
    if (0 < (longlong)local_208) {
      do {
        uVar32 = 0;
        if ((int)uVar33 < (this->NumElements).ArrayNum) {
          uVar32 = ~uVar33 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
          return pFVar15;
        }
        pFVar22 = (this->NumElements).AllocatorInstance.Data + (longlong)pFVar22;
        uVar32 = 0;
        if ((int)uVar27 < *(int *)pFVar18) {
          uVar32 = ~uVar27 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
          return pFVar15;
        }
        lVar8 = *(longlong *)(pFVar18 + -8);
        uVar32 = 0;
        if ((int)(uVar27 + 1) < *(int *)pFVar18) {
          uVar32 = ~(uVar27 + 1) >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
          return pFVar15;
        }
        local_2a8[0] = *(int *)(*(longlong *)(pFVar18 + -8) + 4 + lVar16 * 4) -
                       *(int *)(lVar8 + lVar16 * 4);
        if (((*(int **)&pFVar22->field_0x0 <= local_2a8) &&
            (local_2a8 < *(int **)&pFVar22->field_0x0 + *(int *)(pFVar22 + 0xc))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar15 = (FOptimusGroomAttributeReadProviderProxy *)(*pcVar9)();
          return pFVar15;
        }
        iVar12 = *(int *)&pFVar22[8].field_0x0;
        if (iVar12 == *(int *)(pFVar22 + 0xc)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar22,(int *)(pFVar22 + 0xc));
        }
        *(int *)&pFVar22[8].field_0x0 = iVar12 + 1;
        uVar27 = uVar27 + 1;
        lVar16 = lVar16 + 1;
        *(int *)(*(longlong *)&pFVar22->field_0x0 + (longlong)iVar12 * 4) = local_2a8[0];
        pFVar22 = local_2d0;
      } while (lVar16 < (longlong)local_208);
    }
    uVar33 = uVar33 + 1;
    uVar17 = (ulonglong)local_2c4;
    pFVar22 = (FScriptContainerElement *)((longlong)pFVar22 + 0x10);
    pFVar18 = pFVar18 + 0x38;
  } while( true );
}

// AllocateResources @ 14e26c850

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusGroomAttributeReadProviderProxy::AllocateResources
          (FOptimusGroomAttributeReadProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  int iVar1;
  FRDGBufferSRV *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FRDGBufferSRVDesc local_48;
  
  if (this->FallbackStructuredSRV == (FRDGBufferSRV *)0x0) {
    local_48.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x10);
    local_48._padding_._4_4_ = 0;
    local_48._padding_._0_4_ = 0xffffffff;
    local_48._padding_ = 0;
    local_48._padding_._0_1_ = 0;
    if ((((local_48.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_48._padding_._0_1_ = 0x1c;
    }
    pFVar2 = FRDGBuilder::CreateSRV(param_1,&local_48);
    this->FallbackStructuredSRV = pFVar2;
  }
  (this->AttributeValuesResources).ArrayNum = 0;
  if ((this->AttributeValuesResources).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AttributeValuesResources).AllocatorInstance,0,
               &(this->AttributeValuesResources).ArrayMax);
  }
  (this->IndexMappingResources).ArrayNum = 0;
  if ((this->IndexMappingResources).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->IndexMappingResources).AllocatorInstance,0,
               &(this->IndexMappingResources).ArrayMax);
  }
  (this->bHasIndexMapping).ArrayNum = 0;
  if ((this->bHasIndexMapping).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->bHasIndexMapping).AllocatorInstance,0,
               &(this->bHasIndexMapping).ArrayMax);
  }
  iVar1 = (this->GroupElements).ArrayNum;
  pFVar3 = (this->GroupElements).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->GroupElements).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    AddGroupResources(*(UGroomAsset **)pFVar3,(FGroupElements *)(pFVar3 + 8),
                      this->GroomAttributeType,&this->GroomAttributeName,&this->GroomAttributeGroup,
                      param_1,&this->AttributeValuesResources,&this->IndexMappingResources,
                      &this->bHasIndexMapping);
    pFVar3 = pFVar3 + 0x38;
  }
  return;
}

// CreateInternalBuffers @ 14e270040

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusGroomAttributeReadProviderProxy::CreateInternalBuffers
          (FOptimusGroomAttributeReadProviderProxy *this,FRDGBuilder *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->GroupElements).ArrayNum;
  pFVar3 = (this->GroupElements).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->GroupElements).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    AddGroupResources(*(UGroomAsset **)pFVar3,(FGroupElements *)(pFVar3 + 8),
                      this->GroomAttributeType,&this->GroomAttributeName,&this->GroomAttributeGroup,
                      param_1,&this->AttributeValuesResources,&this->IndexMappingResources,
                      &this->bHasIndexMapping);
    pFVar3 = pFVar3 + 0x38;
  }
  return;
}

// GatherDispatchData @ 14e271670

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FOptimusGroomAttributeReadProviderProxy::GatherDispatchData
          (FOptimusGroomAttributeReadProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  FRDGBufferSRV *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uchar *puVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  int local_b8;
  longlong local_b0;
  uint local_a8;
  longlong local_90;
  longlong local_88;
  longlong local_78;
  longlong local_70;
  
  if ((param_1->NumInvocations != (this->AttributeValuesResources).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDispatchData.NumInvocations == AttributeValuesResources.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomAttributeRead.cpp"
                         ,0x2a9,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar1 = param_1->ParameterBufferOffset;
  puVar5 = param_1->ParameterBuffer;
  uVar2 = param_1->ParameterBufferStride;
  iVar3 = param_1->NumInvocations;
  if ((iVar3 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((int)uVar2 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((uVar2 & 0xf) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar9 = (longlong)(this->GroupElements).ArrayNum;
  uVar20 = 0;
  local_b8 = 0;
  local_res20 = 0;
  if (0 < lVar9) {
    lVar15 = 0;
    local_88 = 0;
    local_70 = 0;
    local_90 = 0;
    local_b0 = 0;
    do {
      uVar16 = local_res20;
      uVar17 = ~local_res20 >> 0x1f;
      uVar8 = 0;
      if ((int)local_res20 < (this->GroupElements).ArrayNum) {
        uVar8 = uVar17;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar22 = (this->GroupElements).AllocatorInstance.Data;
      local_a8 = 0;
      local_78 = 0;
      uVar8 = 0;
      if ((int)uVar16 < (this->GroupElements).ArrayNum) {
        uVar8 = uVar17;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar10 = (longlong)*(int *)((this->GroupElements).AllocatorInstance.Data + local_70 + 0x10);
      if (0 < lVar10) {
        puVar21 = puVar5 + lVar15 * (int)uVar2 + (longlong)iVar1 + 0x10;
        do {
          uVar8 = 0;
          if ((int)uVar16 < (this->GroupElements).ArrayNum) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar18 = (this->GroupElements).AllocatorInstance.Data;
          uVar16 = 0;
          if ((int)local_a8 < *(int *)(pFVar18 + local_70 + 0x10)) {
            uVar16 = ~local_a8 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar23 = ~uVar20 >> 0x1f;
          uVar16 = *(uint *)(*(longlong *)(pFVar18 + local_70 + 8) + local_78 * 4);
          uVar8 = 0;
          if ((int)uVar20 < iVar3) {
            uVar8 = uVar23;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                                 ,0x96,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar8 = 0;
          if ((int)local_a8 < *(int *)(pFVar22 + local_70 + 0x30)) {
            uVar8 = ~local_a8 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)(*(longlong *)(pFVar22 + local_70 + 0x28) + local_78 * 8) == 0) {
            *(int *)(puVar21 + -0xc) = local_b8;
            puVar21[-0x10] = '\0';
            puVar21[-0xf] = '\0';
            puVar21[-0xe] = '\0';
            puVar21[-0xd] = '\0';
            *(FRDGBufferSRV **)puVar21 = this->FallbackStructuredSRV;
            puVar21[-4] = '\0';
            puVar21[-3] = '\0';
            puVar21[-2] = '\0';
            puVar21[-1] = '\0';
            pFVar12 = this->FallbackStructuredSRV;
          }
          else {
            uVar8 = 0;
            if ((int)local_res20 < (this->NumElements).ArrayNum) {
              uVar8 = uVar17;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar18 = (this->NumElements).AllocatorInstance.Data + local_b0;
            uVar8 = 0;
            if ((int)uVar16 < *(int *)(pFVar18 + 8)) {
              uVar8 = ~uVar16 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar4 = *(int *)((longlong)(int)uVar16 * 4 + *(longlong *)pFVar18);
            uVar8 = 0;
            if ((int)uVar16 < *(int *)(pFVar22 + local_70 + 0x20)) {
              uVar8 = ~uVar16 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar15 = *(longlong *)(pFVar22 + local_70 + 0x18);
            uVar14 = uVar16 + 1;
            uVar8 = 0;
            if ((int)uVar14 < *(int *)(pFVar22 + local_70 + 0x20)) {
              uVar8 = ~uVar14 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(int *)(puVar21 + -0x10) =
                 *(int *)(*(longlong *)(pFVar22 + local_70 + 0x18) + (longlong)(int)uVar14 * 4) -
                 *(int *)(lVar15 + (longlong)(int)uVar16 * 4);
            *(int *)(puVar21 + -0xc) = local_b8;
            uVar16 = 0;
            if ((int)uVar20 < (this->AttributeValuesResources).ArrayNum) {
              uVar16 = uVar23;
            }
            if ((uVar16 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined8 *)puVar21 =
                 *(undefined8 *)
                  ((this->AttributeValuesResources).AllocatorInstance.Data + local_90 * 8);
            uVar16 = 0;
            if ((int)uVar20 < (this->bHasIndexMapping).ArrayNum) {
              uVar16 = uVar23;
            }
            if ((uVar16 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined4 *)(puVar21 + -4) =
                 *(undefined4 *)((this->bHasIndexMapping).AllocatorInstance.Data + local_90 * 4);
            uVar16 = 0;
            if ((int)uVar20 < (this->IndexMappingResources).ArrayNum) {
              uVar16 = uVar23;
            }
            if ((uVar16 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_b8 = local_b8 + iVar4;
            pFVar12 = *(FRDGBufferSRV **)
                       ((this->IndexMappingResources).AllocatorInstance.Data + local_90 * 8);
          }
          local_78 = local_78 + 1;
          lVar15 = local_90 + 1;
          *(FRDGBufferSRV **)(puVar21 + 8) = pFVar12;
          local_a8 = local_a8 + 1;
          uVar20 = uVar20 + 1;
          puVar21 = puVar21 + (int)uVar2;
          uVar16 = local_res20;
          local_90 = lVar15;
        } while (local_78 < lVar10);
      }
      local_b0 = local_b0 + 0x10;
      local_res20 = uVar16 + 1;
      local_88 = local_88 + 1;
      local_70 = local_70 + 0x38;
    } while (local_88 < lVar9);
  }
  local_res20 = (this->GroupElements).ArrayNum;
  uVar13 = (ulonglong)(int)local_res20;
  uVar20 = 0;
  pFVar18 = (this->GroupElements).AllocatorInstance.Data;
  pFVar22 = pFVar18 + 0x10;
  pFVar19 = pFVar18 + uVar13 * 0x38;
  lVar9 = 0;
  while( true ) {
    if ((this->GroupElements).ArrayNum != (int)uVar13) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar18 == pFVar19) break;
    lVar10 = *(longlong *)(pFVar22 + -8);
    iVar4 = *(int *)pFVar22;
    lVar15 = lVar10 + (longlong)iVar4 * 4;
    while( true ) {
      if (*(int *)pFVar22 != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (lVar10 == lVar15) break;
      uVar16 = 0;
      if ((int)uVar20 < iVar3) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar20 = uVar20 + 1;
      lVar11 = (int)uVar2 * lVar9;
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 4;
      *(int *)(puVar5 + lVar11 + 8 + (longlong)iVar1) = local_b8;
    }
    pFVar18 = pFVar18 + 0x38;
    pFVar22 = pFVar22 + 0x38;
    uVar13 = (ulonglong)local_res20;
  }
  return;
}

// GatherPermutations @ 14e273b90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FOptimusGroomAttributeReadProviderProxy::GatherPermutations
          (FOptimusGroomAttributeReadProviderProxy *this,FPermutationData *param_1)

{
  return;
}

// IsValid @ 14e288a90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FOptimusGroomAttributeReadProviderProxy::IsValid
          (FOptimusGroomAttributeReadProviderProxy *this,FValidationData *param_1)

{
  int *piVar1;
  int iVar2;
  EOptimusGroomExecDomain EVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  FName local_res18;
  
  if ((param_1->ParameterStructSize == 0x20) &&
     (param_1->NumInvocations == (this->GroupInstances).ArrayNum)) {
    UOptimusGroomExecDataInterface::GetExecutionDomainName((EOptimusGroomExecDomain)&local_res18);
    EVar3 = this->GroomAttributeGroup;
    if ((EVar3 == GuidesPoints) || ((byte)(EVar3 - GuidesCurves) < 3)) {
      bVar7 = UE::Groom::Private::HaveGuidesInstanceResources(&this->GroupInstances);
      if (!bVar7) {
        return false;
      }
    }
    else if ((byte)(EVar3 - ControlPoint) < 4) {
      pFVar9 = (this->GroupInstances).AllocatorInstance.Data;
      iVar4 = (this->GroupInstances).ArrayNum;
      pFVar10 = pFVar9 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this->GroupInstances).ArrayNum != iVar4) {
          `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar9 == pFVar10) break;
        puVar8 = *(undefined8 **)pFVar9;
        if (puVar8 == (undefined8 *)0x0) {
          return false;
        }
        LOCK();
        *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
        UNLOCK();
        lVar5 = puVar8[8];
        if (((((lVar5 == 0) || (lVar6 = puVar8[9], lVar6 == 0)) || (*(int *)(lVar5 + 0x18) == -1))
            || ((*(char *)(lVar5 + 0x21) == '\0' || (*(int *)(lVar6 + 0x18) == -1)))) ||
           (*(char *)(lVar6 + 0x21) == '\0')) {
          piVar1 = (int *)(puVar8 + 1);
          LOCK();
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 != 1) {
            return false;
          }
          if (piVar1 == (int *)0x0) {
            puVar8 = (undefined8 *)0x0;
          }
          if (puVar8 == (undefined8 *)0x0) {
            return false;
          }
          (**(code **)*puVar8)(puVar8,1);
          return false;
        }
        piVar1 = (int *)(puVar8 + 1);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if (piVar1 == (int *)0x0) {
            puVar8 = (undefined8 *)0x0;
          }
          if (puVar8 != (undefined8 *)0x0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
        pFVar9 = pFVar9 + 8;
      }
    }
    iVar4 = (this->GroupElements).ArrayNum;
    pFVar10 = (this->GroupElements).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar4 * 0x38;
    while( true ) {
      if ((this->GroupElements).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TTuple<UGroomAsset_*,UE::Groom::Private::FGroupElements>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar9) {
        return true;
      }
      if ((*(longlong *)pFVar10 == 0) ||
         (bVar7 = FManagedArrayCollection::HasAttribute
                            (*(FManagedArrayCollection **)(*(longlong *)pFVar10 + 200),
                             this->GroomAttributeName,local_res18), !bVar7)) break;
      pFVar10 = pFVar10 + 0x38;
    }
  }
  return false;
}

