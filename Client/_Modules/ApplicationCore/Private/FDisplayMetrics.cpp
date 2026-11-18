// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 7

// ApplyDefaultSafeZones @ 1423d0800

void __thiscall FDisplayMetrics::ApplyDefaultSafeZones(FDisplayMetrics *this)

{
  float fVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  (this->TitleSafePaddingSize).field0_0x0._s_0.X = 0.0;
  (this->TitleSafePaddingSize).field0_0x0._s_0.Y = 0.0;
  (this->TitleSafePaddingSize).field0_0x0._s_0.Z = 0.0;
  (this->TitleSafePaddingSize).field0_0x0._s_0.W = 0.0;
  bVar2 = TryGetTitleSafeZoneOverwrite(this,&this->TitleSafePaddingSize);
  fVar6 = __real_3f000000;
  fVar1 = __real_3f800000;
  if ((!bVar2) && (GDebugSafeZoneRatio < __real_3f800000)) {
    fVar5 = (__real_3f800000 - GDebugSafeZoneRatio) * __real_3f000000;
    dVar4 = (double)((float)this->PrimaryDisplayWidth * fVar5);
    dVar3 = (double)((float)this->PrimaryDisplayHeight * fVar5);
    (this->TitleSafePaddingSize).field0_0x0._s_0.X = dVar4;
    (this->TitleSafePaddingSize).field0_0x0._s_0.Y = dVar3;
    (this->TitleSafePaddingSize).field0_0x0._s_0.Z = dVar4;
    (this->TitleSafePaddingSize).field0_0x0._s_0.W = dVar3;
  }
  if (GDebugActionZoneRatio < fVar1) {
    fVar6 = (fVar1 - GDebugActionZoneRatio) * fVar6;
    dVar4 = (double)((float)this->PrimaryDisplayWidth * fVar6);
    dVar3 = (double)((float)this->PrimaryDisplayHeight * fVar6);
    (this->ActionSafePaddingSize).field0_0x0._s_0.X = dVar4;
    (this->ActionSafePaddingSize).field0_0x0._s_0.Y = dVar3;
    (this->ActionSafePaddingSize).field0_0x0._s_0.Z = dVar4;
    (this->ActionSafePaddingSize).field0_0x0._s_0.W = dVar3;
  }
  return;
}

// GetDebugActionSafeZoneRatio @ 1423de230

float __cdecl FDisplayMetrics::GetDebugActionSafeZoneRatio(void)

{
  return GDebugActionZoneRatio;
}

// GetDebugTitleSafeZoneRatio @ 1423de240

float __cdecl FDisplayMetrics::GetDebugTitleSafeZoneRatio(void)

{
  return GDebugSafeZoneRatio;
}

// GetMonitorWorkAreaFromPoint @ 1423dfcf0

FPlatformRect * __thiscall
FDisplayMetrics::GetMonitorWorkAreaFromPoint
          (FDisplayMetrics *this,FPlatformRect *__return_storage_ptr__,TVector2<double> *param_1)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->MonitorInfo).ArrayNum;
  pFVar5 = (this->MonitorInfo).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x58;
  while( true ) {
    if ((this->MonitorInfo).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMonitorInfo_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) break;
    dVar1 = (param_1->field0_0x0)._s_0.X;
    if (((((double)*(int *)(pFVar5 + 0x30) <= dVar1) && (dVar1 < (double)*(int *)(pFVar5 + 0x38)))
        && (dVar1 = (param_1->field0_0x0)._s_0.Y, (double)*(int *)(pFVar5 + 0x34) <= dVar1)) &&
       (dVar1 < (double)*(int *)(pFVar5 + 0x3c))) {
      uVar3 = *(undefined8 *)(pFVar5 + 0x40);
      uVar4 = *(undefined8 *)(pFVar5 + 0x48);
      __return_storage_ptr__->Left = (int)uVar3;
      __return_storage_ptr__->Top = (int)((ulonglong)uVar3 >> 0x20);
      __return_storage_ptr__->Right = (int)uVar4;
      __return_storage_ptr__->Bottom = (int)((ulonglong)uVar4 >> 0x20);
      return __return_storage_ptr__;
    }
    pFVar5 = pFVar5 + 0x58;
  }
  __return_storage_ptr__->Left = 0;
  __return_storage_ptr__->Top = 0;
  __return_storage_ptr__->Right = 0;
  __return_storage_ptr__->Bottom = 0;
  return __return_storage_ptr__;
}

