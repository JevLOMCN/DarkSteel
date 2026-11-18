// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// ~TQueue<TUniquePtr<FOpenGLProfiler::FFrame,TDefaultDelete<FOpenGLProfiler::FFrame>_>,1> @ 145be87e0

void __thiscall
TQueue<TUniquePtr<FOpenGLProfiler::FFrame,TDefaultDelete<FOpenGLProfiler::FFrame>_>,1>::
~TQueue<TUniquePtr<FOpenGLProfiler::FFrame,TDefaultDelete<FOpenGLProfiler::FFrame>_>,1>
          (TQueue<TUniquePtr<FOpenGLProfiler::FFrame,TDefaultDelete<FOpenGLProfiler::FFrame>_>,1>
           *this)

{
  TNode *pTVar1;
  FFrame *this_00;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    this_00 = (pTVar1->Item).Ptr;
    if (this_00 != (FFrame *)0x0) {
      UE::RHI::GPUProfiler::FEventStream::~FEventStream(&this_00->EventStream);
      ::operator_delete(this_00,0x48);
    }
    ::operator_delete(pTVar1,0x10);
    pTVar1 = this->Tail;
  }
  return;
}

