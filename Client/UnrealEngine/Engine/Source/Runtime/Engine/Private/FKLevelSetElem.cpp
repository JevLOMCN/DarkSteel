// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// GetTransform @ 1472592a0

TTransform<double> * __thiscall
FKLevelSetElem::GetTransform(FKLevelSetElem *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->Transform).Rotation.XY.m128d_f64[1];
  dVar2 = (this->Transform).Rotation.ZW.m128d_f64[0];
  dVar3 = (this->Transform).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Transform).Translation.XY.m128d_f64[0];
  dVar4 = (this->Transform).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->Transform).Translation.ZW.m128d_f64[0];
  dVar3 = (this->Transform).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (this->Transform).Scale3D.XY.m128d_f64[0];
  dVar4 = (this->Transform).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->Transform).Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->Transform).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// StaticStruct @ 1472874a0

UScriptStruct * __cdecl FKLevelSetElem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKLevelSetElem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKLevelSetElem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKLevelSetElem,(UObject *)pUVar1,L"KLevelSetElem"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FKLevelSetElem.OuterSingleton;
}

// BuildLevelSet @ 1476f13c0

void __thiscall
FKLevelSetElem::BuildLevelSet
          (FKLevelSetElem *this,TTransform<double> *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,TIntVector3<int> *param_3,
          float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  FLevelSet *pFVar7;
  longlong lVar8;
  int local_108;
  FLevelSet *local_f8;
  FSharedReferencer<1> local_f0;
  TVector<int,3>_u_0 local_e8;
  undefined1 local_d8 [16];
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  TVector<double,3> local_a0;
  TUniformGridBase<double,3> local_88;
  
  local_a0._16_8_ = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_108 = (int)*(undefined8 *)&param_3->field0_0x0;
  local_b0 = (double)param_4;
  local_b8 = (double)local_108 * local_b0;
  local_a8 = (double)(param_3->field0_0x0)._s_0.Z * local_b0;
  local_e8._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_e8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_e8._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_b0 = (double)(int)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) * local_b0;
  Chaos::TUniformGridBase<double,3>::TUniformGridBase<double,3>
            (&local_88,&local_a0,(TVector<double,3> *)&local_b8,(TVector<int,3> *)&local_e8._s_0,0);
  iVar1 = (param_3->field0_0x0)._s_0.X;
  iVar2 = (param_3->field0_0x0)._s_0.Y;
  local_d8._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  iVar3 = (param_3->field0_0x0)._s_0.Z;
  _Src = (param_2->AllocatorInstance).Data;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = param_2->ArrayNum;
  lVar8 = (longlong)local_c0;
  local_d8._8_4_ = iVar3;
  if (local_c0 == 0) {
    local_bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_c0,0,&local_c8,local_c0,&local_bc);
    memcpy(local_c8.Data,_Src,lVar8 << 3);
  }
  if (iVar3 * iVar2 * iVar1 != param_2->ArrayNum) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Counts.Product() == Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ArrayND.h"
                       ,0x100,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar7 = ::operator_new(0x120);
  if (pFVar7 == (FLevelSet *)0x0) {
    pFVar7 = (FLevelSet *)0x0;
  }
  else {
    pFVar7 = Chaos::FLevelSet::FLevelSet
                       (pFVar7,(TUniformGrid<double,3> *)&local_88,(TArrayND<double,3> *)local_d8,0)
    ;
  }
  local_f8 = pFVar7;
  local_f0.ReferenceController = ::operator_new(0x18);
  if (local_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_f0.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_f0.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLevelSet_Chaos__U__DefaultDeleter_VFLevelSet_Chaos___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_f0.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_f0.ReferenceController[1]._padding_ = (longlong)pFVar7;
  }
  if (&this->LevelSet != (TSharedPtr<Chaos::FLevelSet,1> *)&local_f8) {
    (this->LevelSet).Object = pFVar7;
    local_f8 = (FLevelSet *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LevelSet).SharedReferenceCount,&local_f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.ReferenceController);
  dVar5 = (param_1->Rotation).XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Translation).XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar5;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return;
}

// CalcAABB @ 1476f2d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
FKLevelSetElem::CalcAABB
          (FKLevelSetElem *this,TBox<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  FLevelSet *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  TMatrix<double> *pTVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar21;
  undefined1 auVar19 [16];
  uint uVar22;
  uint uVar23;
  double dVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStack_1e8 [32];
  TMatrix<double> local_1c8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pFVar3 = (this->LevelSet).Object;
  if (pFVar3 == (FLevelSet *)0x0) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
  }
  else {
    dVar1 = *(double *)&(pFVar3->MLocalBoundingBox).MMin.field_0x10;
    dVar2 = *(double *)&(pFVar3->MLocalBoundingBox).MMax.field_0x10;
    local_148.Scale3D.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
    dVar21 = *(double *)&(pFVar3->MLocalBoundingBox).MMin;
    dVar4 = *(double *)&(pFVar3->MLocalBoundingBox).MMin.field_0x8;
    dVar5 = *(double *)&(pFVar3->MLocalBoundingBox).MMax;
    dVar7 = *(double *)&(pFVar3->MLocalBoundingBox).MMax.field_0x8;
    local_148.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_148.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
    local_148.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
    local_148.Scale3D.XY.m128d_f64 = *(double (*) [2])&param_2->field0_0x0;
    local_148.Translation.XY.m128d_f64[0]._0_4_ =
         SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
    local_148.Translation.XY.m128d_f64[0]._4_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_148.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
    local_148.Translation.XY.m128d_f64[1]._4_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
    local_148.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_148.Translation.ZW.m128d_f64[1] = 0.0;
    local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_148.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
    local_148.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
    UE::Math::TTransform<double>::Multiply(&local_e8,&local_148,param_1);
    local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_148,&this->Transform,&local_e8);
    pTVar13 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_148,&local_1c8);
    dVar9 = (dVar5 - dVar21) * ___xmm_3fe00000000000003fe0000000000000;
    dVar11 = (dVar7 - dVar4) * _UNK_150689678;
    dVar6 = (dVar5 + dVar21) * ___xmm_3fe00000000000003fe0000000000000;
    dVar7 = (dVar7 + dVar4) * _UNK_150689678;
    dVar8 = (dVar2 - dVar1) * ___xmm_3fe00000000000003fe0000000000000;
    dVar24 = (dVar2 + dVar1) * ___xmm_3fe00000000000003fe0000000000000;
    auVar15._8_4_ = SUB84(dVar6,0);
    auVar15._0_8_ = dVar6;
    auVar15._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    dVar1 = dVar8 * pTVar13->M[2][0];
    dVar2 = dVar8 * pTVar13->M[2][1];
    dVar4 = dVar7 * pTVar13->M[1][0] + dVar6 * pTVar13->M[0][0] + dVar24 * pTVar13->M[2][0] +
            pTVar13->M[3][0];
    dVar5 = dVar7 * pTVar13->M[1][1] + auVar15._8_8_ * pTVar13->M[0][1] + dVar24 * pTVar13->M[2][1]
            + pTVar13->M[3][1];
    dVar8 = dVar8 * pTVar13->M[2][2];
    auVar16._8_4_ = SUB84(dVar9,0);
    auVar16._0_8_ = dVar9;
    auVar16._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    dVar14 = dVar9 * pTVar13->M[0][0];
    dVar20 = auVar16._8_8_ * pTVar13->M[0][1];
    dVar10 = dVar11 * pTVar13->M[1][2];
    dVar21 = dVar11 * pTVar13->M[1][0];
    dVar11 = dVar11 * pTVar13->M[1][1];
    dVar9 = dVar9 * pTVar13->M[0][2];
    dVar6 = dVar7 * pTVar13->M[1][2] + dVar6 * pTVar13->M[0][2] + dVar24 * pTVar13->M[2][2] +
            pTVar13->M[3][2];
    local_148.Translation.ZW.m128d_f64[0] =
         (double)CONCAT71(local_148.Translation.ZW.m128d_f64[0]._1_7_,1);
    auVar17._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar17._8_4_ = SUB84(dVar20,0) & _UNK_15061cc88;
    auVar17._12_4_ = (uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c;
    uVar27 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar28 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar25 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar26 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    auVar18._8_4_ = SUB84(dVar5,0);
    auVar18._0_8_ = dVar4;
    auVar18._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar1 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            auVar17._0_8_ +
            (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar11,0) & _UNK_15061cc88) + auVar17._8_8_ +
            (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar2,0) & _UNK_15061cc88);
    uVar22 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar23 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar21 = auVar18._8_8_ - dVar2;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar4 - dVar1;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar21;
    dVar9 = (double)CONCAT44(uVar28,uVar27) + (double)CONCAT44(uVar23,uVar22) +
            (double)CONCAT44(uVar26,uVar25);
    dVar1 = dVar1 + dVar4;
    local_148.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
    local_148.Rotation.ZW.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
    auVar12._4_8_ = dVar21;
    auVar12._0_4_ = local_148.Rotation.ZW.m128d_f64[0]._4_4_;
    auVar19._0_8_ = auVar12._0_8_ << 0x20;
    auVar19._8_4_ = local_148.Rotation.ZW.m128d_f64[1]._0_4_;
    auVar19._12_4_ = local_148.Rotation.ZW.m128d_f64[1]._4_4_;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar9;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = auVar19._8_8_;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2 + dVar5;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar9 + dVar6;
    *(double *)&__return_storage_ptr__->IsValid = local_148.Translation.ZW.m128d_f64[0];
  }
  return __return_storage_ptr__;
}

