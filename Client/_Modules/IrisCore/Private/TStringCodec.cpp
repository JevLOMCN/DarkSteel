// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 15

// DecodeImpl<wchar_t,2> @ 1443235c0

bool __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::DecodeImpl<wchar_t,2>
          (wchar_t *param_1,uint param_2,uchar *param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  wchar_t wVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  if (param_4 == 0) {
    *param_5 = 0;
    return true;
  }
  if (param_2 < (param_4 * 4) / 3) {
    return false;
  }
  bVar4 = false;
  uVar12 = 0;
  if (param_4 != 0 && param_2 != 0) {
    bVar1 = *param_3;
    uVar10 = (uint)(byte)((char)bVar1 >> 7);
    uVar5 = uVar10 & 1;
    while (uVar5 < param_4) {
      bVar8 = (char)param_3[uVar5] >> 7;
      uVar6 = uVar5 + (bVar8 & 1);
      if (param_4 <= uVar6) break;
      uVar5 = ((bVar1 & 0x7f) << ((byte)uVar10 & 7) | param_3[uVar5] & 0x7f) << (bVar8 & 7) |
              param_3[uVar6] & 0x7f;
      bVar2 = uVar5 - 0xfffe < 2;
      bVar3 = 0x10ffff < uVar5;
      bVar4 = (bool)(bVar4 | (bVar2 || bVar3));
      uVar11 = (ulonglong)uVar5;
      if (bVar2 || bVar3) {
        uVar11 = 0xfffd;
      }
      wVar9 = (wchar_t)uVar11;
      if (uVar5 < 0x110000 && 0xffff < uVar5) {
        if (param_2 <= uVar12 + 1) break;
        param_1[uVar12 + 1] = (wVar9 & 0x3ffU) + L'\xdc00';
        wVar9 = ((ushort)(uVar11 >> 10) & 0x3f) + L'\xd800';
        iVar7 = 2;
      }
      else {
        iVar7 = 1;
        if (bVar2 || bVar3) {
          wVar9 = L'�';
        }
      }
      uVar5 = uVar12 + iVar7;
      uVar6 = uVar6 + 1;
      param_1[uVar12] = wVar9;
      uVar12 = uVar5;
      if (bVar4 || (param_4 <= uVar6 || param_2 <= uVar5)) goto LAB_1443237ad;
      bVar1 = param_3[uVar6];
      uVar10 = (uint)(byte)((char)bVar1 >> 7);
      uVar5 = uVar6 + (uVar10 & 1);
    }
    bVar4 = true;
  }
LAB_1443237ad:
  *param_5 = uVar12;
  return !bVar4;
}

// EncodeImpl<wchar_t,2> @ 1443238a0

bool __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::EncodeImpl<wchar_t,2>
          (uchar *param_1,uint param_2,wchar_t *param_3,uint param_4,uint *param_5)

{
  wchar_t wVar1;
  wchar_t wVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (param_2 < param_4 * 3) {
    return false;
  }
  uVar8 = 0;
  uVar5 = 0;
  uVar7 = uVar5;
  if (param_4 != 0) {
    uVar11 = uVar8;
    do {
      uVar5 = (uint)uVar11;
      uVar10 = uVar5 + 1;
      uVar7 = param_4 - 1;
      if (uVar10 < param_4 - 1) {
        uVar7 = uVar10;
      }
      wVar1 = param_3[uVar11];
      wVar2 = param_3[uVar7];
      iVar6 = (int)uVar8;
      if (((ushort)wVar1 < 0xd800 || 0xdbff < (ushort)wVar1) ||
         (0xdfff < (ushort)wVar2 || (ushort)wVar2 < 0xdc00)) {
        if ((ushort)wVar1 < 0x80) {
          param_1[uVar8] = (byte)wVar1;
          iVar3 = 1;
        }
        else {
          bVar9 = (byte)((ushort)wVar1 >> 7) | 0x80;
          bVar4 = (byte)wVar1 & 0x7f;
          if (0x3ff < (ushort)wVar1) {
            param_1[iVar6 + 1U] = bVar9;
            param_1[uVar8] = (byte)((ushort)wVar1 >> 0xe) | 0x80;
            param_1[iVar6 + 2] = bVar4;
            goto LAB_1443239e7;
          }
          param_1[iVar6 + 1U] = bVar4;
          iVar3 = 2;
          param_1[uVar8] = bVar9;
        }
      }
      else {
        uVar5 = (uint)(ushort)wVar2 + (uint)(ushort)wVar1 * 0x400 + -0x35fdc00;
        param_1[iVar6 + 1] = (byte)(uVar5 >> 7) | 0x80;
        param_1[uVar8] = (byte)(uVar5 >> 0xe) | 0x80;
        param_1[iVar6 + 2] = (byte)uVar5 & 0x7f;
        uVar5 = uVar10;
LAB_1443239e7:
        iVar3 = 3;
      }
      uVar7 = iVar6 + iVar3;
      uVar8 = (ulonglong)uVar7;
      uVar5 = uVar5 + 1;
      uVar11 = (ulonglong)uVar5;
    } while (uVar5 < param_4);
  }
  *param_5 = uVar7;
  return uVar5 == param_4;
}

