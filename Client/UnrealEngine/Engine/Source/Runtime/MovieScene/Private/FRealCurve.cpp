// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 19

// AddKey @ 1460a6db0

FKeyHandle __thiscall
FRealCurve::AddKey(FRealCurve *this,float param_1,float param_2,bool param_3,FKeyHandle param_4)

{
  uint in_EDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0x97,L"Pure virtual not implemented (%s)");
  FKeyHandle::Invalid();
  return (FKeyHandle)in_EDX;
}

// BakeCurve @ 1460ae220

void __thiscall FRealCurve::BakeCurve(FRealCurve *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xd3,L"Pure virtual not implemented (%s)");
  return;
}

// BakeCurve @ 1460ae250

void __thiscall FRealCurve::BakeCurve(FRealCurve *this,float param_1,float param_2,float param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xd4,L"Pure virtual not implemented (%s)");
  return;
}

// DeleteKey @ 1460ba020

void __thiscall FRealCurve::DeleteKey(FRealCurve *this,FKeyHandle param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0x9f,L"Pure virtual not implemented (%s)");
  return;
}

// Eval @ 1460c22b0

float __thiscall FRealCurve::Eval(FRealCurve *this,float param_1,float param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xcd,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetKeyIndex @ 1460cd310

int __thiscall FRealCurve::GetKeyIndex(FRealCurve *this,float param_1,float param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xdc,L"Pure virtual not implemented (%s)");
  return -1;
}

// GetKeyInterpMode @ 1460cd350

ERichCurveInterpMode __thiscall FRealCurve::GetKeyInterpMode(FRealCurve *this,FKeyHandle param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xbe,L"Pure virtual not implemented (%s)");
  return RCIM_None;
}

// GetKeyTimeValuePair @ 1460cd3f0

TTuple<float,float> __thiscall FRealCurve::GetKeyTimeValuePair(FRealCurve *this,FKeyHandle param_1)

{
  undefined4 in_register_00000014;
  TTuple<float,float> TVar1;
  
  TVar1._4_4_ = in_register_00000014;
  TVar1._0_4_ = param_1.Index;
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xb1,L"Pure virtual not implemented (%s)");
  *(undefined8 *)TVar1 = 0;
  return TVar1;
}

// GetKeyValue @ 1460cd6b0

float __thiscall FRealCurve::GetKeyValue(FRealCurve *this,FKeyHandle param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xae,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetTimeRange @ 1460d0c80

void __thiscall FRealCurve::GetTimeRange(FRealCurve *this,float *param_1,float *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xc1,L"Pure virtual not implemented (%s)");
  return;
}

// GetValueRange @ 1460d10b0

void __thiscall FRealCurve::GetValueRange(FRealCurve *this,float *param_1,float *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xc4,L"Pure virtual not implemented (%s)");
  return;
}

// ReadjustTimeRange @ 1460e0e30

void __thiscall
FRealCurve::ReadjustTimeRange
          (FRealCurve *this,float param_1,float param_2,bool param_3,float param_4,float param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xd0,L"Pure virtual not implemented (%s)");
  return;
}

// RemapTimeValue @ 1460e43c0

void __thiscall FRealCurve::RemapTimeValue(FRealCurve *this,float *param_1,float *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xca,L"Pure virtual not implemented (%s)");
  return;
}

// RemoveRedundantKeys @ 1460e8670

void __thiscall
FRealCurve::RemoveRedundantKeys
          (FRealCurve *this,float param_1,float param_2,float param_3,FFrameRate param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xd8,L"Pure virtual not implemented (%s)");
  return;
}

// RemoveRedundantKeys @ 1460e86a0

void __thiscall FRealCurve::RemoveRedundantKeys(FRealCurve *this,float param_1,FFrameRate param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xd7,L"Pure virtual not implemented (%s)");
  return;
}

// Reset @ 1460e9520

void __thiscall FRealCurve::Reset(FRealCurve *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,199,L"Pure virtual not implemented (%s)");
  return;
}

// SetKeyInterpMode @ 1460f70c0

void __thiscall
FRealCurve::SetKeyInterpMode(FRealCurve *this,FKeyHandle param_1,ERichCurveInterpMode param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xb3,L"Pure virtual not implemented (%s)");
  return;
}

// SetKeyValue @ 1460f7dd0

void __thiscall
FRealCurve::SetKeyValue(FRealCurve *this,FKeyHandle param_1,float param_2,bool param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xab,L"Pure virtual not implemented (%s)");
  return;
}

// UpdateOrAddKey @ 1460fdb40

FKeyHandle __thiscall
FRealCurve::UpdateOrAddKey(FRealCurve *this,float param_1,float param_2,bool param_3,float param_4)

{
  uint in_EDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\RealCurve.h"
             ,0xa2,L"Pure virtual not implemented (%s)");
  FKeyHandle::Invalid();
  return (FKeyHandle)in_EDX;
}

