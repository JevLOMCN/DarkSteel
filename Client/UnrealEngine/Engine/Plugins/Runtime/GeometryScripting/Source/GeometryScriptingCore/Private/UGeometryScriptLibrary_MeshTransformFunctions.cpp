// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 34

// StaticClass @ 14ce201b0

UClass * __cdecl UGeometryScriptLibrary_MeshTransformFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshTransformFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshTransformFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshTransformFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshTransformFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshTransformFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshTransformFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshTransformFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshTransformFunctions @ 14ce26d60

UGeometryScriptLibrary_MeshTransformFunctions * __thiscall
UGeometryScriptLibrary_MeshTransformFunctions::UGeometryScriptLibrary_MeshTransformFunctions
          (UGeometryScriptLibrary_MeshTransformFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshTransformFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshTransformFunctions @ 14ce26d90

UGeometryScriptLibrary_MeshTransformFunctions * __thiscall
UGeometryScriptLibrary_MeshTransformFunctions::UGeometryScriptLibrary_MeshTransformFunctions
          (UGeometryScriptLibrary_MeshTransformFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshTransformFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshTransformFunctions @ 14ce274b0

void __thiscall
UGeometryScriptLibrary_MeshTransformFunctions::~UGeometryScriptLibrary_MeshTransformFunctions
          (UGeometryScriptLibrary_MeshTransformFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshTransformFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce3c120

void __thiscall
`UGeometryScriptLibrary_MeshTransformFunctions::InverseTransformMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  TQuaternion<double>_u_0 local_60;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  pdVar1 = *(double **)this;
  local_60._s_0.X = *pdVar1;
  local_60._s_0.Y = pdVar1[1];
  local_60._s_0.Z = pdVar1[2];
  local_60._s_0.W = pdVar1[3];
  local_30 = pdVar1[6];
  local_40 = pdVar1[4];
  dStack_38 = pdVar1[5];
  local_18 = pdVar1[10];
  local_28 = pdVar1[8];
  dStack_20 = pdVar1[9];
  MeshTransforms::ApplyTransformInverse
            (param_1,(TTransformSRT3<double> *)&local_60._s_0,
             *(bool *)*(undefined8 *)((longlong)this + 8),All);
  return;
}

// operator() @ 14ce3c1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshTransformFunctions::InverseTransformMeshSelection'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  atomic<unsigned_char> aVar4;
  uint uVar5;
  double *pdVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [12];
  int iVar17;
  short sVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  bool bVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 local_108 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_100 [2];
  double local_e0;
  
  local_100[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100[0].ArrayNum = 0;
  local_100[0].ArrayMax = 0;
  FGeometryScriptMeshSelection::ConvertToMeshIndexArray
            (*(FGeometryScriptMeshSelection **)this,param_1,local_100,Vertex);
  iVar17 = local_100[0].ArrayNum;
  fVar47 = GlobalVectorConstants::SmallNumber.m128_f32[0];
  fVar48 = GlobalVectorConstants::SmallNumber.m128_f32[1];
  fVar49 = GlobalVectorConstants::SmallNumber.m128_f32[2];
  uVar50 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]._0_4_;
  uVar51 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]._4_4_;
  uVar52 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]._0_4_;
  uVar53 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]._4_4_;
  uVar54 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]._0_4_;
  uVar55 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]._4_4_;
  uVar56 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]._0_4_;
  uVar57 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]._4_4_;
  pFVar2 = local_100[0].AllocatorInstance.Data + (longlong)local_100[0].ArrayNum * 4;
  FVar20.Data = local_100[0].AllocatorInstance.Data;
  while( true ) {
    if (local_100[0].ArrayNum != iVar17) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_108);
      fVar47 = GlobalVectorConstants::SmallNumber.m128_f32[0];
      fVar48 = GlobalVectorConstants::SmallNumber.m128_f32[1];
      fVar49 = GlobalVectorConstants::SmallNumber.m128_f32[2];
      uVar50 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]._0_4_;
      uVar51 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]._4_4_;
      uVar52 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]._0_4_;
      uVar53 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]._4_4_;
      uVar54 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]._0_4_;
      uVar55 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]._4_4_;
      uVar56 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]._0_4_;
      uVar57 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]._4_4_;
    }
    if (FVar20.Data == pFVar2) break;
    uVar5 = *(uint *)FVar20.Data;
    if ((-1 < (int)uVar5) &&
       ((int)uVar5 <
        (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
      uVar19 = (ulonglong)(uVar5 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar5 >> 9) * 8) + uVar19 * 2) - 1U) < 0xfffe) {
        pdVar6 = *(double **)((longlong)this + 8);
        lVar7 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
        dVar10 = pdVar6[2] * (double)CONCAT44(uVar51,uVar50);
        dVar11 = pdVar6[3] * (double)CONCAT44(uVar53,uVar52);
        pdVar3 = (double *)(lVar7 + uVar19 * 0x18);
        dVar25 = *(double *)(lVar7 + 0x10 + uVar19 * 0x18) - pdVar6[6];
        dVar14 = *pdVar3 - pdVar6[4];
        dVar15 = pdVar3[1] - pdVar6[5];
        uVar42 = SUB84(dVar15,0);
        uVar43 = (undefined4)((ulonglong)dVar15 >> 0x20);
        dVar8 = *pdVar6 * (double)CONCAT44(uVar55,uVar54);
        dVar39 = pdVar6[1] * (double)CONCAT44(uVar57,uVar56);
        auVar44._8_4_ = uVar42;
        auVar44._0_8_ = dVar14;
        auVar44._12_4_ = uVar43;
        auVar26._8_4_ = uVar42;
        auVar26._0_8_ = dVar14;
        auVar26._12_4_ = uVar43;
        auVar35._8_4_ = SUB84(dVar39,0);
        auVar35._0_8_ = dVar8;
        auVar35._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        auVar33._8_4_ = SUB84(dVar11,0);
        auVar33._0_8_ = dVar10;
        auVar33._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar36 = blendpd(auVar35,auVar33,2);
        auVar32._8_4_ = uVar42;
        auVar32._0_8_ = dVar14;
        auVar32._12_4_ = uVar43;
        auVar45._0_8_ = auVar44._8_8_ * dVar8 - dVar14 * dVar39;
        auVar45._8_8_ = dVar25 * dVar39 - auVar26._8_8_ * dVar10;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = dVar25;
        auVar33 = blendpd(auVar32,auVar29,2);
        auVar34._0_8_ = auVar33._0_8_ * dVar10 - dVar25 * auVar36._0_8_;
        auVar34._8_8_ = auVar33._8_8_ * dVar11 - auVar36._8_8_ * 0.0;
        auVar33 = blendpd(auVar45,auVar34,2);
        dVar12 = auVar45._8_8_ + auVar45._8_8_;
        dVar13 = auVar34._0_8_ + auVar34._0_8_;
        uVar42 = SUB84(dVar13,0);
        uVar43 = (undefined4)((ulonglong)dVar13 >> 0x20);
        auVar46._0_8_ = auVar33._0_8_ + auVar33._0_8_;
        auVar46._8_8_ = auVar33._8_8_ + auVar33._8_8_;
        auVar40._8_4_ = uVar42;
        auVar40._0_8_ = dVar12;
        auVar40._12_4_ = uVar43;
        auVar27._8_4_ = uVar42;
        auVar27._0_8_ = dVar12;
        auVar27._12_4_ = uVar43;
        auVar37._8_4_ = uVar42;
        auVar37._0_8_ = dVar12;
        auVar37._12_4_ = uVar43;
        auVar33 = blendpd(auVar37,auVar46,2);
        auVar41._0_8_ = auVar40._8_8_ * dVar8 - dVar12 * dVar39;
        auVar41._8_8_ = auVar46._0_8_ * dVar39 - auVar27._8_8_ * dVar10;
        auVar28._8_4_ = SUB84(auVar46._8_8_,0);
        auVar28._0_8_ = auVar46._0_8_;
        auVar28._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
        auVar38._0_8_ = auVar33._0_8_ * dVar10 - auVar46._0_8_ * auVar36._0_8_;
        auVar38._8_8_ = auVar33._8_8_ * dVar11 - auVar28._8_8_ * auVar36._8_8_;
        auVar33 = *(undefined1 (*) [16])(pdVar6 + 10);
        lVar22 = -(ulonglong)
                  ((double)CONCAT44(*(uint *)((longlong)pdVar6 + 0x44) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    *(uint *)(pdVar6 + 8) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= (double)fVar47)
        ;
        lVar24 = -(ulonglong)
                  ((double)CONCAT44(*(uint *)((longlong)pdVar6 + 0x4c) & _UNK_15061cc8c,
                                    *(uint *)(pdVar6 + 9) & _UNK_15061cc88) <= (double)fVar48);
        auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                        *(undefined1 (*) [16])(pdVar6 + 8));
        lVar23 = -(ulonglong)
                  ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar33._4_4_,
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar33._0_4_) <=
                  (double)fVar49);
        auVar30._8_4_ = SUB84(auVar41._8_8_,0);
        auVar30._0_8_ = auVar41._0_8_;
        auVar30._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
        auVar36._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar36._0_8_ = auVar33._0_8_;
        auVar36._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
        dVar8 = (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar29._4_4_,
                                 ~(uint)lVar22 & auVar29._0_4_) *
                (dVar12 * dVar11 + dVar14 + auVar30._8_8_);
        dVar39 = (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar29._12_4_,
                                  ~(uint)lVar24 & auVar29._8_4_) *
                 (dVar13 * dVar11 + dVar15 + auVar38._0_8_);
        uVar42 = SUB84(dVar39,0);
        uVar43 = (undefined4)((ulonglong)dVar39 >> 0x20);
        auVar36 = blendpd(auVar41,auVar38,2);
        dVar39 = (auVar36._0_8_ + auVar46._0_8_ * dVar11 + dVar25) *
                 (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar33._4_4_,
                                  ~(uint)lVar23 & auVar33._0_4_);
        local_e0 = dVar39;
        sVar18 = _dclass();
        if (((sVar18 < 1) &&
            (auVar16._4_8_ = extraout_XMM0_Qb, auVar16._0_4_ = (int)((ulonglong)dVar8 >> 0x20),
            auVar31._0_8_ = auVar16._0_8_ << 0x20, auVar31._8_4_ = uVar42, auVar31._12_4_ = uVar43,
            sVar18 = _dclass(auVar31._8_8_), sVar18 < 1)) &&
           (sVar18 = _dclass(local_e0), sVar18 < 1)) {
          auVar9._8_4_ = uVar42;
          auVar9._0_8_ = dVar8;
          auVar9._12_4_ = uVar43;
          *(undefined1 (*) [16])(lVar7 + uVar19 * 0x18) = auVar9;
          *(double *)(lVar7 + 0x10 + uVar19 * 0x18) = dVar39;
          if ((param_1->ChangeStampShape).bIsEnabled != false) {
            this_00 = &(param_1->ChangeStampShape).Mutex;
            LOCK();
            bVar21 = this_00->State == (atomic<unsigned_char>)0x0;
            if (bVar21) {
              this_00->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar21) {
              UE::FMutex::LockSlow(this_00);
            }
            puVar1 = &(param_1->ChangeStampShape).Value;
            *puVar1 = *puVar1 + 1;
            LOCK();
            aVar4 = this_00->State;
            this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
            UNLOCK();
            if (((byte)aVar4 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(this_00);
            }
          }
          uVar54 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]._0_4_;
          uVar55 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]._4_4_;
          uVar56 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]._0_4_;
          uVar57 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]._4_4_;
          uVar50 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]._0_4_;
          uVar51 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]._4_4_;
          uVar52 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]._0_4_;
          uVar53 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]._4_4_;
          fVar47 = GlobalVectorConstants::SmallNumber.m128_f32[0];
          fVar48 = GlobalVectorConstants::SmallNumber.m128_f32[1];
          fVar49 = GlobalVectorConstants::SmallNumber.m128_f32[2];
        }
      }
    }
    FVar20.Data = FVar20.Data + 4;
  }
  if (local_100[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100[0].AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce3f0c0

void __thiscall
`UGeometryScriptLibrary_MeshTransformFunctions::RotateMeshSelection'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  atomic<unsigned_char> aVar4;
  uint uVar5;
  longlong lVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  bool bVar12;
  short sVar13;
  TVector<double> *pTVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_b8;
  TVector<double>_u_0 local_a8 [2];
  TVector<double> local_78 [3];
  
  bVar12 = FGeometryScriptMeshSelection::IsEmpty(*(FGeometryScriptMeshSelection **)this);
  if (!bVar12) {
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    FGeometryScriptMeshSelection::ConvertToMeshIndexArray
              (*(FGeometryScriptMeshSelection **)this,param_1,&local_b8,Vertex);
    iVar11 = local_b8.ArrayNum;
    pFVar2 = local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 4;
    FVar17.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      if (local_b8.ArrayNum != iVar11) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar17.Data == pFVar2) break;
      uVar5 = *(uint *)FVar17.Data;
      if ((-1 < (int)uVar5) &&
         ((int)uVar5 <
          (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
        uVar15 = (ulonglong)(uVar5 & 0x1ff);
        uVar16 = (ulonglong)(uVar5 >> 9);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + uVar16 * 8) + uVar15 * 2) - 1U) < 0xfffe) {
          lVar6 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + uVar16 * 8);
          pdVar7 = *(double **)((longlong)this + 0x10);
          pdVar3 = (double *)(lVar6 + uVar15 * 0x18);
          local_a8[0]._16_8_ = *(double *)(lVar6 + 0x10 + uVar15 * 0x18) - pdVar7[2];
          local_a8[0]._0_8_ = *pdVar3 - *pdVar7;
          local_a8[0]._8_8_ = pdVar3[1] - pdVar7[1];
          pTVar14 = UE::Math::TRotator<double>::RotateVector
                              (*(TRotator<double> **)((longlong)this + 8),local_78,
                               (TVector<double> *)&local_a8[0]._s_0);
          pdVar3 = *(double **)((longlong)this + 0x10);
          dVar10 = *pdVar3 + (pTVar14->field0_0x0)._s_0.X;
          dVar8 = pdVar3[1] + (pTVar14->field0_0x0)._s_0.Y;
          dVar9 = pdVar3[2] + (pTVar14->field0_0x0)._s_0.Z;
          sVar13 = _dclass(dVar10);
          if (((sVar13 < 1) && (sVar13 = _dclass(dVar8), sVar13 < 1)) &&
             (sVar13 = _dclass(dVar9), sVar13 < 1)) {
            lVar6 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + uVar16 * 8);
            *(double *)(lVar6 + uVar15 * 0x18) = dVar10;
            *(double *)(lVar6 + 8 + uVar15 * 0x18) = dVar8;
            *(double *)(lVar6 + 0x10 + uVar15 * 0x18) = dVar9;
            if ((param_1->ChangeStampShape).bIsEnabled != false) {
              this_00 = &(param_1->ChangeStampShape).Mutex;
              LOCK();
              bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
              if (bVar12) {
                this_00->State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar12) {
                UE::FMutex::LockSlow(this_00);
              }
              puVar1 = &(param_1->ChangeStampShape).Value;
              *puVar1 = *puVar1 + 1;
              LOCK();
              aVar4 = this_00->State;
              this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
              UNLOCK();
              if (((byte)aVar4 & 2) != 0) {
                UE::FMutex::WakeWaitingThread(this_00);
              }
            }
          }
        }
      }
      FVar17.Data = FVar17.Data + 4;
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14ce3f340

