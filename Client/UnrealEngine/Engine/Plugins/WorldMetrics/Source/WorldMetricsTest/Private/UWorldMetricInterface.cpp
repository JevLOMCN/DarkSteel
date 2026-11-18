// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 1

// GetOwner @ 14f143f00

UWorldMetricsSubsystem * __thiscall UWorldMetricInterface::GetOwner(UWorldMetricInterface *this)

{
  code *pcVar1;
  bool bVar2;
  UWorldMetricsSubsystem *pUVar3;
  
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    return *(UWorldMetricsSubsystem **)&this->field_0x20;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4176366498584985583>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Public\\WorldMetricInterface.h"
                     ,0x11,"false || !HasAnyFlags(RF_ClassDefaultObject)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UWorldMetricsSubsystem *)(*pcVar1)();
    return pUVar3;
  }
  return (UWorldMetricsSubsystem *)0x0;
}

