// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 1

// ~SMeshWidget @ 14d292bd0

void __thiscall SMeshWidget::~SMeshWidget(SMeshWidget *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<SMeshWidget::FRenderData> FVar2;
  
  pFVar1 = (this->RenderRuns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->RenderData).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FVar2 = (ForElementType<SMeshWidget::FRenderData>)&this->RenderData;
  }
  DestructItems<SMeshWidget::FRenderData,int>((FRenderData *)FVar2,(this->RenderData).ArrayNum);
  FVar2 = (this->RenderData).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

