// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// CalculateTime @ 14bb53800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall FDS_InGameTimeData::CalculateTime(FDS_InGameTimeData *this)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  UDS_LogManager *pUVar4;
  FDateTime *pFVar5;
  longlong lVar6;
  ulong64 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auStackY_188 [32];
  FDateTime local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (0.0 < (double)(this->OneGameDay).Ticks * __real_3e7ad7f29abcaf48) {
    dVar11 = UDS_TimeUtilManager::GetCurrentServerTime();
    dVar11 = dVar11 * __real_416312d000000000;
    pFVar5 = FDateTime::FDateTime(local_148,0x7b2,1,1,0,0,0,0);
    lVar8 = (pFVar5->Ticks + (longlong)dVar11) % 864000000000 - (this->GameTimeStartTime).Ticks;
    if (lVar8 < 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = __real_4269254d38001000;
      auVar13 = roundpd(auVar13,auVar13,1);
      lVar8 = lVar8 + (longlong)auVar13._0_8_;
    }
    lVar2 = (this->OneGameDay).Ticks;
    lVar8 = lVar8 % lVar2;
    dVar11 = (double)(this->TimeOfDay).Ticks * __real_3e7ad7f29abcaf48;
    (this->TimeOfDay).Ticks = lVar8;
    lVar6 = (this->SunriseTime).Ticks - lVar8;
    (this->TimeUntilNextSunrise).Ticks = lVar6;
    dVar12 = (double)lVar8 * __real_3e7ad7f29abcaf48;
    if (lVar6 < 0) {
      (this->TimeUntilNextSunrise).Ticks = lVar6 + lVar2;
    }
    lVar6 = (this->DuskTime).Ticks - lVar8;
    (this->TimeUntilNextNight).Ticks = lVar6;
    if (lVar6 < 0) {
      (this->TimeUntilNextNight).Ticks = lVar6 + lVar2;
    }
    lVar6 = lVar2 - lVar8;
    (this->TimeUntilNextDay).Ticks = lVar6;
    if (lVar6 < 0) {
      (this->TimeUntilNextDay).Ticks = lVar6 + lVar2;
    }
    dVar3 = __real_40a2c00000000000;
    dVar1 = this->CurrentTOD;
    uVar9 = (ulonglong)((longlong)dVar11 != (longlong)dVar12);
    this->PreviousTOD = dVar1;
    dVar11 = (dVar3 / (double)lVar2) * (double)lVar8;
    dVar12 = dVar1 * __real_3f847ae147ae147b;
    uVar10 = uVar9 | 2;
    if (dVar1 <= dVar11) {
      uVar10 = uVar9;
    }
    this->CurrentTOD = dVar11;
    uVar7 = uVar10 | 4;
    if ((int)dVar12 == (int)(dVar11 * __real_3f847ae147ae147b)) {
      uVar7 = uVar10;
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_InGameTimeData::CalculateTime",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x3b,L"[Env] OneGameDay.GetTotalSeconds() <= 0.0");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}

// GetInGameTime @ 14bb658d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FTimespan __thiscall FDS_InGameTimeData::GetInGameTime(FDS_InGameTimeData *this)

{
  UDS_LogManager *pUVar1;
  longlong *in_RDX;
  double dVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  dVar2 = (double)(this->OneGameDay).Ticks;
  if (0.0 < dVar2 * ___real_3dbe8abfd59a6108) {
    *in_RDX = (longlong)
              ((double)(longlong)((double)(this->TimeOfDay).Ticks * __real_4038000000000000) *
              (__real_4220c388d0000000 / dVar2));
  }
  else {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_InGameTimeData::GetInGameTime",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x7b,L"[Env] OneGameDay.GetTotalSeconds() <= 0.0");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    *in_RDX = 0;
  }
  return (FTimespan)(long64)in_RDX;
}

// InitGameTimeData @ 14bb6b0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_InGameTimeData::InitGameTimeData(FDS_InGameTimeData *this)

{
  longlong lVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  FDS_GameTimeDataTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar5 = FDS_GameTimeDataTableRow::Get(1,true);
  fVar4 = __real_4b189680;
  fVar3 = __real_3f000000;
  if (pFVar5 == (FDS_GameTimeDataTableRow *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_InGameTimeData::InitGameTimeData",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x17,L"gameTimeDataRow == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    (this->GameTimeStartTime).Ticks = (pFVar5->GameTimeStartTime).Ticks % 864000000000;
    if (0.0 < pFVar5->OneGameDaySec) {
      auVar10._0_8_ = (double)(pFVar5->OneGameDaySec * fVar4 + fVar3);
      auVar10._8_8_ = 0;
      auVar10 = roundpd(auVar10,auVar10,1);
      (this->OneGameDay).Ticks = (longlong)auVar10._0_8_;
    }
    dVar2 = __real_416312d000000000;
    lVar1 = (this->OneGameDay).Ticks;
    auVar11._0_8_ = (double)(pFVar5->SunriseTimeSec * fVar4 + fVar3);
    auVar11._8_8_ = 0;
    auVar10 = roundpd(auVar11,auVar11,1);
    lVar8 = (longlong)auVar10._0_8_ % lVar1;
    (this->SunriseTime).Ticks = lVar8;
    dVar13 = (double)lVar8 * __real_3e7ad7f29abcaf48;
    auVar12._0_8_ = (double)(pFVar5->SunVisibleDurationSec * fVar4 + fVar3);
    auVar12._8_8_ = 0;
    auVar10 = roundpd(auVar12,auVar12,1);
    lVar7 = (longlong)auVar10._0_8_;
    (this->DayDuration).Ticks = lVar7;
    lVar8 = (lVar7 + lVar8) % lVar1;
    (this->DuskTime).Ticks = lVar8;
    (this->NightDuration).Ticks = lVar1 - lVar7;
    dVar9 = (double)lVar8 * __real_3e7ad7f29abcaf48;
    this->SunriseTOD = dVar13 * (dVar2 / (double)lVar1) * __real_40a2c00000000000;
    this->DuskTOD = dVar9 * (dVar2 / (double)lVar1) * __real_40a2c00000000000;
  }
  return;
}