void __thiscall
`UGeometryScriptLibrary_MeshTransformFunctions::ScaleMeshSelection'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  atomic<unsigned_char> aVar4;
  uint uVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  bool bVar13;
  short sVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_88 [6];
  
  bVar13 = FGeometryScriptMeshSelection::IsEmpty(*(FGeometryScriptMeshSelection **)this);
  if (!bVar13) {
    local_88[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88[0].ArrayNum = 0;
    local_88[0].ArrayMax = 0;
    FGeometryScriptMeshSelection::ConvertToMeshIndexArray
              (*(FGeometryScriptMeshSelection **)this,param_1,local_88,Vertex);
    iVar12 = local_88[0].ArrayNum;
    pFVar2 = local_88[0].AllocatorInstance.Data + (longlong)local_88[0].ArrayNum * 4;
    FVar16.Data = local_88[0].AllocatorInstance.Data;
    while( true ) {
      if (local_88[0].ArrayNum != iVar12) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar16.Data == pFVar2) break;
      uVar5 = *(uint *)FVar16.Data;
      if ((-1 < (int)uVar5) &&
         ((int)uVar5 <
          (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
        uVar15 = (ulonglong)(uVar5 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + (ulonglong)(uVar5 >> 9) * 8) + uVar15 * 2) - 1U) < 0xfffe) {
          lVar6 = *(longlong *)
                   ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8)
          ;
          pdVar7 = *(double **)((longlong)this + 8);
          pdVar3 = (double *)(lVar6 + uVar15 * 0x18);
          pdVar8 = *(double **)((longlong)this + 0x10);
          dVar10 = (*(double *)(lVar6 + 0x10 + uVar15 * 0x18) - pdVar7[2]) * pdVar8[2] + pdVar7[2];
          dVar11 = (*pdVar3 - *pdVar7) * *pdVar8 + *pdVar7;
          dVar9 = (pdVar3[1] - pdVar7[1]) * pdVar8[1] + pdVar7[1];
          sVar14 = _dclass(dVar11);
          if (((sVar14 < 1) && (sVar14 = _dclass(dVar9), sVar14 < 1)) &&
             (sVar14 = _dclass(dVar10), sVar14 < 1)) {
            *(double *)(lVar6 + uVar15 * 0x18) = dVar11;
            *(double *)(lVar6 + 8 + uVar15 * 0x18) = dVar9;
            *(double *)(lVar6 + 0x10 + uVar15 * 0x18) = dVar10;
            if ((param_1->ChangeStampShape).bIsEnabled != false) {
              this_00 = &(param_1->ChangeStampShape).Mutex;
              LOCK();
              bVar13 = this_00->State == (atomic<unsigned_char>)0x0;
              if (bVar13) {
                this_00->State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar13) {
                UE::FMutex::LockSlow(this_00);
              }
              puVar1 = &(param_1->ChangeStampShape).Value;
              *puVar1 = *puVar1 + 1;
              LOCK();
              aVar4 = this_00->State;
              this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
              UNLOCK();
              if (((byte)aVar4 & 2) != 0) {
                UE::FMutex::WakeWaitingThread(this_00);
              }
            }
          }
        }
      }
      FVar16.Data = FVar16.Data + 4;
    }
    if (local_88[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88[0].AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14ce437b0

void __thiscall
`UGeometryScriptLibrary_MeshTransformFunctions::TransformMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  TQuaternion<double>_u_0 local_60;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  pdVar1 = *(double **)this;
  local_60._s_0.X = *pdVar1;
  local_60._s_0.Y = pdVar1[1];
  local_60._s_0.Z = pdVar1[2];
  local_60._s_0.W = pdVar1[3];
  local_30 = pdVar1[6];
  local_40 = pdVar1[4];
  dStack_38 = pdVar1[5];
  local_18 = pdVar1[10];
  local_28 = pdVar1[8];
  dStack_20 = pdVar1[9];
  MeshTransforms::ApplyTransform
            (param_1,(TTransformSRT3<double> *)&local_60._s_0,
             *(bool *)*(undefined8 *)((longlong)this + 8),All);
  return;
}

