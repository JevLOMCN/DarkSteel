// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// ~FWidgetLayoutBlock @ 14284a120

void __thiscall FWidgetLayoutBlock::~FWidgetLayoutBlock(FWidgetLayoutBlock *this)

{
  this->_padding_ = (longlong)&___7FWidgetLayoutBlock__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Renderer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)(this->TextContext)._padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Widget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Run).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ILayoutBlock__6B_;
  return;
}

// GetLocationOffset @ 142877d30

TVector2<double> * __thiscall
FWidgetLayoutBlock::GetLocationOffset
          (FWidgetLayoutBlock *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->LocationOffset).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->LocationOffset).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetRenderer @ 142879d80

TSharedPtr<IRunRenderer,1> * __thiscall
FWidgetLayoutBlock::GetRenderer
          (FWidgetLayoutBlock *this,TSharedPtr<IRunRenderer,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Renderer).Object;
  pTVar1 = (this->Renderer).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetRun @ 142879e40

TSharedRef<IRun,1> * __thiscall
FWidgetLayoutBlock::GetRun(FWidgetLayoutBlock *this,TSharedRef<IRun,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Run).Object;
  pTVar1 = (this->Run).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetSize @ 14287aa90

TVector2<double> * __thiscall
FWidgetLayoutBlock::GetSize(FWidgetLayoutBlock *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->Size).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Size).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetTextContext @ 14287be30

FLayoutBlockTextContext * __thiscall
FWidgetLayoutBlock::GetTextContext
          (FWidgetLayoutBlock *this,FLayoutBlockTextContext *__return_storage_ptr__)

{
  longlong lVar1;
  
  *(short *)&__return_storage_ptr__->_padding_ = (short)(this->TextContext)._padding_;
  __return_storage_ptr__->_padding_ = (this->TextContext)._padding_;
  lVar1 = (this->TextContext)._padding_;
  __return_storage_ptr__->_padding_ = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  __return_storage_ptr__->TextDirection = (this->TextContext).TextDirection;
  return __return_storage_ptr__;
}

// GetTextRange @ 14287ced0

FTextRange __thiscall FWidgetLayoutBlock::GetTextRange(FWidgetLayoutBlock *this)

{
  FTextRange in_RDX;
  
  *(FTextRange *)in_RDX = this->Range;
  return in_RDX;
}

// SetLocationOffset @ 142897810

void __thiscall
FWidgetLayoutBlock::SetLocationOffset(FWidgetLayoutBlock *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->LocationOffset).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->LocationOffset).field0_0x0._s_0.Y = dVar1;
  return;
}

