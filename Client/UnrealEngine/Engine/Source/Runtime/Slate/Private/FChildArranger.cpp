// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 12

// GetDesiredSize<1> @ 14279eae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TVector2<double> * __thiscall
UE::Slate::PrioritizedWrapBox::FChildArranger::GetDesiredSize<1>
          (FChildArranger *this,TVector2<double> *__return_storage_ptr__,
          SPrioritizedWrapBox *param_1,TPanelChildren<SPrioritizedWrapBox::FSlot> *param_2)

{
  uchar *puVar1;
  TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,TSizedDefaultAllocator<32>_>
  *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint *puVar7;
  code *pcVar8;
  float fVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FGeometry *pFVar16;
  TVector2<double> *pTVar17;
  longlong lVar18;
  longlong lVar19;
  ForElementType<int> *pFVar20;
  float *pfVar21;
  float *pfVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  ForElementType<int> FVar25;
  uint *puVar26;
  int *piVar27;
  uint uVar28;
  int *piVar29;
  FIdentityFunctor FVar30;
  uint uVar31;
  FBlock *pFVar32;
  FBlock *pFVar33;
  ForElementType<int> FVar34;
  uint uVar35;
  TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_> *this_00
  ;
  ulonglong uVar36;
  ulonglong uVar37;
  ForElementType<int> *pFVar38;
  FScriptContainerElement *pFVar39;
  longlong lVar40;
  ForElementType<int> FVar41;
  TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar42;
  int iVar43;
  int iVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStackY_3d8 [32];
  FIdentityFunctor local_388;
  ForAnyElementType local_380;
  undefined8 local_378;
  int local_370;
  uint *local_368;
  char local_360;
  undefined8 local_358;
  float local_348;
  float local_344;
  ForAnyElementType local_340;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  undefined8 local_328;
  TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,TSizedDefaultAllocator<32>_>
  local_320;
  undefined1 local_310 [4];
  uint local_30c;
  uint local_308;
  FScriptContainerElement *local_300;
  float local_2f8;
  int local_2f4;
  FChildArranger *local_2f0;
  longlong local_2e8;
  SPrioritizedWrapBox *local_2e0;
  ForElementType<int> local_2d8;
  undefined1 local_2c8 [16];
  FScriptContainerElement *local_2b8;
  TVector2<double> *local_2b0;
  FBlock *local_2a8;
  uint uStack_2a0;
  FBlock *local_298;
  uint uStack_290;
  undefined4 uStack_28c;
  FBlock *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  FBlock local_278;
  FBlock local_1f8;
  FBlock local_178;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_2f0 = this;
  local_2e0 = param_1;
  local_2b0 = __return_storage_ptr__;
  pFVar16 = SWidget::GetPaintSpaceGeometry((SWidget *)param_1);
  local_2f4 = (int)(float)param_1->PreferredSize;
  local_330 = (int)ROUND((*(float *)&pFVar16->Size + *(float *)&pFVar16->Size) - __real_3f000000) >>
              1;
  if ((this->NumPreferredWrappingChildren < 1) || (local_2f4 < local_330)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  iVar44 = this->NumParentWrappingChildren;
  if ((param_1->MinLineHeight).field_0x4 == '\0') {
    fVar50 = 0.0;
  }
  else {
    fVar50 = *(float *)&param_1->MinLineHeight;
  }
  local_2f8 = __real_7f7fffff;
  if (local_330 == 0) {
    this->LastParentLineLength = 0xffff;
    (this->LastParentSize).field0_0x0._s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::UnitVector.field0_0x0;
    local_330 = 0xffff;
    local_2f8 = fVar50;
  }
  iVar43 = local_330;
  bVar12 = UpdateChildProxies(this,param_2);
  if (bVar12) {
    UpdateBlocks(this,param_2,fVar50);
  }
  pFVar16 = SWidget::GetTickSpaceGeometry((SWidget *)param_1);
  local_358 = pFVar16->Size;
  if (((((float)local_358 != (this->LastParentSize).field0_0x0._s_0.X) ||
       (local_358._4_4_ != (this->LastParentSize).field0_0x0._s_0.Y)) ||
      ((bVar13 && (local_2f4 != this->LastPreferredLineLength)))) ||
     ((0 < iVar44 && (iVar43 != this->LastParentLineLength)))) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  local_328 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  if ((bVar12) || (bVar13)) {
    uVar6 = (this->Blocks).ArrayNum;
    local_370 = 0;
    local_320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_320.ArrayNum = 0;
    local_320.ArrayMax = 0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (0 < (int)uVar6) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar6,&local_320.AllocatorInstance,0,&local_320.ArrayMax);
    }
    iVar44 = (this->Blocks).ArrayNum;
    pFVar32 = (FBlock *)(this->Blocks).AllocatorInstance.Data;
    local_340.Data = (FScriptContainerElement *)0x0;
    local_338 = iVar44;
    if (iVar44 == 0) {
      local_334 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,iVar44,0,&local_340,iVar44,&local_334);
      ConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
                (local_340.Data,pFVar32,iVar44);
    }
    uVar6 = (this->Blocks).ArrayNum;
    local_380.Data = (FScriptContainerElement *)0x0;
    local_378 = 0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (0 < (int)uVar6) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,uVar6,&local_380,0,(int *)((longlong)&local_378 + 4));
    }
    iVar44 = (this->WrappableSortedBlockView).ArrayNum;
    fVar49 = 0.0;
    local_358 = (FDeprecateSlateVector2D)(this->WrappableSortedBlockView).DataPtr;
    fVar3 = param_1->LinePadding;
    local_368 = (uint *)CONCAT44(local_368._4_4_,iVar44);
    if ((iVar44 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TVector2<double> *)(*pcVar8)();
      return pTVar17;
    }
    uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar9 = __real_322bcc77;
    local_32c = 0;
    fVar47 = (float)local_328._4_4_;
    fVar48 = (float)(undefined4)local_328;
    FVar30 = local_388;
    if (0 < (this->Blocks).ArrayNum) {
      while (param_1 = local_2e0, iVar44 != 0) {
        if (local_320.ArrayNum == local_320.ArrayMax) {
          local_320.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&local_320.AllocatorInstance,&local_320.ArrayMax);
        }
        FVar11.Data = local_320.AllocatorInstance.Data;
        iVar44 = local_338;
        FVar10.Data = local_340.Data;
        lVar23 = (longlong)local_320.ArrayNum;
        local_320.ArrayNum = local_320.ArrayNum + 1;
        *(undefined8 *)(local_320.AllocatorInstance.Data + lVar23 * 0x28 + 4) = 0;
        *(undefined8 *)(local_320.AllocatorInstance.Data + lVar23 * 0x28 + 0xc) = 0;
        *(undefined4 *)(local_320.AllocatorInstance.Data + lVar23 * 0x28 + 0x14) = 0;
        *(undefined8 *)&local_320.AllocatorInstance.Data[lVar23 * 0x28 + 0x18].field_0x0 = 0;
        *(undefined8 *)(local_320.AllocatorInstance.Data + lVar23 * 0x28 + 0x20) = 0;
        *(int *)&local_320.AllocatorInstance.Data[lVar23 * 0x28].field_0x0 = local_32c;
        if ((local_338 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar8)();
          return pTVar17;
        }
        iVar43 = 0;
        if (0 < iVar44) {
          pFVar39 = FVar10.Data + 0x20;
          do {
            if ((iVar43 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              pTVar17 = (TVector2<double> *)(*pcVar8)();
              return pTVar17;
            }
            *(float *)(FVar11.Data + lVar23 * 0x28 + 4) =
                 *(float *)(pFVar39 + -4) + *(float *)(FVar11.Data + lVar23 * 0x28 + 4);
            *(float *)(FVar11.Data + lVar23 * 0x28 + 8) =
                 *(float *)pFVar39 + *(float *)(FVar11.Data + lVar23 * 0x28 + 8);
            lVar18 = 0x20;
            if (pFVar39[-0x16] == (FScriptContainerElement)0x0) {
              lVar18 = 0x1c;
            }
            *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) =
                 *(float *)(pFVar39 + lVar18 + -0x20) +
                 *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc);
            fVar46 = *(float *)(pFVar39 + -0x10);
            if (*(float *)(pFVar39 + -0x10) <= *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10)) {
              fVar46 = *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10);
            }
            *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10) = fVar46;
            iVar14 = *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20);
            if (iVar14 == *(int *)(FVar11.Data + lVar23 * 0x28 + 0x24)) {
              iVar14 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)(FVar11.Data + lVar23 * 0x28 + 0x18),
                                  (int *)(FVar11.Data + lVar23 * 0x28 + 0x24));
            }
            *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) = iVar14 + 1;
            FBlock::FBlock((FBlock *)
                           ((longlong)iVar14 * 0x78 +
                           *(longlong *)&FVar11.Data[lVar23 * 0x28 + 0x18].field_0x0),
                           (FBlock *)(pFVar39 + -0x20));
            iVar43 = iVar43 + 1;
            pFVar39 = pFVar39 + 0x78;
            FVar30 = local_388;
          } while (iVar43 < iVar44);
        }
        uVar37 = (ulonglong)local_368 & 0xffffffff;
        uVar35 = 0;
        local_2e8 = 0;
        iVar44 = (uint)local_368;
        pFVar32 = (FBlock *)local_358;
        pFVar33 = (FBlock *)local_358;
        while (((iVar43 = (int)uVar37, local_358 = (FDeprecateSlateVector2D)pFVar33, 0 < iVar44 &&
                (FVar30 = local_388, 1 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20))) &&
               (iVar43 != 0))) {
          uVar28 = 0;
          if ((int)uVar35 < iVar43) {
            uVar28 = ~uVar35 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            pTVar17 = (TVector2<double> *)(*pcVar8)();
            return pTVar17;
          }
          lVar18 = local_2e8;
          uVar35 = uVar35 + 1;
          lVar40 = local_2e8 * 0x78;
          lVar19 = local_2e8 + 1;
          local_308 = uVar35;
          if (pFVar32[local_2e8].bForceNewLine == false) {
            piVar29 = &pFVar32[local_2e8].WrapPriority;
            local_2e8 = lVar19;
LAB_14279f087:
            bVar13 = false;
          }
          else {
            local_2e8 = lVar19;
            if ((*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) < 1) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              pTVar17 = (TVector2<double> *)(*pcVar8)();
              return pTVar17;
            }
            piVar29 = &pFVar32[lVar18].WrapPriority;
            if (*piVar29 == *(int *)(*(longlong *)(FVar11.Data + lVar23 * 0x28 + 0x18) + 4))
            goto LAB_14279f087;
            bVar13 = true;
          }
          iVar44 = iVar44 + -1;
          pFVar33 = (FBlock *)local_358;
          if (bVar13) {
            local_278.bHasVerticalExpansion = pFVar32[lVar18].bHasVerticalExpansion;
            lVar19 = lVar40 + 0x20;
            if ((FScriptContainerElement)local_278.bHasVerticalExpansion ==
                (FScriptContainerElement)0x0) {
              lVar19 = lVar40 + 0x1c;
            }
            local_278.MinLength = pFVar32[lVar18].MinLength;
            local_278.ReserveLength = pFVar32[lVar18].ReserveLength;
            FVar41 = (ForElementType<int>)&pFVar32[lVar18].SlotIndices;
            uVar28 = *(uint *)((pFVar32->SlotIndices).AllocatorInstance.InlineData + lVar19 + -0x28)
            ;
            local_278.SequentialIndex = pFVar32[lVar18].SequentialIndex;
            local_278.SlotIndices.ArrayNum =
                 ((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)FVar41)->
                 ArrayNum;
            lVar19 = (longlong)local_278.SlotIndices.ArrayNum;
            local_278.WrapPriority = *piVar29;
            local_278.bCanWrap = pFVar32[lVar18].bCanWrap;
            local_278.bForceNewLine = pFVar32[lVar18].bForceNewLine;
            local_278.bCanVerticallyExpand = pFVar32[lVar18].bCanVerticallyExpand;
            local_278.DesiredSize.field0_0x0 = pFVar32[lVar18].DesiredSize.field0_0x0;
            local_278.AdjustedSize.field0_0x0 = pFVar32[lVar18].AdjustedSize.field0_0x0;
            FVar25 = (((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                      FVar41)->AllocatorInstance).SecondaryData;
            local_278.Area = pFVar32[lVar18].Area;
            if (FVar25 != (ForElementType<int>)0x0) {
              FVar41 = FVar25;
            }
            local_278.SlotIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
            if (local_278.SlotIndices.ArrayNum == 0) {
              local_278.SlotIndices.ArrayMax = 0x10;
            }
            else {
              Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (4,4,local_278.SlotIndices.ArrayNum,0,
                         &local_278.SlotIndices.AllocatorInstance,local_278.SlotIndices.ArrayNum,
                         &local_278.SlotIndices.ArrayMax);
              FVar25 = (ForElementType<int>)&local_278.SlotIndices;
              if (local_278.SlotIndices.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)
              {
                FVar25 = local_278.SlotIndices.AllocatorInstance.SecondaryData;
              }
              memcpy((void *)FVar25,(void *)FVar41,lVar19 << 2);
            }
            piVar29 = *(int **)(FVar11.Data + lVar23 * 0x28 + 0x18);
            if (piVar29 != piVar29 + (longlong)*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) * 0x1e)
            {
              piVar27 = piVar29;
LAB_14279f1c5:
              if (*piVar27 != pFVar32[lVar18].SequentialIndex) goto code_r0x00014279f1c9;
              lVar19 = SUB168(SEXT816(-0x7777777777777777) *
                              SEXT816((longlong)piVar27 - (longlong)piVar29),8) +
                       ((longlong)piVar27 - (longlong)piVar29);
              iVar43 = (int)(lVar19 >> 6) - (int)(lVar19 >> 0x3f);
              if (iVar43 != -1) {
                lVar19 = lVar40 + 0x20;
                if (pFVar32[lVar18].bHasVerticalExpansion == false) {
                  lVar19 = lVar40 + 0x1c;
                }
                *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) =
                     *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) -
                     *(float *)((pFVar32->SlotIndices).AllocatorInstance.InlineData + lVar19 + -0x28
                               );
                *(float *)(FVar11.Data + lVar23 * 0x28 + 4) =
                     *(float *)(FVar11.Data + lVar23 * 0x28 + 4) - pFVar32[lVar18].MinLength;
                *(float *)(FVar11.Data + lVar23 * 0x28 + 8) =
                     *(float *)(FVar11.Data + lVar23 * 0x28 + 8) - pFVar32[lVar18].ReserveLength;
                TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                ::RemoveAt((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                            *)(FVar11.Data + lVar23 * 0x28 + 0x18),iVar43,No);
                uVar31 = 0;
                *(undefined4 *)(FVar11.Data + lVar23 * 0x28 + 0x10) = 0;
                if (0 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20)) {
                  lVar18 = 0;
                  do {
                    uVar15 = 0;
                    if ((int)uVar31 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20)) {
                      uVar15 = ~uVar31 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      pTVar17 = (TVector2<double> *)(*pcVar8)();
                      return pTVar17;
                    }
                    uVar31 = uVar31 + 1;
                    fVar46 = *(float *)(lVar18 + 0x10 +
                                       *(longlong *)(FVar11.Data + lVar23 * 0x28 + 0x18));
                    lVar18 = lVar18 + 0x78;
                    if (fVar46 <= *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10)) {
                      fVar46 = *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10);
                    }
                    *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10) = fVar46;
                  } while ((int)uVar31 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20));
                }
                if (fVar9 < (float)(uVar28 & uVar6)) {
                  iVar43 = (int)local_378;
                  if ((int)local_378 == local_378._4_4_) {
                    iVar43 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x878,&local_380,(int *)((longlong)&local_378 + 4));
                  }
                  local_378 = CONCAT44(local_378._4_4_,iVar43 + 1);
                  FBlock::FBlock((FBlock *)(local_380.Data + (longlong)iVar43 * 0x78),&local_278);
                }
                uVar37 = (ulonglong)(int)(uint)local_368;
                uVar28 = (uint)local_368;
                if ((int)((uint)local_368 - uVar35) < (int)(uint)local_368) {
                  uVar28 = (uint)local_368 - uVar35;
                }
                uVar31 = 0;
                if (0 < (int)uVar28) {
                  uVar31 = uVar28;
                }
                local_30c = uVar31;
                if (((int)uVar31 < 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  pTVar17 = (TVector2<double> *)(*pcVar8)();
                  return pTVar17;
                }
                uVar28 = uVar31 - 1;
                local_300 = (FScriptContainerElement *)CONCAT44(local_300._4_4_,uVar28);
                if (-1 < (int)uVar28) {
                  this_00 = (TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                             *)(FVar11.Data + lVar23 * 0x28 + 0x18);
                  pFVar38 = &pFVar32[(uVar37 - (longlong)(int)uVar31) + (longlong)(int)uVar28].
                             SlotIndices.AllocatorInstance.SecondaryData;
                  do {
                    uVar35 = 0;
                    if ((int)uVar28 < (int)uVar31) {
                      uVar35 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar35 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      pTVar17 = (TVector2<double> *)(*pcVar8)();
                      return pTVar17;
                    }
                    lVar18 = 0x20;
                    if (pFVar38[-0xc].field_0x2 == '\0') {
                      lVar18 = 0x1c;
                    }
                    uVar35 = *(uint *)((longlong)&pFVar38[-0xd].field_0x0 + lVar18);
                    local_278.SequentialIndex = *(int *)(pFVar38 + -0xd);
                    local_278.WrapPriority = *(int *)&pFVar38[-0xd].field_0x4;
                    local_278.bCanWrap = *(bool *)(pFVar38 + -0xc);
                    local_278.bForceNewLine = (bool)pFVar38[-0xc].field_0x1;
                    local_278.bHasVerticalExpansion = (bool)pFVar38[-0xc].field_0x2;
                    local_278.bCanVerticallyExpand = (bool)pFVar38[-0xc].field_0x3;
                    local_278.DesiredSize.field0_0x0 =
                         *(TVector2<float>_u_0 *)&pFVar38[-0xc].field_0x4;
                    local_278.AdjustedSize.field0_0x0 =
                         *(TVector2<float>_u_0 *)&pFVar38[-0xb].field_0x4;
                    local_278.MinLength = *(float *)&pFVar38[-10].field_0x4;
                    local_278.ReserveLength = *(float *)(pFVar38 + -9);
                    local_278.Area = *(float *)&pFVar38[-9].field_0x4;
                    if (&local_278.SlotIndices !=
                        (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                        (pFVar38 + -8)) {
                      iVar43 = *(int *)(pFVar38 + 1);
                      FVar25 = (ForElementType<int>)(pFVar38 + -8);
                      if (*pFVar38 != (ForElementType<int>)0x0) {
                        FVar25 = *pFVar38;
                      }
                      local_278.SlotIndices.ArrayNum = iVar43;
                      if ((iVar43 == 0) && (local_278.SlotIndices.ArrayMax == 0)) {
                        local_278.SlotIndices.ArrayMax = 0x10;
                      }
                      else {
                        Core::Private::
                        ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                  (4,4,iVar43,local_278.SlotIndices.ArrayMax,
                                   &local_278.SlotIndices.AllocatorInstance,iVar43,
                                   &local_278.SlotIndices.ArrayMax);
                        FVar41 = (ForElementType<int>)&local_278.SlotIndices;
                        if (local_278.SlotIndices.AllocatorInstance.SecondaryData !=
                            (ForElementType<int>)0x0) {
                          FVar41 = local_278.SlotIndices.AllocatorInstance.SecondaryData;
                        }
                        if (iVar43 != 0) {
                          memcpy((void *)FVar41,(void *)FVar25,(longlong)iVar43 << 2);
                        }
                      }
                    }
                    pFVar39 = (this_00->AllocatorInstance).Data;
                    if (pFVar39 != pFVar39 + (longlong)this_00->ArrayNum * 0x78) {
                      pFVar24 = pFVar39;
                      do {
                        if (*(int *)pFVar24 == *(int *)(pFVar38 + -0xd)) {
                          lVar18 = SUB168(SEXT816(-0x7777777777777777) *
                                          SEXT816((longlong)pFVar24 - (longlong)pFVar39),8) +
                                   ((longlong)pFVar24 - (longlong)pFVar39);
                          iVar43 = (int)(lVar18 >> 6) - (int)(lVar18 >> 0x3f);
                          if (iVar43 != -1) {
                            pFVar20 = pFVar38 + -9;
                            if (pFVar38[-0xc].field_0x2 == '\0') {
                              pFVar20 = (ForElementType<int> *)&pFVar38[-10].field_0x4;
                            }
                            *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) =
                                 *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) - *(float *)pFVar20;
                            *(float *)(FVar11.Data + lVar23 * 0x28 + 4) =
                                 *(float *)(FVar11.Data + lVar23 * 0x28 + 4) -
                                 *(float *)&pFVar38[-10].field_0x4;
                            *(float *)(FVar11.Data + lVar23 * 0x28 + 8) =
                                 *(float *)(FVar11.Data + lVar23 * 0x28 + 8) -
                                 *(float *)(pFVar38 + -9);
                            TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                            ::RemoveAt(this_00,iVar43,No);
                            uVar28 = 0;
                            *(undefined4 *)(FVar11.Data + lVar23 * 0x28 + 0x10) = 0;
                            if (0 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20)) {
                              lVar18 = 0;
                              do {
                                uVar31 = 0;
                                if ((int)uVar28 < this_00->ArrayNum) {
                                  uVar31 = ~uVar28 >> 0x1f;
                                }
                                if ((uVar31 == 0) &&
                                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar13)) {
                                  pcVar8 = (code *)swi(3);
                                  pTVar17 = (TVector2<double> *)(*pcVar8)();
                                  return pTVar17;
                                }
                                uVar28 = uVar28 + 1;
                                fVar46 = *(float *)((this_00->AllocatorInstance).Data +
                                                   lVar18 + 0x10);
                                lVar18 = lVar18 + 0x78;
                                if (fVar46 <= *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10)) {
                                  fVar46 = *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10);
                                }
                                *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10) = fVar46;
                              } while ((int)uVar28 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20));
                            }
                            if (fVar9 < (float)(uVar35 & uVar6)) {
                              iVar43 = (int)local_378;
                              if ((int)local_378 == local_378._4_4_) {
                                iVar43 = Core::Private::
                                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                   (0x878,&local_380,
                                                    (int *)((longlong)&local_378 + 4));
                              }
                              lVar18 = (longlong)iVar43 * 0x78;
                              local_378 = CONCAT44(local_378._4_4_,iVar43 + 1);
                              *(int *)&local_380.Data[lVar18].field_0x0 = local_278.SequentialIndex;
                              FVar41 = (ForElementType<int>)
                                       ((longlong)local_380.Data + lVar18 + 0x28);
                              *(int *)(local_380.Data + lVar18 + 4) = local_278.WrapPriority;
                              local_380.Data[lVar18 + 8] =
                                   (FScriptContainerElement)local_278.bCanWrap;
                              local_380.Data[lVar18 + 9] =
                                   (FScriptContainerElement)local_278.bForceNewLine;
                              local_380.Data[lVar18 + 10] =
                                   (FScriptContainerElement)local_278.bHasVerticalExpansion;
                              local_380.Data[lVar18 + 0xb] =
                                   (FScriptContainerElement)local_278.bCanVerticallyExpand;
                              *(TVector2<float>_u_0 *)(local_380.Data + lVar18 + 0xc) =
                                   local_278.DesiredSize.field0_0x0;
                              *(TVector2<float>_u_0 *)(local_380.Data + lVar18 + 0x14) =
                                   local_278.AdjustedSize.field0_0x0;
                              *(float *)(local_380.Data + lVar18 + 0x1c) = local_278.MinLength;
                              *(float *)(local_380.Data + lVar18 + 0x20) = local_278.ReserveLength;
                              *(float *)(local_380.Data + lVar18 + 0x24) = local_278.Area;
                              *(ForElementType<int> *)((longlong)FVar41 + 0x40) =
                                   (ForElementType<int>)0x0;
                              lVar18 = (longlong)local_278.SlotIndices.ArrayNum;
                              *(int *)((ForElementType<int> *)((longlong)FVar41 + 0x48))->InlineData
                                   = local_278.SlotIndices.ArrayNum;
                              FVar25 = (ForElementType<int>)&local_278.SlotIndices;
                              if (local_278.SlotIndices.AllocatorInstance.SecondaryData !=
                                  (ForElementType<int>)0x0) {
                                FVar25 = local_278.SlotIndices.AllocatorInstance.SecondaryData;
                              }
                              puVar1 = (uchar *)((longlong)FVar41 + 0x4c);
                              if (local_278.SlotIndices.ArrayNum == 0) {
                                puVar1[0] = '\x10';
                                puVar1[1] = '\0';
                                puVar1[2] = '\0';
                                puVar1[3] = '\0';
                              }
                              else {
                                Core::Private::
                                ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                          (4,4,local_278.SlotIndices.ArrayNum,0,
                                           (ForElementType<int> *)FVar41,
                                           local_278.SlotIndices.ArrayNum,(int *)puVar1);
                                if (*(ForElementType<int> *)((longlong)FVar41 + 0x40) !=
                                    (ForElementType<int>)0x0) {
                                  FVar41 = *(ForElementType<int> *)((longlong)FVar41 + 0x40);
                                }
                                memcpy((void *)FVar41,(void *)FVar25,lVar18 << 2);
                              }
                              this_00 = (TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                                         *)(FVar11.Data + lVar23 * 0x28 + 0x18);
                            }
                          }
                          break;
                        }
                        pFVar24 = pFVar24 + 0x78;
                      } while (pFVar24 != pFVar39 + (longlong)this_00->ArrayNum * 0x78);
                    }
                    uVar28 = (int)local_300 - 1;
                    pFVar38 = pFVar38 + -0xf;
                    local_300 = (FScriptContainerElement *)CONCAT44(local_300._4_4_,uVar28);
                    pFVar32 = (FBlock *)local_358;
                    uVar35 = local_308;
                    uVar31 = local_30c;
                  } while (-1 < (int)uVar28);
                  goto LAB_14279f7a1;
                }
                goto LAB_14279f7a6;
              }
            }
