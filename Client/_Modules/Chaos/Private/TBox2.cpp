// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Overlap @ 1440988f0

TBox2<double> * __thiscall
UE::Math::TBox2<double>::Overlap
          (TBox2<double> *this,TBox2<double> *__return_storage_ptr__,TBox2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector2<double> TVar7;
  undefined8 uVar8;
  undefined7 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  
  dVar1 = (param_1->Max).field0_0x0._s_0.X;
  dVar2 = (this->Min).field0_0x0._s_0.X;
  if (dVar2 <= dVar1) {
    dVar3 = (param_1->Min).field0_0x0._s_0.X;
    dVar4 = (this->Max).field0_0x0._s_0.X;
    if (dVar3 <= dVar4) {
      dVar5 = (this->Min).field0_0x0._s_0.Y;
      dVar6 = (param_1->Max).field0_0x0._s_0.Y;
      if (dVar5 <= dVar6) {
        dVar15 = (param_1->Min).field0_0x0._s_0.Y;
        dVar16 = (this->Max).field0_0x0._s_0.Y;
        if (dVar15 <= dVar16) {
          uVar11 = SUB84(dVar3,0);
          uVar12 = (int)((ulonglong)dVar3 >> 0x20);
          if (dVar3 <= dVar2) {
            uVar11 = SUB84(dVar2,0);
            uVar12 = (int)((ulonglong)dVar2 >> 0x20);
          }
          if (dVar15 <= dVar5) {
            dVar15 = dVar5;
          }
          uVar13 = SUB84(dVar4,0);
          uVar14 = (int)((ulonglong)dVar4 >> 0x20);
          if (dVar1 <= dVar4) {
            uVar13 = SUB84(dVar1,0);
            uVar14 = (int)((ulonglong)dVar1 >> 0x20);
          }
          if (dVar6 <= dVar16) {
            dVar16 = dVar6;
          }
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar12,uVar11);
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar15;
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar14,uVar13);
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar16;
          __return_storage_ptr__->bIsValid = true;
          return __return_storage_ptr__;
        }
      }
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
      ::__l5::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
        ::__l5::_thread_safe_static_guard_0__ == -1) {
      `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
      ::__l5::EmptyBox.Min.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
      `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
      ::__l5::EmptyBox.bIsValid = false;
      `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
      ::__l5::EmptyBox._33_7_ = 0;
      `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
      ::__l5::EmptyBox.Max.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
      _Init_thread_footer(&`public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  TVar7.field0_0x0 =
       `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
       ::__l5::EmptyBox.Max.field0_0x0;
  (__return_storage_ptr__->Min).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)
       `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
       ::__l5::EmptyBox.Min.field0_0x0;
  uVar8 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
          ::__l5::EmptyBox._32_8_;
  (__return_storage_ptr__->Max).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar7.field0_0x0;
  uVar10 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox._32_8_;
  `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.bIsValid = SUB81(uVar8,0);
  `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox._33_7_ = SUB87(uVar8,1);
  uVar9 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
          ::__l5::EmptyBox._33_7_;
  __return_storage_ptr__->bIsValid =
       `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
       ::__l5::EmptyBox.bIsValid;
  `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox._32_8_ = uVar10;
  *(undefined7 *)&__return_storage_ptr__->field_0x21 = uVar9;
  return __return_storage_ptr__;
}

