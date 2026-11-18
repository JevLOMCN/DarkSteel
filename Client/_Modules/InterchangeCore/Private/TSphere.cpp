// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 2

// Equals @ 14e430b70

bool __thiscall
UE::Math::TSphere<float>::Equals(TSphere<float> *this,TSphere<float> *param_1,float param_2)

{
  if (((((float)((uint)((this->Center).field0_0x0._s_0.X - (param_1->Center).field0_0x0._s_0.X) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2) &&
       ((float)((uint)((this->Center).field0_0x0._s_0.Y - (param_1->Center).field0_0x0._s_0.Y) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)) &&
      ((float)((uint)((this->Center).field0_0x0._s_0.Z - (param_1->Center).field0_0x0._s_0.Z) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)) &&
     ((float)((uint)(this->W - param_1->W) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)) {
    return true;
  }
  return false;
}

// Equals @ 14e430bd0

bool __thiscall
UE::Math::TSphere<double>::Equals(TSphere<double> *this,TSphere<double> *param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (this->Center).field0_0x0._s_0.X - (param_1->Center).field0_0x0._s_0.X;
  if (((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2)
       && (dVar1 = (this->Center).field0_0x0._s_0.Y - (param_1->Center).field0_0x0._s_0.Y,
          (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2
          )) && (dVar1 = (this->Center).field0_0x0._s_0.Z - (param_1->Center).field0_0x0._s_0.Z,
                (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                param_2)) &&
     (dVar1 = this->W - param_1->W,
     (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2)) {
    return true;
  }
  return false;
}

