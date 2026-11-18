// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FindClosestPointAndBary @ 143ebea10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double,3> * __thiscall
Chaos::TTetrahedron<double>::FindClosestPointAndBary
          (TTetrahedron<double> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,4> *param_2,double param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [12];
  double dVar9;
  bool bVar10;
  TVector<double,3> *pTVar11;
  int iVar12;
  TVector<int,3> **ppTVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar18;
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  
  GetFirstThreeBarycentricCoordinates(this,(TVector<double,3> *)&local_180,param_1);
  dVar9 = __real_3ff0000000000000;
  if ((((local_180 < param_3) || (local_178 < param_3)) || (local_170 < param_3)) ||
     (param_3 + __real_3ff0000000000000 < local_178 + local_180 + local_170)) {
    dVar16 = *(double *)&this->X[0].field_0x8;
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    dVar15 = *(double *)this->X;
    dVar21 = *(double *)(this->X + 3) - dVar15;
    dVar5 = *(double *)(this->X + 2) - dVar15;
    dVar6 = *(double *)&this->X[3].field_0x8 - dVar16;
    dVar7 = *(double *)&this->X[2].field_0x8 - dVar16;
    dVar20 = *(double *)&this->X[0].field_0x10;
    dVar4 = *(double *)&this->X[3].field_0x10 - dVar20;
    dVar19 = *(double *)&this->X[2].field_0x10 - dVar20;
    uVar28 = 0;
    uVar29 = 0;
    uVar18 = 0;
    dVar16 = ((dVar21 * dVar19 - dVar4 * dVar5) * (*(double *)&this->X[1].field_0x8 - dVar16) +
              (dVar4 * dVar7 - dVar6 * dVar19) * (*(double *)(this->X + 1) - dVar15) +
             (dVar6 * dVar5 - dVar21 * dVar7) * (*(double *)&this->X[1].field_0x10 - dVar20)) *
             __real_3fc5555555555555;
    if ((*(int *)(lVar2 + 0x9d4c) <
         `public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__), uVar18 = extraout_XMM0_Qb,
       `public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      `public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
      ::__l2::InvertedTriangleIndices = ___xmm_00000000000000020000000100000000;
      _DAT_155072df8 = _UNK_150b287b8;
      _DAT_155072e10 = ___xmm_00000002000000030000000100000003;
      uRam0000000155072e18 = _UNK_150b287f8;
      _DAT_155072e00 = ___xmm_00000002000000000000000100000003;
      uRam0000000155072e08 = _UNK_150b287d8;
      _Init_thread_footer(&`public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      uVar18 = extraout_XMM0_Qb_00;
    }
    if ((*(int *)(lVar2 + 0x9d4c) <
         `public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
         ::__l2::_thread_safe_static_guard_1__) &&
       (_Init_thread_header(&`public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__), uVar18 = extraout_XMM0_Qb_01,
       `public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
       ::__l2::_thread_safe_static_guard_1__ == -1)) {
      `public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
      ::__l2::NonInvertedTriangleIndices = ___xmm_00000000000000010000000200000000;
      _DAT_155072e30 = _UNK_150b287a8;
      _DAT_155072e48 = ___xmm_00000003000000020000000100000002;
      uRam0000000155072e50 = _UNK_150b28818;
      _DAT_155072e38 = ___xmm_00000003000000000000000300000001;
      uRam0000000155072e40 = _UNK_150b28808;
      _Init_thread_footer(&`public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
      uVar18 = extraout_XMM0_Qb_02;
    }
    uVar26 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar27 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    ppTVar13 = &`public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
                ::__l2::NonInvertedTriangleIndices;
    if (dVar16 <= 0.0) {
      ppTVar13 = &`public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
                  ::__l2::InvertedTriangleIndices;
    }
    lVar14 = 0;
    uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    do {
      uVar1 = *(uint *)ppTVar13;
      local_128 = *(double *)(this->X + (int)*(uint *)(ppTVar13 + 1));
      dStack_120 = *(double *)&this->X[(int)*(uint *)(ppTVar13 + 1)].field_0x8;
      local_118 = *(double *)&this->X[(int)*(uint *)(ppTVar13 + 1)].field_0x10;
      local_140 = *(double *)(this->X + (int)*(uint *)((longlong)ppTVar13 + 4));
      dStack_138 = *(double *)&this->X[(int)*(uint *)((longlong)ppTVar13 + 4)].field_0x8;
      local_130 = *(double *)&this->X[(int)*(uint *)((longlong)ppTVar13 + 4)].field_0x10;
      local_158 = *(undefined1 (*) [16])(this->X + (int)uVar1);
      local_148 = *(double *)&this->X[(int)uVar1].field_0x10;
      dVar19 = local_128 - local_158._0_8_;
      auVar8._4_8_ = uVar18;
      auVar8._0_4_ = local_158._4_4_;
      auVar17._0_8_ = auVar8._0_8_ << 0x20;
      auVar17._8_4_ = local_158._8_4_;
      auVar17._12_4_ = local_158._12_4_;
      dVar20 = dStack_138 - auVar17._8_8_;
      dVar15 = dStack_120 - auVar17._8_8_;
      dVar16 = local_140 - local_158._0_8_;
      dVar4 = dVar20 * (local_118 - local_148) - (local_130 - local_148) * dVar15;
      dVar15 = dVar16 * dVar15 - dVar20 * dVar19;
      dVar16 = (local_130 - local_148) * dVar19 - dVar16 * (local_118 - local_148);
      dVar20 = dVar4 * dVar4 + dVar16 * dVar16 + dVar15 * dVar15;
      if (dVar20 != dVar9) {
        if (__real_3e45798ee0000000 <= dVar20) {
          local_168 = dVar9 / SQRT(dVar20);
          dVar4 = dVar4 * local_168;
          dVar16 = dVar16 * local_168;
          dVar15 = dVar15 * local_168;
        }
        else {
          dVar4 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
          dVar15 = (double)CONCAT44(uVar27,uVar26);
          dVar16 = (double)CONCAT44(uVar23,uVar22);
        }
      }
      local_108 = *(double *)(this->X + (int)uVar1);
      dStack_100 = *(double *)&this->X[(int)uVar1].field_0x8;
      local_f8 = *(double *)&this->X[(int)uVar1].field_0x10;
      dVar20 = (*(double *)param_1 - local_108) * dVar4 +
               (*(double *)&param_1->field_0x8 - dStack_100) * dVar16 +
               (*(double *)&param_1->field_0x10 - local_f8) * dVar15;
      if (0.0 <= dVar20) {
        local_198 = *(double *)param_1 - dVar4 * dVar20;
        dStack_190 = *(double *)&param_1->field_0x8 - dVar16 * dVar20;
        local_188 = *(double *)&param_1->field_0x10 - dVar15 * dVar20;
        ComputeBarycentricInPlane<double,3>
                  ((TVector<double,2> *)&local_1a8,(TVector<double,3> *)local_158,
                   (TVector<double,3> *)&local_140,(TVector<double,3> *)&local_128,
                   (TVector<double,3> *)&local_198);
        dVar16 = local_1a8;
        if (((param_3 <= local_1a8) && (param_3 <= local_1a0)) &&
           (local_1a0 + local_1a8 <= param_3 + dVar9)) {
          *(undefined8 *)param_2 = 0;
          *(undefined8 *)&param_2->field_0x8 = 0;
          *(undefined8 *)&param_2->field_0x10 = 0;
          *(undefined8 *)&param_2->field_0x18 = 0;
          uVar1 = *(uint *)((longlong)ppTVar13 + 4);
          if ((3 < uVar1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                  ,0x310,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            pTVar11 = (TVector<double,3> *)(*pcVar3)();
            return pTVar11;
          }
          *(double *)(&param_2->field_0x0 + (longlong)(int)uVar1 * 8) = dVar16;
          uVar1 = *(uint *)(ppTVar13 + 1);
          if ((3 < uVar1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                  ,0x310,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            pTVar11 = (TVector<double,3> *)(*pcVar3)();
            return pTVar11;
          }
          *(double *)(&param_2->field_0x0 + (longlong)(int)uVar1 * 8) = local_1a0;
          uVar1 = *(uint *)ppTVar13;
          if ((3 < uVar1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                  ,0x310,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            pTVar11 = (TVector<double,3> *)(*pcVar3)();
            return pTVar11;
          }
          *(double *)(&param_2->field_0x0 + (longlong)(int)uVar1 * 8) =
               (dVar9 - local_1a8) - local_1a0;
          *(double *)__return_storage_ptr__ = local_198;
          *(double *)&__return_storage_ptr__->field_0x8 = dStack_190;
          *(double *)&__return_storage_ptr__->field_0x10 = local_188;
          return __return_storage_ptr__;
        }
        uVar26 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar27 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      uVar18 = 0;
      lVar14 = lVar14 + 1;
      ppTVar13 = (TVector<int,3> **)((longlong)ppTVar13 + 0xc);
    } while (lVar14 < 4);
    if (*(int *)(lVar2 + 0x9d4c) <
        `public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
        ::__l2::_thread_safe_static_guard_2__) {
      _Init_thread_header(&`public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
                           ::__l2::_thread_safe_static_guard_2__);
      if (`public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
          ::__l2::_thread_safe_static_guard_2__ == -1) {
        `public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
        ::__l2::EdgeIndices = ___xmm_00000002000000000000000100000000;
        _DAT_155072e68 = _UNK_150b287c8;
        _DAT_155072e80 = ___xmm_00000003000000020000000300000001;
        _DAT_155072e88 = _UNK_150b28828;
        _DAT_155072e70 = ___xmm_00000002000000010000000300000000;
        _DAT_155072e78 = _UNK_150b287e8;
        _Init_thread_footer(&`public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
                             ::__l2::_thread_safe_static_guard_2__);
      }
      uVar26 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar27 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    }
    uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    dVar20 = __real_7fefffffffffffff;
    FindClosestPointAndAlphaOnLineSegment<double,3>
              ((TVector<double,3> *)&local_1c0,
               this->X + (int)`public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
                              ::__l2::EdgeIndices,
               this->X + `public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
                         ::__l2::EdgeIndices._4_4_,param_1,&local_1c8);
    dVar16 = local_1b8 - *(double *)&param_1->field_0x8;
    dVar15 = local_1b0 - *(double *)&param_1->field_0x10;
    dVar16 = dVar16 * dVar16 + (local_1c0 - *(double *)param_1) * (local_1c0 - *(double *)param_1) +
             dVar15 * dVar15;
    dVar15 = dVar20;
    if (dVar16 < dVar20) {
      uVar28 = SUB84(local_1c8,0);
      uVar29 = (undefined4)((ulonglong)local_1c8 >> 0x20);
      uVar22 = SUB84(local_1c0,0);
      uVar23 = (int)((ulonglong)local_1c0 >> 0x20);
      uVar24 = SUB84(local_1b8,0);
      uVar25 = (int)((ulonglong)local_1b8 >> 0x20);
      uVar26 = SUB84(local_1b0,0);
      uVar27 = (int)((ulonglong)local_1b0 >> 0x20);
      dVar15 = dVar16;
    }
    FindClosestPointAndAlphaOnLineSegment<double,3>
              ((TVector<double,3> *)&local_1c0,this->X + DAT_155072e68,this->X + DAT_155072e6c,
               param_1,&local_1c8);
    dVar4 = local_1b8 - *(double *)&param_1->field_0x8;
    dVar19 = local_1b0 - *(double *)&param_1->field_0x10;
    iVar12 = (dVar16 < dVar20) - 1;
    dVar16 = dVar4 * dVar4 + (local_1c0 - *(double *)param_1) * (local_1c0 - *(double *)param_1) +
             dVar19 * dVar19;
    if (dVar16 < dVar15) {
      uVar28 = SUB84(local_1c8,0);
      uVar29 = (undefined4)((ulonglong)local_1c8 >> 0x20);
      iVar12 = 1;
      uVar22 = SUB84(local_1c0,0);
      uVar23 = (int)((ulonglong)local_1c0 >> 0x20);
      uVar24 = SUB84(local_1b8,0);
      uVar25 = (int)((ulonglong)local_1b8 >> 0x20);
      uVar26 = SUB84(local_1b0,0);
      uVar27 = (int)((ulonglong)local_1b0 >> 0x20);
    }
    if (dVar15 <= dVar16) {
      dVar16 = dVar15;
    }
    FindClosestPointAndAlphaOnLineSegment<double,3>
              ((TVector<double,3> *)&local_1c0,this->X + DAT_155072e70,this->X + DAT_155072e74,
               param_1,&local_1c8);
    dVar15 = local_1b8 - *(double *)&param_1->field_0x8;
    dVar20 = local_1b0 - *(double *)&param_1->field_0x10;
    dVar15 = dVar15 * dVar15 + (local_1c0 - *(double *)param_1) * (local_1c0 - *(double *)param_1) +
             dVar20 * dVar20;
    if (dVar15 < dVar16) {
      uVar28 = SUB84(local_1c8,0);
      uVar29 = (undefined4)((ulonglong)local_1c8 >> 0x20);
      iVar12 = 2;
      uVar22 = SUB84(local_1c0,0);
      uVar23 = (int)((ulonglong)local_1c0 >> 0x20);
      uVar24 = SUB84(local_1b8,0);
      uVar25 = (int)((ulonglong)local_1b8 >> 0x20);
      uVar26 = SUB84(local_1b0,0);
      uVar27 = (int)((ulonglong)local_1b0 >> 0x20);
    }
    if (dVar16 <= dVar15) {
      dVar15 = dVar16;
    }
    FindClosestPointAndAlphaOnLineSegment<double,3>
              ((TVector<double,3> *)&local_1c0,this->X + DAT_155072e78,this->X + DAT_155072e7c,
               param_1,&local_1c8);
    dVar16 = local_1b8 - *(double *)&param_1->field_0x8;
    dVar20 = local_1b0 - *(double *)&param_1->field_0x10;
    dVar16 = dVar16 * dVar16 + (local_1c0 - *(double *)param_1) * (local_1c0 - *(double *)param_1) +
             dVar20 * dVar20;
    if (dVar16 < dVar15) {
      uVar28 = SUB84(local_1c8,0);
      uVar29 = (undefined4)((ulonglong)local_1c8 >> 0x20);
      iVar12 = 3;
      uVar22 = SUB84(local_1c0,0);
      uVar23 = (int)((ulonglong)local_1c0 >> 0x20);
      uVar24 = SUB84(local_1b8,0);
      uVar25 = (int)((ulonglong)local_1b8 >> 0x20);
      uVar26 = SUB84(local_1b0,0);
      uVar27 = (int)((ulonglong)local_1b0 >> 0x20);
    }
    if (dVar15 <= dVar16) {
      dVar16 = dVar15;
    }
    FindClosestPointAndAlphaOnLineSegment<double,3>
              ((TVector<double,3> *)&local_1c0,this->X + DAT_155072e80,this->X + DAT_155072e84,
               param_1,&local_1c8);
    dVar15 = local_1b8 - *(double *)&param_1->field_0x8;
    dVar20 = local_1b0 - *(double *)&param_1->field_0x10;
    dVar15 = dVar15 * dVar15 + (local_1c0 - *(double *)param_1) * (local_1c0 - *(double *)param_1) +
             dVar20 * dVar20;
    if (dVar15 < dVar16) {
      uVar28 = SUB84(local_1c8,0);
      uVar29 = (undefined4)((ulonglong)local_1c8 >> 0x20);
      iVar12 = 4;
      uVar22 = SUB84(local_1c0,0);
      uVar23 = (int)((ulonglong)local_1c0 >> 0x20);
      uVar24 = SUB84(local_1b8,0);
      uVar25 = (int)((ulonglong)local_1b8 >> 0x20);
      uVar26 = SUB84(local_1b0,0);
      uVar27 = (int)((ulonglong)local_1b0 >> 0x20);
    }
    FindClosestPointAndAlphaOnLineSegment<double,3>
              ((TVector<double,3> *)&local_1c0,this->X + DAT_155072e88,this->X + DAT_155072e8c,
               param_1,&local_1c8);
    if (dVar16 <= dVar15) {
      dVar15 = dVar16;
    }
    dVar20 = local_1b8 - *(double *)&param_1->field_0x8;
    dVar16 = local_1b0 - *(double *)&param_1->field_0x10;
    if (dVar20 * dVar20 + (local_1c0 - *(double *)param_1) * (local_1c0 - *(double *)param_1) +
        dVar16 * dVar16 < dVar15) {
      uVar28 = SUB84(local_1c8,0);
      uVar29 = (undefined4)((ulonglong)local_1c8 >> 0x20);
      uVar24 = SUB84(local_1b8,0);
      iVar12 = 5;
      uVar22 = SUB84(local_1c0,0);
      uVar23 = (int)((ulonglong)local_1c0 >> 0x20);
      uVar25 = (int)((ulonglong)local_1b8 >> 0x20);
      uVar26 = SUB84(local_1b0,0);
      uVar27 = (int)((ulonglong)local_1b0 >> 0x20);
    }
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)&param_2->field_0x8 = 0;
    *(undefined8 *)&param_2->field_0x10 = 0;
    *(undefined8 *)&param_2->field_0x18 = 0;
    uVar1 = *(uint *)(&`public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
                       ::__l2::EdgeIndices + iVar12);
    if ((3 < uVar1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                            ,0x310,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TVector<double,3> *)(*pcVar3)();
      return pTVar11;
    }
    *(double *)(&param_2->field_0x0 + (longlong)(int)uVar1 * 8) =
         dVar9 - (double)CONCAT44(uVar29,uVar28);
    uVar1 = *(uint *)((longlong)
                      &`public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TTetrahedron<double>::FindClosestPointAndBary(Chaos::TVector<double,3>_const&___ptr64,Chaos::TVector<double,4>&___ptr64,double)const___ptr64'
                       ::__l2::EdgeIndices + (longlong)iVar12 * 8 + 4);
    if ((3 < uVar1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                            ,0x310,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TVector<double,3> *)(*pcVar3)();
      return pTVar11;
    }
    *(ulonglong *)(&param_2->field_0x0 + (longlong)(int)uVar1 * 8) = CONCAT44(uVar29,uVar28);
    *(undefined4 *)__return_storage_ptr__ = uVar22;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar23;
    *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar24;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar25;
    *(ulonglong *)&__return_storage_ptr__->field_0x10 = CONCAT44(uVar27,uVar26);
  }
  else {
    *(double *)param_2 = local_180;
    *(double *)&param_2->field_0x8 = local_178;
    *(double *)&param_2->field_0x10 = local_170;
    *(double *)&param_2->field_0x18 = ((dVar9 - local_180) - local_178) - local_170;
    uVar18 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar18;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  }
  return __return_storage_ptr__;
}

// GetFirstThreeBarycentricCoordinates @ 143ec2f30

TVector<double,3> * __thiscall
Chaos::TTetrahedron<double>::GetFirstThreeBarycentricCoordinates
          (TTetrahedron<double> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1)

{
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_30 = *(double *)&this->X[3].field_0x8;
  local_48 = *(double *)(this->X + 3);
  local_18 = *(double *)&this->X[3].field_0x10;
  local_78 = *(double *)param_1 - local_48;
  local_70 = *(double *)&param_1->field_0x8 - local_30;
  local_68 = *(double *)&param_1->field_0x10 - local_18;
  local_58 = *(double *)this->X - local_48;
  local_50 = *(double *)(this->X + 1) - local_48;
  local_48 = *(double *)(this->X + 2) - local_48;
  local_40 = *(double *)&this->X[0].field_0x8 - local_30;
  local_38 = *(double *)&this->X[1].field_0x8 - local_30;
  local_30 = *(double *)&this->X[2].field_0x8 - local_30;
  local_28 = *(double *)&this->X[0].field_0x10 - local_18;
  local_20 = *(double *)&this->X[1].field_0x10 - local_18;
  local_18 = *(double *)&this->X[2].field_0x10 - local_18;
  RowMaj3x3RobustSolveLinearSystem<double,Chaos::TVector<double,3>_>
            (__return_storage_ptr__,&local_58,(TVector<double,3> *)&local_78);
  return __return_storage_ptr__;
}

// GetTriangles @ 143feac00

TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TTetrahedron<double>::GetTriangles
          (TTetrahedron<double> *this,
          TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> *pTVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x48,8,4,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  dVar2 = *(double *)&this->X[0].field_0x8;
  dVar19 = *(double *)&this->X[3].field_0x10 - *(double *)&this->X[0].field_0x10;
  dVar20 = *(double *)(this->X + 3) - *(double *)this->X;
  dVar11 = *(double *)&this->X[3].field_0x8 - dVar2;
  dVar21 = *(double *)&this->X[2].field_0x10 - *(double *)&this->X[0].field_0x10;
  dVar10 = *(double *)(this->X + 2) - *(double *)this->X;
  dVar12 = *(double *)&this->X[2].field_0x8 - dVar2;
  uVar6 = *(undefined8 *)this->X;
  uVar7 = *(undefined8 *)&this->X[0].field_0x8;
  uVar3 = *(undefined8 *)&this->X[0].field_0x10;
  if (0.0 < ((dVar20 * dVar21 - dVar19 * dVar10) * (*(double *)&this->X[1].field_0x8 - dVar2) +
             (dVar19 * dVar12 - dVar11 * dVar21) * (*(double *)(this->X + 1) - *(double *)this->X) +
            (dVar11 * dVar10 - dVar20 * dVar12) *
            (*(double *)&this->X[1].field_0x10 - *(double *)&this->X[0].field_0x10)) *
            __real_3fc5555555555555) {
    uVar4 = *(undefined8 *)&this->X[1].field_0x10;
    uVar5 = *(undefined8 *)&this->X[2].field_0x10;
    uVar13 = *(undefined8 *)(this->X + 2);
    uVar14 = *(undefined8 *)&this->X[2].field_0x8;
    uVar15 = *(undefined8 *)(this->X + 1);
    uVar16 = *(undefined8 *)&this->X[1].field_0x8;
    if (*piVar1 < 1) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar18;
      }
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)pFVar8 = uVar6;
    *(undefined8 *)(pFVar8 + 8) = uVar7;
    *(undefined8 *)(pFVar8 + 0x10) = uVar3;
    *(undefined8 *)(pFVar8 + 0x18) = uVar13;
    *(undefined8 *)(pFVar8 + 0x20) = uVar14;
    *(undefined8 *)(pFVar8 + 0x28) = uVar5;
    *(undefined8 *)(pFVar8 + 0x30) = uVar15;
    *(undefined8 *)(pFVar8 + 0x38) = uVar16;
    *(undefined8 *)(pFVar8 + 0x40) = uVar4;
    uVar3 = *(undefined8 *)&this->X[0].field_0x10;
    uVar4 = *(undefined8 *)this->X;
    uVar5 = *(undefined8 *)&this->X[0].field_0x8;
    uVar6 = *(undefined8 *)&this->X[3].field_0x10;
    uVar7 = *(undefined8 *)&this->X[1].field_0x10;
    uVar13 = *(undefined8 *)(this->X + 1);
    uVar14 = *(undefined8 *)&this->X[1].field_0x8;
    uVar15 = *(undefined8 *)(this->X + 3);
    uVar16 = *(undefined8 *)&this->X[3].field_0x8;
    if (*piVar1 < 2) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar18;
      }
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar8 + 0x48) = uVar4;
    *(undefined8 *)(pFVar8 + 0x50) = uVar5;
    *(undefined8 *)(pFVar8 + 0x58) = uVar3;
    *(undefined8 *)(pFVar8 + 0x60) = uVar13;
    *(undefined8 *)(pFVar8 + 0x68) = uVar14;
    *(undefined8 *)(pFVar8 + 0x70) = uVar7;
    *(undefined8 *)(pFVar8 + 0x78) = uVar15;
    *(undefined8 *)(pFVar8 + 0x80) = uVar16;
    *(undefined8 *)(pFVar8 + 0x88) = uVar6;
    uVar3 = *(undefined8 *)&this->X[0].field_0x10;
    uVar4 = *(undefined8 *)this->X;
    uVar5 = *(undefined8 *)&this->X[0].field_0x8;
    uVar6 = *(undefined8 *)&this->X[2].field_0x10;
    uVar7 = *(undefined8 *)&this->X[3].field_0x10;
    uVar13 = *(undefined8 *)(this->X + 3);
    uVar14 = *(undefined8 *)&this->X[3].field_0x8;
    uVar15 = *(undefined8 *)(this->X + 2);
    uVar16 = *(undefined8 *)&this->X[2].field_0x8;
    if (*piVar1 < 3) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar18;
      }
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar8 + 0x90) = uVar4;
    *(undefined8 *)(pFVar8 + 0x98) = uVar5;
    *(undefined8 *)(pFVar8 + 0xa0) = uVar3;
    *(undefined8 *)(pFVar8 + 0xa8) = uVar13;
    *(undefined8 *)(pFVar8 + 0xb0) = uVar14;
    *(undefined8 *)(pFVar8 + 0xb8) = uVar7;
    *(undefined8 *)(pFVar8 + 0xc0) = uVar15;
    *(undefined8 *)(pFVar8 + 200) = uVar16;
    *(undefined8 *)(pFVar8 + 0xd0) = uVar6;
    uVar3 = *(undefined8 *)&this->X[1].field_0x10;
    uVar22 = *(undefined4 *)(this->X + 1);
    uVar23 = *(undefined4 *)&this->X[1].field_0x4;
    uVar24 = *(undefined4 *)&this->X[1].field_0x8;
    uVar25 = *(undefined4 *)&this->X[1].field_0xc;
    uVar6 = *(undefined8 *)&this->X[3].field_0x10;
    uVar30 = (undefined4)uVar6;
    uVar31 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar6 = *(undefined8 *)&this->X[2].field_0x10;
    uVar7 = *(undefined8 *)(this->X + 2);
    uVar4 = *(undefined8 *)&this->X[2].field_0x8;
    uVar26 = *(undefined4 *)(this->X + 3);
    uVar27 = *(undefined4 *)&this->X[3].field_0x4;
    uVar28 = *(undefined4 *)&this->X[3].field_0x8;
    uVar29 = *(undefined4 *)&this->X[3].field_0xc;
    if (*piVar1 < 4) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar18;
      }
    }
    local_88 = (undefined4)uVar3;
    uStack_84 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_80 = (undefined4)uVar7;
    uStack_7c = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_78 = (undefined4)uVar4;
    uStack_74 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_70 = (undefined4)uVar6;
    uStack_6c = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_1c8 = local_88;
    uStack_1c4 = uStack_84;
    uStack_1c0 = uStack_80;
    uStack_1bc = uStack_7c;
    uStack_1b8 = uStack_78;
    uStack_1b4 = uStack_74;
    uStack_1b0 = uStack_70;
    uStack_1ac = uStack_6c;
  }
  else {
    uVar4 = *(undefined8 *)&this->X[2].field_0x10;
    uVar5 = *(undefined8 *)&this->X[1].field_0x10;
    uVar13 = *(undefined8 *)(this->X + 1);
    uVar14 = *(undefined8 *)&this->X[1].field_0x8;
    uVar15 = *(undefined8 *)(this->X + 2);
    uVar16 = *(undefined8 *)&this->X[2].field_0x8;
    if (*piVar1 < 1) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar18;
      }
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)pFVar8 = uVar6;
    *(undefined8 *)(pFVar8 + 8) = uVar7;
    *(undefined8 *)(pFVar8 + 0x10) = uVar3;
    *(undefined8 *)(pFVar8 + 0x18) = uVar13;
    *(undefined8 *)(pFVar8 + 0x20) = uVar14;
    *(undefined8 *)(pFVar8 + 0x28) = uVar5;
    *(undefined8 *)(pFVar8 + 0x30) = uVar15;
    *(undefined8 *)(pFVar8 + 0x38) = uVar16;
    *(undefined8 *)(pFVar8 + 0x40) = uVar4;
    uVar3 = *(undefined8 *)&this->X[0].field_0x10;
    uVar4 = *(undefined8 *)this->X;
    uVar5 = *(undefined8 *)&this->X[0].field_0x8;
    uVar6 = *(undefined8 *)&this->X[1].field_0x10;
    uVar7 = *(undefined8 *)&this->X[3].field_0x10;
    uVar13 = *(undefined8 *)(this->X + 3);
    uVar14 = *(undefined8 *)&this->X[3].field_0x8;
    uVar15 = *(undefined8 *)(this->X + 1);
    uVar16 = *(undefined8 *)&this->X[1].field_0x8;
    if (*piVar1 < 2) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar18;
      }
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar8 + 0x48) = uVar4;
    *(undefined8 *)(pFVar8 + 0x50) = uVar5;
    *(undefined8 *)(pFVar8 + 0x58) = uVar3;
    *(undefined8 *)(pFVar8 + 0x60) = uVar13;
    *(undefined8 *)(pFVar8 + 0x68) = uVar14;
    *(undefined8 *)(pFVar8 + 0x70) = uVar7;
    *(undefined8 *)(pFVar8 + 0x78) = uVar15;
    *(undefined8 *)(pFVar8 + 0x80) = uVar16;
    *(undefined8 *)(pFVar8 + 0x88) = uVar6;
    uVar3 = *(undefined8 *)&this->X[0].field_0x10;
    uVar4 = *(undefined8 *)this->X;
    uVar5 = *(undefined8 *)&this->X[0].field_0x8;
    uVar6 = *(undefined8 *)&this->X[3].field_0x10;
    uVar7 = *(undefined8 *)&this->X[2].field_0x10;
    uVar13 = *(undefined8 *)(this->X + 2);
    uVar14 = *(undefined8 *)&this->X[2].field_0x8;
    uVar15 = *(undefined8 *)(this->X + 3);
    uVar16 = *(undefined8 *)&this->X[3].field_0x8;
    if (*piVar1 < 3) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar18;
      }
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar8 + 0x90) = uVar4;
    *(undefined8 *)(pFVar8 + 0x98) = uVar5;
    *(undefined8 *)(pFVar8 + 0xa0) = uVar3;
    *(undefined8 *)(pFVar8 + 0xa8) = uVar13;
    *(undefined8 *)(pFVar8 + 0xb0) = uVar14;
    *(undefined8 *)(pFVar8 + 0xb8) = uVar7;
    *(undefined8 *)(pFVar8 + 0xc0) = uVar15;
    *(undefined8 *)(pFVar8 + 200) = uVar16;
    *(undefined8 *)(pFVar8 + 0xd0) = uVar6;
    uVar3 = *(undefined8 *)&this->X[1].field_0x10;
    uVar22 = *(undefined4 *)(this->X + 1);
    uVar23 = *(undefined4 *)&this->X[1].field_0x4;
    uVar24 = *(undefined4 *)&this->X[1].field_0x8;
    uVar25 = *(undefined4 *)&this->X[1].field_0xc;
    uVar6 = *(undefined8 *)&this->X[2].field_0x10;
    uVar30 = (undefined4)uVar6;
    uVar31 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar6 = *(undefined8 *)&this->X[3].field_0x10;
    uVar7 = *(undefined8 *)(this->X + 3);
    uVar4 = *(undefined8 *)&this->X[3].field_0x8;
    uVar26 = *(undefined4 *)(this->X + 2);
    uVar27 = *(undefined4 *)&this->X[2].field_0x4;
    uVar28 = *(undefined4 *)&this->X[2].field_0x8;
    uVar29 = *(undefined4 *)&this->X[2].field_0xc;
    if (*piVar1 < 4) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar18;
      }
    }
    local_1c8 = (undefined4)uVar3;
    uStack_1c4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_1c0 = (undefined4)uVar7;
    uStack_1bc = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_1b8 = (undefined4)uVar4;
    uStack_1b4 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_1b0 = (undefined4)uVar6;
    uStack_1ac = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0xd8) = uVar22;
  *(undefined4 *)(pFVar8 + 0xdc) = uVar23;
  *(undefined4 *)(pFVar8 + 0xe0) = uVar24;
  *(undefined4 *)(pFVar8 + 0xe4) = uVar25;
  *(undefined4 *)(pFVar8 + 0xe8) = local_1c8;
  *(undefined4 *)(pFVar8 + 0xec) = uStack_1c4;
  *(undefined4 *)(pFVar8 + 0xf0) = uStack_1c0;
  *(undefined4 *)(pFVar8 + 0xf4) = uStack_1bc;
  *(undefined4 *)(pFVar8 + 0xf8) = uStack_1b8;
  *(undefined4 *)(pFVar8 + 0xfc) = uStack_1b4;
  *(undefined4 *)(pFVar8 + 0x100) = uStack_1b0;
  *(undefined4 *)(pFVar8 + 0x104) = uStack_1ac;
  *(undefined4 *)(pFVar8 + 0x108) = uVar26;
  *(undefined4 *)(pFVar8 + 0x10c) = uVar27;
  *(undefined4 *)(pFVar8 + 0x110) = uVar28;
  *(undefined4 *)(pFVar8 + 0x114) = uVar29;
  *(ulonglong *)(pFVar8 + 0x118) = CONCAT44(uVar31,uVar30);
  return __return_storage_ptr__;
}

