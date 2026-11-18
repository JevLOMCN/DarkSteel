// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// GetWeatherForecastData @ 14bb68610

FDS_WeatherForecastData __thiscall
FDS_DayWeatherData::GetWeatherForecastData(FDS_DayWeatherData *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDS_WeatherForecastData FVar4;
  float in_register_00000014;
  uint uVar5;
  longlong lVar6;
  uint in_R8D;
  
  FVar4.WeatherProbability = in_register_00000014;
  FVar4.WeatherID = param_1;
  *(int *)FVar4 = 0;
  *(int *)((longlong)FVar4 + 4) = 0x42c80000;
  if ((int)in_R8D < 0x18) {
    lVar6 = (longlong)(int)in_R8D * 4;
    uVar5 = in_R8D;
    do {
      if ((-1 < (int)uVar5) && ((int)uVar5 < (this->FixedWeatherIDs).ArrayNum)) {
        if (((int)uVar5 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          FVar4 = (FDS_WeatherForecastData)(*pcVar2)();
          return FVar4;
        }
        iVar1 = *(int *)((this->FixedWeatherIDs).AllocatorInstance.Data + lVar6);
        if (0 < iVar1) {
          *(int *)FVar4 = iVar1;
          goto LAB_14bb686be;
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < 0x18);
  }
  if ((int)in_R8D < 0x18) {
LAB_14bb686be:
    lVar6 = (longlong)(int)in_R8D * 4;
    do {
      if ((-1 < (int)in_R8D) && ((int)in_R8D < (this->RandomWeatherIDs).ArrayNum)) {
        uVar5 = 0;
        if ((int)in_R8D < (this->RandomWeatherIDs).ArrayNum) {
          uVar5 = ~in_R8D >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          FVar4 = (FDS_WeatherForecastData)(*pcVar2)();
          return FVar4;
        }
        iVar1 = *(int *)((this->RandomWeatherIDs).AllocatorInstance.Data + lVar6);
        if (0 < iVar1) {
          *(float *)((longlong)FVar4 + 4) = this->WeatherProbability;
          *(int *)FVar4 = iVar1;
          return FVar4;
        }
      }
      in_R8D = in_R8D + 1;
      lVar6 = lVar6 + 4;
    } while ((int)in_R8D < 0x18);
  }
  return FVar4;
}

// InitDayWeatherData @ 14bb6ac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_DayWeatherData::InitDayWeatherData(FDS_DayWeatherData *this,uint param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_ZoneBaseTableRow *pFVar6;
  FDS_ZonePropInfoTableRow *pFVar7;
  FDS_EnvWeatherFixedDataTableRow *pFVar8;
  FDS_ZoneDistrictTableRow *pFVar9;
  UDS_LogManager *pUVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStackY_2e8 [32];
  undefined4 local_298;
  undefined4 local_294 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar15 = 0;
  piVar1 = &(this->FixedWeatherIDs).ArrayMax;
  lVar12 = 0x18;
  local_298 = 0;
  (this->FixedWeatherIDs).ArrayNum = 0;
  if (*piVar1 != 0x18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x18,(ForAnyElementType *)this,0,piVar1);
  }
  lVar14 = 0x18;
  do {
    pFVar2 = (this->FixedWeatherIDs).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_298) &&
        ((FScriptContainerElement *)&local_298 < pFVar2 + (longlong)*piVar1 * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->FixedWeatherIDs).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)this,piVar1);
    }
    (this->FixedWeatherIDs).ArrayNum = iVar5 + 1;
    *(undefined4 *)((this->FixedWeatherIDs).AllocatorInstance.Data + (longlong)iVar5 * 4) =
         local_298;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  piVar1 = &(this->RandomWeatherIDs).ArrayMax;
  local_294[0] = 0;
  (this->RandomWeatherIDs).ArrayNum = 0;
  if (*piVar1 != 0x18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x18,&(this->RandomWeatherIDs).AllocatorInstance,0,piVar1);
  }
  do {
    pFVar2 = (this->RandomWeatherIDs).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_294) &&
        ((FScriptContainerElement *)local_294 < pFVar2 + (longlong)*piVar1 * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->RandomWeatherIDs).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->RandomWeatherIDs).AllocatorInstance,piVar1);
    }
    (this->RandomWeatherIDs).ArrayNum = iVar5 + 1;
    *(undefined4 *)((this->RandomWeatherIDs).AllocatorInstance.Data + (longlong)iVar5 * 4) =
         local_294[0];
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  this->WeatherProbability = 0.0;
  if (param_1 == 0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"FDS_DayWeatherData::InitDayWeatherData",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_288.Ptr,0xa8,L"[Env] InitDayWeatherData() - InZoneID == 0")
      ;
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  else {
    pFVar6 = FDS_ZoneBaseTableRow::Get((ulonglong)param_1,true);
    if (((pFVar6 != (FDS_ZoneBaseTableRow *)0x0) &&
        (pFVar7 = FDS_ZonePropInfoTableRow::Get((longlong)pFVar6->ID_PropInfo,false),
        pFVar7 != (FDS_ZonePropInfoTableRow *)0x0)) &&
       ((0 < pFVar7->ID_FixedWeather &&
        (pFVar8 = FDS_EnvWeatherFixedDataTableRow::Get((longlong)pFVar7->ID_FixedWeather,true),
        uVar11 = uVar15, uVar13 = uVar15, pFVar8 != (FDS_EnvWeatherFixedDataTableRow *)0x0)))) {
      do {
        iVar5 = (int)uVar11;
        if (iVar5 < (pFVar8->ID_WeatherGameTime).ArrayNum) {
          if (((pFVar8->ID_WeatherGameTime).ArrayNum <= iVar5) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          SetFixedWeatherForHour
                    (this,iVar5,
                     *(int *)((pFVar8->ID_WeatherGameTime).AllocatorInstance.Data + uVar13));
        }
        uVar11 = (ulonglong)(iVar5 + 1U);
        uVar13 = uVar13 + 4;
      } while ((int)(iVar5 + 1U) < 0x18);
    }
  }
  if (param_2 == 0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FDS_DayWeatherData::InitDayWeatherData",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_168.Ptr,0xc4,
                 L"[Env] InitDayWeatherData() - InDistrictID == 0");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    pFVar9 = FDS_ZoneDistrictTableRow::Get((ulonglong)param_2,false);
    if (((pFVar9 != (FDS_ZoneDistrictTableRow *)0x0) && (0 < pFVar9->ID_FixedWeather)) &&
       (pFVar8 = FDS_EnvWeatherFixedDataTableRow::Get((longlong)pFVar9->ID_FixedWeather,true),
       uVar11 = uVar15, pFVar8 != (FDS_EnvWeatherFixedDataTableRow *)0x0)) {
      do {
        iVar5 = (int)uVar11;
        if (iVar5 < (pFVar8->ID_WeatherGameTime).ArrayNum) {
          if (((pFVar8->ID_WeatherGameTime).ArrayNum <= iVar5) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          SetFixedWeatherForHour
                    (this,iVar5,
                     *(int *)((pFVar8->ID_WeatherGameTime).AllocatorInstance.Data + uVar15));
        }
        uVar15 = uVar15 + 4;
        uVar11 = (ulonglong)(iVar5 + 1U);
      } while ((int)(iVar5 + 1U) < 0x18);
    }
  }
  return;
}

