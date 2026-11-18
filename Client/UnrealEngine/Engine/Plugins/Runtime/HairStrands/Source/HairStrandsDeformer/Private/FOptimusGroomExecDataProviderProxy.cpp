// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 4

// FOptimusGroomExecDataProviderProxy @ 14e265a80

/* WARNING: Removing unreachable block (ram,0x00014e26679a) */
/* WARNING: Removing unreachable block (ram,0x00014e2667a4) */
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

FOptimusGroomExecDataProviderProxy * __thiscall
FOptimusGroomExecDataProviderProxy::FOptimusGroomExecDataProviderProxy
          (FOptimusGroomExecDataProviderProxy *this,UMeshComponent *param_1,
          EOptimusGroomExecDomain param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  UClass *pUVar13;
  FOptimusGroomExecDataProviderProxy *pFVar14;
  UMeshComponent *pUVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar16;
  FName FVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  FRefCountBase *this_00;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  undefined8 *puVar23;
  ForAnyElementType FVar24;
  FRefCountBase *this_01;
  UMeshComponent *pUVar25;
  longlong *plVar26;
  UMeshComponent *pUVar27;
  FScriptContainerElement *pFVar28;
  FRefCountBase *pFVar29;
  UGroomComponent *pUVar30;
  uint uVar31;
  undefined8 *puVar32;
  FRefCountBase *this_02;
  uint local_res20 [2];
  undefined1 local_248;
  undefined1 local_247 [7];
  TArray<UGroomComponent_const_*,TSizedDefaultAllocator<32>_> local_240;
  ForAnyElementType local_230;
  uint local_228;
  uint uStack_224;
  UGroomComponent *local_220;
  uint local_218;
  FScriptContainerElement *local_210;
  undefined8 *local_208;
  FRefCountBase *local_200;
  UMeshComponent *local_1f8;
  UMeshComponent *local_1f0;
  FScriptContainerElement *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [24];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  int local_1a8;
  undefined4 uStack_1a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a0;
  int local_180;
  int local_17c;
  undefined8 *local_178;
  undefined8 *local_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  undefined1 local_138 [12];
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong *local_108;
  longlong lStack_100;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined8 *local_d8;
  undefined8 *local_d0;
  FRefCountBase *local_c8;
  FRefCountBase *local_c0;
  FRefCountBase *local_b8;
  undefined1 local_a8 [8];
  TRangedForConstIterator local_a0;
  undefined4 local_54;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar11 = false;
  pFVar28 = (FScriptContainerElement *)&this->GroupInstances;
  local_res20[0] = 0;
  (((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *)pFVar28)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->GroupCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupCounts).ArrayNum = 0;
  (this->GroupCounts).ArrayMax = 0;
  (this->GroupInstances).ArrayNum = 0;
  (this->GroupInstances).ArrayMax = 0;
  this->Domain = ControlPoint;
  this->_padding_ = (longlong)&___7FOptimusGroomExecDataProviderProxy__6B_;
  pUVar25 = (UMeshComponent *)0x0;
  local_230.Data = (FScriptContainerElement *)0x0;
  local_228 = 0;
  uStack_224 = 0;
  local_210 = pFVar28;
  if (param_1 == (UMeshComponent *)0x0) {
LAB_14e265bd3:
    local_1f8 = (UMeshComponent *)0x0;
    if (param_1 == (UMeshComponent *)0x0) {
LAB_14e265c02:
      pUVar15 = pUVar25;
    }
    else {
      pUVar13 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
      iVar12 = (int)pUVar13->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar12) ||
         (pUVar15 = param_1,
         (longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
         &pUVar13->_padding_)) goto LAB_14e265c02;
    }
    if (pUVar15 != (UMeshComponent *)0x0) {
      plVar2 = &pUVar15[1]._padding_;
      iVar12 = (int)pUVar15[1]._padding_;
      local_1d0._16_8_ = &pUVar15[1]._padding_;
      local_1d0._12_4_ = 1;
      pUVar27 = pUVar25;
      TStack_160.CurrentBitIndex = 0;
      if (iVar12 != 0) {
        plVar26 = (longlong *)pUVar15[1]._padding_;
        if ((longlong *)pUVar15[1]._padding_ == (longlong *)0x0) {
          plVar26 = (longlong *)local_1d0._16_8_;
        }
        for (uVar21 = (uint)*plVar26; uVar21 == 0;
            uVar21 = *(uint *)((longlong)plVar26 + (longlong)(int)uVar21 * 4)) {
          uVar21 = (int)pUVar25 + 1;
          pUVar25 = (UMeshComponent *)(ulonglong)uVar21;
          pUVar27 = (UMeshComponent *)(ulonglong)((int)pUVar27 + 0x20);
          TStack_160.CurrentBitIndex = iVar12;
          if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
          goto LAB_14e265c90;
        }
        local_1d0._12_4_ = ~(uVar21 - 1) & uVar21;
        uVar19 = (ulonglong)(uint)local_1d0._12_4_ * 2 + 1;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_180 = (int)lVar18;
        TStack_160.CurrentBitIndex = local_180 + -1 + (int)pUVar27;
        if (iVar12 < TStack_160.CurrentBitIndex) {
          TStack_160.CurrentBitIndex = iVar12;
        }
      }
LAB_14e265c90:
      uVar21 = (uint)pUVar15[1]._padding_;
      uVar31 = uVar21 & 0xffffffe0;
      local_1a8 = (int)pUVar15[1]._padding_ - *(int *)((longlong)&pUVar15[1]._padding_ + 4);
      local_1d0._8_4_ = (int)pUVar25;
      uStack_1b8 = CONCAT44(TStack_160.CurrentBitIndex,0xffffffff);
      uStack_1b0 = CONCAT44(local_54,(int)pUVar27);
      TStack_160._padding_ = local_1d0._8_8_;
      iVar12 = (int)uVar21 >> 5;
      uStack_140 = CONCAT44(uStack_1a4,local_1a8);
      TStack_160.UnvisitedBitMask = 0xffffffff;
      TStack_160._24_8_ = uStack_1b0;
      local_1d0._0_8_ = plVar2;
      local_168 = plVar2;
      TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1d0._16_8_;
      if ((((int)uVar21 < 0) || ((int)pUVar15[1]._padding_ < (int)uVar21)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FOptimusGroomExecDataProviderProxy *)(*pcVar4)();
        return pFVar14;
      }
      uVar3 = (uint)pUVar15[1]._padding_;
      if (uVar21 != uVar3) {
        plVar26 = &pUVar15[1]._padding_;
        if ((longlong *)pUVar15[1]._padding_ != (longlong *)0x0) {
          plVar26 = (longlong *)pUVar15[1]._padding_;
        }
        uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)((longlong)plVar26 + (longlong)iVar12 * 4);
        while (uVar21 == 0) {
          iVar12 = iVar12 + 1;
          uVar31 = uVar31 + 0x20;
          uVar21 = uVar3;
          if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar12)
          goto LAB_14e265da0;
          uVar21 = *(uint *)((longlong)plVar26 + (longlong)iVar12 * 4);
        }
        uVar19 = (ulonglong)(~(uVar21 - 1) & uVar21) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_17c = (int)lVar18;
        uVar21 = (uVar31 - 1) + local_17c;
        if ((int)uVar3 < (int)uVar21) {
          uVar21 = uVar3;
        }
      }
