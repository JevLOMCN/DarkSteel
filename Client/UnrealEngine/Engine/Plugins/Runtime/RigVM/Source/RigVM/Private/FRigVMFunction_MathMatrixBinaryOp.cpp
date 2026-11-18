// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a1459f0

UScriptStruct * __cdecl FRigVMFunction_MathMatrixBinaryOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp,
                         (UObject *)pUVar1,L"RigVMFunction_MathMatrixBinaryOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp.OuterSingleton;
}

// FRigVMFunction_MathMatrixBinaryOp @ 14a18d860

FRigVMFunction_MathMatrixBinaryOp * __thiscall
FRigVMFunction_MathMatrixBinaryOp::FRigVMFunction_MathMatrixBinaryOp
          (FRigVMFunction_MathMatrixBinaryOp *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathMatrixBinaryOp__6B_;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->Result).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->Result).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->Result).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->Result).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->Result).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->Result).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->Result).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->Result).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->Result).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->Result).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->Result).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->Result).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->Result).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->Result).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->Result).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->Result).M[3][3] = dVar1;
  dVar1 = (this->Result).M[0][1];
  dVar2 = (this->Result).M[0][2];
  dVar3 = (this->Result).M[0][3];
  (this->B).M[0][0] = (this->Result).M[0][0];
  (this->B).M[0][1] = dVar1;
  dVar1 = (this->Result).M[1][0];
  dVar4 = (this->Result).M[1][1];
  (this->B).M[0][2] = dVar2;
  (this->B).M[0][3] = dVar3;
  dVar2 = (this->Result).M[1][2];
  dVar3 = (this->Result).M[1][3];
  (this->B).M[1][0] = dVar1;
  (this->B).M[1][1] = dVar4;
  dVar1 = (this->Result).M[2][0];
  dVar4 = (this->Result).M[2][1];
  (this->B).M[1][2] = dVar2;
  (this->B).M[1][3] = dVar3;
  dVar2 = (this->Result).M[2][2];
  dVar3 = (this->Result).M[2][3];
  (this->B).M[2][0] = dVar1;
  (this->B).M[2][1] = dVar4;
  dVar1 = (this->Result).M[3][0];
  dVar4 = (this->Result).M[3][1];
  (this->B).M[2][2] = dVar2;
  (this->B).M[2][3] = dVar3;
  dVar2 = (this->Result).M[3][2];
  dVar3 = (this->Result).M[3][3];
  (this->B).M[3][0] = dVar1;
  (this->B).M[3][1] = dVar4;
  dVar1 = (this->Result).M[0][1];
  (this->A).M[0][0] = (this->Result).M[0][0];
  (this->A).M[0][1] = dVar1;
  dVar1 = (this->Result).M[1][0];
  dVar4 = (this->Result).M[1][1];
  (this->B).M[3][2] = dVar2;
  (this->B).M[3][3] = dVar3;
  dVar2 = (this->Result).M[0][3];
  (this->A).M[0][2] = (this->Result).M[0][2];
  (this->A).M[0][3] = dVar2;
  dVar2 = (this->Result).M[1][2];
  dVar3 = (this->Result).M[1][3];
  (this->A).M[1][0] = dVar1;
  (this->A).M[1][1] = dVar4;
  dVar1 = (this->Result).M[2][0];
  dVar4 = (this->Result).M[2][1];
  (this->A).M[1][2] = dVar2;
  (this->A).M[1][3] = dVar3;
  dVar2 = (this->Result).M[2][2];
  dVar3 = (this->Result).M[2][3];
  (this->A).M[2][0] = dVar1;
  (this->A).M[2][1] = dVar4;
  dVar1 = (this->Result).M[3][0];
  dVar4 = (this->Result).M[3][1];
  (this->A).M[2][2] = dVar2;
  (this->A).M[2][3] = dVar3;
  dVar2 = (this->Result).M[3][2];
  dVar3 = (this->Result).M[3][3];
  (this->A).M[3][0] = dVar1;
  (this->A).M[3][1] = dVar4;
  (this->A).M[3][2] = dVar2;
  (this->A).M[3][3] = dVar3;
  return this;
}

