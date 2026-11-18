// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 5

// TImagePixelData<FColor> @ 14dd08d20

TImagePixelData<FColor> * __thiscall
TImagePixelData<FColor>::TImagePixelData<FColor>
          (TImagePixelData<FColor> *this,TIntPoint<int> *param_1,
          TArray<FColor,TSizedDefaultAllocator<64>_> *param_2,
          TSharedPtr<IImagePixelDataPayload,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  IImagePixelDataPayload *pIVar2;
  atomic<int> *paVar3;
  
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  pIVar2 = param_3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  this->_padding_ = (longlong)param_1->field0_0x0;
  this->_padding_ = (longlong)pIVar2;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x801;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 4;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->_padding_ = (longlong)&___7__TImagePixelData_UFColor____6B_;
  (this->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Pixels).ArrayNum = param_2->ArrayNum;
  (this->Pixels).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TImagePixelData<FLinearColor> @ 14dd08df0

TImagePixelData<FLinearColor> * __thiscall
TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
          (TImagePixelData<FLinearColor> *this,TIntPoint<int> *param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<64>_> *param_2,
          TSharedPtr<IImagePixelDataPayload,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  IImagePixelDataPayload *pIVar2;
  atomic<int> *paVar3;
  
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  pIVar2 = param_3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  this->_padding_ = (longlong)param_1->field0_0x0;
  this->_padding_ = (longlong)pIVar2;
  *(undefined4 *)&this->_padding_ = 2;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x2003;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 4;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->_padding_ = (longlong)&___7__TImagePixelData_UFLinearColor____6B_;
  (this->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Pixels).ArrayNum = param_2->ArrayNum;
  (this->Pixels).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TImagePixelData<FFloat16Color> @ 14dd08ec0

TImagePixelData<FFloat16Color> * __thiscall
TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
          (TImagePixelData<FFloat16Color> *this,TIntPoint<int> *param_1,
          TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *param_2,
          TSharedPtr<IImagePixelDataPayload,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  IImagePixelDataPayload *pIVar2;
  atomic<int> *paVar3;
  
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  pIVar2 = param_3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  this->_padding_ = (longlong)param_1->field0_0x0;
  this->_padding_ = (longlong)pIVar2;
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x1003;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 4;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->_padding_ = (longlong)&___7__TImagePixelData_VFFloat16Color____6B_;
  (this->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Pixels).ArrayNum = param_2->ArrayNum;
  (this->Pixels).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TImagePixelData<FColor> @ 14dd69b40

TImagePixelData<FColor> * __thiscall
TImagePixelData<FColor>::TImagePixelData<FColor>
          (TImagePixelData<FColor> *this,TIntPoint<int> *param_1,
          TSharedPtr<IImagePixelDataPayload,1> *param_2)

{
  IImagePixelDataPayload *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> *paVar3;
  
  pIVar1 = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  this->_padding_ = (longlong)param_1->field0_0x0;
  this->_padding_ = (longlong)pIVar1;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x801;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 4;
  this->_padding_ = (longlong)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  this->_padding_ = (longlong)&___7__TImagePixelData_UFColor____6B_;
  (this->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).ArrayNum = 0;
  (this->Pixels).ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TImagePixelData<FFloat16Color> @ 14dd69bf0

TImagePixelData<FFloat16Color> * __thiscall
TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
          (TImagePixelData<FFloat16Color> *this,TIntPoint<int> *param_1,
          TSharedPtr<IImagePixelDataPayload,1> *param_2)

{
  IImagePixelDataPayload *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> *paVar3;
  
  pIVar1 = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  this->_padding_ = (longlong)param_1->field0_0x0;
  this->_padding_ = (longlong)pIVar1;
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x1003;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 4;
  this->_padding_ = (longlong)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  this->_padding_ = (longlong)&___7__TImagePixelData_VFFloat16Color____6B_;
  (this->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).ArrayNum = 0;
  (this->Pixels).ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