// GetInteriorGridCells @ 1477075f0

void __thiscall
FKLevelSetElem::GetInteriorGridCells
          (FKLevelSetElem *this,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_1,
          double param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FLevelSet *pFVar5;
  FLevelSet *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  int local_f0;
  int iStack_ec;
  undefined7 uStack_af;
  
  pFVar5 = (this->LevelSet).Object;
  if (pFVar5 != (FLevelSet *)0x0) {
    uVar1 = *(undefined8 *)&(pFVar5->MGrid).field_0x30;
    iVar4 = *(int *)&(pFVar5->MGrid).field_0x38;
    iVar20 = 0;
    local_f0 = (int)uVar1;
    if (0 < local_f0) {
      iStack_ec = (int)((ulonglong)uVar1 >> 0x20);
      do {
        iVar18 = 0;
        if (0 < iStack_ec) {
          do {
            iVar19 = 0;
            if (0 < iVar4) {
              do {
                if (((this->LevelSet).Object == (FLevelSet *)0x0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar6 = (this->LevelSet).Object;
                uVar17 = (iVar20 * *(int *)&(pFVar6->MPhi).field_0x4 + iVar18) *
                         *(int *)&(pFVar6->MPhi).field_0x8 + iVar19;
                uVar14 = 0;
                if ((int)uVar17 < *(int *)&(pFVar6->MPhi).field_0x18) {
                  uVar14 = ~uVar17 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if (*(double *)(*(longlong *)&(pFVar6->MPhi).field_0x10 + (longlong)(int)uVar17 * 8)
                    <= param_2) {
                  iVar15 = param_1->ArrayNum;
                  dVar2 = *(double *)&(pFVar5->MGrid).field_0x48;
                  dVar3 = *(double *)&(pFVar5->MGrid).field_0x40;
                  dVar23 = (double)iVar19 * *(double *)&(pFVar5->MGrid).field_0x50 +
                           *(double *)&(pFVar5->MGrid).field_0x10;
                  dVar22 = (double)iVar18 * dVar2 + *(double *)&(pFVar5->MGrid).field_0x8;
                  dVar12 = dVar23 + *(double *)&(pFVar5->MGrid).field_0x50;
                  dVar21 = (double)iVar20 * dVar3 + *(double *)&pFVar5->MGrid;
                  dVar3 = dVar3 + dVar21;
                  if (iVar15 == param_1->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar15 + 1;
                  lVar16 = (longlong)iVar15 * 0x38;
                  pFVar7 = (param_1->AllocatorInstance).Data;
                  auVar9._8_4_ = SUB84(dVar22,0);
                  auVar9._0_8_ = dVar21;
                  auVar9._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
                  *(undefined1 (*) [16])(pFVar7 + lVar16) = auVar9;
                  auVar11._8_4_ = SUB84(dVar3,0);
                  auVar11._0_8_ = dVar23;
                  auVar11._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
                  *(undefined1 (*) [16])(pFVar7 + lVar16 + 0x10) = auVar11;
                  auVar10._8_4_ = SUB84(dVar12,0);
                  auVar10._0_8_ = dVar2 + dVar22;
                  auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                  *(undefined1 (*) [16])(pFVar7 + lVar16 + 0x20) = auVar10;
                  *(ulonglong *)(pFVar7 + lVar16 + 0x30) = CONCAT71(uStack_af,1);
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 < iVar4);
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < iStack_ec);
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < local_f0);
    }
  }
  return;
}

// GetLevelSetData @ 147707d30

void __thiscall
FKLevelSetElem::GetLevelSetData
          (FKLevelSetElem *this,TTransform<double> *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,TIntVector3<int> *param_3,
          float *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  FLevelSet *pFVar4;
  FScriptContainerElement *pFVar5;
  FLevelSet *pFVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 local_38 [4];
  
  pFVar4 = (this->LevelSet).Object;
  if (pFVar4 == (FLevelSet *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1640843383003939418>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\KAggregateGeom.cpp"
                       ,0x25a,"LevelSet.IsValid()");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    dVar8 = (this->Transform).Rotation.XY.m128d_f64[1];
    (param_1->Rotation).XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
    (param_1->Rotation).XY.m128d_f64[1] = dVar8;
    dVar8 = (this->Transform).Rotation.ZW.m128d_f64[1];
    (param_1->Rotation).ZW.m128d_f64[0] = (this->Transform).Rotation.ZW.m128d_f64[0];
    (param_1->Rotation).ZW.m128d_f64[1] = dVar8;
    dVar8 = (this->Transform).Translation.XY.m128d_f64[1];
    (param_1->Translation).XY.m128d_f64[0] = (this->Transform).Translation.XY.m128d_f64[0];
    (param_1->Translation).XY.m128d_f64[1] = dVar8;
    dVar8 = (this->Transform).Translation.ZW.m128d_f64[1];
    (param_1->Translation).ZW.m128d_f64[0] = (this->Transform).Translation.ZW.m128d_f64[0];
    (param_1->Translation).ZW.m128d_f64[1] = dVar8;
    dVar8 = (this->Transform).Scale3D.XY.m128d_f64[1];
    (param_1->Scale3D).XY.m128d_f64[0] = (this->Transform).Scale3D.XY.m128d_f64[0];
    (param_1->Scale3D).XY.m128d_f64[1] = dVar8;
    dVar8 = (this->Transform).Scale3D.ZW.m128d_f64[1];
    (param_1->Scale3D).ZW.m128d_f64[0] = (this->Transform).Scale3D.ZW.m128d_f64[0];
    (param_1->Scale3D).ZW.m128d_f64[1] = dVar8;
    iVar10 = *(int *)&(pFVar4->MGrid).field_0x30;
    iVar3 = *(int *)&(pFVar4->MGrid).field_0x38;
    (param_3->field0_0x0)._s_0.X = *(int *)&(pFVar4->MGrid).field_0x34;
    (param_3->field0_0x0)._s_0.Y = iVar10;
    (param_3->field0_0x0)._s_0.Z = iVar3;
    *param_4 = (float)*(double *)&(pFVar4->MGrid).field_0x40;
    if (((this->LevelSet).Object == (FLevelSet *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar13 = *(uint *)&(((this->LevelSet).Object)->MPhi).field_0x18;
    uVar14 = (ulonglong)uVar13;
    local_38[0] = 0;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar14);
    }
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (*piVar1 != uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,&param_2->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar13) {
      do {
        pFVar5 = (param_2->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)*piVar1 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar10 + 1;
        *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_38[0];
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    uVar13 = 0;
    if (0 < *(int *)&(pFVar4->MGrid).field_0x34 * *(int *)&(pFVar4->MGrid).field_0x38 *
            *(int *)&(pFVar4->MGrid).field_0x30) {
      lVar12 = 0;
      do {
        if (((this->LevelSet).Object == (FLevelSet *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (this->LevelSet).Object;
        uVar11 = 0;
        if ((int)uVar13 < *(int *)&(pFVar6->MPhi).field_0x18) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar2 = *(undefined8 *)(*(longlong *)&(pFVar6->MPhi).field_0x10 + lVar12);
        uVar11 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar13 = uVar13 + 1;
        *(undefined8 *)((param_2->AllocatorInstance).Data + lVar12) = uVar2;
        lVar12 = lVar12 + 8;
      } while ((int)uVar13 <
               *(int *)&(pFVar4->MGrid).field_0x34 * *(int *)&(pFVar4->MGrid).field_0x38 *
               *(int *)&(pFVar4->MGrid).field_0x30);
    }
  }
  return;
}

// GetZeroIsosurfaceGridCellFaces @ 14770b300

void __thiscall
FKLevelSetElem::GetZeroIsosurfaceGridCellFaces
          (FKLevelSetElem *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FLevelSet *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  int iStackX_8;
  int iStackX_20;
  int iStack_134;
  int iStack_110;
  int iStack_10c;
  
  pFVar6 = (this->LevelSet).Object;
  if (pFVar6 == (FLevelSet *)0x0) {
    return;
  }
  uVar1 = *(undefined8 *)&(pFVar6->MGrid).field_0x30;
  dVar2 = *(double *)&(pFVar6->MGrid).field_0x50;
  iVar4 = *(int *)&(pFVar6->MGrid).field_0x38;
  iStack_110 = (int)uVar1;
  dVar8 = *(double *)&(pFVar6->MGrid).field_0x40;
  dVar9 = *(double *)&(pFVar6->MGrid).field_0x48;
  iStack_134 = 0;
  if (0 < iStack_110 + -1) {
    iStack_10c = (int)((ulonglong)uVar1 >> 0x20);
    uVar21 = (undefined4)__real_3ff0000000000000;
    uVar23 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar24 = (undefined4)__real_bff0000000000000;
    uVar25 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    do {
      iStackX_20 = 0;
      if (0 < iStack_10c + -1) {
        do {
          iStackX_8 = 0;
          if (0 < iVar4 + -1) {
            do {
              uVar18 = (iStack_134 * *(int *)&(pFVar6->MPhi).field_0x4 + iStackX_20) *
                       *(int *)&(pFVar6->MPhi).field_0x8 + iStackX_8;
              uVar11 = 0;
              if ((int)uVar18 < *(int *)&(pFVar6->MPhi).field_0x18) {
                uVar11 = ~uVar18 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              dVar3 = *(double *)
                       (*(longlong *)&(pFVar6->MPhi).field_0x10 + (longlong)(int)uVar18 * 8);
              uVar30 = uVar21;
              uVar31 = uVar23;
              if ((dVar3 <= 0.0) && (uVar30 = uVar24, uVar31 = uVar25, 0.0 <= dVar3)) {
                uVar30 = 0;
                uVar31 = 0;
              }
              uVar18 = ((iStack_134 + 1) * *(int *)&(pFVar6->MPhi).field_0x4 + iStackX_20) *
                       *(int *)&(pFVar6->MPhi).field_0x8 + iStackX_8;
              uVar11 = 0;
              if ((int)uVar18 < *(int *)&(pFVar6->MPhi).field_0x18) {
                uVar11 = ~uVar18 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              dVar3 = *(double *)
                       (*(longlong *)&(pFVar6->MPhi).field_0x10 + (longlong)(int)uVar18 * 8);
              uVar19 = uVar21;
              uVar20 = uVar23;
              if ((dVar3 <= 0.0) && (uVar19 = uVar24, uVar20 = uVar25, 0.0 <= dVar3)) {
                uVar19 = 0;
                uVar20 = 0;
              }
              uVar18 = (iStack_134 * *(int *)&(pFVar6->MPhi).field_0x4 + 1 + iStackX_20) *
                       *(int *)&(pFVar6->MPhi).field_0x8 + iStackX_8;
              uVar11 = 0;
              if ((int)uVar18 < *(int *)&(pFVar6->MPhi).field_0x18) {
                uVar11 = ~uVar18 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              dVar3 = *(double *)
                       (*(longlong *)&(pFVar6->MPhi).field_0x10 + (longlong)(int)uVar18 * 8);
              uVar26 = uVar21;
              uVar27 = uVar23;
              if ((dVar3 <= 0.0) && (uVar26 = uVar24, uVar27 = uVar25, 0.0 <= dVar3)) {
                uVar26 = 0;
                uVar27 = 0;
              }
              uVar18 = (iStack_134 * *(int *)&(pFVar6->MPhi).field_0x4 + iStackX_20) *
                       *(int *)&(pFVar6->MPhi).field_0x8 + 1 + iStackX_8;
              uVar11 = 0;
              if ((int)uVar18 < *(int *)&(pFVar6->MPhi).field_0x18) {
                uVar11 = ~uVar18 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              dVar3 = *(double *)
                       (*(longlong *)&(pFVar6->MPhi).field_0x10 + (longlong)(int)uVar18 * 8);
              if ((dVar3 <= 0.0) && (uVar21 = uVar24, uVar23 = uVar25, 0.0 <= dVar3)) {
                uVar21 = 0;
                uVar23 = 0;
              }
              bVar10 = (double)CONCAT44(uVar31,uVar30) < (double)CONCAT44(uVar20,uVar19);
              dVar3 = (double)iStackX_20 * dVar9 + *(double *)&(pFVar6->MGrid).field_0x8;
              dVar29 = (double)iStack_134 * dVar8 + *(double *)&pFVar6->MGrid;
              dVar28 = (double)iStackX_8 * dVar2 + *(double *)&(pFVar6->MGrid).field_0x10;
              if (bVar10 || (double)CONCAT44(uVar31,uVar30) == (double)CONCAT44(uVar20,uVar19)) {
                if (bVar10) {
                  iVar12 = param_1->ArrayNum;
                  if (iVar12 == param_1->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar12 + 1;
                  lVar17 = (longlong)iVar12;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  fVar22 = (float)(dVar8 + dVar29);
                  *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)dVar3;
                  *(float *)(pFVar5 + lVar17 * 0xc) = fVar22;
                  *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)dVar28;
                  iVar13 = param_1->ArrayNum;
                  if (iVar13 == param_1->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar13 + 1;
                  lVar17 = (longlong)iVar13;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar17 * 0xc) = fVar22;
                  *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)(dVar3 + dVar9);
                  *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)dVar28;
                  iVar14 = param_1->ArrayNum;
                  if (iVar14 == param_1->ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar14 + 1;
                  lVar17 = (longlong)iVar14;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar17 * 0xc) = fVar22;
                  *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)(dVar28 + dVar2);
                  *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)(dVar3 + dVar9);
                  iVar15 = param_1->ArrayNum;
                  if (iVar15 == param_1->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar15 + 1;
                  lVar17 = (longlong)iVar15;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar17 * 0xc) = fVar22;
                  *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)dVar3;
                  *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)(dVar28 + dVar2);
                  iVar16 = param_2->ArrayNum;
                  if (iVar16 == param_2->ArrayMax) {
                    iVar16 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar17 = (longlong)iVar16;
                  param_2->ArrayNum = iVar16 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar17 * 0xc) = iVar12;
                  *(int *)(pFVar5 + lVar17 * 0xc + 4) = iVar14;
                  *(int *)(pFVar5 + lVar17 * 0xc + 8) = iVar13;
                  iVar13 = param_2->ArrayNum;
                  if (iVar13 == param_2->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar17 = (longlong)iVar13;
                  param_2->ArrayNum = iVar13 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar17 * 0xc) = iVar14;
                  *(int *)(pFVar5 + lVar17 * 0xc + 4) = iVar12;
                  *(int *)(pFVar5 + lVar17 * 0xc + 8) = iVar15;
                }
              }
              else {
                iVar12 = param_1->ArrayNum;
                if (iVar12 == param_1->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar12 + 1;
                lVar17 = (longlong)iVar12;
                pFVar5 = (param_1->AllocatorInstance).Data;
                fVar22 = (float)(dVar8 + dVar29);
                *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)dVar3;
                *(float *)(pFVar5 + lVar17 * 0xc) = fVar22;
                *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)dVar28;
                iVar13 = param_1->ArrayNum;
                if (iVar13 == param_1->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar13 + 1;
                lVar17 = (longlong)iVar13;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar17 * 0xc) = fVar22;
                *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)(dVar3 + dVar9);
                *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)dVar28;
                iVar14 = param_1->ArrayNum;
                if (iVar14 == param_1->ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar14 + 1;
                lVar17 = (longlong)iVar14;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar17 * 0xc) = fVar22;
                *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)(dVar28 + dVar2);
                *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)(dVar3 + dVar9);
                iVar15 = param_1->ArrayNum;
                if (iVar15 == param_1->ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar15 + 1;
                lVar17 = (longlong)iVar15;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar17 * 0xc) = fVar22;
                *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)dVar3;
                *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)(dVar28 + dVar2);
                iVar16 = param_2->ArrayNum;
                if (iVar16 == param_2->ArrayMax) {
                  iVar16 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar17 = (longlong)iVar16;
                param_2->ArrayNum = iVar16 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar17 * 0xc) = iVar12;
                *(int *)(pFVar5 + lVar17 * 0xc + 4) = iVar13;
                *(int *)(pFVar5 + lVar17 * 0xc + 8) = iVar14;
                iVar13 = param_2->ArrayNum;
                if (iVar13 == param_2->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar17 = (longlong)iVar13;
                param_2->ArrayNum = iVar13 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar17 * 0xc) = iVar14;
                *(int *)(pFVar5 + lVar17 * 0xc + 4) = iVar15;
                *(int *)(pFVar5 + lVar17 * 0xc + 8) = iVar12;
              }
              bVar10 = (double)CONCAT44(uVar31,uVar30) < (double)CONCAT44(uVar27,uVar26);
              if (bVar10 || (double)CONCAT44(uVar31,uVar30) == (double)CONCAT44(uVar27,uVar26)) {
                if (bVar10) {
                  iVar12 = param_1->ArrayNum;
                  if (iVar12 == param_1->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  fVar22 = (float)(dVar9 + dVar3);
                  param_1->ArrayNum = iVar12 + 1;
                  lVar17 = (longlong)iVar12;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar17 * 0xc + 4) = fVar22;
                  *(float *)(pFVar5 + lVar17 * 0xc) = (float)dVar29;
                  *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)dVar28;
                  iVar13 = param_1->ArrayNum;
                  if (iVar13 == param_1->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar13 + 1;
                  lVar17 = (longlong)iVar13;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)dVar28;
                  *(float *)(pFVar5 + lVar17 * 0xc) = (float)(dVar8 + dVar29);
                  *(float *)(pFVar5 + lVar17 * 0xc + 4) = fVar22;
                  iVar14 = param_1->ArrayNum;
                  if (iVar14 == param_1->ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar14 + 1;
                  lVar17 = (longlong)iVar14;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar17 * 0xc) = (float)(dVar8 + dVar29);
                  *(float *)(pFVar5 + lVar17 * 0xc + 4) = fVar22;
                  *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)(dVar2 + dVar28);
                  iVar15 = param_1->ArrayNum;
                  if (iVar15 == param_1->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar15 + 1;
                  lVar17 = (longlong)iVar15;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar17 * 0xc) = (float)dVar29;
                  *(float *)(pFVar5 + lVar17 * 0xc + 4) = fVar22;
                  *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)(dVar2 + dVar28);
                  iVar16 = param_2->ArrayNum;
                  if (iVar16 == param_2->ArrayMax) {
                    iVar16 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar17 = (longlong)iVar16;
                  param_2->ArrayNum = iVar16 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar17 * 0xc) = iVar12;
                  *(int *)(pFVar5 + lVar17 * 0xc + 4) = iVar13;
                  *(int *)(pFVar5 + lVar17 * 0xc + 8) = iVar14;
                  iVar13 = param_2->ArrayNum;
                  if (iVar13 == param_2->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar17 = (longlong)iVar13;
                  param_2->ArrayNum = iVar13 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar17 * 0xc) = iVar14;
                  *(int *)(pFVar5 + lVar17 * 0xc + 4) = iVar15;
                  *(int *)(pFVar5 + lVar17 * 0xc + 8) = iVar12;
                }
              }
              else {
                iVar12 = param_1->ArrayNum;
                if (iVar12 == param_1->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                fVar22 = (float)(dVar9 + dVar3);
                param_1->ArrayNum = iVar12 + 1;
                lVar17 = (longlong)iVar12;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar17 * 0xc + 4) = fVar22;
                *(float *)(pFVar5 + lVar17 * 0xc) = (float)dVar29;
                *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)dVar28;
                iVar13 = param_1->ArrayNum;
                if (iVar13 == param_1->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar13 + 1;
                lVar17 = (longlong)iVar13;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)dVar28;
                *(float *)(pFVar5 + lVar17 * 0xc) = (float)(dVar8 + dVar29);
                *(float *)(pFVar5 + lVar17 * 0xc + 4) = fVar22;
                iVar14 = param_1->ArrayNum;
                if (iVar14 == param_1->ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar14 + 1;
                lVar17 = (longlong)iVar14;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar17 * 0xc) = (float)(dVar8 + dVar29);
                *(float *)(pFVar5 + lVar17 * 0xc + 4) = fVar22;
                *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)(dVar2 + dVar28);
                iVar15 = param_1->ArrayNum;
                if (iVar15 == param_1->ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar15 + 1;
                lVar17 = (longlong)iVar15;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar17 * 0xc) = (float)dVar29;
                *(float *)(pFVar5 + lVar17 * 0xc + 4) = fVar22;
                *(float *)(pFVar5 + lVar17 * 0xc + 8) = (float)(dVar2 + dVar28);
                iVar16 = param_2->ArrayNum;
                if (iVar16 == param_2->ArrayMax) {
                  iVar16 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar17 = (longlong)iVar16;
                param_2->ArrayNum = iVar16 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar17 * 0xc) = iVar12;
                *(int *)(pFVar5 + lVar17 * 0xc + 4) = iVar14;
                *(int *)(pFVar5 + lVar17 * 0xc + 8) = iVar13;
                iVar13 = param_2->ArrayNum;
                if (iVar13 == param_2->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar17 = (longlong)iVar13;
                param_2->ArrayNum = iVar13 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar17 * 0xc) = iVar14;
                *(int *)(pFVar5 + lVar17 * 0xc + 4) = iVar12;
                *(int *)(pFVar5 + lVar17 * 0xc + 8) = iVar15;
              }
              bVar10 = (double)CONCAT44(uVar31,uVar30) < (double)CONCAT44(uVar23,uVar21);
              if (bVar10 || (double)CONCAT44(uVar31,uVar30) == (double)CONCAT44(uVar23,uVar21)) {
                if (bVar10) {
                  iVar12 = param_1->ArrayNum;
                  if (iVar12 == param_1->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  fVar22 = (float)(dVar2 + dVar28);
                  param_1->ArrayNum = iVar12 + 1;
                  lVar17 = (longlong)iVar12;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar17 * 0xc + 8) = fVar22;
                  *(float *)(pFVar5 + lVar17 * 0xc) = (float)dVar29;
                  *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)dVar3;
                  iVar13 = param_1->ArrayNum;
                  if (iVar13 == param_1->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar13 + 1;
                  lVar17 = (longlong)iVar13;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar17 * 0xc) = (float)(dVar8 + dVar29);
                  *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)dVar3;
                  *(float *)(pFVar5 + lVar17 * 0xc + 8) = fVar22;
                  iVar14 = param_1->ArrayNum;
                  if (iVar14 == param_1->ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar14 + 1;
                  lVar17 = (longlong)iVar14;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar17 * 0xc) = (float)(dVar8 + dVar29);
                  *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)(dVar9 + dVar3);
                  *(float *)(pFVar5 + lVar17 * 0xc + 8) = fVar22;
                  iVar15 = param_1->ArrayNum;
                  if (iVar15 == param_1->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar15 + 1;
                  lVar17 = (longlong)iVar15;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar17 * 0xc) = (float)dVar29;
                  *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)(dVar9 + dVar3);
                  *(float *)(pFVar5 + lVar17 * 0xc + 8) = fVar22;
                  iVar16 = param_2->ArrayNum;
                  if (iVar16 == param_2->ArrayMax) {
                    iVar16 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar17 = (longlong)iVar16;
                  param_2->ArrayNum = iVar16 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar17 * 0xc) = iVar12;
                  *(int *)(pFVar5 + lVar17 * 0xc + 4) = iVar14;
                  *(int *)(pFVar5 + lVar17 * 0xc + 8) = iVar13;
                  iVar13 = param_2->ArrayNum;
                  if (iVar13 == param_2->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar17 = (longlong)iVar13;
                  param_2->ArrayNum = iVar13 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar17 * 0xc) = iVar14;
                  *(int *)(pFVar5 + lVar17 * 0xc + 4) = iVar12;
                  *(int *)(pFVar5 + lVar17 * 0xc + 8) = iVar15;
                }
              }
              else {
                iVar12 = param_1->ArrayNum;
                if (iVar12 == param_1->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                fVar22 = (float)(dVar2 + dVar28);
                param_1->ArrayNum = iVar12 + 1;
                lVar17 = (longlong)iVar12;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar17 * 0xc + 8) = fVar22;
                *(float *)(pFVar5 + lVar17 * 0xc) = (float)dVar29;
                *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)dVar3;
                iVar13 = param_1->ArrayNum;
                if (iVar13 == param_1->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar13 + 1;
                lVar17 = (longlong)iVar13;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar17 * 0xc) = (float)(dVar8 + dVar29);
                *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)dVar3;
                *(float *)(pFVar5 + lVar17 * 0xc + 8) = fVar22;
                iVar14 = param_1->ArrayNum;
                if (iVar14 == param_1->ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar14 + 1;
                lVar17 = (longlong)iVar14;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar17 * 0xc) = (float)(dVar8 + dVar29);
                *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)(dVar9 + dVar3);
                *(float *)(pFVar5 + lVar17 * 0xc + 8) = fVar22;
                iVar15 = param_1->ArrayNum;
                if (iVar15 == param_1->ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar15 + 1;
                lVar17 = (longlong)iVar15;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar17 * 0xc) = (float)dVar29;
                *(float *)(pFVar5 + lVar17 * 0xc + 4) = (float)(dVar9 + dVar3);
                *(float *)(pFVar5 + lVar17 * 0xc + 8) = fVar22;
                iVar16 = param_2->ArrayNum;
                if (iVar16 == param_2->ArrayMax) {
                  iVar16 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar17 = (longlong)iVar16;
                param_2->ArrayNum = iVar16 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar17 * 0xc) = iVar12;
                *(int *)(pFVar5 + lVar17 * 0xc + 4) = iVar13;
                *(int *)(pFVar5 + lVar17 * 0xc + 8) = iVar14;
                iVar13 = param_2->ArrayNum;
                if (iVar13 == param_2->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar17 = (longlong)iVar13;
                param_2->ArrayNum = iVar13 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar17 * 0xc) = iVar14;
                *(int *)(pFVar5 + lVar17 * 0xc + 4) = iVar15;
                *(int *)(pFVar5 + lVar17 * 0xc + 8) = iVar12;
              }
              iStackX_8 = iStackX_8 + 1;
              uVar21 = (undefined4)__real_3ff0000000000000;
              uVar23 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              uVar24 = (undefined4)__real_bff0000000000000;
              uVar25 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
            } while (iStackX_8 < iVar4 + -1);
          }
          iStackX_20 = iStackX_20 + 1;
        } while (iStackX_20 < iStack_10c + -1);
      }
      iStack_134 = iStack_134 + 1;
    } while (iStack_134 < iStack_110 + -1);
  }
  return;
}

