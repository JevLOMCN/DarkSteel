// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FPixelFormatInfo @ 1419172c0

FPixelFormatInfo * __thiscall
FPixelFormatInfo::FPixelFormatInfo
          (FPixelFormatInfo *this,EPixelFormat param_1,wchar_t *param_2,int param_3,int param_4,
          int param_5,int param_6,int param_7,bool param_8)

{
  this->Supported = '\0';
  this->BlockSizeY = param_4;
  this->BlockSizeZ = param_5;
  this->BlockBytes = param_6;
  this->NumComponents = param_7;
  this->Capabilities = None;
  this->PlatformFormat = 0;
  this->Name = param_2;
  this->field_0x28 = this->field_0x28 | param_8 | 2U;
  this->UnrealFormat = param_1;
  this->BlockSizeX = param_3;
  return this;
}

// Get2DImageSizeInBytes @ 141944470

ulong64 __thiscall
FPixelFormatInfo::Get2DImageSizeInBytes(FPixelFormatInfo *this,uint param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  uVar1 = this->BlockSizeX;
  uVar3 = uVar2;
  if (0 < (int)uVar1) {
    uVar3 = (ulonglong)((param_1 - 1) + uVar1) / (ulonglong)uVar1;
  }
  uVar1 = this->BlockSizeY;
  if (0 < (int)uVar1) {
    uVar2 = (ulonglong)((param_2 - 1) + uVar1) / (ulonglong)uVar1;
  }
  return (longlong)this->BlockBytes * uVar2 * uVar3;
}

// Get2DTextureMipSizeInBytes @ 1419444c0

ulong64 __thiscall
FPixelFormatInfo::Get2DTextureMipSizeInBytes
          (FPixelFormatInfo *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  bVar2 = (byte)param_3 & 0x1f;
  iVar6 = (int)param_2 >> bVar2;
  bVar3 = (byte)param_3 & 0x1f;
  iVar5 = (int)param_1 >> bVar3;
  uVar1 = this->BlockSizeX;
  iVar4 = 1;
  if (1 < iVar6) {
    iVar4 = iVar6;
  }
  uVar7 = (ulonglong)(uint)(0 >> bVar2);
  uVar8 = uVar7;
  if (0 < (int)uVar1) {
    iVar6 = 1;
    if (1 < iVar5) {
      iVar6 = iVar5;
    }
    uVar8 = CONCAT44(0 >> bVar3,iVar6 + -1 + uVar1) / (ulonglong)uVar1 & 0xffffffff;
  }
  uVar1 = this->BlockSizeY;
  if (0 < (int)uVar1) {
    uVar7 = (ulonglong)((uVar1 - 1) + iVar4) / (ulonglong)uVar1;
  }
  return (longlong)this->BlockBytes * uVar7 * uVar8;
}

// Get2DTextureSizeInBytes @ 141944530

