// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// operator= @ 1447f9e50

FTemporalAAHistory * __thiscall
FTemporalAAHistory::operator=(FTemporalAAHistory *this,FTemporalAAHistory *param_1)

{
  FTemporalAAHistory *pFVar1;
  IPooledRenderTarget *pIVar2;
  FTemporalAAHistory *pFVar3;
  longlong lVar4;
  
  lVar4 = 2;
  pFVar3 = this;
  do {
    pFVar1 = (FTemporalAAHistory *)(((longlong)param_1 - (longlong)this) + (longlong)pFVar3);
    if (pFVar3 != pFVar1) {
      pIVar2 = (pFVar3->RT).Elements[0].Reference;
      (pFVar3->RT).Elements[0].Reference = (pFVar1->RT).Elements[0].Reference;
      (pFVar1->RT).Elements[0].Reference = (IPooledRenderTarget *)0x0;
      if (pIVar2 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar2->_padding_ + 0x38))();
      }
    }
    pFVar3 = (FTemporalAAHistory *)((pFVar3->RT).Elements + 1);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  (this->ReferenceBufferSize).field0_0x0 = (param_1->ReferenceBufferSize).field0_0x0;
  (this->ViewportRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewportRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewportRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewportRect).field0_0x0._s_0.Max.field0_0x0;
  this->OutputSliceIndex = param_1->OutputSliceIndex;
  return this;
}

// GetGPUSizeBytes @ 1454f68d0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall FTemporalAAHistory::GetGPUSizeBytes(FTemporalAAHistory *this,bool param_1)

{
  IPooledRenderTarget *pIVar1;
  uint uVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  lVar5 = 0;
  do {
    pIVar1 = (this->RT).Elements[lVar5].Reference;
    if (pIVar1 == (IPooledRenderTarget *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar2 = (**(code **)(pIVar1->_padding_ + 0x18))();
      uVar3 = (ulonglong)uVar2;
    }
    if (((param_1) && ((int)uVar3 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)(((this->RT).Elements[lVar5].Reference)->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    lVar5 = lVar5 + 1;
    uVar4 = uVar4 + uVar3;
  } while (lVar5 < 2);
  return uVar4;
}

// operator= @ 145521b30

FTemporalAAHistory * __thiscall
FTemporalAAHistory::operator=(FTemporalAAHistory *this,FTemporalAAHistory *param_1)

{
  IPooledRenderTarget *pIVar1;
  IPooledRenderTarget *pIVar2;
  
  pIVar1 = (param_1->RT).Elements[0].Reference;
  pIVar2 = (this->RT).Elements[0].Reference;
  if (pIVar2 != pIVar1) {
    (this->RT).Elements[0].Reference = pIVar1;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x30))();
    }
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2);
    }
  }
  pIVar1 = (param_1->RT).Elements[1].Reference;
  pIVar2 = (this->RT).Elements[1].Reference;
  if (pIVar2 != pIVar1) {
    (this->RT).Elements[1].Reference = pIVar1;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x30))();
    }
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2);
    }
  }
  (this->ReferenceBufferSize).field0_0x0 = (param_1->ReferenceBufferSize).field0_0x0;
  (this->ViewportRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewportRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewportRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewportRect).field0_0x0._s_0.Max.field0_0x0;
  this->OutputSliceIndex = param_1->OutputSliceIndex;
  return this;
}

