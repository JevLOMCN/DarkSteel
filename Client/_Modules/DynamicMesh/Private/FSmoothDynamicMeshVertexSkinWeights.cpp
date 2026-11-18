// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// FSmoothDynamicMeshVertexSkinWeights @ 14c7b3fe0

FSmoothDynamicMeshVertexSkinWeights * __thiscall
UE::Geometry::FSmoothDynamicMeshVertexSkinWeights::FSmoothDynamicMeshVertexSkinWeights
          (FSmoothDynamicMeshVertexSkinWeights *this,FDynamicMesh3 *param_1,
          TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *param_2)

{
  TBoneWeightsDataSource<unsigned_short,float> *pTVar1;
  TBoneWeightsDataSource<unsigned_short,float> *pTVar2;
  
  pTVar2 = (TBoneWeightsDataSource<unsigned_short,float> *)0x0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  (this->SkinWeightsAttributeDataSource).Ptr = (TBoneWeightsDataSource<unsigned_short,float> *)0x0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSmoothDynamicMeshVertexSkinWeights_Geometry_UE__6B_;
  this->MaxNumInfluences = 0xc;
  this->Attribute = param_2;
  if (param_2 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar1 = ::operator_new(0x10);
    if (pTVar1 != (TBoneWeightsDataSource<unsigned_short,float> *)0x0) {
      pTVar1[1] = (TBoneWeightsDataSource<unsigned_short,float>)param_2;
      *pTVar1 = (TBoneWeightsDataSource<unsigned_short,float>)
                &___7FSkinWeightsAttributeDataSource_SmoothBoneWeightsLocals__6B_;
      pTVar2 = pTVar1;
    }
    pTVar1 = (this->SkinWeightsAttributeDataSource).Ptr;
    (this->SkinWeightsAttributeDataSource).Ptr = pTVar2;
    if (pTVar1 != (TBoneWeightsDataSource<unsigned_short,float> *)0x0) {
      (**(code **)*pTVar1)(pTVar1,1);
    }
    this->_padding_ = (longlong)(this->SkinWeightsAttributeDataSource).Ptr;
  }
  return this;
}

// FSmoothDynamicMeshVertexSkinWeights @ 14c7b4080

FSmoothDynamicMeshVertexSkinWeights * __thiscall
UE::Geometry::FSmoothDynamicMeshVertexSkinWeights::FSmoothDynamicMeshVertexSkinWeights
          (FSmoothDynamicMeshVertexSkinWeights *this,FDynamicMesh3 *param_1,FName param_2)

{
  FDynamicMeshAttributeSet *this_00;
  TBoneWeightsDataSource<unsigned_short,float> TVar1;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar2;
  TBoneWeightsDataSource<unsigned_short,float> *pTVar3;
  TBoneWeightsDataSource<unsigned_short,float> *pTVar4;
  
  pTVar4 = (TBoneWeightsDataSource<unsigned_short,float> *)0x0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  (this->SkinWeightsAttributeDataSource).Ptr = (TBoneWeightsDataSource<unsigned_short,float> *)0x0;
  this->Attribute = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSmoothDynamicMeshVertexSkinWeights_Geometry_UE__6B_;
  this->MaxNumInfluences = 0xc;
  if ((param_1 != (FDynamicMesh3 *)0x0) &&
     (this_00 = (param_1->AttributeSet).Ptr, this_00 != (FDynamicMeshAttributeSet *)0x0)) {
    pTVar2 = FDynamicMeshAttributeSet::GetSkinWeightsAttribute(this_00,param_2);
    this->Attribute = pTVar2;
    if (pTVar2 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar3 = ::operator_new(0x10);
      if (pTVar3 != (TBoneWeightsDataSource<unsigned_short,float> *)0x0) {
        TVar1 = (TBoneWeightsDataSource<unsigned_short,float>)this->Attribute;
        *pTVar3 = (TBoneWeightsDataSource<unsigned_short,float>)
                  &___7FSkinWeightsAttributeDataSource_SmoothBoneWeightsLocals__6B_;
        pTVar3[1] = TVar1;
        pTVar4 = pTVar3;
      }
      pTVar3 = (this->SkinWeightsAttributeDataSource).Ptr;
      (this->SkinWeightsAttributeDataSource).Ptr = pTVar4;
      if (pTVar3 != (TBoneWeightsDataSource<unsigned_short,float> *)0x0) {
        (**(code **)*pTVar3)(pTVar3,1);
      }
      this->_padding_ = (longlong)(this->SkinWeightsAttributeDataSource).Ptr;
    }
  }
  return this;
}

// ~FSmoothDynamicMeshVertexSkinWeights @ 14c7b78c0

void __thiscall
UE::Geometry::FSmoothDynamicMeshVertexSkinWeights::~FSmoothDynamicMeshVertexSkinWeights
          (FSmoothDynamicMeshVertexSkinWeights *this)

{
  TBoneWeightsDataSource<unsigned_short,float> *pTVar1;
  
  pTVar1 = (this->SkinWeightsAttributeDataSource).Ptr;
  if (pTVar1 != (TBoneWeightsDataSource<unsigned_short,float> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014c7b78d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pTVar1)(pTVar1,1);
    return;
  }
  return;
}

// operator() @ 14c7c3620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c7c37af) */
/* WARNING: Removing unreachable block (ram,0x00014c7c37c0) */
/* WARNING: Removing unreachable block (ram,0x00014c7c37c4) */

