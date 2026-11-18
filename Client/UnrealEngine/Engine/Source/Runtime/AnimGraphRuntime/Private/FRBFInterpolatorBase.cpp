// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// SetUpperKernel @ 14646b3e0

bool __thiscall
FRBFInterpolatorBase::SetUpperKernel
          (FRBFInterpolatorBase *this,TArrayView<float,int> *param_1,int param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  float local_res18 [4];
  PlainObjectBase<Eigen::Matrix<float,_1,_1,0,_1,_1>_> local_78;
  Map<Eigen::Matrix<float,_1,_1,0,_1,_1>,0,Eigen::Stride<0,0>_> local_60;
  
  uVar15 = (ulonglong)(uint)param_2;
  local_res18[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->Coeffs,local_res18,param_2 * param_2);
  lVar14 = (longlong)param_2;
  local_78.m_storage.m_cols = 0;
  local_78.m_storage.m_data = (float *)0x0;
  local_78.m_storage.m_rows = 0;
  if (param_2 != 0) {
    Eigen::PlainObjectBase<Eigen::Matrix<float,-1,-1,0,-1,-1>_>::resize(&local_78,lVar14,lVar14);
  }
  fVar1 = __real_3f800000;
  lVar9 = 0;
  pfVar13 = local_78.m_storage.m_data;
  if (0 < local_78.m_storage.m_cols) {
    do {
      lVar6 = 0;
      pfVar7 = pfVar13;
      if (0 < local_78.m_storage.m_rows) {
        do {
          fVar16 = fVar1;
          if (lVar6 != lVar9) {
            fVar16 = 0.0;
          }
          *pfVar7 = fVar16;
          lVar6 = lVar6 + 1;
          pfVar7 = pfVar7 + 1;
        } while (lVar6 < local_78.m_storage.m_rows);
      }
      lVar9 = lVar9 + 1;
      pfVar13 = pfVar13 + local_78.m_storage.m_rows;
    } while (lVar9 < local_78.m_storage.m_cols);
  }
  uVar10 = 0;
  if (0 < param_2) {
    lVar6 = 0;
    lVar9 = 0;
    do {
      if (lVar9 < lVar14) {
        lVar11 = lVar6 * 4;
        lVar12 = lVar9;
        do {
          uVar5 = 0;
          if ((int)uVar10 < param_1->ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          fVar1 = *(float *)((longlong)param_1->DataPtr + lVar11);
          uVar10 = uVar10 + 1;
          lVar6 = lVar6 + 1;
          lVar11 = lVar11 + 4;
          local_78.m_storage.m_data[lVar9 * local_78.m_storage.m_rows + lVar12] = fVar1;
          lVar8 = lVar12 * local_78.m_storage.m_rows;
          lVar12 = lVar12 + 1;
          local_78.m_storage.m_data[lVar8 + lVar9] = fVar1;
        } while (lVar12 < lVar14);
      }
      lVar9 = lVar9 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  local_60._padding_ = (longlong)(this->Coeffs).AllocatorInstance.Data;
  local_60._padding_ = lVar14;
  local_60._padding_ = lVar14;
  fVar16 = Eigen::internal::determinant_impl<Eigen::Matrix<float,-1,-1,0,-1,-1>,-1>::run
                     ((Matrix<float,_1,_1,0,_1,_1> *)&local_78);
  fVar1 = __real_322bcc77;
  fVar16 = (float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (__real_322bcc77 < fVar16) {
    Eigen::internal::
    compute_inverse<Eigen::Matrix<float,-1,-1,0,-1,-1>,Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>,0,Eigen::Stride<0,0>_>,-1>
    ::run((Matrix<float,_1,_1,0,_1,_1> *)&local_78,&local_60);
  }
  FMemory_Free(local_78.m_storage.m_data);
  return fVar1 < fVar16;
}