// GridResolution @ 14770b6a0

TIntVector3<int> * __thiscall
FKLevelSetElem::GridResolution(FKLevelSetElem *this,TIntVector3<int> *__return_storage_ptr__)

{
  FLevelSet *pFVar1;
  
  pFVar1 = (this->LevelSet).Object;
  if (pFVar1 != (FLevelSet *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(int *)&(pFVar1->MGrid).field_0x30;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = *(int *)&(pFVar1->MGrid).field_0x34;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = *(int *)&(pFVar1->MGrid).field_0x38;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0;
  return __return_storage_ptr__;
}

// Serialize @ 147726500

bool __thiscall FKLevelSetElem::Serialize(FKLevelSetElem *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  FLevelSet *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLevelSet *local_18;
  FSharedReferencer<1> local_10;
  
  UE::Math::operator<<(param_1,&this->Transform);
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar3 = ::operator_new(0x120);
    if (pFVar3 == (FLevelSet *)0x0) {
      pFVar3 = (FLevelSet *)0x0;
    }
    else {
      Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)pFVar3,2,'\x06');
      pFVar3->_padding_ = (longlong)&___7FLevelSet_Chaos__6B_;
      *(undefined8 *)&(pFVar3->MPhi).field_0x18 = 0;
      *(undefined8 *)&(pFVar3->MPhi).field_0x10 = 0;
      *(undefined8 *)&pFVar3->MPhi = 0;
      *(undefined4 *)&(pFVar3->MPhi).field_0x8 = 0;
      *(undefined8 *)&(pFVar3->MNormals).field_0x18 = 0;
      *(undefined8 *)&(pFVar3->MNormals).field_0x10 = 0;
      *(undefined8 *)&pFVar3->MNormals = 0;
      *(undefined4 *)&(pFVar3->MNormals).field_0x8 = 0;
      *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMin = 0x7fefffffffffffff;
      *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
      *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
      *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMax = 0xffefffffffffffff;
      *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
      *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
      *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMin = 0x7fefffffffffffff;
      *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
      *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
      *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMax.field_0x0 = 0xffefffffffffffff;
      *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
      *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
    }
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_18 = pFVar3;
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFLevelSet_Chaos__U__DefaultDeleter_VFLevelSet_Chaos___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4[1]._padding_ = (longlong)pFVar3;
      pTVar5 = pTVar4;
    }
    local_10.ReferenceController = pTVar5;
    if (&this->LevelSet != (TSharedPtr<Chaos::FLevelSet,1> *)&local_18) {
      (this->LevelSet).Object = pFVar3;
      local_18 = (FLevelSet *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LevelSet).SharedReferenceCount,&local_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
  }
  pFVar3 = (this->LevelSet).Object;
  if (pFVar3 != (FLevelSet *)0x0) {
    Chaos::FImplicitObject::SerializeImp((FImplicitObject *)pFVar3,param_1);
    Chaos::SerializeReal<double,3>(param_1,(TVector<double,3> *)&pFVar3->MGrid);
    Chaos::SerializeReal<double,3>(param_1,(TVector<double,3> *)&(pFVar3->MGrid).field_0x18);
    Chaos::operator<<<int,3>(param_1,(TVector<int,3> *)&(pFVar3->MGrid).field_0x30);
    Chaos::SerializeReal<double,3>(param_1,(TVector<double,3> *)&(pFVar3->MGrid).field_0x40);
    Chaos::operator<<<Chaos::TArrayND<double,3>_double_3>
              (param_1,(TArrayNDBase<Chaos::TArrayND<double,3>,double,3> *)&pFVar3->MPhi);
    Chaos::operator<<<Chaos::TArrayND<Chaos::TVector<double,3>,3>,Chaos::TVector<double,3>_3>
              (param_1,(TArrayNDBase<Chaos::TArrayND<Chaos::TVector<double,3>,3>,Chaos::TVector<double,3>,3>
                        *)&pFVar3->MNormals);
    Chaos::TBox<double,3>::SerializeAsAABB(param_1,&pFVar3->MLocalBoundingBox);
    Chaos::TBox<double,3>::SerializeAsAABB(param_1,&pFVar3->MOriginalLocalBoundingBox);
    piVar2 = &pFVar3->MBandWidth;
    piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
    if (piVar1 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      *piVar2 = *piVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      return true;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
      return true;
    }
    FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
  }
  return true;
}

