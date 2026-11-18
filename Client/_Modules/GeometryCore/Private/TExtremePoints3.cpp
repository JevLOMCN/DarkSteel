// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// TExtremePoints3<float> @ 143365f40

TExtremePoints3<float> * __thiscall
UE::Geometry::TExtremePoints3<float>::TExtremePoints3<float>
          (TExtremePoints3<float> *this,int param_1,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3,float param_4)

{
  TFunctionRef<bool___cdecl(int)> local_28;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_18;
  
  this->Dimension = 0;
  this->Extreme[0] = 0;
  this->Extreme[1] = 0;
  this->Extreme[2] = 0;
  *(undefined8 *)(this->Extreme + 3) = 0;
  *(undefined8 *)((longlong)&(this->Origin).field0_0x0 + 4) = 0;
  *(undefined8 *)&this->Basis[0].field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->Basis[0].field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&this->Basis[1].field0_0x0 + 4) = 0;
  *(undefined8 *)&this->Basis[2].field0_0x0 = 0;
  this->Basis[2].field0_0x0._s_0.Z = 0.0;
  local_28._0_8_ = *(undefined8 *)param_3;
  local_28._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  Init(this,param_1,&local_18,&local_28,param_4);
  return this;
}

// TExtremePoints3<double> @ 143365fc0

TExtremePoints3<double> * __thiscall
UE::Geometry::TExtremePoints3<double>::TExtremePoints3<double>
          (TExtremePoints3<double> *this,int param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3,double param_4)

{
  TFunctionRef<bool___cdecl(int)> local_28;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_18;
  
  this->Dimension = 0;
  this->Extreme[0] = 0;
  this->Extreme[1] = 0;
  this->Extreme[2] = 0;
  this->Extreme[3] = 0;
  (this->Origin).field0_0x0._s_0.X = 0.0;
  (this->Origin).field0_0x0._s_0.Y = 0.0;
  (this->Origin).field0_0x0._s_0.Z = 0.0;
  this->Basis[0].field0_0x0._s_0.X = 0.0;
  this->Basis[0].field0_0x0._s_0.Y = 0.0;
  this->Basis[0].field0_0x0._s_0.Z = 0.0;
  this->Basis[1].field0_0x0._s_0.X = 0.0;
  this->Basis[1].field0_0x0._s_0.Y = 0.0;
  this->Basis[1].field0_0x0._s_0.Z = 0.0;
  this->Basis[2].field0_0x0._s_0.X = 0.0;
  this->Basis[2].field0_0x0._s_0.Y = 0.0;
  this->Basis[2].field0_0x0._s_0.Z = 0.0;
  local_28._0_8_ = *(undefined8 *)param_3;
  local_28._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  Init(this,param_1,&local_18,&local_28,param_4);
  return this;
}

// Init @ 1433b4f00