LAB_14e265da0:
      while( true ) {
        plVar26 = local_168;
        if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
          local_res20[0] = local_res20[0] & 0xffffff00;
          `TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_160.CurrentBitIndex == uVar21) &&
            (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)&pUVar15[1]._padding_)) &&
           (pFVar28 = local_210, plVar26 == plVar2)) break;
        local_1e0 = *(undefined8 *)(*plVar26 + (longlong)TStack_160.CurrentBitIndex * 0x10);
        if (((local_230.Data <= (FScriptContainerElement *)&local_1e0) &&
            ((FScriptContainerElement *)&local_1e0 < local_230.Data + (longlong)(int)uStack_224 * 8)
            ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
          pcVar4 = (code *)swi(3);
          pFVar14 = (FOptimusGroomExecDataProviderProxy *)(*pcVar4)();
          return pFVar14;
        }
        if (local_228 == uStack_224) {
          local_228 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_230,(int *)&uStack_224);
        }
        lVar18 = (longlong)(int)local_228;
        local_228 = local_228 + 1;
        *(undefined8 *)(local_230.Data + lVar18 * 8) = local_1e0;
        TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
      }
    }
  }
  else {
    pUVar13 = Z_Construct_UClass_UGroomComponent_NoRegister();
    iVar12 = (int)pUVar13->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar13->_padding_)) goto LAB_14e265bd3;
    local_1f8 = param_1;
    if (((local_230.Data <= (FScriptContainerElement *)&local_1f8) &&
        ((FScriptContainerElement *)&local_1f8 < local_230.Data + (longlong)(int)uStack_224 * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FOptimusGroomExecDataProviderProxy *)(*pcVar4)();
      return pFVar14;
    }
    if (local_228 == uStack_224) {
      local_228 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_230,(int *)&uStack_224);
    }
    *(UMeshComponent **)(local_230.Data + (longlong)(int)local_228 * 8) = local_1f8;
    local_228 = local_228 + 1;
  }
  pFVar22 = (((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *)pFVar28
             )->AllocatorInstance).Data;
  if (((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *)pFVar28)->
      ArrayMax < 0) {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar22,
               ((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *)
               pFVar28)->ArrayNum);
    ((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *)pFVar28)->
    ArrayNum = 0;
    if (((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *)pFVar28)->
        ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)pFVar28,0,
                 &((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *)
                  pFVar28)->ArrayMax);
    }
  }
  else {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar22,
               ((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *)
               pFVar28)->ArrayNum);
    ((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *)pFVar28)->
    ArrayNum = 0;
  }
  uVar19 = (ulonglong)(int)local_228;
  local_218 = local_228;
  pFVar22 = local_230.Data + uVar19 * 8;
  puVar20 = local_d8;
  FVar24.Data = local_230.Data;
  puVar32 = local_d0;
  local_1e8 = pFVar22;
  while( true ) {
    bVar9 = false;
    bVar8 = false;
    bVar10 = false;
    local_210 = FVar24.Data;
    if (local_228 != (uint)uVar19) {
      local_248 = 0;
      `TCheckedPointerIterator<UGroomComponent_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_248);
    }
    if (FVar24.Data == pFVar22) break;
    pUVar30 = *(UGroomComponent **)FVar24.Data;
    if (pUVar30 != (UGroomComponent *)0x0) {
      iVar12 = (pUVar30->HairGroupInstances).ArrayNum;
      uVar21 = 0;
      local_220 = (UGroomComponent *)CONCAT44(local_220._4_4_,iVar12);
      pFVar22 = local_1e8;
      if (iVar12 != 0) {
        do {
          bVar10 = UGroomComponent::IsDeformationEnable(pUVar30,uVar21);
          if (bVar10) {
            if (((int)uVar21 < 0) || ((pUVar30->HairGroupInstances).ArrayNum <= (int)uVar21)) {
              bVar7 = true;
              local_178 = (undefined8 *)0x0;
              puVar23 = (undefined8 *)0x0;
            }
            else {
              bVar11 = true;
              if (((pUVar30->HairGroupInstances).ArrayNum <= (int)uVar21) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                pFVar14 = (FOptimusGroomExecDataProviderProxy *)(*pcVar4)();
                return pFVar14;
              }
              puVar23 = *(undefined8 **)
                         ((pUVar30->HairGroupInstances).AllocatorInstance.Data +
                         (longlong)(int)uVar21 * 8);
              local_170 = puVar23;
              if (puVar23 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
                UNLOCK();
              }
            }
            if ((bVar7) && (bVar7 = false, local_178 != (undefined8 *)0x0)) {
              piVar1 = (int *)(local_178 + 1);
              LOCK();
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar12 == 1) && ((piVar1 != (int *)0x0 && (local_178 != (undefined8 *)0x0)))) {
                (**(code **)*local_178)(local_178,1);
              }
            }
            if ((bVar11) && (bVar11 = false, local_170 != (undefined8 *)0x0)) {
              piVar1 = (int *)(local_170 + 1);
              LOCK();
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar12 == 1) && ((piVar1 != (int *)0x0 && (local_170 != (undefined8 *)0x0)))) {
                (**(code **)*local_170)(local_170,1);
              }
            }
            if (puVar23 != (undefined8 *)0x0) {
              if (((int)uVar21 < 0) || ((pUVar30->HairGroupInstances).ArrayNum <= (int)uVar21)) {
                bVar5 = true;
                puVar32 = (undefined8 *)0x0;
                puVar23 = (undefined8 *)0x0;
              }
              else {
                bVar6 = true;
                if (((pUVar30->HairGroupInstances).ArrayNum <= (int)uVar21) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  pFVar14 = (FOptimusGroomExecDataProviderProxy *)(*pcVar4)();
                  return pFVar14;
                }
                puVar20 = *(undefined8 **)
                           ((pUVar30->HairGroupInstances).AllocatorInstance.Data +
                           (longlong)(int)uVar21 * 8);
                puVar23 = puVar20;
                if (puVar20 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                  UNLOCK();
                }
              }
              if ((bVar5) && (bVar5 = false, puVar32 != (undefined8 *)0x0)) {
                piVar1 = (int *)(puVar32 + 1);
                LOCK();
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar12 == 1) && (piVar1 != (int *)0x0)) {
                  (**(code **)*puVar32)(puVar32,1);
                }
              }
              if ((bVar6) && (bVar6 = false, puVar20 != (undefined8 *)0x0)) {
                piVar1 = (int *)(puVar20 + 1);
                LOCK();
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar12 == 1) && (piVar1 != (int *)0x0)) {
                  (**(code **)*puVar20)(puVar20,1);
                }
              }
              if (puVar23 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
                UNLOCK();
              }
              pFVar22 = (((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_>
                           *)pFVar28)->AllocatorInstance).Data;
              piVar1 = &((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_>
                          *)pFVar28)->ArrayMax;
              local_208 = puVar23;
              if (((pFVar22 <= (FScriptContainerElement *)&local_208) &&
                  ((FScriptContainerElement *)&local_208 < pFVar22 + (longlong)*piVar1 * 8)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar4 = (code *)swi(3);
                pFVar14 = (FOptimusGroomExecDataProviderProxy *)(*pcVar4)();
                return pFVar14;
              }
              iVar12 = ((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_>
                         *)pFVar28)->ArrayNum;
              if (iVar12 == *piVar1) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)pFVar28,piVar1);
              }
              ((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *)
              pFVar28)->ArrayNum = iVar12 + 1;
              pFVar22 = (((TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_>
                           *)pFVar28)->AllocatorInstance).Data;
              *(undefined8 *)(pFVar22 + (longlong)iVar12 * 8) = 0;
              *(undefined8 **)(pFVar22 + (longlong)iVar12 * 8) = local_208;
              if (local_208 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(local_208 + 1) = *(int *)(local_208 + 1) + 1;
                UNLOCK();
                if (local_208 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_208 + 1);
                  LOCK();
                  iVar12 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (((iVar12 == 1) && (piVar1 != (int *)0x0)) && (local_208 != (undefined8 *)0x0))
                  {
                    (**(code **)*local_208)(local_208,1);
                  }
                }
              }
            }
          }
          uVar21 = uVar21 + 1;
          pFVar22 = local_1e8;
          FVar24.Data = local_210;
        } while (uVar21 < (uint)local_220);
      }
    }
    uVar19 = (ulonglong)local_218;
    FVar24.Data = FVar24.Data + 8;
  }
  if (local_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data);
  }
  local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.ArrayNum = 0;
  local_240.ArrayMax = 0;
  if (param_1 != (UMeshComponent *)0x0) {
    pUVar13 = Z_Construct_UClass_UGroomComponent_NoRegister();
    iVar12 = (int)pUVar13->_padding_;
    if ((iVar12 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar13->_padding_)) {
      local_1f0 = param_1;
      if ((local_240.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1f0) &&
         (((FScriptContainerElement *)&local_1f0 <
           local_240.AllocatorInstance.Data + (longlong)local_240.ArrayMax * 8 &&
          (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)))) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FOptimusGroomExecDataProviderProxy *)(*pcVar4)();
        return pFVar14;
      }
      iVar12 = local_240.ArrayNum;
      if (local_240.ArrayNum == local_240.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_240.AllocatorInstance,&local_240.ArrayMax);
      }
      local_240.ArrayNum = iVar12 + 1;
      *(UMeshComponent **)(local_240.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_1f0;
      goto LAB_14e266585;
    }
  }
  local_1f0 = (UMeshComponent *)0x0;
  if (param_1 == (UMeshComponent *)0x0) {
LAB_14e266391:
    param_1 = (UMeshComponent *)0x0;
  }
  else {
    pUVar13 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar12 = (int)pUVar13->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar13->_padding_)) goto LAB_14e266391;
  }
  if (param_1 != (UMeshComponent *)0x0) {
    plVar2 = &param_1[1]._padding_;
    local_1a0._padding_._0_4_ = 0;
    plVar26 = &param_1[1]._padding_;
    local_1a0._padding_._4_4_ = 1;
    local_1a0.UnvisitedBitMask = 0xffffffff;
    local_1a0.CurrentBitIndex = 0;
    local_1a0.BaseBitIndex = 0;
    local_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar2;
    if ((int)param_1[1]._padding_ != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a0);
    }
    local_1d0._8_8_ = CONCAT44(local_1a0._padding_._4_4_,(undefined4)local_1a0._padding_);
    uStack_1b8 = CONCAT44(local_1a0.CurrentBitIndex,local_1a0.UnvisitedBitMask);
    uStack_1b0 = CONCAT44(local_1a0._28_4_,local_1a0.BaseBitIndex);
    local_1a8 = (int)param_1[1]._padding_ - *(int *)((longlong)&param_1[1]._padding_ + 4);
    local_1d0._16_8_ = local_1a0.Array;
    uStack_110._4_4_ = uStack_1a4;
    uStack_110._0_4_ = local_1a8;
    local_128 = local_1a0.Array;
    local_1d0._0_8_ = plVar26;
    local_138._0_8_ = plVar26;
    unique0x10001887 = (TBitArray<FDefaultBitArrayAllocator> *)local_1d0._8_8_;
    uStack_120 = uStack_1b8;
    local_118 = uStack_1b0;
    pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_1d0,
                         (TBitArray<FDefaultBitArrayAllocator> *)plVar2,(int)param_1[1]._padding_);
    lStack_100 = pTVar16->_padding_;
    pTStack_f8 = pTVar16->Array;
    lStack_f0._0_4_ = pTVar16->UnvisitedBitMask;
    lStack_f0._4_4_ = pTVar16->CurrentBitIndex;
    lStack_e8 = *(longlong *)&pTVar16->BaseBitIndex;
    local_e0 = (int)param_1[1]._padding_ - *(int *)((longlong)&param_1[1]._padding_ + 4);
    local_a0._44_4_ = uStack_dc;
    local_a0.InitialNum = local_e0;
    local_108 = plVar26;
    local_a0._padding_ = (longlong)plVar26;
    local_a0._padding_ = lStack_100;
    local_a0._padding_ = (longlong)pTStack_f8;
    local_a0._padding_ = lStack_f0;
    local_a0._padding_ = lStack_e8;
    bVar11 = TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_138,&local_a0);
    if (bVar11) {
      do {
        local_1d8 = *(undefined8 *)
                     (*(longlong *)local_138._0_8_ + (longlong)uStack_120._4_4_ * 0x10);
        if (((local_240.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1d8) &&
            ((FScriptContainerElement *)&local_1d8 <
             local_240.AllocatorInstance.Data + (longlong)local_240.ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          pFVar14 = (FOptimusGroomExecDataProviderProxy *)(*pcVar4)();
          return pFVar14;
        }
        iVar12 = local_240.ArrayNum;
        if (local_240.ArrayNum == local_240.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_240.AllocatorInstance,&local_240.ArrayMax);
        }
        local_240.ArrayNum = iVar12 + 1;
        *(undefined8 *)(local_240.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_1d8;
        uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 & ~uStack_12c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_138 + 8));
        bVar11 = TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_138,&local_a0);
      } while (bVar11);
    }
  }