ulong64 __thiscall
FPixelFormatInfo::Get2DTextureSizeInBytes
          (FPixelFormatInfo *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  if (param_3 != 0) {
    uVar1 = this->BlockSizeY;
    uVar2 = this->BlockSizeX;
    uVar5 = (ulonglong)param_3;
    do {
      if ((int)uVar2 < 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulonglong)((uVar2 - 1) + param_1) / (ulonglong)uVar2;
      }
      if ((int)uVar1 < 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = (ulonglong)((uVar1 - 1) + param_2) / (ulonglong)uVar1;
      }
      uVar4 = (int)param_1 >> 1;
      uVar6 = uVar6 + (longlong)this->BlockBytes * uVar3 * uVar7;
      param_1 = 1;
      if (1 < (int)uVar4) {
        param_1 = uVar4;
      }
      uVar4 = (int)param_2 >> 1;
      param_2 = 1;
      if (1 < (int)uVar4) {
        param_2 = uVar4;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return uVar6;
}

// Get3DImageSizeInBytes @ 1419445e0

ulong64 __thiscall
FPixelFormatInfo::Get3DImageSizeInBytes
          (FPixelFormatInfo *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar1 = this->BlockSizeX;
  uVar2 = uVar3;
  if (0 < (int)uVar1) {
    uVar2 = (ulonglong)((param_1 - 1) + uVar1) / (ulonglong)uVar1;
  }
  uVar1 = this->BlockSizeY;
  if (0 < (int)uVar1) {
    uVar3 = (ulonglong)((param_2 - 1) + uVar1) / (ulonglong)uVar1;
  }
  return (longlong)this->BlockBytes * (ulonglong)param_3 * uVar3 * uVar2;
}

// Get3DTextureMipSizeInBytes @ 141944640

ulong64 __thiscall
FPixelFormatInfo::Get3DTextureMipSizeInBytes
          (FPixelFormatInfo *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  bVar4 = (byte)param_4;
  uVar6 = (int)param_2 >> (bVar4 & 0x1f);
  iVar5 = (int)param_1 >> (bVar4 & 0x1f);
  uVar1 = 1;
  if (1 < (int)uVar6) {
    uVar1 = uVar6;
  }
  uVar8 = (int)param_3 >> (bVar4 & 0x1f);
  uVar6 = this->BlockSizeX;
  uVar2 = 1;
  if (1 < (int)uVar8) {
    uVar2 = uVar8;
  }
  uVar7 = (ulonglong)(uint)(0 >> (bVar4 & 0x1f));
  uVar9 = uVar7;
  if (0 < (int)uVar6) {
    iVar3 = 1;
    if (1 < iVar5) {
      iVar3 = iVar5;
    }
    uVar9 = CONCAT44(0 >> (bVar4 & 0x1f),iVar3 + -1 + uVar6) / (ulonglong)uVar6 & 0xffffffff;
  }
  uVar6 = this->BlockSizeY;
  if (0 < (int)uVar6) {
    uVar7 = (ulonglong)((uVar6 - 1) + uVar1) / (ulonglong)uVar6;
  }
  return (longlong)this->BlockBytes * (ulonglong)uVar2 * uVar7 * uVar9;
}

// Get3DTextureSizeInBytes @ 1419446c0

ulong64 __thiscall
FPixelFormatInfo::Get3DTextureSizeInBytes
          (FPixelFormatInfo *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar5 = 0;
  if (param_4 != 0) {
    uVar1 = this->BlockSizeY;
    uVar2 = this->BlockSizeX;
    uVar4 = (ulonglong)param_4;
    do {
      if ((int)uVar2 < 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulonglong)((uVar2 - 1) + param_1) / (ulonglong)uVar2;
      }
      if ((int)uVar1 < 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = (ulonglong)((uVar1 - 1) + param_2) / (ulonglong)uVar1;
      }
      uVar7 = (int)param_1 >> 1;
      uVar5 = uVar5 + (ulonglong)param_3 * (longlong)this->BlockBytes * uVar3 * uVar6;
      param_1 = 1;
      if (1 < (int)uVar7) {
        param_1 = uVar7;
      }
      uVar7 = (int)param_2 >> 1;
      param_2 = 1;
      if (1 < (int)uVar7) {
        param_2 = uVar7;
      }
      uVar7 = (int)param_3 >> 1;
      param_3 = 1;
      if (1 < (int)uVar7) {
        param_3 = uVar7;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return uVar5;
}

// GetBlockCountForHeight @ 141945990

ulong64 __thiscall FPixelFormatInfo::GetBlockCountForHeight(FPixelFormatInfo *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = this->BlockSizeY;
  if (0 < (int)uVar1) {
    return (ulonglong)((param_1 - 1) + uVar1) / (ulonglong)uVar1;
  }
  return 0;
}

// GetBlockCountForWidth @ 1419459b0

ulong64 __thiscall FPixelFormatInfo::GetBlockCountForWidth(FPixelFormatInfo *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = this->BlockSizeX;
  if (0 < (int)uVar1) {
    return (ulonglong)((param_1 - 1) + uVar1) / (ulonglong)uVar1;
  }
  return 0;
}

