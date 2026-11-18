// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// HackAddTemporalAAProjectionJitter @ 14dde6a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FViewMatrices::HackAddTemporalAAProjectionJitter(FViewMatrices *this,TVector2<double> *param_1)

{
  double *pdVar1;
  double *pdVar2;
  TMatrix<double> *pTVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  bool bVar7;
  TMatrix<double> *pTVar8;
  undefined1 auStackY_2d8 [32];
  TMatrix<double> local_2a8;
  TMatrix<double> local_228;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pdVar2 = &(this->TemporalAAProjectionJitter).field0_0x0._s_0.Y;
  if ((((this->TemporalAAProjectionJitter).field0_0x0._s_0.X != 0.0) || (*pdVar2 != 0.0)) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6221411092061487706>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                         ,0x25a,
                         "TemporalAAProjectionJitter.X == 0.0f && TemporalAAProjectionJitter.Y == 0.0f"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar5 = __real_3ff0000000000000;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  (this->TemporalAAProjectionJitter).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->TemporalAAProjectionJitter).field0_0x0._s_0.Y = dVar4;
  pdVar1 = (this->ProjectionMatrix).M[3] + 3;
  dVar4 = (this->TemporalAAProjectionJitter).field0_0x0._s_0.X;
  if (dVar5 < *pdVar1 || dVar5 == *pdVar1) {
    dVar5 = (this->ProjectionMatrix).M[3][0];
    (this->ProjectionMatrix).M[3][1] = *pdVar2 + (this->ProjectionMatrix).M[3][1];
    (this->ProjectionMatrix).M[3][0] = dVar4 + dVar5;
  }
  else {
    (this->ProjectionMatrix).M[2][0] = dVar4 + (this->ProjectionMatrix).M[2][0];
    (this->ProjectionMatrix).M[2][1] = *pdVar2 + (this->ProjectionMatrix).M[2][1];
  }
  pTVar3 = &this->InvProjectionMatrix;
  pTVar8 = InvertProjectionMatrix(&local_2a8,&this->ProjectionMatrix);
  dVar4 = pTVar8->M[0][1];
  pTVar3->M[0][0] = pTVar8->M[0][0];
  (this->InvProjectionMatrix).M[0][1] = dVar4;
  dVar4 = pTVar8->M[0][3];
  (this->InvProjectionMatrix).M[0][2] = pTVar8->M[0][2];
  (this->InvProjectionMatrix).M[0][3] = dVar4;
  dVar4 = pTVar8->M[1][1];
  (this->InvProjectionMatrix).M[1][0] = pTVar8->M[1][0];
  (this->InvProjectionMatrix).M[1][1] = dVar4;
  dVar4 = pTVar8->M[1][3];
  (this->InvProjectionMatrix).M[1][2] = pTVar8->M[1][2];
  (this->InvProjectionMatrix).M[1][3] = dVar4;
  dVar4 = pTVar8->M[2][1];
  (this->InvProjectionMatrix).M[2][0] = pTVar8->M[2][0];
  (this->InvProjectionMatrix).M[2][1] = dVar4;
  dVar4 = pTVar8->M[2][3];
  (this->InvProjectionMatrix).M[2][2] = pTVar8->M[2][2];
  (this->InvProjectionMatrix).M[2][3] = dVar4;
  dVar4 = pTVar8->M[3][1];
  (this->InvProjectionMatrix).M[3][0] = pTVar8->M[3][0];
  (this->InvProjectionMatrix).M[3][1] = dVar4;
  dVar4 = pTVar8->M[3][3];
  (this->InvProjectionMatrix).M[3][2] = pTVar8->M[3][2];
  (this->InvProjectionMatrix).M[3][3] = dVar4;
  VectorMatrixMultiply(&local_228,&this->ViewMatrix,&this->ProjectionMatrix);
  (this->ViewProjectionMatrix).M[0][0] = local_228.M[0][0];
  (this->ViewProjectionMatrix).M[0][1] = local_228.M[0][1];
  (this->ViewProjectionMatrix).M[0][2] = local_228.M[0][2];
  (this->ViewProjectionMatrix).M[0][3] = local_228.M[0][3];
  (this->ViewProjectionMatrix).M[1][0] = local_228.M[1][0];
  (this->ViewProjectionMatrix).M[1][1] = local_228.M[1][1];
  (this->ViewProjectionMatrix).M[1][2] = local_228.M[1][2];
  (this->ViewProjectionMatrix).M[1][3] = local_228.M[1][3];
  (this->ViewProjectionMatrix).M[2][0] = local_228.M[2][0];
  (this->ViewProjectionMatrix).M[2][1] = local_228.M[2][1];
  (this->ViewProjectionMatrix).M[2][2] = local_228.M[2][2];
  (this->ViewProjectionMatrix).M[2][3] = local_228.M[2][3];
  (this->ViewProjectionMatrix).M[3][0] = local_228.M[3][0];
  (this->ViewProjectionMatrix).M[3][1] = local_228.M[3][1];
  (this->ViewProjectionMatrix).M[3][2] = local_228.M[3][2];
  (this->ViewProjectionMatrix).M[3][3] = local_228.M[3][3];
  VectorMatrixMultiply(&local_1a8,pTVar3,&this->InvViewMatrix);
  (this->InvViewProjectionMatrix).M[0][0] = local_1a8.M[0][0];
  (this->InvViewProjectionMatrix).M[0][1] = local_1a8.M[0][1];
  (this->InvViewProjectionMatrix).M[0][2] = local_1a8.M[0][2];
  (this->InvViewProjectionMatrix).M[0][3] = local_1a8.M[0][3];
  (this->InvViewProjectionMatrix).M[1][0] = local_1a8.M[1][0];
  (this->InvViewProjectionMatrix).M[1][1] = local_1a8.M[1][1];
  (this->InvViewProjectionMatrix).M[1][2] = local_1a8.M[1][2];
  (this->InvViewProjectionMatrix).M[1][3] = local_1a8.M[1][3];
  (this->InvViewProjectionMatrix).M[2][0] = local_1a8.M[2][0];
  (this->InvViewProjectionMatrix).M[2][1] = local_1a8.M[2][1];
  (this->InvViewProjectionMatrix).M[2][2] = local_1a8.M[2][2];
  (this->InvViewProjectionMatrix).M[2][3] = local_1a8.M[2][3];
  (this->InvViewProjectionMatrix).M[3][0] = local_1a8.M[3][0];
  (this->InvViewProjectionMatrix).M[3][1] = local_1a8.M[3][1];
  (this->InvViewProjectionMatrix).M[3][2] = local_1a8.M[3][2];
  (this->InvViewProjectionMatrix).M[3][3] = local_1a8.M[3][3];
  VectorMatrixMultiply(&local_128,&this->TranslatedViewMatrix,&this->ProjectionMatrix);
  (this->TranslatedViewProjectionMatrix).M[0][0] = local_128.M[0][0];
  (this->TranslatedViewProjectionMatrix).M[0][1] = local_128.M[0][1];
  (this->TranslatedViewProjectionMatrix).M[0][2] = local_128.M[0][2];
  (this->TranslatedViewProjectionMatrix).M[0][3] = local_128.M[0][3];
  (this->TranslatedViewProjectionMatrix).M[1][0] = local_128.M[1][0];
  (this->TranslatedViewProjectionMatrix).M[1][1] = local_128.M[1][1];
  (this->TranslatedViewProjectionMatrix).M[1][2] = local_128.M[1][2];
  (this->TranslatedViewProjectionMatrix).M[1][3] = local_128.M[1][3];
  (this->TranslatedViewProjectionMatrix).M[2][0] = local_128.M[2][0];
  (this->TranslatedViewProjectionMatrix).M[2][1] = local_128.M[2][1];
  (this->TranslatedViewProjectionMatrix).M[2][2] = local_128.M[2][2];
  (this->TranslatedViewProjectionMatrix).M[2][3] = local_128.M[2][3];
  (this->TranslatedViewProjectionMatrix).M[3][0] = local_128.M[3][0];
  (this->TranslatedViewProjectionMatrix).M[3][1] = local_128.M[3][1];
  (this->TranslatedViewProjectionMatrix).M[3][2] = local_128.M[3][2];
  (this->TranslatedViewProjectionMatrix).M[3][3] = local_128.M[3][3];
  VectorMatrixMultiply(&local_a8,pTVar3,&this->InvTranslatedViewMatrix);
  (this->InvTranslatedViewProjectionMatrix).M[0][0] = local_a8.M[0][0];
  (this->InvTranslatedViewProjectionMatrix).M[0][1] = local_a8.M[0][1];
  (this->InvTranslatedViewProjectionMatrix).M[0][2] = local_a8.M[0][2];
  (this->InvTranslatedViewProjectionMatrix).M[0][3] = local_a8.M[0][3];
  (this->InvTranslatedViewProjectionMatrix).M[1][0] = local_a8.M[1][0];
  (this->InvTranslatedViewProjectionMatrix).M[1][1] = local_a8.M[1][1];
  (this->InvTranslatedViewProjectionMatrix).M[1][2] = local_a8.M[1][2];
  (this->InvTranslatedViewProjectionMatrix).M[1][3] = local_a8.M[1][3];
  (this->InvTranslatedViewProjectionMatrix).M[2][0] = local_a8.M[2][0];
  (this->InvTranslatedViewProjectionMatrix).M[2][1] = local_a8.M[2][1];
  (this->InvTranslatedViewProjectionMatrix).M[2][2] = local_a8.M[2][2];
  (this->InvTranslatedViewProjectionMatrix).M[2][3] = local_a8.M[2][3];
  (this->InvTranslatedViewProjectionMatrix).M[3][0] = local_a8.M[3][0];
  (this->InvTranslatedViewProjectionMatrix).M[3][1] = local_a8.M[3][1];
  (this->InvTranslatedViewProjectionMatrix).M[3][2] = local_a8.M[3][2];
  (this->InvTranslatedViewProjectionMatrix).M[3][3] = local_a8.M[3][3];
  return;
}

