// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// Draw_RenderThread @ 146a6ec50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPostBufferUpdater::Draw_RenderThread
          (FPostBufferUpdater *this,FRDGBuilder *param_1,FDrawPassInputs *param_2)

{
  float fVar1;
  float fVar2;
  USlateRHIRendererSettings *this_00;
  undefined1 *puVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FRHITexture *pFVar6;
  longlong *plVar7;
  TVector2<float>_u_0_s_0 TVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  FSlateRHIPostBufferProcessorProxy *pFVar12;
  undefined4 uVar13;
  UClass *pUVar14;
  UTextureRenderTarget2D *this_01;
  ESlatePostRT *pEVar15;
  FTextureRenderTargetResource *pFVar16;
  FRDGTexture *pFVar17;
  TRefCountPtr<IPooledRenderTarget> TVar18;
  int iVar19;
  int iVar20;
  ESlatePostRT *pEVar21;
  undefined1 *puVar22;
  ESlatePostRT EVar23;
  ETextureCreateFlags *pEVar24;
  ESlatePostRT EVar25;
  ulonglong uVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar36 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auStack_258 [32];
  uint local_238;
  TVector2<float>_u_0_s_0 local_230;
  TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> local_228;
  TIntPoint<int>_u_0 TStack_218;
  undefined4 local_208;
  FRDGTexture *local_1f8;
  TIntPoint<int>_u_0 TStack_1f0;
  TIntPoint<int>_u_0 local_1e8;
  FRDGTexture *local_1d8;
  FRDGTexture *local_1d0;
  TIntPoint<int>_u_0 local_1c8;
  int local_1c0;
  longlong *local_1b8;
  FDrawPassInputs *local_1b0;
  FScreenPassTexture local_1a8;
  FScreenPassTexture local_190;
  ETextureCreateFlags local_178;
  FRDGTexture *pFStack_170;
  TReferenceControllerBase<1> *local_168;
  FSharedReferencer<1> local_160;
  longlong local_158;
  longlong lStack_150;
  TReferenceControllerBase<1> *local_148;
  longlong local_138;
  longlong lStack_130;
  TReferenceControllerBase<1> *local_128;
  longlong local_118;
  longlong lStack_110;
  TReferenceControllerBase<1> *local_108;
  longlong local_f8;
  longlong lStack_f0;
  TReferenceControllerBase<1> *local_e8;
  ETextureCreateFlags local_d8 [10];
  
  local_d8[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_1b0 = param_2;
  pUVar14 = Z_Construct_UClass_USlateRHIRendererSettings_NoRegister();
  if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar14 = Z_Construct_UClass_USlateRHIRendererSettings_NoRegister();
    if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar14);
    }
    this_00 = (USlateRHIRendererSettings *)(pUVar14->ClassDefaultObject).field0_0x0.DebugPtr;
    if (this_00 != (USlateRHIRendererSettings *)0x0) {
      local_178 = None;
      pFStack_170 = (FRDGTexture *)0x0;
      local_168 = (TReferenceControllerBase<1> *)0x0;
      local_158 = 0;
      lStack_150 = 0;
      local_148 = (TReferenceControllerBase<1> *)0x0;
      local_138 = 0;
      lStack_130 = 0;
      local_128 = (TReferenceControllerBase<1> *)0x0;
      local_118 = 0;
      lStack_110 = 0;
      local_108 = (TReferenceControllerBase<1> *)0x0;
      local_f8 = 0;
      lStack_f0 = 0;
      local_e8 = (TReferenceControllerBase<1> *)0x0;
      local_238 = 0;
      fVar9 = __real_322bcc77;
      uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar11 = __real_3f000000;
      for (EVar23 = param_2->UsedSlatePostBuffers & this->BuffersToUpdate_Renderthread;
          __real_322bcc77 = fVar9, __xmm_7fffffff7fffffff7fffffff7fffffff = uVar10,
          __real_3f000000 = fVar11, EVar23 != None; EVar23 = EVar23 & ~(byte)local_208) {
        uVar10 = (uint)local_208 >> 8;
        local_208 = CONCAT31((int3)uVar10,~EVar23 + ESlatePostRT_0);
        EVar25 = ~EVar23 + ESlatePostRT_0 & EVar23;
        this_01 = USlateRHIRendererSettings::TryGetPostBufferRT(this_00,EVar25);
        if (this_01 != (UTextureRenderTarget2D *)0x0) {
          USlateFXSubsystem::GetPostProcessorProxy(&local_228,EVar25);
          if (((FRDGTexture *)local_228.Object != (FRDGTexture *)0x0) &&
             (*(int *)&(this->ProcessorUpdaters).field_0x8 !=
              *(int *)&(this->ProcessorUpdaters).field_0x34)) {
            puVar3 = *(undefined1 **)&(this->ProcessorUpdaters).field_0x40;
            puVar22 = &(this->ProcessorUpdaters).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar22 = puVar3;
            }
            uVar13 = *(undefined4 *)
                      (puVar22 +
                      ((ulonglong)(*(int *)&(this->ProcessorUpdaters).field_0x48 - 1) &
                      (ulonglong)EVar25) * 4);
            if (uVar13 != 0xffffffff) {
              do {
                pEVar21 = (ESlatePostRT *)
                          ((longlong)(int)uVar13 * 0x20 + *(longlong *)&this->ProcessorUpdaters);
                if (*pEVar21 == EVar25) {
                  pEVar15 = pEVar21 + 8;
                  if (pEVar21 == (ESlatePostRT *)0x0) {
                    pEVar15 = (ESlatePostRT *)0x0;
                  }
                  if (pEVar15 != (ESlatePostRT *)0x0) {
                    pTVar4 = *(TReferenceControllerBase<1> **)(pEVar15 + 8);
                    plVar7 = *(longlong **)pEVar15;
                    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTVar4->SharedReferenceCount =
                           (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    if (plVar7 != (longlong *)0x0) {
                      local_1f8 = (FRDGTexture *)local_228.Object;
                      TStack_1f0 = (TIntPoint<int>_u_0)
                                   local_228.SharedReferenceCount.ReferenceController;
                      pcVar5 = *(code **)(*plVar7 + 8);
                      if ((TIntPoint<int>_u_0)local_228.SharedReferenceCount.ReferenceController !=
                          (TIntPoint<int>_u_0)0x0) {
                        LOCK();
                        *(atomic<int> *)
                         ((longlong)local_228.SharedReferenceCount.ReferenceController + 8) =
                             (atomic<int>)
                             ((int)*(atomic<int> *)
                                    ((longlong)local_228.SharedReferenceCount.ReferenceController +
                                    8) + 1);
                        UNLOCK();
                      }
                      (*pcVar5)(plVar7,&local_1f8);
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar4);
                  }
                  break;
                }
                uVar13 = *(undefined4 *)(pEVar21 + 0x18);
              } while (uVar13 != 0xffffffff);
            }
          }
          pFVar16 = UTextureRenderTarget::GetRenderTargetResource((UTextureRenderTarget *)this_01);
          pFVar6 = (FRHITexture *)pFVar16->_padding_;
          pFVar17 = FRDGBuilder::FindExternalTexture(param_1,pFVar6);
          if (pFVar17 == (FRDGTexture *)0x0) {
            TVar18 = CreateRenderTarget((FRHITexture *)&local_1b8,(wchar_t *)pFVar6);
            pFVar17 = FRDGBuilder::RegisterExternalTexture
                                (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar18.Reference,
                                 ForceImmediateFirstBarrier);
            if (local_1b8 != (longlong *)0x0) {
              (**(code **)(*local_1b8 + 0x38))();
            }
          }
          local_1c0 = USlateRHIRendererSettings::GetSlatePostBufferDownscaleFactor(this_00,EVar25);
          pFVar12 = local_228.Object;
          uVar26 = (ulonglong)local_238;
          local_1d0 = (FRDGTexture *)local_228.Object;
          local_1c8 = (TIntPoint<int>_u_0)local_228.SharedReferenceCount.ReferenceController;
          local_228.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_228.Object = (FSlateRHIPostBufferProcessorProxy *)0x0;
          (&local_178)[uVar26 * 4] = (ETextureCreateFlags)pFVar17;
          local_1d8 = pFVar17;
          if (&pFStack_170 + uVar26 * 4 != &local_1d0) {
            (&pFStack_170)[uVar26 * 4] = (FRDGTexture *)pFVar12;
            local_1d0 = (FRDGTexture *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_160 + uVar26 * 4 + -1,(FSharedReferencer<1> *)&local_1c8._s_0);
          }
          *(int *)&(&local_160)[uVar26 * 4].ReferenceController = local_1c0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_1c8);
          FRDGBuilder::UseInternalAccessMode(param_1,(FRDGViewableResource *)pFVar17);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_228.SharedReferenceCount.ReferenceController);
        }
        local_238 = local_238 + 1;
        param_2 = local_1b0;
        fVar9 = __real_322bcc77;
        uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar11 = __real_3f000000;
      }
      pEVar24 = &local_178;
      do {
        if (*pEVar24 != None) {
          local_1f8 = param_2->OutputTexture;
          local_1e8 = (TIntPoint<int>_u_0)
                      *(TIntPoint<int>_u_0 *)
                       &((TIntPoint<int>_u_0 *)((longlong)&(param_2->SceneViewRect).field0_0x0 + 8))
                        ->_s_0;
          TStack_1f0 = (TIntPoint<int>_u_0)
                       *(TIntPoint<int>_u_0 *)&(param_2->SceneViewRect).field0_0x0;
          if (local_1f8 != (FRDGTexture *)0x0) {
            iVar19 = (local_1f8->VisualizeTextureExtent).field0_0x0._s_0.X;
            iVar20 = (local_1f8->VisualizeTextureExtent).field0_0x0._s_0.Y;
            iVar27 = local_1e8._s_0.X;
            if (local_1e8._s_0.X < iVar19) {
              iVar27 = iVar19;
            }
            (local_1f8->VisualizeTextureExtent).field0_0x0._s_0.X = iVar27;
            iVar19 = local_1e8._s_0.Y;
            if (local_1e8._s_0.Y < iVar20) {
              iVar19 = iVar20;
            }
            (local_1f8->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar19;
          }
          local_228.Object = (FSlateRHIPostBufferProcessorProxy *)*pEVar24;
          local_228.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          TStack_218 = (TIntPoint<int>_u_0)0x0;
          if ((FRDGTexture *)local_228.Object != (FRDGTexture *)0x0) {
            TStack_218 = *(TIntPoint<int>_u_0 *)
                          &(((FRDGTexture *)local_228.Object)->Desc).field_0x24;
          }
          plVar7 = (longlong *)pEVar24[1];
          if (plVar7 == (longlong *)0x0) {
            local_1a8.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
                 (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
            local_1a8.Texture = (FRDGTexture *)local_228.Object;
            local_1a8.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)TStack_218;
            local_190.Texture = local_1f8;
            local_190.ViewRect.field0_0x0._0_8_ = TStack_1f0;
            local_190.ViewRect.field0_0x0._8_8_ = local_1e8;
            AddSlatePostProcessCopy(param_1,&local_190,&local_1a8);
          }
          else {
            if (((this->bUsePaintGeometry_Renderthread != false) &&
                (fVar9 < (float)((uint)(this->PaintGeometry_Renderthread).LocalSize.field0_0x0._s_0.
                                       X & uVar10))) &&
               (fVar9 < (float)((uint)(this->PaintGeometry_Renderthread).LocalSize.field0_0x0._s_0.Y
                               & uVar10))) {
              uVar13 = (undefined4)pEVar24[3];
              fVar32 = (this->PaintGeometry_Renderthread).AccumulatedRenderTransform.M.M[0][1];
              fVar30 = (this->PaintGeometry_Renderthread).AccumulatedRenderTransform.M.M[1][1];
              fVar33 = (this->PaintGeometry_Renderthread).AccumulatedRenderTransform.Trans.
                       field0_0x0._s_0.Y;
              fVar35 = (this->PaintGeometry_Renderthread).AccumulatedRenderTransform.M.M[1][0];
              fVar1 = (this->PaintGeometry_Renderthread).AccumulatedRenderTransform.M.M[0][0];
              fVar2 = (this->PaintGeometry_Renderthread).AccumulatedRenderTransform.Trans.field0_0x0
                      ._s_0.X;
              local_230.Y = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
              TVar8 = (this->PaintGeometry_Renderthread).LocalSize.field0_0x0._s_0;
              iVar19 = TStack_1f0._s_0.X;
              iVar20 = TStack_1f0._s_0.Y;
              fVar38 = __real_3f800000 / (float)(int)uVar13;
              local_230.X = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
              fVar28 = fVar1 * local_230.X;
              auVar37 = roundps(unaff_XMM11,
                                ZEXT416((uint)((fVar30 * local_230.Y + fVar32 * local_230.X + fVar33
                                               ) * fVar38 + fVar11)),1);
              fVar29 = fVar35 * local_230.Y;
              local_230.Y = TVar8.Y;
              local_230.X = TVar8.X;
              fVar32 = fVar32 * local_230.X;
              auVar36 = roundps(unaff_XMM10,
                                ZEXT416((uint)((fVar29 + fVar28 + fVar2) * fVar38 + fVar11)),1);
              fVar28 = auVar37._0_4_;
              auVar34 = roundps(ZEXT416((uint)fVar32),
                                ZEXT416((uint)((fVar30 * local_230.Y + fVar32 + fVar33) * fVar38 +
                                              fVar11)),1);
              auVar31 = roundps(ZEXT416((uint)fVar33),
                                ZEXT416((uint)((fVar35 * local_230.Y + fVar1 * local_230.X + fVar2)
                                               * fVar38 + fVar11)),1);
              fVar35 = auVar36._0_4_;
              fVar33 = auVar34._0_4_;
              TStack_1f0._s_0.Y = ((int)ROUND(fVar28 + fVar28 + fVar11) >> 1) * uVar13;
              TStack_1f0._s_0.X = ((int)ROUND(fVar35 + fVar35 + fVar11) >> 1) * uVar13;
              fVar30 = auVar31._0_4_;
              local_1e8._s_0.Y = ((int)ROUND(fVar33 + fVar33 + fVar11) >> 1) * uVar13;
              local_1e8._s_0.X = ((int)ROUND(fVar30 + fVar30 + fVar11) >> 1) * uVar13;
              fVar32 = (float)iVar19 * fVar38;
              fVar38 = fVar38 * (float)iVar20;
              unaff_XMM10._4_12_ = auVar36._4_12_;
              fVar35 = fVar35 - fVar32;
              fVar30 = fVar30 - fVar32;
              unaff_XMM11._4_12_ = auVar37._4_12_;
              fVar28 = fVar28 - fVar38;
              fVar33 = fVar33 - fVar38;
              unaff_XMM10._0_4_ = fVar35 + fVar35 + fVar11;
              unaff_XMM11._0_4_ = fVar28 + fVar28 + fVar11;
              local_228.SharedReferenceCount.ReferenceController._4_4_ =
                   (int)ROUND(unaff_XMM11._0_4_) >> 1;
              local_228.SharedReferenceCount.ReferenceController._0_4_ =
                   (int)ROUND(unaff_XMM10._0_4_) >> 1;
              TStack_218._s_0.Y = (int)ROUND(fVar33 + fVar33 + fVar11) >> 1;
              TStack_218._s_0.X = (int)ROUND(fVar30 + fVar30 + fVar11) >> 1;
              local_230 = TVar8;
            }
            (**(code **)(*plVar7 + 0x10))(plVar7,param_1,&local_1f8,&local_228);
          }
        }
        pEVar24 = pEVar24 + 4;
      } while (pEVar24 != local_d8);
      pEVar24 = &local_178;
      do {
        if ((FRDGViewableResource *)*pEVar24 != (FRDGViewableResource *)0x0) {
          FRDGBuilder::UseExternalAccessMode
                    (param_1,(FRDGViewableResource *)*pEVar24,SRVMask,Graphics);
        }
        pEVar24 = pEVar24 + 4;
      } while (pEVar24 != local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_108)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_148)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_168)
      ;
    }
  }
  return;
}

