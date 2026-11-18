// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 37

// DereferenceIfNecessary<FSafeZoneConsoleVariables,FSafeZoneConsoleVariables_*_&> @ 1423bba90

FSafeZoneConsoleVariables * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSafeZoneConsoleVariables,FSafeZoneConsoleVariables_*_&>
          (FSafeZoneConsoleVariables **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FNullApplication,FNullApplication_*_&> @ 1423bbab0

FNullApplication * __cdecl
UE::Core::Private::DereferenceIfNecessary<FNullApplication,FNullApplication_*_&>
          (FNullApplication **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FWindowsApplication,FWindowsApplication_*_&> @ 1423bbad0

FWindowsApplication * __cdecl
UE::Core::Private::DereferenceIfNecessary<FWindowsApplication,FWindowsApplication_*_&>
          (FWindowsApplication **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FWindowsUIAManager,FWindowsUIAManager_*_&> @ 1423bbaf0

FWindowsUIAManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<FWindowsUIAManager,FWindowsUIAManager_*_&>
          (FWindowsUIAManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<IPlatformInputDeviceMapper,IPlatformInputDeviceMapper_*_&> @ 1423bbb10

IPlatformInputDeviceMapper * __cdecl
UE::Core::Private::DereferenceIfNecessary<IPlatformInputDeviceMapper,IPlatformInputDeviceMapper_*_&>
          (IPlatformInputDeviceMapper **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_> @ 1423bf790

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<wchar_t> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x81) {
      iVar1 = 0x80;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>_> @ 1423bf830

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>_>
          (uint param_1,uint param_2,
          ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight> *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>::ResizeAllocation
              (param_3,uVar2,iVar8,uVar7);
    *param_4 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>_> @ 1423bf900

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>_>
          (uint param_1,uint param_2,
          ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>::ResizeAllocation
              (param_3,uVar2,iVar8,uVar7);
    *param_4 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>_> @ 1423bf9d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>_>
          (ushort param_1,
          ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FInputDeviceScope_*>_> @ 1423bfaa0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FInputDeviceScope_*>_>
          (ushort param_1,ForElementType<FInputDeviceScope_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FInputDeviceScope_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>_> @ 1423bfb70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>_>
          (ushort param_1,ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>_> @ 1423bfc40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>_>
          (ushort param_1,ForElementType<FWindowsConsoleOutputDevice::FLogHighlight> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<HKL___*>_> @ 1423bfd10

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<HKL___*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<HKL___*> *param_4,int *param_5,
          int *param_6)

{
  ForElementType<HKL___*> *this;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong64 uVar4;
  ForElementType<HKL___*> _Src;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar1 = *param_5;
  uVar8 = *param_6;
  uVar9 = iVar1 + param_3;
  *param_5 = uVar9;
  if ((uint)param_3 <= uVar8 - iVar1) {
    return iVar1;
  }
  if ((int)uVar9 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar9);
  }
  uVar7 = 4;
  uVar10 = CONCAT44(0,param_1);
  if (uVar9 < 5) {
    _Src = param_4->SecondaryData;
LAB_1423bfdc6:
    uVar8 = (uint)uVar7;
    if (_Src == (ForElementType<HKL___*>)0x0) goto LAB_1423bfe1a;
    memmove(param_4,(void *)_Src,(longlong)iVar1 << 3);
    uVar8 = 0;
    iVar6 = 0;
    uVar9 = (uint)uVar7;
  }
  else {
    uVar5 = (ulonglong)(int)uVar9;
    if (uVar8 < 5) {
      uVar8 = 0;
    }
    if (uVar8 == 0) {
      if (4 < uVar5) {
        uVar7 = uVar5;
      }
    }
    else {
      uVar7 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar4 = FMemory::QuantizeSize(uVar10 * uVar7,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar4;
    this = &param_4->SecondaryData;
    uVar7 = SUB168(auVar3 / auVar2,0) & 0xffffffff;
    if (SUB164(auVar3 / auVar2,0) < (int)uVar9) {
      uVar7 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = (uint)uVar7;
    if (uVar8 < 5) goto LAB_1423bfdc6;
    iVar6 = iVar1;
    uVar9 = uVar8;
    if (_Src == (ForElementType<HKL___*>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar8,uVar10);
      memmove((void *)*this,param_4,(longlong)iVar1 << 3);
      goto LAB_1423bfe1a;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar6,uVar8,uVar10);
  uVar8 = uVar9;
LAB_1423bfe1a:
  *param_6 = uVar8;
  return iVar1;
}

// ApplyForceMaxTouchpadSensitivity @ 1423d0d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::WindowsApplication::TouchpadSensitivity::ApplyForceMaxTouchpadSensitivity(void)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL> aVar4;
  ForAnyElementType _Str;
  undefined1 auStack_88 [32];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (5 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,499,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((CachedForceMaxTouchpadSensitivityMode == NotCached) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedForceMaxTouchpadSensitivityMode != EForceMaxTouchpadSensitivityMode::NotCached"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0xe5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (6 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  if (CachedForceMaxTouchpadSensitivityMode == NotCached) {
    if (2 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x1f9,L"");
    if (bVar2) {
code_r0x0001423d112b:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_1423d112c;
  }
  if (CachedForceMaxTouchpadSensitivityMode == DoNothing) {
    if ((byte)LogWindowsTouchpad._0_1_ < 6) {
      return;
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    goto LAB_1423d112c;
  }
  if (CachedForceMaxTouchpadSensitivityMode != SetTouchpadParameters) {
    if (CachedForceMaxTouchpadSensitivityMode == SetMaxTouchpadSensitivity) {
      bVar2 = SetMaxTouchpadSensitivity(true);
      if (bVar2) {
        if (4 < (byte)LogWindowsTouchpad._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
        }
      }
      else if (2 < (byte)LogWindowsTouchpad._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      }
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0x25c,L"");
      if (bVar2) goto code_r0x0001423d112b;
    }
    goto LAB_1423d112c;
  }
  if (5 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  BVar3 = SystemParametersInfoW(0xae,0x18,&local_28,0);
  if (BVar3 == 0) {
    if ((byte)LogWindowsTouchpad._0_1_ < 3) {
      return;
    }
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    return;
  }
  if ((bRestoreTouchpadSensitivityFromRegistry == false) || (bRegistrySavedValueConsumed != false))
  {
LAB_1423d1008:
    if (uStack_20._0_4_ ==
        (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)0x0) {
LAB_1423d100d:
      if ((byte)LogWindowsTouchpad._0_1_ < 5) {
        return;
      }
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      return;
    }
  }
  else {
    bRegistrySavedValueConsumed = true;
    if (uStack_20._0_4_ ==
        (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)0x0) {
      if (bWriteSavedTouchpadSensitivityToRegistry == false) goto LAB_1423d100d;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      GetRegistryStoreIdAndSection(&local_48,&local_58);
      ::FString::FString(&local_38,L"SavedTouchpadSensitivitySetting");
      bVar2 = FWindowsPlatformMisc::GetStoredValue(&local_48,&local_58,&local_38,&local_68);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        _Str.Data = local_68.Data.AllocatorInstance.Data;
      }
      aVar4 = (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)
              _wtoi((wchar_t *)_Str.Data);
      if ((uint)aVar4 < 5) {
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if ((bVar2) &&
           (aVar4 != (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>
                      )0x0)) {
          if (4 < (byte)LogWindowsTouchpad._0_1_) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
          }
          LOCK();
          UNLOCK();
          ForceMaxTouchpadSensitivity_SavedSensitivity = aVar4;
          return;
        }
      }
      else {
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_1423d1008;
    }
  }
  if (ForceMaxTouchpadSensitivity_SavedSensitivity ==
      (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)0xf) {
    if (5 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    LOCK();
    ForceMaxTouchpadSensitivity_SavedSensitivity = uStack_20._0_4_;
    UNLOCK();
    WriteSavedSensitivityToRegistry((TOUCHPAD_SENSITIVITY_LEVEL)uStack_20._0_4_);
  }
  uStack_20 = uStack_20 & 0xffffffff00000000;
  BVar3 = SystemParametersInfoW(0xaf,0x18,&local_28,0);
  if (BVar3 == 0) {
    if ((byte)LogWindowsTouchpad._0_1_ < 3) {
      return;
    }
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    return;
  }
  if (4 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
LAB_1423d112c:
  if (5 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  return;
}

// CVarSinkHandler @ 1423d15e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::WindowsApplication::TouchpadSensitivity::CVarSinkHandler(void)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x314,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (bForceMaxTouchpadSensitivity != CachedbForceMaxTouchpadSensitivity) {
    CachedbForceMaxTouchpadSensitivity = bForceMaxTouchpadSensitivity;
    if (bForceMaxTouchpadSensitivity != false) {
      if (5 < (byte)LogWindowsTouchpad._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      }
      CacheForceMaxTouchpadSensitivityMode();
      ApplyForceMaxTouchpadSensitivity();
      return;
    }
    if (5 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    RemoveForceMaxTouchpadSensitivity();
    return;
  }
  return;
}

// CacheForceMaxTouchpadSensitivityMode @ 1423d18a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::WindowsApplication::TouchpadSensitivity::CacheForceMaxTouchpadSensitivityMode(void)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  HMODULE hModule;
  
  if (CachedForceMaxTouchpadSensitivityMode != NotCached) {
    return;
  }
  if ((((!bDisableForceMaxTouchpadSensitivity_SetMaxTouchpadSensitivity) &&
       (bVar1 = FWindowsPlatformMisc::VerifyWindowsVersion(10,0,0x5867), bVar1)) &&
      (hModule = GetModuleHandleW(L"user32.dll"), hModule != (HMODULE)0x0)) &&
     ((SetMaxTouchpadSensitivityProcCached != (_func___cdecl_int_int *)0x0 ||
      (SetMaxTouchpadSensitivityProcCached =
            (_func___cdecl_int_int *)GetProcAddress(hModule,(LPCSTR)0xaf6),
      SetMaxTouchpadSensitivityProcCached != (_func___cdecl_int_int *)0x0)))) {
    if (4 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    iVar2 = (*SetMaxTouchpadSensitivityProcCached)(0);
    if (iVar2 != 0) {
      CachedForceMaxTouchpadSensitivityMode = SetMaxTouchpadSensitivity;
      if ((byte)LogWindowsTouchpad._0_1_ < 4) {
        CachedForceMaxTouchpadSensitivityMode = SetMaxTouchpadSensitivity;
        return;
      }
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      return;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x139f) {
      if (3 < (byte)LogWindowsTouchpad._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      }
    }
    else if (2 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    SetMaxTouchpadSensitivityProcCached = (_func___cdecl_int_int *)0x0;
  }
  if ((bDisableForceMaxTouchpadSensitivity_SetTouchpadParameters == false) &&
     (bVar1 = FWindowsPlatformMisc::VerifyWindowsVersion(10,0,0x4a65), bVar1)) {
    CachedForceMaxTouchpadSensitivityMode = SetTouchpadParameters;
    if ((byte)LogWindowsTouchpad._0_1_ < 4) {
      CachedForceMaxTouchpadSensitivityMode = SetTouchpadParameters;
      return;
    }
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    return;
  }
  CachedForceMaxTouchpadSensitivityMode = DoNothing;
  if ((byte)LogWindowsTouchpad._0_1_ < 4) {
    CachedForceMaxTouchpadSensitivityMode = DoNothing;
    return;
  }
  Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  return;
}

// CalculateDeltaWithAcceleration @ 1423d1a50

float __cdecl UE::Cursor::CalculateDeltaWithAcceleration(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = __real_bf800000;
  if (0 < param_1) {
    fVar3 = __real_3f800000;
  }
  fVar2 = (float)param_1;
  fVar1 = (float)((uint)(fVar2 * param_2 * fVar2 * __real_3d4ccccd) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar1 <= (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar1 = (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  }
  return fVar1 * fVar3;
}

// ClearSavedSensitivityFromRegistry @ 1423d26c0

void __cdecl UE::WindowsApplication::TouchpadSensitivity::ClearSavedSensitivityFromRegistry(void)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (bWriteSavedTouchpadSensitivityToRegistry) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    GetRegistryStoreIdAndSection(&local_28,&local_38);
    ::FString::FString(&local_18,L"SavedTouchpadSensitivitySetting");
    FWindowsPlatformMisc::DeleteStoredValue(&local_28,&local_38,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetDeviceMappingPolicyFromConfig @ 1423de2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EInputDeviceMappingPolicy __cdecl UE::Input::GetDeviceMappingPolicyFromConfig(void)

{
  code *pcVar1;
  bool bVar2;
  EInputDeviceMappingPolicy EVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [4];
  EInputDeviceMappingPolicy local_154;
  FString local_150;
  wchar_t local_138 [128];
  void *local_38;
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (CachedDevicePolicy == Invalid) {
    local_154 = CachedDevicePolicy;
    local_30 = local_138;
    local_38 = (void *)0x0;
    local_28 = 7;
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>(local_138,8,"Windows",8);
    if ((pwVar4 == (wchar_t *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    ::FString::PrintfImpl(&local_150,L"InputPlatformSettings_%s InputPlatformSettings");
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_150.Data.ArrayNum != 0) {
      FVar5.Data = local_150.Data.AllocatorInstance.Data;
    }
    bVar2 = FConfigCacheIni::GetInt
                      (GConfig,(wchar_t *)FVar5.Data,DeviceMappingPolicyName,(int *)&local_154,
                       &GInputIni);
    EVar3 = local_154;
    if (!bVar2) {
      `UE::Input::GetDeviceMappingPolicyFromConfig'::__l10::<lambda_1>::operator()(local_158);
      EVar3 = PrimaryUserSharesKeyboardAndFirstGamepad;
    }
    CachedDevicePolicy = EVar3;
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  return CachedDevicePolicy;
}

// GetForceMaxTouchpadSensitivityMode @ 1423dea10

/* WARNING: Enum "Type": Some values do not have unique names */

EForceMaxTouchpadSensitivityMode __cdecl
UE::WindowsApplication::TouchpadSensitivity::GetForceMaxTouchpadSensitivityMode(void)

{
  code *pcVar1;
  bool bVar2;
  EForceMaxTouchpadSensitivityMode EVar3;
  
  if ((CachedForceMaxTouchpadSensitivityMode == NotCached) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedForceMaxTouchpadSensitivityMode != EForceMaxTouchpadSensitivityMode::NotCached"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0xe5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  if (6 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  return CachedForceMaxTouchpadSensitivityMode;
}

// GetForceMaxTouchpadSensitivityRestorationValue @ 1423debd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EForceMaxTouchpadSensitivityRestorationValues __cdecl
UE::WindowsApplication::TouchpadSensitivity::GetForceMaxTouchpadSensitivityRestorationValue(void)

{
  atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL> aVar1;
  EForceMaxTouchpadSensitivityMode EVar2;
  BOOL BVar3;
  FStaticBasicLogRecord *pFVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  CacheForceMaxTouchpadSensitivityMode();
  EVar2 = GetForceMaxTouchpadSensitivityMode();
  aVar1 = ForceMaxTouchpadSensitivity_SavedSensitivity;
  if (EVar2 == SetTouchpadParameters) {
    if (ForceMaxTouchpadSensitivity_SavedSensitivity !=
        (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)0xf) {
      if (5 < (byte)LogWindowsTouchpad._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      }
      return (EForceMaxTouchpadSensitivityRestorationValues)aVar1;
    }
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    BVar3 = SystemParametersInfoW(0xae,0x18,&local_28,0);
    if (BVar3 == 0) {
      if (2 < (byte)LogWindowsTouchpad._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      }
      return SystemCallFailed;
    }
    if ((EForceMaxTouchpadSensitivityRestorationValues)uStack_20 !=
        TOUCHPAD_SENSITIVITY_LEVEL_MOST_SENSITIVE) {
      if (5 < (byte)LogWindowsTouchpad._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
        return (EForceMaxTouchpadSensitivityRestorationValues)uStack_20;
      }
      return (EForceMaxTouchpadSensitivityRestorationValues)uStack_20;
    }
    if ((byte)LogWindowsTouchpad._0_1_ < 6) {
      return RestorationNotNeeded;
    }
    pFVar4 = &::LOG_Static;
  }
  else {
    if ((byte)LogWindowsTouchpad._0_1_ < 6) {
      return RestorationNotNeeded;
    }
    pFVar4 = &::LOG_Static;
  }
  Logging::Private::BasicLog<6>(pFVar4,(FLogCategoryBase *)&LogWindowsTouchpad);
  return RestorationNotNeeded;
}

// GetRegistryStoreIdAndSection @ 1423e1fb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::GetRegistryStoreIdAndSection
          (FString *param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::WindowsApplication::TouchpadSensitivity::GetRegistryStoreIdAndSection'::__l3::
             _dynamic_atexit_destructor_for__ProjectName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar2 = ProjectName.Data.ArrayNum;
  if (1 < iVar2) goto LAB_1423e2079;
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",L"ProjectName",
                     &ProjectName,&GGameIni);
  if (!bVar1) {
    if (GInternalProjectName[0] == L'\0') {
LAB_1423e2059:
      pwVar4 = FWindowsPlatformProcess::ExecutableName(true);
    }
    else {
      pwVar4 = GInternalProjectName;
      iVar2 = FGenericPlatformStricmp::Stricmp(GInternalProjectName,L"None");
      if (iVar2 == 0) goto LAB_1423e2059;
    }
    ::FString::operator=(&ProjectName,pwVar4);
  }
  iVar2 = ProjectName.Data.ArrayNum;
LAB_1423e2079:
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  ::FString::AssignRange(param_2,(wchar_t *)ProjectName.Data.AllocatorInstance.Data,iVar6);
  if (*piVar5 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      atexit(`UE::WindowsApplication::TouchpadSensitivity::GetRegistryStoreIdAndSection'::__l10::
             _dynamic_atexit_destructor_for__CompanyName__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  iVar2 = CompanyName.Data.ArrayNum;
  if (iVar2 < 2) {
    bVar1 = FConfigCacheIni::GetString
                      (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",
                       L"CompanyDistinguishedName",&CompanyName,&GGameIni);
    if (bVar1) {
      iVar2 = ::FString::Find(&CompanyName,L"CN=",3,IgnoreCase,FromStart,-1);
      if (iVar2 != -1) {
        iVar2 = iVar2 + 3;
        iVar6 = ::FString::Find(&CompanyName,L",",1,IgnoreCase,FromStart,iVar2);
        if ((iVar6 - iVar2 != 0x7fffffff) &&
           ((longlong)(iVar6 - iVar2) + (longlong)iVar2 < 0x7fffffff)) {
          iVar7 = CompanyName.Data.ArrayNum + -1;
          if (CompanyName.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          iVar3 = iVar7;
          if (iVar6 < iVar7) {
            iVar3 = iVar6;
          }
          iVar6 = 0;
          if (0 < iVar3) {
            iVar6 = iVar3;
          }
          ::FString::RemoveAt(&CompanyName,iVar6,iVar7 - iVar6,No);
        }
        ::FString::RemoveAt(&CompanyName,0,iVar2,Default);
        ::FString::TrimEndInline(&CompanyName);
      }
    }
    iVar2 = CompanyName.Data.ArrayNum;
    if (iVar2 < 2) {
      bVar1 = FConfigCacheIni::GetString
                        (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",L"CompanyName",
                         &CompanyName,&GGameIni);
      if (!bVar1) {
        iVar6 = (param_2->Data).ArrayNum;
        iVar2 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar2 = 0;
        }
        ::FString::AssignRange(&CompanyName,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar2)
        ;
      }
      iVar2 = CompanyName.Data.ArrayNum;
      if (iVar2 < 2) {
        iVar6 = (param_2->Data).ArrayNum;
        iVar2 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar2 = 0;
        }
        ::FString::AssignRange(&CompanyName,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar2)
        ;
        iVar2 = CompanyName.Data.ArrayNum;
      }
    }
  }
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  ::FString::AssignRange(param_1,(wchar_t *)CompanyName.Data.AllocatorInstance.Data,iVar6);
  return;
}

// GetScopeStack @ 1423e2520

TArray<FInputDeviceScope_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> * __cdecl
UE::InputDeviceScope::Private::GetScopeStack(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0xdf0) & 1) == 0) {
    *(uint *)(lVar1 + 0xdf0) = *(uint *)(lVar1 + 0xdf0) | 1;
    __tlregdtor(`UE::InputDeviceScope::Private::GetScopeStack'::__l2::
                _dynamic_atexit_destructor_for__ScopeStack__);
  }
  return (TArray<FInputDeviceScope_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
         (lVar1 + 0xd60);
}

// HandleActivateApp @ 1423e5ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::WindowsApplication::TouchpadSensitivity::HandleActivateApp(bool param_1)

{
  EForceMaxTouchpadSensitivityMode EVar1;
  
  if (bForceMaxTouchpadSensitivity) {
    EVar1 = GetForceMaxTouchpadSensitivityMode();
    if (EVar1 == SetTouchpadParameters) {
      if (5 < (byte)LogWindowsTouchpad._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      }
      if (param_1) {
        ApplyForceMaxTouchpadSensitivity();
        return;
      }
      RemoveForceMaxTouchpadSensitivity();
      return;
    }
  }
  return;
}

// HandleDestroyApplication @ 1423e69e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::WindowsApplication::TouchpadSensitivity::HandleDestroyApplication(void)

{
  EForceMaxTouchpadSensitivityMode EVar1;
  
  if (bForceMaxTouchpadSensitivity) {
    EVar1 = GetForceMaxTouchpadSensitivityMode();
    if (EVar1 == SetTouchpadParameters) {
      if (5 < (byte)LogWindowsTouchpad._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      }
      RemoveForceMaxTouchpadSensitivity();
      return;
    }
  }
  return;
}

// HandleShutDownAfterError @ 1423e7310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::WindowsApplication::TouchpadSensitivity::HandleShutDownAfterError(void)

{
  atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL> aVar1;
  EForceMaxTouchpadSensitivityMode EVar2;
  BOOL BVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (!bForceMaxTouchpadSensitivity) {
    return;
  }
  EVar2 = GetForceMaxTouchpadSensitivityMode();
  if (EVar2 != SetTouchpadParameters) {
    return;
  }
  if (5 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  if (bForceMaxTouchpadSensitivity != false) {
    if (5 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    aVar1 = ForceMaxTouchpadSensitivity_SavedSensitivity;
    if (3 < (int)ForceMaxTouchpadSensitivity_SavedSensitivity - 1U) {
      return;
    }
    if (5 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    BVar3 = SystemParametersInfoW(0xae,0x18,&local_28,0);
    if (BVar3 == 0) {
      if ((byte)LogWindowsTouchpad._0_1_ < 3) {
        return;
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      return;
    }
    uStack_20 = CONCAT44(uStack_20._4_4_,aVar1);
    BVar3 = SystemParametersInfoW(0xaf,0x18,&local_28,0);
    if (BVar3 == 0) {
      if ((byte)LogWindowsTouchpad._0_1_ < 3) {
        return;
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      return;
    }
    if (4 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
  }
  if (5 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  return;
}

// HandleStartupApp @ 1423e74b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::WindowsApplication::TouchpadSensitivity::HandleStartupApp(void)

{
  if (5 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  CacheForceMaxTouchpadSensitivityMode();
  if (bForceMaxTouchpadSensitivity != false) {
    ApplyForceMaxTouchpadSensitivity();
    return;
  }
  return;
}

// OnWMSettingChangeSetTouchpadParameters @ 1423f1d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::OnWMSettingChangeSetTouchpadParameters(void)

{
  BOOL BVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((bForceMaxTouchpadSensitivity) &&
     (CachedForceMaxTouchpadSensitivityMode == SetTouchpadParameters)) {
    if (5 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    BVar1 = SystemParametersInfoW(0xae,0x18,&local_28,0);
    if (BVar1 == 0) {
      if (2 < (byte)LogWindowsTouchpad._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
        return;
      }
    }
    else {
      if (4 < (byte)LogWindowsTouchpad._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      }
      LOCK();
      ForceMaxTouchpadSensitivity_SavedSensitivity = uStack_20._0_4_;
      UNLOCK();
      if (uStack_20._0_4_ ==
          (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)0x0) {
        ClearSavedSensitivityFromRegistry();
        return;
      }
      WriteSavedSensitivityToRegistry((TOUCHPAD_SENSITIVITY_LEVEL)uStack_20._0_4_);
    }
  }
  return;
}

// ReadSavedSensitivityFromRegistry @ 1423fd670

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::ReadSavedSensitivityFromRegistry
          (TOUCHPAD_SENSITIVITY_LEVEL *param_1,bool *param_2)

{
  bool bVar1;
  TOUCHPAD_SENSITIVITY_LEVEL TVar2;
  ForAnyElementType _Str;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (bWriteSavedTouchpadSensitivityToRegistry) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    GetRegistryStoreIdAndSection(&local_28,&local_38);
    ::FString::FString(&local_18,L"SavedTouchpadSensitivitySetting");
    bVar1 = FWindowsPlatformMisc::GetStoredValue(&local_28,&local_38,&local_18,&local_48);
    *param_2 = bVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      _Str.Data = local_48.Data.AllocatorInstance.Data;
    }
    TVar2 = _wtoi((wchar_t *)_Str.Data);
    if (TVar2 < (TOUCHPAD_SENSITIVITY_LEVEL_LEAST_SENSITIVE|
                TOUCHPAD_SENSITIVITY_LEVEL_HIGH_SENSITIVITY)) {
      *param_1 = TVar2;
    }
    else {
      *param_2 = false;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RemoveForceMaxTouchpadSensitivity @ 142400a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::WindowsApplication::TouchpadSensitivity::RemoveForceMaxTouchpadSensitivity(void)

{
  code *pcVar1;
  atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL> aVar2;
  bool bVar3;
  BOOL BVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (5 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0x265,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((CachedForceMaxTouchpadSensitivityMode == NotCached) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedForceMaxTouchpadSensitivityMode != EForceMaxTouchpadSensitivityMode::NotCached"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0xe5,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (6 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  aVar2 = ForceMaxTouchpadSensitivity_SavedSensitivity;
  if (CachedForceMaxTouchpadSensitivityMode == NotCached) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x26a,L"");
    if (bVar3) {
code_r0x000142400cdf:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (CachedForceMaxTouchpadSensitivityMode == DoNothing) {
    if ((byte)LogWindowsTouchpad._0_1_ < 6) {
      return;
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  else if (CachedForceMaxTouchpadSensitivityMode == SetTouchpadParameters) {
    if (3 < (int)ForceMaxTouchpadSensitivity_SavedSensitivity - 1U) {
      return;
    }
    if (5 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    BVar4 = SystemParametersInfoW(0xae,0x18,&local_28,0);
    if (BVar4 == 0) {
      if ((byte)LogWindowsTouchpad._0_1_ < 3) {
        return;
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      return;
    }
    uStack_20 = CONCAT44(uStack_20._4_4_,aVar2);
    BVar4 = SystemParametersInfoW(0xaf,0x18,&local_28,0);
    if (BVar4 == 0) {
      if ((byte)LogWindowsTouchpad._0_1_ < 3) {
        return;
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      return;
    }
    ClearSavedSensitivityFromRegistry();
    if (4 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
  }
  else if (CachedForceMaxTouchpadSensitivityMode == SetMaxTouchpadSensitivity) {
    bVar3 = SetMaxTouchpadSensitivity(false);
    if (bVar3) {
      if (4 < (byte)LogWindowsTouchpad._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      }
    }
    else if (2 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_RemoveForceMaxT_1508dae30,
                 (FLogCategoryBase *)&LogWindowsTouchpad);
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x2ad,L"");
    if (bVar3) goto code_r0x000142400cdf;
  }
  if (5 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  return;
}

// RemoveForceMaxTouchpadSensitivityOnErrorShutdown @ 142400d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::RemoveForceMaxTouchpadSensitivityOnErrorShutdown(void)

{
  atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL> aVar1;
  BOOL BVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (bForceMaxTouchpadSensitivity) {
    if (5 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    aVar1 = ForceMaxTouchpadSensitivity_SavedSensitivity;
    if (3 < (int)ForceMaxTouchpadSensitivity_SavedSensitivity - 1U) {
      return;
    }
    if (5 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    BVar2 = SystemParametersInfoW(0xae,0x18,&local_28,0);
    if (BVar2 == 0) {
      if ((byte)LogWindowsTouchpad._0_1_ < 3) {
        return;
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      return;
    }
    uStack_20 = CONCAT44(uStack_20._4_4_,aVar1);
    BVar2 = SystemParametersInfoW(0xaf,0x18,&local_28,0);
    if (BVar2 == 0) {
      if ((byte)LogWindowsTouchpad._0_1_ < 3) {
        return;
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
      return;
    }
    if (4 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
  }
  if (5 < (byte)LogWindowsTouchpad._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
  }
  return;
}

// SetMaxTouchpadSensitivity @ 1424050f0

bool __cdecl UE::WindowsApplication::TouchpadSensitivity::SetMaxTouchpadSensitivity(bool param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (SetMaxTouchpadSensitivityProcCached == (_func___cdecl_int_int *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SetMaxTouchpadSensitivityProcCached",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x8a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (SetMaxTouchpadSensitivityProcCached == (_func___cdecl_int_int *)0x0) {
      return false;
    }
  }
  iVar4 = (*SetMaxTouchpadSensitivityProcCached)(SUB14(param_1,0));
  return iVar4 != 0;
}

// SupportsForceMaxTouchpadSensitivity @ 142408840

bool __cdecl UE::WindowsApplication::TouchpadSensitivity::SupportsForceMaxTouchpadSensitivity(void)

{
  EForceMaxTouchpadSensitivityMode EVar1;
  
  CacheForceMaxTouchpadSensitivityMode();
  EVar1 = GetForceMaxTouchpadSensitivityMode();
  return EVar1 != DoNothing;
}

// TryCacheSetMaxTouchpadSensitivityProc @ 14240a030

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::WindowsApplication::TouchpadSensitivity::TryCacheSetMaxTouchpadSensitivityProc(void)

{
  int iVar1;
  DWORD DVar2;
  HMODULE hModule;
  
  hModule = GetModuleHandleW(L"user32.dll");
  if (hModule != (HMODULE)0x0) {
    if ((SetMaxTouchpadSensitivityProcCached == (_func___cdecl_int_int *)0x0) &&
       (SetMaxTouchpadSensitivityProcCached =
             (_func___cdecl_int_int *)GetProcAddress(hModule,(LPCSTR)0xaf6),
       SetMaxTouchpadSensitivityProcCached == (_func___cdecl_int_int *)0x0)) {
      return false;
    }
    if (4 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    iVar1 = (*SetMaxTouchpadSensitivityProcCached)(0);
    if (iVar1 != 0) {
      return true;
    }
    DVar2 = GetLastError();
    if (DVar2 == 0x139f) {
      if (3 < (byte)LogWindowsTouchpad._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
        SetMaxTouchpadSensitivityProcCached = (_func___cdecl_int_int *)0x0;
        return false;
      }
    }
    else if (2 < (byte)LogWindowsTouchpad._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsTouchpad);
    }
    SetMaxTouchpadSensitivityProcCached = (_func___cdecl_int_int *)0x0;
  }
  return false;
}

// WriteSavedSensitivityToRegistry @ 14240cc20

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::WriteSavedSensitivityToRegistry
          (TOUCHPAD_SENSITIVITY_LEVEL param_1)

{
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (bWriteSavedTouchpadSensitivityToRegistry) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_28,param_1);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    GetRegistryStoreIdAndSection(&local_38,&local_48);
    ::FString::FString(&local_18,L"SavedTouchpadSensitivitySetting");
    FWindowsPlatformMisc::SetStoredValue(&local_38,&local_48,&local_18,&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 15048bfe0

bool __thiscall `UE::Input::GetCachedMaxUserCount'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6094783885533511719>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6094783885533511719>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048c020

bool __thiscall
`UE::Input::GetDeviceMappingPolicyFromConfig'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6094783885533511750>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6094783885533511750>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