LAB_14279f7a1:
            uVar37 = (ulonglong)local_368 & 0xffffffff;
LAB_14279f7a6:
            pFVar33 = (FBlock *)local_358;
            if (local_278.SlotIndices.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FMemory::Free((void *)local_278.SlotIndices.AllocatorInstance.SecondaryData);
              pFVar33 = (FBlock *)local_358;
            }
          }
        }
        uVar36 = uVar37 & 0xffffffff;
        if (0 < iVar43) {
          fVar46 = (float)local_330;
          do {
            FVar30 = local_388;
            if (((*(float *)(FVar11.Data + lVar23 * 0x28 + 8) <= fVar46) ||
                (*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) < 2)) ||
               (iVar44 = (int)uVar37, iVar44 == 0)) break;
            uVar35 = 0;
            if ((int)(iVar44 - 1U) < iVar44) {
              uVar35 = ~(iVar44 - 1U) >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              pTVar17 = (TVector2<double> *)(*pcVar8)();
              return pTVar17;
            }
            lVar18 = (longlong)(iVar44 + -1);
            if ((pFVar33[lVar18].bCanWrap == false) ||
               (pFVar33[lVar18].bCanVerticallyExpand == false)) {
LAB_14279fc0a:
              uVar36 = (ulonglong)((int)uVar36 - 1);
            }
            else {
              if ((*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) < 1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                pTVar17 = (TVector2<double> *)(*pcVar8)();
                return pTVar17;
              }
              iVar44 = pFVar33[lVar18].WrapPriority;
              if (iVar44 == *(int *)(*(longlong *)(FVar11.Data + lVar23 * 0x28 + 0x18) + 4))
              goto LAB_14279fc0a;
              bVar13 = pFVar33[lVar18].bHasVerticalExpansion;
              pfVar22 = &pFVar33->ReserveLength;
              uVar36 = (ulonglong)((int)uVar36 - 1);
              if (bVar13 == false) {
                pfVar22 = &pFVar33->MinLength;
              }
              fVar45 = pFVar33[lVar18].ReserveLength;
              fVar4 = pFVar33[lVar18].MinLength;
              fVar5 = pfVar22[lVar18 * 0x1e];
              if ((fVar4 == fVar45) ||
                 (fVar46 < *(float *)(FVar11.Data + lVar23 * 0x28 + 8) ||
                  fVar46 == *(float *)(FVar11.Data + lVar23 * 0x28 + 8))) {
                local_1f8.SequentialIndex = pFVar33[lVar18].SequentialIndex;
                FVar41 = (ForElementType<int>)&pFVar33[lVar18].SlotIndices;
                local_1f8.bCanWrap = pFVar33[lVar18].bCanWrap;
                local_1f8.bForceNewLine = pFVar33[lVar18].bForceNewLine;
                local_1f8.SlotIndices.ArrayNum =
                     ((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                     FVar41)->ArrayNum;
                lVar19 = (longlong)local_1f8.SlotIndices.ArrayNum;
                local_1f8.bCanVerticallyExpand = pFVar33[lVar18].bCanVerticallyExpand;
                local_1f8.DesiredSize.field0_0x0 = pFVar33[lVar18].DesiredSize.field0_0x0;
                local_1f8.AdjustedSize.field0_0x0 = pFVar33[lVar18].AdjustedSize.field0_0x0;
                FVar25 = (((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                          FVar41)->AllocatorInstance).SecondaryData;
                local_1f8.Area = pFVar33[lVar18].Area;
                if (FVar25 != (ForElementType<int>)0x0) {
                  FVar41 = FVar25;
                }
                local_1f8.SlotIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
                local_1f8.WrapPriority = iVar44;
                local_1f8.bHasVerticalExpansion = bVar13;
                local_1f8.MinLength = fVar4;
                local_1f8.ReserveLength = fVar45;
                if (local_1f8.SlotIndices.ArrayNum == 0) {
                  local_1f8.SlotIndices.ArrayMax = 0x10;
                }
                else {
                  Core::Private::
                  ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (4,4,local_1f8.SlotIndices.ArrayNum,0,
                             &local_1f8.SlotIndices.AllocatorInstance,local_1f8.SlotIndices.ArrayNum
                             ,&local_1f8.SlotIndices.ArrayMax);
                  FVar25 = (ForElementType<int>)&local_1f8.SlotIndices;
                  if (local_1f8.SlotIndices.AllocatorInstance.SecondaryData !=
                      (ForElementType<int>)0x0) {
                    FVar25 = local_1f8.SlotIndices.AllocatorInstance.SecondaryData;
                  }
                  memcpy((void *)FVar25,(void *)FVar41,lVar19 << 2);
                }
                piVar29 = *(int **)(FVar11.Data + lVar23 * 0x28 + 0x18);
                if (piVar29 !=
                    piVar29 + (longlong)*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) * 0x1e) {
                  piVar27 = piVar29;
LAB_14279fa18:
                  if (*piVar27 != pFVar33[lVar18].SequentialIndex) goto code_r0x00014279fa1c;
                  lVar19 = SUB168(SEXT816(-0x7777777777777777) *
                                  SEXT816((longlong)piVar27 - (longlong)piVar29),8) +
                           ((longlong)piVar27 - (longlong)piVar29);
                  iVar44 = (int)(lVar19 >> 6) - (int)(lVar19 >> 0x3f);
                  if (iVar44 != -1) {
                    pfVar22 = &pFVar33->ReserveLength;
                    if (pFVar33[lVar18].bHasVerticalExpansion == false) {
                      pfVar22 = &pFVar33->MinLength;
                    }
                    *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) =
                         *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) - pfVar22[lVar18 * 0x1e];
                    *(float *)(FVar11.Data + lVar23 * 0x28 + 4) =
                         *(float *)(FVar11.Data + lVar23 * 0x28 + 4) - pFVar33[lVar18].MinLength;
                    *(float *)(FVar11.Data + lVar23 * 0x28 + 8) =
                         *(float *)(FVar11.Data + lVar23 * 0x28 + 8) - pFVar33[lVar18].ReserveLength
                    ;
                    TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                    ::RemoveAt((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                                *)(FVar11.Data + lVar23 * 0x28 + 0x18),iVar44,No);
                    uVar35 = 0;
                    *(undefined4 *)(FVar11.Data + lVar23 * 0x28 + 0x10) = 0;
                    if (0 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20)) {
                      lVar18 = 0;
                      do {
                        uVar28 = 0;
                        if ((int)uVar35 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20)) {
                          uVar28 = ~uVar35 >> 0x1f;
                        }
                        if ((uVar28 == 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar8 = (code *)swi(3);
                          pTVar17 = (TVector2<double> *)(*pcVar8)();
                          return pTVar17;
                        }
                        uVar35 = uVar35 + 1;
                        fVar45 = *(float *)(*(longlong *)(FVar11.Data + lVar23 * 0x28 + 0x18) + 0x10
                                           + lVar18);
                        lVar18 = lVar18 + 0x78;
                        if (fVar45 <= *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10)) {
                          fVar45 = *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10);
                        }
                        *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10) = fVar45;
                      } while ((int)uVar35 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20));
                    }
                    if (fVar9 < (float)((uint)fVar5 & uVar6)) {
                      iVar44 = (int)local_378;
                      if ((int)local_378 == local_378._4_4_) {
                        iVar44 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x878,&local_380,(int *)((longlong)&local_378 + 4));
                      }
                      local_378 = CONCAT44(local_378._4_4_,iVar44 + 1);
                      FBlock::FBlock((FBlock *)(local_380.Data + (longlong)iVar44 * 0x78),&local_1f8
                                    );
                    }
                    uVar35 = (uint)local_368;
                    if ((int)((uint)local_368 - 1) < (int)(uint)local_368) {
                      uVar35 = (uint)local_368 - 1;
                    }
                    uStack_2a0 = 0;
                    if (0 < (int)uVar35) {
                      uStack_2a0 = uVar35;
                    }
                    local_2a8 = pFVar33;
                    if (((int)uStack_2a0 < 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("ArrayNum >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xfe,L""), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      pTVar17 = (TVector2<double> *)(*pcVar8)();
                      return pTVar17;
                    }
                    local_368 = (uint *)CONCAT44(local_368._4_4_,uStack_2a0);
                    pFVar33 = local_2a8;
                    uVar35 = uStack_2a0;
                    goto LAB_14279fa2a;
                  }
                }
LAB_14279fa25:
                uVar35 = (uint)local_368;
LAB_14279fa2a:
                uVar37 = (ulonglong)uVar35;
                if (local_1f8.SlotIndices.AllocatorInstance.SecondaryData !=
                    (ForElementType<int>)0x0) {
                  FMemory::Free((void *)local_1f8.SlotIndices.AllocatorInstance.SecondaryData);
                }
              }
            }
          } while (0 < (int)uVar36);
        }
        local_358 = (FDeprecateSlateVector2D)pFVar33;
        fVar46 = (float)local_330;
        pFVar32 = (FBlock *)local_358;
        if (fVar46 < *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc)) {
          while ((uVar35 = (uint)uVar37, FVar30 = local_388,
                 1 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) && (uVar35 != 0))) {
            uVar28 = 0;
            if ((int)(uVar35 - 1) < (int)uVar35) {
              uVar28 = ~(uVar35 - 1) >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              pTVar17 = (TVector2<double> *)(*pcVar8)();
              return pTVar17;
            }
            lVar18 = (longlong)(int)(uVar35 - 1);
            if (pFVar32[lVar18].bCanWrap == false) {
              if ((*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) < 1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                pTVar17 = (TVector2<double> *)(*pcVar8)();
                return pTVar17;
              }
              if (pFVar32[lVar18].WrapPriority !=
                  *(int *)(*(longlong *)(FVar11.Data + lVar23 * 0x28 + 0x18) + 4))
              goto LAB_14279fd04;
            }
            else {
LAB_14279fd04:
              bVar13 = pFVar32[lVar18].bHasVerticalExpansion;
              if (bVar13 == false) {
                fVar45 = pFVar32[lVar18].MinLength;
                if ((fVar45 != pFVar32[lVar18].ReserveLength) &&
                   ((*(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) - fVar45) + fVar45 < fVar46))
                goto LAB_14279ffee;
              }
              else {
                fVar45 = pFVar32[lVar18].ReserveLength;
              }
              local_178.SequentialIndex = pFVar32[lVar18].SequentialIndex;
              local_178.MinLength = pFVar32[lVar18].MinLength;
              FVar41 = (ForElementType<int>)&pFVar32[lVar18].SlotIndices;
              local_178.ReserveLength = pFVar32[lVar18].ReserveLength;
              local_178.WrapPriority = pFVar32[lVar18].WrapPriority;
              local_178.SlotIndices.ArrayNum =
                   ((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)FVar41)
                   ->ArrayNum;
              lVar19 = (longlong)local_178.SlotIndices.ArrayNum;
              local_178.bCanWrap = pFVar32[lVar18].bCanWrap;
              local_178.bForceNewLine = pFVar32[lVar18].bForceNewLine;
              local_178.bCanVerticallyExpand = pFVar32[lVar18].bCanVerticallyExpand;
              local_178.DesiredSize.field0_0x0 = pFVar32[lVar18].DesiredSize.field0_0x0;
              local_178.AdjustedSize.field0_0x0 = pFVar32[lVar18].AdjustedSize.field0_0x0;
              FVar25 = (((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                        FVar41)->AllocatorInstance).SecondaryData;
              local_178.Area = pFVar32[lVar18].Area;
              if (FVar25 != (ForElementType<int>)0x0) {
                FVar41 = FVar25;
              }
              local_178.SlotIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
              local_178.bHasVerticalExpansion = bVar13;
              if (local_178.SlotIndices.ArrayNum == 0) {
                local_178.SlotIndices.ArrayMax = 0x10;
              }
              else {
                Core::Private::
                ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (4,4,local_178.SlotIndices.ArrayNum,0,
                           &local_178.SlotIndices.AllocatorInstance,local_178.SlotIndices.ArrayNum,
                           &local_178.SlotIndices.ArrayMax);
                FVar25 = (ForElementType<int>)&local_178.SlotIndices;
                if (local_178.SlotIndices.AllocatorInstance.SecondaryData !=
                    (ForElementType<int>)0x0) {
                  FVar25 = local_178.SlotIndices.AllocatorInstance.SecondaryData;
                }
                memcpy((void *)FVar25,(void *)FVar41,lVar19 << 2);
              }
              piVar29 = *(int **)(FVar11.Data + lVar23 * 0x28 + 0x18);
              if (piVar29 != piVar29 + (longlong)*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) * 0x1e
                 ) {
                piVar27 = piVar29;
                do {
                  if (*piVar27 == pFVar32[lVar18].SequentialIndex) {
                    lVar19 = SUB168(SEXT816(-0x7777777777777777) *
                                    SEXT816((longlong)piVar27 - (longlong)piVar29),8) +
                             ((longlong)piVar27 - (longlong)piVar29);
                    iVar44 = (int)(lVar19 >> 6) - (int)(lVar19 >> 0x3f);
                    if (iVar44 != -1) {
                      pfVar22 = &pFVar32->ReserveLength;
                      if (pFVar32[lVar18].bHasVerticalExpansion == false) {
                        pfVar22 = &pFVar32->MinLength;
                      }
                      *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) =
                           *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) - pfVar22[lVar18 * 0x1e];
                      *(float *)(FVar11.Data + lVar23 * 0x28 + 4) =
                           *(float *)(FVar11.Data + lVar23 * 0x28 + 4) - pFVar32[lVar18].MinLength;
                      *(float *)(FVar11.Data + lVar23 * 0x28 + 8) =
                           *(float *)(FVar11.Data + lVar23 * 0x28 + 8) -
                           pFVar32[lVar18].ReserveLength;
                      TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                      ::RemoveAt((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                                  *)(FVar11.Data + lVar23 * 0x28 + 0x18),iVar44,No);
                      uVar35 = 0;
                      *(undefined4 *)(FVar11.Data + lVar23 * 0x28 + 0x10) = 0;
                      if (0 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20)) {
                        lVar18 = 0;
                        do {
                          uVar28 = 0;
                          if ((int)uVar35 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20)) {
                            uVar28 = ~uVar35 >> 0x1f;
                          }
                          if ((uVar28 == 0) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar8 = (code *)swi(3);
                            pTVar17 = (TVector2<double> *)(*pcVar8)();
                            return pTVar17;
                          }
                          uVar35 = uVar35 + 1;
                          fVar4 = *(float *)(*(longlong *)(FVar11.Data + lVar23 * 0x28 + 0x18) +
                                             0x10 + lVar18);
                          lVar18 = lVar18 + 0x78;
                          if (fVar4 <= *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10)) {
                            fVar4 = *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10);
                          }
                          *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10) = fVar4;
                        } while ((int)uVar35 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20));
                      }
                      if (fVar9 < (float)((uint)fVar45 & uVar6)) {
                        iVar44 = (int)local_378;
                        if ((int)local_378 == local_378._4_4_) {
                          iVar44 = Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x878,&local_380,(int *)((longlong)&local_378 + 4));
                        }
                        local_378 = CONCAT44(local_378._4_4_,iVar44 + 1);
                        FBlock::FBlock((FBlock *)(local_380.Data + (longlong)iVar44 * 0x78),
                                       &local_178);
                      }
                    }
                    break;
                  }
                  piVar27 = piVar27 + 0x1e;
                } while (piVar27 !=
                         piVar29 + (longlong)*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) * 0x1e);
              }
              if (local_178.SlotIndices.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)
              {
                FMemory::Free((void *)local_178.SlotIndices.AllocatorInstance.SecondaryData);
              }
              uVar35 = (uint)local_368;
            }