// UntransformedAABB @ 147731150

TBox<double> * __thiscall
FKLevelSetElem::UntransformedAABB(FKLevelSetElem *this,TBox<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  FLevelSet *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined7 uStack_17;
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  pFVar2 = (this->LevelSet).Object;
  if (pFVar2 != (FLevelSet *)0x0) {
    uVar3 = *(undefined4 *)&(pFVar2->MLocalBoundingBox).MMin.field_0x10;
    uVar4 = *(undefined4 *)&(pFVar2->MLocalBoundingBox).MMin.field_0x14;
    uVar5 = *(undefined8 *)&(pFVar2->MLocalBoundingBox).MMax;
    uVar6 = *(undefined8 *)&(pFVar2->MLocalBoundingBox).MMax.field_0x8;
    dVar7 = *(double *)&(pFVar2->MLocalBoundingBox).MMin.field_0x8;
    uVar1 = *(undefined8 *)&(pFVar2->MLocalBoundingBox).MMax.field_0x10;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = *(double *)&(pFVar2->MLocalBoundingBox).MMin;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar7;
    local_30 = (undefined4)uVar5;
    uStack_2c = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_28 = (undefined4)uVar6;
    uStack_24 = (undefined4)((ulonglong)uVar6 >> 0x20);
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = uVar3;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x14) = uVar4;
    *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = local_30;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uStack_2c;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uStack_28;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uStack_24;
    *(int *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = (int)uVar1;
    *(int *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x14) =
         (int)((ulonglong)uVar1 >> 0x20);
    __return_storage_ptr__->IsValid = 1;
    __return_storage_ptr__->Pad[0] = (char)uStack_17;
    __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_17 >> 8);
    __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_17 >> 0x10);
    __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_17 >> 0x18);
    __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_17 >> 0x20);
    __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_17 >> 0x28);
    __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_17 >> 0x30);
  }
  return __return_storage_ptr__;
}

