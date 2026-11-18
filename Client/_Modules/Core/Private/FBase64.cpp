// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// Decode<char> @ 14180fee0

bool __cdecl FBase64::Decode<char>(char *param_1,uint param_2,uchar *param_3,EBase64Mode param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uchar *puVar12;
  
  if ((UrlSafe < param_4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode == EBase64Mode::Standard || Mode == EBase64Mode::UrlSafe",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Base64.cpp"
                         ,0xbd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  do {
    uVar10 = param_2;
    if (uVar10 == 0) break;
    param_2 = uVar10 - 1;
  } while (param_1[uVar10 - 1] == '=');
  if (((byte)uVar10 & 3) == 1) {
LAB_14181001f:
    bVar3 = false;
  }
  else {
    puVar12 = GBase64DecodingAlphabet;
    if (param_4 == UrlSafe) {
      puVar12 = GBase64UrlSafeDecodingAlphabet;
    }
    uVar9 = 0;
    for (; uVar7 = uVar9, uVar11 = uVar9, 3 < uVar10; uVar10 = uVar10 - 4) {
      do {
        uVar5 = uVar7;
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        if ((0x7f < (uint)(int)cVar1) || (puVar12[(uint)(int)cVar1] == 0xff)) goto LAB_14181001f;
        uVar6 = uVar5 << 6;
        uVar11 = uVar11 + 1;
        uVar7 = uVar6 | puVar12[(uint)(int)cVar1];
      } while ((int)uVar11 < 4);
      param_3[2] = (uchar)uVar7;
      param_3[1] = (uchar)(uVar6 >> 8);
      *param_3 = (uchar)(((uVar5 & 0x3ffffff) >> 2) >> 8);
      param_3 = param_3 + 3;
    }
    if (uVar10 != 0) {
      uVar7 = 0;
      do {
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        if ((0x7f < (uint)(int)cVar1) || (puVar12[(uint)(int)cVar1] == 0xff)) goto LAB_14181001f;
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 << 6 | (uint)puVar12[(uint)(int)cVar1];
      } while (uVar7 < uVar10);
      if ((int)uVar10 < 4) {
        uVar8 = (ulonglong)(4 - uVar10);
        do {
          uVar9 = uVar9 << 6;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (2 < uVar10) {
        param_3[1] = (uchar)(uVar9 >> 8);
      }
      *param_3 = (uchar)(uVar9 >> 0x10);
    }
    bVar3 = true;
  }
  return bVar3;
}

// Decode<char8_t> @ 141810040

bool __cdecl
FBase64::Decode<char8_t>(uchar *param_1,uint param_2,uchar *param_3,EBase64Mode param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uchar *puVar12;
  
  if ((UrlSafe < param_4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode == EBase64Mode::Standard || Mode == EBase64Mode::UrlSafe",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Base64.cpp"
                         ,0xbd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  do {
    uVar10 = param_2;
    if (uVar10 == 0) break;
    param_2 = uVar10 - 1;
  } while (param_1[uVar10 - 1] == '=');
  if (((byte)uVar10 & 3) == 1) {
LAB_14181017d:
    bVar3 = false;
  }
  else {
    puVar12 = GBase64DecodingAlphabet;
    if (param_4 == UrlSafe) {
      puVar12 = GBase64UrlSafeDecodingAlphabet;
    }
    uVar9 = 0;
    for (; uVar7 = uVar9, uVar11 = uVar9, 3 < uVar10; uVar10 = uVar10 - 4) {
      do {
        uVar5 = uVar7;
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        if ((0x7f < bVar1) || (puVar12[bVar1] == 0xff)) goto LAB_14181017d;
        uVar6 = uVar5 << 6;
        uVar11 = uVar11 + 1;
        uVar7 = uVar6 | puVar12[bVar1];
      } while ((int)uVar11 < 4);
      param_3[2] = (uchar)uVar7;
      param_3[1] = (uchar)(uVar6 >> 8);
      *param_3 = (uchar)(((uVar5 & 0x3ffffff) >> 2) >> 8);
      param_3 = param_3 + 3;
    }
    if (uVar10 != 0) {
      uVar7 = 0;
      do {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        if ((0x7f < bVar1) || (puVar12[bVar1] == 0xff)) goto LAB_14181017d;
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 << 6 | (uint)puVar12[bVar1];
      } while (uVar7 < uVar10);
      if ((int)uVar10 < 4) {
        uVar8 = (ulonglong)(4 - uVar10);
        do {
          uVar9 = uVar9 << 6;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (2 < uVar10) {
        param_3[1] = (uchar)(uVar9 >> 8);
      }
      *param_3 = (uchar)(uVar9 >> 0x10);
    }
    bVar3 = true;
  }
  return bVar3;
}

// Decode<wchar_t> @ 1418101a0

bool __cdecl
FBase64::Decode<wchar_t>(wchar_t *param_1,uint param_2,uchar *param_3,EBase64Mode param_4)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uchar *puVar12;
  
  if ((UrlSafe < param_4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode == EBase64Mode::Standard || Mode == EBase64Mode::UrlSafe",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Base64.cpp"
                         ,0xbd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  do {
    uVar10 = param_2;
    if (uVar10 == 0) break;
    param_2 = uVar10 - 1;
  } while (param_1[uVar10 - 1] == L'=');
  if (((byte)uVar10 & 3) == 1) {
LAB_1418102dd:
    bVar3 = false;
  }
  else {
    puVar12 = GBase64DecodingAlphabet;
    if (param_4 == UrlSafe) {
      puVar12 = GBase64UrlSafeDecodingAlphabet;
    }
    uVar9 = 0;
    for (; uVar7 = uVar9, uVar11 = uVar9, 3 < uVar10; uVar10 = uVar10 - 4) {
      do {
        uVar5 = uVar7;
        wVar1 = *param_1;
        param_1 = param_1 + 1;
        if ((0x7f < (ushort)wVar1) || (puVar12[(ushort)wVar1] == 0xff)) goto LAB_1418102dd;
        uVar6 = uVar5 << 6;
        uVar11 = uVar11 + 1;
        uVar7 = uVar6 | puVar12[(ushort)wVar1];
      } while ((int)uVar11 < 4);
      param_3[2] = (uchar)uVar7;
      param_3[1] = (uchar)(uVar6 >> 8);
      *param_3 = (uchar)(((uVar5 & 0x3ffffff) >> 2) >> 8);
      param_3 = param_3 + 3;
    }
    if (uVar10 != 0) {
      uVar7 = 0;
      do {
        wVar1 = *param_1;
        param_1 = param_1 + 1;
        if ((0x7f < (ushort)wVar1) || (puVar12[(ushort)wVar1] == 0xff)) goto LAB_1418102dd;
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 << 6 | (uint)puVar12[(ushort)wVar1];
      } while (uVar7 < uVar10);
      if ((int)uVar10 < 4) {
        uVar8 = (ulonglong)(4 - uVar10);
        do {
          uVar9 = uVar9 << 6;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (2 < uVar10) {
        param_3[1] = (uchar)(uVar9 >> 8);
      }
      *param_3 = (uchar)(uVar9 >> 0x10);
    }
    bVar3 = true;
  }
  return bVar3;
}

// Encode<char> @ 141811610

uint __cdecl FBase64::Encode<char>(uchar *param_1,uint param_2,char *param_3,EBase64Mode param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  ushort uVar5;
  uint3 uVar6;
  bool bVar7;
  uchar uVar8;
  uint uVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  uchar *puVar14;
  uchar *puVar15;
  uchar *puVar16;
  
  if ((UrlSafe < param_4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode == EBase64Mode::Standard || Mode == EBase64Mode::UrlSafe",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Base64.cpp"
                         ,0x4f,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  puVar16 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if (param_4 == UrlSafe) {
    puVar16 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";
  }
  uVar9 = (param_2 / 3) * 3;
  uVar12 = (param_2 + 2) / 3 << 2;
  param_3[uVar12] = '\0';
  puVar15 = (uchar *)(param_3 + uVar12);
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    pbVar10 = param_1 + param_2;
    puVar14 = puVar15;
    if (param_2 != uVar9) {
      puVar14 = puVar15 + -4;
      bVar11 = 0;
      if (param_2 % 3 == 2) {
        bVar11 = pbVar10[-1];
        pbVar10 = pbVar10 + -1;
      }
      bVar3 = pbVar10[-1];
      pbVar10 = pbVar10 + -1;
      uVar5 = CONCAT11(bVar3,bVar11);
      puVar15[-1] = '=';
      if (param_2 % 3 == 1) {
        uVar8 = '=';
      }
      else {
        uVar8 = puVar16[(uVar5 & 0xf) << 2];
      }
      puVar15[-2] = uVar8;
      puVar15[-3] = puVar16[uVar5 >> 4 & 0x3f];
      *puVar14 = puVar16[bVar3 >> 2];
    }
    if (uVar9 != 0) {
      uVar13 = (ulonglong)((uVar9 - 1) / 3 + 1);
      puVar15 = puVar14;
      do {
        pbVar1 = pbVar10 + -2;
        puVar14 = puVar15 + -4;
        pbVar2 = pbVar10 + -1;
        pbVar10 = pbVar10 + -3;
        bVar11 = *pbVar10;
        uVar5 = CONCAT11(bVar11,*pbVar1);
        uVar6 = CONCAT21(uVar5,*pbVar2);
        puVar15[-1] = puVar16[uVar6 & 0x3f];
        puVar15[-2] = puVar16[uVar6 >> 6 & 0x3f];
        puVar15[-3] = puVar16[uVar5 >> 4 & 0x3f];
        *puVar14 = puVar16[bVar11 >> 2];
        uVar13 = uVar13 - 1;
        puVar15 = puVar14;
      } while (uVar13 != 0);
    }
    if ((puVar14 != (uchar *)param_3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("EncodedBytes == Dest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Base64.cpp"
                           ,0x9d,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return uVar9;
    }
  }
  return uVar12;
}

// Encode<char8_t> @ 141811800

uint __cdecl
FBase64::Encode<char8_t>(uchar *param_1,uint param_2,uchar *param_3,EBase64Mode param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  ushort uVar5;
  uint3 uVar6;
  bool bVar7;
  uchar uVar8;
  uint uVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  uchar *puVar14;
  uchar *puVar15;
  uchar *puVar16;
  
  if ((UrlSafe < param_4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode == EBase64Mode::Standard || Mode == EBase64Mode::UrlSafe",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Base64.cpp"
                         ,0x4f,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  puVar16 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if (param_4 == UrlSafe) {
    puVar16 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";
  }
  uVar9 = (param_2 / 3) * 3;
  uVar12 = (param_2 + 2) / 3 << 2;
  param_3[uVar12] = '\0';
  puVar15 = param_3 + uVar12;
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    pbVar10 = param_1 + param_2;
    puVar14 = puVar15;
    if (param_2 != uVar9) {
      puVar14 = puVar15 + -4;
      bVar11 = 0;
      if (param_2 % 3 == 2) {
        bVar11 = pbVar10[-1];
        pbVar10 = pbVar10 + -1;
      }
      bVar3 = pbVar10[-1];
      pbVar10 = pbVar10 + -1;
      uVar5 = CONCAT11(bVar3,bVar11);
      puVar15[-1] = '=';
      if (param_2 % 3 == 1) {
        uVar8 = '=';
      }
      else {
        uVar8 = puVar16[(uVar5 & 0xf) << 2];
      }
      puVar15[-2] = uVar8;
      puVar15[-3] = puVar16[uVar5 >> 4 & 0x3f];
      *puVar14 = puVar16[bVar3 >> 2];
    }
    if (uVar9 != 0) {
      uVar13 = (ulonglong)((uVar9 - 1) / 3 + 1);
      puVar15 = puVar14;
      do {
        pbVar1 = pbVar10 + -2;
        puVar14 = puVar15 + -4;
        pbVar2 = pbVar10 + -1;
        pbVar10 = pbVar10 + -3;
        bVar11 = *pbVar10;
        uVar5 = CONCAT11(bVar11,*pbVar1);
        uVar6 = CONCAT21(uVar5,*pbVar2);
        puVar15[-1] = puVar16[uVar6 & 0x3f];
        puVar15[-2] = puVar16[uVar6 >> 6 & 0x3f];
        puVar15[-3] = puVar16[uVar5 >> 4 & 0x3f];
        *puVar14 = puVar16[bVar11 >> 2];
        uVar13 = uVar13 - 1;
        puVar15 = puVar14;
      } while (uVar13 != 0);
    }
    if ((puVar14 != param_3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("EncodedBytes == Dest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Base64.cpp"
                           ,0x9d,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return uVar9;
    }
  }
  return uVar12;
}

// Encode<wchar_t> @ 1418119f0

uint __cdecl
FBase64::Encode<wchar_t>(uchar *param_1,uint param_2,wchar_t *param_3,EBase64Mode param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  ushort uVar5;
  uint3 uVar6;
  bool bVar7;
  wchar_t wVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  uchar *puVar17;
  
  if ((UrlSafe < param_4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode == EBase64Mode::Standard || Mode == EBase64Mode::UrlSafe",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Base64.cpp"
                         ,0x4f,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  puVar17 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if (param_4 == UrlSafe) {
    puVar17 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";
  }
  uVar9 = (param_2 / 3) * 3;
  uVar13 = (param_2 + 2) / 3 << 2;
  param_3[uVar13] = L'\0';
  pwVar15 = param_3 + uVar13;
  uVar10 = 0;
  if (param_2 != 0) {
    pbVar11 = param_1 + param_2;
    pwVar16 = pwVar15;
    if (param_2 != uVar9) {
      pwVar16 = pwVar15 + -4;
      bVar12 = 0;
      if (param_2 % 3 == 2) {
        bVar12 = pbVar11[-1];
        pbVar11 = pbVar11 + -1;
      }
      bVar3 = pbVar11[-1];
      pbVar11 = pbVar11 + -1;
      uVar5 = CONCAT11(bVar3,bVar12);
      wVar8 = L'=';
      pwVar15[-1] = L'=';
      if (param_2 % 3 != 1) {
        wVar8 = (wchar_t)puVar17[(uVar5 & 0xf) << 2];
      }
      pwVar15[-2] = wVar8;
      pwVar15[-3] = (ushort)puVar17[uVar5 >> 4 & 0x3f];
      *pwVar16 = (ushort)puVar17[bVar3 >> 2];
    }
    if (uVar9 != 0) {
      uVar14 = (ulonglong)((uVar9 - 1) / 3 + 1);
      pwVar15 = pwVar16;
      do {
        pbVar1 = pbVar11 + -2;
        pwVar16 = pwVar15 + -4;
        pbVar2 = pbVar11 + -1;
        pbVar11 = pbVar11 + -3;
        bVar12 = *pbVar11;
        uVar5 = CONCAT11(bVar12,*pbVar1);
        uVar6 = CONCAT21(uVar5,*pbVar2);
        pwVar15[-1] = (ushort)puVar17[uVar6 & 0x3f];
        pwVar15[-2] = (ushort)puVar17[uVar6 >> 6 & 0x3f];
        pwVar15[-3] = (ushort)puVar17[uVar5 >> 4 & 0x3f];
        *pwVar16 = (ushort)puVar17[bVar12 >> 2];
        uVar14 = uVar14 - 1;
        pwVar15 = pwVar16;
      } while (uVar14 != 0);
    }
    uVar10 = uVar13;
    if ((pwVar16 != param_3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("EncodedBytes == Dest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Base64.cpp"
                           ,0x9d,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return uVar9;
    }
  }
  return uVar10;
}

// GetDecodedDataSize<char> @ 141812100

uint __cdecl FBase64::GetDecodedDataSize<char>(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = param_2;
      param_2 = uVar2 - 1;
      bVar3 = param_1[param_2] == '=';
      if (!bVar3) goto LAB_14181212a;
    } while (param_2 != 0);
    bVar3 = true;
LAB_14181212a:
    if (!bVar3) {
      param_2 = uVar2;
    }
    uVar1 = (param_2 >> 2) * 3;
    uVar2 = uVar1 + 2;
    if ((param_2 & 3) != 3) {
      uVar2 = uVar1;
    }
    if ((param_2 & 3) == 2) {
      return uVar2 + 1;
    }
  }
  return uVar2;
}

// GetDecodedDataSize<char8_t> @ 141812160

uint __cdecl FBase64::GetDecodedDataSize<char8_t>(uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = param_2;
      param_2 = uVar2 - 1;
      bVar3 = param_1[param_2] == '=';
      if (!bVar3) goto LAB_14181218a;
    } while (param_2 != 0);
    bVar3 = true;
LAB_14181218a:
    if (!bVar3) {
      param_2 = uVar2;
    }
    uVar1 = (param_2 >> 2) * 3;
    uVar2 = uVar1 + 2;
    if ((param_2 & 3) != 3) {
      uVar2 = uVar1;
    }
    if ((param_2 & 3) == 2) {
      return uVar2 + 1;
    }
  }
  return uVar2;
}

// GetDecodedDataSize<wchar_t> @ 1418121c0

uint __cdecl FBase64::GetDecodedDataSize<wchar_t>(wchar_t *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = param_2;
      param_2 = uVar2 - 1;
      bVar3 = param_1[param_2] == L'=';
      if (!bVar3) goto LAB_1418121ec;
    } while (param_2 != 0);
    bVar3 = true;
LAB_1418121ec:
    if (!bVar3) {
      param_2 = uVar2;
    }
    uVar1 = (param_2 >> 2) * 3;
    uVar2 = uVar1 + 2;
    if ((param_2 & 3) != 3) {
      uVar2 = uVar1;
    }
    if ((param_2 & 3) == 2) {
      return uVar2 + 1;
    }
  }
  return uVar2;
}

// Decode @ 14181fe80

bool __cdecl FBase64::Decode(FString *param_1,FString *param_2,EBase64Mode param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  uint uVar7;
  ForAnyElementType local_28;
  int local_20 [2];
  FString local_18;
  
  uVar4 = GetDecodedDataSize(param_1);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,uVar4,&local_28,local_20,local_20 + 1);
  iVar1 = (param_1->Data).ArrayNum;
  uVar7 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar7 = 0;
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = Decode<wchar_t>(pwVar6,uVar7,(uchar *)local_28.Data,param_3);
  if (bVar3) {
    pFVar5 = ::FString::ConstructFromPtrSize(&local_18,(uchar *)local_28.Data,uVar4);
    if (param_2 != pFVar5) {
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return bVar3;
}

// Decode @ 14181ffa0

bool __cdecl
FBase64::Decode(FString *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
               EBase64Mode param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  wchar_t *pwVar8;
  uint uVar9;
  
  uVar5 = GetDecodedDataSize(param_1);
  iVar7 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar7 < (int)uVar5) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar5 - iVar7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + iVar6,0,(longlong)(int)(uVar5 - iVar7));
  }
  else {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((int)uVar5 < iVar7) {
      uVar9 = iVar7 - uVar5;
      if (((int)(uVar9 | uVar5) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      if (uVar9 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + (int)uVar5;
        iVar7 = (*piVar1 - uVar9) - uVar5;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (int)uVar9,(longlong)iVar7);
        }
        *piVar1 = *piVar1 - uVar9;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  iVar7 = (param_1->Data).ArrayNum;
  uVar5 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar5 = 0;
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = Decode<wchar_t>(pwVar8,uVar5,(uchar *)(param_2->AllocatorInstance).Data,param_3);
  return bVar4;
}

// Encode @ 141821bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FBase64::Encode(FString *__return_storage_ptr__,FString *param_1,EBase64Mode param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uchar *puVar5;
  FString *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  undefined1 auStack_e8 [32];
  FScriptContainerElement local_c8 [128];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  uint local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar1 = (param_1->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  uVar4 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar8,iVar7);
  uVar9 = uVar4;
  local_38 = uVar4;
  if (uVar4 < 0x81) {
    if (local_48.Data == (FScriptContainerElement *)0x0) goto LAB_141821c8e;
    uVar9 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar9,1);
LAB_141821c8e:
  local_40 = local_c8;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  puVar5 = UE::Core::Private::Convert((uchar *)local_40,uVar4,pwVar8,iVar7);
  if ((puVar5 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  Encode(__return_storage_ptr__,(uchar *)local_40,local_38,param_2);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// Encode @ 141821d40

FString * __cdecl
FBase64::Encode(FString *__return_storage_ptr__,
               TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,EBase64Mode param_2)

{
  Encode(__return_storage_ptr__,(uchar *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,param_2
        );
  return __return_storage_ptr__;
}

// Encode @ 141821d70

FString * __cdecl
FBase64::Encode(FString *__return_storage_ptr__,uchar *param_1,uint param_2,EBase64Mode param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  *piVar2 = 0;
  uVar3 = ((param_2 + 2) / 3) * 4 + 1;
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
  }
  else {
    iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar3,(ForAnyElementType *)__return_storage_ptr__,piVar2,
                       &(__return_storage_ptr__->Data).ArrayMax);
    memset((__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)iVar1 * 2,0,
           (longlong)(int)uVar3 * 2);
  }
  Encode<wchar_t>(param_1,param_2,(wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,
                  param_3);
  return __return_storage_ptr__;
}

// GetDecodedDataSize @ 141825cc0

uint __cdecl FBase64::GetDecodedDataSize(FString *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  
  iVar1 = (param_1->Data).ArrayNum;
  uVar3 = 0;
  if (iVar1 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    uVar3 = (ulonglong)(iVar1 - 1);
  }
  if ((int)uVar3 == 0) {
    return 0;
  }
  do {
    uVar2 = (uint)uVar3;
    uVar4 = uVar2 - 1;
    uVar3 = (ulonglong)uVar4;
    bVar7 = *(short *)((longlong)pwVar6 + uVar3 * 2) == 0x3d;
    if (!bVar7) goto LAB_141825cfb;
  } while (uVar4 != 0);
  bVar7 = true;
LAB_141825cfb:
  if (!bVar7) {
    uVar4 = uVar2;
  }
  uVar2 = (uVar4 >> 2) * 3;
  uVar5 = uVar2 + 2;
  if ((uVar4 & 3) != 3) {
    uVar5 = uVar2;
  }
  if ((uVar4 & 3) != 2) {
    return uVar5;
  }
  return uVar5 + 1;
}