LAB_14279ffee:
            if ((int)(uVar35 - 1) < (int)uVar35) {
              uVar35 = uVar35 - 1;
            }
            uStack_290 = 0;
            if (0 < (int)uVar35) {
              uStack_290 = uVar35;
            }
            local_298 = pFVar32;
            if (((int)uStack_290 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar13)) {
              pcVar8 = (code *)swi(3);
              pTVar17 = (TVector2<double> *)(*pcVar8)();
              return pTVar17;
            }
            local_2c8._8_4_ = uStack_290;
            local_2c8._0_8_ = local_298;
            local_2c8._12_4_ = uStack_28c;
            if (*(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) <= fVar46) break;
            local_368 = (uint *)CONCAT44(local_368._4_4_,uStack_290);
            pFVar32 = local_298;
            uVar37 = (ulonglong)uStack_290;
          }
        }
        param_1 = local_2e0;
        this = local_2f0;
        if (*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) == 0) break;
        if ((*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar8)();
          return pTVar17;
        }
        puVar7 = *(uint **)(FVar11.Data + lVar23 * 0x28 + 0x18);
        uVar28 = *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) - 1;
        uVar35 = 0;
        if ((int)uVar28 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20)) {
          uVar35 = ~uVar28 >> 0x1f;
        }
        local_368 = puVar7;
        if ((uVar35 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar8)();
          return pTVar17;
        }
        lVar19 = (longlong)*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20);
        pFVar32 = *(FBlock **)(FVar11.Data + lVar23 * 0x28 + 0x18);
        lVar18 = lVar19 * 0x78;
        local_358 = (FDeprecateSlateVector2D)pFVar32;
        local_2e8 = lVar18;
        if (((int)puVar7[0x1c] < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar8)();
          return pTVar17;
        }
        pfVar22 = (float *)(puVar7 + 10);
        if (*(float **)(puVar7 + 0x1a) != (float *)0x0) {
          pfVar22 = *(float **)(puVar7 + 0x1a);
        }
        local_348 = *pfVar22;
        pTVar42 = &pFVar32[lVar19 + -1].SlotIndices;
        uVar28 = pTVar42->ArrayNum - 1;
        uVar35 = 0;
        if ((int)uVar28 < pTVar42->ArrayNum) {
          uVar35 = ~uVar28 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar8)();
          return pTVar17;
        }
        FVar25 = (pTVar42->AllocatorInstance).SecondaryData;
        FVar41 = (ForElementType<int>)pTVar42;
        if (FVar25 != (ForElementType<int>)0x0) {
          FVar41 = FVar25;
        }
        local_344 = ((float *)((longlong)FVar41 + -4))[pTVar42->ArrayNum];
        lVar40 = (longlong)(int)local_348;
        uVar35 = 0;
        if ((int)local_348 < (local_2f0->ChildProxies).ArrayNum) {
          uVar35 = ~(uint)local_348 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar8)();
          return pTVar17;
        }
        pFVar39 = (local_2f0->ChildProxies).AllocatorInstance.Data + lVar40 * 0xd0;
        lVar40 = (longlong)(int)local_344;
        uVar35 = 0;
        if ((int)local_344 < (local_2f0->ChildProxies).ArrayNum) {
          uVar35 = ~(uint)local_344 >> 0x1f;
        }
        local_2b8 = pFVar39;
        if ((uVar35 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar8)();
          return pTVar17;
        }
        local_300 = (local_2f0->ChildProxies).AllocatorInstance.Data + lVar40 * 0xd0;
        local_30c = ((FBlock *)((longlong)local_358 + (lVar19 + -1) * 0x78))->SequentialIndex;
        local_308 = *puVar7;
        local_360 = local_348 == local_344;
        if (pFVar39[0xc9] != (FScriptContainerElement)0x0) {
          pfVar22 = *(float **)(puVar7 + 0x1a);
          pfVar21 = (float *)(puVar7 + 10);
          if (pfVar22 != (float *)0x0) {
            pfVar21 = pfVar22;
          }
          if (pfVar21 <= &local_348) {
            pfVar21 = (float *)(puVar7 + 10);
            if (pfVar22 != (float *)0x0) {
              pfVar21 = pfVar22;
            }
            if ((&local_348 < pfVar21 + (int)puVar7[0x1d]) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar8 = (code *)swi(3);
              pTVar17 = (TVector2<double> *)(*pcVar8)();
              return pTVar17;
            }
          }
          uVar35 = puVar7[0x1c];
          if (uVar35 != 0) {
            FVar25 = (ForElementType<int>)(puVar7 + 10);
            if (*(ForElementType<int> *)(puVar7 + 0x1a) != (ForElementType<int>)0x0) {
              FVar25 = *(ForElementType<int> *)(puVar7 + 0x1a);
            }
            uVar31 = 0;
            lVar18 = 0;
            local_388 = (FIdentityFunctor)(*(float *)FVar25 != local_348);
            uVar28 = 0;
            local_2d8 = FVar25;
            do {
              uVar15 = uVar28;
              do {
                lVar18 = lVar18 + 1;
                uVar15 = uVar15 + 1;
                if ((int)uVar35 <= lVar18) break;
              } while (local_388 ==
                       (FIdentityFunctor)(*(float *)((longlong)FVar25 + lVar18 * 4) != local_348));
              if (local_388 != (FIdentityFunctor)0x0) {
                if (uVar31 != uVar28) {
                  memmove((uchar *)((longlong)FVar25 + (longlong)(int)uVar31 * 4),
                          (uchar *)((longlong)FVar25 + (longlong)(int)uVar28 * 4),
                          (longlong)(int)(uVar15 - uVar28) << 2);
                  FVar25 = local_2d8;
                }
                uVar31 = uVar31 + (uVar15 - uVar28);
              }
              local_388 = (FIdentityFunctor)((byte)local_388 ^ 1);
              uVar28 = uVar15;
            } while (lVar18 < (int)uVar35);
            local_368[0x1c] = uVar31;
            lVar18 = local_2e8;
            FVar30 = local_388;
          }
        }
        pFVar32 = (FBlock *)local_358;
        if ((local_360 == '\0') && (local_300[0xc9] != (FScriptContainerElement)0x0)) {
          FVar34 = (ForElementType<int>)
                   ((longlong)(((FBlock *)local_358)->SlotIndices).AllocatorInstance.InlineData +
                   lVar18 + -0x78);
          FVar25 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          FVar41 = FVar34;
          if (FVar25 != (ForElementType<int>)0x0) {
            FVar41 = FVar25;
          }
          if ((ulonglong)FVar41 <= &local_344) {
            FVar41 = FVar34;
            if (FVar25 != (ForElementType<int>)0x0) {
              FVar41 = FVar25;
            }
            if ((&local_344 <
                 (uchar *)((longlong)FVar41 + (longlong)(int)*(uint *)((longlong)FVar34 + 0x4c) * 4)
                ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar13)) {
              pcVar8 = (code *)swi(3);
              pTVar17 = (TVector2<double> *)(*pcVar8)();
              return pTVar17;
            }
          }
          uVar35 = *(uint *)((longlong)FVar34 + 0x48);
          if (uVar35 != 0) {
            if (*(ForElementType<int> *)((longlong)FVar34 + 0x40) != (ForElementType<int>)0x0) {
              FVar34 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
            }
            iVar43 = 0;
            lVar18 = 0;
            local_388 = (FIdentityFunctor)(*(float *)FVar34 != local_344);
            iVar44 = 0;
            local_2d8 = FVar34;
            do {
              iVar14 = iVar44;
              do {
                lVar18 = lVar18 + 1;
                iVar14 = iVar14 + 1;
                if ((int)uVar35 <= lVar18) break;
              } while (local_388 ==
                       (FIdentityFunctor)(*(float *)((longlong)FVar34 + lVar18 * 4) != local_344));
              if (local_388 != (FIdentityFunctor)0x0) {
                if (iVar43 != iVar44) {
                  memmove((uchar *)((longlong)FVar34 + (longlong)iVar43 * 4),
                          (uchar *)((longlong)FVar34 + (longlong)iVar44 * 4),
                          (longlong)(iVar14 - iVar44) << 2);
                  FVar34 = local_2d8;
                }
                iVar43 = iVar43 + (iVar14 - iVar44);
              }
              local_388 = (FIdentityFunctor)((byte)local_388 ^ 1);
              iVar44 = iVar14;
            } while (lVar18 < (int)uVar35);
            *(int *)((((FBlock *)local_358)->SlotIndices).AllocatorInstance.InlineData +
                    local_2e8 + -0x30) = iVar43;
            pFVar32 = (FBlock *)local_358;
            lVar18 = local_2e8;
            FVar30 = local_388;
          }
        }
        if ((local_2b8[0xc9] != (FScriptContainerElement)0x0) && (local_368[0x1c] == 0)) {
          puVar7 = *(uint **)(FVar11.Data + lVar23 * 0x28 + 0x18);
          if (puVar7 != puVar7 + (longlong)*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) * 0x1e) {
            puVar26 = puVar7;
            do {
              if (*puVar26 == *local_368) {
                lVar19 = SUB168(SEXT816(-0x7777777777777777) *
                                SEXT816((longlong)puVar26 - (longlong)puVar7),8) +
                         ((longlong)puVar26 - (longlong)puVar7);
                iVar44 = (int)(lVar19 >> 6) - (int)(lVar19 >> 0x3f);
                if (iVar44 != -1) {
                  pfVar22 = (float *)(local_368 + 8);
                  if (*(char *)((longlong)local_368 + 10) == '\0') {
                    pfVar22 = (float *)(local_368 + 7);
                  }
                  *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) =
                       *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) - *pfVar22;
                  *(float *)(FVar11.Data + lVar23 * 0x28 + 4) =
                       *(float *)(FVar11.Data + lVar23 * 0x28 + 4) - (float)local_368[7];
                  *(float *)(FVar11.Data + lVar23 * 0x28 + 8) =
                       *(float *)(FVar11.Data + lVar23 * 0x28 + 8) - (float)local_368[8];
                  TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                  ::RemoveAt((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                              *)(FVar11.Data + lVar23 * 0x28 + 0x18),iVar44,No);
                  uVar35 = 0;
                  *(undefined4 *)(FVar11.Data + lVar23 * 0x28 + 0x10) = 0;
                  if (0 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20)) {
                    lVar19 = 0;
                    do {
                      uVar28 = 0;
                      if ((int)uVar35 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20)) {
                        uVar28 = ~uVar35 >> 0x1f;
                      }
                      if ((uVar28 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar8 = (code *)swi(3);
                        pTVar17 = (TVector2<double> *)(*pcVar8)();
                        return pTVar17;
                      }
                      uVar35 = uVar35 + 1;
                      fVar46 = *(float *)(*(longlong *)(FVar11.Data + lVar23 * 0x28 + 0x18) + 0x10 +
                                         lVar19);
                      lVar19 = lVar19 + 0x78;
                      if (fVar46 <= *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10)) {
                        fVar46 = *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10);
                      }
                      *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10) = fVar46;
                    } while ((int)uVar35 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20));
                  }
                  local_370 = local_370 + 1;
                }
                break;
              }
              puVar26 = puVar26 + 0x1e;
            } while (puVar26 !=
                     puVar7 + (longlong)*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) * 0x1e);
          }
        }
        iVar43 = local_370;
        if (local_300[0xc9] != (FScriptContainerElement)0x0) {
          if (local_308 == local_30c) {
            if (*(int *)((pFVar32->SlotIndices).AllocatorInstance.InlineData + lVar18 + -0x30) == 0)
            {
              piVar29 = *(int **)(FVar11.Data + lVar23 * 0x28 + 0x18);
              if (piVar29 != piVar29 + (longlong)*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) * 0x1e
                 ) {
                piVar27 = piVar29;
                do {
                  if (*piVar27 ==
                      *(int *)(pFVar32[-1].SlotIndices.AllocatorInstance.InlineData + lVar18 + -0x28
                              )) {
                    lVar19 = SUB168(SEXT816(-0x7777777777777777) *
                                    SEXT816((longlong)piVar27 - (longlong)piVar29),8) +
                             ((longlong)piVar27 - (longlong)piVar29);
                    iVar44 = (int)(lVar19 >> 6) - (int)(lVar19 >> 0x3f);
                    if (iVar44 != -1) {
                      lVar19 = lVar18 + -0x58;
                      if (*(char *)((longlong)pFVar32 + lVar18 + -0x6e) == '\0') {
                        lVar19 = lVar18 + -0x5c;
                      }
                      *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) =
                           *(float *)(FVar11.Data + lVar23 * 0x28 + 0xc) -
                           *(float *)((pFVar32->SlotIndices).AllocatorInstance.InlineData +
                                     lVar19 + -0x28);
                      *(float *)(FVar11.Data + lVar23 * 0x28 + 4) =
                           *(float *)(FVar11.Data + lVar23 * 0x28 + 4) -
                           *(float *)((longlong)pFVar32 + lVar18 + -0x5c);
                      *(float *)(FVar11.Data + lVar23 * 0x28 + 8) =
                           *(float *)(FVar11.Data + lVar23 * 0x28 + 8) -
                           *(float *)((pFVar32->SlotIndices).AllocatorInstance.InlineData +
                                     lVar18 + -0x80);
                      TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                      ::RemoveAt((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                                  *)(FVar11.Data + lVar23 * 0x28 + 0x18),iVar44,No);
                      uVar35 = 0;
                      *(undefined4 *)(FVar11.Data + lVar23 * 0x28 + 0x10) = 0;
                      if (0 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20)) {
                        lVar18 = 0;
                        do {
                          uVar28 = 0;
                          if ((int)uVar35 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20)) {
                            uVar28 = ~uVar35 >> 0x1f;
                          }
                          if ((uVar28 == 0) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar8 = (code *)swi(3);
                            pTVar17 = (TVector2<double> *)(*pcVar8)();
                            return pTVar17;
                          }
                          uVar35 = uVar35 + 1;
                          fVar46 = *(float *)(*(longlong *)(FVar11.Data + lVar23 * 0x28 + 0x18) +
                                              0x10 + lVar18);
                          lVar18 = lVar18 + 0x78;
                          if (fVar46 <= *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10)) {
                            fVar46 = *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10);
                          }
                          *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10) = fVar46;
                        } while ((int)uVar35 < *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20));
                      }
                      goto LAB_1427a0922;
                    }
                    break;
                  }
                  piVar27 = piVar27 + 0x1e;
                } while (piVar27 !=
                         piVar29 + (longlong)*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) * 0x1e);
              }
            }
          }
          else {
LAB_1427a0922:
            iVar43 = local_370 + 1;
          }
        }
        if ((*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) == 0) &&
           (bVar13 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6205726378302636518>,true,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SPrioritizedWrapBox.cpp"
                                ,0x1e6,"!CurrentLine.Blocks.IsEmpty()"), bVar13)) {
          pcVar8 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar8)();
          return pTVar17;
        }
        fVar46 = fVar50;
        if (fVar50 <= *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10)) {
          fVar46 = *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10);
        }
        iVar14 = *(int *)(FVar11.Data + lVar23 * 0x28 + 0x20);
        fVar45 = *(float *)(FVar11.Data + lVar23 * 0x28 + 8);
        if (*(float *)(FVar11.Data + lVar23 * 0x28 + 8) <= fVar48) {
          fVar45 = fVar48;
        }
        fVar48 = fVar45;
        local_32c = local_32c + 1;
        if (local_2f8 <= fVar46) {
          fVar46 = local_2f8;
        }
        *(float *)(FVar11.Data + lVar23 * 0x28 + 0x10) = fVar46;
        fVar45 = fVar46 + fVar49;
        if (fVar46 + fVar49 <= fVar47) {
          fVar45 = fVar47;
        }
        fVar49 = fVar49 + fVar46 + fVar3;
        local_328._4_4_ = fVar45;
        local_328._0_4_ = fVar48;
        local_370 = iVar43 + iVar14;
        DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
                  ((FBlock *)local_340.Data,local_338);
        FVar10.Data = local_380.Data;
        iVar44 = (int)local_378;
        local_338 = (int)local_378;
        if (((int)local_378 == 0) && (local_334 == 0)) {
          local_334 = 0;
          iVar44 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,(int)local_378,local_334,&local_340,(int)local_378,&local_334);
          ConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
                    (local_340.Data,(FBlock *)FVar10.Data,iVar44);
          iVar44 = (int)local_378;
        }
        if ((longlong)local_378 < 0) {
          DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
                    ((FBlock *)local_380.Data,iVar44);
          bVar13 = local_378._4_4_ != 0;
          local_378 = (ulonglong)local_378._4_4_ << 0x20;
          if (bVar13) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,0,&local_380,0,(int *)((longlong)&local_378 + 4));
          }
        }
        else {
          DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
                    ((FBlock *)local_380.Data,iVar44);
          local_378 = local_378 & 0xffffffff00000000;
        }
        AlgoImpl::
        StableSortInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>_>
                  ((FBlock *)local_340.Data,local_338,FVar30,(TLess<void> *)local_310);
        this = local_2f0;
        iVar44 = (local_2f0->WrappableSortedBlockView).ArrayNum;
        local_288 = (local_2f0->WrappableSortedBlockView).DataPtr;
        iStack_280 = iVar44;
        if ((iVar44 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar8)();
          return pTVar17;
        }
        local_2c8._8_4_ = iStack_280;
        local_2c8._0_8_ = local_288;
        local_2c8._12_4_ = uStack_27c;
        param_1 = local_2e0;
        fVar47 = fVar45;
        if ((*(float *)(FVar11.Data + lVar23 * 0x28 + 8) <= 0.0) ||
           ((this->Blocks).ArrayNum <= iVar43 + iVar14)) break;
        local_358 = (FDeprecateSlateVector2D)local_288;
        local_368 = (uint *)CONCAT44(local_368._4_4_,iStack_280);
      }
    }
    this->LastPreferredLineLength = local_2f4;
    this->LastParentLineLength = local_330;
    pFVar16 = SWidget::GetTickSpaceGeometry((SWidget *)param_1);
    (this->LastParentSize).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)&pFVar16->Size;
    this->LastLinePadding = fVar3;
    (this->LastDesiredSize).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)local_328;
    TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,TSizedDefaultAllocator<32>_>::
    SetNum(&local_320,local_32c,Default);
    pTVar2 = &this->BlockLines;
    if (pTVar2 != &local_320) {
      DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int>
                ((FBlockLine *)(pTVar2->AllocatorInstance).Data,(this->BlockLines).ArrayNum);
      iVar44 = local_320.ArrayNum;
      FVar10.Data = local_320.AllocatorInstance.Data;
      piVar29 = &(this->BlockLines).ArrayMax;
      (this->BlockLines).ArrayNum = local_320.ArrayNum;
      if ((local_320.ArrayNum == 0) && (*piVar29 == 0)) {
        *piVar29 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,local_320.ArrayNum,*piVar29,&pTVar2->AllocatorInstance,local_320.ArrayNum,
                   piVar29);
        ConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int>
                  ((pTVar2->AllocatorInstance).Data,(FBlockLine *)FVar10.Data,iVar44);
      }
    }
    DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
              ((FBlock *)local_380.Data,(int)local_378);
    if ((FBlock *)local_380.Data != (FBlock *)0x0) {
      FMemory::Free(local_380.Data);
    }
    DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
              ((FBlock *)local_340.Data,local_338);
    if ((FBlock *)local_340.Data != (FBlock *)0x0) {
      FMemory::Free(local_340.Data);
    }
    DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int>
              ((FBlockLine *)local_320.AllocatorInstance.Data,local_320.ArrayNum);
    if ((FBlockLine *)local_320.AllocatorInstance.Data != (FBlockLine *)0x0) {
      FMemory::Free(local_320.AllocatorInstance.Data);
    }
  }
  else {
    local_328._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
    local_328._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
    fVar47 = (float)local_328._4_4_;
    fVar48 = (float)(undefined4)local_328;
  }
  (local_2b0->field0_0x0)._s_0.X = (double)fVar48;
  (local_2b0->field0_0x0)._s_0.Y = (double)fVar47;
  return local_2b0;
code_r0x00014279f1c9:
  piVar27 = piVar27 + 0x1e;
  if (piVar27 == piVar29 + (longlong)*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) * 0x1e)
  goto LAB_14279f7a1;
  goto LAB_14279f1c5;
code_r0x00014279fa1c:
  piVar27 = piVar27 + 0x1e;
  if (piVar27 == piVar29 + (longlong)*(int *)(FVar11.Data + lVar23 * 0x28 + 0x20) * 0x1e)
  goto LAB_14279fa25;
  goto LAB_14279fa18;
}

// GetDesiredSize<0> @ 1427a0bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TVector2<double> * __thiscall
UE::Slate::PrioritizedWrapBox::FChildArranger::GetDesiredSize<0>
          (FChildArranger *this,TVector2<double> *__return_storage_ptr__,
          SPrioritizedWrapBox *param_1,TPanelChildren<SPrioritizedWrapBox::FSlot> *param_2)

