// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FClearValueBinding @ 14485b4c0

FClearValueBinding * __thiscall
FClearValueBinding::FClearValueBinding(FClearValueBinding *this,FLinearColor *param_1)

{
  this->ColorBinding = EColorBound;
  (this->Value).Color[0] = (param_1->field0_0x0)._s_0.R;
  (this->Value).Color[1] = (param_1->field0_0x0)._s_0.G;
  (this->Value).Color[2] = (param_1->field0_0x0)._s_0.B;
  (this->Value).Color[3] = (param_1->field0_0x0)._s_0.A;
  return this;
}

// operator== @ 1451967c0

bool __thiscall FClearValueBinding::operator==(FClearValueBinding *this,FClearValueBinding *param_1)

{
  EClearBinding EVar1;
  bool bVar2;
  
  EVar1 = this->ColorBinding;
  if (EVar1 == param_1->ColorBinding) {
    if (EVar1 == EColorBound) {
      if ((param_1->Value).Color[0] != (this->Value).Color[0]) {
        return false;
      }
      if ((param_1->Value).Color[1] != (this->Value).Color[1]) {
        return false;
      }
      if ((param_1->Value).Color[2] != (this->Value).Color[2]) {
        return false;
      }
      bVar2 = (param_1->Value).Color[3] == (this->Value).Color[3];
    }
    else {
      if (EVar1 != EDepthStencilBound) {
        return true;
      }
      if ((param_1->Value).Color[0] != (this->Value).Color[0]) {
        return false;
      }
      bVar2 = (this->Value).DSValue.Stencil == (param_1->Value).DSValue.Stencil;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

