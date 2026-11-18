// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FSQHitBuffer<ChaosInterface::FOverlapHit> @ 1477e9270

FSQHitBuffer<ChaosInterface::FOverlapHit> * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::FSQHitBuffer<ChaosInterface::FOverlapHit>
          (FSQHitBuffer<ChaosInterface::FOverlapHit> *this,
          FSQHitBuffer<ChaosInterface::FOverlapHit> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<ChaosInterface::FOverlapHit> _Dst;
  ForElementType<ChaosInterface::FOverlapHit> _Src;
  
  this->_padding_ = (longlong)&___7__FSQHitBuffer_UFOverlapHit_ChaosInterface___ChaosInterface__6B_;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x8;
  *(undefined8 *)&this->CurrentBlockingHit = *(undefined8 *)&param_1->CurrentBlockingHit;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x18;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x10 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x10;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x28;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x20 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x20;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x28 = uVar3;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x30 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x30;
  this->AcceleratorDepth = param_1->AcceleratorDepth;
  this->bHasBlockingHit = param_1->bHasBlockingHit;
  this->bSingleResult = param_1->bSingleResult;
  (this->Hits).AllocatorInstance.SecondaryData = (ForElementType<ChaosInterface::FOverlapHit>)0x0;
  _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Hits).ArrayNum;
  (this->Hits).ArrayNum = iVar2;
  if (_Src == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
    _Src = (ForElementType<ChaosInterface::FOverlapHit>)&param_1->Hits;
  }
  piVar1 = &(this->Hits).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x80;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FOverlapHit>_>
              (0x38,8,iVar2,0,&(this->Hits).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->Hits).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
      _Dst = (ForElementType<ChaosInterface::FOverlapHit>)&this->Hits;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0x38);
  }
  return this;
}

// FSQHitBuffer<ChaosInterface::FPTOverlapHit> @ 1477e9370

FSQHitBuffer<ChaosInterface::FPTOverlapHit> * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::
FSQHitBuffer<ChaosInterface::FPTOverlapHit>
          (FSQHitBuffer<ChaosInterface::FPTOverlapHit> *this,
          FSQHitBuffer<ChaosInterface::FPTOverlapHit> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<ChaosInterface::FPTOverlapHit> _Dst;
  ForElementType<ChaosInterface::FPTOverlapHit> _Src;
  
  this->_padding_ =
       (longlong)&___7__FSQHitBuffer_UFPTOverlapHit_ChaosInterface___ChaosInterface__6B_;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x8;
  *(undefined8 *)&this->CurrentBlockingHit = *(undefined8 *)&param_1->CurrentBlockingHit;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x18;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x10 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x10;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x28;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x20 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x20;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x28 = uVar3;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x30 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x30;
  this->AcceleratorDepth = param_1->AcceleratorDepth;
  this->bHasBlockingHit = param_1->bHasBlockingHit;
  this->bSingleResult = param_1->bSingleResult;
  (this->Hits).AllocatorInstance.SecondaryData = (ForElementType<ChaosInterface::FPTOverlapHit>)0x0;
  _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Hits).ArrayNum;
  (this->Hits).ArrayNum = iVar2;
  if (_Src == (ForElementType<ChaosInterface::FPTOverlapHit>)0x0) {
    _Src = (ForElementType<ChaosInterface::FPTOverlapHit>)&param_1->Hits;
  }
  piVar1 = &(this->Hits).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x80;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTOverlapHit>_>
              (0x38,8,iVar2,0,&(this->Hits).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->Hits).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<ChaosInterface::FPTOverlapHit>)0x0) {
      _Dst = (ForElementType<ChaosInterface::FPTOverlapHit>)&this->Hits;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0x38);
  }
  return this;
}

// FSQHitBuffer<ChaosInterface::FPTRaycastHit> @ 1477e9470

