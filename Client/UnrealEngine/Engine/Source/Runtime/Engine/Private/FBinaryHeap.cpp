// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// Add @ 14871d910

void __thiscall
FBinaryHeap<unsigned___int64,unsigned_int>::Add
          (FBinaryHeap<unsigned___int64,unsigned_int> *this,ulong64 param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulong64 uVar7;
  uint *_Dst;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if (this->HeapNum == this->HeapSize) {
    uVar9 = this->HeapSize * 2;
    if (uVar9 < 0x20) {
      uVar9 = 0x20;
    }
    if (uVar9 == 0) {
      this->HeapNum = 0;
      this->HeapSize = 0;
      operator_delete__(this->Heap);
      this->Heap = (uint *)0x0;
    }
    else {
      uVar7 = SUB168(ZEXT816(4) * ZEXT416(uVar9),0);
      if (SUB168(ZEXT816(4) * ZEXT416(uVar9),8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      _Dst = operator_new__(uVar7);
      if (this->HeapSize != 0) {
        memcpy(_Dst,this->Heap,(ulonglong)this->HeapSize << 2);
        operator_delete__(this->Heap);
      }
      this->Heap = _Dst;
      uVar5 = uVar9;
      if (this->HeapNum < uVar9) {
        uVar5 = this->HeapNum;
      }
      this->HeapNum = uVar5;
      this->HeapSize = uVar9;
    }
  }
  if (this->IndexSize <= param_2) {
    iVar8 = 1;
    if (param_2 + 1 != 0) {
      iVar8 = param_2 + 1;
    }
    uVar2 = (ulonglong)(iVar8 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar9 = 1 << ((byte)lVar4 & 0x1f);
    if (uVar9 < 0x20) {
      uVar9 = 0x20;
    }
    ResizeIndexes(this,uVar9);
  }
  uVar9 = this->HeapNum;
  this->HeapNum = uVar9 + 1;
  this->Heap[uVar9] = param_2;
  this->Keys[param_2] = param_1;
  this->HeapIndexes[param_2] = uVar9;
  uVar5 = this->Heap[uVar9];
  uVar10 = uVar9;
  if (uVar9 != 0) {
    do {
      uVar1 = uVar10 - 1;
      uVar6 = uVar1 >> 1;
      uVar3 = this->Heap[uVar6];
      if (this->Keys[uVar3] <= this->Keys[uVar5]) break;
      this->Heap[uVar10] = uVar3;
      this->HeapIndexes[this->Heap[uVar10]] = uVar10;
      uVar10 = uVar6;
    } while (uVar1 >> 1 != 0);
    if (uVar10 != uVar9) {
      this->Heap[uVar10] = uVar5;
      this->HeapIndexes[this->Heap[uVar10]] = uVar10;
    }
  }
  return;
}

// DownHeap @ 1487305e0

void __thiscall
FBinaryHeap<unsigned___int64,unsigned_int>::DownHeap
          (FBinaryHeap<unsigned___int64,unsigned_int> *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  ulong64 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar7;
  
  uVar4 = this->HeapNum;
  uVar1 = this->Heap[param_1];
  iVar2 = param_1 * 2;
  uVar6 = iVar2 + 1;
  if (uVar6 < uVar4) {
    uVar5 = param_1;
    do {
      uVar9 = iVar2 + 2;
      uVar7 = (ulonglong)uVar6;
      if (uVar9 < uVar4) {
        puVar3 = this->Keys;
        uVar8 = (ulonglong)uVar9;
        if (puVar3[this->Heap[uVar7]] < puVar3[this->Heap[uVar9]]) {
          uVar8 = uVar7;
        }
      }
      else {
        puVar3 = this->Keys;
        uVar8 = uVar7;
      }
      uVar9 = (uint)uVar8;
      uVar4 = this->Heap[uVar8];
      if (puVar3[uVar1] <= puVar3[uVar4]) break;
      this->Heap[uVar5] = uVar4;
      this->HeapIndexes[this->Heap[uVar5]] = uVar5;
      uVar4 = this->HeapNum;
      iVar2 = uVar9 * 2;
      uVar6 = iVar2 + 1;
      uVar5 = uVar9;
    } while (uVar6 < uVar4);
    if (uVar5 != param_1) {
      this->Heap[uVar5] = uVar1;
      this->HeapIndexes[this->Heap[uVar5]] = uVar5;
    }
  }
  return;
}

// ResizeHeap @ 148754d10

void __thiscall
FBinaryHeap<unsigned___int64,unsigned_int>::ResizeHeap
          (FBinaryHeap<unsigned___int64,unsigned_int> *this,uint param_1)

{
  ulong64 uVar1;
  uint *_Dst;
  
  if (param_1 == 0) {
    this->HeapNum = 0;
    this->HeapSize = 0;
    operator_delete__(this->Heap);
    this->Heap = (uint *)0x0;
    return;
  }
  uVar1 = SUB168(ZEXT816(4) * ZEXT416(param_1),0);
  if (SUB168(ZEXT816(4) * ZEXT416(param_1),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  _Dst = operator_new__(uVar1);
  if (this->HeapSize != 0) {
    memcpy(_Dst,this->Heap,(ulonglong)this->HeapSize << 2);
    operator_delete__(this->Heap);
  }
  this->HeapSize = param_1;
  if (this->HeapNum < param_1) {
    param_1 = this->HeapNum;
  }
  this->HeapNum = param_1;
  this->Heap = _Dst;
  return;
}

// ResizeIndexes @ 148754db0

void __thiscall
FBinaryHeap<unsigned___int64,unsigned_int>::ResizeIndexes
          (FBinaryHeap<unsigned___int64,unsigned_int> *this,uint param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  ulong64 uVar5;
  ulong64 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 == 0) {
    this->IndexSize = 0;
    operator_delete__(this->Keys);
    operator_delete__(this->HeapIndexes);
    this->Keys = (ulong64 *)0x0;
    this->HeapIndexes = (uint *)0x0;
    return;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = CONCAT44(0,param_1);
  uVar5 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  puVar6 = operator_new__(uVar5);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = CONCAT44(0,param_1);
  uVar5 = SUB168(ZEXT816(4) * auVar3,0);
  if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  puVar7 = operator_new__(uVar5);
  if (this->IndexSize != 0) {
    if (param_1 < this->IndexSize) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewIndexSize >= IndexSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BinaryHeap.h"
                         ,0xb6,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar8 = 0;
    if (this->IndexSize != 0) {
      do {
        uVar9 = uVar8 + 1;
        puVar6[uVar8] = this->Keys[uVar8];
        puVar7[uVar8] = this->HeapIndexes[uVar8];
        uVar8 = uVar9;
      } while (uVar9 < this->IndexSize);
    }
    operator_delete__(this->Keys);
    operator_delete__(this->HeapIndexes);
  }
  uVar8 = this->IndexSize;
  if (uVar8 < param_1) {
    memset(puVar7 + uVar8,-1,(ulonglong)(param_1 - uVar8) << 2);
  }
  this->IndexSize = param_1;
  this->Keys = puVar6;
  this->HeapIndexes = puVar7;
  return;
}

// UpHeap @ 14875e260

void __thiscall
FBinaryHeap<unsigned___int64,unsigned_int>::UpHeap
          (FBinaryHeap<unsigned___int64,unsigned_int> *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    uVar2 = this->Heap[param_1];
    uVar5 = param_1;
    do {
      uVar1 = uVar5 - 1;
      uVar4 = uVar1 >> 1;
      uVar3 = this->Heap[uVar4];
      if (this->Keys[uVar3] <= this->Keys[uVar2]) break;
      this->Heap[uVar5] = uVar3;
      this->HeapIndexes[this->Heap[uVar5]] = uVar5;
      uVar5 = uVar4;
    } while (uVar1 >> 1 != 0);
    if (uVar5 != param_1) {
      this->Heap[uVar5] = uVar2;
      this->HeapIndexes[this->Heap[uVar5]] = uVar5;
    }
  }
  return;
}

// Update @ 14875e330

void __thiscall
FBinaryHeap<unsigned___int64,unsigned_int>::Update
          (FBinaryHeap<unsigned___int64,unsigned_int> *this,ulong64 param_1,uint param_2)

{
  uint uVar1;
  
  this->Keys[param_2] = param_1;
  uVar1 = this->HeapIndexes[param_2];
  if ((uVar1 != 0) && (param_1 < this->Keys[this->Heap[uVar1 - 1 >> 1]])) {
    UpHeap(this,uVar1);
    return;
  }
  DownHeap(this,uVar1);
  return;
}

