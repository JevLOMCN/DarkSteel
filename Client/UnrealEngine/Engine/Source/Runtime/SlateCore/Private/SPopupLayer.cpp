// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// ~SPopupLayer @ 1425c1d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SPopupLayer::~SPopupLayer(SPopupLayer *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar3 = (this->OwnerWindow).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  DestructItems<TUniquePtr<FPopupLayerSlot,TDefaultDelete<FPopupLayerSlot>_>,int>
            ((TUniquePtr<FPopupLayerSlot,TDefaultDelete<FPopupLayerSlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar4 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  this->_padding_ = (longlong)&___7SPanel__6B_;
  SWidget::~SWidget((SWidget *)this);
  return;
}

// ComputeDesiredSize @ 1425d2200

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SPopupLayer::ComputeDesiredSize
          (SPopupLayer *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 100.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 100.0;
  return __return_storage_ptr__;
}

// GetChildren @ 1425dfce0

/* WARNING: Enum "Type": Some values do not have unique names */

FChildren * __thiscall SPopupLayer::GetChildren(SPopupLayer *this)

{
  return (FChildren *)&this->Children;
}

// OnArrangeChildren @ 1425ec100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SPopupLayer::OnArrangeChildren(SPopupLayer *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDeprecateSlateVector2D FVar2;
  FGenericWindow *pFVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  atomic<int> aVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  char cVar17;
  undefined1 uVar18;
  atomic<int> aVar19;
  uint uVar20;
  FSlateApplicationBase *pFVar21;
  TVector2<float>_u_0 TVar22;
  float *pfVar23;
  FSlateRect *pFVar24;
  TVector2<double> *pTVar25;
  longlong *plVar26;
  int iVar27;
  SWindow *pSVar28;
  FDeprecateVector2DParameter FVar29;
  longlong lVar30;
  uint uVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  float fVar42;
  uint uVar43;
  undefined1 auStackY_3c8 [32];
  float local_388;
  float fStack_384;
  float local_380;
  FDeprecateVector2DParameter local_378;
  undefined8 local_370;
  float local_368;
  float local_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float local_350;
  float fStack_34c;
  float local_348;
  undefined4 uStack_344;
  FGeometry *local_340;
  float local_338;
  float fStack_334;
  FArrangedChildren *local_330;
  longlong local_328;
  float local_320 [4];
  uint uStack_310;
  uint local_30c;
  double local_308;
  double dStack_300;
  TTransform2<float> local_2f8;
  char local_2e0;
  FSlateLayoutTransform local_2d8;
  FSlateLayoutTransform local_2c8;
  TVector2<float>_u_0_s_0 local_2b4;
  FDeprecateVector2DParameter local_2ac;
  undefined8 local_2a0;
  float local_298 [2];
  float afStack_290 [2];
  TVector2<float>_u_0 local_288;
  FSlateRect local_278;
  FReadAccessScope local_268;
  FReadAccessScope local_250;
  FReadAccessScope local_238;
  undefined8 local_220;
  undefined8 uStack_218;
  FReadAccessScope local_210;
  FReadAccessScope local_1f8;
  FReadAccessScope local_1e0;
  FSlateRect local_1c8;
  FArrangedWidget local_1b8;
  FDeprecateVector2DParameter local_168;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  TTransform2<float> TStack_14c;
  undefined4 uStack_134;
  TTransform2<float> local_130;
  FGeometry local_118;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  bVar32 = false;
  if ((this->Children).Children.ArrayNum == 0) {
    return;
  }
  local_340 = param_1;
  local_330 = param_2;
  if ((((this->OwnerWindow).Object == (SWindow *)0x0) ||
      (pTVar1 = (this->OwnerWindow).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5910581319552729210>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                        ,0x7a,"OwnerWindow.IsValid()");
    if (bVar16) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pfVar23 = local_320;
    local_320[0] = 1.0;
    local_320[1] = 0.0;
    local_320[2] = 0.0;
    FVar29 = local_378;
    fVar42 = __real_3f800000;
    goto LAB_1425ec2c1;
  }
  FVar29 = (FDeprecateVector2DParameter)(this->OwnerWindow).WeakReferenceCount.ReferenceController;
  pSVar28 = (SWindow *)0x0;
  if (FVar29 == (FDeprecateVector2DParameter)0x0) {
LAB_1425ec1c0:
    bVar32 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar32) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    aVar10 = *(atomic<int> *)((longlong)FVar29 + 8);
    do {
      if (aVar10 == (atomic<int>)0x0) {
        FVar29 = (FDeprecateVector2DParameter)0x0;
        goto LAB_1425ec1c0;
      }
      LOCK();
      aVar19 = *(atomic<int> *)((longlong)FVar29 + 8);
      bVar32 = aVar10 == aVar19;
      if (bVar32) {
        *(atomic<int> *)((longlong)FVar29 + 8) = (atomic<int>)((int)aVar10 + 1);
        aVar19 = aVar10;
      }
      UNLOCK();
      aVar10 = aVar19;
    } while (!bVar32);
    pSVar28 = (this->OwnerWindow).Object;
    if (pSVar28 == (SWindow *)0x0) goto LAB_1425ec1c0;
  }
  FVar2 = pSVar28->ScreenPosition;
  pFVar21 = FSlateApplicationBase::Get();
  fVar42 = __real_3f800000;
  pFVar3 = (pSVar28->NativeWindow).Object;
  fVar33 = __real_3f800000;
  if (pFVar3 != (FGenericWindow *)0x0) {
    fVar33 = (float)(**(code **)(pFVar3->_padding_ + 0xf8))();
  }
  local_2a0 = FVar2;
  fVar34 = (float)(**(code **)(*(longlong *)pFVar21 + 0x58))(pFVar21);
  pfVar23 = local_320 + 3;
  bVar32 = true;
  local_320[3] = fVar42 / (fVar34 * fVar33);
  uStack_310 = (uint)(local_320[3] * (float)local_2a0) ^ __xmm_80000000800000008000000080000000;
  local_30c = (uint)(local_320[3] * local_2a0._4_4_) ^ __xmm_80000000800000008000000080000000;
  param_2 = local_330;
LAB_1425ec2c1:
  local_370 = *(undefined8 *)pfVar23;
  local_368 = pfVar23[2];
  if (bVar32) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar29);
  }
  uVar14 = _UNK_15076c668;
  uVar12 = ___xmm_bf800000bf800000bf800000bf800000;
  fVar33 = __real_3f000000;
  bVar32 = false;
  iVar27 = (this->Children).Children.ArrayNum;
  uVar31 = 0;
  if (0 < iVar27) {
    uVar43 = (uint)__xmm_80000000000000008000000000000000;
    uVar11 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    local_328 = 0;
    FVar29 = local_378;
    do {
      lVar30 = local_328;
      uVar20 = 0;
      if ((int)uVar31 < iVar27) {
        uVar20 = ~uVar31 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar30);
      if (((param_2->VisibilityFilter).Value.Value & *(byte *)(*(longlong *)(lVar4 + 0x10) + 0x39))
          != 0) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0x98),
                   &local_268);
        if (((*(int *)(lVar4 + 0xa8) == 0) || (*(longlong **)(lVar4 + 0xa0) == (longlong *)0x0)) ||
           (cVar17 = (**(code **)(**(longlong **)(lVar4 + 0xa0) + 0x38))(), cVar17 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_268);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_268);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0x98),
                     &local_210);
          if (*(int *)(lVar4 + 0xa8) == 0) {
            plVar26 = (longlong *)0x0;
          }
          else {
            plVar26 = *(longlong **)(lVar4 + 0xa0);
          }
          uVar35 = (**(code **)(*plVar26 + 0x60))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_210);
          *(undefined4 *)(lVar4 + 0x90) = uVar35;
        }
        fVar34 = *(float *)(lVar4 + 0x90);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0x38),
                   &local_250);
        if (((*(int *)(lVar4 + 0x48) == 0) || (*(longlong **)(lVar4 + 0x40) == (longlong *)0x0)) ||
           (cVar17 = (**(code **)(**(longlong **)(lVar4 + 0x40) + 0x38))(), cVar17 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_250);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_250);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0x38),
                     &local_1f8);
          if (*(int *)(lVar4 + 0x48) == 0) {
            plVar26 = (longlong *)0x0;
          }
          else {
            plVar26 = *(longlong **)(lVar4 + 0x40);
          }
          (**(code **)(*plVar26 + 0x60))(plVar26,&local_220);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_1f8);
          *(undefined8 *)(lVar4 + 0x20) = local_220;
          *(undefined8 *)(lVar4 + 0x28) = uStack_218;
        }
        local_308 = *(double *)(lVar4 + 0x20);
        dStack_300 = *(double *)(lVar4 + 0x28);
        TVar22 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        if ((*(byte *)(*(longlong *)(lVar4 + 0x10) + 0x31) & 0x20) != 0) {
          TVar22._s_0 = *(TVector2<float>_u_0 *)
                         &((TVector2<float>_u_0 *)(*(longlong *)(lVar4 + 0x10) + 0x170))->_s_0;
        }
        local_388 = TVar22._s_0.X;
        fStack_384 = TVar22._s_0.Y;
        dVar8 = (double)local_388 * (double)fVar34;
        dVar7 = (double)fStack_384 * (double)fVar34;
        if (*(char *)(lVar4 + 0x74) != '\0') {
          pfVar23 = TAttribute<float>::Get((TAttribute<float> *)(lVar4 + 0x70));
          dVar7 = (double)*pfVar23;
        }
        if (*(char *)(lVar4 + 0x54) != '\0') {
          pfVar23 = TAttribute<float>::Get((TAttribute<float> *)(lVar4 + 0x50));
          dVar8 = (double)*pfVar23;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0xb8),
                   &local_238);
        if (((*(int *)(lVar4 + 200) == 0) || (*(longlong **)(lVar4 + 0xc0) == (longlong *)0x0)) ||
           (cVar17 = (**(code **)(**(longlong **)(lVar4 + 0xc0) + 0x38))(), cVar17 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_238);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_238);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0xb8),
                     &local_1e0);
          if (*(int *)(lVar4 + 200) == 0) {
            plVar26 = (longlong *)0x0;
          }
          else {
            plVar26 = *(longlong **)(lVar4 + 0xc0);
          }
          uVar18 = (**(code **)(*plVar26 + 0x60))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_1e0);
          *(undefined1 *)(lVar4 + 0xb0) = uVar18;
        }
        dVar40 = local_308;
        dVar38 = dStack_300;
        if (*(char *)(lVar4 + 0xb0) != '\0') {
          if ((((this->OwnerWindow).Object == (SWindow *)0x0) ||
              (pTVar1 = (this->OwnerWindow).WeakReferenceCount.ReferenceController,
              pTVar1 == (TReferenceControllerBase<1> *)0x0)) ||
             ((int)pTVar1->SharedReferenceCount < 1)) {
            bVar16 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5910581319552729236>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                                ,0x94,"OwnerWindow.IsValid()");
            uVar15 = _UNK_15076c668;
            uVar13 = ___xmm_bf800000bf800000bf800000bf800000;
            if (bVar16) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            ___xmm_bf800000bf800000bf800000bf800000 = (float)uVar12;
            _UNK_15076c664 = SUB84(uVar12,4);
            local_278.Left = ___xmm_bf800000bf800000bf800000bf800000;
            local_278.Top = _UNK_15076c664;
            _UNK_15076c668 = (float)uVar14;
            _UNK_15076c66c = SUB84(uVar14,4);
            local_278.Right = _UNK_15076c668;
            local_278.Bottom = _UNK_15076c66c;
            pFVar24 = &local_278;
            ___xmm_bf800000bf800000bf800000bf800000 = uVar13;
            _UNK_15076c668 = uVar15;
          }
          else {
            FVar29 = (FDeprecateVector2DParameter)
                     (this->OwnerWindow).WeakReferenceCount.ReferenceController;
            bVar32 = true;
            pSVar28 = (SWindow *)0x0;
            if (FVar29 == (FDeprecateVector2DParameter)0x0) {
LAB_1425ec644:
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L"");
              if (bVar16) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              aVar10 = *(atomic<int> *)((longlong)FVar29 + 8);
              do {
                if (aVar10 == (atomic<int>)0x0) {
                  FVar29 = (FDeprecateVector2DParameter)0x0;
                  goto LAB_1425ec644;
                }
                LOCK();
                aVar19 = *(atomic<int> *)((longlong)FVar29 + 8);
                bVar16 = aVar10 == aVar19;
                if (bVar16) {
                  *(atomic<int> *)((longlong)FVar29 + 8) = (atomic<int>)((int)aVar10 + 1);
                  aVar19 = aVar10;
                }
                UNLOCK();
                aVar10 = aVar19;
              } while (!bVar16);
              pSVar28 = (this->OwnerWindow).Object;
              if (pSVar28 == (SWindow *)0x0) goto LAB_1425ec644;
            }
            pFVar24 = SWindow::GetClientRectInScreen(pSVar28,&local_1c8);
          }
          fVar36 = pFVar24->Left;
          fVar37 = pFVar24->Top;
          fVar41 = pFVar24->Right;
          fVar9 = pFVar24->Bottom;
          if (bVar32) {
            bVar32 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)FVar29);
          }
          pTVar25 = TAttribute<UE::Math::TVector2<double>_>::Get
                              ((TAttribute<UE::Math::TVector2<double>_> *)(lVar4 + 0xd0));
          dVar38 = (local_308 + dVar8) - (double)(fVar41 - (float)(pTVar25->field0_0x0)._s_0.X);
          if (dVar38 <= 0.0) {
            dVar38 = 0.0;
          }
          dVar40 = local_308 - dVar38;
          if (local_308 - dVar38 <= (double)fVar36) {
            dVar40 = (double)fVar36;
          }
          dVar39 = (dStack_300 + dVar7) - (double)(fVar9 - (float)(pTVar25->field0_0x0)._s_0.Y);
          if (dVar39 <= 0.0) {
            dVar39 = 0.0;
          }
          dVar38 = dStack_300 - dVar39;
          if (dStack_300 - dVar39 <= (double)fVar37) {
            dVar38 = (double)fVar37;
          }
        }
        lVar5 = *(longlong *)(lVar4 + 0x10);
        local_360 = (float)dVar40;
        local_2e0 = *(char *)(lVar5 + 0x1a0);
        fStack_35c = (float)dVar38;
        fVar36 = local_360 * (float)local_370 + local_370._4_4_;
        fStack_34c = (float)dVar7 * (fVar42 / fVar34);
        fVar41 = (float)local_370 * fVar34;
        fVar37 = fStack_35c * (float)local_370 + local_368;
        local_2c8.Translation.field0_0x0._s_0.Y = fVar37;
        local_2c8.Translation.field0_0x0._s_0.X = fVar36;
        local_350 = (float)dVar8 * (fVar42 / fVar34);
        local_378._4_4_ = fStack_34c;
        local_378._0_4_ = local_350;
        local_358 = fVar36;
        fStack_354 = fVar37;
        local_2c8.Scale = fVar41;
        if (GSlateFlowDirection == LeftToRight) {
          if (local_2e0 == '\0') goto LAB_1425ec9d9;
          local_2f8.M.M[0] = *(float (*) [2])(lVar5 + 0x188);
          local_2f8.M.M[1] = *(float (*) [2])(lVar5 + 400);
          local_2f8.Trans.field0_0x0 = *(TVector2<float>_u_0 *)(lVar5 + 0x198);
LAB_1425ec89b:
          if (local_2e0 == '\0') goto LAB_1425ec9d9;
          local_380 = (float)*(double *)(*(longlong *)(lVar4 + 0x10) + 0x178);
          if (GSlateFlowDirection != LeftToRight) {
            local_380 = (fVar33 - local_380) + fVar33;
          }
          local_2ac._4_4_ = (float)*(double *)(*(longlong *)(lVar4 + 0x10) + 0x180);
          local_2ac._0_4_ = local_380;
          local_2d8.Translation.field0_0x0 = (local_340->AbsolutePosition).field0_0x0;
          local_2d8.Scale = local_340->Scale;
          FGeometry::FGeometry
                    (&local_118,&local_378,&local_2c8,&local_2f8,&local_2ac,&local_2d8,
                     &local_340->AccumulatedRenderTransform);
          local_1b8.Widget.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(lVar4 + 0x18);
          local_1b8.Widget.Object = *(SWidget **)(lVar4 + 0x10);
          if (local_1b8.Widget.SharedReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            local_1b8.Geometry.Size = local_118.Size;
            local_1b8.Geometry._8_8_ = local_118._8_8_;
            local_1b8.Geometry._16_8_ = local_118._16_8_;
            local_1b8.Geometry._24_8_ = local_118._24_8_;
            local_1b8.Geometry.AccumulatedRenderTransform.M.M[0][1] =
                 local_118.AccumulatedRenderTransform.M.M[0][1];
            local_1b8.Geometry.AccumulatedRenderTransform.M.M[1][0] =
                 local_118.AccumulatedRenderTransform.M.M[1][0];
            local_1b8.Geometry.AccumulatedRenderTransform._12_8_ =
                 local_118.AccumulatedRenderTransform._12_8_;
            local_1b8.Geometry._48_8_ = local_118._48_8_;
          }
          else {
            LOCK();
            (local_1b8.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1b8.Widget.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
            local_1b8.Geometry.Size = local_118.Size;
            local_1b8.Geometry._8_8_ = local_118._8_8_;
            local_1b8.Geometry._16_8_ = local_118._16_8_;
            local_1b8.Geometry._24_8_ = local_118._24_8_;
            local_1b8.Geometry.AccumulatedRenderTransform.M.M[0][1] =
                 local_118.AccumulatedRenderTransform.M.M[0][1];
            local_1b8.Geometry.AccumulatedRenderTransform.M.M[1][0] =
                 local_118.AccumulatedRenderTransform.M.M[1][0];
            local_1b8.Geometry.AccumulatedRenderTransform._12_8_ =
                 local_118.AccumulatedRenderTransform._12_8_;
            local_1b8.Geometry._48_8_ = local_118._48_8_;
            LOCK();
            (local_1b8.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1b8.Widget.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        else {
          if (local_2e0 != '\0') {
            local_2f8.M.M[0] = *(float (*) [2])(lVar5 + 0x188);
            local_2f8.M.M[1] = *(float (*) [2])(lVar5 + 400);
            dVar7 = (double)(float)*(undefined8 *)(lVar5 + 0x198);
            uStack_344 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x198) >> 0x20);
            local_348 = (float)(double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ (uint)uVar11,
                                                SUB84(dVar7,0) ^ uVar43);
            local_2f8.Trans.field0_0x0._s_0.Y = (float)uStack_344;
            local_2f8.Trans.field0_0x0._s_0.X = local_348;
            local_298 = local_2f8.M.M[0];
            afStack_290 = local_2f8.M.M[1];
            local_288 = local_2f8.Trans.field0_0x0;
            goto LAB_1425ec89b;
          }
LAB_1425ec9d9:
          local_2b4 = (local_340->AbsolutePosition).field0_0x0._s_0;
          fVar34 = local_340->Scale;
          fStack_160 = 1.0;
          fStack_15c = 0.0;
          local_158 = 0.0;
          fStack_154 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
          fStack_150 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
          local_130.M.M[0][1] = 0.0;
          local_130.M.M[1][0] = 0.0;
          local_168 = local_378;
          local_130.M.M[0][0] = fVar41;
          local_130.M.M[1][1] = fVar41;
          local_130.Trans.field0_0x0 = local_2c8.Translation.field0_0x0;
          Concatenate<TTransform2<float>_>
                    (&TStack_14c,&local_130,&local_340->AccumulatedRenderTransform);
          local_1b8.Widget.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(lVar4 + 0x18);
          uStack_134 = CONCAT31(uStack_134._1_3_,
                                local_340->bHasRenderTransform | (byte)uStack_134 & 0xfe);
          fStack_160 = fVar34 * fVar41;
          local_338 = fVar34 * fVar36 + local_2b4.X;
          fStack_334 = fVar34 * fVar37 + local_2b4.Y;
          local_1b8.Widget.Object = *(SWidget **)(lVar4 + 0x10);
          local_1b8.Geometry.AbsolutePosition.field0_0x0._0_4_ = local_338;
          local_1b8.Geometry.Scale = fStack_160;
          local_1b8.Geometry.Position.field0_0x0._0_4_ = fVar36;
          local_1b8.Geometry.AbsolutePosition.field0_0x0._s_0.Y = fStack_334;
          local_1b8.Geometry.AccumulatedRenderTransform.M.M[0][0] = TStack_14c.M.M[0][0];
          local_1b8.Geometry.Position.field0_0x0._s_0.Y = fVar37;
          if (local_1b8.Widget.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1b8.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1b8.Widget.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            (local_1b8.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1b8.Widget.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1b8.Geometry._52_4_ = uStack_134;
          local_1b8.Geometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y =
               TStack_14c.Trans.field0_0x0._s_0.Y;
          local_1b8.Geometry.AccumulatedRenderTransform._12_8_ = TStack_14c._12_8_;
          local_1b8.Geometry.AccumulatedRenderTransform.M.M[0][1] = TStack_14c.M.M[0][1];
          local_1b8.Geometry.AccumulatedRenderTransform.M.M[1][0] = TStack_14c.M.M[1][0];
          local_1b8.Geometry.Size = (FDeprecateSlateVector2D)local_168;
          lVar30 = local_328;
          fStack_15c = local_338;
          local_158 = fStack_334;
          fStack_154 = fVar36;
          fStack_150 = fVar37;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8.Widget.SharedReferenceCount.ReferenceController);
        param_2 = local_330;
        FArrangedChildren::AddWidget(local_330,&local_1b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8.Widget.SharedReferenceCount.ReferenceController);
      }
      iVar27 = (this->Children).Children.ArrayNum;
      local_328 = lVar30 + 8;
      uVar31 = uVar31 + 1;
    } while ((int)uVar31 < iVar27);
  }
  return;
}