// operator() @ 14ce43850

void __thiscall
`UGeometryScriptLibrary_MeshTransformFunctions::TransformMeshSelection'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  atomic<unsigned_char> aVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [12];
  double dVar16;
  int iVar17;
  short sVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_b8 [2];
  double local_98;
  
  local_b8[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8[0].ArrayNum = 0;
  local_b8[0].ArrayMax = 0;
  FGeometryScriptMeshSelection::ConvertToMeshIndexArray
            (*(FGeometryScriptMeshSelection **)this,param_1,local_b8,Vertex);
  iVar17 = local_b8[0].ArrayNum;
  pFVar2 = local_b8[0].AllocatorInstance.Data + (longlong)local_b8[0].ArrayNum * 4;
  FVar20.Data = local_b8[0].AllocatorInstance.Data;
  while( true ) {
    if (local_b8[0].ArrayNum != iVar17) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar20.Data == pFVar2) break;
    uVar5 = *(uint *)FVar20.Data;
    if ((-1 < (int)uVar5) &&
       ((int)uVar5 <
        (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
      uVar19 = (ulonglong)(uVar5 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar5 >> 9) * 8) + uVar19 * 2) - 1U) < 0xfffe) {
        pauVar6 = *(undefined1 (**) [16])((longlong)this + 8);
        auVar30 = pauVar6[1];
        auVar22 = *pauVar6;
        lVar7 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
        auVar26 = *pauVar6;
        dVar16 = *(double *)(pauVar6[1] + 8);
        auVar24 = blendpd(auVar22,auVar30,2);
        pdVar3 = (double *)(lVar7 + uVar19 * 0x18);
        dVar10 = *pdVar3 * *(double *)pauVar6[4];
        dVar11 = pdVar3[1] * *(double *)(pauVar6[4] + 8);
        uVar34 = (undefined4)((ulonglong)dVar11 >> 0x20);
        dVar8 = *(double *)(lVar7 + 0x10 + uVar19 * 0x18) * *(double *)pauVar6[5];
        dVar9 = *(double *)(pauVar6[5] + 8) * 0.0;
        auVar31._8_4_ = SUB84(dVar11,0);
        auVar31._0_8_ = dVar10;
        auVar31._12_4_ = uVar34;
        dVar14 = auVar30._0_8_;
        auVar32._0_8_ = auVar31._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar10;
        auVar32._8_8_ = dVar8 * auVar22._8_8_ - dVar14 * dVar11;
        auVar27._8_4_ = SUB84(dVar11,0);
        auVar27._0_8_ = dVar10;
        auVar27._12_4_ = uVar34;
        auVar22._8_4_ = SUB84(dVar9,0);
        auVar22._0_8_ = dVar8;
        auVar22._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar22 = blendpd(auVar27,auVar22,2);
        auVar23._0_8_ = auVar22._0_8_ * dVar14 - auVar24._0_8_ * dVar8;
        auVar23._8_8_ = auVar22._8_8_ * auVar30._8_8_ - auVar24._8_8_ * dVar9;
        dVar9 = auVar32._8_8_ + auVar32._8_8_;
        dVar13 = auVar23._0_8_ + auVar23._0_8_;
        uVar34 = (undefined4)((ulonglong)dVar13 >> 0x20);
        auVar22 = blendpd(auVar32,auVar23,2);
        auVar28._8_4_ = SUB84(dVar13,0);
        auVar28._0_8_ = dVar9;
        auVar28._12_4_ = uVar34;
        auVar25._8_4_ = SUB84(dVar13,0);
        auVar25._0_8_ = dVar9;
        auVar25._12_4_ = uVar34;
        auVar33._0_8_ = auVar22._0_8_ + auVar22._0_8_;
        auVar33._8_8_ = auVar22._8_8_ + auVar22._8_8_;
        auVar29._0_8_ = auVar28._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar9;
        auVar29._8_8_ = auVar33._0_8_ * auVar26._8_8_ - dVar14 * dVar13;
        auVar22 = blendpd(auVar25,auVar33,2);
        auVar24._8_4_ = SUB84(auVar29._8_8_,0);
        auVar24._0_8_ = auVar29._0_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
        auVar27 = blendpd(auVar26,auVar30,2);
        auVar26._0_8_ = auVar22._0_8_ * dVar14 - auVar27._0_8_ * auVar33._0_8_;
        auVar26._8_8_ = auVar22._8_8_ * auVar30._8_8_ - auVar27._8_8_ * auVar33._8_8_;
        auVar30 = blendpd(auVar29,auVar26,2);
        dVar9 = dVar9 * dVar16 + dVar10 + auVar24._8_8_ + *(double *)pauVar6[2];
        dVar14 = dVar13 * dVar16 + dVar11 + auVar26._0_8_ + *(double *)(pauVar6[2] + 8);
        uVar34 = SUB84(dVar14,0);
        uVar35 = (undefined4)((ulonglong)dVar14 >> 0x20);
        dVar14 = dVar16 * auVar33._0_8_ + dVar8 + auVar30._0_8_ + *(double *)pauVar6[3];
        local_98 = dVar14;
        sVar18 = _dclass();
        if (((sVar18 < 1) &&
            (auVar15._4_8_ = extraout_XMM0_Qb, auVar15._0_4_ = (int)((ulonglong)dVar9 >> 0x20),
            auVar30._0_8_ = auVar15._0_8_ << 0x20, auVar30._8_4_ = uVar34, auVar30._12_4_ = uVar35,
            sVar18 = _dclass(auVar30._8_8_), sVar18 < 1)) &&
           (sVar18 = _dclass(local_98), sVar18 < 1)) {
          auVar12._8_4_ = uVar34;
          auVar12._0_8_ = dVar9;
          auVar12._12_4_ = uVar35;
          *(undefined1 (*) [16])(lVar7 + uVar19 * 0x18) = auVar12;
          *(double *)(lVar7 + 0x10 + uVar19 * 0x18) = dVar14;
          if ((param_1->ChangeStampShape).bIsEnabled != false) {
            this_00 = &(param_1->ChangeStampShape).Mutex;
            LOCK();
            bVar21 = this_00->State == (atomic<unsigned_char>)0x0;
            if (bVar21) {
              this_00->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar21) {
              UE::FMutex::LockSlow(this_00);
            }
            puVar1 = &(param_1->ChangeStampShape).Value;
            *puVar1 = *puVar1 + 1;
            LOCK();
            aVar4 = this_00->State;
            this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
            UNLOCK();
            if (((byte)aVar4 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(this_00);
            }
          }
        }
      }
    }
    FVar20.Data = FVar20.Data + 4;
  }
  if (local_b8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8[0].AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce43b50

void __thiscall
`UGeometryScriptLibrary_MeshTransformFunctions::TranslateMeshSelection'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  atomic<unsigned_char> aVar4;
  uint uVar5;
  longlong lVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  bool bVar12;
  short sVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_88 [6];
  
  bVar12 = FGeometryScriptMeshSelection::IsEmpty(*(FGeometryScriptMeshSelection **)this);
  if (!bVar12) {
    local_88[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88[0].ArrayNum = 0;
    local_88[0].ArrayMax = 0;
    FGeometryScriptMeshSelection::ConvertToMeshIndexArray
              (*(FGeometryScriptMeshSelection **)this,param_1,local_88,Vertex);
    iVar11 = local_88[0].ArrayNum;
    pFVar2 = local_88[0].AllocatorInstance.Data + (longlong)local_88[0].ArrayNum * 4;
    FVar15.Data = local_88[0].AllocatorInstance.Data;
    while( true ) {
      if (local_88[0].ArrayNum != iVar11) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar15.Data == pFVar2) break;
      uVar5 = *(uint *)FVar15.Data;
      if ((-1 < (int)uVar5) &&
         ((int)uVar5 <
          (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
        uVar14 = (ulonglong)(uVar5 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + (ulonglong)(uVar5 >> 9) * 8) + uVar14 * 2) - 1U) < 0xfffe) {
          lVar6 = *(longlong *)
                   ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8)
          ;
          pdVar7 = *(double **)((longlong)this + 8);
          pdVar3 = (double *)(lVar6 + uVar14 * 0x18);
          dVar9 = *(double *)(lVar6 + 0x10 + uVar14 * 0x18) + pdVar7[2];
          dVar10 = *pdVar3 + *pdVar7;
          dVar8 = pdVar3[1] + pdVar7[1];
          sVar13 = _dclass(SUB84(dVar10,0));
          if (((sVar13 < 1) && (sVar13 = _dclass(SUB84(dVar8,0)), sVar13 < 1)) &&
             (sVar13 = _dclass(SUB84(dVar9,0)), sVar13 < 1)) {
            *(double *)(lVar6 + uVar14 * 0x18) = dVar10;
            *(double *)(lVar6 + 8 + uVar14 * 0x18) = dVar8;
            *(double *)(lVar6 + 0x10 + uVar14 * 0x18) = dVar9;
            if ((param_1->ChangeStampShape).bIsEnabled != false) {
              this_00 = &(param_1->ChangeStampShape).Mutex;
              LOCK();
              bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
              if (bVar12) {
                this_00->State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar12) {
                UE::FMutex::LockSlow(this_00);
              }
              puVar1 = &(param_1->ChangeStampShape).Value;
              *puVar1 = *puVar1 + 1;
              LOCK();
              aVar4 = this_00->State;
              this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
              UNLOCK();
              if (((byte)aVar4 & 2) != 0) {
                UE::FMutex::WakeWaitingThread(this_00);
              }
            }
          }
        }
      }
      FVar15.Data = FVar15.Data + 4;
    }
    if (local_88[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88[0].AllocatorInstance.Data);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14ce6d770

UClass * __cdecl UGeometryScriptLibrary_MeshTransformFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshTransformFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshTransformFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshTransformFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshTransformFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshTransformFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshTransformFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshTransformFunctions.InnerSingleton;
}

