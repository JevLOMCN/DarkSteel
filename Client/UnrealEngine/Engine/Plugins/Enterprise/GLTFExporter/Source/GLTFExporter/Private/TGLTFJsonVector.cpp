// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// WriteArray @ 14e5b5f10

void __thiscall
TGLTFJsonVector<TGLTFVector2<float>_>::WriteArray
          (TGLTFJsonVector<TGLTFVector2<float>_> *this,IGLTFJsonWriter *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)&this->field_0x8;
  lVar2 = 2;
  do {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,*puVar1);
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// WriteArray @ 14e5b6050

void __thiscall
TGLTFJsonVector<TGLTFVector3<float>_>::WriteArray
          (TGLTFJsonVector<TGLTFVector3<float>_> *this,IGLTFJsonWriter *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)&this->field_0x8;
  lVar2 = 3;
  do {
    (**(code **)(param_1->_padding_ + 0x20))(param_1,*puVar1);
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// WriteArray @ 14e618a20

void __thiscall
TGLTFJsonVector<TGLTFVector4<float>_>::WriteArray
          (TGLTFJsonVector<TGLTFVector4<float>_> *this,IGLTFJsonWriter *param_1)

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

