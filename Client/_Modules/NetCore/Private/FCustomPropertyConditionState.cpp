// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 1

// FCustomPropertyConditionState @ 1441d1210

FCustomPropertyConditionState * __thiscall
FCustomPropertyConditionState::FCustomPropertyConditionState
          (FCustomPropertyConditionState *this,FCustomPropertyConditionState *param_1)

{
  TMap<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
  *pTVar1;
  TMap<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
  *pTVar2;
  undefined1 *_Src;
  undefined1 *_Dst;
  ForElementType<unsigned_int> FVar3;
  void *pvVar4;
  
  (this->CurrentState).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  if ((param_1->CurrentState).AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0)
  {
    memmove(this,param_1,0x10);
  }
  FVar3 = (this->CurrentState).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pTVar1 = &this->DynamicConditions;
  (this->CurrentState).AllocatorInstance.SecondaryData =
       (param_1->CurrentState).AllocatorInstance.SecondaryData;
  pTVar2 = &param_1->DynamicConditions;
  (param_1->CurrentState).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->CurrentState).NumBits = (param_1->CurrentState).NumBits;
  (this->CurrentState).MaxBits = (param_1->CurrentState).MaxBits;
  (param_1->CurrentState).NumBits = 0;
  (param_1->CurrentState).MaxBits = 0;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->DynamicConditions).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicConditions).field_0x20 = 0;
  *(undefined4 *)&(this->DynamicConditions).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicConditions).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicConditions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicConditions).field_0x34 = 0;
  *(undefined8 *)&(this->DynamicConditions).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicConditions).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Src = &(param_1->DynamicConditions).field_0x10;
    *(undefined4 *)&(this->DynamicConditions).field_0x8 =
         *(undefined4 *)&(param_1->DynamicConditions).field_0x8;
    _Dst = &(this->DynamicConditions).field_0x10;
    *(undefined4 *)&(this->DynamicConditions).field_0xc =
         *(undefined4 *)&(param_1->DynamicConditions).field_0xc;
    *(undefined8 *)&(param_1->DynamicConditions).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->DynamicConditions).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar4 = *(void **)&(this->DynamicConditions).field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->DynamicConditions).field_0x20 =
           *(undefined8 *)&(param_1->DynamicConditions).field_0x20;
      *(undefined8 *)&(param_1->DynamicConditions).field_0x20 = 0;
      *(undefined4 *)&(this->DynamicConditions).field_0x28 =
           *(undefined4 *)&(param_1->DynamicConditions).field_0x28;
      *(undefined4 *)&(this->DynamicConditions).field_0x2c =
           *(undefined4 *)&(param_1->DynamicConditions).field_0x2c;
      *(undefined8 *)&(param_1->DynamicConditions).field_0x28 = 0;
    }
    *(undefined4 *)&(this->DynamicConditions).field_0x30 =
         *(undefined4 *)&(param_1->DynamicConditions).field_0x30;
    *(undefined4 *)&(this->DynamicConditions).field_0x34 =
         *(undefined4 *)&(param_1->DynamicConditions).field_0x34;
    *(undefined4 *)&(param_1->DynamicConditions).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->DynamicConditions).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->DynamicConditions).field_0x40 == 0) {
    *(undefined4 *)&(this->DynamicConditions).field_0x38 =
         *(undefined4 *)&(param_1->DynamicConditions).field_0x38;
  }
  pvVar4 = *(void **)&(this->DynamicConditions).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined8 *)&(this->DynamicConditions).field_0x40 =
       *(undefined8 *)&(param_1->DynamicConditions).field_0x40;
  *(undefined8 *)&(param_1->DynamicConditions).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicConditions).field_0x48 =
       *(undefined4 *)&(param_1->DynamicConditions).field_0x48;
  *(undefined4 *)&(param_1->DynamicConditions).field_0x48 = 0;
  this->DynamicConditionChangeCounter = param_1->DynamicConditionChangeCounter;
  return this;
}