// InverseTransformMesh @ 14ce6ef60

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::InverseTransformMesh
          (UDynamicMesh *param_1,TTransform<double> *param_2,bool param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  undefined1 local_res18 [16];
  undefined1 local_28 [16];
  TTransform<double> *local_18;
  undefined1 *local_10;
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"InverseTransformMesh_InvalidInput",
                        L"InverseTransformMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_10 = local_res18;
  local_28._8_8_ = &local_18;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::InverseTransformMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_18 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  return param_1;
}

// InverseTransformMeshSelection @ 14ce6f020

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::InverseTransformMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,TTransform<double> *param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  undefined1 local_38 [16];
  FGeometryScriptMeshSelection *local_28;
  TTransform<double> *local_20;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"InverseTransformMeshSelection_InvalidInput",
                        L"InverseTransformMeshSelection: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::InverseTransformMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// RotateMesh @ 14ce71540

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::RotateMesh
          (UDynamicMesh *param_1,TRotator<double> *param_2,TVector<double> *param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  TRotator<double> *local_28;
  TVector<double> *local_20;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"RotateMesh_InvalidInput",L"RotateMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::RotateMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// RotateMeshSelection @ 14ce715f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::RotateMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,TRotator<double> *param_3,
          TVector<double> *param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  undefined1 local_38 [16];
  FGeometryScriptMeshSelection *local_28;
  TRotator<double> *local_20;
  TVector<double> *local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"RotateMeshSelection_InvalidInput",
                        L"RotateMeshSelection: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::RotateMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ScaleMesh @ 14ce71870

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::ScaleMesh
          (UDynamicMesh *param_1,TVector<double> *param_2,TVector<double> *param_3,bool param_4,
          UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  TVector<double> *local_28;
  TVector<double> *local_20;
  undefined1 *local_18;
  
  local_res20[0] = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"ScaleMesh_InvalidInput",L"ScaleMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18 = local_res20;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::ScaleMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ScaleMeshSelection @ 14ce71920

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::ScaleMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,TVector<double> *param_3,
          TVector<double> *param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  undefined1 local_38 [16];
  FGeometryScriptMeshSelection *local_28;
  TVector<double> *local_20;
  TVector<double> *local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"ScaleMeshSelection_InvalidInput",L"ScaleMeshSelection: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::ScaleMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_4;
  local_18 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshTransformFunctions @ 14ce75240

void __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshTransformFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions_Statics::Funcs
  ;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TransformMesh @ 14ce756f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::TransformMesh
          (UDynamicMesh *param_1,TTransform<double> *param_2,bool param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  undefined1 local_res18 [16];
  undefined1 local_28 [16];
  TTransform<double> *local_18;
  undefined1 *local_10;
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"TransformMesh_InvalidInput",L"TransformMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_10 = local_res18;
  local_28._8_8_ = &local_18;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::TransformMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_18 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  return param_1;
}

// TransformMeshSelection @ 14ce757b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::TransformMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,TTransform<double> *param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  undefined1 local_38 [16];
  FGeometryScriptMeshSelection *local_28;
  TTransform<double> *local_20;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"TransformMeshSelection_InvalidInput",
                        L"TransformMeshSelection: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::TransformMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// TranslateMesh @ 14ce75870

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::TranslateMesh
          (UDynamicMesh *param_1,TVector<double> *param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  TVector<double> *local_res8;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"TranslateMesh_InvalidInput",L"TranslateMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::TranslateMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_res8 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// TranslateMeshSelection @ 14ce75920

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::TranslateMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,TVector<double> *param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  FGeometryScriptMeshSelection *local_28;
  TVector<double> *local_20;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"TranslateMeshSelection_InvalidInput",
                        L"TranslateMeshSelection: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::TranslateMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// execInverseTransformMesh @ 14ce97b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::execInverseTransformMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined1 local_138 [8];
  int local_130 [2];
  UGeometryScriptDebug *local_128;
  UDynamicMesh *local_120;
  undefined1 local_118 [16];
  undefined8 *local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_120 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_130[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_130);
  }
  bVar5 = local_130[0] != 0;
  local_128 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  pUVar3 = local_120;
  pUVar2 = local_128;
  local_f8 = local_98._0_8_;
  uStack_f0 = local_98._8_8_;
  local_e8 = local_88._0_8_;
  uStack_e0 = local_88._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = local_78._0_8_;
  uStack_d0 = local_78._8_8_;
  local_c8 = local_68._0_8_;
  uStack_c0 = local_68._8_8_;
  local_b8 = local_58._0_8_;
  uStack_b0 = local_58._8_8_;
  local_a8 = local_48._0_8_;
  uStack_a0 = local_48._8_8_;
  local_138[0] = bVar5;
  if (local_120 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_118,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"InverseTransformMesh_InvalidInput",
                        L"InverseTransformMesh: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_118._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_118._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_108 = &local_f8;
    local_100 = local_138;
    local_118._8_8_ = &local_108;
    local_118._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::InverseTransformMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_120,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_118,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar3;
  }
  return;
}

// execInverseTransformMeshSelection @ 14ce97df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::execInverseTransformMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  undefined1 auStack_178 [32];
  UGeometryScriptDebug *local_148;
  UDynamicMesh *local_140;
  FGeometryScriptMeshSelection local_138;
  undefined1 local_128 [16];
  FGeometrySelection **local_118;
  double *local_110;
  FGeometrySelection *local_108;
  TReferenceControllerBase<1> *pTStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_140 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_138);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_68 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_60 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_48 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_40 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_148 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  pUVar4 = local_140;
  pUVar2 = local_148;
  local_108 = local_138.GeoSelection.Object;
  pTStack_100 = local_138.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_138.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8 = local_98;
  dStack_f0 = dStack_90;
  local_e8 = local_88;
  dStack_e0 = dStack_80;
  local_d8 = local_78._0_8_;
  uStack_d0 = local_78._8_8_;
  local_c8 = local_68;
  dStack_c0 = dStack_60;
  local_b8 = local_58._0_8_;
  uStack_b0 = local_58._8_8_;
  local_a8 = local_48;
  dStack_a0 = dStack_40;
  if (local_140 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_128,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"InverseTransformMeshSelection_InvalidInput",
                        L"InverseTransformMeshSelection: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_128._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_128._0_8_ + 0x10))();
    }
  }
  else {
    local_118 = &local_108;
    local_110 = &local_f8;
    local_128._8_8_ = &local_118;
    local_128._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::InverseTransformMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_140,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_128,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_100);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execRotateMesh @ 14ce9a730

