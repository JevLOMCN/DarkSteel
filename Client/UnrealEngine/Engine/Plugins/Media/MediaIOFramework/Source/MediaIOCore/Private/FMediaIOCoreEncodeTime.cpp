// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 6

// FMediaIOCoreEncodeTime @ 14d789f70

FMediaIOCoreEncodeTime * __thiscall
FMediaIOCoreEncodeTime::FMediaIOCoreEncodeTime
          (FMediaIOCoreEncodeTime *this,EMediaIOCoreEncodePixelFormat param_1,void *param_2,
          uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  EMediaIOCoreEncodePixelFormat EVar1;
  code *pcVar2;
  bool bVar3;
  FMediaIOCoreEncodeTime *pFVar4;
  
  this->Width = param_4;
  this->Height = param_5;
  this->XPixelOffset = param_6;
  this->YPixelOffset = param_7;
  this->Format = param_1;
  this->Buffer = param_2;
  this->Pitch = param_3;
  if (param_2 == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Shared\\MediaIOCoreEncodeTime.cpp"
                       ,0xe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMediaIOCoreEncodeTime *)(*pcVar2)();
      return pFVar4;
    }
  }
  EVar1 = this->Format;
  if (EVar1 == A2B10G10R10) {
    this->ColorBlack = -0x40000000;
    this->ColorWhite = -1;
    return this;
  }
  if (EVar1 != CharUYVY) {
    if (EVar1 == CharBGRA) {
      this->ColorBlack =
           CONCAT31(CONCAT21(CONCAT11(FColor::Black.field0_0x0._s_0.A,
                                      FColor::Black.field0_0x0._s_0.R),
                             FColor::Black.field0_0x0._s_0.G),FColor::Black.field0_0x0._s_0.B);
      this->ColorWhite =
           CONCAT31(CONCAT21(CONCAT11(FColor::White.field0_0x0._s_0.A,
                                      FColor::White.field0_0x0._s_0.R),
                             FColor::White.field0_0x0._s_0.G),FColor::White.field0_0x0._s_0.B);
      return this;
    }
    if (EVar1 != YUVv210) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Shared\\MediaIOCoreEncodeTime.cpp"
                         ,0x25,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FMediaIOCoreEncodeTime *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  return this;
}

// DrawChar @ 14d7a3730

void __thiscall
FMediaIOCoreEncodeTime::DrawChar(FMediaIOCoreEncodeTime *this,uint param_1,uint param_2)

{
  byte bVar1;
  uchar *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 < 0xb) {
    uVar7 = 0;
    puVar2 = ::Font[param_2];
    do {
      bVar1 = *puVar2;
      iVar3 = 0;
      uVar6 = 1;
      do {
        uVar4 = 0;
        if ((uVar6 & bVar1) == 0) {
          do {
            uVar5 = 0;
            do {
              SetPixel(this,uVar5 + (this->XPixelOffset + param_1 * 8 + iVar3) * 4,
                       uVar4 + (this->YPixelOffset + uVar7) * 4,false);
              uVar5 = uVar5 + 1;
            } while (uVar5 < 4);
            uVar4 = uVar4 + 1;
          } while (uVar4 < 4);
        }
        else {
          do {
            uVar5 = 0;
            do {
              SetPixel(this,uVar5 + (this->XPixelOffset + param_1 * 8 + iVar3) * 4,
                       uVar4 + (this->YPixelOffset + uVar7) * 4,true);
              uVar5 = uVar5 + 1;
            } while (uVar5 < 4);
            uVar4 = uVar4 + 1;
          } while (uVar4 < 4);
        }
        iVar3 = iVar3 + 1;
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      } while (iVar3 < 8);
      uVar7 = uVar7 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar7 < 0xb);
  }
  return;
}

// DrawTime @ 14d7a3880

void __thiscall
FMediaIOCoreEncodeTime::DrawTime(FMediaIOCoreEncodeTime *this,uint param_1,uint param_2)

{
  DrawChar(this,param_1,(param_2 / 10) % 10);
  DrawChar(this,param_1 + 1,param_2 % 10);
  return;
}

// Render @ 14d7baa50

void __thiscall
FMediaIOCoreEncodeTime::Render
          (FMediaIOCoreEncodeTime *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  DrawChar(this,0,(param_1 / 10) % 10);
  DrawChar(this,1,param_1 % 10);
  DrawChar(this,2,10);
  DrawChar(this,3,(param_2 / 10) % 10);
  DrawChar(this,4,param_2 % 10);
  DrawChar(this,5,10);
  DrawChar(this,6,(param_3 / 10) % 10);
  DrawChar(this,7,param_3 % 10);
  DrawChar(this,8,10);
  DrawChar(this,9,(param_4 / 10) % 10);
  DrawChar(this,10,param_4 % 10);
  return;
}

// SetPixel @ 14d7bc840