// Decode @ 144329700

bool __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::Decode
          (wchar_t *param_1,uint param_2,uchar *param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  wchar_t wVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  if (param_4 == 0) {
    *param_5 = 0;
    return true;
  }
  if (param_2 < (param_4 * 4) / 3) {
    return false;
  }
  bVar4 = false;
  uVar12 = 0;
  if (param_4 != 0 && param_2 != 0) {
    bVar1 = *param_3;
    uVar10 = (uint)(byte)((char)bVar1 >> 7);
    uVar5 = uVar10 & 1;
    while (uVar5 < param_4) {
      bVar8 = (char)param_3[uVar5] >> 7;
      uVar6 = uVar5 + (bVar8 & 1);
      if (param_4 <= uVar6) break;
      uVar5 = ((bVar1 & 0x7f) << ((byte)uVar10 & 7) | param_3[uVar5] & 0x7f) << (bVar8 & 7) |
              param_3[uVar6] & 0x7f;
      bVar2 = uVar5 - 0xfffe < 2;
      bVar3 = 0x10ffff < uVar5;
      bVar4 = (bool)(bVar4 | (bVar2 || bVar3));
      uVar11 = (ulonglong)uVar5;
      if (bVar2 || bVar3) {
        uVar11 = 0xfffd;
      }
      wVar9 = (wchar_t)uVar11;
      if (uVar5 < 0x110000 && 0xffff < uVar5) {
        if (param_2 <= uVar12 + 1) break;
        param_1[uVar12 + 1] = (wVar9 & 0x3ffU) + L'\xdc00';
        wVar9 = ((ushort)(uVar11 >> 10) & 0x3f) + L'\xd800';
        iVar7 = 2;
      }
      else {
        iVar7 = 1;
        if (bVar2 || bVar3) {
          wVar9 = L'�';
        }
      }
      uVar5 = uVar12 + iVar7;
      uVar6 = uVar6 + 1;
      param_1[uVar12] = wVar9;
      uVar12 = uVar5;
      if (bVar4 || (param_4 <= uVar6 || param_2 <= uVar5)) goto LAB_1443237ad;
      bVar1 = param_3[uVar6];
      uVar10 = (uint)(byte)((char)bVar1 >> 7);
      uVar5 = uVar6 + (uVar10 & 1);
    }
    bVar4 = true;
  }
LAB_1443237ad:
  *param_5 = uVar12;
  return !bVar4;
}

// Encode @ 14432f840

bool __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::Encode
          (uchar *param_1,uint param_2,wchar_t *param_3,uint param_4,uint *param_5)

