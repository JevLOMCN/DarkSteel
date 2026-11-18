// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// operator== @ 1429c0a30

bool __thiscall TTransform2<float>::operator==(TTransform2<float> *this,TTransform2<float> *param_1)

{
  if (((((float)((uint)((this->M).M[0][0] - (param_1->M).M[0][0]) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) &&
       ((float)((uint)((this->M).M[0][1] - (param_1->M).M[0][1]) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) &&
      ((float)((uint)((this->M).M[1][0] - (param_1->M).M[1][0]) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) &&
     ((((float)((uint)((this->M).M[1][1] - (param_1->M).M[1][1]) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717 &&
       ((param_1->Trans).field0_0x0._s_0.X == (this->Trans).field0_0x0._s_0.X)) &&
      ((param_1->Trans).field0_0x0._s_0.Y == (this->Trans).field0_0x0._s_0.Y)))) {
    return true;
  }
  return false;
}