{
  TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,TSizedDefaultAllocator<32>_>
  *pTVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint *puVar5;
  code *pcVar6;
  float fVar7;
  ForAnyElementType FVar8;
  undefined4 uVar9;
  ForAnyElementType FVar10;
  FBlock *pFVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  FGeometry *pFVar17;
  TVector2<double> *pTVar18;
  longlong lVar19;
  ForElementType<int> FVar20;
  ForElementType<int> *pFVar21;
  float *pfVar22;
  float *pfVar23;
  longlong lVar24;
  int *piVar25;
  ForElementType<int> FVar26;
  uint *puVar27;
  uint uVar28;
  int *piVar29;
  FScriptContainerElement *pFVar30;
  FIdentityFunctor FVar31;
  uint uVar32;
  uint uVar33;
  ForElementType<int> *pFVar34;
  longlong lVar35;
  ulonglong uVar36;
  FBlock *pFVar37;
  int iVar38;
  int iVar39;
  FBlock *pFVar40;
  longlong lVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStackY_3c8 [32];
  FIdentityFunctor local_378;
  ForAnyElementType local_370;
  undefined8 local_368;
  ForElementType<int> local_360;
  undefined1 local_358;
  undefined1 local_357;
  undefined1 local_356;
  char local_355;
  float local_354;
  float local_350;
  int local_34c;
  undefined8 local_348;
  uint *local_338;
  ForAnyElementType local_330;
  int local_328;
  int local_324;
  undefined8 local_320;
  int local_318;
  int local_314;
  uint local_310;
  TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,TSizedDefaultAllocator<32>_>
  local_308;
  uint local_2f8;
  undefined1 local_2f4 [4];
  FBlock *local_2f0;
  int local_2e8;
  float local_2e4;
  FChildArranger *local_2e0;
  SPrioritizedWrapBox *local_2d8;
  undefined1 local_2c8 [16];
  FScriptContainerElement *local_2b8;
  TVector2<double> *local_2b0;
  FBlock *local_2a8;
  int iStack_2a0;
  FBlock *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  FBlock *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  FBlock local_278;
  FBlock local_1f8;
  FBlock local_178;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_2e0 = this;
  local_2d8 = param_1;
  local_2b0 = __return_storage_ptr__;
  pFVar17 = SWidget::GetPaintSpaceGeometry((SWidget *)param_1);
  local_2e8 = (int)(float)param_1->PreferredSize;
  local_318 = (int)ROUND((*(float *)&pFVar17->Size + *(float *)&pFVar17->Size) - __real_3f000000) >>
              1;
  if ((this->NumPreferredWrappingChildren < 1) || (local_2e8 < local_318)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  iVar16 = this->NumParentWrappingChildren;
  if ((param_1->MinLineHeight).field_0x4 == '\0') {
    fVar46 = 0.0;
  }
  else {
    fVar46 = *(float *)&param_1->MinLineHeight;
  }
  local_2e4 = __real_7f7fffff;
  if (local_318 == 0) {
    this->LastParentLineLength = 0xffff;
    (this->LastParentSize).field0_0x0._s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::UnitVector.field0_0x0;
    local_318 = 0xffff;
    local_2e4 = fVar46;
  }
  iVar38 = local_318;
  bVar12 = UpdateChildProxies(this,param_2);
  if (bVar12) {
    UpdateBlocks(this,param_2,fVar46);
  }
  pFVar17 = SWidget::GetTickSpaceGeometry((SWidget *)param_1);
  local_348 = pFVar17->Size;
  if (((((float)local_348 != (this->LastParentSize).field0_0x0._s_0.X) ||
       (local_348._4_4_ != (this->LastParentSize).field0_0x0._s_0.Y)) ||
      ((bVar13 && (local_2e8 != this->LastPreferredLineLength)))) ||
     ((0 < iVar16 && (iVar38 != this->LastParentLineLength)))) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  local_320 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  if ((bVar12) || (bVar13)) {
    uVar4 = (this->Blocks).ArrayNum;
    local_34c = 0;
    local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.ArrayNum = 0;
    local_308.ArrayMax = 0;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (0 < (int)uVar4) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar4,&local_308.AllocatorInstance,0,&local_308.ArrayMax);
    }
    iVar16 = (this->Blocks).ArrayNum;
    pFVar37 = (FBlock *)(this->Blocks).AllocatorInstance.Data;
    local_330.Data = (FScriptContainerElement *)0x0;
    local_328 = iVar16;
    if (iVar16 == 0) {
      local_324 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,iVar16,0,&local_330,iVar16,&local_324);
      ConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
                (local_330.Data,pFVar37,iVar16);
    }
    uVar4 = (this->Blocks).ArrayNum;
    local_370.Data = (FScriptContainerElement *)0x0;
    local_368 = 0;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (0 < (int)uVar4) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,uVar4,&local_370,0,(int *)((longlong)&local_368 + 4));
    }
    iVar16 = (this->WrappableSortedBlockView).ArrayNum;
    fVar47 = 0.0;
    local_348 = (FDeprecateSlateVector2D)(this->WrappableSortedBlockView).DataPtr;
    fVar2 = param_1->LinePadding;
    local_360._0_4_ = iVar16;
    if ((iVar16 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      pTVar18 = (TVector2<double> *)(*pcVar6)();
      return pTVar18;
    }
    uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar7 = __real_322bcc77;
    local_314 = 0;
    fVar44 = (float)local_320._4_4_;
    fVar45 = (float)(undefined4)local_320;
    FVar31 = local_378;
    if (0 < (this->Blocks).ArrayNum) {
      while (param_1 = local_2d8, iVar16 != 0) {
        if (local_308.ArrayNum == local_308.ArrayMax) {
          local_308.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&local_308.AllocatorInstance,&local_308.ArrayMax);
        }
        FVar10.Data = local_308.AllocatorInstance.Data;
        iVar16 = local_328;
        FVar8.Data = local_330.Data;
        lVar24 = (longlong)local_308.ArrayNum;
        iVar38 = 0;
        local_308.ArrayNum = local_308.ArrayNum + 1;
        *(undefined8 *)(local_308.AllocatorInstance.Data + lVar24 * 0x28 + 4) = 0;
        *(undefined8 *)(local_308.AllocatorInstance.Data + lVar24 * 0x28 + 0xc) = 0;
        *(undefined4 *)(local_308.AllocatorInstance.Data + lVar24 * 0x28 + 0x14) = 0;
        *(undefined8 *)&local_308.AllocatorInstance.Data[lVar24 * 0x28 + 0x18].field_0x0 = 0;
        *(undefined8 *)(local_308.AllocatorInstance.Data + lVar24 * 0x28 + 0x20) = 0;
        *(int *)&local_308.AllocatorInstance.Data[lVar24 * 0x28].field_0x0 = local_314;
        if ((local_328 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar18 = (TVector2<double> *)(*pcVar6)();
          return pTVar18;
        }
        if (0 < iVar16) {
          pFVar30 = FVar8.Data + 0x20;
          do {
            if ((iVar38 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              pTVar18 = (TVector2<double> *)(*pcVar6)();
              return pTVar18;
            }
            *(float *)(FVar10.Data + lVar24 * 0x28 + 4) =
                 *(float *)(pFVar30 + -4) + *(float *)(FVar10.Data + lVar24 * 0x28 + 4);
            *(float *)(FVar10.Data + lVar24 * 0x28 + 8) =
                 *(float *)pFVar30 + *(float *)(FVar10.Data + lVar24 * 0x28 + 8);
            lVar19 = 0x20;
            if (pFVar30[-0x16] == (FScriptContainerElement)0x0) {
              lVar19 = 0x1c;
            }
            *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) =
                 *(float *)(pFVar30 + lVar19 + -0x20) +
                 *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc);
            fVar43 = *(float *)(pFVar30 + -0x10);
            if (*(float *)(pFVar30 + -0x10) <= *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10)) {
              fVar43 = *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10);
            }
            *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10) = fVar43;
            iVar14 = *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20);
            if (iVar14 == *(int *)(FVar10.Data + lVar24 * 0x28 + 0x24)) {
              iVar14 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)(FVar10.Data + lVar24 * 0x28 + 0x18),
                                  (int *)(FVar10.Data + lVar24 * 0x28 + 0x24));
            }
            *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) = iVar14 + 1;
            FBlock::FBlock((FBlock *)
                           ((longlong)iVar14 * 0x78 +
                           *(longlong *)&FVar10.Data[lVar24 * 0x28 + 0x18].field_0x0),
                           (FBlock *)(pFVar30 + -0x20));
            iVar38 = iVar38 + 1;
            pFVar30 = pFVar30 + 0x78;
            FVar31 = local_378;
          } while (iVar38 < iVar16);
        }
        uVar36 = (ulonglong)local_360 & 0xffffffff;
        local_338._0_4_ = local_360._0_4_;
        local_310 = 0;
        local_2f0 = (FBlock *)0x0;
        iVar16 = local_360._0_4_;
        if (0 < (int)local_360._0_4_) {
          while( true ) {
            iVar38 = *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20);
            iVar16 = (int)uVar36;
            FVar31 = local_378;
            if (iVar38 < 2) break;
            lVar19 = *(longlong *)(FVar10.Data + lVar24 * 0x28 + 0x18);
            iVar14 = *(int *)(lVar19 + 4);
            lVar35 = (longlong)iVar38 * 0x78 + lVar19;
            while( true ) {
              if (*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) != iVar38) {
                local_358 = 0;
                `TCheckedPointerIterator<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock_const_,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(&local_358);
              }
              uVar33 = local_310;
              iVar16 = local_360._0_4_;
              if (lVar19 == lVar35) goto LAB_1427a181e;
              if (iVar14 != *(int *)(lVar19 + 4)) break;
              lVar19 = lVar19 + 0x78;
            }
            uVar36 = (ulonglong)(int)local_360._0_4_;
            if (local_360._0_4_ == 0) break;
            uVar28 = 0;
            if ((int)local_310 < (int)local_360._0_4_) {
              uVar28 = ~local_310 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              pTVar18 = (TVector2<double> *)(*pcVar6)();
              return pTVar18;
            }
            pFVar11 = local_2f0;
            pFVar37 = (FBlock *)local_348;
            uVar33 = uVar33 + 1;
            pFVar40 = (FBlock *)((longlong)&local_2f0->SequentialIndex + 1);
            local_310 = uVar33;
            if (((FBlock *)((longlong)local_348 + local_2f0 * 0x78))->bForceNewLine == false) {
              piVar29 = &((FBlock *)((longlong)local_348 + local_2f0 * 0x78))->WrapPriority;
              local_2f0 = pFVar40;
LAB_1427a11dd:
              bVar13 = false;
            }
            else {
              local_2f0 = pFVar40;
              if ((*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) < 1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                pTVar18 = (TVector2<double> *)(*pcVar6)();
                return pTVar18;
              }
              piVar29 = &pFVar37[(longlong)pFVar11].WrapPriority;
              if (*piVar29 == *(int *)(*(longlong *)(FVar10.Data + lVar24 * 0x28 + 0x18) + 4))
              goto LAB_1427a11dd;
              bVar13 = true;
            }
            local_338._0_4_ = (int)local_338 + -1;
            if (bVar13) {
              local_278.bHasVerticalExpansion = pFVar37[(longlong)pFVar11].bHasVerticalExpansion;
              pfVar23 = &pFVar37->ReserveLength;
              if (local_278.bHasVerticalExpansion == false) {
                pfVar23 = &pFVar37->MinLength;
              }
              local_278.MinLength = pFVar37[(longlong)pFVar11].MinLength;
              local_278.ReserveLength = pFVar37[(longlong)pFVar11].ReserveLength;
              FVar20 = (ForElementType<int>)&pFVar37[(longlong)pFVar11].SlotIndices;
              fVar43 = pfVar23[(longlong)pFVar11 * 0x1e];
              local_278.SequentialIndex = pFVar37[(longlong)pFVar11].SequentialIndex;
              local_278.SlotIndices.ArrayNum =
                   ((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)FVar20)
                   ->ArrayNum;
              lVar19 = (longlong)local_278.SlotIndices.ArrayNum;
              local_278.WrapPriority = *piVar29;
              local_278.bCanWrap = pFVar37[(longlong)pFVar11].bCanWrap;
              local_278.bForceNewLine = pFVar37[(longlong)pFVar11].bForceNewLine;
              local_278.bCanVerticallyExpand = pFVar37[(longlong)pFVar11].bCanVerticallyExpand;
              local_278.DesiredSize.field0_0x0 = pFVar37[(longlong)pFVar11].DesiredSize.field0_0x0;
              local_278.AdjustedSize.field0_0x0 = pFVar37[(longlong)pFVar11].AdjustedSize.field0_0x0
              ;
              FVar26 = (((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                        FVar20)->AllocatorInstance).SecondaryData;
              local_278.Area = pFVar37[(longlong)pFVar11].Area;
              if (FVar26 != (ForElementType<int>)0x0) {
                FVar20 = FVar26;
              }
              local_278.SlotIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
              if (local_278.SlotIndices.ArrayNum == 0) {
                local_278.SlotIndices.ArrayMax = 0x10;
              }
              else {
                Core::Private::
                ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (4,4,local_278.SlotIndices.ArrayNum,0,
                           &local_278.SlotIndices.AllocatorInstance,local_278.SlotIndices.ArrayNum,
                           &local_278.SlotIndices.ArrayMax);
                FVar26 = (ForElementType<int>)&local_278.SlotIndices;
                if (local_278.SlotIndices.AllocatorInstance.SecondaryData !=
                    (ForElementType<int>)0x0) {
                  FVar26 = local_278.SlotIndices.AllocatorInstance.SecondaryData;
                }
                memcpy((void *)FVar26,(void *)FVar20,lVar19 << 2);
              }
              piVar29 = *(int **)(FVar10.Data + lVar24 * 0x28 + 0x18);
              if (piVar29 != piVar29 + (longlong)*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) * 0x1e
                 ) {
                piVar25 = piVar29;
LAB_1427a1301:
                if (*piVar25 != pFVar37[(longlong)pFVar11].SequentialIndex)
                goto code_r0x0001427a1305;
                lVar19 = SUB168(SEXT816(-0x7777777777777777) *
                                SEXT816((longlong)piVar25 - (longlong)piVar29),8) +
                         ((longlong)piVar25 - (longlong)piVar29);
                iVar16 = (int)(lVar19 >> 6) - (int)(lVar19 >> 0x3f);
                if (iVar16 != -1) {
                  pfVar23 = &pFVar37->ReserveLength;
                  if (pFVar37[(longlong)pFVar11].bHasVerticalExpansion == false) {
                    pfVar23 = &pFVar37->MinLength;
                  }
                  *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) =
                       *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) -
                       pfVar23[(longlong)pFVar11 * 0x1e];
                  *(float *)(FVar10.Data + lVar24 * 0x28 + 4) =
                       *(float *)(FVar10.Data + lVar24 * 0x28 + 4) -
                       pFVar37[(longlong)pFVar11].MinLength;
                  *(float *)(FVar10.Data + lVar24 * 0x28 + 8) =
                       *(float *)(FVar10.Data + lVar24 * 0x28 + 8) -
                       pFVar37[(longlong)pFVar11].ReserveLength;
                  TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                  ::RemoveAt((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                              *)(FVar10.Data + lVar24 * 0x28 + 0x18),iVar16,No);
                  uVar28 = 0;
                  *(undefined4 *)(FVar10.Data + lVar24 * 0x28 + 0x10) = 0;
                  if (0 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
                    lVar19 = 0;
                    do {
                      uVar32 = 0;
                      if ((int)uVar28 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
                        uVar32 = ~uVar28 >> 0x1f;
                      }
                      if ((uVar32 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar6 = (code *)swi(3);
                        pTVar18 = (TVector2<double> *)(*pcVar6)();
                        return pTVar18;
                      }
                      uVar28 = uVar28 + 1;
                      fVar42 = *(float *)(*(longlong *)(FVar10.Data + lVar24 * 0x28 + 0x18) + 0x10 +
                                         lVar19);
                      lVar19 = lVar19 + 0x78;
                      if (fVar42 <= *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10)) {
                        fVar42 = *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10);
                      }
                      *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10) = fVar42;
                    } while ((int)uVar28 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20));
                  }
                  if (fVar7 < (float)((uint)fVar43 & uVar4)) {
                    iVar16 = (int)local_368;
                    if ((int)local_368 == local_368._4_4_) {
                      iVar16 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x878,&local_370,(int *)((longlong)&local_368 + 4));
                    }
                    local_368 = CONCAT44(local_368._4_4_,iVar16 + 1);
                    FBlock::FBlock((FBlock *)(local_370.Data + (longlong)iVar16 * 0x78),&local_278);
                  }
                  uVar36 = (ulonglong)(int)local_360._0_4_;
                  uVar28 = local_360._0_4_;
                  if ((int)(local_360._0_4_ - uVar33) < (int)local_360._0_4_) {
                    uVar28 = local_360._0_4_ - uVar33;
                  }
                  uVar33 = 0;
                  if (0 < (int)uVar28) {
                    uVar33 = uVar28;
                  }
                  local_2f8 = uVar33;
                  if (((int)uVar33 < 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ArrayNum >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xfe,L""), bVar13)) {
                    pcVar6 = (code *)swi(3);
                    pTVar18 = (TVector2<double> *)(*pcVar6)();
                    return pTVar18;
                  }
                  uVar28 = uVar33 - 1;
                  if (-1 < (int)uVar28) {
                    pFVar34 = &pFVar37[(uVar36 - (longlong)(int)uVar33) + (longlong)(int)uVar28].
                               SlotIndices.AllocatorInstance.SecondaryData;
                    do {
                      uVar32 = 0;
                      if ((int)uVar28 < (int)uVar33) {
                        uVar32 = ~uVar28 >> 0x1f;
                      }
                      if ((uVar32 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar13)) {
                        pcVar6 = (code *)swi(3);
                        pTVar18 = (TVector2<double> *)(*pcVar6)();
                        return pTVar18;
                      }
                      lVar19 = 0x20;
                      if (pFVar34[-0xc].field_0x2 == '\0') {
                        lVar19 = 0x1c;
                      }
                      uVar33 = *(uint *)((longlong)&pFVar34[-0xd].field_0x0 + lVar19);
                      local_278.SequentialIndex = *(int *)(pFVar34 + -0xd);
                      local_278.WrapPriority = *(int *)&pFVar34[-0xd].field_0x4;
                      local_278.bCanWrap = *(bool *)(pFVar34 + -0xc);
                      local_278.bForceNewLine = (bool)pFVar34[-0xc].field_0x1;
                      local_278.bHasVerticalExpansion = (bool)pFVar34[-0xc].field_0x2;
                      local_278.bCanVerticallyExpand = (bool)pFVar34[-0xc].field_0x3;
                      local_278.DesiredSize.field0_0x0 =
                           *(TVector2<float>_u_0 *)&pFVar34[-0xc].field_0x4;
                      local_278.AdjustedSize.field0_0x0 =
                           *(TVector2<float>_u_0 *)&pFVar34[-0xb].field_0x4;
                      local_278.MinLength = *(float *)&pFVar34[-10].field_0x4;
                      local_278.ReserveLength = *(float *)(pFVar34 + -9);
                      local_278.Area = *(float *)&pFVar34[-9].field_0x4;
                      if (&local_278.SlotIndices !=
                          (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                          (pFVar34 + -8)) {
                        iVar16 = *(int *)(pFVar34 + 1);
                        FVar26 = (ForElementType<int>)(pFVar34 + -8);
                        if (*pFVar34 != (ForElementType<int>)0x0) {
                          FVar26 = *pFVar34;
                        }
                        local_278.SlotIndices.ArrayNum = iVar16;
                        if ((iVar16 == 0) && (local_278.SlotIndices.ArrayMax == 0)) {
                          local_278.SlotIndices.ArrayMax = 0x10;
                        }
                        else {
                          Core::Private::
                          ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                    (4,4,iVar16,local_278.SlotIndices.ArrayMax,
                                     &local_278.SlotIndices.AllocatorInstance,iVar16,
                                     &local_278.SlotIndices.ArrayMax);
                          FVar20 = (ForElementType<int>)&local_278.SlotIndices;
                          if (local_278.SlotIndices.AllocatorInstance.SecondaryData !=
                              (ForElementType<int>)0x0) {
                            FVar20 = local_278.SlotIndices.AllocatorInstance.SecondaryData;
                          }
                          if (iVar16 != 0) {
                            memcpy((void *)FVar20,(void *)FVar26,(longlong)iVar16 << 2);
                          }
                        }
                      }
                      piVar29 = *(int **)&FVar10.Data[lVar24 * 0x28 + 0x18].field_0x0;
                      if (piVar29 !=
                          piVar29 + (longlong)*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) * 0x1e) {
                        piVar25 = piVar29;
                        do {
                          if (*piVar25 == *(int *)(pFVar34 + -0xd)) {
                            lVar19 = SUB168(SEXT816(-0x7777777777777777) *
                                            SEXT816((longlong)piVar25 - (longlong)piVar29),8) +
                                     ((longlong)piVar25 - (longlong)piVar29);
                            iVar16 = (int)(lVar19 >> 6) - (int)(lVar19 >> 0x3f);
                            if (iVar16 != -1) {
                              pFVar21 = pFVar34 + -9;
                              if (pFVar34[-0xc].field_0x2 == '\0') {
                                pFVar21 = (ForElementType<int> *)&pFVar34[-10].field_0x4;
                              }
                              *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) =
                                   *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) - *(float *)pFVar21
                              ;
                              *(float *)(FVar10.Data + lVar24 * 0x28 + 4) =
                                   *(float *)(FVar10.Data + lVar24 * 0x28 + 4) -
                                   *(float *)&pFVar34[-10].field_0x4;
                              *(float *)(FVar10.Data + lVar24 * 0x28 + 8) =
                                   *(float *)(FVar10.Data + lVar24 * 0x28 + 8) -
                                   *(float *)(pFVar34 + -9);
                              TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                              ::RemoveAt((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                                          *)(FVar10.Data + lVar24 * 0x28 + 0x18),iVar16,No);
                              uVar32 = 0;
                              *(undefined4 *)(FVar10.Data + lVar24 * 0x28 + 0x10) = 0;
                              if (0 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
                                lVar19 = 0;
                                do {
                                  uVar15 = 0;
                                  if ((int)uVar32 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
                                    uVar15 = ~uVar32 >> 0x1f;
                                  }
                                  if ((uVar15 == 0) &&
                                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar13)) {
                                    pcVar6 = (code *)swi(3);
                                    pTVar18 = (TVector2<double> *)(*pcVar6)();
                                    return pTVar18;
                                  }
                                  uVar32 = uVar32 + 1;
                                  fVar43 = *(float *)(*(longlong *)
                                                       &FVar10.Data[lVar24 * 0x28 + 0x18].field_0x0
                                                      + 0x10 + lVar19);
                                  lVar19 = lVar19 + 0x78;
                                  if (fVar43 <= *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10)) {
                                    fVar43 = *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10);
                                  }
                                  *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10) = fVar43;
                                } while ((int)uVar32 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20))
                                ;
                              }
                              if (fVar7 < (float)(uVar33 & uVar4)) {
                                iVar16 = (int)local_368;
                                if ((int)local_368 == local_368._4_4_) {
                                  iVar16 = Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (0x878,&local_370,
                                                      (int *)((longlong)&local_368 + 4));
                                }
                                local_368 = CONCAT44(local_368._4_4_,iVar16 + 1);
                                FBlock::FBlock((FBlock *)(local_370.Data + (longlong)iVar16 * 0x78),
                                               &local_278);
                              }
                            }
                            break;
                          }
                          piVar25 = piVar25 + 0x1e;
                        } while (piVar25 !=
                                 piVar29 + (longlong)*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) *
                                           0x1e);
                      }
                      uVar28 = uVar28 - 1;
                      pFVar34 = pFVar34 + -0xf;
                      uVar33 = local_2f8;
                    } while (-1 < (int)uVar28);
                    goto LAB_1427a17f2;
                  }
                  goto LAB_1427a17f7;
                }
              }
LAB_1427a17f2:
              uVar36 = (ulonglong)local_360 & 0xffffffff;
LAB_1427a17f7:
              if (local_278.SlotIndices.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)
              {
                FMemory::Free((void *)local_278.SlotIndices.AllocatorInstance.SecondaryData);
              }
            }
            iVar16 = (int)uVar36;
            if ((int)local_338 < 1) break;
          }
        }
LAB_1427a181e:
        local_338 = (uint *)CONCAT44(local_338._4_4_,iVar16);
        pFVar37 = (FBlock *)local_348;
        if (0 < iVar16) {
          fVar43 = (float)local_318;
          while (FVar31 = local_378, fVar43 < *(float *)(FVar10.Data + lVar24 * 0x28 + 8)) {
            iVar16 = *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20);
            if (iVar16 < 2) break;
            lVar19 = *(longlong *)(FVar10.Data + lVar24 * 0x28 + 0x18);
            iVar38 = *(int *)(lVar19 + 4);
            lVar35 = (longlong)iVar16 * 0x78 + lVar19;
            while( true ) {
              if (*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) != iVar16) {
                local_357 = 0;
                `TCheckedPointerIterator<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock_const_,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(&local_357);
              }
              if (lVar19 == lVar35) goto LAB_1427a1cbc;
              if (iVar38 != *(int *)(lVar19 + 4)) break;
              lVar19 = lVar19 + 0x78;
            }
            uVar9 = local_360._0_4_;
            if (local_360._0_4_ == 0) break;
            uVar33 = 0;
            if ((int)(local_360._0_4_ - 1) < (int)local_360._0_4_) {
              uVar33 = ~(local_360._0_4_ - 1) >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              pTVar18 = (TVector2<double> *)(*pcVar6)();
              return pTVar18;
            }
            lVar19 = (longlong)(uVar9 + -1);
            lVar35 = lVar19 * 0x78;
            if ((pFVar37[lVar19].bCanWrap == false) ||
               (pFVar37[lVar19].bCanVerticallyExpand == false)) {
LAB_1427a1c9f:
              iVar38 = (int)local_338 + -1;
              local_338 = (uint *)CONCAT44(local_338._4_4_,iVar38);
            }
            else {
              if ((*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) < 1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                pTVar18 = (TVector2<double> *)(*pcVar6)();
                return pTVar18;
              }
              iVar16 = pFVar37[lVar19].WrapPriority;
              if (iVar16 == *(int *)(*(longlong *)(FVar10.Data + lVar24 * 0x28 + 0x18) + 4))
              goto LAB_1427a1c9f;
              lVar41 = lVar35 + 0x20;
              bVar13 = pFVar37[lVar19].bHasVerticalExpansion;
              iVar38 = (int)local_338 + -1;
              local_338 = (uint *)CONCAT44(local_338._4_4_,iVar38);
              if (bVar13 == false) {
                lVar41 = lVar35 + 0x1c;
              }
              fVar42 = pFVar37[lVar19].ReserveLength;
              fVar3 = pFVar37[lVar19].MinLength;
              uVar33 = *(uint *)((pFVar37->SlotIndices).AllocatorInstance.InlineData +
                                lVar41 + -0x28);
              if ((fVar3 == fVar42) ||
                 (fVar43 < *(float *)(FVar10.Data + lVar24 * 0x28 + 8) ||
                  fVar43 == *(float *)(FVar10.Data + lVar24 * 0x28 + 8))) {
                local_1f8.SequentialIndex = pFVar37[lVar19].SequentialIndex;
                FVar20 = (ForElementType<int>)&pFVar37[lVar19].SlotIndices;
                local_1f8.bCanWrap = pFVar37[lVar19].bCanWrap;
                local_1f8.bForceNewLine = pFVar37[lVar19].bForceNewLine;
                local_1f8.bCanVerticallyExpand = pFVar37[lVar19].bCanVerticallyExpand;
                local_1f8.DesiredSize.field0_0x0 = pFVar37[lVar19].DesiredSize.field0_0x0;
                local_1f8.AdjustedSize.field0_0x0 = pFVar37[lVar19].AdjustedSize.field0_0x0;
                FVar26 = (((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                          FVar20)->AllocatorInstance).SecondaryData;
                local_1f8.SlotIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
                local_1f8.SlotIndices.ArrayNum =
                     ((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                     FVar20)->ArrayNum;
                lVar41 = (longlong)local_1f8.SlotIndices.ArrayNum;
                if (FVar26 != (ForElementType<int>)0x0) {
                  FVar20 = FVar26;
                }
                local_1f8.Area = pFVar37[lVar19].Area;
                local_1f8.WrapPriority = iVar16;
                local_1f8.bHasVerticalExpansion = bVar13;
                local_1f8.MinLength = fVar3;
                local_1f8.ReserveLength = fVar42;
                if (local_1f8.SlotIndices.ArrayNum == 0) {
                  local_1f8.SlotIndices.ArrayMax = 0x10;
                }
                else {
                  Core::Private::
                  ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (4,4,local_1f8.SlotIndices.ArrayNum,0,
                             &local_1f8.SlotIndices.AllocatorInstance,local_1f8.SlotIndices.ArrayNum
                             ,&local_1f8.SlotIndices.ArrayMax);
                  FVar26 = (ForElementType<int>)&local_1f8.SlotIndices;
                  if (local_1f8.SlotIndices.AllocatorInstance.SecondaryData !=
                      (ForElementType<int>)0x0) {
                    FVar26 = local_1f8.SlotIndices.AllocatorInstance.SecondaryData;
                  }
                  memcpy((void *)FVar26,(void *)FVar20,lVar41 << 2);
                }
                piVar29 = *(int **)(FVar10.Data + lVar24 * 0x28 + 0x18);
                if (piVar29 !=
                    piVar29 + (longlong)*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) * 0x1e) {
                  piVar25 = piVar29;
                  do {
                    if (*piVar25 == pFVar37[lVar19].SequentialIndex) {
                      lVar41 = SUB168(SEXT816(-0x7777777777777777) *
                                      SEXT816((longlong)piVar25 - (longlong)piVar29),8) +
                               ((longlong)piVar25 - (longlong)piVar29);
                      iVar16 = (int)(lVar41 >> 6) - (int)(lVar41 >> 0x3f);
                      if (iVar16 != -1) {
                        lVar41 = lVar35 + 0x20;
                        if (pFVar37[lVar19].bHasVerticalExpansion == false) {
                          lVar41 = lVar35 + 0x1c;
                        }
                        *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) =
                             *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) -
                             *(float *)((pFVar37->SlotIndices).AllocatorInstance.InlineData +
                                       lVar41 + -0x28);
                        *(float *)(FVar10.Data + lVar24 * 0x28 + 4) =
                             *(float *)(FVar10.Data + lVar24 * 0x28 + 4) - pFVar37[lVar19].MinLength
                        ;
                        *(float *)(FVar10.Data + lVar24 * 0x28 + 8) =
                             *(float *)(FVar10.Data + lVar24 * 0x28 + 8) -
                             pFVar37[lVar19].ReserveLength;
                        TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                        ::RemoveAt((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                                    *)(FVar10.Data + lVar24 * 0x28 + 0x18),iVar16,No);
                        uVar28 = 0;
                        *(undefined4 *)(FVar10.Data + lVar24 * 0x28 + 0x10) = 0;
                        if (0 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
                          lVar19 = 0;
                          do {
                            uVar32 = 0;
                            if ((int)uVar28 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
                              uVar32 = ~uVar28 >> 0x1f;
                            }
                            if ((uVar32 == 0) &&
                               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar13)) {
                              pcVar6 = (code *)swi(3);
                              pTVar18 = (TVector2<double> *)(*pcVar6)();
                              return pTVar18;
                            }
                            uVar28 = uVar28 + 1;
                            fVar42 = *(float *)(lVar19 + 0x10 +
                                               *(longlong *)(FVar10.Data + lVar24 * 0x28 + 0x18));
                            lVar19 = lVar19 + 0x78;
                            if (fVar42 <= *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10)) {
                              fVar42 = *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10);
                            }
                            *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10) = fVar42;
                          } while ((int)uVar28 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20));
                        }
                        if (fVar7 < (float)(uVar33 & uVar4)) {
                          iVar16 = (int)local_368;
                          if ((int)local_368 == local_368._4_4_) {
                            iVar16 = Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x878,&local_370,(int *)((longlong)&local_368 + 4));
                          }
                          local_368 = CONCAT44(local_368._4_4_,iVar16 + 1);
                          FBlock::FBlock((FBlock *)(local_370.Data + (longlong)iVar16 * 0x78),
                                         &local_1f8);
                        }
                        iVar16 = local_360._0_4_;
                        if (local_360._0_4_ + -1 < (int)local_360._0_4_) {
                          iVar16 = local_360._0_4_ + -1;
                        }
                        iStack_2a0 = 0;
                        if (0 < iVar16) {
                          iStack_2a0 = iVar16;
                        }
                        local_2a8 = pFVar37;
                        if ((iStack_2a0 < 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("ArrayNum >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xfe,L""), bVar13)) {
                          pcVar6 = (code *)swi(3);
                          pTVar18 = (TVector2<double> *)(*pcVar6)();
                          return pTVar18;
                        }
                        local_360._0_4_ = iStack_2a0;
                        pFVar37 = local_2a8;
                      }
                      break;
                    }
                    piVar25 = piVar25 + 0x1e;
                  } while (piVar25 !=
                           piVar29 + (longlong)*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) * 0x1e);
                }
                if (local_1f8.SlotIndices.AllocatorInstance.SecondaryData !=
                    (ForElementType<int>)0x0) {
                  FMemory::Free((void *)local_1f8.SlotIndices.AllocatorInstance.SecondaryData);
                }
              }
            }
            if (iVar38 < 1) break;
          }
        }