// PrintToLog @ 1423f2be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDisplayMetrics::PrintToLog(FDisplayMetrics *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  FString local_38;
  FString local_28;
  
  if ((((4 < (byte)LogInit._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
       4 < (byte)LogInit._0_1_)) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
      4 < (byte)LogInit._0_1_)) &&
     (((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
       4 < (byte)LogInit._0_1_ &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
       4 < (byte)LogInit._0_1_)) &&
      ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
       4 < (byte)LogInit._0_1_ &&
       ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
        4 < (byte)LogInit._0_1_ &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
        4 < (byte)LogInit._0_1_)))))))) {
    ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u___TitleSafePadd_1508d2238,
               (FLogCategoryBase *)&LogInit);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogInit._0_1_) {
      ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar1 = (this->MonitorInfo).ArrayNum;
  lVar6 = (longlong)iVar1;
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  uVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->MonitorInfo).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((((4 < (byte)LogInit._0_1_) &&
            (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
            4 < (byte)LogInit._0_1_)) &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
           4 < (byte)LogInit._0_1_)) &&
          ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
           4 < (byte)LogInit._0_1_ &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
           4 < (byte)LogInit._0_1_)))) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
         4 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// RebuildDisplayMetrics @ 1423fda60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FDisplayMetrics::RebuildDisplayMetrics(FDisplayMetrics *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar7 = FCommandLine::Get();
    bIsRenderingOffScreen = FParse::Param(pwVar7,L"RenderOffScreen");
    _Init_thread_footer(&::_TSS0);
  }
  if (bIsRenderingOffScreen == false) {
    iVar3 = GetSystemMetrics(0);
    param_1->PrimaryDisplayWidth = iVar3;
    iVar3 = GetSystemMetrics(1);
    param_1->PrimaryDisplayHeight = iVar3;
    BVar4 = SystemParametersInfoW(0x30,0,&local_28,0);
    if (BVar4 == 0) {
      local_24 = 0;
      local_20 = 0;
      local_28 = 0;
      local_1c = 0;
    }
    (param_1->PrimaryDisplayWorkAreaRect).Left = local_28;
    (param_1->PrimaryDisplayWorkAreaRect).Top = local_24;
    (param_1->PrimaryDisplayWorkAreaRect).Right = local_20;
    (param_1->PrimaryDisplayWorkAreaRect).Bottom = local_1c;
    iVar3 = GetSystemMetrics(0x4c);
    (param_1->VirtualDisplayRect).Left = iVar3;
    iVar5 = GetSystemMetrics(0x4d);
    iVar3 = (param_1->VirtualDisplayRect).Left;
    (param_1->VirtualDisplayRect).Top = iVar5;
    iVar6 = GetSystemMetrics(0x4e);
    iVar5 = (param_1->VirtualDisplayRect).Top;
    (param_1->VirtualDisplayRect).Right = iVar6 + iVar3;
    iVar3 = GetSystemMetrics(0x4f);
    (param_1->VirtualDisplayRect).Bottom = iVar3 + iVar5;
    GetMonitorsInfo(&param_1->MonitorInfo);
  }
  else {
    FNullPlatformDisplayMetrics::RebuildDisplayMetrics(param_1);
  }
  (param_1->TitleSafePaddingSize).field0_0x0._s_0.X = 0.0;
  (param_1->TitleSafePaddingSize).field0_0x0._s_0.Y = 0.0;
  (param_1->TitleSafePaddingSize).field0_0x0._s_0.Z = 0.0;
  (param_1->TitleSafePaddingSize).field0_0x0._s_0.W = 0.0;
  bVar2 = TryGetTitleSafeZoneOverwrite(param_1,&param_1->TitleSafePaddingSize);
  fVar11 = __real_3f000000;
  fVar1 = __real_3f800000;
  if ((!bVar2) && (GDebugSafeZoneRatio < __real_3f800000)) {
    fVar10 = (__real_3f800000 - GDebugSafeZoneRatio) * __real_3f000000;
    dVar9 = (double)((float)param_1->PrimaryDisplayWidth * fVar10);
    dVar8 = (double)((float)param_1->PrimaryDisplayHeight * fVar10);
    (param_1->TitleSafePaddingSize).field0_0x0._s_0.X = dVar9;
    (param_1->TitleSafePaddingSize).field0_0x0._s_0.Y = dVar8;
    (param_1->TitleSafePaddingSize).field0_0x0._s_0.Z = dVar9;
    (param_1->TitleSafePaddingSize).field0_0x0._s_0.W = dVar8;
  }
  if (GDebugActionZoneRatio < fVar1) {
    fVar11 = (fVar1 - GDebugActionZoneRatio) * fVar11;
    dVar9 = (double)((float)param_1->PrimaryDisplayWidth * fVar11);
    dVar8 = (double)((float)param_1->PrimaryDisplayHeight * fVar11);
    (param_1->ActionSafePaddingSize).field0_0x0._s_0.X = dVar9;
    (param_1->ActionSafePaddingSize).field0_0x0._s_0.Y = dVar8;
    (param_1->ActionSafePaddingSize).field0_0x0._s_0.Z = dVar9;
    (param_1->ActionSafePaddingSize).field0_0x0._s_0.W = dVar8;
  }
  return;
}

