// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 21

// FLinearColor @ 1417a2d80

FLinearColor * __thiscall FLinearColor::FLinearColor(FLinearColor *this,TVector4<float> *param_1)

{
  (this->field0_0x0)._s_0.R = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.G = (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.B = (param_1->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.A = (param_1->field0_0x0)._s_0.W;
  return this;
}

// FLinearColor @ 1417a2da0

FLinearColor * __thiscall FLinearColor::FLinearColor(FLinearColor *this,TVector4<double> *param_1)

{
  (this->field0_0x0)._s_0.R = (float)(param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.G = (float)(param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.B = (float)(param_1->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.A = (float)(param_1->field0_0x0)._s_0.W;
  return this;
}

// FLinearColor @ 1417a2de0

FLinearColor * __thiscall FLinearColor::FLinearColor(FLinearColor *this,TVector<float> *param_1)

{
  (this->field0_0x0)._s_0.R = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.G = (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.B = (param_1->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.A = 1.0;
  return this;
}

// FLinearColor @ 1417a2e10

FLinearColor * __thiscall FLinearColor::FLinearColor(FLinearColor *this,TVector<double> *param_1)

{
  double dVar1;
  
  (this->field0_0x0)._s_0.R = (float)(param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.G = (float)(param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.A = 1.0;
  (this->field0_0x0)._s_0.B = (float)dVar1;
  return this;
}

// FLinearColor @ 1417a2e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __thiscall FLinearColor::FLinearColor(FLinearColor *this,FFloat16Color *param_1)

{
  FFloat16Color FVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  uint uVar4;
  undefined1 auVar5 [14];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  
  FVar1 = *param_1;
  auVar2._8_4_ = 0;
  auVar2._0_2_ = FVar1.R.Encoded;
  auVar2._2_2_ = FVar1.G.Encoded;
  auVar2._4_2_ = FVar1.B.Encoded;
  auVar2._6_2_ = FVar1.A.Encoded;
  auVar2._12_2_ = FVar1.A.Encoded.Encoded;
  auVar3._8_2_ = FVar1.B.Encoded.Encoded;
  auVar3._0_2_ = FVar1.R.Encoded;
  auVar3._2_2_ = FVar1.G.Encoded;
  auVar3._4_2_ = FVar1.B.Encoded;
  auVar3._6_2_ = FVar1.A.Encoded;
  auVar3._10_4_ = auVar2._10_4_;
  auVar5._6_8_ = 0;
  auVar5._0_6_ = auVar3._8_6_;
  uVar13 = ___xmm_00007fff00007fff00007fff00007fff & FVar1.R.Encoded.Encoded;
  uVar9 = (uint)CONCAT82(SUB148(auVar5 << 0x40,6),FVar1.G.Encoded.Encoded);
  uVar14 = _UNK_1506895a4 & uVar9;
  uVar16 = _UNK_1506895a8 & auVar3._8_4_;
  uVar4 = auVar2._10_4_ >> 0x10;
  uVar18 = _UNK_1506895ac & uVar4;
  uVar6 = -(uint)(_UNK_150689584 < (int)uVar14) & _UNK_1506896e4;
  uVar7 = -(uint)(_UNK_150689588 < (int)uVar16) & _UNK_1506896e8;
  uVar8 = -(uint)(_UNK_15068958c < (int)uVar18) & _UNK_1506896ec;
  uVar10 = -(uint)(_UNK_150689594 < (int)uVar14) & _UNK_1506895b4;
  uVar11 = -(uint)(_UNK_150689598 < (int)uVar16) & _UNK_1506895b8;
  uVar12 = -(uint)(_UNK_15068959c < (int)uVar18) & _UNK_1506895bc;
  fVar15 = (float)(uVar14 << 0xd) * _UNK_1506896d4;
  fVar17 = (float)(uVar16 << 0xd) * _UNK_1506896d8;
  fVar19 = (float)(uVar18 << 0xd) * _UNK_1506896dc;
  (this->field0_0x0)._s_0.R =
       (float)(-(uint)(___xmm_00007c0000007c0000007c0000007c00 < (int)uVar13) &
               ___xmm_00400000004000000040000000400000 |
               -(uint)(___xmm_00007bff00007bff00007bff00007bff < (int)uVar13) &
               __xmm_7f8000007f8000007f8000007f800000 | (uVar13 ^ FVar1.R.Encoded.Encoded) << 0x10 |
              (uint)((float)(uVar13 << 0xd) * ___xmm_77800000778000007780000077800000));
  (this->field0_0x0)._s_0.G = (float)(uVar10 | uVar6 | (uVar14 ^ uVar9) << 0x10 | (uint)fVar15);
  (this->field0_0x0)._s_0.B =
       (float)(uVar11 | uVar7 | (uVar16 ^ auVar3._8_4_) << 0x10 | (uint)fVar17);
  (this->field0_0x0)._s_0.A = (float)(uVar12 | uVar8 | (uVar18 ^ uVar4) << 0x10 | (uint)fVar19);
  return this;
}

// Desaturate @ 1417c3210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __thiscall
FLinearColor::Desaturate(FLinearColor *this,FLinearColor *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  IConsoleManager *pIVar8;
  FColorSpace *this_00;
  FLinearColor_u_0 *pFVar9;
  float fVar10;
  FLinearColor_u_0 local_38;
  FLinearColor local_28 [2];
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar6 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar8 = IConsoleManager::Get();
      ::CVar = (IConsoleVariable *)
               (**(code **)((longlong)*pIVar8 + 0xc0))(pIVar8,L"r.LegacyLuminanceFactors",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(int *)(lVar6 + 0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      iVar7 = (**(code **)(*(longlong *)::CVar + 200))();
      if (iVar7 == 0) {
        this_00 = UE::Color::FColorSpace::GetWorking();
        pFVar9 = &UE::Color::FColorSpace::GetLuminanceFactors(this_00,local_28)->field0_0x0;
      }
      else {
        pFVar9 = &local_38;
        local_38._0_8_ = ___xmm_3f8000003de147ae3f170a3d3e99999a;
        local_38._8_8_ = _UNK_150689658;
      }
      LuminanceFactors.field0_0x0 = (FLinearColor_u_0)*(FLinearColor_u_0 *)&pFVar9->_s_0;
      _Init_thread_footer(&::_TSS1);
    }
  }
  fVar1 = (this->field0_0x0)._s_0.R;
  fVar2 = (this->field0_0x0)._s_0.G;
  fVar3 = (this->field0_0x0)._s_0.A;
  fVar10 = fVar2 * LuminanceFactors.field0_0x0._s_0.G + fVar1 * LuminanceFactors.field0_0x0._s_0.R +
           (this->field0_0x0)._s_0.B * LuminanceFactors.field0_0x0._s_0.B;
  fVar4 = (this->field0_0x0)._s_0.B;
  fVar5 = (this->field0_0x0)._s_0.B;
  (__return_storage_ptr__->field0_0x0)._s_0.R = (fVar10 - fVar1) * param_1 + fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.G = (fVar10 - fVar2) * param_1 + fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.B = (fVar10 - fVar4) * param_1 + fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar3 - fVar3 * param_1;
  return __return_storage_ptr__;
}

// EvaluateBezier @ 1417c9380

float __cdecl
FLinearColor::EvaluateBezier
          (FLinearColor *param_1,int param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  if ((param_1 == (FLinearColor *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ControlPoints",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\UnrealMath.cpp"
                         ,0x494,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    fVar7 = (float)(*pcVar2)();
    return fVar7;
  }
  if ((param_2 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumPoints >= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\UnrealMath.cpp"
                         ,0x495,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    fVar7 = (float)(*pcVar2)();
    return fVar7;
  }
  fVar7 = param_1[1].field0_0x0._s_0.R;
  fVar8 = param_1[1].field0_0x0._s_0.G;
  fVar25 = param_1[2].field0_0x0._s_0.G;
  fVar12 = param_1[1].field0_0x0._s_0.B;
  fVar15 = (param_1->field0_0x0)._s_0.R;
  fVar11 = param_1[2].field0_0x0._s_0.B;
  fVar9 = param_1[1].field0_0x0._s_0.A;
  fVar21 = (param_1->field0_0x0)._s_0.G;
  fVar24 = (param_1->field0_0x0)._s_0.B;
  fVar23 = param_1[2].field0_0x0._s_0.A;
  fVar13 = (param_1->field0_0x0)._s_0.A;
  fVar10 = __real_3f800000 / (float)(param_2 + -1);
  fVar14 = param_1[2].field0_0x0._s_0.R;
  fVar16 = ((fVar14 - (fVar7 + fVar7)) + fVar15) * __real_40400000;
  fVar17 = ((fVar25 - (fVar8 + fVar8)) + fVar21) * __real_40400000;
  fVar18 = ((fVar11 - (fVar12 + fVar12)) + fVar24) * __real_40400000;
  fVar19 = ((fVar23 - (fVar9 + fVar9)) + fVar13) * __real_40400000;
  fVar22 = ((param_1[3].field0_0x0._s_0.R - fVar14 * __real_40400000) + fVar7 * __real_40400000) -
           fVar15;
  fVar20 = ((param_1[3].field0_0x0._s_0.G - fVar25 * __real_40400000) + fVar8 * __real_40400000) -
           fVar21;
  local_e8 = *(undefined8 *)&param_1->field0_0x0;
  uStack_e0 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  fVar14 = ((param_1[3].field0_0x0._s_0.B - fVar11 * __real_40400000) + fVar12 * __real_40400000) -
           fVar24;
  fVar11 = ((param_1[3].field0_0x0._s_0.A - fVar23 * __real_40400000) + fVar9 * __real_40400000) -
           fVar13;
  pFVar1 = (param_3->AllocatorInstance).Data;
  fVar25 = 0.0;
  fVar7 = ((fVar10 * fVar22 + fVar16) * fVar10 + (fVar7 - fVar15) * __real_40400000) * fVar10;
  fVar15 = (fVar16 + fVar16) * fVar10 * fVar10;
  fVar23 = (fVar18 + fVar18) * fVar10 * fVar10;
  fVar8 = ((fVar10 * fVar20 + fVar17) * fVar10 + (fVar8 - fVar21) * __real_40400000) * fVar10;
  fVar16 = ((fVar10 * fVar14 + fVar18) * fVar10 + (fVar12 - fVar24) * __real_40400000) * fVar10;
  fVar20 = fVar20 * __real_40c00000;
  fVar14 = fVar14 * __real_40c00000;
  fVar22 = fVar22 * __real_40c00000;
  fVar12 = fVar11 * __real_40c00000;
  local_d8 = *(undefined8 *)&param_1->field0_0x0;
  uStack_d0 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  fVar21 = (fVar17 + fVar17) * fVar10 * fVar10;
  fVar24 = (fVar19 + fVar19) * fVar10 * fVar10;
  fVar11 = ((fVar10 * fVar11 + fVar19) * fVar10 + (fVar9 - fVar13) * __real_40400000) * fVar10;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)param_3->ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    fVar7 = (float)(*pcVar2)();
    return fVar7;
  }
  iVar5 = param_3->ArrayNum;
  if (iVar5 == param_3->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar5 + 1;
  uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  pFVar1 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar1 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)(pFVar1 + 8) = uVar3;
  if (param_2 < 2) {
    fVar25 = 0.0;
  }
  else {
    uVar6 = (ulonglong)(param_2 - 1);
    do {
      fVar24 = fVar24 + fVar10 * fVar10 * fVar10 * fVar12;
      fVar23 = fVar23 + fVar10 * fVar10 * fVar10 * fVar14;
      fVar21 = fVar21 + fVar10 * fVar10 * fVar10 * fVar20;
      fVar15 = fVar15 + fVar10 * fVar10 * fVar10 * fVar22;
      local_e8._0_4_ = (float)local_e8 + fVar7;
      local_e8._4_4_ = local_e8._4_4_ + fVar8;
      fVar13 = (float)uStack_e0 + fVar16;
      fVar7 = fVar7 + fVar15;
      pFVar1 = (param_3->AllocatorInstance).Data;
      uStack_e0._4_4_ = uStack_e0._4_4_ + fVar11;
      fVar19 = (float)local_d8 - (float)local_e8;
      fVar8 = fVar8 + fVar21;
      fVar18 = local_d8._4_4_ - local_e8._4_4_;
      fVar16 = fVar16 + fVar23;
      fVar9 = (float)uStack_d0 - fVar13;
      fVar11 = fVar11 + fVar24;
      fVar17 = uStack_d0._4_4_ - uStack_e0._4_4_;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,fVar13);
      local_d8 = local_e8;
      uStack_d0 = uStack_e0;
      fVar25 = fVar25 + SQRT(fVar17 * fVar17 + fVar9 * fVar9 + fVar18 * fVar18 + fVar19 * fVar19);
      if (((pFVar1 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < pFVar1 + (longlong)param_3->ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        fVar7 = (float)(*pcVar2)();
        return fVar7;
      }
      iVar5 = param_3->ArrayNum;
      if (iVar5 == param_3->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar5 + 1;
      pFVar1 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar1 = local_e8;
      *(undefined8 *)(pFVar1 + 8) = uStack_e0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return fVar25;
}

// FromPow22Color @ 1417d01c0

FLinearColor * __cdecl
FLinearColor::FromPow22Color(FLinearColor *__return_storage_ptr__,FColor *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.R = Pow22OneOver255Table[(param_1->field0_0x0)._s_0.R];
  (__return_storage_ptr__->field0_0x0)._s_0.G = Pow22OneOver255Table[(param_1->field0_0x0)._s_0.G];
  (__return_storage_ptr__->field0_0x0)._s_0.B = Pow22OneOver255Table[(param_1->field0_0x0)._s_0.B];
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       (float)(param_1->field0_0x0)._s_0.A * __real_3b808081;
  return __return_storage_ptr__;
}

// GetLuminance @ 1417d4300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall FLinearColor::GetLuminance(FLinearColor *this)

{
  longlong lVar1;
  int iVar2;
  IConsoleManager *pIVar3;
  FColorSpace *this_00;
  FLinearColor_u_0 *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FLinearColor_u_0 local_28;
  FLinearColor local_18;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = IConsoleManager::Get();
      ::CVar = (IConsoleVariable *)
               (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.LegacyLuminanceFactors",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      iVar2 = (**(code **)(*(longlong *)::CVar + 200))();
      if (iVar2 == 0) {
        this_00 = UE::Color::FColorSpace::GetWorking();
        pFVar4 = &UE::Color::FColorSpace::GetLuminanceFactors(this_00,&local_18)->field0_0x0;
      }
      else {
        pFVar4 = &local_28;
        local_28._0_8_ = ___xmm_3f8000003de147ae3f170a3d3e99999a;
        local_28._8_8_ = _UNK_150689658;
      }
      LuminanceFactors.field0_0x0 = (FLinearColor_u_0)*(FLinearColor_u_0 *)&pFVar4->_s_0;
      _Init_thread_footer(&::_TSS1);
    }
  }
  fVar5 = LuminanceFactors.field0_0x0._s_0.G * (this->field0_0x0)._s_0.G;
  fVar6 = LuminanceFactors.field0_0x0._s_0.R * (this->field0_0x0)._s_0.R;
  fVar7 = LuminanceFactors.field0_0x0._s_0.B * (this->field0_0x0)._s_0.B;
  return fVar5 + fVar6 + fVar7;
}

// HSVToLinearRGB @ 1417d97e0

FLinearColor * __thiscall
FLinearColor::HSVToLinearRGB(FLinearColor *this,FLinearColor *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float local_68 [4];
  uint local_58 [20];
  
  fVar4 = fmodf((this->field0_0x0)._s_0.R,__real_43b40000);
  if (fVar4 < 0.0) {
    fVar4 = fVar4 + __real_43b40000;
  }
  local_68[0] = (this->field0_0x0)._s_0.B;
  local_58[1] = 3;
  fVar5 = (this->field0_0x0)._s_0.G;
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  local_58[2] = 1;
  uVar3 = (ulonglong)(fVar4 * __real_3c888889);
  local_58[3] = 2;
  local_58[4] = 0;
  local_58[5] = 1;
  local_58[6] = 1;
  local_58[7] = 0;
  local_58[8] = 3;
  local_58[9] = 1;
  local_58[10] = 2;
  local_58[0xb] = 0;
  local_58[0xc] = 3;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  local_58[0xd] = 1;
  local_58[0xe] = 0;
  local_58[0x10] = 1;
  local_58[0x11] = 2;
  local_58[0] = 0;
  local_58[0xf] = 0;
  fVar4 = fVar4 * __real_3c888889 - (float)(uVar3 & 0xffffffff);
  uVar3 = (ulonglong)(uint)((int)uVar3 + (int)((uVar3 & 0xffffffff) / 6) * -6);
  local_68[1] = (__real_3f800000 - fVar5) * local_68[0];
  local_68[2] = (__real_3f800000 - fVar4 * fVar5) * local_68[0];
  local_68[3] = (__real_3f800000 - (__real_3f800000 - fVar4) * fVar5) * local_68[0];
  uVar1 = local_58[uVar3 * 3 + 1];
  (__return_storage_ptr__->field0_0x0)._s_0.R = local_68[local_58[uVar3 * 3]];
  uVar2 = local_58[uVar3 * 3 + 2];
  (__return_storage_ptr__->field0_0x0)._s_0.G = local_68[uVar1];
  fVar4 = local_68[uVar2];
  (__return_storage_ptr__->field0_0x0)._s_0.A = (this->field0_0x0)._s_0.A;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar4;
  return __return_storage_ptr__;
}

// InitFromString @ 1417daed0

bool __thiscall FLinearColor::InitFromString(FLinearColor *this,FString *param_1)

{
  float *pfVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  (this->field0_0x0)._s_0.A = 1.0;
  pfVar1 = &(this->field0_0x0)._s_0.B;
  (this->field0_0x0)._s_0.G = 0.0;
  *pfVar1 = 0.0;
  (this->field0_0x0)._s_0.R = 0.0;
  pwVar4 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FParse::Value(pwVar3,L"R=",(float *)this);
  if (bVar2) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar2 = FParse::Value(pwVar3,L"G=",&(this->field0_0x0)._s_0.G);
    if (bVar2) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar2 = FParse::Value(pwVar3,L"B=",pfVar1);
      if (bVar2) {
        bVar2 = true;
        goto LAB_1417daf7b;
      }
    }
  }
  bVar2 = false;
LAB_1417daf7b:
  if ((param_1->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FParse::Value(pwVar4,L"A=",&(this->field0_0x0)._s_0.A);
  return bVar2;
}

// LerpUsingHSV @ 1417dfbf0

FLinearColor * __cdecl
FLinearColor::LerpUsingHSV
          (FLinearColor *__return_storage_ptr__,FLinearColor *param_1,FLinearColor *param_2,
          float param_3)

{
  float fVar1;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48;
  FLinearColor_u_0 local_38 [3];
  
  LinearRGBToHSV(param_1,(FLinearColor *)&local_38[0]._s_0);
  LinearRGBToHSV(param_2,(FLinearColor *)&local_48._s_0);
  fVar1 = __real_43b40000;
  if (__real_43340000 <
      (float)((uint)((float)local_38[0]._0_4_ - local_48._s_0.R) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (local_48._s_0.R <= (float)local_38[0]._0_4_) {
      local_48._s_0.R = local_48._s_0.R + __real_43b40000;
    }
    else {
      local_38[0]._0_4_ = (float)local_38[0]._0_4_ + __real_43b40000;
    }
  }
  local_58._s_0.R =
       FGenericPlatformMath::Fmod
                 ((local_48._s_0.R - (float)local_38[0]._0_4_) * param_3 + (float)local_38[0]._0_4_,
                  __real_43b40000);
  if (local_58._s_0.R < 0.0) {
    local_58._s_0.R = local_58._s_0.R + fVar1;
  }
  local_58._s_0.A = 1.0;
  local_58._s_0.G =
       (local_48._s_0.G - (float)local_38[0]._4_4_) * param_3 + (float)local_38[0]._4_4_;
  local_58._s_0.B =
       (local_48._s_0.B - (float)local_38[0]._8_4_) * param_3 + (float)local_38[0]._8_4_;
  HSVToLinearRGB((FLinearColor *)&local_58._s_0,__return_storage_ptr__);
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       ((param_2->field0_0x0)._s_0.A - (param_1->field0_0x0)._s_0.A) * param_3 +
       (param_1->field0_0x0)._s_0.A;
  return __return_storage_ptr__;
}

// LinearRGBToHSV @ 1417e01d0

FLinearColor * __thiscall
FLinearColor::LinearRGBToHSV(FLinearColor *this,FLinearColor *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = (this->field0_0x0)._s_0.R;
  fVar4 = 0.0;
  fVar2 = (this->field0_0x0)._s_0.G;
  fVar3 = (this->field0_0x0)._s_0.B;
  fVar5 = fVar1;
  if (fVar2 <= fVar1) {
    fVar5 = fVar2;
  }
  fVar6 = fVar1;
  if (fVar1 <= fVar2) {
    fVar6 = fVar2;
  }
  if (fVar3 <= fVar5) {
    fVar5 = fVar3;
  }
  if (fVar6 <= fVar3) {
    fVar6 = fVar3;
  }
  fVar7 = fVar6 - fVar5;
  if (0.0 < fVar6) {
    if (fVar6 != fVar5) {
      if (fVar6 == fVar1) {
        fVar4 = FGenericPlatformMath::Fmod
                          (((fVar2 - fVar3) / fVar7) * __real_42700000 + __real_43b40000,
                           __real_43b40000);
      }
      else if (fVar6 == fVar2) {
        fVar4 = ((fVar3 - fVar1) / fVar7) * __real_42700000 + __real_42f00000;
      }
      else if (fVar6 == fVar3) {
        fVar4 = ((fVar1 - fVar2) / fVar7) * __real_42700000 + __real_43700000;
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.A = (this->field0_0x0)._s_0.A;
    (__return_storage_ptr__->field0_0x0)._s_0.R = fVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar7 / fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar6;
  }
  else {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.B = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.A = (this->field0_0x0)._s_0.A;
  }
  return __return_storage_ptr__;
}

// MakeFromColorTemperature @ 1417e17d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __cdecl
FLinearColor::MakeFromColorTemperature(FLinearColor *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = __real_3f800000;
  if (__real_466a6000 <= param_1) {
    param_1 = __real_466a6000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  if (param_1 <= __real_447a0000) {
    param_1 = __real_447a0000;
  }
  fVar4 = ((param_1 * ___real_340a20a1 + ___real_39219ace) * param_1 + ___real_3f5c30ad) /
          ((param_1 * ___real_353e175d + ___real_3a5cd5dd) * param_1 + fVar2);
  fVar3 = ((param_1 * ___real_33349873 + ___real_3831567a) * param_1 + ___real_3ea28216) /
          ((fVar2 - param_1 * ___real_37f30d95) + param_1 * ___real_342d5cb4 * param_1);
  fVar1 = fVar2 / (((fVar4 + fVar4) - fVar3 * __real_41000000) + __real_40800000);
  fVar5 = fVar4 * __real_40400000 * fVar1;
  fVar1 = (fVar3 + fVar3) * fVar1;
  fVar3 = fVar2 / fVar1;
  fVar4 = fVar5 * fVar3;
  fVar3 = ((fVar2 - fVar5) - fVar1) * fVar3;
  fVar1 = (fVar4 * ___real_404f639a - ___real_3fc4c0f4) - fVar3 * ___real_3eff3f82;
  fVar2 = fVar4 * ___real_3f7821d1;
  fVar4 = fVar4 * ___real_3d63ea55;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar1;
  fVar2 = (__real_3ff0211f - fVar2) + fVar3 * ___real_3d2a36a0;
  fVar1 = (fVar4 + fVar3 * ___real_3f875328) - ___real_3e50ec2a;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar1;
  return __return_storage_ptr__;
}

// MakeFromHSV8 @ 1417e1a50

FLinearColor * __cdecl
FLinearColor::MakeFromHSV8
          (FLinearColor *__return_storage_ptr__,uchar param_1,uchar param_2,uchar param_3)

{
  FLinearColor_u_0 local_18;
  
  local_18._s_0.A = 1.0;
  local_18._s_0.R = (float)param_1 * __real_3fb40000;
  local_18._s_0.G = (float)param_2 * __real_3b808081;
  local_18._s_0.B = (float)param_3 * __real_3b808081;
  HSVToLinearRGB((FLinearColor *)&local_18._s_0,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MakeRandomColor @ 1417e2540

FLinearColor * __cdecl FLinearColor::MakeRandomColor(FLinearColor *__return_storage_ptr__)

{
  FLinearColor_u_0 local_18;
  
  LOCK();
  UNLOCK();
  local_18._s_0.G = 1.0;
  local_18._s_0.B = 1.0;
  local_18._s_0.A = 1.0;
  local_18._s_0.R = (float)((uint)s_hue & 0xff) * __real_3fb40000;
  s_hue = (atomic<unsigned_int>)((int)s_hue + 0x9d);
  HSVToLinearRGB((FLinearColor *)&local_18._s_0,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MakeRandomSeededColor @ 1417e2660

FLinearColor * __cdecl
FLinearColor::MakeRandomSeededColor(FLinearColor *__return_storage_ptr__,int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  
  fVar1 = __real_3f800000;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  uVar2 = param_1 * 0xbb38435 + 0x3619636b;
  uVar3 = uVar2 * 0xbb38435 + 0x3619636b;
  (__return_storage_ptr__->field0_0x0)._s_0.R = (float)(uVar2 >> 9 | 0x3f800000) - fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.G = (float)(uVar3 >> 9 | 0x3f800000) - fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       (float)(uVar3 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar1;
  return __return_storage_ptr__;
}

// ToFColor @ 141804280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FColor __thiscall FLinearColor::ToFColor(FLinearColor *this,bool param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined7 in_register_00000011;
  undefined4 *puVar5;
  char in_R8B;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  fVar13 = __real_437f0000;
  fVar12 = __real_3f000000;
  fVar11 = __real_3f800000;
  puVar5 = (undefined4 *)CONCAT71(in_register_00000011,param_1);
  if (in_R8B != '\0') {
    auVar15._4_4_ = _UNK_1506895f4;
    auVar15._0_4_ = ___xmm_39000000390000003900000039000000;
    auVar15._8_4_ = _UNK_1506895f8;
    auVar15._12_4_ = _UNK_1506895fc;
    auVar15 = maxps((undefined1  [16])this->field0_0x0,auVar15);
    auVar16 = minps(auVar15,___xmm_3f7fffff3f7fffff3f7fffff3f7fffff);
    fVar11 = auVar16._0_4_;
    fVar12 = auVar16._4_4_;
    fVar13 = auVar16._8_4_;
    auVar14._4_4_ = stb_fp32_to_srgb8_tab4[(ushort)((uint)((int)fVar12 - _UNK_1506895f4) >> 0x14)];
    auVar14._0_4_ =
         stb_fp32_to_srgb8_tab4
         [(uint)((int)fVar11 - ___xmm_39000000390000003900000039000000) >> 0x14];
    auVar14._8_4_ = stb_fp32_to_srgb8_tab4[(ushort)((uint)((int)fVar13 - _UNK_1506895f8) >> 0x14)];
    auVar14._12_4_ = 0;
    auVar9._0_4_ = (uint)fVar11 >> 0xc & ___xmm_000000ff000000ff000000ff000000ff;
    auVar9._4_4_ = (uint)fVar12 >> 0xc & _UNK_150631f64;
    auVar9._8_4_ = (uint)fVar13 >> 0xc & _UNK_150631f68;
    auVar9._12_4_ = (uint)auVar16._12_4_ >> 0xc & _UNK_150631f6c;
    auVar15 = pmaddwd(auVar14,auVar9 | ___xmm_02000000020000000200000002000000);
    auVar10._4_4_ = auVar15._4_4_ >> 0x10 | (int)(_UNK_1506896c4 * fVar12 + _UNK_150689624);
    auVar10._0_4_ = auVar15._8_4_ >> 0x10 | (int)(_UNK_1506896c8 * fVar13 + _UNK_150689628);
    auVar10._8_4_ =
         auVar15._0_4_ >> 0x10 |
         (int)(___xmm_437f0000000000000000000000000000 * fVar11 +
              ___xmm_3f0000003f0000003f0000003f000000);
    auVar10._12_4_ =
         auVar15._12_4_ >> 0x10 | (int)(_UNK_1506896cc * auVar16._12_4_ + _UNK_15068962c);
    auVar15 = packssdw(auVar10,auVar10);
    sVar1 = auVar15._0_2_;
    sVar2 = auVar15._2_2_;
    sVar3 = auVar15._4_2_;
    sVar4 = auVar15._6_2_;
    *puVar5 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar15[6] - (0xff < sVar4),
                       CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar15[4] - (0xff < sVar3),
                                CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar15[2] - (0xff < sVar2)
                                         ,(0 < sVar1) * (sVar1 < 0x100) * auVar15[0] -
                                          (0xff < sVar1))));
    return (FColor)SUB84(puVar5,0);
  }
  fVar6 = (this->field0_0x0)._s_0.B;
  fVar7 = (this->field0_0x0)._s_0.R;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (__real_3f800000 <= fVar6) {
    fVar6 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar7) {
    fVar7 = __real_3f800000;
  }
  fVar8 = fVar7 * __real_437f0000 + __real_3f000000;
  fVar7 = (this->field0_0x0)._s_0.G;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(char *)puVar5 = (char)(int)(fVar6 * __real_437f0000 + __real_3f000000);
  if (fVar11 <= fVar7) {
    fVar7 = fVar11;
  }
  fVar6 = (this->field0_0x0)._s_0.A;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(char *)((longlong)puVar5 + 1) = (char)(int)(fVar7 * fVar13 + fVar12);
  if (fVar11 <= fVar6) {
    fVar6 = fVar11;
  }
  *(char *)((longlong)puVar5 + 2) = (char)(int)fVar8;
  *(char *)((longlong)puVar5 + 3) = (char)(int)(fVar6 * fVar13 + fVar12);
  return (FColor)SUB84(puVar5,0);
}

// ToFColorSRGB @ 1418043d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FColor __thiscall FLinearColor::ToFColorSRGB(FLinearColor *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 *in_RDX;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar11._4_4_ = _UNK_1506895f4;
  auVar11._0_4_ = ___xmm_39000000390000003900000039000000;
  auVar11._8_4_ = _UNK_1506895f8;
  auVar11._12_4_ = _UNK_1506895fc;
  auVar11 = maxps((undefined1  [16])this->field0_0x0,auVar11);
  auVar12 = minps(auVar11,___xmm_3f7fffff3f7fffff3f7fffff3f7fffff);
  fVar7 = auVar12._0_4_;
  fVar8 = auVar12._4_4_;
  fVar9 = auVar12._8_4_;
  auVar10._4_4_ = stb_fp32_to_srgb8_tab4[(ushort)((uint)((int)fVar8 - _UNK_1506895f4) >> 0x14)];
  auVar10._0_4_ =
       stb_fp32_to_srgb8_tab4[(uint)((int)fVar7 - ___xmm_39000000390000003900000039000000) >> 0x14];
  auVar10._8_4_ = stb_fp32_to_srgb8_tab4[(ushort)((uint)((int)fVar9 - _UNK_1506895f8) >> 0x14)];
  auVar10._12_4_ = 0;
  auVar5._0_4_ = (uint)fVar7 >> 0xc & ___xmm_000000ff000000ff000000ff000000ff;
  auVar5._4_4_ = (uint)fVar8 >> 0xc & _UNK_150631f64;
  auVar5._8_4_ = (uint)fVar9 >> 0xc & _UNK_150631f68;
  auVar5._12_4_ = (uint)auVar12._12_4_ >> 0xc & _UNK_150631f6c;
  auVar11 = pmaddwd(auVar10,auVar5 | ___xmm_02000000020000000200000002000000);
  auVar6._4_4_ = auVar11._4_4_ >> 0x10 | (int)(_UNK_1506896c4 * fVar8 + _UNK_150689624);
  auVar6._0_4_ = auVar11._8_4_ >> 0x10 | (int)(_UNK_1506896c8 * fVar9 + _UNK_150689628);
  auVar6._8_4_ = auVar11._0_4_ >> 0x10 |
                 (int)(___xmm_437f0000000000000000000000000000 * fVar7 +
                      ___xmm_3f0000003f0000003f0000003f000000);
  auVar6._12_4_ = auVar11._12_4_ >> 0x10 | (int)(_UNK_1506896cc * auVar12._12_4_ + _UNK_15068962c);
  auVar11 = packssdw(auVar6,auVar6);
  sVar1 = auVar11._0_2_;
  sVar2 = auVar11._2_2_;
  sVar3 = auVar11._4_2_;
  sVar4 = auVar11._6_2_;
  *in_RDX = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar11[6] - (0xff < sVar4),
                     CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar11[4] - (0xff < sVar3),
                              CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar11[2] - (0xff < sVar2),
                                       (0 < sVar1) * (sVar1 < 0x100) * auVar11[0] - (0xff < sVar1)))
                    );
  return (FColor)SUB84(in_RDX,0);
}

// ToRGBE @ 1418064c0

FColor __thiscall FLinearColor::ToRGBE(FLinearColor *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColor_u_0 FVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *in_RDX;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar10 = (this->field0_0x0)._s_0.G;
  fVar11 = (this->field0_0x0)._s_0.B;
  fVar12 = (this->field0_0x0)._s_0.R;
  fVar8 = fVar12;
  if (fVar12 <= fVar10) {
    fVar8 = fVar10;
  }
  if (fVar8 <= fVar11) {
    fVar8 = fVar11;
  }
  if (__real_0a4fb11f <= fVar8) {
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar8 = (float)logbf();
    dVar9 = ldexp(__real_3ff0000000000000,7 - (int)fVar8);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar13 = (float)dVar9;
    uVar4 = (uint)(fVar12 * fVar13);
    if ((uVar4 != (uVar4 & 0xff)) || ((int)uVar4 < 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar5.Bits = (*pcVar2)();
        return (FColor_u_0)(FColor_u_0)FVar5._s_0;
      }
    }
    uVar6 = (uint)(fVar10 * fVar13);
    if ((uVar6 != (uVar6 & 0xff)) || ((int)uVar6 < 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar5.Bits = (*pcVar2)();
        return (FColor_u_0)(FColor_u_0)FVar5._s_0;
      }
    }
    uVar7 = (uint)(fVar11 * fVar13);
    if ((uVar7 != (uVar7 & 0xff)) || ((int)uVar7 < 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar5.Bits = (*pcVar2)();
        return (FColor_u_0)(FColor_u_0)FVar5._s_0;
      }
    }
    uVar1 = (int)fVar8 + 0x81;
    if ((uVar1 != (uVar1 & 0xff)) || ((int)uVar1 < 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar5.Bits = (*pcVar2)();
        return (FColor_u_0)(FColor_u_0)FVar5._s_0;
      }
    }
    *in_RDX = CONCAT13((char)uVar1,(int3)CONCAT31(CONCAT21((short)uVar4,(char)uVar6),(char)uVar7));
  }
  else {
    *in_RDX = 0;
  }
  return (FColor)SUB84(in_RDX,0);
}

// ToString @ 141807460

FString * __thiscall FLinearColor::ToString(FLinearColor *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"(R=%f,G=%f,B=%f,A=%f)");
  return __return_storage_ptr__;
}