void __thiscall
UE::Geometry::TExtremePoints3<float>::Init
          (TExtremePoints3<float> *this,int param_1,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_res10 [2];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1bc;
  float local_1b4;
  int local_1b0 [4];
  int local_1a0 [4];
  int local_190 [2];
  int local_188 [2];
  int local_180 [2];
  int local_178 [2];
  int local_170 [2];
  int local_168 [2];
  int local_160 [2];
  int local_158 [2];
  int local_150 [2];
  int local_148 [2];
  int local_140 [2];
  int local_138 [2];
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined1 local_d4 [172];
  
  iVar10 = 0;
  if (0 < param_1) {
    do {
      local_190[0] = iVar10;
      cVar6 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_190);
      if (cVar6 != '\0') {
        local_188[0] = iVar10;
        (**(code **)param_2)(local_d4,*(undefined8 *)&param_2->field_0x8,local_188);
        local_180[0] = iVar10;
        (**(code **)param_2)(&local_1d8,*(undefined8 *)&param_2->field_0x8,local_180);
        local_178[0] = iVar10;
        (**(code **)param_2)(&local_1e8,*(undefined8 *)&param_2->field_0x8,local_178);
        local_1b0[0] = iVar10;
        local_1b0[1] = iVar10;
        local_1b0[2] = iVar10;
        local_1a0[0] = iVar10;
        local_1a0[1] = iVar10;
        local_1a0[2] = iVar10;
        iVar9 = iVar10;
        while (iVar9 = iVar9 + 1, iVar9 < param_1) {
          local_170[0] = iVar9;
          cVar6 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_170);
          if (cVar6 != '\0') {
            local_res10[0] = iVar9;
            (**(code **)param_2)(&local_130,*(undefined8 *)&param_2->field_0x8,local_res10);
            if (local_1d8 <= local_130) {
              if (local_1e8 < local_130) {
                local_1e8 = local_130;
                local_1a0[0] = iVar9;
              }
            }
            else {
              local_1d8 = local_130;
              local_1b0[0] = iVar9;
            }
            local_res10[0] = iVar9;
            (**(code **)param_2)(&local_130,*(undefined8 *)&param_2->field_0x8,local_res10);
            if (local_1d4 <= local_12c) {
              if (local_1e4 < local_12c) {
                local_1e4 = local_12c;
                local_1a0[1] = iVar9;
              }
            }
            else {
              local_1d4 = local_12c;
              local_1b0[1] = iVar9;
            }
            local_res10[0] = iVar9;
            (**(code **)param_2)(&local_130,*(undefined8 *)&param_2->field_0x8,local_res10);
            if (local_1d0 <= local_128) {
              if (local_1e0 < local_128) {
                local_1a0[2] = iVar9;
                local_1e0 = local_128;
              }
            }
            else {
              local_1b0[2] = iVar9;
              local_1d0 = local_128;
            }
          }
        }
        fVar13 = local_1e8 - local_1d8;
        fVar11 = local_1e4 - local_1d4;
        fVar15 = fVar13;
        if (fVar13 <= fVar11) {
          fVar15 = fVar11;
        }
        uVar8 = (ulonglong)(fVar13 < fVar11);
        if (fVar15 < local_1e0 - local_1d0) {
          uVar8 = 2;
          fVar15 = local_1e0 - local_1d0;
        }
        local_168[0] = local_1b0[uVar8];
        this->Extreme[1] = local_1a0[uVar8];
        this->Extreme[0] = local_168[0];
        if (fVar15 <= param_4) {
          this->Dimension = 0;
          this->Extreme[1] = local_168[0];
          this->Extreme[2] = local_168[0];
          this->Extreme[3] = local_168[0];
          return;
        }
        (**(code **)param_2)(&local_e0,*(undefined8 *)&param_2->field_0x8,local_168);
        *(undefined8 *)&(this->Origin).field0_0x0 = local_e0;
        (this->Origin).field0_0x0._s_0.Z = local_d8;
        local_160[0] = this->Extreme[1];
        (**(code **)param_2)(&local_124,*(undefined8 *)&param_2->field_0x8,local_160);
        fVar13 = 0.0;
        local_120 = local_120 - (this->Origin).field0_0x0._s_0.Y;
        local_11c = local_11c - (this->Origin).field0_0x0._s_0.Z;
        this->Basis[0].field0_0x0._s_0.X = local_124 - (this->Origin).field0_0x0._s_0.X;
        this->Basis[0].field0_0x0._s_0.Y = local_120;
        this->Basis[0].field0_0x0._s_0.Z = local_11c;
        fVar11 = this->Basis[0].field0_0x0._s_0.X;
        fVar12 = SQRT(fVar11 * fVar11 + local_120 * local_120 + local_11c * local_11c);
        if (fVar12 <= 0.0) {
          this->Basis[0].field0_0x0._s_0.X = 0.0;
          this->Basis[0].field0_0x0._s_0.Y = 0.0;
          this->Basis[0].field0_0x0._s_0.Z = 0.0;
        }
        else {
          fVar12 = __real_3f800000 / fVar12;
          this->Basis[0].field0_0x0._s_0.X = fVar12 * fVar11;
          this->Basis[0].field0_0x0._s_0.Y = fVar12 * local_120;
          this->Basis[0].field0_0x0._s_0.Z = fVar12 * local_11c;
        }
        uVar3 = *(undefined8 *)&(this->Origin).field0_0x0;
        fVar11 = (this->Origin).field0_0x0._s_0.Z;
        uVar4 = *(undefined8 *)&this->Basis[0].field0_0x0;
        local_1c8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        fVar18 = local_1c8._4_4_;
        fVar12 = this->Basis[0].field0_0x0._s_0.Z;
        local_1bc._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
        fVar2 = local_1bc._4_4_;
        local_1bc._0_4_ = (float)uVar4;
        fVar1 = (float)local_1bc;
        iVar9 = iVar10;
        local_1c8 = uVar3;
        local_1c0 = fVar11;
        local_1bc = uVar4;
        local_1b4 = fVar12;
        do {
          local_158[0] = iVar9;
          cVar6 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_158);
          if (cVar6 != '\0') {
            local_150[0] = iVar9;
            (**(code **)param_2)(&local_118,*(undefined8 *)&param_2->field_0x8,local_150);
            fVar19 = (local_114 - fVar18) * fVar2 + (local_118 - (float)local_1c8) * fVar1 +
                     (local_110 - fVar11) * fVar12;
            fVar14 = (fVar2 * fVar19 + fVar18) - local_114;
            fVar17 = (fVar1 * fVar19 + (float)local_1c8) - local_118;
            fVar19 = (fVar12 * fVar19 + fVar11) - local_110;
            fVar19 = fVar14 * fVar14 + fVar17 * fVar17 + fVar19 * fVar19;
            if (fVar13 < fVar19) {
              this->Extreme[2] = iVar9;
              fVar13 = fVar19;
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < param_1);
        if (fVar15 * param_4 < SQRT(fVar13)) {
          local_148[0] = this->Extreme[2];
          (**(code **)param_2)(&local_10c,*(undefined8 *)&param_2->field_0x8,local_148);
          local_108 = local_108 - (this->Origin).field0_0x0._s_0.Y;
          local_104 = local_104 - (this->Origin).field0_0x0._s_0.Z;
          this->Basis[1].field0_0x0._s_0.X = local_10c - (this->Origin).field0_0x0._s_0.X;
          this->Basis[1].field0_0x0._s_0.Y = local_108;
          this->Basis[1].field0_0x0._s_0.Z = local_104;
          fVar11 = this->Basis[1].field0_0x0._s_0.X;
          fVar13 = this->Basis[0].field0_0x0._s_0.Y;
          fVar12 = this->Basis[0].field0_0x0._s_0.Z;
          fVar18 = fVar11 * this->Basis[0].field0_0x0._s_0.X + fVar13 * local_108 +
                   fVar12 * local_104;
          this->Basis[1].field0_0x0._s_0.X = fVar11 - fVar18 * this->Basis[0].field0_0x0._s_0.X;
          this->Basis[1].field0_0x0._s_0.Y = local_108 - fVar18 * fVar13;
          this->Basis[1].field0_0x0._s_0.Z = local_104 - fVar18 * fVar12;
          bVar7 = UE::Math::TVector<float>::Normalize(this->Basis + 1,param_4);
          if (bVar7) {
            fVar11 = this->Basis[1].field0_0x0._s_0.Y;
            fVar13 = this->Basis[1].field0_0x0._s_0.Z;
            fVar12 = this->Basis[0].field0_0x0._s_0.X;
            fVar18 = this->Basis[1].field0_0x0._s_0.X;
            this->Basis[2].field0_0x0._s_0.X =
                 fVar13 * this->Basis[0].field0_0x0._s_0.Y -
                 fVar11 * this->Basis[0].field0_0x0._s_0.Z;
            this->Basis[2].field0_0x0._s_0.Y =
                 fVar18 * this->Basis[0].field0_0x0._s_0.Z - fVar12 * fVar13;
            this->Basis[2].field0_0x0._s_0.Z =
                 fVar12 * fVar11 - fVar18 * this->Basis[0].field0_0x0._s_0.Y;
            bVar7 = UE::Math::TVector<float>::Normalize(this->Basis + 2,param_4);
            uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
            if (bVar7) {
              uVar3 = *(undefined8 *)&this->Basis[2].field0_0x0;
              fVar20 = 0.0;
              fVar11 = this->Basis[2].field0_0x0._s_0.X;
              fVar21 = 0.0;
              fVar13 = (this->Origin).field0_0x0._s_0.X;
              fVar19 = this->Basis[2].field0_0x0._s_0.Z;
              fVar12 = (this->Origin).field0_0x0._s_0.Z;
              fVar18 = this->Basis[2].field0_0x0._s_0.Z;
              fVar1 = (this->Origin).field0_0x0._s_0.Y;
              fVar2 = this->Basis[2].field0_0x0._s_0.Y;
              local_f0._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
              fVar17 = local_f0._4_4_;
              local_f0._0_4_ = (float)uVar3;
              fVar14 = (float)local_f0;
              local_f0 = uVar3;
              local_e8 = fVar19;
              do {
                local_140[0] = iVar10;
                cVar6 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_140);
                if (cVar6 != '\0') {
                  local_138[0] = iVar10;
                  (**(code **)param_2)(&local_100,*(undefined8 *)&param_2->field_0x8,local_138);
                  fVar16 = (fVar17 * local_fc + fVar14 * local_100 + fVar19 * local_f8) -
                           (fVar11 * fVar13 + fVar1 * fVar2 + fVar12 * fVar18);
                  if (fVar20 < (float)((uint)fVar16 & uVar5)) {
                    if (fVar16 <= 0.0) {
                      iVar9 = (0.0 <= fVar16) - 1;
                    }
                    else {
                      iVar9 = 1;
                    }
                    fVar21 = (float)iVar9;
                    this->Extreme[3] = iVar10;
                    fVar20 = (float)((uint)fVar16 & uVar5);
                  }
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < param_1);
              if (fVar15 * param_4 < fVar20) {
                if (0.0 < fVar21) {
                  iVar10 = this->Extreme[3];
                  this->Extreme[3] = this->Extreme[2];
                  this->Extreme[2] = iVar10;
                }
                this->Dimension = 3;
                return;
              }
              this->Dimension = 2;
              iVar10 = this->Extreme[2];
              goto LAB_1433b54d7;
            }
          }
        }
        this->Dimension = 1;
        iVar10 = this->Extreme[1];
        this->Extreme[2] = iVar10;
LAB_1433b54d7:
        this->Extreme[3] = iVar10;
        return;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_1);
  }
  this->Dimension = 0;
  return;
}

