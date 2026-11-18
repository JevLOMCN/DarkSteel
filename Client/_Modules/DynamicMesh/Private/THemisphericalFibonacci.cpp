// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// Point @ 14c90f0e0

TVector<double> * __thiscall
UE::Geometry::THemisphericalFibonacci<double>::Point
          (THemisphericalFibonacci<double> *this,TVector<double> *__return_storage_ptr__,int param_1
          )

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double extraout_XMM0_Qa;
  undefined1 auVar4 [16];
  undefined1 extraout_XMM0 [16];
  double extraout_XMM0_Qb;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar12 [16];
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  if (this->Distribution == Uniform) {
    iVar1 = this->N;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_struct_UE::Math::TVector<double>___cdecl_UE::Geometry::TSphericalFibonacci<double>::Point(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_struct_UE::Math::TVector<double>___cdecl_UE::Geometry::TSphericalFibonacci<double>::Point(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_struct_UE::Math::TVector<double>___cdecl_UE::Geometry::TSphericalFibonacci<double>::Point(int)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        `public:_struct_UE::Math::TVector<double>___cdecl_UE::Geometry::TSphericalFibonacci<double>::Point(int)const___ptr64'
        ::__l2::PHI = __real_3ff9e3779b97f4a8;
        _Init_thread_footer(&`public:_struct_UE::Math::TVector<double>___cdecl_UE::Geometry::TSphericalFibonacci<double>::Point(int)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    dVar5 = (double)param_1;
    dVar9 = dVar5 / `public:_struct_UE::Math::TVector<double>___cdecl_UE::Geometry::TSphericalFibonacci<double>::Point(int)const___ptr64'
                    ::__l2::PHI;
    dVar11 = __real_3ff0000000000000 -
             (dVar5 + dVar5 + __real_3ff0000000000000) / (double)(iVar1 * 2);
    dVar5 = acos(dVar11);
    dVar5 = sin(dVar5);
    if (((longlong)dVar9 != -0x8000000000000000) && ((double)(longlong)dVar9 != dVar9)) {
      auVar12._8_8_ = dVar9;
      auVar12._0_8_ = dVar9;
      movmskpd(0,auVar12);
    }
    __libm_sse2_sincos_();
    (__return_storage_ptr__->field0_0x0)._s_0.X = extraout_XMM0_Qb * dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = extraout_XMM0_Qa * dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar11;
  }
  else if (this->Distribution == Cosine) {
    iVar1 = this->N;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_struct_UE::Math::TVector2<double>___cdecl_UE::Geometry::TFibonacciLattice<double>::Point(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_struct_UE::Math::TVector2<double>___cdecl_UE::Geometry::TFibonacciLattice<double>::Point(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_struct_UE::Math::TVector2<double>___cdecl_UE::Geometry::TFibonacciLattice<double>::Point(int)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        `public:_struct_UE::Math::TVector2<double>___cdecl_UE::Geometry::TFibonacciLattice<double>::Point(int)const___ptr64'
        ::__l2::PHI = __real_3ff9e3779b97f4a8;
        _Init_thread_footer(&`public:_struct_UE::Math::TVector2<double>___cdecl_UE::Geometry::TFibonacciLattice<double>::Point(int)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    dVar5 = (double)(param_1 + 1) /
            `public:_struct_UE::Math::TVector2<double>___cdecl_UE::Geometry::TFibonacciLattice<double>::Point(int)const___ptr64'
            ::__l2::PHI;
    auVar10._0_8_ = (double)(param_1 + 1) / (double)(iVar1 + 1);
    auVar10._8_8_ = 0;
    auVar12 = sqrtpd(unaff_XMM7,auVar10);
    if (((longlong)dVar5 != -0x8000000000000000) && ((double)(longlong)dVar5 != dVar5)) {
      auVar4._8_8_ = dVar5;
      auVar4._0_8_ = dVar5;
      movmskpd(0,auVar4);
    }
    __libm_sse2_sincos_();
    dVar11 = extraout_XMM0._0_8_;
    dVar5 = extraout_XMM0._8_8_;
    auVar6._8_4_ = extraout_XMM0._0_4_;
    auVar6._0_8_ = dVar5;
    auVar6._12_4_ = extraout_XMM0._4_4_;
    auVar7._8_8_ = auVar6._8_8_;
    auVar7._0_8_ = dVar5 * auVar10._0_8_ * dVar5;
    dVar8 = dVar11 * auVar12._0_8_;
    dVar9 = __real_3ff0000000000000 - auVar7._0_8_;
    auVar3._8_4_ = SUB84(dVar8,0);
    auVar3._0_8_ = dVar5 * auVar12._0_8_;
    auVar3._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
    dVar9 = dVar9 - dVar11 * auVar10._0_8_ * dVar11;
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar9;
    auVar12 = sqrtpd(auVar7,auVar2);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar12._0_8_;
  }
  return __return_storage_ptr__;
}