// FKLevelSetElem @ 14824f320

FKLevelSetElem * __thiscall
FKLevelSetElem::FKLevelSetElem(FKLevelSetElem *this,FKLevelSetElem *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FLevelSet *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TReferenceControllerBase<1> *pTVar6;
  double dVar7;
  longlong lVar8;
  
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 9;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 3;
  *(undefined4 *)&this->_padding_ = 6;
  this->_padding_ = (longlong)this;
  this->_padding_ = (longlong)&___7FKLevelSetElem__6B_;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar3;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar3;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar4;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  (this->LevelSet).Object = (FLevelSet *)0x0;
  (this->LevelSet).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  lVar8 = this->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(byte *)&this->_padding_ = (byte)this->_padding_ ^ ((byte)lVar8 ^ (byte)param_1->_padding_) & 1;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  pTVar1 = (param_1->LevelSet).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->LevelSet).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->LevelSet).SharedReferenceCount.ReferenceController;
  (this->LevelSet).Object = pFVar2;
  (this->LevelSet).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  dVar7 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar7;
  return this;
}

// CloneElem @ 14826e090

void __thiscall FKLevelSetElem::CloneElem(FKLevelSetElem *this,FKLevelSetElem *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FLevelSet *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  double dVar4;
  longlong lVar5;
  
  lVar5 = this->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(byte *)&this->_padding_ = (byte)this->_padding_ ^ ((byte)lVar5 ^ (byte)param_1->_padding_) & 1;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  pTVar1 = (param_1->LevelSet).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->LevelSet).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->LevelSet).SharedReferenceCount.ReferenceController;
  (this->LevelSet).Object = pFVar2;
  (this->LevelSet).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  dVar4 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar4;
  return;
}

