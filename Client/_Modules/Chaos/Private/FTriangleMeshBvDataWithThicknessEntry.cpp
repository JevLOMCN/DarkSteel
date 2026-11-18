// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// VectorAABB @ 143e62130

FVectorAABB * __thiscall
Chaos::FTriangleMeshBvDataWithThicknessEntry::VectorAABB
          (FTriangleMeshBvDataWithThicknessEntry *this,FVectorAABB *__return_storage_ptr__)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FTriangleMesh *pFVar5;
  FScriptContainerElement *pFVar6;
  FPBDFlatWeightMap *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  uint uVar14;
  FVectorAABB *pFVar15;
  TVector<float,3> *pTVar16;
  TVector<float,3> *pTVar17;
  TVector<float,3> *pTVar18;
  float *pfVar19;
  longlong lVar20;
  __m128 _Var21;
  __m128 _Var22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  
  uVar25 = this->Index;
  lVar20 = (longlong)(int)uVar25;
  pFVar5 = this->TmData;
  uVar14 = 0;
  if ((int)uVar25 < (pFVar5->MElements).ArrayNum) {
    uVar14 = ~uVar25 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pFVar15 = (FVectorAABB *)(*pcVar8)();
      return pFVar15;
    }
  }
  pFVar6 = (pFVar5->MElements).AllocatorInstance.Data;
  pTVar16 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                      (this->Points,*(int *)(pFVar6 + lVar20 * 0xc));
  pTVar17 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                      (this->Points,*(int *)(pFVar6 + lVar20 * 0xc + 4));
  pTVar18 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                      (this->Points,*(int *)(pFVar6 + lVar20 * 0xc + 8));
  pFVar7 = this->PointThicknesses;
  if (((pFVar7->MapView).MapValues.ArrayNum < 1) ||
     (fVar1 = *(float *)&(pFVar7->MapView).OffsetRange.field_0x4,
     (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar26 = *(float *)&(pFVar7->MapView).OffsetRange;
  }
  else {
    fVar26 = *(float *)&(pFVar7->MapView).OffsetRange;
    pfVar19 = TArrayView<float_const_,int>::operator[]
                        (&(pFVar7->MapView).MapValues,
                         *(int *)(pFVar6 + lVar20 * 0xc) - this->ThicknessMapIndexOffset);
    fVar26 = fVar1 * *pfVar19 + fVar26;
  }
  uVar25 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar1 = *(float *)&pTVar16->field_0x8;
  pFVar7 = this->PointThicknesses;
  iVar2 = *(int *)(pFVar6 + lVar20 * 0xc + 4);
  iVar3 = this->ThicknessMapIndexOffset;
  iVar4 = (pFVar7->MapView).MapValues.ArrayNum;
  fVar23 = (float)*(undefined8 *)pTVar16;
  fVar24 = (float)((ulonglong)*(undefined8 *)pTVar16 >> 0x20);
  _Var21._0_4_ = fVar23 - fVar26;
  _Var21._4_4_ = fVar24 - fVar26;
  _Var21._8_4_ = SUB124(*pTVar16,8) - fVar26;
  _Var21.m128_f32[3] = 0.0;
  __return_storage_ptr__->Min = _Var21;
  _Var22.m128_f32[1] = fVar26 + fVar24;
  _Var22.m128_f32[0] = fVar26 + fVar23;
  _Var22.m128_f32[2] = fVar26 + fVar1;
  _Var22.m128_f32[3] = 0.0;
  __return_storage_ptr__->Max = _Var22;
  if ((iVar4 < 1) ||
     (fVar1 = *(float *)&(pFVar7->MapView).OffsetRange.field_0x4,
     (float)((uint)fVar1 & uVar25) <= __real_38d1b717)) {
    fVar26 = *(float *)&(pFVar7->MapView).OffsetRange;
  }
  else {
    fVar26 = *(float *)&(pFVar7->MapView).OffsetRange;
    pfVar19 = TArrayView<float_const_,int>::operator[](&(pFVar7->MapView).MapValues,iVar2 - iVar3);
    fVar26 = fVar1 * *pfVar19 + fVar26;
    uVar25 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  }
  iVar2 = *(int *)(pFVar6 + lVar20 * 0xc + 8);
  fVar1 = *(float *)&pTVar17->field_0x8;
  pFVar7 = this->PointThicknesses;
  iVar3 = this->ThicknessMapIndexOffset;
  iVar4 = (pFVar7->MapView).MapValues.ArrayNum;
  fVar23 = (float)*(undefined8 *)pTVar17;
  fVar24 = (float)((ulonglong)*(undefined8 *)pTVar17 >> 0x20);
  auVar9._4_4_ = fVar24 - fVar26;
  auVar9._0_4_ = fVar23 - fVar26;
  auVar9._8_4_ = fVar1 - fVar26;
  auVar9._12_4_ = 0;
  _Var22.m128_f32 = (float  [4])minps(__return_storage_ptr__->Min,auVar9);
  __return_storage_ptr__->Min = _Var22;
  auVar11._4_4_ = fVar26 + fVar24;
  auVar11._0_4_ = fVar26 + fVar23;
  auVar11._8_4_ = fVar26 + fVar1;
  auVar11._12_4_ = 0;
  _Var22.m128_f32 = (float  [4])maxps(__return_storage_ptr__->Max,auVar11);
  __return_storage_ptr__->Max = _Var22;
  if ((iVar4 < 1) ||
     (fVar1 = *(float *)&(pFVar7->MapView).OffsetRange.field_0x4,
     (float)((uint)fVar1 & uVar25) <= __real_38d1b717)) {
    fVar26 = *(float *)&(pFVar7->MapView).OffsetRange;
  }
  else {
    fVar26 = *(float *)&(pFVar7->MapView).OffsetRange;
    pfVar19 = TArrayView<float_const_,int>::operator[](&(pFVar7->MapView).MapValues,iVar2 - iVar3);
    fVar26 = fVar1 * *pfVar19 + fVar26;
  }
  fVar1 = *(float *)&pTVar18->field_0x8;
  fVar23 = (float)*(undefined8 *)pTVar18;
  fVar24 = (float)((ulonglong)*(undefined8 *)pTVar18 >> 0x20);
  auVar10._4_4_ = fVar24 - fVar26;
  auVar10._0_4_ = fVar23 - fVar26;
  auVar10._8_4_ = fVar1 - fVar26;
  auVar10._12_4_ = 0;
  _Var22.m128_f32 = (float  [4])minps(__return_storage_ptr__->Min,auVar10);
  __return_storage_ptr__->Min = _Var22;
  auVar12._4_4_ = fVar26 + fVar24;
  auVar12._0_4_ = fVar26 + fVar23;
  auVar12._8_4_ = fVar26 + fVar1;
  auVar12._12_4_ = 0;
  _Var22.m128_f32 = (float  [4])maxps(__return_storage_ptr__->Max,auVar12);
  __return_storage_ptr__->Max = _Var22;
  return __return_storage_ptr__;
}