void __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::execRotateMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18 [2];
  undefined1 local_a8 [16];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_res18[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18[0];
  pUVar2 = local_res10;
  local_38 = local_88;
  uStack_30 = uStack_80;
  local_28 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_70;
  uStack_50 = uStack_68;
  local_48 = local_60;
  if (local_res18[0] == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_a8,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"RotateMesh_InvalidInput",L"RotateMesh: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_98 = &local_58;
    local_90 = &local_38;
    local_a8._8_8_ = &local_98;
    local_a8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::RotateMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18[0],(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_a8,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar3;
  }
  return;
}

// execRotateMeshSelection @ 14ce9a920

void __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::execRotateMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  FGeometryScriptMeshSelection local_d8;
  undefined1 local_c8 [16];
  FGeometrySelection *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  FGeometrySelection **local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_d8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res18;
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b8 = local_d8.GeoSelection.Object;
  pTStack_b0 = local_d8.GeoSelection.SharedReferenceCount.ReferenceController;
  if (local_d8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = local_a8;
  uStack_30 = uStack_a0;
  local_28 = local_98;
  local_58 = local_90;
  uStack_50 = uStack_88;
  local_48 = local_80;
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_c8,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"RotateMeshSelection_InvalidInput",
                        L"RotateMeshSelection: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_c8._0_8_ + 0x10))();
    }
  }
  else {
    local_78 = &local_b8;
    local_70 = &local_58;
    local_68 = &local_38;
    local_c8._8_8_ = &local_78;
    local_c8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::RotateMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_c8,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execScaleMesh @ 14ce9aec0

void __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::execScaleMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  int local_res18 [2];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_c8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar5 = local_res18[0] != 0;
  local_res20 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar3 = local_c8;
  pUVar2 = local_res20;
  local_48 = local_b0;
  uStack_40 = uStack_a8;
  local_38 = local_a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68 = local_98;
  uStack_60 = uStack_90;
  local_58 = local_88;
  local_res10[0] = bVar5;
  if (local_c8 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_c0,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"ScaleMesh_InvalidInput",L"ScaleMesh: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_c0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_c0._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_80 = &local_68;
    local_78 = &local_48;
    local_70 = local_res10;
    local_c0._8_8_ = &local_80;
    local_c0._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::ScaleMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_c8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_c0,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar3;
  }
  return;
}

