// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// ~FAnalyzerWrapper @ 14d3cf690

void __thiscall TraceServices::FAnalyzerWrapper::~FAnalyzerWrapper(FAnalyzerWrapper *this)

{
  this->_padding_ = (longlong)&___7FAnalyzerWrapper_TraceServices__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InnerAnalyzer).SharedReferenceCount.ReferenceController);
  return;
}

// OnAnalysisBegin @ 14d3e8070

void __thiscall
TraceServices::FAnalyzerWrapper::OnAnalysisBegin(FAnalyzerWrapper *this,FOnAnalysisContext *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d3e8077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->InnerAnalyzer).Object + 8))();
  return;
}

// OnAnalysisEnd @ 14d3e9910

void __thiscall TraceServices::FAnalyzerWrapper::OnAnalysisEnd(FAnalyzerWrapper *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d3e9917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->InnerAnalyzer).Object + 0x10))();
  return;
}

// OnEvent @ 14d3ec2f0

bool __thiscall
TraceServices::FAnalyzerWrapper::OnEvent
          (FAnalyzerWrapper *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d3ec2f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->InnerAnalyzer).Object + 0x28))();
  return (bool)uVar1;
}

