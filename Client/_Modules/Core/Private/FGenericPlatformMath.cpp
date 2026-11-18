// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 32

// CountLeadingZeros @ 1415b97b0

uint __cdecl FGenericPlatformMath::CountLeadingZeros(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0x20;
  }
  iVar4 = 0x10;
  if (param_1 < 0x10000) {
    iVar4 = 0;
  }
  uVar3 = param_1 >> 0x10;
  if (param_1 < 0x10000) {
    uVar3 = param_1;
  }
  if (0xff < uVar3) {
    uVar3 = uVar3 >> 8;
    iVar4 = iVar4 + 8;
  }
  iVar2 = iVar4 + 4;
  if (uVar3 < 0x10) {
    iVar2 = iVar4;
  }
  uVar1 = uVar3 >> 4;
  if (uVar3 < 0x10) {
    uVar1 = uVar3;
  }
  iVar4 = iVar2 + 2;
  if (uVar1 < 4) {
    iVar4 = iVar2;
  }
  uVar3 = uVar1 >> 2;
  if (uVar1 < 4) {
    uVar3 = uVar1;
  }
  iVar2 = iVar4 + 1;
  if (uVar3 < 2) {
    iVar2 = iVar4;
  }
  return 0x1f - iVar2;
}

// Atan2 @ 14162a1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl FGenericPlatformMath::Atan2(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar2 = (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar1 = fVar2;
  fVar4 = fVar3;
  if (fVar2 <= fVar3) {
    fVar1 = fVar3;
    fVar4 = fVar2;
  }
  if (fVar1 == 0.0) {
    return 0.0;
  }
  fVar4 = fVar4 / fVar1;
  fVar1 = fVar4 * fVar4;
  fVar4 = ((((((fVar1 * ___real_3bec5a11 - ___real_3d0f9abd) * fVar1 + ___real_3da745af) * fVar1 -
             ___real_3e08f4dd) * fVar1 + ___real_3e4b54ca) * fVar1 - ___real_3eaa9fbe) * fVar1 +
          __real_3f800000) * fVar4;
  if (fVar2 > fVar3) {
    fVar4 = __real_3fc90fdb - fVar4;
  }
  if (param_2 < 0.0) {
    fVar4 = __real_40490fdb - fVar4;
  }
  if (param_1 < 0.0) {
    fVar4 = (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000);
  }
  return fVar4;
}

// Atan2 @ 14162a2b0

double __cdecl FGenericPlatformMath::Atan2(double param_1,double param_2)

{
  double dVar1;
  
  if ((param_2 == 0.0) && (param_1 == 0.0)) {
    return 0.0;
  }
  dVar1 = atan2(param_1,param_2);
  return dVar1;
}

