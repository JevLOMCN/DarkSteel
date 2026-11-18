// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 9

// GetBytesPerPixel @ 14235c250

long64 __cdecl ERawImageFormat::GetBytesPerPixel(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  switch(param_1) {
  case G8:
    return 1;
  case BGRA8:
  case BGRE8:
  case R32F:
    return 4;
  case RGBA16:
  case RGBA16F:
    return 8;
  case RGBA32F:
    return 0x10;
  case G16:
  case R16F:
    return 2;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                     ,0x5a5,L"");
  if (!bVar2) {
    return 0;
  }
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}

// GetFormatFromString @ 14235c430

bool __cdecl ERawImageFormat::GetFormatFromString(TStringView<char8_t> *param_1,Type *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = param_1->Size;
  if (iVar1 == 0) {
LAB_14235c495:
    if (iVar1 == 2) {
      *param_2 = G8;
      return true;
    }
    if (iVar1 != 0) goto LAB_14235c4b4;
LAB_14235c4d9:
    if (iVar1 == 3) {
      *param_2 = G16;
      return true;
    }
    if (iVar1 != 0) goto LAB_14235c4fc;
LAB_14235c51b:
    if (iVar1 == 4) {
      *param_2 = R16F;
      return true;
    }
    if (iVar1 != 0) goto LAB_14235c536;
LAB_14235c599:
    if (iVar1 == 5) {
      *param_2 = BGRA8;
      return true;
    }
    if (iVar1 != 0) goto LAB_14235c5b4;
LAB_14235c614:
    if (iVar1 == 6) {
      *param_2 = RGBA16;
      return true;
    }
    if (iVar1 != 0) goto LAB_14235c637;
LAB_14235c658:
    if (iVar1 == 7) {
      *param_2 = RGBA16F;
      return true;
    }
    if (iVar1 != 0) goto LAB_14235c670;
  }
  else {
    iVar2 = 2;
    if (iVar1 < 2) {
      iVar2 = iVar1;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,(uchar *)"G8",(longlong)iVar2);
    if (iVar2 == 0) goto LAB_14235c495;
LAB_14235c4b4:
    iVar2 = 3;
    if (iVar1 < 3) {
      iVar2 = iVar1;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,(uchar *)"G16",(longlong)iVar2);
    if (iVar2 == 0) goto LAB_14235c4d9;
LAB_14235c4fc:
    iVar2 = 4;
    if (iVar1 < 4) {
      iVar2 = iVar1;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,(uchar *)"R16F",(longlong)iVar2);
    if (iVar2 == 0) goto LAB_14235c51b;
LAB_14235c536:
    iVar2 = 4;
    if (iVar1 < 4) {
      iVar2 = iVar1;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,(uchar *)"R32F",(longlong)iVar2);
    if (iVar2 == 0) {
      if (iVar1 == 4) {
        *param_2 = R32F;
        return true;
      }
      if (iVar1 == 0) goto LAB_14235c599;
    }
    iVar2 = 5;
    if (iVar1 < 5) {
      iVar2 = iVar1;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,(uchar *)"BGRA8",(longlong)iVar2);
    if (iVar2 == 0) goto LAB_14235c599;
LAB_14235c5b4:
    iVar2 = 5;
    if (iVar1 < 5) {
      iVar2 = iVar1;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,(uchar *)"BGRE8",(longlong)iVar2);
    if (iVar2 == 0) {
      if (iVar1 == 5) {
        *param_2 = BGRE8;
        return true;
      }
      if (iVar1 == 0) goto LAB_14235c614;
    }
    iVar2 = 6;
    if (iVar1 < 6) {
      iVar2 = iVar1;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,(uchar *)"RGBA16",(longlong)iVar2);
    if (iVar2 == 0) goto LAB_14235c614;
LAB_14235c637:
    iVar2 = 7;
    if (iVar1 < 7) {
      iVar2 = iVar1;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,(uchar *)"RGBA16F",(longlong)iVar2);
    if (iVar2 == 0) goto LAB_14235c658;
LAB_14235c670:
    iVar2 = 7;
    if (iVar1 < 7) {
      iVar2 = iVar1;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,(uchar *)"RGBA32F",(longlong)iVar2);
    if (iVar2 == 0) {
      if (iVar1 == 7) {
        *param_2 = RGBA32F;
        return true;
      }
      if (iVar1 == 0) goto LAB_14235c6c7;
    }
    iVar2 = 7;
    if (iVar1 < 7) {
      iVar2 = iVar1;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,(uchar *)"Invalid",(longlong)iVar2);
    if (iVar2 == 0) {
      bVar3 = iVar1 == 7;
      goto LAB_14235c6c9;
    }
  }
LAB_14235c6c7:
  bVar3 = false;
LAB_14235c6c9:
  *param_2 = Invalid;
  return bVar3;
}

