// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 2

// FEvaluationForCachingScope @ 14649e330

FEvaluationForCachingScope * __thiscall
UE::Anim::FEvaluationForCachingScope::FEvaluationForCachingScope
          (FEvaluationForCachingScope *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  FEvaluationForCachingScope *pFVar3;
  
  if (CachingCount == 0) {
    CachingDelta = param_1;
    CachingCount = 1;
    return this;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2079554526850842685>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\AnimationEvaluation.cpp"
                     ,0x3d,"CachingCount == 0");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FEvaluationForCachingScope *)(*pcVar1)();
    return pFVar3;
  }
  CachingCount = CachingCount + 1;
  return this;
}

// ~FEvaluationForCachingScope @ 14649f950

void __thiscall
UE::Anim::FEvaluationForCachingScope::~FEvaluationForCachingScope(FEvaluationForCachingScope *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((CachingCount < 1) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2079554526850842694>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\AnimationEvaluation.cpp"
                         ,0x46,"CachingCount > 0"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  CachingCount = CachingCount + -1;
  if (CachingCount < 1) {
    CachingDelta = 0.0;
    CachingCount = 0;
  }
  return;
}

