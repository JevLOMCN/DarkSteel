// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// TransformBy @ 148fce670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<float> * __thiscall
UE::Math::TBox<float>::TransformBy
          (TBox<float> *this,TBox<float> *__return_storage_ptr__,TMatrix<float> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_40;
  
  if (this->IsValid == '\0') {
    *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = 0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    return __return_storage_ptr__;
  }
  fVar6 = (this->Min).field0_0x0._s_0.Z;
  uVar1 = *(undefined8 *)&(this->Min).field0_0x0;
  fVar7 = (this->Max).field0_0x0._s_0.Z;
  uVar2 = *(undefined8 *)&(this->Max).field0_0x0;
  fVar10 = (float)uVar2;
  fVar11 = (float)((ulonglong)uVar2 >> 0x20);
  fVar8 = (float)uVar1;
  fVar9 = (float)((ulonglong)uVar1 >> 0x20);
  fVar3 = (fVar10 + fVar8) * ___xmm_3f0000003f0000003f0000003f000000;
  fVar4 = (fVar11 + fVar9) * _UNK_150689624;
  fVar5 = (fVar7 + fVar6) * _UNK_150689628;
  fVar10 = (fVar10 - fVar8) * ___xmm_3f0000003f0000003f0000003f000000;
  fVar11 = (fVar11 - fVar9) * _UNK_150689624;
  fVar12 = (fVar7 - fVar6) * _UNK_150689628;
  fVar8 = fVar4 * param_1->M[1][0] + fVar3 * param_1->M[0][0] + fVar5 * param_1->M[2][0] +
          param_1->M[3][0];
  fVar9 = fVar4 * param_1->M[1][1] + fVar3 * param_1->M[0][1] + fVar5 * param_1->M[2][1] +
          param_1->M[3][1];
  fVar4 = fVar4 * param_1->M[1][2] + fVar3 * param_1->M[0][2] + fVar5 * param_1->M[2][2] +
          param_1->M[3][2];
  fVar6 = (float)((uint)(fVar11 * param_1->M[1][0]) & __xmm_7fffffff7fffffff7fffffff7fffffff) +
          (float)((uint)(fVar10 * param_1->M[0][0]) & __xmm_7fffffff7fffffff7fffffff7fffffff) +
          (float)((uint)(fVar12 * param_1->M[2][0]) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar7 = (float)((uint)(fVar11 * param_1->M[1][1]) & _UNK_15061cc74) +
          (float)((uint)(fVar10 * param_1->M[0][1]) & _UNK_15061cc74) +
          (float)((uint)(fVar12 * param_1->M[2][1]) & _UNK_15061cc74);
  fVar3 = (float)((uint)(fVar11 * param_1->M[1][2]) & _UNK_15061cc78) +
          (float)((uint)(fVar10 * param_1->M[0][2]) & _UNK_15061cc78) +
          (float)((uint)(fVar12 * param_1->M[2][2]) & _UNK_15061cc78);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = fVar8 - fVar6;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = fVar9 - fVar7;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = fVar4 - fVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = fVar6 + fVar8;
  *(ulonglong *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) =
       CONCAT44(fVar3 + fVar4,fVar7 + fVar9);
  __return_storage_ptr__->IsValid = 1;
  __return_storage_ptr__->Pad[0] = local_40._1_1_;
  __return_storage_ptr__->Pad[1] = local_40._2_1_;
  __return_storage_ptr__->Pad[2] = local_40._3_1_;
  return __return_storage_ptr__;
}

