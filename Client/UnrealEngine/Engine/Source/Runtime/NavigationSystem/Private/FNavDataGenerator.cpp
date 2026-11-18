// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 14

// ~FNavDataGenerator @ 146d78200

void __thiscall FNavDataGenerator::~FNavDataGenerator(FNavDataGenerator *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FNavDataGenerator__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146d7822a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// CancelBuild @ 146d86d00

void __thiscall FNavDataGenerator::CancelBuild(FNavDataGenerator *this)

{
  return;
}

// EnsureBuildCompletion @ 146d92de0

void __thiscall FNavDataGenerator::EnsureBuildCompletion(FNavDataGenerator *this)

{
  return;
}

// ExportNavigationData @ 146d94d40

void __thiscall FNavDataGenerator::ExportNavigationData(FNavDataGenerator *this,FString *param_1)

{
  return;
}

// GetNumRemaningBuildTasks @ 146d9e430

int __thiscall FNavDataGenerator::GetNumRemaningBuildTasks(FNavDataGenerator *this)

{
  return 0;
}

// GetNumRunningBuildTasks @ 146d9e440

int __thiscall FNavDataGenerator::GetNumRunningBuildTasks(FNavDataGenerator *this)

{
  return 0;
}

// GetTimeSliceData @ 146da29e0

bool __thiscall
FNavDataGenerator::GetTimeSliceData(FNavDataGenerator *this,int *param_1,double *param_2)

{
  *param_1 = 0;
  *param_2 = 0.0;
  return false;
}

// GrabDebugSnapshot @ 146da3310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavDataGenerator::GrabDebugSnapshot
          (FNavDataGenerator *this,FVisualLogEntry *param_1,TBox<double> *param_2,FName *param_3,
          Type param_4)

{
  return;
}

// IsBuildInProgressCheckDirty @ 146da4680

bool __thiscall FNavDataGenerator::IsBuildInProgressCheckDirty(FNavDataGenerator *this)

{
  return false;
}

// LogMemUsed @ 146da6570

uint __thiscall FNavDataGenerator::LogMemUsed(FNavDataGenerator *this)

{
  return 0;
}

// OnNavigationBoundsChanged @ 146da93e0

void __thiscall FNavDataGenerator::OnNavigationBoundsChanged(FNavDataGenerator *this)

{
  return;
}

// RebuildAll @ 146dad990

bool __thiscall FNavDataGenerator::RebuildAll(FNavDataGenerator *this)

{
  return false;
}

// RebuildDirtyAreas @ 146dadfe0

void __thiscall
FNavDataGenerator::RebuildDirtyAreas
          (FNavDataGenerator *this,TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_> *param_1
          )

{
  return;
}

// TickAsyncBuild @ 146dbd620

void __thiscall FNavDataGenerator::TickAsyncBuild(FNavDataGenerator *this,float param_1)

{
  return;
}

