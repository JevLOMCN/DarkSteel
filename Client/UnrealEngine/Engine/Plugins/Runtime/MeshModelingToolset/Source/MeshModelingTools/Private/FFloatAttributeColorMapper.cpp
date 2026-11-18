// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// ~FFloatAttributeColorMapper @ 14ccc30a0

void __thiscall
FFloatAttributeColorMapper::~FFloatAttributeColorMapper(FFloatAttributeColorMapper *this)

{
  this->_padding_ = (longlong)&___7FFloatAttributeColorMapper__6B_;
  return;
}

// ToColor @ 14cd30280

FLinearColor * __thiscall
FFloatAttributeColorMapper::ToColor
          (FFloatAttributeColorMapper *this,FLinearColor *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (this->LowColor).field0_0x0._s_0.B;
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (0.0 <= param_1) {
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    fVar3 = param_1 * (this->HighColor).field0_0x0._s_0.B + (__real_3f800000 - param_1) * fVar3;
    fVar1 = (__real_3f800000 - param_1) * (this->LowColor).field0_0x0._s_0.G +
            param_1 * (this->HighColor).field0_0x0._s_0.G;
  }
  else {
    fVar1 = (this->LowColor).field0_0x0._s_0.G;
    param_1 = 0.0;
  }
  fVar2 = __real_3f800000 - param_1;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar1;
  fVar1 = (this->HighColor).field0_0x0._s_0.R;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       fVar2 * (this->LowColor).field0_0x0._s_0.R + param_1 * fVar1;
  return __return_storage_ptr__;
}

