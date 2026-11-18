// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// VectorAABB @ 143e61fc0

FVectorAABB * __thiscall
Chaos::TTriangleMeshBvEntry<double>::VectorAABB
          (TTriangleMeshBvEntry<double> *this,FVectorAABB *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  FTriangleMesh *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  FVectorAABB *pFVar12;
  TVector<double,3> *pTVar13;
  TVector<double,3> *pTVar14;
  TVector<double,3> *pTVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar2 = this->Index;
  lVar16 = (longlong)(int)uVar2;
  pFVar3 = this->TmData;
  uVar11 = 0;
  if ((int)uVar2 < (pFVar3->MElements).ArrayNum) {
    uVar11 = ~uVar2 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FVectorAABB *)(*pcVar5)();
      return pFVar12;
    }
  }
  pFVar4 = (pFVar3->MElements).AllocatorInstance.Data;
  pTVar13 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[]
                      (this->Points,*(int *)(pFVar4 + lVar16 * 0xc));
  pTVar14 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[]
                      (this->Points,*(int *)(pFVar4 + lVar16 * 0xc + 4));
  pTVar15 = TArrayView<Chaos::TVector<double,3>_const_,int>::operator[]
                      (this->Points,*(int *)(pFVar4 + lVar16 * 0xc + 8));
  dVar6 = *(double *)pTVar13;
  dVar7 = *(double *)&pTVar13->field_0x8;
  (__return_storage_ptr__->Min).ZW.m128d_f64[0] = *(double *)&pTVar13->field_0x10;
  (__return_storage_ptr__->Min).ZW.m128d_f64[1] = 0.0;
  (__return_storage_ptr__->Min).XY.m128d_f64[0] = dVar6;
  (__return_storage_ptr__->Min).XY.m128d_f64[1] = dVar7;
  dVar8 = (__return_storage_ptr__->Min).ZW.m128d_f64[0];
  dVar9 = (__return_storage_ptr__->Min).ZW.m128d_f64[1];
  auVar20 = *(undefined1 (*) [16])(__return_storage_ptr__->Min).ZW.m128d_f64;
  (__return_storage_ptr__->Max).XY.m128d_f64[0] = dVar6;
  (__return_storage_ptr__->Max).XY.m128d_f64[1] = dVar7;
  (__return_storage_ptr__->Max).ZW.m128d_f64[0] = dVar8;
  (__return_storage_ptr__->Max).ZW.m128d_f64[1] = dVar9;
  auVar18 = *(undefined1 (*) [16])pTVar14;
  uVar1 = *(ulonglong *)&pTVar14->field_0x10;
  auVar17 = minpd(*(undefined1 (*) [16])(__return_storage_ptr__->Min).XY.m128d_f64,auVar18);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar1;
  auVar20 = minpd(auVar20,auVar19);
  *(undefined1 (*) [16])(__return_storage_ptr__->Min).XY.m128d_f64 = auVar17;
  *(undefined1 (*) [16])(__return_storage_ptr__->Min).ZW.m128d_f64 = auVar20;
  auVar18 = maxpd(*(undefined1 (*) [16])(__return_storage_ptr__->Max).XY.m128d_f64,auVar18);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar1;
  auVar20 = maxpd(*(undefined1 (*) [16])(__return_storage_ptr__->Max).ZW.m128d_f64,auVar20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Max).XY.m128d_f64 = auVar18;
  *(undefined1 (*) [16])(__return_storage_ptr__->Max).ZW.m128d_f64 = auVar20;
  auVar20 = *(undefined1 (*) [16])pTVar15;
  uVar1 = *(ulonglong *)&pTVar15->field_0x10;
  auVar19 = minpd(*(undefined1 (*) [16])(__return_storage_ptr__->Min).XY.m128d_f64,auVar20);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar1;
  auVar18 = minpd(*(undefined1 (*) [16])(__return_storage_ptr__->Min).ZW.m128d_f64,auVar18);
  *(undefined1 (*) [16])(__return_storage_ptr__->Min).XY.m128d_f64 = auVar19;
  *(undefined1 (*) [16])(__return_storage_ptr__->Min).ZW.m128d_f64 = auVar18;
  auVar20 = maxpd(*(undefined1 (*) [16])(__return_storage_ptr__->Max).XY.m128d_f64,auVar20);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar1;
  auVar18 = maxpd(*(undefined1 (*) [16])(__return_storage_ptr__->Max).ZW.m128d_f64,auVar17);
  *(undefined1 (*) [16])(__return_storage_ptr__->Max).XY.m128d_f64 = auVar20;
  *(undefined1 (*) [16])(__return_storage_ptr__->Max).ZW.m128d_f64 = auVar18;
  return __return_storage_ptr__;
}

