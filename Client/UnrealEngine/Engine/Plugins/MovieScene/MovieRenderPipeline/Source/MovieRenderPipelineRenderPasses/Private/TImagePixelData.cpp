// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// TImagePixelData<FLinearColor> @ 14ddc4ce0

TImagePixelData<FLinearColor> * __thiscall
TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
          (TImagePixelData<FLinearColor> *this,TIntPoint<int> *param_1,
          TSharedPtr<IImagePixelDataPayload,1> *param_2)

{
  IImagePixelDataPayload *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pIVar1 = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  this->_padding_ = (longlong)param_1->field0_0x0;
  *(undefined4 *)&this->_padding_ = 2;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x2003;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 4;
  this->_padding_ = (longlong)pIVar1;
  this->_padding_ = (longlong)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  this->_padding_ = (longlong)&___7__TImagePixelData_UFLinearColor____6B_;
  (this->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).ArrayNum = 0;
  (this->Pixels).ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

