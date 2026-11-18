// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FInputVectorAxisBinding @ 147cc4520

FInputVectorAxisBinding * __thiscall
FInputVectorAxisBinding::FInputVectorAxisBinding
          (FInputVectorAxisBinding *this,FInputVectorAxisBinding *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  double dVar3;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  dVar3 = (param_1->AxisValue).field0_0x0._s_0.Y;
  (this->AxisValue).field0_0x0._s_0.X = (param_1->AxisValue).field0_0x0._s_0.X;
  (this->AxisValue).field0_0x0._s_0.Y = dVar3;
  (this->AxisValue).field0_0x0._s_0.Z = (param_1->AxisValue).field0_0x0._s_0.Z;
  (this->AxisKey).KeyName = (param_1->AxisKey).KeyName;
  (this->AxisKey).KeyDetails.Object = (param_1->AxisKey).KeyDetails.Object;
  pTVar1 = (param_1->AxisKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->AxisKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->AxisDelegate = *(undefined8 *)&param_1->AxisDelegate;
  lVar2 = *(longlong *)&(param_1->AxisDelegate).field_0x8;
  *(longlong *)&(this->AxisDelegate).field_0x8 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)&(this->AxisDelegate).field_0x10 =
       *(undefined8 *)&(param_1->AxisDelegate).field_0x10;
  lVar2 = *(longlong *)&(param_1->AxisDelegate).field_0x18;
  *(longlong *)&(this->AxisDelegate).field_0x18 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return this;
}

