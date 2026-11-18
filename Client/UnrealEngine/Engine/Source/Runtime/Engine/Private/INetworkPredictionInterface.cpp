// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// ~INetworkPredictionInterface @ 1477f3e50

void __thiscall
INetworkPredictionInterface::~INetworkPredictionInterface(INetworkPredictionInterface *this)

{
  *this = (INetworkPredictionInterface)&___7INetworkPredictionInterface__6B_;
  return;
}

// ForcePositionUpdate @ 147823e70

bool __thiscall
INetworkPredictionInterface::ForcePositionUpdate(INetworkPredictionInterface *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces\\NetworkPredictionInterface.h"
             ,0x21,L"Pure virtual not implemented (%s)");
  return false;
}

// GetPredictionData_Client @ 14783bc30

FNetworkPredictionData_Client * __thiscall
INetworkPredictionInterface::GetPredictionData_Client(INetworkPredictionInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces\\NetworkPredictionInterface.h"
             ,0x2f,L"Pure virtual not implemented (%s)");
  return (FNetworkPredictionData_Client *)0x0;
}

// GetPredictionData_Server @ 14783bd10

FNetworkPredictionData_Server * __thiscall
INetworkPredictionInterface::GetPredictionData_Server(INetworkPredictionInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces\\NetworkPredictionInterface.h"
             ,0x32,L"Pure virtual not implemented (%s)");
  return (FNetworkPredictionData_Server *)0x0;
}

// HasPredictionData_Client @ 14783f6a0

bool __thiscall
INetworkPredictionInterface::HasPredictionData_Client(INetworkPredictionInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces\\NetworkPredictionInterface.h"
             ,0x35,L"Pure virtual not implemented (%s)");
  return false;
}

// HasPredictionData_Server @ 14783f710

bool __thiscall
INetworkPredictionInterface::HasPredictionData_Server(INetworkPredictionInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces\\NetworkPredictionInterface.h"
             ,0x38,L"Pure virtual not implemented (%s)");
  return false;
}

// ResetPredictionData_Client @ 147861270

void __thiscall
INetworkPredictionInterface::ResetPredictionData_Client(INetworkPredictionInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces\\NetworkPredictionInterface.h"
             ,0x3b,L"Pure virtual not implemented (%s)");
  return;
}

// ResetPredictionData_Server @ 1478612e0

void __thiscall
INetworkPredictionInterface::ResetPredictionData_Server(INetworkPredictionInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces\\NetworkPredictionInterface.h"
             ,0x3e,L"Pure virtual not implemented (%s)");
  return;
}

// SendClientAdjustment @ 1478627a0

void __thiscall INetworkPredictionInterface::SendClientAdjustment(INetworkPredictionInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces\\NetworkPredictionInterface.h"
             ,0x1e,L"Pure virtual not implemented (%s)");
  return;
}

// SmoothCorrection @ 147873790

void __thiscall
INetworkPredictionInterface::SmoothCorrection
          (INetworkPredictionInterface *this,TVector<double> *param_1,TQuat<double> *param_2,
          TVector<double> *param_3,TQuat<double> *param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces\\NetworkPredictionInterface.h"
             ,0x28,L"Pure virtual not implemented (%s)");
  return;
}

// _getUObject @ 147880de0

UObject * __thiscall INetworkPredictionInterface::_getUObject(INetworkPredictionInterface *this)

{
  return (UObject *)0x0;
}