void __thiscall
`UE::Geometry::FSmoothDynamicMeshVertexSkinWeights::SmoothWeightsAtVerticesWithinDistance'::__l10::
<lambda_1>::operator()(void *this)

{
  double *pdVar1;
  longlong lVar2;
  FDynamicMesh3 *pFVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FSmallListSet *pFVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uchar auVar17 [4];
  uchar auVar18 [4];
  uchar auVar19 [4];
  uchar auVar20 [4];
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  code *pcVar29;
  bool bVar30;
  uint uVar31;
  int iVar32;
  undefined8 uVar33;
  FGraphNode *pFVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  undefined ***pppuVar38;
  longlong *plVar39;
  longlong *plVar40;
  code *pcVar41;
  FScriptContainerElement *pFVar42;
  ForAnyElementType FVar43;
  uint uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  longlong lVar47;
  bool bVar48;
  double dVar49;
  undefined1 auStackY_4d8 [32];
  ForAnyElementType local_488;
  undefined8 local_480;
  int local_478 [4];
  ulonglong local_468;
  undefined4 local_460;
  int local_45c;
  code *local_458;
  undefined8 uStack_450;
  FFunctionStorage local_448;
  code *local_428;
  longlong local_418 [3];
  longlong *local_400;
  code *local_3f8;
  longlong local_3e8 [3];
  longlong *local_3d0;
  uint local_3c8;
  undefined4 uStack_3c4;
  longlong lStack_3c0;
  code *local_3b8;
  undefined **local_3a8;
  undefined8 local_3a0;
  longlong lStack_398;
  undefined ***local_390;
  TVector<double>_u_0 local_388;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  double dStack_348;
  double local_340;
  double local_338;
  double dStack_330;
  double local_328;
  TVector<double> local_320;
  FSmallListSet *local_308;
  uint local_300;
  code *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  uchar auStack_2e0 [4];
  uchar auStack_2dc [4];
  uchar local_2d8 [4];
  uchar auStack_2d4 [4];
  longlong *plStack_2d0;
  BaseValueIterator local_2c8;
  code *local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  longlong *plStack_270;
  FSmallListSet *local_268;
  uint local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined8 local_250;
  code *local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  longlong *plStack_210;
  code *local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  longlong *plStack_1e0;
  code *local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  longlong *plStack_1b0;
  undefined1 local_1a8 [56];
  longlong *local_170;
  ForAnyElementType local_168;
  undefined8 local_160;
  TBitArray<FDefaultBitArrayAllocator> local_158;
  undefined4 local_138;
  undefined4 local_134;
  void *local_128;
  undefined4 local_120;
  TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
  local_118;
  FIndexPriorityQueue local_100;
  TVector<double>_u_0 local_c8;
  TQuaternion<double>_u_0 TStack_b0;
  double local_90;
  double dStack_88;
  ulonglong local_78;
  
  dVar6 = __real_3ff0000000000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  uVar45 = (ulonglong)*(int *)((longlong)this + 8);
  uVar46 = uVar45;
  if (*(int *)((longlong)this + 0xc) <= *(int *)((longlong)this + 8)) {
    return;
  }
LAB_14c7c36a0:
  plVar40 = *(longlong **)((longlong)this + 0x10);
  uVar44 = (uint)uVar46;
  uVar36 = 0;
  if ((int)uVar44 < (int)plVar40[1]) {
    uVar36 = ~uVar44 >> 0x1f;
  }
  local_468 = uVar45;
  if ((uVar36 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar41 = (code *)swi(3);
    (*pcVar41)();
    return;
  }
  local_390 = (undefined ***)0x0;
  bVar30 = false;
  local_448.HeapAllocation = (longlong *)0x0;
  uVar36 = *(uint *)(*plVar40 + uVar45 * 4);
  lVar47 = *(longlong *)(*(longlong *)this + 0x18);
  local_3a8 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxVerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AVMappedValueEnumerable_FSmallListSet_45_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_3a0 = CONCAT44(uStack_3c4,uVar36);
  local_3b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
              ::Call;
  local_458 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
              ::Call;
  local_3c8 = uVar36;
  lStack_3c0 = lVar47;
  lStack_398 = lVar47;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0>::
  CloneToEmptyStorage(&local_3a8,&local_448);
  auVar19 = auStack_2dc;
  auVar17 = auStack_2e0;
  uVar16 = local_2e8._4_4_;
  uVar15 = (undefined4)local_2e8;
  uVar14 = uStack_2f0;
  plStack_2d0 = local_448.HeapAllocation;
  uVar10 = local_448.InlineAllocation._12_4_;
  uVar9 = local_448.InlineAllocation._8_4_;
  uVar8 = local_448.InlineAllocation._4_4_;
  uVar7 = local_448.InlineAllocation._0_4_;
  local_308 = (FSmallListSet *)(lVar47 + 0xb8);
  uVar25 = auStack_2d4[0];
  uVar26 = auStack_2d4[1];
  uVar27 = auStack_2d4[2];
  uVar28 = auStack_2d4[3];
  uVar33._4_1_ = auStack_2d4[0];
  uVar33._5_1_ = auStack_2d4[1];
  uVar33._6_1_ = auStack_2d4[2];
  uVar33._7_1_ = auStack_2d4[3];
  uVar21 = local_2d8[0];
  uVar22 = local_2d8[1];
  uVar23 = local_2d8[2];
  uVar24 = local_2d8[3];
  uVar33._0_1_ = local_2d8[0];
  uVar33._1_1_ = local_2d8[1];
  uVar33._2_1_ = local_2d8[2];
  uVar33._3_1_ = local_2d8[3];
  local_2f8 = local_458;
  uStack_2f0 = uStack_450;
  uVar11 = local_448.InlineAllocation._16_4_;
  uVar12 = local_448.InlineAllocation._20_4_;
  local_300 = uVar36;
  local_2e8._0_1_ = local_448.InlineAllocation[0];
  local_2e8._1_1_ = local_448.InlineAllocation[1];
  local_2e8._2_1_ = local_448.InlineAllocation[2];
  local_2e8._3_1_ = local_448.InlineAllocation[3];
  local_2e8._4_1_ = local_448.InlineAllocation[4];
  local_2e8._5_1_ = local_448.InlineAllocation[5];
  local_2e8._6_1_ = local_448.InlineAllocation[6];
  local_2e8._7_1_ = local_448.InlineAllocation[7];
  auStack_2e0[0] = local_448.InlineAllocation[8];
  auStack_2e0[1] = local_448.InlineAllocation[9];
  auStack_2e0[2] = local_448.InlineAllocation[10];
  auStack_2e0[3] = local_448.InlineAllocation[0xb];
  auStack_2dc[0] = local_448.InlineAllocation[0xc];
  auStack_2dc[1] = local_448.InlineAllocation[0xd];
  auStack_2dc[2] = local_448.InlineAllocation[0xe];
  auStack_2dc[3] = local_448.InlineAllocation[0xf];
  local_2d8[0] = local_448.InlineAllocation[0x10];
  local_2d8[1] = local_448.InlineAllocation[0x11];
  local_2d8[2] = local_448.InlineAllocation[0x12];
  local_2d8[3] = local_448.InlineAllocation[0x13];
  auStack_2d4[0] = local_448.InlineAllocation[0x14];
  auStack_2d4[1] = local_448.InlineAllocation[0x15];
  auStack_2d4[2] = local_448.InlineAllocation[0x16];
  auStack_2d4[3] = local_448.InlineAllocation[0x17];
  local_2e8._0_1_ = (uchar)uVar15;
  local_2e8._1_1_ = SUB41(uVar15,1);
  local_2e8._2_1_ = SUB41(uVar15,2);
  local_2e8._3_1_ = SUB41(uVar15,3);
  local_448.InlineAllocation[0] = (uchar)local_2e8;
  local_448.InlineAllocation[1] = local_2e8._1_1_;
  local_448.InlineAllocation[2] = local_2e8._2_1_;
  local_448.InlineAllocation[3] = local_2e8._3_1_;
  local_2e8._4_1_ = (uchar)uVar16;
  local_2e8._5_1_ = SUB41(uVar16,1);
  local_2e8._6_1_ = SUB41(uVar16,2);
  local_2e8._7_1_ = SUB41(uVar16,3);
  local_448.InlineAllocation[4] = local_2e8._4_1_;
  local_448.InlineAllocation[5] = local_2e8._5_1_;
  local_448.InlineAllocation[6] = local_2e8._6_1_;
  local_448.InlineAllocation[7] = local_2e8._7_1_;
  auStack_2e0[0] = auVar17[0];
  auStack_2e0[1] = auVar17[1];
  auStack_2e0[2] = auVar17[2];
  auStack_2e0[3] = auVar17[3];
  local_448.InlineAllocation[8] = auStack_2e0[0];
  local_448.InlineAllocation[9] = auStack_2e0[1];
  local_448.InlineAllocation[10] = auStack_2e0[2];
  local_448.InlineAllocation[0xb] = auStack_2e0[3];
  auStack_2dc[0] = auVar19[0];
  auStack_2dc[1] = auVar19[1];
  auStack_2dc[2] = auVar19[2];
  auStack_2dc[3] = auVar19[3];
  local_448.InlineAllocation[0xc] = auStack_2dc[0];
  local_448.InlineAllocation[0xd] = auStack_2dc[1];
  local_448.InlineAllocation[0xe] = auStack_2dc[2];
  local_448.InlineAllocation[0xf] = auStack_2dc[3];
  local_448.InlineAllocation[0x10] = uVar21;
  local_448.InlineAllocation[0x11] = uVar22;
  local_448.InlineAllocation[0x12] = uVar23;
  local_448.InlineAllocation[0x13] = uVar24;
  local_448.InlineAllocation[0x14] = uVar25;
  local_448.InlineAllocation[0x15] = uVar26;
  local_448.InlineAllocation[0x16] = uVar27;
  local_448.InlineAllocation[0x17] = uVar28;
  local_448.HeapAllocation = (void *)0x0;
  local_448.InlineAllocation[0x14] = (uchar)uVar12;
  local_448.InlineAllocation[0x15] = SUB41(uVar12,1);
  local_448.InlineAllocation[0x16] = SUB41(uVar12,2);
  local_448.InlineAllocation[0x17] = SUB41(uVar12,3);
  auStack_2d4[0] = local_448.InlineAllocation[0x14];
  auStack_2d4[1] = local_448.InlineAllocation[0x15];
  auStack_2d4[2] = local_448.InlineAllocation[0x16];
  auStack_2d4[3] = local_448.InlineAllocation[0x17];
  local_448.InlineAllocation[0x10] = (uchar)uVar11;
  local_448.InlineAllocation[0x11] = SUB41(uVar11,1);
  local_448.InlineAllocation[0x12] = SUB41(uVar11,2);
  local_448.InlineAllocation[0x13] = SUB41(uVar11,3);
  local_2d8[0] = local_448.InlineAllocation[0x10];
  local_2d8[1] = local_448.InlineAllocation[0x11];
  local_2d8[2] = local_448.InlineAllocation[0x12];
  local_2d8[3] = local_448.InlineAllocation[0x13];
  local_448.InlineAllocation[0xc] = (uchar)uVar10;
  local_448.InlineAllocation[0xd] = SUB41(uVar10,1);
  local_448.InlineAllocation[0xe] = SUB41(uVar10,2);
  local_448.InlineAllocation[0xf] = SUB41(uVar10,3);
  auStack_2dc[0] = local_448.InlineAllocation[0xc];
  auStack_2dc[1] = local_448.InlineAllocation[0xd];
  auStack_2dc[2] = local_448.InlineAllocation[0xe];
  auStack_2dc[3] = local_448.InlineAllocation[0xf];
  auVar20 = auStack_2dc;
  local_448.InlineAllocation[8] = (uchar)uVar9;
  local_448.InlineAllocation[9] = SUB41(uVar9,1);
  local_448.InlineAllocation[10] = SUB41(uVar9,2);
  local_448.InlineAllocation[0xb] = SUB41(uVar9,3);
  auStack_2e0[0] = local_448.InlineAllocation[8];
  auStack_2e0[1] = local_448.InlineAllocation[9];
  auStack_2e0[2] = local_448.InlineAllocation[10];
  auStack_2e0[3] = local_448.InlineAllocation[0xb];
  auVar18 = auStack_2e0;
  local_448.InlineAllocation[4] = (uchar)uVar8;
  local_448.InlineAllocation[5] = SUB41(uVar8,1);
  local_448.InlineAllocation[6] = SUB41(uVar8,2);
  local_448.InlineAllocation[7] = SUB41(uVar8,3);
  local_2e8._4_1_ = local_448.InlineAllocation[4];
  local_2e8._5_1_ = local_448.InlineAllocation[5];
  local_2e8._6_1_ = local_448.InlineAllocation[6];
  local_2e8._7_1_ = local_448.InlineAllocation[7];
  uVar8 = local_2e8._4_4_;
  local_448.InlineAllocation[0] = (uchar)uVar7;
  local_448.InlineAllocation[1] = SUB41(uVar7,1);
  local_448.InlineAllocation[2] = SUB41(uVar7,2);
  local_448.InlineAllocation[3] = SUB41(uVar7,3);
  local_2e8._0_1_ = local_448.InlineAllocation[0];
  local_2e8._1_1_ = local_448.InlineAllocation[1];
  local_2e8._2_1_ = local_448.InlineAllocation[2];
  local_2e8._3_1_ = local_448.InlineAllocation[3];
  uVar7 = (undefined4)local_2e8;
  local_448.HeapAllocation = (void *)0x0;
  auStack_2dc[0] = auVar19[0];
  auStack_2dc[1] = auVar19[1];
  auStack_2dc[2] = auVar19[2];
  auStack_2dc[3] = auVar19[3];
  local_448.InlineAllocation[0xc] = auStack_2dc[0];
  local_448.InlineAllocation[0xd] = auStack_2dc[1];
  local_448.InlineAllocation[0xe] = auStack_2dc[2];
  local_448.InlineAllocation[0xf] = auStack_2dc[3];
  auStack_2e0[0] = auVar17[0];
  auStack_2e0[1] = auVar17[1];
  auStack_2e0[2] = auVar17[2];
  auStack_2e0[3] = auVar17[3];
  local_448.InlineAllocation[8] = auStack_2e0[0];
  local_448.InlineAllocation[9] = auStack_2e0[1];
  local_448.InlineAllocation[10] = auStack_2e0[2];
  local_448.InlineAllocation[0xb] = auStack_2e0[3];
  local_2e8._4_1_ = (uchar)uVar16;
  local_2e8._5_1_ = SUB41(uVar16,1);
  local_2e8._6_1_ = SUB41(uVar16,2);
  local_2e8._7_1_ = SUB41(uVar16,3);
  local_448.InlineAllocation[4] = local_2e8._4_1_;
  local_448.InlineAllocation[5] = local_2e8._5_1_;
  local_448.InlineAllocation[6] = local_2e8._6_1_;
  local_448.InlineAllocation[7] = local_2e8._7_1_;
  local_2e8._0_1_ = (uchar)uVar15;
  local_2e8._1_1_ = SUB41(uVar15,1);
  local_2e8._2_1_ = SUB41(uVar15,2);
  local_2e8._3_1_ = SUB41(uVar15,3);
  local_448.InlineAllocation[0] = (uchar)local_2e8;
  local_448.InlineAllocation[1] = local_2e8._1_1_;
  local_448.InlineAllocation[2] = local_2e8._2_1_;
  local_448.InlineAllocation[3] = local_2e8._3_1_;
  uStack_450 = uVar14;
  local_458 = (code *)0x0;
  local_448.InlineAllocation._16_8_ = uVar33;
  local_2e8._0_4_ = uVar7;
  local_2e8._4_4_ = uVar8;
  auStack_2e0 = auVar18;
  auStack_2dc = auVar20;
  if (local_3b8 != (code *)0x0) {
    pppuVar38 = &local_3a8;
    if (local_390 != (undefined ***)0x0) {
      pppuVar38 = local_390;
    }
    (*(code *)(*pppuVar38)[2])();
  }
  uVar31 = local_300;
  pFVar13 = local_308;
  local_428 = local_2f8;
  local_400 = (longlong *)0x0;
  if (local_2f8 != (code *)0x0) {
    plVar40 = &local_2e8;
    if (plStack_2d0 != (longlong *)0x0) {
      plVar40 = plStack_2d0;
    }
    (**(code **)*plVar40)(plVar40,local_418);
  }
  pcVar41 = local_428;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator(&local_2c8,pFVar13,uVar31,false)
  ;
  local_208 = pcVar41;
  local_298 = (code *)0x0;
  plStack_270 = (longlong *)0x0;
  plStack_1e0 = (longlong *)0x0;
  if (pcVar41 != (code *)0x0) {
    plVar40 = local_418;
    if (local_400 != (longlong *)0x0) {
      plVar40 = local_400;
    }
    (**(code **)*plVar40)(plVar40,&local_1f8);
    pcVar41 = local_428;
  }
  plVar40 = plStack_270;
  uVar10 = uStack_27c;
  uVar9 = uStack_280;
  uVar8 = uStack_284;
  uVar7 = local_288;
  uVar14 = uStack_290;
  pcVar29 = local_298;
  uVar33 = CONCAT44(uStack_274,local_278);
  local_298 = local_208;
  uStack_290 = uStack_200;
  local_278 = (undefined4)local_1e8;
  uStack_274 = local_1e8._4_4_;
  plStack_270 = plStack_1e0;
  local_288 = local_1f8;
  uStack_284 = uStack_1f4;
  uStack_280 = uStack_1f0;
  uStack_27c = uStack_1ec;
  local_208 = pcVar29;
  uStack_200 = uVar14;
  local_1f8 = uVar7;
  uStack_1f4 = uVar8;
  uStack_1f0 = uVar9;
  uStack_1ec = uVar10;
  local_1e8 = uVar33;
  plStack_1e0 = plVar40;
  if (pcVar29 != (code *)0x0) {
    plVar39 = (longlong *)&local_1f8;
    if (plVar40 != (longlong *)0x0) {
      plVar39 = plVar40;
    }
    (**(code **)(*plVar39 + 0x10))();
    pcVar41 = local_428;
  }
  if (pcVar41 != (code *)0x0) {
    plVar40 = local_418;
    if (local_400 != (longlong *)0x0) {
      plVar40 = local_400;
    }
    (**(code **)(*plVar40 + 0x10))();
  }
  uVar31 = local_300;
  pFVar13 = local_308;
  local_3f8 = local_2f8;
  local_3d0 = (longlong *)0x0;
  if (local_2f8 != (code *)0x0) {
    plVar40 = &local_2e8;
    if (plStack_2d0 != (longlong *)0x0) {
      plVar40 = plStack_2d0;
    }
    (**(code **)*plVar40)(plVar40,local_3e8);
  }
  local_260 = uVar31;
  local_25c = 0xffffffff;
  local_268 = pFVar13;
  local_258 = 0;
  local_250 = 0xffffffffffffffff;
  local_238 = (code *)0x0;
  plStack_210 = (longlong *)0x0;
  local_1d8 = local_3f8;
  plStack_1b0 = (longlong *)0x0;
  if (local_3f8 != (code *)0x0) {
    plVar40 = local_3e8;
    if (local_3d0 != (longlong *)0x0) {
      plVar40 = local_3d0;
    }
    (**(code **)*plVar40)(plVar40,&local_1c8);
  }
  plVar40 = plStack_210;
  uVar10 = uStack_21c;
  uVar9 = uStack_220;
  uVar8 = uStack_224;
  uVar7 = local_228;
  uVar14 = uStack_230;
  pcVar41 = local_238;
  uVar33 = CONCAT44(uStack_214,local_218);
  local_238 = local_1d8;
  uStack_230 = uStack_1d0;
  local_218 = (undefined4)local_1b8;
  uStack_214 = local_1b8._4_4_;
  plStack_210 = plStack_1b0;
  local_228 = local_1c8;
  uStack_224 = uStack_1c4;
  uStack_220 = uStack_1c0;
  uStack_21c = uStack_1bc;
  local_1d8 = pcVar41;
  uStack_1d0 = uVar14;
  local_1c8 = uVar7;
  uStack_1c4 = uVar8;
  uStack_1c0 = uVar9;
  uStack_1bc = uVar10;
  local_1b8 = uVar33;
  plStack_1b0 = plVar40;
  if (pcVar41 != (code *)0x0) {
    plVar39 = (longlong *)&local_1c8;
    if (plVar40 != (longlong *)0x0) {
      plVar39 = plVar40;
    }
    (**(code **)(*plVar39 + 0x10))();
  }
  if (local_3f8 != (code *)0x0) {
    plVar40 = local_3e8;
    if (local_3d0 != (longlong *)0x0) {
      plVar40 = local_3d0;
    }
    (**(code **)(*plVar40 + 0x10))();
  }
  do {
    iVar37 = -1;
    if ((((local_2c8.ListSet == local_268) && (local_2c8.ListIndex == local_260)) &&
        (local_2c8.iCur == (int)local_250)) && (local_2c8.cur_ptr == local_250._4_4_))
    goto LAB_14c7c3c18;
    local_478[0] = local_2c8.cur_value;
    UE::Core::Private::Function::CheckCallable(local_298);
    pcVar41 = local_298;
    plVar40 = (longlong *)&local_288;
    if (plStack_270 != (longlong *)0x0) {
      plVar40 = plStack_270;
    }
    uVar33 = (**(code **)(*plVar40 + 8))();
    uVar31 = (*pcVar41)(uVar33,local_478);
    do {
      do {
        iVar32 = **(int **)((longlong)this + 0x30);
      } while (iVar32 == -1);
      LOCK();
      bVar48 = iVar32 == **(int **)((longlong)this + 0x30);
      if (bVar48) {
        **(int **)((longlong)this + 0x30) = iVar32 + 1;
      }
      UNLOCK();
    } while (!bVar48);
    plVar40 = *(longlong **)((longlong)this + 0x18);
    iVar32 = iVar37;
    if ((int)plVar40[1] != *(int *)((longlong)plVar40 + 0x34)) {
      plVar39 = plVar40 + 7;
      if ((longlong *)plVar40[8] != (longlong *)0x0) {
        plVar39 = (longlong *)plVar40[8];
      }
      iVar35 = *(int *)((longlong)plVar39 + (ulonglong)((int)plVar40[9] - 1U & uVar31) * 4);
      if (iVar35 != -1) {
        do {
          iVar32 = iVar35;
          if (*(uint *)(*plVar40 + (longlong)iVar35 * 0xc) == uVar31) break;
          iVar35 = *(int *)(*plVar40 + 4 + (longlong)iVar35 * 0xc);
          iVar32 = iVar37;
        } while (iVar35 != -1);
      }
    }
    LOCK();
    **(int **)((longlong)this + 0x30) = **(int **)((longlong)this + 0x30) + -1;
    UNLOCK();
    if (iVar32 == -1) {
      lVar47 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x18) + 0x10);
      lVar2 = *(longlong *)(lVar47 + (ulonglong)(uVar31 >> 9) * 8);
      pdVar1 = (double *)(lVar2 + (ulonglong)(uVar31 & 0x1ff) * 0x18);
      local_350 = *pdVar1;
      dStack_348 = pdVar1[1];
      local_340 = *(double *)(lVar2 + 0x10 + (ulonglong)(uVar31 & 0x1ff) * 0x18);
      lVar47 = *(longlong *)(lVar47 + (ulonglong)(uVar36 >> 9) * 8);
      pdVar1 = (double *)(lVar47 + (ulonglong)(uVar36 & 0x1ff) * 0x18);
      local_338 = *pdVar1;
      dStack_330 = pdVar1[1];
      local_328 = *(double *)(lVar47 + 0x10 + (ulonglong)(uVar36 & 0x1ff) * 0x18);
      dVar4 = local_350 - local_338;
      dVar5 = local_340 - local_328;
      dVar49 = dStack_348 - dStack_330;
      if (dVar49 * dVar49 + dVar4 * dVar4 + dVar5 * dVar5 < *(double *)((longlong)this + 0x28))
      break;
    }
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_2c8);
  } while( true );
  bVar30 = true;
LAB_14c7c3c18:
  if (local_238 != (code *)0x0) {
    plVar40 = (longlong *)&local_228;
    if (plStack_210 != (longlong *)0x0) {
      plVar40 = plStack_210;
    }
    (**(code **)(*plVar40 + 0x10))();
  }
  if (local_298 != (code *)0x0) {
    plVar40 = (longlong *)&local_288;
    if (plStack_270 != (longlong *)0x0) {
      plVar40 = plStack_270;
    }
    (**(code **)(*plVar40 + 0x10))();
  }
  if (local_2f8 != (code *)0x0) {
    plVar40 = &local_2e8;
    if (plStack_2d0 != (longlong *)0x0) {
      plVar40 = plStack_2d0;
    }
    (**(code **)(*plVar40 + 0x10))();
  }
  if (bVar30) {
    UE::Geometry::FMeshNormals::ComputeVertexNormal
              (&local_320,*(FDynamicMesh3 **)(*(longlong *)this + 0x18),uVar36,true,true);
    UE::Geometry::FDynamicMesh3::GetVertexFrame
              (*(FDynamicMesh3 **)(*(longlong *)this + 0x18),(TFrame3<double> *)&local_388._s_0,
               uVar36,false,&local_320);
    pFVar3 = *(FDynamicMesh3 **)(*(longlong *)this + 0x18);
    local_1a8[8] = ExponentialMapUpwindAvg;
    local_1a8[9] = false;
    local_1a8._16_8_ = 0;
    local_170 = (longlong *)0x0;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    local_158.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_158.NumBits = 0;
    local_158.MaxBits = 0x80;
    local_138 = 0xffffffff;
    local_134 = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_118.CurBlock = 0;
    local_118.CurBlockUsed = 0;
    local_118.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Blocks.ArrayNum = 0;
    local_118.Blocks.ArrayMax = 0;
    UE::Geometry::
    TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
    AddAllocatedBlock(&local_118);
    UE::Geometry::FIndexPriorityQueue::FIndexPriorityQueue(&local_100);
    TStack_b0._s_0.X = 0.0;
    local_c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    TStack_b0._s_0.Y = 0.0;
    TStack_b0._s_0.Z = 0.0;
    TStack_b0._s_0.W = dVar6;
    local_1a8._0_8_ = pFVar3;
    UE::Geometry::FIndexPriorityQueue::Initialize
              (&local_100,
               (pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed);
    local_1a8[8] = ExponentialMapUpwindAvg;
    dVar4 = *(double *)((longlong)this + 0x20);
    local_c8._s_0.X = local_388._s_0.X;
    local_c8._s_0.Y = local_388._s_0.Y;
    local_c8._s_0.Z = local_388._s_0.Z;
    TStack_b0._s_0.X = dStack_370;
    TStack_b0._s_0.Y = local_368;
    TStack_b0._s_0.Z = dStack_360;
    TStack_b0._s_0.W = local_358;
    local_90 = 0.0;
    dStack_88 = 0.0;
    pFVar34 = UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::GetNodeForPointSetID
                        ((TMeshLocalParam<UE::Geometry::FDynamicMesh3> *)local_1a8,uVar36,true);
    (pFVar34->UV).field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    pFVar34->GraphDistance = 0.0;
    pFVar34->bFrozen = true;
    UE::Geometry::FIndexPriorityQueue::Insert(&local_100,uVar36,0.0);
    UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::ProcessQueueUntilTermination
              ((TMeshLocalParam<UE::Geometry::FDynamicMesh3> *)local_1a8,dVar4);
    local_488.Data = (FScriptContainerElement *)0x0;
    local_480 = 0;
    uVar36 = local_118.CurBlock * 0x200 + local_118.CurBlockUsed;
    if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
    }
    local_480._0_4_ = 0;
    if (uVar36 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar36,&local_488,0,(int *)((longlong)&local_480 + 4));
    }
    uVar31 = local_118.CurBlock * 0x200 + local_118.CurBlockUsed;
    iVar37 = (int)local_480;
    for (uVar36 = 0; FVar43.Data = local_488.Data, uVar36 != uVar31; uVar36 = uVar36 + 1) {
      pFVar42 = (FScriptContainerElement *)
                (*(longlong *)
                  (local_118.Blocks.AllocatorInstance.Data + (ulonglong)(uVar36 >> 9) * 8) +
                (ulonglong)(uVar36 & 0x1ff) * 0x40);
      if (pFVar42[0x20] != (FScriptContainerElement)0x0) {
        iVar32 = iVar37;
        if ((local_488.Data <= pFVar42) &&
           (pFVar42 < local_488.Data + (longlong)local_480._4_4_ * 4)) {
          bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar30) {
            pcVar41 = (code *)swi(3);
            (*pcVar41)();
            return;
          }
          iVar32 = (int)local_480;
        }
        if (iVar32 == local_480._4_4_) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_488,(int *)((longlong)&local_480 + 4));
        }
        iVar37 = iVar32 + 1;
        local_480 = CONCAT44(local_480._4_4_,iVar37);
        *(undefined4 *)(local_488.Data + (longlong)iVar32 * 4) = *(undefined4 *)pFVar42;
      }
    }
    do {
      do {
      } while (**(int **)((longlong)this + 0x30) != 0);
      LOCK();
      bVar30 = **(int **)((longlong)this + 0x30) == 0;
      if (bVar30) {
        **(int **)((longlong)this + 0x30) = -1;
      }
      UNLOCK();
    } while (!bVar30);
    iVar37 = (int)local_480;
    lVar47 = (longlong)(int)local_480;
    this_00 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 0x18);
    if (((int)local_480 < 0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar30)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    uVar36 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
    uVar31 = iVar37 + uVar36;
    if (uVar36 < uVar31) {
      if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar31);
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,uVar31);
      if (uVar31 < 4) {
        iVar37 = 1;
      }
      else {
        uVar46 = (ulonglong)((uVar31 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar46 != 0) {
          for (; uVar46 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        local_460 = (undefined4)lVar2;
        iVar37 = 1 << ((byte)lVar2 & 0x1f);
      }
      if ((this_00->HashSize == 0) || (this_00->HashSize < iVar37)) {
        this_00->HashSize = iVar37;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
      }
    }
    pFVar42 = FVar43.Data + lVar47 * 4;
    for (; FVar43.Data != pFVar42; FVar43.Data = FVar43.Data + 4) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (this_00,&local_45c,(bool *)FVar43.Data);
    }
    **(undefined4 **)((longlong)this + 0x30) = 0;
    if (local_488.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data);
    }
    if (local_100.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.id_to_index.AllocatorInstance.Data);
    }
    UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
    ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_100.nodes);
    UE::Geometry::
    TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
    ~TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
              (&local_118);
    local_120 = 0;
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    uVar46 = local_160 >> 0x20;
    local_160 = local_160 & 0xffffffff00000000;
    if ((int)uVar46 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_168,0,(int *)((longlong)&local_160 + 4));
    }
    local_138 = 0xffffffff;
    local_134 = 0;
    local_158.NumBits = 0;
    if (0x80 < (uint)local_158.MaxBits) {
      local_158.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_158,0);
    }
    if (local_158.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
    }
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
    }
    if (local_1a8._16_8_ != 0) {
      plVar40 = (longlong *)(local_1a8 + 0x20);
      if (local_170 != (longlong *)0x0) {
        plVar40 = local_170;
      }
      (**(code **)(*plVar40 + 0x10))();
    }
  }
  uVar45 = local_468 + 1;
  uVar46 = (ulonglong)(uVar44 + 1);
  if (*(int *)((longlong)this + 0xc) <= (int)(uVar44 + 1)) {
    return;
  }
  goto LAB_14c7c36a0;
}

// SmoothWeightsAtVertex @ 14c833d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FSmoothDynamicMeshVertexSkinWeights::SmoothWeightsAtVertex
          (FSmoothDynamicMeshVertexSkinWeights *this,int param_1,float param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  float fVar16;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  FBoneWeightsSettings local_1a0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_190;
  longlong *local_188;
  int iStack_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  int local_168;
  uint uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_150;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  undefined1 local_118 [32];
  uint *local_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  void *local_d8;
  undefined4 local_d0;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_c8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_f8 = (uint *)0x0;
  iVar14 = 0;
  local_f0 = 0;
  local_e4 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_ec = 0x80;
  local_e8 = 0xffffffff;
  bVar7 = TSmoothBoneWeights<unsigned_short,float>::SmoothWeightsAtVertex
                    ((TSmoothBoneWeights<unsigned_short,float> *)this,param_1,param_2,
                     (TMap<unsigned_short,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,float,0>_>
                      *)local_118);
  uVar13 = local_f0;
  if (bVar7) {
    local_1a0.WeightThreshold = 1;
    local_1a0.DefaultBoneIndex = 0;
    local_1a0.MaxWeightCount = 0xc;
    local_1a0.bHasDefaultBoneIndex = false;
    local_1a0.bBlendZeroInfluence = true;
    local_1a0.NormalizeType = None;
    local_c8.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0xc;
    uStack_17c = 1;
    uStack_16c = 0;
    local_168 = iVar14;
    if (local_f0 != 0) {
      puVar15 = (uint *)(local_118 + 0x10);
      if (local_f8 != (uint *)0x0) {
        puVar15 = local_f8;
      }
      uStack_17c = *puVar15;
      local_168 = 0;
      iVar14 = 0;
      while (uStack_17c == 0) {
        lVar10 = (longlong)iVar14;
        local_168 = local_168 + 0x20;
        iVar14 = iVar14 + 1;
        uStack_17c = 1;
        uStack_16c = local_f0;
        if ((int)((local_f0 - 1) + ((int)(local_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14c833e51;
        uStack_17c = puVar15[lVar10 + 1];
      }
      uStack_17c = -uStack_17c & uStack_17c;
      uVar1 = (ulonglong)uStack_17c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_158 = (int)lVar10;
      uStack_16c = local_168 + -1 + local_158;
      if ((int)local_f0 < (int)uStack_16c) {
        uStack_16c = local_f0;
      }
    }
LAB_14c833e51:
    local_188 = (longlong *)local_118;
    local_178 = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
    uVar12 = local_f0 & 0xffffffe0;
    iStack_160 = local_118._8_4_ - local_e4;
    uStack_170 = 0xffffffff;
    TStack_140.CurrentBitIndex = uStack_16c;
    TStack_140.UnvisitedBitMask = 0xffffffff;
    TStack_140._padding_ = CONCAT44(uStack_17c,iVar14);
    iVar11 = (int)local_f0 >> 5;
    TStack_140._28_4_ = uStack_16c;
    TStack_140.BaseBitIndex = local_168;
    uStack_120 = CONCAT44(uStack_15c,iStack_160);
    bVar9 = (byte)local_f0;
    iStack_180 = iVar14;
    uStack_164 = uStack_16c;
    local_148 = local_188;
    TStack_140.Array = local_178;
    if (((int)local_f0 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    fVar5 = __real_477fff00;
    fVar4 = __real_3f000000;
    fVar3 = __real_3f800000;
    if (uVar13 != local_f0) {
      puVar15 = (uint *)(local_118 + 0x10);
      if (local_f8 != (uint *)0x0) {
        puVar15 = local_f8;
      }
      uVar13 = -1 << (bVar9 & 0x1f) & puVar15[iVar11];
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar11;
        uVar12 = uVar12 + 0x20;
        iVar11 = iVar11 + 1;
        uVar13 = local_f0;
        if ((int)((local_f0 - 1) + ((int)(local_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14c833f5c;
        uVar13 = puVar15[lVar10 + 1];
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar13 = (int)lVar10 + -1 + uVar12;
      if ((int)local_f0 < (int)uVar13) {
        uVar13 = local_f0;
      }
    }
LAB_14c833f5c:
    while( true ) {
      plVar6 = local_148;
      if ((int)local_148[1] - *(int *)((longlong)local_148 + 0x34) != (int)uStack_120) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_short,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      if (((TStack_140.CurrentBitIndex == uVar13) &&
          (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10))) &&
         (plVar6 == (longlong *)local_118)) break;
      lVar10 = *plVar6;
      fVar16 = *(float *)(lVar10 + 4 + (longlong)TStack_140.CurrentBitIndex * 0x10);
      if (fVar3 <= fVar16) {
        fVar16 = fVar3;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      local_150.Container = &local_c8;
      AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::
      AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                (&local_150,
                 (FBoneWeight)
                 ((int)(fVar16 * fVar5 + fVar4) << 0x10 |
                 (uint)*(ushort *)(lVar10 + (longlong)TStack_140.CurrentBitIndex * 0x10)),&local_1a0
                );
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    }
    local_1a0.MaxWeightCount = this->MaxNumInfluences;
    local_1a0.NormalizeType = Always;
    if (local_1a0.MaxWeightCount < 1) {
      local_1a0.MaxWeightCount = 1;
    }
    local_190.Container = &local_c8;
    AnimationCore::
    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
    ::NormalizeWeights(&local_190,Always);
    bVar7 = AnimationCore::
            TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
            ::CullWeights(&local_190,&local_1a0);
    if (bVar7) {
      AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::NormalizeWeights(&local_190,Always);
    }
    AnimationCore::FBoneWeights::operator=
              ((FBoneWeights *)
               ((ulonglong)(param_1 & 0x1ff) * 0x40 +
               *(longlong *)
                ((this->Attribute->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_1 >> 9) * 8)),(FBoneWeights *)&local_c8);
    if (local_c8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
    }
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_d0 = 0;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_118);
  return bVar7;
}

// SmoothWeightsAtVerticesWithinDistance @ 14c834150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FSmoothDynamicMeshVertexSkinWeights::SmoothWeightsAtVerticesWithinDistance
          (FSmoothDynamicMeshVertexSkinWeights *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,float param_2,double param_3,int param_4)

{
  atomic<unsigned_int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  FTaskGraphInterface *pFVar13;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_00;
  FTask *pFVar14;
  undefined8 uVar15;
  byte bVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar24;
  ulonglong uVar25;
  ForElementType<unsigned_int> FVar26;
  int iVar27;
  int iVar28;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  FScriptContainerElement *local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  undefined1 local_208 [8];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_200;
  FTaskHandle local_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  FSmoothDynamicMeshVertexSkinWeights *local_1e0;
  int local_1d8;
  uint uStack_1d4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d0;
  undefined4 local_1c8;
  uint uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1b8;
  undefined4 local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  longlong *local_170;
  int iStack_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  FSmoothDynamicMeshVertexSkinWeights *local_110;
  int iStack_108;
  int iStack_104;
  TArray<int,TSizedDefaultAllocator<32>_> *local_100;
  undefined1 *puStack_f8;
  double local_f0;
  double dStack_e8;
  undefined4 *local_e0;
  undefined4 local_bc;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_258;
  iVar28 = param_1->ArrayNum;
  pFVar22 = (param_1->AllocatorInstance).Data;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (ForElementType<unsigned_int>)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = -1;
  local_84 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_1e0 = this;
  local_1b8 = param_1;
  if ((iVar28 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar23 = iVar28 + (local_b8._8_4_ - local_84);
  if ((uint)(local_b8._8_4_ - local_84) < uVar23) {
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar23);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_b8,uVar23);
    if (uVar23 < 4) {
      uVar23 = 1;
    }
    else {
      uVar19 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_1b0 = (undefined4)lVar20;
      uVar23 = 1 << ((byte)lVar20 & 0x1f);
    }
    if ((local_70 == 0) || ((int)local_70 < (int)uVar23)) {
      local_70 = uVar23;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
      }
      if (uVar23 != 0) {
        uVar18 = uVar23;
        if (uVar23 < 2) {
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            uVar18 = 0;
            goto LAB_14c8342c8;
          }
        }
        else {
LAB_14c8342c8:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar18,4)
          ;
        }
        if (0 < (int)uVar23) {
          uVar25 = (ulonglong)uVar23;
          uVar19 = 0;
          do {
            FVar17.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar17.Data = local_78.Data;
            }
            uVar11 = uVar19 & (longlong)(int)uVar23 - 1U;
            uVar19 = uVar19 + 1;
            *(undefined4 *)(FVar17.Data + uVar11 * 4) = 0xffffffff;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
      }
      if (local_70 != 0) {
        pTStack_1d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
        uStack_1d4 = 1;
        local_1d8 = 0;
        uStack_1c4 = 0;
        iStack_1c0 = 0;
        if (local_90 != 0) {
          FVar26 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
          if (local_98 != (ForElementType<unsigned_int>)0x0) {
            FVar26 = local_98;
          }
          uVar23 = *(uint *)FVar26;
          local_1d8 = 0;
          while (uVar23 == 0) {
            iStack_1c0 = iStack_1c0 + 0x20;
            lVar20 = (longlong)local_1d8;
            local_1d8 = local_1d8 + 1;
            if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1d8)
            goto LAB_14c8343dd;
            uVar23 = ((uint *)((longlong)FVar26 + 4))[lVar20];
          }
          uStack_1d4 = -uVar23 & uVar23;
          uVar19 = (ulonglong)uStack_1d4 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_1ac = (int)lVar20;
          uStack_1c4 = local_1ac + -1 + iStack_1c0;
          if ((int)local_90 < (int)uStack_1c4) {
LAB_14c8343dd:
            uStack_1c4 = local_90;
          }
        }
        local_1c8 = 0xffffffff;
        local_198 = (longlong *)local_b8;
        local_190._padding_ = CONCAT44(uStack_1d4,local_1d8);
        local_190.CurrentBitIndex = uStack_1c4;
        local_190.UnvisitedBitMask = 0xffffffff;
        local_190._28_4_ = uStack_1bc;
        local_190.BaseBitIndex = iStack_1c0;
        uVar23 = uStack_1c4;
        local_190.Array = pTStack_1d0;
        if ((int)uStack_1c4 < (int)local_90) {
          do {
            lVar20 = *local_198;
            lVar12 = (longlong)(int)uVar23;
            uVar18 = local_70 - 1 & *(uint *)(lVar20 + lVar12 * 0xc);
            *(uint *)(lVar20 + 8 + lVar12 * 0xc) = uVar18;
            FVar17.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar17.Data = local_78.Data;
            }
            uVar19 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar18;
            *(undefined4 *)(lVar20 + 4 + lVar12 * 0xc) = *(undefined4 *)(FVar17.Data + uVar19 * 4);
            *(uint *)(FVar17.Data + uVar19 * 4) = uVar23;
            local_190.UnvisitedBitMask = local_190.UnvisitedBitMask & ~local_190._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
            uVar23 = local_190.CurrentBitIndex;
          } while (local_190.CurrentBitIndex < (local_190.Array)->NumBits);
        }
      }
    }
  }
  pFVar2 = pFVar22 + (longlong)iVar28 * 4;
  for (; pFVar22 != pFVar2; pFVar22 = pFVar22 + 4) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_b8,&local_1a8,
               (bool *)pFVar22);
  }
  if (0.0 < param_3) {
    cVar8 = (**(code **)(this->_padding_ + 0x18))(this);
    pTVar24 = local_1b8;
    if (cVar8 != '\0') {
LAB_14c834a8d:
      bVar6 = false;
      goto LAB_14c834a93;
    }
    iVar28 = local_1b8->ArrayNum;
    pFVar13 = FTaskGraphInterface::Get();
    iVar9 = (**(code **)((longlong)*pFVar13 + 0x20))(pFVar13);
    local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.ArrayNum = 0;
    local_200.ArrayMax = 0;
    local_1e8 = 0;
    iVar21 = iVar28;
    if (iVar9 < iVar28) {
      iVar21 = iVar9;
    }
    iVar9 = 1;
    if (1 < iVar21) {
      iVar9 = iVar21;
    }
    iVar9 = (iVar28 + -1 + iVar9) / iVar9;
    iVar21 = 0x14;
    if (0x14 < iVar9) {
      iVar21 = iVar9;
    }
    iVar27 = 0;
    uVar19 = (longlong)(iVar28 + -1 + iVar21) / (longlong)iVar21;
    uVar23 = (uint)uVar19;
    uVar19 = uVar19 & 0xffffffff;
    iVar9 = iVar21;
    local_1e4 = uVar23;
    if (0 < (int)uVar23) {
      do {
        iStack_104 = iVar9;
        if ((iVar27 == uVar23 - 1) && (iVar28 < iVar9)) {
          iStack_104 = iVar28;
        }
        local_110 = local_1e0;
        iStack_108 = iVar9 - iVar21;
        puStack_f8 = local_b8;
        local_e0 = &local_1e8;
        local_100 = pTVar24;
        local_f0 = param_3;
        dStack_e8 = param_3 * param_3;
        this_00.Reference = FMemory::Malloc(0x140,0x40);
        if (this_00.Reference == (FTaskBase *)0x0) {
          this_00.Reference = (FTaskBase *)0x0;
        }
        else {
          Tasks::Private::FTaskBase::FTaskBase(this_00.Reference,2,true);
          (this_00.Reference)->_padding_ =
               (longlong)
               &Tasks::Private::
                TExecutableTaskBase<`UE::Geometry::FSmoothDynamicMeshVertexSkinWeights::SmoothWeightsAtVerticesWithinDistance'::`10'::<lambda_1>,void,void>
                ::_vftable_;
          if ((*(ulonglong *)&((this_00.Reference)->LowLevelTask).field_0x38 & 0x20) == 0) {
            local_238 = (FTaskHandle *)
                        (CONCAT44(local_238._4_4_,
                                  (int)*(undefined8 *)
                                        &((this_00.Reference)->LowLevelTask).field_0x38) &
                        0xffffffff0000003f);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsCompleted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                               ,0x1dd,L"State: %d");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
          }
          (**(code **)(*(longlong *)&((this_00.Reference)->LowLevelTask).field_0x28 + 0x18))
                    (&((this_00.Reference)->LowLevelTask).field_0x28,
                     &(this_00.Reference)->LowLevelTask);
          *(FTaskBase **)&(this_00.Reference)->LowLevelTask = this_00.Reference;
          *(undefined ***)&((this_00.Reference)->LowLevelTask).field_0x28 =
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
          ;
          *(FTaskBase **)&((this_00.Reference)->LowLevelTask).field_0x8 = this_00.Reference;
          pFVar14 = LowLevelTasks::FTask::GetActiveTask();
          uVar15 = 0;
          if (pFVar14 != (FTask *)0x0) {
            uVar15 = *(undefined8 *)&pFVar14->field_0x30;
          }
          *(undefined8 *)&((this_00.Reference)->LowLevelTask).field_0x30 = uVar15;
          *(undefined8 *)&((this_00.Reference)->LowLevelTask).field_0x38 = 0xc8000054a3211800;
          (this_00.Reference)->ExtendedPriority = None;
          FInheritedContextBase::CaptureInheritedContext
                    ((FInheritedContextBase *)&(this_00.Reference)->_padding_);
          uVar19 = (ulonglong)local_1e4;
          this_00.Reference[1]._padding_ = (longlong)local_110;
          this_00.Reference[1]._padding_ = CONCAT44(iStack_104,iStack_108);
          this_00.Reference[1]._padding_ = (longlong)local_100;
          this_00.Reference[1]._padding_ = (longlong)puStack_f8;
          this_00.Reference[1]._padding_ = (longlong)local_f0;
          this_00.Reference[1]._padding_ = (longlong)dStack_e8;
          *(undefined4 **)&this_00.Reference[1].RefCount = local_e0;
          (this_00.Reference)->_padding_ =
               (longlong)
               &Tasks::Private::
                TExecutableTask<`UE::Geometry::FSmoothDynamicMeshVertexSkinWeights::SmoothWeightsAtVerticesWithinDistance'::`10'::<lambda_1>_>
                ::_vftable_;
        }
        Tasks::Private::FTaskBase::TryLaunch(this_00.Reference,0x140);
        local_1f0.Pimpl.Reference =
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_00.Reference;
        if (local_200.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1f0) {
          if ((FScriptContainerElement *)&local_1f0 <
              local_200.AllocatorInstance.Data + (longlong)local_200.ArrayMax * 8) {
            local_220 = (longlong)local_200.ArrayNum;
            local_218 = 8;
            local_238 = &local_1f0;
            local_230 = local_200.AllocatorInstance.Data;
            local_228 = (longlong)local_200.ArrayMax;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
          }
        }
        iVar10 = local_200.ArrayNum;
        if (local_200.ArrayNum == local_200.ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_200.AllocatorInstance,&local_200.ArrayMax);
        }
        local_200.ArrayNum = iVar10 + 1;
        *(undefined8 *)(local_200.AllocatorInstance.Data + (longlong)iVar10 * 8) = 0;
        *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
         (local_200.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_1f0.Pimpl.Reference;
        if (local_1f0.Pimpl.Reference != (FTaskBase *)0x0) {
          LOCK();
          *(atomic<unsigned_int> *)((longlong)local_1f0.Pimpl.Reference + 0x30) =
               (atomic<unsigned_int>)
               ((int)*(atomic<unsigned_int> *)((longlong)local_1f0.Pimpl.Reference + 0x30) + 1);
          UNLOCK();
          if (local_1f0.Pimpl.Reference != (FTaskBase *)0x0) {
            LOCK();
            paVar1 = (atomic<unsigned_int> *)((longlong)local_1f0.Pimpl.Reference + 0x30);
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<unsigned_int>)0x1) {
              (*(code *)**(undefined8 **)local_1f0.Pimpl.Reference)(local_1f0.Pimpl.Reference,1);
            }
          }
        }
        uVar23 = (uint)uVar19;
        iVar27 = iVar27 + 1;
        pTVar24 = local_1b8;
        iVar9 = iVar9 + iVar21;
      } while (iVar27 < (int)uVar23);
    }
    Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (&local_200,(FTimespan)0x7fffffffffffffff);
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)local_200.AllocatorInstance.Data,local_200.ArrayNum);
    this = local_1e0;
    if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.AllocatorInstance.Data);
      this = local_1e0;
    }
  }
  iVar28 = 0;
  if (0 < param_4) {
LAB_14c834860:
    uVar23 = local_90;
    iStack_168 = 0;
    local_150 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    if (local_90 != 0) {
      FVar26 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar26 = local_98;
      }
      uVar18 = *(uint *)FVar26;
      while (uVar18 == 0) {
        lVar20 = (longlong)iStack_168;
        local_150 = local_150 + 0x20;
        iStack_168 = iStack_168 + 1;
        uStack_154 = local_90;
        if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_168)
        goto LAB_14c8348e0;
        uVar18 = ((uint *)((longlong)FVar26 + 4))[lVar20];
      }
      uStack_164 = -uVar18 & uVar18;
      uVar19 = (ulonglong)uStack_164 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_1a4 = (int)lVar20;
      uStack_154 = local_1a4 + -1 + local_150;
      if ((int)local_90 < (int)uStack_154) {
        uStack_154 = local_90;
      }
    }