LAB_14e266585:
  pFVar28 = (this->GroupInstances).AllocatorInstance.Data;
  iVar12 = (this->GroupInstances).ArrayNum;
  if ((this->GroupInstances).ArrayMax < 0) {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar28,iVar12);
    (this->GroupInstances).ArrayNum = 0;
    if ((this->GroupInstances).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->GroupInstances).AllocatorInstance,0,&(this->GroupInstances).ArrayMax)
      ;
    }
  }
  else {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar28,iVar12);
    (this->GroupInstances).ArrayNum = 0;
  }
  uVar19 = (ulonglong)local_240.ArrayNum;
  pFVar28 = local_240.AllocatorInstance.Data + uVar19 * 8;
  local_218 = local_240.ArrayNum;
  this_00 = local_b8;
  this_01 = local_c8;
  FVar24.Data = local_240.AllocatorInstance.Data;
  this_02 = local_c0;
  local_210 = pFVar28;
  do {
    local_1e8 = FVar24.Data;
    if (local_240.ArrayNum != (int)uVar19) {
      local_247[0] = 0;
      `TCheckedPointerIterator<UGroomComponent_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_247);
    }
    if (FVar24.Data == pFVar28) {
      FVar17 = UOptimusGroomExecDataInterface::GetExecutionDomainName
                         ((EOptimusGroomExecDomain)local_a8);
      UE::Groom::Private::GetGroomInvocationElementCounts
                (&local_240,*(FName *)FVar17,&this->GroupCounts,false);
      this->Domain = param_2;
      if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.AllocatorInstance.Data);
      }
      return this;
    }
    pUVar30 = *(UGroomComponent **)FVar24.Data;
    local_220 = pUVar30;
    if (pUVar30 != (UGroomComponent *)0x0) {
      uVar21 = (pUVar30->HairGroupInstances).ArrayNum;
      uVar31 = 0;
      pFVar28 = local_210;
      if (uVar21 != 0) {
        do {
          bVar11 = UGroomComponent::IsDeformationEnable(pUVar30,uVar31);
          if (bVar11) {
            if (((int)uVar31 < 0) || ((pUVar30->HairGroupInstances).ArrayNum <= (int)uVar31)) {
              bVar10 = true;
              this_02 = (FRefCountBase *)0x0;
              pFVar29 = (FRefCountBase *)0x0;
            }
            else {
              bVar8 = true;
              if (((pUVar30->HairGroupInstances).ArrayNum <= (int)uVar31) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar4 = (code *)swi(3);
                pFVar14 = (FOptimusGroomExecDataProviderProxy *)(*pcVar4)();
                return pFVar14;
              }
              this_01 = *(FRefCountBase **)
                         ((pUVar30->HairGroupInstances).AllocatorInstance.Data +
                         (longlong)(int)uVar31 * 8);
              pFVar29 = this_01;
              if (this_01 != (FRefCountBase *)0x0) {
                LOCK();
                *(int *)&this_01->field_0x8 = *(int *)&this_01->field_0x8 + 1;
                UNLOCK();
              }
            }
            if ((bVar10) && (bVar10 = false, this_02 != (FRefCountBase *)0x0)) {
              FRefCountBase::Release(this_02);
            }
            if ((bVar8) && (bVar8 = false, this_01 != (FRefCountBase *)0x0)) {
              FRefCountBase::Release(this_01);
            }
            pUVar30 = local_220;
            if (pFVar29 != (FRefCountBase *)0x0) {
              if (((int)uVar31 < 0) || ((local_220->HairGroupInstances).ArrayNum <= (int)uVar31)) {
                pFVar29 = (FRefCountBase *)0x0;
              }
              else {
                bVar9 = true;
                if (((local_220->HairGroupInstances).ArrayNum <= (int)uVar31) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar4 = (code *)swi(3);
                  pFVar14 = (FOptimusGroomExecDataProviderProxy *)(*pcVar4)();
                  return pFVar14;
                }
                this_00 = *(FRefCountBase **)
                           ((pUVar30->HairGroupInstances).AllocatorInstance.Data +
                           (longlong)(int)uVar31 * 8);
                pFVar29 = this_00;
                if (this_00 != (FRefCountBase *)0x0) {
                  LOCK();
                  *(int *)&this_00->field_0x8 = *(int *)&this_00->field_0x8 + 1;
                  UNLOCK();
                }
              }
              if ((bVar9) && (bVar9 = false, this_00 != (FRefCountBase *)0x0)) {
                FRefCountBase::Release(this_00);
              }
              if (pFVar29 != (FRefCountBase *)0x0) {
                LOCK();
                *(int *)&pFVar29->field_0x8 = *(int *)&pFVar29->field_0x8 + 1;
                UNLOCK();
              }
              pFVar28 = (this->GroupInstances).AllocatorInstance.Data;
              local_200 = pFVar29;
              if (((pFVar28 <= (FScriptContainerElement *)&local_200) &&
                  ((FScriptContainerElement *)&local_200 <
                   pFVar28 + (longlong)(this->GroupInstances).ArrayMax * 8)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar4 = (code *)swi(3);
                pFVar14 = (FOptimusGroomExecDataProviderProxy *)(*pcVar4)();
                return pFVar14;
              }
              iVar12 = (this->GroupInstances).ArrayNum;
              if (iVar12 == (this->GroupInstances).ArrayMax) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&(this->GroupInstances).AllocatorInstance,
                                    &(this->GroupInstances).ArrayMax);
              }
              (this->GroupInstances).ArrayNum = iVar12 + 1;
              pFVar28 = (this->GroupInstances).AllocatorInstance.Data;
              *(undefined8 *)(pFVar28 + (longlong)iVar12 * 8) = 0;
              *(FRefCountBase **)(pFVar28 + (longlong)iVar12 * 8) = local_200;
              pUVar30 = local_220;
              if (local_200 != (FRefCountBase *)0x0) {
                LOCK();
                *(int *)&local_200->field_0x8 = *(int *)&local_200->field_0x8 + 1;
                UNLOCK();
                if (local_200 != (FRefCountBase *)0x0) {
                  FRefCountBase::Release(local_200);
                  pUVar30 = local_220;
                }
              }
            }
          }
          uVar31 = uVar31 + 1;
          pFVar28 = local_210;
        } while (uVar31 < uVar21);
      }
    }
    uVar19 = (ulonglong)local_218;
    FVar24.Data = local_1e8 + 8;
  } while( true );
}

// GatherDispatchData @ 14e272070

void __thiscall
FOptimusGroomExecDataProviderProxy::GatherDispatchData
          (FOptimusGroomExecDataProviderProxy *this,FDispatchData *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uchar *puVar9;
  longlong lVar10;
  void *local_28;
  undefined8 local_20;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  (**(code **)(this->_padding_ + 8))(this,&local_28);
  puVar9 = param_1->ParameterBuffer + param_1->ParameterBufferOffset;
  iVar2 = param_1->NumInvocations;
  iVar3 = param_1->ParameterBufferStride;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((longlong)iVar3 & 0xfU) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((int)local_20 == iVar2) && (uVar8 = 0, 0 < iVar2)) {
    lVar10 = 0;
    while( true ) {
      uVar7 = 0;
      if ((int)uVar8 < (int)local_20) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = uVar8 + 1;
      puVar1 = (undefined8 *)(lVar10 + (longlong)local_28);
      uVar4 = *(undefined4 *)(lVar10 + 8 + (longlong)local_28);
      lVar10 = lVar10 + 0xc;
      *(undefined8 *)puVar9 = *puVar1;
      *(undefined4 *)(puVar9 + 8) = uVar4;
      puVar9 = puVar9 + iVar3;
      if (iVar2 <= (int)uVar8) break;
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// GetDispatchThreadCount @ 14e276370

int __thiscall
FOptimusGroomExecDataProviderProxy::GetDispatchThreadCount
          (FOptimusGroomExecDataProviderProxy *this,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  uVar3 = (this->GroupCounts).ArrayNum;
  if (-1 < (int)uVar3) {
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar3,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    pFVar9 = (this->GroupCounts).AllocatorInstance.Data;
    iVar7 = (this->GroupCounts).ArrayNum;
    pFVar2 = pFVar9 + (longlong)iVar7 * 4;
    while( true ) {
      if ((this->GroupCounts).ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == pFVar2) break;
      local_28 = *(undefined4 *)pFVar9;
      pFVar4 = (param_1->AllocatorInstance).Data;
      uStack_24 = 1;
      local_20 = 1;
      if ((pFVar4 <= (FScriptContainerElement *)&local_28) &&
         ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)*piVar1 * 0xc)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_1->AllocatorInstance,piVar1);
      }
      pFVar9 = pFVar9 + 4;
      param_1->ArrayNum = iVar8 + 1;
      pFVar4 = (param_1->AllocatorInstance).Data;
      *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_24,local_28);
      *(undefined4 *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = local_20;
    }
    return (this->GroupCounts).ArrayNum;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// IsValid @ 14e288f30

bool __thiscall
FOptimusGroomExecDataProviderProxy::IsValid
          (FOptimusGroomExecDataProviderProxy *this,FValidationData *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  if (param_1->ParameterStructSize == 0x10) {
    iVar4 = (this->GroupInstances).ArrayNum;
    if ((param_1->NumInvocations == iVar4) && ((this->GroupCounts).ArrayNum != 0)) {
      if ((this->Domain != ControlPoint) && (2 < (byte)(this->Domain - Curve))) {
LAB_14e289032:
        if ((this->Domain != GuidesPoints) && (2 < (byte)(this->Domain - GuidesCurves))) {
          return true;
        }
        bVar8 = UE::Groom::Private::HaveGuidesInstanceResources(&this->GroupInstances);
        return bVar8;
      }
      pFVar9 = (this->GroupInstances).AllocatorInstance.Data;
      pFVar2 = pFVar9 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this->GroupInstances).ArrayNum != iVar4) {
          `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar9 == pFVar2) goto LAB_14e289032;
        puVar5 = *(undefined8 **)pFVar9;
        if (puVar5 == (undefined8 *)0x0) {
          return false;
        }
        piVar1 = (int *)(puVar5 + 1);
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        lVar6 = puVar5[8];
        if (((((lVar6 == 0) || (lVar7 = puVar5[9], lVar7 == 0)) || (*(int *)(lVar6 + 0x18) == -1))
            || ((*(char *)(lVar6 + 0x21) == '\0' || (*(int *)(lVar7 + 0x18) == -1)))) ||
           (*(char *)(lVar7 + 0x21) == '\0')) break;
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
          (**(code **)*puVar5)(puVar5,1);
        }
        pFVar9 = pFVar9 + 8;
      }
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  return false;
}

