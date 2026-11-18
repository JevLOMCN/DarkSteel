// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c8030

IBuildStatistics * __cdecl
BuildPatchServices::FBuildStatisticsFactory::Create
          (TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> *param_1)

{
  IBuildStatistics IVar1;
  IBuildStatistics IVar2;
  IBuildStatistics *pIVar3;
  
  pIVar3 = ::operator_new(0x18);
  if (pIVar3 == (IBuildStatistics *)0x0) {
    pIVar3 = (IBuildStatistics *)0x0;
  }
  else {
    IVar1 = (IBuildStatistics)(param_1->SharedReferenceCount).ReferenceController;
    IVar2 = (IBuildStatistics)param_1->Object;
    if (IVar1 == (IBuildStatistics)0x0) {
      *pIVar3 = (IBuildStatistics)&___7FBuildStatistics_BuildPatchServices__6B_;
      pIVar3[1] = IVar2;
      pIVar3[2] = (IBuildStatistics)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      *(atomic<int> *)((longlong)IVar1 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)IVar1 + 8) + 1);
      UNLOCK();
      *pIVar3 = (IBuildStatistics)&___7FBuildStatistics_BuildPatchServices__6B_;
      pIVar3[1] = IVar2;
      pIVar3[2] = IVar1;
      LOCK();
      *(atomic<int> *)((longlong)IVar1 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)IVar1 + 8) + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)IVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pIVar3;
}

