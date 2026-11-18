// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// ContractByBorderVertices @ 14ce65180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ce65533) */
/* WARNING: Removing unreachable block (ram,0x00014ce65544) */
/* WARNING: Removing unreachable block (ram,0x00014ce65548) */

void __thiscall
UE::Geometry::FMeshVertexSelection::ContractByBorderVertices(FMeshVertexSelection *this,int param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  FDynamicMesh3 *pFVar6;
  ForElementType<FSetElementId> FVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  FSmallListSet *pFVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uchar auVar19 [4];
  uchar auVar20 [4];
  uchar auVar21 [4];
  uchar auVar22 [4];
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  uchar uVar29;
  uchar uVar30;
  code *pcVar31;
  uint uVar32;
  int iVar33;
  undefined8 uVar34;
  byte bVar35;
  longlong lVar36;
  undefined ***pppuVar37;
  longlong *plVar38;
  longlong *plVar39;
  ForElementType<FSetElementId> FVar40;
  code *pcVar41;
  ForAnyElementType FVar42;
  undefined1 *puVar43;
  uint uVar44;
  int iVar45;
  undefined1 *puVar46;
  uint *puVar47;
  bool bVar48;
  undefined1 auStackY_3b8 [32];
  undefined1 local_368 [8];
  ForAnyElementType local_360;
  undefined8 local_358;
  int local_350;
  int local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  uint uStack_330;
  int iStack_32c;
  int local_328;
  undefined4 uStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  int local_318 [2];
  uint local_310 [2];
  int local_308;
  TBitArray<FDefaultBitArrayAllocator> *local_300;
  int local_2f8;
  int local_2f4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e8;
  undefined8 uStack_2c8;
  code *local_2b8;
  undefined8 uStack_2b0;
  FFunctionStorage local_2a8;
  code *local_288;
  longlong local_278 [3];
  longlong *local_260;
  code *local_258;
  longlong local_248 [3];
  longlong *local_230;
  int local_228;
  undefined4 uStack_224;
  FDynamicMesh3 *pFStack_220;
  code *local_218;
  undefined **local_208;
  undefined8 local_200;
  FDynamicMesh3 *pFStack_1f8;
  undefined ***local_1f0;
  undefined8 local_1e0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_19c;
  FSmallListSet *local_198;
  int local_190;
  code *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  uchar auStack_170 [4];
  uchar auStack_16c [4];
  uchar local_168 [4];
  uchar auStack_164 [4];
  longlong *plStack_160;
  BaseValueIterator local_158;
  code *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  FSmallListSet *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  code *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong *plStack_70;
  code *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_360.Data = (FScriptContainerElement *)0x0;
  local_358 = 0;
  local_34c = 0;
  local_308 = param_1;
  if (0 < param_1) {
    this_00 = &this->Selected;
    do {
      iVar45 = 0;
      puVar43 = &(this->Selected).Elements.field_0x10;
      bVar48 = (longlong)local_358 < 0;
      local_358 = local_358 & 0xffffffff00000000;
      if (bVar48) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_360,0,(int *)((longlong)&local_358 + 4));
      }
      iVar33 = *(int *)&(this->Selected).Elements.field_0x28;
      uVar32 = 1;
      local_328 = 0;
      iStack_32c = 0;
      if (iVar33 != 0) {
        puVar5 = *(uint **)&(this->Selected).Elements.field_0x20;
        puVar47 = (uint *)puVar43;
        if (puVar5 != (uint *)0x0) {
          puVar47 = puVar5;
        }
        uVar3 = *puVar47;
        local_328 = 0;
        while (uVar3 == 0) {
          lVar36 = (longlong)iVar45;
          local_328 = local_328 + 0x20;
          iVar45 = iVar45 + 1;
          iStack_32c = iVar33;
          if ((int)(iVar33 + -1 + (iVar33 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar45) goto LAB_14ce6529d;
          uVar3 = puVar47[lVar36 + 1];
        }
        uVar32 = -uVar3 & uVar3;
        uVar2 = (ulonglong)uVar32 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        local_2f8 = (int)lVar36;
        iStack_32c = local_328 + -1 + local_2f8;
        if (iVar33 < iStack_32c) {
          iStack_32c = iVar33;
        }
      }
LAB_14ce6529d:
      uVar3 = *(uint *)&(this->Selected).Elements.field_0x28;
      uStack_324 = local_19c;
      bVar35 = (byte)uVar3 & 0x1f;
      iStack_320 = *(int *)&(this->Selected).Elements.field_0x8 -
                   *(int *)&(this->Selected).Elements.field_0x34;
      uVar44 = uVar3 & 0xffffffe0;
      uStack_340 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar32,iVar45);
      TStack_2e8.CurrentBitIndex = iStack_32c;
      TStack_2e8.UnvisitedBitMask = 0xffffffff;
      iVar45 = (int)uVar3 >> 5;
      uVar32 = -1 << bVar35;
      puVar46 = &(this->Selected).Elements.field_0x10;
      local_348 = CONCAT44(1 << bVar35,iVar45);
      local_338 = CONCAT44(uVar3,uVar32);
      TStack_2e8._padding_ = (longlong)uStack_340;
      TStack_2e8._28_4_ = local_19c;
      TStack_2e8.BaseBitIndex = local_328;
      uStack_2c8 = CONCAT44(uStack_31c,iStack_320);
      uStack_340 = (TBitArray<FDefaultBitArrayAllocator> *)puVar46;
      uStack_330 = uVar44;
      local_2f0 = this_00;
      TStack_2e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar43;
      if ((((int)uVar3 < 0) || (iVar33 < (int)uVar3)) &&
         (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar48)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      uVar4 = *(uint *)&(this->Selected).Elements.field_0x28;
      if (uVar3 != uVar4) {
        puVar43 = *(undefined1 **)&(this->Selected).Elements.field_0x20;
        puVar46 = &(this->Selected).Elements.field_0x10;
        if (puVar43 != (undefined1 *)0x0) {
          puVar46 = puVar43;
        }
        uVar32 = uVar32 & *(uint *)(puVar46 + (longlong)iVar45 * 4);
        while (uVar32 == 0) {
          uStack_330 = uVar44 + 0x20;
          lVar36 = (longlong)iVar45;
          iVar45 = iVar45 + 1;
          uVar2 = (ulonglong)local_348 >> 0x20;
          local_348 = CONCAT44((int)uVar2,iVar45);
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar45)
          goto LAB_14ce653ea;
          uVar32 = *(uint *)(puVar46 + lVar36 * 4 + 4);
          local_338 = 0xffffffff;
          uVar44 = uStack_330;
        }
        local_348 = CONCAT44(-uVar32 & uVar32,(undefined4)local_348);
        uVar2 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
        lVar36 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        local_2f4 = (int)lVar36;
        iVar45 = local_2f4 + -1 + uVar44;
        local_338 = CONCAT44(iVar45,(undefined4)local_338);
        if ((int)uVar4 < iVar45) {
LAB_14ce653ea:
          local_338 = CONCAT44(uVar4,(undefined4)local_338);
        }
      }
      uStack_1c8 = CONCAT44(iStack_32c,uStack_330);
      local_1e0 = local_348;
      pTStack_1d8 = uStack_340;
      local_1d0 = local_338;
      uVar34 = local_1d0;
      local_1d0._4_4_ = (int)((ulonglong)local_338 >> 0x20);
      iVar45 = local_1d0._4_4_;
      local_300 = uStack_340;
      local_1d0 = uVar34;
      while( true ) {
        pTVar8 = local_2f0;
        if (*(int *)&(local_2f0->Elements).field_0x8 - *(int *)&(local_2f0->Elements).field_0x34 !=
            (int)uStack_2c8) {
          local_368[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_368);
        }
        FVar42.Data = local_360.Data;
        if (((TStack_2e8.CurrentBitIndex == iVar45) && (TStack_2e8.Array == local_300)) &&
           (pTVar8 == this_00)) break;
        local_1f0 = (undefined ***)0x0;
        pFVar6 = this->Mesh;
        bVar48 = false;
        local_2a8.HeapAllocation = (longlong *)0x0;
        iVar33 = *(int *)(*(longlong *)&pTVar8->Elements +
                         (longlong)TStack_2e8.CurrentBitIndex * 0xc);
        local_208 = &
                    ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxVerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AVMappedValueEnumerable_FSmallListSet_45_H_Z__0A__0A__Function_Private_Core_UE__6B_
        ;
        local_200 = CONCAT44(uStack_224,iVar33);
        local_218 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
                    ::Call;
        local_2b8 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
                    ::Call;
        local_350 = iVar33;
        local_228 = iVar33;
        pFStack_220 = pFVar6;
        pFStack_1f8 = pFVar6;
        Core::Private::Function::
        TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0>::
        CloneToEmptyStorage(&local_208,&local_2a8);
        auVar21 = auStack_16c;
        auVar19 = auStack_170;
        uVar18 = local_178._4_4_;
        uVar17 = (undefined4)local_178;
        uVar16 = uStack_180;
        plStack_160 = local_2a8.HeapAllocation;
        uVar12 = local_2a8.InlineAllocation._12_4_;
        uVar11 = local_2a8.InlineAllocation._8_4_;
        uVar10 = local_2a8.InlineAllocation._4_4_;
        uVar9 = local_2a8.InlineAllocation._0_4_;
        local_198 = &pFVar6->VertexEdgeLists;
        uVar27 = auStack_164[0];
        uVar28 = auStack_164[1];
        uVar29 = auStack_164[2];
        uVar30 = auStack_164[3];
        uVar34._4_1_ = auStack_164[0];
        uVar34._5_1_ = auStack_164[1];
        uVar34._6_1_ = auStack_164[2];
        uVar34._7_1_ = auStack_164[3];
        uVar23 = local_168[0];
        uVar24 = local_168[1];
        uVar25 = local_168[2];
        uVar26 = local_168[3];
        uVar34._0_1_ = local_168[0];
        uVar34._1_1_ = local_168[1];
        uVar34._2_1_ = local_168[2];
        uVar34._3_1_ = local_168[3];
        local_188 = local_2b8;
        uStack_180 = uStack_2b0;
        uVar13 = local_2a8.InlineAllocation._16_4_;
        uVar14 = local_2a8.InlineAllocation._20_4_;
        local_190 = iVar33;
        local_178._0_1_ = local_2a8.InlineAllocation[0];
        local_178._1_1_ = local_2a8.InlineAllocation[1];
        local_178._2_1_ = local_2a8.InlineAllocation[2];
        local_178._3_1_ = local_2a8.InlineAllocation[3];
        local_178._4_1_ = local_2a8.InlineAllocation[4];
        local_178._5_1_ = local_2a8.InlineAllocation[5];
        local_178._6_1_ = local_2a8.InlineAllocation[6];
        local_178._7_1_ = local_2a8.InlineAllocation[7];
        auStack_170[0] = local_2a8.InlineAllocation[8];
        auStack_170[1] = local_2a8.InlineAllocation[9];
        auStack_170[2] = local_2a8.InlineAllocation[10];
        auStack_170[3] = local_2a8.InlineAllocation[0xb];
        auStack_16c[0] = local_2a8.InlineAllocation[0xc];
        auStack_16c[1] = local_2a8.InlineAllocation[0xd];
        auStack_16c[2] = local_2a8.InlineAllocation[0xe];
        auStack_16c[3] = local_2a8.InlineAllocation[0xf];
        local_168[0] = local_2a8.InlineAllocation[0x10];
        local_168[1] = local_2a8.InlineAllocation[0x11];
        local_168[2] = local_2a8.InlineAllocation[0x12];
        local_168[3] = local_2a8.InlineAllocation[0x13];
        auStack_164[0] = local_2a8.InlineAllocation[0x14];
        auStack_164[1] = local_2a8.InlineAllocation[0x15];
        auStack_164[2] = local_2a8.InlineAllocation[0x16];
        auStack_164[3] = local_2a8.InlineAllocation[0x17];
        local_178._0_1_ = (uchar)uVar17;
        local_178._1_1_ = SUB41(uVar17,1);
        local_178._2_1_ = SUB41(uVar17,2);
        local_178._3_1_ = SUB41(uVar17,3);
        local_2a8.InlineAllocation[0] = (uchar)local_178;
        local_2a8.InlineAllocation[1] = local_178._1_1_;
        local_2a8.InlineAllocation[2] = local_178._2_1_;
        local_2a8.InlineAllocation[3] = local_178._3_1_;
        local_178._4_1_ = (uchar)uVar18;
        local_178._5_1_ = SUB41(uVar18,1);
        local_178._6_1_ = SUB41(uVar18,2);
        local_178._7_1_ = SUB41(uVar18,3);
        local_2a8.InlineAllocation[4] = local_178._4_1_;
        local_2a8.InlineAllocation[5] = local_178._5_1_;
        local_2a8.InlineAllocation[6] = local_178._6_1_;
        local_2a8.InlineAllocation[7] = local_178._7_1_;
        auStack_170[0] = auVar19[0];
        auStack_170[1] = auVar19[1];
        auStack_170[2] = auVar19[2];
        auStack_170[3] = auVar19[3];
        local_2a8.InlineAllocation[8] = auStack_170[0];
        local_2a8.InlineAllocation[9] = auStack_170[1];
        local_2a8.InlineAllocation[10] = auStack_170[2];
        local_2a8.InlineAllocation[0xb] = auStack_170[3];
        auStack_16c[0] = auVar21[0];
        auStack_16c[1] = auVar21[1];
        auStack_16c[2] = auVar21[2];
        auStack_16c[3] = auVar21[3];
        local_2a8.InlineAllocation[0xc] = auStack_16c[0];
        local_2a8.InlineAllocation[0xd] = auStack_16c[1];
        local_2a8.InlineAllocation[0xe] = auStack_16c[2];
        local_2a8.InlineAllocation[0xf] = auStack_16c[3];
        local_2a8.InlineAllocation[0x10] = uVar23;
        local_2a8.InlineAllocation[0x11] = uVar24;
        local_2a8.InlineAllocation[0x12] = uVar25;
        local_2a8.InlineAllocation[0x13] = uVar26;
        local_2a8.InlineAllocation[0x14] = uVar27;
        local_2a8.InlineAllocation[0x15] = uVar28;
        local_2a8.InlineAllocation[0x16] = uVar29;
        local_2a8.InlineAllocation[0x17] = uVar30;
        local_2a8.HeapAllocation = (void *)0x0;
        local_2a8.InlineAllocation[0x14] = (uchar)uVar14;
        local_2a8.InlineAllocation[0x15] = SUB41(uVar14,1);
        local_2a8.InlineAllocation[0x16] = SUB41(uVar14,2);
        local_2a8.InlineAllocation[0x17] = SUB41(uVar14,3);
        auStack_164[0] = local_2a8.InlineAllocation[0x14];
        auStack_164[1] = local_2a8.InlineAllocation[0x15];
        auStack_164[2] = local_2a8.InlineAllocation[0x16];
        auStack_164[3] = local_2a8.InlineAllocation[0x17];
        local_2a8.InlineAllocation[0x10] = (uchar)uVar13;
        local_2a8.InlineAllocation[0x11] = SUB41(uVar13,1);
        local_2a8.InlineAllocation[0x12] = SUB41(uVar13,2);
        local_2a8.InlineAllocation[0x13] = SUB41(uVar13,3);
        local_168[0] = local_2a8.InlineAllocation[0x10];
        local_168[1] = local_2a8.InlineAllocation[0x11];
        local_168[2] = local_2a8.InlineAllocation[0x12];
        local_168[3] = local_2a8.InlineAllocation[0x13];
        local_2a8.InlineAllocation[0xc] = (uchar)uVar12;
        local_2a8.InlineAllocation[0xd] = SUB41(uVar12,1);
        local_2a8.InlineAllocation[0xe] = SUB41(uVar12,2);
        local_2a8.InlineAllocation[0xf] = SUB41(uVar12,3);
        auStack_16c[0] = local_2a8.InlineAllocation[0xc];
        auStack_16c[1] = local_2a8.InlineAllocation[0xd];
        auStack_16c[2] = local_2a8.InlineAllocation[0xe];
        auStack_16c[3] = local_2a8.InlineAllocation[0xf];
        auVar22 = auStack_16c;
        local_2a8.InlineAllocation[8] = (uchar)uVar11;
        local_2a8.InlineAllocation[9] = SUB41(uVar11,1);
        local_2a8.InlineAllocation[10] = SUB41(uVar11,2);
        local_2a8.InlineAllocation[0xb] = SUB41(uVar11,3);
        auStack_170[0] = local_2a8.InlineAllocation[8];
        auStack_170[1] = local_2a8.InlineAllocation[9];
        auStack_170[2] = local_2a8.InlineAllocation[10];
        auStack_170[3] = local_2a8.InlineAllocation[0xb];
        auVar20 = auStack_170;
        local_2a8.InlineAllocation[4] = (uchar)uVar10;
        local_2a8.InlineAllocation[5] = SUB41(uVar10,1);
        local_2a8.InlineAllocation[6] = SUB41(uVar10,2);
        local_2a8.InlineAllocation[7] = SUB41(uVar10,3);
        local_178._4_1_ = local_2a8.InlineAllocation[4];
        local_178._5_1_ = local_2a8.InlineAllocation[5];
        local_178._6_1_ = local_2a8.InlineAllocation[6];
        local_178._7_1_ = local_2a8.InlineAllocation[7];
        uVar10 = local_178._4_4_;
        local_2a8.InlineAllocation[0] = (uchar)uVar9;
        local_2a8.InlineAllocation[1] = SUB41(uVar9,1);
        local_2a8.InlineAllocation[2] = SUB41(uVar9,2);
        local_2a8.InlineAllocation[3] = SUB41(uVar9,3);
        local_178._0_1_ = local_2a8.InlineAllocation[0];
        local_178._1_1_ = local_2a8.InlineAllocation[1];
        local_178._2_1_ = local_2a8.InlineAllocation[2];
        local_178._3_1_ = local_2a8.InlineAllocation[3];
        uVar9 = (undefined4)local_178;
        local_2a8.HeapAllocation = (void *)0x0;
        auStack_16c[0] = auVar21[0];
        auStack_16c[1] = auVar21[1];
        auStack_16c[2] = auVar21[2];
        auStack_16c[3] = auVar21[3];
        local_2a8.InlineAllocation[0xc] = auStack_16c[0];
        local_2a8.InlineAllocation[0xd] = auStack_16c[1];
        local_2a8.InlineAllocation[0xe] = auStack_16c[2];
        local_2a8.InlineAllocation[0xf] = auStack_16c[3];
        auStack_170[0] = auVar19[0];
        auStack_170[1] = auVar19[1];
        auStack_170[2] = auVar19[2];
        auStack_170[3] = auVar19[3];
        local_2a8.InlineAllocation[8] = auStack_170[0];
        local_2a8.InlineAllocation[9] = auStack_170[1];
        local_2a8.InlineAllocation[10] = auStack_170[2];
        local_2a8.InlineAllocation[0xb] = auStack_170[3];
        local_178._4_1_ = (uchar)uVar18;
        local_178._5_1_ = SUB41(uVar18,1);
        local_178._6_1_ = SUB41(uVar18,2);
        local_178._7_1_ = SUB41(uVar18,3);
        local_2a8.InlineAllocation[4] = local_178._4_1_;
        local_2a8.InlineAllocation[5] = local_178._5_1_;
        local_2a8.InlineAllocation[6] = local_178._6_1_;
        local_2a8.InlineAllocation[7] = local_178._7_1_;
        local_178._0_1_ = (uchar)uVar17;
        local_178._1_1_ = SUB41(uVar17,1);
        local_178._2_1_ = SUB41(uVar17,2);
        local_178._3_1_ = SUB41(uVar17,3);
        local_2a8.InlineAllocation[0] = (uchar)local_178;
        local_2a8.InlineAllocation[1] = local_178._1_1_;
        local_2a8.InlineAllocation[2] = local_178._2_1_;
        local_2a8.InlineAllocation[3] = local_178._3_1_;
        uStack_2b0 = uVar16;
        local_2b8 = (code *)0x0;
        local_2a8.InlineAllocation._16_8_ = uVar34;
        local_178._0_4_ = uVar9;
        local_178._4_4_ = uVar10;
        auStack_170 = auVar20;
        auStack_16c = auVar22;
        if (local_218 != (code *)0x0) {
          pppuVar37 = &local_208;
          if (local_1f0 != (undefined ***)0x0) {
            pppuVar37 = local_1f0;
          }
          (*(code *)(*pppuVar37)[2])();
        }
        iVar33 = local_190;
        pFVar15 = local_198;
        local_288 = local_188;
        local_260 = (longlong *)0x0;
        if (local_188 != (code *)0x0) {
          plVar39 = &local_178;
          if (plStack_160 != (longlong *)0x0) {
            plVar39 = plStack_160;
          }
          (**(code **)*plVar39)(plVar39,local_278);
        }
        pcVar41 = local_288;
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_158,pFVar15,iVar33,false);
        local_98 = pcVar41;
        local_128 = (code *)0x0;
        plStack_100 = (longlong *)0x0;
        plStack_70 = (longlong *)0x0;
        if (pcVar41 != (code *)0x0) {
          plVar39 = local_278;
          if (local_260 != (longlong *)0x0) {
            plVar39 = local_260;
          }
          (**(code **)*plVar39)(plVar39,&local_88);
          pcVar41 = local_288;
        }
        plVar39 = plStack_100;
        uVar12 = uStack_10c;
        uVar11 = uStack_110;
        uVar10 = uStack_114;
        uVar9 = local_118;
        uVar16 = uStack_120;
        pcVar31 = local_128;
        uVar34 = CONCAT44(uStack_104,local_108);
        local_128 = local_98;
        uStack_120 = uStack_90;
        local_108 = (undefined4)local_78;
        uStack_104 = local_78._4_4_;
        plStack_100 = plStack_70;
        local_118 = local_88;
        uStack_114 = uStack_84;
        uStack_110 = uStack_80;
        uStack_10c = uStack_7c;
        local_98 = pcVar31;
        uStack_90 = uVar16;
        local_88 = uVar9;
        uStack_84 = uVar10;
        uStack_80 = uVar11;
        uStack_7c = uVar12;
        local_78 = uVar34;
        plStack_70 = plVar39;
        if (pcVar31 != (code *)0x0) {
          plVar38 = (longlong *)&local_88;
          if (plVar39 != (longlong *)0x0) {
            plVar38 = plVar39;
          }
          (**(code **)(*plVar38 + 0x10))();
          pcVar41 = local_288;
        }
        if (pcVar41 != (code *)0x0) {
          plVar39 = local_278;
          if (local_260 != (longlong *)0x0) {
            plVar39 = local_260;
          }
          (**(code **)(*plVar39 + 0x10))();
        }
        iVar33 = local_190;
        pFVar15 = local_198;
        local_258 = local_188;
        local_230 = (longlong *)0x0;
        if (local_188 != (code *)0x0) {
          plVar39 = &local_178;
          if (plStack_160 != (longlong *)0x0) {
            plVar39 = plStack_160;
          }
          (**(code **)*plVar39)(plVar39,local_248);
        }
        local_f8 = pFVar15;
        local_f0 = iVar33;
        local_ec = 0xffffffff;
        local_e8 = 0;
        local_e0 = 0xffffffffffffffff;
        local_c8 = (code *)0x0;
        plStack_a0 = (longlong *)0x0;
        local_68 = local_258;
        plStack_40 = (longlong *)0x0;
        if (local_258 != (code *)0x0) {
          plVar39 = local_248;
          if (local_230 != (longlong *)0x0) {
            plVar39 = local_230;
          }
          (**(code **)*plVar39)(plVar39,&local_58);
        }
        plVar39 = plStack_a0;
        uVar12 = uStack_ac;
        uVar11 = uStack_b0;
        uVar10 = uStack_b4;
        uVar9 = local_b8;
        uVar16 = uStack_c0;
        pcVar41 = local_c8;
        uVar34 = CONCAT44(uStack_a4,local_a8);
        local_c8 = local_68;
        uStack_c0 = uStack_60;
        local_a8 = (undefined4)local_48;
        uStack_a4 = local_48._4_4_;
        plStack_a0 = plStack_40;
        local_b8 = local_58;
        uStack_b4 = uStack_54;
        uStack_b0 = uStack_50;
        uStack_ac = uStack_4c;
        local_68 = pcVar41;
        uStack_60 = uVar16;
        local_58 = uVar9;
        uStack_54 = uVar10;
        uStack_50 = uVar11;
        uStack_4c = uVar12;
        local_48 = uVar34;
        plStack_40 = plVar39;
        if (pcVar41 != (code *)0x0) {
          plVar38 = (longlong *)&local_58;
          if (plVar39 != (longlong *)0x0) {
            plVar38 = plVar39;
          }
          (**(code **)(*plVar38 + 0x10))();
        }
        if (local_258 != (code *)0x0) {
          plVar39 = local_248;
          if (local_230 != (longlong *)0x0) {
            plVar39 = local_230;
          }
          (**(code **)(*plVar39 + 0x10))();
        }
        while( true ) {
          if ((((local_158.ListSet == local_f8) && (local_158.ListIndex == local_f0)) &&
              (local_158.iCur == (int)local_e0)) && (local_158.cur_ptr == local_e0._4_4_))
          goto LAB_14ce658d0;
          local_318[0] = local_158.cur_value;
          Core::Private::Function::CheckCallable(local_128);
          pcVar41 = local_128;
          plVar39 = (longlong *)&local_118;
          if (plStack_100 != (longlong *)0x0) {
            plVar39 = plStack_100;
          }
          uVar34 = (**(code **)(*plVar39 + 8))();
          uVar32 = (*pcVar41)(uVar34,local_318);
          if (*(int *)&(this->Selected).Elements.field_0x8 ==
              *(int *)&(this->Selected).Elements.field_0x34) break;
          FVar7 = (this->Selected).Hash.SecondaryData;
          FVar40 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
          if (FVar7 != (ForElementType<FSetElementId>)0x0) {
            FVar40 = FVar7;
          }
          iVar33 = *(int *)((longlong)FVar40 +
                           (ulonglong)((this->Selected).HashSize - 1U & uVar32) * 4);
          if (iVar33 == -1) break;
          while (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar33 * 0xc) != uVar32) {
            iVar33 = *(int *)(*(longlong *)&this_00->Elements + 4 + (longlong)iVar33 * 0xc);
            if (iVar33 == -1) goto LAB_14ce658cd;
          }
          FSmallListSet::BaseValueIterator::GotoNext(&local_158);
        }
LAB_14ce658cd:
        bVar48 = true;
LAB_14ce658d0:
        if (local_c8 != (code *)0x0) {
          plVar39 = (longlong *)&local_b8;
          if (plStack_a0 != (longlong *)0x0) {
            plVar39 = plStack_a0;
          }
          (**(code **)(*plVar39 + 0x10))();
        }
        if (local_128 != (code *)0x0) {
          plVar39 = (longlong *)&local_118;
          if (plStack_100 != (longlong *)0x0) {
            plVar39 = plStack_100;
          }
          (**(code **)(*plVar39 + 0x10))();
        }
        if (local_188 != (code *)0x0) {
          plVar39 = &local_178;
          if (plStack_160 != (longlong *)0x0) {
            plVar39 = plStack_160;
          }
          (**(code **)(*plVar39 + 0x10))();
        }
        if (bVar48) {
          if (((local_360.Data <= (FScriptContainerElement *)&local_350) &&
              ((FScriptContainerElement *)&local_350 <
               local_360.Data + (longlong)local_358._4_4_ * 4)) &&
             (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar48)) {
            pcVar41 = (code *)swi(3);
            (*pcVar41)();
            return;
          }
          iVar33 = (int)local_358;
          if ((int)local_358 == local_358._4_4_) {
            iVar33 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_360,(int *)((longlong)&local_358 + 4));
          }
          local_358 = CONCAT44(local_358._4_4_,iVar33 + 1);
          *(int *)(local_360.Data + (longlong)iVar33 * 4) = local_350;
        }
        TStack_2e8.UnvisitedBitMask = TStack_2e8.UnvisitedBitMask & ~TStack_2e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e8);
      }
      lVar36 = (longlong)(int)local_358;
      if (((int)local_358 < 0) &&
         (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar48)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar1 = FVar42.Data + lVar36 * 4;
      for (; FVar42.Data != pFVar1; FVar42.Data = FVar42.Data + 4) {
        local_310[0] = *(uint *)FVar42.Data;
        if (*(int *)&(this->Selected).Elements.field_0x8 !=
            *(int *)&(this->Selected).Elements.field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    (this_00,local_310[0],(int *)local_310);
        }
      }
      local_34c = local_34c + 1;
    } while (local_34c < local_308);
  }
  if (local_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data);
  }
  return;
}

