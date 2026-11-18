// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// GetPoseHistory @ 14a8bc150

IPoseHistory * __thiscall
UE::PoseSearch::FPoseHistoryProvider::GetPoseHistory(FPoseHistoryProvider *this)

{
  FAnimNode_PoseSearchHistoryCollector_Base *pFVar1;
  code *pcVar2;
  bool bVar3;
  IPoseHistory *pIVar4;
  
  if (this->HistoryCollector == (FAnimNode_PoseSearchHistoryCollector_Base *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HistoryCollector",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseHistoryProvider.cpp"
                       ,0xb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IPoseHistory *)(*pcVar2)();
      return pIVar4;
    }
  }
  pFVar1 = this->HistoryCollector;
  if ((pFVar1->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistoryPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IPoseHistory *)(*pcVar2)();
      return pIVar4;
    }
  }
  return (IPoseHistory *)(pFVar1->PoseHistoryPtr).Object;
}

// GetTypeName @ 14a8bf3e0

FName __thiscall UE::PoseSearch::FPoseHistoryProvider::GetTypeName(FPoseHistoryProvider *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

