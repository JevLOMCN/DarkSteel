// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// AddPredictionWord @ 141fc46b0

void __thiscall
FPredictMatch8::AddPredictionWord(FPredictMatch8 *this,uchar *param_1,ushort param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined8 local_res8;
  
  uVar6 = 0;
  local_res8 = 0;
  if ((param_2 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\CoreRedirects\\PM-k.h"
                         ,0x48,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar9 = 0;
  local_res8._2_1_ = 0;
  bVar7 = local_res8._2_1_;
  switch(param_2) {
  case 1:
    goto LAB_141fc476d;
  case 2:
    break;
  default:
    local_res8 = (ulonglong)param_1[7] << 0x38;
  case 7:
    local_res8 = (ulonglong)CONCAT11(local_res8._7_1_,param_1[6]) << 0x30;
  case 6:
    local_res8 = (ulonglong)CONCAT21(local_res8._6_2_,param_1[5]) << 0x28;
  case 5:
    local_res8 = (ulonglong)CONCAT31(local_res8._5_3_,param_1[4]) << 0x20;
  case 4:
    local_res8 = (ulonglong)CONCAT41(local_res8._4_4_,param_1[3]) << 0x18;
  case 3:
    bVar7 = param_1[2];
  }
  bVar9 = param_1[1];
LAB_141fc476d:
  uVar8 = ((ushort)*param_1 << 3 ^ (ushort)bVar9) & 0xff;
  uVar10 = (uVar8 << 3 ^ (ushort)bVar7) & 0xff;
  uVar11 = (uVar10 << 3 ^ (ushort)local_res8._3_1_) & 0xff;
  uVar14 = (uVar11 << 3 ^ (ushort)local_res8._4_1_) & 0xff;
  uVar13 = (uVar14 << 3 ^ (ushort)local_res8._5_1_) & 0xff;
  uVar12 = (uVar13 << 3 ^ (ushort)local_res8._6_1_) & 0xff;
  uVar4 = 0x3fff;
  if (1 < param_2) {
    uVar4 = 0xbfff;
  }
  this->PredictMatchTable[*param_1] = this->PredictMatchTable[*param_1] & uVar4;
  if (1 < param_2) {
    uVar5 = 0;
    uVar4 = uVar5;
    if (2 < param_2) {
      uVar4 = 0x2000;
    }
    this->PredictMatchTable[uVar8] = this->PredictMatchTable[uVar8] & (uVar4 | 0xcfff);
    if (2 < param_2) {
      uVar4 = uVar5;
      if (3 < param_2) {
        uVar4 = 0x800;
      }
      this->PredictMatchTable[uVar10] = this->PredictMatchTable[uVar10] & (uVar4 | 0xf3ff);
      if (3 < param_2) {
        if (4 < param_2) {
          uVar5 = 0x200;
        }
        this->PredictMatchTable[uVar11] = this->PredictMatchTable[uVar11] & (uVar5 | 0xfcff);
        if (4 < param_2) {
          uVar10 = 0;
          uVar8 = 0;
          uVar4 = uVar8;
          if (5 < param_2) {
            uVar4 = 0x80;
          }
          this->PredictMatchTable[uVar14] = this->PredictMatchTable[uVar14] & (uVar4 | 0xff3f);
          if (5 < param_2) {
            if (6 < param_2) {
              uVar8 = 0x20;
            }
            this->PredictMatchTable[uVar13] = this->PredictMatchTable[uVar13] & (uVar8 | 0xffcf);
            if (6 < param_2) {
              if (7 < param_2) {
                uVar10 = 8;
              }
              uVar10 = uVar10 | 0xfff3;
              goto LAB_141fc4911;
            }
          }
        }
      }
    }
  }
  uVar10 = 0xffff;
LAB_141fc4911:
  this->PredictMatchTable[uVar12] = this->PredictMatchTable[uVar12] & uVar10;
  uVar4 = 0xffff;
  if (7 < param_2) {
    uVar4 = 0xfffc;
  }
  this->PredictMatchTable[(uVar12 << 3 ^ (ushort)local_res8._7_1_) & 0xff] =
       this->PredictMatchTable[(uVar12 << 3 ^ (ushort)local_res8._7_1_) & 0xff] & uVar4;
  if (this->MinimumWordLength < param_2) {
    param_2 = this->MinimumWordLength;
  }
  this->MinimumWordLength = param_2;
  if (param_2 != 0) {
    do {
      bVar9 = *param_1;
      param_1 = param_1 + 1;
      uVar1 = uVar6 & 0x1f;
      uVar6 = uVar6 + 1;
      this->BitApproxTable[bVar9] = this->BitApproxTable[bVar9] & ~(ushort)(1 << uVar1);
    } while ((int)uVar6 < (int)(uint)this->MinimumWordLength);
  }
  return;
}

// MatchApproximate @ 141fd7390

bool __thiscall FPredictMatch8::MatchApproximate(FPredictMatch8 *this,uchar *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  byte bVar14;
  ushort uVar15;
  int iVar16;
  byte bVar17;
  undefined8 local_res8;
  
  if ((param_2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\CoreRedirects\\PM-k.h"
                         ,0x86,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar3 = this->MinimumWordLength;
  pbVar1 = param_1 + param_2;
  uVar15 = 0xffff;
  do {
    while( true ) {
      if (pbVar1 <= param_1) {
        return false;
      }
      uVar15 = uVar15 * 2 | this->BitApproxTable[*param_1];
      if ((1 << ((char)uVar3 - 1U & 0x1f) & uVar15) == 0) break;
      param_1 = param_1 + 1;
    }
    uVar7 = this->MinimumWordLength;
    local_res8 = 0;
    bVar17 = 0;
    iVar16 = (int)pbVar1 - (int)(param_1 + (1 - (ulonglong)uVar7));
    if ((iVar16 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataLen",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\CoreRedirects\\PM-k.h"
                           ,0xc0,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_res8._2_1_ = 0;
    bVar14 = local_res8._2_1_;
    switch(iVar16) {
    case 1:
      goto LAB_141fd74c9;
    case 2:
      break;
    default:
      local_res8 = (ulonglong)param_1[8 - (ulonglong)uVar7] << 0x38;
    case 7:
      local_res8 = (ulonglong)CONCAT11(local_res8._7_1_,param_1[7 - (ulonglong)uVar7]) << 0x30;
    case 6:
      local_res8 = (ulonglong)CONCAT21(local_res8._6_2_,param_1[6 - (ulonglong)uVar7]) << 0x28;
    case 5:
      local_res8 = (ulonglong)CONCAT31(local_res8._5_3_,param_1[5 - (ulonglong)uVar7]) << 0x20;
    case 4:
      local_res8 = (ulonglong)CONCAT41(local_res8._4_4_,param_1[4 - (ulonglong)uVar7]) << 0x18;
    case 3:
      bVar14 = param_1[3 - (ulonglong)uVar7];
    }
    bVar17 = param_1[2 - (ulonglong)uVar7];
LAB_141fd74c9:
    bVar2 = param_1[1 - (ulonglong)uVar7];
    uVar7 = ((ushort)bVar2 << 3 ^ (ushort)bVar17) & 0xff;
    uVar8 = (uVar7 << 3 ^ (ushort)bVar14) & 0xff;
    uVar9 = (uVar8 << 3 ^ (ushort)local_res8._3_1_) & 0xff;
    uVar10 = (uVar9 << 3 ^ (ushort)local_res8._4_1_) & 0xff;
    uVar11 = (uVar10 << 3 ^ (ushort)local_res8._5_1_) & 0xff;
    uVar12 = (uVar11 << 3 ^ (ushort)local_res8._6_1_) & 0xff;
    uVar13 = this->PredictMatchTable[(byte)((byte)(uVar12 << 3) ^ local_res8._7_1_)] & 3 |
             this->PredictMatchTable[uVar9] & 0x300 | this->PredictMatchTable[uVar12] & 0xc |
             this->PredictMatchTable[uVar10] & 0xc0 | this->PredictMatchTable[uVar11] & 0x30 |
             this->PredictMatchTable[uVar7] & 0x3000 | this->PredictMatchTable[bVar2] & 0xc000 |
             this->PredictMatchTable[uVar8] & 0xc00;
    if ((((((((uVar13 >> 2 | uVar13) >> 2 | uVar13) >> 2 | uVar13) >> 2 | uVar13) >> 2 | uVar13) >>
          2 | uVar13) >> 1 | uVar13) != 0xffff) {
      return true;
    }
    param_1 = param_1 + 1;
  } while( true );
}

// PredictMatch @ 141fd9280

bool __cdecl FPredictMatch8::PredictMatch(ushort *param_1,uchar *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  undefined8 local_res8;
  
  local_res8 = 0;
  if ((param_3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\CoreRedirects\\PM-k.h"
                         ,0xc0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar12 = 0;
  local_res8._2_1_ = 0;
  bVar11 = local_res8._2_1_;
  switch(param_3) {
  case 1:
    goto LAB_141fd930a;
  case 2:
    break;
  default:
    local_res8 = (ulonglong)param_2[7] << 0x38;
  case 7:
    local_res8 = (ulonglong)CONCAT11(local_res8._7_1_,param_2[6]) << 0x30;
  case 6:
    local_res8 = (ulonglong)CONCAT21(local_res8._6_2_,param_2[5]) << 0x28;
  case 5:
    local_res8 = (ulonglong)CONCAT31(local_res8._5_3_,param_2[4]) << 0x20;
  case 4:
    local_res8 = (ulonglong)CONCAT41(local_res8._4_4_,param_2[3]) << 0x18;
  case 3:
    bVar11 = param_2[2];
  }
  bVar12 = param_2[1];
LAB_141fd930a:
  uVar4 = ((ushort)*param_2 << 3 ^ (ushort)bVar12) & 0xff;
  uVar5 = (uVar4 << 3 ^ (ushort)bVar11) & 0xff;
  uVar6 = (uVar5 << 3 ^ (ushort)local_res8._3_1_) & 0xff;
  uVar7 = (uVar6 << 3 ^ (ushort)local_res8._4_1_) & 0xff;
  uVar8 = (uVar7 << 3 ^ (ushort)local_res8._5_1_) & 0xff;
  uVar9 = (uVar8 << 3 ^ (ushort)local_res8._6_1_) & 0xff;
  uVar10 = param_1[(byte)((byte)(uVar9 << 3) ^ local_res8._7_1_)] & 3 | param_1[uVar5] & 0xc00 |
           param_1[uVar6] & 0x300 | param_1[uVar9] & 0xc | param_1[uVar7] & 0xc0 |
           param_1[uVar8] & 0x30 | param_1[uVar4] & 0x3000 | param_1[*param_2] & 0xc000;
  return (((((((uVar10 >> 2 | uVar10) >> 2 | uVar10) >> 2 | uVar10) >> 2 | uVar10) >> 2 | uVar10) >>
           2 | uVar10) >> 1 | uVar10) != 0xffff;
}

