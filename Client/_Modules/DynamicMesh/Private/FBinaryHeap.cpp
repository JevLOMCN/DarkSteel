// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// Add @ 14c6fd480

void __thiscall
FBinaryHeap<double,unsigned_int>::Add
          (FBinaryHeap<double,unsigned_int> *this,double param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulong64 uVar7;
  uint *_Dst;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
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
      uVar6 = uVar9;
      if (this->HeapNum < uVar9) {
        uVar6 = this->HeapNum;
      }
      this->HeapNum = uVar6;
      this->HeapSize = uVar9;
    }
  }
  if (this->IndexSize <= param_2) {
    iVar8 = 1;
    if (param_2 + 1 != 0) {
      iVar8 = param_2 + 1;
    }
    uVar11 = (ulonglong)(iVar8 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar9 = 1 << ((byte)lVar4 & 0x1f);
    if (uVar9 < 0x20) {
      uVar9 = 0x20;
    }
    ResizeIndexes(this,uVar9);
  }
  uVar9 = this->HeapNum;
  uVar11 = (ulonglong)uVar9;
  this->HeapNum = uVar9 + 1;
  this->Heap[uVar11] = param_2;
  this->Keys[param_2] = param_1;
  this->HeapIndexes[param_2] = uVar9;
  uVar6 = this->Heap[uVar11];
  if (uVar9 != 0) {
    do {
      uVar5 = (uint)uVar11;
      uVar12 = uVar5 - 1 >> 1;
      uVar3 = this->Heap[uVar12];
      dVar2 = this->Keys[uVar3];
      pdVar1 = this->Keys + uVar6;
      uVar10 = uVar5;
      if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
      this->Heap[uVar11] = uVar3;
      this->HeapIndexes[this->Heap[uVar11]] = uVar5;
      uVar11 = (ulonglong)uVar12;
      uVar10 = uVar12;
    } while (uVar5 - 1 >> 1 != 0);
    if (uVar10 != uVar9) {
      this->Heap[uVar10] = uVar6;
      this->HeapIndexes[this->Heap[uVar10]] = uVar10;
    }
  }
  return;
}

// DownHeap @ 14c72e4f0

void __thiscall
FBinaryHeap<double,unsigned_int>::DownHeap(FBinaryHeap<double,unsigned_int> *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  double *pdVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar7;
  
  uVar1 = this->Heap[param_1];
  iVar2 = param_1 * 2;
  uVar6 = iVar2 + 1;
  uVar3 = this->HeapNum;
  if (uVar6 < uVar3) {
    uVar4 = param_1;
    do {
      uVar9 = iVar2 + 2;
      uVar7 = (ulonglong)uVar6;
      if (uVar9 < uVar3) {
        pdVar5 = this->Keys;
        uVar8 = (ulonglong)uVar9;
        if (pdVar5[this->Heap[uVar7]] < pdVar5[this->Heap[uVar9]]) {
          uVar8 = uVar7;
        }
      }
      else {
        pdVar5 = this->Keys;
        uVar8 = uVar7;
      }
      uVar9 = (uint)uVar8;
      uVar3 = this->Heap[uVar8];
      if (pdVar5[uVar1] < pdVar5[uVar3] || pdVar5[uVar1] == pdVar5[uVar3]) break;
      this->Heap[uVar4] = uVar3;
      this->HeapIndexes[this->Heap[uVar4]] = uVar4;
      uVar3 = this->HeapNum;
      iVar2 = uVar9 * 2;
      uVar6 = iVar2 + 1;
      uVar4 = uVar9;
    } while (uVar6 < uVar3);
    if (uVar4 != param_1) {
      this->Heap[uVar4] = uVar1;
      this->HeapIndexes[this->Heap[uVar4]] = uVar4;
    }
  }
  return;
}

// ResizeHeap @ 14c75f2d0

void __thiscall
FBinaryHeap<double,unsigned_int>::ResizeHeap(FBinaryHeap<double,unsigned_int> *this,uint param_1)

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

// ResizeIndexes @ 14c75f370

void __thiscall
FBinaryHeap<double,unsigned_int>::ResizeIndexes(FBinaryHeap<double,unsigned_int> *this,uint param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  ulong64 uVar5;
  double *pdVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 == 0) {
    this->IndexSize = 0;
    operator_delete__(this->Keys);
    operator_delete__(this->HeapIndexes);
    this->Keys = (double *)0x0;
    this->HeapIndexes = (uint *)0x0;
    return;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = CONCAT44(0,param_1);
  uVar5 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  pdVar6 = operator_new__(uVar5);
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
        pdVar6[uVar8] = this->Keys[uVar8];
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
  this->Keys = pdVar6;
  this->HeapIndexes = puVar7;
  return;
}

// UpHeap @ 14c773d80

void __thiscall
FBinaryHeap<double,unsigned_int>::UpHeap(FBinaryHeap<double,unsigned_int> *this,uint param_1)

{
  uint uVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 != 0) {
    uVar4 = this->Heap[param_1];
    uVar6 = param_1;
    do {
      uVar1 = uVar6 - 1;
      uVar7 = uVar1 >> 1;
      uVar5 = this->Heap[uVar7];
      dVar3 = this->Keys[uVar5];
      pdVar2 = this->Keys + uVar4;
      if (dVar3 < *pdVar2 || dVar3 == *pdVar2) break;
      this->Heap[uVar6] = uVar5;
      this->HeapIndexes[this->Heap[uVar6]] = uVar6;
      uVar6 = uVar7;
    } while (uVar1 >> 1 != 0);
    if (uVar6 != param_1) {
      this->Heap[uVar6] = uVar4;
      this->HeapIndexes[this->Heap[uVar6]] = uVar6;
    }
  }
  return;
}

