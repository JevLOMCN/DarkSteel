// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// GetTransform @ 147256470

TTransform<double> * __thiscall
FKMLLevelSetElem::GetTransform(FKMLLevelSetElem *this,TTransform<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  return __return_storage_ptr__;
}

// StaticStruct @ 1472eb810

UScriptStruct * __cdecl FKMLLevelSetElem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKMLLevelSetElem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKMLLevelSetElem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKMLLevelSetElem,(UObject *)pUVar1,
                         L"KMLLevelSetElem");
  }
  return Z_Registration_Info_UScriptStruct_FKMLLevelSetElem.OuterSingleton;
}

// BuildMLLevelSet @ 1476f1640

void __thiscall
FKMLLevelSetElem::BuildMLLevelSet(FKMLLevelSetElem *this,FMLLevelSetImportData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UNNEModelData *pUVar7;
  FMLLevelSet *pFVar8;
  FMLLevelSet *pFVar9;
  FMLLevelSet *pFVar10;
  int iVar11;
  FMLLevelSet *local_a8;
  FSharedReferencer<1> local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  pFVar10 = (FMLLevelSet *)0x0;
  uStack_90 = 0;
  local_98 = 0;
  if (((param_1->NNEModelDataArr).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->NNEModelDataArr).AllocatorInstance.Data;
  iVar11 = 0;
  if (*(int *)(pFVar1 + 0x28) == 0) {
    local_88 = L"";
LAB_1476f16dc:
    sVar4 = wcslen(local_88);
    iStack_80 = (int)sVar4;
  }
  else {
    local_88 = *(wchar_t **)(pFVar1 + 0x20);
    iStack_80 = iVar11;
    if (local_88 != (wchar_t *)0x0) goto LAB_1476f16dc;
  }
  pUVar5 = GetTransientPackage();
  pUVar6 = Z_Construct_UClass_UNNEModelData_NoRegister();
  local_48._12_4_ = uStack_7c;
  local_48.Size = iStack_80;
  local_48.DataPtr = local_88;
  local_58.DataPtr = (wchar_t *)0x0;
  local_58.Size = 0;
  local_58._12_4_ = 0;
  pUVar7 = (UNNEModelData *)
           StaticLoadObject(pUVar6,(UObject *)pUVar5,&local_48,&local_58,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UNNEModelData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->NNESignedDistanceModelData).field0_0x0.DebugPtr = pUVar7;
  uStack_70 = 0;
  local_78 = 0;
  if (((param_1->NNEModelDataArr).ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->NNEModelDataArr).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + 0x60) == 0) {
    local_68 = L"";
  }
  else {
    local_68 = *(wchar_t **)(pFVar1 + 0x58);
    if (local_68 == (wchar_t *)0x0) goto LAB_1476f17d0;
  }
  sVar4 = wcslen(local_68);
  iVar11 = (int)sVar4;
LAB_1476f17d0:
  iStack_60 = iVar11;
  pUVar5 = GetTransientPackage();
  pUVar6 = Z_Construct_UClass_UNNEModelData_NoRegister();
  local_28[0]._12_4_ = uStack_5c;
  local_28[0].Size = iStack_60;
  local_28[0].DataPtr = local_68;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_38._12_4_ = 0;
  pUVar7 = (UNNEModelData *)
           StaticLoadObject(pUVar6,(UObject *)pUVar5,local_28,&local_38,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UNNEModelData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->NNEIncorrectZoneModelData).field0_0x0.DebugPtr = pUVar7;
  if (((param_1->NNEModelDataArr).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->NNEModelDataArr).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (this->NNESignedDistanceModelData).field0_0x0.DebugPtr,
     pUVar7 != (UNNEModelData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(TObjectPtr<UNNEModelData>_u_0 *)(pFVar1 + 0x30) = (this->NNESignedDistanceModelData).field0_0x0;
  if (((param_1->NNEModelDataArr).ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->NNEModelDataArr).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (this->NNEIncorrectZoneModelData).field0_0x0.DebugPtr, pUVar7 != (UNNEModelData *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(TObjectPtr<UNNEModelData>_u_0 *)(pFVar1 + 0x68) = (this->NNEIncorrectZoneModelData).field0_0x0;
  pFVar8 = ::operator_new(0x1d8);
  pFVar9 = pFVar10;
  if (pFVar8 != (FMLLevelSet *)0x0) {
    pFVar9 = Chaos::FMLLevelSet::FMLLevelSet(pFVar8,param_1);
  }
  local_a8 = pFVar9;
  pFVar8 = ::operator_new(0x18);
  if (pFVar8 != (FMLLevelSet *)0x0) {
    *(undefined4 *)&pFVar8->_padding_ = 1;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMLLevelSet_Chaos__U__DefaultDeleter_VFMLLevelSet_Chaos___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = 1;
    pFVar8->_padding_ = (longlong)pFVar9;
    pFVar10 = pFVar8;
  }
  local_a0.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  if (&this->MLLevelSet != (TSharedPtr<Chaos::FMLLevelSet,1> *)&local_a8) {
    (this->MLLevelSet).Object = pFVar9;
    local_a8 = (FMLLevelSet *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MLLevelSet).SharedReferenceCount,&local_a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ReferenceController);
  return;
}

// CalcAABB @ 1476f30a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
FKMLLevelSetElem::CalcAABB
          (FKMLLevelSetElem *this,TBox<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  FMLLevelSet *pFVar3;
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
  undefined1 auStack_178 [32];
  TMatrix<double> local_158;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar3 = (this->MLLevelSet).Object;
  if (pFVar3 == (FMLLevelSet *)0x0) {
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
    dVar1 = *(double *)&(pFVar3->LocalBoundingBox).MMin.field_0x10;
    dVar2 = *(double *)&(pFVar3->LocalBoundingBox).MMax.field_0x10;
    local_158.M[2][2] = (param_2->field0_0x0)._s_0.Z;
    dVar9 = *(double *)&(pFVar3->LocalBoundingBox).MMin;
    dVar21 = *(double *)&(pFVar3->LocalBoundingBox).MMin.field_0x8;
    dVar11 = *(double *)&(pFVar3->LocalBoundingBox).MMax;
    dVar4 = *(double *)&(pFVar3->LocalBoundingBox).MMax.field_0x8;
    local_158.M[2][3] = 0.0;
    local_158.M[0][0] = UE::Math::TQuat<double>::Identity.X;
    local_158.M[0][1] = UE::Math::TQuat<double>::Identity.Y;
    local_158.M[2][0] = (param_2->field0_0x0)._s_0.X;
    local_158.M[2][1] = (param_2->field0_0x0)._s_0.Y;
    local_158.M[1][0]._0_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
    local_158.M[1][0]._4_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_158.M[1][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_158.M[1][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_158.M[1][3] = 0.0;
    local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_d8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_d8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_158.M[0][2] = UE::Math::TQuat<double>::Identity.Z;
    local_158.M[0][3] = UE::Math::TQuat<double>::Identity.W;
    UE::Math::TTransform<double>::Multiply(&local_d8,(TTransform<double> *)&local_158,param_1);
    pTVar13 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_d8,&local_158);
    dVar24 = (dVar2 + dVar1) * ___xmm_3fe00000000000003fe0000000000000;
    dVar8 = (dVar2 - dVar1) * ___xmm_3fe00000000000003fe0000000000000;
    dVar6 = (dVar11 + dVar9) * ___xmm_3fe00000000000003fe0000000000000;
    dVar7 = (dVar4 + dVar21) * _UNK_150689678;
    dVar9 = (dVar11 - dVar9) * ___xmm_3fe00000000000003fe0000000000000;
    dVar11 = (dVar4 - dVar21) * _UNK_150689678;
    auVar15._8_4_ = SUB84(dVar6,0);
    auVar15._0_8_ = dVar6;
    auVar15._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    dVar4 = dVar7 * pTVar13->M[1][0] + dVar6 * pTVar13->M[0][0] + dVar24 * pTVar13->M[2][0] +
            pTVar13->M[3][0];
    dVar5 = dVar7 * pTVar13->M[1][1] + auVar15._8_8_ * pTVar13->M[0][1] + dVar24 * pTVar13->M[2][1]
            + pTVar13->M[3][1];
    dVar1 = dVar8 * pTVar13->M[2][0];
    dVar2 = dVar8 * pTVar13->M[2][1];
    dVar8 = dVar8 * pTVar13->M[2][2];
    auVar16._8_4_ = SUB84(dVar9,0);
    auVar16._0_8_ = dVar9;
    auVar16._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    dVar14 = dVar9 * pTVar13->M[0][0];
    dVar20 = auVar16._8_8_ * pTVar13->M[0][1];
    dVar9 = dVar9 * pTVar13->M[0][2];
    dVar10 = dVar11 * pTVar13->M[1][2];
    dVar21 = dVar11 * pTVar13->M[1][0];
    dVar11 = dVar11 * pTVar13->M[1][1];
    dVar6 = dVar7 * pTVar13->M[1][2] + dVar6 * pTVar13->M[0][2] + dVar24 * pTVar13->M[2][2] +
            pTVar13->M[3][2];
    local_158.M[1][2] = (double)CONCAT71(local_158.M[1][2]._1_7_,1);
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
    local_158.M[0][3]._0_4_ = SUB84(dVar1,0);
    local_158.M[0][3]._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
    auVar12._4_8_ = dVar21;
    auVar12._0_4_ = local_158.M[0][2]._4_4_;
    auVar19._0_8_ = auVar12._0_8_ << 0x20;
    auVar19._8_4_ = local_158.M[0][3]._0_4_;
    auVar19._12_4_ = local_158.M[0][3]._4_4_;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar9;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = auVar19._8_8_;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2 + dVar5;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar9 + dVar6;
    *(double *)&__return_storage_ptr__->IsValid = local_158.M[1][2];
  }
  return __return_storage_ptr__;
}

// GetInteriorGridCells @ 1477078e0

void __thiscall
FKMLLevelSetElem::GetInteriorGridCells
          (FKMLLevelSetElem *this,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_1,double param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FMLLevelSet *pFVar6;
  FMLLevelSet *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  
  pFVar6 = (this->MLLevelSet).Object;
  if (pFVar6 != (FMLLevelSet *)0x0) {
    uVar1 = *(undefined8 *)&(pFVar6->DebugGrid).field_0x30;
    iVar5 = *(int *)&(pFVar6->DebugGrid).field_0x38;
    iVar20 = 0;
    local_f0 = (int)uVar1;
    if (0 < local_f0) {
      iStack_ec = (int)((ulonglong)uVar1 >> 0x20);
      do {
        iVar18 = 0;
        if (0 < iStack_ec) {
          do {
            iVar19 = 0;
            if (0 < iVar5) {
              do {
                if (((this->MLLevelSet).Object == (FMLLevelSet *)0x0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar7 = (this->MLLevelSet).Object;
                uVar17 = (iVar20 * *(int *)&(pFVar7->DebugPhi).field_0x4 + iVar18) *
                         *(int *)&(pFVar7->DebugPhi).field_0x8 + iVar19;
                uVar14 = 0;
                if ((int)uVar17 < *(int *)&(pFVar7->DebugPhi).field_0x18) {
                  uVar14 = ~uVar17 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (*(double *)
                     (*(longlong *)&(pFVar7->DebugPhi).field_0x10 + (longlong)(int)uVar17 * 8) <=
                    param_2) {
                  iVar15 = param_1->ArrayNum;
                  dVar2 = *(double *)&(pFVar6->DebugGrid).field_0x50;
                  dVar3 = *(double *)&(pFVar6->DebugGrid).field_0x48;
                  dVar4 = *(double *)&(pFVar6->DebugGrid).field_0x40;
                  dVar23 = (double)iVar19 * dVar2 + *(double *)&(pFVar6->DebugGrid).field_0x10;
                  dVar2 = dVar23 + dVar2;
                  dVar22 = (double)iVar18 * dVar3 + *(double *)&(pFVar6->DebugGrid).field_0x8;
                  dVar21 = (double)iVar20 * dVar4 + *(double *)&pFVar6->DebugGrid;
                  dVar4 = dVar4 + dVar21;
                  if (iVar15 == param_1->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar15 + 1;
                  lVar16 = (longlong)iVar15 * 0x38;
                  pFVar8 = (param_1->AllocatorInstance).Data;
                  auVar10._8_4_ = SUB84(dVar22,0);
                  auVar10._0_8_ = dVar21;
                  auVar10._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
                  *(undefined1 (*) [16])(pFVar8 + lVar16) = auVar10;
                  auVar12._8_4_ = SUB84(dVar4,0);
                  auVar12._0_8_ = dVar23;
                  auVar12._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
                  *(undefined1 (*) [16])(pFVar8 + lVar16 + 0x10) = auVar12;
                  auVar11._8_4_ = SUB84(dVar2,0);
                  auVar11._0_8_ = dVar3 + dVar22;
                  auVar11._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
                  *(undefined1 (*) [16])(pFVar8 + lVar16 + 0x20) = auVar11;
                  *(ulonglong *)(pFVar8 + lVar16 + 0x30) = CONCAT71(uStack_af,1);
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 < iVar5);
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

// GetZeroIsosurfaceGridCellFaces @ 14770b320

void __thiscall
FKMLLevelSetElem::GetZeroIsosurfaceGridCellFaces
          (FKMLLevelSetElem *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FMLLevelSet *pFVar6;
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
  
  pFVar6 = (this->MLLevelSet).Object;
  if (pFVar6 == (FMLLevelSet *)0x0) {
    return;
  }
  uVar1 = *(undefined8 *)&(pFVar6->DebugGrid).field_0x30;
  dVar2 = *(double *)&(pFVar6->DebugGrid).field_0x50;
  iVar4 = *(int *)&(pFVar6->DebugGrid).field_0x38;
  iStack_110 = (int)uVar1;
  dVar8 = *(double *)&(pFVar6->DebugGrid).field_0x40;
  dVar9 = *(double *)&(pFVar6->DebugGrid).field_0x48;
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
              uVar18 = (iStack_134 * *(int *)&(pFVar6->DebugPhi).field_0x4 + iStackX_20) *
                       *(int *)&(pFVar6->DebugPhi).field_0x8 + iStackX_8;
              uVar11 = 0;
              if ((int)uVar18 < *(int *)&(pFVar6->DebugPhi).field_0x18) {
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
                       (*(longlong *)&(pFVar6->DebugPhi).field_0x10 + (longlong)(int)uVar18 * 8);
              uVar30 = uVar21;
              uVar31 = uVar23;
              if ((dVar3 <= 0.0) && (uVar30 = uVar24, uVar31 = uVar25, 0.0 <= dVar3)) {
                uVar30 = 0;
                uVar31 = 0;
              }
              uVar18 = ((iStack_134 + 1) * *(int *)&(pFVar6->DebugPhi).field_0x4 + iStackX_20) *
                       *(int *)&(pFVar6->DebugPhi).field_0x8 + iStackX_8;
              uVar11 = 0;
              if ((int)uVar18 < *(int *)&(pFVar6->DebugPhi).field_0x18) {
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
                       (*(longlong *)&(pFVar6->DebugPhi).field_0x10 + (longlong)(int)uVar18 * 8);
              uVar19 = uVar21;
              uVar20 = uVar23;
              if ((dVar3 <= 0.0) && (uVar19 = uVar24, uVar20 = uVar25, 0.0 <= dVar3)) {
                uVar19 = 0;
                uVar20 = 0;
              }
              uVar18 = (iStack_134 * *(int *)&(pFVar6->DebugPhi).field_0x4 + 1 + iStackX_20) *
                       *(int *)&(pFVar6->DebugPhi).field_0x8 + iStackX_8;
              uVar11 = 0;
              if ((int)uVar18 < *(int *)&(pFVar6->DebugPhi).field_0x18) {
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
                       (*(longlong *)&(pFVar6->DebugPhi).field_0x10 + (longlong)(int)uVar18 * 8);
              uVar26 = uVar21;
              uVar27 = uVar23;
              if ((dVar3 <= 0.0) && (uVar26 = uVar24, uVar27 = uVar25, 0.0 <= dVar3)) {
                uVar26 = 0;
                uVar27 = 0;
              }
              uVar18 = (iStack_134 * *(int *)&(pFVar6->DebugPhi).field_0x4 + iStackX_20) *
                       *(int *)&(pFVar6->DebugPhi).field_0x8 + 1 + iStackX_8;
              uVar11 = 0;
              if ((int)uVar18 < *(int *)&(pFVar6->DebugPhi).field_0x18) {
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
                       (*(longlong *)&(pFVar6->DebugPhi).field_0x10 + (longlong)(int)uVar18 * 8);
              if ((dVar3 <= 0.0) && (uVar21 = uVar24, uVar23 = uVar25, 0.0 <= dVar3)) {
                uVar21 = 0;
                uVar23 = 0;
              }
              bVar10 = (double)CONCAT44(uVar31,uVar30) < (double)CONCAT44(uVar20,uVar19);
              dVar3 = (double)iStackX_20 * dVar9 + *(double *)&(pFVar6->DebugGrid).field_0x8;
              dVar29 = (double)iStack_134 * dVar8 + *(double *)&pFVar6->DebugGrid;
              dVar28 = (double)iStackX_8 * dVar2 + *(double *)&(pFVar6->DebugGrid).field_0x10;
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

// GridResolution @ 14770b6e0

TIntVector3<int> * __thiscall
FKMLLevelSetElem::GridResolution(FKMLLevelSetElem *this,TIntVector3<int> *__return_storage_ptr__)

{
  FMLLevelSet *pFVar1;
  
  pFVar1 = (this->MLLevelSet).Object;
  if (pFVar1 != (FMLLevelSet *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(int *)&(pFVar1->DebugGrid).field_0x30;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = *(int *)&(pFVar1->DebugGrid).field_0x34;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = *(int *)&(pFVar1->DebugGrid).field_0x38;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0;
  return __return_storage_ptr__;
}

// Serialize @ 147726780

bool __thiscall FKMLLevelSetElem::Serialize(FKMLLevelSetElem *this,FArchive *param_1)

{
  FMLLevelSet *pFVar1;
  UNNEModelData *local_res8;
  UNNEModelData *local_res10;
  FMLLevelSet *local_28;
  FSharedReferencer<1> local_20;
  
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->NNESignedDistanceModelData);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->NNEIncorrectZoneModelData);
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar1 = ::operator_new(0x1d8);
    if (pFVar1 == (FMLLevelSet *)0x0) {
      pFVar1 = (FMLLevelSet *)0x0;
    }
    else {
      local_res8 = (this->NNEIncorrectZoneModelData).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8 != (UNNEModelData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      local_res10 = (this->NNESignedDistanceModelData).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10 != (UNNEModelData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      pFVar1 = Chaos::FMLLevelSet::FMLLevelSet
                         (pFVar1,(TObjectPtr<UNNEModelData>)&local_res10,
                          (TObjectPtr<UNNEModelData>)&local_res8);
    }
    local_28 = pFVar1;
    local_20.ReferenceController = ::operator_new(0x18);
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      (local_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_20.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFMLLevelSet_Chaos__U__DefaultDeleter_VFMLLevelSet_Chaos___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      (local_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      local_20.ReferenceController[1]._padding_ = (longlong)pFVar1;
    }
    if (&this->MLLevelSet != (TSharedPtr<Chaos::FMLLevelSet,1> *)&local_28) {
      (this->MLLevelSet).Object = pFVar1;
      local_28 = (FMLLevelSet *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MLLevelSet).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
  }
  pFVar1 = (this->MLLevelSet).Object;
  if (pFVar1 != (FMLLevelSet *)0x0) {
    Chaos::FMLLevelSet::Serialize(pFVar1,param_1);
  }
  return true;
}

// UntransformedAABB @ 1477311f0

TBox<double> * __thiscall
FKMLLevelSetElem::UntransformedAABB(FKMLLevelSetElem *this,TBox<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  FMLLevelSet *pFVar2;
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
  pFVar2 = (this->MLLevelSet).Object;
  if (pFVar2 != (FMLLevelSet *)0x0) {
    uVar3 = *(undefined4 *)&(pFVar2->LocalBoundingBox).MMin.field_0x10;
    uVar4 = *(undefined4 *)&(pFVar2->LocalBoundingBox).MMin.field_0x14;
    uVar5 = *(undefined8 *)&(pFVar2->LocalBoundingBox).MMax;
    uVar6 = *(undefined8 *)&(pFVar2->LocalBoundingBox).MMax.field_0x8;
    dVar7 = *(double *)&(pFVar2->LocalBoundingBox).MMin.field_0x8;
    uVar1 = *(undefined8 *)&(pFVar2->LocalBoundingBox).MMax.field_0x10;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = *(double *)&(pFVar2->LocalBoundingBox).MMin;
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

// CloneElem @ 14826e150

void __thiscall FKMLLevelSetElem::CloneElem(FKMLLevelSetElem *this,FKMLLevelSetElem *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMLLevelSet *pFVar2;
  UNNEModelData *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
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
  pTVar1 = (param_1->MLLevelSet).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->MLLevelSet).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->MLLevelSet).SharedReferenceCount.ReferenceController;
  (this->MLLevelSet).Object = pFVar2;
  (this->MLLevelSet).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->NNESignedDistanceModelData).field0_0x0.DebugPtr,
     pUVar3 != (UNNEModelData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->NNESignedDistanceModelData).field0_0x0 = (param_1->NNESignedDistanceModelData).field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    pUVar3 = (param_1->NNEIncorrectZoneModelData).field0_0x0.DebugPtr;
    if (pUVar3 == (UNNEModelData *)0x0) {
      (this->NNEIncorrectZoneModelData).field0_0x0.DebugPtr = (UNNEModelData *)0x0;
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->NNEIncorrectZoneModelData).field0_0x0 = (param_1->NNEIncorrectZoneModelData).field0_0x0;
  return;
}

// DrawElemSolid @ 1482f7ab0

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
FKMLLevelSetElem::DrawElemSolid
          (FKMLLevelSetElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
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

// DrawElemWire @ 1482fa920

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
FKMLLevelSetElem::DrawElemWire
          (FKMLLevelSetElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
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

// GetElemSolid @ 148308fc0

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
FKMLLevelSetElem::GetElemSolid
          (FKMLLevelSetElem *this,TTransform<double> *param_1,TVector<double> *param_2,
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