FSQHitBuffer<ChaosInterface::FPTRaycastHit> * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>::
FSQHitBuffer<ChaosInterface::FPTRaycastHit>
          (FSQHitBuffer<ChaosInterface::FPTRaycastHit> *this,
          FSQHitBuffer<ChaosInterface::FPTRaycastHit> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  ForElementType<ChaosInterface::FPTRaycastHit> _Dst;
  ForElementType<ChaosInterface::FPTRaycastHit> _Src;
  
  this->_padding_ =
       (longlong)&___7__FSQHitBuffer_UFPTRaycastHit_ChaosInterface___ChaosInterface__6B_;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  fVar4 = (param_1->CurrentBlockingHit).U;
  fVar5 = (param_1->CurrentBlockingHit).V;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit).U = fVar4;
  (this->CurrentBlockingHit).V = fVar5;
  this->AcceleratorDepth = param_1->AcceleratorDepth;
  this->bHasBlockingHit = param_1->bHasBlockingHit;
  this->bSingleResult = param_1->bSingleResult;
  (this->Hits).AllocatorInstance.SecondaryData = (ForElementType<ChaosInterface::FPTRaycastHit>)0x0;
  _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Hits).ArrayNum;
  (this->Hits).ArrayNum = iVar2;
  if (_Src == (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
    _Src = (ForElementType<ChaosInterface::FPTRaycastHit>)&param_1->Hits;
  }
  piVar1 = &(this->Hits).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x80;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTRaycastHit>_>
              (0x80,8,iVar2,0,&(this->Hits).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->Hits).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
      _Dst = (ForElementType<ChaosInterface::FPTRaycastHit>)&this->Hits;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 7);
  }
  return this;
}

// FSQHitBuffer<ChaosInterface::FPTSweepHit> @ 1477e95a0

FSQHitBuffer<ChaosInterface::FPTSweepHit> * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>::FSQHitBuffer<ChaosInterface::FPTSweepHit>
          (FSQHitBuffer<ChaosInterface::FPTSweepHit> *this,
          FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<ChaosInterface::FPTSweepHit> _Dst;
  ForElementType<ChaosInterface::FPTSweepHit> _Src;
  
  this->_padding_ = (longlong)&___7__FSQHitBuffer_UFPTSweepHit_ChaosInterface___ChaosInterface__6B_;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x8;
  *(undefined8 *)&this->CurrentBlockingHit = *(undefined8 *)&param_1->CurrentBlockingHit;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x18;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x10 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x10;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x28;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x20 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x20;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x38;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x30 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x30;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x48;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x40 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x40;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x58;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x50 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x50;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x58 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x68;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x60 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x60;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x68 = uVar3;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x70 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x70;
  this->AcceleratorDepth = param_1->AcceleratorDepth;
  this->bHasBlockingHit = param_1->bHasBlockingHit;
  this->bSingleResult = param_1->bSingleResult;
  (this->Hits).AllocatorInstance.SecondaryData = (ForElementType<ChaosInterface::FPTSweepHit>)0x0;
  _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Hits).ArrayNum;
  (this->Hits).ArrayNum = iVar2;
  if (_Src == (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
    _Src = (ForElementType<ChaosInterface::FPTSweepHit>)&param_1->Hits;
  }
  piVar1 = &(this->Hits).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x80;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTSweepHit>_>
              (0x78,8,iVar2,0,&(this->Hits).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->Hits).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
      _Dst = (ForElementType<ChaosInterface::FPTSweepHit>)&this->Hits;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0x78);
  }
  return this;
}

// FSQHitBuffer<ChaosInterface::FRaycastHit> @ 1477e96d0

