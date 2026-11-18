// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 44

// AddBorderElement<1> @ 1424c75f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddBorderElement<1>(FSlateElementBatcher *this,FSlateBoxElement *param_1)

{
  ESlateDrawEffect EVar1;
  schar sVar2;
  TVector2<float>_u_0 TVar3;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  TVector2<float> TVar8;
  TVector2<float> TVar9;
  TVector2<float> TVar10;
  TVector2<float> TVar11;
  TVector2<float> TVar12;
  TVector2<float> TVar13;
  TVector2<float> TVar14;
  TVector2<float> TVar15;
  TVector2<float> TVar16;
  TVector2<float> TVar17;
  TVector2<float> TVar18;
  TVector2<float> TVar19;
  TVector2<float> TVar20;
  TVector2<float> TVar21;
  TVector2<float> TVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [4];
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  longlong lVar30;
  ESlatePostRT EVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  FSlateRenderBatch *this_00;
  FSlateClippingState *pFVar35;
  FSlateVertex *pFVar36;
  float *pfVar37;
  FSlateShaderResource *pFVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  undefined1 local_1a8 [4];
  undefined1 auStack_1a4 [8];
  float fStack_19c;
  undefined8 local_198;
  undefined1 local_188 [12];
  float fStack_17c;
  float afStack_178 [2];
  float fStack_170;
  float fStack_16c;
  TVector4<float>_u_0 local_168;
  float local_158;
  FLinearColor_u_0 local_148;
  float local_138;
  float local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8 [16];
  
  TVar3 = (TVector2<float>_u_0)param_1->_padding_;
  uVar33 = 1;
  local_res8 = *(float *)((longlong)&param_1->_padding_ + 4);
  EVar1 = *(ESlateDrawEffect *)((longlong)&param_1->_padding_ + 3);
  iVar34 = (int)param_1->_padding_;
  pFVar38 = (FSlateShaderResource *)0x0;
  uVar32 = 1;
  local_120 = TVar3;
  if ((param_1->ResourceProxy != (FSlateShaderResourceProxy *)0x0) &&
     (pFVar38 = param_1->ResourceProxy->Resource, uVar32 = 1, pFVar38 != (FSlateShaderResource *)0x0
     )) {
    uVar32 = (**(code **)pFVar38->_padding_)(pFVar38);
    uVar33 = (**(code **)(pFVar38->_padding_ + 8))(pFVar38);
  }
  fVar24 = __real_3f000000;
  fVar23 = __real_3f800000;
  auVar44 = ZEXT416((uint)__real_3f800000);
  fVar43 = __real_3f800000 / *(float *)((longlong)&param_1->_padding_ + 4);
  fVar50 = this->PixelCenterOffset / (float)uVar32;
  local_res18 = this->PixelCenterOffset / (float)uVar33;
  local_158 = fVar43 * (float)uVar33;
  local_138 = fVar50 + __real_3f800000;
  fVar43 = fVar43 * (float)uVar32;
  local_res20 = local_res18 + __real_3f800000;
  local_110._0_4_ = (param_1->Margin).Left;
  local_110._4_4_ = (uint)(param_1->Margin).Top;
  uStack_108._0_4_ = (param_1->Margin).Right;
  uStack_108._4_4_ = (param_1->Margin).Bottom;
  local_118._0_4_ = TVar3._s_0.X;
  fVar27 = (float)local_118;
  local_118._4_4_ = TVar3._s_0.Y;
  fVar28 = local_118._4_4_;
  fVar47 = (float)local_110;
  if ((float)local_118 < 0.0) {
    fVar47 = (float)((uint)(float)local_110 ^ __xmm_80000000800000008000000080000000);
  }
  fVar45 = (float)local_110._4_4_;
  if (local_118._4_4_ < 0.0) {
    fVar45 = (float)(local_110._4_4_ ^ __xmm_80000000800000008000000080000000);
  }
  fVar42 = (float)(undefined4)uStack_108;
  if ((float)local_118 < 0.0) {
    fVar42 = (float)((undefined4)uStack_108 ^ __xmm_80000000800000008000000080000000);
  }
  fVar41 = (float)uStack_108._4_4_;
  if (local_118._4_4_ < 0.0) {
    fVar41 = (float)(uStack_108._4_4_ ^ __xmm_80000000800000008000000080000000);
  }
  fVar52 = (float)local_120 - fVar43 * fVar42;
  fVar49 = fVar43 * fVar47;
  fVar51 = local_120._4_4_ - local_158 * fVar41;
  fVar48 = local_158 * fVar45;
  if ((float)((uint)fVar52 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)((uint)fVar49 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar49 = (float)local_120 * __real_3f000000;
    fVar52 = fVar49;
  }
  if ((float)((uint)fVar51 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)((uint)fVar48 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar48 = local_120._4_4_ * __real_3f000000;
    fVar51 = fVar48;
  }
  local_118 = CONCAT44(local_118._4_4_,fVar51);
  local_188._0_4_ = (float)((uint)fVar47 & __xmm_7fffffff7fffffff7fffffff7fffffff) + fVar50;
  _local_1a8 = (TVector4<float>_u_0)ZEXT416((uint)local_188._0_4_);
  local_188._8_4_ = (float)((uint)fVar45 & __xmm_7fffffff7fffffff7fffffff7fffffff) + local_res18;
  local_f8 = ZEXT416((uint)local_188._8_4_);
  fStack_17c = (__real_3f800000 - (float)((uint)fVar41 & __xmm_7fffffff7fffffff7fffffff7fffffff)) +
               local_res18;
  local_120 = (TVector2<float>_u_0)CONCAT44(local_120._4_4_,fStack_17c);
  local_188._4_4_ =
       (__real_3f800000 - (float)((uint)fVar42 & __xmm_7fffffff7fffffff7fffffff7fffffff)) + fVar50;
  fVar43 = (__real_3f800000 - (fVar42 + fVar47)) * fVar43;
  fVar47 = __real_3f800000;
  if (__real_322bcc77 < (float)((uint)fVar43 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar47 = (fVar52 - fVar49) / fVar43;
  }
  fVar42 = (__real_3f800000 - (fVar41 + fVar45)) * local_158;
  fVar43 = __real_3f800000;
  if (__real_322bcc77 < (float)((uint)fVar42 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar43 = (fVar51 - fVar48) / fVar42;
  }
  local_148._s_0.R = (float)*(undefined4 *)&param_1->_padding_;
  local_148._s_0.G = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar42 = *(float *)&param_1->_padding_;
  fVar41 = *(float *)((longlong)&param_1->_padding_ + 4);
  local_148._8_8_ = param_1->_padding_;
  afStack_178[0] = (float)___xmm_3f800000000000000000000000000000;
  afStack_178[1] = (float)_UNK_150689644;
  _fStack_170 = _UNK_150689648;
  local_168._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_168._8_8_ = _UNK_150689648;
  local_128 = (float)local_188._4_4_;
  if (this->bSRGBVertexColor == false) {
    auVar46._4_4_ = fVar42;
    auVar46._0_4_ = fVar42;
    auVar46._8_4_ = fVar42;
    auVar46._12_4_ = fVar42;
    if (fVar42 <= 0.0) {
      auVar5._12_4_ = 0;
      auVar5._0_12_ = auVar46._4_12_;
      auVar46 = auVar5 << 0x20;
    }
    if (__real_3f800000 <= auVar46._0_4_) {
      auVar46._0_4_ = __real_3f800000;
    }
    auVar39._4_4_ = local_148._s_0.G;
    auVar39._0_4_ = local_148._s_0.G;
    auVar39._8_4_ = local_148._s_0.G;
    auVar39._12_4_ = local_148._s_0.G;
    if (local_148._s_0.G <= 0.0) {
      auVar6._12_4_ = 0;
      auVar6._0_12_ = auVar39._4_12_;
      auVar39 = auVar6 << 0x20;
    }
    if (__real_3f800000 <= auVar39._0_4_) {
      auVar39._0_4_ = __real_3f800000;
    }
    auVar40._4_4_ = fVar41;
    auVar40._0_4_ = fVar41;
    auVar40._8_4_ = fVar41;
    auVar40._12_4_ = fVar41;
    fVar42 = local_148._s_0.R;
    if (local_148._s_0.R <= 0.0) {
      fVar42 = 0.0;
    }
    local_res10._s_0.G = (char)(int)(auVar39._0_4_ * __real_437f0000 + __real_3f000000);
    local_res10._s_0.B = (char)(int)(auVar46._0_4_ * __real_437f0000 + __real_3f000000);
    if (fVar41 <= 0.0) {
      auVar7._12_4_ = 0;
      auVar7._0_12_ = auVar40._4_12_;
      auVar40 = auVar7 << 0x20;
    }
    if (__real_3f800000 <= fVar42) {
      fVar42 = __real_3f800000;
    }
    if (__real_3f800000 <= auVar40._0_4_) {
      auVar40._0_4_ = __real_3f800000;
    }
    local_res10._s_0.R = (char)(int)(fVar42 * __real_437f0000 + __real_3f000000);
    local_res10._s_0.A = (char)(int)(auVar40._0_4_ * __real_437f0000 + __real_3f000000);
  }
  else {
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_148._s_0);
  }
  sVar2 = *(schar *)((longlong)&param_1->_padding_ + 2);
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    this_00 = FSlateBatchData::AddRenderBatch
                        (this->BatchData,iVar34,(FShaderParams *)local_188,pFVar38,TriangleList,
                         Border,EVar1,TileV|TileU,sVar2);
  }
  else {
    this_00 = FSlateCachedElementList::AddRenderBatch
                        (this->CurrentCachedElementList,iVar34,(FShaderParams *)local_188,pFVar38,
                         TriangleList,Border,EVar1,TileV|TileU,sVar2);
  }
  pFVar35 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
  this_00->ClippingState = pFVar35;
  if (pFVar38 != (FSlateShaderResource *)0x0) {
    EVar31 = (**(code **)(pFVar38->_padding_ + 0x20))(pFVar38);
    this_00->CachedUsedPostBuffers = EVar31;
    this->UsedSlatePostBuffers = this->UsedSlatePostBuffers | EVar31;
  }
  local_158 = fVar47;
  if (fVar47 <= fVar23) {
    local_158 = fVar23;
  }
  pTVar4 = this_00->SourceVertices;
  if (fVar43 <= fVar23) {
    fVar43 = fVar23;
  }
  stack0xfffffffffffffe80 = 0;
  afStack_178[0] = 0.0;
  afStack_178[1] = 0.0;
  local_168._s_0.Y = (float)0;
  local_168._s_0.X = (float)local_res10.Bits;
  auVar46 = roundps(ZEXT416((uint)fVar45),ZEXT416((uint)(*(float *)&param_1->_padding_ + fVar24)),1)
  ;
  auVar44 = roundps(auVar44,ZEXT416((uint)(*(float *)((longlong)&param_1->_padding_ + 4) + fVar24)),
                    1);
  local_168._10_2_ = (short)((int)ROUND(fVar28 * local_res8 + fVar28 * local_res8 + fVar24) >> 1);
  local_168._8_2_ = (short)((int)ROUND(fVar27 * local_res8 + fVar27 * local_res8 + fVar24) >> 1);
  local_198 = TVar3;
  local_110 = TVar3;
  iVar34 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  fVar23 = local_res18;
  uVar26 = local_188._8_4_;
  fVar47 = fStack_17c;
  fVar45 = afStack_178[0];
  fVar42 = afStack_178[1];
  fStack_16c = auVar44._0_4_;
  fStack_170 = auVar46._0_4_;
  afStack_178 = (float  [2])((ulonglong)(uint)afStack_178[1] << 0x20);
  local_188._4_4_ = local_res18;
  stack0xfffffffffffffe80 = 0;
  pfVar37 = (float *)((longlong)iVar34 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar37 = fVar50;
  pfVar37[1] = local_res18;
  pfVar37[2] = (float)uVar26;
  pfVar37[3] = fVar47;
  pfVar37[4] = fVar45;
  pfVar37[5] = fVar42;
  pfVar37[6] = auVar46._0_4_;
  pfVar37[7] = auVar44._0_4_;
  *(undefined8 *)(pfVar37 + 8) = local_168._0_8_;
  pfVar37[10] = local_168._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  auVar46 = roundps(auVar46,ZEXT416((uint)(fVar48 * *(float *)&param_1->_padding_ +
                                           *(float *)&param_1->_padding_ + fVar24)),1);
  auVar44 = roundps(auVar44,ZEXT416((uint)(fVar48 * *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) + fVar24)),
                    1);
  pTVar4 = this_00->SourceVertices;
  local_168._s_0.Y = (float)0;
  local_168._0_4_ = local_res10.Bits;
  local_168._10_2_ = (short)((int)ROUND(fVar28 * local_res8 + fVar28 * local_res8 + fVar24) >> 1);
  local_168._8_2_ = (short)((int)ROUND(fVar27 * local_res8 + fVar27 * local_res8 + fVar24) >> 1);
  local_198 = TVar3;
  local_188._0_4_ = fVar50;
  iVar34 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  fVar47 = afStack_178[0];
  fStack_16c = auVar44._0_4_;
  fStack_170 = auVar46._0_4_;
  afStack_178 = (float  [2])((ulonglong)afStack_178 & 0xffffffff);
  pfVar37 = (float *)((longlong)iVar34 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar37 = fVar50;
  pfVar37[1] = (float)local_f8._0_4_;
  pfVar37[2] = (float)local_188._8_4_;
  pfVar37[3] = fStack_17c;
  pfVar37[4] = fVar47;
  pfVar37[5] = fVar48 / fVar28;
  pfVar37[6] = auVar46._0_4_;
  pfVar37[7] = auVar44._0_4_;
  local_188._4_4_ = local_f8._0_4_;
  stack0xfffffffffffffe80 = 0;
  *(undefined8 *)(pfVar37 + 8) = local_168._0_8_;
  pfVar37[10] = local_168._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  local_168._s_0.Y = (float)0;
  local_168._0_4_ = local_res10.Bits;
  auVar46 = roundps(auVar46,ZEXT416((uint)(fVar49 * *(float *)&param_1->_padding_ +
                                           *(float *)&param_1->_padding_ + fVar24)),1);
  auVar44 = roundps(auVar44,ZEXT416((uint)(fVar49 * *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) + fVar24)),
                    1);
  pTVar4 = this_00->SourceVertices;
  local_168._10_2_ = (short)((int)ROUND(fVar28 * local_res8 + fVar28 * local_res8 + fVar24) >> 1);
  local_168._8_2_ = (short)((int)ROUND(fVar27 * local_res8 + fVar27 * local_res8 + fVar24) >> 1);
  local_198 = TVar3;
  local_188._0_4_ = fVar50;
  iVar34 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  uVar26 = local_188._8_4_;
  fVar47 = fStack_17c;
  local_188._0_4_ = local_1a8;
  local_188._4_4_ = fVar23;
  stack0xfffffffffffffe80 = 0;
  afStack_178[0] = fVar49 / fVar27;
  fStack_16c = auVar44._0_4_;
  fStack_170 = auVar46._0_4_;
  pfVar37 = (float *)((longlong)iVar34 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar37 = (float)local_1a8;
  pfVar37[1] = fVar23;
  pfVar37[2] = (float)uVar26;
  pfVar37[3] = fVar47;
  pfVar37[4] = fVar49 / fVar27;
  pfVar37[5] = afStack_178[1];
  pfVar37[6] = auVar46._0_4_;
  pfVar37[7] = auVar44._0_4_;
  *(undefined8 *)(pfVar37 + 8) = local_168._0_8_;
  pfVar37[10] = local_168._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar4 = this_00->SourceVertices;
  local_168._s_0.Y = (float)0;
  local_168._0_4_ = local_res10.Bits;
  auVar46 = roundps(auVar46,ZEXT416((uint)(fVar48 * *(float *)&param_1->_padding_ +
                                           fVar49 * *(float *)&param_1->_padding_ +
                                          *(float *)&param_1->_padding_ + fVar24)),1);
  auVar44 = roundps(auVar44,ZEXT416((uint)(fVar49 * *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) +
                                          fVar48 * *(float *)((longlong)&param_1->_padding_ + 4) +
                                          fVar24)),1);
  local_168._10_2_ = (short)((int)ROUND(fVar28 * local_res8 + fVar28 * local_res8 + fVar24) >> 1);
  local_168._8_2_ = (short)((int)ROUND(fVar27 * local_res8 + fVar27 * local_res8 + fVar24) >> 1);
  local_198 = TVar3;
  iVar34 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  local_188._0_4_ = local_1a8;
  local_188._4_4_ = local_f8._0_4_;
  pfVar37 = (float *)((longlong)iVar34 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar37 = (float)local_1a8;
  pfVar37[1] = (float)local_f8._0_4_;
  pfVar37[2] = (float)local_188._8_4_;
  pfVar37[3] = fStack_17c;
  stack0xfffffffffffffe80 = stack0xfffffffffffffe80 & 0xffffffff;
  pfVar37[4] = fVar49 / fVar27;
  pfVar37[5] = fVar48 / fVar28;
  pfVar37[6] = auVar46._0_4_;
  pfVar37[7] = auVar44._0_4_;
  *(undefined8 *)(pfVar37 + 8) = local_168._0_8_;
  pfVar37[10] = local_168._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar4 = this_00->SourceVertices;
  local_168._s_0.Y = (float)0;
  local_168._0_4_ = local_res10.Bits;
  fStack_16c = auVar44._0_4_;
  fStack_170 = auVar46._0_4_;
  afStack_178[1] = 0.0;
  afStack_178[0] = fVar49 / fVar27;
  auVar46 = roundps(auVar46,ZEXT416((uint)(fVar49 * *(float *)&param_1->_padding_ +
                                           *(float *)&param_1->_padding_ + fVar24)),1);
  auVar44 = roundps(auVar44,ZEXT416((uint)(fVar49 * *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) + fVar24)),
                    1);
  local_168._10_2_ = (short)((int)ROUND(fVar28 * local_res8 + fVar28 * local_res8 + fVar24) >> 1);
  local_168._8_2_ = (short)((int)ROUND(fVar27 * local_res8 + fVar27 * local_res8 + fVar24) >> 1);
  local_198 = TVar3;
  iVar34 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  pfVar37 = (float *)((longlong)iVar34 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar37 = fVar50;
  pfVar37[1] = local_res18;
  pfVar37[2] = local_158;
  pfVar37[3] = fStack_17c;
  pfVar37[4] = fVar49 / fVar27;
  pfVar37[5] = afStack_178[1];
  pfVar37[6] = auVar46._0_4_;
  pfVar37[7] = auVar44._0_4_;
  local_188._4_4_ = local_res18;
  fStack_17c = 0.0;
  local_188._8_4_ = local_158;
  *(undefined8 *)(pfVar37 + 8) = local_168._0_8_;
  pfVar37[10] = local_168._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar4 = this_00->SourceVertices;
  afStack_178[0] = fVar49 / fVar27;
  fStack_16c = auVar44._0_4_;
  fStack_170 = auVar46._0_4_;
  local_168._s_0.Y = (float)0;
  local_168._0_4_ = local_res10.Bits;
  auVar46 = roundps(auVar46,ZEXT416((uint)(fVar48 * *(float *)&param_1->_padding_ +
                                           fVar49 * *(float *)&param_1->_padding_ +
                                          *(float *)&param_1->_padding_ + fVar24)),1);
  auVar44 = roundps(auVar44,ZEXT416((uint)(fVar49 * *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) +
                                          fVar48 * *(float *)((longlong)&param_1->_padding_ + 4) +
                                          fVar24)),1);
  local_168._10_2_ = (short)((int)ROUND(fVar28 * local_res8 + fVar28 * local_res8 + fVar24) >> 1);
  local_168._8_2_ = (short)((int)ROUND(fVar27 * local_res8 + fVar27 * local_res8 + fVar24) >> 1);
  local_198 = TVar3;
  local_188._0_4_ = fVar50;
  iVar34 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  pfVar37 = (float *)((longlong)iVar34 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar37 = fVar50;
  pfVar37[1] = (float)local_f8._0_4_;
  pfVar37[2] = local_158;
  pfVar37[3] = fStack_17c;
  pfVar37[4] = fVar49 / fVar27;
  pfVar37[5] = fVar48 / fVar28;
  pfVar37[6] = auVar46._0_4_;
  pfVar37[7] = auVar44._0_4_;
  local_188._4_4_ = local_f8._0_4_;
  fStack_17c = 0.0;
  local_188._8_4_ = local_158;
  *(undefined8 *)(pfVar37 + 8) = local_168._0_8_;
  pfVar37[10] = local_168._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar4 = this_00->SourceVertices;
  local_168._s_0.Y = (float)0;
  local_168._0_4_ = local_res10.Bits;
  fStack_16c = auVar44._0_4_;
  fStack_170 = auVar46._0_4_;
  afStack_178[1] = 0.0;
  afStack_178[0] = fVar49 / fVar27;
  auVar46 = roundps(auVar46,ZEXT416((uint)(fVar52 * *(float *)&param_1->_padding_ +
                                           *(float *)&param_1->_padding_ + fVar24)),1);
  auVar44 = roundps(auVar44,ZEXT416((uint)(fVar52 * *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) + fVar24)),
                    1);
  local_168._10_2_ = (short)((int)ROUND(fVar28 * local_res8 + fVar28 * local_res8 + fVar24) >> 1);
  local_168._8_2_ = (short)((int)ROUND(fVar27 * local_res8 + fVar27 * local_res8 + fVar24) >> 1);
  local_198 = TVar3;
  local_188._0_4_ = fVar50;
  iVar34 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  local_188._0_4_ = local_138;
  local_188._4_4_ = local_res18;
  pfVar37 = (float *)((longlong)iVar34 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar37 = local_138;
  pfVar37[1] = local_res18;
  pfVar37[2] = local_158;
  pfVar37[3] = fStack_17c;
  pfVar37[4] = fVar52 / fVar27;
  pfVar37[5] = afStack_178[1];
  pfVar37[6] = auVar46._0_4_;
  pfVar37[7] = auVar44._0_4_;
  *(undefined8 *)(pfVar37 + 8) = local_168._0_8_;
  pfVar37[10] = local_168._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar4 = this_00->SourceVertices;
  afStack_178[0] = fVar52 / fVar27;
  fStack_16c = auVar44._0_4_;
  fStack_170 = auVar46._0_4_;
  fStack_17c = 0.0;
  local_188._8_4_ = local_158;
  local_168._s_0.Y = (float)0;
  local_168._0_1_ = local_res10._s_0.B;
  local_168._1_1_ = local_res10._s_0.G;
  local_168._2_1_ = local_res10._s_0.R;
  local_168._3_1_ = local_res10._s_0.A;
  auVar46 = roundps(auVar46,ZEXT416((uint)(fVar48 * *(float *)&param_1->_padding_ +
                                           fVar52 * *(float *)&param_1->_padding_ +
                                          *(float *)&param_1->_padding_ + fVar24)),1);
  auVar44 = roundps(auVar44,ZEXT416((uint)(fVar52 * *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) +
                                          fVar48 * *(float *)((longlong)&param_1->_padding_ + 4) +
                                          fVar24)),1);
  local_168._10_2_ = (short)((int)ROUND(fVar28 * local_res8 + fVar28 * local_res8 + fVar24) >> 1);
  local_168._8_2_ = (short)((int)ROUND(fVar27 * local_res8 + fVar27 * local_res8 + fVar24) >> 1);
  local_198 = TVar3;
  iVar34 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  fVar47 = local_res18;
  fVar23 = local_res8;
  pfVar37 = (float *)((longlong)iVar34 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar37 = local_138;
  pfVar37[1] = (float)local_f8._0_4_;
  pfVar37[2] = local_158;
  pfVar37[3] = fStack_17c;
  pfVar37[4] = fVar52 / fVar27;
  pfVar37[5] = fVar48 / fVar28;
  pfVar37[6] = auVar46._0_4_;
  pfVar37[7] = auVar44._0_4_;
  *(undefined8 *)(pfVar37 + 8) = local_168._0_8_;
  pfVar37[10] = local_168._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  local_188._0_4_ = local_128;
  stack0xfffffffffffffe80 = 0;
  local_168._s_0.Y = (float)0;
  local_168._0_1_ = local_res10._s_0.B;
  local_168._1_1_ = local_res10._s_0.G;
  local_168._2_1_ = local_res10._s_0.R;
  local_168._3_1_ = local_res10._s_0.A;
  afStack_178[1] = 0.0;
  afStack_178[0] = fVar52 / fVar27;
  local_188._4_4_ = local_res18;
  auVar44 = roundps(ZEXT416((uint)(fVar52 / fVar27)),
                    ZEXT416((uint)(fVar52 * *(float *)&param_1->_padding_ +
                                   *(float *)&param_1->_padding_ + fVar24)),1);
  auVar46 = roundps(auVar44,ZEXT416((uint)(fVar52 * *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) + fVar24)),
                    1);
  fStack_16c = (float)auVar46._0_4_;
  fStack_170 = (float)auVar44._0_4_;
  local_168._10_2_ = (short)((int)ROUND(fVar28 * local_res8 + fVar28 * local_res8 + fVar24) >> 1);
  local_168._8_2_ = (short)((int)ROUND(fVar27 * local_res8 + fVar27 * local_res8 + fVar24) >> 1);
  local_198 = TVar3;
  FSlateRenderBatch::AddVertex(this_00,(FSlateVertex *)local_188);
  fVar45 = local_128;
  uVar26 = local_f8._0_4_;
  local_198._4_4_ = fVar48;
  local_198._0_4_ = fVar52;
  local_148._0_4_ = local_128;
  local_148._s_0.G = (float)local_f8._0_4_;
  local_148._8_8_ = 0;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,
                       (TVector2<float>)local_198,(TVector2<float>)TVar3,fVar23,
                       (TVector4<float> *)&local_148._s_0,(FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  fVar24 = local_138;
  fVar23 = local_res8;
  fVar42 = (float)local_110;
  local_148._s_0.R = local_138;
  local_148._s_0.G = fVar47;
  local_198 = local_110 & 0xffffffff;
  local_148._8_8_ = 0;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,
                       (TVector2<float>)local_198,(TVector2<float>)TVar3,local_res8,
                       (TVector4<float> *)&local_148._s_0,(FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  local_198._0_4_ = fVar42;
  local_148._s_0.R = fVar24;
  local_148._s_0.G = (float)uVar26;
  local_148._8_8_ = 0;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,
                       (TVector2<float>)local_198,(TVector2<float>)TVar3,fVar23,
                       (TVector4<float> *)&local_148._s_0,(FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  fVar24 = local_res18;
  local_198 = (TVector2<float>_u_0)((ulonglong)(uint)fVar48 << 0x20);
  local_148._s_0.G = local_res18;
  local_148._8_8_ = (ulonglong)(uint)fVar43 << 0x20;
  local_148._s_0.R = fVar50;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,
                       (TVector2<float>)local_198,(TVector2<float>)TVar3,fVar23,
                       (TVector4<float> *)&local_148._s_0,(FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  lVar30 = local_118;
  uVar29 = (float)local_118;
  local_148._s_0.G = local_res20;
  fStackX_1c = (float)local_118;
  local_res18 = 0.0;
  local_148._8_8_ = (ulonglong)(uint)fVar43 << 0x20;
  local_148._s_0.R = fVar50;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,
                       (TVector2<float>)(local_118 << 0x20),(TVector2<float>)TVar3,local_res8,
                       (TVector4<float> *)&local_148._s_0,(FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  auVar25 = local_1a8;
  auStack_1a4._0_4_ = fVar24;
  auStack_1a4._4_4_ = 0;
  TVar13.field0_0x0._s_0.Y = fVar48;
  TVar13.field0_0x0._s_0.X = fVar49;
  fStack_19c = fVar43;
  local_res18 = fVar49;
  fStackX_1c = fVar48;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar13,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  auStack_1a4._0_4_ = local_res20;
  fStackX_1c = (float)uVar29;
  TVar14.field0_0x0._4_4_ = uVar29;
  TVar14.field0_0x0._s_0.X = fVar49;
  _local_1a8 = (TVector4<float>_u_0)CONCAT124(_auStack_1a4,auVar25);
  auStack_1a4._4_4_ = 0;
  local_res18 = fVar49;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar14,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  TVar15.field0_0x0._s_0.Y = fVar48;
  TVar15.field0_0x0._s_0.X = fVar52;
  auStack_1a4._0_4_ = fVar24;
  local_1a8 = (undefined1  [4])fVar45;
  auStack_1a4._4_4_ = 0;
  local_res18 = fVar52;
  fStackX_1c = fVar48;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar15,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  auStack_1a4._0_4_ = local_res20;
  fStackX_1c = (float)uVar29;
  TVar16.field0_0x0._4_4_ = uVar29;
  TVar16.field0_0x0._s_0.X = fVar52;
  auStack_1a4._4_4_ = 0;
  local_res18 = fVar52;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar16,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  fVar27 = local_138;
  fVar23 = local_res8;
  local_res18 = fVar42;
  TVar17.field0_0x0._s_0.Y = fVar48;
  TVar17.field0_0x0._0_4_ = fVar42;
  auStack_1a4._0_4_ = fVar24;
  local_1a8 = (undefined1  [4])local_138;
  auStack_1a4._4_4_ = 0;
  fStackX_1c = fVar48;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar17,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  local_res18 = fVar42;
  fStackX_1c = (float)uVar29;
  TVar18.field0_0x0._4_4_ = uVar29;
  TVar18.field0_0x0._0_4_ = fVar42;
  auStack_1a4._0_4_ = local_res20;
  local_1a8 = (undefined1  [4])fVar27;
  auStack_1a4._4_4_ = 0;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar18,
                       (TVector2<float>)TVar3,fVar23,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  uVar26 = (float)local_120;
  fStackX_1c = (float)uVar29;
  local_res18 = 0.0;
  auStack_1a4._0_4_ = (float)local_120;
  local_1a8 = (undefined1  [4])fVar50;
  stack0xfffffffffffffe60 = 0;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,
                       (TVector2<float>)(lVar30 << 0x20),(TVector2<float>)TVar3,fVar23,
                       (TVector4<float> *)local_1a8,(FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  fVar24 = local_res20;
  uVar32 = local_110._4_4_;
  fStackX_1c = (float)local_110._4_4_;
  local_res18 = 0.0;
  auStack_1a4._0_4_ = local_res20;
  stack0xfffffffffffffe60 = 0;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,
                       (TVector2<float>)((ulonglong)local_110._4_4_ << 0x20),(TVector2<float>)TVar3,
                       local_res8,(TVector4<float> *)local_1a8,(FColor)local_res10._s_0,(FColor)0x0)
  ;
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  fStackX_1c = (float)uVar29;
  TVar19.field0_0x0._4_4_ = uVar29;
  TVar19.field0_0x0._s_0.X = fVar49;
  auStack_1a4._0_4_ = uVar26;
  _local_1a8 = CONCAT44(auStack_1a4._0_4_,auVar25);
  stack0xfffffffffffffe60 = 0;
  local_res18 = fVar49;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar19,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  fStackX_1c = (float)uVar32;
  TVar20.field0_0x0._4_4_ = uVar32;
  TVar20.field0_0x0._s_0.X = fVar49;
  auStack_1a4._0_4_ = fVar24;
  _local_1a8 = CONCAT44(auStack_1a4._0_4_,auVar25);
  stack0xfffffffffffffe60 = 0;
  local_res18 = fVar49;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar20,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  fVar27 = local_158;
  fStackX_1c = (float)uVar29;
  TVar21.field0_0x0._4_4_ = uVar29;
  TVar21.field0_0x0._s_0.X = fVar49;
  auStack_1a4._0_4_ = uVar26;
  auStack_1a4._4_4_ = local_158;
  fStack_19c = 0.0;
  local_res18 = fVar49;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar21,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  fVar23 = local_res8;
  fStackX_1c = (float)uVar32;
  TVar22.field0_0x0._4_4_ = uVar32;
  TVar22.field0_0x0._s_0.X = fVar49;
  auStack_1a4._0_4_ = fVar24;
  auStack_1a4._4_4_ = fVar27;
  fStack_19c = 0.0;
  local_res18 = fVar49;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar22,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  fVar28 = local_138;
  uStackX_c = uVar29;
  TVar8.field0_0x0._4_4_ = uVar29;
  TVar8.field0_0x0._s_0.X = fVar52;
  auStack_1a4._0_4_ = uVar26;
  local_1a8 = (undefined1  [4])local_138;
  fStack_19c = 0.0;
  local_res8 = fVar52;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar8,
                       (TVector2<float>)TVar3,fVar23,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  uStackX_c = uVar32;
  TVar9.field0_0x0._4_4_ = uVar32;
  TVar9.field0_0x0._s_0.X = fVar52;
  auStack_1a4._0_4_ = fVar24;
  local_1a8 = (undefined1  [4])fVar28;
  fStack_19c = 0.0;
  local_res8 = fVar52;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar9,
                       (TVector2<float>)TVar3,fVar23,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  uStackX_c = uVar29;
  TVar10.field0_0x0._4_4_ = uVar29;
  TVar10.field0_0x0._s_0.X = fVar52;
  auStack_1a4._0_4_ = uVar26;
  local_1a8 = (undefined1  [4])fVar45;
  stack0xfffffffffffffe60 = 0;
  local_res8 = fVar52;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar10,
                       (TVector2<float>)TVar3,fVar23,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  uStackX_c = uVar32;
  TVar11.field0_0x0._4_4_ = uVar32;
  TVar11.field0_0x0._s_0.X = fVar52;
  auStack_1a4._0_4_ = fVar24;
  stack0xfffffffffffffe60 = 0;
  local_res8 = fVar52;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar11,
                       (TVector2<float>)TVar3,fVar23,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  local_res8 = fVar42;
  uStackX_c = uVar29;
  TVar12.field0_0x0._4_4_ = uVar29;
  TVar12.field0_0x0._0_4_ = fVar42;
  auStack_1a4._0_4_ = uVar26;
  local_1a8 = (undefined1  [4])fVar28;
  stack0xfffffffffffffe60 = 0;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,TVar12,
                       (TVector2<float>)TVar3,fVar23,(TVector4<float> *)local_1a8,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  auStack_1a4._0_4_ = fVar24;
  stack0xfffffffffffffe60 = 0;
  pFVar36 = FSlateVertex::Make<1>
                      ((FSlateVertex *)local_188,(TTransform2<float> *)param_1,
                       (TVector2<float>)TVar3,(TVector2<float>)TVar3,fVar23,
                       (TVector4<float> *)local_1a8,(FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar36);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FSlateElementBatcher::AddBorderElement<1>(FSlateBoxElement_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FSlateElementBatcher::AddBorderElement<1>(FSlateBoxElement_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FSlateElementBatcher::AddBorderElement<1>(FSlateBoxElement_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `FSlateElementBatcher::AddBorderElement<1>'::__l2::<lambda_1>::operator()
              (&local_res8,
               &`private:_void___cdecl_FSlateElementBatcher::AddBorderElement<1>(FSlateBoxElement_const&___ptr64)___ptr64'
                ::__l2::DefaultBorderIndiciesArray);
    atexit(`FSlateElementBatcher::AddBorderElement<1>'::__l2::
           _dynamic_atexit_destructor_for__DefaultBorderIndiciesArray__);
    _Init_thread_footer(&`private:_void___cdecl_FSlateElementBatcher::AddBorderElement<1>(FSlateBoxElement_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  this_00->SourceIndices =
       &`private:_void___cdecl_FSlateElementBatcher::AddBorderElement<1>(FSlateBoxElement_const&___ptr64)___ptr64'
        ::__l2::DefaultBorderIndiciesArray;
  this_00->NumIndices =
       `private:_void___cdecl_FSlateElementBatcher::AddBorderElement<1>(FSlateBoxElement_const&___ptr64)___ptr64'
       ::__l2::DefaultBorderIndiciesArray.ArrayNum;
  this_00->IndexOffset = 0;
  return;
}

// AddBorderElement<0> @ 1424c8fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddBorderElement<0>(FSlateElementBatcher *this,FSlateBoxElement *param_1)

{
  ESlateDrawEffect EVar1;
  schar sVar2;
  TVector2<float>_u_0 TVar3;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TVector2<float> TVar12;
  TVector2<float> TVar13;
  TVector2<float> TVar14;
  TVector2<float> TVar15;
  TVector2<float> TVar16;
  TVector2<float> TVar17;
  TVector2<float> TVar18;
  TVector2<float> TVar19;
  TVector2<float> TVar20;
  TVector2<float> TVar21;
  TVector2<float> TVar22;
  TVector2<float> TVar23;
  TVector2<float> TVar24;
  TVector2<float> TVar25;
  TVector2<float> TVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [4];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  ESlatePostRT EVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  FSlateRenderBatch *this_00;
  FSlateClippingState *pFVar40;
  FSlateVertex *pFVar41;
  float *pfVar42;
  FSlateShaderResource *pFVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float local_res8;
  float fStackX_c;
  FColor_u_0 local_res10;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  undefined1 local_198 [4];
  undefined1 auStack_194 [8];
  float fStack_18c;
  TVector2<float>_u_0 local_188;
  undefined1 local_178 [12];
  float fStack_16c;
  float afStack_168 [2];
  float fStack_160;
  float fStack_15c;
  TVector4<float>_u_0 local_158;
  float local_148;
  float local_138;
  float local_128;
  float local_124;
  undefined8 local_120;
  FLinearColor_u_0 local_118;
  undefined1 local_108 [12];
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  
  TVar3 = (TVector2<float>_u_0)param_1->_padding_;
  uVar38 = 1;
  local_res8 = *(float *)((longlong)&param_1->_padding_ + 4);
  EVar1 = *(ESlateDrawEffect *)((longlong)&param_1->_padding_ + 3);
  iVar39 = (int)param_1->_padding_;
  pFVar43 = (FSlateShaderResource *)0x0;
  uVar37 = 1;
  local_120 = TVar3;
  if ((param_1->ResourceProxy != (FSlateShaderResourceProxy *)0x0) &&
     (pFVar43 = param_1->ResourceProxy->Resource, uVar37 = 1, pFVar43 != (FSlateShaderResource *)0x0
     )) {
    uVar37 = (**(code **)pFVar43->_padding_)(pFVar43);
    uVar38 = (**(code **)(pFVar43->_padding_ + 8))(pFVar43);
  }
  fVar28 = __real_3f000000;
  fVar48 = __real_3f800000;
  fVar47 = __real_3f800000 / *(float *)((longlong)&param_1->_padding_ + 4);
  fVar53 = this->PixelCenterOffset / (float)uVar37;
  local_res18 = this->PixelCenterOffset / (float)uVar38;
  local_res20 = fVar47 * (float)uVar38;
  local_148 = fVar53 + __real_3f800000;
  fVar47 = fVar47 * (float)uVar37;
  local_128 = local_res18 + __real_3f800000;
  fVar8 = (param_1->Margin).Left;
  fVar9 = (param_1->Margin).Top;
  fVar10 = (param_1->Margin).Right;
  fVar11 = (param_1->Margin).Bottom;
  local_f8 = TVar3._s_0.X;
  fVar34 = local_f8;
  fStack_f4 = TVar3._s_0.Y;
  fVar35 = fStack_f4;
  if (local_f8 < 0.0) {
    fVar8 = (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
  }
  if (fStack_f4 < 0.0) {
    fVar9 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
  }
  if (local_f8 < 0.0) {
    fVar10 = (float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
  }
  if (fStack_f4 < 0.0) {
    fVar11 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  fVar50 = (float)local_120 - fVar47 * fVar10;
  local_124 = local_120._4_4_ - local_res20 * fVar11;
  fVar51 = local_res20 * fVar9;
  fVar52 = fVar47 * fVar8;
  if ((float)((uint)fVar50 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)((uint)(fVar47 * fVar8) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar50 = (float)local_120 * __real_3f000000;
    fVar52 = fVar50;
  }
  _local_f8 = CONCAT44(fStack_f4,fVar50);
  if ((float)((uint)local_124 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)((uint)fVar51 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar51 = local_120._4_4_ * __real_3f000000;
    local_124 = fVar51;
  }
  local_178._0_4_ = (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff) + fVar53;
  _local_198 = (TVector4<float>_u_0)ZEXT416((uint)local_178._0_4_);
  local_178._8_4_ = (float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff) + local_res18;
  _local_108 = (TVector4<float>_u_0)ZEXT416((uint)local_178._8_4_);
  fStack_16c = (__real_3f800000 - (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff)) +
               local_res18;
  local_120 = (TVector2<float>_u_0)CONCAT44(local_120._4_4_,fStack_16c);
  local_178._4_4_ =
       (__real_3f800000 - (float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff)) + fVar53;
  fVar47 = (__real_3f800000 - (fVar10 + fVar8)) * fVar47;
  fVar8 = __real_3f800000;
  if (__real_322bcc77 < (float)((uint)fVar47 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar8 = (fVar50 - fVar52) / fVar47;
  }
  fVar10 = (__real_3f800000 - (fVar11 + fVar9)) * local_res20;
  fVar9 = __real_3f800000;
  if (__real_322bcc77 < (float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar9 = (local_124 - fVar51) / fVar10;
  }
  fVar10 = *(float *)&param_1->_padding_;
  fVar11 = *(float *)((longlong)&param_1->_padding_ + 4);
  local_118._0_8_ = param_1->_padding_;
  fVar47 = *(float *)&param_1->_padding_;
  fVar49 = *(float *)((longlong)&param_1->_padding_ + 4);
  local_118._8_8_ = param_1->_padding_;
  afStack_168[0] = (float)___xmm_3f800000000000000000000000000000;
  afStack_168[1] = (float)_UNK_150689644;
  _fStack_160 = _UNK_150689648;
  local_158._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_158._8_8_ = _UNK_150689648;
  local_138 = (float)local_178._4_4_;
  if (this->bSRGBVertexColor == false) {
    auVar44._4_4_ = fVar47;
    auVar44._0_4_ = fVar47;
    auVar44._8_4_ = fVar47;
    auVar44._12_4_ = fVar47;
    if (fVar47 <= 0.0) {
      auVar5._12_4_ = 0;
      auVar5._0_12_ = auVar44._4_12_;
      auVar44 = auVar5 << 0x20;
    }
    if (__real_3f800000 <= auVar44._0_4_) {
      auVar44._0_4_ = __real_3f800000;
    }
    auVar45._4_4_ = fVar11;
    auVar45._0_4_ = fVar11;
    auVar45._8_4_ = fVar11;
    auVar45._12_4_ = fVar11;
    if (fVar11 <= 0.0) {
      auVar6._12_4_ = 0;
      auVar6._0_12_ = auVar45._4_12_;
      auVar45 = auVar6 << 0x20;
    }
    if (__real_3f800000 <= auVar45._0_4_) {
      auVar45._0_4_ = __real_3f800000;
    }
    auVar46._4_4_ = fVar49;
    auVar46._0_4_ = fVar49;
    auVar46._8_4_ = fVar49;
    auVar46._12_4_ = fVar49;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    local_res10._s_0.G = (char)(int)(auVar45._0_4_ * __real_437f0000 + __real_3f000000);
    local_res10._s_0.B = (char)(int)(auVar44._0_4_ * __real_437f0000 + __real_3f000000);
    if (fVar49 <= 0.0) {
      auVar7._12_4_ = 0;
      auVar7._0_12_ = auVar46._4_12_;
      auVar46 = auVar7 << 0x20;
    }
    if (__real_3f800000 <= fVar10) {
      fVar10 = __real_3f800000;
    }
    if (__real_3f800000 <= auVar46._0_4_) {
      auVar46._0_4_ = __real_3f800000;
    }
    local_res10._s_0.R = (char)(int)(fVar10 * __real_437f0000 + __real_3f000000);
    local_res10._s_0.A = (char)(int)(auVar46._0_4_ * __real_437f0000 + __real_3f000000);
  }
  else {
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_118._s_0);
  }
  sVar2 = *(schar *)((longlong)&param_1->_padding_ + 2);
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    this_00 = FSlateBatchData::AddRenderBatch
                        (this->BatchData,iVar39,(FShaderParams *)local_178,pFVar43,TriangleList,
                         Border,EVar1,TileV|TileU,sVar2);
  }
  else {
    this_00 = FSlateCachedElementList::AddRenderBatch
                        (this->CurrentCachedElementList,iVar39,(FShaderParams *)local_178,pFVar43,
                         TriangleList,Border,EVar1,TileV|TileU,sVar2);
  }
  pFVar40 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
  this_00->ClippingState = pFVar40;
  if (pFVar43 != (FSlateShaderResource *)0x0) {
    EVar36 = (**(code **)(pFVar43->_padding_ + 0x20))(pFVar43);
    this_00->CachedUsedPostBuffers = EVar36;
    this->UsedSlatePostBuffers = this->UsedSlatePostBuffers | EVar36;
  }
  local_res20 = fVar8;
  if (fVar8 <= fVar48) {
    local_res20 = fVar48;
  }
  pTVar4 = this_00->SourceVertices;
  if (fVar9 <= fVar48) {
    fVar9 = fVar48;
  }
  fVar8 = *(float *)&param_1->_padding_;
  fVar10 = *(float *)((longlong)&param_1->_padding_ + 4);
  lVar27 = param_1->_padding_;
  local_158._s_0.Y = (float)0;
  local_158._s_0.X = (float)local_res10.Bits;
  stack0xfffffffffffffe90 = 0;
  afStack_168[0] = 0.0;
  afStack_168[1] = 0.0;
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  local_188 = TVar3;
  local_118._0_8_ = TVar3;
  iVar39 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  fVar11 = local_res18;
  fVar47 = afStack_168[0];
  fVar49 = afStack_168[1];
  uVar31 = local_178._8_4_;
  fVar48 = fStack_16c;
  afStack_168 = (float  [2])((ulonglong)(uint)afStack_168[1] << 0x20);
  local_178._4_4_ = local_res18;
  stack0xfffffffffffffe90 = 0;
  pfVar42 = (float *)((longlong)iVar39 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar42 = fVar53;
  pfVar42[1] = local_res18;
  pfVar42[2] = (float)uVar31;
  pfVar42[3] = fVar48;
  pfVar42[4] = fVar47;
  pfVar42[5] = fVar49;
  pfVar42[6] = fVar8;
  pfVar42[7] = fVar10;
  *(undefined8 *)(pfVar42 + 8) = local_158._0_8_;
  pfVar42[10] = local_158._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  local_158._s_0.Y = (float)0;
  local_158._0_4_ = local_res10.Bits;
  fVar10 = fVar51 * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
  fVar48 = fVar51 * *(float *)((longlong)&param_1->_padding_ + 4) +
           *(float *)((longlong)&param_1->_padding_ + 4);
  pTVar4 = this_00->SourceVertices;
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  local_188 = TVar3;
  local_178._0_4_ = fVar53;
  _fStack_160 = lVar27;
  iVar39 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  fVar8 = afStack_168[0];
  fStack_15c = fVar48;
  fStack_160 = fVar10;
  afStack_168 = (float  [2])((ulonglong)afStack_168 & 0xffffffff);
  pfVar42 = (float *)((longlong)iVar39 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar42 = fVar53;
  pfVar42[1] = (float)local_108._0_4_;
  pfVar42[2] = (float)local_178._8_4_;
  pfVar42[3] = fStack_16c;
  pfVar42[4] = fVar8;
  pfVar42[5] = fVar51 / fVar35;
  pfVar42[6] = fVar10;
  pfVar42[7] = fVar48;
  local_178._4_4_ = local_108._0_4_;
  stack0xfffffffffffffe90 = 0;
  *(undefined8 *)(pfVar42 + 8) = local_158._0_8_;
  pfVar42[10] = local_158._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar4 = this_00->SourceVertices;
  local_158._s_0.Y = (float)0;
  local_158._0_4_ = local_res10.Bits;
  fVar10 = fVar52 * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
  fVar48 = fVar52 * *(float *)((longlong)&param_1->_padding_ + 4) +
           *(float *)((longlong)&param_1->_padding_ + 4);
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  local_188 = TVar3;
  local_178._0_4_ = fVar53;
  iVar39 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  uVar31 = local_178._8_4_;
  fVar8 = fStack_16c;
  local_178._0_4_ = local_198;
  local_178._4_4_ = fVar11;
  stack0xfffffffffffffe90 = 0;
  afStack_168[0] = fVar52 / fVar34;
  fStack_15c = fVar48;
  fStack_160 = fVar10;
  pfVar42 = (float *)((longlong)iVar39 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar42 = (float)local_198;
  pfVar42[1] = fVar11;
  pfVar42[2] = (float)uVar31;
  pfVar42[3] = fVar8;
  pfVar42[4] = fVar52 / fVar34;
  pfVar42[5] = afStack_168[1];
  pfVar42[6] = fVar10;
  pfVar42[7] = fVar48;
  *(undefined8 *)(pfVar42 + 8) = local_158._0_8_;
  pfVar42[10] = local_158._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar4 = this_00->SourceVertices;
  local_158._s_0.Y = (float)0;
  local_158._0_4_ = local_res10.Bits;
  fVar11 = fVar51 * *(float *)&param_1->_padding_ + fVar52 * *(float *)&param_1->_padding_ +
           *(float *)&param_1->_padding_;
  fVar8 = fVar51 * *(float *)((longlong)&param_1->_padding_ + 4) +
          fVar52 * *(float *)((longlong)&param_1->_padding_ + 4) +
          *(float *)((longlong)&param_1->_padding_ + 4);
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  local_188 = TVar3;
  iVar39 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  pfVar42 = (float *)((longlong)iVar39 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar42 = (float)local_198;
  pfVar42[1] = (float)local_108._0_4_;
  pfVar42[2] = (float)local_178._8_4_;
  pfVar42[3] = fStack_16c;
  local_178._0_4_ = local_198;
  local_178._4_4_ = local_108._0_4_;
  stack0xfffffffffffffe90 = stack0xfffffffffffffe90 & 0xffffffff;
  pfVar42[4] = fVar52 / fVar34;
  pfVar42[5] = fVar51 / fVar35;
  pfVar42[6] = fVar11;
  pfVar42[7] = fVar8;
  *(undefined8 *)(pfVar42 + 8) = local_158._0_8_;
  pfVar42[10] = local_158._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar4 = this_00->SourceVertices;
  local_158._s_0.Y = (float)0;
  local_158._0_4_ = local_res10.Bits;
  fVar10 = fVar52 * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
  fVar48 = fVar52 * *(float *)((longlong)&param_1->_padding_ + 4) +
           *(float *)((longlong)&param_1->_padding_ + 4);
  fStack_15c = fVar8;
  fStack_160 = fVar11;
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  afStack_168[1] = 0.0;
  afStack_168[0] = fVar52 / fVar34;
  local_188 = TVar3;
  iVar39 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  local_178._4_4_ = local_res18;
  afStack_168[0] = fVar52 / fVar34;
  fStack_15c = fVar48;
  fStack_160 = fVar10;
  pfVar42 = (float *)((longlong)iVar39 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar42 = fVar53;
  pfVar42[1] = local_res18;
  pfVar42[2] = local_res20;
  pfVar42[3] = fStack_16c;
  pfVar42[4] = fVar52 / fVar34;
  pfVar42[5] = afStack_168[1];
  pfVar42[6] = fVar10;
  pfVar42[7] = fVar48;
  *(undefined8 *)(pfVar42 + 8) = local_158._0_8_;
  pfVar42[10] = local_158._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar4 = this_00->SourceVertices;
  fStack_16c = 0.0;
  local_178._8_4_ = local_res20;
  local_158._s_0.Y = (float)0;
  local_158._0_4_ = local_res10.Bits;
  fVar10 = fVar51 * *(float *)&param_1->_padding_ + fVar52 * *(float *)&param_1->_padding_ +
           *(float *)&param_1->_padding_;
  fVar8 = fVar51 * *(float *)((longlong)&param_1->_padding_ + 4) +
          fVar52 * *(float *)((longlong)&param_1->_padding_ + 4) +
          *(float *)((longlong)&param_1->_padding_ + 4);
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  local_188 = TVar3;
  local_178._0_4_ = fVar53;
  iVar39 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  local_178._4_4_ = local_108._0_4_;
  pfVar42 = (float *)((longlong)iVar39 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar42 = fVar53;
  pfVar42[1] = (float)local_108._0_4_;
  pfVar42[2] = local_res20;
  pfVar42[3] = fStack_16c;
  fStack_16c = 0.0;
  local_178._8_4_ = local_res20;
  pfVar42[4] = fVar52 / fVar34;
  pfVar42[5] = fVar51 / fVar35;
  pfVar42[6] = fVar10;
  pfVar42[7] = fVar8;
  *(undefined8 *)(pfVar42 + 8) = local_158._0_8_;
  pfVar42[10] = local_158._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  fStack_15c = fVar8;
  fStack_160 = fVar10;
  afStack_168[1] = 0.0;
  afStack_168[0] = fVar52 / fVar34;
  pTVar4 = this_00->SourceVertices;
  local_158._s_0.Y = (float)0;
  local_158._0_4_ = local_res10.Bits;
  fVar10 = fVar50 * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
  fVar11 = fVar50 * *(float *)((longlong)&param_1->_padding_ + 4) +
           *(float *)((longlong)&param_1->_padding_ + 4);
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  local_188 = TVar3;
  local_178._0_4_ = fVar53;
  iVar39 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  fVar8 = fStack_16c;
  local_178._0_4_ = local_148;
  local_178._4_4_ = local_res18;
  fStack_16c = 0.0;
  local_178._8_4_ = local_res20;
  afStack_168[0] = fVar50 / fVar34;
  fStack_15c = fVar11;
  fStack_160 = fVar10;
  pfVar42 = (float *)((longlong)iVar39 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar42 = local_148;
  pfVar42[1] = local_res18;
  pfVar42[2] = local_res20;
  pfVar42[3] = fVar8;
  pfVar42[4] = fVar50 / fVar34;
  pfVar42[5] = afStack_168[1];
  pfVar42[6] = fVar10;
  pfVar42[7] = fVar11;
  *(undefined8 *)(pfVar42 + 8) = local_158._0_8_;
  pfVar42[10] = local_158._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  fVar11 = fVar51 * *(float *)&param_1->_padding_ + fVar50 * *(float *)&param_1->_padding_ +
           *(float *)&param_1->_padding_;
  fVar10 = fVar50 * *(float *)((longlong)&param_1->_padding_ + 4) +
           fVar51 * *(float *)((longlong)&param_1->_padding_ + 4) +
           *(float *)((longlong)&param_1->_padding_ + 4);
  pTVar4 = this_00->SourceVertices;
  local_158._s_0.Y = (float)0;
  local_158._0_4_ = local_res10.Bits;
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  local_188 = TVar3;
  iVar39 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  fVar8 = fStack_16c;
  local_178._0_4_ = local_148;
  local_178._4_4_ = local_108._0_4_;
  fStack_15c = fVar10;
  fStack_160 = fVar11;
  pfVar42 = (float *)((longlong)iVar39 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  stack0xfffffffffffffe90 = 0;
  *pfVar42 = local_148;
  pfVar42[1] = (float)local_108._0_4_;
  pfVar42[2] = local_res20;
  pfVar42[3] = fVar8;
  afStack_168[1] = 0.0;
  afStack_168[0] = fVar50 / fVar34;
  pfVar42[4] = fVar50 / fVar34;
  pfVar42[5] = fVar51 / fVar35;
  pfVar42[6] = fVar11;
  pfVar42[7] = fVar10;
  *(undefined8 *)(pfVar42 + 8) = local_158._0_8_;
  pfVar42[10] = local_158._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  local_158._s_0.Y = (float)0;
  local_158._0_4_ = local_res10.Bits;
  fVar10 = fVar50 * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
  fVar11 = fVar50 * *(float *)((longlong)&param_1->_padding_ + 4) +
           *(float *)((longlong)&param_1->_padding_ + 4);
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  pTVar4 = this_00->SourceVertices;
  local_188 = TVar3;
  iVar39 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  uVar31 = local_178._8_4_;
  fVar8 = fStack_16c;
  local_178._0_4_ = local_138;
  local_178._4_4_ = local_res18;
  stack0xfffffffffffffe90 = 0;
  afStack_168[0] = fVar50 / fVar34;
  fStack_15c = fVar11;
  fStack_160 = fVar10;
  pfVar42 = (float *)((longlong)iVar39 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar42 = local_138;
  pfVar42[1] = local_res18;
  pfVar42[2] = (float)uVar31;
  pfVar42[3] = fVar8;
  pfVar42[4] = fVar50 / fVar34;
  pfVar42[5] = afStack_168[1];
  pfVar42[6] = fVar10;
  pfVar42[7] = fVar11;
  *(undefined8 *)(pfVar42 + 8) = local_158._0_8_;
  pfVar42[10] = local_158._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar4 = this_00->SourceVertices;
  local_158._s_0.Y = (float)0;
  local_158._0_4_ = local_res10.Bits;
  fVar10 = fVar51 * *(float *)&param_1->_padding_ + fVar50 * *(float *)&param_1->_padding_ +
           *(float *)&param_1->_padding_;
  fVar8 = fVar50 * *(float *)((longlong)&param_1->_padding_ + 4) +
          fVar51 * *(float *)((longlong)&param_1->_padding_ + 4) +
          *(float *)((longlong)&param_1->_padding_ + 4);
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  local_188 = TVar3;
  iVar39 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  uVar32 = local_118._s_0.R;
  fVar48 = local_118._s_0.R / fVar34;
  pfVar42 = (float *)((longlong)iVar39 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar42 = local_138;
  pfVar42[1] = (float)local_108._0_4_;
  pfVar42[2] = (float)local_178._8_4_;
  pfVar42[3] = fStack_16c;
  pfVar42[4] = fVar50 / fVar34;
  pfVar42[5] = fVar51 / fVar35;
  pfVar42[6] = fVar10;
  pfVar42[7] = fVar8;
  local_178._0_4_ = local_138;
  local_178._4_4_ = local_108._0_4_;
  stack0xfffffffffffffe90 = 0;
  *(undefined8 *)(pfVar42 + 8) = local_158._0_8_;
  pfVar42[10] = local_158._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar4 = this_00->SourceVertices;
  local_158._s_0.Y = (float)0;
  local_158._0_4_ = local_res10.Bits;
  fVar47 = local_118._s_0.R * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
  fVar49 = local_118._s_0.R * *(float *)((longlong)&param_1->_padding_ + 4) +
           *(float *)((longlong)&param_1->_padding_ + 4);
  fStack_15c = fVar8;
  fStack_160 = fVar10;
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  afStack_168[1] = 0.0;
  afStack_168[0] = fVar50 / fVar34;
  local_188 = TVar3;
  iVar39 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  local_178._0_4_ = local_148;
  local_178._4_4_ = local_res18;
  pfVar42 = (float *)((longlong)iVar39 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar42 = local_148;
  pfVar42[1] = local_res18;
  pfVar42[2] = (float)local_178._8_4_;
  pfVar42[3] = fStack_16c;
  pfVar42[4] = fVar48;
  pfVar42[5] = afStack_168[1];
  pfVar42[6] = fVar47;
  pfVar42[7] = fVar49;
  stack0xfffffffffffffe90 = 0;
  *(undefined8 *)(pfVar42 + 8) = local_158._0_8_;
  pfVar42[10] = local_158._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  fVar8 = *(float *)&param_1->_padding_;
  pTVar4 = this_00->SourceVertices;
  fVar10 = *(float *)&param_1->_padding_;
  fVar11 = *(float *)((longlong)&param_1->_padding_ + 4);
  local_158._s_0.Y = (float)0;
  local_158._0_1_ = local_res10._s_0.B;
  local_158._1_1_ = local_res10._s_0.G;
  local_158._2_1_ = local_res10._s_0.R;
  local_158._3_1_ = local_res10._s_0.A;
  afStack_168[0] = fVar48;
  fStack_15c = fVar49;
  fStack_160 = fVar47;
  fVar48 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar47 = *(float *)&param_1->_padding_;
  fVar50 = *(float *)((longlong)&param_1->_padding_ + 4);
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  local_188 = TVar3;
  iVar39 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,&pTVar4->ArrayMax);
  fVar29 = local_res18;
  fVar49 = local_res8;
  pfVar42 = (float *)((longlong)iVar39 * 0x2c +
                     (this_00->SourceVertices->AllocatorInstance)._padding_);
  *pfVar42 = local_148;
  pfVar42[1] = (float)local_108._0_4_;
  pfVar42[2] = (float)local_178._8_4_;
  pfVar42[3] = fStack_16c;
  pfVar42[4] = (float)uVar32 / fVar34;
  pfVar42[5] = fVar51 / fVar35;
  pfVar42[6] = fVar51 * fVar10 + (float)uVar32 * fVar8 + fVar47;
  pfVar42[7] = (float)uVar32 * fVar11 + fVar51 * fVar48 + fVar50;
  *(undefined8 *)(pfVar42 + 8) = local_158._0_8_;
  pfVar42[10] = local_158._s_0.Z;
  this_00->NumVertices = this_00->NumVertices + 1;
  local_158._s_0.Y = (float)0;
  local_158._0_1_ = local_res10._s_0.B;
  local_158._1_1_ = local_res10._s_0.G;
  local_158._2_1_ = local_res10._s_0.R;
  local_158._3_1_ = local_res10._s_0.A;
  afStack_168 = (float  [2])((ulonglong)(uint)(fVar51 / fVar35) << 0x20);
  local_178._4_4_ = local_res18;
  stack0xfffffffffffffe90 = (ulonglong)(uint)fVar9 << 0x20;
  fStack_15c = fVar51 * *(float *)((longlong)&param_1->_padding_ + 4) +
               *(float *)((longlong)&param_1->_padding_ + 4);
  fStack_160 = fVar51 * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
  local_158._10_2_ = (short)((int)ROUND(fVar35 * local_res8 + fVar35 * local_res8 + fVar28) >> 1);
  local_158._8_2_ = (short)((int)ROUND(fVar34 * local_res8 + fVar34 * local_res8 + fVar28) >> 1);
  local_188 = TVar3;
  local_178._0_4_ = fVar53;
  FSlateRenderBatch::AddVertex(this_00,(FSlateVertex *)local_178);
  fVar28 = local_124;
  fVar10 = local_128;
  fStackX_1c = local_124;
  local_res18 = 0.0;
  local_108._4_4_ = local_128;
  local_108._0_4_ = fVar53;
  local_108._8_4_ = 0;
  fStack_fc = fVar9;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,
                       (TVector2<float>)((ulonglong)(uint)local_124 << 0x20),(TVector2<float>)TVar3,
                       fVar49,(TVector4<float> *)local_108,(FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  fVar8 = local_res8;
  auVar30 = local_198;
  TVar17.field0_0x0._s_0.Y = fVar51;
  TVar17.field0_0x0._s_0.X = fVar52;
  auStack_194._0_4_ = fVar29;
  auStack_194._4_4_ = 0;
  fStack_18c = fVar9;
  local_res18 = fVar52;
  fStackX_1c = fVar51;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar17,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  fStackX_1c = fVar28;
  TVar18.field0_0x0._4_4_ = fVar28;
  TVar18.field0_0x0._s_0.X = fVar52;
  auStack_194._0_4_ = fVar10;
  _local_198 = CONCAT44(auStack_194._0_4_,auVar30);
  auStack_194._4_4_ = 0;
  local_res18 = fVar52;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar18,
                       (TVector2<float>)TVar3,fVar8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  fVar11 = local_138;
  fVar34 = local_f8;
  local_res18 = local_f8;
  TVar19.field0_0x0._s_0.Y = fVar51;
  TVar19.field0_0x0._0_4_ = local_f8;
  auStack_194._0_4_ = fVar29;
  local_198 = (undefined1  [4])local_138;
  auStack_194._4_4_ = 0;
  fStackX_1c = fVar51;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar19,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  auStack_194._0_4_ = local_128;
  local_res18 = fVar34;
  fStackX_1c = fVar28;
  TVar20.field0_0x0._4_4_ = fVar28;
  TVar20.field0_0x0._0_4_ = fVar34;
  local_198 = (undefined1  [4])fVar11;
  auStack_194._4_4_ = 0;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar20,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  fVar10 = local_148;
  fVar8 = local_res8;
  auStack_194._0_4_ = fVar29;
  local_res18 = (float)uVar32;
  local_198 = (undefined1  [4])local_148;
  auStack_194._4_4_ = 0;
  TVar21.field0_0x0._s_0.Y = fVar51;
  TVar21.field0_0x0._s_0.X = (float)uVar32;
  fStackX_1c = fVar51;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar21,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  local_res18 = (float)uVar32;
  fStackX_1c = fVar28;
  TVar22.field0_0x0._4_4_ = fVar28;
  TVar22.field0_0x0._s_0.X = (float)uVar32;
  auStack_194._0_4_ = local_128;
  local_198 = (undefined1  [4])fVar10;
  auStack_194._4_4_ = 0;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar22,
                       (TVector2<float>)TVar3,fVar8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  uVar31 = (float)local_120;
  fStackX_1c = fVar28;
  local_res18 = 0.0;
  auStack_194._0_4_ = (float)local_120;
  local_198 = (undefined1  [4])fVar53;
  stack0xfffffffffffffe70 = 0;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,
                       (TVector2<float>)((ulonglong)(uint)fVar28 << 0x20),(TVector2<float>)TVar3,
                       fVar8,(TVector4<float> *)local_198,(FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  fVar48 = local_128;
  uVar33 = local_118._s_0.G;
  fStackX_1c = local_118._s_0.G;
  local_res18 = 0.0;
  auStack_194._0_4_ = local_128;
  stack0xfffffffffffffe70 = 0;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,
                       (TVector2<float>)((ulonglong)(uint)local_118._s_0.G << 0x20),
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  fStackX_1c = fVar28;
  auStack_194._0_4_ = uVar31;
  _local_198 = CONCAT44(auStack_194._0_4_,auVar30);
  stack0xfffffffffffffe70 = 0;
  TVar23.field0_0x0._4_4_ = fVar28;
  TVar23.field0_0x0._s_0.X = fVar52;
  local_res18 = fVar52;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar23,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  fStackX_1c = (float)uVar33;
  TVar24.field0_0x0._4_4_ = uVar33;
  TVar24.field0_0x0._s_0.X = fVar52;
  auStack_194._0_4_ = fVar48;
  _local_198 = CONCAT44(auStack_194._0_4_,auVar30);
  stack0xfffffffffffffe70 = 0;
  local_res18 = fVar52;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar24,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  fVar9 = local_res20;
  fStackX_1c = fVar28;
  TVar25.field0_0x0._4_4_ = fVar28;
  TVar25.field0_0x0._s_0.X = fVar52;
  auStack_194._0_4_ = uVar31;
  auStack_194._4_4_ = local_res20;
  fStack_18c = 0.0;
  local_res18 = fVar52;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar25,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  fVar8 = local_res8;
  fStackX_1c = (float)uVar33;
  TVar26.field0_0x0._4_4_ = uVar33;
  TVar26.field0_0x0._s_0.X = fVar52;
  auStack_194._0_4_ = fVar48;
  auStack_194._4_4_ = fVar9;
  fStack_18c = 0.0;
  local_res18 = fVar52;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar26,
                       (TVector2<float>)TVar3,local_res8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  fVar10 = local_148;
  local_res8 = fVar34;
  fStackX_c = fVar28;
  auStack_194._0_4_ = uVar31;
  local_198 = (undefined1  [4])local_148;
  fStack_18c = 0.0;
  TVar12.field0_0x0._4_4_ = fVar28;
  TVar12.field0_0x0._0_4_ = fVar34;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar12,
                       (TVector2<float>)TVar3,fVar8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  local_res8 = fVar34;
  fStackX_c = (float)uVar33;
  TVar13.field0_0x0._4_4_ = uVar33;
  TVar13.field0_0x0._0_4_ = fVar34;
  auStack_194._0_4_ = fVar48;
  local_198 = (undefined1  [4])fVar10;
  fStack_18c = 0.0;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar13,
                       (TVector2<float>)TVar3,fVar8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  local_res8 = fVar34;
  fStackX_c = fVar28;
  TVar14.field0_0x0._4_4_ = fVar28;
  TVar14.field0_0x0._0_4_ = fVar34;
  auStack_194._0_4_ = uVar31;
  local_198 = (undefined1  [4])fVar11;
  stack0xfffffffffffffe70 = 0;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar14,
                       (TVector2<float>)TVar3,fVar8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  local_res8 = fVar34;
  fStackX_c = (float)uVar33;
  TVar15.field0_0x0._4_4_ = uVar33;
  TVar15.field0_0x0._0_4_ = fVar34;
  auStack_194._0_4_ = fVar48;
  stack0xfffffffffffffe70 = 0;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar15,
                       (TVector2<float>)TVar3,fVar8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  local_res8 = (float)uVar32;
  fStackX_c = fVar28;
  auStack_194._0_4_ = uVar31;
  local_198 = (undefined1  [4])fVar10;
  stack0xfffffffffffffe70 = 0;
  TVar16.field0_0x0._4_4_ = fVar28;
  TVar16.field0_0x0._s_0.X = (float)uVar32;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,TVar16,
                       (TVector2<float>)TVar3,fVar8,(TVector4<float> *)local_198,
                       (FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  auStack_194._0_4_ = fVar48;
  stack0xfffffffffffffe70 = 0;
  pFVar41 = FSlateVertex::Make<0>
                      ((FSlateVertex *)local_178,(TTransform2<float> *)param_1,
                       (TVector2<float>)TVar3,(TVector2<float>)TVar3,fVar8,
                       (TVector4<float> *)local_198,(FColor)local_res10._s_0,(FColor)0x0);
  FSlateRenderBatch::AddVertex(this_00,pFVar41);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FSlateElementBatcher::AddBorderElement<0>(FSlateBoxElement_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FSlateElementBatcher::AddBorderElement<0>(FSlateBoxElement_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FSlateElementBatcher::AddBorderElement<0>(FSlateBoxElement_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `FSlateElementBatcher::AddBorderElement<0>'::__l2::<lambda_1>::operator()
              (&local_res8,
               &`private:_void___cdecl_FSlateElementBatcher::AddBorderElement<0>(FSlateBoxElement_const&___ptr64)___ptr64'
                ::__l2::DefaultBorderIndiciesArray);
    atexit(`FSlateElementBatcher::AddBorderElement<0>'::__l2::
           _dynamic_atexit_destructor_for__DefaultBorderIndiciesArray__);
    _Init_thread_footer(&`private:_void___cdecl_FSlateElementBatcher::AddBorderElement<0>(FSlateBoxElement_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  this_00->SourceIndices =
       &`private:_void___cdecl_FSlateElementBatcher::AddBorderElement<0>(FSlateBoxElement_const&___ptr64)___ptr64'
        ::__l2::DefaultBorderIndiciesArray;
  this_00->NumIndices =
       `private:_void___cdecl_FSlateElementBatcher::AddBorderElement<0>(FSlateBoxElement_const&___ptr64)___ptr64'
       ::__l2::DefaultBorderIndiciesArray.ArrayNum;
  this_00->IndexOffset = 0;
  return;
}

// AddBoxElements<FSlateBoxElement> @ 1424cabe0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddBoxElements<FSlateBoxElement>
          (FSlateElementBatcher *this,
          TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  <lambda_3> local_res8;
  <lambda_2> local_res10;
  <lambda_1> local_res18 [2];
  
  local_res8.DrawElements = param_1;
  local_res10.__this = this;
  local_res18[0].__this = this;
  GenerateIndexedVertexBatches<FSlateBoxElement,_FSlateElementBatcher::AddBoxElements<FSlateBoxElement>_::__l2::<lambda_1>_&,_FSlateElementBatcher::AddBoxElements<FSlateBoxElement>_::__l2::<lambda_2>_&,_FSlateElementBatcher::AddBoxElements<FSlateBoxElement>_::__l2::<lambda_3>_&>
            (this,param_1,local_res18,&local_res10,&local_res8);
  return;
}

// AddBoxElements<FSlateRoundedBoxElement> @ 1424cac20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>
          (FSlateElementBatcher *this,
          TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  <lambda_3> local_res8;
  <lambda_2> local_res10;
  <lambda_1> local_res18 [2];
  
  local_res8.DrawElements = param_1;
  local_res10.__this = this;
  local_res18[0].__this = this;
  GenerateIndexedVertexBatches<FSlateRoundedBoxElement,_FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>_::__l2::<lambda_1>_&,_FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>_::__l2::<lambda_2>_&,_FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>_::__l2::<lambda_3>_&>
            (this,param_1,local_res18,&local_res10,&local_res8);
  return;
}

// AddDebugQuadElement<1> @ 1424cd780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddDebugQuadElement<1>(FSlateElementBatcher *this,FSlateBoxElement *param_1)

{
  undefined4 *puVar1;
  schar sVar2;
  ESlateDrawEffect EVar3;
  longlong lVar4;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  FSlateRenderBatch *this_00;
  FSlateClippingState *pFVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar17 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar18 [16];
  uint local_res8;
  float local_res10;
  float fStackX_14;
  float local_res18;
  float fStackX_1c;
  FLinearColor_u_0 local_c8;
  TVector4<float>_u_0 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  
  fVar6 = __real_3f000000;
  local_c8._s_0.R = (float)*(undefined4 *)&param_1->_padding_;
  local_c8._s_0.G = *(float *)((longlong)&param_1->_padding_ + 4);
  local_c8._s_0.B = (float)*(undefined4 *)&param_1->_padding_;
  local_c8._s_0.A = *(float *)((longlong)&param_1->_padding_ + 4);
  if (this->bSRGBVertexColor == false) {
    fVar13 = local_c8._s_0.B;
    if (local_c8._s_0.B <= 0.0) {
      fVar13 = 0.0;
    }
    if (__real_3f800000 <= fVar13) {
      fVar13 = __real_3f800000;
    }
    fVar14 = local_c8._s_0.G;
    if (local_c8._s_0.G <= 0.0) {
      fVar14 = 0.0;
    }
    if (__real_3f800000 <= fVar14) {
      fVar14 = __real_3f800000;
    }
    fVar15 = local_c8._s_0.R;
    if (local_c8._s_0.R <= 0.0) {
      fVar15 = 0.0;
    }
    fVar16 = local_c8._s_0.A;
    if (local_c8._s_0.A <= 0.0) {
      fVar16 = 0.0;
    }
    if (__real_3f800000 <= fVar15) {
      fVar15 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar16) {
      fVar16 = __real_3f800000;
    }
    local_res8 = CONCAT13((char)(int)(fVar16 * __real_437f0000 + __real_3f000000),
                          CONCAT12((char)(int)(fVar15 * __real_437f0000 + __real_3f000000),
                                   CONCAT11((char)(int)(fVar14 * __real_437f0000 + __real_3f000000),
                                            (char)(int)(fVar13 * __real_437f0000 + __real_3f000000))
                                  ));
  }
  else {
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_c8._s_0);
  }
  lVar4 = param_1->_padding_;
  sVar2 = *(schar *)((longlong)&param_1->_padding_ + 2);
  iVar9 = (int)param_1->_padding_;
  EVar3 = *(ESlateDrawEffect *)((longlong)&param_1->_padding_ + 3);
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    this_00 = FSlateBatchData::AddRenderBatch
                        (this->BatchData,iVar9,(FShaderParams *)&local_b8._s_0,
                         (FSlateShaderResource *)0x0,TriangleList,Default,EVar3,None,sVar2);
  }
  else {
    this_00 = FSlateCachedElementList::AddRenderBatch
                        (this->CurrentCachedElementList,iVar9,(FShaderParams *)&local_b8._s_0,
                         (FSlateShaderResource *)0x0,TriangleList,Default,EVar3,None,sVar2);
  }
  pFVar10 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
  uVar8 = _UNK_15076b1e8;
  uVar7 = ___xmm_3f8000003f8000000000000000000000;
  fVar13 = *(float *)&param_1->_padding_;
  this_00->ClippingState = pFVar10;
  pTVar5 = this_00->SourceVertices;
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  fStackX_14 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  local_98 = (ulonglong)local_res8;
  auVar18 = roundps(unaff_XMM7,
                    ZEXT416((uint)(fStackX_14 * *(float *)&param_1->_padding_ +
                                   local_res10 * *(float *)&param_1->_padding_ + fVar13 + fVar6)),1)
  ;
  auVar17 = roundps(unaff_XMM6,
                    ZEXT416((uint)(local_res10 * *(float *)((longlong)&param_1->_padding_ + 4) +
                                   *(float *)((longlong)&param_1->_padding_ + 4) +
                                  fStackX_14 * *(float *)((longlong)&param_1->_padding_ + 4) + fVar6
                                  )),1);
  iVar9 = UE::Core::Private::
          ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                    (0x2c,4,1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,&pTVar5->ArrayMax);
  local_res18 = (float)lVar4;
  lVar11 = (longlong)iVar9 * 0x2c;
  lVar12 = (this_00->SourceVertices->AllocatorInstance)._padding_;
  uStack_a0 = CONCAT44(auVar17._0_4_,auVar18._0_4_);
  *(undefined8 *)(lVar11 + lVar12) = uVar7;
  ((undefined8 *)(lVar11 + lVar12))[1] = uVar8;
  uVar8 = _UNK_15090c6d8;
  uVar7 = ___xmm_3f8000003f800000000000003f800000;
  puVar1 = (undefined4 *)(lVar11 + 0x10 + lVar12);
  *puVar1 = (undefined4)local_a8;
  puVar1[1] = local_a8._4_4_;
  puVar1[2] = auVar18._0_4_;
  puVar1[3] = auVar17._0_4_;
  *(ulonglong *)(lVar11 + 0x20 + lVar12) = local_98;
  *(undefined4 *)(lVar11 + 0x28 + lVar12) = (undefined4)uStack_90;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar5 = this_00->SourceVertices;
  local_98 = (ulonglong)local_res8;
  auVar18 = roundps(auVar18,ZEXT416((uint)(local_res18 * *(float *)&param_1->_padding_ +
                                           *(float *)&param_1->_padding_ + fVar6)),1);
  auVar17 = roundps(auVar17,ZEXT416((uint)(local_res18 *
                                           *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) + fVar6)),1
                   );
  iVar9 = UE::Core::Private::
          ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                    (0x2c,4,1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,&pTVar5->ArrayMax);
  lVar12 = (longlong)iVar9 * 0x2c;
  fStackX_1c = (float)((ulonglong)lVar4 >> 0x20);
  lVar4 = (this_00->SourceVertices->AllocatorInstance)._padding_;
  *(undefined8 *)(lVar12 + lVar4) = uVar7;
  ((undefined8 *)(lVar12 + lVar4))[1] = uVar8;
  uVar8 = _UNK_15090c6e8;
  uVar7 = ___xmm_3f8000003f8000003f80000000000000;
  puVar1 = (undefined4 *)(lVar12 + 0x10 + lVar4);
  *puVar1 = (undefined4)local_a8;
  puVar1[1] = local_a8._4_4_;
  puVar1[2] = auVar18._0_4_;
  puVar1[3] = auVar17._0_4_;
  uStack_a0 = CONCAT44(auVar17._0_4_,auVar18._0_4_);
  *(ulonglong *)(lVar12 + 0x20 + lVar4) = local_98;
  *(undefined4 *)(lVar12 + 0x28 + lVar4) = (undefined4)uStack_90;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar5 = this_00->SourceVertices;
  local_98 = (ulonglong)local_res8;
  auVar18 = roundps(auVar18,ZEXT416((uint)(fStackX_1c * *(float *)&param_1->_padding_ +
                                           *(float *)&param_1->_padding_ + fVar6)),1);
  auVar17 = roundps(auVar17,ZEXT416((uint)(fStackX_1c *
                                           *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) + fVar6)),1
                   );
  iVar9 = UE::Core::Private::
          ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                    (0x2c,4,1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,&pTVar5->ArrayMax);
  lVar12 = (longlong)iVar9 * 0x2c;
  uStack_a0 = CONCAT44(auVar17._0_4_,auVar18._0_4_);
  lVar4 = (this_00->SourceVertices->AllocatorInstance)._padding_;
  *(undefined8 *)(lVar12 + lVar4) = uVar7;
  ((undefined8 *)(lVar12 + lVar4))[1] = uVar8;
  uVar8 = _UNK_15076b1f8;
  uVar7 = ___xmm_3f8000003f8000003f8000003f800000;
  puVar1 = (undefined4 *)(lVar12 + 0x10 + lVar4);
  *puVar1 = (undefined4)local_a8;
  puVar1[1] = local_a8._4_4_;
  puVar1[2] = auVar18._0_4_;
  puVar1[3] = auVar17._0_4_;
  *(ulonglong *)(lVar12 + 0x20 + lVar4) = local_98;
  *(undefined4 *)(lVar12 + 0x28 + lVar4) = (undefined4)uStack_90;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar5 = this_00->SourceVertices;
  local_98 = (ulonglong)local_res8;
  auVar17 = roundps(auVar17,ZEXT416((uint)(local_res18 *
                                           *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) +
                                          fStackX_1c * *(float *)((longlong)&param_1->_padding_ + 4)
                                          + fVar6)),1);
  auVar18 = roundps(auVar18,ZEXT416((uint)(fStackX_1c * *(float *)&param_1->_padding_ +
                                           local_res18 * *(float *)&param_1->_padding_ +
                                          *(float *)&param_1->_padding_ + fVar6)),1);
  iVar9 = UE::Core::Private::
          ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                    (0x2c,4,1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,&pTVar5->ArrayMax);
  lVar12 = (longlong)iVar9 * 0x2c;
  lVar4 = (this_00->SourceVertices->AllocatorInstance)._padding_;
  *(undefined8 *)(lVar12 + lVar4) = uVar7;
  ((undefined8 *)(lVar12 + lVar4))[1] = uVar8;
  puVar1 = (undefined4 *)(lVar12 + 0x10 + lVar4);
  *puVar1 = (undefined4)local_a8;
  puVar1[1] = local_a8._4_4_;
  puVar1[2] = auVar18._0_4_;
  puVar1[3] = auVar17._0_4_;
  *(ulonglong *)(lVar12 + 0x20 + lVar4) = local_98;
  *(undefined4 *)(lVar12 + 0x28 + lVar4) = (undefined4)uStack_90;
  this_00->NumVertices = this_00->NumVertices + 1;
  FSlateRenderBatch::AddIndex(this_00,0);
  FSlateRenderBatch::AddIndex(this_00,1);
  FSlateRenderBatch::AddIndex(this_00,2);
  FSlateRenderBatch::AddIndex(this_00,2);
  FSlateRenderBatch::AddIndex(this_00,1);
  FSlateRenderBatch::AddIndex(this_00,3);
  return;
}

// AddDebugQuadElement<0> @ 1424cdc90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddDebugQuadElement<0>(FSlateElementBatcher *this,FSlateBoxElement *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  schar sVar4;
  ESlateDrawEffect EVar5;
  longlong lVar6;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  FSlateRenderBatch *this_00;
  FSlateClippingState *pFVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint local_res8;
  float local_res10;
  float fStackX_14;
  float local_res18;
  float fStackX_1c;
  FLinearColor_u_0 local_b8;
  TVector4<float>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  
  local_b8._s_0.R = (float)*(undefined4 *)&param_1->_padding_;
  local_b8._s_0.G = *(float *)((longlong)&param_1->_padding_ + 4);
  local_b8._s_0.B = (float)*(undefined4 *)&param_1->_padding_;
  local_b8._s_0.A = *(float *)((longlong)&param_1->_padding_ + 4);
  if (this->bSRGBVertexColor == false) {
    fVar18 = local_b8._s_0.B;
    if (local_b8._s_0.B <= 0.0) {
      fVar18 = 0.0;
    }
    if (__real_3f800000 <= fVar18) {
      fVar18 = __real_3f800000;
    }
    fVar19 = local_b8._s_0.G;
    if (local_b8._s_0.G <= 0.0) {
      fVar19 = 0.0;
    }
    if (__real_3f800000 <= fVar19) {
      fVar19 = __real_3f800000;
    }
    fVar16 = local_b8._s_0.R;
    if (local_b8._s_0.R <= 0.0) {
      fVar16 = 0.0;
    }
    fVar17 = local_b8._s_0.A;
    if (local_b8._s_0.A <= 0.0) {
      fVar17 = 0.0;
    }
    if (__real_3f800000 <= fVar16) {
      fVar16 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar17) {
      fVar17 = __real_3f800000;
    }
    local_res8 = CONCAT13((char)(int)(fVar17 * __real_437f0000 + __real_3f000000),
                          CONCAT12((char)(int)(fVar16 * __real_437f0000 + __real_3f000000),
                                   CONCAT11((char)(int)(fVar19 * __real_437f0000 + __real_3f000000),
                                            (char)(int)(fVar18 * __real_437f0000 + __real_3f000000))
                                  ));
  }
  else {
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_b8._s_0);
  }
  lVar6 = param_1->_padding_;
  sVar4 = *(schar *)((longlong)&param_1->_padding_ + 2);
  iVar12 = (int)param_1->_padding_;
  EVar5 = *(ESlateDrawEffect *)((longlong)&param_1->_padding_ + 3);
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    this_00 = FSlateBatchData::AddRenderBatch
                        (this->BatchData,iVar12,(FShaderParams *)&local_a8._s_0,
                         (FSlateShaderResource *)0x0,TriangleList,Default,EVar5,None,sVar4);
  }
  else {
    this_00 = FSlateCachedElementList::AddRenderBatch
                        (this->CurrentCachedElementList,iVar12,(FShaderParams *)&local_a8._s_0,
                         (FSlateShaderResource *)0x0,TriangleList,Default,EVar5,None,sVar4);
  }
  pFVar13 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
  uVar9 = _UNK_15076b1e8;
  uVar8 = ___xmm_3f8000003f8000000000000000000000;
  this_00->ClippingState = pFVar13;
  pTVar7 = this_00->SourceVertices;
  fStackX_14 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  local_88 = (ulonglong)local_res8;
  fVar19 = local_res10 * *(float *)((longlong)&param_1->_padding_ + 4) +
           fStackX_14 * *(float *)((longlong)&param_1->_padding_ + 4) +
           *(float *)((longlong)&param_1->_padding_ + 4);
  fVar18 = fStackX_14 * *(float *)&param_1->_padding_ + local_res10 * *(float *)&param_1->_padding_
           + *(float *)&param_1->_padding_;
  iVar12 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax);
  uVar11 = _UNK_15090c6d8;
  uVar10 = ___xmm_3f8000003f800000000000003f800000;
  local_res18 = (float)lVar6;
  lVar14 = (longlong)iVar12 * 0x2c;
  lVar15 = (this_00->SourceVertices->AllocatorInstance)._padding_;
  uStack_90 = CONCAT44(fVar19,fVar18);
  *(undefined8 *)(lVar14 + lVar15) = uVar8;
  ((undefined8 *)(lVar14 + lVar15))[1] = uVar9;
  puVar1 = (undefined4 *)(lVar14 + 0x10 + lVar15);
  *puVar1 = (undefined4)local_98;
  puVar1[1] = local_98._4_4_;
  puVar1[2] = fVar18;
  puVar1[3] = fVar19;
  *(ulonglong *)(lVar14 + 0x20 + lVar15) = local_88;
  *(undefined4 *)(lVar14 + 0x28 + lVar15) = (undefined4)uStack_80;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar7 = this_00->SourceVertices;
  local_88 = (ulonglong)local_res8;
  fVar18 = local_res18 * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
  fVar19 = local_res18 * *(float *)((longlong)&param_1->_padding_ + 4) +
           *(float *)((longlong)&param_1->_padding_ + 4);
  iVar12 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax);
  lVar14 = (longlong)iVar12 * 0x2c;
  lVar15 = (this_00->SourceVertices->AllocatorInstance)._padding_;
  *(undefined8 *)(lVar14 + lVar15) = uVar10;
  ((undefined8 *)(lVar14 + lVar15))[1] = uVar11;
  uVar11 = _UNK_15090c6e8;
  uVar10 = ___xmm_3f8000003f8000003f80000000000000;
  fStackX_1c = (float)((ulonglong)lVar6 >> 0x20);
  puVar1 = (undefined4 *)(lVar14 + 0x10 + lVar15);
  *puVar1 = (undefined4)local_98;
  puVar1[1] = local_98._4_4_;
  puVar1[2] = fVar18;
  puVar1[3] = fVar19;
  uStack_90 = CONCAT44(fVar19,fVar18);
  *(ulonglong *)(lVar14 + 0x20 + lVar15) = local_88;
  *(undefined4 *)(lVar14 + 0x28 + lVar15) = (undefined4)uStack_80;
  this_00->NumVertices = this_00->NumVertices + 1;
  pTVar7 = this_00->SourceVertices;
  local_88 = (ulonglong)local_res8;
  fVar18 = fStackX_1c * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
  fVar19 = fStackX_1c * *(float *)((longlong)&param_1->_padding_ + 4) +
           *(float *)((longlong)&param_1->_padding_ + 4);
  iVar12 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax);
  uVar9 = _UNK_15076b1f8;
  uVar8 = ___xmm_3f8000003f8000003f8000003f800000;
  lVar15 = (longlong)iVar12 * 0x2c;
  lVar6 = (this_00->SourceVertices->AllocatorInstance)._padding_;
  uStack_90 = CONCAT44(fVar19,fVar18);
  *(undefined8 *)(lVar15 + lVar6) = uVar10;
  ((undefined8 *)(lVar15 + lVar6))[1] = uVar11;
  puVar1 = (undefined4 *)(lVar15 + 0x10 + lVar6);
  *puVar1 = (undefined4)local_98;
  puVar1[1] = local_98._4_4_;
  puVar1[2] = fVar18;
  puVar1[3] = fVar19;
  *(ulonglong *)(lVar15 + 0x20 + lVar6) = local_88;
  *(undefined4 *)(lVar15 + 0x28 + lVar6) = (undefined4)uStack_80;
  this_00->NumVertices = this_00->NumVertices + 1;
  fVar18 = *(float *)&param_1->_padding_;
  pTVar7 = this_00->SourceVertices;
  fVar19 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar16 = *(float *)&param_1->_padding_;
  fVar17 = *(float *)((longlong)&param_1->_padding_ + 4);
  local_88 = (ulonglong)local_res8;
  fVar2 = *(float *)&param_1->_padding_;
  fVar3 = *(float *)((longlong)&param_1->_padding_ + 4);
  iVar12 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax);
  lVar15 = (longlong)iVar12 * 0x2c;
  lVar6 = (this_00->SourceVertices->AllocatorInstance)._padding_;
  *(undefined8 *)(lVar15 + lVar6) = uVar8;
  ((undefined8 *)(lVar15 + lVar6))[1] = uVar9;
  puVar1 = (undefined4 *)(lVar15 + 0x10 + lVar6);
  *puVar1 = (undefined4)local_98;
  puVar1[1] = local_98._4_4_;
  puVar1[2] = fStackX_1c * fVar18 + local_res18 * fVar16 + fVar2;
  puVar1[3] = fStackX_1c * fVar19 + local_res18 * fVar17 + fVar3;
  *(ulonglong *)(lVar15 + 0x20 + lVar6) = local_88;
  *(undefined4 *)(lVar15 + 0x28 + lVar6) = (undefined4)uStack_80;
  this_00->NumVertices = this_00->NumVertices + 1;
  FSlateRenderBatch::AddIndex(this_00,0);
  FSlateRenderBatch::AddIndex(this_00,1);
  FSlateRenderBatch::AddIndex(this_00,2);
  FSlateRenderBatch::AddIndex(this_00,2);
  FSlateRenderBatch::AddIndex(this_00,1);
  FSlateRenderBatch::AddIndex(this_00,3);
  return;
}

// AddGradientElement<1> @ 1424ce130

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddGradientElement<1>
          (FSlateElementBatcher *this,FSlateGradientElement *param_1)

{
  float *pfVar1;
  float fVar2;
  ESlateDrawEffect EVar3;
  schar sVar4;
  ESlateBatchDrawFlag EVar5;
  longlong lVar6;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar7;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar8;
  int *piVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  FColor FVar13;
  float fVar14;
  TVector2<float> TVar15;
  float fVar16;
  bool bVar17;
  ESlateShader EVar18;
  int iVar19;
  int iVar20;
  FSlateRenderBatch *pFVar21;
  FSlateClippingState *pFVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> local_2b8;
  undefined8 local_2a8;
  undefined4 local_2a0;
  float local_29c;
  int local_298 [2];
  int local_290 [2];
  int local_288 [2];
  int local_280 [2];
  int local_278 [2];
  int local_270 [2];
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  FScriptContainerElement *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  float local_238;
  float fStack_234;
  undefined8 uStack_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined4 local_218;
  FColor_u_0 FStack_214;
  undefined4 local_210;
  float local_208;
  float fStack_204;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 local_1e8;
  FColor_u_0 FStack_1e4;
  undefined4 local_1e0;
  float local_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined4 local_1b8;
  FColor_u_0 FStack_1b4;
  undefined4 local_1b0;
  float local_1a8;
  float fStack_1a4;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined4 local_188;
  FColor_u_0 FStack_184;
  undefined4 local_180;
  longlong local_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong local_160;
  longlong lStack_158;
  longlong lStack_150;
  TVector2<float>_u_0 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  TVector2<float>_u_0 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  TVector4<float>_u_0 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  local_29c = *(float *)((longlong)&param_1->_padding_ + 4);
  EVar3 = *(ESlateDrawEffect *)((longlong)&param_1->_padding_ + 3);
  iVar19 = (int)param_1->_padding_;
  lVar6 = param_1->_padding_;
  local_250 = lVar6;
  if (((param_1->GradientStops).ArrayNum < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("DrawElement.GradientStops.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                          ,0x6a5,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  fVar11 = __real_3f800000;
  EVar18 = Default;
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  fVar38 = (float)local_250;
  fVar35 = local_250._4_4_;
  if (((((param_1->CornerRadius).field0_0x0._s_0.X != 0.0) ||
       ((param_1->CornerRadius).field0_0x0._s_0.Y != 0.0)) ||
      ((param_1->CornerRadius).field0_0x0._s_0.Z != 0.0)) ||
     (__real_3f800000 != (param_1->CornerRadius).field0_0x0._s_0.W)) {
    local_108 = *(undefined8 *)&(param_1->CornerRadius).field0_0x0;
    uStack_100 = *(undefined8 *)((longlong)&(param_1->CornerRadius).field0_0x0 + 8);
    EVar18 = RoundedBox;
    local_118._8_8_ = local_250;
  }
  sVar4 = *(schar *)((longlong)&param_1->_padding_ + 2);
  EVar5 = (ESlateBatchDrawFlag)param_1->_padding_;
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    pFVar21 = FSlateBatchData::AddRenderBatch
                        (this->BatchData,iVar19,(FShaderParams *)&local_118._s_0,
                         (FSlateShaderResource *)0x0,TriangleList,EVar18,EVar3,EVar5,sVar4);
  }
  else {
    pFVar21 = FSlateCachedElementList::AddRenderBatch
                        (this->CurrentCachedElementList,iVar19,(FShaderParams *)&local_118._s_0,
                         (FSlateShaderResource *)0x0,TriangleList,EVar18,EVar3,EVar5,sVar4);
  }
  pFVar22 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
  pFVar21->ClippingState = pFVar22;
  TVar15 = UE::Math::TVector2<float>::ZeroVector;
  local_2b8.ArrayNum = (param_1->GradientStops).ArrayNum;
  lVar24 = (longlong)local_2b8.ArrayNum;
  pFVar27 = (param_1->GradientStops).AllocatorInstance.Data;
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_2b8.ArrayNum == 0) {
    local_2b8.ArrayMax = 0;
    iVar19 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,local_2b8.ArrayNum,0,&local_2b8.AllocatorInstance,local_2b8.ArrayNum,
               &local_2b8.ArrayMax);
    memcpy(local_2b8.AllocatorInstance.Data,pFVar27,lVar24 * 0x18);
    iVar19 = local_2b8.ArrayNum;
  }
  if (((param_1->GradientStops).ArrayNum < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     iVar19 = local_2b8.ArrayNum, bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar20 = (param_1->GradientStops).ArrayNum;
  local_258 = (param_1->GradientStops).AllocatorInstance.Data;
  uVar26 = iVar20 - 1;
  uVar25 = 0;
  if ((int)uVar26 < iVar20) {
    uVar25 = ~uVar26 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     iVar19 = local_2b8.ArrayNum, bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar27 = (param_1->GradientStops).AllocatorInstance.Data;
  lVar24 = (longlong)(int)uVar26;
  if (param_1->GradientType == Orient_Vertical) {
    if (0.0 < *(float *)local_258) {
      local_140 = *(undefined8 *)(local_258 + 8);
      uStack_138 = *(undefined8 *)(local_258 + 0x10);
      local_148 = (TVector2<float>_u_0)0x0;
      TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>::Insert
                (&local_2b8,(FSlateGradientStop *)&local_148._s_0,0);
      iVar19 = local_2b8.ArrayNum;
    }
    if (fVar38 < *(float *)(pFVar27 + lVar24 * 0x18) ||
        fVar38 == *(float *)(pFVar27 + lVar24 * 0x18)) goto LAB_1424ce5ef;
    lStack_170 = *(longlong *)(pFVar27 + lVar24 * 0x18 + 8);
    lStack_168 = *(longlong *)(pFVar27 + lVar24 * 0x18 + 8 + 8);
    local_178 = lVar6;
    if (((local_2b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_178) &&
        ((FScriptContainerElement *)&local_178 <
         local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayMax * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), iVar19 = local_2b8.ArrayNum, bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (iVar19 == local_2b8.ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
    }
    lVar24 = (longlong)iVar19;
    *(longlong *)(local_2b8.AllocatorInstance.Data + lVar24 * 0x18) = local_178;
    *(longlong *)(local_2b8.AllocatorInstance.Data + lVar24 * 0x18 + 8) = lStack_170;
    uVar29 = (undefined4)lStack_168;
    uVar31 = (undefined4)((ulonglong)lStack_168 >> 0x20);
  }
  else {
    if (0.0 < *(float *)(local_258 + 4)) {
      local_128 = *(undefined8 *)(local_258 + 8);
      uStack_120 = *(undefined8 *)(local_258 + 0x10);
      local_130 = (TVector2<float>_u_0)0x0;
      TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>::Insert
                (&local_2b8,(FSlateGradientStop *)&local_130._s_0,0);
      iVar19 = local_2b8.ArrayNum;
    }
    if (fVar35 < *(float *)(pFVar27 + lVar24 * 0x18 + 4) ||
        fVar35 == *(float *)(pFVar27 + lVar24 * 0x18 + 4)) goto LAB_1424ce5ef;
    lStack_158 = *(longlong *)(pFVar27 + lVar24 * 0x18 + 8);
    lStack_150 = *(longlong *)(pFVar27 + lVar24 * 0x18 + 8 + 8);
    local_160 = lVar6;
    if (((local_2b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_160) &&
        ((FScriptContainerElement *)&local_160 <
         local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayMax * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), iVar19 = local_2b8.ArrayNum, bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (iVar19 == local_2b8.ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
    }
    lVar24 = (longlong)iVar19;
    *(longlong *)(local_2b8.AllocatorInstance.Data + lVar24 * 0x18) = local_160;
    *(longlong *)(local_2b8.AllocatorInstance.Data + lVar24 * 0x18 + 8) = lStack_158;
    uVar29 = (undefined4)lStack_150;
    uVar31 = (undefined4)((ulonglong)lStack_150 >> 0x20);
  }
  local_2b8.ArrayNum = iVar19 + 1;
  *(ulonglong *)(local_2b8.AllocatorInstance.Data + lVar24 * 0x18 + 0x10) = CONCAT44(uVar31,uVar29);
  iVar19 = local_2b8.ArrayNum;
LAB_1424ce5ef:
  fVar14 = __real_437f0000;
  fVar12 = __real_3f000000;
  uVar25 = 0;
  if (0 < iVar19) {
    local_258 = (FScriptContainerElement *)0x0;
    do {
      auVar32 = ZEXT416((uint)fVar38);
      local_240 = CONCAT44(local_240._4_4_,pFVar21->NumVertices);
      uVar26 = 0;
      if ((int)uVar25 < iVar19) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar24 = local_240;
      FVar13.field0_0x0 = FColor::Transparent.field0_0x0;
      local_2a8._0_4_ = TVar15.field0_0x0._0_4_;
      local_2a8._4_4_ = TVar15.field0_0x0._4_4_;
      if (param_1->GradientType == Orient_Vertical) {
        fVar2 = *(float *)(local_258 + local_2b8.AllocatorInstance.Data);
        fVar37 = 0.0;
        local_2a8._0_4_ = (float)local_2a8 + fVar2;
        local_25c = fVar11;
        local_268 = (fVar11 / fVar38) * (float)local_2a8;
        local_260 = fVar2 * (fVar11 / fVar38);
        fVar38 = fVar2;
        local_264 = fVar35;
      }
      else {
        local_264 = *(float *)(local_258 + 4 + local_2b8.AllocatorInstance.Data);
        local_2a8._4_4_ = local_2a8._4_4_ + local_264;
        local_268 = 0.0;
        local_260 = fVar11;
        fVar37 = local_2a8._4_4_ / fVar35;
        local_25c = fVar37;
      }
      pFVar27 = local_2b8.AllocatorInstance.Data + 8 + (longlong)local_258;
      local_240._0_4_ = (float)lVar6;
      fVar2 = (float)local_240;
      local_240._4_4_ = (float)((ulonglong)lVar6 >> 0x20);
      fVar16 = local_240._4_4_;
      local_240 = lVar24;
      if (uVar25 == 0) {
        if (this->bSRGBVertexColor == false) {
          fVar34 = *(float *)(pFVar27 + 8);
          fVar36 = *(float *)(pFVar27 + 4);
          if (fVar34 <= 0.0) {
            fVar34 = 0.0;
          }
          if (fVar36 <= 0.0) {
            fVar36 = 0.0;
          }
          if (fVar11 <= fVar34) {
            fVar34 = fVar11;
          }
          if (fVar11 <= fVar36) {
            fVar36 = fVar11;
          }
          fVar28 = *(float *)pFVar27;
          if (fVar28 <= 0.0) {
            fVar28 = 0.0;
          }
          fVar30 = *(float *)(pFVar27 + 0xc);
          if (fVar11 <= fVar28) {
            fVar28 = fVar11;
          }
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          if (fVar11 <= fVar30) {
            fVar30 = fVar11;
          }
          local_res10 = CONCAT13((char)(int)(fVar30 * fVar14 + fVar12),
                                 CONCAT12((char)(int)(fVar28 * fVar14 + fVar12),
                                          CONCAT11((char)(int)(fVar36 * fVar14 + fVar12),
                                                   (char)(int)(fVar34 * fVar14 + fVar12))));
        }
        else {
          FLinearColor::ToFColorSRGB((FLinearColor *)pFVar27);
        }
        pTVar7 = pFVar21->SourceVertices;
        local_218 = local_res10;
        uStack_230 = 0;
        FStack_214 = FVar13.field0_0x0;
        fVar36 = (float)local_2a8 / fVar2;
        fVar34 = local_2a8._4_4_ / fVar16;
        auVar33 = roundps(auVar32,ZEXT416((uint)(local_2a8._4_4_ * *(float *)&param_1->_padding_ +
                                                 *(float *)&param_1->_padding_ +
                                                (float)local_2a8 * *(float *)&param_1->_padding_ +
                                                fVar12)),1);
        auVar32 = roundps(ZEXT416((uint)fVar35),
                          ZEXT416((uint)((float)local_2a8 *
                                         *(float *)((longlong)&param_1->_padding_ + 4) +
                                         *(float *)((longlong)&param_1->_padding_ + 4) +
                                        local_2a8._4_4_ *
                                        *(float *)((longlong)&param_1->_padding_ + 4) + fVar12)),1);
        local_210 = CONCAT22((short)((int)ROUND(fVar16 * local_29c + fVar16 * local_29c + fVar12) >>
                                    1),
                             (short)((int)ROUND(fVar2 * local_29c + fVar2 * local_29c + fVar12) >> 1
                                    ));
        local_240 = lVar6;
        iVar19 = UE::Core::Private::
                 ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                           (0x2c,4,1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax)
        ;
        lVar23 = (longlong)iVar19 * 0x2c;
        fStack_220 = auVar33._0_4_;
        lVar24 = (pFVar21->SourceVertices->AllocatorInstance)._padding_;
        fStack_21c = auVar32._0_4_;
        pfVar1 = (float *)(lVar23 + lVar24);
        *pfVar1 = local_268;
        pfVar1[1] = fVar37;
        pfVar1[2] = (float)uStack_230;
        pfVar1[3] = uStack_230._4_4_;
        pfVar1 = (float *)(lVar23 + 0x10 + lVar24);
        *pfVar1 = fVar36;
        pfVar1[1] = fVar34;
        pfVar1[2] = fStack_220;
        pfVar1[3] = fStack_21c;
        local_238 = local_268;
        *(ulonglong *)(lVar23 + 0x20 + lVar24) = CONCAT44(FStack_214.Bits,local_218);
        *(undefined4 *)(lVar23 + 0x28 + lVar24) = local_210;
        pFVar21->NumVertices = pFVar21->NumVertices + 1;
        FVar13 = FColor::Transparent;
        fStack_234 = fVar37;
        local_228 = fVar36;
        fStack_224 = fVar34;
        if (this->bSRGBVertexColor == false) {
          fVar35 = *(float *)(pFVar27 + 8);
          fVar37 = *(float *)(pFVar27 + 4);
          if (fVar35 <= 0.0) {
            fVar35 = 0.0;
          }
          if (fVar37 <= 0.0) {
            fVar37 = 0.0;
          }
          if (fVar11 <= fVar35) {
            fVar35 = fVar11;
          }
          if (fVar11 <= fVar37) {
            fVar37 = fVar11;
          }
          fVar34 = *(float *)pFVar27;
          if (fVar34 <= 0.0) {
            fVar34 = 0.0;
          }
          fVar36 = *(float *)(pFVar27 + 0xc);
          if (fVar11 <= fVar34) {
            fVar34 = fVar11;
          }
          if (fVar36 <= 0.0) {
            fVar36 = 0.0;
          }
          if (fVar11 <= fVar36) {
            fVar36 = fVar11;
          }
          local_res18 = CONCAT13((char)(int)(fVar36 * fVar14 + fVar12),
                                 CONCAT12((char)(int)(fVar34 * fVar14 + fVar12),
                                          CONCAT11((char)(int)(fVar37 * fVar14 + fVar12),
                                                   (char)(int)(fVar35 * fVar14 + fVar12))));
        }
        else {
          FLinearColor::ToFColorSRGB((FLinearColor *)pFVar27);
        }
        pTVar7 = pFVar21->SourceVertices;
        local_1e8 = local_res18;
        uStack_200 = 0;
        FStack_1e4 = FVar13.field0_0x0;
        fVar35 = local_264 / fVar16;
        auVar33 = roundps(auVar33,ZEXT416((uint)(local_264 * *(float *)&param_1->_padding_ +
                                                 *(float *)&param_1->_padding_ +
                                                fVar38 * *(float *)&param_1->_padding_ + fVar12)),1)
        ;
        auVar32 = roundps(auVar32,ZEXT416((uint)(fVar38 * *(float *)((longlong)&param_1->_padding_ +
                                                                    4) +
                                                 *(float *)((longlong)&param_1->_padding_ + 4) +
                                                local_264 *
                                                *(float *)((longlong)&param_1->_padding_ + 4) +
                                                fVar12)),1);
        local_1e0 = CONCAT22((short)((int)ROUND(fVar16 * local_29c + fVar16 * local_29c + fVar12) >>
                                    1),
                             (short)((int)ROUND(fVar2 * local_29c + fVar2 * local_29c + fVar12) >> 1
                                    ));
        local_2a8 = lVar6;
        iVar19 = UE::Core::Private::
                 ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                           (0x2c,4,1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax)
        ;
        lVar23 = (longlong)iVar19 * 0x2c;
        fStack_1f0 = auVar33._0_4_;
        lVar24 = (pFVar21->SourceVertices->AllocatorInstance)._padding_;
        pfVar1 = (float *)(lVar23 + lVar24);
        *pfVar1 = local_260;
        pfVar1[1] = local_25c;
        pfVar1[2] = (float)uStack_200;
        pfVar1[3] = uStack_200._4_4_;
        fStack_1ec = auVar32._0_4_;
        pfVar1 = (float *)(lVar23 + 0x10 + lVar24);
        *pfVar1 = fVar38 / fVar2;
        pfVar1[1] = fVar35;
        pfVar1[2] = fStack_1f0;
        pfVar1[3] = fStack_1ec;
        local_208 = local_260;
        fStack_204 = local_25c;
        *(ulonglong *)(lVar23 + 0x20 + lVar24) = CONCAT44(FStack_1e4.Bits,local_1e8);
        *(undefined4 *)(lVar23 + 0x28 + lVar24) = local_1e0;
        pFVar21->NumVertices = pFVar21->NumVertices + 1;
        local_1f8 = fVar38 / fVar2;
        fStack_1f4 = fVar35;
      }
      else {
        if (this->bSRGBVertexColor == false) {
          fVar34 = *(float *)(pFVar27 + 8);
          fVar36 = *(float *)(pFVar27 + 4);
          if (fVar34 <= 0.0) {
            fVar34 = 0.0;
          }
          if (fVar36 <= 0.0) {
            fVar36 = 0.0;
          }
          if (fVar11 <= fVar34) {
            fVar34 = fVar11;
          }
          if (fVar11 <= fVar36) {
            fVar36 = fVar11;
          }
          fVar28 = *(float *)pFVar27;
          if (fVar28 <= 0.0) {
            fVar28 = 0.0;
          }
          fVar30 = *(float *)(pFVar27 + 0xc);
          if (fVar11 <= fVar28) {
            fVar28 = fVar11;
          }
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          if (fVar11 <= fVar30) {
            fVar30 = fVar11;
          }
          local_res20 = CONCAT13((char)(int)(fVar30 * fVar14 + fVar12),
                                 CONCAT12((char)(int)(fVar28 * fVar14 + fVar12),
                                          CONCAT11((char)(int)(fVar36 * fVar14 + fVar12),
                                                   (char)(int)(fVar34 * fVar14 + fVar12))));
        }
        else {
          FLinearColor::ToFColorSRGB((FLinearColor *)pFVar27);
        }
        pTVar7 = pFVar21->SourceVertices;
        local_1b8 = local_res20;
        uStack_1d0 = 0;
        FStack_1b4 = FVar13.field0_0x0;
        fVar36 = (float)local_2a8 / fVar2;
        fVar34 = local_2a8._4_4_ / fVar16;
        auVar33 = roundps(auVar32,ZEXT416((uint)(local_2a8._4_4_ * *(float *)&param_1->_padding_ +
                                                 *(float *)&param_1->_padding_ +
                                                (float)local_2a8 * *(float *)&param_1->_padding_ +
                                                fVar12)),1);
        auVar32 = roundps(ZEXT416((uint)fVar35),
                          ZEXT416((uint)((float)local_2a8 *
                                         *(float *)((longlong)&param_1->_padding_ + 4) +
                                         *(float *)((longlong)&param_1->_padding_ + 4) +
                                        local_2a8._4_4_ *
                                        *(float *)((longlong)&param_1->_padding_ + 4) + fVar12)),1);
        local_1b0 = CONCAT22((short)((int)ROUND(fVar16 * local_29c + fVar16 * local_29c + fVar12) >>
                                    1),
                             (short)((int)ROUND(fVar2 * local_29c + fVar2 * local_29c + fVar12) >> 1
                                    ));
        local_248 = lVar6;
        iVar19 = UE::Core::Private::
                 ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                           (0x2c,4,1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax)
        ;
        lVar23 = (longlong)iVar19 * 0x2c;
        fStack_1c0 = auVar33._0_4_;
        lVar24 = (pFVar21->SourceVertices->AllocatorInstance)._padding_;
        fStack_1bc = auVar32._0_4_;
        pfVar1 = (float *)(lVar23 + lVar24);
        *pfVar1 = local_268;
        pfVar1[1] = fVar37;
        pfVar1[2] = (float)uStack_1d0;
        pfVar1[3] = uStack_1d0._4_4_;
        pfVar1 = (float *)(lVar23 + 0x10 + lVar24);
        *pfVar1 = fVar36;
        pfVar1[1] = fVar34;
        pfVar1[2] = fStack_1c0;
        pfVar1[3] = fStack_1bc;
        local_1d8 = local_268;
        *(ulonglong *)(lVar23 + 0x20 + lVar24) = CONCAT44(FStack_1b4.Bits,local_1b8);
        *(undefined4 *)(lVar23 + 0x28 + lVar24) = local_1b0;
        pFVar21->NumVertices = pFVar21->NumVertices + 1;
        FVar13 = FColor::Transparent;
        fStack_1d4 = fVar37;
        local_1c8 = fVar36;
        fStack_1c4 = fVar34;
        if (this->bSRGBVertexColor == false) {
          fVar35 = *(float *)(pFVar27 + 8);
          fVar37 = *(float *)(pFVar27 + 4);
          if (fVar35 <= 0.0) {
            fVar35 = 0.0;
          }
          if (fVar37 <= 0.0) {
            fVar37 = 0.0;
          }
          if (fVar11 <= fVar35) {
            fVar35 = fVar11;
          }
          if (fVar11 <= fVar37) {
            fVar37 = fVar11;
          }
          fVar34 = *(float *)pFVar27;
          if (fVar34 <= 0.0) {
            fVar34 = 0.0;
          }
          fVar36 = *(float *)(pFVar27 + 0xc);
          if (fVar11 <= fVar34) {
            fVar34 = fVar11;
          }
          if (fVar36 <= 0.0) {
            fVar36 = 0.0;
          }
          if (fVar11 <= fVar36) {
            fVar36 = fVar11;
          }
          local_2a0 = CONCAT13((char)(int)(fVar36 * fVar14 + fVar12),
                               CONCAT12((char)(int)(fVar34 * fVar14 + fVar12),
                                        CONCAT11((char)(int)(fVar37 * fVar14 + fVar12),
                                                 (char)(int)(fVar35 * fVar14 + fVar12))));
        }
        else {
          FLinearColor::ToFColorSRGB((FLinearColor *)pFVar27);
        }
        pTVar7 = pFVar21->SourceVertices;
        local_188 = local_2a0;
        uStack_1a0 = 0;
        fVar37 = fVar38 / fVar2;
        FStack_184 = FVar13.field0_0x0;
        fVar35 = local_264 / fVar16;
        auVar33 = roundps(auVar33,ZEXT416((uint)(local_264 * *(float *)&param_1->_padding_ +
                                                 *(float *)&param_1->_padding_ +
                                                fVar38 * *(float *)&param_1->_padding_ + fVar12)),1)
        ;
        auVar32 = roundps(auVar32,ZEXT416((uint)(fVar38 * *(float *)((longlong)&param_1->_padding_ +
                                                                    4) +
                                                 *(float *)((longlong)&param_1->_padding_ + 4) +
                                                local_264 *
                                                *(float *)((longlong)&param_1->_padding_ + 4) +
                                                fVar12)),1);
        local_180 = CONCAT22((short)((int)ROUND(fVar16 * local_29c + fVar16 * local_29c + fVar12) >>
                                    1),
                             (short)((int)ROUND(fVar2 * local_29c + fVar2 * local_29c + fVar12) >> 1
                                    ));
        local_248 = lVar6;
        iVar20 = UE::Core::Private::
                 ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                           (0x2c,4,1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax)
        ;
        iVar19 = (int)(float)local_240;
        lVar23 = (longlong)iVar20 * 0x2c;
        fStack_190 = auVar33._0_4_;
        lVar24 = (pFVar21->SourceVertices->AllocatorInstance)._padding_;
        fStack_18c = auVar32._0_4_;
        pfVar1 = (float *)(lVar23 + lVar24);
        *pfVar1 = local_260;
        pfVar1[1] = local_25c;
        pfVar1[2] = (float)uStack_1a0;
        pfVar1[3] = uStack_1a0._4_4_;
        pfVar1 = (float *)(lVar23 + 0x10 + lVar24);
        *pfVar1 = fVar37;
        pfVar1[1] = fVar35;
        pfVar1[2] = fStack_190;
        pfVar1[3] = fStack_18c;
        local_1a8 = local_260;
        fStack_1a4 = local_25c;
        *(ulonglong *)(lVar23 + 0x20 + lVar24) = CONCAT44(FStack_184.Bits,local_188);
        *(undefined4 *)(lVar23 + 0x28 + lVar24) = local_180;
        local_298[0] = (int)(float)local_240 + -2;
        pFVar21->NumVertices = pFVar21->NumVertices + 1;
        pTVar8 = pFVar21->SourceIndices;
        piVar9 = (int *)(pTVar8->AllocatorInstance)._padding_;
        local_198 = fVar37;
        fStack_194 = fVar35;
        if (((piVar9 <= local_298) && (local_298 < piVar9 + pTVar8->ArrayMax)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar20 = pTVar8->ArrayNum;
        if (iVar20 == pTVar8->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pTVar8->ArrayNum = iVar20 + 1;
        *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar20 * 4) = local_298[0];
        local_290[0] = iVar19 + -1;
        pFVar21->NumIndices = pFVar21->NumIndices + 1;
        pTVar8 = pFVar21->SourceIndices;
        piVar9 = (int *)(pTVar8->AllocatorInstance)._padding_;
        if (((piVar9 <= local_290) && (local_290 < piVar9 + pTVar8->ArrayMax)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar20 = pTVar8->ArrayNum;
        if (iVar20 == pTVar8->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pTVar8->ArrayNum = iVar20 + 1;
        local_288[0] = iVar19;
        *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar20 * 4) = local_290[0];
        pFVar21->NumIndices = pFVar21->NumIndices + 1;
        pTVar8 = pFVar21->SourceIndices;
        piVar9 = (int *)(pTVar8->AllocatorInstance)._padding_;
        if (((piVar9 <= local_288) && (local_288 < piVar9 + pTVar8->ArrayMax)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar20 = pTVar8->ArrayNum;
        if (iVar20 == pTVar8->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pTVar8->ArrayNum = iVar20 + 1;
        local_280[0] = iVar19;
        *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar20 * 4) = local_288[0];
        pFVar21->NumIndices = pFVar21->NumIndices + 1;
        pTVar8 = pFVar21->SourceIndices;
        piVar9 = (int *)(pTVar8->AllocatorInstance)._padding_;
        if (((piVar9 <= local_280) && (local_280 < piVar9 + pTVar8->ArrayMax)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar20 = pTVar8->ArrayNum;
        if (iVar20 == pTVar8->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pTVar8->ArrayNum = iVar20 + 1;
        *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar20 * 4) = local_280[0];
        local_278[0] = iVar19 + -1;
        pFVar21->NumIndices = pFVar21->NumIndices + 1;
        pTVar8 = pFVar21->SourceIndices;
        piVar9 = (int *)(pTVar8->AllocatorInstance)._padding_;
        if (((piVar9 <= local_278) && (local_278 < piVar9 + pTVar8->ArrayMax)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar20 = pTVar8->ArrayNum;
        if (iVar20 == pTVar8->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pTVar8->ArrayNum = iVar20 + 1;
        *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar20 * 4) = local_278[0];
        local_270[0] = iVar19 + 1;
        pFVar21->NumIndices = pFVar21->NumIndices + 1;
        pTVar8 = pFVar21->SourceIndices;
        piVar9 = (int *)(pTVar8->AllocatorInstance)._padding_;
        if (((piVar9 <= local_270) && (local_270 < piVar9 + pTVar8->ArrayMax)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar19 = pTVar8->ArrayNum;
        if (iVar19 == pTVar8->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pTVar8->ArrayNum = iVar19 + 1;
        *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar19 * 4) = local_270[0];
        pFVar21->NumIndices = pFVar21->NumIndices + 1;
      }
      uVar25 = uVar25 + 1;
      local_258 = local_258 + 0x18;
      fVar35 = local_250._4_4_;
      fVar38 = (float)local_250;
      iVar19 = local_2b8.ArrayNum;
    } while ((int)uVar25 < local_2b8.ArrayNum);
  }
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  return;
}

// AddGradientElement<0> @ 1424cf450

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddGradientElement<0>
          (FSlateElementBatcher *this,FSlateGradientElement *param_1)

{
  float *pfVar1;
  float fVar2;
  ESlateDrawEffect EVar3;
  schar sVar4;
  ESlateBatchDrawFlag EVar5;
  longlong lVar6;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar7;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar8;
  int *piVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  FColor FVar13;
  float fVar14;
  TVector2<float> TVar15;
  bool bVar16;
  ESlateShader EVar17;
  int iVar18;
  int iVar19;
  FSlateRenderBatch *pFVar20;
  FSlateClippingState *pFVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> local_2b8;
  undefined8 local_2a8;
  undefined4 local_2a0;
  float local_29c;
  int local_298 [2];
  int local_290 [2];
  int local_288 [2];
  int local_280 [2];
  int local_278 [2];
  int local_270 [2];
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  FScriptContainerElement *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  float local_238;
  float fStack_234;
  undefined8 uStack_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined4 local_218;
  FColor_u_0 FStack_214;
  undefined4 local_210;
  float local_208;
  float fStack_204;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 local_1e8;
  FColor_u_0 FStack_1e4;
  undefined4 local_1e0;
  float local_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined4 local_1b8;
  FColor_u_0 FStack_1b4;
  undefined4 local_1b0;
  float local_1a8;
  float fStack_1a4;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined4 local_188;
  FColor_u_0 FStack_184;
  undefined4 local_180;
  longlong local_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong local_160;
  longlong lStack_158;
  longlong lStack_150;
  TVector2<float>_u_0 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  TVector2<float>_u_0 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  TVector4<float>_u_0 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  local_29c = *(float *)((longlong)&param_1->_padding_ + 4);
  EVar3 = *(ESlateDrawEffect *)((longlong)&param_1->_padding_ + 3);
  iVar18 = (int)param_1->_padding_;
  lVar6 = param_1->_padding_;
  local_250 = lVar6;
  if (((param_1->GradientStops).ArrayNum < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("DrawElement.GradientStops.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                          ,0x6a5,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  fVar11 = __real_3f800000;
  EVar17 = Default;
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  fVar35 = (float)local_250;
  fVar29 = local_250._4_4_;
  if (((((param_1->CornerRadius).field0_0x0._s_0.X != 0.0) ||
       ((param_1->CornerRadius).field0_0x0._s_0.Y != 0.0)) ||
      ((param_1->CornerRadius).field0_0x0._s_0.Z != 0.0)) ||
     (__real_3f800000 != (param_1->CornerRadius).field0_0x0._s_0.W)) {
    local_108 = *(undefined8 *)&(param_1->CornerRadius).field0_0x0;
    uStack_100 = *(undefined8 *)((longlong)&(param_1->CornerRadius).field0_0x0 + 8);
    EVar17 = RoundedBox;
    local_118._8_8_ = local_250;
  }
  sVar4 = *(schar *)((longlong)&param_1->_padding_ + 2);
  EVar5 = (ESlateBatchDrawFlag)param_1->_padding_;
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    pFVar20 = FSlateBatchData::AddRenderBatch
                        (this->BatchData,iVar18,(FShaderParams *)&local_118._s_0,
                         (FSlateShaderResource *)0x0,TriangleList,EVar17,EVar3,EVar5,sVar4);
  }
  else {
    pFVar20 = FSlateCachedElementList::AddRenderBatch
                        (this->CurrentCachedElementList,iVar18,(FShaderParams *)&local_118._s_0,
                         (FSlateShaderResource *)0x0,TriangleList,EVar17,EVar3,EVar5,sVar4);
  }
  pFVar21 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
  pFVar20->ClippingState = pFVar21;
  TVar15 = UE::Math::TVector2<float>::ZeroVector;
  local_2b8.ArrayNum = (param_1->GradientStops).ArrayNum;
  lVar23 = (longlong)local_2b8.ArrayNum;
  pFVar26 = (param_1->GradientStops).AllocatorInstance.Data;
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_2b8.ArrayNum == 0) {
    local_2b8.ArrayMax = 0;
    iVar18 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,local_2b8.ArrayNum,0,&local_2b8.AllocatorInstance,local_2b8.ArrayNum,
               &local_2b8.ArrayMax);
    memcpy(local_2b8.AllocatorInstance.Data,pFVar26,lVar23 * 0x18);
    iVar18 = local_2b8.ArrayNum;
  }
  if (((param_1->GradientStops).ArrayNum < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     iVar18 = local_2b8.ArrayNum, bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar19 = (param_1->GradientStops).ArrayNum;
  local_258 = (param_1->GradientStops).AllocatorInstance.Data;
  uVar25 = iVar19 - 1;
  uVar24 = 0;
  if ((int)uVar25 < iVar19) {
    uVar24 = ~uVar25 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     iVar18 = local_2b8.ArrayNum, bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar26 = (param_1->GradientStops).AllocatorInstance.Data;
  lVar23 = (longlong)(int)uVar25;
  if (param_1->GradientType == Orient_Vertical) {
    if (0.0 < *(float *)local_258) {
      local_140 = *(undefined8 *)(local_258 + 8);
      uStack_138 = *(undefined8 *)(local_258 + 0x10);
      local_148 = (TVector2<float>_u_0)0x0;
      TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>::Insert
                (&local_2b8,(FSlateGradientStop *)&local_148._s_0,0);
      iVar18 = local_2b8.ArrayNum;
    }
    if (fVar35 < *(float *)(pFVar26 + lVar23 * 0x18) ||
        fVar35 == *(float *)(pFVar26 + lVar23 * 0x18)) goto LAB_1424cf90f;
    lStack_170 = *(longlong *)(pFVar26 + lVar23 * 0x18 + 8);
    lStack_168 = *(longlong *)(pFVar26 + lVar23 * 0x18 + 8 + 8);
    local_178 = lVar6;
    if (((local_2b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_178) &&
        ((FScriptContainerElement *)&local_178 <
         local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayMax * 0x18)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), iVar18 = local_2b8.ArrayNum, bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (iVar18 == local_2b8.ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
    }
    lVar23 = (longlong)iVar18;
    *(longlong *)(local_2b8.AllocatorInstance.Data + lVar23 * 0x18) = local_178;
    *(longlong *)(local_2b8.AllocatorInstance.Data + lVar23 * 0x18 + 8) = lStack_170;
    uVar27 = (undefined4)lStack_168;
    uVar28 = (undefined4)((ulonglong)lStack_168 >> 0x20);
  }
  else {
    if (0.0 < *(float *)(local_258 + 4)) {
      local_128 = *(undefined8 *)(local_258 + 8);
      uStack_120 = *(undefined8 *)(local_258 + 0x10);
      local_130 = (TVector2<float>_u_0)0x0;
      TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>::Insert
                (&local_2b8,(FSlateGradientStop *)&local_130._s_0,0);
      iVar18 = local_2b8.ArrayNum;
    }
    if (fVar29 < *(float *)(pFVar26 + lVar23 * 0x18 + 4) ||
        fVar29 == *(float *)(pFVar26 + lVar23 * 0x18 + 4)) goto LAB_1424cf90f;
    lStack_158 = *(longlong *)(pFVar26 + lVar23 * 0x18 + 8);
    lStack_150 = *(longlong *)(pFVar26 + lVar23 * 0x18 + 8 + 8);
    local_160 = lVar6;
    if (((local_2b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_160) &&
        ((FScriptContainerElement *)&local_160 <
         local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayMax * 0x18)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), iVar18 = local_2b8.ArrayNum, bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (iVar18 == local_2b8.ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
    }
    lVar23 = (longlong)iVar18;
    *(longlong *)(local_2b8.AllocatorInstance.Data + lVar23 * 0x18) = local_160;
    *(longlong *)(local_2b8.AllocatorInstance.Data + lVar23 * 0x18 + 8) = lStack_158;
    uVar27 = (undefined4)lStack_150;
    uVar28 = (undefined4)((ulonglong)lStack_150 >> 0x20);
  }
  local_2b8.ArrayNum = iVar18 + 1;
  *(ulonglong *)(local_2b8.AllocatorInstance.Data + lVar23 * 0x18 + 0x10) = CONCAT44(uVar28,uVar27);
  iVar18 = local_2b8.ArrayNum;
LAB_1424cf90f:
  fVar14 = __real_437f0000;
  fVar12 = __real_3f000000;
  uVar24 = 0;
  if (0 < iVar18) {
    local_258 = (FScriptContainerElement *)0x0;
    do {
      local_240 = CONCAT44(local_240._4_4_,pFVar20->NumVertices);
      uVar25 = 0;
      if ((int)uVar24 < iVar18) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar23 = local_240;
      FVar13.field0_0x0 = FColor::Transparent.field0_0x0;
      local_2a8._0_4_ = TVar15.field0_0x0._0_4_;
      local_2a8._4_4_ = TVar15.field0_0x0._4_4_;
      if (param_1->GradientType == Orient_Vertical) {
        fVar2 = *(float *)(local_258 + local_2b8.AllocatorInstance.Data);
        fVar34 = 0.0;
        local_2a8._0_4_ = (float)local_2a8 + fVar2;
        local_25c = fVar11;
        local_268 = (fVar11 / fVar35) * (float)local_2a8;
        local_260 = fVar2 * (fVar11 / fVar35);
        fVar35 = fVar2;
        local_264 = fVar29;
      }
      else {
        local_264 = *(float *)(local_258 + 4 + local_2b8.AllocatorInstance.Data);
        local_2a8._4_4_ = local_2a8._4_4_ + local_264;
        local_268 = 0.0;
        local_260 = fVar11;
        fVar34 = local_2a8._4_4_ / fVar29;
        local_25c = fVar34;
      }
      pFVar26 = local_2b8.AllocatorInstance.Data + 8 + (longlong)local_258;
      local_240._0_4_ = (float)lVar6;
      fVar29 = (float)local_240;
      local_240._4_4_ = (float)((ulonglong)lVar6 >> 0x20);
      fVar2 = local_240._4_4_;
      local_240 = lVar23;
      if (uVar24 == 0) {
        if (this->bSRGBVertexColor == false) {
          fVar30 = *(float *)(pFVar26 + 8);
          fVar31 = *(float *)(pFVar26 + 4);
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          if (fVar31 <= 0.0) {
            fVar31 = 0.0;
          }
          if (fVar11 <= fVar30) {
            fVar30 = fVar11;
          }
          if (fVar11 <= fVar31) {
            fVar31 = fVar11;
          }
          fVar32 = *(float *)pFVar26;
          if (fVar32 <= 0.0) {
            fVar32 = 0.0;
          }
          fVar33 = *(float *)(pFVar26 + 0xc);
          if (fVar11 <= fVar32) {
            fVar32 = fVar11;
          }
          if (fVar33 <= 0.0) {
            fVar33 = 0.0;
          }
          if (fVar11 <= fVar33) {
            fVar33 = fVar11;
          }
          local_res10 = CONCAT13((char)(int)(fVar33 * fVar14 + fVar12),
                                 CONCAT12((char)(int)(fVar32 * fVar14 + fVar12),
                                          CONCAT11((char)(int)(fVar31 * fVar14 + fVar12),
                                                   (char)(int)(fVar30 * fVar14 + fVar12))));
        }
        else {
          FLinearColor::ToFColorSRGB((FLinearColor *)pFVar26);
        }
        pTVar7 = pFVar20->SourceVertices;
        local_218 = local_res10;
        uStack_230 = 0;
        FStack_214 = FVar13.field0_0x0;
        fVar33 = (float)local_2a8 / fVar29;
        fVar30 = local_2a8._4_4_ / fVar2;
        fVar31 = local_2a8._4_4_ * *(float *)&param_1->_padding_ +
                 (float)local_2a8 * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
        fVar32 = (float)local_2a8 * *(float *)((longlong)&param_1->_padding_ + 4) +
                 local_2a8._4_4_ * *(float *)((longlong)&param_1->_padding_ + 4) +
                 *(float *)((longlong)&param_1->_padding_ + 4);
        local_210 = CONCAT22((short)((int)ROUND(fVar2 * local_29c + fVar2 * local_29c + fVar12) >> 1
                                    ),(short)((int)ROUND(fVar29 * local_29c + fVar29 * local_29c +
                                                         fVar12) >> 1));
        local_240 = lVar6;
        iVar18 = UE::Core::Private::
                 ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                           (0x2c,4,1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax)
        ;
        lVar22 = (longlong)iVar18 * 0x2c;
        lVar23 = (pFVar20->SourceVertices->AllocatorInstance)._padding_;
        pfVar1 = (float *)(lVar22 + lVar23);
        *pfVar1 = local_268;
        pfVar1[1] = fVar34;
        pfVar1[2] = (float)uStack_230;
        pfVar1[3] = uStack_230._4_4_;
        pfVar1 = (float *)(lVar22 + 0x10 + lVar23);
        *pfVar1 = fVar33;
        pfVar1[1] = fVar30;
        pfVar1[2] = fVar31;
        pfVar1[3] = fVar32;
        local_238 = local_268;
        *(ulonglong *)(lVar22 + 0x20 + lVar23) = CONCAT44(FStack_214.Bits,local_218);
        *(undefined4 *)(lVar22 + 0x28 + lVar23) = local_210;
        pFVar20->NumVertices = pFVar20->NumVertices + 1;
        FVar13 = FColor::Transparent;
        fStack_234 = fVar34;
        local_228 = fVar33;
        fStack_224 = fVar30;
        fStack_220 = fVar31;
        fStack_21c = fVar32;
        if (this->bSRGBVertexColor == false) {
          fVar34 = *(float *)(pFVar26 + 8);
          fVar30 = *(float *)(pFVar26 + 4);
          if (fVar34 <= 0.0) {
            fVar34 = 0.0;
          }
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          if (fVar11 <= fVar34) {
            fVar34 = fVar11;
          }
          if (fVar11 <= fVar30) {
            fVar30 = fVar11;
          }
          fVar31 = *(float *)pFVar26;
          if (fVar31 <= 0.0) {
            fVar31 = 0.0;
          }
          fVar32 = *(float *)(pFVar26 + 0xc);
          if (fVar11 <= fVar31) {
            fVar31 = fVar11;
          }
          if (fVar32 <= 0.0) {
            fVar32 = 0.0;
          }
          if (fVar11 <= fVar32) {
            fVar32 = fVar11;
          }
          local_res18 = CONCAT13((char)(int)(fVar32 * fVar14 + fVar12),
                                 CONCAT12((char)(int)(fVar31 * fVar14 + fVar12),
                                          CONCAT11((char)(int)(fVar30 * fVar14 + fVar12),
                                                   (char)(int)(fVar34 * fVar14 + fVar12))));
        }
        else {
          FLinearColor::ToFColorSRGB((FLinearColor *)pFVar26);
        }
        pTVar7 = pFVar20->SourceVertices;
        local_1e8 = local_res18;
        uStack_200 = 0;
        FStack_1e4 = FVar13.field0_0x0;
        fVar30 = local_264 * *(float *)&param_1->_padding_ + fVar35 * *(float *)&param_1->_padding_
                 + *(float *)&param_1->_padding_;
        fVar34 = local_264 / fVar2;
        fVar31 = fVar35 * *(float *)((longlong)&param_1->_padding_ + 4) +
                 local_264 * *(float *)((longlong)&param_1->_padding_ + 4) +
                 *(float *)((longlong)&param_1->_padding_ + 4);
        local_1e0 = CONCAT22((short)((int)ROUND(fVar2 * local_29c + fVar2 * local_29c + fVar12) >> 1
                                    ),(short)((int)ROUND(fVar29 * local_29c + fVar29 * local_29c +
                                                         fVar12) >> 1));
        local_2a8 = lVar6;
        iVar18 = UE::Core::Private::
                 ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                           (0x2c,4,1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax)
        ;
        lVar22 = (longlong)iVar18 * 0x2c;
        lVar23 = (pFVar20->SourceVertices->AllocatorInstance)._padding_;
        pfVar1 = (float *)(lVar22 + lVar23);
        *pfVar1 = local_260;
        pfVar1[1] = local_25c;
        pfVar1[2] = (float)uStack_200;
        pfVar1[3] = uStack_200._4_4_;
        pfVar1 = (float *)(lVar22 + 0x10 + lVar23);
        *pfVar1 = fVar35 / fVar29;
        pfVar1[1] = fVar34;
        pfVar1[2] = fVar30;
        pfVar1[3] = fVar31;
        local_208 = local_260;
        fStack_204 = local_25c;
        *(ulonglong *)(lVar22 + 0x20 + lVar23) = CONCAT44(FStack_1e4.Bits,local_1e8);
        *(undefined4 *)(lVar22 + 0x28 + lVar23) = local_1e0;
        pFVar20->NumVertices = pFVar20->NumVertices + 1;
        local_1f8 = fVar35 / fVar29;
        fStack_1f4 = fVar34;
        fStack_1f0 = fVar30;
        fStack_1ec = fVar31;
      }
      else {
        if (this->bSRGBVertexColor == false) {
          fVar30 = *(float *)(pFVar26 + 8);
          fVar31 = *(float *)(pFVar26 + 4);
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          if (fVar31 <= 0.0) {
            fVar31 = 0.0;
          }
          if (fVar11 <= fVar30) {
            fVar30 = fVar11;
          }
          if (fVar11 <= fVar31) {
            fVar31 = fVar11;
          }
          fVar32 = *(float *)pFVar26;
          if (fVar32 <= 0.0) {
            fVar32 = 0.0;
          }
          fVar33 = *(float *)(pFVar26 + 0xc);
          if (fVar11 <= fVar32) {
            fVar32 = fVar11;
          }
          if (fVar33 <= 0.0) {
            fVar33 = 0.0;
          }
          if (fVar11 <= fVar33) {
            fVar33 = fVar11;
          }
          local_res20 = CONCAT13((char)(int)(fVar33 * fVar14 + fVar12),
                                 CONCAT12((char)(int)(fVar32 * fVar14 + fVar12),
                                          CONCAT11((char)(int)(fVar31 * fVar14 + fVar12),
                                                   (char)(int)(fVar30 * fVar14 + fVar12))));
        }
        else {
          FLinearColor::ToFColorSRGB((FLinearColor *)pFVar26);
        }
        pTVar7 = pFVar20->SourceVertices;
        local_1b8 = local_res20;
        uStack_1d0 = 0;
        FStack_1b4 = FVar13.field0_0x0;
        fVar33 = (float)local_2a8 / fVar29;
        fVar30 = local_2a8._4_4_ / fVar2;
        fVar31 = local_2a8._4_4_ * *(float *)&param_1->_padding_ +
                 (float)local_2a8 * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
        fVar32 = (float)local_2a8 * *(float *)((longlong)&param_1->_padding_ + 4) +
                 local_2a8._4_4_ * *(float *)((longlong)&param_1->_padding_ + 4) +
                 *(float *)((longlong)&param_1->_padding_ + 4);
        local_1b0 = CONCAT22((short)((int)ROUND(fVar2 * local_29c + fVar2 * local_29c + fVar12) >> 1
                                    ),(short)((int)ROUND(fVar29 * local_29c + fVar29 * local_29c +
                                                         fVar12) >> 1));
        local_248 = lVar6;
        iVar18 = UE::Core::Private::
                 ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                           (0x2c,4,1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax)
        ;
        lVar22 = (longlong)iVar18 * 0x2c;
        lVar23 = (pFVar20->SourceVertices->AllocatorInstance)._padding_;
        pfVar1 = (float *)(lVar22 + lVar23);
        *pfVar1 = local_268;
        pfVar1[1] = fVar34;
        pfVar1[2] = (float)uStack_1d0;
        pfVar1[3] = uStack_1d0._4_4_;
        pfVar1 = (float *)(lVar22 + 0x10 + lVar23);
        *pfVar1 = fVar33;
        pfVar1[1] = fVar30;
        pfVar1[2] = fVar31;
        pfVar1[3] = fVar32;
        local_1d8 = local_268;
        *(ulonglong *)(lVar22 + 0x20 + lVar23) = CONCAT44(FStack_1b4.Bits,local_1b8);
        *(undefined4 *)(lVar22 + 0x28 + lVar23) = local_1b0;
        pFVar20->NumVertices = pFVar20->NumVertices + 1;
        FVar13 = FColor::Transparent;
        fStack_1d4 = fVar34;
        local_1c8 = fVar33;
        fStack_1c4 = fVar30;
        fStack_1c0 = fVar31;
        fStack_1bc = fVar32;
        if (this->bSRGBVertexColor == false) {
          fVar34 = *(float *)(pFVar26 + 8);
          fVar30 = *(float *)(pFVar26 + 4);
          if (fVar34 <= 0.0) {
            fVar34 = 0.0;
          }
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          if (fVar11 <= fVar34) {
            fVar34 = fVar11;
          }
          if (fVar11 <= fVar30) {
            fVar30 = fVar11;
          }
          fVar31 = *(float *)pFVar26;
          if (fVar31 <= 0.0) {
            fVar31 = 0.0;
          }
          fVar32 = *(float *)(pFVar26 + 0xc);
          if (fVar11 <= fVar31) {
            fVar31 = fVar11;
          }
          if (fVar32 <= 0.0) {
            fVar32 = 0.0;
          }
          if (fVar11 <= fVar32) {
            fVar32 = fVar11;
          }
          local_2a0 = CONCAT13((char)(int)(fVar32 * fVar14 + fVar12),
                               CONCAT12((char)(int)(fVar31 * fVar14 + fVar12),
                                        CONCAT11((char)(int)(fVar30 * fVar14 + fVar12),
                                                 (char)(int)(fVar34 * fVar14 + fVar12))));
        }
        else {
          FLinearColor::ToFColorSRGB((FLinearColor *)pFVar26);
        }
        pTVar7 = pFVar20->SourceVertices;
        local_188 = local_2a0;
        uStack_1a0 = 0;
        fVar31 = fVar35 / fVar29;
        FStack_184 = FVar13.field0_0x0;
        fVar30 = local_264 * *(float *)&param_1->_padding_ + fVar35 * *(float *)&param_1->_padding_
                 + *(float *)&param_1->_padding_;
        fVar34 = local_264 / fVar2;
        fVar35 = fVar35 * *(float *)((longlong)&param_1->_padding_ + 4) +
                 local_264 * *(float *)((longlong)&param_1->_padding_ + 4) +
                 *(float *)((longlong)&param_1->_padding_ + 4);
        local_180 = CONCAT22((short)((int)ROUND(fVar2 * local_29c + fVar2 * local_29c + fVar12) >> 1
                                    ),(short)((int)ROUND(fVar29 * local_29c + fVar29 * local_29c +
                                                         fVar12) >> 1));
        local_248 = lVar6;
        iVar19 = UE::Core::Private::
                 ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                           (0x2c,4,1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax)
        ;
        iVar18 = (int)(float)local_240;
        lVar22 = (longlong)iVar19 * 0x2c;
        lVar23 = (pFVar20->SourceVertices->AllocatorInstance)._padding_;
        pfVar1 = (float *)(lVar22 + lVar23);
        *pfVar1 = local_260;
        pfVar1[1] = local_25c;
        pfVar1[2] = (float)uStack_1a0;
        pfVar1[3] = uStack_1a0._4_4_;
        pfVar1 = (float *)(lVar22 + 0x10 + lVar23);
        *pfVar1 = fVar31;
        pfVar1[1] = fVar34;
        pfVar1[2] = fVar30;
        pfVar1[3] = fVar35;
        local_1a8 = local_260;
        fStack_1a4 = local_25c;
        *(ulonglong *)(lVar22 + 0x20 + lVar23) = CONCAT44(FStack_184.Bits,local_188);
        *(undefined4 *)(lVar22 + 0x28 + lVar23) = local_180;
        local_298[0] = (int)(float)local_240 + -2;
        pFVar20->NumVertices = pFVar20->NumVertices + 1;
        pTVar8 = pFVar20->SourceIndices;
        piVar9 = (int *)(pTVar8->AllocatorInstance)._padding_;
        local_198 = fVar31;
        fStack_194 = fVar34;
        fStack_190 = fVar30;
        fStack_18c = fVar35;
        if (((piVar9 <= local_298) && (local_298 < piVar9 + pTVar8->ArrayMax)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar19 = pTVar8->ArrayNum;
        if (iVar19 == pTVar8->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pTVar8->ArrayNum = iVar19 + 1;
        *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar19 * 4) = local_298[0];
        local_290[0] = iVar18 + -1;
        pFVar20->NumIndices = pFVar20->NumIndices + 1;
        pTVar8 = pFVar20->SourceIndices;
        piVar9 = (int *)(pTVar8->AllocatorInstance)._padding_;
        if (((piVar9 <= local_290) && (local_290 < piVar9 + pTVar8->ArrayMax)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar19 = pTVar8->ArrayNum;
        if (iVar19 == pTVar8->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pTVar8->ArrayNum = iVar19 + 1;
        local_288[0] = iVar18;
        *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar19 * 4) = local_290[0];
        pFVar20->NumIndices = pFVar20->NumIndices + 1;
        pTVar8 = pFVar20->SourceIndices;
        piVar9 = (int *)(pTVar8->AllocatorInstance)._padding_;
        if (((piVar9 <= local_288) && (local_288 < piVar9 + pTVar8->ArrayMax)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar19 = pTVar8->ArrayNum;
        if (iVar19 == pTVar8->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pTVar8->ArrayNum = iVar19 + 1;
        local_280[0] = iVar18;
        *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar19 * 4) = local_288[0];
        pFVar20->NumIndices = pFVar20->NumIndices + 1;
        pTVar8 = pFVar20->SourceIndices;
        piVar9 = (int *)(pTVar8->AllocatorInstance)._padding_;
        if (((piVar9 <= local_280) && (local_280 < piVar9 + pTVar8->ArrayMax)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar19 = pTVar8->ArrayNum;
        if (iVar19 == pTVar8->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pTVar8->ArrayNum = iVar19 + 1;
        *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar19 * 4) = local_280[0];
        local_278[0] = iVar18 + -1;
        pFVar20->NumIndices = pFVar20->NumIndices + 1;
        pTVar8 = pFVar20->SourceIndices;
        piVar9 = (int *)(pTVar8->AllocatorInstance)._padding_;
        if (((piVar9 <= local_278) && (local_278 < piVar9 + pTVar8->ArrayMax)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar19 = pTVar8->ArrayNum;
        if (iVar19 == pTVar8->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pTVar8->ArrayNum = iVar19 + 1;
        *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar19 * 4) = local_278[0];
        local_270[0] = iVar18 + 1;
        pFVar20->NumIndices = pFVar20->NumIndices + 1;
        pTVar8 = pFVar20->SourceIndices;
        piVar9 = (int *)(pTVar8->AllocatorInstance)._padding_;
        if (((piVar9 <= local_270) && (local_270 < piVar9 + pTVar8->ArrayMax)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar18 = pTVar8->ArrayNum;
        if (iVar18 == pTVar8->ArrayMax) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pTVar8->ArrayNum = iVar18 + 1;
        *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar18 * 4) = local_270[0];
        pFVar20->NumIndices = pFVar20->NumIndices + 1;
      }
      uVar24 = uVar24 + 1;
      local_258 = local_258 + 0x18;
      fVar29 = local_250._4_4_;
      fVar35 = (float)local_250;
      iVar18 = local_2b8.ArrayNum;
    } while ((int)uVar24 < local_2b8.ArrayNum);
  }
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  return;
}

// AddShapedTextElement<1> @ 1424d0c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddShapedTextElement<1>
          (FSlateElementBatcher *this,FSlateShapedTextElement *param_1)

{
  int iVar1;
  FShapedGlyphSequence *pFVar2;
  FSlateFontServices *pFVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  ESlateTextureAtlasThreadId EVar15;
  int iVar16;
  TReferenceControllerBase<1> *pTVar17;
  FSlateFontCache *pFVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auStackY_1b8 [32];
  FColor_u_0 local_178;
  FColor_u_0 local_174;
  FShapedGlyphSequence *local_170;
  FShapedGlyphSequence *local_168;
  TTransform2<float> local_160;
  FShapedGlyphSequence **local_148;
  FSlateShapedTextElement *local_140;
  FShapedGlyphSequence **local_138;
  FShapedGlyphSequence **local_130;
  FSlateElementBatcher *local_128;
  TTransform2<float> *local_120;
  FLinearColor_u_0 local_118;
  FLinearColor_u_0 local_108;
  FShapedGlyphSequence *local_f8;
  FShapedGlyphSequence *local_f0;
  FSlateShapedTextElement *local_d8;
  FSlateFontCache *local_d0;
  TTransform2<float> *local_c8;
  float local_c0;
  float local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  TTransform2<float> local_98;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar2 = (param_1->ShapedGlyphSequence).Object;
  local_168 = (param_1->OverflowArgs).OverflowTextPtr.Object;
  local_170 = pFVar2;
  if (((pFVar2->GlyphsToRender).ArrayNum < 1) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3580957931119576608>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                          ,0x620,"ShapedGlyphSequence->GetGlyphsToRender().Num() > 0"), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar13 = __real_437f0000;
  fVar12 = __real_3f000000;
  fVar11 = __real_3f800000;
  local_118._s_0.R = (float)*(undefined4 *)&param_1->_padding_;
  local_118._s_0.G = *(float *)((longlong)&param_1->_padding_ + 4);
  local_118._s_0.B = (float)*(undefined4 *)&param_1->_padding_;
  local_118._s_0.A = *(float *)((longlong)&param_1->_padding_ + 4);
  if (this->bSRGBVertexColor == false) {
    auVar24._4_4_ = local_118._s_0.B;
    auVar24._0_4_ = local_118._s_0.B;
    auVar24._8_4_ = local_118._s_0.B;
    auVar24._12_4_ = local_118._s_0.B;
    auVar21._4_4_ = local_118._s_0.G;
    auVar21._0_4_ = local_118._s_0.G;
    auVar21._8_4_ = local_118._s_0.G;
    auVar21._12_4_ = local_118._s_0.G;
    if (local_118._s_0.B <= 0.0) {
      auVar7._12_4_ = 0;
      auVar7._0_12_ = auVar24._4_12_;
      auVar24 = auVar7 << 0x20;
    }
    if (local_118._s_0.G <= 0.0) {
      auVar8._12_4_ = 0;
      auVar8._0_12_ = auVar21._4_12_;
      auVar21 = auVar8 << 0x20;
    }
    if (__real_3f800000 <= auVar24._0_4_) {
      auVar24._0_4_ = __real_3f800000;
    }
    if (__real_3f800000 <= auVar21._0_4_) {
      auVar21._0_4_ = __real_3f800000;
    }
    fVar19 = local_118._s_0.R;
    if (local_118._s_0.R <= 0.0) {
      fVar19 = 0.0;
    }
    local_178._s_0.B = (uchar)(int)(auVar24._0_4_ * __real_437f0000 + __real_3f000000);
    fVar23 = local_118._s_0.A;
    if (local_118._s_0.A <= 0.0) {
      fVar23 = 0.0;
    }
    if (__real_3f800000 <= fVar19) {
      fVar19 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar23) {
      fVar23 = __real_3f800000;
    }
    local_178._s_0.G = (uchar)(int)(auVar21._0_4_ * __real_437f0000 + __real_3f000000);
    local_178._s_0.R = (uchar)(int)(fVar19 * __real_437f0000 + __real_3f000000);
    local_178._s_0.A = (uchar)(int)(fVar23 * __real_437f0000 + __real_3f000000);
  }
  else {
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_118._s_0);
  }
  pFVar3 = (this->RenderingPolicy->FontServices).Object;
  EVar15 = GetCurrentSlateTextureAtlasThreadId();
  if (EVar15 == Unknown) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("AtlasThreadId != ESlateTextureAtlasThreadId::Unknown",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\SlateRenderer.cpp"
                        ,0x2d,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (EVar15 == Game) {
    pFVar18 = (pFVar3->GameThreadFontCache).Object;
    pTVar17 = (pFVar3->GameThreadFontCache).SharedReferenceCount.ReferenceController;
    goto LAB_1424d0d98;
  }
  pFVar18 = (pFVar3->RenderThreadFontCache).Object;
  pTVar17 = (pFVar3->RenderThreadFontCache).SharedReferenceCount.ReferenceController;
LAB_1424d0d98:
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  local_f8 = local_170;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_f0 = local_168;
  local_c0 = (float)(int)local_170->TextBaseline;
  local_bc = (float)local_170->MaxTextHeight;
  if (local_170->MaxTextHeight != 0) {
    iVar1 = (int)param_1->_padding_;
    fVar19 = *(float *)((longlong)&param_1->_padding_ + 4);
    local_160.M.M[0][0] = fVar11 / fVar19;
    local_160.M.M[0][1] = 0.0;
    local_160.M.M[1][0] = 0.0;
    local_160.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
    local_160.M.M[1][1] = local_160.M.M[0][0];
    local_d8 = param_1;
    local_d0 = pFVar18;
    Concatenate<TTransform2<float>_>(&local_98,&local_160,(TTransform2<float> *)param_1);
    this->ElementStat_ShapedText = this->ElementStat_ShapedText + 1;
    local_c8 = &local_98;
    local_148 = &local_f8;
    local_138 = &local_170;
    local_130 = &local_168;
    local_120 = &local_98;
    pUVar4 = (local_170->FontMaterial).field0_0x0.DebugPtr;
    iVar16 = (pFVar2->OutlineSettings).OutlineSize;
    local_140 = param_1;
    local_128 = this;
    if (iVar16 < 1) {
      `FSlateElementBatcher::AddShapedTextElement<1>'::__l2::<lambda_1>::operator()
                (&local_148,&FFontOutlineSettings::NoOutline,(FColor *)&local_178._s_0,pUVar4,iVar1,
                 0.0,-1);
    }
    else {
      local_108._s_0.R = (param_1->OutlineTint).field0_0x0._s_0.R;
      local_108._s_0.G = *(float *)((longlong)&(param_1->OutlineTint).field0_0x0 + 4);
      local_108._s_0.B = *(float *)((longlong)&(param_1->OutlineTint).field0_0x0 + 8);
      local_108._s_0.A = (param_1->OutlineTint).field0_0x0._s_0.A;
      pUVar5 = (pFVar2->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr;
      auVar24 = roundps(ZEXT416((uint)fVar19),ZEXT416((uint)((float)iVar16 * fVar19 + fVar12)),1);
      if (this->bSRGBVertexColor == false) {
        auVar20._4_4_ = local_108._s_0.B;
        auVar20._0_4_ = local_108._s_0.B;
        auVar20._8_4_ = local_108._s_0.B;
        auVar20._12_4_ = local_108._s_0.B;
        auVar22._4_4_ = local_108._s_0.G;
        auVar22._0_4_ = local_108._s_0.G;
        auVar22._8_4_ = local_108._s_0.G;
        auVar22._12_4_ = local_108._s_0.G;
        if (local_108._s_0.B <= 0.0) {
          auVar9._12_4_ = 0;
          auVar9._0_12_ = auVar20._4_12_;
          auVar20 = auVar9 << 0x20;
        }
        if (local_108._s_0.G <= 0.0) {
          auVar10._12_4_ = 0;
          auVar10._0_12_ = auVar22._4_12_;
          auVar22 = auVar10 << 0x20;
        }
        if (fVar11 <= auVar20._0_4_) {
          auVar20._0_4_ = fVar11;
        }
        if (fVar11 <= auVar22._0_4_) {
          auVar22._0_4_ = fVar11;
        }
        fVar19 = local_108._s_0.R;
        if (local_108._s_0.R <= 0.0) {
          fVar19 = 0.0;
        }
        local_174._s_0.B = (uchar)(int)(auVar20._0_4_ * fVar13 + fVar12);
        fVar23 = local_108._s_0.A;
        if (local_108._s_0.A <= 0.0) {
          fVar23 = 0.0;
        }
        if (fVar11 <= fVar19) {
          fVar19 = fVar11;
        }
        if (fVar11 <= fVar23) {
          fVar23 = fVar11;
        }
        local_174._s_0.G = (uchar)(int)(auVar22._0_4_ * fVar13 + fVar12);
        local_174._s_0.R = (uchar)(int)(fVar19 * fVar13 + fVar12);
        local_174._s_0.A = (uchar)(int)(fVar23 * fVar13 + fVar12);
      }
      else {
        FLinearColor::ToFColorSRGB((FLinearColor *)&local_108._s_0);
      }
      iVar16 = `FSlateElementBatcher::AddShapedTextElement<1>'::__l2::<lambda_1>::operator()
                         (&local_148,&pFVar2->OutlineSettings,(FColor *)&local_174._s_0,pUVar5,iVar1
                          ,auVar24._0_4_,-1);
      `FSlateElementBatcher::AddShapedTextElement<1>'::__l2::<lambda_1>::operator()
                (&local_148,&FFontOutlineSettings::NoOutline,(FColor *)&local_178._s_0,pUVar4,
                 iVar1 + 1,auVar24._0_4_,iVar16);
    }
  }
  return;
}

// AddShapedTextElement<0> @ 1424d1030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddShapedTextElement<0>
          (FSlateElementBatcher *this,FSlateShapedTextElement *param_1)

{
  int iVar1;
  FShapedGlyphSequence *pFVar2;
  FSlateFontServices *pFVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  ESlateTextureAtlasThreadId EVar15;
  int iVar16;
  TReferenceControllerBase<1> *pTVar17;
  FSlateFontCache *pFVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auStackY_1b8 [32];
  FColor_u_0 local_178;
  FColor_u_0 local_174;
  FShapedGlyphSequence *local_170;
  FShapedGlyphSequence *local_168;
  TTransform2<float> local_160;
  FShapedGlyphSequence **local_148;
  FSlateShapedTextElement *local_140;
  FShapedGlyphSequence **local_138;
  FShapedGlyphSequence **local_130;
  FSlateElementBatcher *local_128;
  TTransform2<float> *local_120;
  FLinearColor_u_0 local_118;
  FLinearColor_u_0 local_108;
  FShapedGlyphSequence *local_f8;
  FShapedGlyphSequence *local_f0;
  FSlateShapedTextElement *local_d8;
  FSlateFontCache *local_d0;
  TTransform2<float> *local_c8;
  float local_c0;
  float local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  TTransform2<float> local_98;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar2 = (param_1->ShapedGlyphSequence).Object;
  local_168 = (param_1->OverflowArgs).OverflowTextPtr.Object;
  local_170 = pFVar2;
  if (((pFVar2->GlyphsToRender).ArrayNum < 1) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3580957931119576608>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                          ,0x620,"ShapedGlyphSequence->GetGlyphsToRender().Num() > 0"), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar13 = __real_437f0000;
  fVar12 = __real_3f000000;
  fVar11 = __real_3f800000;
  local_118._s_0.R = (float)*(undefined4 *)&param_1->_padding_;
  local_118._s_0.G = *(float *)((longlong)&param_1->_padding_ + 4);
  local_118._s_0.B = (float)*(undefined4 *)&param_1->_padding_;
  local_118._s_0.A = *(float *)((longlong)&param_1->_padding_ + 4);
  if (this->bSRGBVertexColor == false) {
    auVar24._4_4_ = local_118._s_0.B;
    auVar24._0_4_ = local_118._s_0.B;
    auVar24._8_4_ = local_118._s_0.B;
    auVar24._12_4_ = local_118._s_0.B;
    auVar21._4_4_ = local_118._s_0.G;
    auVar21._0_4_ = local_118._s_0.G;
    auVar21._8_4_ = local_118._s_0.G;
    auVar21._12_4_ = local_118._s_0.G;
    if (local_118._s_0.B <= 0.0) {
      auVar7._12_4_ = 0;
      auVar7._0_12_ = auVar24._4_12_;
      auVar24 = auVar7 << 0x20;
    }
    if (local_118._s_0.G <= 0.0) {
      auVar8._12_4_ = 0;
      auVar8._0_12_ = auVar21._4_12_;
      auVar21 = auVar8 << 0x20;
    }
    if (__real_3f800000 <= auVar24._0_4_) {
      auVar24._0_4_ = __real_3f800000;
    }
    if (__real_3f800000 <= auVar21._0_4_) {
      auVar21._0_4_ = __real_3f800000;
    }
    fVar19 = local_118._s_0.R;
    if (local_118._s_0.R <= 0.0) {
      fVar19 = 0.0;
    }
    local_178._s_0.B = (uchar)(int)(auVar24._0_4_ * __real_437f0000 + __real_3f000000);
    fVar23 = local_118._s_0.A;
    if (local_118._s_0.A <= 0.0) {
      fVar23 = 0.0;
    }
    if (__real_3f800000 <= fVar19) {
      fVar19 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar23) {
      fVar23 = __real_3f800000;
    }
    local_178._s_0.G = (uchar)(int)(auVar21._0_4_ * __real_437f0000 + __real_3f000000);
    local_178._s_0.R = (uchar)(int)(fVar19 * __real_437f0000 + __real_3f000000);
    local_178._s_0.A = (uchar)(int)(fVar23 * __real_437f0000 + __real_3f000000);
  }
  else {
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_118._s_0);
  }
  pFVar3 = (this->RenderingPolicy->FontServices).Object;
  EVar15 = GetCurrentSlateTextureAtlasThreadId();
  if (EVar15 == Unknown) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("AtlasThreadId != ESlateTextureAtlasThreadId::Unknown",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\SlateRenderer.cpp"
                        ,0x2d,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (EVar15 == Game) {
    pFVar18 = (pFVar3->GameThreadFontCache).Object;
    pTVar17 = (pFVar3->GameThreadFontCache).SharedReferenceCount.ReferenceController;
    goto LAB_1424d11b8;
  }
  pFVar18 = (pFVar3->RenderThreadFontCache).Object;
  pTVar17 = (pFVar3->RenderThreadFontCache).SharedReferenceCount.ReferenceController;
LAB_1424d11b8:
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  local_f8 = local_170;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_f0 = local_168;
  local_c0 = (float)(int)local_170->TextBaseline;
  local_bc = (float)local_170->MaxTextHeight;
  if (local_170->MaxTextHeight != 0) {
    iVar1 = (int)param_1->_padding_;
    fVar19 = *(float *)((longlong)&param_1->_padding_ + 4);
    local_160.M.M[0][0] = fVar11 / fVar19;
    local_160.M.M[0][1] = 0.0;
    local_160.M.M[1][0] = 0.0;
    local_160.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
    local_160.M.M[1][1] = local_160.M.M[0][0];
    local_d8 = param_1;
    local_d0 = pFVar18;
    Concatenate<TTransform2<float>_>(&local_98,&local_160,(TTransform2<float> *)param_1);
    this->ElementStat_ShapedText = this->ElementStat_ShapedText + 1;
    local_c8 = &local_98;
    local_148 = &local_f8;
    local_138 = &local_170;
    local_130 = &local_168;
    local_120 = &local_98;
    pUVar4 = (local_170->FontMaterial).field0_0x0.DebugPtr;
    iVar16 = (pFVar2->OutlineSettings).OutlineSize;
    local_140 = param_1;
    local_128 = this;
    if (iVar16 < 1) {
      `FSlateElementBatcher::AddShapedTextElement<0>'::__l2::<lambda_1>::operator()
                (&local_148,&FFontOutlineSettings::NoOutline,(FColor *)&local_178._s_0,pUVar4,iVar1,
                 0.0,-1);
    }
    else {
      local_108._s_0.R = (param_1->OutlineTint).field0_0x0._s_0.R;
      local_108._s_0.G = *(float *)((longlong)&(param_1->OutlineTint).field0_0x0 + 4);
      local_108._s_0.B = *(float *)((longlong)&(param_1->OutlineTint).field0_0x0 + 8);
      local_108._s_0.A = (param_1->OutlineTint).field0_0x0._s_0.A;
      pUVar5 = (pFVar2->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr;
      auVar24 = roundps(ZEXT416((uint)fVar19),ZEXT416((uint)((float)iVar16 * fVar19 + fVar12)),1);
      if (this->bSRGBVertexColor == false) {
        auVar20._4_4_ = local_108._s_0.B;
        auVar20._0_4_ = local_108._s_0.B;
        auVar20._8_4_ = local_108._s_0.B;
        auVar20._12_4_ = local_108._s_0.B;
        auVar22._4_4_ = local_108._s_0.G;
        auVar22._0_4_ = local_108._s_0.G;
        auVar22._8_4_ = local_108._s_0.G;
        auVar22._12_4_ = local_108._s_0.G;
        if (local_108._s_0.B <= 0.0) {
          auVar9._12_4_ = 0;
          auVar9._0_12_ = auVar20._4_12_;
          auVar20 = auVar9 << 0x20;
        }
        if (local_108._s_0.G <= 0.0) {
          auVar10._12_4_ = 0;
          auVar10._0_12_ = auVar22._4_12_;
          auVar22 = auVar10 << 0x20;
        }
        if (fVar11 <= auVar20._0_4_) {
          auVar20._0_4_ = fVar11;
        }
        if (fVar11 <= auVar22._0_4_) {
          auVar22._0_4_ = fVar11;
        }
        fVar19 = local_108._s_0.R;
        if (local_108._s_0.R <= 0.0) {
          fVar19 = 0.0;
        }
        local_174._s_0.B = (uchar)(int)(auVar20._0_4_ * fVar13 + fVar12);
        fVar23 = local_108._s_0.A;
        if (local_108._s_0.A <= 0.0) {
          fVar23 = 0.0;
        }
        if (fVar11 <= fVar19) {
          fVar19 = fVar11;
        }
        if (fVar11 <= fVar23) {
          fVar23 = fVar11;
        }
        local_174._s_0.G = (uchar)(int)(auVar22._0_4_ * fVar13 + fVar12);
        local_174._s_0.R = (uchar)(int)(fVar19 * fVar13 + fVar12);
        local_174._s_0.A = (uchar)(int)(fVar23 * fVar13 + fVar12);
      }
      else {
        FLinearColor::ToFColorSRGB((FLinearColor *)&local_108._s_0);
      }
      iVar16 = `FSlateElementBatcher::AddShapedTextElement<0>'::__l2::<lambda_1>::operator()
                         (&local_148,&pFVar2->OutlineSettings,(FColor *)&local_174._s_0,pUVar5,iVar1
                          ,auVar24._0_4_,-1);
      `FSlateElementBatcher::AddShapedTextElement<0>'::__l2::<lambda_1>::operator()
                (&local_148,&FFontOutlineSettings::NoOutline,(FColor *)&local_178._s_0,pUVar4,
                 iVar1 + 1,auVar24._0_4_,iVar16);
    }
  }
  return;
}

// AddTextElement<1> @ 1424d1450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddTextElement<1>(FSlateElementBatcher *this,FSlateTextElement *param_1)

{
  int iVar1;
  FSlateFontServices *pFVar2;
  undefined8 uVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  ESlateTextureAtlasThreadId EVar9;
  FColor FVar10;
  undefined8 *puVar11;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar12;
  int iVar13;
  FSlateFontCache *pFVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auStackY_138 [32];
  undefined1 local_108 [4];
  FColor_u_0 local_104;
  float local_100;
  int local_fc;
  TTransform2<float> local_f8;
  FLinearColor local_e0;
  FSlateTextElement *local_d0;
  float *local_c8;
  int *local_c0;
  undefined8 local_b8;
  FSlateElementBatcher *local_b0;
  undefined1 *local_a8;
  TTransform2<float> *local_a0;
  FLinearColor_u_0 local_98;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  TTransform2<float> local_78;
  ulonglong local_60;
  
  fVar7 = __real_3f000000;
  fVar17 = __real_3f800000;
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_98._s_0.R = (float)*(undefined4 *)&param_1->_padding_;
  local_98._s_0.G = *(float *)((longlong)&param_1->_padding_ + 4);
  local_98._s_0.B = (float)*(undefined4 *)&param_1->_padding_;
  local_98._s_0.A = *(float *)((longlong)&param_1->_padding_ + 4);
  if (this->bSRGBVertexColor == false) {
    fVar15 = local_98._s_0.B;
    if (local_98._s_0.B <= 0.0) {
      fVar15 = 0.0;
    }
    if (__real_3f800000 <= fVar15) {
      fVar15 = __real_3f800000;
    }
    fVar16 = local_98._s_0.G;
    if (local_98._s_0.G <= 0.0) {
      fVar16 = 0.0;
    }
    local_104._s_0.B = (uchar)(int)(fVar15 * __real_437f0000 + __real_3f000000);
    if (__real_3f800000 <= fVar16) {
      fVar16 = __real_3f800000;
    }
    fVar15 = local_98._s_0.R;
    if (local_98._s_0.R <= 0.0) {
      fVar15 = 0.0;
    }
    local_104._s_0.G = (uchar)(int)(fVar16 * __real_437f0000 + __real_3f000000);
    fVar16 = local_98._s_0.A;
    if (local_98._s_0.A <= 0.0) {
      fVar16 = 0.0;
    }
    if (__real_3f800000 <= fVar15) {
      fVar15 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar16) {
      fVar16 = __real_3f800000;
    }
    local_104._s_0.R = (uchar)(int)(fVar15 * __real_437f0000 + __real_3f000000);
    local_104._s_0.A = (uchar)(int)(fVar16 * __real_437f0000 + __real_3f000000);
  }
  else {
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_98._s_0);
  }
  iVar13 = (param_1->ImmutableText).Data.ArrayNum;
  local_fc = iVar13 + -1;
  if (iVar13 == 0) {
    local_fc = 0;
  }
  if (local_fc < 1) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3580957931119576287>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                       ,0x4df,"Len > 0");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_100 = *(float *)((longlong)&param_1->_padding_ + 4);
  local_108[0] = *(undefined1 *)((longlong)&param_1->_padding_ + 3);
  iVar13 = (int)param_1->_padding_;
  local_f8.M.M[0][0] = fVar17 / local_100;
  auVar18 = ZEXT416((uint)local_f8.M.M[0][0]);
  local_f8.M.M[0][1] = 0.0;
  local_f8.M.M[1][0] = 0.0;
  local_f8.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  local_f8.M.M[1][1] = local_f8.M.M[0][0];
  Concatenate<TTransform2<float>_>(&local_78,&local_f8,(TTransform2<float> *)param_1);
  pFVar2 = (this->RenderingPolicy->FontServices).Object;
  EVar9 = GetCurrentSlateTextureAtlasThreadId();
  if (EVar9 == Unknown) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtlasThreadId != ESlateTextureAtlasThreadId::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\SlateRenderer.cpp"
                       ,0x2d,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (EVar9 == Game) {
    pFVar14 = (pFVar2->GameThreadFontCache).Object;
    pTVar12 = (pFVar2->GameThreadFontCache).SharedReferenceCount.ReferenceController;
    goto LAB_1424d1615;
  }
  pFVar14 = (pFVar2->RenderThreadFontCache).Object;
  pTVar12 = (pFVar2->RenderThreadFontCache).SharedReferenceCount.ReferenceController;
LAB_1424d1615:
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  puVar11 = (undefined8 *)
            (**(code **)(this->RenderingPolicy->_padding_ + 8))(this->RenderingPolicy,local_88);
  uVar3 = *puVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  local_c8 = &local_100;
  pUVar4 = (param_1->FontInfo).FontMaterial.field0_0x0.DebugPtr;
  local_c0 = &local_fc;
  pUVar5 = (param_1->FontInfo).OutlineSettings.OutlineMaterial.field0_0x0.DebugPtr;
  local_a8 = local_108;
  local_a0 = &local_78;
  local_e0.field0_0x0._8_8_ = pFVar14;
  local_d0 = param_1;
  local_b8 = uVar3;
  local_b0 = this;
  SlateElementBatcher::CheckUObject(param_1,pUVar4);
  SlateElementBatcher::CheckUObject(param_1,pUVar5);
  iVar1 = (param_1->FontInfo).OutlineSettings.OutlineSize;
  if (iVar1 < 1) {
    fVar17 = 0.0;
  }
  else {
    auVar18 = roundps(auVar18,ZEXT416((uint)((float)iVar1 * local_100 + fVar7)),1);
    FVar10 = PackVertexColor(this,&local_e0);
    fVar17 = auVar18._0_4_;
    `FSlateElementBatcher::AddTextElement<1>'::__l2::<lambda_1>::operator()
              ((void *)((longlong)&local_e0.field0_0x0 + 8),&(param_1->FontInfo).OutlineSettings,
               (FColor *)CONCAT44(extraout_var,FVar10.field0_0x0),pUVar5,iVar13,fVar17);
    iVar13 = iVar13 + 1;
  }
  `FSlateElementBatcher::AddTextElement<1>'::__l2::<lambda_1>::operator()
            ((void *)((longlong)&local_e0.field0_0x0 + 8),&FFontOutlineSettings::NoOutline,
             (FColor *)&local_104._s_0,pUVar4,iVar13,fVar17);
  return;
}

// AddTextElement<0> @ 1424d1760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddTextElement<0>(FSlateElementBatcher *this,FSlateTextElement *param_1)

{
  int iVar1;
  FSlateFontServices *pFVar2;
  undefined8 uVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  ESlateTextureAtlasThreadId EVar9;
  FColor FVar10;
  undefined8 *puVar11;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar12;
  int iVar13;
  FSlateFontCache *pFVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auStackY_138 [32];
  undefined1 local_108 [4];
  FColor_u_0 local_104;
  float local_100;
  int local_fc;
  TTransform2<float> local_f8;
  FLinearColor local_e0;
  FSlateTextElement *local_d0;
  float *local_c8;
  int *local_c0;
  undefined8 local_b8;
  FSlateElementBatcher *local_b0;
  undefined1 *local_a8;
  TTransform2<float> *local_a0;
  FLinearColor_u_0 local_98;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  TTransform2<float> local_78;
  ulonglong local_60;
  
  fVar7 = __real_3f000000;
  fVar17 = __real_3f800000;
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_98._s_0.R = (float)*(undefined4 *)&param_1->_padding_;
  local_98._s_0.G = *(float *)((longlong)&param_1->_padding_ + 4);
  local_98._s_0.B = (float)*(undefined4 *)&param_1->_padding_;
  local_98._s_0.A = *(float *)((longlong)&param_1->_padding_ + 4);
  if (this->bSRGBVertexColor == false) {
    fVar15 = local_98._s_0.B;
    if (local_98._s_0.B <= 0.0) {
      fVar15 = 0.0;
    }
    if (__real_3f800000 <= fVar15) {
      fVar15 = __real_3f800000;
    }
    fVar16 = local_98._s_0.G;
    if (local_98._s_0.G <= 0.0) {
      fVar16 = 0.0;
    }
    local_104._s_0.B = (uchar)(int)(fVar15 * __real_437f0000 + __real_3f000000);
    if (__real_3f800000 <= fVar16) {
      fVar16 = __real_3f800000;
    }
    fVar15 = local_98._s_0.R;
    if (local_98._s_0.R <= 0.0) {
      fVar15 = 0.0;
    }
    local_104._s_0.G = (uchar)(int)(fVar16 * __real_437f0000 + __real_3f000000);
    fVar16 = local_98._s_0.A;
    if (local_98._s_0.A <= 0.0) {
      fVar16 = 0.0;
    }
    if (__real_3f800000 <= fVar15) {
      fVar15 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar16) {
      fVar16 = __real_3f800000;
    }
    local_104._s_0.R = (uchar)(int)(fVar15 * __real_437f0000 + __real_3f000000);
    local_104._s_0.A = (uchar)(int)(fVar16 * __real_437f0000 + __real_3f000000);
  }
  else {
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_98._s_0);
  }
  iVar13 = (param_1->ImmutableText).Data.ArrayNum;
  local_fc = iVar13 + -1;
  if (iVar13 == 0) {
    local_fc = 0;
  }
  if (local_fc < 1) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3580957931119576287>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                       ,0x4df,"Len > 0");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_100 = *(float *)((longlong)&param_1->_padding_ + 4);
  local_108[0] = *(undefined1 *)((longlong)&param_1->_padding_ + 3);
  iVar13 = (int)param_1->_padding_;
  local_f8.M.M[0][0] = fVar17 / local_100;
  auVar18 = ZEXT416((uint)local_f8.M.M[0][0]);
  local_f8.M.M[0][1] = 0.0;
  local_f8.M.M[1][0] = 0.0;
  local_f8.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  local_f8.M.M[1][1] = local_f8.M.M[0][0];
  Concatenate<TTransform2<float>_>(&local_78,&local_f8,(TTransform2<float> *)param_1);
  pFVar2 = (this->RenderingPolicy->FontServices).Object;
  EVar9 = GetCurrentSlateTextureAtlasThreadId();
  if (EVar9 == Unknown) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtlasThreadId != ESlateTextureAtlasThreadId::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\SlateRenderer.cpp"
                       ,0x2d,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (EVar9 == Game) {
    pFVar14 = (pFVar2->GameThreadFontCache).Object;
    pTVar12 = (pFVar2->GameThreadFontCache).SharedReferenceCount.ReferenceController;
    goto LAB_1424d1925;
  }
  pFVar14 = (pFVar2->RenderThreadFontCache).Object;
  pTVar12 = (pFVar2->RenderThreadFontCache).SharedReferenceCount.ReferenceController;
LAB_1424d1925:
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  puVar11 = (undefined8 *)
            (**(code **)(this->RenderingPolicy->_padding_ + 8))(this->RenderingPolicy,local_88);
  uVar3 = *puVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  local_c8 = &local_100;
  pUVar4 = (param_1->FontInfo).FontMaterial.field0_0x0.DebugPtr;
  local_c0 = &local_fc;
  pUVar5 = (param_1->FontInfo).OutlineSettings.OutlineMaterial.field0_0x0.DebugPtr;
  local_a8 = local_108;
  local_a0 = &local_78;
  local_e0.field0_0x0._8_8_ = pFVar14;
  local_d0 = param_1;
  local_b8 = uVar3;
  local_b0 = this;
  SlateElementBatcher::CheckUObject(param_1,pUVar4);
  SlateElementBatcher::CheckUObject(param_1,pUVar5);
  iVar1 = (param_1->FontInfo).OutlineSettings.OutlineSize;
  if (iVar1 < 1) {
    fVar17 = 0.0;
  }
  else {
    auVar18 = roundps(auVar18,ZEXT416((uint)((float)iVar1 * local_100 + fVar7)),1);
    FVar10 = PackVertexColor(this,&local_e0);
    fVar17 = auVar18._0_4_;
    `FSlateElementBatcher::AddTextElement<0>'::__l2::<lambda_1>::operator()
              ((void *)((longlong)&local_e0.field0_0x0 + 8),&(param_1->FontInfo).OutlineSettings,
               (FColor *)CONCAT44(extraout_var,FVar10.field0_0x0),pUVar5,iVar13,fVar17);
    iVar13 = iVar13 + 1;
  }
  `FSlateElementBatcher::AddTextElement<0>'::__l2::<lambda_1>::operator()
            ((void *)((longlong)&local_e0.field0_0x0 + 8),&FFontOutlineSettings::NoOutline,
             (FColor *)&local_104._s_0,pUVar4,iVar13,fVar17);
  return;
}

// AddViewportElement<1> @ 1424d3360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddViewportElement<1>
          (FSlateElementBatcher *this,FSlateViewportElement *param_1)

{
  undefined4 *puVar1;
  ESlateDrawEffect EVar2;
  schar sVar3;
  ESlateBatchDrawFlag EVar4;
  FSlateShaderResource *pFVar5;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ESlatePostRT EVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  FSlateElementBatcher *pFVar21;
  FSlateRenderBatch *pFVar22;
  FSlateClippingState *pFVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint local_res10;
  undefined8 local_res20;
  ESlateShader EVar32;
  ESlateShader EVar33;
  FLinearColor_u_0 local_e8;
  TVector4<float>_u_0 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  TVector4<float>_u_0 local_b8;
  
  fVar13 = __real_3f000000;
  fVar29 = __real_3f800000;
  local_e8._s_0.R = (float)*(undefined4 *)&param_1->_padding_;
  local_e8._s_0.G = *(float *)((longlong)&param_1->_padding_ + 4);
  local_e8._s_0.B = (float)*(undefined4 *)&param_1->_padding_;
  local_e8._s_0.A = *(float *)((longlong)&param_1->_padding_ + 4);
  local_res20 = param_1->_padding_;
  iVar20 = (int)param_1->_padding_;
  EVar2 = *(ESlateDrawEffect *)((longlong)&param_1->_padding_ + 3);
  auVar27 = ZEXT416((uint)__real_3f800000);
  if (this->bSRGBVertexColor == false) {
    auVar30._4_4_ = local_e8._s_0.B;
    auVar30._0_4_ = local_e8._s_0.B;
    auVar30._8_4_ = local_e8._s_0.B;
    auVar30._12_4_ = local_e8._s_0.B;
    if (local_e8._s_0.B <= 0.0) {
      auVar28._12_4_ = 0;
      auVar28._0_12_ = auVar30._4_12_;
      auVar30 = auVar28 << 0x20;
    }
    if (__real_3f800000 <= auVar30._0_4_) {
      auVar30._0_4_ = __real_3f800000;
    }
    auVar31._4_4_ = local_e8._s_0.G;
    auVar31._0_4_ = local_e8._s_0.G;
    auVar31._8_4_ = local_e8._s_0.G;
    auVar31._12_4_ = local_e8._s_0.G;
    if (local_e8._s_0.G <= 0.0) {
      auVar8._12_4_ = 0;
      auVar8._0_12_ = auVar31._4_12_;
      auVar31 = auVar8 << 0x20;
    }
    if (__real_3f800000 <= auVar31._0_4_) {
      auVar31._0_4_ = __real_3f800000;
    }
    fVar25 = local_e8._s_0.R;
    if (local_e8._s_0.R <= 0.0) {
      fVar25 = 0.0;
    }
    fVar26 = local_e8._s_0.A;
    if (local_e8._s_0.A <= 0.0) {
      fVar26 = 0.0;
    }
    if (__real_3f800000 <= fVar25) {
      fVar25 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar26) {
      fVar26 = __real_3f800000;
    }
    local_res10 = CONCAT13((char)(int)(fVar26 * __real_437f0000 + __real_3f000000),
                           CONCAT12((char)(int)(fVar25 * __real_437f0000 + __real_3f000000),
                                    CONCAT11((char)(int)(auVar31._0_4_ * __real_437f0000 +
                                                        __real_3f000000),
                                             (char)(int)(auVar30._0_4_ * __real_437f0000 +
                                                        __real_3f000000))));
  }
  else {
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_e8._s_0);
  }
  pFVar5 = param_1->RenderTargetResource;
  EVar4 = (ESlateBatchDrawFlag)param_1->_padding_;
  if ((pFVar5 != (FSlateShaderResource *)0x0) && (pFVar5->DestroyState != '!')) {
    if ((byte)LogSlate._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>
              (&`private:_void___cdecl_FSlateElementBatcher::AddViewportElement<1>(FSlateViewportElement_const&___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlate);
    return;
  }
  EVar33 = param_1->field_0x60;
  if ((this->bCompositeHDRViewports == false) || ((EVar4 >> 8 & 1) == 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  local_d8._0_12_ = ZEXT812(0);
  local_d8._s_0.W = 0.0;
  pFVar21 = (FSlateElementBatcher *)&this->BatchDataHDR;
  if (!bVar12) {
    pFVar21 = this;
  }
  sVar3 = *(schar *)((longlong)&param_1->_padding_ + 2);
  EVar32 = EVar33 & GrayscaleFont;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = local_d8;
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    pFVar22 = FSlateBatchData::AddRenderBatch
                        (pFVar21->BatchData,iVar20,(FShaderParams *)&local_d8._s_0,pFVar5,
                         TriangleList,EVar32,EVar2,EVar4,sVar3);
  }
  else {
    pFVar22 = FSlateCachedElementList::AddRenderBatch
                        (this->CurrentCachedElementList,iVar20,(FShaderParams *)&local_d8._s_0,
                         pFVar5,TriangleList,EVar32,EVar2,EVar4,sVar3);
  }
  pFVar23 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
  pFVar22->ClippingState = pFVar23;
  if (pFVar5 == (FSlateShaderResource *)0x0) {
LAB_1424d3585:
    if (pFVar5 == (FSlateShaderResource *)0x0) goto LAB_1424d35d8;
  }
  else {
    EVar16 = (**(code **)(pFVar5->_padding_ + 0x20))(pFVar5);
    pFVar22->CachedUsedPostBuffers = EVar16;
    this->UsedSlatePostBuffers = this->UsedSlatePostBuffers | EVar16;
    if (param_1->bAllowViewportScaling != 0) goto LAB_1424d3585;
    this->bRequiresVsync = (bool)(this->bRequiresVsync | param_1->bRequiresVSync);
  }
  if (param_1->bAllowViewportScaling == 0) {
    fVar29 = fVar29 / *(float *)((longlong)&param_1->_padding_ + 4);
    auVar27 = ZEXT416((uint)fVar29);
    uVar17 = (**(code **)(pFVar5->_padding_ + 8))(pFVar5);
    unaff_XMM6 = ZEXT416((uint)((float)uVar17 * fVar29));
    uVar18 = (**(code **)pFVar5->_padding_)(pFVar5);
    local_res20 = CONCAT44((float)uVar17 * fVar29,(float)uVar18 * fVar29);
  }
LAB_1424d35d8:
  uVar15 = _UNK_15076b1e8;
  uVar14 = ___xmm_3f8000003f8000000000000000000000;
  pTVar6 = pFVar22->SourceVertices;
  local_b8._s_0.Y = 0.0;
  local_b8._s_0.X = (float)local_res10;
  auVar30 = roundps(auVar27,ZEXT416((uint)(*(float *)&param_1->_padding_ + fVar13)),1);
  auVar27 = roundps(unaff_XMM6,
                    ZEXT416((uint)(*(float *)((longlong)&param_1->_padding_ + 4) + fVar13)),1);
  iVar19 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,&pTVar6->ArrayMax);
  lVar24 = (longlong)iVar19 * 0x2c;
  lVar7 = (pFVar22->SourceVertices->AllocatorInstance)._padding_;
  uStack_c0 = CONCAT44(auVar27._0_4_,auVar30._0_4_);
  *(undefined8 *)(lVar24 + lVar7) = uVar14;
  ((undefined8 *)(lVar24 + lVar7))[1] = uVar15;
  uVar15 = _UNK_15090c6d8;
  uVar14 = ___xmm_3f8000003f800000000000003f800000;
  puVar1 = (undefined4 *)(lVar24 + 0x10 + lVar7);
  *puVar1 = (undefined4)local_c8;
  puVar1[1] = local_c8._4_4_;
  puVar1[2] = auVar30._0_4_;
  puVar1[3] = auVar27._0_4_;
  *(undefined8 *)(lVar24 + 0x20 + lVar7) = local_b8._0_8_;
  *(float *)(lVar24 + 0x28 + lVar7) = local_b8._s_0.Z;
  pFVar22->NumVertices = pFVar22->NumVertices + 1;
  pTVar6 = pFVar22->SourceVertices;
  local_b8._s_0.Y = 0.0;
  auVar30 = roundps(auVar30,ZEXT416((uint)((float)local_res20 * *(float *)&param_1->_padding_ +
                                           *(float *)&param_1->_padding_ + fVar13)),1);
  auVar27 = roundps(auVar27,ZEXT416((uint)((float)local_res20 *
                                           *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) + fVar13)),
                    1);
  iVar19 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,&pTVar6->ArrayMax);
  lVar24 = (longlong)iVar19 * 0x2c;
  lVar7 = (pFVar22->SourceVertices->AllocatorInstance)._padding_;
  uStack_c0 = CONCAT44(auVar27._0_4_,auVar30._0_4_);
  *(undefined8 *)(lVar24 + lVar7) = uVar14;
  ((undefined8 *)(lVar24 + lVar7))[1] = uVar15;
  uVar15 = _UNK_15090c6e8;
  uVar14 = ___xmm_3f8000003f8000003f80000000000000;
  puVar1 = (undefined4 *)(lVar24 + 0x10 + lVar7);
  *puVar1 = (undefined4)local_c8;
  puVar1[1] = local_c8._4_4_;
  puVar1[2] = auVar30._0_4_;
  puVar1[3] = auVar27._0_4_;
  *(undefined8 *)(lVar24 + 0x20 + lVar7) = local_b8._0_8_;
  *(float *)(lVar24 + 0x28 + lVar7) = local_b8._s_0.Z;
  pFVar22->NumVertices = pFVar22->NumVertices + 1;
  pTVar6 = pFVar22->SourceVertices;
  local_b8._s_0.Y = 0.0;
  auVar31 = roundps(auVar30,ZEXT416((uint)(local_res20._4_4_ * *(float *)&param_1->_padding_ +
                                           *(float *)&param_1->_padding_ + fVar13)),1);
  auVar28 = roundps(auVar27,ZEXT416((uint)(local_res20._4_4_ *
                                           *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) + fVar13)),
                    1);
  iVar19 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,&pTVar6->ArrayMax);
  lVar24 = (longlong)iVar19 * 0x2c;
  lVar7 = (pFVar22->SourceVertices->AllocatorInstance)._padding_;
  *(undefined8 *)(lVar24 + lVar7) = uVar14;
  ((undefined8 *)(lVar24 + lVar7))[1] = uVar15;
  puVar1 = (undefined4 *)(lVar24 + 0x10 + lVar7);
  *puVar1 = (undefined4)local_c8;
  puVar1[1] = local_c8._4_4_;
  puVar1[2] = auVar31._0_4_;
  puVar1[3] = auVar28._0_4_;
  *(undefined8 *)(lVar24 + 0x20 + lVar7) = local_b8._0_8_;
  local_d8._8_8_ = _UNK_15076b1f8;
  local_d8._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  *(float *)(lVar24 + 0x28 + lVar7) = local_b8._s_0.Z;
  pFVar22->NumVertices = pFVar22->NumVertices + 1;
  local_b8._s_0.Y = (float)0;
  fVar29 = local_res20._4_4_ * *(float *)&param_1->_padding_;
  auVar27 = roundps(ZEXT416((uint)fVar29),
                    ZEXT416((uint)((float)local_res20 * *(float *)&param_1->_padding_ + fVar29 +
                                  *(float *)&param_1->_padding_ + fVar13)),1);
  auVar30 = roundps(auVar27,ZEXT416((uint)((float)local_res20 *
                                           *(float *)((longlong)&param_1->_padding_ + 4) +
                                           *(float *)((longlong)&param_1->_padding_ + 4) +
                                          local_res20._4_4_ *
                                          *(float *)((longlong)&param_1->_padding_ + 4) + fVar13)),1
                   );
  uStack_c0 = CONCAT44(auVar30._0_4_,auVar27._0_4_);
  FSlateRenderBatch::AddVertex(pFVar22,(FSlateVertex *)&local_d8._s_0);
  FSlateRenderBatch::AddIndex(pFVar22,0);
  FSlateRenderBatch::AddIndex(pFVar22,1);
  FSlateRenderBatch::AddIndex(pFVar22,2);
  FSlateRenderBatch::AddIndex(pFVar22,2);
  FSlateRenderBatch::AddIndex(pFVar22,1);
  FSlateRenderBatch::AddIndex(pFVar22,3);
  if (bVar12) {
    sVar3 = *(schar *)((longlong)&param_1->_padding_ + 2);
    EVar33 = EVar33 & GrayscaleFont;
    local_d8 = (TVector4<float>_u_0)ZEXT816(0);
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = (TVector4<float>_u_0)ZEXT816(0);
    if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
      pFVar22 = FSlateBatchData::AddRenderBatch
                          (this->BatchData,iVar20,(FShaderParams *)&local_d8._s_0,
                           (FSlateShaderResource *)0x0,TriangleList,EVar33,EVar2,NoBlending,sVar3);
    }
    else {
      pFVar22 = FSlateCachedElementList::AddRenderBatch
                          (this->CurrentCachedElementList,iVar20,(FShaderParams *)&local_d8._s_0,
                           (FSlateShaderResource *)0x0,TriangleList,EVar33,EVar2,NoBlending,sVar3);
    }
    pFVar23 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
    uVar15 = _UNK_15076b1e8;
    uVar14 = ___xmm_3f8000003f8000000000000000000000;
    fVar29 = *(float *)&param_1->_padding_;
    pFVar22->ClippingState = pFVar23;
    pTVar6 = pFVar22->SourceVertices;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = local_b8._8_8_;
    local_b8 = (TVector4<float>_u_0)(auVar27 << 0x40);
    auVar30 = roundps(auVar31,ZEXT416((uint)(fVar29 + fVar13)),1);
    auVar27 = roundps(auVar28,ZEXT416((uint)(*(float *)((longlong)&param_1->_padding_ + 4) + fVar13)
                                     ),1);
    iVar20 = UE::Core::Private::
             ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x2c,4,1,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,&pTVar6->ArrayMax);
    lVar24 = (longlong)iVar20 * 0x2c;
    lVar7 = (pFVar22->SourceVertices->AllocatorInstance)._padding_;
    uStack_c0 = CONCAT44(auVar27._0_4_,auVar30._0_4_);
    *(undefined8 *)(lVar24 + lVar7) = uVar14;
    ((undefined8 *)(lVar24 + lVar7))[1] = uVar15;
    uVar15 = _UNK_15090c6d8;
    uVar14 = ___xmm_3f8000003f800000000000003f800000;
    puVar1 = (undefined4 *)(lVar24 + 0x10 + lVar7);
    *puVar1 = (undefined4)local_c8;
    puVar1[1] = local_c8._4_4_;
    puVar1[2] = auVar30._0_4_;
    puVar1[3] = auVar27._0_4_;
    *(undefined8 *)(lVar24 + 0x20 + lVar7) = local_b8._0_8_;
    *(float *)(lVar24 + 0x28 + lVar7) = local_b8._s_0.Z;
    pFVar22->NumVertices = pFVar22->NumVertices + 1;
    pTVar6 = pFVar22->SourceVertices;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_b8._8_8_;
    local_b8 = (TVector4<float>_u_0)(auVar9 << 0x40);
    auVar30 = roundps(auVar30,ZEXT416((uint)((float)local_res20 * *(float *)&param_1->_padding_ +
                                             *(float *)&param_1->_padding_ + fVar13)),1);
    auVar27 = roundps(auVar27,ZEXT416((uint)((float)local_res20 *
                                             *(float *)((longlong)&param_1->_padding_ + 4) +
                                             *(float *)((longlong)&param_1->_padding_ + 4) + fVar13)
                                     ),1);
    iVar20 = UE::Core::Private::
             ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x2c,4,1,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,&pTVar6->ArrayMax);
    lVar24 = (longlong)iVar20 * 0x2c;
    lVar7 = (pFVar22->SourceVertices->AllocatorInstance)._padding_;
    uStack_c0 = CONCAT44(auVar27._0_4_,auVar30._0_4_);
    *(undefined8 *)(lVar24 + lVar7) = uVar14;
    ((undefined8 *)(lVar24 + lVar7))[1] = uVar15;
    uVar15 = _UNK_15090c6e8;
    uVar14 = ___xmm_3f8000003f8000003f80000000000000;
    puVar1 = (undefined4 *)(lVar24 + 0x10 + lVar7);
    *puVar1 = (undefined4)local_c8;
    puVar1[1] = local_c8._4_4_;
    puVar1[2] = auVar30._0_4_;
    puVar1[3] = auVar27._0_4_;
    *(undefined8 *)(lVar24 + 0x20 + lVar7) = local_b8._0_8_;
    *(float *)(lVar24 + 0x28 + lVar7) = local_b8._s_0.Z;
    pFVar22->NumVertices = pFVar22->NumVertices + 1;
    pTVar6 = pFVar22->SourceVertices;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_b8._8_8_;
    local_b8 = (TVector4<float>_u_0)(auVar10 << 0x40);
    auVar30 = roundps(auVar30,ZEXT416((uint)(local_res20._4_4_ * *(float *)&param_1->_padding_ +
                                             *(float *)&param_1->_padding_ + fVar13)),1);
    auVar27 = roundps(auVar27,ZEXT416((uint)(local_res20._4_4_ *
                                             *(float *)((longlong)&param_1->_padding_ + 4) +
                                             *(float *)((longlong)&param_1->_padding_ + 4) + fVar13)
                                     ),1);
    iVar20 = UE::Core::Private::
             ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x2c,4,1,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,&pTVar6->ArrayMax);
    lVar24 = (longlong)iVar20 * 0x2c;
    lVar7 = (pFVar22->SourceVertices->AllocatorInstance)._padding_;
    uStack_c0 = CONCAT44(auVar27._0_4_,auVar30._0_4_);
    *(undefined8 *)(lVar24 + lVar7) = uVar14;
    ((undefined8 *)(lVar24 + lVar7))[1] = uVar15;
    uVar15 = _UNK_15076b1f8;
    uVar14 = ___xmm_3f8000003f8000003f8000003f800000;
    puVar1 = (undefined4 *)(lVar24 + 0x10 + lVar7);
    *puVar1 = (undefined4)local_c8;
    puVar1[1] = local_c8._4_4_;
    puVar1[2] = auVar30._0_4_;
    puVar1[3] = auVar27._0_4_;
    *(undefined8 *)(lVar24 + 0x20 + lVar7) = local_b8._0_8_;
    *(float *)(lVar24 + 0x28 + lVar7) = local_b8._s_0.Z;
    pFVar22->NumVertices = pFVar22->NumVertices + 1;
    pTVar6 = pFVar22->SourceVertices;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_b8._8_8_;
    local_b8 = (TVector4<float>_u_0)(auVar11 << 0x40);
    auVar27 = roundps(auVar27,ZEXT416((uint)((float)local_res20 *
                                             *(float *)((longlong)&param_1->_padding_ + 4) +
                                             *(float *)((longlong)&param_1->_padding_ + 4) +
                                            local_res20._4_4_ *
                                            *(float *)((longlong)&param_1->_padding_ + 4) + fVar13))
                      ,1);
    auVar30 = roundps(auVar30,ZEXT416((uint)((float)local_res20 * *(float *)&param_1->_padding_ +
                                             local_res20._4_4_ * *(float *)&param_1->_padding_ +
                                            *(float *)&param_1->_padding_ + fVar13)),1);
    iVar20 = UE::Core::Private::
             ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x2c,4,1,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,&pTVar6->ArrayMax);
    lVar24 = (longlong)iVar20 * 0x2c;
    lVar7 = (pFVar22->SourceVertices->AllocatorInstance)._padding_;
    *(undefined8 *)(lVar24 + lVar7) = uVar14;
    ((undefined8 *)(lVar24 + lVar7))[1] = uVar15;
    puVar1 = (undefined4 *)(lVar24 + 0x10 + lVar7);
    *puVar1 = (undefined4)local_c8;
    puVar1[1] = local_c8._4_4_;
    puVar1[2] = auVar30._0_4_;
    puVar1[3] = auVar27._0_4_;
    *(undefined8 *)(lVar24 + 0x20 + lVar7) = local_b8._0_8_;
    *(float *)(lVar24 + 0x28 + lVar7) = local_b8._s_0.Z;
    pFVar22->NumVertices = pFVar22->NumVertices + 1;
    FSlateRenderBatch::AddIndex(pFVar22,0);
    FSlateRenderBatch::AddIndex(pFVar22,1);
    FSlateRenderBatch::AddIndex(pFVar22,2);
    FSlateRenderBatch::AddIndex(pFVar22,2);
    FSlateRenderBatch::AddIndex(pFVar22,1);
    FSlateRenderBatch::AddIndex(pFVar22,3);
  }
  return;
}

// AddViewportElement<0> @ 1424d3ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddViewportElement<0>
          (FSlateElementBatcher *this,FSlateViewportElement *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ESlateDrawEffect EVar6;
  schar sVar7;
  ESlateBatchDrawFlag EVar8;
  FSlateShaderResource *pFVar9;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ESlatePostRT EVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  FSlateElementBatcher *pFVar29;
  FSlateRenderBatch *pFVar30;
  FSlateClippingState *pFVar31;
  longlong lVar32;
  longlong lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  uint local_res10;
  undefined8 local_res20;
  ESlateShader EVar39;
  ESlateShader EVar40;
  FLinearColor_u_0 local_d8;
  TVector4<float>_u_0 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  TVector4<float>_u_0 local_a8;
  
  fVar37 = __real_3f800000;
  local_d8._s_0.R = (float)*(undefined4 *)&param_1->_padding_;
  local_d8._s_0.G = *(float *)((longlong)&param_1->_padding_ + 4);
  local_d8._s_0.B = (float)*(undefined4 *)&param_1->_padding_;
  local_d8._s_0.A = *(float *)((longlong)&param_1->_padding_ + 4);
  local_res20 = param_1->_padding_;
  iVar28 = (int)param_1->_padding_;
  EVar6 = *(ESlateDrawEffect *)((longlong)&param_1->_padding_ + 3);
  if (this->bSRGBVertexColor == false) {
    auVar34._4_4_ = local_d8._s_0.B;
    auVar34._0_4_ = local_d8._s_0.B;
    auVar34._8_4_ = local_d8._s_0.B;
    auVar34._12_4_ = local_d8._s_0.B;
    if (local_d8._s_0.B <= 0.0) {
      auVar12._12_4_ = 0;
      auVar12._0_12_ = auVar34._4_12_;
      auVar34 = auVar12 << 0x20;
    }
    if (__real_3f800000 <= auVar34._0_4_) {
      auVar34._0_4_ = __real_3f800000;
    }
    auVar35._4_4_ = local_d8._s_0.G;
    auVar35._0_4_ = local_d8._s_0.G;
    auVar35._8_4_ = local_d8._s_0.G;
    auVar35._12_4_ = local_d8._s_0.G;
    if (local_d8._s_0.G <= 0.0) {
      auVar13._12_4_ = 0;
      auVar13._0_12_ = auVar35._4_12_;
      auVar35 = auVar13 << 0x20;
    }
    if (__real_3f800000 <= auVar35._0_4_) {
      auVar35._0_4_ = __real_3f800000;
    }
    fVar38 = local_d8._s_0.R;
    if (local_d8._s_0.R <= 0.0) {
      fVar38 = 0.0;
    }
    fVar36 = local_d8._s_0.A;
    if (local_d8._s_0.A <= 0.0) {
      fVar36 = 0.0;
    }
    if (__real_3f800000 <= fVar38) {
      fVar38 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar36) {
      fVar36 = __real_3f800000;
    }
    local_res10 = CONCAT13((char)(int)(fVar36 * __real_437f0000 + __real_3f000000),
                           CONCAT12((char)(int)(fVar38 * __real_437f0000 + __real_3f000000),
                                    CONCAT11((char)(int)(auVar35._0_4_ * __real_437f0000 +
                                                        __real_3f000000),
                                             (char)(int)(auVar34._0_4_ * __real_437f0000 +
                                                        __real_3f000000))));
  }
  else {
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_d8._s_0);
  }
  pFVar9 = param_1->RenderTargetResource;
  EVar8 = (ESlateBatchDrawFlag)param_1->_padding_;
  if ((pFVar9 != (FSlateShaderResource *)0x0) && (pFVar9->DestroyState != '!')) {
    if ((byte)LogSlate._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>
              (&`private:_void___cdecl_FSlateElementBatcher::AddViewportElement<0>(FSlateViewportElement_const&___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlate);
    return;
  }
  EVar40 = param_1->field_0x60;
  if ((this->bCompositeHDRViewports == false) || ((EVar8 >> 8 & 1) == 0)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
  }
  local_c8._0_12_ = ZEXT812(0);
  local_c8._s_0.W = 0.0;
  pFVar29 = (FSlateElementBatcher *)&this->BatchDataHDR;
  if (!bVar18) {
    pFVar29 = this;
  }
  sVar7 = *(schar *)((longlong)&param_1->_padding_ + 2);
  EVar39 = EVar40 & GrayscaleFont;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = local_c8;
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    pFVar30 = FSlateBatchData::AddRenderBatch
                        (pFVar29->BatchData,iVar28,(FShaderParams *)&local_c8._s_0,pFVar9,
                         TriangleList,EVar39,EVar6,EVar8,sVar7);
  }
  else {
    pFVar30 = FSlateCachedElementList::AddRenderBatch
                        (this->CurrentCachedElementList,iVar28,(FShaderParams *)&local_c8._s_0,
                         pFVar9,TriangleList,EVar39,EVar6,EVar8,sVar7);
  }
  pFVar31 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
  pFVar30->ClippingState = pFVar31;
  if (pFVar9 == (FSlateShaderResource *)0x0) {
LAB_1424d3ef2:
    if (pFVar9 == (FSlateShaderResource *)0x0) goto LAB_1424d3f48;
  }
  else {
    EVar24 = (**(code **)(pFVar9->_padding_ + 0x20))(pFVar9);
    pFVar30->CachedUsedPostBuffers = EVar24;
    this->UsedSlatePostBuffers = this->UsedSlatePostBuffers | EVar24;
    if (param_1->bAllowViewportScaling != 0) goto LAB_1424d3ef2;
    this->bRequiresVsync = (bool)(this->bRequiresVsync | param_1->bRequiresVSync);
  }
  if (param_1->bAllowViewportScaling == 0) {
    fVar37 = fVar37 / *(float *)((longlong)&param_1->_padding_ + 4);
    uVar25 = (**(code **)(pFVar9->_padding_ + 8))(pFVar9);
    uVar26 = (**(code **)pFVar9->_padding_)(pFVar9);
    local_res20 = CONCAT44((float)uVar25 * fVar37,(float)uVar26 * fVar37);
  }
LAB_1424d3f48:
  uVar21 = _UNK_15076b1e8;
  uVar20 = ___xmm_3f8000003f8000000000000000000000;
  pTVar10 = pFVar30->SourceVertices;
  lVar19 = param_1->_padding_;
  uVar2 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar33 = param_1->_padding_;
  local_a8._s_0.Y = 0.0;
  local_a8._s_0.X = (float)local_res10;
  iVar27 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar10->AllocatorInstance,&pTVar10->ArrayNum,&pTVar10->ArrayMax);
  uVar23 = _UNK_15090c6d8;
  uVar22 = ___xmm_3f8000003f800000000000003f800000;
  lVar32 = (longlong)iVar27 * 0x2c;
  lVar11 = (pFVar30->SourceVertices->AllocatorInstance)._padding_;
  *(undefined8 *)(lVar32 + lVar11) = uVar20;
  ((undefined8 *)(lVar32 + lVar11))[1] = uVar21;
  puVar1 = (undefined4 *)(lVar32 + 0x10 + lVar11);
  *puVar1 = (undefined4)local_b8;
  puVar1[1] = local_b8._4_4_;
  puVar1[2] = (int)lVar19;
  puVar1[3] = uVar2;
  *(undefined8 *)(lVar32 + 0x20 + lVar11) = local_a8._0_8_;
  *(float *)(lVar32 + 0x28 + lVar11) = local_a8._s_0.Z;
  pFVar30->NumVertices = pFVar30->NumVertices + 1;
  pTVar10 = pFVar30->SourceVertices;
  local_a8._s_0.Y = 0.0;
  fVar37 = (float)local_res20 * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
  fVar38 = (float)local_res20 * *(float *)((longlong)&param_1->_padding_ + 4) +
           *(float *)((longlong)&param_1->_padding_ + 4);
  uStack_b0 = lVar33;
  iVar27 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar10->AllocatorInstance,&pTVar10->ArrayNum,&pTVar10->ArrayMax);
  lVar33 = (longlong)iVar27 * 0x2c;
  lVar11 = (pFVar30->SourceVertices->AllocatorInstance)._padding_;
  uStack_b0 = CONCAT44(fVar38,fVar37);
  *(undefined8 *)(lVar33 + lVar11) = uVar22;
  ((undefined8 *)(lVar33 + lVar11))[1] = uVar23;
  uVar21 = _UNK_15090c6e8;
  uVar20 = ___xmm_3f8000003f8000003f80000000000000;
  puVar1 = (undefined4 *)(lVar33 + 0x10 + lVar11);
  *puVar1 = (undefined4)local_b8;
  puVar1[1] = local_b8._4_4_;
  puVar1[2] = fVar37;
  puVar1[3] = fVar38;
  *(undefined8 *)(lVar33 + 0x20 + lVar11) = local_a8._0_8_;
  *(float *)(lVar33 + 0x28 + lVar11) = local_a8._s_0.Z;
  pFVar30->NumVertices = pFVar30->NumVertices + 1;
  fVar37 = *(float *)&param_1->_padding_;
  fVar38 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar36 = *(float *)&param_1->_padding_;
  fVar3 = *(float *)((longlong)&param_1->_padding_ + 4);
  pTVar10 = pFVar30->SourceVertices;
  local_a8._s_0.Y = 0.0;
  iVar27 = UE::Core::Private::
           ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                     (0x2c,4,1,&pTVar10->AllocatorInstance,&pTVar10->ArrayNum,&pTVar10->ArrayMax);
  lVar33 = (longlong)iVar27 * 0x2c;
  lVar11 = (pFVar30->SourceVertices->AllocatorInstance)._padding_;
  *(undefined8 *)(lVar33 + lVar11) = uVar20;
  ((undefined8 *)(lVar33 + lVar11))[1] = uVar21;
  puVar1 = (undefined4 *)(lVar33 + 0x10 + lVar11);
  *puVar1 = (undefined4)local_b8;
  puVar1[1] = local_b8._4_4_;
  puVar1[2] = local_res20._4_4_ * fVar37 + fVar36;
  puVar1[3] = local_res20._4_4_ * fVar38 + fVar3;
  *(undefined8 *)(lVar33 + 0x20 + lVar11) = local_a8._0_8_;
  local_c8._8_8_ = _UNK_15076b1f8;
  local_c8._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  *(float *)(lVar33 + 0x28 + lVar11) = local_a8._s_0.Z;
  pFVar30->NumVertices = pFVar30->NumVertices + 1;
  local_a8._s_0.Y = (float)0;
  uStack_b0 = CONCAT44((float)local_res20 * *(float *)((longlong)&param_1->_padding_ + 4) +
                       local_res20._4_4_ * *(float *)((longlong)&param_1->_padding_ + 4) +
                       *(float *)((longlong)&param_1->_padding_ + 4),
                       (float)local_res20 * *(float *)&param_1->_padding_ +
                       local_res20._4_4_ * *(float *)&param_1->_padding_ +
                       *(float *)&param_1->_padding_);
  FSlateRenderBatch::AddVertex(pFVar30,(FSlateVertex *)&local_c8._s_0);
  FSlateRenderBatch::AddIndex(pFVar30,0);
  FSlateRenderBatch::AddIndex(pFVar30,1);
  FSlateRenderBatch::AddIndex(pFVar30,2);
  FSlateRenderBatch::AddIndex(pFVar30,2);
  FSlateRenderBatch::AddIndex(pFVar30,1);
  FSlateRenderBatch::AddIndex(pFVar30,3);
  if (bVar18) {
    sVar7 = *(schar *)((longlong)&param_1->_padding_ + 2);
    EVar40 = EVar40 & GrayscaleFont;
    local_c8 = (TVector4<float>_u_0)ZEXT816(0);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = (TVector4<float>_u_0)ZEXT816(0);
    if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
      pFVar30 = FSlateBatchData::AddRenderBatch
                          (this->BatchData,iVar28,(FShaderParams *)&local_c8._s_0,
                           (FSlateShaderResource *)0x0,TriangleList,EVar40,EVar6,NoBlending,sVar7);
    }
    else {
      pFVar30 = FSlateCachedElementList::AddRenderBatch
                          (this->CurrentCachedElementList,iVar28,(FShaderParams *)&local_c8._s_0,
                           (FSlateShaderResource *)0x0,TriangleList,EVar40,EVar6,NoBlending,sVar7);
    }
    pFVar31 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
    uVar21 = _UNK_15076b1e8;
    uVar20 = ___xmm_3f8000003f8000000000000000000000;
    lVar19 = param_1->_padding_;
    uVar2 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    lVar33 = param_1->_padding_;
    pFVar30->ClippingState = pFVar31;
    pTVar10 = pFVar30->SourceVertices;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = local_a8._8_8_;
    local_a8 = (TVector4<float>_u_0)(auVar14 << 0x40);
    iVar28 = UE::Core::Private::
             ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x2c,4,1,&pTVar10->AllocatorInstance,&pTVar10->ArrayNum,&pTVar10->ArrayMax);
    lVar32 = (longlong)iVar28 * 0x2c;
    lVar11 = (pFVar30->SourceVertices->AllocatorInstance)._padding_;
    *(undefined8 *)(lVar32 + lVar11) = uVar20;
    ((undefined8 *)(lVar32 + lVar11))[1] = uVar21;
    uVar21 = _UNK_15090c6d8;
    uVar20 = ___xmm_3f8000003f800000000000003f800000;
    puVar1 = (undefined4 *)(lVar32 + 0x10 + lVar11);
    *puVar1 = (undefined4)local_b8;
    puVar1[1] = local_b8._4_4_;
    puVar1[2] = (int)lVar19;
    puVar1[3] = uVar2;
    *(undefined8 *)(lVar32 + 0x20 + lVar11) = local_a8._0_8_;
    *(float *)(lVar32 + 0x28 + lVar11) = local_a8._s_0.Z;
    pFVar30->NumVertices = pFVar30->NumVertices + 1;
    pTVar10 = pFVar30->SourceVertices;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_a8._8_8_;
    local_a8 = (TVector4<float>_u_0)(auVar15 << 0x40);
    fVar37 = (float)local_res20 * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
    fVar38 = (float)local_res20 * *(float *)((longlong)&param_1->_padding_ + 4) +
             *(float *)((longlong)&param_1->_padding_ + 4);
    uStack_b0 = lVar33;
    iVar28 = UE::Core::Private::
             ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x2c,4,1,&pTVar10->AllocatorInstance,&pTVar10->ArrayNum,&pTVar10->ArrayMax);
    lVar33 = (longlong)iVar28 * 0x2c;
    lVar11 = (pFVar30->SourceVertices->AllocatorInstance)._padding_;
    uStack_b0 = CONCAT44(fVar38,fVar37);
    *(undefined8 *)(lVar33 + lVar11) = uVar20;
    ((undefined8 *)(lVar33 + lVar11))[1] = uVar21;
    uVar23 = _UNK_15090c6e8;
    uVar22 = ___xmm_3f8000003f8000003f80000000000000;
    puVar1 = (undefined4 *)(lVar33 + 0x10 + lVar11);
    *puVar1 = (undefined4)local_b8;
    puVar1[1] = local_b8._4_4_;
    puVar1[2] = fVar37;
    puVar1[3] = fVar38;
    *(undefined8 *)(lVar33 + 0x20 + lVar11) = local_a8._0_8_;
    *(float *)(lVar33 + 0x28 + lVar11) = local_a8._s_0.Z;
    pFVar30->NumVertices = pFVar30->NumVertices + 1;
    pTVar10 = pFVar30->SourceVertices;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = local_a8._8_8_;
    local_a8 = (TVector4<float>_u_0)(auVar16 << 0x40);
    fVar37 = local_res20._4_4_ * *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
    fVar38 = local_res20._4_4_ * *(float *)((longlong)&param_1->_padding_ + 4) +
             *(float *)((longlong)&param_1->_padding_ + 4);
    iVar28 = UE::Core::Private::
             ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x2c,4,1,&pTVar10->AllocatorInstance,&pTVar10->ArrayNum,&pTVar10->ArrayMax);
    uVar21 = _UNK_15076b1f8;
    uVar20 = ___xmm_3f8000003f8000003f8000003f800000;
    lVar33 = (longlong)iVar28 * 0x2c;
    lVar11 = (pFVar30->SourceVertices->AllocatorInstance)._padding_;
    uStack_b0 = CONCAT44(fVar38,fVar37);
    *(undefined8 *)(lVar33 + lVar11) = uVar22;
    ((undefined8 *)(lVar33 + lVar11))[1] = uVar23;
    puVar1 = (undefined4 *)(lVar33 + 0x10 + lVar11);
    *puVar1 = (undefined4)local_b8;
    puVar1[1] = local_b8._4_4_;
    puVar1[2] = fVar37;
    puVar1[3] = fVar38;
    *(undefined8 *)(lVar33 + 0x20 + lVar11) = local_a8._0_8_;
    *(float *)(lVar33 + 0x28 + lVar11) = local_a8._s_0.Z;
    pFVar30->NumVertices = pFVar30->NumVertices + 1;
    fVar37 = *(float *)&param_1->_padding_;
    pTVar10 = pFVar30->SourceVertices;
    fVar38 = *(float *)((longlong)&param_1->_padding_ + 4);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = local_a8._8_8_;
    local_a8 = (TVector4<float>_u_0)(auVar17 << 0x40);
    fVar36 = *(float *)&param_1->_padding_;
    fVar3 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar4 = *(float *)&param_1->_padding_;
    fVar5 = *(float *)((longlong)&param_1->_padding_ + 4);
    iVar28 = UE::Core::Private::
             ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x2c,4,1,&pTVar10->AllocatorInstance,&pTVar10->ArrayNum,&pTVar10->ArrayMax);
    lVar33 = (longlong)iVar28 * 0x2c;
    lVar11 = (pFVar30->SourceVertices->AllocatorInstance)._padding_;
    *(undefined8 *)(lVar33 + lVar11) = uVar20;
    ((undefined8 *)(lVar33 + lVar11))[1] = uVar21;
    puVar1 = (undefined4 *)(lVar33 + 0x10 + lVar11);
    *puVar1 = (undefined4)local_b8;
    puVar1[1] = local_b8._4_4_;
    puVar1[2] = (float)local_res20 * fVar37 + local_res20._4_4_ * fVar36 + fVar4;
    puVar1[3] = (float)local_res20 * fVar38 + local_res20._4_4_ * fVar3 + fVar5;
    *(undefined8 *)(lVar33 + 0x20 + lVar11) = local_a8._0_8_;
    *(float *)(lVar33 + 0x28 + lVar11) = local_a8._s_0.Z;
    pFVar30->NumVertices = pFVar30->NumVertices + 1;
    FSlateRenderBatch::AddIndex(pFVar30,0);
    FSlateRenderBatch::AddIndex(pFVar30,1);
    FSlateRenderBatch::AddIndex(pFVar30,2);
    FSlateRenderBatch::AddIndex(pFVar30,2);
    FSlateRenderBatch::AddIndex(pFVar30,1);
    FSlateRenderBatch::AddIndex(pFVar30,3);
  }
  return;
}

// BuildShapedTextSequence<1> @ 1424d4580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateElementBatcher::BuildShapedTextSequence<1>
          (FSlateElementBatcher *this,FShapedTextBuildContext *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  FScriptContainerElement *pFVar4;
  undefined4 *puVar5;
  ETextOverflowPolicy EVar6;
  EFontRasterizationMode EVar7;
  EFontRasterizationMode EVar8;
  short sVar9;
  TTransform2<float> *pTVar10;
  FSlateDrawElement *pFVar11;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar12;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar13;
  int *piVar14;
  code *pcVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  FSlateShaderResource *pFVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  bool bVar26;
  ESlatePostRT EVar27;
  bool bVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  undefined8 *puVar33;
  FShapedGlyphFaceData *pFVar34;
  ISlateFontTexture *pIVar35;
  longlong *plVar36;
  TOptional<int> TVar37;
  FSlateRenderBatch *pFVar38;
  FSlateClippingState *pFVar39;
  char *pcVar40;
  FSlateVertex *pFVar41;
  longlong lVar42;
  FColor_u_0 FVar43;
  uint uVar44;
  ulonglong uVar45;
  FColor_u_0 FVar46;
  FSlateRenderBatch *pFVar47;
  uint uVar48;
  ESlateShader EVar49;
  longlong lVar50;
  FSlateElementBatcher *this_00;
  FShapedGlyphEntry *this_01;
  FShapedGlyphSequence *pFVar51;
  FScriptContainerElement *pFVar52;
  bool bVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  uchar local_635;
  ETextOverflowDirection local_634;
  float local_62c;
  float local_628;
  bool local_622;
  float local_620;
  float local_61c;
  undefined1 local_617 [3];
  float local_614;
  float local_610;
  float local_60c;
  float local_608;
  int local_604;
  float local_600;
  float local_5fc;
  char local_5f8;
  float local_5f4;
  int local_5f0;
  uint local_5ec;
  float local_5e8 [2];
  float afStack_5e0 [2];
  undefined8 local_5d8;
  FSlateShaderResource *local_5d0;
  float local_5c8;
  float local_5c4;
  int local_5c0;
  float local_5bc;
  float local_5b8;
  ForAnyElementType local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  int local_598 [2];
  int local_590 [2];
  int local_588 [2];
  int local_580 [2];
  int local_578 [2];
  int local_570 [2];
  int local_568 [2];
  float local_560;
  int local_558 [2];
  float local_550;
  int local_54c;
  float local_544;
  FColor_u_0 local_540;
  FShapedGlyphSequence *local_538;
  float local_530;
  float local_52c;
  uint local_528;
  float local_524;
  float local_520;
  FSlateElementBatcher *local_518;
  FShapedGlyphFontAtlasData local_510;
  FMiddleEllipsisOverflowData local_500;
  undefined4 local_4e8 [2];
  UObject *local_4e0;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  FColor_u_0 local_4c8;
  FSdfGlyphFontAtlasData local_4c0;
  longlong *local_498;
  undefined1 local_488 [8];
  float fStack_480;
  float fStack_47c;
  TVector4<float>_u_0 local_478;
  TVector4<float>_u_0 local_468;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  FColor_u_0 local_438;
  undefined4 uStack_434;
  undefined4 local_430;
  FSlateVertex local_428;
  longlong *local_3f8;
  FShapedGlyphEntry *local_3f0;
  FShapedTextBuildContext *local_3e8;
  FSlateVertex local_3e0;
  FSlateVertex local_3b0;
  FSlateVertex local_380;
  FSlateVertex local_350;
  FSlateVertex local_320;
  FSlateVertex local_2f0;
  TVector4<float>_u_0 local_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  float local_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  float local_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  float local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  float local_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  float local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  float local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  FShapedTextBuildContext local_188;
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  TReferenceControllerBase<1> *local_118;
  TVector4<float>_u_0 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  pFVar51 = param_1->ShapedGlyphSequence;
  local_538 = pFVar51;
  local_518 = this;
  local_3e8 = param_1;
  puVar33 = (undefined8 *)
            (**(code **)(this->RenderingPolicy->_padding_ + 8))(this->RenderingPolicy,local_120);
  local_3f8 = (longlong *)*puVar33;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118);
  FVar43 = FColor::White.field0_0x0;
  pTVar10 = param_1->RenderTransform;
  fVar60 = param_1->StartLineX;
  pFVar38 = (FSlateRenderBatch *)0x0;
  local_62c = param_1->StartLineY;
  auVar61 = ZEXT816(0);
  FVar46 = (param_1->FontTint).field0_0x0;
  local_550 = 0.0;
  local_5e8 = (pTVar10->M).M[0];
  afStack_5e0 = (pTVar10->M).M[1];
  local_528 = 0xffffffff;
  local_544 = 0.0;
  local_5d8 = (pTVar10->Trans).field0_0x0;
  local_4e0 = param_1->FontMaterial;
  local_634 = param_1->OverflowDirection;
  EVar6 = param_1->OverflowPolicy;
  local_61c = 0.0;
  local_5bc = 0.0;
  local_498 = (longlong *)0x0;
  local_540 = FColor::White.field0_0x0;
  bVar17 = false;
  bVar19 = false;
  local_608 = fVar60;
  fVar54 = FShapedGlyphSequence::GetFontSkew(pFVar51);
  local_604 = 0;
  local_524 = 0.0;
  local_520 = 0.0;
  local_5f8 = (float)((uint)fVar54 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77;
  local_5b8 = 0.0;
  local_628 = 0.0;
  local_622 = false;
  bVar28 = pFVar51->bMaterialIsStencil;
  iVar30 = (pFVar51->GlyphsToRender).ArrayNum;
  local_54c = param_1->OutlineSettings->OutlineSize;
  iVar29 = FShapedGlyphSequence::GetMeasuredWidth(pFVar51);
  if (((float)iVar29 <= param_1->LocalClipBoundingBoxRight - param_1->LocalClipBoundingBoxLeft) ||
     (local_634 == NoOverflow)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  local_5c0 = -1;
  local_5f0 = -1;
  bVar20 = true;
  local_5b0.Data = (FScriptContainerElement *)0x0;
  local_5a8 = 0;
  if ((SdfTextDebugVisual == 1) || (SdfTextDebugVisual == 2)) {
    local_4e0 = (UObject *)0x0;
    FVar46 = FColor::White.field0_0x0;
  }
  if ((EVar6 == MiddleEllipsis) && (bVar16)) {
    local_500.SkipIndexStart = -1;
    local_500.SkipIndexEnd = -1;
    local_500.EllipsisLineX = 0.0;
    local_500.EllipsisLineY = 0.0;
    local_500.LineX = fVar60;
    local_500.LineY = local_62c;
    CalculateMiddleEllipsisSkipIndexAndOffset(this,param_1,local_634,&local_500);
    auVar61 = ZEXT416((uint)local_500.EllipsisLineY);
    local_62c = local_500.LineY;
    local_61c = local_500.EllipsisLineX;
    local_608 = local_500.LineX;
    local_5bc = local_500.EllipsisLineY;
    local_5c0 = local_500.SkipIndexStart;
    local_5f0 = local_500.SkipIndexEnd;
    fVar60 = local_500.LineX;
  }
  local_5ec = 0;
  local_2c0 = ___xmm_3f800000000000000000000000000000;
  pFVar47 = pFVar38;
  fVar54 = fVar60;
  iVar29 = local_5c0;
  iVar32 = local_5f0;
  if (iVar30 < 1) {
    bVar17 = false;
    local_628 = 0.0;
LAB_1424d5ef7:
    if (!param_1->bForceEllipsis) goto LAB_1424d5f0d;
    auVar61 = ZEXT416((uint)local_62c);
    local_61c = fVar60 - local_628;
  }
  else {
    do {
      uVar48 = (uint)pFVar47;
      fVar60 = fVar54;
      if (((int)uVar48 < iVar29) || (iVar32 < (int)uVar48)) {
        uVar31 = 0;
        if ((int)uVar48 < (pFVar51->GlyphsToRender).ArrayNum) {
          uVar31 = ~uVar48 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        this_01 = (FShapedGlyphEntry *)
                  ((pFVar51->GlyphsToRender).AllocatorInstance.Data + (longlong)(int)uVar48 * 0xa8);
        local_3f0 = this_01;
        fVar55 = FShapedGlyphEntry::GetBitmapRenderScale(this_01);
        local_5d0 = (FSlateShaderResource *)CONCAT44(local_5d0._4_4_,fVar55);
        if (((this_01->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar25)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        unaff_XMM7 = ZEXT816(0);
        local_5c4 = 0.0;
        fVar59 = 0.0;
        local_560 = 0.0;
        fVar55 = 0.0;
        local_614 = 0.0;
        auVar61 = ZEXT816(0);
        EVar7 = ((this_01->FontFaceData).Object)->RasterizationMode;
        fVar57 = 0.0;
        bVar25 = this_01->bIsVisible;
        bVar53 = EVar7 != Bitmap;
        local_600 = 0.0;
        local_60c = 0.0;
        local_610 = 0.0;
        local_5fc = 0.0;
        local_620 = 0.0;
        local_530 = 0.0;
        local_52c = 0.0;
        local_5a0 = (FSlateDrawElement *)((ulonglong)local_5a0 & 0xffffffff00000000);
        local_5f4 = 0.0;
        local_5c8 = 0.0;
        if (bVar25 == false) {
          unaff_XMM7 = ZEXT416((uint)fVar54);
          fVar59 = (float)(int)this_01->XAdvance;
          bVar18 = false;
          local_5c4 = fVar54;
LAB_1424d526e:
          pFVar51 = local_538;
          uVar31 = (uint)pFVar47;
          iVar29 = uVar31 + 1;
          bVar53 = false;
          fVar57 = unaff_XMM7._0_4_;
          fVar60 = fVar59;
          if (((EVar6 == MiddleEllipsis) && (bVar16)) &&
             ((local_5c0 <= iVar29 && (iVar29 <= local_5f0)))) {
            local_5bc = local_62c;
            bVar53 = true;
            local_61c = (float)(int)this_01->XAdvance + fVar54;
LAB_1424d53dd:
            iVar29 = 0;
            if (local_634 == LeftToRight) {
              if (EVar6 == MiddleEllipsis) goto LAB_1424d5442;
              if ((int)uVar31 < iVar30 + -1) {
                iVar29 = FShapedGlyphSequence::GetMeasuredWidth(param_1->OverflowGlyphSequence);
              }
              if ((fVar60 + fVar57 + (float)iVar29 < param_1->LocalClipBoundingBoxRight) &&
                 ((param_1->MaxGlyphCountToRender < 0 ||
                  ((int)uVar31 < param_1->MaxGlyphCountToRender)))) goto LAB_1424d543a;
              bVar17 = true;
              local_61c = fVar54 - local_628;
              auVar61 = ZEXT416((uint)local_62c);
              goto LAB_1424d5f23;
            }
            if (local_634 != RightToLeft) goto LAB_1424d543a;
            if (EVar6 != MiddleEllipsis) {
              if ((fVar57 < param_1->LocalClipBoundingBoxLeft) ||
                 ((-1 < param_1->MaxGlyphCountToRender &&
                  ((int)uVar31 < iVar30 - param_1->MaxGlyphCountToRender)))) {
                bVar19 = true;
              }
              else if ((!bVar19) && (this_01->bIsVisible != false)) {
                local_604 = local_604 + 1;
                bVar18 = true;
                local_634 = NoOverflow;
                goto LAB_1424d5442;
              }
              iVar29 = FShapedGlyphSequence::GetMeasuredWidth(param_1->OverflowGlyphSequence);
              local_5bc = local_62c;
              bVar17 = true;
              fVar60 = (float)(int)this_01->XAdvance + fVar54;
              local_61c = fVar60 - (float)iVar29;
              bVar18 = false;
              if (((float)(int)this_01->XAdvance + fVar57) - param_1->LocalClipBoundingBoxLeft <
                  (float)iVar29) {
                bVar18 = bVar19;
              }
              bVar19 = bVar18;
              bVar18 = false;
              if (1 < this_01->NumCharactersInGlyph) {
                uVar48 = uVar31 + (this_01->NumCharactersInGlyph - 1);
                pFVar51 = local_538;
                iVar29 = local_5c0;
                iVar32 = local_5f0;
                local_608 = fVar60;
                goto LAB_1424d5ea9;
              }
            }
          }
          else {
            if (local_634 != NoOverflow) {
              if ((1 < this_01->NumGraphemeClustersInGlyph) || (1 < this_01->NumCharactersInGlyph))
              {
                uVar45 = (ulonglong)iVar29;
                iVar32 = this_01->SourceIndex;
                if (iVar29 < iVar30) {
                  lVar50 = uVar45 * 0xa8;
                  local_620 = (float)uVar31;
                  do {
                    uVar44 = (uint)uVar45;
                    uVar48 = 0;
                    if ((int)uVar44 < (pFVar51->GlyphsToRender).ArrayNum) {
                      uVar48 = ~uVar44 >> 0x1f;
                    }
                    fVar62 = (float)(uint)pFVar47;
                    if ((uVar48 == 0) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), fVar62 = local_620, bVar26)) {
                      pcVar15 = (code *)swi(3);
                      iVar30 = (*pcVar15)();
                      return iVar30;
                    }
                    param_1 = local_3e8;
                    this_01 = local_3f0;
                    FVar43 = local_540;
                    uVar31 = local_5ec;
                    if (*(int *)((pFVar51->GlyphsToRender).AllocatorInstance.Data + lVar50 + 0x14)
                        != iVar32) break;
                    fVar62 = (float)((int)fVar62 + 1);
                    pFVar47 = (FSlateRenderBatch *)(ulonglong)(uint)fVar62;
                    uVar45 = (ulonglong)(uVar44 + 1);
                    lVar50 = lVar50 + 0xa8;
                    local_620 = fVar62;
                  } while ((int)(uVar44 + 1) < iVar30);
                  if ((int)local_5ec < (int)fVar62) {
                    TVar37 = FShapedGlyphSequence::GetMeasuredWidth
                                       (local_538,(int)local_128,local_5ec,SUB41(fVar62,0));
                    if (*(char *)((longlong)TVar37 + 4) == '\0') {
                      iVar29 = (int)fVar59;
                    }
                    else {
                      iVar29 = *(int *)TVar37;
                    }
                    fVar60 = (float)iVar29;
                  }
                }
              }
              goto LAB_1424d53dd;
            }
LAB_1424d543a:
            local_604 = local_604 + 1;
          }
LAB_1424d5442:
          if ((bVar18) && (pFVar38 != (FSlateRenderBatch *)0x0)) {
            fVar59 = fVar59 + fVar57;
            local_600 = auVar61._0_4_ + local_560;
            local_620 = 0.0;
            local_628 = 0.0;
            fVar54 = 0.0;
            fVar60 = 0.0;
            local_5a0 = (FSlateDrawElement *)CONCAT44(local_5a0._4_4_,pFVar38->NumVertices);
            if (local_4e0 != (UObject *)0x0) {
              fVar60 = __real_3f800000 / param_1->MaxHeight;
              local_628 = (float)(int)(uVar31 + 1) * (__real_3f800000 / (float)iVar30);
              local_620 = fVar60 * local_560;
              fVar54 = (float)(int)uVar31 * (__real_3f800000 / (float)iVar30);
              fVar60 = fVar60 * local_600;
            }
            local_5fc = fVar59;
            if (local_5f8 == '\0') {
              if (EVar7 != Bitmap) {
                fVar62 = FShapedGlyphSequence::GetFontSkew(local_538);
                unaff_XMM7._0_4_ = fVar57 + fVar62 * local_5c8;
                fVar63 = (local_5c8 - local_5f4) * fVar62;
                local_5fc = fVar59 + fVar62 * local_5c8;
                local_5c4 = fVar57 + fVar63;
                fVar59 = fVar59 + fVar63;
                goto LAB_1424d5551;
              }
LAB_1424d58c0:
              fVar62 = afStack_5e0[0];
              fVar63 = afStack_5e0[1];
              fVar57 = unaff_XMM7._0_4_;
              local_350.MaterialTexCoords.field0_0x0 = (TVector2<float>_u_0)0x0;
              local_350.TexCoords[1] = local_614;
              fVar64 = afStack_5e0[0] * local_560;
              fVar56 = afStack_5e0[1] * local_560;
              local_350.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
              auVar61 = roundps(ZEXT416((uint)local_614),
                                ZEXT416((uint)(local_5e8[0] * fVar57 + fVar64 + (float)local_5d8 +
                                              __real_3f000000)),1);
              local_350.Position.field0_0x0._s_0.X = (float)auVar61._0_4_;
              auVar61 = roundps(auVar61,ZEXT416((uint)(local_5e8[1] * fVar57 + fVar56 +
                                                       local_5d8._4_4_ + __real_3f000000)),1);
              local_350.Position.field0_0x0._s_0.Y = (float)auVar61._0_4_;
              local_350.TexCoords[0] = fVar55;
              local_350.TexCoords[2] = fVar54;
              local_350.TexCoords[3] = local_620;
              local_350.Color.field0_0x0 = FVar43;
              FSlateRenderBatch::AddVertex(pFVar38,&local_350);
              local_320.MaterialTexCoords.field0_0x0 = (TVector2<float>_u_0)0x3f800000;
              local_60c = local_60c + fVar55;
              local_320.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
              local_320.TexCoords[1] = local_614;
              local_320.TexCoords[2] = local_628;
              local_320.TexCoords[3] = local_620;
              auVar61 = roundps(ZEXT416((uint)local_620),
                                ZEXT416((uint)(local_5e8[0] * local_5fc + fVar64 + (float)local_5d8
                                              + __real_3f000000)),1);
              local_320.Position.field0_0x0._s_0.X = (float)auVar61._0_4_;
              auVar61 = roundps(auVar61,ZEXT416((uint)(local_5e8[1] * local_5fc + fVar56 +
                                                       local_5d8._4_4_ + __real_3f000000)),1);
              local_320.Position.field0_0x0._s_0.Y = (float)auVar61._0_4_;
              local_320.TexCoords[0] = local_60c;
              local_320.Color.field0_0x0 = FVar43;
              FSlateRenderBatch::AddVertex(pFVar38,&local_320);
              local_448 = 0;
              fVar62 = fVar62 * local_600;
              uStack_444 = 0x3f800000;
              fVar63 = fVar63 * local_600;
              local_610 = local_610 + local_614;
              unaff_XMM7 = roundps(ZEXT416((uint)fVar56),
                                   ZEXT416((uint)(local_5e8[0] * local_5c4 + fVar62 +
                                                  (float)local_5d8 + __real_3f000000)),1);
              auVar61 = roundps(ZEXT416((uint)fVar64),
                                ZEXT416((uint)(local_5e8[1] * local_5c4 + fVar63 + local_5d8._4_4_ +
                                              __real_3f000000)),1);
              pTVar12 = pFVar38->SourceVertices;
              uStack_434 = 0;
              local_438 = FVar43;
              iVar29 = UE::Core::Private::
                       ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                                 (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,
                                  &pTVar12->ArrayMax);
              local_2f0.TexCoords[1] = local_610;
              uStack_440 = unaff_XMM7._0_4_;
              uStack_43c = auVar61._0_4_;
              local_2f0.MaterialTexCoords.field0_0x0._s_0.X = 1.0;
              lVar42 = (longlong)iVar29 * 0x2c;
              lVar50 = (pFVar38->SourceVertices->AllocatorInstance)._padding_;
              fVar62 = local_5e8[0] * fVar59 + fVar62 + (float)local_5d8 + __real_3f000000;
              pfVar3 = (float *)(lVar42 + lVar50);
              *pfVar3 = fVar55;
              pfVar3[1] = local_610;
              pfVar3[2] = fVar54;
              pfVar3[3] = fVar60;
              local_2f0.MaterialTexCoords.field0_0x0._s_0.Y = 1.0;
              puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar50);
              *puVar5 = local_448;
              puVar5[1] = uStack_444;
              puVar5[2] = uStack_440;
              puVar5[3] = uStack_43c;
              *(ulonglong *)(lVar42 + 0x20 + lVar50) = CONCAT44(uStack_434,local_438.Bits);
              local_2f0.TexCoords[0] = local_60c;
              local_2f0.TexCoords[2] = local_628;
              auVar61 = roundps(ZEXT416((uint)local_628),ZEXT416((uint)fVar62),1);
              *(undefined4 *)(lVar42 + 0x28 + lVar50) = local_430;
              pFVar41 = &local_2f0;
              pFVar38->NumVertices = pFVar38->NumVertices + 1;
              local_2f0.Position.field0_0x0._s_0.X = (float)auVar61._0_4_;
              local_2f0.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
              fStack_454 = local_610;
              auVar61 = roundps(auVar61,ZEXT416((uint)(local_5e8[1] * fVar59 + fVar63 +
                                                       local_5d8._4_4_ + __real_3f000000)),1);
              local_2f0.Position.field0_0x0._s_0.Y = (float)auVar61._0_4_;
              local_458 = fVar55;
              fStack_450 = fVar54;
              fStack_44c = fVar60;
              local_2f0.TexCoords[3] = fVar60;
              local_2f0.Color.field0_0x0 = FVar43;
            }
            else {
LAB_1424d5551:
              fVar57 = unaff_XMM7._0_4_;
              if (EVar7 == Bitmap) goto LAB_1424d58c0;
              fVar64 = afStack_5e0[0];
              fVar56 = afStack_5e0[1];
              local_428.TexCoords[1] = local_614;
              local_428.MaterialTexCoords.field0_0x0 = (TVector2<float>_u_0)0x0;
              fVar62 = afStack_5e0[0] * local_560;
              local_428.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
              fVar63 = afStack_5e0[1] * local_560;
              unaff_XMM7 = ZEXT416((uint)fVar63);
              local_428.Position.field0_0x0._s_0.X =
                   local_5e8[0] * fVar57 + fVar62 + (float)local_5d8;
              local_428.Position.field0_0x0._s_0.Y =
                   local_5e8[1] * fVar57 + fVar63 + local_5d8._4_4_;
              local_428.TexCoords[0] = fVar55;
              local_428.TexCoords[2] = fVar54;
              local_428.TexCoords[3] = local_620;
              local_428.Color.field0_0x0 = FVar43;
              FSlateRenderBatch::AddVertex(pFVar38,&local_428);
              local_60c = local_60c + fVar55;
              local_3e0.MaterialTexCoords.field0_0x0 = (TVector2<float>_u_0)0x3f800000;
              local_3e0.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
              local_3e0.TexCoords[1] = local_614;
              local_3e0.TexCoords[2] = local_628;
              local_3e0.TexCoords[3] = local_620;
              fVar21 = local_5d8._4_4_;
              local_3e0.Position.field0_0x0._s_0.Y =
                   local_5e8[1] * local_5fc + fVar63 + local_5d8._4_4_;
              local_3e0.Position.field0_0x0._s_0.X =
                   local_5e8[0] * local_5fc + fVar62 + (float)local_5d8;
              local_3e0.TexCoords[0] = local_60c;
              local_3e0.Color.field0_0x0 = FVar43;
              FSlateRenderBatch::AddVertex(pFVar38,&local_3e0);
              local_610 = local_610 + local_614;
              fVar64 = fVar64 * local_600;
              local_3b0.MaterialTexCoords.field0_0x0._s_0.X = 0.0;
              fVar56 = fVar56 * local_600;
              local_3b0.MaterialTexCoords.field0_0x0._s_0.Y = 1.0;
              fVar63 = local_5e8[1];
              fVar62 = local_5e8[0];
              local_3b0.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
              local_3b0.Position.field0_0x0._s_0.Y = local_5e8[1] * local_5c4 + fVar56 + fVar21;
              local_3b0.Position.field0_0x0._s_0.X =
                   local_5e8[0] * local_5c4 + fVar64 + (float)local_5d8;
              local_3b0.TexCoords[0] = fVar55;
              local_3b0.TexCoords[1] = local_610;
              local_3b0.TexCoords[2] = fVar54;
              local_3b0.TexCoords[3] = fVar60;
              local_3b0.Color.field0_0x0 = FVar43;
              FSlateRenderBatch::AddVertex(pFVar38,&local_3b0);
              pFVar41 = &local_380;
              local_380.TexCoords[0] = local_60c;
              local_380.TexCoords[2] = local_628;
              local_380.TexCoords[1] = local_610;
              local_380.MaterialTexCoords.field0_0x0._s_0.X = 1.0;
              local_380.MaterialTexCoords.field0_0x0._s_0.Y = 1.0;
              local_380.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
              local_380.Position.field0_0x0._s_0.X = fVar62 * fVar59 + fVar64 + (float)local_5d8;
              local_380.Position.field0_0x0._s_0.Y = fVar63 * fVar59 + fVar56 + fVar21;
              local_380.TexCoords[3] = fVar60;
              local_380.Color.field0_0x0 = FVar43;
            }
            FSlateRenderBatch::AddVertex(pFVar38,pFVar41);
            if (iVar30 < 0x1400) {
              pFVar38->NumIndices = pFVar38->NumIndices + 6;
            }
            else {
              uVar48 = local_5a0._0_4_;
              FSlateRenderBatch::AddIndex(pFVar38,local_5a0._0_4_);
              FSlateRenderBatch::AddIndex(pFVar38,uVar48 + 1);
              FSlateRenderBatch::AddIndex(pFVar38,uVar48 + 2);
              FSlateRenderBatch::AddIndex(pFVar38,uVar48 + 1);
              FSlateRenderBatch::AddIndex(pFVar38,uVar48 + 3);
              FSlateRenderBatch::AddIndex(pFVar38,uVar48 + 2);
            }
            local_628 = 0.0;
            if (SdfTextDebugVisual == 3) {
              pFVar34 = TSharedPtr<FShapedGlyphFaceData,1>::operator->(&this_01->FontFaceData);
              EVar7 = pFVar34->RasterizationMode;
              if ((EVar7 == Bitmap) ||
                 (((local_4c8 = DebugVisualMsdfTextColor.field0_0x0, EVar7 != Msdf &&
                   (local_4c8 = DebugVisualSdfTextColor.field0_0x0, EVar7 != Sdf)) &&
                  (local_4c8 = DebugVisualApproximateSdfTextColor.field0_0x0,
                  EVar7 != SdfApproximation)))) {
                local_5a0._0_3_ = DebugVisualBitmapTextColor.field0_0x0._0_3_;
                local_5a0._3_1_ = 0x60;
                local_4c8 = local_5a0._0_4_;
              }
              fStack_4d4 = local_560;
              fStack_4cc = local_600;
              local_4d8 = fVar57;
              fStack_4d0 = fVar59;
              if (((local_5b0.Data <= (FScriptContainerElement *)&local_4d8) &&
                  ((FScriptContainerElement *)&local_4d8 <
                   local_5b0.Data + (longlong)local_5a8._4_4_ * 0x14)) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar25)) {
                pcVar15 = (code *)swi(3);
                iVar30 = (*pcVar15)();
                return iVar30;
              }
              iVar29 = (int)local_5a8;
              if ((int)local_5a8 == local_5a8._4_4_) {
                iVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x414,&local_5b0,(int *)((longlong)&local_5a8 + 4));
              }
              local_5a8 = CONCAT44(local_5a8._4_4_,iVar29 + 1);
              *(ulonglong *)(local_5b0.Data + (longlong)iVar29 * 0x14) =
                   CONCAT44(fStack_4d4,local_4d8);
              *(ulonglong *)(local_5b0.Data + (longlong)iVar29 * 0x14 + 8) =
                   CONCAT44(fStack_4cc,fStack_4d0);
              ((FColor_u_0 *)(local_5b0.Data + (longlong)iVar29 * 0x14 + 0x10))->Bits =
                   (uint)local_4c8;
            }
LAB_1424d5dc8:
            fVar54 = local_608;
            uVar48 = local_5ec;
            if (EVar6 != MiddleEllipsis) goto LAB_1424d5e6a;
            if (bVar53) {
LAB_1424d5df1:
              iVar29 = FShapedGlyphSequence::GetMeasuredWidth(param_1->OverflowGlyphSequence);
              fVar54 = fVar54 + (float)iVar29;
              uVar48 = local_5ec;
            }
LAB_1424d5e0b:
            if (((int)uVar48 <= local_5f0) || (iVar29 = 0, !bVar20)) goto LAB_1424d5e6a;
          }
          else {
            if (bVar25 != false) goto LAB_1424d5dc8;
            local_628 = local_628 + (float)(int)this_01->XAdvance;
            uVar48 = local_5ec;
            if (EVar6 == MiddleEllipsis) {
              uVar48 = uVar31;
              if (bVar53) {
                fVar54 = fVar54 - local_628;
                local_61c = local_61c - local_628;
                goto LAB_1424d5df1;
              }
              goto LAB_1424d5e0b;
            }
LAB_1424d5e6a:
            iVar29 = (int)this_01->XAdvance;
          }
          sVar9 = this_01->YAdvance;
          fVar60 = fVar54 + (float)iVar29;
        }
        else {
          fVar64 = 0.0;
          fVar63 = 0.0;
          local_635 = 0xff;
          fVar62 = 0.0;
          if (EVar7 == Bitmap) {
            FSlateFontCache::GetShapedGlyphFontAtlasData
                      (param_1->FontCache,&local_510,this_01,param_1->OutlineSettings);
            if ((local_510.Valid != false) &&
               ((local_54c < 1 || (local_510.SupportsOutline != false)))) {
              bVar18 = true;
              local_635 = local_510.TextureIndex;
              fVar57 = (float)(int)local_510.HorizontalOffset;
              local_5c8 = (float)(int)local_510.VerticalOffset;
              local_620 = (float)local_510.VSize;
              fVar59 = (float)local_510.USize;
              fVar56 = (float)local_510.StartV;
              fVar55 = (float)local_510.StartU;
              local_5fc = fVar59;
              local_5f4 = local_620;
              goto LAB_1424d4c37;
            }
            bVar18 = false;
            goto LAB_1424d526e;
          }
          FSlateFontCache::GetSdfGlyphFontAtlasData
                    (param_1->FontCache,&local_4c0,this_01,param_1->OutlineSettings);
          if ((local_4c0.Valid == false) || (local_4c0.bSupportsSdf == false)) {
            bVar26 = false;
            bVar18 = false;
          }
          else {
            bVar18 = true;
            if (0 < local_54c) {
              pFVar34 = TSharedPtr<FShapedGlyphFaceData,1>::operator->
                                  ((TSharedPtr<FShapedGlyphFaceData,1> *)this_01);
              fVar57 = pFVar34->FontScale;
              pFVar34 = TSharedPtr<FShapedGlyphFaceData,1>::operator->
                                  ((TSharedPtr<FShapedGlyphFaceData,1> *)this_01);
              uVar31 = FreeTypeUtils::ComputeFontPixelSize(pFVar34->FontSize,fVar57);
              pFVar34 = TSharedPtr<FShapedGlyphFaceData,1>::operator->
                                  ((TSharedPtr<FShapedGlyphFaceData,1> *)this_01);
              auVar61 = roundps(auVar61,ZEXT416((uint)((float)param_1->OutlineSettings->OutlineSize
                                                       * pFVar34->FontScale + __real_3f000000)),1);
              auVar61._0_4_ = auVar61._0_4_ / (float)uVar31;
            }
            fVar57 = local_4c0.Metrics.BearingX;
            local_5c8 = local_4c0.Metrics.BearingY;
            local_5a0 = (FSlateDrawElement *)CONCAT44(local_5a0._4_4_,local_4c0.Metrics.Width);
            local_5f4 = local_4c0.Metrics.Height;
            local_635 = local_4c0.TextureIndex;
            local_5fc = (float)(int)(local_4c0.USize - 1);
            local_620 = (float)(int)(local_4c0.VSize - 1);
            local_530 = (float)local_4c0.StartU + __real_3f000000;
            local_52c = (float)local_4c0.StartV + __real_3f000000;
            fVar64 = local_4c0.EmOuterSpread + local_4c0.EmInnerSpread;
            if (((this_01->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar26)) {
              pcVar15 = (code *)swi(3);
              iVar30 = (*pcVar15)();
              return iVar30;
            }
            bVar26 = true;
            fVar62 = auVar61._0_4_;
            auVar61 = ZEXT416((uint)local_600);
            fVar62 = (local_4c0.EmOuterSpread - fVar62) /
                     (local_4c0.EmOuterSpread + local_4c0.EmInnerSpread);
            fVar63 = (float)(int)((this_01->FontFaceData).Object)->SdfPpem * fVar64;
          }
          if (!bVar26) goto LAB_1424d526e;
          fVar55 = local_530;
          fVar56 = local_52c;
          fVar59 = (float)local_5a0._0_4_;
LAB_1424d4c37:
          bVar26 = false;
          if ((int)uVar48 <= local_5f0) {
            bVar26 = bVar20;
          }
          bVar20 = bVar26;
          local_5c4 = (float)(int)this_01->XOffset + fVar57 + fVar54;
          unaff_XMM7 = ZEXT416((uint)local_5c4);
          fVar57 = local_5d0._0_4_;
          local_560 = (param_1->MaxHeight + param_1->TextBaseline) / local_5d0._0_4_ +
                      (float)(int)this_01->YOffset + (local_62c - local_5c8);
          if (!param_1->bEnableCulling) {
LAB_1424d4cf9:
            if (((char)local_635 < '\0') &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NextAtlasDataTextureIndex >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                    ,0xdaf,L""), bVar26)) {
              pcVar15 = (code *)swi(3);
              iVar30 = (*pcVar15)();
              return iVar30;
            }
            if ((((local_498 == (longlong *)0x0) || ((int)(char)local_635 != local_528)) ||
                (bVar53 != local_622)) ||
               ((EVar7 != Bitmap &&
                (((fVar64 != local_524 || (fVar63 != local_520)) || (fVar62 != local_5b8)))))) {
              uVar48 = (uint)(char)local_635;
              local_528 = uVar48;
              pIVar35 = FSlateFontCache::GetFontTexture(param_1->FontCache,uVar48);
              if ((pIVar35 == (ISlateFontTexture *)0x0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("SlateFontTexture",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                      ,0xdb6,L""), bVar26)) {
                pcVar15 = (code *)swi(3);
                iVar30 = (*pcVar15)();
                return iVar30;
              }
              plVar36 = (longlong *)(**(code **)((longlong)*pIVar35 + 8))(pIVar35);
              local_498 = plVar36;
              if ((plVar36 == (longlong *)0x0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FontAtlasTexture",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                      ,0xdb9,L""), bVar26)) {
                pcVar15 = (code *)swi(3);
                iVar30 = (*pcVar15)();
                return iVar30;
              }
              local_5d0 = (FSlateShaderResource *)
                          (**(code **)(*local_3f8 + 0x20))(local_3f8,uVar48,plVar36,local_4e0);
              if ((local_5d0 == (FSlateShaderResource *)0x0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FontShaderResource",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                      ,0xdbc,L""), bVar26)) {
                pcVar15 = (code *)swi(3);
                iVar30 = (*pcVar15)();
                return iVar30;
              }
              uVar48 = (**(code **)*plVar36)(plVar36);
              local_550 = __real_3f800000 / (float)uVar48;
              uVar48 = (**(code **)(*plVar36 + 8))(plVar36);
              local_544 = __real_3f800000 / (float)uVar48;
              iVar29 = (**(code **)((longlong)*pIVar35 + 0x18))(pIVar35);
              if (iVar29 == 0) {
                EVar49 = GrayscaleFont;
                if (EVar7 != Bitmap) {
                  EVar49 = SdfFont;
                }
              }
              else {
                if (iVar29 == 1) {
                  if (EVar7 != Bitmap) {
                    iVar32 = 0xdca;
                    pcVar40 = "!bIsSdfGlyph";
                    goto LAB_1424d4f0f;
                  }
                }
                else {
                  if (iVar29 == 2) {
                    if ((EVar7 == Bitmap) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("bIsSdfGlyph",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                            ,0xdce,L""), bVar26)) {
                      pcVar15 = (code *)swi(3);
                      iVar30 = (*pcVar15)();
                      return iVar30;
                    }
                    if ((local_54c < 1) || (param_1->OutlineSettings->bMiteredCorners != false)) {
                      EVar49 = MsdfFont;
                    }
                    else {
                      EVar49 = SdfFont;
                    }
                    goto LAB_1424d4f48;
                  }
                  iVar32 = 0xdd2;
                  pcVar40 = "!\"Enclosing block should never be called\"";
LAB_1424d4f0f:
                  bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     (pcVar40,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                      ,iVar32,L"");
                  if (bVar26) {
                    pcVar15 = (code *)swi(3);
                    iVar30 = (*pcVar15)();
                    return iVar30;
                  }
                }
                EVar49 = ColorFont;
              }
LAB_1424d4f48:
              if (SdfTextDebugVisual == 1) {
                if (EVar7 == Bitmap) goto LAB_1424d4f86;
                EVar49 = (iVar29 != 0) + GrayscaleFont;
                local_540 = FVar46;
                if (iVar29 == 1) {
                  local_540 = FColor::White.field0_0x0;
                }
LAB_1424d4f9e:
                local_478._s_0.Y = __real_3f800000;
                if (bVar28 == false) {
                  local_478._s_0.Y = 0.0;
                }
                local_478._s_0.X = __real_3f800000;
                if (iVar29 != 2) {
                  local_478._s_0.X = 0.0;
                }
                local_488._4_4_ = local_544 * __real_3f000000 * fVar63;
                local_488._0_4_ = local_550 * __real_3f000000 * fVar63;
                fStack_480 = fVar62;
                fStack_47c = fVar64;
                local_5b8 = fVar62;
                local_524 = fVar64;
                local_520 = fVar63;
              }
              else {
                if (SdfTextDebugVisual == 2) {
                  pFVar34 = TSharedPtr<FShapedGlyphFaceData,1>::operator->
                                      ((TSharedPtr<FShapedGlyphFaceData,1> *)this_01);
                  EVar8 = pFVar34->RasterizationMode;
                  FVar46 = DebugVisualBitmapTextColor.field0_0x0;
                  if ((((EVar8 != Bitmap) &&
                       (FVar46 = DebugVisualMsdfTextColor.field0_0x0, EVar8 != Msdf)) &&
                      (FVar46 = DebugVisualSdfTextColor.field0_0x0, EVar8 != Sdf)) &&
                     (FVar46 = DebugVisualBitmapTextColor.field0_0x0, EVar8 == SdfApproximation)) {
                    FVar46 = DebugVisualApproximateSdfTextColor.field0_0x0;
                  }
                }
LAB_1424d4f86:
                local_540 = FVar46;
                if (iVar29 == 1) {
                  local_540 = FColor::White.field0_0x0;
                }
                if (EVar7 != Bitmap) goto LAB_1424d4f9e;
                local_478._s_0.Y = __real_3f800000;
                if (bVar28 == false) {
                  local_478._s_0.Y = 0.0;
                }
                local_478._s_0.X = 0.0;
                _local_488 = local_2c0;
              }
              FVar43 = local_540;
              pFVar22 = local_5d0;
              local_5a0 = param_1->DrawElement;
              local_478._8_8_ = 0;
              local_468 = local_2c0;
              if (local_518->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
                pFVar38 = FSlateBatchData::AddRenderBatch
                                    (local_518->BatchData,param_1->LayerId,
                                     (FShaderParams *)local_488,local_5d0,TriangleList,EVar49,
                                     local_5a0->DrawEffects,None,local_5a0->SceneIndex);
              }
              else {
                pFVar38 = FSlateCachedElementList::AddRenderBatch
                                    (local_518->CurrentCachedElementList,param_1->LayerId,
                                     (FShaderParams *)local_488,local_5d0,TriangleList,EVar49,
                                     local_5a0->DrawEffects,None,local_5a0->SceneIndex);
              }
              pFVar39 = ResolveClippingState(local_518,local_5a0);
              pFVar38->ClippingState = pFVar39;
              if (pFVar22 != (FSlateShaderResource *)0x0) {
                EVar27 = (**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
                pFVar38->CachedUsedPostBuffers = EVar27;
                local_518->UsedSlatePostBuffers = local_518->UsedSlatePostBuffers | EVar27;
              }
              pTVar12 = pFVar38->SourceVertices;
              pFVar47 = (FSlateRenderBatch *)(ulonglong)local_5ec;
              iVar29 = iVar30 - local_5ec;
              local_5d0 = (FSlateShaderResource *)CONCAT44(local_5d0._4_4_,iVar29);
              uVar48 = pTVar12->ArrayNum + iVar29 * 4;
              if ((int)uVar48 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar48);
              }
              if (pTVar12->ArrayMax < (int)uVar48) {
                UE::Core::Private::
                ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x2c,4,uVar48,&pTVar12->AllocatorInstance,pTVar12->ArrayNum,
                           &pTVar12->ArrayMax);
                iVar29 = (int)local_5d0._0_4_;
              }
              local_622 = bVar53;
              if (iVar30 < 0x1400) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) <
                     `private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<1>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                     ::__l121::_thread_safe_static_guard_0__) &&
                   (_Init_thread_header(&`private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<1>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                                         ::__l121::_thread_safe_static_guard_0__),
                   `private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<1>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                   ::__l121::_thread_safe_static_guard_0__ == -1)) {
                  local_4e8[0] = 0x1400;
                  `FSlateElementBatcher::BuildShapedTextSequence<1>'::__l121::<lambda_1>::operator()
                            (local_4e8,
                             &`private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<1>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                              ::__l121::DefaultShapedTextIndiciesArray);
                  atexit(`FSlateElementBatcher::BuildShapedTextSequence<1>'::__l121::
                         _dynamic_atexit_destructor_for__DefaultShapedTextIndiciesArray__);
                  _Init_thread_footer(&`private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<1>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                                       ::__l121::_thread_safe_static_guard_0__);
                }
                pFVar38->NumIndices = 0;
                pFVar38->SourceIndices =
                     &`private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<1>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                      ::__l121::DefaultShapedTextIndiciesArray;
                pFVar38->IndexOffset = 0;
              }
              else {
                FSlateRenderBatch::ReserveIndices(pFVar38,iVar29 * 6);
              }
            }
            local_614 = fVar56 * local_544;
            local_60c = local_5fc * local_550;
            fVar55 = fVar55 * local_550;
            local_610 = local_620 * local_544;
            fVar59 = fVar59 * fVar57;
            auVar61 = ZEXT416((uint)(local_5f4 * fVar57));
            goto LAB_1424d526e;
          }
          if (param_1->LocalClipBoundingBoxLeft <= fVar59 + local_5c4) {
            if (local_5c4 < param_1->LocalClipBoundingBoxRight ||
                local_5c4 == param_1->LocalClipBoundingBoxRight) goto LAB_1424d4cf9;
            break;
          }
          sVar9 = this_01->YAdvance;
          fVar60 = fVar54 + (float)(int)this_01->XAdvance;
        }
        local_62c = local_62c + (float)(int)sVar9;
        pFVar51 = local_538;
        iVar29 = local_5c0;
        iVar32 = local_5f0;
        local_608 = fVar60;
      }
LAB_1424d5ea9:
      local_5ec = uVar48 + 1;
      pFVar47 = (FSlateRenderBatch *)(ulonglong)local_5ec;
      fVar54 = fVar60;
    } while ((int)local_5ec < iVar30);
    auVar61 = ZEXT416((uint)local_5bc);
    if (!bVar17) goto LAB_1424d5ef7;
LAB_1424d5f0d:
    if (EVar6 == MiddleEllipsis) {
      bVar17 = bVar16;
    }
LAB_1424d5f23:
    this_00 = local_518;
    if (!bVar17) goto LAB_1424d5fce;
  }
  this_00 = local_518;
  local_188.FontMaterial = param_1->FontMaterial;
  local_188.OutlineSettings = param_1->OutlineSettings;
  local_188.ShapedGlyphSequence = param_1->OverflowGlyphSequence;
  local_188.RenderTransform = param_1->RenderTransform;
  local_188.TextBaseline = param_1->TextBaseline;
  local_188.MaxHeight = param_1->MaxHeight;
  local_188.DrawElement = param_1->DrawElement;
  local_188.FontCache = param_1->FontCache;
  local_188.MaxGlyphCountToRender._0_1_ = (undefined1)param_1->MaxGlyphCountToRender;
  local_188.MaxGlyphCountToRender._1_1_ =
       *(undefined1 *)((longlong)&param_1->MaxGlyphCountToRender + 1);
  local_188.MaxGlyphCountToRender._2_1_ =
       *(undefined1 *)((longlong)&param_1->MaxGlyphCountToRender + 2);
  local_188.MaxGlyphCountToRender._3_1_ =
       *(undefined1 *)((longlong)&param_1->MaxGlyphCountToRender + 3);
  local_188.LayerId._0_1_ = (undefined1)param_1->LayerId;
  local_188.LayerId._1_1_ = *(undefined1 *)((longlong)&param_1->LayerId + 1);
  local_188.LayerId._2_1_ = *(undefined1 *)((longlong)&param_1->LayerId + 2);
  local_188.LayerId._3_1_ = *(undefined1 *)((longlong)&param_1->LayerId + 3);
  local_188.FontTint.field0_0x0._s_0.B = (param_1->FontTint).field0_0x0._s_0.B;
  local_188.FontTint.field0_0x0._s_0.G = (param_1->FontTint).field0_0x0._s_0.G;
  local_188.FontTint.field0_0x0._s_0.R = (param_1->FontTint).field0_0x0._s_0.R;
  local_188.FontTint.field0_0x0._s_0.A = (param_1->FontTint).field0_0x0._s_0.A;
  local_188._95_1_ = param_1->field_0x5f;
  local_188.OverflowGlyphSequence = (FShapedGlyphSequence *)0x0;
  local_188.LocalClipBoundingBoxLeft = param_1->LocalClipBoundingBoxLeft;
  local_188.LocalClipBoundingBoxRight = param_1->LocalClipBoundingBoxRight;
  local_188.StartLineY = auVar61._0_4_;
  local_188.StartLineX = local_61c;
  local_188._94_1_ = param_1->field_0x5e & 0xfc;
  local_188.OverflowDirection = NoOverflow;
  local_188.OverflowPolicy = Clip;
  BuildShapedTextSequence<1>(local_518,&local_188);
LAB_1424d5fce:
  iVar30 = 0;
  if ((SdfTextDebugVisual == 3) && ((int)local_5a8 != 0)) {
    pFVar11 = param_1->DrawElement;
    local_108._0_8_ = 0;
    local_108._8_8_ = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    if (this_00->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
      pFVar38 = FSlateBatchData::AddRenderBatch
                          (this_00->BatchData,param_1->LayerId,(FShaderParams *)&local_108._s_0,
                           (FSlateShaderResource *)0x0,LineList,Default,pFVar11->DrawEffects,None,
                           pFVar11->SceneIndex);
    }
    else {
      pFVar38 = FSlateCachedElementList::AddRenderBatch
                          (this_00->CurrentCachedElementList,param_1->LayerId,
                           (FShaderParams *)&local_108._s_0,(FSlateShaderResource *)0x0,LineList,
                           Default,pFVar11->DrawEffects,None,pFVar11->SceneIndex);
    }
    pFVar39 = ResolveClippingState(this_00,pFVar11);
    pFVar38->ClippingState = pFVar39;
    pTVar12 = pFVar38->SourceVertices;
    uVar48 = pTVar12->ArrayNum + (int)local_5a8 * 6;
    if ((int)uVar48 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar48);
    }
    if (pTVar12->ArrayMax < (int)uVar48) {
      UE::Core::Private::
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                (0x2c,4,uVar48,&pTVar12->AllocatorInstance,pTVar12->ArrayNum,&pTVar12->ArrayMax);
    }
    pTVar13 = pFVar38->SourceIndices;
    uVar48 = pTVar13->ArrayNum + (int)local_5a8 * 8;
    if ((int)uVar48 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar48);
    }
    if (pTVar13->ArrayMax < (int)uVar48) {
      UE::Core::Private::
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                (4,4,uVar48,&pTVar13->AllocatorInstance,pTVar13->ArrayNum,&pTVar13->ArrayMax);
    }
    fVar60 = __real_3f000000;
    iVar29 = (int)local_5a8;
    fVar57 = local_5d8._4_4_;
    fVar59 = (float)local_5d8;
    fVar55 = local_5e8[1];
    pFVar52 = local_5b0.Data + 0xc;
    fVar54 = local_5e8[0];
    pFVar4 = local_5b0.Data + (longlong)(int)local_5a8 * 0x14;
    uVar23 = local_2c0._0_8_;
    uVar24 = local_2c0._8_8_;
    while( true ) {
      if ((int)local_5a8 != iVar29) {
        local_617[0] = 0;
        `TCheckedPointerIterator<TTuple<FMargin,FColor>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_617);
      }
      pFVar2 = pFVar52 + -0xc;
      if (pFVar2 == pFVar4) break;
      pTVar12 = pFVar38->SourceVertices;
      fVar62 = afStack_5e0[0];
      fVar63 = afStack_5e0[1];
      fVar56 = (*(float *)pFVar52 + *(float *)(pFVar52 + -8)) * fVar60;
      local_5b8 = (float)((uint)*(float *)(pFVar52 + 4) & 0xffffff);
      fVar64 = local_5b8;
      local_2a0 = 0;
      local_290 = local_5b8;
      local_2b0 = uVar23;
      uStack_2a8 = uVar24;
      uStack_28c = 0;
      auVar58 = roundps(unaff_XMM7,
                        ZEXT416((uint)(fVar56 * afStack_5e0[0] + *(float *)pFVar2 * fVar54 + fVar59
                                      + fVar60)),1);
      auVar61 = roundps(auVar61,ZEXT416((uint)(fVar56 * afStack_5e0[1] + *(float *)pFVar2 * fVar55 +
                                               fVar57 + fVar60)),1);
      iVar32 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,&pTVar12->ArrayMax
                         );
      lVar42 = (longlong)iVar32 * 0x2c;
      uStack_298 = auVar58._0_4_;
      uStack_294 = auVar61._0_4_;
      lVar50 = (pFVar38->SourceVertices->AllocatorInstance)._padding_;
      local_270 = 0;
      *(undefined8 *)(lVar42 + lVar50) = uVar23;
      ((undefined8 *)(lVar42 + lVar50))[1] = uVar24;
      uStack_25c = 0;
      puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar50);
      *puVar5 = (undefined4)local_2a0;
      puVar5[1] = local_2a0._4_4_;
      puVar5[2] = uStack_298;
      puVar5[3] = uStack_294;
      *(ulonglong *)(lVar42 + 0x20 + lVar50) = CONCAT44(uStack_28c,local_290);
      *(undefined4 *)(lVar42 + 0x28 + lVar50) = local_288;
      pFVar38->NumVertices = pFVar38->NumVertices + 1;
      pTVar12 = pFVar38->SourceVertices;
      local_260 = *(float *)(pFVar52 + 4);
      local_280 = uVar23;
      uStack_278 = uVar24;
      auVar58 = roundps(auVar58,ZEXT416((uint)(*(float *)pFVar2 * fVar54 +
                                               *(float *)pFVar52 * fVar62 + fVar59 + fVar60)),1);
      auVar61 = roundps(auVar61,ZEXT416((uint)(*(float *)pFVar2 * fVar55 +
                                               *(float *)pFVar52 * fVar63 + fVar57 + fVar60)),1);
      iVar32 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,&pTVar12->ArrayMax
                         );
      lVar42 = (longlong)iVar32 * 0x2c;
      uStack_268 = auVar58._0_4_;
      uStack_264 = auVar61._0_4_;
      lVar50 = (pFVar38->SourceVertices->AllocatorInstance)._padding_;
      local_240 = 0;
      *(undefined8 *)(lVar42 + lVar50) = uVar23;
      ((undefined8 *)(lVar42 + lVar50))[1] = uVar24;
      local_230 = fVar64;
      puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar50);
      *puVar5 = (undefined4)local_270;
      puVar5[1] = local_270._4_4_;
      puVar5[2] = uStack_268;
      puVar5[3] = uStack_264;
      uStack_22c = 0;
      *(ulonglong *)(lVar42 + 0x20 + lVar50) = CONCAT44(uStack_25c,local_260);
      *(undefined4 *)(lVar42 + 0x28 + lVar50) = local_258;
      pFVar38->NumVertices = pFVar38->NumVertices + 1;
      pTVar12 = pFVar38->SourceVertices;
      local_250 = uVar23;
      uStack_248 = uVar24;
      auVar58 = roundps(auVar58,ZEXT416((uint)(*(float *)(pFVar52 + -4) * fVar54 +
                                               *(float *)pFVar52 * fVar62 + fVar59 + fVar60)),1);
      auVar61 = roundps(auVar61,ZEXT416((uint)(*(float *)(pFVar52 + -4) * fVar55 +
                                               *(float *)pFVar52 * fVar63 + fVar57 + fVar60)),1);
      iVar32 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,&pTVar12->ArrayMax
                         );
      lVar42 = (longlong)iVar32 * 0x2c;
      uStack_238 = auVar58._0_4_;
      uStack_234 = auVar61._0_4_;
      local_210 = 0;
      lVar50 = (pFVar38->SourceVertices->AllocatorInstance)._padding_;
      *(undefined8 *)(lVar42 + lVar50) = uVar23;
      ((undefined8 *)(lVar42 + lVar50))[1] = uVar24;
      puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar50);
      *puVar5 = (undefined4)local_240;
      puVar5[1] = local_240._4_4_;
      puVar5[2] = uStack_238;
      puVar5[3] = uStack_234;
      *(ulonglong *)(lVar42 + 0x20 + lVar50) = CONCAT44(uStack_22c,local_230);
      *(undefined4 *)(lVar42 + 0x28 + lVar50) = local_228;
      pFVar38->NumVertices = pFVar38->NumVertices + 1;
      fVar56 = (*(float *)pFVar52 + *(float *)(pFVar52 + -8)) * fVar60;
      local_220 = uVar23;
      uStack_218 = uVar24;
      pTVar12 = pFVar38->SourceVertices;
      local_200 = fVar64;
      uStack_1fc = 0;
      auVar58 = roundps(auVar58,ZEXT416((uint)(fVar56 * fVar62 + *(float *)(pFVar52 + -4) * fVar54 +
                                               fVar59 + fVar60)),1);
      auVar61 = roundps(auVar61,ZEXT416((uint)(fVar56 * fVar63 + *(float *)(pFVar52 + -4) * fVar55 +
                                               fVar57 + fVar60)),1);
      iVar32 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,&pTVar12->ArrayMax
                         );
      lVar42 = (longlong)iVar32 * 0x2c;
      uStack_208 = auVar58._0_4_;
      uStack_204 = auVar61._0_4_;
      lVar50 = (pFVar38->SourceVertices->AllocatorInstance)._padding_;
      local_1e0 = 0;
      *(undefined8 *)(lVar42 + lVar50) = uVar23;
      ((undefined8 *)(lVar42 + lVar50))[1] = uVar24;
      uStack_1cc = 0;
      puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar50);
      *puVar5 = (undefined4)local_210;
      puVar5[1] = local_210._4_4_;
      puVar5[2] = uStack_208;
      puVar5[3] = uStack_204;
      *(ulonglong *)(lVar42 + 0x20 + lVar50) = CONCAT44(uStack_1fc,local_200);
      *(undefined4 *)(lVar42 + 0x28 + lVar50) = local_1f8;
      pFVar38->NumVertices = pFVar38->NumVertices + 1;
      pTVar12 = pFVar38->SourceVertices;
      local_1d0 = *(float *)(pFVar52 + 4);
      local_1f0 = uVar23;
      uStack_1e8 = uVar24;
      auVar58 = roundps(auVar58,ZEXT416((uint)(*(float *)(pFVar52 + -8) * fVar62 +
                                               *(float *)(pFVar52 + -4) * fVar54 + fVar59 + fVar60))
                        ,1);
      auVar61 = roundps(auVar61,ZEXT416((uint)(*(float *)(pFVar52 + -8) * fVar63 +
                                               *(float *)(pFVar52 + -4) * fVar55 + fVar57 + fVar60))
                        ,1);
      iVar32 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,&pTVar12->ArrayMax
                         );
      uStack_1d8 = auVar58._0_4_;
      lVar42 = (longlong)iVar32 * 0x2c;
      uStack_1d4 = auVar61._0_4_;
      lVar50 = (pFVar38->SourceVertices->AllocatorInstance)._padding_;
      *(undefined8 *)(lVar42 + lVar50) = uVar23;
      ((undefined8 *)(lVar42 + lVar50))[1] = uVar24;
      puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar50);
      *puVar5 = (undefined4)local_1e0;
      puVar5[1] = local_1e0._4_4_;
      puVar5[2] = uStack_1d8;
      puVar5[3] = uStack_1d4;
      *(ulonglong *)(lVar42 + 0x20 + lVar50) = CONCAT44(uStack_1cc,local_1d0);
      *(undefined4 *)(lVar42 + 0x28 + lVar50) = local_1c8;
      pFVar38->NumVertices = pFVar38->NumVertices + 1;
      pTVar12 = pFVar38->SourceVertices;
      local_1b0 = 0;
      local_1a0 = fVar64;
      uStack_19c = 0;
      local_1c0 = uVar23;
      uStack_1b8 = uVar24;
      unaff_XMM7 = roundps(auVar58,ZEXT416((uint)(*(float *)pFVar2 * fVar54 +
                                                  *(float *)(pFVar52 + -8) * fVar62 + fVar59 +
                                                 fVar60)),1);
      auVar61 = roundps(auVar61,ZEXT416((uint)(*(float *)pFVar2 * fVar55 +
                                               *(float *)(pFVar52 + -8) * fVar63 + fVar57 + fVar60))
                        ,1);
      iVar32 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,&pTVar12->ArrayMax
                         );
      lVar42 = (longlong)iVar32 * 0x2c;
      uStack_1a8 = unaff_XMM7._0_4_;
      uStack_1a4 = auVar61._0_4_;
      lVar50 = (pFVar38->SourceVertices->AllocatorInstance)._padding_;
      *(undefined8 *)(lVar42 + lVar50) = uVar23;
      ((undefined8 *)(lVar42 + lVar50))[1] = uVar24;
      puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar50);
      *puVar5 = (undefined4)local_1b0;
      puVar5[1] = local_1b0._4_4_;
      puVar5[2] = uStack_1a8;
      puVar5[3] = uStack_1a4;
      *(ulonglong *)(lVar42 + 0x20 + lVar50) = CONCAT44(uStack_19c,local_1a0);
      *(undefined4 *)(lVar42 + 0x28 + lVar50) = local_198;
      pFVar38->NumVertices = pFVar38->NumVertices + 1;
      pFVar52 = pFVar52 + 0x14;
    }
    if (0 < (int)local_5a8) {
      iVar29 = 1;
      do {
        pTVar13 = pFVar38->SourceIndices;
        local_568[0] = iVar29 + -1;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        if (((piVar14 <= local_568) && (local_568 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_568[0];
        pFVar38->NumIndices = pFVar38->NumIndices + 1;
        pTVar13 = pFVar38->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        local_558[0] = iVar29;
        if (((piVar14 <= local_558) && (local_558 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_558[0];
        pFVar38->NumIndices = pFVar38->NumIndices + 1;
        pTVar13 = pFVar38->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        local_598[0] = iVar29;
        if (((piVar14 <= local_598) && (local_598 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_598[0];
        local_590[0] = iVar29 + 1;
        pFVar38->NumIndices = pFVar38->NumIndices + 1;
        pTVar13 = pFVar38->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        if (((piVar14 <= local_590) && (local_590 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_590[0];
        local_588[0] = iVar29 + 2;
        pFVar38->NumIndices = pFVar38->NumIndices + 1;
        pTVar13 = pFVar38->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        if (((piVar14 <= local_588) && (local_588 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        iVar1 = iVar29 + 3;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_588[0];
        pFVar38->NumIndices = pFVar38->NumIndices + 1;
        pTVar13 = pFVar38->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        local_580[0] = iVar1;
        if (((piVar14 <= local_580) && (local_580 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_580[0];
        pFVar38->NumIndices = pFVar38->NumIndices + 1;
        pTVar13 = pFVar38->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        local_578[0] = iVar1;
        if (((piVar14 <= local_578) && (local_578 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_578[0];
        local_570[0] = iVar29 + 4;
        pFVar38->NumIndices = pFVar38->NumIndices + 1;
        pTVar13 = pFVar38->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        if (((piVar14 <= local_570) && (local_570 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        iVar30 = iVar30 + 1;
        iVar29 = iVar29 + 6;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_570[0];
        pFVar38->NumIndices = pFVar38->NumIndices + 1;
      } while (iVar30 < (int)local_5a8);
    }
  }
  if (local_5b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Data);
  }
  return local_604;
}

// BuildShapedTextSequence<0> @ 1424d6d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateElementBatcher::BuildShapedTextSequence<0>
          (FSlateElementBatcher *this,FShapedTextBuildContext *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  FScriptContainerElement *pFVar4;
  undefined4 *puVar5;
  ETextOverflowPolicy EVar6;
  EFontRasterizationMode EVar7;
  EFontRasterizationMode EVar8;
  short sVar9;
  TTransform2<float> *pTVar10;
  FSlateDrawElement *pFVar11;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar12;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar13;
  int *piVar14;
  code *pcVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  ESlatePostRT EVar27;
  bool bVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  undefined8 *puVar33;
  FShapedGlyphFaceData *pFVar34;
  ISlateFontTexture *pIVar35;
  longlong *plVar36;
  FSlateShaderResource *pFVar37;
  TOptional<int> TVar38;
  FSlateRenderBatch *pFVar39;
  FSlateClippingState *pFVar40;
  char *pcVar41;
  longlong lVar42;
  FColor_u_0 FVar43;
  uchar uVar44;
  ESlateShader EVar45;
  uint uVar46;
  FSlateElementBatcher *pFVar47;
  ulonglong uVar48;
  FColor_u_0 FVar49;
  uint uVar50;
  uint uVar52;
  longlong lVar53;
  FScriptContainerElement *pFVar54;
  FShapedGlyphEntry *this_00;
  FShapedGlyphSequence *pFVar55;
  bool bVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  ETextOverflowDirection local_654;
  float local_648;
  bool local_643;
  float local_640;
  float local_63c;
  FColor_u_0 local_638;
  undefined1 local_632 [2];
  float local_630;
  uint local_62c;
  int local_628;
  float local_624;
  float local_620;
  float local_61c;
  int local_618;
  float local_614;
  float local_610;
  float local_60c;
  float local_608;
  float local_604;
  int local_600;
  float local_5fc;
  float local_5f8;
  float local_5f4;
  float local_5f0;
  ForAnyElementType local_5e8;
  undefined8 local_5e0;
  float local_5d8 [2];
  float afStack_5d0 [2];
  undefined8 local_5c8;
  FSlateShaderResource *local_5c0;
  int local_5b8 [2];
  int local_5b0 [2];
  int local_5a8 [2];
  int local_5a0 [2];
  int local_598 [2];
  int local_590 [2];
  int local_588 [2];
  float local_580;
  int local_578 [2];
  float local_570;
  int local_56c;
  float local_564;
  FColor_u_0 local_560;
  FShapedGlyphSequence *local_558;
  uint local_550;
  float local_54c;
  float local_548;
  FSlateElementBatcher *local_540;
  FShapedGlyphFontAtlasData local_538;
  FMiddleEllipsisOverflowData local_528;
  undefined4 local_510 [2];
  FSlateRenderBatch *local_508;
  FShapedTextBuildContext *local_500;
  UObject *local_4f8;
  undefined1 local_4e8 [16];
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  FColor_u_0 local_4c8;
  undefined1 local_4b8 [16];
  FSdfGlyphFontAtlasData local_4a8;
  longlong *local_480;
  undefined1 local_478 [8];
  float fStack_470;
  float fStack_46c;
  TVector4<float>_u_0 local_468;
  TVector4<float>_u_0 local_458;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  undefined8 local_438;
  float fStack_430;
  float fStack_42c;
  FColor_u_0 local_428;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined4 local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  float fStack_400;
  float fStack_3fc;
  FColor_u_0 local_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  FColor_u_0 local_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3c0;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  undefined8 local_3a8;
  float fStack_3a0;
  float fStack_39c;
  FColor_u_0 local_398;
  undefined4 uStack_394;
  undefined4 local_390;
  TVector4<float>_u_0 local_388;
  FShapedGlyphEntry *local_378;
  FSlateVertex local_370;
  FSlateVertex local_340;
  FSlateVertex local_310;
  FSlateVertex local_2e0;
  longlong *local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  float fStack_290;
  float fStack_28c;
  float local_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  float fStack_260;
  float fStack_25c;
  float local_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  float fStack_230;
  float fStack_22c;
  float local_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  FShapedTextBuildContext local_188;
  undefined1 local_128 [8];
  TReferenceControllerBase<1> *local_120;
  undefined1 local_118 [16];
  TVector4<float>_u_0 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  FSlateRenderBatch *pFVar51;
  
  pFVar55 = param_1->ShapedGlyphSequence;
  local_558 = pFVar55;
  local_540 = this;
  local_500 = param_1;
  puVar33 = (undefined8 *)
            (**(code **)(this->RenderingPolicy->_padding_ + 8))(this->RenderingPolicy,local_128);
  local_2b0 = (longlong *)*puVar33;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
  FVar43 = FColor::White.field0_0x0;
  pTVar10 = param_1->RenderTransform;
  pFVar39 = (FSlateRenderBatch *)0x0;
  fVar68 = param_1->StartLineX;
  local_648 = param_1->StartLineY;
  FVar49 = (param_1->FontTint).field0_0x0;
  local_570 = 0.0;
  local_5d8 = (pTVar10->M).M[0];
  afStack_5d0 = (pTVar10->M).M[1];
  local_508 = (FSlateRenderBatch *)0x0;
  local_564 = 0.0;
  local_5c8 = (pTVar10->Trans).field0_0x0;
  local_4f8 = param_1->FontMaterial;
  local_654 = param_1->OverflowDirection;
  EVar6 = param_1->OverflowPolicy;
  local_63c = 0.0;
  local_5fc = 0.0;
  local_550 = 0xffffffff;
  local_480 = (longlong *)0x0;
  local_560 = FColor::White.field0_0x0;
  bVar18 = false;
  bVar19 = false;
  local_630 = fVar68;
  fVar57 = FShapedGlyphSequence::GetFontSkew(pFVar55);
  local_628 = 0;
  local_54c = 0.0;
  local_548 = 0.0;
  bVar16 = (float)((uint)fVar57 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77;
  local_5f0 = 0.0;
  local_614 = 0.0;
  local_643 = false;
  bVar28 = pFVar55->bMaterialIsStencil;
  iVar30 = (pFVar55->GlyphsToRender).ArrayNum;
  local_56c = param_1->OutlineSettings->OutlineSize;
  iVar29 = FShapedGlyphSequence::GetMeasuredWidth(pFVar55);
  if (((float)iVar29 <= param_1->LocalClipBoundingBoxRight - param_1->LocalClipBoundingBoxLeft) ||
     (local_654 == NoOverflow)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  local_600 = -1;
  local_618 = -1;
  bVar20 = true;
  local_5e8.Data = (FScriptContainerElement *)0x0;
  local_5e0 = 0;
  if ((SdfTextDebugVisual == 1) || (SdfTextDebugVisual == 2)) {
    local_4f8 = (UObject *)0x0;
    FVar49 = FColor::White.field0_0x0;
  }
  fVar57 = 0.0;
  if ((EVar6 == MiddleEllipsis) && (bVar17)) {
    local_528.SkipIndexStart = -1;
    local_528.SkipIndexEnd = -1;
    local_528.EllipsisLineX = 0.0;
    local_528.EllipsisLineY = 0.0;
    local_528.LineX = fVar68;
    local_528.LineY = local_648;
    CalculateMiddleEllipsisSkipIndexAndOffset(this,param_1,local_654,&local_528);
    local_648 = local_528.LineY;
    local_63c = local_528.EllipsisLineX;
    local_630 = local_528.LineX;
    local_5fc = local_528.EllipsisLineY;
    local_600 = local_528.SkipIndexStart;
    local_618 = local_528.SkipIndexEnd;
    fVar68 = local_528.LineX;
    fVar57 = local_528.EllipsisLineY;
  }
  local_62c = 0;
  local_388 = ___xmm_3f800000000000000000000000000000;
  pFVar51 = pFVar39;
  fVar69 = fVar68;
  iVar29 = local_600;
  fVar58 = 0.0;
  iVar32 = local_618;
  if (iVar30 < 1) {
    bVar18 = false;
    fVar69 = 0.0;
LAB_1424d87b1:
    if (!param_1->bForceEllipsis) goto LAB_1424d87c7;
    local_63c = fVar68 - fVar69;
  }
  else {
    do {
      uVar52 = (uint)pFVar51;
      fVar68 = fVar69;
      if (((int)uVar52 < iVar29) || (iVar32 < (int)uVar52)) {
        uVar31 = 0;
        if ((int)uVar52 < (pFVar55->GlyphsToRender).ArrayNum) {
          uVar31 = ~uVar52 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        this_00 = (FShapedGlyphEntry *)
                  ((pFVar55->GlyphsToRender).AllocatorInstance.Data + (longlong)(int)uVar52 * 0xa8);
        local_378 = this_00;
        local_5f4 = FShapedGlyphEntry::GetBitmapRenderScale(this_00);
        if (((this_00->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar25)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        bVar25 = this_00->bIsVisible;
        auVar64 = ZEXT816(0);
        fVar71 = 0.0;
        local_61c = 0.0;
        fVar70 = 0.0;
        local_580 = 0.0;
        fVar57 = 0.0;
        local_608 = 0.0;
        fVar59 = 0.0;
        EVar7 = ((this_00->FontFaceData).Object)->RasterizationMode;
        bVar56 = EVar7 != Bitmap;
        auVar63._12_4_ = 0;
        auVar63._0_12_ = local_4e8._4_12_;
        local_4e8 = auVar63 << 0x20;
        local_640 = 0.0;
        local_620 = 0.0;
        local_624 = 0.0;
        local_60c = 0.0;
        local_5f8 = 0.0;
        local_638 = (FColor_u_0)0x0;
        local_610 = 0.0;
        local_604 = 0.0;
        local_4b8 = auVar64;
        if (bVar25 == false) {
          fVar70 = (float)(int)this_00->XAdvance;
          bVar24 = false;
          fVar71 = fVar69;
          local_61c = fVar69;
LAB_1424d7a13:
          pFVar55 = local_558;
          uVar31 = (uint)pFVar51;
          iVar29 = uVar31 + 1;
          bVar56 = false;
          local_5c0 = (FSlateShaderResource *)CONCAT44(local_5c0._4_4_,iVar29);
          fVar68 = fVar70;
          if (((EVar6 == MiddleEllipsis) && (bVar17)) &&
             ((local_600 <= iVar29 && (iVar29 <= local_618)))) {
            local_5fc = local_648;
            bVar56 = true;
            local_63c = (float)(int)this_00->XAdvance + fVar69;
LAB_1424d7b7a:
            if (local_654 == LeftToRight) {
              if (EVar6 != MiddleEllipsis) {
                if ((int)uVar31 < iVar30 + -1) {
                  iVar29 = FShapedGlyphSequence::GetMeasuredWidth(param_1->OverflowGlyphSequence);
                }
                else {
                  iVar29 = 0;
                }
                if ((param_1->LocalClipBoundingBoxRight <= fVar68 + fVar71 + (float)iVar29) ||
                   ((-1 < param_1->MaxGlyphCountToRender &&
                    (param_1->MaxGlyphCountToRender <= (int)uVar31)))) {
                  bVar18 = true;
                  local_63c = fVar69 - fVar58;
                  goto LAB_1424d87dd;
                }
                local_628 = local_628 + 1;
              }
            }
            else {
              if (local_654 != RightToLeft) goto LAB_1424d7cc8;
              if (EVar6 != MiddleEllipsis) {
                if ((fVar71 < param_1->LocalClipBoundingBoxLeft) ||
                   ((-1 < param_1->MaxGlyphCountToRender &&
                    ((int)uVar31 < iVar30 - param_1->MaxGlyphCountToRender)))) {
                  bVar19 = true;
                }
                else if ((!bVar19) && (this_00->bIsVisible != false)) {
                  local_628 = local_628 + 1;
                  bVar24 = true;
                  local_654 = NoOverflow;
                  goto LAB_1424d7cd4;
                }
                iVar29 = FShapedGlyphSequence::GetMeasuredWidth(param_1->OverflowGlyphSequence);
                local_5fc = local_648;
                bVar18 = true;
                fVar68 = (float)(int)this_00->XAdvance + fVar69;
                local_63c = fVar68 - (float)iVar29;
                bVar24 = false;
                if ((fVar71 + (float)(int)this_00->XAdvance) - param_1->LocalClipBoundingBoxLeft <
                    (float)iVar29) {
                  bVar24 = bVar19;
                }
                bVar19 = bVar24;
                bVar24 = false;
                if (1 < this_00->NumCharactersInGlyph) {
                  uVar52 = uVar31 + (this_00->NumCharactersInGlyph - 1);
                  pFVar55 = local_558;
                  iVar29 = local_600;
                  local_630 = fVar68;
                  iVar32 = local_618;
                  goto LAB_1424d8764;
                }
              }
            }
          }
          else {
            if (local_654 != NoOverflow) {
              if ((1 < this_00->NumGraphemeClustersInGlyph) || (1 < this_00->NumCharactersInGlyph))
              {
                uVar48 = (ulonglong)iVar29;
                iVar32 = this_00->SourceIndex;
                param_1 = local_500;
                if (iVar29 < iVar30) {
                  lVar53 = uVar48 * 0xa8;
                  do {
                    uVar50 = (uint)pFVar51;
                    uVar46 = (uint)uVar48;
                    uVar52 = 0;
                    if ((int)uVar46 < (pFVar55->GlyphsToRender).ArrayNum) {
                      uVar52 = ~uVar46 >> 0x1f;
                    }
                    if ((uVar52 == 0) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar26)) {
                      pcVar15 = (code *)swi(3);
                      iVar30 = (*pcVar15)();
                      return iVar30;
                    }
                    this_00 = local_378;
                    pFVar39 = local_508;
                    FVar43 = local_560;
                    uVar31 = local_62c;
                    if (*(int *)((pFVar55->GlyphsToRender).AllocatorInstance.Data + lVar53 + 0x14)
                        != iVar32) break;
                    uVar50 = uVar50 + 1;
                    pFVar51 = (FSlateRenderBatch *)(ulonglong)uVar50;
                    uVar48 = (ulonglong)(uVar46 + 1);
                    lVar53 = lVar53 + 0xa8;
                  } while ((int)(uVar46 + 1) < iVar30);
                  param_1 = local_500;
                  if ((int)local_62c < (int)uVar50) {
                    TVar38 = FShapedGlyphSequence::GetMeasuredWidth
                                       (local_558,(int)local_118,local_62c,SUB41(uVar50,0));
                    if (*(char *)((longlong)TVar38 + 4) == '\0') {
                      iVar29 = (int)fVar70;
                    }
                    else {
                      iVar29 = *(int *)TVar38;
                    }
                    fVar68 = (float)iVar29;
                    param_1 = local_500;
                  }
                }
              }
              goto LAB_1424d7b7a;
            }
LAB_1424d7cc8:
            local_628 = local_628 + 1;
          }
LAB_1424d7cd4:
          if ((bVar24) && (pFVar39 != (FSlateRenderBatch *)0x0)) {
            fVar70 = fVar70 + fVar71;
            uVar52 = pFVar39->NumVertices;
            local_60c = fVar57 + local_580;
            fVar68 = 0.0;
            local_624 = 0.0;
            local_638 = (FColor_u_0)0x0;
            fVar57 = 0.0;
            if (local_4f8 != (UObject *)0x0) {
              local_624 = __real_3f800000 / param_1->MaxHeight;
              fVar57 = local_624 * local_60c;
              local_638 = (FColor_u_0)
                          ((float)(int)local_5c0._0_4_ * (__real_3f800000 / (float)iVar30));
              local_624 = local_624 * local_580;
              fVar68 = (float)(int)local_62c * (__real_3f800000 / (float)iVar30);
            }
            fVar69 = local_624;
            local_620 = fVar70;
            if (bVar16) {
LAB_1424d7df3:
              local_5f8 = fVar71;
              if (EVar7 == Bitmap) goto LAB_1424d815e;
              pTVar12 = pFVar39->SourceVertices;
              fVar69 = local_5d8[0];
              fVar58 = local_5d8[1];
              fVar66 = afStack_5d0[0] * local_580;
              local_3a8 = 0;
              fVar67 = afStack_5d0[1] * local_580;
              uStack_394 = 0;
              fVar65 = local_5d8[0] * fVar71 + fVar66 + (float)local_5c8;
              fVar59 = local_5d8[1] * fVar71 + fVar67 + local_5c8._4_4_;
              local_398 = FVar43;
              iVar29 = UE::Core::Private::
                       ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                                 (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,
                                  &pTVar12->ArrayMax);
              local_438 = 0x3f800000;
              local_3b8 = (float)local_4b8._0_4_;
              fStack_3b4 = local_608;
              fStack_3ac = local_624;
              uStack_424 = 0;
              lVar42 = (longlong)iVar29 * 0x2c;
              lVar53 = (pFVar39->SourceVertices->AllocatorInstance)._padding_;
              pfVar3 = (float *)(lVar42 + lVar53);
              *pfVar3 = (float)local_4b8._0_4_;
              pfVar3[1] = local_608;
              pfVar3[2] = fVar68;
              pfVar3[3] = local_624;
              puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar53);
              *puVar5 = (undefined4)local_3a8;
              puVar5[1] = local_3a8._4_4_;
              puVar5[2] = fVar65;
              puVar5[3] = fVar59;
              fVar66 = fVar69 * local_620 + fVar66 + (float)local_5c8;
              *(ulonglong *)(lVar42 + 0x20 + lVar53) = CONCAT44(uStack_394,local_398.Bits);
              *(undefined4 *)(lVar42 + 0x28 + lVar53) = local_390;
              pTVar12 = pFVar39->SourceVertices;
              pFVar39->NumVertices = pFVar39->NumVertices + 1;
              fVar71 = fVar58 * local_620 + fVar67 + local_5c8._4_4_;
              local_4e8._0_4_ = (float)local_4e8._0_4_ + (float)local_4b8._0_4_;
              local_428 = FVar43;
              fStack_3b0 = fVar68;
              fStack_3a0 = fVar65;
              fStack_39c = fVar59;
              iVar29 = UE::Core::Private::
                       ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                                 (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,
                                  &pTVar12->ArrayMax);
              uVar21 = local_4e8._0_4_;
              local_370.MaterialTexCoords.field0_0x0._s_0.X = 0.0;
              local_448 = (float)local_4e8._0_4_;
              fStack_444 = local_608;
              fStack_440 = (float)local_638;
              fStack_43c = local_624;
              local_370.MaterialTexCoords.field0_0x0._s_0.Y = 1.0;
              lVar42 = (longlong)iVar29 * 0x2c;
              local_370.TexCoords[0] = (float)local_4b8._0_4_;
              lVar53 = (pFVar39->SourceVertices->AllocatorInstance)._padding_;
              local_370.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
              pfVar3 = (float *)(lVar42 + lVar53);
              *pfVar3 = (float)local_4e8._0_4_;
              pfVar3[1] = local_608;
              pfVar3[2] = (float)local_638;
              pfVar3[3] = local_624;
              fVar65 = afStack_5d0[1] * local_60c;
              fVar59 = afStack_5d0[0] * local_60c;
              puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar53);
              *puVar5 = (undefined4)local_438;
              puVar5[1] = local_438._4_4_;
              puVar5[2] = fVar66;
              puVar5[3] = fVar71;
              local_370.Position.field0_0x0._s_0.Y = fVar58 * local_61c + fVar65 + local_5c8._4_4_;
              *(ulonglong *)(lVar42 + 0x20 + lVar53) = CONCAT44(uStack_424,local_428.Bits);
              local_640 = local_640 + local_608;
              *(undefined4 *)(lVar42 + 0x28 + lVar53) = local_420;
              pFVar39->NumVertices = pFVar39->NumVertices + 1;
              local_370.Position.field0_0x0._s_0.X = fVar69 * local_61c + fVar59 + (float)local_5c8;
              fStack_430 = fVar66;
              fStack_42c = fVar71;
              local_370.TexCoords[1] = local_640;
              local_370.TexCoords[2] = fVar68;
              local_370.TexCoords[3] = fVar57;
              local_370.Color.field0_0x0 = FVar43;
              FSlateRenderBatch::AddVertex(pFVar39,&local_370);
              local_340.MaterialTexCoords.field0_0x0._s_0.X = 1.0;
              local_340.MaterialTexCoords.field0_0x0._s_0.Y = 1.0;
              local_340.TexCoords[0] = (float)uVar21;
              local_340.TexCoords[2] = (float)local_638;
              local_340.Position.field0_0x0._s_0.X = fVar69 * fVar70 + fVar59 + (float)local_5c8;
              local_340.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
              local_340.Position.field0_0x0._s_0.Y = fVar58 * fVar70 + fVar65 + local_5c8._4_4_;
              local_340.TexCoords[1] = local_640;
              local_340.TexCoords[3] = fVar57;
              local_340.Color.field0_0x0 = FVar43;
              FSlateRenderBatch::AddVertex(pFVar39,&local_340);
            }
            else {
              local_5f8 = fVar71;
              if (EVar7 != Bitmap) {
                fVar58 = FShapedGlyphSequence::GetFontSkew(local_558);
                local_620 = fVar70 + fVar58 * local_604;
                fVar71 = fVar58 * local_604 + local_61c;
                fVar58 = (local_604 - local_610) * fVar58;
                local_61c = fVar58 + local_61c;
                fVar70 = fVar70 + fVar58;
                goto LAB_1424d7df3;
              }
LAB_1424d815e:
              fVar58 = local_5d8[0];
              fVar59 = local_5d8[1];
              local_310.TexCoords[1] = local_608;
              local_310.TexCoords[0] = auVar64._0_4_;
              local_310.MaterialTexCoords.field0_0x0 = (TVector2<float>_u_0)0x0;
              fVar71 = afStack_5d0[0] * local_580;
              local_310.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
              fVar65 = afStack_5d0[1] * local_580;
              local_310.Position.field0_0x0._s_0.X =
                   local_5d8[0] * local_5f8 + fVar71 + (float)local_5c8;
              local_310.Position.field0_0x0._s_0.Y =
                   local_5d8[1] * local_5f8 + fVar65 + local_5c8._4_4_;
              local_310.TexCoords[2] = fVar68;
              local_310.TexCoords[3] = fVar69;
              local_310.Color.field0_0x0 = FVar43;
              FSlateRenderBatch::AddVertex(pFVar39,&local_310);
              local_2e0.TexCoords[0] = (float)local_4e8._0_4_ + (float)local_4b8._0_4_;
              local_2e0.MaterialTexCoords.field0_0x0 = (TVector2<float>_u_0)0x3f800000;
              local_4e8._0_4_ = local_2e0.TexCoords[0];
              local_2e0.TexCoords[1] = local_608;
              local_2e0.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
              local_2e0.Position.field0_0x0._s_0.Y = fVar59 * local_620 + fVar65 + local_5c8._4_4_;
              local_2e0.Position.field0_0x0._s_0.X = fVar58 * local_620 + fVar71 + (float)local_5c8;
              local_2e0.TexCoords[2] = (float)local_638;
              local_2e0.TexCoords[3] = fVar69;
              local_2e0.Color.field0_0x0 = FVar43;
              FSlateRenderBatch::AddVertex(pFVar39,&local_2e0);
              local_640 = local_640 + local_608;
              pTVar12 = pFVar39->SourceVertices;
              local_408 = 0;
              fVar65 = afStack_5d0[0] * local_60c;
              uStack_404 = 0x3f800000;
              local_5c0 = (FSlateShaderResource *)
                          CONCAT44(local_5c0._4_4_,afStack_5d0[1] * local_60c);
              fVar71 = fVar58 * local_61c + fVar65 + (float)local_5c8;
              uStack_3f4 = 0;
              fVar69 = fVar59 * local_61c + afStack_5d0[1] * local_60c + local_5c8._4_4_;
              local_3f8 = FVar43;
              iVar29 = UE::Core::Private::
                       ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                                 (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,
                                  &pTVar12->ArrayMax);
              local_3d8 = 0x3f800000;
              lVar42 = (longlong)iVar29 * 0x2c;
              local_418 = local_4b8._0_4_;
              lVar53 = (pFVar39->SourceVertices->AllocatorInstance)._padding_;
              fVar58 = fVar58 * fVar70 + fVar65 + (float)local_5c8;
              uStack_3d4 = 0x3f800000;
              puVar5 = (undefined4 *)(lVar42 + lVar53);
              *puVar5 = local_4b8._0_4_;
              puVar5[1] = local_640;
              puVar5[2] = fVar68;
              puVar5[3] = fVar57;
              uStack_3c4 = 0;
              fVar59 = fVar59 * fVar70 + local_5c0._0_4_ + local_5c8._4_4_;
              puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar53);
              *puVar5 = local_408;
              puVar5[1] = uStack_404;
              puVar5[2] = fVar71;
              puVar5[3] = fVar69;
              *(ulonglong *)(lVar42 + 0x20 + lVar53) = CONCAT44(uStack_3f4,local_3f8.Bits);
              *(undefined4 *)(lVar42 + 0x28 + lVar53) = local_3f0;
              pTVar12 = pFVar39->SourceVertices;
              pFVar39->NumVertices = pFVar39->NumVertices + 1;
              fStack_414 = local_640;
              fStack_410 = fVar68;
              fStack_40c = fVar57;
              fStack_400 = fVar71;
              fStack_3fc = fVar69;
              local_3c8 = FVar43;
              iVar29 = UE::Core::Private::
                       ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                                 (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,
                                  &pTVar12->ArrayMax);
              local_3e8 = local_4e8._0_4_;
              lVar42 = (longlong)iVar29 * 0x2c;
              lVar53 = (pFVar39->SourceVertices->AllocatorInstance)._padding_;
              puVar5 = (undefined4 *)(lVar42 + lVar53);
              *puVar5 = local_4e8._0_4_;
              puVar5[1] = local_640;
              puVar5[2] = local_638;
              puVar5[3] = fVar57;
              puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar53);
              *puVar5 = local_3d8;
              puVar5[1] = uStack_3d4;
              puVar5[2] = fVar58;
              puVar5[3] = fVar59;
              *(ulonglong *)(lVar42 + 0x20 + lVar53) = CONCAT44(uStack_3c4,local_3c8.Bits);
              *(undefined4 *)(lVar42 + 0x28 + lVar53) = local_3c0;
              pFVar39->NumVertices = pFVar39->NumVertices + 1;
              fStack_3e4 = local_640;
              fStack_3e0 = (float)local_638;
              fStack_3dc = fVar57;
              fStack_3d0 = fVar58;
              fStack_3cc = fVar59;
            }
            if (iVar30 < 0x1400) {
              pFVar39->NumIndices = pFVar39->NumIndices + 6;
            }
            else {
              FSlateRenderBatch::AddIndex(pFVar39,uVar52);
              FSlateRenderBatch::AddIndex(pFVar39,uVar52 + 1);
              FSlateRenderBatch::AddIndex(pFVar39,uVar52 + 2);
              FSlateRenderBatch::AddIndex(pFVar39,uVar52 + 1);
              FSlateRenderBatch::AddIndex(pFVar39,uVar52 + 3);
              FSlateRenderBatch::AddIndex(pFVar39,uVar52 + 2);
            }
            fVar58 = 0.0;
            local_614 = 0.0;
            if (SdfTextDebugVisual == 3) {
              if (((this_00->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar25)) {
                pcVar15 = (code *)swi(3);
                iVar30 = (*pcVar15)();
                return iVar30;
              }
              EVar7 = ((this_00->FontFaceData).Object)->RasterizationMode;
              if ((EVar7 == Bitmap) ||
                 (((local_638 = DebugVisualMsdfTextColor.field0_0x0, EVar7 != Msdf &&
                   (local_638 = DebugVisualSdfTextColor.field0_0x0, EVar7 != Sdf)) &&
                  (local_638 = DebugVisualApproximateSdfTextColor.field0_0x0,
                  EVar7 != SdfApproximation)))) {
                local_638._0_3_ = DebugVisualBitmapTextColor.field0_0x0._0_3_;
                local_638._s_0.A = 0x60;
              }
              local_4d8 = local_5f8;
              fStack_4cc = local_60c;
              fStack_4d4 = local_580;
              fStack_4d0 = fVar70;
              local_4c8 = local_638;
              if (((local_5e8.Data <= (FScriptContainerElement *)&local_4d8) &&
                  ((FScriptContainerElement *)&local_4d8 <
                   local_5e8.Data + (longlong)local_5e0._4_4_ * 0x14)) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar25)) {
                pcVar15 = (code *)swi(3);
                iVar30 = (*pcVar15)();
                return iVar30;
              }
              iVar29 = (int)local_5e0;
              if ((int)local_5e0 == local_5e0._4_4_) {
                iVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x414,&local_5e8,(int *)((longlong)&local_5e0 + 4));
              }
              local_5e0 = CONCAT44(local_5e0._4_4_,iVar29 + 1);
              *(ulonglong *)(local_5e8.Data + (longlong)iVar29 * 0x14) =
                   CONCAT44(fStack_4d4,local_4d8);
              *(ulonglong *)(local_5e8.Data + (longlong)iVar29 * 0x14 + 8) =
                   CONCAT44(fStack_4cc,fStack_4d0);
              *(FColor_u_0 *)(local_5e8.Data + (longlong)iVar29 * 0x14 + 0x10) = local_4c8;
            }
LAB_1424d867f:
            fVar69 = local_630;
            uVar52 = local_62c;
            if (EVar6 != MiddleEllipsis) goto LAB_1424d8722;
            local_614 = fVar58;
            if (bVar56) {
LAB_1424d86a8:
              iVar29 = FShapedGlyphSequence::GetMeasuredWidth(param_1->OverflowGlyphSequence);
              fVar69 = fVar69 + (float)iVar29;
              uVar52 = local_62c;
            }
LAB_1424d86c3:
            if (((int)uVar52 <= local_618) || (!bVar20)) goto LAB_1424d8722;
            iVar29 = 0;
          }
          else {
            if (bVar25 != false) goto LAB_1424d867f;
            local_614 = fVar58 + (float)(int)this_00->XAdvance;
            uVar52 = local_62c;
            if (EVar6 == MiddleEllipsis) {
              uVar52 = uVar31;
              if (bVar56) {
                fVar69 = fVar69 - local_614;
                local_63c = local_63c - local_614;
                goto LAB_1424d86a8;
              }
              goto LAB_1424d86c3;
            }
LAB_1424d8722:
            iVar29 = (int)this_00->XAdvance;
          }
          sVar9 = this_00->YAdvance;
          fVar68 = fVar69 + (float)iVar29;
        }
        else {
          uVar44 = 0xff;
          fVar67 = 0.0;
          fVar66 = 0.0;
          fVar65 = 0.0;
          if (EVar7 == Bitmap) {
            FSlateFontCache::GetShapedGlyphFontAtlasData
                      (param_1->FontCache,&local_538,this_00,param_1->OutlineSettings);
            if ((local_538.Valid != false) &&
               ((local_56c < 1 || (local_538.SupportsOutline != false)))) {
              bVar24 = true;
              fVar59 = (float)(int)local_538.HorizontalOffset;
              local_604 = (float)(int)local_538.VerticalOffset;
              local_624 = (float)local_538.VSize;
              local_638 = (FColor_u_0)(float)local_538.USize;
              fVar60 = (float)local_538.StartU;
              fVar61 = (float)local_538.StartV;
              local_620 = (float)local_638;
              local_610 = local_624;
              uVar44 = local_538.TextureIndex;
              goto LAB_1424d73ae;
            }
            bVar24 = false;
            fVar58 = local_614;
            goto LAB_1424d7a13;
          }
          FSlateFontCache::GetSdfGlyphFontAtlasData
                    (param_1->FontCache,&local_4a8,this_00,param_1->OutlineSettings);
          if ((local_4a8.Valid == false) || (local_4a8.bSupportsSdf == false)) {
            bVar26 = false;
            bVar24 = false;
          }
          else {
            bVar24 = true;
            if (0 < local_56c) {
              pFVar34 = TSharedPtr<FShapedGlyphFaceData,1>::operator->
                                  ((TSharedPtr<FShapedGlyphFaceData,1> *)this_00);
              fVar58 = pFVar34->FontScale;
              pFVar34 = TSharedPtr<FShapedGlyphFaceData,1>::operator->
                                  ((TSharedPtr<FShapedGlyphFaceData,1> *)this_00);
              uVar31 = FreeTypeUtils::ComputeFontPixelSize(pFVar34->FontSize,fVar58);
              pFVar34 = TSharedPtr<FShapedGlyphFaceData,1>::operator->
                                  ((TSharedPtr<FShapedGlyphFaceData,1> *)this_00);
              auVar63 = roundps(auVar64,ZEXT416((uint)((float)param_1->OutlineSettings->OutlineSize
                                                       * pFVar34->FontScale + __real_3f000000)),1);
              auVar64._4_12_ = auVar63._4_12_;
              auVar64._0_4_ = auVar63._0_4_ / (float)uVar31;
            }
            uVar44 = local_4a8.TextureIndex;
            fVar59 = local_4a8.Metrics.BearingX;
            local_638 = (FColor_u_0)local_4a8.Metrics.Width;
            local_610 = local_4a8.Metrics.Height;
            local_620 = (float)(int)(local_4a8.USize - 1);
            local_604 = local_4a8.Metrics.BearingY;
            local_624 = (float)(int)(local_4a8.VSize - 1);
            local_60c = (float)local_4a8.StartU + __real_3f000000;
            local_5f8 = (float)local_4a8.StartV + __real_3f000000;
            fVar67 = local_4a8.EmOuterSpread + local_4a8.EmInnerSpread;
            if (((this_00->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar26)) {
              pcVar15 = (code *)swi(3);
              iVar30 = (*pcVar15)();
              return iVar30;
            }
            bVar26 = true;
            fVar65 = (local_4a8.EmOuterSpread - auVar64._0_4_) /
                     (local_4a8.EmOuterSpread + local_4a8.EmInnerSpread);
            fVar66 = (float)(int)((this_00->FontFaceData).Object)->SdfPpem * fVar67;
            auVar64 = local_4b8;
          }
          fVar60 = local_60c;
          fVar61 = local_5f8;
          fVar58 = local_614;
          if (!bVar26) goto LAB_1424d7a13;
LAB_1424d73ae:
          fVar57 = local_5f4;
          bVar26 = false;
          if ((int)uVar52 <= local_618) {
            bVar26 = bVar20;
          }
          bVar20 = bVar26;
          fVar71 = (float)(int)this_00->XOffset + fVar59 + fVar69;
          local_580 = (float)(int)this_00->YOffset + (local_648 - local_604) +
                      (param_1->MaxHeight + param_1->TextBaseline) / local_5f4;
          local_61c = fVar71;
          if (!param_1->bEnableCulling) {
LAB_1424d7475:
            if (((char)uVar44 < '\0') &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NextAtlasDataTextureIndex >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                    ,0xdaf,L""), bVar26)) {
              pcVar15 = (code *)swi(3);
              iVar30 = (*pcVar15)();
              return iVar30;
            }
            if ((((local_480 == (longlong *)0x0) || ((int)(char)uVar44 != local_550)) ||
                (bVar56 != local_643)) ||
               ((EVar7 != Bitmap &&
                (((fVar67 != local_54c || (fVar66 != local_548)) || (fVar65 != local_5f0)))))) {
              uVar52 = (uint)(char)uVar44;
              local_550 = uVar52;
              pIVar35 = FSlateFontCache::GetFontTexture(param_1->FontCache,uVar52);
              if ((pIVar35 == (ISlateFontTexture *)0x0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("SlateFontTexture",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                      ,0xdb6,L""), bVar26)) {
                pcVar15 = (code *)swi(3);
                iVar30 = (*pcVar15)();
                return iVar30;
              }
              plVar36 = (longlong *)(**(code **)((longlong)*pIVar35 + 8))(pIVar35);
              local_480 = plVar36;
              if ((plVar36 == (longlong *)0x0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FontAtlasTexture",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                      ,0xdb9,L""), bVar26)) {
                pcVar15 = (code *)swi(3);
                iVar30 = (*pcVar15)();
                return iVar30;
              }
              pFVar37 = (FSlateShaderResource *)
                        (**(code **)(*local_2b0 + 0x20))(local_2b0,uVar52,plVar36,local_4f8);
              local_5c0 = pFVar37;
              if ((pFVar37 == (FSlateShaderResource *)0x0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FontShaderResource",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                      ,0xdbc,L""), bVar26)) {
                pcVar15 = (code *)swi(3);
                iVar30 = (*pcVar15)();
                return iVar30;
              }
              uVar52 = (**(code **)*plVar36)(plVar36);
              local_570 = __real_3f800000 / (float)uVar52;
              uVar52 = (**(code **)(*plVar36 + 8))(plVar36);
              local_564 = __real_3f800000 / (float)uVar52;
              iVar29 = (**(code **)((longlong)*pIVar35 + 0x18))(pIVar35);
              if (iVar29 == 0) {
                EVar45 = GrayscaleFont;
                if (EVar7 != Bitmap) {
                  EVar45 = SdfFont;
                }
              }
              else {
                if (iVar29 == 1) {
                  if (EVar7 != Bitmap) {
                    iVar32 = 0xdca;
                    pcVar41 = "!bIsSdfGlyph";
                    goto LAB_1424d768b;
                  }
                }
                else {
                  if (iVar29 == 2) {
                    if ((EVar7 == Bitmap) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("bIsSdfGlyph",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                            ,0xdce,L""), bVar26)) {
                      pcVar15 = (code *)swi(3);
                      iVar30 = (*pcVar15)();
                      return iVar30;
                    }
                    if ((local_56c < 1) || (param_1->OutlineSettings->bMiteredCorners != false)) {
                      EVar45 = MsdfFont;
                    }
                    else {
                      EVar45 = SdfFont;
                    }
                    goto LAB_1424d76c2;
                  }
                  iVar32 = 0xdd2;
                  pcVar41 = "!\"Enclosing block should never be called\"";
LAB_1424d768b:
                  bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     (pcVar41,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                      ,iVar32,L"");
                  if (bVar26) {
                    pcVar15 = (code *)swi(3);
                    iVar30 = (*pcVar15)();
                    return iVar30;
                  }
                }
                EVar45 = ColorFont;
              }
LAB_1424d76c2:
              if (SdfTextDebugVisual == 1) {
                if (EVar7 == Bitmap) goto LAB_1424d7700;
                EVar45 = (iVar29 != 0) + GrayscaleFont;
                local_560 = FVar49;
                if (iVar29 == 1) {
                  local_560 = FColor::White.field0_0x0;
                }
LAB_1424d7718:
                local_468._s_0.Y = __real_3f800000;
                if (bVar28 == false) {
                  local_468._s_0.Y = 0.0;
                }
                local_468._s_0.X = __real_3f800000;
                if (iVar29 != 2) {
                  local_468._s_0.X = 0.0;
                }
                local_478._4_4_ = local_564 * __real_3f000000 * fVar66;
                local_478._0_4_ = local_570 * __real_3f000000 * fVar66;
                fStack_470 = fVar65;
                fStack_46c = fVar67;
                local_5f0 = fVar65;
                local_54c = fVar67;
                local_548 = fVar66;
              }
              else {
                if (SdfTextDebugVisual == 2) {
                  pFVar34 = TSharedPtr<FShapedGlyphFaceData,1>::operator->
                                      ((TSharedPtr<FShapedGlyphFaceData,1> *)this_00);
                  EVar8 = pFVar34->RasterizationMode;
                  FVar49 = DebugVisualBitmapTextColor.field0_0x0;
                  if ((((EVar8 != Bitmap) &&
                       (FVar49 = DebugVisualMsdfTextColor.field0_0x0, EVar8 != Msdf)) &&
                      (FVar49 = DebugVisualSdfTextColor.field0_0x0, EVar8 != Sdf)) &&
                     (FVar49 = DebugVisualBitmapTextColor.field0_0x0, EVar8 == SdfApproximation)) {
                    FVar49 = DebugVisualApproximateSdfTextColor.field0_0x0;
                  }
                }
LAB_1424d7700:
                local_560 = FVar49;
                if (iVar29 == 1) {
                  local_560 = FColor::White.field0_0x0;
                }
                if (EVar7 != Bitmap) goto LAB_1424d7718;
                local_468._s_0.Y = __real_3f800000;
                if (bVar28 == false) {
                  local_468._s_0.Y = 0.0;
                }
                local_468._s_0.X = 0.0;
                _local_478 = local_388;
              }
              pFVar47 = local_540;
              FVar43 = local_560;
              pFVar11 = param_1->DrawElement;
              local_468._8_8_ = 0;
              local_458 = local_388;
              if (local_540->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
                pFVar39 = FSlateBatchData::AddRenderBatch
                                    (local_540->BatchData,param_1->LayerId,
                                     (FShaderParams *)local_478,pFVar37,TriangleList,EVar45,
                                     pFVar11->DrawEffects,None,pFVar11->SceneIndex);
              }
              else {
                pFVar39 = FSlateCachedElementList::AddRenderBatch
                                    (local_540->CurrentCachedElementList,param_1->LayerId,
                                     (FShaderParams *)local_478,pFVar37,TriangleList,EVar45,
                                     pFVar11->DrawEffects,None,pFVar11->SceneIndex);
                pFVar47 = local_540;
              }
              local_508 = pFVar39;
              pFVar40 = ResolveClippingState(pFVar47,pFVar11);
              pFVar39->ClippingState = pFVar40;
              if (local_5c0 != (FSlateShaderResource *)0x0) {
                EVar27 = (**(code **)(local_5c0->_padding_ + 0x20))();
                pFVar39->CachedUsedPostBuffers = EVar27;
                pFVar47->UsedSlatePostBuffers = pFVar47->UsedSlatePostBuffers | EVar27;
              }
              pTVar12 = pFVar39->SourceVertices;
              pFVar51 = (FSlateRenderBatch *)(ulonglong)local_62c;
              iVar29 = iVar30 - local_62c;
              uVar52 = pTVar12->ArrayNum + iVar29 * 4;
              if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
              }
              if (pTVar12->ArrayMax < (int)uVar52) {
                UE::Core::Private::
                ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x2c,4,uVar52,&pTVar12->AllocatorInstance,pTVar12->ArrayNum,
                           &pTVar12->ArrayMax);
              }
              local_643 = bVar56;
              if (iVar30 < 0x1400) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) <
                     `private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<0>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                     ::__l121::_thread_safe_static_guard_0__) &&
                   (_Init_thread_header(&`private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<0>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                                         ::__l121::_thread_safe_static_guard_0__),
                   `private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<0>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                   ::__l121::_thread_safe_static_guard_0__ == -1)) {
                  local_510[0] = 0x1400;
                  `FSlateElementBatcher::BuildShapedTextSequence<0>'::__l121::<lambda_1>::operator()
                            (local_510,
                             &`private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<0>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                              ::__l121::DefaultShapedTextIndiciesArray);
                  atexit(`FSlateElementBatcher::BuildShapedTextSequence<0>'::__l121::
                         _dynamic_atexit_destructor_for__DefaultShapedTextIndiciesArray__);
                  _Init_thread_footer(&`private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<0>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                                       ::__l121::_thread_safe_static_guard_0__);
                }
                pFVar39->SourceIndices =
                     &`private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<0>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                      ::__l121::DefaultShapedTextIndiciesArray;
                pFVar39->NumIndices = 0;
                pFVar39->IndexOffset = 0;
              }
              else {
                pTVar13 = pFVar39->SourceIndices;
                uVar52 = pTVar13->ArrayNum + iVar29 * 6;
                if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
                }
                if (pTVar13->ArrayMax < (int)uVar52) {
                  UE::Core::Private::
                  ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                            (4,4,uVar52,&pTVar13->AllocatorInstance,pTVar13->ArrayNum,
                             &pTVar13->ArrayMax);
                }
              }
            }
            local_4e8 = ZEXT416((uint)(local_620 * local_570));
            local_608 = fVar61 * local_564;
            auVar64 = ZEXT416((uint)(fVar60 * local_570));
            local_640 = local_624 * local_564;
            fVar70 = (float)local_638 * fVar57;
            fVar57 = local_610 * fVar57;
            fVar58 = local_614;
            local_4b8 = auVar64;
            goto LAB_1424d7a13;
          }
          if (param_1->LocalClipBoundingBoxLeft <= (float)local_638 + fVar71) {
            if (fVar71 < param_1->LocalClipBoundingBoxRight ||
                fVar71 == param_1->LocalClipBoundingBoxRight) goto LAB_1424d7475;
            break;
          }
          sVar9 = this_00->YAdvance;
          fVar68 = fVar69 + (float)(int)this_00->XAdvance;
        }
        local_648 = local_648 + (float)(int)sVar9;
        pFVar55 = local_558;
        iVar29 = local_600;
        local_630 = fVar68;
        iVar32 = local_618;
      }
LAB_1424d8764:
      local_62c = uVar52 + 1;
      pFVar51 = (FSlateRenderBatch *)(ulonglong)local_62c;
      fVar69 = fVar68;
      fVar58 = local_614;
    } while ((int)local_62c < iVar30);
    fVar57 = local_5fc;
    fVar69 = local_614;
    if (!bVar18) goto LAB_1424d87b1;
LAB_1424d87c7:
    local_648 = fVar57;
    if (EVar6 == MiddleEllipsis) {
      bVar18 = bVar17;
    }
LAB_1424d87dd:
    pFVar47 = local_540;
    if (!bVar18) goto LAB_1424d888d;
  }
  pFVar47 = local_540;
  local_188.FontMaterial = param_1->FontMaterial;
  local_188.OutlineSettings = param_1->OutlineSettings;
  local_188.ShapedGlyphSequence = param_1->OverflowGlyphSequence;
  local_188.RenderTransform = param_1->RenderTransform;
  local_188.TextBaseline = param_1->TextBaseline;
  local_188.MaxHeight = param_1->MaxHeight;
  local_188.DrawElement = param_1->DrawElement;
  local_188.FontCache = param_1->FontCache;
  local_188.MaxGlyphCountToRender._0_1_ = (undefined1)param_1->MaxGlyphCountToRender;
  local_188.MaxGlyphCountToRender._1_1_ =
       *(undefined1 *)((longlong)&param_1->MaxGlyphCountToRender + 1);
  local_188.MaxGlyphCountToRender._2_1_ =
       *(undefined1 *)((longlong)&param_1->MaxGlyphCountToRender + 2);
  local_188.MaxGlyphCountToRender._3_1_ =
       *(undefined1 *)((longlong)&param_1->MaxGlyphCountToRender + 3);
  local_188.LayerId._0_1_ = (undefined1)param_1->LayerId;
  local_188.LayerId._1_1_ = *(undefined1 *)((longlong)&param_1->LayerId + 1);
  local_188.LayerId._2_1_ = *(undefined1 *)((longlong)&param_1->LayerId + 2);
  local_188.LayerId._3_1_ = *(undefined1 *)((longlong)&param_1->LayerId + 3);
  local_188.FontTint.field0_0x0._s_0.B = (param_1->FontTint).field0_0x0._s_0.B;
  local_188.FontTint.field0_0x0._s_0.G = (param_1->FontTint).field0_0x0._s_0.G;
  local_188.FontTint.field0_0x0._s_0.R = (param_1->FontTint).field0_0x0._s_0.R;
  local_188.FontTint.field0_0x0._s_0.A = (param_1->FontTint).field0_0x0._s_0.A;
  local_188._95_1_ = param_1->field_0x5f;
  local_188.OverflowGlyphSequence = (FShapedGlyphSequence *)0x0;
  local_188.LocalClipBoundingBoxLeft = param_1->LocalClipBoundingBoxLeft;
  local_188.LocalClipBoundingBoxRight = param_1->LocalClipBoundingBoxRight;
  local_188.StartLineY = local_648;
  local_188.StartLineX = local_63c;
  local_188._94_1_ = param_1->field_0x5e & 0xfc;
  local_188.OverflowDirection = NoOverflow;
  local_188.OverflowPolicy = Clip;
  BuildShapedTextSequence<0>(local_540,&local_188);
LAB_1424d888d:
  iVar30 = 0;
  if ((SdfTextDebugVisual == 3) && ((int)local_5e0 != 0)) {
    pFVar11 = param_1->DrawElement;
    local_108._0_8_ = 0;
    local_108._8_8_ = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    if (pFVar47->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
      pFVar39 = FSlateBatchData::AddRenderBatch
                          (pFVar47->BatchData,param_1->LayerId,(FShaderParams *)&local_108._s_0,
                           (FSlateShaderResource *)0x0,LineList,Default,pFVar11->DrawEffects,None,
                           pFVar11->SceneIndex);
    }
    else {
      pFVar39 = FSlateCachedElementList::AddRenderBatch
                          (pFVar47->CurrentCachedElementList,param_1->LayerId,
                           (FShaderParams *)&local_108._s_0,(FSlateShaderResource *)0x0,LineList,
                           Default,pFVar11->DrawEffects,None,pFVar11->SceneIndex);
    }
    pFVar40 = ResolveClippingState(pFVar47,pFVar11);
    pFVar39->ClippingState = pFVar40;
    pTVar12 = pFVar39->SourceVertices;
    uVar52 = pTVar12->ArrayNum + (int)local_5e0 * 6;
    if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
    }
    if (pTVar12->ArrayMax < (int)uVar52) {
      UE::Core::Private::
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                (0x2c,4,uVar52,&pTVar12->AllocatorInstance,pTVar12->ArrayNum,&pTVar12->ArrayMax);
    }
    pTVar13 = pFVar39->SourceIndices;
    uVar52 = pTVar13->ArrayNum + (int)local_5e0 * 8;
    if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
    }
    if (pTVar13->ArrayMax < (int)uVar52) {
      UE::Core::Private::
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                (4,4,uVar52,&pTVar13->AllocatorInstance,pTVar13->ArrayNum,&pTVar13->ArrayMax);
    }
    fVar68 = __real_3f000000;
    iVar29 = (int)local_5e0;
    uVar22 = local_388._0_8_;
    uVar23 = local_388._8_8_;
    pFVar54 = local_5e8.Data + 0xc;
    pFVar4 = local_5e8.Data + (longlong)(int)local_5e0 * 0x14;
    while( true ) {
      if ((int)local_5e0 != iVar29) {
        local_632[0] = 0;
        `TCheckedPointerIterator<TTuple<FMargin,FColor>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_632);
      }
      pFVar2 = pFVar54 + -0xc;
      if (pFVar2 == pFVar4) break;
      pTVar12 = pFVar39->SourceVertices;
      fVar59 = afStack_5d0[0];
      fVar69 = local_5d8[0];
      fVar71 = afStack_5d0[1];
      fVar58 = local_5d8[1];
      fVar70 = (float)local_5c8;
      fVar65 = local_5c8._4_4_;
      fVar66 = (*(float *)pFVar54 + *(float *)(pFVar54 + -8)) * fVar68;
      local_5f0 = (float)((uint)*(float *)(pFVar54 + 4) & 0xffffff);
      fVar57 = local_5f0;
      local_298 = 0;
      local_288 = local_5f0;
      uStack_284 = 0;
      local_2a8 = uVar22;
      uStack_2a0 = uVar23;
      fVar60 = afStack_5d0[0] * fVar66 + local_5d8[0] * *(float *)pFVar2 + (float)local_5c8;
      fVar66 = afStack_5d0[1] * fVar66 + local_5d8[1] * *(float *)pFVar2 + local_5c8._4_4_;
      iVar32 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,&pTVar12->ArrayMax
                         );
      lVar42 = (longlong)iVar32 * 0x2c;
      lVar53 = (pFVar39->SourceVertices->AllocatorInstance)._padding_;
      local_268 = 0;
      *(undefined8 *)(lVar42 + lVar53) = uVar22;
      ((undefined8 *)(lVar42 + lVar53))[1] = uVar23;
      uStack_254 = 0;
      puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar53);
      *puVar5 = (undefined4)local_298;
      puVar5[1] = local_298._4_4_;
      puVar5[2] = fVar60;
      puVar5[3] = fVar66;
      *(ulonglong *)(lVar42 + 0x20 + lVar53) = CONCAT44(uStack_284,local_288);
      *(undefined4 *)(lVar42 + 0x28 + lVar53) = local_280;
      pFVar39->NumVertices = pFVar39->NumVertices + 1;
      pTVar12 = pFVar39->SourceVertices;
      local_258 = *(float *)(pFVar54 + 4);
      local_278 = uVar22;
      uStack_270 = uVar23;
      fVar61 = fVar69 * *(float *)pFVar2 + fVar59 * *(float *)pFVar54 + fVar70;
      fVar67 = fVar58 * *(float *)pFVar2 + fVar71 * *(float *)pFVar54 + fVar65;
      fStack_290 = fVar60;
      fStack_28c = fVar66;
      iVar32 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,&pTVar12->ArrayMax
                         );
      local_238 = 0;
      lVar42 = (longlong)iVar32 * 0x2c;
      lVar53 = (pFVar39->SourceVertices->AllocatorInstance)._padding_;
      local_248 = uVar22;
      uStack_240 = uVar23;
      local_228 = fVar57;
      *(undefined8 *)(lVar42 + lVar53) = uVar22;
      ((undefined8 *)(lVar42 + lVar53))[1] = uVar23;
      uStack_224 = 0;
      puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar53);
      *puVar5 = (undefined4)local_268;
      puVar5[1] = local_268._4_4_;
      puVar5[2] = fVar61;
      puVar5[3] = fVar67;
      *(ulonglong *)(lVar42 + 0x20 + lVar53) = CONCAT44(uStack_254,local_258);
      *(undefined4 *)(lVar42 + 0x28 + lVar53) = local_250;
      pFVar39->NumVertices = pFVar39->NumVertices + 1;
      pTVar12 = pFVar39->SourceVertices;
      fVar62 = fVar69 * *(float *)(pFVar54 + -4) + fVar59 * *(float *)pFVar54 + fVar70;
      fVar60 = fVar58 * *(float *)(pFVar54 + -4) + fVar71 * *(float *)pFVar54 + fVar65;
      fStack_260 = fVar61;
      fStack_25c = fVar67;
      iVar32 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,&pTVar12->ArrayMax
                         );
      local_208 = 0;
      local_1f8 = fVar57;
      lVar42 = (longlong)iVar32 * 0x2c;
      local_218 = uVar22;
      uStack_210 = uVar23;
      lVar53 = (pFVar39->SourceVertices->AllocatorInstance)._padding_;
      uStack_1f4 = 0;
      *(undefined8 *)(lVar42 + lVar53) = uVar22;
      ((undefined8 *)(lVar42 + lVar53))[1] = uVar23;
      puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar53);
      *puVar5 = (undefined4)local_238;
      puVar5[1] = local_238._4_4_;
      puVar5[2] = fVar62;
      puVar5[3] = fVar60;
      *(ulonglong *)(lVar42 + 0x20 + lVar53) = CONCAT44(uStack_224,local_228);
      *(undefined4 *)(lVar42 + 0x28 + lVar53) = local_220;
      pFVar39->NumVertices = pFVar39->NumVertices + 1;
      fVar66 = (*(float *)pFVar54 + *(float *)(pFVar54 + -8)) * fVar68;
      fVar61 = fVar59 * fVar66 + fVar69 * *(float *)(pFVar54 + -4) + fVar70;
      fVar66 = fVar71 * fVar66 + fVar58 * *(float *)(pFVar54 + -4) + fVar65;
      pTVar12 = pFVar39->SourceVertices;
      fStack_230 = fVar62;
      fStack_22c = fVar60;
      iVar32 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,&pTVar12->ArrayMax
                         );
      local_1d8 = 0;
      lVar42 = (longlong)iVar32 * 0x2c;
      lVar53 = (pFVar39->SourceVertices->AllocatorInstance)._padding_;
      local_1e8 = uVar22;
      uStack_1e0 = uVar23;
      uStack_1c4 = 0;
      *(undefined8 *)(lVar42 + lVar53) = uVar22;
      ((undefined8 *)(lVar42 + lVar53))[1] = uVar23;
      puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar53);
      *puVar5 = (undefined4)local_208;
      puVar5[1] = local_208._4_4_;
      puVar5[2] = fVar61;
      puVar5[3] = fVar66;
      *(ulonglong *)(lVar42 + 0x20 + lVar53) = CONCAT44(uStack_1f4,local_1f8);
      *(undefined4 *)(lVar42 + 0x28 + lVar53) = local_1f0;
      pFVar39->NumVertices = pFVar39->NumVertices + 1;
      pTVar12 = pFVar39->SourceVertices;
      local_1c8 = *(float *)(pFVar54 + 4);
      fVar60 = fVar59 * *(float *)(pFVar54 + -8) + fVar69 * *(float *)(pFVar54 + -4) + fVar70;
      fVar67 = fVar71 * *(float *)(pFVar54 + -8) + fVar58 * *(float *)(pFVar54 + -4) + fVar65;
      fStack_200 = fVar61;
      fStack_1fc = fVar66;
      iVar32 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,&pTVar12->ArrayMax
                         );
      lVar42 = (longlong)iVar32 * 0x2c;
      lVar53 = (pFVar39->SourceVertices->AllocatorInstance)._padding_;
      local_1a8 = 0;
      *(undefined8 *)(lVar42 + lVar53) = uVar22;
      ((undefined8 *)(lVar42 + lVar53))[1] = uVar23;
      puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar53);
      *puVar5 = (undefined4)local_1d8;
      puVar5[1] = local_1d8._4_4_;
      puVar5[2] = fVar60;
      puVar5[3] = fVar67;
      *(ulonglong *)(lVar42 + 0x20 + lVar53) = CONCAT44(uStack_1c4,local_1c8);
      *(undefined4 *)(lVar42 + 0x28 + lVar53) = local_1c0;
      pFVar39->NumVertices = pFVar39->NumVertices + 1;
      local_1b8 = uVar22;
      uStack_1b0 = uVar23;
      fVar70 = fVar69 * *(float *)pFVar2 + fVar59 * *(float *)(pFVar54 + -8) + fVar70;
      fVar65 = fVar58 * *(float *)pFVar2 + fVar71 * *(float *)(pFVar54 + -8) + fVar65;
      pTVar12 = pFVar39->SourceVertices;
      local_198 = fVar57;
      uStack_194 = 0;
      fStack_1d0 = fVar60;
      fStack_1cc = fVar67;
      iVar32 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,1,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,&pTVar12->ArrayMax
                         );
      lVar42 = (longlong)iVar32 * 0x2c;
      lVar53 = (pFVar39->SourceVertices->AllocatorInstance)._padding_;
      *(undefined8 *)(lVar42 + lVar53) = uVar22;
      ((undefined8 *)(lVar42 + lVar53))[1] = uVar23;
      puVar5 = (undefined4 *)(lVar42 + 0x10 + lVar53);
      *puVar5 = (undefined4)local_1a8;
      puVar5[1] = local_1a8._4_4_;
      puVar5[2] = fVar70;
      puVar5[3] = fVar65;
      *(ulonglong *)(lVar42 + 0x20 + lVar53) = CONCAT44(uStack_194,local_198);
      *(undefined4 *)(lVar42 + 0x28 + lVar53) = local_190;
      pFVar39->NumVertices = pFVar39->NumVertices + 1;
      pFVar54 = pFVar54 + 0x14;
      fStack_1a0 = fVar70;
      fStack_19c = fVar65;
    }
    if (0 < (int)local_5e0) {
      iVar29 = 1;
      do {
        pTVar13 = pFVar39->SourceIndices;
        local_578[0] = iVar29 + -1;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        if (((piVar14 <= local_578) && (local_578 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_578[0];
        pFVar39->NumIndices = pFVar39->NumIndices + 1;
        pTVar13 = pFVar39->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        local_5b8[0] = iVar29;
        if (((piVar14 <= local_5b8) && (local_5b8 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_5b8[0];
        pFVar39->NumIndices = pFVar39->NumIndices + 1;
        pTVar13 = pFVar39->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        local_5b0[0] = iVar29;
        if (((piVar14 <= local_5b0) && (local_5b0 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_5b0[0];
        local_588[0] = iVar29 + 1;
        pFVar39->NumIndices = pFVar39->NumIndices + 1;
        pTVar13 = pFVar39->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        if (((piVar14 <= local_588) && (local_588 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_588[0];
        local_5a8[0] = iVar29 + 2;
        pFVar39->NumIndices = pFVar39->NumIndices + 1;
        pTVar13 = pFVar39->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        if (((piVar14 <= local_5a8) && (local_5a8 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        iVar1 = iVar29 + 3;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_5a8[0];
        pFVar39->NumIndices = pFVar39->NumIndices + 1;
        pTVar13 = pFVar39->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        local_5a0[0] = iVar1;
        if (((piVar14 <= local_5a0) && (local_5a0 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_5a0[0];
        pFVar39->NumIndices = pFVar39->NumIndices + 1;
        pTVar13 = pFVar39->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        local_598[0] = iVar1;
        if (((piVar14 <= local_598) && (local_598 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_598[0];
        local_590[0] = iVar29 + 4;
        pFVar39->NumIndices = pFVar39->NumIndices + 1;
        pTVar13 = pFVar39->SourceIndices;
        piVar14 = (int *)(pTVar13->AllocatorInstance)._padding_;
        if (((piVar14 <= local_590) && (local_590 < piVar14 + pTVar13->ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar15 = (code *)swi(3);
          iVar30 = (*pcVar15)();
          return iVar30;
        }
        iVar32 = pTVar13->ArrayNum;
        if (iVar32 == pTVar13->ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar32 + 1;
        iVar30 = iVar30 + 1;
        iVar29 = iVar29 + 6;
        *(int *)((pTVar13->AllocatorInstance)._padding_ + (longlong)iVar32 * 4) = local_590[0];
        pFVar39->NumIndices = pFVar39->NumIndices + 1;
      } while (iVar30 < (int)local_5e0);
    }
  }
  if (local_5e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Data);
  }
  return local_628;
}

// FSlateElementBatcher @ 1424ead50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateElementBatcher * __thiscall
FSlateElementBatcher::FSlateElementBatcher
          (FSlateElementBatcher *this,TSharedRef<FSlateRenderingPolicy,1> *param_1)

{
  char cVar1;
  
  this->BatchData = (FSlateBatchData *)0x0;
  this->BatchDataHDR = (FSlateBatchData *)0x0;
  this->CurrentCachedElementList = (FSlateCachedElementList *)0x0;
  this->PrecachedClippingStates = (TArray<FSlateClippingState,TSizedDefaultAllocator<32>_> *)0x0;
  this->RenderingPolicy = param_1->Object;
  this->NumPostProcessPasses = 0;
  this->PixelCenterOffset = param_1->Object->PixelCenterOffset;
  cVar1 = (**(code **)(param_1->Object->_padding_ + 0x10))();
  this->bRequiresVsync = false;
  this->bCompositeHDRViewports = false;
  this->UsedSlatePostBuffers = None;
  this->ResourceUpdatingPostBuffers = None;
  this->bSRGBVertexColor = cVar1 == '\0';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSlateElementBatcher @ 1424eca40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateElementBatcher::~FSlateElementBatcher(FSlateElementBatcher *this)

{
  return;
}

// operator() @ 1424ee000

TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> * __thiscall
`FSlateElementBatcher::AddBorderElement<1>'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar6;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance)._padding_ = 0;
  (__return_storage_ptr__->AllocatorInstance).AllocatedSize = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::
  ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
            (4,4,0x30,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  local_c8 = 0;
  if ((puVar2 <= &local_c8) && (&local_c8 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_c4 = 1;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_c8;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_c4) && (&local_c4 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_c0 = 2;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_c4;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_c0) && (&local_c0 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_bc = 2;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_c0;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_bc) && (&local_bc < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_b8 = 1;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_bc;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_b8) && (&local_b8 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_b4 = 3;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_b8;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_b4) && (&local_b4 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_b0 = 4;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_b4;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_b0) && (&local_b0 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_ac = 5;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_b0;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_ac) && (&local_ac < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_a8 = 6;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_ac;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_a8) && (&local_a8 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_a4 = 6;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_a8;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_a4) && (&local_a4 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_a0 = 5;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_a4;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_a0) && (&local_a0 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_9c = 7;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_a0;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_9c) && (&local_9c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_98 = 8;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_9c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_98) && (&local_98 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_94 = 9;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_98;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_94) && (&local_94 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_90 = 10;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_94;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_90) && (&local_90 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_8c = 10;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_90;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_8c) && (&local_8c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_88 = 9;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_8c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_88) && (&local_88 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_84 = 0xb;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_88;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_84) && (&local_84 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_80 = 0xc;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_84;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_80) && (&local_80 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_7c = 0xd;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_80;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_7c) && (&local_7c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_78 = 0xe;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_7c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_78) && (&local_78 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_74 = 0xe;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_78;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_74) && (&local_74 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_70 = 0xd;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_74;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_70) && (&local_70 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_6c = 0xf;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_70;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_6c) && (&local_6c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_68 = 0x10;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_6c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_68) && (&local_68 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_64 = 0x11;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_68;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_64) && (&local_64 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_60 = 0x12;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_64;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_60) && (&local_60 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_5c = 0x12;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_60;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_5c) && (&local_5c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_58 = 0x11;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_5c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_58) && (&local_58 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_54 = 0x13;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_58;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_54) && (&local_54 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_50 = 0x14;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_54;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_50) && (&local_50 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_4c = 0x15;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_50;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_4c) && (&local_4c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_48 = 0x16;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_4c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_48) && (&local_48 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_44 = 0x16;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_48;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_44) && (&local_44 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_40 = 0x15;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_44;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_40) && (&local_40 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_3c = 0x17;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_40;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_3c) && (&local_3c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_38 = 0x18;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_3c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_38) && (&local_38 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_34 = 0x19;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_38;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_34) && (&local_34 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_30 = 0x1a;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_34;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_30) && (&local_30 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_2c = 0x1a;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_30;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_2c) && (&local_2c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_28 = 0x19;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_2c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_28) && (&local_28 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_24 = 0x1b;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_28;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_24) && (&local_24 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_20 = 0x1c;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_24;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_20) && (&local_20 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_1c = 0x1d;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_20;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_1c) && (&local_1c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_18 = 0x1e;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_1c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_18) && (&local_18 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_14 = 0x1e;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_18;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_14) && (&local_14 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_10 = 0x1d;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_14;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_10) && (&local_10 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_c = 0x1f;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_10;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_c) && (&local_c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_c;
  return __return_storage_ptr__;
}

// operator() @ 1424efd00

TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> * __thiscall
`FSlateElementBatcher::AddBorderElement<0>'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar6;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance)._padding_ = 0;
  (__return_storage_ptr__->AllocatorInstance).AllocatedSize = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::
  ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
            (4,4,0x30,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  local_c8 = 0;
  if ((puVar2 <= &local_c8) && (&local_c8 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_c4 = 1;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_c8;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_c4) && (&local_c4 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_c0 = 2;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_c4;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_c0) && (&local_c0 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_bc = 2;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_c0;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_bc) && (&local_bc < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_b8 = 1;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_bc;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_b8) && (&local_b8 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_b4 = 3;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_b8;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_b4) && (&local_b4 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_b0 = 4;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_b4;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_b0) && (&local_b0 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_ac = 5;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_b0;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_ac) && (&local_ac < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_a8 = 6;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_ac;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_a8) && (&local_a8 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_a4 = 6;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_a8;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_a4) && (&local_a4 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_a0 = 5;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_a4;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_a0) && (&local_a0 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_9c = 7;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_a0;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_9c) && (&local_9c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_98 = 8;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_9c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_98) && (&local_98 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_94 = 9;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_98;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_94) && (&local_94 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_90 = 10;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_94;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_90) && (&local_90 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_8c = 10;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_90;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_8c) && (&local_8c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_88 = 9;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_8c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_88) && (&local_88 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_84 = 0xb;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_88;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_84) && (&local_84 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_80 = 0xc;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_84;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_80) && (&local_80 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_7c = 0xd;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_80;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_7c) && (&local_7c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_78 = 0xe;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_7c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_78) && (&local_78 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_74 = 0xe;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_78;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_74) && (&local_74 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_70 = 0xd;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_74;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_70) && (&local_70 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_6c = 0xf;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_70;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_6c) && (&local_6c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_68 = 0x10;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_6c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_68) && (&local_68 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_64 = 0x11;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_68;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_64) && (&local_64 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_60 = 0x12;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_64;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_60) && (&local_60 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_5c = 0x12;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_60;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_5c) && (&local_5c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_58 = 0x11;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_5c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_58) && (&local_58 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_54 = 0x13;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_58;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_54) && (&local_54 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_50 = 0x14;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_54;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_50) && (&local_50 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_4c = 0x15;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_50;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_4c) && (&local_4c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_48 = 0x16;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_4c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_48) && (&local_48 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_44 = 0x16;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_48;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_44) && (&local_44 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_40 = 0x15;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_44;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_40) && (&local_40 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_3c = 0x17;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_40;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_3c) && (&local_3c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_38 = 0x18;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_3c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_38) && (&local_38 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_34 = 0x19;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_38;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_34) && (&local_34 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_30 = 0x1a;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_34;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_30) && (&local_30 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_2c = 0x1a;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_30;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_2c) && (&local_2c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_28 = 0x19;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_2c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_28) && (&local_28 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_24 = 0x1b;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_28;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_24) && (&local_24 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_20 = 0x1c;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_24;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_20) && (&local_20 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_1c = 0x1d;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_20;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_1c) && (&local_1c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_18 = 0x1e;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_1c;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_18) && (&local_18 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_14 = 0x1e;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_18;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_14) && (&local_14 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_10 = 0x1d;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_14;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_10) && (&local_10 < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  local_c = 0x1f;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_10;
  puVar2 = (undefined4 *)(__return_storage_ptr__->AllocatorInstance)._padding_;
  if ((puVar2 <= &local_c) && (&local_c < puVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar5 * 4) =
       local_c;
  return __return_storage_ptr__;
}

// operator() @ 1424f1a00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
`FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()
          (void *this,FSlateRenderBatch *param_1,FSlateBoxElement *param_2)

{
  float fVar1;
  byte bVar2;
  Type TVar3;
  Type TVar4;
  TVector2<float>_u_0 TVar5;
  FSlateShaderResourceProxy *pFVar6;
  TVector2<float>_u_0_s_0 TVar7;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar8;
  longlong lVar9;
  TVector2<float> TVar10;
  TVector2<float> TVar11;
  TVector2<float> TVar12;
  TVector2<float> TVar13;
  TVector2<float> TVar14;
  TVector2<float> TVar15;
  TVector2<float> TVar16;
  TVector2<float> TVar17;
  TVector2<float> TVar18;
  TVector2<float> TVar19;
  TVector2<float> TVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  FColor FVar25;
  ESlateVertexRounding EVar26;
  undefined4 uVar27;
  FColor_u_0 FVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  FSlateVertex *pFVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float local_res8;
  float fStackX_c;
  undefined8 local_res10;
  FLinearColor_u_0 local_res18;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  undefined4 local_180;
  undefined4 local_17c;
  float local_178;
  undefined8 local_170;
  TVector2<float>_u_0_s_0 local_168;
  ulonglong local_160;
  TTransform2<float> local_158;
  FColor_u_0 local_140;
  float local_13c;
  undefined8 local_138;
  float local_130;
  FSlateVertex local_128;
  float local_f8;
  
  _local_198 = param_2->_padding_;
  _fStack_190 = param_2->_padding_;
  bVar2 = *(byte *)((longlong)&param_2->_padding_ + 3);
  local_13c = (float)(bVar2 & 0x10);
  bVar36 = (bVar2 & 0x10) == 0;
  local_res8 = (float)CONCAT31(local_res8._1_3_,bVar36);
  FSlateElementBatcher::PackVertexColor
            (*(FSlateElementBatcher **)this,(FLinearColor *)&local_res18._s_0);
  FVar25 = FColor::Black;
  fVar43 = __real_3f800000;
  TVar5 = (TVector2<float>_u_0)param_2->_padding_;
  uVar34 = 1;
  local_158.M.M[0] = (float  [2])param_2->_padding_;
  local_158.M.M[1] = (float  [2])param_2->_padding_;
  pFVar6 = param_2->ResourceProxy;
  uVar33 = 1;
  local_158.Trans.field0_0x0 = (TVector2<float>_u_0)param_2->_padding_;
  local_f8 = 0.0;
  fVar1 = *(float *)((longlong)&param_2->_padding_ + 4);
  local_178 = 0.0;
  local_160 = 0;
  if (((pFVar6 == (FSlateShaderResourceProxy *)0x0) ||
      (pFVar6->Resource == (FSlateShaderResource *)0x0)) || (pFVar6->Resource->DestroyState != '!'))
  {
    local_168.X = 1.0;
    local_168.Y = 1.0;
    fVar37 = *(float *)(*(longlong *)this + 0x48);
    fVar38 = fVar37;
    fVar45 = __real_3f800000;
    fVar46 = __real_3f800000;
LAB_1424f1c32:
    fVar39 = local_168.Y;
    fVar41 = local_168.X;
  }
  else {
    uVar34 = (pFVar6->ActualSize).field0_0x0._s_0.X;
    uVar35 = uVar33;
    if (uVar34 != 0) {
      uVar35 = uVar34;
    }
    uVar44 = (pFVar6->ActualSize).field0_0x0._s_0.Y;
    uVar34 = uVar33;
    if (uVar44 != 0) {
      uVar34 = uVar44;
    }
    fVar37 = *(float *)(*(longlong *)this + 0x48) / (float)uVar35;
    fVar38 = *(float *)(*(longlong *)this + 0x48) / (float)uVar34;
    uVar33 = uVar35;
    if ((param_2->UVRegion).bIsValid == false) {
      local_168 = (pFVar6->SizeUV).field0_0x0._s_0;
      TVar7 = (pFVar6->StartUV).field0_0x0._s_0;
      local_res10._0_4_ = TVar7.X;
      local_f8 = fVar37 + (float)(undefined4)local_res10;
      local_res10._4_4_ = TVar7.Y;
      local_178 = fVar38 + (float)local_res10._4_4_;
      local_res10._0_4_ = local_168.X;
      local_res10._4_4_ = local_168.Y;
      fVar45 = local_178 + (float)local_res10._4_4_;
      fVar46 = local_f8 + (float)(undefined4)local_res10;
      goto LAB_1424f1c32;
    }
    local_f8 = (param_2->UVRegion).Min.field0_0x0._s_0.X;
    local_178 = (param_2->UVRegion).Min.field0_0x0._s_0.Y;
    local_res10._4_4_ = (param_2->UVRegion).Max.field0_0x0._s_0.Y - local_178;
    local_res10._0_4_ = (param_2->UVRegion).Max.field0_0x0._s_0.X - local_f8;
    local_f8 = local_f8 + fVar37;
    local_178 = local_178 + fVar38;
    local_168 = local_res10;
    fVar46 = local_f8 + (float)(undefined4)local_res10;
    fVar45 = local_178 + (float)local_res10._4_4_;
    fVar39 = (float)local_res10._4_4_;
    fVar41 = (float)(undefined4)local_res10;
  }
  TVar3 = param_2->Tiling;
  local_138 = (TVector2<float>_u_0)CONCAT44(local_138._4_4_,local_178);
  if ((TVar3 == Both) || (TVar3 == Horizontal)) {
    bVar21 = true;
    if (TVar3 != Both) goto LAB_1424f1c70;
LAB_1424f1c7a:
    bVar22 = true;
  }
  else {
    bVar21 = false;
LAB_1424f1c70:
    if (TVar3 == Vertical) goto LAB_1424f1c7a;
    bVar22 = false;
  }
  TVar4 = param_2->Mirroring;
  if ((TVar4 == Both) || (TVar4 == Horizontal)) {
    bVar23 = true;
    if (TVar4 != Both) goto LAB_1424f1c9a;
LAB_1424f1ca3:
    bVar24 = true;
  }
  else {
    bVar23 = false;
LAB_1424f1c9a:
    if (TVar4 == Vertical) goto LAB_1424f1ca3;
    bVar24 = false;
  }
  local_188 = TVar5._s_0.X;
  fVar47 = local_188;
  fVar42 = __real_3f800000;
  if (bVar21) {
    fVar42 = local_188 / (float)uVar33;
  }
  fStack_184 = TVar5._4_4_;
  fVar50 = __real_3f800000;
  if (bVar22) {
    fVar50 = fStack_184 / (float)uVar34;
  }
  uVar35 = param_1->NumVertices;
  local_res10 = (TVector2<float>_u_0)((ulonglong)TVar5 & 0xffffffff);
  _local_198 = (ulonglong)(uint)fStack_184 << 0x20;
  local_140.Bits = 0;
  local_res18._s_0.B = fVar1;
  local_170 = TVar5;
  local_130 = fVar42;
  if (param_2->DrawType == Image) {
LAB_1424f38fa:
    fVar38 = fVar46;
    fVar39 = local_f8;
    fVar37 = local_178;
    if (((bVar23) || (fVar38 = local_f8, fVar39 = fVar46, bVar24)) && (bVar24)) {
      fVar37 = fVar45;
      fVar45 = local_178;
    }
    fStack_184 = fVar37;
    local_188 = fVar38;
    local_180 = fVar42;
    local_17c = fVar50;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)0x0,(TVector2<float>)TVar5,
                                 fVar1,(TVector4<float> *)&local_188,(FColor)local_res18._s_0.R,
                                 FColor::Black,bVar36);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    local_188 = fVar39;
    local_180 = fVar42;
    local_17c = fVar50;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)local_res10,
                                 (TVector2<float>)TVar5,fVar1,(TVector4<float> *)&local_188,
                                 (FColor)local_res18._s_0.R,FVar25,bVar36);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    fStack_184 = fVar45;
    local_188 = fVar38;
    local_180 = fVar42;
    local_17c = fVar50;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_198,
                                 (TVector2<float>)TVar5,fVar1,(TVector4<float> *)&local_188,
                                 (FColor)local_res18._s_0.R,FVar25,bVar36);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    fStack_194 = fVar45;
    local_198 = fVar39;
    fStack_18c = fVar50;
    fStack_190 = fVar42;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)TVar5,(TVector2<float>)TVar5
                                 ,fVar1,(TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,
                                 FVar25,bVar36);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    pTVar8 = param_1->SourceIndices;
    iVar29 = pTVar8->ArrayNum;
    if (iVar29 == pTVar8->ArrayMax) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    pTVar8->ArrayNum = iVar29 + 1;
    *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35;
    pTVar8 = param_1->SourceIndices;
    param_1->NumIndices = param_1->NumIndices + 1;
    iVar29 = pTVar8->ArrayNum;
    if (iVar29 == pTVar8->ArrayMax) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    pTVar8->ArrayNum = iVar29 + 1;
    uVar34 = uVar35 + 2;
    *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 1;
    pTVar8 = param_1->SourceIndices;
    param_1->NumIndices = param_1->NumIndices + 1;
    iVar29 = pTVar8->ArrayNum;
    if (iVar29 == pTVar8->ArrayMax) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    pTVar8->ArrayNum = iVar29 + 1;
    *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar34;
    pTVar8 = param_1->SourceIndices;
    param_1->NumIndices = param_1->NumIndices + 1;
    iVar29 = pTVar8->ArrayNum;
    if (iVar29 == pTVar8->ArrayMax) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    pTVar8->ArrayNum = iVar29 + 1;
    *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar34;
    pTVar8 = param_1->SourceIndices;
    param_1->NumIndices = param_1->NumIndices + 1;
    iVar29 = pTVar8->ArrayNum;
    if (iVar29 == pTVar8->ArrayMax) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    pTVar8->ArrayNum = iVar29 + 1;
    *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 1;
    pTVar8 = param_1->SourceIndices;
    param_1->NumIndices = param_1->NumIndices + 1;
    iVar29 = pTVar8->ArrayNum;
    if (iVar29 == pTVar8->ArrayMax) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    FVar28 = local_140;
    pTVar8->ArrayNum = iVar29 + 1;
    *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 3;
    param_1->NumIndices = param_1->NumIndices + 1;
    if (GSlateFeathering == 0) {
      return;
    }
    if (local_13c == 0.0) {
      return;
    }
    uVar33 = param_1->NumVertices;
    fVar43 = fVar43 / fVar1;
    fStack_194 = fVar37;
    local_198 = fVar38;
    uVar44 = (uint)fVar43 ^ __xmm_80000000800000008000000080000000;
    local_res10._4_4_ = uVar44;
    local_res10._0_4_ = uVar44;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)local_res10,
                                 (TVector2<float>)TVar5,fVar1,(TVector4<float> *)&local_198,
                                 (FColor)local_140._s_0,FVar25,local_res8._0_1_);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    fVar46 = local_130;
    local_198 = fVar39;
    local_res10._0_4_ = fVar43 + fVar47;
    fStack_190 = local_130;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)local_res10,
                                 (TVector2<float>)TVar5,fVar1,(TVector4<float> *)&local_198,
                                 (FColor)FVar28._s_0,FVar25,local_res8._0_1_);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    fVar37 = fVar43 + (float)local_170._4_4_;
    local_res10._4_4_ = fVar37;
    local_res10._0_4_ = uVar44;
    fStack_194 = fVar45;
    local_198 = fVar38;
    fStack_190 = fVar46;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)local_res10,
                                 (TVector2<float>)TVar5,fVar1,(TVector4<float> *)&local_198,
                                 (FColor)FVar28._s_0,FVar25,local_res8._0_1_);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    local_res10._0_4_ = fVar43 + fVar47;
    local_198 = fVar39;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)local_res10,
                                 (TVector2<float>)TVar5,fVar1,(TVector4<float> *)&local_198,
                                 (FColor)FVar28._s_0,FVar25,local_res8._0_1_);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar33);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar33 + 1);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar35 + 1);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar33);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar35 + 1);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar35);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar33);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar34);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar33 + 2);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar33);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar35);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar34);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar35 + 1);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar33 + 1);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar33 + 3);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar35 + 1);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar33 + 3);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar35 + 3);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar34);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar35 + 3);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar33 + 3);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar33 + 3);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar33 + 2);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar34);
    return;
  }
  fVar49 = (param_2->Margin).Left;
  fVar48 = local_f8;
  if (fVar49 == 0.0) {
    if (((param_2->Margin).Top != 0.0) || ((param_2->Margin).Right != 0.0)) goto LAB_1424f1d91;
    if ((param_2->Margin).Bottom == 0.0) goto LAB_1424f38fa;
  }
  if (0.0 < fVar49) {
    fVar48 = fVar49 * fVar41 + local_f8 + fVar37;
  }
LAB_1424f1d91:
  fVar43 = (param_2->Margin).Top;
  fVar47 = local_178;
  if (0.0 < fVar43) {
    fVar47 = fVar43 * fVar39 + local_178 + fVar38;
  }
  fVar39 = (param_2->Margin).Right;
  fVar40 = fVar46;
  if (0.0 < fVar39) {
    fVar40 = (fVar46 - fVar39 * fVar41) + fVar37;
  }
  fVar37 = (param_2->Margin).Bottom;
  local_res10 = (TVector2<float>_u_0)(ulonglong)(uint)fVar40;
  local_168.X = fVar45;
  if (0.0 < fVar37) {
    local_168.X = (fVar45 - fVar37 * local_168.Y) + fVar38;
  }
  fVar38 = local_178;
  fVar39 = local_f8;
  if ((bVar23) || (bVar24)) {
    local_170._4_4_ = fStack_184;
    local_170._0_4_ = fVar46;
    if (bVar23) {
      fVar48 = fVar46 - (fVar48 - local_f8);
      local_res10 = (TVector2<float>_u_0)(ulonglong)(uint)(fVar46 - (fVar40 - local_f8));
      fVar39 = fVar46;
      fVar46 = local_f8;
    }
    if (bVar24) {
      fVar47 = fVar45 - (fVar47 - local_178);
      local_168.X = fVar45 - (local_168.X - local_178);
      fVar38 = fVar45;
      fVar45 = local_178;
    }
  }
  fVar41 = local_188 - (param_2->Margin).Right * (float)uVar33;
  fVar49 = fVar49 * (float)uVar33;
  fVar43 = fVar43 * (float)uVar34;
  fVar37 = fStack_184 - fVar37 * (float)uVar34;
  if (fVar41 < fVar49) {
    fVar49 = local_188 * __real_3f000000;
    fVar41 = fVar49;
  }
  local_170 = (TVector2<float>_u_0)CONCAT44(local_170._4_4_,fVar41);
  if (fVar37 < fVar43) {
    fVar43 = fStack_184 * __real_3f000000;
    fVar37 = fVar43;
  }
  local_160 = (ulonglong)(uint)fVar37;
  _local_188 = 0;
  fStack_194 = fVar38;
  local_198 = fVar39;
  fStack_18c = fVar50;
  fStack_190 = fVar42;
  local_178 = fVar43;
  local_138 = TVar5;
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)0x0,(TVector2<float>)TVar5,
                               fVar1,(TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,
                               FColor::Black,bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  _local_188 = (ulonglong)(uint)fVar43 << 0x20;
  fStack_194 = fVar47;
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,local_res18._s_0.B,
                               (TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,FVar25,
                               bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  fStack_184 = 0.0;
  local_188 = fVar49;
  fStack_194 = fVar38;
  local_198 = fVar48;
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,local_res18._s_0.B,
                               (TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,FVar25,
                               bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  fStack_184 = fVar43;
  fStack_194 = fVar47;
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,local_res18._s_0.B,
                               (TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,FVar25,
                               bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  _local_188 = (ulonglong)local_170 & 0xffffffff;
  _local_198 = CONCAT44(fVar38,SUB84(local_res10,0));
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,local_res18._s_0.B,
                               (TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,FVar25,
                               bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  local_188 = SUB84(local_170,0);
  _local_198 = CONCAT44(fVar47,SUB84(local_res10,0));
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,local_res18._s_0.B,
                               (TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,FVar25,
                               bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  _local_188 = (ulonglong)local_138 & 0xffffffff;
  fStack_194 = fVar38;
  local_198 = fVar46;
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,local_res18._s_0.B,
                               (TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,FVar25,
                               bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  local_188 = (float)local_138;
  fStack_194 = fVar47;
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,local_res18._s_0.B,
                               (TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,FVar25,
                               bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  fVar1 = local_168.X;
  _local_188 = local_160 << 0x20;
  fStack_194 = local_168.X;
  local_198 = fVar39;
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,local_res18._s_0.B,
                               (TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,FVar25,
                               bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  fStack_184 = (float)(int)local_160;
  local_188 = fVar49;
  fStack_194 = fVar1;
  local_198 = fVar48;
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,local_res18._s_0.B,
                               (TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,FVar25,
                               bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  fStack_184 = (float)(undefined4)local_160;
  local_188 = SUB84(local_170,0);
  _local_198 = CONCAT44(fVar1,SUB84(local_res10,0));
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,local_res18._s_0.B,
                               (TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,FVar25,
                               bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  uVar27 = local_res18._s_0.B;
  fStack_184 = (float)(undefined4)local_160;
  local_188 = (float)local_138;
  _local_198 = CONCAT44(fVar1,fVar46);
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,local_res18._s_0.B,
                               (TVector4<float> *)&local_198,(FColor)local_res18._s_0.R,FVar25,
                               bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  _local_188 = (ulonglong)local_138 & 0xffffffff00000000;
  fStack_194 = fVar45;
  local_198 = fVar39;
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,(float)uVar27,(TVector4<float> *)&local_198,
                               (FColor)local_res18._s_0.R,FVar25,bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  fStack_184 = local_138._4_4_;
  local_188 = fVar49;
  local_198 = fVar48;
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,(float)uVar27,(TVector4<float> *)&local_198,
                               (FColor)local_res18._s_0.R,FVar25,bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  fStack_184 = local_138._4_4_;
  local_188 = SUB84(local_170,0);
  _local_198 = CONCAT44(fVar45,SUB84(local_res10,0));
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                               (TVector2<float>)TVar5,(float)uVar27,(TVector4<float> *)&local_198,
                               (FColor)local_res18._s_0.R,FVar25,bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  local_198 = fVar46;
  pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)TVar5,(TVector2<float>)TVar5,
                               (float)uVar27,(TVector4<float> *)&local_198,
                               (FColor)local_res18._s_0.R,FVar25,bVar36);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
  pTVar8 = param_1->SourceIndices;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  iVar31 = uVar35 + 2;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 1;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar31;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar31;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 1;
  iVar29 = uVar35 + 3;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar30 = pTVar8->ArrayNum;
  if (iVar30 == pTVar8->ArrayMax) {
    iVar30 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar30 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar30 * 4) = iVar29;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar30 = pTVar8->ArrayNum;
  if (iVar30 == pTVar8->ArrayMax) {
    iVar30 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar30 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar30 * 4) = iVar31;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = iVar29;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = uVar35 + 4;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = uVar35 + 4;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  iVar30 = uVar35 + 5;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = iVar29;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = iVar30;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = uVar35 + 4;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = iVar30;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = uVar35 + 6;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = uVar35 + 6;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = iVar30;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = uVar35 + 7;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = uVar35 + 1;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = uVar35 + 8;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = iVar29;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = iVar29;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = uVar35 + 8;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = uVar35 + 9;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = iVar29;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  iVar31 = uVar35 + 9;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar31;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar30;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar30;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar31;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 10;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar30;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  iVar30 = uVar35 + 10;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar30;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 7;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 7;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar30;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 0xb;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 8;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 0xc;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar31;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar31;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 0xc;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 0xd;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar31;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 0xd;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar30;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = iVar30;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 0xd;
  iVar29 = uVar35 + 0xe;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = iVar29;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = iVar30;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(int *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = iVar29;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = uVar35 + 0xb;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar31 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar31 * 4) = uVar35 + 0xb;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar31 = pTVar8->ArrayNum;
  if (iVar31 == pTVar8->ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  lVar9 = (pTVar8->AllocatorInstance)._padding_;
  pTVar8->ArrayNum = iVar31 + 1;
  *(int *)(lVar9 + (longlong)iVar31 * 4) = iVar29;
  pTVar8 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar29 = pTVar8->ArrayNum;
  if (iVar29 == pTVar8->ArrayMax) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  FVar28 = local_140;
  pTVar8->ArrayNum = iVar29 + 1;
  *(uint *)((pTVar8->AllocatorInstance)._padding_ + (longlong)iVar29 * 4) = uVar35 + 0xf;
  param_1->NumIndices = param_1->NumIndices + 1;
  if ((GSlateFeathering != 0) && (local_13c != 0.0)) {
    EVar26 = local_res8._0_1_;
    iVar29 = param_1->NumVertices;
    local_13c = __real_3f800000 / (float)uVar27;
    fVar37 = (float)((uint)local_13c ^ __xmm_80000000800000008000000080000000);
    fStack_184 = fVar37;
    local_188 = fVar37;
    fStack_194 = fVar38;
    local_198 = fVar39;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,(TVector2<float>)_local_188,
                                 (TVector2<float>)TVar5,local_res18._s_0.B,
                                 (TVector4<float> *)&local_198,(FColor)local_140._s_0,FVar25,
                                 local_res8._0_1_);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    TVar10.field0_0x0._4_4_ = fVar37;
    TVar10.field0_0x0._s_0.X = fVar49;
    local_198 = fVar48;
    local_res8 = fVar49;
    fStackX_c = fVar37;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,TVar10,(TVector2<float>)TVar5,
                                 local_res18._s_0.B,(TVector4<float> *)&local_198,
                                 (FColor)FVar28._s_0,FVar25,EVar26);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    local_res8 = (float)(undefined4)local_170;
    TVar11.field0_0x0._4_4_ = fVar37;
    TVar11.field0_0x0._s_0.X = (float)(undefined4)local_170;
    _local_198 = CONCAT44(fVar38,SUB84(local_res10,0));
    fStackX_c = fVar37;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,TVar11,(TVector2<float>)TVar5,
                                 local_res18._s_0.B,(TVector4<float> *)&local_198,
                                 (FColor)FVar28._s_0,FVar25,EVar26);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    fVar1 = local_130;
    fVar43 = local_13c + (float)local_138;
    local_198 = fVar46;
    TVar12.field0_0x0._4_4_ = fVar37;
    TVar12.field0_0x0._s_0.X = fVar43;
    fStack_190 = local_130;
    local_res8 = fVar43;
    fStackX_c = fVar37;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,TVar12,(TVector2<float>)TVar5,
                                 local_res18._s_0.B,(TVector4<float> *)&local_198,
                                 (FColor)FVar28._s_0,FVar25,EVar26);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    fStackX_c = local_178;
    TVar13.field0_0x0._s_0.Y = local_178;
    TVar13.field0_0x0._0_4_ = fVar37;
    fStack_194 = fVar47;
    local_198 = fVar39;
    fStack_190 = fVar1;
    local_res8 = fVar37;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,TVar13,(TVector2<float>)TVar5,
                                 local_res18._s_0.B,(TVector4<float> *)&local_198,
                                 (FColor)FVar28._s_0,FVar25,EVar26);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    fStackX_c = (float)(undefined4)local_160;
    TVar14.field0_0x0._s_0.Y = (float)(undefined4)local_160;
    TVar14.field0_0x0._0_4_ = fVar37;
    _local_198 = CONCAT44(local_168.X,fVar39);
    local_res8 = fVar37;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,TVar14,(TVector2<float>)TVar5,
                                 local_res18._s_0.B,(TVector4<float> *)&local_198,
                                 (FColor)FVar28._s_0,FVar25,EVar26);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    uVar27 = local_res18._s_0.B;
    fStackX_c = local_178;
    TVar15.field0_0x0._s_0.Y = local_178;
    TVar15.field0_0x0._s_0.X = fVar43;
    local_198 = fVar46;
    local_res8 = fVar43;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,TVar15,(TVector2<float>)TVar5,
                                 local_res18._s_0.B,(TVector4<float> *)&local_198,
                                 (FColor)FVar28._s_0,FVar25,EVar26);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    fStackX_c = (float)(undefined4)local_160;
    TVar16.field0_0x0._s_0.Y = (float)(undefined4)local_160;
    TVar16.field0_0x0._s_0.X = fVar43;
    _local_198 = CONCAT44(local_168.X,fVar46);
    local_res8 = fVar43;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,TVar16,(TVector2<float>)TVar5,(float)uVar27,
                                 (TVector4<float> *)&local_198,(FColor)FVar28._s_0,FVar25,EVar26);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    fVar38 = local_13c + local_138._4_4_;
    TVar17.field0_0x0._s_0.Y = fVar38;
    TVar17.field0_0x0._0_4_ = fVar37;
    fStack_194 = fVar45;
    local_198 = fVar39;
    local_res8 = fVar37;
    fStackX_c = fVar38;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,TVar17,(TVector2<float>)TVar5,(float)uVar27,
                                 (TVector4<float> *)&local_198,(FColor)FVar28._s_0,FVar25,EVar26);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    TVar18.field0_0x0._s_0.Y = fVar38;
    TVar18.field0_0x0._s_0.X = fVar49;
    local_198 = fVar48;
    local_res8 = fVar49;
    fStackX_c = fVar38;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,TVar18,(TVector2<float>)TVar5,(float)uVar27,
                                 (TVector4<float> *)&local_198,(FColor)FVar28._s_0,FVar25,EVar26);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    local_res8 = (float)(undefined4)local_170;
    _local_198 = CONCAT44(fVar45,SUB84(local_res10,0));
    TVar19.field0_0x0._s_0.Y = fVar38;
    TVar19.field0_0x0._s_0.X = (float)(undefined4)local_170;
    fStackX_c = fVar38;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,TVar19,(TVector2<float>)TVar5,(float)uVar27,
                                 (TVector4<float> *)&local_198,(FColor)FVar28._s_0,FVar25,EVar26);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    TVar20.field0_0x0._s_0.Y = fVar38;
    TVar20.field0_0x0._s_0.X = fVar43;
    local_198 = fVar46;
    local_res8 = fVar43;
    fStackX_c = fVar38;
    pFVar32 = FSlateVertex::Make(&local_128,&local_158,TVar20,(TVector2<float>)TVar5,(float)uVar27,
                                 (TVector4<float> *)&local_198,(FColor)FVar28._s_0,FVar25,EVar26);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar32);
    ``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36
    ::<lambda_1>::operator()(&local_res8,param_1,iVar29,iVar29 + 1,uVar35 + 2,uVar35);
    ``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36
    ::<lambda_1>::operator()(&local_res8,param_1,iVar29 + 1,iVar29 + 2,uVar35 + 4,uVar35 + 2);
    ``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36
    ::<lambda_1>::operator()(&local_res8,param_1,iVar29 + 2,iVar29 + 3,uVar35 + 6,uVar35 + 4);
    ``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36
    ::<lambda_1>::operator()(&local_res8,param_1,iVar29,uVar35,uVar35 + 1,iVar29 + 4);
    ``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36
    ::<lambda_1>::operator()(&local_res8,param_1,iVar29 + 4,uVar35 + 1,uVar35 + 8,iVar29 + 5);
    ``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36
    ::<lambda_1>::operator()(&local_res8,param_1,iVar29 + 5,uVar35 + 8,uVar35 + 0xc,iVar29 + 8);
    ``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36
    ::<lambda_1>::operator()(&local_res8,param_1,uVar35 + 6,iVar29 + 3,iVar29 + 6,uVar35 + 7);
    ``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36
    ::<lambda_1>::operator()(&local_res8,param_1,uVar35 + 7,iVar29 + 6,iVar29 + 7,uVar35 + 0xb);
    ``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36
    ::<lambda_1>::operator()(&local_res8,param_1,uVar35 + 0xb,iVar29 + 7,iVar29 + 0xb,uVar35 + 0xf);
    ``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36
    ::<lambda_1>::operator()(&local_res8,param_1,uVar35 + 0xc,uVar35 + 0xd,iVar29 + 9,iVar29 + 8);
    ``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36
    ::<lambda_1>::operator()(&local_res8,param_1,uVar35 + 0xd,uVar35 + 0xe,iVar29 + 10,iVar29 + 9);
    ``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36
    ::<lambda_1>::operator()(&local_res8,param_1,uVar35 + 0xe,uVar35 + 0xf,iVar29 + 0xb,iVar29 + 10)
    ;
  }
  return;
}

// operator() @ 1424f3f60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
`FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()
          (void *this,FSlateRenderBatch *param_1,FSlateRoundedBoxElement *param_2)

{
  FColor_u_0_s_0 FVar1;
  TVector2<float>_u_0 TVar2;
  undefined8 *puVar3;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar4;
  longlong lVar5;
  TVector2<float> TVar6;
  TVector2<float> TVar7;
  TVector2<float> TVar8;
  TVector2<float> TVar9;
  TVector2<float> TVar10;
  TVector2<float> TVar11;
  TVector2<float> TVar12;
  TVector2<float> TVar13;
  TVector2<float> TVar14;
  TVector2<float> TVar15;
  TVector2<float> TVar16;
  TVector2<float> TVar17;
  bool bVar18;
  ESlateVertexRounding EVar19;
  char cVar20;
  FColor_u_0 FVar21;
  FColor FVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined4 extraout_var;
  FSlateVertex *pFVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float local_res8;
  float fStackX_c;
  undefined8 local_res10;
  float local_res18;
  float local_res20;
  undefined4 uStackX_24;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 local_1a8;
  float local_1a0;
  FLinearColor_u_0 local_19c;
  float local_18c;
  undefined1 local_188 [16];
  undefined8 uStack_178;
  undefined8 local_170;
  FColor_u_0 local_168;
  float local_164;
  FSlateVertex local_160;
  float local_128;
  float fStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118;
  float local_108;
  float fStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  
  _local_1b8 = *(undefined8 *)&param_2->field_0x48;
  _fStack_1b0 = *(undefined8 *)&param_2->field_0x50;
  local_118 = (byte)param_2->field_0x43 & 0x10;
  local_res8 = (float)CONCAT31(local_res8._1_3_,(param_2->field_0x43 & 0x10) == 0);
  FSlateElementBatcher::PackVertexColor
            (*(FSlateElementBatcher **)this,(FLinearColor *)&local_19c._s_0);
  fVar33 = __real_3f800000;
  local_188._8_8_ = *(undefined8 *)param_2;
  uStack_178 = *(undefined8 *)&param_2->field_0x8;
  TVar2 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&param_2->field_0x20;
  uVar28 = 1;
  puVar3 = *(undefined8 **)&param_2->field_0x80;
  uVar27 = 1;
  local_170 = *(undefined8 *)&param_2->field_0x10;
  fVar37 = 0.0;
  fVar36 = 0.0;
  _local_128 = (TVector2<float>_u_0)0x0;
  local_1a0 = *(float *)&param_2->field_0x2c;
  if (((puVar3 == (undefined8 *)0x0) || (puVar3[2] == 0)) || (*(char *)(puVar3[2] + 8) != '!')) {
    local_19c._4_8_ = 0x3f8000003f800000;
    fVar32 = *(float *)(*(longlong *)this + 0x48);
    uVar38 = __real_3f800000;
    fVar30 = __real_3f800000;
    fVar42 = fVar32;
  }
  else {
    uVar29 = uVar27;
    if (*(uint *)(puVar3 + 3) != 0) {
      uVar29 = *(uint *)(puVar3 + 3);
    }
    uVar28 = uVar27;
    if (*(uint *)((longlong)puVar3 + 0x1c) != 0) {
      uVar28 = *(uint *)((longlong)puVar3 + 0x1c);
    }
    fVar32 = *(float *)(*(longlong *)this + 0x48) / (float)uVar29;
    fVar42 = *(float *)(*(longlong *)this + 0x48) / (float)uVar28;
    uVar27 = uVar29;
    if (param_2->field_0x78 == '\0') {
      local_19c._4_8_ = puVar3[1];
      local_res10._0_4_ = (undefined4)*puVar3;
      fVar37 = fVar32 + (float)(undefined4)local_res10;
      local_res10._4_4_ = (undefined4)((ulonglong)*puVar3 >> 0x20);
      fVar36 = fVar42 + (float)local_res10._4_4_;
      local_res10._0_4_ = (undefined4)local_19c._4_8_;
      local_res10._4_4_ = (undefined4)((ulonglong)local_19c._4_8_ >> 0x20);
      uVar38 = fVar36 + (float)local_res10._4_4_;
      fVar30 = fVar37 + (float)(undefined4)local_res10;
    }
    else {
      fVar30 = *(float *)&param_2->field_0x70 - *(float *)&param_2->field_0x68;
      fVar31 = *(float *)&param_2->field_0x74 - *(float *)&param_2->field_0x6c;
      fVar37 = *(float *)&param_2->field_0x68 + fVar32;
      fVar36 = *(float *)&param_2->field_0x6c + fVar42;
      local_res10 = CONCAT44(fVar31,fVar30);
      local_19c._4_8_ = local_res10;
      uVar38 = fVar36 + fVar31;
      fVar30 = fVar37 + fVar30;
    }
  }
  iVar23 = *(int *)&param_2->field_0x88;
  if ((iVar23 == 3) || (iVar23 == 1)) {
    local_res20 = (float)CONCAT31(local_res20._1_3_,1);
    if (iVar23 != 3) goto LAB_1424f41c3;
LAB_1424f41cd:
    bVar18 = true;
  }
  else {
    local_res20 = (float)((uint)local_res20._1_3_ << 8);
LAB_1424f41c3:
    if (iVar23 == 2) goto LAB_1424f41cd;
    bVar18 = false;
  }
  iVar23 = *(int *)&param_2->field_0x8c;
  if ((iVar23 == 3) || (iVar23 == 1)) {
    local_res18 = (float)CONCAT31(local_res18._1_3_,1);
    local_res10 = local_19c._4_8_;
    if (iVar23 != 3) goto LAB_1424f41f5;
LAB_1424f4201:
    local_res10 = CONCAT71(local_res10._1_7_,1);
  }
  else {
    local_res18 = (float)((uint)local_res18._1_3_ << 8);
LAB_1424f41f5:
    local_res10 = local_19c._4_8_ & 0xffffffffffffff00;
    if (iVar23 == 2) goto LAB_1424f4201;
  }
  local_1a8 = TVar2;
  local_19c._12_4_ = fVar36;
  local_18c = fVar37;
  _local_108 = TVar2;
  local_f8 = fVar37;
  local_f4 = fVar36;
  FVar22 = FSlateElementBatcher::PackVertexColor
                     (*(FSlateElementBatcher **)this,(FLinearColor *)local_188);
  fVar31 = local_1a0;
  FVar1 = ((FColor_u_0 *)CONCAT44(extraout_var,FVar22.field0_0x0))->_s_0;
  fVar40 = fVar33;
  if (local_res20._0_1_ != '\0') {
    fVar40 = local_108 / (float)uVar27;
  }
  fVar39 = fVar33;
  if (bVar18) {
    fVar39 = fStack_104 / (float)uVar28;
  }
  uVar29 = param_1->NumVertices;
  local_res20 = (float)(undefined4)local_1a8;
  uStackX_24 = 0;
  _local_1b8 = (ulonglong)local_1a8 & 0xffffffff00000000;
  local_168.Bits = 0;
  cVar20 = (char)local_res10;
  EVar19 = local_res8._0_1_;
  local_188._0_4_ = fVar39;
  local_164 = fVar40;
  if (*(int *)&param_2->field_0x90 == 3) {
LAB_1424f5e83:
    fVar32 = fVar30;
    fVar42 = local_18c;
    if (((local_res18._0_1_ != '\0') ||
        (fVar32 = fVar37, fVar42 = fVar30, (char)local_res10 != '\0')) &&
       ((char)local_res10 != '\0')) {
      fVar36 = (float)uVar38;
      uVar38 = local_19c._12_4_;
    }
    fStack_104 = fVar36;
    local_108 = fVar32;
    local_100 = fVar40;
    local_fc = fVar39;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                                 (TVector2<float>)_local_128,(TVector2<float>)TVar2,local_1a0,
                                 (TVector4<float> *)&local_108,(FColor)local_19c._s_0.R,
                                 (FColor)FVar1,local_res8._0_1_);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    TVar17.field0_0x0._s_0.Y = (float)uStackX_24;
    TVar17.field0_0x0._s_0.X = local_res20;
    fStack_124 = fVar36;
    local_128 = fVar42;
    local_120 = fVar40;
    local_11c = fVar39;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),TVar17,
                                 (TVector2<float>)TVar2,fVar31,(TVector4<float> *)&local_128,
                                 (FColor)local_19c._s_0.R,(FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    fStack_124 = (float)uVar38;
    local_128 = fVar32;
    local_120 = fVar40;
    local_11c = fVar39;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                                 (TVector2<float>)_local_1b8,(TVector2<float>)TVar2,fVar31,
                                 (TVector4<float> *)&local_128,(FColor)local_19c._s_0.R,
                                 (FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    fStack_1b4 = (float)uVar38;
    local_1b8 = fVar42;
    fStack_1ac = fVar39;
    fStack_1b0 = fVar40;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                                 (TVector2<float>)TVar2,(TVector2<float>)TVar2,fVar31,
                                 (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,
                                 (FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    pTVar4 = param_1->SourceIndices;
    iVar23 = pTVar4->ArrayNum;
    if (iVar23 == pTVar4->ArrayMax) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
    }
    pTVar4->ArrayNum = iVar23 + 1;
    *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29;
    pTVar4 = param_1->SourceIndices;
    param_1->NumIndices = param_1->NumIndices + 1;
    iVar23 = pTVar4->ArrayNum;
    if (iVar23 == pTVar4->ArrayMax) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
    }
    pTVar4->ArrayNum = iVar23 + 1;
    uVar28 = uVar29 + 2;
    *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 1;
    pTVar4 = param_1->SourceIndices;
    param_1->NumIndices = param_1->NumIndices + 1;
    iVar23 = pTVar4->ArrayNum;
    if (iVar23 == pTVar4->ArrayMax) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
    }
    pTVar4->ArrayNum = iVar23 + 1;
    *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar28;
    pTVar4 = param_1->SourceIndices;
    param_1->NumIndices = param_1->NumIndices + 1;
    iVar23 = pTVar4->ArrayNum;
    if (iVar23 == pTVar4->ArrayMax) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
    }
    pTVar4->ArrayNum = iVar23 + 1;
    *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar28;
    pTVar4 = param_1->SourceIndices;
    param_1->NumIndices = param_1->NumIndices + 1;
    iVar23 = pTVar4->ArrayNum;
    if (iVar23 == pTVar4->ArrayMax) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
    }
    pTVar4->ArrayNum = iVar23 + 1;
    *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 1;
    pTVar4 = param_1->SourceIndices;
    param_1->NumIndices = param_1->NumIndices + 1;
    iVar23 = pTVar4->ArrayNum;
    if (iVar23 == pTVar4->ArrayMax) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
    }
    FVar21 = local_168;
    pTVar4->ArrayNum = iVar23 + 1;
    *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 3;
    param_1->NumIndices = param_1->NumIndices + 1;
    if (GSlateFeathering == 0) {
      return;
    }
    if (local_118 == 0) {
      return;
    }
    uVar27 = param_1->NumVertices;
    fVar33 = fVar33 / fVar31;
    fStack_1b4 = fVar36;
    local_1b8 = fVar32;
    uVar35 = (uint)fVar33 ^ __xmm_80000000800000008000000080000000;
    local_res10._4_4_ = uVar35;
    local_res10._0_4_ = uVar35;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                                 (TVector2<float>)local_res10,(TVector2<float>)TVar2,fVar31,
                                 (TVector4<float> *)&local_1b8,(FColor)local_168._s_0,(FColor)FVar1,
                                 local_res8._0_1_);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    fVar37 = fVar33 + (float)(undefined4)local_1a8;
    local_1b8 = fVar42;
    local_res10._0_4_ = fVar37;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                                 (TVector2<float>)local_res10,(TVector2<float>)TVar2,fVar31,
                                 (TVector4<float> *)&local_1b8,(FColor)FVar21._s_0,(FColor)FVar1,
                                 local_res8._0_1_);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    fVar33 = fVar33 + (float)local_1a8._4_4_;
    local_res10._4_4_ = fVar33;
    local_res10._0_4_ = uVar35;
    fStack_1b4 = (float)uVar38;
    local_1b8 = fVar32;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                                 (TVector2<float>)local_res10,(TVector2<float>)TVar2,fVar31,
                                 (TVector4<float> *)&local_1b8,(FColor)FVar21._s_0,(FColor)FVar1,
                                 local_res8._0_1_);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    local_res10._0_4_ = fVar37;
    local_1b8 = fVar42;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                                 (TVector2<float>)local_res10,(TVector2<float>)TVar2,fVar31,
                                 (TVector4<float> *)&local_1b8,(FColor)FVar21._s_0,(FColor)FVar1,
                                 local_res8._0_1_);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar27);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar27 + 1);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar29 + 1);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar27);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar29 + 1);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar29);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar27);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar28);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar27 + 2);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar27);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar29);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar28);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar29 + 1);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar27 + 1);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar27 + 3);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar29 + 1);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar27 + 3);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar29 + 3);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar28);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar29 + 3);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar27 + 3);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar27 + 3);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar27 + 2);
    FSlateRenderBatch::EmplaceIndex(param_1,uVar28);
    return;
  }
  fVar43 = *(float *)&param_2->field_0x58;
  fVar41 = fVar37;
  if (fVar43 == 0.0) {
    if ((*(float *)&param_2->field_0x5c != 0.0) || (*(float *)&param_2->field_0x60 != 0.0))
    goto LAB_1424f4312;
    fVar33 = __real_3f800000;
    if (*(float *)&param_2->field_0x64 == 0.0) goto LAB_1424f5e83;
  }
  if (0.0 < fVar43) {
    fVar41 = fVar43 * local_19c._s_0.G + fVar37 + fVar32;
  }
LAB_1424f4312:
  fVar33 = *(float *)&param_2->field_0x5c;
  fVar31 = fVar36;
  if (0.0 < fVar33) {
    fVar31 = fVar33 * local_19c._s_0.B + fVar36 + fVar42;
  }
  fVar34 = *(float *)&param_2->field_0x60;
  local_res20 = fVar30;
  if (0.0 < fVar34) {
    local_res20 = (fVar30 - fVar34 * local_19c._s_0.G) + fVar32;
  }
  fVar32 = *(float *)&param_2->field_0x64;
  local_18c = (float)uVar38;
  if (0.0 < fVar32) {
    local_18c = ((float)uVar38 - fVar32 * local_19c._s_0.B) + fVar42;
  }
  if ((local_res18._0_1_ != '\0') || ((char)local_res10 != '\0')) {
    local_res10 = CONCAT44(local_res10._4_4_,fVar30);
    if (local_res18._0_1_ != '\0') {
      fVar41 = fVar30 - (fVar41 - fVar37);
      local_res20 = fVar30 - (local_res20 - fVar37);
      fVar37 = fVar30;
      fVar30 = local_f8;
    }
    if (cVar20 != '\0') {
      fVar31 = (float)uVar38 - (fVar31 - fVar36);
      local_18c = (float)uVar38 - (local_18c - fVar36);
      fVar36 = (float)uVar38;
      uVar38 = local_f4;
    }
  }
  fVar43 = fVar43 * (float)uVar27;
  local_res18 = local_108 - fVar34 * (float)uVar27;
  fVar33 = fVar33 * (float)uVar28;
  fVar32 = fStack_104 - fVar32 * (float)uVar28;
  if (local_res18 < fVar43) {
    fVar43 = local_108 * __real_3f000000;
    local_res18 = fVar43;
  }
  if (fVar32 < fVar33) {
    fVar33 = fStack_104 * __real_3f000000;
    fVar32 = fVar33;
  }
  local_res10 = CONCAT44(local_res10._4_4_,fVar32);
  local_1a8 = (TVector2<float>_u_0)0x0;
  fStack_1b4 = fVar36;
  local_1b8 = fVar37;
  fStack_1ac = fVar39;
  fStack_1b0 = fVar40;
  local_19c._4_8_ = TVar2;
  local_19c._s_0.A = fVar33;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),(TVector2<float>)0x0
                               ,(TVector2<float>)TVar2,local_1a0,(TVector4<float> *)&local_1b8,
                               (FColor)local_19c._s_0.R,(FColor)FVar1,local_res8._0_1_);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1a8 = (TVector2<float>_u_0)((ulonglong)(uint)fVar33 << 0x20);
  fStack_1b4 = fVar31;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,local_1a0,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1a8._4_4_ = 0;
  local_1a8._0_4_ = fVar43;
  fStack_1b4 = fVar36;
  local_1b8 = fVar41;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,local_1a0,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1a8._4_4_ = fVar33;
  fStack_1b4 = fVar31;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,local_1a0,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1a8._4_4_ = 0;
  local_1a8._0_4_ = local_res18;
  fStack_1b4 = fVar36;
  local_1b8 = local_res20;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,local_1a0,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1a8._4_4_ = fVar33;
  local_1a8._0_4_ = local_res18;
  fStack_1b4 = fVar31;
  local_1b8 = local_res20;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,local_1a0,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1a8 = (TVector2<float>_u_0)(local_19c._4_8_ & 0xffffffff);
  fStack_1b4 = fVar36;
  local_1b8 = fVar30;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,local_1a0,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1a8._0_4_ = (float)local_19c._4_8_;
  fStack_1b4 = fVar31;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,local_1a0,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  fVar32 = local_18c;
  local_1a8 = (TVector2<float>_u_0)(local_res10 << 0x20);
  fStack_1b4 = local_18c;
  local_1b8 = fVar37;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,local_1a0,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1a8._4_4_ = (int)local_res10;
  local_1a8._0_4_ = fVar43;
  fStack_1b4 = fVar32;
  local_1b8 = fVar41;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,local_1a0,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1a8._4_4_ = (undefined4)local_res10;
  local_1a8._0_4_ = local_res18;
  local_1b8 = local_res20;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,local_1a0,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  fVar33 = local_1a0;
  local_1a8._4_4_ = (undefined4)local_res10;
  local_1a8._0_4_ = (float)local_19c._4_8_;
  local_1b8 = fVar30;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,local_1a0,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1a8 = (TVector2<float>_u_0)(local_19c._4_8_ & 0xffffffff00000000);
  fStack_1b4 = (float)uVar38;
  local_1b8 = fVar37;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,fVar33,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1a8._4_4_ = (float)((ulonglong)local_19c._4_8_ >> 0x20);
  local_1a8._0_4_ = fVar43;
  local_1b8 = fVar41;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,fVar33,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1a8._4_4_ = local_19c._s_0.B;
  local_1a8._0_4_ = local_res18;
  local_1b8 = local_res20;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)local_1a8,(TVector2<float>)TVar2,fVar33,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  local_1b8 = fVar30;
  pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                               (TVector2<float>)TVar2,(TVector2<float>)TVar2,fVar33,
                               (TVector4<float> *)&local_1b8,(FColor)local_19c._s_0.R,(FColor)FVar1,
                               EVar19);
  FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
  pTVar4 = param_1->SourceIndices;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  iVar25 = uVar29 + 2;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 1;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar25;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar25;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 1;
  iVar23 = uVar29 + 3;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar24 = pTVar4->ArrayNum;
  if (iVar24 == pTVar4->ArrayMax) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar24 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar24 * 4) = iVar23;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar24 = pTVar4->ArrayNum;
  if (iVar24 == pTVar4->ArrayMax) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar24 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar24 * 4) = iVar25;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = iVar23;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = uVar29 + 4;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = uVar29 + 4;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  iVar24 = uVar29 + 5;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = iVar23;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = iVar24;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = uVar29 + 4;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = iVar24;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = uVar29 + 6;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = uVar29 + 6;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = iVar24;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = uVar29 + 7;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = uVar29 + 1;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = uVar29 + 8;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = iVar23;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = iVar23;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = uVar29 + 8;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = uVar29 + 9;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = iVar23;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  iVar25 = uVar29 + 9;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar25;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar24;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar24;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar25;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 10;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar24;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  iVar24 = uVar29 + 10;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar24;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 7;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 7;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar24;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 0xb;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 8;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 0xc;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar25;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar25;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 0xc;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 0xd;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar25;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 0xd;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar24;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = iVar24;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 0xd;
  iVar23 = uVar29 + 0xe;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = iVar23;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = iVar24;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = iVar23;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = uVar29 + 0xb;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar25 * 4) = uVar29 + 0xb;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar25 = pTVar4->ArrayNum;
  if (iVar25 == pTVar4->ArrayMax) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  lVar5 = (pTVar4->AllocatorInstance)._padding_;
  pTVar4->ArrayNum = iVar25 + 1;
  *(int *)(lVar5 + (longlong)iVar25 * 4) = iVar23;
  pTVar4 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar23 = pTVar4->ArrayNum;
  if (iVar23 == pTVar4->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  FVar21 = local_168;
  pTVar4->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar23 * 4) = uVar29 + 0xf;
  param_1->NumIndices = param_1->NumIndices + 1;
  if ((GSlateFeathering != 0) && (local_118 != 0)) {
    EVar19 = local_res8._0_1_;
    iVar23 = param_1->NumVertices;
    local_188._0_4_ = __real_3f800000 / fVar33;
    fVar34 = (float)(local_188._0_4_ ^ __xmm_80000000800000008000000080000000);
    local_1a8._4_4_ = fVar34;
    local_1a8._0_4_ = fVar34;
    fStack_1b4 = fVar36;
    local_1b8 = fVar37;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),
                                 (TVector2<float>)local_1a8,(TVector2<float>)TVar2,local_1a0,
                                 (TVector4<float> *)&local_1b8,(FColor)local_168._s_0,(FColor)FVar1,
                                 local_res8._0_1_);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    TVar6.field0_0x0._4_4_ = fVar34;
    TVar6.field0_0x0._s_0.X = fVar43;
    local_1b8 = fVar41;
    local_res8 = fVar43;
    fStackX_c = fVar34;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),TVar6,
                                 (TVector2<float>)TVar2,local_1a0,(TVector4<float> *)&local_1b8,
                                 (FColor)FVar21._s_0,(FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    local_res8 = local_res18;
    TVar7.field0_0x0._4_4_ = fVar34;
    TVar7.field0_0x0._s_0.X = local_res18;
    local_1b8 = local_res20;
    fStackX_c = fVar34;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),TVar7,
                                 (TVector2<float>)TVar2,local_1a0,(TVector4<float> *)&local_1b8,
                                 (FColor)FVar21._s_0,(FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    fVar32 = local_164;
    fVar42 = (float)local_188._0_4_ + local_19c._s_0.G;
    local_1b8 = fVar30;
    TVar8.field0_0x0._4_4_ = fVar34;
    TVar8.field0_0x0._s_0.X = fVar42;
    fStack_1b0 = local_164;
    local_res8 = fVar42;
    fStackX_c = fVar34;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),TVar8,
                                 (TVector2<float>)TVar2,local_1a0,(TVector4<float> *)&local_1b8,
                                 (FColor)FVar21._s_0,(FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    fStackX_c = local_19c._s_0.A;
    TVar9.field0_0x0._s_0.Y = local_19c._s_0.A;
    TVar9.field0_0x0._0_4_ = fVar34;
    fStack_1b4 = fVar31;
    local_1b8 = fVar37;
    fStack_1b0 = fVar32;
    local_res8 = fVar34;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),TVar9,
                                 (TVector2<float>)TVar2,local_1a0,(TVector4<float> *)&local_1b8,
                                 (FColor)FVar21._s_0,(FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    fStackX_c = (float)(undefined4)local_res10;
    TVar10.field0_0x0._s_0.Y = (float)(undefined4)local_res10;
    TVar10.field0_0x0._0_4_ = fVar34;
    fStack_1b4 = local_18c;
    local_res8 = fVar34;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),TVar10,
                                 (TVector2<float>)TVar2,local_1a0,(TVector4<float> *)&local_1b8,
                                 (FColor)FVar21._s_0,(FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    fVar33 = local_1a0;
    fStackX_c = local_19c._s_0.A;
    TVar11.field0_0x0._s_0.Y = local_19c._s_0.A;
    TVar11.field0_0x0._s_0.X = fVar42;
    fStack_1b4 = fVar31;
    local_1b8 = fVar30;
    local_res8 = fVar42;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),TVar11,
                                 (TVector2<float>)TVar2,local_1a0,(TVector4<float> *)&local_1b8,
                                 (FColor)FVar21._s_0,(FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    fStackX_c = (float)(undefined4)local_res10;
    TVar12.field0_0x0._s_0.Y = (float)(undefined4)local_res10;
    TVar12.field0_0x0._s_0.X = fVar42;
    fStack_1b4 = local_18c;
    local_res8 = fVar42;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),TVar12,
                                 (TVector2<float>)TVar2,fVar33,(TVector4<float> *)&local_1b8,
                                 (FColor)FVar21._s_0,(FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    fVar36 = (float)local_188._0_4_ + local_19c._s_0.B;
    TVar13.field0_0x0._s_0.Y = fVar36;
    TVar13.field0_0x0._0_4_ = fVar34;
    fStack_1b4 = (float)uVar38;
    local_1b8 = fVar37;
    local_res8 = fVar34;
    fStackX_c = fVar36;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),TVar13,
                                 (TVector2<float>)TVar2,fVar33,(TVector4<float> *)&local_1b8,
                                 (FColor)FVar21._s_0,(FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    TVar14.field0_0x0._s_0.Y = fVar36;
    TVar14.field0_0x0._s_0.X = fVar43;
    local_1b8 = fVar41;
    local_res8 = fVar43;
    fStackX_c = fVar36;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),TVar14,
                                 (TVector2<float>)TVar2,fVar33,(TVector4<float> *)&local_1b8,
                                 (FColor)FVar21._s_0,(FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    local_res8 = local_res18;
    local_1b8 = local_res20;
    TVar15.field0_0x0._s_0.Y = fVar36;
    TVar15.field0_0x0._s_0.X = local_res18;
    fStackX_c = fVar36;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),TVar15,
                                 (TVector2<float>)TVar2,fVar33,(TVector4<float> *)&local_1b8,
                                 (FColor)FVar21._s_0,(FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    TVar16.field0_0x0._s_0.Y = fVar36;
    TVar16.field0_0x0._s_0.X = fVar42;
    local_1b8 = fVar30;
    local_res8 = fVar42;
    fStackX_c = fVar36;
    pFVar26 = FSlateVertex::Make(&local_160,(TTransform2<float> *)(local_188 + 8),TVar16,
                                 (TVector2<float>)TVar2,fVar33,(TVector4<float> *)&local_1b8,
                                 (FColor)FVar21._s_0,(FColor)FVar1,EVar19);
    FSlateRenderBatch::EmplaceVertex(param_1,pFVar26);
    ``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'
    ::__l37::<lambda_1>::operator()(&local_res8,param_1,iVar23,iVar23 + 1,uVar29 + 2,uVar29);
    ``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'
    ::__l37::<lambda_1>::operator()(&local_res8,param_1,iVar23 + 1,iVar23 + 2,uVar29 + 4,uVar29 + 2)
    ;
    ``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'
    ::__l37::<lambda_1>::operator()(&local_res8,param_1,iVar23 + 2,iVar23 + 3,uVar29 + 6,uVar29 + 4)
    ;
    ``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'
    ::__l37::<lambda_1>::operator()(&local_res8,param_1,iVar23,uVar29,uVar29 + 1,iVar23 + 4);
    ``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'
    ::__l37::<lambda_1>::operator()(&local_res8,param_1,iVar23 + 4,uVar29 + 1,uVar29 + 8,iVar23 + 5)
    ;
    ``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'
    ::__l37::<lambda_1>::operator()
              (&local_res8,param_1,iVar23 + 5,uVar29 + 8,uVar29 + 0xc,iVar23 + 8);
    ``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'
    ::__l37::<lambda_1>::operator()(&local_res8,param_1,uVar29 + 6,iVar23 + 3,iVar23 + 6,uVar29 + 7)
    ;
    ``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'
    ::__l37::<lambda_1>::operator()
              (&local_res8,param_1,uVar29 + 7,iVar23 + 6,iVar23 + 7,uVar29 + 0xb);
    ``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'
    ::__l37::<lambda_1>::operator()
              (&local_res8,param_1,uVar29 + 0xb,iVar23 + 7,iVar23 + 0xb,uVar29 + 0xf);
    ``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'
    ::__l37::<lambda_1>::operator()
              (&local_res8,param_1,uVar29 + 0xc,uVar29 + 0xd,iVar23 + 9,iVar23 + 8);
    ``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'
    ::__l37::<lambda_1>::operator()
              (&local_res8,param_1,uVar29 + 0xd,uVar29 + 0xe,iVar23 + 10,iVar23 + 9);
    ``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'
    ::__l37::<lambda_1>::operator()
              (&local_res8,param_1,uVar29 + 0xe,uVar29 + 0xf,iVar23 + 0xb,iVar23 + 10);
  }
  return;
}

// operator() @ 1424f64f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
`FSlateElementBatcher::AddShapedTextElement<1>'::__l2::<lambda_1>::operator()
          (void *this,FFontOutlineSettings *param_1,FColor *param_2,UObject *param_3,int param_4,
          float param_5,int param_6)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FSlateClippingState *pFVar6;
  TTransform2<float> *pTVar7;
  longlong lVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FSlateRect local_48;
  TTransform2<float> local_38 [2];
  
  *(UObject **)(*(longlong *)this + 0x10) = param_3;
  *(FFontOutlineSettings **)(*(longlong *)this + 0x18) = param_1;
  *(float *)(*(longlong *)this + 0x40) = param_5;
  *(undefined4 *)(*(longlong *)this + 0x44) = 0;
  *(int *)(*(longlong *)this + 0x54) = param_4;
  ((FColor_u_0 *)(*(longlong *)this + 0x58))->_s_0 = (FColor_u_0_s_0)param_2->field0_0x0;
  *(byte *)(*(longlong *)this + 0x5e) = *(byte *)(*(longlong *)this + 0x5e) & 0xfe;
  if ((*(char *)(*(longlong *)((longlong)this + 8) + 0x8a) == '\0') ||
     (*(char *)(*(longlong *)((longlong)this + 8) + 0x8b) == '\0')) {
    bVar9 = 0;
  }
  else {
    bVar9 = 2;
  }
  *(byte *)(*(longlong *)this + 0x5e) = *(byte *)(*(longlong *)this + 0x5e) & 0xfd | bVar9;
  *(undefined1 *)(*(longlong *)this + 0x5c) =
       *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x88);
  *(undefined1 *)(*(longlong *)this + 0x5d) =
       *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x89);
  *(int *)(*(longlong *)this + 0x50) = param_6;
  if ((*(int *)(**(longlong **)((longlong)this + 0x10) + 8) < 0xc9) &&
     ((**(longlong **)((longlong)this + 0x18) == 0 || (*(char *)(*(longlong *)this + 0x5c) == '\0'))
     )) goto LAB_1424f67bf;
  pFVar6 = FSlateElementBatcher::ResolveClippingState
                     (*(FSlateElementBatcher **)((longlong)this + 0x20),
                      *(FSlateDrawElement **)((longlong)this + 8));
  if ((pFVar6 != (FSlateClippingState *)0x0) &&
     (((pFVar6->ScissorRect).bIsSet != false &&
      ((pFVar6->ScissorRect).TypedValue.bIsAxisAligned != 0)))) {
    bVar4 = IsAxisAlignedRotation(*(TMatrix2x2<float> **)((longlong)this + 0x28));
    if (bVar4) {
      if ((pFVar6->ScissorRect).bIsSet == false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      FSlateClippingZone::GetBoundingBox(&(pFVar6->ScissorRect).TypedValue,&local_48);
      pTVar7 = TTransform2<float>::Inverse(*(TTransform2<float> **)((longlong)this + 0x28),local_38)
      ;
      fVar10 = (pTVar7->M).M[1][0];
      fVar11 = (pTVar7->M).M[0][0];
      fVar12 = fVar11 * local_48.Left + fVar10 * local_48.Top + (pTVar7->Trans).field0_0x0._s_0.X;
      fVar11 = fVar11 * local_48.Right + fVar10 * local_48.Bottom +
               (pTVar7->Trans).field0_0x0._s_0.X;
      fVar10 = fVar12;
      if (fVar11 < fVar12) {
        fVar10 = fVar11;
        fVar11 = fVar12;
      }
      *(float *)(*(longlong *)this + 0x48) = fVar10;
      *(float *)(*(longlong *)this + 0x4c) = fVar11;
      fVar10 = __real_bf000000;
      lVar8 = *(longlong *)this;
      if (((int)((int)ROUND((*(float *)(lVar8 + 0x48) + *(float *)(lVar8 + 0x48)) - __real_3f000000)
                & 0xfffffffeU) < 1) || (*(char *)(lVar8 + 0x5c) != '\x02')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      fVar11 = __real_bf000000 - (*(float *)(lVar8 + 0x4c) + *(float *)(lVar8 + 0x4c));
      iVar5 = FShapedGlyphSequence::GetMeasuredWidth
                        ((FShapedGlyphSequence *)**(undefined8 **)((longlong)this + 0x10));
      lVar8 = *(longlong *)this;
      if ((-((int)ROUND(fVar11) >> 1) < iVar5) && (*(char *)(lVar8 + 0x5c) == '\x01')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (*(char *)(lVar8 + 0x5d) == '\x03') {
        if ((int)((int)ROUND((*(float *)(lVar8 + 0x48) + *(float *)(lVar8 + 0x48)) - __real_3f000000
                            ) & 0xfffffffeU) < 1) {
          fVar11 = *(float *)(lVar8 + 0x4c);
          iVar5 = FShapedGlyphSequence::GetMeasuredWidth
                            ((FShapedGlyphSequence *)**(undefined8 **)((longlong)this + 0x10));
          lVar8 = *(longlong *)this;
          if (iVar5 <= -((int)ROUND(fVar10 - (fVar11 + fVar11)) >> 1)) goto LAB_1424f6776;
        }
        bVar3 = true;
      }
      else {
LAB_1424f6776:
        bVar3 = false;
      }
      if ((((bVar4) || (bVar2)) || (bVar3)) ||
         (*(char *)(*(longlong *)((longlong)this + 8) + 0x8b) != '\0')) {
        if (**(longlong **)((longlong)this + 0x18) == 0) {
          *(byte *)(lVar8 + 0x5e) = *(byte *)(lVar8 + 0x5e) | 1;
        }
      }
      else {
        *(undefined1 *)(lVar8 + 0x5c) = 0;
      }
      goto LAB_1424f67bf;
    }
  }
  *(undefined1 *)(*(longlong *)this + 0x5c) = 0;
LAB_1424f67bf:
  iVar5 = FSlateElementBatcher::BuildShapedTextSequence<1>
                    (*(FSlateElementBatcher **)((longlong)this + 0x20),
                     *(FShapedTextBuildContext **)this);
  return iVar5;
}

// operator() @ 1424f67e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
`FSlateElementBatcher::AddShapedTextElement<0>'::__l2::<lambda_1>::operator()
          (void *this,FFontOutlineSettings *param_1,FColor *param_2,UObject *param_3,int param_4,
          float param_5,int param_6)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FSlateClippingState *pFVar6;
  TTransform2<float> *pTVar7;
  longlong lVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FSlateRect local_48;
  TTransform2<float> local_38 [2];
  
  *(UObject **)(*(longlong *)this + 0x10) = param_3;
  *(FFontOutlineSettings **)(*(longlong *)this + 0x18) = param_1;
  *(float *)(*(longlong *)this + 0x40) = param_5;
  *(undefined4 *)(*(longlong *)this + 0x44) = 0;
  *(int *)(*(longlong *)this + 0x54) = param_4;
  ((FColor_u_0 *)(*(longlong *)this + 0x58))->_s_0 = (FColor_u_0_s_0)param_2->field0_0x0;
  *(byte *)(*(longlong *)this + 0x5e) = *(byte *)(*(longlong *)this + 0x5e) & 0xfe;
  if ((*(char *)(*(longlong *)((longlong)this + 8) + 0x8a) == '\0') ||
     (*(char *)(*(longlong *)((longlong)this + 8) + 0x8b) == '\0')) {
    bVar9 = 0;
  }
  else {
    bVar9 = 2;
  }
  *(byte *)(*(longlong *)this + 0x5e) = *(byte *)(*(longlong *)this + 0x5e) & 0xfd | bVar9;
  *(undefined1 *)(*(longlong *)this + 0x5c) =
       *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x88);
  *(undefined1 *)(*(longlong *)this + 0x5d) =
       *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x89);
  *(int *)(*(longlong *)this + 0x50) = param_6;
  if ((*(int *)(**(longlong **)((longlong)this + 0x10) + 8) < 0xc9) &&
     ((**(longlong **)((longlong)this + 0x18) == 0 || (*(char *)(*(longlong *)this + 0x5c) == '\0'))
     )) goto LAB_1424f6aaf;
  pFVar6 = FSlateElementBatcher::ResolveClippingState
                     (*(FSlateElementBatcher **)((longlong)this + 0x20),
                      *(FSlateDrawElement **)((longlong)this + 8));
  if ((pFVar6 != (FSlateClippingState *)0x0) &&
     (((pFVar6->ScissorRect).bIsSet != false &&
      ((pFVar6->ScissorRect).TypedValue.bIsAxisAligned != 0)))) {
    bVar4 = IsAxisAlignedRotation(*(TMatrix2x2<float> **)((longlong)this + 0x28));
    if (bVar4) {
      if ((pFVar6->ScissorRect).bIsSet == false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      FSlateClippingZone::GetBoundingBox(&(pFVar6->ScissorRect).TypedValue,&local_48);
      pTVar7 = TTransform2<float>::Inverse(*(TTransform2<float> **)((longlong)this + 0x28),local_38)
      ;
      fVar10 = (pTVar7->M).M[1][0];
      fVar11 = (pTVar7->M).M[0][0];
      fVar12 = fVar11 * local_48.Left + fVar10 * local_48.Top + (pTVar7->Trans).field0_0x0._s_0.X;
      fVar11 = fVar11 * local_48.Right + fVar10 * local_48.Bottom +
               (pTVar7->Trans).field0_0x0._s_0.X;
      fVar10 = fVar12;
      if (fVar11 < fVar12) {
        fVar10 = fVar11;
        fVar11 = fVar12;
      }
      *(float *)(*(longlong *)this + 0x48) = fVar10;
      *(float *)(*(longlong *)this + 0x4c) = fVar11;
      fVar10 = __real_bf000000;
      lVar8 = *(longlong *)this;
      if (((int)((int)ROUND((*(float *)(lVar8 + 0x48) + *(float *)(lVar8 + 0x48)) - __real_3f000000)
                & 0xfffffffeU) < 1) || (*(char *)(lVar8 + 0x5c) != '\x02')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      fVar11 = __real_bf000000 - (*(float *)(lVar8 + 0x4c) + *(float *)(lVar8 + 0x4c));
      iVar5 = FShapedGlyphSequence::GetMeasuredWidth
                        ((FShapedGlyphSequence *)**(undefined8 **)((longlong)this + 0x10));
      lVar8 = *(longlong *)this;
      if ((-((int)ROUND(fVar11) >> 1) < iVar5) && (*(char *)(lVar8 + 0x5c) == '\x01')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (*(char *)(lVar8 + 0x5d) == '\x03') {
        if ((int)((int)ROUND((*(float *)(lVar8 + 0x48) + *(float *)(lVar8 + 0x48)) - __real_3f000000
                            ) & 0xfffffffeU) < 1) {
          fVar11 = *(float *)(lVar8 + 0x4c);
          iVar5 = FShapedGlyphSequence::GetMeasuredWidth
                            ((FShapedGlyphSequence *)**(undefined8 **)((longlong)this + 0x10));
          lVar8 = *(longlong *)this;
          if (iVar5 <= -((int)ROUND(fVar10 - (fVar11 + fVar11)) >> 1)) goto LAB_1424f6a66;
        }
        bVar3 = true;
      }
      else {
LAB_1424f6a66:
        bVar3 = false;
      }
      if ((((bVar4) || (bVar2)) || (bVar3)) ||
         (*(char *)(*(longlong *)((longlong)this + 8) + 0x8b) != '\0')) {
        if (**(longlong **)((longlong)this + 0x18) == 0) {
          *(byte *)(lVar8 + 0x5e) = *(byte *)(lVar8 + 0x5e) | 1;
        }
      }
      else {
        *(undefined1 *)(lVar8 + 0x5c) = 0;
      }
      goto LAB_1424f6aaf;
    }
  }
  *(undefined1 *)(*(longlong *)this + 0x5c) = 0;
LAB_1424f6aaf:
  iVar5 = FSlateElementBatcher::BuildShapedTextSequence<0>
                    (*(FSlateElementBatcher **)((longlong)this + 0x20),
                     *(FShapedTextBuildContext **)this);
  return iVar5;
}

// operator() @ 1424f6ad0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
`FSlateElementBatcher::AddTextElement<1>'::__l2::<lambda_1>::operator()
          (void *this,FFontOutlineSettings *param_1,FColor *param_2,UObject *param_3,int param_4,
          float param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  wchar_t _C;
  int iVar3;
  uint uVar4;
  FSlateElementBatcher *this_00;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar5;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FFreeTypeKerningCache *pFVar8;
  float *pfVar9;
  longlong lVar10;
  code *pcVar11;
  FSharedReferencer<1> FVar12;
  undefined4 uVar13;
  bool bVar14;
  ESlatePostRT EVar15;
  schar sVar16;
  ushort uVar17;
  int iVar18;
  uint uVar19;
  FCharacterList *this_01;
  FCharacterEntry *pFVar20;
  ISlateFontTexture *pIVar21;
  longlong *plVar22;
  FSlateShaderResource *pFVar23;
  FSlateRenderBatch *this_02;
  FSlateClippingState *pFVar24;
  ESlateShader EVar25;
  wchar_t *pwVar26;
  int iVar27;
  longlong lVar28;
  FColor_u_0 FVar29;
  FColor *pFVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_2a0;
  float local_29c;
  float local_298;
  uint local_294;
  uint local_290;
  int local_28c;
  FCharacterEntry local_278;
  undefined4 local_238 [4];
  float local_228;
  FSlateDrawElement *local_218;
  FCharacterList *local_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  FColor_u_0 local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  FColor_u_0 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  FColor_u_0 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined1 local_178 [16];
  FSlateVertex local_168;
  undefined1 local_138 [16];
  TVector4<float>_u_0 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  FFreeTypeKerningCache *local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  
  this_01 = FSlateFontCache::GetCharacterList
                      (*(FSlateFontCache **)this,
                       (FSlateFontInfo *)(*(longlong *)((longlong)this + 8) + 0x58),
                       **(float **)((longlong)this + 0x10),param_1);
  local_210 = this_01;
  uVar17 = FCharacterList::GetMaxHeight(this_01);
  fVar40 = (float)uVar17;
  if (fVar40 != 0.0) {
    iVar3 = param_1->OutlineSize;
    FVar29._s_0 = (FColor_u_0_s_0)(param_2->field0_0x0).Bits;
    plVar22 = (longlong *)0x0;
    this_02 = (FSlateRenderBatch *)0x0;
    auVar33 = ZEXT816(0);
    auVar34 = ZEXT816(0);
    fVar37 = 0.0;
    local_278.Character = L'\0';
    local_278.GlyphIndex = 0;
    local_278.FontData = (FFontData *)0x0;
    local_278.KerningCache.Object = (FFreeTypeKerningCache *)0x0;
    local_278.KerningCache.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_278.FontScale = 0.0;
    local_278.BitmapRenderScale = 0.0;
    local_278.StartU = 0;
    local_278.StartV = 0;
    local_278.USize = 0;
    local_278.VSize = 0;
    local_278.VerticalOffset = 0;
    local_278.HorizontalOffset = 0;
    local_278.GlobalDescender = 0;
    local_278.XAdvance = 0;
    local_278.TextureIndex = '\0';
    local_278.FallbackLevel = FF_Max;
    local_278.HasKerning = false;
    local_278.SupportsOutline = false;
    local_278.Valid = false;
    uVar4 = **(uint **)((longlong)this + 0x18);
    local_29c = 0.0;
    local_298 = 0.0;
    bVar2 = 0;
    local_294 = 1;
    local_290 = 0;
    if (uVar4 != 0) {
      auVar35 = ZEXT416((uint)__real_3f800000);
      iVar27 = uVar4 * 6;
      local_28c = uVar4 * 4;
      fVar39 = 0.0;
      local_2a0 = 0.0;
      do {
        fVar44 = 0.0;
        if (*(int *)(*(longlong *)((longlong)this + 8) + 0xc0) == 0) {
          pwVar26 = L"";
        }
        else {
          pwVar26 = *(wchar_t **)(*(longlong *)((longlong)this + 8) + 0xb8);
        }
        _C = pwVar26[local_290];
        auVar32._4_12_ = auVar33._4_12_;
        if (_C == L'\0') {
          bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<3580957931119576360>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                              ,0x528,"CurrentChar != \'\\0\'");
          if (bVar14) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
LAB_1424f6cba:
          pFVar20 = FCharacterList::GetCharacter
                              (this_01,_C,
                               *(EFontFallback *)(*(longlong *)((longlong)this + 8) + 0xac));
          if ((pFVar20->Valid != false) &&
             ((plVar22 == (longlong *)0x0 || (pFVar20->TextureIndex != bVar2)))) {
            bVar2 = pFVar20->TextureIndex;
            pIVar21 = FSlateFontCache::GetFontTexture(*(FSlateFontCache **)this,(uint)bVar2);
            if (pIVar21 == (ISlateFontTexture *)0x0) {
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SlateFontTexture",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                  ,0x540,L"");
              if (bVar14) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            plVar22 = (longlong *)(**(code **)((longlong)*pIVar21 + 8))(pIVar21);
            if (plVar22 == (longlong *)0x0) {
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FontAtlasTexture",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                  ,0x543,L"");
              if (bVar14) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pFVar23 = (FSlateShaderResource *)
                      (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x20))
                                (*(longlong **)((longlong)this + 0x20),(uint)bVar2,plVar22,
                                 *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x60));
            if (pFVar23 == (FSlateShaderResource *)0x0) {
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FontShaderResource",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                  ,0x546,L"");
              if (bVar14) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            iVar18 = (**(code **)((longlong)*pIVar21 + 0x18))(pIVar21);
            pFVar30 = param_2;
            if (iVar18 == 1) {
              pFVar30 = &FColor::White;
            }
            FVar29._s_0 = *(FColor_u_0_s_0 *)pFVar30;
            if (iVar18 == 0) {
              EVar25 = GrayscaleFont;
            }
            else {
              if (iVar18 != 1) {
                if (iVar18 == 2) {
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!\"Enclosing block should never be called\"",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                      ,0x556,L"");
                  if (bVar14) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  if ((iVar3 < 1) || (param_1->bMiteredCorners != false)) {
                    EVar25 = MsdfFont;
                  }
                  else {
                    EVar25 = SdfFont;
                  }
                  goto LAB_1424f6e63;
                }
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                    ,0x55b,L"");
                if (bVar14) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              EVar25 = ColorFont;
            }
LAB_1424f6e63:
            local_218 = *(FSlateDrawElement **)((longlong)this + 8);
            this_00 = *(FSlateElementBatcher **)((longlong)this + 0x28);
            local_128._0_8_ = 0;
            local_128._8_8_ = 0;
            local_118 = 0;
            uStack_110 = 0;
            local_108 = 0;
            uStack_100 = 0;
            if (this_00->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
              this_02 = FSlateBatchData::AddRenderBatch
                                  (this_00->BatchData,param_4,(FShaderParams *)&local_128._s_0,
                                   pFVar23,TriangleList,EVar25,
                                   **(ESlateDrawEffect **)((longlong)this + 0x30),None,
                                   local_218->SceneIndex);
            }
            else {
              this_02 = FSlateCachedElementList::AddRenderBatch
                                  (this_00->CurrentCachedElementList,param_4,
                                   (FShaderParams *)&local_128._s_0,pFVar23,TriangleList,EVar25,
                                   **(ESlateDrawEffect **)((longlong)this + 0x30),None,
                                   local_218->SceneIndex);
            }
            pFVar24 = FSlateElementBatcher::ResolveClippingState(this_00,local_218);
            this_02->ClippingState = pFVar24;
            if (pFVar23 != (FSlateShaderResource *)0x0) {
              EVar15 = (**(code **)(pFVar23->_padding_ + 0x20))(pFVar23);
              this_02->CachedUsedPostBuffers = EVar15;
              this_00->UsedSlatePostBuffers = this_00->UsedSlatePostBuffers | EVar15;
            }
            pTVar5 = this_02->SourceVertices;
            uVar19 = local_28c + pTVar5->ArrayNum;
            if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
            }
            if (pTVar5->ArrayMax < (int)uVar19) {
              UE::Core::Private::
              ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                        (0x2c,4,uVar19,&pTVar5->AllocatorInstance,pTVar5->ArrayNum,&pTVar5->ArrayMax
                        );
            }
            if (uVar4 < 0x1400) {
              if (*(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x9d4c) <
                  `public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<1>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                  ::__l63::_thread_safe_static_guard_0__) {
                _Init_thread_header(&`public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<1>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                                     ::__l63::_thread_safe_static_guard_0__);
                if (`public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<1>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                    ::__l63::_thread_safe_static_guard_0__ == -1) {
                  local_238[0] = 0x1400;
                  ``FSlateElementBatcher::AddTextElement<1>'::__l2::<lambda_1>::operator()'::__l63::
                  <lambda_1>::operator()
                            (local_238,
                             &`public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<1>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                              ::__l63::DefaultTextIndiciesArray);
                  atexit(``FSlateElementBatcher::AddTextElement<1>'::__l2::<lambda_1>::operator()'::
                         __l63::_dynamic_atexit_destructor_for__DefaultTextIndiciesArray__);
                  _Init_thread_footer(&`public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<1>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                                       ::__l63::_thread_safe_static_guard_0__);
                }
              }
              this_02->SourceIndices =
                   &`public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<1>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                    ::__l63::DefaultTextIndiciesArray;
              this_02->NumIndices = 0;
              this_02->IndexOffset = 0;
            }
            else {
              pTVar6 = this_02->SourceIndices;
              uVar19 = iVar27 + pTVar6->ArrayNum;
              if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
              }
              if (pTVar6->ArrayMax < (int)uVar19) {
                UE::Core::Private::
                ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (4,4,uVar19,&pTVar6->AllocatorInstance,pTVar6->ArrayNum,&pTVar6->ArrayMax)
                ;
              }
            }
            uVar19 = (**(code **)*plVar22)(plVar22);
            auVar34._4_12_ = auVar35._4_12_;
            auVar34._0_4_ = auVar35._0_4_ / (float)uVar19;
            uVar19 = (**(code **)(*plVar22 + 8))(plVar22);
            fVar37 = auVar35._0_4_ / (float)uVar19;
            local_29c = auVar34._0_4_;
            local_298 = fVar37;
          }
          if ((pFVar20->Valid == false) || ((0 < iVar3 && (pFVar20->SupportsOutline == false)))) {
LAB_1424f704e:
            bVar14 = true;
LAB_1424f7051:
            iVar18 = 0;
          }
          else {
            iVar18 = iswspace(_C);
            if (iVar18 != 0) goto LAB_1424f704e;
            bVar14 = false;
            if (local_278.Valid == false) goto LAB_1424f7051;
            sVar16 = FCharacterList::GetKerning(local_210,&local_278,pFVar20);
            iVar18 = (int)sVar16;
          }
          FVar12.ReferenceController =
               local_278.KerningCache.SharedReferenceCount.ReferenceController;
          local_278.Character = pFVar20->Character;
          local_278.GlyphIndex = pFVar20->GlyphIndex;
          local_278.FontData = pFVar20->FontData;
          pTVar7 = (pFVar20->KerningCache).SharedReferenceCount.ReferenceController;
          pFVar8 = (pFVar20->KerningCache).Object;
          auVar32._0_4_ = auVar33._0_4_ + (float)iVar18;
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_f8 = local_278.KerningCache.Object;
          pTStack_f0 = local_278.KerningCache.SharedReferenceCount.ReferenceController;
          local_278.KerningCache.Object = pFVar8;
          local_278.KerningCache.SharedReferenceCount.ReferenceController = pTVar7;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar12.ReferenceController);
          local_278.FontScale = pFVar20->FontScale;
          local_278.BitmapRenderScale = pFVar20->BitmapRenderScale;
          local_278.StartU = pFVar20->StartU;
          local_278.StartV = pFVar20->StartV;
          local_278.USize = pFVar20->USize;
          local_278.VSize = pFVar20->VSize;
          local_278.VerticalOffset = pFVar20->VerticalOffset;
          local_278.HorizontalOffset = pFVar20->HorizontalOffset;
          local_278.GlobalDescender = pFVar20->GlobalDescender;
          local_278.XAdvance = pFVar20->XAdvance;
          local_278.TextureIndex = pFVar20->TextureIndex;
          local_278.FallbackLevel = pFVar20->FallbackLevel;
          local_278.HasKerning = pFVar20->HasKerning;
          local_278.SupportsOutline = pFVar20->SupportsOutline;
          local_278.Valid = pFVar20->Valid;
          if (!bVar14) {
            fVar46 = pFVar20->BitmapRenderScale;
            uVar19 = this_02->NumVertices;
            fVar42 = (float)(int)pFVar20->HorizontalOffset + auVar32._0_4_ + param_5;
            fVar36 = ((float)(int)pFVar20->GlobalDescender + fVar40) / fVar46 +
                     (fVar39 - (float)(int)pFVar20->VerticalOffset);
            local_138 = ZEXT416((uint)((float)pFVar20->StartU * auVar34._0_4_));
            local_228 = (float)pFVar20->VSize;
            fVar37 = (float)pFVar20->StartV * fVar37;
            fVar38 = 0.0;
            local_178 = ZEXT416((uint)(float)pFVar20->USize);
            fVar41 = local_228 * fVar46 + fVar36;
            fVar43 = (float)pFVar20->USize * fVar46 + fVar42;
            fVar39 = fVar44;
            fVar46 = fVar44;
            if (param_3 != (UObject *)0x0) {
              fVar44 = (float)local_290 * (__real_3f800000 / (float)uVar4);
              fVar46 = (float)(local_290 + 1) * (__real_3f800000 / (float)uVar4);
              fVar39 = __real_3f800000 / ((float)local_294 * fVar40);
              fVar38 = fVar39 * fVar41;
              fVar39 = fVar39 * fVar36;
            }
            pfVar9 = *(float **)((longlong)this + 0x38);
            pTVar5 = this_02->SourceVertices;
            local_1f8 = 0;
            uStack_1e4 = 0;
            auVar34 = roundps(auVar34,ZEXT416((uint)(fVar36 * pfVar9[2] + pfVar9[4] +
                                                    fVar42 * *pfVar9 + __real_3f000000)),1);
            auVar33 = roundps(auVar32,ZEXT416((uint)(fVar42 * pfVar9[1] + pfVar9[5] +
                                                    fVar36 * pfVar9[3] + __real_3f000000)),1);
            local_1e8 = FVar29;
            iVar18 = UE::Core::Private::
                     ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                               (0x2c,4,1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,
                                &pTVar5->ArrayMax);
            local_1c8 = 0x3f800000;
            local_208 = (float)local_138._0_4_;
            lVar28 = (longlong)iVar18 * 0x2c;
            lVar10 = (this_02->SourceVertices->AllocatorInstance)._padding_;
            pfVar9 = (float *)(lVar28 + lVar10);
            *pfVar9 = (float)local_138._0_4_;
            pfVar9[1] = fVar37;
            pfVar9[2] = fVar44;
            pfVar9[3] = fVar39;
            uStack_1f0 = auVar34._0_4_;
            uStack_1ec = auVar33._0_4_;
            puVar1 = (undefined4 *)(lVar28 + 0x10 + lVar10);
            *puVar1 = (undefined4)local_1f8;
            puVar1[1] = local_1f8._4_4_;
            puVar1[2] = uStack_1f0;
            puVar1[3] = uStack_1ec;
            *(ulonglong *)(lVar28 + 0x20 + lVar10) = CONCAT44(uStack_1e4,local_1e8.Bits);
            *(undefined4 *)(lVar28 + 0x28 + lVar10) = local_1e0;
            this_02->NumVertices = this_02->NumVertices + 1;
            pfVar9 = *(float **)((longlong)this + 0x38);
            local_178._0_4_ = (float)local_178._0_4_ * local_29c + (float)local_138._0_4_;
            auVar35 = roundps(auVar34,ZEXT416((uint)(fVar36 * pfVar9[2] + pfVar9[4] +
                                                    fVar43 * *pfVar9 + __real_3f000000)),1);
            auVar34 = roundps(auVar33,ZEXT416((uint)(fVar43 * pfVar9[1] + pfVar9[5] +
                                                    fVar36 * pfVar9[3] + __real_3f000000)),1);
            pTVar5 = this_02->SourceVertices;
            uStack_1b4 = 0;
            fStack_204 = fVar37;
            fStack_200 = fVar44;
            fStack_1fc = fVar39;
            local_1b8 = FVar29;
            iVar18 = UE::Core::Private::
                     ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                               (0x2c,4,1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,
                                &pTVar5->ArrayMax);
            fVar36 = __real_3f000000;
            uVar13 = local_178._0_4_;
            local_168.MaterialTexCoords.field0_0x0._s_0.X = 0.0;
            local_168.MaterialTexCoords.field0_0x0._s_0.Y = 1.0;
            local_1d8 = local_178._0_4_;
            lVar28 = (longlong)iVar18 * 0x2c;
            fVar45 = local_228 * local_298 + fVar37;
            lVar10 = (this_02->SourceVertices->AllocatorInstance)._padding_;
            local_168.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
            puVar1 = (undefined4 *)(lVar28 + lVar10);
            *puVar1 = local_178._0_4_;
            puVar1[1] = fVar37;
            puVar1[2] = fVar46;
            puVar1[3] = fVar39;
            uStack_1c0 = auVar35._0_4_;
            uStack_1bc = auVar34._0_4_;
            puVar1 = (undefined4 *)(lVar28 + 0x10 + lVar10);
            *puVar1 = (undefined4)local_1c8;
            puVar1[1] = local_1c8._4_4_;
            puVar1[2] = uStack_1c0;
            puVar1[3] = uStack_1bc;
            *(ulonglong *)(lVar28 + 0x20 + lVar10) = CONCAT44(uStack_1b4,local_1b8.Bits);
            *(undefined4 *)(lVar28 + 0x28 + lVar10) = local_1b0;
            this_02->NumVertices = this_02->NumVertices + 1;
            pfVar9 = *(float **)((longlong)this + 0x38);
            local_168.TexCoords[0] = (float)local_138._0_4_;
            fVar31 = fVar42 * *pfVar9 + fVar36;
            auVar33 = roundps(ZEXT416((uint)fVar31),
                              ZEXT416((uint)(fVar41 * pfVar9[2] + pfVar9[4] + fVar31)),1);
            local_168.Position.field0_0x0._s_0.X = (float)auVar33._0_4_;
            fVar31 = fVar41 * pfVar9[3] + fVar36;
            auVar33 = roundps(ZEXT416((uint)fVar31),
                              ZEXT416((uint)(fVar42 * pfVar9[1] + pfVar9[5] + fVar31)),1);
            local_168.Position.field0_0x0._s_0.Y = (float)auVar33._0_4_;
            fStack_1d4 = fVar37;
            fStack_1d0 = fVar46;
            fStack_1cc = fVar39;
            local_168.TexCoords[1] = fVar45;
            local_168.TexCoords[2] = fVar44;
            local_168.TexCoords[3] = fVar38;
            local_168.Color.field0_0x0 = FVar29;
            FSlateRenderBatch::AddVertex(this_02,&local_168);
            pfVar9 = *(float **)((longlong)this + 0x38);
            local_198 = 0x3f800000;
            uStack_194 = 0x3f800000;
            pTVar5 = this_02->SourceVertices;
            uStack_184 = 0;
            auVar35 = roundps(auVar35,ZEXT416((uint)(fVar41 * pfVar9[2] + pfVar9[4] +
                                                    fVar43 * *pfVar9 + fVar36)),1);
            auVar33 = roundps(auVar34,ZEXT416((uint)(fVar43 * pfVar9[1] + pfVar9[5] +
                                                    fVar41 * pfVar9[3] + fVar36)),1);
            local_188 = FVar29;
            iVar18 = UE::Core::Private::
                     ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                               (0x2c,4,1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,
                                &pTVar5->ArrayMax);
            lVar28 = (longlong)iVar18 * 0x2c;
            uStack_190 = auVar35._0_4_;
            lVar10 = (this_02->SourceVertices->AllocatorInstance)._padding_;
            uStack_18c = auVar33._0_4_;
            puVar1 = (undefined4 *)(lVar28 + lVar10);
            *puVar1 = uVar13;
            puVar1[1] = fVar45;
            puVar1[2] = fVar46;
            puVar1[3] = fVar38;
            puVar1 = (undefined4 *)(lVar28 + 0x10 + lVar10);
            *puVar1 = local_198;
            puVar1[1] = uStack_194;
            puVar1[2] = uStack_190;
            puVar1[3] = uStack_18c;
            *(ulonglong *)(lVar28 + 0x20 + lVar10) = CONCAT44(uStack_184,local_188.Bits);
            *(undefined4 *)(lVar28 + 0x28 + lVar10) = local_180;
            this_02->NumVertices = this_02->NumVertices + 1;
            local_1a8 = uVar13;
            fStack_1a4 = fVar45;
            fStack_1a0 = fVar46;
            fStack_19c = fVar38;
            if (uVar4 < 0x1400) {
              this_02->NumIndices = this_02->NumIndices + 6;
            }
            else {
              FSlateRenderBatch::AddIndex(this_02,uVar19);
              FSlateRenderBatch::AddIndex(this_02,uVar19 + 1);
              FSlateRenderBatch::AddIndex(this_02,uVar19 + 2);
              FSlateRenderBatch::AddIndex(this_02,uVar19 + 1);
              FSlateRenderBatch::AddIndex(this_02,uVar19 + 3);
              FSlateRenderBatch::AddIndex(this_02,uVar19 + 2);
            }
            auVar35 = ZEXT416((uint)__real_3f800000);
            auVar32 = ZEXT416((uint)auVar32._0_4_);
            fVar39 = local_2a0;
          }
          auVar34 = ZEXT416((uint)local_29c);
          auVar33._4_12_ = auVar32._4_12_;
          auVar33._0_4_ = auVar32._0_4_ + (float)(int)pFVar20->XAdvance;
          this_01 = local_210;
          fVar37 = local_298;
        }
        else {
          if (_C != L'\n') goto LAB_1424f6cba;
          fVar39 = fVar39 + fVar40;
          local_294 = local_294 + 1;
          auVar33._0_12_ = ZEXT812(0);
          auVar33._12_4_ = 0;
          local_2a0 = fVar39;
        }
        local_28c = local_28c + -4;
        local_290 = local_290 + 1;
        iVar27 = iVar27 + -6;
      } while (local_290 < uVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.KerningCache.SharedReferenceCount.ReferenceController);
  }
  return;
}

// operator() @ 1424f7830

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
`FSlateElementBatcher::AddTextElement<0>'::__l2::<lambda_1>::operator()
          (void *this,FFontOutlineSettings *param_1,FColor *param_2,UObject *param_3,int param_4,
          float param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  wchar_t _C;
  int iVar3;
  uint uVar4;
  FSlateElementBatcher *this_00;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar5;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FFreeTypeKerningCache *pFVar8;
  float *pfVar9;
  longlong lVar10;
  code *pcVar11;
  FSharedReferencer<1> FVar12;
  undefined4 uVar13;
  bool bVar14;
  ESlatePostRT EVar15;
  schar sVar16;
  ushort uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  FCharacterList *this_01;
  FCharacterEntry *pFVar21;
  ISlateFontTexture *pIVar22;
  FSlateRenderBatch *pFVar23;
  FSlateShaderResource *pFVar24;
  FSlateRenderBatch *this_02;
  FSlateClippingState *pFVar25;
  FSlateRenderBatch *pFVar26;
  ESlateShader EVar27;
  wchar_t *pwVar28;
  int iVar29;
  longlong lVar30;
  FColor_u_0 FVar31;
  FColor *pFVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float local_290;
  float local_28c;
  uint local_288;
  uint local_284;
  float local_270;
  FCharacterEntry local_268;
  undefined4 local_228;
  float local_224;
  FSlateDrawElement *local_220;
  FCharacterList *local_218;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined8 local_200;
  float fStack_1f8;
  float fStack_1f4;
  FColor_u_0 local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 local_1d0;
  float fStack_1c8;
  float fStack_1c4;
  FColor_u_0 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  float fStack_194;
  FColor_u_0 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined1 local_178 [16];
  FSlateVertex local_168;
  undefined1 local_138 [16];
  TVector4<float>_u_0 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  FFreeTypeKerningCache *local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  
  this_01 = FSlateFontCache::GetCharacterList
                      (*(FSlateFontCache **)this,
                       (FSlateFontInfo *)(*(longlong *)((longlong)this + 8) + 0x58),
                       **(float **)((longlong)this + 0x10),param_1);
  local_218 = this_01;
  uVar17 = FCharacterList::GetMaxHeight(this_01);
  fVar44 = (float)uVar17;
  if (fVar44 != 0.0) {
    iVar3 = param_1->OutlineSize;
    pFVar26 = (FSlateRenderBatch *)0x0;
    FVar31._s_0 = (FColor_u_0_s_0)(param_2->field0_0x0).Bits;
    fVar34 = 0.0;
    fVar37 = 0.0;
    fVar40 = 0.0;
    local_268.Character = L'\0';
    local_268.GlyphIndex = 0;
    local_268.FontData = (FFontData *)0x0;
    local_268.KerningCache.Object = (FFreeTypeKerningCache *)0x0;
    local_268.KerningCache.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_268.FontScale = 0.0;
    local_268.BitmapRenderScale = 0.0;
    local_268.StartU = 0;
    local_268.StartV = 0;
    local_268.USize = 0;
    local_268.VSize = 0;
    local_268.VerticalOffset = 0;
    local_268.HorizontalOffset = 0;
    local_268.GlobalDescender = 0;
    local_268.XAdvance = 0;
    local_268.TextureIndex = '\0';
    local_268.FallbackLevel = FF_Max;
    local_268.HasKerning = false;
    local_268.SupportsOutline = false;
    local_268.Valid = false;
    uVar4 = **(uint **)((longlong)this + 0x18);
    local_284 = 0;
    local_28c = 0.0;
    local_270 = 0.0;
    bVar2 = 0;
    local_288 = 1;
    if (uVar4 != 0) {
      iVar29 = uVar4 * 6;
      iVar33 = uVar4 * 4;
      fVar46 = 0.0;
      local_290 = 0.0;
      pFVar23 = pFVar26;
      this_02 = pFVar26;
      fVar47 = __real_3f800000;
      do {
        fVar41 = 0.0;
        if (*(int *)(*(longlong *)((longlong)this + 8) + 0xc0) == 0) {
          pwVar28 = L"";
        }
        else {
          pwVar28 = *(wchar_t **)(*(longlong *)((longlong)this + 8) + 0xb8);
        }
        _C = pwVar28[(longlong)pFVar26];
        if (_C == L'\0') {
          bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<3580957931119576360>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                              ,0x528,"CurrentChar != \'\\0\'");
          if (bVar14) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
LAB_1424f7a28:
          pFVar21 = FCharacterList::GetCharacter
                              (this_01,_C,
                               *(EFontFallback *)(*(longlong *)((longlong)this + 8) + 0xac));
          if ((pFVar21->Valid != false) &&
             ((pFVar23 == (FSlateRenderBatch *)0x0 || (pFVar21->TextureIndex != bVar2)))) {
            bVar2 = pFVar21->TextureIndex;
            pIVar22 = FSlateFontCache::GetFontTexture(*(FSlateFontCache **)this,(uint)bVar2);
            if ((pIVar22 == (ISlateFontTexture *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SlateFontTexture",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                    ,0x540,L""), bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar23 = (FSlateRenderBatch *)(**(code **)((longlong)*pIVar22 + 8))(pIVar22);
            if ((pFVar23 == (FSlateRenderBatch *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FontAtlasTexture",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                    ,0x543,L""), bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar24 = (FSlateShaderResource *)
                      (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x20))
                                (*(longlong **)((longlong)this + 0x20),(uint)bVar2,pFVar23,
                                 *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x60));
            if ((pFVar24 == (FSlateShaderResource *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FontShaderResource",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                    ,0x546,L""), bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar18 = (**(code **)((longlong)*pIVar22 + 0x18))(pIVar22);
            pFVar32 = param_2;
            if (iVar18 == 1) {
              pFVar32 = &FColor::White;
            }
            FVar31._s_0 = *(FColor_u_0_s_0 *)pFVar32;
            if (iVar18 == 0) {
              EVar27 = GrayscaleFont;
            }
            else {
              if (iVar18 != 1) {
                if (iVar18 == 2) {
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!\"Enclosing block should never be called\"",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                      ,0x556,L"");
                  if (bVar14) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  if ((iVar3 < 1) || (param_1->bMiteredCorners != false)) {
                    EVar27 = MsdfFont;
                  }
                  else {
                    EVar27 = SdfFont;
                  }
                  goto LAB_1424f7bd1;
                }
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                    ,0x55b,L"");
                if (bVar14) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              EVar27 = ColorFont;
            }
LAB_1424f7bd1:
            local_220 = *(FSlateDrawElement **)((longlong)this + 8);
            this_00 = *(FSlateElementBatcher **)((longlong)this + 0x28);
            local_128._0_8_ = 0;
            local_128._8_8_ = 0;
            local_118 = 0;
            uStack_110 = 0;
            local_108 = 0;
            uStack_100 = 0;
            if (this_00->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
              this_02 = FSlateBatchData::AddRenderBatch
                                  (this_00->BatchData,param_4,(FShaderParams *)&local_128._s_0,
                                   pFVar24,TriangleList,EVar27,
                                   **(ESlateDrawEffect **)((longlong)this + 0x30),None,
                                   local_220->SceneIndex);
            }
            else {
              this_02 = FSlateCachedElementList::AddRenderBatch
                                  (this_00->CurrentCachedElementList,param_4,
                                   (FShaderParams *)&local_128._s_0,pFVar24,TriangleList,EVar27,
                                   **(ESlateDrawEffect **)((longlong)this + 0x30),None,
                                   local_220->SceneIndex);
            }
            pFVar25 = FSlateElementBatcher::ResolveClippingState(this_00,local_220);
            this_02->ClippingState = pFVar25;
            if (pFVar24 != (FSlateShaderResource *)0x0) {
              EVar15 = (**(code **)(pFVar24->_padding_ + 0x20))(pFVar24);
              this_02->CachedUsedPostBuffers = EVar15;
              this_00->UsedSlatePostBuffers = this_00->UsedSlatePostBuffers | EVar15;
            }
            pTVar5 = this_02->SourceVertices;
            uVar19 = iVar33 + pTVar5->ArrayNum;
            if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
            }
            if (pTVar5->ArrayMax < (int)uVar19) {
              UE::Core::Private::
              ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                        (0x2c,4,uVar19,&pTVar5->AllocatorInstance,pTVar5->ArrayNum,&pTVar5->ArrayMax
                        );
            }
            if (uVar4 < 0x1400) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) <
                   `public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<0>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                   ::__l63::_thread_safe_static_guard_0__) &&
                 (_Init_thread_header(&`public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<0>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                                       ::__l63::_thread_safe_static_guard_0__),
                 `public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<0>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                 ::__l63::_thread_safe_static_guard_0__ == -1)) {
                local_228 = 0x1400;
                ``FSlateElementBatcher::AddTextElement<0>'::__l2::<lambda_1>::operator()'::__l63::
                <lambda_1>::operator()
                          (&local_228,
                           &`public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<0>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                            ::__l63::DefaultTextIndiciesArray);
                atexit(``FSlateElementBatcher::AddTextElement<0>'::__l2::<lambda_1>::operator()'::
                       __l63::_dynamic_atexit_destructor_for__DefaultTextIndiciesArray__);
                _Init_thread_footer(&`public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<0>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                                     ::__l63::_thread_safe_static_guard_0__);
              }
              this_02->SourceIndices =
                   &`public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<0>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                    ::__l63::DefaultTextIndiciesArray;
              this_02->NumIndices = 0;
              this_02->IndexOffset = 0;
            }
            else {
              pTVar6 = this_02->SourceIndices;
              uVar19 = iVar29 + pTVar6->ArrayNum;
              if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
              }
              if (pTVar6->ArrayMax < (int)uVar19) {
                UE::Core::Private::
                ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (4,4,uVar19,&pTVar6->AllocatorInstance,pTVar6->ArrayNum,&pTVar6->ArrayMax)
                ;
              }
            }
            uVar19 = (*(code *)**(undefined8 **)&(pFVar23->ShaderParams).PixelParams.field0_0x0)
                               (pFVar23);
            fVar34 = fVar47 / (float)uVar19;
            uVar19 = (**(code **)(*(longlong *)&(pFVar23->ShaderParams).PixelParams.field0_0x0 + 8))
                               (pFVar23);
            fVar37 = fVar47 / (float)uVar19;
            local_28c = fVar34;
            local_270 = fVar37;
          }
          if ((pFVar21->Valid == false) ||
             (((0 < iVar3 && (pFVar21->SupportsOutline == false)) ||
              (iVar18 = iswspace(_C), iVar18 != 0)))) {
            bVar14 = true;
LAB_1424f7dbd:
            iVar18 = 0;
          }
          else {
            bVar14 = false;
            if (local_268.Valid == false) goto LAB_1424f7dbd;
            sVar16 = FCharacterList::GetKerning(local_218,&local_268,pFVar21);
            iVar18 = (int)sVar16;
          }
          FVar12.ReferenceController =
               local_268.KerningCache.SharedReferenceCount.ReferenceController;
          local_268.Character = pFVar21->Character;
          local_268.GlyphIndex = pFVar21->GlyphIndex;
          local_268.FontData = pFVar21->FontData;
          pTVar7 = (pFVar21->KerningCache).SharedReferenceCount.ReferenceController;
          pFVar8 = (pFVar21->KerningCache).Object;
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_f8 = local_268.KerningCache.Object;
          pTStack_f0 = local_268.KerningCache.SharedReferenceCount.ReferenceController;
          local_268.KerningCache.Object = pFVar8;
          local_268.KerningCache.SharedReferenceCount.ReferenceController = pTVar7;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar12.ReferenceController);
          local_268.FontScale = pFVar21->FontScale;
          local_268.BitmapRenderScale = pFVar21->BitmapRenderScale;
          local_268.StartU = pFVar21->StartU;
          local_268.StartV = pFVar21->StartV;
          local_268.USize = pFVar21->USize;
          local_268.VSize = pFVar21->VSize;
          local_268.VerticalOffset = pFVar21->VerticalOffset;
          local_268.HorizontalOffset = pFVar21->HorizontalOffset;
          local_268.GlobalDescender = pFVar21->GlobalDescender;
          local_268.XAdvance = pFVar21->XAdvance;
          local_268.TextureIndex = pFVar21->TextureIndex;
          local_268.FallbackLevel = pFVar21->FallbackLevel;
          local_268.HasKerning = pFVar21->HasKerning;
          local_268.SupportsOutline = pFVar21->SupportsOutline;
          local_268.Valid = pFVar21->Valid;
          if (!bVar14) {
            fVar47 = pFVar21->BitmapRenderScale;
            uVar19 = this_02->NumVertices;
            fVar43 = (float)(int)pFVar21->HorizontalOffset + fVar40 + (float)iVar18 + param_5;
            fVar39 = ((float)(int)pFVar21->GlobalDescender + fVar44) / fVar47 +
                     (fVar46 - (float)(int)pFVar21->VerticalOffset);
            local_138 = ZEXT416((uint)((float)pFVar21->StartU * fVar34));
            local_224 = (float)pFVar21->VSize;
            local_178 = ZEXT416((uint)(float)pFVar21->USize);
            fVar37 = (float)pFVar21->StartV * fVar37;
            fVar45 = (float)pFVar21->USize * fVar47 + fVar43;
            fVar42 = local_224 * fVar47 + fVar39;
            fVar34 = fVar41;
            fVar46 = fVar41;
            fVar47 = fVar41;
            if (param_3 != (UObject *)0x0) {
              fVar34 = (float)local_284 * (__real_3f800000 / (float)uVar4);
              fVar46 = __real_3f800000 / ((float)local_288 * fVar44);
              fVar47 = (float)(local_284 + 1) * (__real_3f800000 / (float)uVar4);
              fVar41 = fVar46 * fVar42;
              fVar46 = fVar46 * fVar39;
            }
            pfVar9 = *(float **)((longlong)this + 0x38);
            pTVar5 = this_02->SourceVertices;
            local_200 = 0;
            uStack_1ec = 0;
            fVar38 = fVar39 * pfVar9[2] + fVar43 * *pfVar9 + pfVar9[4];
            fVar35 = fVar39 * pfVar9[3] + fVar43 * pfVar9[1] + pfVar9[5];
            local_1f0 = FVar31;
            iVar20 = UE::Core::Private::
                     ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                               (0x2c,4,1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,
                                &pTVar5->ArrayMax);
            local_1d0 = 0x3f800000;
            local_210 = (float)local_138._0_4_;
            uStack_1bc = 0;
            lVar30 = (longlong)iVar20 * 0x2c;
            lVar10 = (this_02->SourceVertices->AllocatorInstance)._padding_;
            pfVar9 = (float *)(lVar30 + lVar10);
            *pfVar9 = (float)local_138._0_4_;
            pfVar9[1] = fVar37;
            pfVar9[2] = fVar34;
            pfVar9[3] = fVar46;
            puVar1 = (undefined4 *)(lVar30 + 0x10 + lVar10);
            *puVar1 = (undefined4)local_200;
            puVar1[1] = local_200._4_4_;
            puVar1[2] = fVar38;
            puVar1[3] = fVar35;
            *(ulonglong *)(lVar30 + 0x20 + lVar10) = CONCAT44(uStack_1ec,local_1f0.Bits);
            *(undefined4 *)(lVar30 + 0x28 + lVar10) = local_1e8;
            this_02->NumVertices = this_02->NumVertices + 1;
            pfVar9 = *(float **)((longlong)this + 0x38);
            pTVar5 = this_02->SourceVertices;
            local_178._0_4_ = (float)local_178._0_4_ * local_28c + (float)local_138._0_4_;
            fVar36 = fVar45 * pfVar9[1] + fVar39 * pfVar9[3] + pfVar9[5];
            fVar39 = fVar39 * pfVar9[2] + fVar45 * *pfVar9 + pfVar9[4];
            fStack_20c = fVar37;
            fStack_208 = fVar34;
            fStack_204 = fVar46;
            fStack_1f8 = fVar38;
            fStack_1f4 = fVar35;
            local_1c0 = FVar31;
            iVar20 = UE::Core::Private::
                     ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                               (0x2c,4,1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,
                                &pTVar5->ArrayMax);
            uVar13 = local_178._0_4_;
            local_168.MaterialTexCoords.field0_0x0._s_0.X = 0.0;
            local_1e0 = local_178._0_4_;
            local_168.MaterialTexCoords.field0_0x0._s_0.Y = 1.0;
            lVar30 = (longlong)iVar20 * 0x2c;
            lVar10 = (this_02->SourceVertices->AllocatorInstance)._padding_;
            local_168.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
            puVar1 = (undefined4 *)(lVar30 + lVar10);
            *puVar1 = local_178._0_4_;
            puVar1[1] = fVar37;
            puVar1[2] = fVar47;
            puVar1[3] = fVar46;
            puVar1 = (undefined4 *)(lVar30 + 0x10 + lVar10);
            *puVar1 = (undefined4)local_1d0;
            puVar1[1] = local_1d0._4_4_;
            puVar1[2] = fVar39;
            puVar1[3] = fVar36;
            fVar35 = local_224 * local_270 + fVar37;
            *(ulonglong *)(lVar30 + 0x20 + lVar10) = CONCAT44(uStack_1bc,local_1c0.Bits);
            *(undefined4 *)(lVar30 + 0x28 + lVar10) = local_1b8;
            this_02->NumVertices = this_02->NumVertices + 1;
            pfVar9 = *(float **)((longlong)this + 0x38);
            local_168.TexCoords[0] = (float)local_138._0_4_;
            local_168.Position.field0_0x0._s_0.X = fVar42 * pfVar9[2] + fVar43 * *pfVar9 + pfVar9[4]
            ;
            local_168.Position.field0_0x0._s_0.Y =
                 fVar42 * pfVar9[3] + fVar43 * pfVar9[1] + pfVar9[5];
            fStack_1dc = fVar37;
            fStack_1d8 = fVar47;
            fStack_1d4 = fVar46;
            fStack_1c8 = fVar39;
            fStack_1c4 = fVar36;
            local_168.TexCoords[1] = fVar35;
            local_168.TexCoords[2] = fVar34;
            local_168.TexCoords[3] = fVar41;
            local_168.Color.field0_0x0 = FVar31;
            FSlateRenderBatch::AddVertex(this_02,&local_168);
            pfVar9 = *(float **)((longlong)this + 0x38);
            pTVar5 = this_02->SourceVertices;
            local_1a0 = 0x3f800000;
            uStack_19c = 0x3f800000;
            uStack_18c = 0;
            fVar34 = fVar42 * pfVar9[2] + fVar45 * *pfVar9 + pfVar9[4];
            fVar39 = fVar42 * pfVar9[3] + fVar45 * pfVar9[1] + pfVar9[5];
            local_190 = FVar31;
            iVar20 = UE::Core::Private::
                     ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                               (0x2c,4,1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,
                                &pTVar5->ArrayMax);
            lVar30 = (longlong)iVar20 * 0x2c;
            lVar10 = (this_02->SourceVertices->AllocatorInstance)._padding_;
            puVar1 = (undefined4 *)(lVar30 + lVar10);
            *puVar1 = uVar13;
            puVar1[1] = fVar35;
            puVar1[2] = fVar47;
            puVar1[3] = fVar41;
            puVar1 = (undefined4 *)(lVar30 + 0x10 + lVar10);
            *puVar1 = local_1a0;
            puVar1[1] = uStack_19c;
            puVar1[2] = fVar34;
            puVar1[3] = fVar39;
            *(ulonglong *)(lVar30 + 0x20 + lVar10) = CONCAT44(uStack_18c,local_190.Bits);
            *(undefined4 *)(lVar30 + 0x28 + lVar10) = local_188;
            this_02->NumVertices = this_02->NumVertices + 1;
            local_1b0 = uVar13;
            fVar37 = local_270;
            fVar46 = local_290;
            fStack_1ac = fVar35;
            fStack_1a8 = fVar47;
            fStack_1a4 = fVar41;
            fStack_198 = fVar34;
            fStack_194 = fVar39;
            if (uVar4 < 0x1400) {
              this_02->NumIndices = this_02->NumIndices + 6;
              fVar47 = __real_3f800000;
            }
            else {
              FSlateRenderBatch::AddIndex(this_02,uVar19);
              FSlateRenderBatch::AddIndex(this_02,uVar19 + 1);
              FSlateRenderBatch::AddIndex(this_02,uVar19 + 2);
              FSlateRenderBatch::AddIndex(this_02,uVar19 + 1);
              FSlateRenderBatch::AddIndex(this_02,uVar19 + 3);
              FSlateRenderBatch::AddIndex(this_02,uVar19 + 2);
              fVar47 = __real_3f800000;
            }
          }
          fVar40 = fVar40 + (float)iVar18 + (float)(int)pFVar21->XAdvance;
          this_01 = local_218;
          fVar34 = local_28c;
        }
        else {
          if (_C != L'\n') goto LAB_1424f7a28;
          fVar46 = fVar46 + fVar44;
          local_288 = local_288 + 1;
          fVar40 = 0.0;
          local_290 = fVar46;
        }
        iVar33 = iVar33 + -4;
        local_284 = local_284 + 1;
        pFVar26 = (FSlateRenderBatch *)(ulonglong)local_284;
        iVar29 = iVar29 + -6;
      } while (local_284 < uVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_268.KerningCache.SharedReferenceCount.ReferenceController);
  }
  return;
}

// operator() @ 1424f8870

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
`FSlateElementBatcher::AddLineElements'::__l2::<lambda_1>::operator()
          (void *this,FSlateRenderBatch *param_1,FSlateLineElement *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar3;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  TVector2<float> TVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ForAnyElementType FVar14;
  FSlateVertex *pFVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  FColor_u_0 *pFVar20;
  undefined4 uVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 in_XMM1 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 in_XMM3 [16];
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float local_398;
  float fStack_394;
  FColor_u_0 local_38c;
  undefined1 local_388 [8];
  undefined8 local_380;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_378;
  FColor_u_0 local_368;
  uint local_364;
  undefined1 local_360 [8];
  undefined8 local_358;
  FColor_u_0 local_350;
  int local_34c;
  FLinearColor_u_0 local_348;
  undefined4 local_338;
  uint uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  float fStack_320;
  float fStack_31c;
  uint local_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 local_308;
  uint uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  uint local_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 local_2d8;
  uint uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  uint local_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 local_2a8;
  uint uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  float fStack_290;
  float fStack_28c;
  uint local_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 local_278;
  uint uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  float fStack_260;
  float fStack_25c;
  uint local_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 local_248;
  uint uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  float fStack_230;
  float fStack_22c;
  uint local_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 local_218;
  uint uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  float fStack_200;
  float fStack_1fc;
  uint local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 local_1e8;
  uint uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  uint local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  uint local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  float fStack_170;
  float fStack_16c;
  uint local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  FLineBuilder local_158;
  longlong local_128;
  longlong lStack_120;
  undefined1 local_118 [16];
  FSlateVertex local_108 [4];
  
  iVar12 = (param_2->Points).ArrayNum;
  bVar2 = *(byte *)((longlong)&param_2->_padding_ + 3);
  local_364 = bVar2 & 0x10;
  bVar24 = (bVar2 & 0x10) == 0;
  local_358 = CONCAT44(local_358._4_4_,iVar12);
  if (1 < iVar12) {
    local_128 = param_2->_padding_;
    lStack_120 = param_2->_padding_;
    FSlateElementBatcher::PackVertexColor
              (*(FSlateElementBatcher **)this,(FLinearColor *)&local_368._s_0);
    uVar23 = (param_2->PointColors).ArrayNum;
    local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_378.ArrayNum = 0;
    local_378.ArrayMax = 0;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if (0 < (int)uVar23) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar23,&local_378.AllocatorInstance,0,&local_378.ArrayMax);
    }
    fVar41 = __real_437f0000;
    fVar32 = __real_3f000000;
    fVar36 = __real_3f800000;
    iVar13 = (param_2->PointColors).ArrayNum;
    pFVar19 = (param_2->PointColors).AllocatorInstance.Data;
    pFVar22 = pFVar19 + (longlong)iVar13 * 0x10;
    while( true ) {
      if ((param_2->PointColors).ArrayNum != iVar13) {
        local_388[0] = 0;
        `TCheckedPointerIterator<FLinearColor_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_388);
      }
      if (pFVar19 == pFVar22) break;
      local_118._0_8_ = param_2->_padding_;
      local_118._8_8_ = param_2->_padding_;
      fVar25 = (float)((ulonglong)local_118._0_8_ >> 0x20);
      auVar30._4_4_ = fVar25;
      auVar30._0_4_ = fVar25;
      auVar30._8_4_ = fVar25;
      auVar30._12_4_ = fVar25;
      in_XMM3._0_4_ = (float)local_118._0_8_ * *(float *)pFVar19;
      in_XMM3._4_12_ = local_118._4_12_;
      in_XMM1._4_12_ = auVar30._4_12_;
      in_XMM1._0_4_ = fVar25 * *(float *)(pFVar19 + 4);
      fVar29 = (float)local_118._8_8_ * *(float *)(pFVar19 + 8);
      fVar25 = (float)((ulonglong)local_118._8_8_ >> 0x20) * *(float *)(pFVar19 + 0xc);
      local_348._s_0.R = in_XMM3._0_4_;
      local_348._s_0.G = in_XMM1._0_4_;
      local_348._s_0.A = fVar25;
      local_348._s_0.B = fVar29;
      if (*(char *)(*(longlong *)this + 0x4c) == '\0') {
        if (fVar29 <= 0.0) {
          fVar29 = 0.0;
        }
        if (in_XMM1._0_4_ <= 0.0) {
          auVar28._12_4_ = 0;
          auVar28._0_12_ = in_XMM1._4_12_;
          in_XMM1 = auVar28 << 0x20;
        }
        if (in_XMM3._0_4_ <= 0.0) {
          auVar7._12_4_ = 0;
          auVar7._0_12_ = local_118._4_12_;
          in_XMM3 = auVar7 << 0x20;
        }
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        if (fVar36 <= fVar29) {
          fVar29 = fVar36;
        }
        if (fVar36 <= in_XMM1._0_4_) {
          in_XMM1._0_4_ = fVar36;
        }
        if (fVar36 <= in_XMM3._0_4_) {
          in_XMM3._0_4_ = fVar36;
        }
        if (fVar36 <= fVar25) {
          fVar25 = fVar36;
        }
        in_XMM1._0_4_ = in_XMM1._0_4_ * fVar41 + fVar32;
        in_XMM3._0_4_ = in_XMM3._0_4_ * fVar41 + fVar32;
        local_38c._s_0.G = (char)(int)in_XMM1._0_4_;
        local_38c._s_0.B = (char)(int)(fVar29 * fVar41 + fVar32);
        local_38c._s_0.R = (char)(int)in_XMM3._0_4_;
        local_38c._s_0.A = (char)(int)(fVar25 * fVar41 + fVar32);
      }
      else {
        FLinearColor::ToFColorSRGB((FLinearColor *)&local_348._s_0);
      }
      if (((local_378.AllocatorInstance.Data <= &local_38c) &&
          (&local_38c <
           (FColor_u_0 *)(local_378.AllocatorInstance.Data + (longlong)local_378.ArrayMax * 4))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_378.ArrayNum == local_378.ArrayMax) {
        local_378.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_378.AllocatorInstance,&local_378.ArrayMax);
      }
      lVar16 = (longlong)local_378.ArrayNum;
      pFVar19 = pFVar19 + 0x10;
      local_378.ArrayNum = local_378.ArrayNum + 1;
      *(FColor_u_0 *)(local_378.AllocatorInstance.Data + lVar16 * 4) = local_38c;
    }
    fVar41 = param_2->Thickness;
    if (param_2->bAntialias == false) {
      if (fVar41 == fVar36) {
        if (local_378.ArrayNum == 0) {
          FVar14.Data = (FScriptContainerElement *)&local_368;
        }
        else {
          FVar14.Data = local_378.AllocatorInstance.Data;
          if ((local_378.ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             FVar14.Data = local_378.AllocatorInstance.Data, bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        TVar8.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_350 = *(FColor_u_0 *)FVar14.Data;
        if (((param_2->Points).ArrayNum < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar15 = FSlateVertex::Make(local_108,(TTransform2<float> *)param_2,
                                     (TVector2<float>)
                                     ((TVector2<float>_u_0 *)
                                     (param_2->Points).AllocatorInstance.Data)->_s_0,TVar8,
                                     (FColor *)&local_350._s_0,(FColor)0x0,bVar24);
        FSlateRenderBatch::EmplaceVertex(param_1,pFVar15);
        uVar23 = 1;
        if (1 < iVar12) {
          lVar16 = 1;
          do {
            if (local_378.ArrayNum == 0) {
              pFVar20 = &local_368;
            }
            else {
              uVar10 = 0;
              if ((int)uVar23 < local_378.ArrayNum) {
                uVar10 = ~uVar23 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar20 = (FColor_u_0 *)(local_378.AllocatorInstance.Data + (longlong)(int)uVar23 * 4)
              ;
            }
            TVar8.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            uVar10 = pFVar20->Bits;
            uVar11 = 0;
            if ((int)uVar23 < (param_2->Points).ArrayNum) {
              uVar11 = ~uVar23 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar35 = uStack_2f4;
            uVar33 = local_2f8;
            fVar36 = *(float *)((longlong)&param_2->_padding_ + 4);
            lVar18 = *(longlong *)((param_2->Points).AllocatorInstance.Data + lVar16 * 8);
            fVar41 = *(float *)((longlong)&param_2->_padding_ + 4);
            fVar25 = *(float *)((longlong)&param_2->_padding_ + 4);
            local_380._4_4_ = TVar8.field0_0x0._4_4_;
            uVar11 = (uint)local_380._4_4_;
            local_380._0_4_ = TVar8.field0_0x0._0_4_;
            uVar34 = (float)local_380;
            local_380._0_4_ = (float)lVar18;
            local_380._4_4_ = (float)((ulonglong)lVar18 >> 0x20);
            if (local_364 == 0) {
              local_318 = uVar10;
              uStack_314 = 0;
              in_XMM1 = roundps(in_XMM1,ZEXT416((uint)(fVar36 * (float)local_380 + fVar25 +
                                                      fVar41 * local_380._4_4_ + fVar32)),1);
              in_XMM3 = roundps(in_XMM3,ZEXT416((uint)(*(float *)&param_2->_padding_ *
                                                       local_380._4_4_ +
                                                       *(float *)&param_2->_padding_ +
                                                      *(float *)&param_2->_padding_ *
                                                      (float)local_380 + fVar32)),1);
              fVar36 = in_XMM3._0_4_;
              fVar25 = in_XMM1._0_4_;
              fStack_320 = fVar36;
              fStack_31c = fVar25;
              local_338 = uVar34;
              uStack_334 = uVar11;
              uStack_330 = 0x3f800000;
              uStack_32c = 0x3f800000;
              uVar33 = local_328;
              uVar35 = uStack_324;
              uVar21 = local_310;
            }
            else {
              in_XMM3 = ZEXT416(uVar11);
              local_2e8 = uVar10;
              uStack_2e4 = 0;
              fVar25 = fVar36 * (float)local_380 + fVar41 * local_380._4_4_ + fVar25;
              fVar36 = *(float *)&param_2->_padding_ * (float)local_380 +
                       *(float *)&param_2->_padding_ * local_380._4_4_ +
                       *(float *)&param_2->_padding_;
              local_308 = uVar34;
              uStack_304 = uVar11;
              uStack_300 = 0x3f800000;
              uStack_2fc = 0x3f800000;
              fStack_2f0 = fVar36;
              fStack_2ec = fVar25;
              uVar21 = local_2e0;
            }
            pTVar3 = param_1->SourceVertices;
            iVar12 = pTVar3->ArrayNum;
            local_380 = lVar18;
            if (iVar12 == pTVar3->ArrayMax) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                                 (0x42c,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
            }
            pTVar3->ArrayNum = iVar12 + 1;
            lVar17 = (longlong)iVar12 * 0x2c;
            lVar18 = (pTVar3->AllocatorInstance)._padding_;
            puVar1 = (undefined4 *)(lVar17 + lVar18);
            *puVar1 = uVar34;
            puVar1[1] = uVar11;
            puVar1[2] = 0x3f800000;
            puVar1[3] = 0x3f800000;
            puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar18);
            *puVar1 = uVar33;
            puVar1[1] = uVar35;
            puVar1[2] = fVar36;
            puVar1[3] = fVar25;
            *(ulonglong *)(lVar17 + 0x20 + lVar18) = (ulonglong)uVar10;
            *(undefined4 *)(lVar17 + 0x28 + lVar18) = uVar21;
            iVar12 = param_1->NumVertices;
            pTVar4 = param_1->SourceIndices;
            param_1->NumVertices = iVar12 + 1;
            iVar13 = pTVar4->ArrayNum;
            if (iVar13 == pTVar4->ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                                 (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
            }
            pTVar4->ArrayNum = iVar13 + 1;
            *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar13 * 4) = iVar12 + -1;
            pTVar4 = param_1->SourceIndices;
            param_1->NumIndices = param_1->NumIndices + 1;
            iVar13 = pTVar4->ArrayNum;
            if (iVar13 == pTVar4->ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                                 (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
            }
            uVar23 = uVar23 + 1;
            pTVar4->ArrayNum = iVar13 + 1;
            lVar16 = lVar16 + 1;
            *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)iVar13 * 4) = iVar12;
            param_1->NumIndices = param_1->NumIndices + 1;
          } while (lVar16 < (int)(float)local_358);
        }
      }
      else {
        local_34c = iVar12 + -1;
        fVar41 = (fVar41 * fVar32) / *(float *)((longlong)&param_2->_padding_ + 4);
        if (0 < iVar12 + -1) {
          iVar12 = 1;
          local_380 = 0;
          uVar23 = 0;
          do {
            lVar16 = local_380;
            fVar25 = __real_322bcc77;
            fVar29 = 0.0;
            uVar10 = 0;
            if ((int)uVar23 < (param_2->Points).ArrayNum) {
              uVar10 = ~uVar23 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar5 = *(undefined8 *)((param_2->Points).AllocatorInstance.Data + lVar16);
            uVar10 = uVar23 + 1;
            uVar11 = 0;
            if (iVar12 < (param_2->Points).ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_380 = local_380 + 8;
            local_358 = *(undefined8 *)((param_2->Points).AllocatorInstance.Data + local_380);
            if (local_378.ArrayNum == 0) {
              pFVar20 = &local_368;
            }
            else {
              uVar11 = 0;
              if ((int)uVar23 < local_378.ArrayNum) {
                uVar11 = ~uVar23 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar20 = (FColor_u_0 *)(local_378.AllocatorInstance.Data + (ulonglong)uVar23 * 4);
            }
            uVar23 = pFVar20->Bits;
            if (local_378.ArrayNum == 0) {
              pFVar20 = &local_368;
            }
            else {
              uVar11 = 0;
              if ((int)uVar10 < local_378.ArrayNum) {
                uVar11 = ~uVar10 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar20 = (FColor_u_0 *)(local_378.AllocatorInstance.Data + (longlong)(int)uVar10 * 4)
              ;
            }
            fVar37 = (float)local_358;
            fVar39 = local_358._4_4_;
            local_398 = (float)uVar5;
            fVar27 = local_398;
            fStack_394 = (float)((ulonglong)uVar5 >> 0x20);
            fVar38 = fStack_394;
            local_358._0_4_ = (float)local_358 - local_398;
            uVar11 = pFVar20->Bits;
            fVar31 = local_358._4_4_ - fStack_394;
            fVar26 = fVar31 * fVar31 + (float)local_358 * (float)local_358;
            fVar40 = fVar29;
            if (fVar25 < fVar26) {
              fVar36 = fVar36 / SQRT(fVar26);
              fVar29 = fVar36 * fVar31;
              fVar40 = fVar36 * (float)local_358;
            }
            fVar40 = fVar40 * fVar41;
            fVar26 = (float)((uint)(fVar29 * fVar41) ^ __xmm_80000000800000008000000080000000);
            fVar29 = fVar40 + fStack_394;
            fVar25 = (fVar26 + local_398) * *(float *)((longlong)&param_2->_padding_ + 4);
            fVar36 = (fVar26 + local_398) * *(float *)&param_2->_padding_;
            local_398 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
            fStack_394 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
            if (local_364 == 0) {
              uStack_2b4 = 0;
              fVar31 = fVar29 * *(float *)&param_2->_padding_ + *(float *)&param_2->_padding_ +
                       fVar36 + fVar32;
              local_2d8 = local_398;
              uStack_2d4 = (uint)fStack_394;
              uStack_2d0 = 0x3f800000;
              uStack_2cc = 0x3f800000;
              auVar30 = roundps(ZEXT416((uint)(float)local_358),ZEXT416((uint)fVar31),1);
              fVar36 = auVar30._0_4_;
              auVar28 = roundps(ZEXT416((uint)fVar31),
                                ZEXT416((uint)(fVar25 + *(float *)((longlong)&param_2->_padding_ + 4
                                                                  ) +
                                              fVar29 * *(float *)((longlong)&param_2->_padding_ + 4)
                                              + fVar32)),1);
              fVar32 = auVar28._0_4_;
              uVar33 = local_2c8;
              uVar35 = uStack_2c4;
              fStack_2c0 = fVar36;
              fStack_2bc = fVar32;
              local_2b8 = uVar23;
              uVar34 = local_2b0;
            }
            else {
              auVar30 = ZEXT416((uint)fStack_394);
              uStack_284 = 0;
              fVar32 = fVar25 + fVar29 * *(float *)((longlong)&param_2->_padding_ + 4) +
                       *(float *)((longlong)&param_2->_padding_ + 4);
              fVar36 = fVar29 * *(float *)&param_2->_padding_ + fVar36 +
                       *(float *)&param_2->_padding_;
              local_2a8 = local_398;
              uStack_2a4 = (uint)fStack_394;
              uStack_2a0 = 0x3f800000;
              uStack_29c = 0x3f800000;
              uVar33 = local_298;
              uVar35 = uStack_294;
              fStack_290 = fVar36;
              fStack_28c = fVar32;
              local_288 = uVar23;
              uVar34 = local_280;
            }
            local_358 = CONCAT44(local_358._4_4_,uVar34);
            pTVar3 = param_1->SourceVertices;
            iVar13 = pTVar3->ArrayNum;
            if (iVar13 == pTVar3->ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                                 (0x42c,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
            }
            pTVar3->ArrayNum = iVar13 + 1;
            fVar38 = fVar38 - fVar40;
            lVar18 = (longlong)iVar13 * 0x2c;
            lVar16 = (pTVar3->AllocatorInstance)._padding_;
            puVar1 = (undefined4 *)(lVar18 + lVar16);
            *puVar1 = local_398;
            puVar1[1] = fStack_394;
            puVar1[2] = 0x3f800000;
            puVar1[3] = 0x3f800000;
            puVar1 = (undefined4 *)(lVar18 + 0x10 + lVar16);
            *puVar1 = uVar33;
            puVar1[1] = uVar35;
            puVar1[2] = fVar36;
            puVar1[3] = fVar32;
            *(ulonglong *)(lVar18 + 0x20 + lVar16) = (ulonglong)uVar23;
            fVar32 = __real_3f000000;
            *(float *)(lVar18 + 0x28 + lVar16) = (float)local_358;
            param_1->NumVertices = param_1->NumVertices + 1;
            fVar36 = (fVar27 - fVar26) * *(float *)&param_2->_padding_;
            fVar25 = (fVar27 - fVar26) * *(float *)((longlong)&param_2->_padding_ + 4);
            local_398 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
            fStack_394 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
            if (local_364 == 0) {
              uStack_254 = 0;
              auVar28 = ZEXT416((uint)(fVar38 * *(float *)&param_2->_padding_ +
                                       *(float *)&param_2->_padding_ + fVar36 + fVar32));
              local_278 = local_398;
              uStack_274 = (uint)fStack_394;
              uStack_270 = 0x3f800000;
              uStack_26c = 0x3f800000;
              auVar30 = roundps(auVar30,auVar28,1);
              fVar29 = auVar30._0_4_;
              auVar28 = roundps(auVar28,ZEXT416((uint)(fVar25 + *(float *)((longlong)
                                                                           &param_2->_padding_ + 4)
                                                      + fVar38 * *(float *)((longlong)
                                                                            &param_2->_padding_ + 4)
                                                        + fVar32)),1);
              fVar36 = auVar28._0_4_;
              uVar34 = local_268;
              uVar33 = uStack_264;
              uVar35 = local_250;
              fStack_260 = fVar29;
              fStack_25c = fVar36;
              local_258 = uVar23;
            }
            else {
              auVar30 = ZEXT416((uint)fStack_394);
              uStack_224 = 0;
              fVar29 = fVar38 * *(float *)&param_2->_padding_ + fVar36 +
                       *(float *)&param_2->_padding_;
              fVar36 = fVar25 + fVar38 * *(float *)((longlong)&param_2->_padding_ + 4) +
                       *(float *)((longlong)&param_2->_padding_ + 4);
              local_248 = local_398;
              uStack_244 = (uint)fStack_394;
              uStack_240 = 0x3f800000;
              uStack_23c = 0x3f800000;
              uVar34 = local_238;
              uVar33 = uStack_234;
              uVar35 = local_220;
              fStack_230 = fVar29;
              fStack_22c = fVar36;
              local_228 = uVar23;
            }
            pTVar3 = param_1->SourceVertices;
            iVar13 = pTVar3->ArrayNum;
            if (iVar13 == pTVar3->ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                                 (0x42c,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
            }
            pTVar3->ArrayNum = iVar13 + 1;
            fVar25 = fVar26 + fVar37;
            lVar18 = (longlong)iVar13 * 0x2c;
            lVar16 = (pTVar3->AllocatorInstance)._padding_;
            puVar1 = (undefined4 *)(lVar18 + lVar16);
            *puVar1 = local_398;
            puVar1[1] = fStack_394;
            puVar1[2] = 0x3f800000;
            puVar1[3] = 0x3f800000;
            puVar1 = (undefined4 *)(lVar18 + 0x10 + lVar16);
            *puVar1 = uVar34;
            puVar1[1] = uVar33;
            puVar1[2] = fVar29;
            puVar1[3] = fVar36;
            *(ulonglong *)(lVar18 + 0x20 + lVar16) = (ulonglong)uVar23;
            *(undefined4 *)(lVar18 + 0x28 + lVar16) = uVar35;
            fVar29 = fVar40 + fVar39;
            param_1->NumVertices = param_1->NumVertices + 1;
            fVar36 = fVar25 * *(float *)&param_2->_padding_;
            fVar25 = fVar25 * *(float *)((longlong)&param_2->_padding_ + 4);
            local_398 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
            fStack_394 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
            if (local_364 == 0) {
              uStack_1f4 = 0;
              fVar27 = fVar29 * *(float *)&param_2->_padding_ + *(float *)&param_2->_padding_ +
                       fVar36 + fVar32;
              local_218 = local_398;
              uStack_214 = (uint)fStack_394;
              uStack_210 = 0x3f800000;
              uStack_20c = 0x3f800000;
              auVar30 = roundps(auVar30,ZEXT416((uint)fVar27),1);
              fVar36 = auVar30._0_4_;
              auVar28 = roundps(ZEXT416((uint)fVar27),
                                ZEXT416((uint)(fVar25 + *(float *)((longlong)&param_2->_padding_ + 4
                                                                  ) +
                                              fVar29 * *(float *)((longlong)&param_2->_padding_ + 4)
                                              + fVar32)),1);
              fVar25 = auVar28._0_4_;
              uVar34 = local_208;
              uVar33 = uStack_204;
              uVar35 = local_1f0;
              fStack_200 = fVar36;
              fStack_1fc = fVar25;
              local_1f8 = uVar11;
            }
            else {
              auVar30 = ZEXT416((uint)fStack_394);
              uStack_1c4 = 0;
              fVar25 = fVar25 + fVar29 * *(float *)((longlong)&param_2->_padding_ + 4) +
                       *(float *)((longlong)&param_2->_padding_ + 4);
              fVar36 = fVar29 * *(float *)&param_2->_padding_ + fVar36 +
                       *(float *)&param_2->_padding_;
              local_1e8 = local_398;
              uStack_1e4 = (uint)fStack_394;
              uStack_1e0 = 0x3f800000;
              uStack_1dc = 0x3f800000;
              uVar34 = local_1d8;
              uVar33 = uStack_1d4;
              uVar35 = local_1c0;
              fStack_1d0 = fVar36;
              fStack_1cc = fVar25;
              local_1c8 = uVar11;
            }
            pTVar3 = param_1->SourceVertices;
            iVar13 = pTVar3->ArrayNum;
            if (iVar13 == pTVar3->ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                                 (0x42c,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
            }
            pTVar3->ArrayNum = iVar13 + 1;
            fVar37 = fVar37 - fVar26;
            lVar18 = (longlong)iVar13 * 0x2c;
            fVar39 = fVar39 - fVar40;
            lVar16 = (pTVar3->AllocatorInstance)._padding_;
            puVar1 = (undefined4 *)(lVar18 + lVar16);
            *puVar1 = local_398;
            puVar1[1] = fStack_394;
            puVar1[2] = 0x3f800000;
            puVar1[3] = 0x3f800000;
            puVar1 = (undefined4 *)(lVar18 + 0x10 + lVar16);
            *puVar1 = uVar34;
            puVar1[1] = uVar33;
            puVar1[2] = fVar36;
            puVar1[3] = fVar25;
            *(ulonglong *)(lVar18 + 0x20 + lVar16) = (ulonglong)uVar11;
            *(undefined4 *)(lVar18 + 0x28 + lVar16) = uVar35;
            param_1->NumVertices = param_1->NumVertices + 1;
            fVar36 = fVar37 * *(float *)&param_2->_padding_;
            fVar37 = fVar37 * *(float *)((longlong)&param_2->_padding_ + 4);
            local_398 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
            fStack_394 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
            if (local_364 == 0) {
              auVar28 = ZEXT416((uint)(fVar39 * *(float *)&param_2->_padding_ +
                                       *(float *)&param_2->_padding_ + fVar36 + fVar32));
              uStack_194 = 0;
              local_1b8 = local_398;
              uStack_1b4 = fStack_394;
              uStack_1b0 = 0x3f800000;
              uStack_1ac = 0x3f800000;
              auVar30 = roundps(auVar30,auVar28,1);
              fVar25 = auVar30._0_4_;
              auVar30 = roundps(auVar28,ZEXT416((uint)(fVar37 + *(float *)((longlong)
                                                                           &param_2->_padding_ + 4)
                                                      + fVar39 * *(float *)((longlong)
                                                                            &param_2->_padding_ + 4)
                                                        + fVar32)),1);
              fVar36 = auVar30._0_4_;
              uVar34 = local_1a8;
              uVar33 = uStack_1a4;
              uVar35 = local_190;
              fStack_1a0 = fVar25;
              fStack_19c = fVar36;
              local_198 = uVar11;
            }
            else {
              fVar25 = fVar39 * *(float *)&param_2->_padding_ + fVar36 +
                       *(float *)&param_2->_padding_;
              uStack_164 = 0;
              fVar36 = fVar37 + fVar39 * *(float *)((longlong)&param_2->_padding_ + 4) +
                       *(float *)((longlong)&param_2->_padding_ + 4);
              local_188 = local_398;
              uStack_184 = fStack_394;
              uStack_180 = 0x3f800000;
              uStack_17c = 0x3f800000;
              uVar34 = local_178;
              uVar33 = uStack_174;
              uVar35 = local_160;
              fStack_170 = fVar25;
              fStack_16c = fVar36;
              local_168 = uVar11;
            }
            pTVar3 = param_1->SourceVertices;
            iVar13 = pTVar3->ArrayNum;
            if (iVar13 == pTVar3->ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                                 (0x42c,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
            }
            pTVar3->ArrayNum = iVar13 + 1;
            lVar18 = (longlong)iVar13 * 0x2c;
            lVar16 = (pTVar3->AllocatorInstance)._padding_;
            puVar1 = (undefined4 *)(lVar18 + lVar16);
            *puVar1 = local_398;
            puVar1[1] = fStack_394;
            puVar1[2] = 0x3f800000;
            puVar1[3] = 0x3f800000;
            puVar1 = (undefined4 *)(lVar18 + 0x10 + lVar16);
            *puVar1 = uVar34;
            puVar1[1] = uVar33;
            puVar1[2] = fVar25;
            puVar1[3] = fVar36;
            *(ulonglong *)(lVar18 + 0x20 + lVar16) = (ulonglong)uVar11;
            *(undefined4 *)(lVar18 + 0x28 + lVar16) = uVar35;
            iVar13 = param_1->NumVertices;
            param_1->NumVertices = iVar13 + 1;
            `FLineBuilder::AddQuadIndices'::__l2::<lambda_1>::operator()
                      (local_360,param_1,iVar13 + -2,iVar13,iVar13 + -1,iVar13 + -3);
            iVar12 = iVar12 + 1;
            fVar36 = __real_3f800000;
            uVar23 = uVar10;
          } while ((int)uVar10 < local_34c);
        }
      }
    }
    else {
      local_158.DashLength = param_2->DashLength;
      if (fVar41 <= 0.0) {
        fVar41 = 0.0;
      }
      local_158.AngleCosineLimit = 0.785399;
      local_158.PositionAlongLine = 0.0;
      local_158.LocalFilterRadius = fVar36 / *(float *)((longlong)&param_2->_padding_ + 4);
      local_158.LocalHalfThickness = (fVar41 * fVar32 + fVar36) * local_158.LocalFilterRadius;
      local_158.LocalCapLength = local_158.LocalFilterRadius + local_158.LocalFilterRadius;
      local_158.DashOffset = param_2->DashOffset;
      if (local_158.DashLength < fVar36) {
        local_158.DashLength = -10.0;
      }
      local_158.RenderBatch = param_1;
      local_158.RenderTransform = (TTransform2<float> *)param_2;
      FLineBuilder::BuildLineGeometry
                (&local_158,&param_2->Points,&local_378,(FColor *)&local_368._s_0,bVar24);
    }
    if ((FColor_u_0 *)local_378.AllocatorInstance.Data != (FColor_u_0 *)0x0) {
      FMemory::Free(local_378.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1424fafc0

TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> * __thiscall
`FSlateElementBatcher::BuildShapedTextSequence<1>'::__l121::<lambda_1>::operator()
          (void *this,
          TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
          *__return_storage_ptr__)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar8;
  int iVar9;
  int iVar10;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [3];
  
  iVar10 = 0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance)._padding_ = 0;
  (__return_storage_ptr__->AllocatorInstance).AllocatedSize = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar2 = 0;
  uVar5 = *(int *)this * 6;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (0 < (int)uVar5) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (4,4,uVar5,&__return_storage_ptr__->AllocatorInstance,0,piVar2);
  }
  if (0 < *(int *)this) {
    iVar9 = 1;
    do {
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_38 = iVar9 + -1;
      if (((piVar3 <= &local_38) && (&local_38 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_38;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_34 = iVar9;
      if (((piVar3 <= &local_34) && (&local_34 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      iVar1 = iVar9 + 1;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_34;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_30 = iVar1;
      if (((piVar3 <= &local_30) && (&local_30 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_30;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_2c = iVar9;
      if (((piVar3 <= &local_2c) && (&local_2c < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_2c;
      local_28 = iVar9 + 2;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      if (((piVar3 <= &local_28) && (&local_28 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_28;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_24[0] = iVar1;
      if (((piVar3 <= local_24) && (local_24 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      iVar10 = iVar10 + 1;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      iVar9 = iVar9 + 4;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_24[0];
    } while (iVar10 < *(int *)this);
  }
  return __return_storage_ptr__;
}

// operator() @ 1424fb410

TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> * __thiscall
`FSlateElementBatcher::BuildShapedTextSequence<0>'::__l121::<lambda_1>::operator()
          (void *this,
          TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
          *__return_storage_ptr__)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar8;
  int iVar9;
  int iVar10;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [3];
  
  iVar10 = 0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance)._padding_ = 0;
  (__return_storage_ptr__->AllocatorInstance).AllocatedSize = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar2 = 0;
  uVar5 = *(int *)this * 6;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (0 < (int)uVar5) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (4,4,uVar5,&__return_storage_ptr__->AllocatorInstance,0,piVar2);
  }
  if (0 < *(int *)this) {
    iVar9 = 1;
    do {
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_38 = iVar9 + -1;
      if (((piVar3 <= &local_38) && (&local_38 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_38;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_34 = iVar9;
      if (((piVar3 <= &local_34) && (&local_34 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      iVar1 = iVar9 + 1;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_34;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_30 = iVar1;
      if (((piVar3 <= &local_30) && (&local_30 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_30;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_2c = iVar9;
      if (((piVar3 <= &local_2c) && (&local_2c < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_2c;
      local_28 = iVar9 + 2;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      if (((piVar3 <= &local_28) && (&local_28 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_28;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_24[0] = iVar1;
      if (((piVar3 <= local_24) && (local_24 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      iVar10 = iVar10 + 1;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      iVar9 = iVar9 + 4;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_24[0];
    } while (iVar10 < *(int *)this);
  }
  return __return_storage_ptr__;
}

// operator() @ 1424fb860

void __thiscall
`FSlateElementBatcher::AddLineElements'::__l2::<lambda_3>::operator()
          (void *this,FSlateRenderBatch *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  longlong *plVar5;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar6;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  TTransform2<float> *pTVar13;
  float fVar14;
  uint local_res18 [2];
  uint local_res20 [2];
  FLineBuilder local_88 [2];
  
  fVar10 = __real_3f000000;
  fVar9 = __real_3f800000;
  local_res18[0] = 0;
  local_res20[0] = 0;
  uVar2 = local_res18[0];
  uVar3 = local_res20[0];
  for (; local_res18[0] = uVar2, local_res20[0] = uVar3, param_2 < param_3; param_2 = param_2 + 1) {
    plVar5 = *(longlong **)this;
    uVar12 = 0;
    if ((int)param_2 < (int)plVar5[2]) {
      uVar12 = ~param_2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar13 = (TTransform2<float> *)((longlong)(int)param_2 * 0x88 + *plVar5);
    fVar4 = pTVar13[4].M.M[0][0];
    if ((int)fVar4 < 2) {
      return;
    }
    fVar14 = pTVar13[5].M.M[0][0];
    if (*(char *)(pTVar13[5].M.M[1] + 1) == '\0') {
      iVar1 = (int)fVar4 + -1;
      if (fVar14 != fVar9) {
        fVar4 = (float)(iVar1 * 4);
        iVar1 = iVar1 * 3;
      }
      local_res18[0] = uVar2 + (int)fVar4;
      local_res20[0] = uVar3 + iVar1 * 2;
    }
    else {
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      local_88[0].LocalFilterRadius = fVar9 / pTVar13[1].Trans.field0_0x0._s_0.Y;
      local_88[0].AngleCosineLimit = 0.785399;
      local_88[0].PositionAlongLine = 0.0;
      local_88[0].LocalHalfThickness = (fVar14 * fVar10 + fVar9) * local_88[0].LocalFilterRadius;
      local_88[0].LocalCapLength = local_88[0].LocalFilterRadius + local_88[0].LocalFilterRadius;
      local_88[0].DashLength = pTVar13[5].M.M[0][1];
      local_88[0].DashOffset = pTVar13[5].M.M[1][0];
      if (local_88[0].DashLength < fVar9) {
        local_88[0].DashLength = -10.0;
      }
      local_88[0].RenderBatch = param_1;
      local_88[0].RenderTransform = pTVar13;
      FLineBuilder::NumElements
                (local_88,(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
                          &pTVar13[3].Trans,local_res18,local_res20);
    }
    uVar2 = local_res18[0];
    uVar3 = local_res20[0];
  }
  pTVar6 = param_1->SourceVertices;
  uVar2 = pTVar6->ArrayNum + uVar2;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (pTVar6->ArrayMax < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (0x2c,4,uVar2,&pTVar6->AllocatorInstance,pTVar6->ArrayNum,&pTVar6->ArrayMax);
  }
  pTVar7 = param_1->SourceIndices;
  uVar3 = pTVar7->ArrayNum + uVar3;
  if (-1 < (int)uVar3) {
    if (pTVar7->ArrayMax < (int)uVar3) {
      UE::Core::Private::
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                (4,4,uVar3,&pTVar7->AllocatorInstance,pTVar7->ArrayNum,&pTVar7->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// AddCachedElements @ 1424fc9b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddCachedElements
          (FSlateElementBatcher *this,FSlateCachedElementData *param_1,TVector2<float> param_2)

{
  int *piVar1;
  TArray<FSlateCachedClipState,TSizedDefaultAllocator<32>_> *this_00;
  FSlateCachedElementList *pFVar2;
  SWidget *this_01;
  TAtomic<FMinimalName> TVar3;
  FSlateBatchData *pFVar4;
  FSlateBatchData *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FScriptContainerElement *pFVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ForElementType<FSlateCachedElementList_*> FVar17;
  TStatIdData *pTVar18;
  FName FVar19;
  FSlateCachedElementData *pFVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  uint uVar23;
  uint *puVar24;
  ForElementType<FSlateCachedElementList_*> FVar25;
  ESlatePostRT EVar26;
  bool bVar27;
  undefined1 local_f8;
  undefined1 local_f7 [3];
  uint local_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  FName local_e0;
  FColor_u_0 local_d8;
  uint local_d4;
  uint uStack_d0;
  FName local_c8;
  int local_b8;
  uint uStack_b4;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  ForElementType<FSlateCachedElementList_*> local_98;
  FName local_90;
  FSlateCachedElementData *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_80;
  int local_60;
  FName local_58;
  LARGE_INTEGER local_50;
  FStatMessage local_48;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddCachedElements");
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId520,"Slate::AddCachedElements",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
               ,0x208);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId520);
  }
  FCsvProfiler::RecordCustomStat
            ("Paint/CacheListsWithNewData",_GCsvCategory_Slate.Index,
             (param_1->ListsWithNewData).ArrayNum,Set);
  FVar25 = (param_1->ListsWithNewData).AllocatorInstance.SecondaryData;
  local_f0 = (param_1->ListsWithNewData).ArrayNum;
  uVar15 = (ulonglong)(int)local_f0;
  local_ec = 0;
  local_98 = FVar25;
  if (FVar25 == (ForElementType<FSlateCachedElementList_*>)0x0) {
    local_98 = (ForElementType<FSlateCachedElementList_*>)&param_1->ListsWithNewData;
  }
  local_e8 = 0;
  if (FVar25 == (ForElementType<FSlateCachedElementList_*>)0x0) {
    FVar25 = (ForElementType<FSlateCachedElementList_*>)&param_1->ListsWithNewData;
  }
  local_98 = (ForElementType<FSlateCachedElementList_*>)((longlong)local_98 + uVar15 * 8);
  FVar17 = local_98;
  while( true ) {
    if ((param_1->ListsWithNewData).ArrayNum != (int)uVar15) {
      local_f8 = 0;
      `TCheckedPointerIterator<FSlateCachedElementList_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_f8);
    }
    if (FVar25 == FVar17) break;
    pFVar2 = *(FSlateCachedElementList **)FVar25;
    iVar14 = *(int *)&(pFVar2->DrawElements).field_0x148 +
             *(int *)&(pFVar2->DrawElements).field_0x130 +
             *(int *)&(pFVar2->DrawElements).field_0x118 +
             *(int *)&(pFVar2->DrawElements).field_0x100 +
             *(int *)&(pFVar2->DrawElements).field_0xe8 + *(int *)&(pFVar2->DrawElements).field_0xd0
             + *(int *)&(pFVar2->DrawElements).field_0xb8 +
             *(int *)&(pFVar2->DrawElements).field_0xa0 + *(int *)&(pFVar2->DrawElements).field_0x88
             + *(int *)&(pFVar2->DrawElements).field_0x70 +
             *(int *)&(pFVar2->DrawElements).field_0x58 + *(int *)&(pFVar2->DrawElements).field_0x40
             + *(int *)&(pFVar2->DrawElements).field_0x28 +
             *(int *)&(pFVar2->DrawElements).field_0x10;
    if (iVar14 < 1) {
      uVar15 = (ulonglong)local_f0;
      local_e8 = local_e8 + 1;
      FVar25 = (ForElementType<FSlateCachedElementList_*>)((longlong)FVar25 + 8);
    }
    else {
      this->ElementStat_RecachedElements = this->ElementStat_RecachedElements + iVar14;
      local_ec = local_ec + iVar14;
      this->CurrentCachedElementList = pFVar2;
      bVar11 = false;
      bVar10 = false;
      this_01 = pFVar2->OwningWidget;
      local_c8.ComparisonIndex.Value = 0;
      local_c8.Number = 0;
      if (this_01 == (SWidget *)0x0) {
LAB_1424fccc0:
        bVar9 = false;
        FVar19 = local_c8;
      }
      else {
        iVar14 = CpuChannel->Enabled;
        if ((iVar14 < 0) && (FThreadStats::bPrimaryEnable == false)) {
          pTVar18 = &TStatId::TStatId_NAME_None;
        }
        else {
          TVar3 = ((this_01->StatID).StatIdPtr)->Name;
          if ((TVar3._0_4_ == 0) && (TVar3._4_4_ == 0)) {
            SWidget::CreateStatID(this_01);
          }
          pTVar18 = (this_01->StatID).StatIdPtr;
        }
        if (((SUB84(pTVar18->Name,0) == 0) && (SUB84(pTVar18->Name,4) == 0)) ||
           (FThreadStats::bPrimaryEnable == false)) {
          if ((-1 < iVar14) && ((SUB84(pTVar18->Name,0) != 0 || (SUB84(pTVar18->Name,4) != 0)))) {
            local_58 = *(FName *)&pTVar18->Name;
            local_d4 = (uint)local_58.ComparisonIndex.Value;
            uStack_d0 = local_58.Number;
            if (-1 < CpuChannel->Enabled) {
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_58,(pTVar18->StatDescriptionWide).Ptr,(char *)0x0,0);
              bVar11 = true;
              bVar10 = false;
            }
          }
          goto LAB_1424fccc0;
        }
        FVar19 = *(FName *)&pTVar18->Name;
        if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) goto LAB_1424fccc0;
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_d8.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_d8._s_0,(pTVar18->StatDescriptionAnsi).Ptr);
          bVar11 = false;
          bVar10 = true;
          if (-1 < CpuChannel->Enabled) {
            local_90.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
            local_90.Number = FVar19.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_90,(pTVar18->StatDescriptionWide).Ptr,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidgetUtils.h"
                       ,0x1d);
            bVar11 = true;
            bVar10 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_1424fccc0;
        local_e0 = FVar19;
        local_c8 = FVar19;
        FThreadStats::AddMessage(FVar19,CycleScopeStart);
        bVar9 = true;
      }
      AddElementsInternal(this,&pFVar2->DrawElements,param_2);
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar9) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_02 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_02 == (FThreadStats *)0x0) {
          this_03 = FThreadStatsPool::Get();
          this_02 = FThreadStatsPool::GetFromPool(this_03);
        }
        if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
          local_48.NameAndInfo.Index.Value = local_c8.ComparisonIndex.Value;
          local_48.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_50);
          local_48.StatData.Pad[4] = '\0';
          local_48.StatData.Pad[5] = '\0';
          local_48.StatData.Pad[6] = '\0';
          local_48.StatData.Pad[7] = '\0';
          local_48.StatData.Pad[0] = local_50.s.LowPart._0_1_;
          local_48.StatData.Pad[1] = local_50.s.LowPart._1_1_;
          local_48.StatData.Pad[2] = local_50.s.LowPart._2_1_;
          local_48.StatData.Pad[3] = local_50.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_02,&local_48);
          piVar1 = &this_02->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_02,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_02,false,false);
          }
        }
      }
      FVar25 = (ForElementType<FSlateCachedElementList_*>)((longlong)FVar25 + 8);
      uVar15 = (ulonglong)local_f0;
      this->CurrentCachedElementList = (FSlateCachedElementList *)0x0;
      FVar17 = local_98;
    }
  }
  piVar1 = &(param_1->ListsWithNewData).ArrayMax;
  (param_1->ListsWithNewData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementList_*>_>
              (8,8,0,&(param_1->ListsWithNewData).AllocatorInstance,0,piVar1);
  }
  pFVar4 = this->BatchData;
  pFVar5 = this->BatchDataHDR;
  iVar14 = (pFVar4->RenderBatches).ArrayNum;
  uVar23 = (iVar14 - *(int *)&(param_1->CachedBatches).field_0x34) +
           *(int *)&(param_1->CachedBatches).field_0x8;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if ((pFVar4->RenderBatches).ArrayMax < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,uVar23,(ForAnyElementType *)pFVar4,iVar14,&(pFVar4->RenderBatches).ArrayMax
              );
  }
  iVar14 = (pFVar5->RenderBatches).ArrayNum;
  uVar23 = (iVar14 - *(int *)&(param_1->CachedBatches).field_0x34) +
           *(int *)&(param_1->CachedBatches).field_0x8;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  piVar1 = &(pFVar5->RenderBatches).ArrayMax;
  if ((pFVar5->RenderBatches).ArrayMax < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,uVar23,(ForAnyElementType *)pFVar5,iVar14,piVar1);
  }
  iVar14 = *(int *)&(param_1->CachedBatches).field_0x28;
  local_e0 = (FName)&(param_1->CachedBatches).field_0x10;
  uStack_b4 = 1;
  local_b8 = 0;
  iStack_a4 = 0;
  iStack_a0 = 0;
  if (iVar14 != 0) {
    puVar24 = *(uint **)&(param_1->CachedBatches).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)local_e0;
    }
    uVar23 = *puVar24;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar23 == 0) {
      iStack_a0 = iStack_a0 + 0x20;
      lVar16 = (longlong)local_b8;
      local_b8 = local_b8 + 1;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < local_b8) goto LAB_1424fcf38;
      uVar23 = (puVar24 + 1)[lVar16];
    }
    uStack_b4 = -uVar23 & uVar23;
    uVar15 = (ulonglong)uStack_b4 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iStack_a4 = iStack_a0 + -1 + (int)lVar16;
    local_98._0_4_ = (int)lVar16;
    if (iVar14 < iStack_a4) {
LAB_1424fcf38:
      iStack_a4 = iVar14;
    }
  }
  local_a8 = 0xffffffff;
  local_f4 = *(uint *)&(param_1->CachedBatches).field_0x28;
  local_60 = *(int *)&(param_1->CachedBatches).field_0x8 -
             *(int *)&(param_1->CachedBatches).field_0x34;
  local_80._padding_ = CONCAT44(uStack_b4,local_b8);
  local_f0 = -1 << ((byte)local_f4 & 0x1f);
  local_80.CurrentBitIndex = iStack_a4;
  local_80.UnvisitedBitMask = 0xffffffff;
  local_80._28_4_ = uStack_9c;
  local_80.BaseBitIndex = iStack_a0;
  uVar23 = local_f4 & 0xffffffe0;
  iVar22 = (int)local_f4 >> 5;
  puStack_b0 = (undefined1 *)local_e0;
  local_88 = param_1;
  local_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e0;
  if ((((int)local_f4 < 0) || (iVar14 < (int)local_f4)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar12 = *(int *)((longlong)local_e0 + 0x18);
  if (local_f4 != uVar12) {
    FVar19 = (FName)*(ForElementType<unsigned_int> *)((longlong)local_e0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_e0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_e0;
    }
    local_f0 = local_f0 & *(uint *)((longlong)FVar19 + (longlong)iVar22 * 4);
    while (local_f0 == 0) {
      lVar16 = (longlong)iVar22;
      uVar23 = uVar23 + 0x20;
      iVar22 = iVar22 + 1;
      local_f4 = uVar12;
      if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar22)
      goto LAB_1424fd039;
      local_f0 = *(uint *)((undefined1 *)((longlong)FVar19 + 4) + lVar16 * 4);
    }
    uVar15 = (ulonglong)(-local_f0 & local_f0) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_d4 = (uint)lVar16;
    local_f4 = (uVar23 - 1) + local_d4;
    if ((int)uVar12 < (int)local_f4) {
      local_f4 = uVar12;
    }
  }
LAB_1424fd039:
  uVar23 = local_f4;
  EVar26 = None;
  pFVar20 = param_1;
  while( true ) {
    if (*(int *)&(pFVar20->CachedBatches).field_0x8 - *(int *)&(pFVar20->CachedBatches).field_0x34
        != local_60) {
      local_f7[0] = 0;
      `TSparseArray<FSlateRenderBatch,FDefaultSparseArrayAllocator>::TRangedForConstIterator::
      operator!='::__l2::<lambda_1>::operator()(local_f7);
    }
    if (((local_80.CurrentBitIndex == uVar23) && ((FName)local_80.Array == local_e0)) &&
       (pFVar20 == param_1)) break;
    pFVar21 = (FScriptContainerElement *)
              (*(longlong *)&pFVar20->CachedBatches + (longlong)local_80.CurrentBitIndex * 0x90);
    if ((*(ushort *)(pFVar21 + 0x88) & 0x100) == 0) {
      pFVar13 = (pFVar4->RenderBatches).AllocatorInstance.Data;
      if (((pFVar13 <= pFVar21) &&
          (pFVar21 < pFVar13 + (longlong)(pFVar4->RenderBatches).ArrayMax * 0x90)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar14 = (pFVar4->RenderBatches).ArrayNum;
      if (iVar14 == (pFVar4->RenderBatches).ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1090,(ForAnyElementType *)pFVar4,&(pFVar4->RenderBatches).ArrayMax);
      }
      (pFVar4->RenderBatches).ArrayNum = iVar14 + 1;
      pFVar13 = (pFVar4->RenderBatches).AllocatorInstance.Data;
    }
    else {
      pFVar13 = (pFVar5->RenderBatches).AllocatorInstance.Data;
      if (((pFVar13 <= pFVar21) && (pFVar21 < pFVar13 + (longlong)*piVar1 * 0x90)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar14 = (pFVar5->RenderBatches).ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1090,(ForAnyElementType *)pFVar5,piVar1);
      }
      (pFVar5->RenderBatches).ArrayNum = iVar14 + 1;
      pFVar13 = (pFVar5->RenderBatches).AllocatorInstance.Data;
    }
    lVar16 = (longlong)iVar14;
    uVar8 = *(undefined8 *)(pFVar21 + 8);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90) = *(undefined8 *)pFVar21;
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 8) = uVar8;
    uVar8 = *(undefined8 *)(pFVar21 + 0x18);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x10) = *(undefined8 *)(pFVar21 + 0x10);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x10 + 8) = uVar8;
    uVar8 = *(undefined8 *)(pFVar21 + 0x28);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x20) = *(undefined8 *)(pFVar21 + 0x20);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x20 + 8) = uVar8;
    uVar8 = *(undefined8 *)(pFVar21 + 0x38);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x30) = *(undefined8 *)(pFVar21 + 0x30);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x30 + 8) = uVar8;
    uVar8 = *(undefined8 *)(pFVar21 + 0x48);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x40) = *(undefined8 *)(pFVar21 + 0x40);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x40 + 8) = uVar8;
    uVar8 = *(undefined8 *)(pFVar21 + 0x58);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x50) = *(undefined8 *)(pFVar21 + 0x50);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x50 + 8) = uVar8;
    uVar8 = *(undefined8 *)(pFVar21 + 0x68);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x60) = *(undefined8 *)(pFVar21 + 0x60);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x60 + 8) = uVar8;
    uVar8 = *(undefined8 *)(pFVar21 + 0x78);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x70) = *(undefined8 *)(pFVar21 + 0x70);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x70 + 8) = uVar8;
    uVar8 = *(undefined8 *)(pFVar21 + 0x88);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x80) = *(undefined8 *)(pFVar21 + 0x80);
    *(undefined8 *)(pFVar13 + lVar16 * 0x90 + 0x80 + 8) = uVar8;
    EVar26 = EVar26 | (byte)pFVar21[0x8d];
    local_80.UnvisitedBitMask = local_80.UnvisitedBitMask & ~local_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
    pFVar20 = local_88;
  }
  uVar23 = 0;
  this->UsedSlatePostBuffers = this->UsedSlatePostBuffers | EVar26;
  if (0 < (param_1->CachedClipStates).ArrayNum) {
    this_00 = &param_1->CachedClipStates;
    lVar16 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar23 < (param_1->CachedClipStates).ArrayNum) {
        uVar12 = ~uVar23 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)((this_00->AllocatorInstance).Data + lVar16 + 8);
      if ((lVar6 == 0) || (*(int *)(lVar6 + 8) != 1)) {
        uVar23 = uVar23 + 1;
        lVar16 = lVar16 + 0x10;
      }
      else {
        uVar12 = 0;
        if ((int)uVar23 < (param_1->CachedClipStates).ArrayNum) {
          uVar12 = ~uVar23 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TArray<FSlateCachedClipState,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar23);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(param_1->CachedClipStates).ArrayNum,
                   &(param_1->CachedClipStates).ArrayMax);
      }
    } while ((int)uVar23 < (param_1->CachedClipStates).ArrayNum);
  }
  FCsvProfiler::RecordCustomStat
            ("Paint/RecachedElements",_GCsvCategory_Slate.Index,local_ec,Accumulate);
  FCsvProfiler::RecordCustomStat
            ("Paint/RecachedEmptyDrawLists",_GCsvCategory_Slate.Index,local_e8,Accumulate);
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// AddCustomElement @ 1424fd520

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddCustomElement
          (FSlateElementBatcher *this,FSlateCustomDrawerElement *param_1)

{
  schar sVar1;
  int iVar2;
  ICustomSlateElement *pIVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FSlateRenderBatch *pFVar6;
  FSlateClippingState *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TVector4<float>_u_0 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar2 = (int)param_1->_padding_;
  pTVar8 = (param_1->CustomDrawer).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1424fd563;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    pIVar3 = (param_1->CustomDrawer).Object;
    if (pIVar3 != (ICustomSlateElement *)0x0) {
      sVar1 = *(schar *)((longlong)&param_1->_padding_ + 2);
      local_38._0_8_ = 0;
      local_38._8_8_ = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      uStack_10 = 0;
      if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
        pFVar6 = FSlateBatchData::AddRenderBatch
                           (this->BatchData,iVar2,(FShaderParams *)&local_38._s_0,
                            (FSlateShaderResource *)0x0,None,Default,None,None,sVar1);
      }
      else {
        pFVar6 = FSlateCachedElementList::AddRenderBatch
                           (this->CurrentCachedElementList,iVar2,(FShaderParams *)&local_38._s_0,
                            (FSlateShaderResource *)0x0,None,Default,None,None,sVar1);
      }
      pFVar7 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
      pFVar6->ClippingState = pFVar7;
      pFVar6->bIsMergable = '\0';
      pFVar6->CustomDrawer = pIVar3;
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,this);
    }
  }
LAB_1424fd563:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// AddCustomVerts @ 1424fd630

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddCustomVerts(FSlateElementBatcher *this,FSlateCustomVertsElement *param_1)

{
  ESlateDrawEffect EVar1;
  schar sVar2;
  ESlateBatchDrawFlag EVar3;
  int iVar4;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar5;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar6;
  code *pcVar7;
  ESlatePostRT EVar8;
  bool bVar9;
  int iVar10;
  FSlateRenderBatch *pFVar11;
  FSlateClippingState *pFVar12;
  FSlateShaderResource *pFVar13;
  TVector4<float>_u_0 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar4 = (int)param_1->_padding_;
  if (0 < (param_1->Vertices).ArrayNum) {
    EVar1 = *(ESlateDrawEffect *)((longlong)&param_1->_padding_ + 3);
    EVar3 = (ESlateBatchDrawFlag)param_1->_padding_;
    pFVar13 = (FSlateShaderResource *)0x0;
    if (param_1->ResourceProxy != (FSlateShaderResourceProxy *)0x0) {
      pFVar13 = param_1->ResourceProxy->Resource;
    }
    sVar2 = *(schar *)((longlong)&param_1->_padding_ + 2);
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
      pFVar11 = FSlateBatchData::AddRenderBatch
                          (this->BatchData,iVar4,(FShaderParams *)&local_38._s_0,pFVar13,
                           TriangleList,Custom,EVar1,EVar3,sVar2);
    }
    else {
      pFVar11 = FSlateCachedElementList::AddRenderBatch
                          (this->CurrentCachedElementList,iVar4,(FShaderParams *)&local_38._s_0,
                           pFVar13,TriangleList,Custom,EVar1,EVar3,sVar2);
    }
    pFVar12 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
    pFVar11->ClippingState = pFVar12;
    if (pFVar13 != (FSlateShaderResource *)0x0) {
      EVar8 = (**(code **)(pFVar13->_padding_ + 0x20))(pFVar13);
      pFVar11->CachedUsedPostBuffers = EVar8;
      this->UsedSlatePostBuffers = this->UsedSlatePostBuffers | EVar8;
    }
    pFVar11->bIsMergable = '\0';
    pTVar5 = pFVar11->SourceVertices;
    pFVar11->InstanceCount = param_1->NumInstances;
    pFVar11->InstanceOffset = param_1->InstanceOffset;
    pFVar11->InstanceData = param_1->InstanceData;
    if (pTVar5 == (TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                   *)&param_1->Vertices) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar4 = (param_1->Vertices).ArrayNum;
    if (iVar4 != 0) {
      iVar10 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (0x2c,4,iVar4,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,
                          &pTVar5->ArrayMax);
      memcpy((void *)((longlong)iVar10 * 0x2c + (pTVar5->AllocatorInstance)._padding_),
             (param_1->Vertices).AllocatorInstance.Data,(longlong)iVar4 * 0x2c);
    }
    pFVar11->NumVertices = pFVar11->NumVertices + (param_1->Vertices).ArrayNum;
    pTVar6 = pFVar11->SourceIndices;
    if (pTVar6 == (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                   *)&param_1->Indices) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar4 = (param_1->Indices).ArrayNum;
    if (iVar4 != 0) {
      iVar10 = UE::Core::Private::
               ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                         (4,4,iVar4,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,&pTVar6->ArrayMax);
      memcpy((void *)((pTVar6->AllocatorInstance)._padding_ + (longlong)iVar10 * 4),
             (param_1->Indices).AllocatorInstance.Data,(longlong)iVar4 << 2);
    }
    pFVar11->NumIndices = pFVar11->NumIndices + (param_1->Indices).ArrayNum;
  }
  return;
}

// AddElements @ 1424fd940

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddElements(FSlateElementBatcher *this,FSlateWindowElementList *param_1)

{
  atomic<unsigned_int> *paVar1;
  FTaskHandle *pFVar2;
  ForElementType<FSlateCachedElementData_*> FVar3;
  atomic<unsigned_int> aVar4;
  FTaskBase *pFVar5;
  TVector2<float>_u_0_s_0 TVar6;
  FName FVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_SlateAddElements> FVar15;
  SWindow *pSVar16;
  FThreadSafeStaticStat<FStat_STAT_SlateElements> FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_SlateElements_Box> FVar20;
  FThreadSafeStaticStat<FStat_STAT_SlateElements_Border> FVar21;
  FThreadSafeStaticStat<FStat_STAT_SlateElements_Text> FVar22;
  FThreadSafeStaticStat<FStat_STAT_SlateElements_ShapedText> FVar23;
  FThreadSafeStaticStat<FStat_STAT_SlateElements_Line> FVar24;
  FThreadSafeStaticStat<FStat_STAT_SlateElements_Other> FVar25;
  FThreadSafeStaticStat<FStat_STAT_SlateInvalidation_RecachedElements> FVar26;
  FTaskBase *pFVar27;
  TVector2<float>_u_0 *pTVar28;
  FName FVar29;
  uchar auVar30 [8];
  ForElementType<FSlateCachedElementData_*> FVar31;
  bool bVar32;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FStatMessage local_128;
  FStatMessage local_118;
  FStatMessage local_108;
  FStatMessage local_f8;
  FStatMessage local_e8;
  FStatMessage local_d8;
  FStatMessage local_c8;
  FStatMessage local_b8;
  FName local_a8;
  longlong local_a0;
  longlong local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddElements");
  bVar32 = -1 < CpuChannel->Enabled;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId305,"Slate::AddElements",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
               ,0x131);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId305);
  }
  FVar15 = StatPtr_STAT_SlateAddElements;
  if (StatPtr_STAT_SlateAddElements == (FThreadSafeStaticStat<FStat_STAT_SlateAddElements>)0x0) {
    pFVar14 = ::FName::FName(&local_a8,"STAT_SlateAddElements");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_SlateAddElements>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateAddElements,*pFVar14,
                        L"Add Elements Time","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar15;
  bVar10 = false;
  bVar9 = false;
  bVar12 = false;
  bVar11 = false;
  if ((FVar29.ComparisonIndex.Value.Value == 0) && (FVar29.Number == 0)) {
LAB_1424fdb08:
    bVar10 = bVar12;
    bVar9 = bVar11;
    bVar11 = false;
    FVar29.ComparisonIndex.Value = 0;
    FVar29.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_res20.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                   ,0x133);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1424fdb08;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar11 = true;
  }
  pFVar2 = &param_1->MergeBatchDataTask;
  this->ElementStat_Line = 0;
  this->ElementStat_Other = 0;
  this->ElementStat_Boxes = 0;
  this->ElementStat_Borders = 0;
  this->ElementStat_Text = 0;
  this->ElementStat_ShapedText = 0;
  this->ElementStat_RecachedElements = 0;
  pFVar5 = (pFVar2->Pimpl).Reference;
  pFVar27 = (FTaskBase *)0x0;
  if (pFVar5 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar5);
    pFVar27 = (pFVar2->Pimpl).Reference;
  }
  if ((pFVar2 != (FTaskHandle *)&local_a0) &&
     ((pFVar2->Pimpl).Reference = (FTaskBase *)0x0, pFVar27 != (FTaskBase *)0x0)) {
    LOCK();
    paVar1 = &pFVar27->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar27->_padding_)(pFVar27,1);
    }
  }
  this->BatchData = &param_1->BatchData;
  pFVar5 = (pFVar2->Pimpl).Reference;
  if (pFVar5 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar5);
  }
  if (pFVar2 != (FTaskHandle *)&local_98) {
    pFVar5 = (pFVar2->Pimpl).Reference;
    (pFVar2->Pimpl).Reference = (FTaskBase *)0x0;
    if (pFVar5 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar5->RefCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  this->BatchDataHDR = &param_1->BatchDataHDR;
  if (((this->BatchData->RenderBatches).ArrayNum != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("BatchData->GetRenderBatches().Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                          ,0x141,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->BatchDataHDR->RenderBatches).ArrayNum != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("BatchDataHDR->GetRenderBatches().Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                          ,0x142,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pSVar16 = FSlateWindowElementList::GetPaintWindow(param_1);
  pTVar28 = (TVector2<float>_u_0 *)&pSVar16->ViewportSize;
  if (*(float *)&((FDeprecateSlateVector2D *)pTVar28)->field_0x0 == 0.0) {
    pTVar28 = (TVector2<float>_u_0 *)&pSVar16->Size;
  }
  TVar6 = pTVar28->_s_0;
  this->PrecachedClippingStates = &(param_1->ClippingManager).ClippingStates;
  AddElementsInternal(this,&param_1->UncachedDrawElements,(TVector2<float>)TVar6);
  iVar13 = (param_1->CachedElementDataList).ArrayNum;
  FVar31 = (param_1->CachedElementDataList).AllocatorInstance.SecondaryData;
  if (FVar31 == (ForElementType<FSlateCachedElementData_*>)0x0) {
    FVar31 = (ForElementType<FSlateCachedElementData_*>)&param_1->CachedElementDataList;
  }
  if (iVar13 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (iVar13 == 0) goto LAB_1424fdd32;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddCachedElements");
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId336,"Slate::AddCachedElements",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
               ,0x150);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId336);
  }
  FVar3 = (ForElementType<FSlateCachedElementData_*>)((longlong)FVar31 + (longlong)iVar13 * 8);
  for (; FVar31 != FVar3; FVar31 = (ForElementType<FSlateCachedElementData_*>)((longlong)FVar31 + 8)
      ) {
    if (*(FSlateCachedElementData **)FVar31 != (FSlateCachedElementData *)0x0) {
      AddCachedElements(this,*(FSlateCachedElementData **)FVar31,(TVector2<float>)TVar6);
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
LAB_1424fdd32:
  FSlateWindowElementList::StartMergeRenderBatches(param_1);
  iVar13 = this->ElementStat_Borders + this->ElementStat_Other + this->ElementStat_Line +
           this->ElementStat_Text + this->ElementStat_Boxes + this->ElementStat_ShapedText;
  this->BatchData = (FSlateBatchData *)0x0;
  this->BatchDataHDR = (FSlateBatchData *)0x0;
  this->PrecachedClippingStates = (TArray<FSlateClippingState,TSizedDefaultAllocator<32>_> *)0x0;
  if ((iVar13 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar17 = StatPtr_STAT_SlateElements;
    if (StatPtr_STAT_SlateElements == (FThreadSafeStaticStat<FStat_STAT_SlateElements>)0x0) {
      pFVar14 = ::FName::FName(&local_90,"STAT_SlateElements");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_SlateElements>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements,*pFVar14,
                          L"Elements","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar7 = *(FName *)FVar17;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_128.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_168 = FVar7;
      local_128.StatData.Pad = (uchar  [8])(longlong)iVar13;
      local_128.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_128);
      FStatsTrace::Add(&local_168,(longlong)iVar13);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  auVar30 = (uchar  [8])(longlong)this->ElementStat_Boxes;
  if ((auVar30 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar20 = StatPtr_STAT_SlateElements_Box;
    if (StatPtr_STAT_SlateElements_Box == (FThreadSafeStaticStat<FStat_STAT_SlateElements_Box>)0x0)
    {
      pFVar14 = ::FName::FName(&local_88,"STAT_SlateElements_Box");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_SlateElements_Box>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements_Box,*pFVar14,
                          L"Elements (Box)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar7 = *(FName *)FVar20;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_118.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_160 = FVar7;
      local_118.StatData.Pad = auVar30;
      local_118.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_118);
      FStatsTrace::Add(&local_160,(long64)auVar30);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  auVar30 = (uchar  [8])(longlong)this->ElementStat_Borders;
  if ((auVar30 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar21 = StatPtr_STAT_SlateElements_Border;
    if (StatPtr_STAT_SlateElements_Border ==
        (FThreadSafeStaticStat<FStat_STAT_SlateElements_Border>)0x0) {
      pFVar14 = ::FName::FName(&local_80,"STAT_SlateElements_Border");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_SlateElements_Border>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements_Border,*pFVar14,
                          L"Elements (Border)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
                          true,ST_int64,false,false,MCR_Invalid);
    }
    FVar7 = *(FName *)FVar21;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_108.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_158 = FVar7;
      local_108.StatData.Pad = auVar30;
      local_108.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_108);
      FStatsTrace::Add(&local_158,(long64)auVar30);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  auVar30 = (uchar  [8])(longlong)this->ElementStat_Text;
  if ((auVar30 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar22 = StatPtr_STAT_SlateElements_Text;
    if (StatPtr_STAT_SlateElements_Text == (FThreadSafeStaticStat<FStat_STAT_SlateElements_Text>)0x0
       ) {
      pFVar14 = ::FName::FName(&local_78,"STAT_SlateElements_Text");
      FVar22 = (FThreadSafeStaticStat<FStat_STAT_SlateElements_Text>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements_Text,*pFVar14,
                          L"Elements (Text)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true
                          ,ST_int64,false,false,MCR_Invalid);
    }
    FVar7 = *(FName *)FVar22;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_f8.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_150 = FVar7;
      local_f8.StatData.Pad = auVar30;
      local_f8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_f8);
      FStatsTrace::Add(&local_150,(long64)auVar30);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  auVar30 = (uchar  [8])(longlong)this->ElementStat_ShapedText;
  if ((auVar30 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar23 = StatPtr_STAT_SlateElements_ShapedText;
    if (StatPtr_STAT_SlateElements_ShapedText ==
        (FThreadSafeStaticStat<FStat_STAT_SlateElements_ShapedText>)0x0) {
      pFVar14 = ::FName::FName(&local_70,"STAT_SlateElements_ShapedText");
      FVar23 = (FThreadSafeStaticStat<FStat_STAT_SlateElements_ShapedText>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements_ShapedText,
                          *pFVar14,L"Elements (ShapedText)","STATGROUP_Slate","STATCAT_Advanced",
                          L"Slate",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar7 = *(FName *)FVar23;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_e8.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_148 = FVar7;
      local_e8.StatData.Pad = auVar30;
      local_e8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_e8);
      FStatsTrace::Add(&local_148,(long64)auVar30);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  auVar30 = (uchar  [8])(longlong)this->ElementStat_Line;
  if ((auVar30 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar24 = StatPtr_STAT_SlateElements_Line;
    if (StatPtr_STAT_SlateElements_Line == (FThreadSafeStaticStat<FStat_STAT_SlateElements_Line>)0x0
       ) {
      pFVar14 = ::FName::FName(&local_68,"STAT_SlateElements_Line");
      FVar24 = (FThreadSafeStaticStat<FStat_STAT_SlateElements_Line>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements_Line,*pFVar14,
                          L"Elements (Line)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true
                          ,ST_int64,false,false,MCR_Invalid);
    }
    FVar7 = *(FName *)FVar24;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_d8.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_140 = FVar7;
      local_d8.StatData.Pad = auVar30;
      local_d8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_d8);
      FStatsTrace::Add(&local_140,(long64)auVar30);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  auVar30 = (uchar  [8])(longlong)this->ElementStat_Other;
  if ((auVar30 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar25 = StatPtr_STAT_SlateElements_Other;
    if (StatPtr_STAT_SlateElements_Other ==
        (FThreadSafeStaticStat<FStat_STAT_SlateElements_Other>)0x0) {
      pFVar14 = ::FName::FName(&local_60,"STAT_SlateElements_Other");
      FVar25 = (FThreadSafeStaticStat<FStat_STAT_SlateElements_Other>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements_Other,*pFVar14,
                          L"Elements (Other)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
                          true,ST_int64,false,false,MCR_Invalid);
    }
    FVar7 = *(FName *)FVar25;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_c8.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_138 = FVar7;
      local_c8.StatData.Pad = auVar30;
      local_c8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_c8);
      FStatsTrace::Add(&local_138,(long64)auVar30);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  auVar30 = (uchar  [8])(longlong)this->ElementStat_RecachedElements;
  if ((auVar30 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar26 = StatPtr_STAT_SlateInvalidation_RecachedElements;
    if (StatPtr_STAT_SlateInvalidation_RecachedElements ==
        (FThreadSafeStaticStat<FStat_STAT_SlateInvalidation_RecachedElements>)0x0) {
      pFVar14 = ::FName::FName(local_58,"STAT_SlateInvalidation_RecachedElements");
      FVar26 = (FThreadSafeStaticStat<FStat_STAT_SlateInvalidation_RecachedElements>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SlateInvalidation_RecachedElements,*pFVar14,
                          L"Invalidation: Recached Elements","STATGROUP_Slate","STATCAT_Advanced",
                          L"Slate",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar7 = *(FName *)FVar26;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_b8.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_130 = FVar7;
      local_b8.StatData.Pad = auVar30;
      local_b8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_b8);
      FStatsTrace::Add(&local_130,(long64)auVar30);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar29,CycleScopeEnd);
  }
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// AddElementsInternal @ 1424fe870

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddElementsInternal
          (FSlateElementBatcher *this,
          TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          *param_1,TVector2<float> param_2)

{
  int iVar1;
  int iVar2;
  float afVar3 [2];
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  FSlateClippingState *pFVar7;
  FSlateDrawElement *pFVar8;
  float afVar9 [2];
  FSlateBoxElement *pFVar10;
  FSlateTextElement *pFVar11;
  FSlateShapedTextElement *pFVar12;
  FSlateSplineElement *pFVar13;
  FSlateGradientElement *pFVar14;
  FSlateViewportElement *pFVar15;
  FSlateCustomVertsElement *pFVar16;
  FSlatePostProcessElement *pFVar17;
  FSlateDrawElement *pFVar18;
  FSlateTextElement *pFVar19;
  FSlateShapedTextElement *pFVar20;
  FSlateBoxElement *pFVar21;
  FSlateSplineElement *pFVar22;
  FSlateGradientElement *pFVar23;
  FSlateViewportElement *pFVar24;
  float afVar25 [2];
  FSlateCustomVertsElement *pFVar26;
  FSlatePostProcessElement *pFVar27;
  bool bVar28;
  char local_res10 [8];
  TVector2<float>_u_0 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  FSlateRenderBatch *local_c0;
  <lambda_3> local_b8;
  <lambda_2> local_b0;
  <lambda_1> local_a8;
  <lambda_3> local_a0;
  <lambda_2> local_98;
  <lambda_1> local_90;
  <lambda_3> local_88;
  <lambda_2> local_80;
  <lambda_1> local_78 [2];
  TVector4<float>_u_0 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_res18 = param_2.field0_0x0;
  if (0 < *(int *)&param_1->field_0x10) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddBoxElements");
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId379,"Slate::AddBoxElements",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x17b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId379);
    }
    this->ElementStat_Boxes = this->ElementStat_Boxes + *(int *)&param_1->field_0x10;
    local_b8.DrawElements =
         (TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_> *)
         param_1;
    local_b0.__this = this;
    local_a8.__this = this;
    GenerateIndexedVertexBatches<FSlateBoxElement,_FSlateElementBatcher::AddBoxElements<FSlateBoxElement>_::__l2::<lambda_1>_&,_FSlateElementBatcher::AddBoxElements<FSlateBoxElement>_::__l2::<lambda_2>_&,_FSlateElementBatcher::AddBoxElements<FSlateBoxElement>_::__l2::<lambda_3>_&>
              (this,(TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                     *)param_1,&local_a8,&local_b0,&local_b8);
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0 < *(int *)&param_1->field_0x130) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddRoundedBoxElements");
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId387,"Slate::AddRoundedBoxElements",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x183);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId387);
    }
    this->ElementStat_Boxes = this->ElementStat_Boxes + *(int *)&param_1->field_0x130;
    local_a0.DrawElements =
         (TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *)&param_1->field_0x120;
    local_98.__this = this;
    local_90.__this = this;
    GenerateIndexedVertexBatches<FSlateRoundedBoxElement,_FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>_::__l2::<lambda_1>_&,_FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>_::__l2::<lambda_2>_&,_FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>_::__l2::<lambda_3>_&>
              (this,(TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                     *)&param_1->field_0x120,&local_90,&local_98,&local_a0);
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0 < *(int *)&param_1->field_0xd0) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddBorderElement");
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId395,"Slate::AddBorderElement",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x18b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
    }
    this->ElementStat_Borders = this->ElementStat_Borders + *(int *)&param_1->field_0xd0;
    iVar1 = *(int *)&param_1->field_0xd0;
    pFVar21 = *(FSlateBoxElement **)&param_1->field_0xc0;
    pFVar10 = pFVar21 + iVar1;
    while( true ) {
      if (*(int *)&param_1->field_0xd0 != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FSlateBoxElement_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar21 == pFVar10) break;
      if ((pFVar21->_padding_ & 0x10000000) == 0) {
        AddBorderElement<1>(this,pFVar21);
        pFVar21 = pFVar21 + 1;
      }
      else {
        AddBorderElement<0>(this,pFVar21);
        pFVar21 = pFVar21 + 1;
      }
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0 < *(int *)&param_1->field_0x40) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddTextElement");
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId406,"Slate::AddTextElement",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x196);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId406);
    }
    this->ElementStat_Text = this->ElementStat_Text + *(int *)&param_1->field_0x40;
    iVar1 = *(int *)&param_1->field_0x40;
    pFVar19 = *(FSlateTextElement **)&param_1->field_0x30;
    pFVar11 = pFVar19 + iVar1;
    while( true ) {
      if (*(int *)&param_1->field_0x40 != iVar1) {
        local_c8 = 0;
        `TCheckedPointerIterator<FSlateTextElement_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_c8);
      }
      if (pFVar19 == pFVar11) break;
      if ((pFVar19->_padding_ & 0x10000000) == 0) {
        AddTextElement<1>(this,pFVar19);
        pFVar19 = pFVar19 + 1;
      }
      else {
        AddTextElement<0>(this,pFVar19);
        pFVar19 = pFVar19 + 1;
      }
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0 < *(int *)&param_1->field_0x58) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddShapedTextElement");
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId417,"Slate::AddShapedTextElement",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x1a1);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId417);
    }
    iVar1 = *(int *)&param_1->field_0x58;
    pFVar20 = *(FSlateShapedTextElement **)&param_1->field_0x48;
    pFVar12 = pFVar20 + iVar1;
    while( true ) {
      if (*(int *)&param_1->field_0x58 != iVar1) {
        local_c7 = 0;
        `TCheckedPointerIterator<FSlateShapedTextElement_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_c7);
      }
      if (pFVar20 == pFVar12) break;
      if ((pFVar20->_padding_ & 0x10000000) == 0) {
        AddShapedTextElement<1>(this,pFVar20);
        pFVar20 = pFVar20 + 1;
      }
      else {
        AddShapedTextElement<0>(this,pFVar20);
        pFVar20 = pFVar20 + 1;
      }
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0 < *(int *)&param_1->field_0x88) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddLineElements");
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId428,"Slate::AddLineElements",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x1ac);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId428);
    }
    this->ElementStat_Line = this->ElementStat_Line + *(int *)&param_1->field_0x88;
    local_88.DrawElements =
         (TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_> *)
         &param_1->field_0x78;
    local_80.__this = this;
    local_78[0].__this = this;
    GenerateIndexedVertexBatches<FSlateLineElement,_FSlateElementBatcher::AddLineElements_::__l2::<lambda_1>_&,_FSlateElementBatcher::AddLineElements_::__l2::<lambda_2>_&,_FSlateElementBatcher::AddLineElements_::__l2::<lambda_3>_&>
              (this,(TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                     *)&param_1->field_0x78,local_78,&local_80,&local_88);
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0 < *(int *)&param_1->field_0x28) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddDebugQuadElement");
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId436,"Slate::AddDebugQuadElement",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x1b4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId436);
    }
    this->ElementStat_Other = this->ElementStat_Other + *(int *)&param_1->field_0x28;
    iVar1 = *(int *)&param_1->field_0x28;
    pFVar21 = *(FSlateBoxElement **)&param_1->field_0x18;
    pFVar10 = pFVar21 + iVar1;
    while( true ) {
      if (*(int *)&param_1->field_0x28 != iVar1) {
        local_c6 = 0;
        `TCheckedPointerIterator<FSlateBoxElement_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_c6);
      }
      if (pFVar21 == pFVar10) break;
      if ((pFVar21->_padding_ & 0x10000000) == 0) {
        AddDebugQuadElement<1>(this,pFVar21);
        pFVar21 = pFVar21 + 1;
      }
      else {
        AddDebugQuadElement<0>(this,pFVar21);
        pFVar21 = pFVar21 + 1;
      }
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0 < *(int *)&param_1->field_0x70) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddSplineElement");
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId447,"Slate::AddSplineElement",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x1bf);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId447);
    }
    this->ElementStat_Other = this->ElementStat_Other + *(int *)&param_1->field_0x70;
    iVar1 = *(int *)&param_1->field_0x70;
    pFVar22 = *(FSlateSplineElement **)&param_1->field_0x60;
    pFVar13 = pFVar22 + iVar1;
    while( true ) {
      if (*(int *)&param_1->field_0x70 != iVar1) {
        local_c5 = 0;
        `TCheckedPointerIterator<FSlateSplineElement_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_c5);
      }
      if (pFVar22 == pFVar13) break;
      AddSplineElement(this,pFVar22);
      pFVar22 = pFVar22 + 1;
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0 < *(int *)&param_1->field_0xa0) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddGradientElement");
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId460,"Slate::AddGradientElement",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x1cc);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId460);
    }
    this->ElementStat_Other = this->ElementStat_Other + *(int *)&param_1->field_0xa0;
    iVar1 = *(int *)&param_1->field_0xa0;
    pFVar23 = *(FSlateGradientElement **)&param_1->field_0x90;
    pFVar14 = pFVar23 + iVar1;
    while( true ) {
      if (*(int *)&param_1->field_0xa0 != iVar1) {
        local_c4 = 0;
        `TCheckedPointerIterator<FSlateGradientElement_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_c4);
      }
      if (pFVar23 == pFVar14) break;
      if ((pFVar23->_padding_ & 0x10000000) == 0) {
        AddGradientElement<1>(this,pFVar23);
        pFVar23 = pFVar23 + 1;
      }
      else {
        AddGradientElement<0>(this,pFVar23);
        pFVar23 = pFVar23 + 1;
      }
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0 < *(int *)&param_1->field_0xb8) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddViewportElement");
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId471,"Slate::AddViewportElement",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x1d7);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId471);
    }
    this->ElementStat_Other = this->ElementStat_Other + *(int *)&param_1->field_0xb8;
    iVar1 = *(int *)&param_1->field_0xb8;
    pFVar24 = *(FSlateViewportElement **)&param_1->field_0xa8;
    pFVar15 = pFVar24 + iVar1;
    while( true ) {
      if (*(int *)&param_1->field_0xb8 != iVar1) {
        local_c3 = 0;
        `TCheckedPointerIterator<FSlateViewportElement_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_c3);
      }
      if (pFVar24 == pFVar15) break;
      if ((pFVar24->_padding_ & 0x10000000) == 0) {
        AddViewportElement<1>(this,pFVar24);
        pFVar24 = pFVar24 + 1;
      }
      else {
        AddViewportElement<0>(this,pFVar24);
        pFVar24 = pFVar24 + 1;
      }
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0 < *(int *)&param_1->field_0xe8) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddCustomElement");
    if (CpuChannel->Enabled < 0) {
      local_res10[0] = '\0';
    }
    else {
      local_res10[0] = '\x01';
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId482,"Slate::AddCustomElement",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x1e2);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId482);
    }
    this->ElementStat_Other = this->ElementStat_Other + *(int *)&param_1->field_0xe8;
    iVar1 = *(int *)&param_1->field_0xe8;
    pFVar18 = *(FSlateDrawElement **)&param_1->field_0xd8;
    pFVar8 = (FSlateDrawElement *)((longlong)iVar1 * 0x58 + (longlong)pFVar18);
    while( true ) {
      if (*(int *)&param_1->field_0xe8 != iVar1) {
        local_c2 = 0;
        `TCheckedPointerIterator<FSlateCustomDrawerElement_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_c2);
      }
      param_2.field0_0x0 = local_res18;
      afVar9[0] = 0.0;
      afVar9[1] = 0.0;
      if (pFVar18 == pFVar8) break;
      afVar3 = pFVar18[1].RenderTransform.M.M[1];
      iVar2 = pFVar18->LayerId;
      afVar25 = afVar3;
      if (afVar3 == (float  [2])0x0) {
LAB_1424ff113:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)afVar25);
        pFVar18 = (FSlateDrawElement *)&pFVar18[1].RenderTransform.Trans;
      }
      else {
        aVar5 = *(atomic<int> *)((longlong)afVar3 + 8);
        do {
          afVar25 = afVar9;
          if (aVar5 == (atomic<int>)0x0) goto LAB_1424ff113;
          LOCK();
          aVar6 = *(atomic<int> *)((longlong)afVar3 + 8);
          bVar28 = aVar5 == aVar6;
          if (bVar28) {
            *(atomic<int> *)((longlong)afVar3 + 8) = (atomic<int>)((int)aVar5 + 1);
            aVar6 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar6;
        } while (!bVar28);
        afVar9 = pFVar18[1].RenderTransform.M.M[0];
        afVar25 = afVar3;
        if (afVar9 == (float  [2])0x0) goto LAB_1424ff113;
        local_68._0_8_ = 0;
        local_68._8_8_ = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
          local_c0 = FSlateBatchData::AddRenderBatch
                               (this->BatchData,iVar2,(FShaderParams *)&local_68._s_0,
                                (FSlateShaderResource *)0x0,None,Default,None,None,
                                pFVar18->SceneIndex);
        }
        else {
          local_c0 = FSlateCachedElementList::AddRenderBatch
                               (this->CurrentCachedElementList,iVar2,(FShaderParams *)&local_68._s_0
                                ,(FSlateShaderResource *)0x0,None,Default,None,None,
                                pFVar18->SceneIndex);
        }
        pFVar7 = ResolveClippingState(this,pFVar18);
        local_c0->ClippingState = pFVar7;
        local_c0->bIsMergable = '\0';
        local_c0->CustomDrawer = (ICustomSlateElement *)afVar9;
        (**(code **)((longlong)*(ICustomSlateElement *)afVar9 + 8))(afVar9);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)afVar3);
        pFVar18 = (FSlateDrawElement *)&pFVar18[1].RenderTransform.Trans;
      }
    }
    if (local_res10[0] != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0 < *(int *)&param_1->field_0x100) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddCustomVertsElement");
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId493,"Slate::AddCustomVertsElement",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x1ed);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId493);
    }
    this->ElementStat_Other = this->ElementStat_Other + *(int *)&param_1->field_0x100;
    iVar1 = *(int *)&param_1->field_0x100;
    pFVar26 = *(FSlateCustomVertsElement **)&param_1->field_0xf0;
    pFVar16 = pFVar26 + iVar1;
    while( true ) {
      if (*(int *)&param_1->field_0x100 != iVar1) {
        local_res10[0] = '\0';
        `TCheckedPointerIterator<FSlateCustomVertsElement_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar26 == pFVar16) break;
      AddCustomVerts(this,pFVar26);
      pFVar26 = pFVar26 + 1;
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0 < *(int *)&param_1->field_0x118) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::AddPostProcessElement");
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId504,"Slate::AddPostProcessElement",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0x1f8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId504);
    }
    this->ElementStat_Other = this->ElementStat_Other + *(int *)&param_1->field_0x118;
    iVar1 = *(int *)&param_1->field_0x118;
    pFVar27 = *(FSlatePostProcessElement **)&param_1->field_0x108;
    pFVar17 = pFVar27 + iVar1;
    while( true ) {
      if (*(int *)&param_1->field_0x118 != iVar1) {
        local_c1 = 0;
        `TCheckedPointerIterator<FSlatePostProcessElement_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_c1);
      }
      if (pFVar27 == pFVar17) break;
      AddPostProcessPass(this,pFVar27,param_2);
      pFVar27 = pFVar27 + 1;
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((*(int *)&param_1->field_0x148 != 0) &&
     (bVar28 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3580957931119575554>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                          ,0x202,"Container.IsEmpty()"), bVar28)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// AddLineElements @ 1424ff840

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddLineElements
          (FSlateElementBatcher *this,
          TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  <lambda_3> local_res8;
  <lambda_2> local_res10;
  <lambda_1> local_res18 [2];
  
  local_res8.DrawElements = param_1;
  local_res10.__this = this;
  local_res18[0].__this = this;
  GenerateIndexedVertexBatches<FSlateLineElement,_FSlateElementBatcher::AddLineElements_::__l2::<lambda_1>_&,_FSlateElementBatcher::AddLineElements_::__l2::<lambda_2>_&,_FSlateElementBatcher::AddLineElements_::__l2::<lambda_3>_&>
            (this,param_1,local_res18,&local_res10,&local_res8);
  return;
}

// AddPostProcessPass @ 1424ff880

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddPostProcessPass
          (FSlateElementBatcher *this,FSlatePostProcessElement *param_1,TVector2<float> param_2)

{
  schar sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FSlateBatchData *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  FSlateRenderBatch *pFVar10;
  FSlateClippingState *pFVar11;
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar15 [16];
  float local_res8;
  float fStackX_c;
  float local_res10;
  float fStackX_14;
  float local_res18;
  float fStackX_1c;
  TVector4<float>_u_0 local_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  
  this->NumPostProcessPasses = this->NumPostProcessPasses + 1;
  iVar2 = *(int *)&param_1->field_0x28;
  fStackX_14 = (float)((ulonglong)*(undefined8 *)&param_1->field_0x20 >> 0x20);
  local_res10 = (float)*(undefined8 *)&param_1->field_0x20;
  fVar13 = *(float *)&param_1->field_0x4 * local_res10;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  fStackX_c = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  auVar15 = roundps(unaff_XMM11,
                    ZEXT416((uint)(*(float *)&param_1->field_0x4 * local_res8 +
                                   *(float *)&param_1->field_0xc * fStackX_c +
                                   *(float *)&param_1->field_0x14 + __real_3f000000)),1);
  auVar12 = roundps(in_XMM4,ZEXT416((uint)(*(float *)&param_1->field_0xc * fStackX_14 + fVar13 +
                                           *(float *)&param_1->field_0x14 + __real_3f000000)),1);
  auVar14 = roundps(ZEXT416((uint)fVar13),
                    ZEXT416((uint)(*(float *)&param_1->field_0x8 * fStackX_14 +
                                   *(float *)param_1 * local_res10 + *(float *)&param_1->field_0x10
                                  + __real_3f000000)),1);
  local_b8._s_0.Z = (float)auVar14._0_4_;
  auVar14 = roundps(in_XMM3,ZEXT416((uint)(*(float *)param_1 * local_res8 +
                                           *(float *)&param_1->field_0x8 * fStackX_c +
                                           *(float *)&param_1->field_0x10 + __real_3f000000)),1);
  local_b8._s_0.X = (float)auVar14._0_4_;
  local_b8._s_0.W = (float)auVar12._0_4_;
  local_b8._s_0.Y = (float)auVar15._0_4_;
  local_res18 = param_2.field0_0x0._0_4_;
  if ((0.0 < (local_b8._s_0.Z - local_b8._s_0.X) / local_res18) &&
     (fStackX_1c = param_2.field0_0x0._4_4_, 0.0 < (local_b8._s_0.W - local_b8._s_0.Y) / fStackX_1c)
     ) {
    local_a8 = (param_1->PostProcessData).field0_0x0._s_0.X;
    uVar6 = *(undefined8 *)&(param_1->CornerRadius).field0_0x0;
    uVar7 = *(undefined8 *)((longlong)&(param_1->CornerRadius).field0_0x0 + 8);
    pFVar5 = this->BatchData;
    fStack_a4 = (param_1->PostProcessData).field0_0x0._s_0.Y;
    sVar1 = param_1->field_0x42;
    uStack_9c = 0;
    fStack_a0 = (float)param_1->DownsampleAmount;
    local_98 = uVar6;
    uStack_90 = uVar7;
    if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
      iVar3 = (pFVar5->UncachedSourceBatchVertices).ArrayNum;
      piVar8 = &(pFVar5->RenderBatches).ArrayMax;
      iVar4 = (pFVar5->UncachedSourceBatchIndices).ArrayNum;
      iVar9 = (pFVar5->RenderBatches).ArrayNum;
      if (iVar9 == *piVar8) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1090,(ForAnyElementType *)pFVar5,piVar8);
      }
      (pFVar5->RenderBatches).ArrayNum = iVar9 + 1;
      pFVar10 = (FSlateRenderBatch *)
                ((pFVar5->RenderBatches).AllocatorInstance.Data + (longlong)iVar9 * 0x90);
      *(ulonglong *)&(pFVar10->ShaderParams).PixelParams.field0_0x0 =
           CONCAT44(local_b8._s_0.Y,local_b8._s_0.X);
      *(ulonglong *)((longlong)&(pFVar10->ShaderParams).PixelParams.field0_0x0 + 8) =
           CONCAT44(local_b8._s_0.W,local_b8._s_0.Z);
      pFVar10->ClippingState = (FSlateClippingState *)0x0;
      pFVar10->InstanceData = (ISlateUpdatableInstanceBufferRenderProxy *)0x0;
      pFVar10->CustomDrawer = (ICustomSlateElement *)0x0;
      pFVar10->NumVertices = 0;
      pFVar10->NumIndices = 0;
      pFVar10->InstanceCount = 0;
      pFVar10->InstanceOffset = 0;
      pFVar10->DrawEffects = None;
      pFVar10->CachedUsedPostBuffers = None;
      *(ulonglong *)&(pFVar10->ShaderParams).PixelParams2.field0_0x0 = CONCAT44(fStack_a4,local_a8);
      *(ulonglong *)((longlong)&(pFVar10->ShaderParams).PixelParams2.field0_0x0 + 8) =
           CONCAT44(uStack_9c,fStack_a0);
      pFVar10->SourceVertices = &pFVar5->UncachedSourceBatchVertices;
      *(undefined8 *)&(pFVar10->ShaderParams).PixelParams3.field0_0x0 = uVar6;
      *(undefined8 *)((longlong)&(pFVar10->ShaderParams).PixelParams3.field0_0x0 + 8) = uVar7;
      (pFVar10->DynamicOffset).field0_0x0 = (TVector2<float>_u_0)0x0;
      pFVar10->ShaderResource = (FSlateShaderResource *)0x0;
      pFVar10->SourceIndices = &pFVar5->UncachedSourceBatchIndices;
      pFVar10->IndexOffset = iVar4;
      pFVar10->bIsMergable = '\x01';
      pFVar10->bIsMerged = '\0';
      pFVar10->LayerId = iVar2;
      pFVar10->VertexOffset = iVar3;
      pFVar10->NextBatchIndex = -1;
      pFVar10->DrawFlags = None;
      pFVar10->ShaderType = PostProcess;
      pFVar10->DrawPrimitiveType = TriangleList;
      pFVar10->SceneIndex = sVar1;
    }
    else {
      pFVar10 = FSlateCachedElementList::AddRenderBatch
                          (this->CurrentCachedElementList,iVar2,(FShaderParams *)&local_b8._s_0,
                           (FSlateShaderResource *)0x0,TriangleList,PostProcess,None,None,sVar1);
    }
    pFVar11 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
    pFVar10->ClippingState = pFVar11;
  }
  return;
}

// AddSplineElement @ 142500440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::AddSplineElement(FSlateElementBatcher *this,FSlateSplineElement *param_1)

{
  ESlateDrawEffect EVar1;
  schar sVar2;
  int iVar3;
  FSlateBatchData *pFVar4;
  TVector2<float>_u_0_s_0 TVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  FColor FVar12;
  FSlateRenderBatch *pFVar13;
  FSlateClippingState *pFVar14;
  undefined4 extraout_var;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_168 [32];
  FColor_u_0 local_114;
  undefined1 local_110 [8];
  FShaderParams local_108;
  FLinearColor_u_0 local_d8;
  FSplineBuilder local_c8;
  ulonglong local_90;
  FColor_u_0 *pFVar15;
  
  uVar10 = _UNK_150689648;
  uVar9 = ___xmm_3f800000000000000000000000000000;
  fVar8 = __real_3f000000;
  fVar7 = __real_3f800000;
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_168;
  fVar16 = param_1->Thickness;
  pFVar4 = this->BatchData;
  EVar1 = *(ESlateDrawEffect *)((longlong)&param_1->_padding_ + 3);
  iVar3 = (int)param_1->_padding_;
  sVar2 = *(schar *)((longlong)&param_1->_padding_ + 2);
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  local_108.PixelParams.field0_0x0._s_0.Y = 0.0;
  local_108.PixelParams.field0_0x0._s_0.Z = 0.0;
  local_108.PixelParams.field0_0x0._s_0.W = 0.0;
  local_108.PixelParams2.field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_108.PixelParams2.field0_0x0._8_8_ = _UNK_150689648;
  local_108.PixelParams3.field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_108.PixelParams3.field0_0x0._8_8_ = _UNK_150689648;
  fVar20 = fVar16 * __real_3f000000 + __real_3f800000;
  local_108.PixelParams.field0_0x0._s_0.X = (fVar16 * __real_3f000000 - __real_3f800000) / fVar20;
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    local_110._0_4_ = (pFVar4->UncachedSourceBatchIndices).ArrayNum;
    piVar6 = &(pFVar4->RenderBatches).ArrayMax;
    local_114 = (FColor_u_0)(pFVar4->UncachedSourceBatchVertices).ArrayNum;
    iVar11 = (pFVar4->RenderBatches).ArrayNum;
    if (iVar11 == *piVar6) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1090,(ForAnyElementType *)pFVar4,piVar6);
    }
    (pFVar4->RenderBatches).ArrayNum = iVar11 + 1;
    pFVar13 = (FSlateRenderBatch *)
              ((pFVar4->RenderBatches).AllocatorInstance.Data + (longlong)iVar11 * 0x90);
    *(ulonglong *)&(pFVar13->ShaderParams).PixelParams.field0_0x0 =
         CONCAT44(local_108.PixelParams.field0_0x0._s_0.Y,local_108.PixelParams.field0_0x0._s_0.X);
    *(ulonglong *)((longlong)&(pFVar13->ShaderParams).PixelParams.field0_0x0 + 8) =
         CONCAT44(local_108.PixelParams.field0_0x0._s_0.W,local_108.PixelParams.field0_0x0._s_0.Z);
    pFVar13->ClippingState = (FSlateClippingState *)0x0;
    pFVar13->InstanceData = (ISlateUpdatableInstanceBufferRenderProxy *)0x0;
    pFVar13->CustomDrawer = (ICustomSlateElement *)0x0;
    pFVar13->NumVertices = 0;
    pFVar13->NumIndices = 0;
    pFVar13->InstanceCount = 0;
    pFVar13->InstanceOffset = 0;
    pFVar13->CachedUsedPostBuffers = None;
    *(undefined8 *)&(pFVar13->ShaderParams).PixelParams2.field0_0x0 = uVar9;
    *(undefined8 *)((longlong)&(pFVar13->ShaderParams).PixelParams2.field0_0x0 + 8) = uVar10;
    pFVar13->VertexOffset = (int)local_114;
    *(undefined8 *)&(pFVar13->ShaderParams).PixelParams3.field0_0x0 = uVar9;
    *(undefined8 *)((longlong)&(pFVar13->ShaderParams).PixelParams3.field0_0x0 + 8) = uVar10;
    (pFVar13->DynamicOffset).field0_0x0 = (TVector2<float>_u_0)0x0;
    pFVar13->ShaderResource = (FSlateShaderResource *)0x0;
    pFVar13->SourceVertices = &pFVar4->UncachedSourceBatchVertices;
    pFVar13->bIsMergable = '\x01';
    pFVar13->bIsMerged = '\0';
    pFVar13->SourceIndices = &pFVar4->UncachedSourceBatchIndices;
    pFVar13->LayerId = iVar3;
    pFVar13->IndexOffset = local_110._0_4_;
    pFVar13->NextBatchIndex = -1;
    pFVar13->DrawFlags = None;
    pFVar13->ShaderType = LineSegment;
    pFVar13->DrawPrimitiveType = TriangleList;
    pFVar13->DrawEffects = EVar1;
    pFVar13->SceneIndex = sVar2;
  }
  else {
    pFVar13 = FSlateCachedElementList::AddRenderBatch
                        (this->CurrentCachedElementList,iVar3,&local_108,(FSlateShaderResource *)0x0
                         ,TriangleList,LineSegment,EVar1,None,sVar2);
  }
  pFVar14 = ResolveClippingState(this,(FSlateDrawElement *)param_1);
  pFVar13->ClippingState = pFVar14;
  fVar20 = fVar20 / *(float *)((longlong)&param_1->_padding_ + 4);
  if ((param_1->GradientStops).ArrayNum == 1) {
    FVar12 = PackVertexColor(this,(FLinearColor *)local_110);
    pFVar15 = (FColor_u_0 *)CONCAT44(extraout_var,FVar12.field0_0x0);
  }
  else {
    fVar16 = *(float *)&param_1->_padding_;
    fVar18 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar17 = *(float *)&param_1->_padding_;
    fVar19 = *(float *)((longlong)&param_1->_padding_ + 4);
    local_d8._s_0.R = fVar16;
    local_d8._s_0.G = fVar18;
    local_d8._s_0.B = fVar17;
    local_d8._s_0.A = fVar19;
    if (this->bSRGBVertexColor == false) {
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      if (fVar7 <= fVar17) {
        fVar17 = fVar7;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      if (fVar7 <= fVar18) {
        fVar18 = fVar7;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      local_114._s_0.G = (char)(int)(fVar18 * __real_437f0000 + fVar8);
      local_114._s_0.B = (char)(int)(fVar17 * __real_437f0000 + fVar8);
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      if (fVar7 <= fVar16) {
        fVar16 = fVar7;
      }
      if (fVar7 <= fVar19) {
        fVar19 = fVar7;
      }
      local_114._s_0.R = (char)(int)(fVar16 * __real_437f0000 + fVar8);
      local_114._s_0.A = (char)(int)(fVar19 * __real_437f0000 + fVar8);
    }
    else {
      FLinearColor::ToFColorSRGB((FLinearColor *)&local_d8._s_0);
    }
    pFVar15 = &local_114;
  }
  local_c8.SingleColor.field0_0x0 = *pFVar15;
  local_c8.LastPointAdded[0].field0_0x0 =
       (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&(param_1->P0).field0_0x0._s_0;
  local_c8.LastNormal.field0_0x0._s_0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_c8.NumPointsAdded = 1;
  local_c8.RenderBatch = pFVar13;
  local_c8.RenderTransform = (TTransform2<float> *)param_1;
  local_c8.LastPointAdded[1].field0_0x0 = local_c8.LastPointAdded[0].field0_0x0;
  local_c8.HalfLineThickness = fVar20;
  if ((param_1->GradientStops).ArrayNum < 2) {
    TVar5 = (param_1->P3).field0_0x0._s_0;
    FSplineBuilder::Subdivide
              (local_c8.LastPointAdded[0],(TVector2<float>)(param_1->P1).field0_0x0._s_0,
               (TVector2<float>)(param_1->P2).field0_0x0._s_0,(TVector2<float>)TVar5,&local_c8,fVar7
              );
    FSplineBuilder::Finish(&local_c8,(TVector2<float>)TVar5,&local_c8.SingleColor);
  }
  else {
    FSplineBuilder::BuildBezierGeometry_WithColorGradient
              (&local_c8,&param_1->GradientStops,1,local_c8.LastPointAdded[0],
               (TVector2<float>)(param_1->P1).field0_0x0._s_0,
               (TVector2<float>)(param_1->P2).field0_0x0._s_0,
               (TVector2<float>)(param_1->P3).field0_0x0._s_0,this);
  }
  return;
}

// CalculateMiddleEllipsisSkipIndexAndOffset @ 142502fe0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::CalculateMiddleEllipsisSkipIndexAndOffset
          (FSlateElementBatcher *this,FShapedTextBuildContext *param_1,
          ETextOverflowDirection param_2,FMiddleEllipsisOverflowData *param_3)

{
  short sVar1;
  int iVar2;
  FShapedGlyphSequence *this_00;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  longlong local_78;
  
  this_00 = param_1->ShapedGlyphSequence;
  iVar2 = (this_00->GlyphsToRender).ArrayNum;
  if (param_1->OverflowGlyphSequence == (FShapedGlyphSequence *)0x0) {
    fVar19 = 0.0;
  }
  else {
    iVar8 = FShapedGlyphSequence::GetMeasuredWidth(param_1->OverflowGlyphSequence);
    fVar19 = (float)iVar8;
  }
  iVar8 = FShapedGlyphSequence::GetMeasuredWidth(this_00);
  uVar12 = (this_00->GlyphsToRender).ArrayNum >> 1;
  fVar18 = ((float)iVar8 + fVar19) -
           (param_1->LocalClipBoundingBoxRight - param_1->LocalClipBoundingBoxLeft);
  if (0.0 < fVar18) {
    lVar15 = (longlong)(int)uVar12 * 0xa8;
    lVar16 = lVar15;
    uVar11 = uVar12;
    do {
      if (((int)uVar11 < 0) && ((this_00->GlyphsToRender).ArrayNum <= (int)uVar12)) break;
      if (uVar12 == uVar11) {
        uVar9 = 0;
        if ((int)uVar12 < (this_00->GlyphsToRender).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        sVar1 = *(short *)((this_00->GlyphsToRender).AllocatorInstance.Data + lVar16 + 0x18);
        param_3->SkipIndexStart = uVar12;
LAB_1425031be:
        param_3->SkipIndexEnd = uVar12;
        fVar18 = fVar18 - (float)(int)sVar1;
      }
      else {
        if ((-1 < (int)uVar11) && ((int)uVar11 < (this_00->GlyphsToRender).ArrayNum)) {
          if (((int)uVar11 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          sVar1 = *(short *)((this_00->GlyphsToRender).AllocatorInstance.Data + lVar15 + 0x18);
          param_3->SkipIndexStart = uVar11;
          fVar18 = fVar18 - (float)(int)sVar1;
        }
        if (fVar18 <= 0.0) break;
        if ((-1 < (int)uVar12) && ((int)uVar12 < (this_00->GlyphsToRender).ArrayNum)) {
          if (((int)uVar12 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          sVar1 = *(short *)((this_00->GlyphsToRender).AllocatorInstance.Data + lVar16 + 0x18);
          goto LAB_1425031be;
        }
      }
      lVar15 = lVar15 + -0xa8;
      uVar11 = uVar11 - 1;
      uVar12 = uVar12 + 1;
      lVar16 = lVar16 + 0xa8;
    } while (0.0 < fVar18);
  }
  if (param_2 == RightToLeft) {
    iVar8 = param_3->SkipIndexStart;
    uVar13 = (ulonglong)iVar8;
    if ((iVar8 != -1) && (iVar10 = param_3->SkipIndexEnd, iVar10 != -1)) {
      iVar17 = 0;
      if (iVar8 <= iVar10) {
        lVar16 = uVar13 * 0xa8;
        do {
          uVar11 = (uint)uVar13;
          uVar12 = 0;
          if ((int)uVar11 < (this_00->GlyphsToRender).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar13 = (ulonglong)(uVar11 + 1);
          iVar10 = param_3->SkipIndexEnd;
          lVar15 = lVar16 + 0x18;
          lVar16 = lVar16 + 0xa8;
          iVar17 = iVar17 + *(short *)((this_00->GlyphsToRender).AllocatorInstance.Data + lVar15);
        } while ((int)(uVar11 + 1) <= iVar10);
      }
      uVar12 = iVar10 + 1;
      uVar11 = param_3->SkipIndexStart - 1;
      if (((int)uVar11 < 0) || ((this_00->GlyphsToRender).ArrayNum <= (int)uVar11)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((int)uVar12 < 0) || ((this_00->GlyphsToRender).ArrayNum <= (int)uVar12)) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      lVar16 = (longlong)(int)uVar12 * 0xa8;
      local_78 = (longlong)(int)uVar11 * 0xa8;
LAB_1425032e0:
      if (bVar6) goto LAB_1425033c2;
      if (bVar14) goto LAB_142503499;
      iVar8 = FShapedGlyphSequence::GetMeasuredWidth(this_00);
      param_3->LineX =
           (param_1->LocalClipBoundingBoxRight - ((float)(iVar8 - iVar17) + fVar19)) +
           param_3->LineX;
    }
  }
  iVar8 = (param_3->SkipIndexEnd - param_3->SkipIndexStart) + 1;
  if ((iVar8 == iVar2) || (iVar8 == iVar2 + -1)) {
    param_3->EllipsisLineX = param_3->LineX;
    param_3->EllipsisLineY = param_3->LineY;
  }
  if ((param_3->SkipIndexStart == 0) && (param_3->SkipIndexEnd == iVar2 + -2)) {
    param_3->LineX = fVar19 + param_3->LineX;
  }
  return;
LAB_1425033c2:
  uVar9 = 0;
  if ((int)uVar11 < (this_00->GlyphsToRender).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this_00->GlyphsToRender).AllocatorInstance.Data[local_78 + 0x24] ==
      (FScriptContainerElement)0x0) {
    uVar9 = 0;
    if ((int)uVar11 < (this_00->GlyphsToRender).ArrayNum) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar17 = iVar17 + *(short *)((this_00->GlyphsToRender).AllocatorInstance.Data + local_78 + 0x18)
    ;
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  local_78 = local_78 + -0xa8;
  uVar11 = uVar11 - 1;
  if (((int)uVar11 < 0) || ((this_00->GlyphsToRender).ArrayNum <= (int)uVar11)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  bVar6 = (bool)(bVar4 & bVar5);
  if (bVar14) {
LAB_142503499:
    uVar9 = 0;
    if ((int)uVar12 < (this_00->GlyphsToRender).ArrayNum) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this_00->GlyphsToRender).AllocatorInstance.Data[lVar16 + 0x24] ==
        (FScriptContainerElement)0x0) {
      uVar9 = 0;
      if ((int)uVar12 < (this_00->GlyphsToRender).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar17 = iVar17 + *(short *)((this_00->GlyphsToRender).AllocatorInstance.Data + lVar16 + 0x18)
      ;
    }
    else {
      bVar14 = false;
    }
    lVar16 = lVar16 + 0xa8;
    uVar12 = uVar12 + 1;
    if (((int)uVar12 < 0) || ((this_00->GlyphsToRender).ArrayNum <= (int)uVar12)) {
      bVar14 = false;
    }
  }
  goto LAB_1425032e0;
}

// CreateRenderBatch @ 142506240

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateRenderBatch * __thiscall
FSlateElementBatcher::CreateRenderBatch
          (FSlateElementBatcher *this,FSlateBatchData *param_1,int param_2,FShaderParams *param_3,
          FSlateShaderResource *param_4,ESlateDrawPrimitive param_5,ESlateShader param_6,
          ESlateDrawEffect param_7,ESlateBatchDrawFlag param_8,FSlateDrawElement *param_9)

{
  ESlatePostRT EVar1;
  FSlateRenderBatch *pFVar2;
  FSlateClippingState *pFVar3;
  
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    pFVar2 = FSlateBatchData::AddRenderBatch
                       (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9->SceneIndex);
  }
  else {
    pFVar2 = FSlateCachedElementList::AddRenderBatch
                       (this->CurrentCachedElementList,param_2,param_3,param_4,param_5,param_6,
                        param_7,param_8,param_9->SceneIndex);
  }
  pFVar3 = ResolveClippingState(this,param_9);
  pFVar2->ClippingState = pFVar3;
  if (param_4 != (FSlateShaderResource *)0x0) {
    EVar1 = (**(code **)(param_4->_padding_ + 0x20))(param_4);
    pFVar2->CachedUsedPostBuffers = EVar1;
    this->UsedSlatePostBuffers = this->UsedSlatePostBuffers | EVar1;
  }
  return pFVar2;
}

// CreateRenderBatch @ 142506320

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateRenderBatch * __thiscall
FSlateElementBatcher::CreateRenderBatch
          (FSlateElementBatcher *this,FSlateBatchData *param_1,int param_2,FShaderParams *param_3,
          FSlateShaderResource *param_4,ESlateDrawPrimitive param_5,ESlateShader param_6,
          ESlateDrawEffect param_7,ESlateBatchDrawFlag param_8,schar param_9,
          FSlateClippingState *param_10)

{
  ESlatePostRT EVar1;
  FSlateRenderBatch *pFVar2;
  
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    pFVar2 = FSlateBatchData::AddRenderBatch
                       (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  else {
    pFVar2 = FSlateCachedElementList::AddRenderBatch
                       (this->CurrentCachedElementList,param_2,param_3,param_4,param_5,param_6,
                        param_7,param_8,param_9);
  }
  pFVar2->ClippingState = param_10;
  if (param_4 != (FSlateShaderResource *)0x0) {
    EVar1 = (**(code **)(param_4->_padding_ + 0x20))(param_4);
    pFVar2->CachedUsedPostBuffers = EVar1;
    this->UsedSlatePostBuffers = this->UsedSlatePostBuffers | EVar1;
  }
  return pFVar2;
}

// PackVertexColor @ 1425179d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FColor __thiscall
FSlateElementBatcher::PackVertexColor(FSlateElementBatcher *this,FLinearColor *param_1)

{
  FLinearColor *in_R8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (this->bSRGBVertexColor != false) {
    FLinearColor::ToFColorSRGB(in_R8);
    return (FColor)SUB84(param_1,0);
  }
  fVar1 = (in_R8->field0_0x0)._s_0.B;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar4 = (in_R8->field0_0x0)._s_0.A;
  fVar2 = (in_R8->field0_0x0)._s_0.G;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar3 = (in_R8->field0_0x0)._s_0.R;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  fVar5 = fVar4 * __real_437f0000 + __real_3f000000;
  fVar4 = fVar2 * __real_437f0000 + __real_3f000000;
  fVar2 = fVar3 * __real_437f0000 + __real_3f000000;
  *(char *)&param_1->field0_0x0 = (char)(int)(fVar1 * __real_437f0000 + __real_3f000000);
  *(char *)((longlong)&param_1->field0_0x0 + 1) = (char)(int)fVar4;
  *(char *)((longlong)&param_1->field0_0x0 + 2) = (char)(int)fVar2;
  *(char *)((longlong)&param_1->field0_0x0 + 3) = (char)(int)fVar5;
  return (FColor)SUB84(param_1,0);
}

// ResetBatches @ 14251cc40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateElementBatcher::ResetBatches(FSlateElementBatcher *this)

{
  this->bRequiresVsync = false;
  this->bCompositeHDRViewports = false;
  this->UsedSlatePostBuffers = None;
  this->ResourceUpdatingPostBuffers = None;
  this->NumPostProcessPasses = 0;
  return;
}

// ResolveClippingState @ 14251de40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateClippingState * __thiscall
FSlateElementBatcher::ResolveClippingState(FSlateElementBatcher *this,FSlateDrawElement *param_1)

{
  int iVar1;
  TArray<FSlateClippingState,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FSlateClippingState *pFVar5;
  
  if ((param_1->ClipStateHandle).CachedClipState == (FSlateClippingState *)0x0) {
    iVar1 = (param_1->ClipStateHandle).PrecachedClipIndex;
    if (-1 < iVar1) {
      pTVar2 = this->PrecachedClippingStates;
      if (iVar1 < pTVar2->ArrayNum) {
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FSlateClippingState *)(*pcVar3)();
            return pFVar5;
          }
        }
        return (FSlateClippingState *)((pTVar2->AllocatorInstance).Data + (longlong)iVar1 * 0x48);
      }
    }
    return (FSlateClippingState *)0x0;
  }
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentCachedElementList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                       ,0xc66,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSlateClippingState *)(*pcVar3)();
      return pFVar5;
    }
  }
  return (param_1->ClipStateHandle).CachedClipState;
}