// ScaleElem @ 1482a83f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FKLevelSetElem::ScaleElem(FKLevelSetElem *this,TVector<double> *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined4 in_EAX;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  double dVar28;
  uint uVar33;
  double dVar29;
  double dVar30;
  uint uVar34;
  uint uVar36;
  double dVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar37;
  uint uVar38;
  
  dVar13 = (this->Transform).Scale3D.XY.m128d_f64[0] + (param_1->field0_0x0)._s_0.X;
  uVar14 = *(uint *)(this->Transform).Translation.XY.m128d_f64;
  uVar15 = *(uint *)((longlong)(this->Transform).Translation.XY.m128d_f64 + 4);
  uVar16 = *(uint *)((this->Transform).Translation.XY.m128d_f64 + 1);
  uVar17 = *(uint *)((longlong)(this->Transform).Translation.XY.m128d_f64 + 0xc);
  dVar12 = (this->Transform).Scale3D.ZW.m128d_f64[0] + (param_1->field0_0x0)._s_0.Z;
  uVar18 = *(uint *)(this->Transform).Translation.ZW.m128d_f64;
  uVar19 = *(uint *)((longlong)(this->Transform).Translation.ZW.m128d_f64 + 4);
  uVar20 = *(uint *)((this->Transform).Translation.ZW.m128d_f64 + 1);
  uVar21 = *(uint *)((longlong)(this->Transform).Translation.ZW.m128d_f64 + 0xc);
  dVar28 = (this->Transform).Scale3D.XY.m128d_f64[1] + (param_1->field0_0x0)._s_0.Y;
  auVar1 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
  auVar2 = *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64;
  uVar37 = SUB84(dVar28,0);
  uVar38 = (uint)((ulonglong)dVar28 >> 0x20);
  uVar27 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar33 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  uVar34 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar36 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar28 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar29 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  lVar25 = -(ulonglong)((double)CONCAT44(uVar36 & auVar2._12_4_,uVar34 & auVar2._8_4_) == dVar29);
  auVar4._8_4_ = (int)lVar25;
  auVar4._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar33 & auVar2._4_4_,uVar27 & auVar2._0_4_) == dVar28);
  auVar4._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
  uVar24 = movmskpd((int)this,auVar4);
  lVar25 = -(ulonglong)((double)CONCAT44(uVar36 & auVar1._12_4_,uVar34 & auVar1._8_4_) == dVar29);
  auVar8._8_4_ = (int)lVar25;
  auVar8._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar33 & auVar1._4_4_,uVar27 & auVar1._0_4_) == dVar28);
  auVar8._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
  iVar23 = movmskpd(in_EAX,auVar8);
  if ((uVar24 & 0x3fffffff) == 0 && iVar23 == 0) {
    lVar25 = -(ulonglong)((double)CONCAT44(uVar36 & uVar21,uVar34 & uVar20) == dVar29);
    auVar5._8_4_ = (int)lVar25;
    auVar5._0_8_ = -(ulonglong)((double)CONCAT44(uVar33 & uVar19,uVar27 & uVar18) == dVar28);
    auVar5._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
    uVar24 = movmskpd(0,auVar5);
    lVar25 = -(ulonglong)((double)CONCAT44(uVar36 & uVar17,uVar34 & uVar16) == dVar29);
    auVar9._8_4_ = (int)lVar25;
    auVar9._0_8_ = -(ulonglong)((double)CONCAT44(uVar33 & uVar15,uVar27 & uVar14) == dVar28);
    auVar9._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
    iVar23 = movmskpd(iVar23,auVar9);
    if ((uVar24 & 0x3fffffff) == 0 && iVar23 == 0) {
      auVar6._8_4_ = (int)-(ulonglong)(dVar29 == 0.0);
      auVar6._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar33 & (uint)((ulonglong)dVar12 >> 0x20),
                                        uVar27 & SUB84(dVar12,0)) == dVar28);
      auVar6._12_4_ = (int)(-(ulonglong)(dVar29 == 0.0) >> 0x20);
      uVar24 = movmskpd(0,auVar6);
      lVar25 = -(ulonglong)((double)CONCAT44(uVar36 & uVar38,uVar34 & uVar37) == dVar29);
      auVar10._8_4_ = (int)lVar25;
      auVar10._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(uVar33 & (uint)((ulonglong)dVar13 >> 0x20),uVar27 & SUB84(dVar13,0))
            == dVar28);
      auVar10._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      iVar23 = movmskpd(iVar23,auVar10);
      if ((uVar24 & 0x3fffffff) == 0 && iVar23 == 0) {
        dVar28 = auVar2._0_8_ * auVar2._0_8_ + auVar1._0_8_ * auVar1._0_8_;
        dVar29 = auVar2._8_8_ * auVar2._8_8_ + auVar1._8_8_ * auVar1._8_8_;
        dVar30 = dVar29 + dVar28;
        dVar28 = dVar28 + dVar29;
        dVar29 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar30;
        dVar35 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar28;
        auVar31._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar31._8_4_ = SUB84(dVar35,0) & _UNK_15061cc88;
        auVar31._12_4_ = (uint)((ulonglong)dVar35 >> 0x20) & _UNK_15061cc8c;
        lVar25 = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] < auVar31._8_8_);
        dVar30 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar30;
        dVar28 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar28;
        auVar32._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar32._8_4_ = SUB84(dVar28,0) & _UNK_15061cc88;
        auVar32._12_4_ = (uint)((ulonglong)dVar28 >> 0x20) & _UNK_15061cc8c;
        lVar26 = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] < auVar32._8_8_);
        auVar11._8_4_ = (int)lVar25;
        auVar11._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] < auVar31._0_8_);
        auVar11._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar24 = movmskpd(0,auVar11);
        auVar7._8_4_ = (int)lVar26;
        auVar7._0_8_ = -(ulonglong)
                        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                        auVar32._0_8_);
        auVar7._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
        iVar23 = movmskpd(iVar23,auVar7);
        if ((uVar24 & 0x3fffffff) == 0 && iVar23 == 0) goto LAB_1482a85a9;
      }
    }
  }
  bVar22 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_6321464880662577106>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\LevelSetElem.h"
                      ,0x2e,"InTransform.IsValid()");
  if (bVar22) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1482a85a9:
  *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64 = auVar1;
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar2;
  *(uint *)(this->Transform).Translation.XY.m128d_f64 = uVar14;
  *(uint *)((longlong)(this->Transform).Translation.XY.m128d_f64 + 4) = uVar15;
  *(uint *)((this->Transform).Translation.XY.m128d_f64 + 1) = uVar16;
  *(uint *)((longlong)(this->Transform).Translation.XY.m128d_f64 + 0xc) = uVar17;
  *(uint *)(this->Transform).Translation.ZW.m128d_f64 = uVar18;
  *(uint *)((longlong)(this->Transform).Translation.ZW.m128d_f64 + 4) = uVar19;
  *(uint *)((this->Transform).Translation.ZW.m128d_f64 + 1) = uVar20;
  *(uint *)((longlong)(this->Transform).Translation.ZW.m128d_f64 + 0xc) = uVar21;
  auVar1._8_4_ = uVar37;
  auVar1._0_8_ = dVar13;
  auVar1._12_4_ = uVar38;
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = dVar12;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
  return;
}

