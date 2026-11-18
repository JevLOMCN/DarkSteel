// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// TBox<double> @ 14472cbf0

TBox<double> * __thiscall UE::Math::TBox<double>::TBox<double>(TBox<double> *this)

{
  this->IsValid = '\0';
  return this;
}

// GetCenter @ 144919df0

TVector<double> * __thiscall
UE::Math::TBox<double>::GetCenter(TBox<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = __real_3fe0000000000000;
  dVar4 = ((this->Max).field0_0x0._s_0.Z + (this->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((this->Min).field0_0x0._s_0.X + (this->Max).field0_0x0._s_0.X) * __real_3fe0000000000000;
  dVar1 = (this->Max).field0_0x0._s_0.Y;
  dVar2 = (this->Min).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar1 + dVar2) * dVar3;
  return __return_storage_ptr__;
}

// GetExtent @ 14491bed0

TVector<double> * __thiscall
UE::Math::TBox<double>::GetExtent(TBox<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = __real_3fe0000000000000;
  dVar4 = ((this->Max).field0_0x0._s_0.Z - (this->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((this->Max).field0_0x0._s_0.X - (this->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  dVar1 = (this->Max).field0_0x0._s_0.Y;
  dVar2 = (this->Min).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar1 - dVar2) * dVar3;
  return __return_storage_ptr__;
}

// GetSize @ 14491dbf0

TVector<double> * __thiscall
UE::Math::TBox<double>::GetSize(TBox<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->Max).field0_0x0._s_0.Y;
  dVar2 = (this->Min).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->Max).field0_0x0._s_0.X - (this->Min).field0_0x0._s_0.X;
  dVar3 = (this->Max).field0_0x0._s_0.Z;
  dVar4 = (this->Min).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 - dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 - dVar4;
  return __return_storage_ptr__;
}

// Intersect @ 14492a400

bool __thiscall UE::Math::TBox<double>::Intersect(TBox<double> *this,TBox<double> *param_1)

{
  if (((((this->Min).field0_0x0._s_0.X <= (param_1->Max).field0_0x0._s_0.X) &&
       ((param_1->Min).field0_0x0._s_0.X <= (this->Max).field0_0x0._s_0.X)) &&
      ((this->Min).field0_0x0._s_0.Y <= (param_1->Max).field0_0x0._s_0.Y)) &&
     ((((param_1->Min).field0_0x0._s_0.Y <= (this->Max).field0_0x0._s_0.Y &&
       ((this->Min).field0_0x0._s_0.Z <= (param_1->Max).field0_0x0._s_0.Z)) &&
      ((param_1->Min).field0_0x0._s_0.Z <= (this->Max).field0_0x0._s_0.Z)))) {
    return true;
  }
  return false;
}

// Overlap @ 14563b210

TBox<double> * __thiscall
UE::Math::TBox<double>::Overlap
          (TBox<double> *this,TBox<double> *__return_storage_ptr__,TBox<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  uVar10 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._s_0.X;
  uVar9 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
          ::__l5::EmptyBox.Min.field0_0x0._s_0.Z;
  uVar19 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Min.field0_0x0._s_0.Y;
  dVar1 = (param_1->Max).field0_0x0._s_0.X;
  dVar2 = (this->Min).field0_0x0._s_0.X;
  if (dVar2 <= dVar1) {
    dVar3 = (param_1->Min).field0_0x0._s_0.X;
    dVar4 = (this->Max).field0_0x0._s_0.X;
    if (dVar3 <= dVar4) {
      dVar24 = (this->Min).field0_0x0._s_0.Y;
      dVar25 = (param_1->Max).field0_0x0._s_0.Y;
      if (dVar24 <= dVar25) {
        dVar5 = (param_1->Min).field0_0x0._s_0.Y;
        dVar6 = (this->Max).field0_0x0._s_0.Y;
        if (dVar5 <= dVar6) {
          dVar26 = (this->Min).field0_0x0._s_0.Z;
          dVar27 = (param_1->Max).field0_0x0._s_0.Z;
          if (dVar26 <= dVar27) {
            dVar7 = (param_1->Min).field0_0x0._s_0.Z;
            dVar8 = (this->Max).field0_0x0._s_0.Z;
            if (dVar7 <= dVar8) {
              uVar20 = SUB84(dVar3,0);
              uVar21 = (int)((ulonglong)dVar3 >> 0x20);
              if (dVar3 <= dVar2) {
                uVar20 = SUB84(dVar2,0);
                uVar21 = (int)((ulonglong)dVar2 >> 0x20);
              }
              if (dVar24 <= dVar5) {
                dVar24 = dVar5;
              }
              if (dVar26 <= dVar7) {
                dVar26 = dVar7;
              }
              uVar22 = SUB84(dVar4,0);
              uVar23 = (int)((ulonglong)dVar4 >> 0x20);
              if (dVar1 <= dVar4) {
                uVar22 = SUB84(dVar1,0);
                uVar23 = (int)((ulonglong)dVar1 >> 0x20);
              }
              if (dVar6 <= dVar25) {
                dVar25 = dVar6;
              }
              (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar21,uVar20);
              if (dVar8 <= dVar27) {
                dVar27 = dVar8;
              }
              (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar24;
              (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar26;
              (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar23,uVar22);
              (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar25;
              (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar27;
              __return_storage_ptr__->IsValid = '\x01';
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
       ::__l5::EmptyBox.Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)uVar19;
  uVar11 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._s_0.Z;
  uVar19 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)uVar9;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)uVar10;
  uVar9 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
          ::__l5::EmptyBox._48_8_;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)uVar19;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)uVar11;
  uVar19 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox._48_8_;
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.IsValid = (uchar)uVar9;
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[0] = SUB81(uVar9,1);
  uVar12 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[0];
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[1] = SUB81(uVar9,2);
  uVar13 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[1];
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[2] = SUB81(uVar9,3);
  uVar14 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[2];
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[3] = SUB81(uVar9,4);
  uVar15 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[3];
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[4] = SUB81(uVar9,5);
  uVar16 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[4];
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[5] = SUB81(uVar9,6);
  uVar17 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[5];
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[6] = SUB81(uVar9,7);
  uVar18 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[6];
  __return_storage_ptr__->IsValid =
       `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
       ::__l5::EmptyBox.IsValid;
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox._48_8_ = uVar19;
  __return_storage_ptr__->Pad[0] = uVar12;
  __return_storage_ptr__->Pad[1] = uVar13;
  __return_storage_ptr__->Pad[2] = uVar14;
  __return_storage_ptr__->Pad[3] = uVar15;
  __return_storage_ptr__->Pad[4] = uVar16;
  __return_storage_ptr__->Pad[5] = uVar17;
  __return_storage_ptr__->Pad[6] = uVar18;
  return __return_storage_ptr__;
}