// SetFixedWeatherForHour @ 14bb8ac10

void __thiscall
FDS_DayWeatherData::SetFixedWeatherForHour(FDS_DayWeatherData *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (((-1 < param_1) && (param_1 < (this->FixedWeatherIDs).ArrayNum)) && (0 < param_2)) {
    if ((param_1 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)((this->FixedWeatherIDs).AllocatorInstance.Data + (longlong)param_1 * 4) = param_2;
  }
  return;
}

// SetRandomWeatherForHour @ 14bb8c4f0

void __thiscall
FDS_DayWeatherData::SetRandomWeatherForHour(FDS_DayWeatherData *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (((-1 < param_1) && (param_1 < (this->RandomWeatherIDs).ArrayNum)) && (0 < param_2)) {
    uVar3 = 0;
    if (param_1 < (this->RandomWeatherIDs).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)((this->RandomWeatherIDs).AllocatorInstance.Data + (longlong)param_1 * 4) = param_2;
  }
  return;
}

// SetWeatherProbability @ 14bb8e100

void __thiscall FDS_DayWeatherData::SetWeatherProbability(FDS_DayWeatherData *this,int param_1)

{
  float fVar1;
  
  fVar1 = (float)((double)param_1 * __real_3eb0c6f7a0b5ed8d) * __real_42c80000;
  if (__real_42c80000 <= fVar1) {
    fVar1 = __real_42c80000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  this->WeatherProbability = fVar1;
  return;
}