FSQHitBuffer<ChaosInterface::FRaycastHit> * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>::FSQHitBuffer<ChaosInterface::FRaycastHit>
          (FSQHitBuffer<ChaosInterface::FRaycastHit> *this,
          FSQHitBuffer<ChaosInterface::FRaycastHit> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  ForElementType<ChaosInterface::FRaycastHit> _Dst;
  ForElementType<ChaosInterface::FRaycastHit> _Src;
  
  this->_padding_ = (longlong)&___7__FSQHitBuffer_UFRaycastHit_ChaosInterface___ChaosInterface__6B_;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  fVar4 = (param_1->CurrentBlockingHit).U;
  fVar5 = (param_1->CurrentBlockingHit).V;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit).U = fVar4;
  (this->CurrentBlockingHit).V = fVar5;
  this->AcceleratorDepth = param_1->AcceleratorDepth;
  this->bHasBlockingHit = param_1->bHasBlockingHit;
  this->bSingleResult = param_1->bSingleResult;
  (this->Hits).AllocatorInstance.SecondaryData = (ForElementType<ChaosInterface::FRaycastHit>)0x0;
  _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Hits).ArrayNum;
  (this->Hits).ArrayNum = iVar2;
  if (_Src == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
    _Src = (ForElementType<ChaosInterface::FRaycastHit>)&param_1->Hits;
  }
  piVar1 = &(this->Hits).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x80;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FRaycastHit>_>
              (0x80,8,iVar2,0,&(this->Hits).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->Hits).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
      _Dst = (ForElementType<ChaosInterface::FRaycastHit>)&this->Hits;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 7);
  }
  return this;
}

// FSQHitBuffer<ChaosInterface::FSweepHit> @ 1477e9800

FSQHitBuffer<ChaosInterface::FSweepHit> * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>::FSQHitBuffer<ChaosInterface::FSweepHit>
          (FSQHitBuffer<ChaosInterface::FSweepHit> *this,
          FSQHitBuffer<ChaosInterface::FSweepHit> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<ChaosInterface::FSweepHit> _Dst;
  ForElementType<ChaosInterface::FSweepHit> _Src;
  
  this->_padding_ = (longlong)&___7__FSQHitBuffer_UFSweepHit_ChaosInterface___ChaosInterface__6B_;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x8;
  *(undefined8 *)&this->CurrentBlockingHit = *(undefined8 *)&param_1->CurrentBlockingHit;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x18;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x10 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x10;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x28;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x20 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x20;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x38;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x30 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x30;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x48;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x40 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x40;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x58;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x50 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x50;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x58 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x68;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x60 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x60;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x68 = uVar3;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x70 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x70;
  this->AcceleratorDepth = param_1->AcceleratorDepth;
  this->bHasBlockingHit = param_1->bHasBlockingHit;
  this->bSingleResult = param_1->bSingleResult;
  (this->Hits).AllocatorInstance.SecondaryData = (ForElementType<ChaosInterface::FSweepHit>)0x0;
  _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Hits).ArrayNum;
  (this->Hits).ArrayNum = iVar2;
  if (_Src == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
    _Src = (ForElementType<ChaosInterface::FSweepHit>)&param_1->Hits;
  }
  piVar1 = &(this->Hits).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x80;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FSweepHit>_>
              (0x78,8,iVar2,0,&(this->Hits).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->Hits).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
      _Dst = (ForElementType<ChaosInterface::FSweepHit>)&this->Hits;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0x78);
  }
  return this;
}

// ~FSQHitBuffer<ChaosInterface::FPTOverlapHit> @ 1477f0d90

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::
~FSQHitBuffer<ChaosInterface::FPTOverlapHit>(FSQHitBuffer<ChaosInterface::FPTOverlapHit> *this)