// PostCustomElementAdded @ 146a89f20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPostBufferUpdater::PostCustomElementAdded(FPostBufferUpdater *this,FSlateElementBatcher *param_1)

{
  USlateRHIRendererSettings *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FSlatePostSettings *pFVar4;
  ESlatePostRT EVar5;
  ESlatePostRT EVar6;
  TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> local_18;
  
  param_1->ResourceUpdatingPostBuffers =
       param_1->ResourceUpdatingPostBuffers | this->BuffersToUpdate_Renderthread;
  pUVar3 = Z_Construct_UClass_USlateRHIRendererSettings_NoRegister();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USlateRHIRendererSettings_NoRegister();
    if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar3);
    }
    this_00 = (USlateRHIRendererSettings *)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
    if (this_00 != (USlateRHIRendererSettings *)0x0) {
      for (EVar5 = this->BuffersToUpdate_Renderthread; EVar5 != None;
          EVar5 = EVar5 & ~(~EVar5 + ESlatePostRT_0)) {
        EVar6 = ~EVar5 + ESlatePostRT_0 & EVar5;
        pFVar4 = USlateRHIRendererSettings::GetSlatePostSetting(this_00,EVar6);
        if (pFVar4->bEnabled != 0) {
          USlateFXSubsystem::GetPostProcessorProxy(&local_18,EVar6);
          if (local_18.Object != (FSlateRHIPostBufferProcessorProxy *)0x0) {
            if ((local_18.Object == (FSlateRHIPostBufferProcessorProxy *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            (**(code **)((local_18.Object)->_padding_ + 0x18))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
        }
      }
    }
  }
  return;
}