// Outside @ 143ff2ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Chaos::TTetrahedron<double>::Outside
          (TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  double local_118;
  double local_110;
  FImplicitObject local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [16];
  double local_c0;
  ulonglong local_b8;
  
  dVar9 = __real_3e45798ee0000000;
  dVar8 = __real_3ff0000000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar16 = param_1->ArrayNum;
  uVar14 = 0;
  if (0 < iVar16) {
    lVar15 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar14 < iVar16) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_130 = (longlong)iVar16;
        local_138 = (longlong)(int)uVar14;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar2 = (code *)swi(3);
          uVar12 = (*pcVar2)();
          return (bool)uVar12;
        }
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar6 = (*(double *)(pFVar1 + lVar15 + 0x20) - *(double *)(pFVar1 + lVar15 + 8)) *
              (*(double *)(pFVar1 + lVar15 + 0x40) - *(double *)(pFVar1 + lVar15 + 0x10)) -
              (*(double *)(pFVar1 + lVar15 + 0x28) - *(double *)(pFVar1 + lVar15 + 0x10)) *
              (*(double *)(pFVar1 + lVar15 + 0x38) - *(double *)(pFVar1 + lVar15 + 8));
      uVar7 = (*(double *)(pFVar1 + lVar15 + 0x28) - *(double *)(pFVar1 + lVar15 + 0x10)) *
              (*(double *)(pFVar1 + lVar15 + 0x30) - *(double *)(pFVar1 + lVar15)) -
              (*(double *)(pFVar1 + lVar15 + 0x18) - *(double *)(pFVar1 + lVar15)) *
              (*(double *)(pFVar1 + lVar15 + 0x40) - *(double *)(pFVar1 + lVar15 + 0x10));
      local_118 = (*(double *)(pFVar1 + lVar15 + 0x18) - *(double *)(pFVar1 + lVar15)) *
                  (*(double *)(pFVar1 + lVar15 + 0x38) - *(double *)(pFVar1 + lVar15 + 8)) -
                  (*(double *)(pFVar1 + lVar15 + 0x20) - *(double *)(pFVar1 + lVar15 + 8)) *
                  (*(double *)(pFVar1 + lVar15 + 0x30) - *(double *)(pFVar1 + lVar15));
      dVar3 = (double)uVar7 * (double)uVar7 + (double)uVar6 * (double)uVar6 + local_118 * local_118;
      if (dVar3 != dVar8) {
        if (dVar9 <= dVar3) {
          local_110 = dVar8 / SQRT(dVar3);
          uVar6 = (double)uVar6 * local_110;
          uVar7 = (double)uVar7 * local_110;
          local_118 = local_110 * local_118;
        }
        else {
          local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
      }
      dVar10 = local_118;
      FImplicitObject::FImplicitObject(&local_108,0,'\x02');
      local_108._padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
      local_e8 = *(double *)(pFVar1 + lVar15);
      dStack_e0 = *(double *)(pFVar1 + lVar15 + 8);
      dVar3 = *(double *)param_2 - local_e8;
      local_d8 = *(double *)(pFVar1 + lVar15 + 0x10);
      local_d0._8_4_ = (int)uVar7;
      local_d0._0_8_ = uVar6;
      local_d0._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
      dVar5 = *(double *)&param_2->field_0x10 - local_d8;
      local_c0 = local_118;
      dVar4 = *(double *)&param_2->field_0x8 - dStack_e0;
      FImplicitObject::~FImplicitObject(&local_108);
      if (param_3 < (double)uVar6 * dVar3 + (double)uVar7 * dVar4 + dVar10 * dVar5) {
        return true;
      }
      iVar16 = param_1->ArrayNum;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x48;
    } while ((int)uVar14 < iVar16);
  }
  return false;
}

