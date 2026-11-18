// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// SetVertexTangents @ 145888030

void __thiscall
FStaticMeshVertexBuffer::SetVertexTangents
          (FStaticMeshVertexBuffer *this,uint param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4)

{
  TStaticMeshVertexTangentDatum<FPackedRGBA16N> *this_00;
  uchar *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uchar *puVar5;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  uchar uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  TVector<float>_u_0 local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88 [4];
  
  puVar5 = this->TangentsDataPtr;
  if (this->bUseHighPrecisionTangentBasis == false) {
    puVar1 = puVar5 + (ulonglong)param_1 * 8;
    lVar12 = (**(code **)((longlong)*this->TangentsData + 0x50))();
    if (puVar5 + lVar12 < puVar1 + 8) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                          ,0x145,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (puVar1 < this->TangentsDataPtr) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                          ,0x146,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    fVar17 = __real_42fe0000;
    fVar7 = __real_3f000000;
    uVar2 = *(undefined8 *)&param_2->field0_0x0;
    fVar19 = (float)uVar2;
    fVar15 = (param_2->field0_0x0)._s_0.Z;
    uVar3 = *(undefined8 *)&param_3->field0_0x0;
    fVar16 = fVar19 * __real_42fe0000;
    fVar18 = (param_4->field0_0x0)._s_0.Z;
    uVar4 = *(undefined8 *)&param_4->field0_0x0;
    local_b8._s_0.X = (double)(float)uVar4;
    puVar1[3] = '\x7f';
    local_e8._s_0.Y = (float)((ulonglong)uVar2 >> 0x20);
    uVar8 = local_e8._s_0.Y;
    local_e8._s_0.Y = (float)((ulonglong)uVar4 >> 0x20);
    uVar9 = local_e8._s_0.Y;
    local_b8._s_0.Z = (double)fVar18;
    iVar11 = (int)ROUND(fVar16 + fVar16 + fVar7) >> 1;
    fVar16 = (float)uVar8 * fVar17;
    iVar14 = 0x7f;
    if (iVar11 < 0x7f) {
      iVar14 = iVar11;
    }
    uVar13 = 0x80;
    if (-0x80 < iVar14) {
      uVar13 = (uchar)iVar14;
    }
    *puVar1 = uVar13;
    local_a0._s_0.Y = (double)(float)((ulonglong)uVar3 >> 0x20);
    local_88[0]._0_8_ = (undefined8)fVar19;
    fVar17 = fVar15 * fVar17;
    iVar11 = (int)ROUND(fVar16 + fVar16 + fVar7) >> 1;
    local_88[0]._16_8_ = (undefined8)fVar15;
    iVar14 = 0x7f;
    if (iVar11 < 0x7f) {
      iVar14 = iVar11;
    }
    uVar13 = 0x80;
    if (-0x80 < iVar14) {
      uVar13 = (uchar)iVar14;
    }
    puVar1[1] = uVar13;
    local_b8._s_0.Y = (double)local_e8._s_0.Y;
    iVar11 = (int)ROUND(fVar17 + fVar17 + fVar7) >> 1;
    iVar14 = 0x7f;
    if (iVar11 < 0x7f) {
      iVar14 = iVar11;
    }
    uVar13 = 0x80;
    if (-0x80 < iVar14) {
      uVar13 = (uchar)iVar14;
    }
    puVar1[2] = uVar13;
    local_a0._s_0.X = (double)(float)uVar3;
    local_a0._s_0.Z = (double)(param_3->field0_0x0)._s_0.Z;
    local_88[0]._8_8_ = (undefined8)(float)uVar8;
    local_e8._0_8_ = uVar4;
    fVar15 = GetBasisDeterminantSign
                       ((TVector<double> *)&local_88[0]._s_0,(TVector<double> *)&local_a0._s_0,
                        (TVector<double> *)&local_b8._s_0);
    fVar17 = (float)uVar9 * __real_437e0000;
    fVar18 = fVar18 * __real_437e0000;
    fVar15 = fVar15 * __real_437e0000;
    iVar11 = (int)ROUND((float)uVar4 * __real_437e0000 + fVar7) >> 1;
    iVar14 = 0x7f;
    if (iVar11 < 0x7f) {
      iVar14 = iVar11;
    }
    uVar13 = 0x80;
    if (-0x80 < iVar14) {
      uVar13 = (uchar)iVar14;
    }
    puVar1[4] = uVar13;
    iVar11 = (int)ROUND(fVar17 + fVar7) >> 1;
    iVar14 = 0x7f;
    if (iVar11 < 0x7f) {
      iVar14 = iVar11;
    }
    uVar13 = 0x80;
    if (-0x80 < iVar14) {
      uVar13 = (uchar)iVar14;
    }
    puVar1[5] = uVar13;
    iVar11 = (int)ROUND(fVar18 + fVar7) >> 1;
    iVar14 = 0x7f;
    if (iVar11 < 0x7f) {
      iVar14 = iVar11;
    }
    uVar13 = 0x80;
    if (-0x80 < iVar14) {
      uVar13 = (uchar)iVar14;
    }
    puVar1[6] = uVar13;
    iVar11 = (int)ROUND(fVar15 + fVar7) >> 1;
    iVar14 = 0x7f;
    if (iVar11 < 0x7f) {
      iVar14 = iVar11;
    }
    uVar13 = 0x80;
    if (-0x80 < iVar14) {
      uVar13 = (uchar)iVar14;
    }
    puVar1[7] = uVar13;
  }
  else {
    this_00 = (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar5 + (ulonglong)param_1 * 0x10);
    lVar12 = (**(code **)((longlong)*this->TangentsData + 0x50))();
    if ((TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar5 + lVar12) < this_00 + 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                          ,0x13d,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (this_00 < (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)this->TangentsDataPtr) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                          ,0x13e,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_d8._0_8_ = *(undefined8 *)&param_4->field0_0x0;
    local_d8._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    local_c8._0_8_ = *(undefined8 *)&param_3->field0_0x0;
    local_c8._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    local_e8._0_8_ = *(undefined8 *)&param_2->field0_0x0;
    local_e8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    TStaticMeshVertexTangentDatum<FPackedRGBA16N>::SetTangents
              (this_00,(TVector<float> *)&local_e8._s_0,(TVector<float> *)&local_c8._s_0,
               (TVector<float> *)&local_d8._s_0);
  }
  return;
}

