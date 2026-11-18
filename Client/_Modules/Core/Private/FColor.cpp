// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FromHex @ 1417cf9d0

FColor __cdecl FColor::FromHex(FString *param_1)

{
  short sVar1;
  wchar_t wVar2;
  int iVar3;
  code *pcVar4;
  undefined3 uVar5;
  bool bVar6;
  FColor_u_0 FVar7;
  FColor FVar8;
  wchar_t *pwVar9;
  char cVar10;
  char cVar11;
  FString *in_RDX;
  ushort uVar12;
  wchar_t wVar13;
  wchar_t wVar14;
  ulonglong uVar15;
  char cVar16;
  ulonglong uVar17;
  int iVar18;
  int3 local_res10;
  char cStackX_13;
  
  iVar3 = (in_RDX->Data).ArrayNum;
  uVar15 = 0;
  if (1 < iVar3) {
    if (iVar3 + -1 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        FVar7.Bits = (*pcVar4)();
        return (FColor_u_0)(FColor_u_0)FVar7._s_0;
      }
    }
    uVar17 = 1;
    if (*(short *)(in_RDX->Data).AllocatorInstance.Data == 0x23) goto LAB_1417cfa31;
  }
  uVar17 = uVar15;
LAB_1417cfa31:
  iVar3 = (in_RDX->Data).ArrayNum;
  iVar18 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar18 = 0;
  }
  iVar3 = (int)uVar17;
  FVar8.field0_0x0 = SUB84(param_1,0);
  if (iVar18 == iVar3 + 3) {
    if (iVar18 <= iVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        FVar7.Bits = (*pcVar4)();
        return (FColor_u_0)(FColor_u_0)FVar7._s_0;
      }
    }
    sVar1 = *(short *)((in_RDX->Data).AllocatorInstance.Data + uVar17 * 2);
    cVar16 = (char)sVar1;
    if ((ushort)(sVar1 - 0x30U) < 10) {
      cVar16 = cVar16 * '\x11' + -0x30;
    }
    else if ((ushort)(sVar1 - 0x61U) < 6) {
      cVar16 = cVar16 * '\x11' + '9';
    }
    else if ((ushort)(sVar1 - 0x41U) < 6) {
      cVar16 = cVar16 * '\x11' + 'Y';
    }
    else {
      cVar16 = '\0';
    }
    pwVar9 = ::FString::operator[](in_RDX,iVar3 + 1);
    wVar13 = *pwVar9;
    cVar10 = (char)wVar13;
    if ((ushort)(wVar13 + L'￐') < 10) {
      uVar15 = (ulonglong)(byte)(cVar10 * '\x11' - 0x30);
    }
    else if ((ushort)(wVar13 + L'ﾟ') < 6) {
      uVar15 = (ulonglong)(byte)(cVar10 * '\x11' + 0x39);
    }
    else if ((ushort)(wVar13 + L'﾿') < 6) {
      uVar15 = (ulonglong)(byte)(cVar10 * '\x11' + 0x59);
    }
    pwVar9 = ::FString::operator[](in_RDX,iVar3 + 2);
    wVar13 = *pwVar9;
    cVar10 = (char)wVar13;
    if ((ushort)(wVar13 + L'￐') < 10) {
      cVar10 = cVar10 * '\x11' + -0x30;
    }
    else if ((ushort)(wVar13 + L'ﾟ') < 6) {
      cVar10 = cVar10 * '\x11' + '9';
    }
    else if ((ushort)(wVar13 + L'﾿') < 6) {
      cVar10 = cVar10 * '\x11' + 'Y';
    }
    else {
      cVar10 = '\0';
    }
    *(char *)((longlong)&(param_1->Data).AllocatorInstance.Data + 2) = cVar16;
    *(char *)&(param_1->Data).AllocatorInstance.Data = cVar10;
    *(char *)((longlong)&(param_1->Data).AllocatorInstance.Data + 1) = (char)uVar15;
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 3) = 0xff;
    return (FColor)FVar8.field0_0x0;
  }
  if (iVar18 == iVar3 + 6) {
    if (iVar18 <= iVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        FVar7.Bits = (*pcVar4)();
        return (FColor_u_0)(FColor_u_0)FVar7._s_0;
      }
    }
    uVar12 = *(ushort *)((in_RDX->Data).AllocatorInstance.Data + uVar17 * 2);
    if (9 < (ushort)(uVar12 - 0x30)) {
      if ((ushort)(uVar12 - 0x61) < 6) {
        uVar12 = (ushort)(byte)((char)uVar12 + 0xa9);
      }
      else if ((ushort)(uVar12 - 0x41) < 6) {
        uVar12 = (ushort)(byte)((char)uVar12 - 0x37);
      }
      else {
        uVar12 = 0;
      }
    }
    pwVar9 = ::FString::operator[](in_RDX,iVar3 + 1);
    wVar13 = *pwVar9;
    cVar16 = (char)wVar13;
    if ((ushort)(wVar13 + L'￐') < 10) {
      cVar16 = cVar16 + -0x30;
    }
    else if ((ushort)(wVar13 + L'ﾟ') < 6) {
      cVar16 = cVar16 + -0x57;
    }
    else if ((ushort)(wVar13 + L'﾿') < 6) {
      cVar16 = cVar16 + -0x37;
    }
    else {
      cVar16 = '\0';
    }
    pwVar9 = ::FString::operator[](in_RDX,iVar3 + 2);
    wVar13 = *pwVar9;
    if (9 < (ushort)(wVar13 + L'￐')) {
      if ((ushort)(wVar13 + L'ﾟ') < 6) {
        wVar13 = (wchar_t)(byte)((char)wVar13 + 0xa9);
      }
      else if ((ushort)(wVar13 + L'﾿') < 6) {
        wVar13 = (wchar_t)(byte)((char)wVar13 - 0x37);
      }
      else {
        wVar13 = L'\0';
      }
    }
    pwVar9 = ::FString::operator[](in_RDX,iVar3 + 3);
    wVar14 = *pwVar9;
    cVar10 = (char)wVar14;
    if ((ushort)(wVar14 + L'￐') < 10) {
      cVar10 = cVar10 + -0x30;
    }
    else if ((ushort)(wVar14 + L'ﾟ') < 6) {
      cVar10 = cVar10 + -0x57;
    }
    else if ((ushort)(wVar14 + L'﾿') < 6) {
      cVar10 = cVar10 + -0x37;
    }
    else {
      cVar10 = '\0';
    }
    pwVar9 = ::FString::operator[](in_RDX,iVar3 + 4);
    wVar14 = *pwVar9;
    if (9 < (ushort)(wVar14 + L'￐')) {
      if ((ushort)(wVar14 + L'ﾟ') < 6) {
        wVar14 = (wchar_t)(byte)((char)wVar14 + 0xa9);
      }
      else if ((ushort)(wVar14 + L'﾿') < 6) {
        wVar14 = (wchar_t)(byte)((char)wVar14 - 0x37);
      }
      else {
        wVar14 = L'\0';
      }
    }
    pwVar9 = ::FString::operator[](in_RDX,iVar3 + 5);
    wVar2 = *pwVar9;
    cVar11 = (char)wVar2;
    if ((ushort)(wVar2 + L'￐') < 10) {
      cVar11 = cVar11 + -0x30;
    }
    else if ((ushort)(wVar2 + L'ﾟ') < 6) {
      cVar11 = cVar11 + -0x57;
    }
    else if ((ushort)(wVar2 + L'﾿') < 6) {
      cVar11 = cVar11 + -0x37;
    }
    else {
      cVar11 = '\0';
    }
    _local_res10 = CONCAT13(0xff,(uint3)CONCAT11((char)uVar12 * '\x10' + cVar16,
                                                 (char)wVar13 * '\x10' + cVar10) << 8);
    _local_res10 = CONCAT31(stack0x00000011,(char)wVar14 * '\x10' + cVar11);
    *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = _local_res10;
    return (FColor)FVar8.field0_0x0;
  }
  if (iVar18 != iVar3 + 8) {
    *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = 0;
    return (FColor)FVar8.field0_0x0;
  }
  if (iVar18 <= iVar3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x113,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      FVar7.Bits = (*pcVar4)();
      return (FColor_u_0)(FColor_u_0)FVar7._s_0;
    }
  }
  uVar12 = *(ushort *)((in_RDX->Data).AllocatorInstance.Data + uVar17 * 2);
  if (9 < (ushort)(uVar12 - 0x30)) {
    if ((ushort)(uVar12 - 0x61) < 6) {
      uVar12 = (ushort)(byte)((char)uVar12 + 0xa9);
    }
    else if ((ushort)(uVar12 - 0x41) < 6) {
      uVar12 = (ushort)(byte)((char)uVar12 - 0x37);
    }
    else {
      uVar12 = 0;
    }
  }
  pwVar9 = ::FString::operator[](in_RDX,iVar3 + 1);
  wVar13 = *pwVar9;
  cVar16 = (char)wVar13;
  if ((ushort)(wVar13 + L'￐') < 10) {
    cVar16 = cVar16 + -0x30;
  }
  else if ((ushort)(wVar13 + L'ﾟ') < 6) {
    cVar16 = cVar16 + -0x57;
  }
  else if ((ushort)(wVar13 + L'﾿') < 6) {
    cVar16 = cVar16 + -0x37;
  }
  else {
    cVar16 = '\0';
  }
  pwVar9 = ::FString::operator[](in_RDX,iVar3 + 2);
  wVar13 = *pwVar9;
  if (9 < (ushort)(wVar13 + L'￐')) {
    if ((ushort)(wVar13 + L'ﾟ') < 6) {
      wVar13 = (wchar_t)(byte)((char)wVar13 + 0xa9);
    }
    else if ((ushort)(wVar13 + L'﾿') < 6) {
      wVar13 = (wchar_t)(byte)((char)wVar13 - 0x37);
    }
    else {
      wVar13 = L'\0';
    }
  }
  pwVar9 = ::FString::operator[](in_RDX,iVar3 + 3);
  wVar14 = *pwVar9;
  cVar10 = (char)wVar14;
  if ((ushort)(wVar14 + L'￐') < 10) {
    cVar10 = cVar10 + -0x30;
  }
  else if ((ushort)(wVar14 + L'ﾟ') < 6) {
    cVar10 = cVar10 + -0x57;
  }
  else if ((ushort)(wVar14 + L'﾿') < 6) {
    cVar10 = cVar10 + -0x37;
  }
  else {
    cVar10 = '\0';
  }
  pwVar9 = ::FString::operator[](in_RDX,iVar3 + 4);
  wVar14 = *pwVar9;
  if (9 < (ushort)(wVar14 + L'￐')) {
    if ((ushort)(wVar14 + L'ﾟ') < 6) {
      wVar14 = (wchar_t)(byte)((char)wVar14 + 0xa9);
    }
    else if ((ushort)(wVar14 + L'﾿') < 6) {
      wVar14 = (wchar_t)(byte)((char)wVar14 - 0x37);
    }
    else {
      wVar14 = L'\0';
    }
  }
  pwVar9 = ::FString::operator[](in_RDX,iVar3 + 5);
  wVar2 = *pwVar9;
  cVar11 = (char)wVar2;
  if ((ushort)(wVar2 + L'￐') < 10) {
    cVar11 = cVar11 + -0x30;
  }
  else if ((ushort)(wVar2 + L'ﾟ') < 6) {
    cVar11 = cVar11 + -0x57;
  }
  else if ((ushort)(wVar2 + L'﾿') < 6) {
    cVar11 = cVar11 + -0x37;
  }
  else {
    cVar11 = '\0';
  }
  uVar5 = CONCAT21(CONCAT11((char)uVar12 * '\x10' + cVar16,(char)wVar13 * '\x10' + cVar10),
                   (char)wVar14 * '\x10' + cVar11);
  pwVar9 = ::FString::operator[](in_RDX,iVar3 + 6);
  wVar13 = *pwVar9;
  if (9 < (ushort)(wVar13 + L'￐')) {
    if ((ushort)(wVar13 + L'ﾟ') < 6) {
      wVar13 = (wchar_t)(byte)((char)wVar13 + 0xa9);
    }
    else if ((ushort)(wVar13 + L'﾿') < 6) {
      wVar13 = (wchar_t)(byte)((char)wVar13 - 0x37);
    }
    else {
      wVar13 = L'\0';
    }
  }
  pwVar9 = ::FString::operator[](in_RDX,iVar3 + 7);
  wVar14 = *pwVar9;
  cVar10 = (char)wVar13;
  cVar16 = (char)wVar14;
  if ((ushort)(wVar14 + L'￐') < 10) {
    _local_res10 = CONCAT13(cVar10 * '\x10' + cVar16 + -0x30,uVar5);
    *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = _local_res10;
    return (FColor)FVar8.field0_0x0;
  }
  if ((ushort)(wVar14 + L'ﾟ') < 6) {
    _local_res10 = CONCAT13(cVar10 * '\x10' + cVar16 + -0x57,uVar5);
    *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = _local_res10;
    return (FColor)FVar8.field0_0x0;
  }
  if ((ushort)(wVar14 + L'﾿') < 6) {
    _local_res10 = CONCAT13(cVar10 * '\x10' + cVar16 + -0x37,uVar5);
    *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = _local_res10;
    return (FColor)FVar8.field0_0x0;
  }
  _local_res10 = CONCAT13(cVar10 * '\x10',uVar5);
  *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = _local_res10;
  return (FColor)FVar8.field0_0x0;
}

