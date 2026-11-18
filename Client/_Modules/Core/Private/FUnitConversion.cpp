// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// Convert<double> @ 141789f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl FUnitConversion::Convert<double>(double param_1,EUnit param_2,EUnit param_3)

{
  EUnitType EVar1;
  EUnitType EVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  
  if ((param_2 == Unspecified) || (param_3 == Unspecified)) goto switchD_141789f8b_caseD_a;
  EVar1 = GetUnitType(param_2);
  EVar2 = GetUnitType(param_3);
  if (EVar1 != EVar2) goto switchD_141789f8b_caseD_a;
  EVar1 = GetUnitType(param_2);
  dVar4 = __real_3f847ae147ae147b;
  switch(EVar1) {
  case Distance:
    dVar4 = UnitConversion::DistanceUnificationFactor(param_2);
    dVar5 = UnitConversion::DistanceUnificationFactor(param_3);
    param_1 = (dVar4 * param_1) / dVar5;
    break;
  case Angle:
    dVar4 = __real_404ca5dc0d03cf26;
    if (param_2 != Radians) {
      dVar4 = __real_3ff0000000000000;
    }
    dVar5 = __real_3ff0000000000000;
    if (param_3 == Radians) {
      dVar5 = __real_3f91df46aaaaaaaa;
    }
    param_1 = dVar4 * param_1 * dVar5;
    break;
  case Speed:
    dVar4 = UnitConversion::SpeedUnificationFactor(param_2);
    dVar5 = UnitConversion::SpeedUnificationFactor(param_3);
    param_1 = (dVar4 * param_1) / dVar5;
    break;
  case AngularSpeed:
    dVar4 = __real_404ca5dc1a63c1f8;
    if (param_2 != RadiansPerSecond) {
      dVar4 = __real_3ff0000000000000;
    }
    dVar5 = __real_3ff0000000000000;
    if (param_3 == RadiansPerSecond) {
      dVar5 = __real_3f91df46a2529d39;
    }
    param_1 = dVar4 * param_1 * dVar5;
    break;
  case Acceleration:
    dVar4 = __real_3f847ae140000000;
    if (param_2 != CentimetersPerSecondSquared) {
      dVar4 = __real_3ff0000000000000;
    }
    dVar5 = __real_3ff0000000000000;
    if (param_3 == CentimetersPerSecondSquared) {
      dVar5 = __real_4059000009600004;
    }
    param_1 = dVar4 * param_1 * dVar5;
    break;
  case Temperature:
    if (param_2 == Celsius) {
      param_1 = param_1 + __real_4071126666666666;
    }
    else if (param_2 == Farenheit) {
      param_1 = param_1 * ___real_3fe1c71c71c71c72 + ___real_406febe93e93e93e;
    }
    if (param_3 == Celsius) {
      param_1 = param_1 - __real_4071126666666666;
    }
    else if (param_3 == Farenheit) {
      param_1 = param_1 * __real_3ffccccccccccccd - ___real_407cbab851eb851f;
    }
  default:
switchD_141789f8b_caseD_a:
    break;
  case Mass:
    dVar4 = UnitConversion::MassUnificationFactor(param_2);
    dVar5 = UnitConversion::MassUnificationFactor(param_3);
    param_1 = (dVar4 * param_1) / dVar5;
    break;
  case Density:
    dVar4 = UnitConversion::DensityUnificationFactor(param_2);
    dVar5 = UnitConversion::DensityUnificationFactor(param_3);
    param_1 = (dVar4 * param_1) / dVar5;
    break;
  case Force:
    dVar4 = UnitConversion::ForceUnificationFactor(param_2);
    dVar5 = UnitConversion::ForceUnificationFactor(param_3);
    param_1 = (dVar4 * param_1) / dVar5;
    break;
  case Torque:
    dVar4 = __real_3f1a36e2eb1c432d;
    if (param_2 != KilogramCentimetersSquaredPerSecondSquared) {
      dVar4 = __real_3ff0000000000000;
    }
    dVar5 = __real_3ff0000000000000;
    if (param_3 == KilogramCentimetersSquaredPerSecondSquared) {
      dVar5 = __real_40c3880000000000;
    }
    param_1 = dVar4 * param_1 * dVar5;
    break;
  case PositionalImpulse:
    if (param_2 != KilogramCentimeters) {
      dVar4 = __real_3ff0000000000000;
    }
    bVar3 = param_3 == KilogramCentimeters;
    goto LAB_14178a13d;
  case Frequency:
    dVar4 = UnitConversion::FrequencyUnificationFactor(param_2);
    dVar5 = UnitConversion::FrequencyUnificationFactor(param_3);
    param_1 = (dVar4 * param_1) / dVar5;
    break;
  case DataSize:
    dVar4 = UnitConversion::DataSizeUnificationFactor(param_2);
    dVar5 = UnitConversion::DataSizeUnificationFactor(param_3);
    param_1 = (dVar4 * param_1) / dVar5;
    break;
  case Time:
    dVar4 = UnitConversion::TimeUnificationFactor(param_2);
    dVar5 = UnitConversion::TimeUnificationFactor(param_3);
    param_1 = (dVar4 * param_1) / dVar5;
    break;
  case Multipliers:
    if (param_2 == Percentage) {
      bVar3 = param_3 == Percentage;
    }
    else {
      bVar3 = param_3 == Percentage;
      dVar4 = __real_3ff0000000000000;
    }
LAB_14178a13d:
    dVar5 = __real_3ff0000000000000;
    if (bVar3) {
      dVar5 = __real_4059000000000000;
    }
    param_1 = dVar4 * param_1 * dVar5;
    break;
  case Stress:
    dVar4 = UnitConversion::StressUnificationFactor(param_2);
    dVar5 = UnitConversion::StressUnificationFactor(param_3);
    param_1 = (dVar4 * param_1) / dVar5;
  }
  return param_1;
}