// execScaleMeshSelection @ 14ce9b100

void __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::execScaleMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  FGeometryScriptMeshSelection local_d8;
  undefined1 local_c8 [16];
  FGeometrySelection *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  FGeometrySelection **local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_d8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res18;
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b8 = local_d8.GeoSelection.Object;
  pTStack_b0 = local_d8.GeoSelection.SharedReferenceCount.ReferenceController;
  if (local_d8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = local_a8;
  uStack_50 = uStack_a0;
  local_48 = local_98;
  local_38 = local_90;
  uStack_30 = uStack_88;
  local_28 = local_80;
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_c8,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"ScaleMeshSelection_InvalidInput",L"ScaleMeshSelection: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_c8._0_8_ + 0x10))();
    }
  }
  else {
    local_78 = &local_b8;
    local_70 = &local_58;
    local_68 = &local_38;
    local_c8._8_8_ = &local_78;
    local_c8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::ScaleMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_c8,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execTransformMesh @ 14cea1850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::execTransformMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined1 local_138 [8];
  int local_130 [2];
  UGeometryScriptDebug *local_128;
  UDynamicMesh *local_120;
  undefined1 local_118 [16];
  undefined8 *local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_120 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_130[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_130);
  }
  bVar5 = local_130[0] != 0;
  local_128 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  pUVar3 = local_120;
  pUVar2 = local_128;
  local_f8 = local_98._0_8_;
  uStack_f0 = local_98._8_8_;
  local_e8 = local_88._0_8_;
  uStack_e0 = local_88._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = local_78._0_8_;
  uStack_d0 = local_78._8_8_;
  local_c8 = local_68._0_8_;
  uStack_c0 = local_68._8_8_;
  local_b8 = local_58._0_8_;
  uStack_b0 = local_58._8_8_;
  local_a8 = local_48._0_8_;
  uStack_a0 = local_48._8_8_;
  local_138[0] = bVar5;
  if (local_120 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_118,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"TransformMesh_InvalidInput",L"TransformMesh: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_118._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_118._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_108 = &local_f8;
    local_100 = local_138;
    local_118._8_8_ = &local_108;
    local_118._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::TransformMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_120,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_118,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar3;
  }
  return;
}