{
  wchar_t wVar1;
  wchar_t wVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (param_2 < param_4 * 3) {
    return false;
  }
  uVar8 = 0;
  uVar5 = 0;
  uVar7 = uVar5;
  if (param_4 != 0) {
    uVar11 = uVar8;
    do {
      uVar5 = (uint)uVar11;
      uVar10 = uVar5 + 1;
      uVar7 = param_4 - 1;
      if (uVar10 < param_4 - 1) {
        uVar7 = uVar10;
      }
      wVar1 = param_3[uVar11];
      wVar2 = param_3[uVar7];
      iVar6 = (int)uVar8;
      if (((ushort)wVar1 < 0xd800 || 0xdbff < (ushort)wVar1) ||
         (0xdfff < (ushort)wVar2 || (ushort)wVar2 < 0xdc00)) {
        if ((ushort)wVar1 < 0x80) {
          param_1[uVar8] = (byte)wVar1;
          iVar3 = 1;
        }
        else {
          bVar9 = (byte)((ushort)wVar1 >> 7) | 0x80;
          bVar4 = (byte)wVar1 & 0x7f;
          if (0x3ff < (ushort)wVar1) {
            param_1[iVar6 + 1U] = bVar9;
            param_1[uVar8] = (byte)((ushort)wVar1 >> 0xe) | 0x80;
            param_1[iVar6 + 2] = bVar4;
            goto LAB_1443239e7;
          }
          param_1[iVar6 + 1U] = bVar4;
          iVar3 = 2;
          param_1[uVar8] = bVar9;
        }
      }
      else {
        uVar5 = (uint)(ushort)wVar2 + (uint)(ushort)wVar1 * 0x400 + -0x35fdc00;
        param_1[iVar6 + 1] = (byte)(uVar5 >> 7) | 0x80;
        param_1[uVar8] = (byte)(uVar5 >> 0xe) | 0x80;
        param_1[iVar6 + 2] = (byte)uVar5 & 0x7f;
        uVar5 = uVar10;
LAB_1443239e7:
        iVar3 = 3;
      }
      uVar7 = iVar6 + iVar3;
      uVar8 = (ulonglong)uVar7;
      uVar5 = uVar5 + 1;
      uVar11 = (ulonglong)uVar5;
    } while (uVar5 < param_4);
  }
  *param_5 = uVar7;
  return uVar5 == param_4;
}

// GetCodepointFromSurrogates @ 144330190

uint __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::GetCodepointFromSurrogates
          (wchar_t param_1,wchar_t param_2)

{
  return (ushort)param_2 + 0xfca02400 + (uint)(ushort)param_1 * 0x400;
}

// GetHighSurrogate @ 1443305b0

wchar_t __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::GetHighSurrogate(uint param_1)

{
  return ((ushort)(param_1 >> 10) & 0x3f) + L'\xd800';
}

// GetLowSurrogate @ 144330680

wchar_t __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::GetLowSurrogate(uint param_1)

{
  return ((ushort)param_1 & 0x3ff) + L'\xdc00';
}

// GetSafeDecodedBufferLength @ 1443312b0

uint __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::GetSafeDecodedBufferLength
          (uint param_1)

{
  return (param_1 * 4) / 3;
}

// GetSafeEncodedBufferLength @ 1443312d0

uint __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::GetSafeEncodedBufferLength
          (uint param_1)

{
  return param_1 * 3;
}

// IsHighSurrogate @ 144334800

bool __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::IsHighSurrogate(wchar_t param_1)

{
  return (ushort)param_1 < 0xdc00 && 0xd7ff < (ushort)param_1;
}

// IsInNeedOfSurrogates @ 144334820

bool __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::IsInNeedOfSurrogates
          (uint param_1)

{
  return 0xffff < param_1 && param_1 < 0x110000;
}

// IsInvalidCodepoint @ 144334840

bool __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::IsInvalidCodepoint(uint param_1)

{
  return param_1 - 0xfffe < 2 || 0x10ffff < param_1;
}

// IsLowSurrogate @ 144334860

bool __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::IsLowSurrogate(wchar_t param_1)

{
  return (ushort)param_1 < 0xe000 && 0xdbff < (ushort)param_1;
}

// IsSurrogate @ 144334920

bool __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::IsSurrogate(uint param_1)

{
  return param_1 < 0xe000 && 0xd7ff < param_1;
}

// IsValidEncoding @ 144334980

bool __cdecl
UE::Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::IsValidEncoding
          (uchar *param_1,uint param_2)

{
  uchar *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        if ((uint)uVar3 == param_2 || 3 < uVar4) {
          return false;
        }
        puVar1 = param_1 + uVar3;
        uVar2 = (uint)uVar3 + (uint)(byte)-((char)*puVar1 >> 7);
        uVar3 = (ulonglong)uVar2;
      } while ((byte)-((char)*puVar1 >> 7) != 0);
      uVar2 = uVar2 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 != param_2);
  }
  return true;
}