// FromRGBE @ 1417d0210

FLinearColor * __thiscall FColor::FromRGBE(FColor *this,FLinearColor *__return_storage_ptr__)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  
  bVar1 = (this->field0_0x0)._s_0.A;
  if (bVar1 == 0) {
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
    return __return_storage_ptr__;
  }
  dVar5 = ldexp(__real_3ff0000000000000,bVar1 - 0x88);
  fVar4 = __real_3f000000;
  bVar1 = (this->field0_0x0)._s_0.R;
  fVar6 = (float)dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  bVar2 = (this->field0_0x0)._s_0.G;
  bVar3 = (this->field0_0x0)._s_0.B;
  (__return_storage_ptr__->field0_0x0)._s_0.R = ((float)bVar1 + fVar4) * fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.G = ((float)bVar2 + fVar4) * fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.B = ((float)bVar3 + fVar4) * fVar6;
  return __return_storage_ptr__;
}

// InitFromString @ 1417dade0

bool __thiscall FColor::InitFromString(FColor *this,FString *param_1)

{
  uchar *puVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  puVar1 = &(this->field0_0x0)._s_0.R;
  (this->field0_0x0)._s_0.A = 0xff;
  *puVar1 = '\0';
  *(undefined2 *)&this->field0_0x0 = 0;
  pwVar4 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FParse::Value(pwVar3,L"R=",puVar1);
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
      bVar2 = FParse::Value(pwVar3,L"B=",(uchar *)this);
      if (bVar2) {
        bVar2 = true;
        goto LAB_1417dae85;
      }
    }
  }
  bVar2 = false;