// AutoTest @ 14162acf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FGenericPlatformMath::AutoTest(void)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  TBigInt<256,1> local_138;
  TBigInt<256,1> local_118;
  int local_f8 [8];
  TBigInt<256,1> local_d8;
  TBigInt<256,1> local_b8;
  TBigInt<256,1> local_98;
  TBigInt<256,1> local_78;
  TBigInt<256,1> local_58;
  TBigInt<256,1> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  FPlatformMathTest<FMicrosoftPlatformMathBase>::AutoTest();
  FPlatformMathTest<FGenericPlatformMath>::AutoTest();
  lVar3 = 0;
  local_f8[0] = -0x3535353e;
  local_f8[3] = 0;
  local_f8[4] = 0;
  local_f8[5] = 0;
  local_f8[6] = 0;
  local_f8[7] = 0;
  local_138.Bits[3] = 0;
  local_138.Bits[4] = 0;
  local_138.Bits[5] = 0;
  local_138.Bits[6] = 0;
  local_138.Bits[7] = 0;
  local_f8[1] = 1;
  local_f8[2] = 0;
  local_138.Bits[0] = 0xcacacac2;
  local_138.Bits[1] = 1;
  local_138.Bits[2] = 0;
  TBigInt<256,1>::ShiftLeftInternal(&local_138,0x58);
  TBigInt<256,1>::ShiftRightInternal(&local_138,0x58);
  do {
    if (*(int *)((longlong)local_138.Bits + lVar3) != *(int *)((longlong)local_f8 + lVar3)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shift == TestValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                         ,0xbd,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      break;
    }
    lVar3 = lVar3 + 4;
  } while (lVar3 < 0x20);
  local_58.Bits[6] = 0;
  local_58.Bits[7] = 0;
  local_58.Bits[0] = 0x3a14c1;
  local_58.Bits[1] = 0;
  local_d8.Bits[6] = 0;
  local_d8.Bits[7] = 0;
  local_d8.Bits[0] = 0xca1;
  local_d8.Bits[1] = 0;
  local_58.Bits[2] = 0;
  local_58.Bits[3] = 0;
  local_58.Bits[4] = 0;
  local_58.Bits[5] = 0;
  local_d8.Bits[2] = 0;
  local_d8.Bits[3] = 0;
  local_d8.Bits[4] = 0;
  local_d8.Bits[5] = 0;
  local_b8.Bits[0] = 0;
  local_b8.Bits[1] = 0;
  local_b8.Bits[2] = 0;
  local_b8.Bits[3] = 0;
  local_b8.Bits[4] = 0;
  local_b8.Bits[5] = 0;
  local_b8.Bits[6] = 0;
  local_b8.Bits[7] = 0;
  TBigInt<256,1>::DivideWithRemainder(&local_58,&local_d8,&local_b8);
  if ((local_58.Bits._0_8_ != 0x499) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dividend.ToInt() == 1177LL",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                         ,0xc5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((local_b8.Bits._0_8_ != 0x488) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Remainder.ToInt() == 1160LL",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                         ,0xc6,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_38.Bits[6] = 0;
  local_38.Bits[7] = 0;
  local_38.Bits[0] = 0;
  local_38.Bits[1] = 1;
  local_98.Bits[6] = 0;
  local_98.Bits[7] = 0;
  local_38.Bits[2] = 0;
  local_38.Bits[3] = 0;
  local_38.Bits[4] = 0;
  local_38.Bits[5] = 0;
  local_98.Bits[0] = 0x381;
  local_98.Bits[1] = 0;
  local_98.Bits[2] = 0;
  local_98.Bits[3] = 0;
  local_98.Bits[4] = 0;
  local_98.Bits[5] = 0;
  local_78.Bits[0] = 0;
  local_78.Bits[1] = 0;
  local_78.Bits[2] = 0;
  local_78.Bits[3] = 0;
  local_78.Bits[4] = 0;
  local_78.Bits[5] = 0;
  local_78.Bits[6] = 0;
  local_78.Bits[7] = 0;
  TBigInt<256,1>::DivideWithRemainder(&local_38,&local_98,&local_78);
  if ((CONCAT44(local_38.Bits[1],local_38.Bits[0]) != 0x490fb2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dividend.ToInt() == 4788146LL",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                         ,0xcf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((local_78.Bits._0_8_ != 0x14e) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Remainder.ToInt() == 334LL",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                         ,0xd0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_118.Bits[6] = 0;
  local_118.Bits[7] = 0;
  local_118.Bits[0] = 1;
  local_118.Bits[1] = 0;
  local_118.Bits[2] = 0;
  local_118.Bits[3] = 0;
  local_118.Bits[4] = 0;
  local_118.Bits[5] = 0;
  TBigInt<256,1>::ShiftLeftInternal(&local_118,0x20);
  if ((local_118.Bits._0_8_ != 0x100000000) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.ToInt() == 4294967296LL",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                         ,0xd7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TBigInt<256,1>::ShiftRightInternal(&local_118,0x20);
  if ((local_118.Bits._0_8_ != 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.ToInt() == 1LL",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMath.cpp"
                         ,0xd9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// FloorLog2 @ 14163be70

uint __cdecl FGenericPlatformMath::FloorLog2(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1 >> 0x10;
  if (param_1 < 0x10000) {
    uVar2 = param_1;
  }
  uVar4 = 0x10;
  if (param_1 < 0x10000) {
    uVar4 = 0;
  }
  if (0xff < uVar2) {
    uVar2 = uVar2 >> 8;
    uVar4 = uVar4 + 8;
  }
  uVar3 = uVar2 >> 4;
  uVar1 = uVar4 + 4;
  if (uVar2 < 0x10) {
    uVar3 = uVar2;
    uVar1 = uVar4;
  }
  uVar2 = uVar1 + 2;
  if (uVar3 < 4) {
    uVar2 = uVar1;
  }
  uVar4 = uVar3 >> 2;
  if (uVar3 < 4) {
    uVar4 = uVar3;
  }
  uVar1 = uVar2 + 1;
  if (uVar4 < 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}

// Fmod @ 14163bf80

float __cdecl FGenericPlatformMath::Fmod(float param_1,float param_2)

{
  float fVar1;
  float local_res10 [2];
  float local_res18 [4];
  float *local_28;
  float *local_20;
  
  if ((float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    if (param_2 == 0.0) {
      local_28 = local_res10;
      local_20 = local_res18;
      local_res10[0] = param_1;
      local_res18[0] = param_2;
      `FGenericPlatformMath::FmodReportError'::__l5::<lambda_1>::operator()(&local_28);
    }
    return 0.0;
  }
  fVar1 = fmodf(param_1,param_2);
  return fVar1;
}

// Fmod @ 14163bff0

double __cdecl FGenericPlatformMath::Fmod(double param_1,double param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double local_res18;
  double local_res20;
  double *local_28;
  double *local_20;
  
  uVar2 = SUB84(param_2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)param_2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar3,uVar2) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar3,uVar2) == __real_3e45798ee2308c3a) {
    if (param_2 == 0.0) {
      local_28 = &local_res18;
      local_20 = &local_res20;
      local_res18 = param_1;
      local_res20 = param_2;
      `FGenericPlatformMath::FmodReportError'::__l5::<lambda_1>::operator()(&local_28);
    }
    return 0.0;
  }
  dVar1 = fmod(param_1,param_2);
  return dVar1;
}

// FmodReportError @ 14163c060

void __cdecl FGenericPlatformMath::FmodReportError(float param_1,float param_2)

{
  float local_res8 [2];
  float local_res10 [6];
  float *local_18;
  float *local_10;
  
  if (param_2 == 0.0) {
    local_18 = local_res8;
    local_10 = local_res10;
    local_res8[0] = param_1;
    local_res10[0] = param_2;
    `FGenericPlatformMath::FmodReportError'::__l5::<lambda_1>::operator()(&local_18);
  }
  return;
}

// FmodReportError @ 14163c0b0

void __cdecl FGenericPlatformMath::FmodReportError(double param_1,double param_2)

{
  double local_res8;
  double local_res10 [3];
  double *local_18;
  double *local_10;
  
  if (param_2 == 0.0) {
    local_18 = &local_res8;
    local_10 = local_res10;
    local_res8 = param_1;
    local_res10[0] = param_2;
    `FGenericPlatformMath::FmodReportError'::__l5::<lambda_1>::operator()(&local_18);
  }
  return;
}

// GetRandSeed @ 141645bf0

int __cdecl FGenericPlatformMath::GetRandSeed(void)

{
  return GSRandSeed;
}

// SRand @ 141659540

float __cdecl FGenericPlatformMath::SRand(void)

{
  float fVar1;
  float fVar2;
  
  GSRandSeed = GSRandSeed * 0xbb38435 + 0x3619636b;
  fVar1 = (float)(GSRandSeed & 0x7fffffU | 0x3f800000);
  fVar2 = (float)truncf(fVar1);
  return fVar1 - fVar2;
}

// SRandInit @ 1416595a0

void __cdecl FGenericPlatformMath::SRandInit(int param_1)

{
  GSRandSeed = param_1;
  return;
}

// Acos @ 141c906d0

float __cdecl FGenericPlatformMath::Acos(float param_1)

{
  float fVar1;
  
  fVar1 = __real_bf800000;
  if ((__real_bf800000 <= param_1) && (fVar1 = param_1, __real_3f800000 <= param_1)) {
    fVar1 = __real_3f800000;
  }
  fVar1 = acosf(fVar1);
  return fVar1;
}

// Acos @ 141c90700

double __cdecl FGenericPlatformMath::Acos(double param_1)

{
  double dVar1;
  
  dVar1 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= param_1) && (dVar1 = param_1, __real_3ff0000000000000 <= param_1))
  {
    dVar1 = __real_3ff0000000000000;
  }
  dVar1 = acos(dVar1);
  return dVar1;
}

// Asin @ 141c90820

float __cdecl FGenericPlatformMath::Asin(float param_1)

{
  float fVar1;
  
  fVar1 = __real_bf800000;
  if ((__real_bf800000 <= param_1) && (fVar1 = param_1, __real_3f800000 <= param_1)) {
    fVar1 = __real_3f800000;
  }
  fVar1 = asinf(fVar1);
  return fVar1;
}

// Asin @ 141c90850

double __cdecl FGenericPlatformMath::Asin(double param_1)

{
  double dVar1;
  
  dVar1 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= param_1) && (dVar1 = param_1, __real_3ff0000000000000 <= param_1))
  {
    dVar1 = __real_3ff0000000000000;
  }
  dVar1 = asin(dVar1);
  return dVar1;
}

// Atan @ 141c90880

float __cdecl FGenericPlatformMath::Atan(float param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018ff99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = atanf(param_1);
  return fVar1;
}

// Atan @ 141c90890

double __cdecl FGenericPlatformMath::Atan(double param_1)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018ff81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = atan(param_1);
  return dVar1;
}

// Cos @ 141c93680

float __cdecl FGenericPlatformMath::Cos(float param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fe61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = cosf(param_1);
  return fVar1;
}

// Cos @ 141c93690

double __cdecl FGenericPlatformMath::Cos(double param_1)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fe55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = cos(param_1);
  return dVar1;
}

// Exp2 @ 141c93760

float __cdecl FGenericPlatformMath::Exp2(float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_40000000,param_1);
  return fVar1;
}

// Exp2 @ 141c93780

double __cdecl FGenericPlatformMath::Exp2(double param_1)

{
  double dVar1;
  
  dVar1 = pow(__real_4000000000000000,param_1);
  return dVar1;
}

// Exp @ 141c937a0

float __cdecl FGenericPlatformMath::Exp(float param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018ffb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = expf(param_1);
  return fVar1;
}

// Exp @ 141c937b0

double __cdecl FGenericPlatformMath::Exp(double param_1)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018ffa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = exp(param_1);
  return dVar1;
}

// Loge @ 141c95550

float __cdecl FGenericPlatformMath::Loge(float param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fc15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = logf(param_1);
  return fVar1;
}

// Loge @ 141c95560

double __cdecl FGenericPlatformMath::Loge(double param_1)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = log(param_1);
  return dVar1;
}

// Sin @ 141c99420

float __cdecl FGenericPlatformMath::Sin(float param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fe79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = sinf(param_1);
  return fVar1;
}

// Sin @ 141c99430

double __cdecl FGenericPlatformMath::Sin(double param_1)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fe6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = sin(param_1);
  return dVar1;
}

// Tan @ 141c99440

float __cdecl FGenericPlatformMath::Tan(float param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018ffd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = tanf(param_1);
  return fVar1;
}

// Tan @ 141c99450

double __cdecl FGenericPlatformMath::Tan(double param_1)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018ffc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = tan(param_1);
  return dVar1;
}

// operator() @ 150479470

bool __thiscall `FGenericPlatformMath::FmodReportError'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5444248214528065420>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5444248214528065420>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504794e0

bool __thiscall `FGenericPlatformMath::FmodReportError'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5444248214528065412>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5444248214528065412>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

