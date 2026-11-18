// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ConstructItems @ 147d90340

void __thiscall FScriptArrayHelper::ConstructItems(FScriptArrayHelper *this,int param_1,int param_2)

{
  TScriptArray<TMemoryImageAllocator<0>_> *pTVar1;
  FProperty *pFVar2;
  void *_Dst;
  ulonglong uVar3;
  
  if (0 < param_2) {
    pTVar1 = (this->field1_0x8).FreezableArray;
    if (pTVar1->ArrayNum == 0) {
      _Dst = (void *)0x0;
    }
    else {
      uVar3 = pTVar1->_padding_;
      if (((this->ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar3 & 1) != 0)) {
        uVar3 = (longlong)&pTVar1->_padding_ + ((longlong)uVar3 >> 0x18);
      }
      _Dst = (void *)((longlong)param_1 * (longlong)this->ElementSize + uVar3);
    }
    if (((uint)(int)this->InnerProperty->PropertyFlags >> 9 & 1) != 0) {
      memset(_Dst,0,(longlong)param_2 * (longlong)this->ElementSize);
      return;
    }
    uVar3 = (ulonglong)(uint)param_2;
    do {
      pFVar2 = this->InnerProperty;
      if (((uint)(int)pFVar2->PropertyFlags >> 9 & 1) == 0) {
        (**(code **)(pFVar2->_padding_ + 0x150))();
      }
      else {
        memset(_Dst,0,(longlong)pFVar2->ElementSize * (longlong)pFVar2->ArrayDim);
      }
      _Dst = (void *)((longlong)_Dst + (longlong)this->ElementSize);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// Resize @ 1484f1c30

void __thiscall FScriptArrayHelper::Resize(FScriptArrayHelper *this,int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((longlong)param_1);
  }
  iVar1 = ((this->field1_0x8).FreezableArray)->ArrayNum;
  if (iVar1 < param_1) {
    AddValues(this,param_1 - iVar1);
    return;
  }
  if (param_1 < iVar1) {
    RemoveValues(this,param_1,iVar1 - param_1);
    return;
  }
  return;
}