LAB_1417dae85:
  if ((param_1->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FParse::Value(pwVar4,L"A=",&(this->field0_0x0)._s_0.A);
  return bVar2;
}

// MakeFromColorTemperature @ 1417e1610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FColor __cdecl FColor::MakeFromColorTemperature(float param_1)

{
  FColor_u_0 in_ECX;
  float fVar1;
  float in_XMM1_Da;
  float fVar2;
  float fVar3;
  float fVar4;
  FLinearColor_u_0 local_28 [2];
  
  if (__real_466a6000 <= in_XMM1_Da) {
    in_XMM1_Da = __real_466a6000;
  }
  local_28[0]._s_0.A = 1.0;
  if (in_XMM1_Da <= __real_447a0000) {
    in_XMM1_Da = __real_447a0000;
  }
  fVar3 = ((in_XMM1_Da * ___real_340a20a1 + ___real_39219ace) * in_XMM1_Da + ___real_3f5c30ad) /
          ((in_XMM1_Da * ___real_353e175d + ___real_3a5cd5dd) * in_XMM1_Da + __real_3f800000);
  fVar2 = ((in_XMM1_Da * ___real_33349873 + ___real_3831567a) * in_XMM1_Da + ___real_3ea28216) /
          ((__real_3f800000 - in_XMM1_Da * ___real_37f30d95) +
          in_XMM1_Da * ___real_342d5cb4 * in_XMM1_Da);
  fVar1 = __real_3f800000 / (((fVar3 + fVar3) - fVar2 * __real_41000000) + __real_40800000);
  fVar4 = fVar3 * __real_40400000 * fVar1;
  fVar1 = (fVar2 + fVar2) * fVar1;
  fVar2 = __real_3f800000 / fVar1;
  fVar3 = fVar4 * fVar2;
  fVar2 = ((__real_3f800000 - fVar4) - fVar1) * fVar2;
  local_28[0]._0_4_ = (fVar3 * ___real_404f639a - ___real_3fc4c0f4) - fVar2 * ___real_3eff3f82;
  if ((float)local_28[0]._0_4_ <= 0.0) {
    local_28[0]._0_4_ = 0.0;
  }
  local_28[0]._4_4_ = (__real_3ff0211f - fVar3 * ___real_3f7821d1) + fVar2 * ___real_3d2a36a0;
  local_28[0]._8_4_ = (fVar3 * ___real_3d63ea55 + fVar2 * ___real_3f875328) - ___real_3e50ec2a;
  if ((float)local_28[0]._4_4_ <= 0.0) {
    local_28[0]._4_4_ = 0.0;
  }
  if ((float)local_28[0]._8_4_ <= 0.0) {
    local_28[0]._8_4_ = 0.0;
  }
  FLinearColor::ToFColor((FLinearColor *)&local_28[0]._s_0,(bool)in_ECX._s_0.B);
  return (FColor_u_0)(FColor_u_0)in_ECX._s_0;
}

// MakeRandomColor @ 1417e24c0

FColor __cdecl FColor::MakeRandomColor(void)

{
  FColor_u_0 in_ECX;
  FLinearColor_u_0 local_28;
  FLinearColor local_18;
  
  LOCK();
  UNLOCK();
  local_28._s_0.G = 1.0;
  local_28._s_0.B = 1.0;
  local_28._s_0.A = 1.0;
  local_28._s_0.R = (float)((uint)s_hue & 0xff) * __real_3fb40000;
  s_hue = (atomic<unsigned_int>)((int)s_hue + 0x9d);
  FLinearColor::HSVToLinearRGB((FLinearColor *)&local_28._s_0,&local_18);
  FLinearColor::ToFColor(&local_18,(bool)in_ECX._s_0.B);
  return (FColor_u_0)(FColor_u_0)in_ECX._s_0;
}

// MakeRandomSeededColor @ 1417e25b0

FColor __cdecl FColor::MakeRandomSeededColor(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_EDX;
  FLinearColor_u_0 local_18;
  
  local_18._s_0.A = 1.0;
  uVar1 = in_EDX * 0xbb38435 + 0x3619636b;
  uVar2 = uVar1 * 0xbb38435 + 0x3619636b;
  local_18._s_0.R = (float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000;
  local_18._s_0.G = (float)(uVar2 >> 9 | 0x3f800000) - __real_3f800000;
  local_18._s_0.B = (float)(uVar2 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - __real_3f800000;
  FLinearColor::ToFColor((FLinearColor *)&local_18._s_0,SUB41(param_1,0));
  return (FColor)(FColor_u_0)param_1;
}

// MakeRedToGreenColorFromScalar @ 1417e27c0

FColor __cdecl FColor::MakeRedToGreenColorFromScalar(float param_1)

{
  float fVar1;
  undefined1 *in_RCX;
  float in_XMM1_Da;
  float fVar2;
  float fVar3;
  
  fVar1 = __real_3f800000;
  *in_RCX = 0;
  in_RCX[3] = 0xff;
  fVar3 = (fVar1 - in_XMM1_Da) + (fVar1 - in_XMM1_Da);
  fVar2 = in_XMM1_Da + in_XMM1_Da;
  if (fVar1 <= in_XMM1_Da + in_XMM1_Da) {
    fVar2 = fVar1;
  }
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar3 = fVar3 * __real_437f0000;
  in_RCX[1] = (char)(int)(fVar2 * __real_437f0000);
  in_RCX[2] = (char)(int)fVar3;
  return (FColor)SUB84(in_RCX,0);
}

// ToHex @ 141804480

FString * __thiscall FColor::ToHex(FColor *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%02X%02X%02X%02X");
  return __return_storage_ptr__;
}

// ToString @ 1418070a0

FString * __thiscall FColor::ToString(FColor *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"(R=%i,G=%i,B=%i,A=%i)");
  return __return_storage_ptr__;
}

