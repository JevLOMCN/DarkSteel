// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 2

// Equals @ 14e430980

bool __thiscall
UE::Math::TBox2<float>::Equals(TBox2<float> *this,TBox2<float> *param_1,float param_2)

{
  if (((((float)((uint)((this->Min).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2) &&
       ((float)((uint)((this->Min).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)) &&
      ((float)((uint)((this->Max).field0_0x0._s_0.X - (param_1->Max).field0_0x0._s_0.X) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)) &&
     ((float)((uint)((this->Max).field0_0x0._s_0.Y - (param_1->Max).field0_0x0._s_0.Y) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)) {
    return true;
  }
  return false;
}

// Equals @ 14e4309e0

bool __thiscall
UE::Math::TBox2<double>::Equals(TBox2<double> *this,TBox2<double> *param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (this->Min).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
  if (((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2)
       && (dVar1 = (this->Min).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y,
          (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2
          )) && (dVar1 = (this->Max).field0_0x0._s_0.X - (param_1->Max).field0_0x0._s_0.X,
                (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                param_2)) &&
     (dVar1 = (this->Max).field0_0x0._s_0.Y - (param_1->Max).field0_0x0._s_0.Y,
     (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2)) {
    return true;
  }
  return false;
}