// execTransformMeshSelection @ 14cea1ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::execTransformMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  undefined1 auStack_178 [32];
  UGeometryScriptDebug *local_148;
  UDynamicMesh *local_140;
  FGeometryScriptMeshSelection local_138;
  undefined1 local_128 [16];
  FGeometrySelection **local_118;
  double *local_110;
  FGeometrySelection *local_108;
  TReferenceControllerBase<1> *pTStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_140 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_138);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_68 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_60 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_48 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_40 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_148 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  pUVar4 = local_140;
  pUVar2 = local_148;
  local_108 = local_138.GeoSelection.Object;
  pTStack_100 = local_138.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_138.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8 = local_98;
  dStack_f0 = dStack_90;
  local_e8 = local_88;
  dStack_e0 = dStack_80;
  local_d8 = local_78._0_8_;
  uStack_d0 = local_78._8_8_;
  local_c8 = local_68;
  dStack_c0 = dStack_60;
  local_b8 = local_58._0_8_;
  uStack_b0 = local_58._8_8_;
  local_a8 = local_48;
  dStack_a0 = dStack_40;
  if (local_140 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_128,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"TransformMeshSelection_InvalidInput",
                        L"TransformMeshSelection: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_128._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_128._0_8_ + 0x10))();
    }
  }
  else {
    local_118 = &local_108;
    local_110 = &local_f8;
    local_128._8_8_ = &local_118;
    local_128._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::TransformMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_140,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_128,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_100);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execTranslateMesh @ 14cea1d80

