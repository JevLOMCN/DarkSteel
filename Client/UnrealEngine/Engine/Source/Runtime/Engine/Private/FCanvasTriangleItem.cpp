// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FCanvasTriangleItem @ 147abecd0

void __thiscall FCanvasTriangleItem::~FCanvasTriangleItem(FCanvasTriangleItem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCanvasTriangleItem__6B_;
  pFVar1 = (this->TriangleList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  return;
}

// FCanvasTriangleItem @ 148906960

FCanvasTriangleItem * __thiscall
FCanvasTriangleItem::FCanvasTriangleItem
          (FCanvasTriangleItem *this,TVector2<double> *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,FTexture *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FLinearColor FVar9;
  TVector2<double> TVar10;
  int iVar11;
  longlong lVar12;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  piVar1 = &(this->TriangleList).ArrayMax;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar3;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  FVar9 = FLinearColor::White;
  this->_padding_ = (longlong)&___7FCanvasTriangleItem__6B_;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  (this->TriangleList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleList).ArrayNum = 0;
  *piVar1 = 0;
  this->MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
  this->BatchedElementParameters = (FBatchedElementParameters *)0x0;
  this->Texture = param_4;
  TVar10 = UE::Math::TVector2<double>::ZeroVector;
  FVar9 = FLinearColor::White;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  dVar7 = (param_3->field0_0x0)._s_0.X;
  dVar8 = (param_3->field0_0x0)._s_0.Y;
  iVar11 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x890,&(this->TriangleList).AllocatorInstance,piVar1);
  local_d8 = TVar10.field0_0x0._0_8_;
  uStack_d0 = TVar10.field0_0x0._8_8_;
  local_c8 = FVar9.field0_0x0._0_8_;
  uStack_c0 = FVar9.field0_0x0._8_8_;
  lVar12 = (longlong)iVar11;
  (this->TriangleList).ArrayNum = iVar11 + 1;
  pFVar2 = (this->TriangleList).AllocatorInstance.Data;
  *(double *)(pFVar2 + lVar12 * 0x90) = dVar3;
  *(double *)(pFVar2 + lVar12 * 0x90 + 8) = dVar4;
  *(undefined8 *)(pFVar2 + lVar12 * 0x90 + 0x10) = local_d8;
  *(undefined8 *)(pFVar2 + lVar12 * 0x90 + 0x10 + 8) = uStack_d0;
  *(undefined8 *)(pFVar2 + lVar12 * 0x90 + 0x20) = local_c8;
  *(undefined8 *)(pFVar2 + lVar12 * 0x90 + 0x20 + 8) = uStack_c0;
  *(double *)(pFVar2 + lVar12 * 0x90 + 0x30) = dVar5;
  *(double *)(pFVar2 + lVar12 * 0x90 + 0x30 + 8) = dVar6;
  *(undefined8 *)(pFVar2 + lVar12 * 0x90 + 0x40) = local_d8;
  *(undefined8 *)(pFVar2 + lVar12 * 0x90 + 0x40 + 8) = uStack_d0;
  *(undefined8 *)(pFVar2 + lVar12 * 0x90 + 0x50) = local_c8;
  *(undefined8 *)(pFVar2 + lVar12 * 0x90 + 0x50 + 8) = uStack_c0;
  *(double *)(pFVar2 + lVar12 * 0x90 + 0x60) = dVar7;
  *(double *)(pFVar2 + lVar12 * 0x90 + 0x60 + 8) = dVar8;
  *(undefined8 *)(pFVar2 + lVar12 * 0x90 + 0x70) = local_d8;
  *(undefined8 *)(pFVar2 + lVar12 * 0x90 + 0x70 + 8) = uStack_d0;
  *(undefined8 *)(pFVar2 + lVar12 * 0x90 + 0x80) = local_c8;
  *(undefined8 *)(pFVar2 + lVar12 * 0x90 + 0x80 + 8) = uStack_c0;
  return this;
}

// Draw @ 14892c5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCanvasTriangleItem::Draw(FCanvasTriangleItem *this,FCanvas *param_1)

