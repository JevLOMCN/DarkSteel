// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// WriteArray @ 14e5b57f0

void __thiscall
TGLTFJsonMatrix<TGLTFMatrix<float,2>_>::WriteArray
          (TGLTFJsonMatrix<TGLTFMatrix<float,2>_> *this,IGLTFJsonWriter *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)&this->field_0x8;
  lVar2 = 4;
  do {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,*puVar1);
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// WriteArray @ 14e5b58a0

void __thiscall
TGLTFJsonMatrix<TGLTFMatrix<float,3>_>::WriteArray
          (TGLTFJsonMatrix<TGLTFMatrix<float,3>_> *this,IGLTFJsonWriter *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)&this->field_0x8;
  lVar2 = 9;
  do {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,*puVar1);
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// WriteArray @ 14e5b5950

void __thiscall
TGLTFJsonMatrix<TGLTFMatrix<float,4>_>::WriteArray
          (TGLTFJsonMatrix<TGLTFMatrix<float,4>_> *this,IGLTFJsonWriter *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)&this->field_0x8;
  lVar2 = 0x10;
  do {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,*puVar1);
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

