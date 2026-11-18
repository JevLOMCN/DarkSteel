// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// FObjectsToDispatchArray @ 1442adad0

FObjectsToDispatchArray * __thiscall
UE::Net::Private::FReplicationReader::FObjectsToDispatchArray::FObjectsToDispatchArray
          (FObjectsToDispatchArray *this,uint param_1,FMemStackBase *param_2)

{
  undefined1 auVar1 [16];
  ulong64 uVar2;
  FDispatchObjectInfo *pFVar3;
  uint *puVar4;
  ulonglong uVar5;
  
  this->Capacity = param_1 + 0x20;
  uVar5 = CONCAT44(0,param_1 + 0x20);
  this->ObjectsToDispatchCount = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar5;
  uVar2 = SUB168(ZEXT816(0x18) * auVar1,0);
  if (SUB168(ZEXT816(0x18) * auVar1,8) != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  pFVar3 = FMemStackBase::Alloc(param_2,uVar2,0x10);
  if (pFVar3 != (FDispatchObjectInfo *)0x0) {
    if (uVar5 != 0) {
      puVar4 = (uint *)&pFVar3->field_0x10;
      do {
        *puVar4 = *puVar4 & 0xfffffc00;
        puVar4[-4] = 0;
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        puVar4 = puVar4 + 6;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    this->ObjectsToDispatch = pFVar3;
    return this;
  }
  this->ObjectsToDispatch = (FDispatchObjectInfo *)0x0;
  return this;
}

// AddPendingDispatchObjectInfo @ 1442b58a0

FDispatchObjectInfo * __thiscall
UE::Net::Private::FReplicationReader::FObjectsToDispatchArray::AddPendingDispatchObjectInfo
          (FObjectsToDispatchArray *this,FMemStackBase *param_1)

{
  FDispatchObjectInfo *pFVar1;
  uint uVar2;
  FDispatchObjectInfo *pFVar3;
  
  Grow(this,1,param_1);
  uVar2 = this->ObjectsToDispatchCount;
  pFVar3 = this->ObjectsToDispatch;
  pFVar1 = pFVar3 + uVar2;
  *(undefined8 *)pFVar1 = 0;
  (pFVar1->ChangeMaskOrPointer).ChangeMaskOrPointer = 0;
  *(undefined8 *)&pFVar3[uVar2].field_0x10 = 0;
  return this->ObjectsToDispatch + this->ObjectsToDispatchCount;
}

// Grow @ 1442c41f0

void __thiscall
UE::Net::Private::FReplicationReader::FObjectsToDispatchArray::Grow
          (FObjectsToDispatchArray *this,uint param_1,FMemStackBase *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong64 uVar3;
  FDispatchObjectInfo *_Dst;
  uint *puVar4;
  ulonglong uVar5;
  
  uVar2 = this->ObjectsToDispatchCount + param_1;
  if (this->Capacity < uVar2) {
    uVar2 = uVar2 + 0x20;
    this->Capacity = uVar2;
    uVar5 = CONCAT44(0,uVar2);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar5;
    uVar3 = SUB168(ZEXT816(0x18) * auVar1,0);
    if (SUB168(ZEXT816(0x18) * auVar1,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    _Dst = FMemStackBase::Alloc(param_2,uVar3,0x10);
    if (_Dst == (FDispatchObjectInfo *)0x0) {
      _Dst = (FDispatchObjectInfo *)0x0;
    }
    else if (uVar5 != 0) {
      puVar4 = (uint *)&_Dst->field_0x10;
      do {
        *puVar4 = *puVar4 & 0xfffffc00;
        puVar4[-4] = 0;
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        puVar4 = puVar4 + 6;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (this->ObjectsToDispatchCount != 0) {
      memcpy(_Dst,this->ObjectsToDispatch,(ulonglong)this->ObjectsToDispatchCount * 0x18);
    }
    this->ObjectsToDispatch = _Dst;
  }
  return;
}