{
  int *piVar1;
  HHitProxy *pHVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  FRenderData *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_Canvas_TriTextureItemTime> FVar16;
  FBatchedElements *this_00;
  FThreadSafeStaticStat<FStat_STAT_Canvas_TriMaterialItemTime> FVar17;
  FCanvasSortElement *pFVar18;
  FCanvasTriangleRendererItem *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated> FVar20;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FCanvasTriangleRendererItem *pFVar21;
  uint uVar22;
  FTransformEntry *pFVar23;
  FCanvasTriangleRendererItem *pFVar24;
  uint uVar25;
  FHitProxyId local_res18;
  longlong local_178;
  FName local_170;
  FCanvasTriangleRendererItem *local_168;
  FColor_u_0 local_160;
  FColor_u_0 local_15c;
  FName local_158;
  TVector2<float>_u_0 local_150;
  TVector2<float>_u_0 local_148;
  TVector2<float>_u_0 local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_118;
  TVector4<float>_u_0 local_108;
  TVector4<float>_u_0 local_f8;
  TVector4<float>_u_0 local_e8;
  FName local_d8;
  FStatMessage local_d0;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FDepthFieldGlowInfo local_a8;
  FDepthFieldGlowInfo local_70;
  
  pFVar24 = (FCanvasTriangleRendererItem *)0x0;
  uVar25 = 0;
  if (this->MaterialRenderProxy != (FMaterialRenderProxy *)0x0) {
    FVar17 = StatPtr_STAT_Canvas_TriMaterialItemTime;
    if (StatPtr_STAT_Canvas_TriMaterialItemTime ==
        (FThreadSafeStaticStat<FStat_STAT_Canvas_TriMaterialItemTime>)0x0) {
      pFVar15 = ::FName::FName(&local_b8,"STAT_Canvas_TriMaterialItemTime");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_Canvas_TriMaterialItemTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_TriMaterialItemTime,
                          *pFVar15,L"CanvasTriMaterialItem Time","STATGROUP_Canvas",
                          "STATCAT_Advanced",L"Canvas",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_170 = *(FName *)FVar17;
    bVar8 = false;
    bVar7 = false;
    local_118.ComparisonIndex.Value = 0;
    local_118.Number = 0;
    bVar10 = false;
    bVar9 = false;
    if ((local_170.ComparisonIndex.Value.Value == 0) && (local_170.Number == 0)) {
LAB_14892cb83:
      bVar8 = bVar10;
      bVar7 = bVar9;
      bVar9 = false;
      local_130 = local_118;
      local_170 = local_118;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_15c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_15c._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
        bVar8 = false;
        bVar7 = true;
        bVar10 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_138.ComparisonIndex.Value = local_170.ComparisonIndex.Value.Value;
          local_138.Number = local_170.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_138,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                     ,0x6c0);
          bVar8 = true;
          bVar7 = true;
          bVar10 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14892cb83;
      local_130 = local_170;
      FThreadStats::AddMessage(local_170,CycleScopeStart);
      bVar9 = true;
    }
    iVar12 = FCanvas::TopDepthSortKey(param_1);
    pFVar18 = FCanvas::GetSortElement(param_1,iVar12);
    iVar12 = (param_1->TransformStack).ArrayNum;
    uVar22 = iVar12 - 1;
    uVar11 = uVar25;
    if ((int)uVar22 < iVar12) {
      uVar11 = ~uVar22 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = (pFVar18->RenderBatchArray).ArrayNum;
    local_res18.Index = -1;
    pFVar23 = (FTransformEntry *)
              ((param_1->TransformStack).AllocatorInstance.Data +
              (longlong)((param_1->TransformStack).ArrayNum + -1) * 0x90);
    if (iVar12 < 1) {
LAB_14892ccb5:
      if (FThreadStats::bPrimaryEnable != false) {
        FVar20 = StatPtr_STAT_Canvas_NumBatchesCreated;
        if (StatPtr_STAT_Canvas_NumBatchesCreated ==
            (FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated>)0x0) {
          pFVar15 = ::FName::FName(&local_b0,"STAT_Canvas_NumBatchesCreated");
          FVar20 = (FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_NumBatchesCreated,
                              *pFVar15,L"Num Batches Created","STATGROUP_Canvas","STATCAT_Advanced",
                              L"Canvas",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar4 = *(FName *)FVar20;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_01 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_01 == (FThreadStats *)0x0) {
            this_02 = FThreadStatsPool::Get();
            this_01 = FThreadStatsPool::GetFromPool(this_02);
          }
          local_d0.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
          local_d0.StatData.Pad[0] = '\x01';
          local_d0.StatData.Pad[1] = '\0';
          local_d0.StatData.Pad[2] = '\0';
          local_d0.StatData.Pad[3] = '\0';
          local_d0.StatData.Pad[4] = '\0';
          local_d0.StatData.Pad[5] = '\0';
          local_d0.StatData.Pad[6] = '\0';
          local_d0.StatData.Pad[7] = '\0';
          local_d8 = FVar4;
          local_d0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_01,&local_d0);
          FStatsTrace::Add(&local_d8,1);
          if (this_01->ScopeCount == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
      pFVar21 = ::operator_new(0x20);
      pFVar19 = pFVar24;
      if (pFVar21 != (FCanvasTriangleRendererItem *)0x0) {
        pFVar19 = FCanvasTriangleRendererItem::FCanvasTriangleRendererItem
                            (pFVar21,param_1->FeatureLevel,this->MaterialRenderProxy,pFVar23,
                             SUB81(this->_padding_,0));
      }
      pFVar3 = (pFVar18->RenderBatchArray).AllocatorInstance.Data;
      local_168 = pFVar19;
      if (((pFVar3 <= (FScriptContainerElement *)&local_168) &&
          ((FScriptContainerElement *)&local_168 <
           pFVar3 + (longlong)(pFVar18->RenderBatchArray).ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (pFVar18->RenderBatchArray).ArrayNum;
      piVar1 = &(pFVar18->RenderBatchArray).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(pFVar18->RenderBatchArray).AllocatorInstance,piVar1);
      }
      (pFVar18->RenderBatchArray).ArrayNum = iVar12 + 1;
      *(FCanvasTriangleRendererItem **)
       ((pFVar18->RenderBatchArray).AllocatorInstance.Data + (longlong)iVar12 * 8) = local_168;
    }
    else {
      if ((int)(iVar12 - 1U) < iVar12) {
        uVar25 = ~(iVar12 - 1U) >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar19 = (FCanvasTriangleRendererItem *)
                (**(code **)(**(longlong **)
                               ((pFVar18->RenderBatchArray).AllocatorInstance.Data +
                               (longlong)(pFVar18->RenderBatchArray).ArrayNum * 8 + -8) + 0x28))();
      if ((pFVar19 == (FCanvasTriangleRendererItem *)0x0) ||
         (bVar10 = FCanvasTriangleRendererItem::IsMatch(pFVar19,this->MaterialRenderProxy,pFVar23),
         !bVar10)) goto LAB_14892ccb5;
    }
    pHVar2 = (param_1->CurrentHitProxy).Reference;
    if (pHVar2 != (HHitProxy *)0x0) {
      local_res18.Index = (pHVar2->Id).Index;
    }
    uVar25 = (this->TriangleList).ArrayNum;
    if (((pFVar19->Data).Object == (FRenderData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (pFVar19->Data).Object;
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
    if ((pFVar5->Triangles).ArrayMax < (int)uVar25) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x98,8,uVar25,&(pFVar5->Triangles).AllocatorInstance,(pFVar5->Triangles).ArrayNum,
                 &(pFVar5->Triangles).ArrayMax);
    }
    pFVar21 = pFVar24;
    if (0 < (int)uVar25) {
      do {
        uVar22 = (uint)pFVar24;
        uVar11 = 0;
        if ((int)uVar22 < (this->TriangleList).ArrayNum) {
          uVar11 = ~uVar22 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FCanvasTriangleRendererItem::AddTriangle
                  (pFVar19,(FCanvasUVTri *)
                           ((longlong)&pFVar21->_padding_ +
                           (longlong)(this->TriangleList).AllocatorInstance.Data),local_res18);
        pFVar24 = (FCanvasTriangleRendererItem *)(ulonglong)(uVar22 + 1);
        local_170 = local_130;
        pFVar21 = (FCanvasTriangleRendererItem *)&pFVar21[4].Data.SharedReferenceCount;
      } while ((int)(uVar22 + 1) < (int)uVar25);
    }
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto joined_r0x00014892d00f;
  }
  FVar16 = StatPtr_STAT_Canvas_TriTextureItemTime;
  if (StatPtr_STAT_Canvas_TriTextureItemTime ==
      (FThreadSafeStaticStat<FStat_STAT_Canvas_TriTextureItemTime>)0x0) {
    pFVar15 = ::FName::FName(&local_c0,"STAT_Canvas_TriTextureItemTime");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_Canvas_TriTextureItemTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_TriTextureItemTime,
                        *pFVar15,L"CanvasTriTextureItem Time","STATGROUP_Canvas","STATCAT_Advanced",
                        L"Canvas",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_170 = *(FName *)FVar16;
  bVar8 = false;
  bVar7 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((local_170.ComparisonIndex.Value.Value == 0) && (local_170.Number == 0)) {
LAB_14892c712:
    bVar8 = bVar10;
    bVar7 = bVar9;
    bVar9 = false;
    local_170 = local_128;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_160.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_160._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_158.ComparisonIndex.Value = local_170.ComparisonIndex.Value.Value;
        local_158.Number = local_170.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_158,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                   ,0x6a0);
        bVar8 = true;
        bVar7 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14892c712;
    FThreadStats::AddMessage(local_170,CycleScopeStart);
    bVar9 = true;
  }
  local_a8.bEnableGlow = 0;
  local_a8.GlowColor.field0_0x0._0_8_ = 0;
  local_a8.GlowColor.field0_0x0._8_8_ = 0;
  local_a8.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_a8.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_a8.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_a8.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  this_00 = FCanvas::GetBatchedElements
                      (param_1,ET_Triangle,this->BatchedElementParameters,this->Texture,
                       *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_a8,true);
  pHVar2 = (param_1->CurrentHitProxy).Reference;
  if (pHVar2 == (HHitProxy *)0x0) {
    local_res18.Index = -1;
  }
  else {
    local_res18.Index = (pHVar2->Id).Index;
  }
  iVar12 = (this->TriangleList).ArrayNum;
  local_178 = (longlong)iVar12;
  FBatchedElements::ReserveVertices(this_00,iVar12 * 3);
  if (this->BatchedElementParameters == (FBatchedElementParameters *)0x0) {
    FBatchedElements::ReserveTriangles
              (this_00,iVar12,this->Texture,
               *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4));
  }
  pFVar19 = pFVar24;
  if (0 < iVar12) {
    do {
      uVar22 = (uint)pFVar19;
      uVar11 = uVar25;
      if ((int)uVar22 < (this->TriangleList).ArrayNum) {
        uVar11 = ~uVar22 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->TriangleList).AllocatorInstance.Data;
      local_108._s_0.Z = 0.0;
      local_108._s_0.W = 1.0;
      local_150._s_0.X = (float)*(double *)(pFVar3 + 8 + (longlong)&(pFVar24->Data).Object);
      local_150._s_0.Y = (float)*(double *)(&pFVar24->bFreezeTime + (longlong)pFVar3);
      local_108._s_0.X = (float)*(double *)((longlong)&pFVar24->_padding_ + (longlong)pFVar3);
      local_108._s_0.Y = (float)*(double *)(pFVar3 + (longlong)&(pFVar24->Data).Object);
      iVar12 = FBatchedElements::AddVertexf
                         (this_00,(TVector4<float> *)&local_108._s_0,
                          (TVector2<float> *)&local_150._s_0,
                          (FLinearColor *)((longlong)&pFVar24[1]._padding_ + (longlong)pFVar3),
                          local_res18);
      local_148._s_0.X = (float)*(double *)((longlong)&pFVar24[2]._padding_ + (longlong)pFVar3);
      local_f8._s_0.Z = 0.0;
      local_f8._s_0.W = 1.0;
      local_148._s_0.Y = (float)*(double *)(pFVar3 + (longlong)&pFVar24[2].Data.Object);
      local_f8._s_0.X = (float)*(double *)(pFVar3 + 8 + (longlong)&pFVar24[1].Data.Object);
      local_f8._s_0.Y = (float)*(double *)(&pFVar24[1].bFreezeTime + (longlong)pFVar3);
      iVar13 = FBatchedElements::AddVertexf
                         (this_00,(TVector4<float> *)&local_f8._s_0,
                          (TVector2<float> *)&local_148._s_0,
                          (FLinearColor *)(pFVar3 + 8 + (longlong)&pFVar24[2].Data.Object),
                          local_res18);
      local_140._s_0.X = (float)*(double *)(pFVar3 + 8 + (longlong)&pFVar24[3].Data.Object);
      local_e8._s_0.Z = 0.0;
      local_e8._s_0.W = 1.0;
      local_140._s_0.Y = (float)*(double *)(&pFVar24[3].bFreezeTime + (longlong)pFVar3);
      local_e8._s_0.X = (float)*(double *)((longlong)&pFVar24[3]._padding_ + (longlong)pFVar3);
      local_e8._s_0.Y = (float)*(double *)(pFVar3 + (longlong)&pFVar24[3].Data.Object);
      iVar14 = FBatchedElements::AddVertexf
                         (this_00,(TVector4<float> *)&local_e8._s_0,
                          (TVector2<float> *)&local_140._s_0,
                          (FLinearColor *)((longlong)&pFVar24[4]._padding_ + (longlong)pFVar3),
                          local_res18);
      if (this->BatchedElementParameters == (FBatchedElementParameters *)0x0) {
        if ((this->Texture == (FTexture *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Texture",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                                ,0x6b9,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_70.bEnableGlow = 0;
        local_70.GlowColor.field0_0x0._0_8_ = 0;
        local_70.GlowColor.field0_0x0._8_8_ = 0;
        local_70.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
        local_70.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
        local_70.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
        local_70.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
        FBatchedElements::AddTriangle
                  (this_00,iVar12,iVar13,iVar14,this->Texture,
                   *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_70);
      }
      else {
        FBatchedElements::AddTriangle
                  (this_00,iVar12,iVar13,iVar14,this->BatchedElementParameters,
                   *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4));
      }
      pFVar24 = (FCanvasTriangleRendererItem *)&pFVar24[4].Data.SharedReferenceCount;
      local_178 = local_178 + -1;
      pFVar19 = (FCanvasTriangleRendererItem *)(ulonglong)(uVar22 + 1);
    } while (local_178 != 0);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
joined_r0x00014892d00f:
  if (bVar9) {
    FThreadStats::AddMessage(local_170,CycleScopeEnd);
  }
  return;
}

// SetColor @ 14897e700

void __thiscall FCanvasTriangleItem::SetColor(FCanvasTriangleItem *this,FLinearColor *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar9 = 0;
  if (0 < (this->TriangleList).ArrayNum) {
    lVar10 = 0;
    do {
      fVar3 = (param_1->field0_0x0)._s_0.R;
      fVar4 = (param_1->field0_0x0)._s_0.G;
      fVar5 = (param_1->field0_0x0)._s_0.B;
      fVar6 = (param_1->field0_0x0)._s_0.A;
      uVar11 = ~uVar9 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar9 < (this->TriangleList).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->TriangleList).AllocatorInstance.Data + lVar10 + 0x20;
      *(float *)pFVar1 = fVar3;
      *(float *)(pFVar1 + 4) = fVar4;
      *(float *)(pFVar1 + 8) = fVar5;
      *(float *)(pFVar1 + 0xc) = fVar6;
      fVar3 = (param_1->field0_0x0)._s_0.R;
      fVar4 = (param_1->field0_0x0)._s_0.G;
      fVar5 = (param_1->field0_0x0)._s_0.B;
      fVar6 = (param_1->field0_0x0)._s_0.A;
      uVar8 = 0;
      if ((int)uVar9 < (this->TriangleList).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->TriangleList).AllocatorInstance.Data + lVar10 + 0x50;
      *(float *)pFVar1 = fVar3;
      *(float *)(pFVar1 + 4) = fVar4;
      *(float *)(pFVar1 + 8) = fVar5;
      *(float *)(pFVar1 + 0xc) = fVar6;
      fVar3 = (param_1->field0_0x0)._s_0.R;
      fVar4 = (param_1->field0_0x0)._s_0.G;
      fVar5 = (param_1->field0_0x0)._s_0.B;
      fVar6 = (param_1->field0_0x0)._s_0.A;
      uVar8 = 0;
      if ((int)uVar9 < (this->TriangleList).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = uVar9 + 1;
      pFVar1 = (this->TriangleList).AllocatorInstance.Data + lVar10 + 0x80;
      *(float *)pFVar1 = fVar3;
      *(float *)(pFVar1 + 4) = fVar4;
      *(float *)(pFVar1 + 8) = fVar5;
      *(float *)(pFVar1 + 0xc) = fVar6;
      lVar10 = lVar10 + 0x90;
    } while ((int)uVar9 < (this->TriangleList).ArrayNum);
  }
  return;
}

