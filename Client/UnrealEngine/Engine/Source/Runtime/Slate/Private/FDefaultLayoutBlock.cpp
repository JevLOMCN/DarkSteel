// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// ~FDefaultLayoutBlock @ 1428496c0

void __thiscall FDefaultLayoutBlock::~FDefaultLayoutBlock(FDefaultLayoutBlock *this)

{
  this->_padding_ = (longlong)&___7FDefaultLayoutBlock__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Renderer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)(this->TextContext)._padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Run).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ILayoutBlock__6B_;
  return;
}

// GetLocationOffset @ 142877d10

TVector2<double> * __thiscall
FDefaultLayoutBlock::GetLocationOffset
          (FDefaultLayoutBlock *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->LocationOffset).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->LocationOffset).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetRenderer @ 142879d50

TSharedPtr<IRunRenderer,1> * __thiscall
FDefaultLayoutBlock::GetRenderer
          (FDefaultLayoutBlock *this,TSharedPtr<IRunRenderer,1> *__return_storage_ptr__)

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

// GetRun @ 142879de0

TSharedRef<IRun,1> * __thiscall
FDefaultLayoutBlock::GetRun(FDefaultLayoutBlock *this,TSharedRef<IRun,1> *__return_storage_ptr__)

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

// GetSize @ 14287aa20

TVector2<double> * __thiscall
FDefaultLayoutBlock::GetSize(FDefaultLayoutBlock *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->Size).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Size).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetTextContext @ 14287bdf0

FLayoutBlockTextContext * __thiscall
FDefaultLayoutBlock::GetTextContext
          (FDefaultLayoutBlock *this,FLayoutBlockTextContext *__return_storage_ptr__)

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

// GetTextRange @ 14287ce00

FTextRange __thiscall FDefaultLayoutBlock::GetTextRange(FDefaultLayoutBlock *this)

{
  FTextRange in_RDX;
  
  *(FTextRange *)in_RDX = this->Range;
  return in_RDX;
}

// SetLocationOffset @ 142897800

void __thiscall
FDefaultLayoutBlock::SetLocationOffset(FDefaultLayoutBlock *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->LocationOffset).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->LocationOffset).field0_0x0._s_0.Y = dVar1;
  return;
}