// TryGetTitleSafeZoneOverwrite @ 14240a1c0

bool __thiscall
FDisplayMetrics::TryGetTitleSafeZoneOverwrite(FDisplayMetrics *this,TVector4<double> *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  TConsoleVariableData<bool> *pTVar4;
  TConsoleVariableData<float> *pTVar5;
  bool bVar6;
  
  pTVar4 = CVarEnableSafeZoneOverrides.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        bVar6 = (bool)(*pcVar1)();
        return bVar6;
      }
    }
  }
  pTVar5 = CVarSafeZoneRatioLeft.Ref;
  if (pTVar4->ShadowedValue[0] == false) {
    bVar6 = false;
  }
  else {
    bVar6 = IsInParallelGameThread();
    if (!bVar6) {
      bVar6 = IsInGameThread();
      if (!bVar6) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          bVar6 = (bool)(*pcVar1)();
          return bVar6;
        }
      }
    }
    fVar3 = __real_3f000000;
    fVar2 = __real_3f800000;
    (param_1->field0_0x0)._s_0.X =
         (double)((__real_3f800000 - pTVar5->ShadowedValue[0]) * (float)this->PrimaryDisplayWidth *
                 __real_3f000000);
    pTVar5 = CVarSafeZoneRatioTop.Ref;
    bVar6 = IsInParallelGameThread();
    if (!bVar6) {
      bVar6 = IsInGameThread();
      if (!bVar6) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          bVar6 = (bool)(*pcVar1)();
          return bVar6;
        }
      }
    }
    (param_1->field0_0x0)._s_0.Y =
         (double)((fVar2 - pTVar5->ShadowedValue[0]) * (float)this->PrimaryDisplayHeight * fVar3);
    pTVar5 = CVarSafeZoneRatioRight.Ref;
    bVar6 = IsInParallelGameThread();
    if (!bVar6) {
      bVar6 = IsInGameThread();
      if (!bVar6) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          bVar6 = (bool)(*pcVar1)();
          return bVar6;
        }
      }
    }
    (param_1->field0_0x0)._s_0.Z =
         (double)((fVar2 - pTVar5->ShadowedValue[0]) * (float)this->PrimaryDisplayWidth * fVar3);
    pTVar5 = CVarSafeZoneRatioBottom.Ref;
    bVar6 = IsInParallelGameThread();
    if (!bVar6) {
      bVar6 = IsInGameThread();
      if (!bVar6) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          bVar6 = (bool)(*pcVar1)();
          return bVar6;
        }
      }
    }
    bVar6 = true;
    (param_1->field0_0x0)._s_0.W =
         (double)((fVar2 - pTVar5->ShadowedValue[0]) * (float)this->PrimaryDisplayHeight * fVar3);
  }
  return bVar6;
}

