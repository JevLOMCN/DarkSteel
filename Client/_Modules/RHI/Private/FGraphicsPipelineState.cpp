// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// IsCompute @ 145cb18d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FGraphicsPipelineState::IsCompute(FGraphicsPipelineState *this)

{
  return false;
}

// Verify_IncUse @ 145ccb060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGraphicsPipelineState::Verify_IncUse(FGraphicsPipelineState *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  pFVar1 = &this->InUseCount;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  if (iVar2 + 1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result >= 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x4dd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

