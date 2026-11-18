// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 1

// operator() @ 148bc5290

bool __thiscall
FInstallBundleCache::FCacheSortPredicate::operator()
          (FCacheSortPredicate *this,FBundleCacheInfo *param_1,FBundleCacheInfo *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_1->HintReqeustedCount == 0 < param_2->HintReqeustedCount) {
    lVar1 = (this->Now).Ticks;
    lVar3 = 0;
    if ((param_1->TimeStamp).Ticks < lVar1) {
      lVar3 = lVar1 - (param_1->TimeStamp).Ticks;
    }
    lVar2 = 0;
    if ((param_2->TimeStamp).Ticks < lVar1) {
      lVar2 = lVar1 - (param_2->TimeStamp).Ticks;
    }
    return (longlong)((double)lVar2 * param_2->AgeScalar) <
           (longlong)((double)lVar3 * param_1->AgeScalar);
  }
  if ((param_1->HintReqeustedCount < 1) && (0 < param_2->HintReqeustedCount)) {
    return true;
  }
  return false;
}