LAB_14c8348e0:
    local_170 = (longlong *)local_b8;
    uStack_14c = local_bc;
    local_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    uVar18 = local_90 & 0xffffffe0;
    iStack_148 = local_b8._8_4_ - local_84;
    TStack_138._padding_ = CONCAT44(uStack_164,iStack_168);
    uStack_158 = 0xffffffff;
    TStack_138.CurrentBitIndex = uStack_154;
    TStack_138.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)local_90 >> 5;
    TStack_138._28_4_ = local_bc;
    TStack_138.BaseBitIndex = local_150;
    uStack_118 = CONCAT44(uStack_144,iStack_148);
    bVar16 = (byte)local_90;
    local_140 = local_170;
    TStack_138.Array = local_160;
    if (((int)local_90 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if (uVar23 != local_90) {
      FVar26 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar26 = local_98;
      }
      uVar23 = -1 << (bVar16 & 0x1f) & *(uint *)((longlong)FVar26 + (longlong)iVar21 * 4);
      while (uVar23 == 0) {
        lVar20 = (longlong)iVar21;
        uVar18 = uVar18 + 0x20;
        iVar21 = iVar21 + 1;
        uVar23 = local_90;
        if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_14c834a00;
        uVar23 = ((uint *)((longlong)FVar26 + 4))[lVar20];
      }
      uVar19 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_1a0 = (int)lVar20;
      uVar23 = (uVar18 - 1) + local_1a0;
      if ((int)local_90 < (int)uVar23) {
        uVar23 = local_90;
      }
    }
LAB_14c834a00:
    do {
      plVar5 = local_140;
      if ((int)local_140[1] - *(int *)((longlong)local_140 + 0x34) != (int)uStack_118) {
        local_208[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_208);
      }
      if (((TStack_138.CurrentBitIndex == uVar23) &&
          (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
         (plVar5 == (longlong *)local_b8)) goto LAB_14c834a79;
      bVar6 = SmoothWeightsAtVertex
                        (this,*(int *)(*plVar5 + (longlong)TStack_138.CurrentBitIndex * 0xc),param_2
                        );
      if (!bVar6) goto LAB_14c834a8d;
      TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
    } while( true );
  }
LAB_14c834a91:
  bVar6 = true;
LAB_14c834a93:
  local_70 = 0;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  return bVar6;
LAB_14c834a79:
  iVar28 = iVar28 + 1;
  if (param_4 <= iVar28) goto LAB_14c834a91;
  goto LAB_14c834860;
}

// Validate @ 14c851260

EOperationValidationResult __thiscall
UE::Geometry::FSmoothDynamicMeshVertexSkinWeights::Validate
          (FSmoothDynamicMeshVertexSkinWeights *this)

{
  if (((this->Attribute != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0)
      && (0 < this->MaxNumInfluences)) && (this->_padding_ != 0)) {
    return (EOperationValidationResult)(this->_padding_ == 0);
  }
  return Failed_UnknownReason;
}