// DrawElemSolid @ 1482f78a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKLevelSetElem::DrawElemSolid
          (FKLevelSetElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          float param_3,FMaterialRenderProxy *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TMatrix<double> *pTVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_178 [32];
  undefined1 local_138 [8];
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_130;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_120;
  TVector<float>_u_0 local_110;
  TVector<float>_u_0 local_104;
  FDynamicMeshBuilder local_f8;
  TVector<float>_u_0 local_c8;
  TVector2<float>_u_0 local_bc;
  TVector2<float>_u_0 local_b4;
  TVector2<float>_u_0 local_ac;
  TVector2<float>_u_0 local_a4;
  TVector2<float>_u_0 local_9c;
  TVector2<float>_u_0 local_94;
  TVector2<float>_u_0 local_8c;
  TVector2<float>_u_0 local_84;
  FPackedNormal local_7c;
  FPackedNormal local_78;
  undefined4 local_74;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  GetZeroIsosurfaceGridCellFaces(this,&local_120,&local_130);
  FDynamicMeshBuilder::FDynamicMeshBuilder
            (&local_f8,param_1->View->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
  iVar2 = local_120.ArrayNum;
  uVar4 = (ulonglong)local_120.ArrayNum;
  pFVar1 = local_120.AllocatorInstance.Data + uVar4 * 0xc;
  FVar5.Data = local_120.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector<float>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_138);
    }
    if (FVar5.Data == pFVar1) break;
    local_c8._0_8_ = *(undefined8 *)FVar5.Data;
    local_c8._s_0.Z = (float)*(undefined4 *)(FVar5.Data + 8);
    local_110._0_8_ = 0x3f800000;
    local_110._s_0.Z = 0.0;
    FPackedNormal::operator=(&local_7c,(TVector<float> *)&local_110._s_0);
    local_104._0_8_ = 0;
    local_104._s_0.Z = 1.0;
    FPackedNormal::operator=(&local_78,(TVector<float> *)&local_104._s_0);
    local_bc = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_b4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_ac = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_a4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_9c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_94 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_8c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_84 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_74 = 0xffffffff;
    local_78.Vector._s_0.W = '\x7f';
    FDynamicMeshBuilder::AddVertex(&local_f8,(FDynamicMeshVertex *)&local_c8._s_0);
    uVar4 = local_120._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 0xc;
  }
  iVar2 = local_130.ArrayNum;
  uVar4 = (ulonglong)local_130.ArrayNum;
  pFVar1 = local_130.AllocatorInstance.Data + uVar4 * 0xc;
  FVar5.Data = local_130.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<UE::Math::TIntVector3<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_138);
    }
    if (FVar5.Data == pFVar1) break;
    FDynamicMeshBuilder::AddTriangle
              (&local_f8,*(int *)FVar5.Data,*(int *)(FVar5.Data + 4),*(int *)(FVar5.Data + 8));
    uVar4 = local_130._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 0xc;
  }
  pTVar3 = UE::Math::TTransform<double>::ToMatrixWithScale
                     (param_2,(TMatrix<double> *)&local_c8._s_0);
  FDynamicMeshBuilder::Draw
            (&local_f8,param_1,pTVar3,param_4,'\0',false,true,(FHitProxyId)0xffffffff);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_f8);
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  return;
}

