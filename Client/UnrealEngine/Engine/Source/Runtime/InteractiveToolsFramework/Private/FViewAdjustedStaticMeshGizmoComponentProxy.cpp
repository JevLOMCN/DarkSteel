// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 4

// CanBeOccluded @ 1496966a0

bool __thiscall
ViewAdjustedStaticMeshGizmoComponentLocals::FViewAdjustedStaticMeshGizmoComponentProxy::
CanBeOccluded(FViewAdjustedStaticMeshGizmoComponentProxy *this)

{
  bool bVar1;
  
  if ((this->TransformAdjuster).Object == (IViewBasedTransformAdjuster *)0x0) {
    bVar1 = FStaticMeshSceneProxy::CanBeOccluded((FStaticMeshSceneProxy *)this);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// DrawStaticElements @ 14969d6d0

void __thiscall
ViewAdjustedStaticMeshGizmoComponentLocals::FViewAdjustedStaticMeshGizmoComponentProxy::
DrawStaticElements(FViewAdjustedStaticMeshGizmoComponentProxy *this,
                  FStaticPrimitiveDrawInterface *param_1)

{
  return;
}

// GetDynamicMeshElements @ 1496a1c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
ViewAdjustedStaticMeshGizmoComponentLocals::FViewAdjustedStaticMeshGizmoComponentProxy::
GetDynamicMeshElements
          (FViewAdjustedStaticMeshGizmoComponentProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  byte bVar1;
  FSceneView *pFVar2;
  IViewBasedTransformAdjuster *pIVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  char cVar20;
  bool bVar21;
  ushort uVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar25;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar26;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar27;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar28;
  FMaterialRenderProxy *this_00;
  FMaterial *pFVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles> FVar31;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong *plVar32;
  ForElementType<FMeshBatchElement> FVar33;
  uint uVar34;
  longlong *plVar35;
  longlong lVar36;
  undefined4 uVar37;
  longlong lVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  FMeshElementCollector *this_03;
  ForElementType<FMeshBatchElement> FVar43;
  int iVar44;
  undefined4 uVar45;
  double dVar47;
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auStackY_428 [32];
  bool local_3c8;
  uint local_3c4;
  uint local_3c0;
  undefined1 local_3bc [156];
  undefined4 local_320;
  uint local_31c;
  undefined **local_318;
  FSceneView *local_310;
  FName local_308;
  undefined1 local_300 [16];
  double dStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  double dStack_2d8;
  double local_2d0;
  undefined1 local_2c8 [48];
  double local_298;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  float local_218;
  float fStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  undefined8 local_e8;
  
  uVar18 = _UNK_15061cc8c;
  uVar17 = _UNK_15061cc88;
  uVar16 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_3bc._20_8_ = param_4;
  if (this->bHiddenByInteraction == false) {
    iVar24 = param_1->ArrayNum;
    local_3bc._36_4_ = 0;
    if (0 < iVar24) {
      local_3bc._40_4_ = 1;
      local_3bc._108_8_ = 0;
      local_3bc._4_4_ = param_3;
      local_3bc._12_8_ = this;
      local_3bc._100_8_ = param_1;
      do {
        uVar25 = local_3bc._108_8_;
        uVar37 = local_3bc._40_4_;
        uVar34 = local_3bc._36_4_;
        this_03 = (FMeshElementCollector *)local_3bc._20_8_;
        uVar23 = 0;
        if ((int)local_3bc._36_4_ < iVar24) {
          uVar23 = (uint)~local_3bc._36_4_ >> 0x1f;
        }
        if (uVar23 == 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar2 = *(FSceneView **)(((ForAnyElementType *)local_3bc._100_8_)->Data + uVar25);
        bVar19 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,pFVar2);
        if ((bVar19) && ((param_3 & uVar37) != 0)) {
          local_3c8 = (bool)((byte)this->_padding_ & 1);
          local_3bc._84_8_ = (undefined8 *)0x0;
          pIVar3 = (this->TransformAdjuster).Object;
          if (pIVar3 == (IViewBasedTransformAdjuster *)0x0) {
            if (*(longlong *)&this->RenderVisibilityFunc != 0) {
              UE::Math::TTransform<double>::SetFromMatrix
                        (&local_148,(TMatrix<double> *)&this->_padding_);
              local_318 = &___7FSceneViewWrapper_GizmoRenderingUtil_UE__6B_;
              local_310 = pFVar2;
              UE::Core::Private::Function::CheckCallable(*(void **)&this->RenderVisibilityFunc);
              plVar35 = *(longlong **)&(this->RenderVisibilityFunc).field_0x28;
              pcVar5 = *(code **)&this->RenderVisibilityFunc;
              plVar32 = (longlong *)&(this->RenderVisibilityFunc).field_0x10;
              if (plVar35 != (longlong *)0x0) {
                plVar32 = plVar35;
              }
              uVar25 = (**(code **)(*plVar32 + 8))();
              cVar20 = (*pcVar5)(uVar25,&local_318,&local_148);
              param_3 = local_3bc._4_4_;
              if (cVar20 == '\0') goto LAB_1496a2a54;
            }
          }
          else {
            local_3bc._132_8_ = &___7FSceneViewWrapper_GizmoRenderingUtil_UE__6B_;
            pcVar5 = *(code **)((longlong)*pIVar3 + 0x10);
            local_3bc._140_8_ = pFVar2;
            UE::Math::TTransform<double>::SetFromMatrix
                      (&local_1a8,(TMatrix<double> *)&this->_padding_);
            (*pcVar5)(pIVar3,&local_208,local_3bc + 0x84,&local_1a8);
            if (*(void **)&this->RenderVisibilityFunc != (void *)0x0) {
              UE::Core::Private::Function::CheckCallable(*(void **)&this->RenderVisibilityFunc);
              plVar35 = *(longlong **)&(this->RenderVisibilityFunc).field_0x28;
              pcVar5 = *(code **)&this->RenderVisibilityFunc;
              plVar32 = (longlong *)&(this->RenderVisibilityFunc).field_0x10;
              if (plVar35 != (longlong *)0x0) {
                plVar32 = plVar35;
              }
              uVar25 = (**(code **)(*plVar32 + 8))();
              cVar20 = (*pcVar5)(uVar25,local_3bc + 0x84,&local_208);
              param_3 = local_3bc._4_4_;
              if (cVar20 == '\0') goto LAB_1496a2a54;
            }
            dVar6 = local_1f8 + local_1f8;
            dVar13 = dStack_200 + dStack_200;
            dVar8 = local_208 * (local_208 + local_208);
            dVar7 = dStack_1f0 * (local_208 + local_208);
            dVar47 = local_1c8._8_8_;
            dVar12 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - (local_1f8 * dVar6 + dVar8)
                     ) * dVar47;
            dVar11 = (dStack_1f0 * dVar6 + dVar13 * local_208) * local_1c8._0_8_;
            local_258 = (dVar7 + dVar6 * dStack_200) * dVar47;
            auVar46 = blendpd(local_1c8,local_1b8,2);
            dVar9 = local_1b8._0_8_;
            dVar7 = dVar9 * (dVar6 * dStack_200 - dVar7);
            local_238 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                        (dVar8 + dStack_200 * dVar13)) * dVar9;
            local_278 = auVar46._0_8_ * (local_208 * dVar6 - dVar13 * dStack_1f0);
            local_288._8_4_ = SUB84(dVar11,0);
            local_288._0_8_ =
                 (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                 (local_1f8 * dVar6 + dStack_200 * dVar13)) * local_1c8._0_8_;
            local_288._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            uStack_210 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            uStack_20c = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            local_268._8_4_ = SUB84(dVar12,0);
            local_268._0_8_ = dVar47 * (dVar13 * local_208 - dStack_1f0 * dVar6);
            local_268._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            dStack_250 = 0.0;
            local_248._8_4_ = SUB84(dVar7,0);
            local_248._0_8_ = (dVar13 * dStack_1f0 + local_208 * dVar6) * dVar9;
            local_248._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            dStack_270 = 0.0;
            dStack_230 = 0.0;
            local_228 = local_1e8;
            dStack_220 = dStack_1e0;
            local_218 = (float)local_1d8;
            fStack_214 = (float)uStack_1d4;
            dVar6 = UE::Math::TMatrix<double>::Determinant((TMatrix<double> *)local_288);
            paVar4 = *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                       **)((longlong)this_03 + 0x108);
            local_3c8 = dVar6 < 0.0;
            aVar26 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                      )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
            *(undefined8 *)((longlong)aVar26 + 8) = 0;
            *(undefined ***)aVar26 =
                 &
                 ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
            ;
            TVar27.Next = *paVar4;
            do {
              *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                *)((longlong)aVar26 + 8) = TVar27.Next;
              LOCK();
              aVar28 = *paVar4;
              bVar19 = TVar27.Next == aVar28;
              if (bVar19) {
                *paVar4 = aVar26;
                aVar28 = TVar27.Next;
              }
              UNLOCK();
              TVar27.Next = aVar28;
            } while (!bVar19);
            FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
                      ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar26 + 0x10));
            bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
            if (((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) || ((bVar1 & 3) == 3)) ||
               ((bVar1 & 0x60) != 0)) {
              bVar19 = true;
            }
            else {
              bVar19 = false;
            }
            dVar9 = (double)this->_padding_;
            dVar8 = (double)this->_padding_;
            dVar12 = (double)this->_padding_;
            dVar13 = (double)this->_padding_;
            dVar6 = (double)this->_padding_;
            dVar7 = (double)this->_padding_;
            dVar11 = (double)CONCAT44((uint)((ulonglong)((double)local_268._0_8_ * dVar8) >> 0x20) &
                                      uVar16,SUB84((double)local_268._0_8_ * dVar8,0) & uVar15) +
                     (double)CONCAT44((uint)((ulonglong)((double)local_288._0_8_ * dVar9) >> 0x20) &
                                      uVar16,SUB84((double)local_288._0_8_ * dVar9,0) & uVar15) +
                     (double)CONCAT44((uint)((ulonglong)((double)local_248._0_8_ * dVar6) >> 0x20) &
                                      uVar16,SUB84((double)local_248._0_8_ * dVar6,0) & uVar15);
            uStack_2e0 = (double)CONCAT44((uint)((ulonglong)((double)local_268._8_8_ * dVar8) >>
                                                0x20) & uVar18,
                                          SUB84((double)local_268._8_8_ * dVar8,0) & uVar17) +
                         (double)CONCAT44((uint)((ulonglong)((double)local_288._8_8_ * dVar9) >>
                                                0x20) & uVar18,
                                          SUB84((double)local_288._8_8_ * dVar9,0) & uVar17) +
                         (double)CONCAT44((uint)((ulonglong)((double)local_248._8_8_ * dVar6) >>
                                                0x20) & uVar18,
                                          SUB84((double)local_248._8_8_ * dVar6,0) & uVar17);
            dStack_2d8 = (double)CONCAT44((uint)((ulonglong)(local_258 * dVar8) >> 0x20) & uVar16,
                                          SUB84(local_258 * dVar8,0) & uVar15) +
                         (double)CONCAT44((uint)((ulonglong)(local_278 * dVar9) >> 0x20) & uVar16,
                                          SUB84(local_278 * dVar9,0) & uVar15) +
                         (double)CONCAT44((uint)((ulonglong)(local_238 * dVar6) >> 0x20) & uVar16,
                                          SUB84(local_238 * dVar6,0) & uVar15);
            local_2e8._0_4_ = SUB84(dVar11,0);
            local_2e8._4_4_ = (undefined4)((ulonglong)dVar11 >> 0x20);
            dStack_2f0 = dVar13 * local_258 + dVar12 * local_278 + local_238 * dVar7 +
                         (double)CONCAT44(fStack_214,local_218);
            auVar48._0_8_ =
                 (double)local_268._0_8_ * (double)local_268._0_8_ +
                 (double)local_288._0_8_ * (double)local_288._0_8_ +
                 (double)local_248._0_8_ * (double)local_248._0_8_;
            auVar48._8_8_ =
                 (double)local_268._8_8_ * (double)local_268._8_8_ +
                 (double)local_288._8_8_ * (double)local_288._8_8_ +
                 (double)local_248._8_8_ * (double)local_248._8_8_;
            auVar46._8_4_ = SUB84(auVar48._8_8_,0);
            auVar46._0_8_ = auVar48._8_8_;
            auVar46._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
            auVar46 = maxpd(auVar48,auVar46);
            dVar8 = local_258 * local_258 + local_278 * local_278 + local_238 * local_238;
            dVar9 = dVar13 * (double)local_268._0_8_ + dVar12 * (double)local_288._0_8_ +
                    (double)local_248._0_8_ * dVar7 + local_228;
            dVar6 = dVar13 * (double)local_268._8_8_ + dVar12 * (double)local_288._8_8_ +
                    (double)local_248._8_8_ * dVar7 + dStack_220;
            uVar37 = SUB84(dVar6,0);
            uVar45 = (undefined4)((ulonglong)dVar6 >> 0x20);
            local_300._8_4_ = uVar37;
            local_300._0_8_ = dVar9;
            local_300._12_4_ = uVar45;
            auVar10._8_4_ = SUB84(dVar8,0);
            auVar10._0_8_ = dVar8;
            auVar10._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            auVar46 = maxpd(auVar46,auVar10);
            local_2d0 = SQRT(dStack_2d8 * dStack_2d8 + dVar11 * dVar11 + uStack_2e0 * uStack_2e0);
            dVar6 = SQRT(auVar46._0_8_) * (double)this->_padding_;
            local_2c8._8_4_ = uVar37;
            local_2c8._0_8_ = dVar9;
            local_2c8._12_4_ = uVar45;
            if (dVar6 <= local_2d0) {
              local_2d0 = dVar6;
            }
            local_2c8._24_4_ = (undefined4)local_2e8;
            local_2c8._16_8_ = dStack_2f0;
            local_2c8._28_4_ = local_2e8._4_4_;
            local_2c8._40_8_ = dStack_2d8;
            local_298 = local_2d0;
            local_2e8 = dVar11;
            local_2c8._32_8_ = uStack_2e0;
            if (*(FRHICommandList **)(local_3bc._20_8_ + 0x130) == (FRHICommandList *)0x0) {
              bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RHICmdList",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                  ,0x46,L"");
              if (bVar21) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            this_03 = (FMeshElementCollector *)local_3bc._20_8_;
            FDynamicPrimitiveUniformBuffer::Set
                      ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar26 + 0x10),
                       *(FRHICommandListBase **)(local_3bc._20_8_ + 0x130),
                       (TMatrix<double> *)local_288,(TMatrix<double> *)local_288,
                       (TBoxSphereBounds<double,double> *)local_2c8,
                       (TBoxSphereBounds<double,double> *)&this->_padding_,true,false,bVar19);
            local_3bc._84_8_ = (longlong)aVar26 + 0x18;
          }
          FStaticMeshSceneProxy::GetLODMask((FStaticMeshSceneProxy *)this,(FSceneView *)local_3bc);
          plVar35 = (longlong *)this->_padding_;
          local_3c4 = 0;
          local_3bc._52_8_ = 0;
          uVar22 = local_3bc._0_2_;
          param_3 = local_3bc._4_4_;
          if (0 < (int)plVar35[1]) {
            do {
              lVar38 = local_3bc._52_8_;
              if ((uVar22 >> 0xe & 1) != 0) {
                if ((short)uVar22 < 0) {
                  if (((int)(uVar22 & 0x7f) <= (int)local_3c4) &&
                     ((int)local_3c4 <= (int)(uVar22 >> 7 & 0x7f))) {
LAB_1496a2368:
                    if (*(int *)((longlong)&this->_padding_ + 4) <= (int)local_3c4) {
                      local_3bc._44_4_ = ~local_3c4 >> 0x1f;
                      uVar34 = 0;
                      if ((int)local_3c4 < (int)plVar35[1]) {
                        uVar34 = local_3bc._44_4_;
                      }
                      if (uVar34 == 0) {
                        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        uVar22 = local_3bc._0_2_;
                        if (bVar19) {
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                      }
                      local_3c0 = 0;
                      local_3bc._76_8_ = *(longlong *)(*plVar35 + lVar38 * 8);
                      if (0 < *(int *)(local_3bc._76_8_ + 0x38)) {
                        local_3bc._68_8_ = 0;
                        do {
                          lVar36 = local_3bc._68_8_;
                          local_3bc._64_4_ = (**(code **)(this->_padding_ + 600))(this);
                          local_3bc._32_4_ = 0;
                          if (0 < (int)local_3bc._64_4_) {
                            local_3bc._116_8_ = lVar38 << 7;
                            local_3bc._60_4_ = ~local_3c0 >> 0x1f;
                            do {
                              uVar37 = local_3bc._32_4_;
                              iVar24 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                                       ::Add(&this_03->MeshBatchStorage,1);
                              uVar34 = iVar24 / 0x49;
                              uVar23 = 0;
                              if ((int)uVar34 < (this_03->MeshBatchStorage).Chunks.Array.ArrayNum) {
                                uVar23 = ~uVar34 >> 0x1f;
                              }
                              if (uVar23 == 0) {
                                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                if (bVar19) {
                                  pcVar5 = (code *)swi(3);
                                  (*pcVar5)();
                                  return;
                                }
                              }
                              FVar43 = (ForElementType<FMeshBatchElement>)
                                       ((ulonglong)(uint)(iVar24 % 0x49) * 0xe0 +
                                       (longlong)
                                       (((TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                                          *)local_3bc._20_8_)->Chunks).Array.AllocatorInstance.Data
                                       [(int)uVar34]);
                              uVar34 = 0;
                              if ((int)local_3c4 < (int)this->_padding_) {
                                uVar34 = local_3bc._44_4_;
                              }
                              if (uVar34 == 0) {
                                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                if (bVar19) {
                                  pcVar5 = (code *)swi(3);
                                  (*pcVar5)();
                                  return;
                                }
                              }
                              lVar38 = local_3bc._116_8_ + 0x30 + this->_padding_;
                              uVar34 = 0;
                              if ((int)local_3c0 < *(int *)(lVar38 + 0x20)) {
                                uVar34 = local_3bc._60_4_;
                              }
                              if (uVar34 == 0) {
                                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                if (bVar19) {
                                  pcVar5 = (code *)swi(3);
                                  (*pcVar5)();
                                  return;
                                }
                              }
                              lVar36 = this->_padding_;
                              if (*(longlong *)(lVar38 + 0x18) != 0) {
                                lVar38 = *(longlong *)(lVar38 + 0x18);
                              }
                              (**(code **)(lVar36 + 0x160))(this);
                              cVar20 = (**(code **)(lVar36 + 0x268))(this,local_3c4,uVar37);
                              if (cVar20 != '\0') {
                                if (*(int *)((longlong)FVar43 + 0xa0) < 1) {
                                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                  if (bVar19) {
                                    pcVar5 = (code *)swi(3);
                                    (*pcVar5)();
                                    return;
                                  }
                                }
                                FVar33 = FVar43;
                                if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar43 + 0x98)
                                    != (ForElementType<FMeshBatchElement>)0x0) {
                                  FVar33 = *(ForElementType<FMeshBatchElement> *)
                                            ((longlong)FVar43 + 0x98);
                                }
                                uVar34 = (uint)this->_padding_ >> 1 & 1;
                                this_00 = (FMaterialRenderProxy *)
                                          (**(code **)(**(longlong **)(local_3bc._68_8_ + lVar38) +
                                                      0x310))();
                                pFVar29 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                                                    (this_00,*(Type *)(this->_padding_ + 8));
                                if (uVar34 == local_3c8) {
LAB_1496a2810:
                                  *(longlong *)((longlong)FVar33 + 0x18) = local_3bc._76_8_ + 0x228;
                                  if (uVar34 == local_3c8) goto LAB_1496a26b1;
                                  uVar34 = 1;
                                }
                                else {
                                  plVar35 = (longlong *)this->_padding_;
                                  uVar23 = 0;
                                  if ((int)local_3c4 < (int)plVar35[1]) {
                                    uVar23 = local_3bc._44_4_;
                                  }
                                  if (uVar23 == 0) {
                                    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                    if (bVar19) {
                                      pcVar5 = (code *)swi(3);
                                      (*pcVar5)();
                                      return;
                                    }
                                  }
                                  if ((*(byte *)(*(longlong *)(*plVar35 + local_3bc._52_8_ * 8) +
                                                0x94) & 4) == 0) goto LAB_1496a2810;
                                  cVar20 = (**(code **)(pFVar29->_padding_ + 0x48))();
                                  if (cVar20 != '\0') goto LAB_1496a2810;
                                  *(undefined8 *)((longlong)FVar33 + 0x18) =
                                       *(undefined8 *)(local_3bc._76_8_ + 0x2c8);
LAB_1496a26b1:
                                  uVar34 = 0;
                                }
                                *(uint *)((longlong)FVar43 + 0xd4) =
                                     *(uint *)((longlong)FVar43 + 0xd4) & 0xffffdffe | uVar34;
                                if ((undefined8 *)local_3bc._84_8_ != (undefined8 *)0x0) {
                                  *(undefined8 *)((longlong)FVar33 + 8) = local_3bc._84_8_;
                                }
                                if ((this->bHovered != false) &&
                                   (this->HoverOverrideMaterial != (UMaterialInterface *)0x0)) {
                                  uVar25 = (**(code **)(this->HoverOverrideMaterial->_padding_ +
                                                       0x310))();
                                  *(undefined8 *)((longlong)FVar43 + 0xb0) = uVar25;
                                }
                                FMeshElementCollector::AddMesh
                                          ((FMeshElementCollector *)local_3bc._20_8_,
                                           local_3bc._36_4_,(FMeshBatch *)FVar43);
                                iVar24 = *(int *)((longlong)FVar43 + 0xa0);
                                uVar34 = 0;
                                local_3bc._28_4_ = 0;
                                this = (FViewAdjustedStaticMeshGizmoComponentProxy *)
                                       local_3bc._12_8_;
                                if (0 < iVar24) {
                                  lVar38 = 0;
                                  do {
                                    iVar44 = local_3bc._28_4_;
                                    uVar23 = 0;
                                    if ((int)uVar34 < iVar24) {
                                      uVar23 = ~uVar34 >> 0x1f;
                                    }
                                    if (uVar23 == 0) {
                                      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                      if (bVar19) {
                                        pcVar5 = (code *)swi(3);
                                        (*pcVar5)();
                                        return;
                                      }
                                    }
                                    FVar33 = FVar43;
                                    if (*(ForElementType<FMeshBatchElement> *)
                                         ((longlong)FVar43 + 0x98) !=
                                        (ForElementType<FMeshBatchElement>)0x0) {
                                      FVar33 = *(ForElementType<FMeshBatchElement> *)
                                                ((longlong)FVar43 + 0x98);
                                    }
                                    if (((*(uint *)(lVar38 + 0x7c + (longlong)FVar33) & 0x400) == 0)
                                       || (lVar36 = *(longlong *)(lVar38 + 0x30 + (longlong)FVar33),
                                          lVar36 == 0)) {
                                      iVar40 = *(int *)(lVar38 + 0x60 + (longlong)FVar33) *
                                               *(int *)(lVar38 + 0x5c + (longlong)FVar33);
                                    }
                                    else {
                                      uVar23 = *(uint *)(lVar38 + 0x60 + (longlong)FVar33);
                                      iVar40 = 0;
                                      iVar41 = 0;
                                      iVar42 = 0;
                                      iVar24 = 0;
                                      uVar39 = 0;
                                      if (uVar23 < 2) {
                                        if (uVar23 != 0) {
                                          iVar24 = *(int *)(lVar38 + 0x5c + (longlong)FVar33);
                                          goto LAB_1496a2840;
                                        }
                                      }
                                      else {
                                        iVar24 = *(int *)(lVar38 + 0x5c + (longlong)FVar33);
                                        do {
                                          uVar14 = uVar39 * 2;
                                          uVar39 = uVar39 + 2;
                                          iVar40 = iVar40 + ((*(int *)(lVar36 + (ulonglong)
                                                                                (uVar14 + 1) * 4) -
                                                             *(int *)(lVar36 + (ulonglong)uVar14 * 4
                                                                     )) + 1) * iVar24;
                                          iVar41 = iVar41 + ((*(int *)(lVar36 + (ulonglong)
                                                                                (uVar14 + 3) * 4) -
                                                             *(int *)(lVar36 + (ulonglong)
                                                                               (uVar14 + 2) * 4)) +
                                                            1) * iVar24;
                                        } while (uVar39 < uVar23 - 1);
                                        iVar42 = iVar41;
                                        if (uVar23 <= uVar39) {
                                          iVar40 = iVar40 + iVar41;
                                          iVar44 = local_3bc._28_4_;
                                          goto LAB_1496a286c;
                                        }
LAB_1496a2840:
                                        iVar24 = ((*(int *)(lVar36 + (ulonglong)(uVar39 * 2 + 1) * 4
                                                           ) -
                                                  *(int *)(lVar36 + (ulonglong)(uVar39 * 2) * 4)) +
                                                 1) * iVar24;
                                        iVar44 = local_3bc._28_4_;
                                        iVar41 = iVar42;
                                      }
                                      iVar40 = iVar24 + iVar40 + iVar41;
                                    }
LAB_1496a286c:
                                    iVar24 = *(int *)((longlong)FVar43 + 0xa0);
                                    iVar44 = iVar44 + iVar40;
                                    uVar34 = uVar34 + 1;
                                    lVar38 = lVar38 + 0x98;
                                    local_3bc._28_4_ = iVar44;
                                  } while ((int)uVar34 < iVar24);
                                  this = (FViewAdjustedStaticMeshGizmoComponentProxy *)
                                         local_3bc._12_8_;
                                  if ((iVar44 != 0) && (FThreadStats::bPrimaryEnable != false)) {
                                    FVar31 = StatPtr_STAT_StaticMeshTriangles;
                                    if (StatPtr_STAT_StaticMeshTriangles ==
                                        (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)0x0)
                                    {
                                      pFVar30 = ::FName::FName(&local_308,"STAT_StaticMeshTriangles"
                                                              );
                                      FVar31 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>
                                                )FThreadSafeStaticStatBase::DoSetup
                                                           ((FThreadSafeStaticStatBase *)
                                                            &StatPtr_STAT_StaticMeshTriangles,
                                                            *pFVar30,L"Static Mesh Tris",
                                                            "STATGROUP_Engine","STATCAT_Advanced",
                                                            L"Engine",true,true,ST_int64,false,false
                                                            ,MCR_Invalid);
                                    }
                                    lVar38 = *(longlong *)FVar31;
                                    uVar37 = (undefined4)lVar38;
                                    uVar34 = (uint)((ulonglong)lVar38 >> 0x20);
                                    this = (FViewAdjustedStaticMeshGizmoComponentProxy *)
                                           local_3bc._12_8_;
                                    local_3bc._92_4_ = uVar37;
                                    local_3bc._96_4_ = uVar34;
                                    if (((lVar38 != 0) &&
                                        (FThreadStats::bPrimaryDisableForever == false)) &&
                                       (FThreadStats::TlsSlot != 0xffffffff)) {
                                      this_01 = TlsGetValue(FThreadStats::TlsSlot);
                                      if (this_01 == (FThreadStats *)0x0) {
                                        this_02 = FThreadStatsPool::Get();
                                        this_01 = FThreadStatsPool::GetFromPool(this_02);
                                      }
                                      local_31c = uVar34 & 0xffffafff | 0xa000;
                                      local_3bc._124_8_ = lVar38;
                                      local_3bc._148_8_ = (longlong)iVar44;
                                      local_320 = uVar37;
                                      FThreadStats::AddStatMessage
                                                (this_01,(FStatMessage *)(local_3bc + 0x94));
                                      FStatsTrace::Add((FName *)(local_3bc + 0x7c),(longlong)iVar44)
                                      ;
                                      if (this_01->ScopeCount == 0) {
                                        FThreadStats::Flush(this_01,false,false);
                                        this = (FViewAdjustedStaticMeshGizmoComponentProxy *)
                                               local_3bc._12_8_;
                                      }
                                      else {
                                        this = (FViewAdjustedStaticMeshGizmoComponentProxy *)
                                               local_3bc._12_8_;
                                        if (FThreadStats::bIsRawStatsActive != false) {
                                          FThreadStats::FlushRawStats(this_01,false,false);
                                          this = (FViewAdjustedStaticMeshGizmoComponentProxy *)
                                                 local_3bc._12_8_;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              local_3bc._32_4_ = local_3bc._32_4_ + 1;
                              lVar36 = local_3bc._68_8_;
                              lVar38 = local_3bc._52_8_;
                              this_03 = (FMeshElementCollector *)local_3bc._20_8_;
                            } while ((int)local_3bc._32_4_ < (int)local_3bc._64_4_);
                          }
                          local_3c0 = local_3c0 + 1;
                          local_3bc._68_8_ = lVar36 + 0x18;
                          this_03 = (FMeshElementCollector *)local_3bc._20_8_;
                          uVar22 = local_3bc._0_2_;
                        } while ((int)local_3c0 < *(int *)(local_3bc._76_8_ + 0x38));
                      }
                    }
                  }
                }
                else if (((uVar22 & 0x7f) == local_3c4) || ((uVar22 >> 7 & 0x7f) == local_3c4))
                goto LAB_1496a2368;
              }
              plVar35 = (longlong *)this->_padding_;
              local_3c4 = local_3c4 + 1;
              local_3bc._52_8_ = lVar38 + 1;
              this_03 = (FMeshElementCollector *)local_3bc._20_8_;
              uVar34 = local_3bc._36_4_;
              param_3 = local_3bc._4_4_;
            } while ((int)local_3c4 < (int)plVar35[1]);
          }
        }
LAB_1496a2a54:
        local_3bc._36_4_ = uVar34 + 1;
        local_3bc._40_4_ = local_3bc._40_4_ << 1 | (uint)((int)local_3bc._40_4_ < 0);
        iVar24 = *(int *)(local_3bc._100_8_ + 8);
        local_3bc._108_8_ = local_3bc._108_8_ + 8;
      } while ((int)local_3bc._36_4_ < iVar24);
    }
  }
  return;
}

// GetViewRelevance @ 1496aaf70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
ViewAdjustedStaticMeshGizmoComponentLocals::FViewAdjustedStaticMeshGizmoComponentProxy::
GetViewRelevance(FViewAdjustedStaticMeshGizmoComponentProxy *this,
                FPrimitiveViewRelevance *__return_storage_ptr__,FSceneView *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  FStaticMeshSceneProxy::GetViewRelevance
            ((FStaticMeshSceneProxy *)this,__return_storage_ptr__,param_1);
  puVar2 = &__return_storage_ptr__->field_0x8;
  __return_storage_ptr__->bStaticRelevance = 0;
  __return_storage_ptr__->bShadowRelevance = 0;
  __return_storage_ptr__->bDynamicRelevance = 1;
  FMaterialRelevance::SetPrimitiveViewRelevance
            ((FMaterialRelevance *)&this->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

