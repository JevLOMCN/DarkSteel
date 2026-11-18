// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 1

// FCachedLinearRegressionSums @ 14603f2a0

FCachedLinearRegressionSums * __thiscall
UE::TimeManagement::FCachedLinearRegressionSums::FCachedLinearRegressionSums
          (FCachedLinearRegressionSums *this,ulong64 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = &(this->Samples).Data.ArrayNum;
  (this->Samples).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Samples).Data.ArrayMax;
  *piVar1 = 0;
  (this->Samples).bIsBufferFull = false;
  *piVar2 = 0;
  (this->Samples).NextIndexToInsert = 0;
  iVar3 = (int)param_1;
  if (iVar3 < 1) {
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(param_1 & 0xffffffff);
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,(ForAnyElementType *)this,piVar1,piVar2);
  }
  (this->CachedSums).SumX = 0.0;
  (this->CachedSums).SumY = 0.0;
  (this->CachedSums).SumXxY = 0.0;
  (this->CachedSums).SumOfSquaredXes = 0.0;
  (this->CachedSums).Num = 0;
  return this;
}