// GetName @ 14235d090

wchar_t * __cdecl ERawImageFormat::GetName(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case G8:
    return L"G8";
  case BGRA8:
    return L"BGRA8";
  case BGRE8:
    return L"BGRE8";
  case RGBA16:
    return L"RGBA16";
  case RGBA16F:
    return L"RGBA16F";
  case RGBA32F:
    return L"RGBA32F";
  case G16:
    return L"G16";
  case R16F:
    return L"R16F";
  case R32F:
    return L"R32F";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                     ,0x570,L"");
  if (!bVar2) {
    return L"invalid";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// GetNameView @ 14235d180

TStringView<char8_t> * __cdecl
ERawImageFormat::GetNameView(TStringView<char8_t> *__return_storage_ptr__,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  TStringView<char8_t> *pTVar3;
  
  switch(param_1) {
  case G8:
    __return_storage_ptr__->Size = 2;
    __return_storage_ptr__->DataPtr = (uchar *)"G8";
    return __return_storage_ptr__;
  case BGRA8:
    __return_storage_ptr__->Size = 5;
    __return_storage_ptr__->DataPtr = (uchar *)"BGRA8";
    return __return_storage_ptr__;
  case BGRE8:
    __return_storage_ptr__->Size = 5;
    __return_storage_ptr__->DataPtr = (uchar *)"BGRE8";
    return __return_storage_ptr__;
  case RGBA16:
    __return_storage_ptr__->Size = 6;
    __return_storage_ptr__->DataPtr = (uchar *)"RGBA16";
    return __return_storage_ptr__;
  case RGBA16F:
    __return_storage_ptr__->Size = 7;
    __return_storage_ptr__->DataPtr = (uchar *)"RGBA16F";
    return __return_storage_ptr__;
  case RGBA32F:
    __return_storage_ptr__->Size = 7;
    __return_storage_ptr__->DataPtr = (uchar *)"RGBA32F";
    return __return_storage_ptr__;
  case G16:
    __return_storage_ptr__->Size = 3;
    __return_storage_ptr__->DataPtr = (uchar *)"G16";
    return __return_storage_ptr__;
  case R16F:
    __return_storage_ptr__->Size = 4;
    __return_storage_ptr__->DataPtr = (uchar *)"R16F";
    return __return_storage_ptr__;
  case R32F:
    __return_storage_ptr__->Size = 4;
    __return_storage_ptr__->DataPtr = (uchar *)"R32F";
    return __return_storage_ptr__;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                     ,0x55c,L"");
  if (!bVar2) {
    __return_storage_ptr__->Size = 7;
    __return_storage_ptr__->DataPtr = (uchar *)"invalid";
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  pTVar3 = (TStringView<char8_t> *)(*pcVar1)();
  return pTVar3;
}

// GetOnePixelLinear @ 14235d300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __cdecl
ERawImageFormat::GetOnePixelLinear
          (FLinearColor *__return_storage_ptr__,void *param_1,Type param_2,EGammaSpace param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined8 uVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined6 uVar10;
  bool bVar11;
  uint uVar12;
  FLinearColor *pFVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  FColor_u_0 local_res18 [4];
  FColor_u_0 local_18;
  FColor_u_0 local_14 [3];
  
  fVar14 = __real_3b808081;
  switch(param_2) {
  case G8:
    local_res18[0]._0_1_ = *(undefined1 *)param_1;
    local_res18[0]._s_0.A = 0xff;
    uVar12 = (uint)(byte)local_res18[0]._0_1_;
    if (param_3 == sRGB) {
      (__return_storage_ptr__->field0_0x0)._s_0.R =
           FLinearColor::sRGBToLinearTable[(byte)local_res18[0]._0_1_];
      (__return_storage_ptr__->field0_0x0)._s_0.G = FLinearColor::sRGBToLinearTable[uVar12];
      (__return_storage_ptr__->field0_0x0)._s_0.B = FLinearColor::sRGBToLinearTable[uVar12];
      (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
      return __return_storage_ptr__;
    }
    if (param_3 == Pow22) {
      local_res18[0]._1_1_ = local_res18[0]._0_1_;
      local_res18[0]._2_1_ = local_res18[0]._0_1_;
      FLinearColor::FromPow22Color(__return_storage_ptr__,(FColor *)&local_res18[0]._s_0);
      return __return_storage_ptr__;
    }
    fVar14 = (float)uVar12 * __real_3b808081;
    break;
  case BGRA8:
    local_18 = *(FColor_u_0 *)param_1;
    if (param_3 == sRGB) {
      (__return_storage_ptr__->field0_0x0)._s_0.R =
           FLinearColor::sRGBToLinearTable[local_18.Bits >> 0x10 & 0xff];
      fVar14 = (float)(local_18.Bits >> 0x18) * __real_3b808081;
      (__return_storage_ptr__->field0_0x0)._s_0.G =
           FLinearColor::sRGBToLinearTable[local_18.Bits >> 8 & 0xff];
      (__return_storage_ptr__->field0_0x0)._s_0.B =
           FLinearColor::sRGBToLinearTable[local_18.Bits & 0xff];
      (__return_storage_ptr__->field0_0x0)._s_0.A = fVar14;
      return __return_storage_ptr__;
    }
    if (param_3 != Pow22) {
      (__return_storage_ptr__->field0_0x0)._s_0.R =
           (float)(local_18.Bits >> 0x10 & 0xff) * __real_3b808081;
      (__return_storage_ptr__->field0_0x0)._s_0.G = (float)(local_18.Bits >> 8 & 0xff) * fVar14;
      (__return_storage_ptr__->field0_0x0)._s_0.B = (float)(local_18.Bits & 0xff) * fVar14;
      (__return_storage_ptr__->field0_0x0)._s_0.A = (float)(local_18.Bits >> 0x18) * fVar14;
      return __return_storage_ptr__;
    }
    FLinearColor::FromPow22Color(__return_storage_ptr__,(FColor *)&local_18._s_0);
    return __return_storage_ptr__;
  case BGRE8:
    local_14[0] = *(FColor_u_0 *)param_1;
    FColor::FromRGBE((FColor *)&local_14[0]._s_0,__return_storage_ptr__);
    return __return_storage_ptr__;
  case RGBA16:
    uVar1 = *(ulonglong *)param_1;
    auVar3._8_4_ = 0;
    auVar3._0_8_ = uVar1;
    auVar3._12_2_ = (short)(uVar1 >> 0x30);
    auVar5._8_2_ = (short)(uVar1 >> 0x20);
    auVar5._0_8_ = uVar1;
    auVar5._10_4_ = auVar3._10_4_;
    auVar8._6_8_ = 0;
    auVar8._0_6_ = auVar5._8_6_;
    fVar14 = (float)(int)CONCAT82(SUB148(auVar8 << 0x40,6),(short)(uVar1 >> 0x10)) * _UNK_1508be4a4;
    fVar25 = (float)auVar5._8_4_ * _UNK_1508be4a8;
    fVar27 = (float)(auVar3._10_4_ >> 0x10) * _UNK_1508be4ac;
    (__return_storage_ptr__->field0_0x0)._s_0.R =
         (float)(ushort)uVar1 * ___xmm_37800080378000803780008037800080;
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar14;
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar25;
    (__return_storage_ptr__->field0_0x0)._s_0.A = fVar27;
    return __return_storage_ptr__;
  case RGBA16F:
    uVar10 = *(undefined6 *)param_1;
    auVar4._8_4_ = 0;
    auVar4._0_8_ = *(ulonglong *)param_1;
    auVar4._12_2_ = *(undefined2 *)((longlong)param_1 + 6);
    auVar6._8_2_ = (short)((uint6)uVar10 >> 0x20);
    auVar6._0_8_ = *(ulonglong *)param_1;
    auVar6._10_4_ = auVar4._10_4_;
    auVar9._6_8_ = 0;
    auVar9._0_6_ = auVar6._8_6_;
    uVar22 = ___xmm_00007fff00007fff00007fff00007fff & (ushort)uVar10;
    uVar18 = (uint)CONCAT82(SUB148(auVar9 << 0x40,6),(short)((uint6)uVar10 >> 0x10));
    uVar23 = _UNK_1506895a4 & uVar18;
    uVar24 = _UNK_1506895a8 & auVar6._8_4_;
    uVar12 = auVar4._10_4_ >> 0x10;
    uVar26 = _UNK_1506895ac & uVar12;
    uVar15 = -(uint)(_UNK_150689584 < (int)uVar23) & _UNK_1506896e4;
    uVar16 = -(uint)(_UNK_150689588 < (int)uVar24) & _UNK_1506896e8;
    uVar17 = -(uint)(_UNK_15068958c < (int)uVar26) & _UNK_1506896ec;
    uVar19 = -(uint)(_UNK_150689594 < (int)uVar23) & _UNK_1506895b4;
    uVar20 = -(uint)(_UNK_150689598 < (int)uVar24) & _UNK_1506895b8;
    uVar21 = -(uint)(_UNK_15068959c < (int)uVar26) & _UNK_1506895bc;
    fVar14 = (float)(uVar23 << 0xd) * _UNK_1506896d4;
    fVar25 = (float)(uVar24 << 0xd) * _UNK_1506896d8;
    fVar27 = (float)(uVar26 << 0xd) * _UNK_1506896dc;
    (__return_storage_ptr__->field0_0x0)._s_0.R =
         (float)(-(uint)(___xmm_00007c0000007c0000007c0000007c00 < (int)uVar22) &
                 ___xmm_00400000004000000040000000400000 |
                 -(uint)(___xmm_00007bff00007bff00007bff00007bff < (int)uVar22) &
                 __xmm_7f8000007f8000007f8000007f800000 | (uVar22 ^ (ushort)uVar10) << 0x10 |
                (uint)((float)(uVar22 << 0xd) * ___xmm_77800000778000007780000077800000));
    (__return_storage_ptr__->field0_0x0)._s_0.G =
         (float)(uVar19 | uVar15 | (uVar23 ^ uVar18) << 0x10 | (uint)fVar14);
    (__return_storage_ptr__->field0_0x0)._s_0.B =
         (float)(uVar20 | uVar16 | (uVar24 ^ auVar6._8_4_) << 0x10 | (uint)fVar25);
    (__return_storage_ptr__->field0_0x0)._s_0.A =
         (float)(uVar21 | uVar17 | (uVar26 ^ uVar12) << 0x10 | (uint)fVar27);
    return __return_storage_ptr__;
  case RGBA32F:
    uVar7 = *(undefined8 *)((longlong)param_1 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar7;
    return __return_storage_ptr__;
  case G16:
    fVar14 = (float)*(ushort *)param_1 * __real_37800080;
    break;
  case R16F:
    fVar14 = FGenericPlatformMath::LoadHalf(param_1);
    (__return_storage_ptr__->field0_0x0)._s_0.R = fVar14;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
    return __return_storage_ptr__;
  case R32F:
    (__return_storage_ptr__->field0_0x0)._s_0.R = *(float *)param_1;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
    return __return_storage_ptr__;
  default:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                        ,0x611,L"");
    if (!bVar11) {
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pFVar13 = (FLinearColor *)(*pcVar2)();
    return pFVar13;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar14;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar14;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar14;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  return __return_storage_ptr__;
}

// HasAlphaChannel @ 14235e060

bool __cdecl ERawImageFormat::HasAlphaChannel(Type param_1)

{
  if ((param_1 != BGRA8) && (2 < (byte)(param_1 - RGBA16))) {
    return false;
  }
  return true;
}

// IsHDR @ 14235f5b0

bool __cdecl ERawImageFormat::IsHDR(Type param_1)

{
  if ((param_1 < MAX) && ((0x1b4U >> (param_1 & 0x1f) & 1) != 0)) {
    return true;
  }
  return false;
}

// IsU8Channels @ 14235f610

bool __cdecl ERawImageFormat::IsU8Channels(Type param_1)

{
  return param_1 < BGRE8;
}

// NumChannels @ 1423609e0

int __cdecl ERawImageFormat::NumChannels(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  switch(param_1) {
  case G8:
  case G16:
  case R16F:
  case R32F:
    return 1;
  case BGRA8:
  case RGBA16:
  case RGBA16F:
  case RGBA32F:
    return 4;
  case BGRE8:
    return 3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                     ,0x5ba,L"");
  if (!bVar2) {
    return 0;
  }
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}