// Init @ 1433b5680

void __thiscall
UE::Geometry::TExtremePoints3<double>::Init
          (TExtremePoints3<double> *this,int param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  uint uVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  uint uVar24;
  uint uVar25;
  double dVar26;
  int local_res10 [2];
  int local_278 [4];
  int local_268 [4];
  int local_258 [2];
  int local_250 [2];
  int local_248 [2];
  int local_240 [2];
  int local_238 [2];
  int local_230 [2];
  int local_228 [2];
  int local_220 [2];
  int local_218 [2];
  int local_210 [2];
  int local_208 [2];
  int local_200 [2];
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_100;
  double dStack_f8;
  double local_f0;
  undefined1 local_e8 [192];
  double dVar17;
  
  iVar13 = 0;
  if (0 < param_1) {
    do {
      local_258[0] = iVar13;
      cVar9 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_258);
      if (cVar9 != '\0') {
        local_250[0] = iVar13;
        (**(code **)param_2)(local_e8,*(undefined8 *)&param_2->field_0x8,local_250);
        local_248[0] = iVar13;
        (**(code **)param_2)(&local_1e0,*(undefined8 *)&param_2->field_0x8,local_248);
        local_240[0] = iVar13;
        (**(code **)param_2)(&local_1f8,*(undefined8 *)&param_2->field_0x8,local_240);
        local_278[0] = iVar13;
        local_278[1] = iVar13;
        local_278[2] = iVar13;
        local_268[0] = iVar13;
        local_268[1] = iVar13;
        local_268[2] = iVar13;
        iVar12 = iVar13;
        while (iVar12 = iVar12 + 1, iVar12 < param_1) {
          local_238[0] = iVar12;
          cVar9 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_238);
          if (cVar9 != '\0') {
            local_res10[0] = iVar12;
            (**(code **)param_2)(&local_198,*(undefined8 *)&param_2->field_0x8,local_res10);
            if (local_1e0 <= local_198) {
              if (local_1f8 < local_198) {
                local_1f8 = local_198;
                local_268[0] = iVar12;
              }
            }
            else {
              local_1e0 = local_198;
              local_278[0] = iVar12;
            }
            local_res10[0] = iVar12;
            (**(code **)param_2)(&local_198,*(undefined8 *)&param_2->field_0x8,local_res10);
            if (local_1d8 <= local_190) {
              if (local_1f0 < local_190) {
                local_1f0 = local_190;
                local_268[1] = iVar12;
              }
            }
            else {
              local_1d8 = local_190;
              local_278[1] = iVar12;
            }
            local_res10[0] = iVar12;
            (**(code **)param_2)(&local_198,*(undefined8 *)&param_2->field_0x8,local_res10);
            if (local_1d0 <= local_188) {
              if (local_1e8 < local_188) {
                local_268[2] = iVar12;
                local_1e8 = local_188;
              }
            }
            else {
              local_278[2] = iVar12;
              local_1d0 = local_188;
            }
          }
        }
        dVar21 = local_1f8 - local_1e0;
        dVar15 = local_1f0 - local_1d8;
        dVar6 = dVar21;
        if (dVar21 <= dVar15) {
          dVar6 = dVar15;
        }
        uVar11 = (ulonglong)(dVar21 < dVar15);
        if (dVar6 < local_1e8 - local_1d0) {
          uVar11 = 2;
          dVar6 = local_1e8 - local_1d0;
        }
        local_230[0] = local_278[uVar11];
        this->Extreme[1] = local_268[uVar11];
        this->Extreme[0] = local_230[0];
        if (dVar6 <= param_4) {
          this->Dimension = 0;
          this->Extreme[1] = local_230[0];
          this->Extreme[2] = local_230[0];
          this->Extreme[3] = local_230[0];
          return;
        }
        (**(code **)param_2)(&local_100,*(undefined8 *)&param_2->field_0x8,local_230);
        (this->Origin).field0_0x0._s_0.X = local_100;
        (this->Origin).field0_0x0._s_0.Y = dStack_f8;
        (this->Origin).field0_0x0._s_0.Z = local_f0;
        local_228[0] = this->Extreme[1];
        (**(code **)param_2)(&local_180,*(undefined8 *)&param_2->field_0x8,local_228);
        dVar21 = 0.0;
        local_178 = local_178 - (this->Origin).field0_0x0._s_0.Y;
        local_170 = local_170 - (this->Origin).field0_0x0._s_0.Z;
        this->Basis[0].field0_0x0._s_0.X = local_180 - (this->Origin).field0_0x0._s_0.X;
        this->Basis[0].field0_0x0._s_0.Y = local_178;
        auVar18._0_8_ = local_178 * local_178;
        auVar18._8_8_ = 0;
        this->Basis[0].field0_0x0._s_0.Z = local_170;
        dVar15 = this->Basis[0].field0_0x0._s_0.X;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = dVar15 * dVar15 + auVar18._0_8_ + local_170 * local_170;
        auVar19 = sqrtpd(auVar18,auVar19);
        if (auVar19._0_8_ <= 0.0) {
          this->Basis[0].field0_0x0._s_0.X = 0.0;
          this->Basis[0].field0_0x0._s_0.Y = 0.0;
          this->Basis[0].field0_0x0._s_0.Z = 0.0;
        }
        else {
          dVar4 = __real_3ff0000000000000 / auVar19._0_8_;
          this->Basis[0].field0_0x0._s_0.X = dVar4 * dVar15;
          this->Basis[0].field0_0x0._s_0.Y = dVar4 * local_178;
          this->Basis[0].field0_0x0._s_0.Z = dVar4 * local_170;
        }
        local_1c8 = (this->Origin).field0_0x0._s_0.X;
        dVar1 = (this->Origin).field0_0x0._s_0.Y;
        dVar15 = (this->Origin).field0_0x0._s_0.Z;
        dVar2 = this->Basis[0].field0_0x0._s_0.X;
        dVar3 = this->Basis[0].field0_0x0._s_0.Y;
        dVar4 = this->Basis[0].field0_0x0._s_0.Z;
        iVar12 = iVar13;
        dStack_1c0 = dVar1;
        local_1b8 = dVar15;
        local_1b0 = dVar2;
        dStack_1a8 = dVar3;
        local_1a0 = dVar4;
        do {
          local_220[0] = iVar12;
          cVar9 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_220);
          if (cVar9 != '\0') {
            local_218[0] = iVar12;
            (**(code **)param_2)(&local_168,*(undefined8 *)&param_2->field_0x8,local_218);
            dVar16 = (local_160 - dVar1) * dVar3 + (local_168 - local_1c8) * dVar2 +
                     (local_158 - dVar15) * dVar4;
            dVar22 = (dVar2 * dVar16 + local_1c8) - local_168;
            dVar23 = (dVar3 * dVar16 + dVar1) - local_160;
            dVar16 = (dVar4 * dVar16 + dVar15) - local_158;
            dVar16 = dVar22 * dVar22 + dVar23 * dVar23 + dVar16 * dVar16;
            if (dVar21 < dVar16) {
              this->Extreme[2] = iVar12;
              dVar21 = dVar16;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < param_1);
        dVar6 = dVar6 * param_4;
        if (dVar6 < SQRT(dVar21)) {
          local_210[0] = this->Extreme[2];
          (**(code **)param_2)(&local_150,*(undefined8 *)&param_2->field_0x8,local_210);
          local_148 = local_148 - (this->Origin).field0_0x0._s_0.Y;
          local_140 = local_140 - (this->Origin).field0_0x0._s_0.Z;
          this->Basis[1].field0_0x0._s_0.X = local_150 - (this->Origin).field0_0x0._s_0.X;
          this->Basis[1].field0_0x0._s_0.Y = local_148;
          this->Basis[1].field0_0x0._s_0.Z = local_140;
          dVar15 = this->Basis[1].field0_0x0._s_0.X;
          dVar21 = dVar15 * this->Basis[0].field0_0x0._s_0.X +
                   this->Basis[0].field0_0x0._s_0.Y * local_148 +
                   this->Basis[0].field0_0x0._s_0.Z * local_140;
          this->Basis[1].field0_0x0._s_0.X = dVar15 - dVar21 * this->Basis[0].field0_0x0._s_0.X;
          this->Basis[1].field0_0x0._s_0.Y = local_148 - dVar21 * this->Basis[0].field0_0x0._s_0.Y;
          this->Basis[1].field0_0x0._s_0.Z = local_140 - dVar21 * this->Basis[0].field0_0x0._s_0.Z;
          bVar10 = UE::Math::TVector<double>::Normalize(this->Basis + 1,param_4);
          if (bVar10) {
            dVar15 = this->Basis[0].field0_0x0._s_0.X;
            dVar21 = this->Basis[1].field0_0x0._s_0.X;
            this->Basis[2].field0_0x0._s_0.X =
                 this->Basis[1].field0_0x0._s_0.Z * this->Basis[0].field0_0x0._s_0.Y -
                 this->Basis[1].field0_0x0._s_0.Y * this->Basis[0].field0_0x0._s_0.Z;
            this->Basis[2].field0_0x0._s_0.Y =
                 dVar21 * this->Basis[0].field0_0x0._s_0.Z -
                 dVar15 * this->Basis[1].field0_0x0._s_0.Z;
            this->Basis[2].field0_0x0._s_0.Z =
                 dVar15 * this->Basis[1].field0_0x0._s_0.Y -
                 dVar21 * this->Basis[0].field0_0x0._s_0.Y;
            bVar10 = UE::Math::TVector<double>::Normalize(this->Basis + 2,param_4);
            uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            if (bVar10) {
              dVar22 = this->Basis[2].field0_0x0._s_0.X;
              dVar23 = this->Basis[2].field0_0x0._s_0.Y;
              dVar15 = this->Basis[2].field0_0x0._s_0.Z;
              uVar24 = 0;
              uVar25 = 0;
              dVar21 = (this->Origin).field0_0x0._s_0.X;
              dVar26 = 0.0;
              dVar4 = this->Basis[2].field0_0x0._s_0.X;
              dVar1 = this->Basis[2].field0_0x0._s_0.Y;
              dVar2 = (this->Origin).field0_0x0._s_0.Y;
              dVar3 = this->Basis[2].field0_0x0._s_0.Z;
              dVar16 = (this->Origin).field0_0x0._s_0.Z;
              local_120 = dVar22;
              dStack_118 = dVar23;
              local_110 = dVar15;
              do {
                local_208[0] = iVar13;
                cVar9 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_208);
                if (cVar9 != '\0') {
                  local_200[0] = iVar13;
                  (**(code **)param_2)(&local_138,*(undefined8 *)&param_2->field_0x8,local_200);
                  dVar5 = (dVar23 * local_130 + dVar22 * local_138 + dVar15 * local_128) -
                          (dVar21 * dVar4 + dVar1 * dVar2 + dVar3 * dVar16);
                  uVar14 = SUB84(dVar5,0) & uVar7;
                  uVar20 = (uint)((ulonglong)dVar5 >> 0x20) & uVar8;
                  dVar17 = (double)CONCAT44(uVar20,uVar14);
                  if ((double)CONCAT44(uVar25,uVar24) <= dVar17 &&
                      dVar17 != (double)CONCAT44(uVar25,uVar24)) {
                    if (dVar5 <= 0.0) {
                      iVar12 = (0.0 <= dVar5) - 1;
                    }
                    else {
                      iVar12 = 1;
                    }
                    dVar26 = (double)iVar12;
                    this->Extreme[3] = iVar13;
                    uVar24 = uVar14;
                    uVar25 = uVar20;
                  }
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < param_1);
              if (dVar6 <= (double)CONCAT44(uVar25,uVar24) &&
                  (double)CONCAT44(uVar25,uVar24) != dVar6) {
                if (0.0 < dVar26) {
                  iVar13 = this->Extreme[3];
                  this->Extreme[3] = this->Extreme[2];
                  this->Extreme[2] = iVar13;
                }
                this->Dimension = 3;
                return;
              }
              this->Dimension = 2;
              iVar13 = this->Extreme[2];
              goto LAB_1433b5c3b;
            }
          }
        }
        this->Dimension = 1;
        iVar13 = this->Extreme[1];
        this->Extreme[2] = iVar13;
LAB_1433b5c3b:
        this->Extreme[3] = iVar13;
        return;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_1);
  }
  this->Dimension = 0;
  return;
}