void __thiscall
FMediaIOCoreEncodeTime::SetPixel
          (FMediaIOCoreEncodeTime *this,uint param_1,uint param_2,bool param_3)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  uint local_80 [4];
  EMediaIOCoreEncodePixelFormat local_70;
  EMediaIOCoreEncodePixelFormat local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50 [16];
  EMediaIOCoreEncodePixelFormat local_10;
  EMediaIOCoreEncodePixelFormat local_c;
  
  if ((param_1 < this->Width) && (param_2 < this->Height)) {
    local_70 = this->Format;
    if (local_70 == YUVv210) {
      local_80[0] = 0;
      local_50[0] = 0;
      local_50[1] = 0;
      local_68 = 0;
      local_50[0xc] = 0;
      local_50[0xd] = 0;
      local_50[9] = 0;
      local_6c = local_70;
      lVar8 = (ulonglong)(param_2 * this->Pitch) + (ulonglong)(param_1 / 6 << 4);
      local_80[1] = 1;
      pvVar3 = this->Buffer;
      local_80[2] = 1;
      uVar5 = (ulonglong)(param_1 % 6);
      local_80[3] = 2;
      local_98 = 10;
      local_90 = 0x14;
      local_8c = 10;
      local_84 = 0x14;
      local_10 = local_70;
      local_c = local_70;
      puVar7 = (uint *)((longlong)pvVar3 + (ulonglong)local_80[uVar5] * 4 + lVar8);
      local_50[2] = 1;
      local_50[3] = 1;
      uVar4 = 0x3ff << ((byte)*(undefined4 *)((longlong)&local_98 + uVar5 * 4) & 0x1f);
      local_50[4] = 2;
      local_50[5] = 2;
      local_60 = 10;
      local_5c = 10;
      local_58 = 0x14;
      local_54 = 0x14;
      local_50[0xe] = 2;
      local_50[0xf] = 2;
      local_50[6] = 0x14;
      local_50[7] = 0x14;
      local_50[8] = 0;
      local_50[10] = 10;
      local_50[0xb] = 10;
      if (param_3) {
        *puVar7 = *puVar7 | uVar4;
      }
      else {
        *puVar7 = *puVar7 & ~uVar4;
      }
      puVar7 = (uint *)((longlong)pvVar3 + (ulonglong)local_50[uVar5] * 4 + lVar8);
      bVar6 = (byte)*(undefined4 *)((longlong)&local_68 + uVar5 * 4);
      uVar4 = local_50[uVar5 + 6];
      uVar2 = local_50[uVar5 + 0xc];
      *puVar7 = ~(0x3ff << (bVar6 & 0x1f)) & *puVar7 | 0x1ff << (bVar6 & 0x1f);
      *(uint *)((longlong)pvVar3 + (ulonglong)uVar2 * 4 + lVar8) =
           ~(0x3ff << ((byte)uVar4 & 0x1f)) &
           *(uint *)((longlong)pvVar3 + (ulonglong)uVar2 * 4 + lVar8) |
           0x1ff << ((byte)uVar4 & 0x1f);
      return;
    }
    uVar5 = (ulonglong)(this->Pitch * param_2);
    if (local_70 == CharUYVY) {
      puVar7 = (uint *)((longlong)this->Buffer + ((param_1 >> 1) << 2) + uVar5);
      if (param_3) {
        uVar4 = 0xff000000;
        if ((param_1 & 1) != 0) {
          uVar4 = 0xff00;
        }
        *puVar7 = *puVar7 | uVar4;
        *puVar7 = *puVar7 & 0xff80ff80;
        *puVar7 = *puVar7 | 0x800080;
        return;
      }
      if ((param_1 & 1) == 0) {
        *(undefined1 *)((longlong)puVar7 + 3) = 0;
        *puVar7 = *puVar7 & 0xff80ff80;
        *puVar7 = *puVar7 | 0x800080;
        return;
      }
      *(undefined1 *)((longlong)puVar7 + 1) = 0;
      *puVar7 = *puVar7 & 0xff80ff80;
      *puVar7 = *puVar7 | 0x800080;
      return;
    }
    piVar1 = (int *)((longlong)this->Buffer + (ulonglong)param_1 * 4 + uVar5);
    if (param_3) {
      *piVar1 = this->ColorWhite;
      return;
    }
    *piVar1 = this->ColorBlack;
  }
  return;
}

// SetPixelScaled @ 14d7bcae0