// ExpandToOneRingNeighbours @ 14ce691d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ce69509) */
/* WARNING: Removing unreachable block (ram,0x00014ce6951a) */
/* WARNING: Removing unreachable block (ram,0x00014ce6951e) */

void __thiscall
UE::Geometry::FMeshVertexSelection::ExpandToOneRingNeighbours
          (FMeshVertexSelection *this,TUniqueFunction<bool___cdecl(int)> *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  FDynamicMesh3 *pFVar5;
  ForElementType<FSetElementId> FVar6;
  TUniqueFunction<bool___cdecl(int)> *pTVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  FMeshVertexSelection *pFVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  FSmallListSet *pFVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uchar auVar21 [4];
  uchar auVar22 [4];
  uchar auVar23 [4];
  uchar auVar24 [4];
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  uchar uVar32;
  code *pcVar33;
  bool bVar34;
  char cVar35;
  int iVar36;
  undefined8 uVar37;
  byte bVar38;
  longlong lVar39;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar40;
  longlong *plVar41;
  longlong *plVar42;
  ForElementType<FSetElementId> FVar43;
  code *pcVar44;
  ForAnyElementType FVar45;
  uint uVar46;
  uint uVar47;
  undefined1 *puVar48;
  uint *puVar49;
  int iVar50;
  undefined1 *puVar51;
  undefined1 auStack_3a8 [32];
  uint *local_388;
  FScriptContainerElement *local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_368;
  undefined1 local_358 [4];
  uint local_354;
  ForAnyElementType local_350;
  undefined8 local_348;
  undefined1 local_340 [8];
  int local_338 [2];
  uint local_330 [2];
  uint local_328 [2];
  int local_320;
  uint uStack_31c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_318;
  uint local_310;
  uint uStack_30c;
  uint uStack_308;
  undefined4 uStack_304;
  FMeshVertexSelection *local_300;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2f8;
  int iStack_2f0;
  uint uStack_2ec;
  undefined1 *local_2e8;
  undefined4 uStack_2e0;
  int iStack_2dc;
  int local_2d8;
  int iStack_2d4;
  int iStack_2d0;
  undefined4 uStack_2cc;
  int local_2c8;
  int local_2c4;
  int local_2c0 [2];
  TUniqueFunction<bool___cdecl(int)> *local_2b8;
  code *local_2a8;
  undefined8 local_2a0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_298;
  undefined8 local_290;
  FDynamicMesh3 *pFStack_288;
  TBitArray<FDefaultBitArrayAllocator> **local_280;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_270;
  undefined8 uStack_250;
  code *local_248;
  undefined8 uStack_240;
  FFunctionStorage local_238;
  code *local_218;
  longlong local_208 [3];
  longlong *local_1f0;
  code *local_1e8;
  longlong local_1d8 [3];
  longlong *local_1c0;
  int local_1b8;
  undefined4 uStack_1b4;
  FDynamicMesh3 *pFStack_1b0;
  FSmallListSet *local_1a8;
  int local_1a0;
  code *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  uchar auStack_180 [4];
  uchar auStack_17c [4];
  uchar local_178 [4];
  uchar auStack_174 [4];
  longlong *plStack_170;
  BaseValueIterator local_168;
  code *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  FSmallListSet *local_108;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong *plStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *plStack_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  this_00 = &this->Selected;
  local_350.Data = (FScriptContainerElement *)0x0;
  local_2e8 = &(this->Selected).Elements.field_0x10;
  local_348 = 0;
  iVar36 = *(int *)&(this->Selected).Elements.field_0x28;
  iStack_2f0 = 0;
  local_2d8 = 0;
  uStack_2ec = 1;
  iStack_2dc = iStack_2f0;
  if (iVar36 != 0) {
    puVar49 = *(uint **)&(this->Selected).Elements.field_0x20;
    if (puVar49 == (uint *)0x0) {
      puVar49 = (uint *)local_2e8;
    }
    uStack_2ec = *puVar49;
    local_2d8 = 0;
    iStack_2f0 = 0;
    while (uStack_2ec == 0) {
      lVar39 = (longlong)iStack_2f0;
      local_2d8 = local_2d8 + 0x20;
      iStack_2f0 = iStack_2f0 + 1;
      uStack_2ec = 1;
      iStack_2dc = iVar36;
      if ((int)(iVar36 + -1 + (iVar36 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2f0) goto LAB_14ce6929d;
      uStack_2ec = puVar49[lVar39 + 1];
    }
    uStack_2ec = -uStack_2ec & uStack_2ec;
    uVar2 = (ulonglong)uStack_2ec * 2 + 1;
    lVar39 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar39 == 0; lVar39 = lVar39 + -1) {
      }
    }
    local_2c8 = (int)lVar39;
    iStack_2dc = local_2d8 + -1 + local_2c8;
    if (iVar36 < iStack_2dc) {
      iStack_2dc = iVar36;
    }
  }
LAB_14ce6929d:
  iStack_2d0 = *(int *)&(this->Selected).Elements.field_0x8 -
               *(int *)&(this->Selected).Elements.field_0x34;
  uVar3 = *(uint *)&(this->Selected).Elements.field_0x28;
  bVar38 = (byte)uVar3 & 0x1f;
  uStack_31c = 1 << bVar38;
  uVar47 = uVar3 & 0xffffffe0;
  iVar50 = (int)uVar3 >> 5;
  puVar51 = &(this->Selected).Elements.field_0x10;
  uVar46 = -1 << bVar38;
  uStack_2e0 = 0xffffffff;
  TStack_270._padding_ = CONCAT44(uStack_2ec,iStack_2f0);
  TStack_270.CurrentBitIndex = iStack_2dc;
  TStack_270.UnvisitedBitMask = 0xffffffff;
  TStack_270._28_4_ = iStack_2dc;
  TStack_270.BaseBitIndex = local_2d8;
  uStack_250 = CONCAT44(uStack_2cc,iStack_2d0);
  local_320 = iVar50;
  pTStack_318 = (TBitArray<FDefaultBitArrayAllocator> *)puVar51;
  local_310 = uVar46;
  uStack_30c = uVar3;
  uStack_308 = uVar47;
  local_300 = this;
  local_2f8 = this_00;
  iStack_2d4 = iStack_2dc;
  local_2b8 = param_1;
  local_278 = this_00;
  TStack_270.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2e8;
  if ((((int)uVar3 < 0) || (iVar36 < (int)uVar3)) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar34)) {
    pcVar44 = (code *)swi(3);
    (*pcVar44)();
    return;
  }
  pFVar9 = local_300;
  pTVar8 = pTStack_318;
  uVar4 = *(uint *)&(this->Selected).Elements.field_0x28;
  if (uVar3 != uVar4) {
    puVar48 = *(undefined1 **)&(this->Selected).Elements.field_0x20;
    if (puVar48 == (undefined1 *)0x0) {
      puVar48 = puVar51;
    }
    uVar46 = uVar46 & *(uint *)(puVar48 + (longlong)iVar50 * 4);
    while (uVar46 == 0) {
      uStack_308 = uVar47 + 0x20;
      local_320 = iVar50 + 1;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < local_320)
      goto LAB_14ce693d8;
      uVar46 = *(uint *)(puVar48 + (longlong)iVar50 * 4 + 4);
      local_310 = 0xffffffff;
      uVar47 = uStack_308;
      iVar50 = local_320;
    }
    uStack_31c = -uVar46 & uVar46;
    uVar2 = (ulonglong)uStack_31c * 2 + 1;
    lVar39 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar39 == 0; lVar39 = lVar39 + -1) {
      }
    }
    local_2c4 = (int)lVar39;
    uStack_30c = local_2c4 + -1 + uVar47;
    if ((int)uVar4 < (int)uStack_30c) {
LAB_14ce693d8:
      uStack_30c = uVar4;
    }
  }
  uVar3 = uStack_30c;
  local_2a0 = CONCAT44(uStack_31c,local_320);
  local_290 = CONCAT44(uStack_30c,local_310);
  pFStack_288 = (FDynamicMesh3 *)CONCAT44(uStack_304,uStack_308);
  pTStack_298 = pTStack_318;
  do {
    pTVar10 = local_278;
    if (*(int *)&(local_278->Elements).field_0x8 - *(int *)&(local_278->Elements).field_0x34 !=
        (int)uStack_250) {
      local_358[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_358);
    }
    if (((TStack_270.CurrentBitIndex == uVar3) && (TStack_270.Array == pTVar8)) &&
       (pTVar10 == this_00)) {
      iVar36 = (int)local_348;
      pFVar1 = local_350.Data + (longlong)(int)local_348 * 4;
      FVar45.Data = local_350.Data;
      while( true ) {
        if ((int)local_348 != iVar36) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_340);
        }
        if (FVar45.Data == pFVar1) break;
        local_328[0] = *(uint *)FVar45.Data;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_00,local_2c0,(bool *)local_328);
        FVar45.Data = FVar45.Data + 4;
      }
      if (local_350.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data);
      }
      return;
    }
    pFVar5 = pFVar9->Mesh;
    local_2a8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
                ::Call;
    local_248 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
                ::Call;
    iVar36 = *(int *)(*(longlong *)&pTVar10->Elements + (longlong)TStack_270.CurrentBitIndex * 0xc);
    local_290 = CONCAT44(uStack_1b4,iVar36);
    local_280 = (TBitArray<FDefaultBitArrayAllocator> **)0x0;
    pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxVerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AVMappedValueEnumerable_FSmallListSet_45_H_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_238.HeapAllocation = (longlong *)0x0;
    pFStack_288 = pFVar5;
    local_1b8 = iVar36;
    pFStack_1b0 = pFVar5;
    Core::Private::Function::
    TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0>::
    CloneToEmptyStorage(&pTStack_298,&local_238);
    auVar23 = auStack_17c;
    auVar21 = auStack_180;
    uVar20 = local_188._4_4_;
    uVar19 = (undefined4)local_188;
    uVar18 = uStack_190;
    plStack_170 = local_238.HeapAllocation;
    uVar14 = local_238.InlineAllocation._12_4_;
    uVar13 = local_238.InlineAllocation._8_4_;
    uVar12 = local_238.InlineAllocation._4_4_;
    uVar11 = local_238.InlineAllocation._0_4_;
    uStack_190 = uStack_240;
    local_198 = local_248;
    local_1a8 = &pFVar5->VertexEdgeLists;
    uVar29 = auStack_174[0];
    uVar30 = auStack_174[1];
    uVar31 = auStack_174[2];
    uVar32 = auStack_174[3];
    uVar37._4_1_ = auStack_174[0];
    uVar37._5_1_ = auStack_174[1];
    uVar37._6_1_ = auStack_174[2];
    uVar37._7_1_ = auStack_174[3];
    uVar25 = local_178[0];
    uVar26 = local_178[1];
    uVar27 = local_178[2];
    uVar28 = local_178[3];
    uVar37._0_1_ = local_178[0];
    uVar37._1_1_ = local_178[1];
    uVar37._2_1_ = local_178[2];
    uVar37._3_1_ = local_178[3];
    uVar15 = local_238.InlineAllocation._16_4_;
    uVar16 = local_238.InlineAllocation._20_4_;
    local_1a0 = iVar36;
    local_188._0_1_ = local_238.InlineAllocation[0];
    local_188._1_1_ = local_238.InlineAllocation[1];
    local_188._2_1_ = local_238.InlineAllocation[2];
    local_188._3_1_ = local_238.InlineAllocation[3];
    local_188._4_1_ = local_238.InlineAllocation[4];
    local_188._5_1_ = local_238.InlineAllocation[5];
    local_188._6_1_ = local_238.InlineAllocation[6];
    local_188._7_1_ = local_238.InlineAllocation[7];
    auStack_180[0] = local_238.InlineAllocation[8];
    auStack_180[1] = local_238.InlineAllocation[9];
    auStack_180[2] = local_238.InlineAllocation[10];
    auStack_180[3] = local_238.InlineAllocation[0xb];
    auStack_17c[0] = local_238.InlineAllocation[0xc];
    auStack_17c[1] = local_238.InlineAllocation[0xd];
    auStack_17c[2] = local_238.InlineAllocation[0xe];
    auStack_17c[3] = local_238.InlineAllocation[0xf];
    local_178[0] = local_238.InlineAllocation[0x10];
    local_178[1] = local_238.InlineAllocation[0x11];
    local_178[2] = local_238.InlineAllocation[0x12];
    local_178[3] = local_238.InlineAllocation[0x13];
    auStack_174[0] = local_238.InlineAllocation[0x14];
    auStack_174[1] = local_238.InlineAllocation[0x15];
    auStack_174[2] = local_238.InlineAllocation[0x16];
    auStack_174[3] = local_238.InlineAllocation[0x17];
    local_248 = (code *)0x0;
    uStack_240 = uVar18;
    local_188._0_1_ = (uchar)uVar19;
    local_188._1_1_ = SUB41(uVar19,1);
    local_188._2_1_ = SUB41(uVar19,2);
    local_188._3_1_ = SUB41(uVar19,3);
    local_238.InlineAllocation[0] = (uchar)local_188;
    local_238.InlineAllocation[1] = local_188._1_1_;
    local_238.InlineAllocation[2] = local_188._2_1_;
    local_238.InlineAllocation[3] = local_188._3_1_;
    local_188._4_1_ = (uchar)uVar20;
    local_188._5_1_ = SUB41(uVar20,1);
    local_188._6_1_ = SUB41(uVar20,2);
    local_188._7_1_ = SUB41(uVar20,3);
    local_238.InlineAllocation[4] = local_188._4_1_;
    local_238.InlineAllocation[5] = local_188._5_1_;
    local_238.InlineAllocation[6] = local_188._6_1_;
    local_238.InlineAllocation[7] = local_188._7_1_;
    auStack_180[0] = auVar21[0];
    auStack_180[1] = auVar21[1];
    auStack_180[2] = auVar21[2];
    auStack_180[3] = auVar21[3];
    local_238.InlineAllocation[8] = auStack_180[0];
    local_238.InlineAllocation[9] = auStack_180[1];
    local_238.InlineAllocation[10] = auStack_180[2];
    local_238.InlineAllocation[0xb] = auStack_180[3];
    auStack_17c[0] = auVar23[0];
    auStack_17c[1] = auVar23[1];
    auStack_17c[2] = auVar23[2];
    auStack_17c[3] = auVar23[3];
    local_238.InlineAllocation[0xc] = auStack_17c[0];
    local_238.InlineAllocation[0xd] = auStack_17c[1];
    local_238.InlineAllocation[0xe] = auStack_17c[2];
    local_238.InlineAllocation[0xf] = auStack_17c[3];
    local_238.InlineAllocation[0x10] = uVar25;
    local_238.InlineAllocation[0x11] = uVar26;
    local_238.InlineAllocation[0x12] = uVar27;
    local_238.InlineAllocation[0x13] = uVar28;
    local_238.InlineAllocation[0x14] = uVar29;
    local_238.InlineAllocation[0x15] = uVar30;
    local_238.InlineAllocation[0x16] = uVar31;
    local_238.InlineAllocation[0x17] = uVar32;
    local_238.HeapAllocation = (void *)0x0;
    local_238.InlineAllocation[0x14] = (uchar)uVar16;
    local_238.InlineAllocation[0x15] = SUB41(uVar16,1);
    local_238.InlineAllocation[0x16] = SUB41(uVar16,2);
    local_238.InlineAllocation[0x17] = SUB41(uVar16,3);
    auStack_174[0] = local_238.InlineAllocation[0x14];
    auStack_174[1] = local_238.InlineAllocation[0x15];
    auStack_174[2] = local_238.InlineAllocation[0x16];
    auStack_174[3] = local_238.InlineAllocation[0x17];
    local_238.InlineAllocation[0x10] = (uchar)uVar15;
    local_238.InlineAllocation[0x11] = SUB41(uVar15,1);
    local_238.InlineAllocation[0x12] = SUB41(uVar15,2);
    local_238.InlineAllocation[0x13] = SUB41(uVar15,3);
    local_178[0] = local_238.InlineAllocation[0x10];
    local_178[1] = local_238.InlineAllocation[0x11];
    local_178[2] = local_238.InlineAllocation[0x12];
    local_178[3] = local_238.InlineAllocation[0x13];
    local_238.InlineAllocation[0xc] = (uchar)uVar14;
    local_238.InlineAllocation[0xd] = SUB41(uVar14,1);
    local_238.InlineAllocation[0xe] = SUB41(uVar14,2);
    local_238.InlineAllocation[0xf] = SUB41(uVar14,3);
    auStack_17c[0] = local_238.InlineAllocation[0xc];
    auStack_17c[1] = local_238.InlineAllocation[0xd];
    auStack_17c[2] = local_238.InlineAllocation[0xe];
    auStack_17c[3] = local_238.InlineAllocation[0xf];
    auVar24 = auStack_17c;
    local_238.InlineAllocation[8] = (uchar)uVar13;
    local_238.InlineAllocation[9] = SUB41(uVar13,1);
    local_238.InlineAllocation[10] = SUB41(uVar13,2);
    local_238.InlineAllocation[0xb] = SUB41(uVar13,3);
    auStack_180[0] = local_238.InlineAllocation[8];
    auStack_180[1] = local_238.InlineAllocation[9];
    auStack_180[2] = local_238.InlineAllocation[10];
    auStack_180[3] = local_238.InlineAllocation[0xb];
    auVar22 = auStack_180;
    local_238.InlineAllocation[4] = (uchar)uVar12;
    local_238.InlineAllocation[5] = SUB41(uVar12,1);
    local_238.InlineAllocation[6] = SUB41(uVar12,2);
    local_238.InlineAllocation[7] = SUB41(uVar12,3);
    local_188._4_1_ = local_238.InlineAllocation[4];
    local_188._5_1_ = local_238.InlineAllocation[5];
    local_188._6_1_ = local_238.InlineAllocation[6];
    local_188._7_1_ = local_238.InlineAllocation[7];
    uVar12 = local_188._4_4_;
    local_238.InlineAllocation[0] = (uchar)uVar11;
    local_238.InlineAllocation[1] = SUB41(uVar11,1);
    local_238.InlineAllocation[2] = SUB41(uVar11,2);
    local_238.InlineAllocation[3] = SUB41(uVar11,3);
    local_188._0_1_ = local_238.InlineAllocation[0];
    local_188._1_1_ = local_238.InlineAllocation[1];
    local_188._2_1_ = local_238.InlineAllocation[2];
    local_188._3_1_ = local_238.InlineAllocation[3];
    uVar11 = (undefined4)local_188;
    local_238.HeapAllocation = (void *)0x0;
    auStack_17c[0] = auVar23[0];
    auStack_17c[1] = auVar23[1];
    auStack_17c[2] = auVar23[2];
    auStack_17c[3] = auVar23[3];
    local_238.InlineAllocation[0xc] = auStack_17c[0];
    local_238.InlineAllocation[0xd] = auStack_17c[1];
    local_238.InlineAllocation[0xe] = auStack_17c[2];
    local_238.InlineAllocation[0xf] = auStack_17c[3];
    auStack_180[0] = auVar21[0];
    auStack_180[1] = auVar21[1];
    auStack_180[2] = auVar21[2];
    auStack_180[3] = auVar21[3];
    local_238.InlineAllocation[8] = auStack_180[0];
    local_238.InlineAllocation[9] = auStack_180[1];
    local_238.InlineAllocation[10] = auStack_180[2];
    local_238.InlineAllocation[0xb] = auStack_180[3];
    local_188._4_1_ = (uchar)uVar20;
    local_188._5_1_ = SUB41(uVar20,1);
    local_188._6_1_ = SUB41(uVar20,2);
    local_188._7_1_ = SUB41(uVar20,3);
    local_238.InlineAllocation[4] = local_188._4_1_;
    local_238.InlineAllocation[5] = local_188._5_1_;
    local_238.InlineAllocation[6] = local_188._6_1_;
    local_238.InlineAllocation[7] = local_188._7_1_;
    local_188._0_1_ = (uchar)uVar19;
    local_188._1_1_ = SUB41(uVar19,1);
    local_188._2_1_ = SUB41(uVar19,2);
    local_188._3_1_ = SUB41(uVar19,3);
    local_238.InlineAllocation[0] = (uchar)local_188;
    local_238.InlineAllocation[1] = local_188._1_1_;
    local_238.InlineAllocation[2] = local_188._2_1_;
    local_238.InlineAllocation[3] = local_188._3_1_;
    local_248 = (code *)0x0;
    local_238.InlineAllocation._16_8_ = uVar37;
    local_188._0_4_ = uVar11;
    local_188._4_4_ = uVar12;
    auStack_180 = auVar22;
    auStack_17c = auVar24;
    if (local_2a8 != (code *)0x0) {
      ppTVar40 = &pTStack_298;
      if (local_280 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
        ppTVar40 = local_280;
      }
      (*(code *)((*ppTVar40)->AllocatorInstance).SecondaryData)();
    }
    iVar36 = local_1a0;
    pFVar17 = local_1a8;
    local_218 = local_198;
    local_1f0 = (longlong *)0x0;
    if (local_198 != (code *)0x0) {
      plVar42 = &local_188;
      if (plStack_170 != (longlong *)0x0) {
        plVar42 = plStack_170;
      }
      (**(code **)*plVar42)(plVar42,local_208);
    }
    pcVar44 = local_218;
    FSmallListSet::BaseValueIterator::BaseValueIterator(&local_168,pFVar17,iVar36,false);
    local_a8 = pcVar44;
    local_138 = (code *)0x0;
    plStack_110 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
    if (pcVar44 != (code *)0x0) {
      plVar42 = local_208;
      if (local_1f0 != (longlong *)0x0) {
        plVar42 = local_1f0;
      }
      (**(code **)*plVar42)(plVar42,&local_98);
      pcVar44 = local_218;
    }
    plVar42 = plStack_110;
    uVar14 = uStack_11c;
    uVar13 = uStack_120;
    uVar12 = uStack_124;
    uVar11 = local_128;
    uVar18 = uStack_130;
    pcVar33 = local_138;
    uVar37 = CONCAT44(uStack_114,local_118);
    local_138 = local_a8;
    uStack_130 = uStack_a0;
    local_118 = (undefined4)local_88;
    uStack_114 = local_88._4_4_;
    plStack_110 = plStack_80;
    local_128 = local_98;
    uStack_124 = uStack_94;
    uStack_120 = uStack_90;
    uStack_11c = uStack_8c;
    local_a8 = pcVar33;
    uStack_a0 = uVar18;
    local_98 = uVar11;
    uStack_94 = uVar12;
    uStack_90 = uVar13;
    uStack_8c = uVar14;
    local_88 = uVar37;
    plStack_80 = plVar42;
    if (pcVar33 != (code *)0x0) {
      plVar41 = (longlong *)&local_98;
      if (plVar42 != (longlong *)0x0) {
        plVar41 = plVar42;
      }
      (**(code **)(*plVar41 + 0x10))();
      pcVar44 = local_218;
    }
    if (pcVar44 != (code *)0x0) {
      plVar42 = local_208;
      if (local_1f0 != (longlong *)0x0) {
        plVar42 = local_1f0;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    iVar36 = local_1a0;
    pFVar17 = local_1a8;
    local_1e8 = local_198;
    local_1c0 = (longlong *)0x0;
    if (local_198 != (code *)0x0) {
      plVar42 = &local_188;
      if (plStack_170 != (longlong *)0x0) {
        plVar42 = plStack_170;
      }
      (**(code **)*plVar42)(plVar42,local_1d8);
    }
    local_108 = pFVar17;
    local_100 = iVar36;
    local_fc = 0xffffffff;
    local_f8 = 0;
    local_f0 = 0xffffffffffffffff;
    local_d8 = (code *)0x0;
    plStack_b0 = (longlong *)0x0;
    local_78 = local_1e8;
    plStack_50 = (longlong *)0x0;
    if (local_1e8 != (code *)0x0) {
      plVar42 = local_1d8;
      if (local_1c0 != (longlong *)0x0) {
        plVar42 = local_1c0;
      }
      (**(code **)*plVar42)(plVar42,&local_68);
    }
    plVar42 = plStack_b0;
    uVar14 = uStack_bc;
    uVar13 = uStack_c0;
    uVar12 = uStack_c4;
    uVar11 = local_c8;
    uVar18 = uStack_d0;
    pcVar44 = local_d8;
    uVar37 = CONCAT44(uStack_b4,local_b8);
    local_d8 = local_78;
    uStack_d0 = uStack_70;
    local_b8 = (undefined4)local_58;
    uStack_b4 = local_58._4_4_;
    plStack_b0 = plStack_50;
    local_c8 = local_68;
    uStack_c4 = uStack_64;
    uStack_c0 = uStack_60;
    uStack_bc = uStack_5c;
    local_78 = pcVar44;
    uStack_70 = uVar18;
    local_68 = uVar11;
    uStack_64 = uVar12;
    uStack_60 = uVar13;
    uStack_5c = uVar14;
    local_58 = uVar37;
    plStack_50 = plVar42;
    if (pcVar44 != (code *)0x0) {
      plVar41 = (longlong *)&local_68;
      if (plVar42 != (longlong *)0x0) {
        plVar41 = plVar42;
      }
      (**(code **)(*plVar41 + 0x10))();
    }
    pTVar7 = local_2b8;
    if (local_1e8 != (code *)0x0) {
      plVar42 = local_1d8;
      if (local_1c0 != (longlong *)0x0) {
        plVar42 = local_1c0;
      }
      (**(code **)(*plVar42 + 0x10))();
      pTVar7 = local_2b8;
    }
    while (((local_168.ListSet != local_108 || (local_168.ListIndex != local_100)) ||
           ((local_168.iCur != (int)local_f0 || (local_168.cur_ptr != local_f0._4_4_))))) {
      local_338[0] = local_168.cur_value;
      Core::Private::Function::CheckCallable(local_138);
      pcVar44 = local_138;
      plVar42 = (longlong *)&local_128;
      if (plStack_110 != (longlong *)0x0) {
        plVar42 = plStack_110;
      }
      uVar37 = (**(code **)(*plVar42 + 8))();
      local_354 = (*pcVar44)(uVar37,local_338);
      if (*(void **)pTVar7 == (void *)0x0) {
LAB_14ce698c7:
        if (*(int *)&(pFVar9->Selected).Elements.field_0x8 !=
            *(int *)&(pFVar9->Selected).Elements.field_0x34) {
          FVar6 = (this->Selected).Hash.SecondaryData;
          FVar43 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
          if (FVar6 != (ForElementType<FSetElementId>)0x0) {
            FVar43 = FVar6;
          }
          iVar36 = *(int *)((longlong)FVar43 +
                           (ulonglong)((this->Selected).HashSize - 1U & local_354) * 4);
          if (iVar36 != -1) {
            do {
              if (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar36 * 0xc) == local_354)
              goto LAB_14ce699c8;
              iVar36 = *(int *)(*(longlong *)&this_00->Elements + 4 + (longlong)iVar36 * 0xc);
            } while (iVar36 != -1);
          }
        }
        if (local_350.Data <= (FScriptContainerElement *)&local_354) {
          if ((FScriptContainerElement *)&local_354 < local_350.Data + (longlong)local_348._4_4_ * 4
             ) {
            local_370 = (longlong)(int)local_348;
            local_368 = 4;
            local_388 = &local_354;
            local_380 = local_350.Data;
            local_378 = (longlong)local_348._4_4_;
            bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar34) {
              pcVar44 = (code *)swi(3);
              (*pcVar44)();
              return;
            }
          }
        }
        iVar36 = (int)local_348;
        if ((int)local_348 == local_348._4_4_) {
          iVar36 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_350,(int *)((longlong)&local_348 + 4));
        }
        local_348 = CONCAT44(local_348._4_4_,iVar36 + 1);
        *(uint *)(local_350.Data + (longlong)iVar36 * 4) = local_354;
      }
      else {
        local_330[0] = local_354;
        Core::Private::Function::CheckCallable(*(void **)pTVar7);
        pcVar44 = *(code **)pTVar7;
        plVar42 = *(longlong **)&pTVar7->field_0x28;
        if (*(longlong **)&pTVar7->field_0x28 == (longlong *)0x0) {
          plVar42 = (longlong *)&pTVar7->field_0x10;
        }
        uVar37 = (**(code **)(*plVar42 + 8))();
        cVar35 = (*pcVar44)(uVar37,local_330);
        if (cVar35 != '\0') goto LAB_14ce698c7;
      }
LAB_14ce699c8:
      FSmallListSet::BaseValueIterator::GotoNext(&local_168);
    }
    if (local_d8 != (code *)0x0) {
      plVar42 = (longlong *)&local_c8;
      if (plStack_b0 != (longlong *)0x0) {
        plVar42 = plStack_b0;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    if (local_138 != (code *)0x0) {
      plVar42 = (longlong *)&local_128;
      if (plStack_110 != (longlong *)0x0) {
        plVar42 = plStack_110;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    if (local_198 != (code *)0x0) {
      plVar42 = &local_188;
      if (plStack_170 != (longlong *)0x0) {
        plVar42 = plStack_170;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    TStack_270.UnvisitedBitMask = TStack_270.UnvisitedBitMask & ~TStack_270._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_270);
  } while( true );
}