// RemoveSlot @ 1425f8b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SPopupLayer::RemoveSlot(SPopupLayer *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  TArray<TUniquePtr<FPopupLayerSlot,TDefaultDelete<FPopupLayerSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  iVar9 = (this->Children).Children.ArrayNum;
  uVar10 = 0;
  if (0 < iVar9) {
    pTVar2 = &(this->Children).Children;
    uVar13 = uVar10;
    do {
      uVar12 = (uint)uVar13;
      uVar11 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < iVar9) {
        uVar8 = uVar11;
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
      if (*(SWidget **)(*(longlong *)((pTVar2->AllocatorInstance).Data + uVar10) + 0x10) ==
          param_1->Object) {
        uVar8 = 0;
        if ((int)uVar12 < (this->Children).Children.ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        lVar14 = (longlong)(int)uVar12;
        puVar4 = *(undefined8 **)(pFVar3 + lVar14 * 8);
        *(undefined8 *)(pFVar3 + lVar14 * 8) = 0;
        uVar8 = 0;
        if ((int)uVar12 < (this->Children).Children.ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        puVar5 = *(undefined8 **)(pFVar3 + lVar14 * 8);
        pFVar3 = pFVar3 + lVar14 * 8;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        iVar9 = (this->Children).Children.ArrayNum + ~uVar12;
        if (iVar9 != 0) {
          memmove(pFVar3,pFVar3 + 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(this->Children).Children.ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->Children).Children.ArrayNum,
                   &(this->Children).Children.ArrayMax);
        if (puVar4 == (undefined8 *)0x0) {
          return;
        }
        (**(code **)*puVar4)(puVar4,1);
        return;
      }
      iVar9 = (this->Children).Children.ArrayNum;
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar10 = uVar10 + 8;
    } while ((int)(uVar12 + 1) < iVar9);
  }
  return;
}