void __thiscall
FMediaIOCoreEncodeTime::SetPixelScaled
          (FMediaIOCoreEncodeTime *this,uint param_1,uint param_2,bool param_3,uint param_4)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  uint local_a0 [4];
  EMediaIOCoreEncodePixelFormat local_90;
  EMediaIOCoreEncodePixelFormat local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70 [16];
  EMediaIOCoreEncodePixelFormat local_30;
  EMediaIOCoreEncodePixelFormat local_2c;
  
  uVar11 = 0;
  uVar6 = uVar11;
  uVar12 = uVar11;
  if (param_4 != 0) {
    do {
      uVar9 = (this->YPixelOffset + param_2) * param_4 + uVar12;
      uVar7 = (this->XPixelOffset + param_1) * param_4 + uVar6;
      if ((uVar7 < this->Width) && (uVar9 < this->Height)) {
        local_90 = this->Format;
        if (local_90 == YUVv210) {
          lVar10 = (ulonglong)(uVar9 * this->Pitch) + (ulonglong)(uVar7 / 6 << 4);
          local_8c = local_90;
          pvVar2 = this->Buffer;
          local_a0[0] = 0;
          uVar8 = (ulonglong)(uVar7 % 6);
          local_a0[1] = 1;
          local_a0[2] = 1;
          local_a0[3] = 2;
          local_b8 = 10;
          local_b0 = 0x14;
          local_ac = 10;
          local_a4 = 0x14;
          local_30 = local_90;
          puVar1 = (uint *)((longlong)pvVar2 + (ulonglong)local_a0[uVar8] * 4 + lVar10);
          local_2c = local_90;
          uVar9 = 0x3ff << ((byte)*(undefined4 *)((longlong)&local_b8 + uVar8 * 4) & 0x1f);
          local_70[0] = 0;
          local_70[1] = 0;
          local_70[2] = 1;
          local_70[3] = 1;
          local_70[4] = 2;
          local_70[5] = 2;
          local_88 = 0;
          local_80 = 10;
          local_7c = 10;
          local_78 = 0x14;
          local_74 = 0x14;
          local_70[0xc] = 0;
          local_70[0xd] = 0;
          local_70[0xe] = 2;
          local_70[0xf] = 2;
          local_70[6] = 0x14;
          local_70[7] = 0x14;
          local_70[8] = 0;
          local_70[9] = 0;
          local_70[10] = 10;
          local_70[0xb] = 10;
          if (param_3) {
            *puVar1 = *puVar1 | uVar9;
          }
          else {
            *puVar1 = *puVar1 & ~uVar9;
          }
          puVar1 = (uint *)((longlong)pvVar2 + (ulonglong)local_70[uVar8] * 4 + lVar10);
          bVar4 = (byte)*(undefined4 *)((longlong)&local_88 + uVar8 * 4);
          uVar9 = local_70[uVar8 + 6];
          uVar7 = local_70[uVar8 + 0xc];
          *puVar1 = ~(0x3ff << (bVar4 & 0x1f)) & *puVar1 | 0x1ff << (bVar4 & 0x1f);
          puVar1 = (uint *)((longlong)pvVar2 + (ulonglong)uVar7 * 4 + lVar10);
          *puVar1 = ~(0x3ff << ((byte)uVar9 & 0x1f)) & *puVar1 | 0x1ff << ((byte)uVar9 & 0x1f);
        }
        else {
          pvVar2 = this->Buffer;
          uVar9 = this->Pitch * uVar9;
          if (local_90 == CharUYVY) {
            uVar8 = (ulonglong)((uVar7 >> 1) << 2);
            if (param_3) {
              uVar5 = 0xff000000;
              if ((uVar7 & 1) != 0) {
                uVar5 = 0xff00;
              }
              puVar1 = (uint *)((longlong)pvVar2 + uVar8 + uVar9);
              *puVar1 = *puVar1 | uVar5;
              puVar1 = (uint *)((longlong)pvVar2 + uVar8 + uVar9);
              *puVar1 = *puVar1 & 0xff80ff80;
              puVar1 = (uint *)((longlong)pvVar2 + uVar8 + uVar9);
              *puVar1 = *puVar1 | 0x800080;
            }
            else if ((uVar7 & 1) == 0) {
              *(undefined1 *)((longlong)pvVar2 + uVar8 + 3 + (ulonglong)uVar9) = 0;
              puVar1 = (uint *)((longlong)pvVar2 + uVar8 + uVar9);
              *puVar1 = *puVar1 & 0xff80ff80;
              puVar1 = (uint *)((longlong)pvVar2 + uVar8 + uVar9);
              *puVar1 = *puVar1 | 0x800080;
            }
            else {
              *(undefined1 *)((longlong)pvVar2 + uVar8 + 1 + (ulonglong)uVar9) = 0;
              puVar1 = (uint *)((longlong)pvVar2 + uVar8 + uVar9);
              *puVar1 = *puVar1 & 0xff80ff80;
              puVar1 = (uint *)((longlong)pvVar2 + uVar8 + uVar9);
              *puVar1 = *puVar1 | 0x800080;
            }
          }
          else {
            if (param_3) {
              iVar3 = this->ColorWhite;
            }
            else {
              iVar3 = this->ColorBlack;
            }
            *(int *)((longlong)pvVar2 + (ulonglong)uVar7 * 4 + (ulonglong)uVar9) = iVar3;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 < param_4) || (uVar12 = uVar12 + 1, uVar6 = uVar11, uVar12 < param_4));
  }
  return;
}

