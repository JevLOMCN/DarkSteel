// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FillData @ 144c40da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FLumenHeightfieldGPUData::FillData
          (FLumenHeightfield *param_1,TSparseSpanArray<FLumenMeshCards> *param_2,
          TVector4<float> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  TVector<double>_u_0 local_c8;
  double local_b0;
  double local_a8;
  double local_a0;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStack_128;
  fVar1 = (float)param_1->MeshCardsIndex;
  local_f8 = 0.0;
  fStack_f4 = 0.0;
  fStack_f0 = 0.0;
  fStack_ec = 0.0;
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar5 = -NAN;
  if (-1 < (int)fVar1) {
    iVar2 = (param_2->Elements).ArrayNum;
    uVar6 = 0;
    if ((int)fVar1 < iVar2) {
      uVar6 = ~(uint)fVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      local_108 = (longlong)(int)fVar1;
      local_100 = (longlong)iVar2;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar7 = (param_2->Elements).AllocatorInstance.Data + (longlong)(int)fVar1 * 400;
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)(pFVar7 + 0x110),(TBox<double> *)&local_c8._s_0,
               (TMatrix<double> *)pFVar7);
    dVar8 = (local_b0 + local_c8._s_0.X) * __real_3fe0000000000000;
    dVar9 = (local_a8 + local_c8._s_0.Y) * __real_3fe0000000000000;
    local_f8 = (float)dVar8;
    fStack_f4 = (float)dVar9;
    dVar10 = (local_a0 + local_c8._s_0.Z) * __real_3fe0000000000000;
    fStack_f0 = (float)dVar10;
    fStack_ec = (float)(dVar8 - (double)local_f8);
    fStack_e4 = (float)(dVar10 - (double)fStack_f0);
    fStack_e8 = (float)(dVar9 - (double)fStack_f4);
    uVar11 = (undefined4)((local_b0 - local_c8._s_0.X) * __real_3fe0000000000000);
    uVar12 = (undefined4)((local_a8 - local_c8._s_0.Y) * __real_3fe0000000000000);
    uVar13 = (undefined4)((local_a0 - local_c8._s_0.Z) * __real_3fe0000000000000);
    fVar5 = fVar1;
  }
  (param_3->field0_0x0)._s_0.X = local_f8;
  (param_3->field0_0x0)._s_0.Y = fStack_f4;
  (param_3->field0_0x0)._s_0.Z = fStack_f0;
  param_3[1].field0_0x0._s_0.X = fStack_ec;
  param_3[1].field0_0x0._s_0.Y = fStack_e8;
  param_3[1].field0_0x0._s_0.Z = fStack_e4;
  param_3[1].field0_0x0._s_0.W = 1.0;
  param_3[2].field0_0x0._s_0.X = (float)uVar11;
  param_3[2].field0_0x0._s_0.Y = (float)uVar12;
  param_3[2].field0_0x0._s_0.Z = (float)uVar13;
  param_3[2].field0_0x0._s_0.W = 1.0;
  (param_3->field0_0x0)._s_0.W = fVar5;
  return;
}