// AreUnitsCompatible @ 1417b4f50

bool __cdecl FUnitConversion::AreUnitsCompatible(EUnit param_1,EUnit param_2)

{
  EUnitType EVar1;
  EUnitType EVar2;
  
  if ((param_1 != Unspecified) && (param_2 != Unspecified)) {
    EVar1 = GetUnitType(param_1);
    EVar2 = GetUnitType(param_2);
    if (EVar1 != EVar2) {
      return false;
    }
  }
  return true;
}

// GetSupportedUnits @ 1417d8170

TArrayView<wchar_t_const_*_const,int> * __cdecl
FUnitConversion::GetSupportedUnits(TArrayView<wchar_t_const_*_const,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->ArrayNum = 0x4c;
  __return_storage_ptr__->DataPtr = SupportedUnitsStrings;
  return __return_storage_ptr__;
}

// GetUnitDisplayString @ 1417d8ec0

wchar_t * __cdecl FUnitConversion::GetUnitDisplayString(EUnit param_1)

{
  if (param_1 != Unspecified) {
    return DisplayStrings[param_1];
  }
  return (wchar_t *)0x0;
}

// GetUnitType @ 1417d8ee0

EUnitType __cdecl FUnitConversion::GetUnitType(EUnit param_1)

{
  code *pcVar1;
  bool bVar2;
  EUnitType EVar3;
  
  if (param_1 != Unspecified) {
    return UnitTypes[param_1];
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1491310939792735595>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\UnitConversion.cpp"
                     ,0x295,"InUnit != EUnit::Unspecified");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return NumberOf;
}

// IsUnitOfType @ 1417de880

bool __cdecl FUnitConversion::IsUnitOfType(EUnit param_1,EUnitType param_2)

{
  if ((param_1 != Unspecified) && (UnitTypes[param_1] == param_2)) {
    return true;
  }
  return false;
}

// Settings @ 1417fe490

FUnitSettings * __cdecl FUnitConversion::Settings(void)

{
  FUnitSettings *this;
  FUnitSettings *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this = ::operator_new(0x1a8);
      pFVar1 = (FUnitSettings *)0x0;
      if (this != (FUnitSettings *)0x0) {
        pFVar1 = FUnitSettings::FUnitSettings(this);
      }
      ::Settings.Ptr = pFVar1;
      atexit(`FUnitConversion::Settings'::__l2::_dynamic_atexit_destructor_for__Settings__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::Settings.Ptr;
}

// UnitFromString @ 14180b350

TOptional<EUnit> __cdecl FUnitConversion::UnitFromString(wchar_t *param_1)

{
  int iVar1;
  wchar_t *in_RDX;
  uint uVar2;
  FParseCandidate *pFVar3;
  
  if ((in_RDX != (wchar_t *)0x0) && (*in_RDX != L'\0')) {
    uVar2 = 0;
    pFVar3 = ParseCandidates;
    do {
      iVar1 = FGenericPlatformStricmp::Stricmp(in_RDX,pFVar3->String);
      if (iVar1 == 0) {
        *(undefined1 *)((longlong)param_1 + 1) = 1;
        *(EUnit *)param_1 = ParseCandidates[(int)uVar2].Unit;
        goto LAB_14180b3b1;
      }
      uVar2 = uVar2 + 1;
      pFVar3 = pFVar3 + 1;
    } while (uVar2 < 0xb3);
  }
  *(undefined1 *)((longlong)param_1 + 1) = 0;
LAB_14180b3b1:
  return SUB82(param_1,0);
}