{
  ForElementType<ChaosInterface::FPTOverlapHit> FVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ =
       (longlong)&___7__FSQHitBuffer_UFPTOverlapHit_ChaosInterface___ChaosInterface__6B_;
  FVar1 = (this->Hits).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<ChaosInterface::FPTOverlapHit>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<ChaosInterface::FPTOverlapHit>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// ~FSQHitBuffer<ChaosInterface::FPTRaycastHit> @ 1477f0dc0

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>::
~FSQHitBuffer<ChaosInterface::FPTRaycastHit>(FSQHitBuffer<ChaosInterface::FPTRaycastHit> *this)

{
  ForElementType<ChaosInterface::FPTRaycastHit> FVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ =
       (longlong)&___7__FSQHitBuffer_UFPTRaycastHit_ChaosInterface___ChaosInterface__6B_;
  FVar1 = (this->Hits).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// ~FSQHitBuffer<ChaosInterface::FPTSweepHit> @ 1477f0df0

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>::
~FSQHitBuffer<ChaosInterface::FPTSweepHit>(FSQHitBuffer<ChaosInterface::FPTSweepHit> *this)

{
  ForElementType<ChaosInterface::FPTSweepHit> FVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7__FSQHitBuffer_UFPTSweepHit_ChaosInterface___ChaosInterface__6B_;
  FVar1 = (this->Hits).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// operator= @ 1477f4a10

FSQHitBuffer<ChaosInterface::FPTRaycastHit> * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FPTRaycastHit>::operator=
          (FSQHitBuffer<ChaosInterface::FPTRaycastHit> *this,
          FSQHitBuffer<ChaosInterface::FPTRaycastHit> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  ForElementType<ChaosInterface::FPTRaycastHit> _Dst;
  ForElementType<ChaosInterface::FPTRaycastHit> _Src;
  
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  fVar4 = (param_1->CurrentBlockingHit).U;
  fVar5 = (param_1->CurrentBlockingHit).V;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit).U = fVar4;
  (this->CurrentBlockingHit).V = fVar5;
  this->AcceleratorDepth = param_1->AcceleratorDepth;
  this->bHasBlockingHit = param_1->bHasBlockingHit;
  this->bSingleResult = param_1->bSingleResult;
  if (this != param_1) {
    piVar1 = &(this->Hits).ArrayMax;
    _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
    iVar2 = (param_1->Hits).ArrayNum;
    if (_Src == (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
      _Src = (ForElementType<ChaosInterface::FPTRaycastHit>)&param_1->Hits;
    }
    (this->Hits).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0x80;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTRaycastHit>_>
                (0x80,8,iVar2,*piVar1,&(this->Hits).AllocatorInstance,iVar2,piVar1);
      _Dst = (this->Hits).AllocatorInstance.SecondaryData;
      if (iVar2 != 0) {
        if (_Dst == (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
          _Dst = (ForElementType<ChaosInterface::FPTRaycastHit>)&this->Hits;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 7);
      }
    }
  }
  return this;
}

// operator= @ 1477f4b40

FSQHitBuffer<ChaosInterface::FPTSweepHit> * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FPTSweepHit>::operator=
          (FSQHitBuffer<ChaosInterface::FPTSweepHit> *this,
          FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<ChaosInterface::FPTSweepHit> _Dst;
  ForElementType<ChaosInterface::FPTSweepHit> _Src;
  
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x8;
  *(undefined8 *)&this->CurrentBlockingHit = *(undefined8 *)&param_1->CurrentBlockingHit;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x18;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x10 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x10;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x28;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x20 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x20;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x38;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x30 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x30;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x48;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x40 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x40;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x58;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x50 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x50;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x58 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x68;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x60 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x60;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x68 = uVar3;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x70 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x70;
  this->AcceleratorDepth = param_1->AcceleratorDepth;
  this->bHasBlockingHit = param_1->bHasBlockingHit;
  this->bSingleResult = param_1->bSingleResult;
  if (this != param_1) {
    piVar1 = &(this->Hits).ArrayMax;
    _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
    iVar2 = (param_1->Hits).ArrayNum;
    if (_Src == (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
      _Src = (ForElementType<ChaosInterface::FPTSweepHit>)&param_1->Hits;
    }
    (this->Hits).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0x80;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTSweepHit>_>
                (0x78,8,iVar2,*piVar1,&(this->Hits).AllocatorInstance,iVar2,piVar1);
      _Dst = (this->Hits).AllocatorInstance.SecondaryData;
      if (iVar2 != 0) {
        if (_Dst == (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
          _Dst = (ForElementType<ChaosInterface::FPTSweepHit>)&this->Hits;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0x78);
      }
    }
  }
  return this;
}

// operator= @ 1477f4c70

FSQHitBuffer<ChaosInterface::FRaycastHit> * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>::operator=
          (FSQHitBuffer<ChaosInterface::FRaycastHit> *this,
          FSQHitBuffer<ChaosInterface::FRaycastHit> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  ForElementType<ChaosInterface::FRaycastHit> _Dst;
  ForElementType<ChaosInterface::FRaycastHit> _Src;
  
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  lVar3 = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit)._padding_ = lVar3;
  fVar4 = (param_1->CurrentBlockingHit).U;
  fVar5 = (param_1->CurrentBlockingHit).V;
  (this->CurrentBlockingHit)._padding_ = (param_1->CurrentBlockingHit)._padding_;
  (this->CurrentBlockingHit).U = fVar4;
  (this->CurrentBlockingHit).V = fVar5;
  this->AcceleratorDepth = param_1->AcceleratorDepth;
  this->bHasBlockingHit = param_1->bHasBlockingHit;
  this->bSingleResult = param_1->bSingleResult;
  if (this != param_1) {
    piVar1 = &(this->Hits).ArrayMax;
    _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
    iVar2 = (param_1->Hits).ArrayNum;
    if (_Src == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
      _Src = (ForElementType<ChaosInterface::FRaycastHit>)&param_1->Hits;
    }
    (this->Hits).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0x80;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FRaycastHit>_>
                (0x80,8,iVar2,*piVar1,&(this->Hits).AllocatorInstance,iVar2,piVar1);
      _Dst = (this->Hits).AllocatorInstance.SecondaryData;
      if (iVar2 != 0) {
        if (_Dst == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
          _Dst = (ForElementType<ChaosInterface::FRaycastHit>)&this->Hits;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 7);
      }
    }
  }
  return this;
}

// operator= @ 1477f4da0

FSQHitBuffer<ChaosInterface::FSweepHit> * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>::operator=
          (FSQHitBuffer<ChaosInterface::FSweepHit> *this,
          FSQHitBuffer<ChaosInterface::FSweepHit> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<ChaosInterface::FSweepHit> _Dst;
  ForElementType<ChaosInterface::FSweepHit> _Src;
  
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x8;
  *(undefined8 *)&this->CurrentBlockingHit = *(undefined8 *)&param_1->CurrentBlockingHit;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x18;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x10 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x10;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x28;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x20 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x20;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x38;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x30 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x30;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x48;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x40 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x40;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x58;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x50 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x50;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x58 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x68;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x60 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x60;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x68 = uVar3;
  *(undefined8 *)&(this->CurrentBlockingHit).field_0x70 =
       *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x70;
  this->AcceleratorDepth = param_1->AcceleratorDepth;
  this->bHasBlockingHit = param_1->bHasBlockingHit;
  this->bSingleResult = param_1->bSingleResult;
  if (this != param_1) {
    piVar1 = &(this->Hits).ArrayMax;
    _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
    iVar2 = (param_1->Hits).ArrayNum;
    if (_Src == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
      _Src = (ForElementType<ChaosInterface::FSweepHit>)&param_1->Hits;
    }
    (this->Hits).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0x80;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FSweepHit>_>
                (0x78,8,iVar2,*piVar1,&(this->Hits).AllocatorInstance,iVar2,piVar1);
      _Dst = (this->Hits).AllocatorInstance.SecondaryData;
      if (iVar2 != 0) {
        if (_Dst == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
          _Dst = (ForElementType<ChaosInterface::FSweepHit>)&this->Hits;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0x78);
      }
    }
  }
  return this;
}

// InsertHit @ 14783ffc0

void __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::InsertHit
          (FSQHitBuffer<ChaosInterface::FOverlapHit> *this,FOverlapHit *param_1,bool param_2)

{
  TArray<ChaosInterface::FOverlapHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  uchar *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  bool bVar21;
  int iVar22;
  longlong lVar23;
  ForElementType<ChaosInterface::FOverlapHit> FVar24;
  
  if (param_2) {
    uVar5 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)&this->CurrentBlockingHit = *(undefined8 *)param_1;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x8 = uVar5;
    uVar5 = *(undefined8 *)&param_1->field_0x18;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x10 = *(undefined8 *)&param_1->field_0x10;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x18 = uVar5;
    uVar5 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x20 = *(undefined8 *)&param_1->field_0x20;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x28 = uVar5;
    *(undefined8 *)&(this->CurrentBlockingHit).field_0x30 = *(undefined8 *)&param_1->field_0x30;
    this->bHasBlockingHit = true;
    return;
  }
  FVar24 = (this->Hits).AllocatorInstance.SecondaryData;
  pTVar1 = &this->Hits;
  if (FVar24 == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
    FVar24 = (ForElementType<ChaosInterface::FOverlapHit>)pTVar1;
  }
  if (((ulonglong)FVar24 <= param_1) &&
     (param_1 < (FOverlapHit *)((longlong)(this->Hits).ArrayMax * 0x38 + (longlong)FVar24))) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar22 = (this->Hits).ArrayNum;
  piVar2 = &(this->Hits).ArrayMax;
  if (iVar22 == *piVar2) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FOverlapHit>_>
                       (0x838,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Hits).ArrayNum = iVar22 + 1;
  FVar24 = (this->Hits).AllocatorInstance.SecondaryData;
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  if (FVar24 == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
    FVar24 = (ForElementType<ChaosInterface::FOverlapHit>)pTVar1;
  }
  lVar23 = (longlong)iVar22 * 0x38;
  *(undefined8 *)((longlong)FVar24 + lVar23) = *(undefined8 *)param_1;
  ((undefined8 *)((longlong)FVar24 + lVar23))[1] = uVar5;
  uVar6 = param_1->field_0x11;
  uVar7 = param_1->field_0x12;
  uVar8 = param_1->field_0x13;
  uVar9 = param_1->field_0x14;
  uVar10 = param_1->field_0x15;
  uVar11 = param_1->field_0x16;
  uVar12 = param_1->field_0x17;
  uVar13 = param_1->field_0x18;
  uVar14 = param_1->field_0x19;
  uVar15 = param_1->field_0x1a;
  uVar16 = param_1->field_0x1b;
  uVar17 = param_1->field_0x1c;
  uVar18 = param_1->field_0x1d;
  uVar19 = param_1->field_0x1e;
  uVar20 = param_1->field_0x1f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x10) + lVar23;
  puVar3[0] = param_1->field_0x10;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x21;
  uVar7 = param_1->field_0x22;
  uVar8 = param_1->field_0x23;
  uVar9 = param_1->field_0x24;
  uVar10 = param_1->field_0x25;
  uVar11 = param_1->field_0x26;
  uVar12 = param_1->field_0x27;
  uVar13 = param_1->field_0x28;
  uVar14 = param_1->field_0x29;
  uVar15 = param_1->field_0x2a;
  uVar16 = param_1->field_0x2b;
  uVar17 = param_1->field_0x2c;
  uVar18 = param_1->field_0x2d;
  uVar19 = param_1->field_0x2e;
  uVar20 = param_1->field_0x2f;
  puVar3 = (uchar *)((longlong)FVar24 + 0x20) + lVar23;
  puVar3[0] = param_1->field_0x20;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  puVar3[8] = uVar13;
  puVar3[9] = uVar14;
  puVar3[10] = uVar15;
  puVar3[0xb] = uVar16;
  puVar3[0xc] = uVar17;
  puVar3[0xd] = uVar18;
  puVar3[0xe] = uVar19;
  puVar3[0xf] = uVar20;
  uVar6 = param_1->field_0x31;
  uVar7 = param_1->field_0x32;
  uVar8 = param_1->field_0x33;
  uVar9 = param_1->field_0x34;
  uVar10 = param_1->field_0x35;
  uVar11 = param_1->field_0x36;
  uVar12 = param_1->field_0x37;
  puVar3 = (uchar *)((longlong)FVar24 + 0x30) + lVar23;
  puVar3[0] = param_1->field_0x30;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[6] = uVar11;
  puVar3[7] = uVar12;
  return;
}