void __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::execTranslateMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  undefined8 *local_res20;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18;
  pUVar2 = local_res10;
  local_38 = local_58;
  uStack_30 = uStack_50;
  local_28 = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"TranslateMesh_InvalidInput",L"TranslateMesh: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_res20 = &local_38;
  local_68._8_8_ = &local_res20;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::TranslateMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execTranslateMeshSelection @ 14cea1f50

void __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::execTranslateMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  FGeometryScriptMeshSelection local_98;
  FGeometrySelection **local_88;
  undefined8 *local_80;
  undefined1 local_78 [16];
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_98);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res18;
  pUVar2 = local_res10;
  local_68 = local_98.GeoSelection.Object;
  pTStack_60 = local_98.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = local_58;
  uStack_30 = uStack_50;
  local_28 = local_48;
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_78,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"TranslateMeshSelection_InvalidInput",
                        L"TranslateMeshSelection: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_78._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_78._0_8_ + 0x10))();
    }
  }
  else {
    local_88 = &local_68;
    local_80 = &local_38;
    local_78._8_8_ = &local_88;
    local_78._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::TranslateMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_78,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execTranslatePivotToLocation @ 14cea2410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshTransformFunctions::execTranslatePivotToLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  uint uVar3;
  UGeometryScriptDebug *pUVar4;
  UDynamicMesh *pUVar5;
  FText *pFVar6;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  uint *local_res20;
  undefined1 local_68 [16];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined8 local_28;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res18;
  pUVar4 = local_res10;
  uStack_2c = _UNK_15066df7c;
  uStack_30 = _UNK_15066df78;
  uVar3 = __xmm_80000000000000008000000000000000._4_4_;
  uVar2 = (uint)__xmm_80000000000000008000000000000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_58 ^ uVar2;
  uStack_34 = uStack_54 ^ uVar3;
  uStack_30 = uStack_50 ^ uStack_30;
  uStack_2c = uStack_4c ^ uStack_2c;
  local_28 = CONCAT44((uint)((ulonglong)local_48 >> 0x20) ^ uVar3,(uint)local_48 ^ uVar2);
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshTransformFunctions",
                        L"TranslateMesh_InvalidInput",L"TranslateMesh: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar4,InvalidInputs,pFVar6);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_res20 = &local_38;
    local_68._8_8_ = &local_res20;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshTransformFunctions::TranslateMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar5;
  }
  return;
}

