// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// Update @ 1471b1080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsRemoveTrivial::Update
          (FDynamicProcessorsRemoveTrivial *this)

{
  FMassProcessingPhaseManager *this_00;
  
  FDynamicProcessorsAddTrivial::Update((FDynamicProcessorsAddTrivial *)this);
  if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4) + (int)this->_padding_) {
    if (this->_padding_ != 0) {
      FBaseGraphTask::Wait((FBaseGraphTask *)this->_padding_,AnyNormalThreadNormalTask);
    }
    this_00 = (FMassProcessingPhaseManager *)
              TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::operator->
                        ((TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *)
                         &this->_padding_);
    FMassProcessingPhaseManager::UnregisterDynamicProcessor
              (this_00,(UMassProcessor *)this->_padding_);
  }
  return (int)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4) +
         this->ArbitraryNumberOfTicksAfterRemoval <= (int)this->_padding_;
}

