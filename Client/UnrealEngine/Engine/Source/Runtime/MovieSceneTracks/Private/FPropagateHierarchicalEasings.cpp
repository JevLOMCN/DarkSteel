// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachAllocation @ 1468b4c10

void __thiscall
UE::MovieScene::FPropagateHierarchicalEasings::ForEachAllocation
          (FPropagateHierarchicalEasings *this,FEntityAllocation *param_1,
          TRead<unsigned_short> param_2,TWrite<double> param_3)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  
  uVar1 = param_1->Size;
  if ((ulonglong)uVar1 != 0) {
    lVar5 = 0;
    do {
      uVar2 = *(ushort *)((longlong)param_2 + lVar5 * 2);
      if ((int)(uint)uVar2 < (this->ComputationData).ArrayNum) {
        *(double *)((longlong)param_3 + lVar5 * 8) =
             (this->ComputationData).DataPtr[uVar2].FinalResult *
             *(double *)((longlong)param_3 + lVar5 * 8);
      }
      else {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5842741950335156921>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\WeightAndEasingEvaluatorSystem.cpp"
                           ,0x2b9,"ComputationData.IsValidIndex(HierarchicalEasingChannel)");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (longlong)(ulonglong)uVar1);
  }
  return;
}