LAB_1427a1cbc:
        local_348 = (FDeprecateSlateVector2D)pFVar37;
        fVar43 = (float)local_318;
        pFVar37 = (FBlock *)local_348;
        if (fVar43 < *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc)) {
          while( true ) {
            iVar16 = *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20);
            FVar31 = local_378;
            if (iVar16 < 2) break;
            lVar19 = *(longlong *)(FVar10.Data + lVar24 * 0x28 + 0x18);
            iVar38 = *(int *)(lVar19 + 4);
            lVar35 = (longlong)iVar16 * 0x78 + lVar19;
            while( true ) {
              if (*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) != iVar16) {
                local_356 = 0;
                `TCheckedPointerIterator<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock_const_,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(&local_356);
              }
              if (lVar19 == lVar35) goto LAB_1427a2136;
              if (iVar38 != *(int *)(lVar19 + 4)) break;
              lVar19 = lVar19 + 0x78;
            }
            iVar16 = local_360._0_4_;
            if (local_360._0_4_ == 0) break;
            uVar33 = 0;
            if ((int)(local_360._0_4_ - 1) < (int)local_360._0_4_) {
              uVar33 = ~(local_360._0_4_ - 1) >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              pTVar18 = (TVector2<double> *)(*pcVar6)();
              return pTVar18;
            }
            lVar19 = (longlong)(iVar16 + -1);
            if (pFVar37[lVar19].bCanWrap == false) {
              if ((*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) < 1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                pTVar18 = (TVector2<double> *)(*pcVar6)();
                return pTVar18;
              }
              if (pFVar37[lVar19].WrapPriority !=
                  *(int *)(*(longlong *)(FVar10.Data + lVar24 * 0x28 + 0x18) + 4))
              goto LAB_1427a1de6;
            }
            else {
LAB_1427a1de6:
              bVar13 = pFVar37[lVar19].bHasVerticalExpansion;
              if (bVar13 == false) {
                fVar42 = pFVar37[lVar19].MinLength;
                if ((fVar42 != pFVar37[lVar19].ReserveLength) &&
                   ((*(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) - fVar42) + fVar42 < fVar43))
                goto LAB_1427a20c8;
              }
              else {
                fVar42 = pFVar37[lVar19].ReserveLength;
              }
              local_178.SequentialIndex = pFVar37[lVar19].SequentialIndex;
              local_178.MinLength = pFVar37[lVar19].MinLength;
              FVar20 = (ForElementType<int>)&pFVar37[lVar19].SlotIndices;
              local_178.ReserveLength = pFVar37[lVar19].ReserveLength;
              local_178.WrapPriority = pFVar37[lVar19].WrapPriority;
              local_178.SlotIndices.ArrayNum =
                   ((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)FVar20)
                   ->ArrayNum;
              lVar35 = (longlong)local_178.SlotIndices.ArrayNum;
              local_178.bCanWrap = pFVar37[lVar19].bCanWrap;
              local_178.bForceNewLine = pFVar37[lVar19].bForceNewLine;
              local_178.bCanVerticallyExpand = pFVar37[lVar19].bCanVerticallyExpand;
              local_178.DesiredSize.field0_0x0 = pFVar37[lVar19].DesiredSize.field0_0x0;
              local_178.AdjustedSize.field0_0x0 = pFVar37[lVar19].AdjustedSize.field0_0x0;
              FVar26 = (((TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                        FVar20)->AllocatorInstance).SecondaryData;
              local_178.Area = pFVar37[lVar19].Area;
              if (FVar26 != (ForElementType<int>)0x0) {
                FVar20 = FVar26;
              }
              local_178.SlotIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
              local_178.bHasVerticalExpansion = bVar13;
              if (local_178.SlotIndices.ArrayNum == 0) {
                local_178.SlotIndices.ArrayMax = 0x10;
              }
              else {
                Core::Private::
                ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (4,4,local_178.SlotIndices.ArrayNum,0,
                           &local_178.SlotIndices.AllocatorInstance,local_178.SlotIndices.ArrayNum,
                           &local_178.SlotIndices.ArrayMax);
                FVar26 = (ForElementType<int>)&local_178.SlotIndices;
                if (local_178.SlotIndices.AllocatorInstance.SecondaryData !=
                    (ForElementType<int>)0x0) {
                  FVar26 = local_178.SlotIndices.AllocatorInstance.SecondaryData;
                }
                memcpy((void *)FVar26,(void *)FVar20,lVar35 << 2);
              }
              piVar29 = *(int **)(FVar10.Data + lVar24 * 0x28 + 0x18);
              if (piVar29 != piVar29 + (longlong)*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) * 0x1e
                 ) {
                piVar25 = piVar29;
                do {
                  if (*piVar25 == pFVar37[lVar19].SequentialIndex) {
                    lVar35 = SUB168(SEXT816(-0x7777777777777777) *
                                    SEXT816((longlong)piVar25 - (longlong)piVar29),8) +
                             ((longlong)piVar25 - (longlong)piVar29);
                    iVar38 = (int)(lVar35 >> 6) - (int)(lVar35 >> 0x3f);
                    if (iVar38 != -1) {
                      lVar35 = lVar19 * 0x78 + 0x20;
                      if (pFVar37[lVar19].bHasVerticalExpansion == false) {
                        lVar35 = lVar19 * 0x78 + 0x1c;
                      }
                      *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) =
                           *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) -
                           *(float *)((pFVar37->SlotIndices).AllocatorInstance.InlineData +
                                     lVar35 + -0x28);
                      *(float *)(FVar10.Data + lVar24 * 0x28 + 4) =
                           *(float *)(FVar10.Data + lVar24 * 0x28 + 4) - pFVar37[lVar19].MinLength;
                      *(float *)(FVar10.Data + lVar24 * 0x28 + 8) =
                           *(float *)(FVar10.Data + lVar24 * 0x28 + 8) -
                           pFVar37[lVar19].ReserveLength;
                      TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                      ::RemoveAt((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                                  *)(FVar10.Data + lVar24 * 0x28 + 0x18),iVar38,No);
                      uVar33 = 0;
                      *(undefined4 *)(FVar10.Data + lVar24 * 0x28 + 0x10) = 0;
                      if (0 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
                        lVar19 = 0;
                        do {
                          uVar28 = 0;
                          if ((int)uVar33 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
                            uVar28 = ~uVar33 >> 0x1f;
                          }
                          if ((uVar28 == 0) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar6 = (code *)swi(3);
                            pTVar18 = (TVector2<double> *)(*pcVar6)();
                            return pTVar18;
                          }
                          uVar33 = uVar33 + 1;
                          fVar3 = *(float *)(lVar19 + 0x10 +
                                            *(longlong *)(FVar10.Data + lVar24 * 0x28 + 0x18));
                          lVar19 = lVar19 + 0x78;
                          if (fVar3 <= *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10)) {
                            fVar3 = *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10);
                          }
                          *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10) = fVar3;
                        } while ((int)uVar33 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20));
                      }
                      if (fVar7 < (float)((uint)fVar42 & uVar4)) {
                        iVar38 = (int)local_368;
                        if ((int)local_368 == local_368._4_4_) {
                          iVar38 = Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x878,&local_370,(int *)((longlong)&local_368 + 4));
                        }
                        local_368 = CONCAT44(local_368._4_4_,iVar38 + 1);
                        FBlock::FBlock((FBlock *)(local_370.Data + (longlong)iVar38 * 0x78),
                                       &local_178);
                      }
                    }
                    break;
                  }
                  piVar25 = piVar25 + 0x1e;
                } while (piVar25 !=
                         piVar29 + (longlong)*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) * 0x1e);
              }
              if (local_178.SlotIndices.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)
              {
                FMemory::Free((void *)local_178.SlotIndices.AllocatorInstance.SecondaryData);
              }
            }
LAB_1427a20c8:
            if (iVar16 + -1 < iVar16) {
              iVar16 = iVar16 + -1;
            }
            iStack_290 = 0;
            if (0 < iVar16) {
              iStack_290 = iVar16;
            }
            local_298 = pFVar37;
            if ((iStack_290 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar13)) {
              pcVar6 = (code *)swi(3);
              pTVar18 = (TVector2<double> *)(*pcVar6)();
              return pTVar18;
            }
            local_2c8._8_4_ = iStack_290;
            local_2c8._0_8_ = local_298;
            local_2c8._12_4_ = uStack_28c;
            if (*(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) <= fVar43) break;
            local_360._0_4_ = iStack_290;
            pFVar37 = local_298;
          }
        }
LAB_1427a2136:
        param_1 = local_2d8;
        this = local_2e0;
        if (*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) == 0) break;
        if ((*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar18 = (TVector2<double> *)(*pcVar6)();
          return pTVar18;
        }
        puVar5 = *(uint **)(FVar10.Data + lVar24 * 0x28 + 0x18);
        uVar28 = *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) - 1;
        uVar33 = 0;
        if ((int)uVar28 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
          uVar33 = ~uVar28 >> 0x1f;
        }
        local_338 = puVar5;
        if ((uVar33 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar18 = (TVector2<double> *)(*pcVar6)();
          return pTVar18;
        }
        pFVar37 = (FBlock *)
                  (*(longlong *)(FVar10.Data + lVar24 * 0x28 + 0x18) + -0x78 +
                  (longlong)*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) * 0x78);
        local_2f0 = pFVar37;
        if (((int)puVar5[0x1c] < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar18 = (TVector2<double> *)(*pcVar6)();
          return pTVar18;
        }
        pfVar23 = (float *)(puVar5 + 10);
        if (*(float **)(puVar5 + 0x1a) != (float *)0x0) {
          pfVar23 = *(float **)(puVar5 + 0x1a);
        }
        local_354 = *pfVar23;
        piVar29 = &(pFVar37->SlotIndices).ArrayNum;
        iVar16 = *piVar29;
        uVar28 = iVar16 - 1;
        uVar33 = 0;
        if ((int)uVar28 < iVar16) {
          uVar33 = ~uVar28 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar18 = (TVector2<double> *)(*pcVar6)();
          return pTVar18;
        }
        FVar26 = (pFVar37->SlotIndices).AllocatorInstance.SecondaryData;
        FVar20 = (ForElementType<int>)&pFVar37->SlotIndices;
        if (FVar26 != (ForElementType<int>)0x0) {
          FVar20 = FVar26;
        }
        local_350 = ((float *)((longlong)FVar20 + -4))[*piVar29];
        lVar19 = (longlong)(int)local_354;
        uVar33 = 0;
        if ((int)local_354 < (local_2e0->ChildProxies).ArrayNum) {
          uVar33 = ~(uint)local_354 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar18 = (TVector2<double> *)(*pcVar6)();
          return pTVar18;
        }
        pFVar30 = (local_2e0->ChildProxies).AllocatorInstance.Data + lVar19 * 0xd0;
        lVar19 = (longlong)(int)local_350;
        uVar33 = 0;
        if ((int)local_350 < (local_2e0->ChildProxies).ArrayNum) {
          uVar33 = ~(uint)local_350 >> 0x1f;
        }
        local_2b8 = pFVar30;
        if ((uVar33 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar18 = (TVector2<double> *)(*pcVar6)();
          return pTVar18;
        }
        local_348 = (FDeprecateSlateVector2D)
                    ((local_2e0->ChildProxies).AllocatorInstance.Data + lVar19 * 0xd0);
        local_310 = pFVar37->SequentialIndex;
        local_2f8 = *puVar5;
        local_355 = local_354 == local_350;
        if (pFVar30[0xc9] != (FScriptContainerElement)0x0) {
          pfVar23 = *(float **)(puVar5 + 0x1a);
          pfVar22 = (float *)(puVar5 + 10);
          if (pfVar23 != (float *)0x0) {
            pfVar22 = pfVar23;
          }
          if (pfVar22 <= &local_354) {
            pfVar22 = (float *)(puVar5 + 10);
            if (pfVar23 != (float *)0x0) {
              pfVar22 = pfVar23;
            }
            if ((&local_354 < pfVar22 + (int)puVar5[0x1d]) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar6 = (code *)swi(3);
              pTVar18 = (TVector2<double> *)(*pcVar6)();
              return pTVar18;
            }
          }
          uVar33 = puVar5[0x1c];
          if (uVar33 != 0) {
            FVar26 = (ForElementType<int>)(puVar5 + 10);
            if (*(ForElementType<int> *)(puVar5 + 0x1a) != (ForElementType<int>)0x0) {
              FVar26 = *(ForElementType<int> *)(puVar5 + 0x1a);
            }
            uVar32 = 0;
            lVar19 = 0;
            local_378 = (FIdentityFunctor)(*(float *)FVar26 != local_354);
            uVar28 = 0;
            local_360 = FVar26;
            do {
              uVar15 = uVar28;
              do {
                lVar19 = lVar19 + 1;
                uVar15 = uVar15 + 1;
                if ((int)uVar33 <= lVar19) break;
              } while (local_378 ==
                       (FIdentityFunctor)(*(float *)((longlong)FVar26 + lVar19 * 4) != local_354));
              if (local_378 != (FIdentityFunctor)0x0) {
                if (uVar32 != uVar28) {
                  memmove((int *)((longlong)FVar26 + (longlong)(int)uVar32 * 4),
                          (int *)((longlong)FVar26 + (longlong)(int)uVar28 * 4),
                          (longlong)(int)(uVar15 - uVar28) << 2);
                  FVar26 = local_360;
                }
                uVar32 = uVar32 + (uVar15 - uVar28);
              }
              local_378 = (FIdentityFunctor)((byte)local_378 ^ 1);
              uVar28 = uVar15;
            } while (lVar19 < (int)uVar33);
            local_338[0x1c] = uVar32;
            pFVar37 = local_2f0;
            FVar31 = local_378;
          }
        }
        if ((local_355 == '\0') &&
           ((((FBlock *)((longlong)local_348 + 0x78))->SlotIndices).AllocatorInstance.InlineData
            [0x29] != '\0')) {
          FVar26 = (pFVar37->SlotIndices).AllocatorInstance.SecondaryData;
          FVar20 = (ForElementType<int>)&pFVar37->SlotIndices;
          if (FVar26 != (ForElementType<int>)0x0) {
            FVar20 = FVar26;
          }
          if ((ulonglong)FVar20 <= &local_350) {
            FVar20 = (ForElementType<int>)&pFVar37->SlotIndices;
            if (FVar26 != (ForElementType<int>)0x0) {
              FVar20 = FVar26;
            }
            if ((&local_350 <
                 (float *)((longlong)FVar20 + (longlong)(pFVar37->SlotIndices).ArrayMax * 4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar6 = (code *)swi(3);
              pTVar18 = (TVector2<double> *)(*pcVar6)();
              return pTVar18;
            }
          }
          iVar16 = (pFVar37->SlotIndices).ArrayNum;
          if (iVar16 != 0) {
            FVar26 = (pFVar37->SlotIndices).AllocatorInstance.SecondaryData;
            FVar20 = (ForElementType<int>)&pFVar37->SlotIndices;
            if (FVar26 != (ForElementType<int>)0x0) {
              FVar20 = FVar26;
            }
            iVar14 = 0;
            lVar19 = 0;
            local_378 = (FIdentityFunctor)(*(float *)FVar20 != local_350);
            iVar38 = 0;
            local_360 = FVar20;
            do {
              iVar39 = iVar38;
              do {
                lVar19 = lVar19 + 1;
                iVar39 = iVar39 + 1;
                if (iVar16 <= lVar19) break;
              } while (local_378 ==
                       (FIdentityFunctor)(*(float *)((longlong)FVar20 + lVar19 * 4) != local_350));
              if (local_378 != (FIdentityFunctor)0x0) {
                if (iVar14 != iVar38) {
                  memmove((int *)((longlong)FVar20 + (longlong)iVar14 * 4),
                          (int *)((longlong)FVar20 + (longlong)iVar38 * 4),
                          (longlong)(iVar39 - iVar38) << 2);
                  FVar20 = local_360;
                }
                iVar14 = iVar14 + (iVar39 - iVar38);
              }
              local_378 = (FIdentityFunctor)((byte)local_378 ^ 1);
              iVar38 = iVar39;
            } while (lVar19 < iVar16);
            (local_2f0->SlotIndices).ArrayNum = iVar14;
            pFVar37 = local_2f0;
            FVar31 = local_378;
          }
        }
        iVar38 = local_34c;
        if ((local_2b8[0xc9] != (FScriptContainerElement)0x0) && (local_338[0x1c] == 0)) {
          puVar5 = *(uint **)(FVar10.Data + lVar24 * 0x28 + 0x18);
          if (puVar5 != puVar5 + (longlong)*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) * 0x1e) {
            puVar27 = puVar5;
            do {
              if (*puVar27 == *local_338) {
                lVar19 = SUB168(SEXT816(-0x7777777777777777) *
                                SEXT816((longlong)puVar27 - (longlong)puVar5),8) +
                         ((longlong)puVar27 - (longlong)puVar5);
                iVar16 = (int)(lVar19 >> 6) - (int)(lVar19 >> 0x3f);
                if (iVar16 != -1) {
                  pfVar23 = (float *)(local_338 + 8);
                  if (*(char *)((longlong)local_338 + 10) == '\0') {
                    pfVar23 = (float *)(local_338 + 7);
                  }
                  *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) =
                       *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) - *pfVar23;
                  *(float *)(FVar10.Data + lVar24 * 0x28 + 4) =
                       *(float *)(FVar10.Data + lVar24 * 0x28 + 4) - (float)local_338[7];
                  *(float *)(FVar10.Data + lVar24 * 0x28 + 8) =
                       *(float *)(FVar10.Data + lVar24 * 0x28 + 8) - (float)local_338[8];
                  TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                  ::RemoveAt((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                              *)(FVar10.Data + lVar24 * 0x28 + 0x18),iVar16,No);
                  uVar33 = 0;
                  *(undefined4 *)(FVar10.Data + lVar24 * 0x28 + 0x10) = 0;
                  if (0 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
                    lVar19 = 0;
                    do {
                      uVar28 = 0;
                      if ((int)uVar33 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
                        uVar28 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar28 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar6 = (code *)swi(3);
                        pTVar18 = (TVector2<double> *)(*pcVar6)();
                        return pTVar18;
                      }
                      uVar33 = uVar33 + 1;
                      fVar43 = *(float *)(lVar19 + 0x10 +
                                         *(longlong *)(FVar10.Data + lVar24 * 0x28 + 0x18));
                      lVar19 = lVar19 + 0x78;
                      if (fVar43 <= *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10)) {
                        fVar43 = *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10);
                      }
                      *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10) = fVar43;
                    } while ((int)uVar33 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20));
                  }
                  iVar38 = local_34c + 1;
                }
                break;
              }
              puVar27 = puVar27 + 0x1e;
            } while (puVar27 !=
                     puVar5 + (longlong)*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) * 0x1e);
          }
        }
        if ((((FBlock *)((longlong)local_348 + 0x78))->SlotIndices).AllocatorInstance.InlineData
            [0x29] != '\0') {
          if (local_2f8 == local_310) {
            if (((pFVar37->SlotIndices).ArrayNum != 0) ||
               (iVar16 = TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                         ::Find((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                                 *)(FVar10.Data + lVar24 * 0x28 + 0x18),pFVar37), iVar16 == -1))
            goto LAB_1427a27e4;
            pfVar23 = &pFVar37->ReserveLength;
            if (pFVar37->bHasVerticalExpansion == false) {
              pfVar23 = &pFVar37->MinLength;
            }
            *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) =
                 *(float *)(FVar10.Data + lVar24 * 0x28 + 0xc) - *pfVar23;
            *(float *)(FVar10.Data + lVar24 * 0x28 + 4) =
                 *(float *)(FVar10.Data + lVar24 * 0x28 + 4) - pFVar37->MinLength;
            *(float *)(FVar10.Data + lVar24 * 0x28 + 8) =
                 *(float *)(FVar10.Data + lVar24 * 0x28 + 8) - pFVar37->ReserveLength;
            TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
            ::RemoveAt((TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                        *)(FVar10.Data + lVar24 * 0x28 + 0x18),iVar16,No);
            uVar33 = 0;
            *(undefined4 *)(FVar10.Data + lVar24 * 0x28 + 0x10) = 0;
            if (0 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
              lVar19 = 0;
              do {
                uVar28 = 0;
                if ((int)uVar33 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20)) {
                  uVar28 = ~uVar33 >> 0x1f;
                }
                if ((uVar28 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  pTVar18 = (TVector2<double> *)(*pcVar6)();
                  return pTVar18;
                }
                uVar33 = uVar33 + 1;
                fVar43 = *(float *)(lVar19 + 0x10 +
                                   *(longlong *)(FVar10.Data + lVar24 * 0x28 + 0x18));
                lVar19 = lVar19 + 0x78;
                if (fVar43 <= *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10)) {
                  fVar43 = *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10);
                }
                *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10) = fVar43;
              } while ((int)uVar33 < *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20));
            }
          }
          iVar38 = iVar38 + 1;
        }
LAB_1427a27e4:
        if ((*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) == 0) &&
           (bVar13 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6205726378302636518>,true,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SPrioritizedWrapBox.cpp"
                                ,0x1e6,"!CurrentLine.Blocks.IsEmpty()"), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar18 = (TVector2<double> *)(*pcVar6)();
          return pTVar18;
        }
        fVar43 = *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10);
        if (*(float *)(FVar10.Data + lVar24 * 0x28 + 0x10) <= fVar46) {
          fVar43 = fVar46;
        }
        iVar14 = *(int *)(FVar10.Data + lVar24 * 0x28 + 0x20);
        fVar42 = *(float *)(FVar10.Data + lVar24 * 0x28 + 8);
        if (*(float *)(FVar10.Data + lVar24 * 0x28 + 8) <= fVar45) {
          fVar42 = fVar45;
        }
        fVar45 = fVar42;
        local_314 = local_314 + 1;
        if (local_2e4 <= fVar43) {
          fVar43 = local_2e4;
        }
        *(float *)(FVar10.Data + lVar24 * 0x28 + 0x10) = fVar43;
        fVar42 = fVar43 + fVar47;
        if (fVar43 + fVar47 <= fVar44) {
          fVar42 = fVar44;
        }
        fVar47 = fVar47 + fVar43 + fVar2;
        local_320._4_4_ = fVar42;
        local_320._0_4_ = fVar45;
        local_34c = iVar38 + iVar14;
        DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
                  ((FBlock *)local_330.Data,local_328);
        FVar8.Data = local_370.Data;
        iVar16 = (int)local_368;
        local_328 = (int)local_368;
        if (((int)local_368 == 0) && (local_324 == 0)) {
          local_324 = 0;
          iVar16 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,(int)local_368,local_324,&local_330,(int)local_368,&local_324);
          ConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
                    (local_330.Data,(FBlock *)FVar8.Data,iVar16);
          iVar16 = (int)local_368;
        }
        if ((longlong)local_368 < 0) {
          DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
                    ((FBlock *)local_370.Data,iVar16);
          bVar13 = local_368._4_4_ != 0;
          local_368 = (ulonglong)local_368._4_4_ << 0x20;
          if (bVar13) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,0,&local_370,0,(int *)((longlong)&local_368 + 4));
          }
        }
        else {
          DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
                    ((FBlock *)local_370.Data,iVar16);
          local_368 = local_368 & 0xffffffff00000000;
        }
        AlgoImpl::
        StableSortInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TLess<void>_>_>
                  ((FBlock *)local_330.Data,local_328,FVar31,(TLess<void> *)local_2f4);
        this = local_2e0;
        iVar16 = (local_2e0->WrappableSortedBlockView).ArrayNum;
        local_288 = (local_2e0->WrappableSortedBlockView).DataPtr;
        iStack_280 = iVar16;
        if ((iVar16 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar18 = (TVector2<double> *)(*pcVar6)();
          return pTVar18;
        }
        local_2c8._8_4_ = iStack_280;
        local_2c8._0_8_ = local_288;
        local_2c8._12_4_ = uStack_27c;
        param_1 = local_2d8;
        fVar44 = fVar42;
        if ((*(float *)(FVar10.Data + lVar24 * 0x28 + 8) <= 0.0) ||
           ((this->Blocks).ArrayNum <= iVar38 + iVar14)) break;
        local_348 = (FDeprecateSlateVector2D)local_288;
        local_360._0_4_ = iStack_280;
      }
    }
    this->LastPreferredLineLength = local_2e8;
    this->LastParentLineLength = local_318;
    pFVar17 = SWidget::GetTickSpaceGeometry((SWidget *)param_1);
    (this->LastParentSize).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)&pFVar17->Size;
    this->LastLinePadding = fVar2;
    (this->LastDesiredSize).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)local_320;
    TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,TSizedDefaultAllocator<32>_>::
    SetNum(&local_308,local_314,Default);
    pTVar1 = &this->BlockLines;
    if (pTVar1 != &local_308) {
      DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int>
                ((FBlockLine *)(pTVar1->AllocatorInstance).Data,(this->BlockLines).ArrayNum);
      iVar16 = local_308.ArrayNum;
      FVar8.Data = local_308.AllocatorInstance.Data;
      piVar29 = &(this->BlockLines).ArrayMax;
      (this->BlockLines).ArrayNum = local_308.ArrayNum;
      if ((local_308.ArrayNum == 0) && (*piVar29 == 0)) {
        *piVar29 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,local_308.ArrayNum,*piVar29,&pTVar1->AllocatorInstance,local_308.ArrayNum,
                   piVar29);
        ConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int>
                  ((pTVar1->AllocatorInstance).Data,(FBlockLine *)FVar8.Data,iVar16);
      }
    }
    DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
              ((FBlock *)local_370.Data,(int)local_368);
    if ((FBlock *)local_370.Data != (FBlock *)0x0) {
      FMemory::Free(local_370.Data);
    }
    DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
              ((FBlock *)local_330.Data,local_328);
    if ((FBlock *)local_330.Data != (FBlock *)0x0) {
      FMemory::Free(local_330.Data);
    }
    DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int>
              ((FBlockLine *)local_308.AllocatorInstance.Data,local_308.ArrayNum);
    if ((FBlockLine *)local_308.AllocatorInstance.Data != (FBlockLine *)0x0) {
      FMemory::Free(local_308.AllocatorInstance.Data);
    }
  }
  else {
    local_320._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
    local_320._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
    fVar44 = (float)local_320._4_4_;
    fVar45 = (float)(undefined4)local_320;
  }
  (local_2b0->field0_0x0)._s_0.X = (double)fVar45;
  (local_2b0->field0_0x0)._s_0.Y = (double)fVar44;
  return local_2b0;
code_r0x0001427a1305:
  piVar25 = piVar25 + 0x1e;
  if (piVar25 == piVar29 + (longlong)*(int *)(FVar10.Data + lVar24 * 0x28 + 0x20) * 0x1e)
  goto LAB_1427a17f2;
  goto LAB_1427a1301;
}

// Arrange @ 1427d25c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UE::Slate::PrioritizedWrapBox::FChildArranger::Arrange
          (FChildArranger *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  float afVar5 [2];
  float afVar6 [2];
  float afVar7 [2];
  float afVar8 [2];
  FChildArranger *pFVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  FSlotProxy *pFVar15;
  uint uVar16;
  uint uVar17;
  TVector2<float>_u_0 TVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_178;
  float fStack_174;
  ForAnyElementType local_170;
  undefined8 local_168;
  uint local_160;
  longlong local_158;
  FChildArranger *local_150;
  FScriptContainerElement *local_148;
  TVector2<float>_u_0 local_140;
  FDeprecateSlateVector2D local_138;
  float local_130;
  float fStack_12c;
  FGeometry *local_128;
  FArrangedChildren *local_120;
  undefined4 local_118;
  float fStack_114;
  longlong local_110;
  TVector2<float>_u_0_s_0 local_104;
  FGeometry local_f8;
  TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int> local_c0;
  TVector2<double> local_b0;
  TTransform2<float> local_a0 [4];
  
  TVar18 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  iVar13 = (this->BlockLines).ArrayNum;
  if (iVar13 != 0) {
    fVar24 = 0.0;
    fVar25 = this->LastLinePadding;
    local_138 = param_1->Size;
    local_140 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_150 = this;
    local_128 = param_1;
    local_120 = param_2;
    if ((iVar13 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    afVar7 = _UNK_15076b188;
    afVar5 = ___xmm_3f80000000000000000000003f800000;
    local_160 = 0;
    if (0 < (this->BlockLines).ArrayNum) {
      local_158 = 0;
      do {
        lVar14 = local_158;
        uVar16 = local_160;
        uVar17 = 0;
        if ((int)local_160 < (this->BlockLines).ArrayNum) {
          uVar17 = ~local_160 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar17 = (this->ChildProxies).ArrayNum;
        pFVar22 = (this->BlockLines).AllocatorInstance.Data;
        local_170.Data = (FScriptContainerElement *)0x0;
        local_168 = 0;
        local_148 = pFVar22;
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
        }
        if (0 < (int)uVar17) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xd0,8,uVar17,&local_170,0,(int *)((longlong)&local_168 + 4));
        }
        uVar17 = 0;
        if (0 < *(int *)(pFVar22 + lVar14 + 0x20)) {
          lVar19 = 0;
          do {
            uVar16 = 0;
            if ((int)uVar17 < *(int *)(pFVar22 + lVar14 + 0x20)) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar9 = local_150;
            lVar2 = *(longlong *)(pFVar22 + lVar14 + 0x18);
            uVar16 = 0;
            if (0 < *(int *)(lVar19 + 0x70 + lVar2)) {
              lVar20 = lVar19 + lVar2;
              lVar21 = 0;
              do {
                uVar11 = 0;
                if ((int)uVar16 < *(int *)(lVar20 + 0x70)) {
                  uVar11 = ~uVar16 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                lVar14 = lVar20 + 0x28;
                if (*(longlong *)(lVar20 + 0x68) != 0) {
                  lVar14 = *(longlong *)(lVar20 + 0x68);
                }
                uVar11 = *(uint *)(lVar21 + lVar14);
                uVar12 = 0;
                if ((int)uVar11 < (pFVar9->ChildProxies).ArrayNum) {
                  uVar12 = ~uVar11 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar15 = (FSlotProxy *)
                          ((pFVar9->ChildProxies).AllocatorInstance.Data +
                          (longlong)(int)uVar11 * 0xd0);
                fVar23 = *(float *)(local_148 + local_158 + 0x10);
                if (*(float *)&pFVar15->_padding_ <= *(float *)(local_148 + local_158 + 0x10)) {
                  fVar23 = *(float *)&pFVar15->_padding_;
                }
                *(float *)&pFVar15->_padding_ = fVar23;
                iVar13 = (int)local_168;
                if ((int)local_168 == local_168._4_4_) {
                  iVar13 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x8d0,&local_170,(int *)((longlong)&local_168 + 4));
                }
                local_168 = CONCAT44(local_168._4_4_,iVar13 + 1);
                FSlotProxy::FSlotProxy
                          ((FSlotProxy *)(local_170.Data + (longlong)iVar13 * 0xd0),pFVar15);
                uVar16 = uVar16 + 1;
                lVar21 = lVar21 + 4;
                lVar14 = local_158;
                pFVar22 = local_148;
              } while ((int)uVar16 < *(int *)(lVar19 + 0x70 + lVar2));
            }
            uVar17 = uVar17 + 1;
            lVar19 = lVar19 + 0x78;
            TVar18 = local_140;
            param_1 = local_128;
            param_2 = local_120;
            this = local_150;
            uVar16 = local_160;
          } while ((int)uVar17 < *(int *)(pFVar22 + lVar14 + 0x20));
        }
        afVar8 = _UNK_15076b188;
        afVar6 = ___xmm_3f80000000000000000000003f800000;
        local_104 = (param_1->AbsolutePosition).field0_0x0._s_0;
        fVar23 = param_1->Scale;
        local_138._4_4_ = *(undefined4 *)(pFVar22 + lVar14 + 0x10);
        local_f8.Size = local_138;
        local_f8.Scale = 1.0;
        local_f8.AbsolutePosition.field0_0x0._s_0.X = 0.0;
        local_f8.AbsolutePosition.field0_0x0._s_0.Y = 0.0;
        ___xmm_3f80000000000000000000003f800000 = afVar5[0];
        _UNK_15076b184 = afVar5[1];
        local_a0[0].M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_a0[0].M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar7[0];
        _UNK_15076b18c = afVar7[1];
        local_a0[0].M.M[1][0] = _UNK_15076b188;
        local_a0[0].M.M[1][1] = _UNK_15076b18c;
        ___xmm_3f80000000000000000000003f800000 = afVar6;
        _UNK_15076b188 = afVar8;
        local_f8.Position.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_a0[0].Trans.field0_0x0 = TVar18;
        Concatenate<TTransform2<float>_>
                  (&local_f8.AccumulatedRenderTransform,local_a0,
                   &param_1->AccumulatedRenderTransform);
        local_178 = TVar18._s_0.X;
        local_f8.bHasRenderTransform = param_1->bHasRenderTransform;
        fStack_174 = TVar18._s_0.Y;
        iVar13 = (int)local_168;
        local_130 = local_178 * fVar23 + local_104.X;
        fStack_12c = fStack_174 * fVar23 + local_104.Y;
        local_c0.DataPtr = (FSlotProxy *)local_170.Data;
        local_f8.Scale = fVar23;
        local_f8.AbsolutePosition.field0_0x0._s_0.X = local_130;
        local_f8.AbsolutePosition.field0_0x0._s_0.Y = fStack_12c;
        local_f8.Position.field0_0x0 = TVar18;
        if (((int)local_168 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_c0.ArrayNum = iVar13;
        ArrangeChildrenInStack<0,TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>,UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy>
                  (GSlateFlowDirection,&local_c0,&local_f8,param_2,0.0,true,&local_b0);
        uVar17 = 0;
        lVar14 = local_158;
        if (0 < *(int *)(pFVar22 + local_158 + 0x20)) {
          lVar19 = 0;
          do {
            uVar16 = 0;
            if ((int)uVar17 < *(int *)(pFVar22 + lVar14 + 0x20)) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_110 = *(longlong *)(pFVar22 + lVar14 + 0x18);
            uVar16 = 0;
            if (0 < *(int *)(lVar19 + 0x70 + local_110)) {
              lVar21 = 0;
              lVar2 = lVar19 + local_110;
              lVar20 = 0;
              do {
                uVar11 = 0;
                if ((int)uVar16 < *(int *)(lVar2 + 0x70)) {
                  uVar11 = ~uVar16 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                lVar14 = lVar2 + 0x28;
                if (*(longlong *)(lVar2 + 0x68) != 0) {
                  lVar14 = *(longlong *)(lVar2 + 0x68);
                }
                uVar11 = *(uint *)(lVar20 + lVar14);
                uVar12 = 0;
                if ((int)uVar16 < (int)local_168) {
                  uVar12 = ~uVar16 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar3 = *(undefined8 *)(local_170.Data + lVar21 + 0x1c);
                uVar12 = 0;
                if ((int)uVar11 < (local_150->ChildProxies).ArrayNum) {
                  uVar12 = ~uVar11 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar16 = uVar16 + 1;
                lVar20 = lVar20 + 4;
                lVar21 = lVar21 + 0xd0;
                *(undefined8 *)
                 ((local_150->ChildProxies).AllocatorInstance.Data +
                 (longlong)(int)uVar11 * 0xd0 + 0x1c) = uVar3;
                lVar14 = local_158;
                this = local_150;
                pFVar22 = local_148;
              } while ((int)uVar16 < *(int *)(lVar19 + 0x70 + local_110));
            }
            uVar17 = uVar17 + 1;
            lVar19 = lVar19 + 0x78;
            TVar18 = local_140;
            param_1 = local_128;
            param_2 = local_120;
            uVar16 = local_160;
          } while ((int)uVar17 < *(int *)(pFVar22 + lVar14 + 0x20));
        }
        if (uVar16 == (this->BlockLines).ArrayNum - 1U) {
          fVar25 = 0.0;
        }
        else {
          local_118 = 0;
          fVar24 = (float)((double)fVar25 + local_b0.field0_0x0._s_0.Y + (double)fVar24);
          TVar18 = (TVector2<float>_u_0)((ulonglong)(uint)fVar24 << 0x20);
          local_140 = TVar18;
          fStack_114 = fVar24;
        }
        DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>
                  ((FSlotProxy *)local_170.Data,(int)local_168);
        if ((FSlotProxy *)local_170.Data != (FSlotProxy *)0x0) {
          FMemory::Free(local_170.Data);
        }
        local_160 = uVar16 + 1;
        local_158 = lVar14 + 0x28;
      } while ((int)local_160 < (this->BlockLines).ArrayNum);
    }
  }
  return;
}

// UpdateBlocks @ 1428387b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks
          (FChildArranger *this,TPanelChildren<SPrioritizedWrapBox::FSlot> *param_1,float param_2)

{
  int *piVar1;
  longlong lVar2;
  ForElementType<int> FVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TVector2<float>_u_0 TVar7;
  TVector2<float>_u_0 TVar8;
  float fVar9;
  TPanelChildren<SPrioritizedWrapBox::FSlot> *pTVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FDeprecateSlateVector2D FVar14;
  FGeometry *pFVar15;
  ForElementType<int> FVar16;
  uint uVar17;
  TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_> *this_00
  ;
  FBlock *pFVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  FIdentityFunctor local_res8 [8];
  TPanelChildren<SPrioritizedWrapBox::FSlot> *local_res10;
  float fStackX_24;
  longlong local_108;
  longlong local_f0;
  float local_e8;
  float local_e0;
  undefined4 uStack_d4;
  uint uStack_c4;
  
  if ((this->ChildProxies).ArrayNum != 0) {
    local_res10 = param_1;
    TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>::
    SetNum(&this->Blocks,(param_1->Children).ArrayNum,No);
    TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>::
    SetNum(&this->SortedBlocks,(param_1->Children).ArrayNum,No);
    uVar17 = 0;
    if (((this->Blocks).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar18 = (FBlock *)(this->Blocks).AllocatorInstance.Data;
    FBlock::ResetToDefault(pFVar18);
    pFVar18->SequentialIndex = 0;
    if (((this->ChildProxies).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar18->WrapPriority = *(int *)((this->ChildProxies).AllocatorInstance.Data + 0xc4);
    if (((this->ChildProxies).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar19 = 1;
    pFVar18->bForceNewLine = (bool)(this->ChildProxies).AllocatorInstance.Data[200];
    fVar9 = __real_3fc00000;
    if (0 < (this->ChildProxies).ArrayNum) {
      lVar20 = 0;
      local_108 = 0x78;
      local_f0 = 0;
      do {
        pTVar10 = local_res10;
        uVar12 = 0;
        if ((int)uVar17 < (local_res10->Children).ArrayNum) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar2 = *(longlong *)((pTVar10->Children).AllocatorInstance.Data + local_f0);
        if (pFVar18->WrapPriority != *(int *)(lVar2 + 0x58)) {
          uVar12 = 0;
          if ((int)uVar19 < (this->Blocks).ArrayNum) {
            uVar12 = ~uVar19 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar18 = (FBlock *)((this->Blocks).AllocatorInstance.Data + local_108);
          piVar1 = &(pFVar18->SlotIndices).ArrayMax;
          pFVar18->SequentialIndex = -1;
          pFVar18->WrapPriority = -1;
          pFVar18->bCanWrap = true;
          pFVar18->bForceNewLine = false;
          pFVar18->bHasVerticalExpansion = false;
          pFVar18->bCanVerticallyExpand = false;
          (pFVar18->DesiredSize).field0_0x0._s_0 =
               (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          (pFVar18->AdjustedSize).field0_0x0._s_0 =
               (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          pFVar18->MinLength = 0.0;
          pFVar18->ReserveLength = 0.0;
          pFVar18->Area = 0.0;
          (pFVar18->SlotIndices).ArrayNum = 0;
          if (*piVar1 < 0) {
            Core::Private::
            ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,0,&(pFVar18->SlotIndices).AllocatorInstance,0,piVar1);
          }
          pFVar18->SequentialIndex = uVar19;
          uVar19 = uVar19 + 1;
          local_108 = local_108 + 0x78;
          pFVar18->WrapPriority = *(int *)(lVar2 + 0x58);
          pFVar18->bForceNewLine = *(bool *)(lVar2 + 0x68);
        }
        iVar13 = (pFVar18->SlotIndices).ArrayNum;
        if (iVar13 == (pFVar18->SlotIndices).ArrayMax) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,&(pFVar18->SlotIndices).AllocatorInstance,
                              &(pFVar18->SlotIndices).ArrayMax);
        }
        (pFVar18->SlotIndices).ArrayNum = iVar13 + 1;
        FVar3 = (pFVar18->SlotIndices).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<int>)&pFVar18->SlotIndices;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar16 = FVar3;
        }
        *(uint *)((longlong)FVar16 + (longlong)iVar13 * 4) = uVar17;
        if ((TEnumAsByte<EVisibility::Private>)
            *(uchar *)&(*(SWidget **)(lVar2 + 0x10))->VisibilityAttribute !=
            EVisibility::Collapsed.Value.Value) {
          FVar14 = SWidget::GetDesiredSize(*(SWidget **)(lVar2 + 0x10));
          uVar4 = *(undefined8 *)FVar14;
          pFVar15 = SWidget::GetTickSpaceGeometry(*(SWidget **)(lVar2 + 0x10));
          fVar21 = *(float *)(lVar2 + 0x50);
          FVar14 = pFVar15->Size;
          local_e8 = (float)uVar4;
          fVar25 = local_e8;
          if ((0.0 < fVar21) && (fVar21 <= local_e8)) {
            fVar25 = fVar21;
          }
          fVar21 = *(float *)(lVar2 + 0x4c);
          fVar26 = fVar25;
          if ((0.0 < fVar21) && (fVar26 = fVar21, local_e8 = fVar21, fVar21 <= fVar25)) {
            fVar26 = fVar25;
          }
          fStackX_24 = (float)((ulonglong)uVar4 >> 0x20);
          fVar27 = *(float *)(lVar2 + 0x30) + *(float *)(lVar2 + 0x28);
          fVar24 = *(float *)(lVar2 + 0x34) + *(float *)(lVar2 + 0x2c);
          fVar21 = fVar26;
          fVar25 = fStackX_24;
          if (*(char *)(lVar2 + 0x5d) == '\x01') {
            pFVar18->bCanVerticallyExpand = true;
            if (*(char *)(lVar2 + 100) == '\0') {
              fVar23 = param_2 * fVar9;
            }
            else {
              fVar23 = *(float *)(lVar2 + 0x60);
            }
            if ((fVar23 < fStackX_24 + fVar24) && (local_e0 = FVar14._0_4_, 0.0 < local_e0)) {
              pFVar18->bHasVerticalExpansion = true;
              fVar21 = (float)(int)(fVar24 + param_2);
              auVar22 = roundps(ZEXT416((uint)fVar21),
                                ZEXT416((uint)((fStackX_24 * fVar26) / fVar21)),2);
              fVar21 = fVar27 + fVar27 + auVar22._0_4_;
              fVar25 = param_2;
            }
          }
          bVar11 = pFVar18->bForceNewLine;
          fVar27 = (pFVar18->DesiredSize).field0_0x0._s_0.Y;
          fVar24 = (pFVar18->AdjustedSize).field0_0x0._s_0.Y;
          if (fVar27 <= fStackX_24) {
            fVar27 = fStackX_24;
          }
          if (fVar24 <= fVar25) {
            fVar24 = fVar25;
          }
          fVar25 = (pFVar18->DesiredSize).field0_0x0._s_0.X;
          fVar23 = (pFVar18->AdjustedSize).field0_0x0._s_0.X;
          pFVar18->MinLength = local_e8 + pFVar18->MinLength;
          TVar7._s_0.Y = fVar27;
          TVar7._s_0.X = fVar26 + fVar25;
          fVar25 = pFVar18->ReserveLength;
          (pFVar18->DesiredSize).field0_0x0 = TVar7;
          TVar8._s_0.Y = fVar24;
          TVar8._s_0.X = fVar21 + fVar23;
          (pFVar18->AdjustedSize).field0_0x0 = TVar8;
          pFVar18->ReserveLength = fVar21 + fVar25;
          pFVar18->bCanWrap = *(bool *)(lVar2 + 0x54);
          if ((bVar11 == false) && (*(char *)(lVar2 + 0x68) == '\0')) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          pFVar18->bForceNewLine = bVar11;
          pFVar18->Area = fStackX_24 * fVar26 + pFVar18->Area;
          uVar12 = 0;
          if ((int)uVar17 < (this->ChildProxies).ArrayNum) {
            uVar12 = ~uVar17 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->ChildProxies).AllocatorInstance.Data;
          if (pFVar18->bHasVerticalExpansion == false) {
            fVar21 = fVar26;
          }
          *(float *)(pFVar5 + lVar20 + 0x14) = fVar21;
          *(float *)(pFVar5 + lVar20 + 0x18) = param_2;
        }
        uVar17 = uVar17 + 1;
        local_f0 = local_f0 + 8;
        lVar20 = lVar20 + 0xd0;
      } while ((int)uVar17 < (this->ChildProxies).ArrayNum);
    }
    this_00 = &this->SortedBlocks;
    TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>::
    SetNum(&this->Blocks,uVar19,No);
    TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>::
    operator=(this_00,&this->Blocks);
    AlgoImpl::
    StableSortInternal<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,FIdentityFunctor,TDereferenceWrapper<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,_UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateBlocks_::__l2::<lambda_2>_>_>
              ((FBlock *)(this_00->AllocatorInstance).Data,(this->SortedBlocks).ArrayNum,
               local_res8[0],(<lambda_2> *)local_res8);
    uVar17 = 0;
    if (0 < (this->SortedBlocks).ArrayNum) {
      lVar20 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar17 < (this->SortedBlocks).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this_00->AllocatorInstance).Data;
        if ((pFVar5[lVar20 + 8] != (FScriptContainerElement)0x0) ||
           (pFVar5[lVar20 + 9] != (FScriptContainerElement)0x0)) {
          if (uVar17 != 0xffffffff) {
            pFVar18 = (FBlock *)(pFVar5 + (longlong)(int)uVar17 * 0x78);
            iVar13 = (this->SortedBlocks).ArrayNum - uVar17;
            if ((iVar13 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar20 = CONCAT44(uStack_d4,iVar13);
            goto LAB_142838e2c;
          }
          break;
        }
        uVar17 = uVar17 + 1;
        lVar20 = lVar20 + 0x78;
      } while ((int)uVar17 < (this->SortedBlocks).ArrayNum);
    }
    pFVar18 = (FBlock *)0x0;
    lVar20 = (ulonglong)uStack_c4 << 0x20;
LAB_142838e2c:
    (this->WrappableSortedBlockView).DataPtr = pFVar18;
    *(longlong *)&(this->WrappableSortedBlockView).ArrayNum = lVar20;
  }
  return;
}

// UpdateChildProxies @ 142838eb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
UE::Slate::PrioritizedWrapBox::FChildArranger::UpdateChildProxies
          (FChildArranger *this,TPanelChildren<SPrioritizedWrapBox::FSlot> *param_1)

{
  int iVar1;
  FSlot *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  FSlotProxy *this_00;
  bool local_res8;
  longlong local_128;
  undefined1 local_120 [56];
  undefined1 local_e8 [24];
  float local_d0;
  FScriptContainerElement local_cc;
  undefined1 local_c8 [24];
  float local_b0;
  float local_ac;
  EVisibility local_a8;
  EHorizontalAlignment local_a4;
  EVerticalAlignment local_a0;
  float local_9c [2];
  float afStack_94 [2];
  TVector2<float>_u_0 local_8c;
  bool local_84;
  TVector2<float>_u_0 local_80;
  SWidget *local_78;
  FSharedReferencer<1> local_70;
  undefined2 local_68;
  float local_64;
  char local_60;
  TSlateContainedAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  local_5c;
  undefined2 local_58;
  
  iVar1 = (param_1->Children).ArrayNum;
  lVar9 = (longlong)iVar1;
  bVar5 = false;
  uVar11 = 0;
  local_res8 = false;
  this->NumPreferredWrappingChildren = 0;
  this->NumParentWrappingChildren = 0;
  if ((this->ChildProxies).ArrayNum == 0) {
    TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,TSizedDefaultAllocator<32>_>::
    SetNum(&this->ChildProxies,iVar1,No);
    uVar12 = uVar11;
    uVar15 = uVar11;
    if (0 < lVar9) {
      do {
        uVar13 = (uint)uVar15;
        uVar16 = ~uVar13 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar13 < (param_1->Children).ArrayNum) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar2 = *(FSlot **)((param_1->Children).AllocatorInstance.Data + uVar12 * 8);
        ::FSlotProxy::FSlotProxy<SPrioritizedWrapBox::FSlot>((FSlotProxy *)local_120,uVar13,pFVar2);
        local_60 = '\0';
        local_68._0_1_ = *(FScriptContainerElement *)&pFVar2->WrapMode;
        local_68._1_1_ = (FScriptContainerElement)pFVar2->VerticalOverflowBehavior;
        if ((&pFVar2->VerticalExpansionThreshold != (TOptional<float> *)&local_64) &&
           ((pFVar2->VerticalExpansionThreshold).bIsSet != false)) {
          local_64 = (pFVar2->VerticalExpansionThreshold).TypedValue;
          local_60 = '\x01';
        }
        local_5c = pFVar2->WrapPriority;
        local_58._0_1_ = (FScriptContainerElement)pFVar2->bForceNewLine;
        local_58._1_1_ = (FScriptContainerElement)pFVar2->bExcludeIfFirstOrLast;
        uVar14 = 0;
        if ((int)uVar13 < (this->ChildProxies).ArrayNum) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (this->ChildProxies).AllocatorInstance.Data;
        *(undefined4 *)(pFVar3 + uVar11) = local_120._0_4_;
        *(undefined8 *)(pFVar3 + uVar11 + 4) = local_120._4_8_;
        *(undefined8 *)(pFVar3 + uVar11 + 4 + 8) = local_120._12_8_;
        *(undefined8 *)(pFVar3 + uVar11 + 0x14) = local_120._20_8_;
        *(undefined8 *)(pFVar3 + uVar11 + 0x1c) = local_120._28_8_;
        *(undefined4 *)(pFVar3 + uVar11 + 0x28) = local_120._40_4_;
        *(undefined4 *)(pFVar3 + uVar11 + 0x30) = local_120._48_4_;
        pFVar3[uVar11 + 0x34] = local_120[0x34];
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar3 + uVar11 + 0x38),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        *(float *)(pFVar3 + uVar11 + 0x50) = local_d0;
        pFVar3[uVar11 + 0x54] = local_cc;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar3 + uVar11 + 0x58),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
        *(float *)(pFVar3 + uVar11 + 0x70) = local_b0;
        *(float *)(pFVar3 + uVar11 + 0x74) = local_ac;
        pFVar3[uVar11 + 0x78] = (FScriptContainerElement)local_a8.Value.Value;
        *(EHorizontalAlignment *)(pFVar3 + uVar11 + 0x7c) = local_a4;
        *(EVerticalAlignment *)(pFVar3 + uVar11 + 0x80) = local_a0;
        pFVar10 = pFVar3 + uVar11 + 0x84;
        if ((FScriptContainerElement *)local_9c != pFVar10) {
          if (local_84 == false) {
            if (pFVar10[0x18].field_0x0 != '\0') {
              pFVar10[0x18].field_0x0 = 0;
            }
          }
          else {
            *(float (*) [2])pFVar10 = local_9c;
            *(float (*) [2])(pFVar10 + 8) = afStack_94;
            *(TVector2<float>_u_0 *)(pFVar10 + 0x10) = local_8c;
            pFVar10[0x18].field_0x0 = 1;
          }
        }
        *(TVector2<float>_u_0 *)(pFVar3 + uVar11 + 0xa0) = local_80;
        pFVar10 = pFVar3 + uVar11 + 0xa8;
        if (pFVar10 != (FScriptContainerElement *)&local_78) {
          *(SWidget **)pFVar10 = local_78;
          local_78 = (SWidget *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar10 + 8),&local_70);
        }
        pFVar3[uVar11 + 0xb8] = local_68._0_1_;
        pFVar3[uVar11 + 0xb9] = local_68._1_1_;
        pFVar10 = pFVar3 + uVar11 + 0xbc;
        if ((FScriptContainerElement *)&local_64 != pFVar10) {
          if (local_60 == '\0') {
            if (pFVar10[4] != (FScriptContainerElement)0x0) {
              pFVar10[4] = (FScriptContainerElement)0x0;
            }
          }
          else {
            *(float *)pFVar10 = local_64;
            pFVar10[4] = (FScriptContainerElement)0x1;
          }
        }
        *(TSlateContainedAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          *)(pFVar3 + uVar11 + 0xc4) = local_5c;
        pFVar3[uVar11 + 200] = local_58._0_1_;
        pFVar3[uVar11 + 0xc9] = local_58._1_1_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.ReferenceController);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
        if ((void *)local_c8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_c8._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_c8);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        if ((void *)local_e8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_e8._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_e8);
        uVar14 = 0;
        if ((int)uVar13 < (this->ChildProxies).ArrayNum) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((this->ChildProxies).AllocatorInstance.Data[uVar11 + 0xb8] ==
            (FScriptContainerElement)0x0) {
          this->NumPreferredWrappingChildren = this->NumPreferredWrappingChildren + 1;
        }
        else {
          uVar14 = 0;
          if ((int)uVar13 < (this->ChildProxies).ArrayNum) {
            uVar14 = uVar16;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((this->ChildProxies).AllocatorInstance.Data[uVar11 + 0xb8] ==
              (FScriptContainerElement)0x1) {
            this->NumParentWrappingChildren = this->NumParentWrappingChildren + 1;
          }
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar11 + 0xd0;
        uVar15 = (ulonglong)(uVar13 + 1);
      } while ((longlong)uVar12 < lVar9);
    }
    bVar5 = true;
  }
  else {
    if (0 < iVar1) {
      local_128 = 0;
      uVar12 = uVar11;
      do {
        uVar14 = (uint)uVar12;
        if ((-1 < (int)uVar14) && ((int)uVar14 < (this->ChildProxies).ArrayNum)) {
          if (((int)uVar14 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          this_00 = (FSlotProxy *)((this->ChildProxies).AllocatorInstance.Data + uVar11);
          uVar13 = 0;
          if ((int)uVar14 < (param_1->Children).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar2 = *(FSlot **)((param_1->Children).AllocatorInstance.Data + local_128 * 8);
          bVar5 = ::FSlotProxy::UpdateFromSlot<SPrioritizedWrapBox::FSlot,1>(this_00,uVar14,pFVar2);
          if ((bVar5) ||
             (*(TSlateContainedAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                *)&this_00[1].SlotIndex != pFVar2->WrapMode)) {
            *(TSlateContainedAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              *)&this_00[1].SlotIndex = pFVar2->WrapMode;
LAB_142839422:
            *(EVerticalOverflowBehavior *)((longlong)&this_00[1].SlotIndex + 1) =
                 pFVar2->VerticalOverflowBehavior;
LAB_14283942c:
            bVar5 = true;
          }
          else {
            *(TSlateContainedAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              *)&this_00[1].SlotIndex = pFVar2->WrapMode;
            if (*(EVerticalOverflowBehavior *)((longlong)&this_00[1].SlotIndex + 1) !=
                pFVar2->VerticalOverflowBehavior) goto LAB_142839422;
            *(EVerticalOverflowBehavior *)((longlong)&this_00[1].SlotIndex + 1) =
                 pFVar2->VerticalOverflowBehavior;
            cVar7 = *(char *)&this_00[1].Padding.Top;
            if ((bool)cVar7 == (pFVar2->VerticalExpansionThreshold).bIsSet) {
              if (cVar7 == '\0') {
                bVar5 = false;
              }
              else {
                bVar5 = true;
                if ((pFVar2->VerticalExpansionThreshold).TypedValue == this_00[1].Padding.Left) {
                  bVar5 = false;
                }
              }
            }
            else {
              bVar5 = true;
            }
            if (bVar5) goto LAB_14283942c;
            bVar5 = false;
          }
          if ((FMargin *)&pFVar2->VerticalExpansionThreshold != &this_00[1].Padding) {
            if ((pFVar2->VerticalExpansionThreshold).bIsSet == false) {
              if (*(char *)&this_00[1].Padding.Top != '\0') {
                *(undefined1 *)&this_00[1].Padding.Top = 0;
              }
            }
            else {
              this_00[1].Padding.Left = (pFVar2->VerticalExpansionThreshold).TypedValue;
              *(undefined1 *)&this_00[1].Padding.Top = 1;
            }
          }
          if ((bVar5) ||
             ((TSlateContainedAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
               )this_00[1].Padding.Right != pFVar2->WrapPriority)) {
            this_00[1].Padding.Right = (float)pFVar2->WrapPriority;
LAB_14283949d:
            *(bool *)&this_00[1].Padding.Bottom = pFVar2->bForceNewLine;
LAB_1428394a7:
            cVar7 = pFVar2->bExcludeIfFirstOrLast;
            local_res8 = true;
          }
          else {
            this_00[1].Padding.Right = (float)pFVar2->WrapPriority;
            if ((bool)*(char *)&this_00[1].Padding.Bottom != pFVar2->bForceNewLine)
            goto LAB_14283949d;
            *(bool *)&this_00[1].Padding.Bottom = pFVar2->bForceNewLine;
            cVar7 = pFVar2->bExcludeIfFirstOrLast;
            if (*(char *)((longlong)&this_00[1].Padding.Bottom + 1) != cVar7) goto LAB_1428394a7;
          }
          *(char *)((longlong)&this_00[1].Padding.Bottom + 1) = cVar7;
          uVar13 = 0;
          if ((int)uVar14 < (this->ChildProxies).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          bVar5 = local_res8;
          if ((this->ChildProxies).AllocatorInstance.Data[uVar11 + 0xb8] ==
              (FScriptContainerElement)0x0) {
            this->NumPreferredWrappingChildren = this->NumPreferredWrappingChildren + 1;
          }
          else {
            uVar13 = 0;
            if ((int)uVar14 < (this->ChildProxies).ArrayNum) {
              uVar13 = ~uVar14 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if ((this->ChildProxies).AllocatorInstance.Data[uVar11 + 0xb8] ==
                (FScriptContainerElement)0x1) {
              this->NumParentWrappingChildren = this->NumParentWrappingChildren + 1;
            }
          }
        }
        local_128 = local_128 + 1;
        uVar12 = (ulonglong)(uVar14 + 1);
        uVar11 = uVar11 + 0xd0;
      } while (local_128 < lVar9);
    }
    TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,TSizedDefaultAllocator<32>_>::
    SetNum(&this->ChildProxies,iVar1,No);
  }
  return bVar5;
}

// FChildArranger @ 1428b88d0

FChildArranger * __thiscall
SRadialBox::FChildArranger::FChildArranger
          (FChildArranger *this,SRadialBox *param_1,
          TFunctionRef<void___cdecl(SRadialBox::FSlot_const_&,SRadialBox::FChildArranger::FArrangementData_const_&)>
          *param_2)

{
  TMap<int,SRadialBox::FChildArranger::FArrangementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,SRadialBox::FChildArranger::FArrangementData,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  this->RadialBox = param_1;
  this_00 = &this->OngoingArrangementDataMap;
  uVar9 = 0;
  this->OnSlotArranged = param_2;
  *(undefined8 *)&this_00->field_0x0 = 0;
  puVar1 = &(this->OngoingArrangementDataMap).field_0x48;
  *(undefined8 *)&(this->OngoingArrangementDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->OngoingArrangementDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->OngoingArrangementDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->OngoingArrangementDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OngoingArrangementDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OngoingArrangementDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->OngoingArrangementDataMap).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  uVar10 = (this->RadialBox->Slots).Children.ArrayNum;
  if (uVar10 == 0) {
    return this;
  }
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,uVar10);
  if (uVar10 < 4) {
    uVar10 = 1;
  }
  else {
    uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)puVar1 != 0) && ((int)uVar10 <= *(int *)puVar1)) {
    return this;
  }
  puVar2 = &(this->OngoingArrangementDataMap).field_0x38;
  *(uint *)puVar1 = uVar10;
  if (*(longlong *)&(this->OngoingArrangementDataMap).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->OngoingArrangementDataMap).field_0x40,0,0,4);
  }
  if (uVar10 == 0) goto LAB_1428b8a04;
  uVar11 = uVar10;
  if (uVar10 < 2) {
    if (*(longlong *)&(this->OngoingArrangementDataMap).field_0x40 != 0) {
      uVar11 = 0;
      goto LAB_1428b89bb;
    }
  }
  else {
LAB_1428b89bb:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->OngoingArrangementDataMap).field_0x40,0,uVar11,4);
  }
  if (0 < (int)uVar10) {
    uVar12 = (ulonglong)uVar10;
    uVar7 = uVar9;
    do {
      puVar3 = *(undefined1 **)&(this->OngoingArrangementDataMap).field_0x40;
      puVar6 = puVar2;
      if (puVar3 != (undefined1 *)0x0) {
        puVar6 = puVar3;
      }
      uVar5 = uVar7 & (longlong)(int)uVar10 - 1U;
      uVar7 = uVar7 + 1;
      *(undefined4 *)(puVar6 + uVar5 * 4) = 0xffffffff;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
LAB_1428b8a04:
  if (*(int *)puVar1 != 0) {
    uVar10 = *(uint *)&(this->OngoingArrangementDataMap).field_0x28;
    local_50.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->OngoingArrangementDataMap).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar10 != 0) {
      puVar13 = *(uint **)&(this->OngoingArrangementDataMap).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar11 = *puVar13;
      uVar7 = uVar9;
      while (uVar11 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        local_78 = iVar8 + 1;
        uVar9 = (ulonglong)local_78;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1428b8aab;
        uVar11 = puVar13[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar10 < (int)uStack_64) {
LAB_1428b8aab:
        uVar9 = (ulonglong)uVar10;
        uStack_64 = uVar10;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar10) {
      do {
        puVar13 = (uint *)((longlong)(int)uVar9 * 0x30 + *(longlong *)&this_00->field_0x0);
        uVar10 = *(int *)puVar1 - 1U & *puVar13;
        puVar13[0xb] = uVar10;
        puVar3 = *(undefined1 **)&(this->OngoingArrangementDataMap).field_0x40;
        puVar6 = puVar2;
        if (puVar3 != (undefined1 *)0x0) {
          puVar6 = puVar3;
        }
        uVar7 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar10;
        puVar13[10] = *(uint *)(puVar6 + uVar7 * 4);
        *(int *)(puVar6 + uVar7 * 4) = (int)uVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return this;
}

// Arrange @ 1428d6090

void __thiscall SRadialBox::FChildArranger::Arrange(FChildArranger *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  SRadialBox *pSVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  EVisibility EVar10;
  bool bVar11;
  FDeprecateSlateVector2D FVar12;
  uint uVar13;
  longlong lVar14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  double dVar15;
  double dVar16;
  float fVar17;
  uint local_res8 [2];
  TPairInitializer<int_const_&,SRadialBox::FChildArranger::FArrangementData_&&> local_res10;
  uint *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  dVar8 = __real_3fe0000000000000;
  iVar3 = (this->RadialBox->Slots).Children.ArrayNum;
  fVar17 = (float)this->RadialBox->PreferredWidth * __real_3f000000;
  local_res8[0] = 0;
  EVar10.Value.Value = EVisibility::Collapsed.Value.Value;
  if (0 < iVar3) {
    do {
      uVar9 = local_res8[0];
      pSVar4 = this->RadialBox;
      uVar13 = 0;
      if ((int)local_res8[0] < (pSVar4->Slots).Children.ArrayNum) {
        uVar13 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         EVar10 = EVisibility::Collapsed, bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)
               ((pSVar4->Slots).Children.AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(*(longlong *)(lVar5 + 0x10) + 0x39) !=
          EVar10.Value.Value) {
        local_d8 = local_res8;
        local_d0 = &local_c8;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        TSet<TTuple<int,SRadialBox::FChildArranger::FArrangementData>,TDefaultMapHashableKeyFuncs<int,SRadialBox::FChildArranger::FArrangementData,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,SRadialBox::FChildArranger::FArrangementData_&&>_>
                  ((TSet<TTuple<int,SRadialBox::FChildArranger::FArrangementData>,TDefaultMapHashableKeyFuncs<int,SRadialBox::FChildArranger::FArrangementData,0>,FDefaultSetAllocator>
                    *)&this->OngoingArrangementDataMap,&local_res10,(bool *)&local_d8);
        lVar14 = *(longlong *)&this->OngoingArrangementDataMap +
                 (longlong)(int)local_res10.Key * 0x30;
        FVar12 = SWidget::GetDesiredSize(*(SWidget **)(lVar5 + 0x10));
        fVar1 = *(float *)FVar12;
        fVar2 = *(float *)((longlong)FVar12 + 4);
        __libm_sse2_sincosf_();
        *(double *)(lVar14 + 0x18) = (double)fVar1;
        *(double *)(lVar14 + 0x20) = (double)fVar2;
        dVar16 = (double)fVar1 * dVar8;
        dVar7 = (double)fVar2 * dVar8;
        dVar15 = dVar16;
        if (dVar7 <= dVar16) {
          dVar15 = dVar7;
        }
        *(double *)(lVar14 + 8) =
             (double)(extraout_XMM0_Db * (fVar17 - (float)dVar15) + fVar17) - dVar16;
        *(double *)(lVar14 + 0x10) =
             (double)(extraout_XMM0_Da * (fVar17 - (float)dVar15) + fVar17) - dVar7;
        (**(code **)this->OnSlotArranged)
                  (*(undefined8 *)&this->OnSlotArranged->field_0x8,lVar5,lVar14 + 8);
        EVar10 = EVisibility::Collapsed;
      }
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < iVar3);
  }
  return;
}

// Arrange @ 1428d63d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SRadialBox::FChildArranger::Arrange
          (SRadialBox *param_1,
          TFunctionRef<void___cdecl(SRadialBox::FSlot_const_&,SRadialBox::FChildArranger::FArrangementData_const_&)>
          *param_2)

{
  FChildArranger *this;
  undefined1 auStack_98 [32];
  undefined1 local_78 [80];
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = FChildArranger((FChildArranger *)local_78,param_1,param_2);
  Arrange(this);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<int,SRadialBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,SRadialBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,SRadialBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_78 + 0x10));
  return;
}

// FChildArranger @ 1429b7530

FChildArranger * __thiscall
SWrapBox::FChildArranger::FChildArranger
          (FChildArranger *this,SWrapBox *param_1,
          TFunctionRef<void___cdecl(SWrapBox::FSlot_const_&,SWrapBox::FChildArranger::FArrangementData_const_&)>
          *param_2)

{
  TMap<int,SWrapBox::FChildArranger::FArrangementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,SWrapBox::FChildArranger::FArrangementData,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  TVector2<double> TVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  this->WrapBox = param_1;
  this_00 = &this->OngoingArrangementDataMap;
  this->OnSlotArranged = param_2;
  TVar5 = UE::Math::TVector2<double>::ZeroVector;
  puVar1 = &(this->OngoingArrangementDataMap).field_0x48;
  uVar10 = 0;
  this->IndexOfFirstChildInCurrentLine = -1;
  this->MaximumSizeInCurrentLine = 0.0;
  this->WidthOfCurrentLine = 0.0;
  (this->Offset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar5.field0_0x0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->OngoingArrangementDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->OngoingArrangementDataMap).field_0x20 = 0;
  this->TotalLinePadding = 0.0;
  *(undefined4 *)&(this->OngoingArrangementDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->OngoingArrangementDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OngoingArrangementDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OngoingArrangementDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->OngoingArrangementDataMap).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  uVar11 = (this->WrapBox->Slots).Children.ArrayNum;
  if (uVar11 == 0) {
    return this;
  }
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,uVar11);
  if (uVar11 < 4) {
    uVar11 = 1;
  }
  else {
    uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)puVar1 != 0) && ((int)uVar11 <= *(int *)puVar1)) {
    return this;
  }
  puVar2 = &(this->OngoingArrangementDataMap).field_0x38;
  *(uint *)puVar1 = uVar11;
  if (*(longlong *)&(this->OngoingArrangementDataMap).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->OngoingArrangementDataMap).field_0x40,0,0,4);
  }
  if (uVar11 == 0) goto LAB_1429b7684;
  uVar12 = uVar11;
  if (uVar11 < 2) {
    if (*(longlong *)&(this->OngoingArrangementDataMap).field_0x40 != 0) {
      uVar12 = 0;
      goto LAB_1429b7634;
    }
  }
  else {
LAB_1429b7634:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->OngoingArrangementDataMap).field_0x40,0,uVar12,4);
  }
  if (0 < (int)uVar11) {
    uVar13 = (ulonglong)uVar11;
    uVar8 = uVar10;
    do {
      puVar3 = *(undefined1 **)&(this->OngoingArrangementDataMap).field_0x40;
      puVar7 = puVar2;
      if (puVar3 != (undefined1 *)0x0) {
        puVar7 = puVar3;
      }
      uVar6 = uVar8 & (longlong)(int)uVar11 - 1U;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(puVar7 + uVar6 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_1429b7684:
  if (*(int *)puVar1 != 0) {
    uVar11 = *(uint *)&(this->OngoingArrangementDataMap).field_0x28;
    local_50.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->OngoingArrangementDataMap).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar11 != 0) {
      puVar14 = *(uint **)&(this->OngoingArrangementDataMap).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_50.Array;
      }
      uVar12 = *puVar14;
      uVar8 = uVar10;
      while (uVar12 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1429b772b;
        uVar12 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar11 < (int)uStack_64) {
LAB_1429b772b:
        uVar10 = (ulonglong)uVar11;
        uStack_64 = uVar11;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar11) {
      do {
        lVar4 = *(longlong *)&this_00->field_0x0;
        lVar15 = (longlong)(int)uVar10 * 0x40;
        uVar11 = *(int *)puVar1 - 1U & *(uint *)(lVar15 + lVar4);
        *(uint *)(lVar15 + 0x3c + lVar4) = uVar11;
        puVar3 = *(undefined1 **)&(this->OngoingArrangementDataMap).field_0x40;
        puVar7 = puVar2;
        if (puVar3 != (undefined1 *)0x0) {
          puVar7 = puVar3;
        }
        uVar8 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar15 + 0x38 + lVar4) = *(undefined4 *)(puVar7 + uVar8 * 4);
        *(int *)(puVar7 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return this;
}

// Arrange @ 1429c8130

void __thiscall SWrapBox::FChildArranger::Arrange(FChildArranger *this)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  EVisibility EVar6;
  bool bVar7;
  FDeprecateSlateVector2D FVar8;
  uint uVar9;
  uint uVar10;
  SWrapBox *pSVar11;
  longlong lVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  uint local_res8 [2];
  undefined1 local_res10 [12];
  float fStackX_1c;
  undefined8 local_res20;
  uint *local_90;
  undefined8 *local_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pSVar11 = this->WrapBox;
  local_res8[0] = 0;
  EVar6.Value.Value = EVisibility::Collapsed.Value.Value;
  if (0 < (pSVar11->Slots).Children.ArrayNum) {
    do {
      uVar10 = local_res8[0];
      uVar9 = 0;
      if ((int)local_res8[0] < (pSVar11->Slots).Children.ArrayNum) {
        uVar9 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         EVar6 = EVisibility::Collapsed, bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)
               ((pSVar11->Slots).Children.AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(*(longlong *)(lVar3 + 0x10) + 0x39) !=
          EVar6.Value.Value) {
        local_90 = local_res8;
        local_88 = &local_70;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        uStack_48 = 0;
        TSet<TTuple<int,SWrapBox::FChildArranger::FArrangementData>,TDefaultMapHashableKeyFuncs<int,SWrapBox::FChildArranger::FArrangementData,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,SWrapBox::FChildArranger::FArrangementData_&&>_>
                  ((TSet<TTuple<int,SWrapBox::FChildArranger::FArrangementData>,TDefaultMapHashableKeyFuncs<int,SWrapBox::FChildArranger::FArrangementData,0>,FDefaultSetAllocator>
                    *)&this->OngoingArrangementDataMap,
                   (TPairInitializer<int_const_&,SWrapBox::FChildArranger::FArrangementData_&&> *)
                   local_res10,(bool *)&local_90);
        lVar4 = *(longlong *)&this->OngoingArrangementDataMap;
        lVar12 = (longlong)(int)local_res10._0_4_ * 0x40;
        uVar10 = this->IndexOfFirstChildInCurrentLine;
        if (this->IndexOfFirstChildInCurrentLine == 0xffffffff) {
          this->IndexOfFirstChildInCurrentLine = local_res8[0];
          uVar10 = local_res8[0];
        }
        if (local_res8[0] != uVar10) {
          pSVar11 = this->WrapBox;
          if (pSVar11->Orientation == Orient_Horizontal) {
            (this->Offset).field0_0x0._s_0.X =
                 (pSVar11->InnerSlotPadding).field0_0x0._s_0.X + (this->Offset).field0_0x0._s_0.X;
          }
          else {
            (this->Offset).field0_0x0._s_0.Y =
                 (pSVar11->InnerSlotPadding).field0_0x0._s_0.Y + (this->Offset).field0_0x0._s_0.Y;
          }
        }
        FVar8 = SWidget::GetDesiredSize(*(SWidget **)(lVar3 + 0x10));
        local_80 = *(float *)(lVar3 + 0x28);
        fStack_7c = *(float *)(lVar3 + 0x2c);
        fStack_78 = *(float *)(lVar3 + 0x30);
        fStack_74 = *(float *)(lVar3 + 0x34);
        local_res10._8_4_ = fStack_78 + local_80;
        fStackX_1c = fStack_74 + fStack_7c;
        local_res20 = CONCAT44(fStackX_1c,local_res10._8_4_);
        fVar13 = *(float *)((longlong)FVar8 + 4);
        fVar1 = *(float *)FVar8;
        dVar14 = (this->Offset).field0_0x0._s_0.X;
        *(double *)(lVar12 + 8 + lVar4) = dVar14;
        dVar2 = (this->Offset).field0_0x0._s_0.Y;
        *(double *)(lVar12 + 0x10 + lVar4) = dVar2;
        dVar15 = (double)(fStackX_1c + fVar13);
        *(double *)(lVar12 + 0x18 + lVar4) = (double)((float)local_res10._8_4_ + fVar1);
        *(double *)(lVar12 + 0x20 + lVar4) = dVar15;
        pSVar11 = this->WrapBox;
        if (pSVar11->Orientation == Orient_Vertical) {
          if (*(char *)(lVar3 + 0x49) == '\0') {
            if ((*(char *)(lVar3 + 0x44) == '\0') ||
               (*(float *)(lVar3 + 0x40) < (float)pSVar11->PreferredSize ||
                *(float *)(lVar3 + 0x40) == (float)pSVar11->PreferredSize)) {
              fVar13 = (float)(dVar2 + dVar15);
              if ((float)pSVar11->PreferredSize <= fVar13 && fVar13 != (float)pSVar11->PreferredSize
                 ) {
                uVar10 = this->IndexOfFirstChildInCurrentLine;
                goto joined_r0x0001429c83bf;
              }
            }
            else {
              if (local_res8[0] != this->IndexOfFirstChildInCurrentLine) {
                FinalizeLine(this,local_res8[0] - 1);
                this->IndexOfFirstChildInCurrentLine = local_res8[0];
                *(double *)(lVar12 + 8 + lVar4) = (this->Offset).field0_0x0._s_0.X;
                *(double *)(lVar12 + 0x10 + lVar4) = (this->Offset).field0_0x0._s_0.Y;
              }
              *(double *)(lVar12 + 0x20 + lVar4) =
                   (double)(float)this->WrapBox->PreferredSize - (this->Offset).field0_0x0._s_0.Y;
            }
          }
          else {
            uVar10 = this->IndexOfFirstChildInCurrentLine;
joined_r0x0001429c83bf:
            if (local_res8[0] != uVar10) {
              FinalizeLine(this,local_res8[0] - 1);
              this->IndexOfFirstChildInCurrentLine = local_res8[0];
              *(double *)(lVar12 + 8 + lVar4) = (this->Offset).field0_0x0._s_0.X;
              *(double *)(lVar12 + 0x10 + lVar4) = (this->Offset).field0_0x0._s_0.Y;
            }
          }
          dVar14 = *(double *)(lVar12 + 0x18 + lVar4);
          if (dVar14 <= (double)this->MaximumSizeInCurrentLine) {
            dVar14 = (double)this->MaximumSizeInCurrentLine;
          }
          this->MaximumSizeInCurrentLine = (float)dVar14;
          (this->Offset).field0_0x0._s_0.Y =
               *(double *)(lVar12 + 0x20 + lVar4) + *(double *)(lVar12 + 0x10 + lVar4);
          EVar6 = EVisibility::Collapsed;
        }
        else {
          if (*(char *)(lVar3 + 0x49) == '\0') {
            if ((*(char *)(lVar3 + 0x44) == '\0') ||
               (*(float *)(lVar3 + 0x40) < (float)pSVar11->PreferredSize ||
                *(float *)(lVar3 + 0x40) == (float)pSVar11->PreferredSize)) {
              fVar13 = (float)(dVar14 + (double)((float)local_res10._8_4_ + fVar1));
              if ((float)pSVar11->PreferredSize <= fVar13 && fVar13 != (float)pSVar11->PreferredSize
                 ) goto LAB_1429c8489;
            }
            else {
              if (local_res8[0] != this->IndexOfFirstChildInCurrentLine) {
                FinalizeLine(this,local_res8[0] - 1);
                this->IndexOfFirstChildInCurrentLine = local_res8[0];
                *(double *)(lVar12 + 8 + lVar4) = (this->Offset).field0_0x0._s_0.X;
                *(double *)(lVar12 + 0x10 + lVar4) = (this->Offset).field0_0x0._s_0.Y;
              }
              *(double *)(lVar12 + 0x18 + lVar4) =
                   (double)(float)this->WrapBox->PreferredSize - (this->Offset).field0_0x0._s_0.X;
            }
          }
          else {
LAB_1429c8489:
            if (local_res8[0] != this->IndexOfFirstChildInCurrentLine) {
              FinalizeLine(this,local_res8[0] - 1);
              this->IndexOfFirstChildInCurrentLine = local_res8[0];
              *(double *)(lVar12 + 8 + lVar4) = (this->Offset).field0_0x0._s_0.X;
              *(double *)(lVar12 + 0x10 + lVar4) = (this->Offset).field0_0x0._s_0.Y;
            }
          }
          dVar14 = *(double *)(lVar12 + 0x20 + lVar4);
          if (dVar14 <= (double)this->MaximumSizeInCurrentLine) {
            dVar14 = (double)this->MaximumSizeInCurrentLine;
          }
          this->MaximumSizeInCurrentLine = (float)dVar14;
          fVar13 = (float)((double)this->WidthOfCurrentLine + *(double *)(lVar12 + 0x18 + lVar4));
          this->WidthOfCurrentLine = fVar13;
          if (local_res8[0] != this->IndexOfFirstChildInCurrentLine) {
            this->WidthOfCurrentLine =
                 (float)((double)fVar13 + (this->WrapBox->InnerSlotPadding).field0_0x0._s_0.X);
            this->TotalLinePadding =
                 (float)((double)this->TotalLinePadding +
                        (this->WrapBox->InnerSlotPadding).field0_0x0._s_0.X);
          }
          (this->Offset).field0_0x0._s_0.X =
               *(double *)(lVar12 + 0x18 + lVar4) + *(double *)(lVar12 + 8 + lVar4);
          EVar6 = EVisibility::Collapsed;
        }
      }
      pSVar11 = this->WrapBox;
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < (pSVar11->Slots).Children.ArrayNum);
  }
  if (this->IndexOfFirstChildInCurrentLine != -1) {
    FinalizeLine(this,local_res8[0] - 1);
  }
  return;
}

// Arrange @ 1429c85a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SWrapBox::FChildArranger::Arrange
          (SWrapBox *param_1,
          TFunctionRef<void___cdecl(SWrapBox::FSlot_const_&,SWrapBox::FChildArranger::FArrangementData_const_&)>
          *param_2)

{
  FChildArranger *this;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [112];
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FChildArranger((FChildArranger *)local_98,param_1,param_2);
  Arrange(this);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_98 + 0x30));
  return;
}

// FinalizeLine @ 1429e81a0

void __thiscall SWrapBox::FChildArranger::FinalizeLine(FChildArranger *this,int param_1)

{
  float fVar1;
  SWrapBox *pSVar2;
  code *pcVar3;
  EVisibility EVar4;
  bool bVar5;
  FSlot *pFVar6;
  FArrangementData *pFVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  double dVar14;
  
  iVar13 = 0;
  uVar12 = (ulonglong)param_1;
  EVar4.Value.Value = EVisibility::Collapsed.Value.Value;
  if (this->IndexOfFirstChildInCurrentLine <= param_1) {
    lVar11 = uVar12 * 8;
    do {
      pSVar2 = this->WrapBox;
      param_1 = (int)uVar12;
      uVar8 = 0;
      if (param_1 < (pSVar2->Slots).Children.ArrayNum) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         EVar4 = EVisibility::Collapsed, bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((TEnumAsByte<EVisibility::Private>)
          *(uchar *)(*(longlong *)
                      (*(longlong *)((pSVar2->Slots).Children.AllocatorInstance.Data + lVar11) +
                      0x10) + 0x39) != EVar4.Value.Value) break;
      param_1 = param_1 - 1;
      uVar12 = (ulonglong)(uint)param_1;
      lVar11 = lVar11 + -8;
    } while (this->IndexOfFirstChildInCurrentLine <= param_1);
  }
  if (((-1 < param_1) && (param_1 < (this->WrapBox->Slots).Children.ArrayNum)) &&
     (pFVar6 = TPanelChildren<SWrapBox::FSlot>::operator[](&this->WrapBox->Slots,param_1),
     EVar4 = EVisibility::Collapsed, pFVar6->bSlotFillEmptySpace != false)) {
    this->WidthOfCurrentLine = (float)this->WrapBox->PreferredSize;
    EVar4 = EVisibility::Collapsed;
  }
  uVar12 = (ulonglong)this->IndexOfFirstChildInCurrentLine;
  uVar10 = uVar12;
  while( true ) {
    if ((longlong)param_1 < (longlong)uVar12) {
      pSVar2 = this->WrapBox;
      fVar1 = this->MaximumSizeInCurrentLine;
      if (pSVar2->Orientation == Orient_Vertical) {
        (this->Offset).field0_0x0._s_0.Y = 0.0;
        (this->Offset).field0_0x0._s_0.X =
             (double)fVar1 + (pSVar2->InnerSlotPadding).field0_0x0._s_0.X +
             (this->Offset).field0_0x0._s_0.X;
      }
      else {
        (this->Offset).field0_0x0._s_0.X = 0.0;
        (this->Offset).field0_0x0._s_0.Y =
             (double)fVar1 + (pSVar2->InnerSlotPadding).field0_0x0._s_0.Y +
             (this->Offset).field0_0x0._s_0.Y;
      }
      this->WidthOfCurrentLine = 0.0;
      this->TotalLinePadding = 0.0;
      this->MaximumSizeInCurrentLine = 0.0;
      this->IndexOfFirstChildInCurrentLine = -1;
      return;
    }
    pSVar2 = this->WrapBox;
    uVar9 = (uint)uVar10;
    uVar8 = 0;
    if ((int)uVar9 < (pSVar2->Slots).Children.ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       EVar4.Value.Value = EVisibility::Collapsed.Value.Value, bVar5)) break;
    lVar11 = *(longlong *)((pSVar2->Slots).Children.AllocatorInstance.Data + uVar12 * 8);
    if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(*(longlong *)(lVar11 + 0x10) + 0x39) !=
        EVar4.Value.Value) {
      pFVar7 = TMapBase<int,SWrapBox::FChildArranger::FArrangementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,SWrapBox::FChildArranger::FArrangementData,0>_>
               ::FindChecked((TMapBase<int,SWrapBox::FChildArranger::FArrangementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,SWrapBox::FChildArranger::FArrangementData,0>_>
                              *)&this->OngoingArrangementDataMap,uVar9);
      pFVar7->ChildIndexRelativeToLine = iVar13;
      iVar13 = iVar13 + 1;
      pFVar7->WidthOfCurrentLine = this->WidthOfCurrentLine;
      pFVar7->TotalLinePadding = this->TotalLinePadding;
      if ((uVar12 == (longlong)param_1) && (*(char *)(lVar11 + 0x48) != '\0')) {
        dVar14 = (double)(float)this->WrapBox->PreferredSize;
        if (this->WrapBox->Orientation == Orient_Vertical) {
          (pFVar7->SlotSize).field0_0x0._s_0.Y = dVar14 - (pFVar7->SlotOffset).field0_0x0._s_0.Y;
        }
        else {
          (pFVar7->SlotSize).field0_0x0._s_0.X = dVar14 - (pFVar7->SlotOffset).field0_0x0._s_0.X;
        }
      }
      if (this->WrapBox->Orientation == Orient_Vertical) {
        (pFVar7->SlotSize).field0_0x0._s_0.X = (double)this->MaximumSizeInCurrentLine;
      }
      else {
        (pFVar7->SlotSize).field0_0x0._s_0.Y = (double)this->MaximumSizeInCurrentLine;
      }
      if (GSlateFlowDirection == RightToLeft) {
        (pFVar7->SlotOffset).field0_0x0._s_0.X =
             ((double)(float)this->WrapBox->PreferredSize - (pFVar7->SlotOffset).field0_0x0._s_0.X)
             - (pFVar7->SlotSize).field0_0x0._s_0.X;
      }
      (**(code **)this->OnSlotArranged)(*(undefined8 *)&this->OnSlotArranged->field_0x8,lVar11);
      EVar4 = EVisibility::Collapsed;
    }
    uVar10 = (ulonglong)(uVar9 + 1);
    uVar12 = uVar12 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