// DrawElemWire @ 1482fa430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKLevelSetElem::DrawElemWire
          (FKLevelSetElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          float param_3,FColor param_4)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  bool bVar21;
  int iVar22;
  TIntVector3<int> *pTVar23;
  longlong lVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  TBox<double> *pTVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auStackY_218 [32];
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> local_1c8;
  undefined1 local_1b8 [4];
  FLinearColor_u_0 local_1b4;
  TIntVector3<int> local_1a4;
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  TBox<double> local_118;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  pTVar23 = GridResolution(this,&local_1a4);
  iVar22 = (pTVar23->field0_0x0)._s_0.Y;
  iVar3 = (pTVar23->field0_0x0)._s_0.Z;
  if (iVar22 < (pTVar23->field0_0x0)._s_0.X) {
    iVar22 = (pTVar23->field0_0x0)._s_0.X;
  }
  if (iVar3 < iVar22) {
    iVar3 = iVar22;
  }
  if (iVar3 < 0x1e) {
    GetInteriorGridCells(this,&local_1c8,__real_3f1a36e2e0000000);
  }
  else {
    pTVar27 = UntransformedAABB(this,&local_118);
    if (((local_1c8.AllocatorInstance.Data <= pTVar27) &&
        (pTVar27 < (TBox<double> *)
                   (local_1c8.AllocatorInstance.Data + (longlong)local_1c8.ArrayMax * 0x38))) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar22 = local_1c8.ArrayNum;
    if (local_1c8.ArrayNum == local_1c8.ArrayMax) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&local_1c8.AllocatorInstance,&local_1c8.ArrayMax);
    }
    local_1c8.ArrayNum = iVar22 + 1;
    dVar5 = (pTVar27->Min).field0_0x0._s_0.Y;
    lVar24 = (longlong)iVar22 * 0x38;
    *(double *)&local_1c8.AllocatorInstance.Data[lVar24].field_0x0 =
         (pTVar27->Min).field0_0x0._s_0.X;
    *(double *)(local_1c8.AllocatorInstance.Data + lVar24 + 8) = dVar5;
    dVar5 = (pTVar27->Max).field0_0x0._s_0.X;
    *(double *)(local_1c8.AllocatorInstance.Data + lVar24 + 0x10) = (pTVar27->Min).field0_0x0._s_0.Z
    ;
    *(double *)(local_1c8.AllocatorInstance.Data + lVar24 + 0x10 + 8) = dVar5;
    uVar14 = *(undefined4 *)((longlong)&(pTVar27->Max).field0_0x0 + 0xc);
    uVar15 = *(undefined4 *)((longlong)&(pTVar27->Max).field0_0x0 + 0x10);
    uVar16 = *(undefined4 *)((longlong)&(pTVar27->Max).field0_0x0 + 0x14);
    pFVar1 = local_1c8.AllocatorInstance.Data + lVar24 + 0x20;
    *(undefined4 *)pFVar1 = *(undefined4 *)((longlong)&(pTVar27->Max).field0_0x0 + 8);
    *(undefined4 *)(pFVar1 + 4) = uVar14;
    *(undefined4 *)(pFVar1 + 8) = uVar15;
    *(undefined4 *)(pFVar1 + 0xc) = uVar16;
    *(undefined8 *)(local_1c8.AllocatorInstance.Data + lVar24 + 0x30) =
         *(undefined8 *)&pTVar27->IsValid;
  }
  (**(code **)(param_1->_padding_ + 0x20))(param_1,0,local_1c8.ArrayNum * 0xc,0);
  fVar20 = __real_3b808081;
  iVar22 = local_1c8.ArrayNum;
  uVar25 = (ulonglong)local_1c8.ArrayNum;
  pTVar27 = (TBox<double> *)(local_1c8.AllocatorInstance.Data + uVar25 * 0x38);
  FVar26.Data = local_1c8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar25 != iVar22) {
      `TCheckedPointerIterator<UE::Math::TBox<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1b8);
    }
    if ((TBox<double> *)FVar26.Data == pTVar27) break;
    dVar10 = (param_2->Rotation).XY.m128d_f64[0];
    auVar2 = *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64;
    local_1b4._s_0.R = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.R];
    local_1b4._s_0.G = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.G];
    local_1b4._s_0.B = FLinearColor::sRGBToLinearTable[(uint)param_4.field0_0x0 & 0xff];
    dVar5 = (param_2->Rotation).XY.m128d_f64[0];
    dVar17 = (param_2->Rotation).XY.m128d_f64[1];
    local_1b4._s_0.A = (float)((uint)param_4.field0_0x0 >> 0x18) * fVar20;
    dVar12 = dVar17 + dVar17;
    dVar18 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar19 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar9 = dVar5 * (dVar5 + dVar5);
    dVar28 = dVar18 + dVar18;
    auVar29 = blendpd(auVar2,*(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64,2);
    dVar6 = dVar12 * dVar10;
    dVar7 = dVar28 * (param_2->Rotation).XY.m128d_f64[1];
    dVar11 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - (dVar18 * dVar28 + dVar9)) *
             (param_2->Scale3D).XY.m128d_f64[1];
    dVar5 = dVar19 * (dVar5 + dVar5);
    dVar8 = (dVar19 * dVar28 + dVar6) * (param_2->Scale3D).XY.m128d_f64[0];
    local_168 = (dVar5 + dVar7) * (param_2->Scale3D).XY.m128d_f64[1];
    dStack_150 = (param_2->Scale3D).ZW.m128d_f64[0] * (dVar7 - dVar5);
    dVar10 = dVar10 * dVar28;
    local_148 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar9 + dVar17 * dVar12)) *
                (param_2->Scale3D).ZW.m128d_f64[0];
    local_158 = (dVar12 * dVar19 + dVar10) * (param_2->Scale3D).ZW.m128d_f64[0];
    local_188 = auVar29._0_8_ * (dVar10 - dVar12 * dVar19);
    auVar13._4_8_ = dStack_150;
    auVar13._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar29._0_8_ = auVar13._0_8_ << 0x20;
    auVar29._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar29._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    local_128 = (param_2->Translation).ZW.m128d_f64[0];
    local_178._8_4_ = SUB84(dVar11,0);
    local_178._0_8_ = auVar2._8_8_ * (dVar6 - dVar19 * dVar28);
    local_178._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    dStack_120 = auVar29._8_8_;
    local_138 = (param_2->Translation).XY.m128d_f64[0];
    dStack_130 = (param_2->Translation).XY.m128d_f64[1];
    local_198._8_4_ = SUB84(dVar8,0);
    local_198._0_8_ =
         (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - (dVar18 * dVar28 + dVar17 * dVar12)) *
         (param_2->Scale3D).XY.m128d_f64[0];
    local_198._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    dStack_180 = 0.0;
    dStack_160 = 0.0;
    dStack_140 = 0.0;
    DrawWireBox(param_1,(TMatrix<double> *)local_198,(TBox<double> *)FVar26.Data,
                (FLinearColor *)&local_1b4._s_0,'\0',0.0,0.0,false);
    uVar25 = local_1c8._8_8_ & 0xffffffff;
    FVar26.Data = FVar26.Data + 0x38;
  }
  if ((TBox<double> *)local_1c8.AllocatorInstance.Data != (TBox<double> *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  return;
}

// GetElemSolid @ 148308db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FKLevelSetElem::GetElemSolid
          (FKLevelSetElem *this,TTransform<double> *param_1,TVector<double> *param_2,
          FMaterialRenderProxy *param_3,int param_4,FMeshElementCollector *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TMatrix<double> *pTVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_178 [32];
  undefined1 local_138 [8];
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_130;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_120;
  TVector<float>_u_0 local_110;
  TVector<float>_u_0 local_104;
  FDynamicMeshBuilder local_f8;
  TVector<float>_u_0 local_c8;
  TVector2<float>_u_0 local_bc;
  TVector2<float>_u_0 local_b4;
  TVector2<float>_u_0 local_ac;
  TVector2<float>_u_0 local_a4;
  TVector2<float>_u_0 local_9c;
  TVector2<float>_u_0 local_94;
  TVector2<float>_u_0 local_8c;
  TVector2<float>_u_0 local_84;
  FPackedNormal local_7c;
  FPackedNormal local_78;
  undefined4 local_74;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  GetZeroIsosurfaceGridCellFaces(this,&local_120,&local_130);
  FDynamicMeshBuilder::FDynamicMeshBuilder
            (&local_f8,param_5->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
  iVar2 = local_120.ArrayNum;
  uVar4 = (ulonglong)local_120.ArrayNum;
  pFVar1 = local_120.AllocatorInstance.Data + uVar4 * 0xc;
  FVar5.Data = local_120.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector<float>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_138);
    }
    if (FVar5.Data == pFVar1) break;
    local_c8._0_8_ = *(undefined8 *)FVar5.Data;
    local_c8._s_0.Z = (float)*(undefined4 *)(FVar5.Data + 8);
    local_110._0_8_ = 0x3f800000;
    local_110._s_0.Z = 0.0;
    FPackedNormal::operator=(&local_7c,(TVector<float> *)&local_110._s_0);
    local_104._0_8_ = 0;
    local_104._s_0.Z = 1.0;
    FPackedNormal::operator=(&local_78,(TVector<float> *)&local_104._s_0);
    local_bc = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_b4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_ac = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_a4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_9c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_94 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_8c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_84 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_74 = 0xffffffff;
    local_78.Vector._s_0.W = '\x7f';
    FDynamicMeshBuilder::AddVertex(&local_f8,(FDynamicMeshVertex *)&local_c8._s_0);
    uVar4 = local_120._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 0xc;
  }
  iVar2 = local_130.ArrayNum;
  uVar4 = (ulonglong)local_130.ArrayNum;
  pFVar1 = local_130.AllocatorInstance.Data + uVar4 * 0xc;
  FVar5.Data = local_130.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<UE::Math::TIntVector3<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_138);
    }
    if (FVar5.Data == pFVar1) break;
    FDynamicMeshBuilder::AddTriangle
              (&local_f8,*(int *)FVar5.Data,*(int *)(FVar5.Data + 4),*(int *)(FVar5.Data + 8));
    uVar4 = local_130._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 0xc;
  }
  pTVar3 = UE::Math::TTransform<double>::ToMatrixWithScale
                     (param_1,(TMatrix<double> *)&local_c8._s_0);
  FDynamicMeshBuilder::GetMesh(&local_f8,pTVar3,param_3,'\0',false,false,param_4,param_5);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_f8);
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  return;
}

