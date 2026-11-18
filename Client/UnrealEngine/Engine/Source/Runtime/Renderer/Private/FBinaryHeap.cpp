// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 14

// DownHeap @ 144c36e80

void __thiscall
FBinaryHeap<unsigned_int,unsigned_int>::DownHeap
          (FBinaryHeap<unsigned_int,unsigned_int> *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
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

// ResizeHeap @ 144c5c760

void __thiscall
FBinaryHeap<unsigned_int,unsigned_int>::ResizeHeap
          (FBinaryHeap<unsigned_int,unsigned_int> *this,uint param_1)

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

// ResizeIndexes @ 144c5c800

void __thiscall
FBinaryHeap<unsigned_int,unsigned_int>::ResizeIndexes
          (FBinaryHeap<unsigned_int,unsigned_int> *this,uint param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  ulong64 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 == 0) {
    this->IndexSize = 0;
    operator_delete__(this->Keys);
    operator_delete__(this->HeapIndexes);
    this->Keys = (uint *)0x0;
    this->HeapIndexes = (uint *)0x0;
    return;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = CONCAT44(0,param_1);
  uVar5 = SUB168(ZEXT816(4) * auVar2,0);
  if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
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

// UpHeap @ 144c65250

void __thiscall
FBinaryHeap<unsigned_int,unsigned_int>::UpHeap
          (FBinaryHeap<unsigned_int,unsigned_int> *this,uint param_1)

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

// FBinaryHeap<unsigned_int,unsigned_int> @ 144d3d710

FBinaryHeap<unsigned_int,unsigned_int> * __thiscall
FBinaryHeap<unsigned_int,unsigned_int>::FBinaryHeap<unsigned_int,unsigned_int>
          (FBinaryHeap<unsigned_int,unsigned_int> *this)

{
  this->HeapNum = 0;
  this->HeapSize = 0;
  this->IndexSize = 0;
  this->Heap = (uint *)0x0;
  this->Keys = (uint *)0x0;
  this->HeapIndexes = (uint *)0x0;
  return this;
}

// ~FBinaryHeap<unsigned_int,unsigned_int> @ 144d421c0

void __thiscall
FBinaryHeap<unsigned_int,unsigned_int>::~FBinaryHeap<unsigned_int,unsigned_int>
          (FBinaryHeap<unsigned_int,unsigned_int> *this)

{
  operator_delete__(this->Heap);
  operator_delete__(this->Keys);
  operator_delete__(this->HeapIndexes);
  this->HeapNum = 0;
  this->HeapSize = 0;
  this->IndexSize = 0;
  this->Heap = (uint *)0x0;
  this->Keys = (uint *)0x0;
  this->HeapIndexes = (uint *)0x0;
  return;
}

// Add @ 144d51ce0

void __thiscall
FBinaryHeap<unsigned_int,unsigned_int>::Add
          (FBinaryHeap<unsigned_int,unsigned_int> *this,uint param_1,uint param_2)

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

// Remove @ 144d931b0

void __thiscall
FBinaryHeap<unsigned_int,unsigned_int>::Remove
          (FBinaryHeap<unsigned_int,unsigned_int> *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 < this->IndexSize) {
    uVar1 = this->HeapIndexes[param_1];
    if (uVar1 != 0xffffffff) {
      uVar2 = this->Keys[param_1];
      this->HeapNum = this->HeapNum - 1;
      this->Heap[uVar1] = this->Heap[this->HeapNum];
      this->HeapIndexes[this->Heap[uVar1]] = uVar1;
      this->HeapIndexes[param_1] = 0xffffffff;
      if (this->Keys[this->Heap[uVar1]] <= uVar2) {
        UpHeap(this,uVar1);
        return;
      }
      DownHeap(this,uVar1);
      return;
    }
  }
  return;
}

// Update @ 144e368a0

void __thiscall
FBinaryHeap<unsigned_int,unsigned_int>::Update
          (FBinaryHeap<unsigned_int,unsigned_int> *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  this->Keys[param_2] = param_1;
  uVar1 = this->HeapIndexes[param_2];
  uVar6 = (ulonglong)uVar1;
  if ((uVar1 == 0) || (this->Keys[this->Heap[uVar1 - 1 >> 1]] <= param_1)) {
    iVar3 = uVar1 * 2;
    uVar8 = iVar3 + 1;
    uVar5 = this->HeapNum;
    uVar2 = this->Heap[uVar6];
    if (uVar8 < uVar5) {
      do {
        uVar7 = iVar3 + 2;
        uVar9 = (ulonglong)uVar8;
        uVar4 = (uint)uVar6;
        if (uVar7 < uVar5) {
          if (this->Keys[this->Heap[uVar9]] < this->Keys[this->Heap[uVar7]]) {
            uVar7 = uVar8;
          }
          uVar9 = (ulonglong)uVar7;
        }
        uVar5 = this->Heap[uVar9];
        if (this->Keys[uVar2] <= this->Keys[uVar5]) break;
        this->Heap[uVar6] = uVar5;
        this->HeapIndexes[this->Heap[uVar6]] = uVar4;
        uVar4 = (uint)uVar9;
        uVar5 = this->HeapNum;
        iVar3 = uVar4 * 2;
        uVar8 = iVar3 + 1;
        uVar6 = uVar9;
      } while (uVar8 < uVar5);
      if (uVar4 != uVar1) {
        this->Heap[uVar4] = uVar2;
        this->HeapIndexes[this->Heap[uVar4]] = uVar4;
      }
    }
  }
  else {
    uVar2 = this->Heap[uVar6];
    do {
      uVar8 = (uint)uVar6;
      uVar4 = uVar8 - 1 >> 1;
      uVar5 = this->Heap[uVar4];
      uVar7 = uVar8;
      if (this->Keys[uVar5] <= this->Keys[uVar2]) break;
      this->Heap[uVar6] = uVar5;
      this->HeapIndexes[this->Heap[uVar6]] = uVar8;
      uVar6 = (ulonglong)uVar4;
      uVar7 = uVar4;
    } while (uVar8 - 1 >> 1 != 0);
    if (uVar7 != uVar1) {
      this->Heap[uVar7] = uVar2;
      this->HeapIndexes[this->Heap[uVar7]] = uVar7;
      return;
    }
  }
  return;
}

// Add @ 1458d7610

void __thiscall
FBinaryHeap<unsigned_int,unsigned_short>::Add
          (FBinaryHeap<unsigned_int,unsigned_short> *this,uint param_1,ushort param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  if (this->HeapNum == this->HeapSize) {
    uVar4 = this->HeapSize * 2;
    if (uVar4 < 0x20) {
      uVar4 = 0x20;
    }
    ResizeHeap(this,uVar4);
  }
  if (this->IndexSize <= (uint)param_2) {
    uVar1 = uVar5 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar4 = 1 << ((byte)lVar3 & 0x1f);
    if (uVar4 < 0x20) {
      uVar4 = 0x20;
    }
    ResizeIndexes(this,uVar4);
  }
  uVar2 = (ushort)this->HeapNum;
  this->HeapNum = this->HeapNum + 1;
  this->Heap[uVar2] = param_2;
  this->Keys[uVar5] = param_1;
  this->HeapIndexes[uVar5] = uVar2;
  UpHeap(this,uVar2);
  return;
}

// DownHeap @ 1458ea4f0

void __thiscall
FBinaryHeap<unsigned_int,unsigned_short>::DownHeap
          (FBinaryHeap<unsigned_int,unsigned_short> *this,ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  uint *puVar7;
  
  uVar5 = this->HeapNum;
  uVar1 = this->Heap[param_1];
  sVar3 = param_1 * 2;
  uVar2 = sVar3 + 1;
  if (uVar2 < uVar5) {
    uVar6 = param_1;
    do {
      if ((ushort)(sVar3 + 2U) < uVar5) {
        puVar7 = this->Keys;
        uVar4 = uVar2 + 1;
        if (puVar7[this->Heap[uVar2]] < puVar7[this->Heap[(ushort)(sVar3 + 2U)]]) {
          uVar4 = uVar2;
        }
      }
      else {
        puVar7 = this->Keys;
        uVar4 = uVar2;
      }
      uVar2 = this->Heap[uVar4];
      if (puVar7[uVar1] <= puVar7[uVar2]) break;
      this->Heap[uVar6] = uVar2;
      this->HeapIndexes[this->Heap[uVar6]] = uVar6;
      uVar5 = this->HeapNum;
      sVar3 = uVar4 * 2;
      uVar2 = sVar3 + 1;
      uVar6 = uVar4;
    } while (uVar2 < uVar5);
    if (uVar6 != param_1) {
      this->Heap[uVar6] = uVar1;
      this->HeapIndexes[this->Heap[uVar6]] = uVar6;
    }
  }
  return;
}

// ResizeHeap @ 14591c650

void __thiscall
FBinaryHeap<unsigned_int,unsigned_short>::ResizeHeap
          (FBinaryHeap<unsigned_int,unsigned_short> *this,uint param_1)

{
  ulong64 uVar1;
  ushort *_Dst;
  
  if (param_1 == 0) {
    this->HeapNum = 0;
    this->HeapSize = 0;
    operator_delete__(this->Heap);
    this->Heap = (ushort *)0x0;
    return;
  }
  uVar1 = SUB168(ZEXT816(2) * ZEXT416(param_1),0);
  if (SUB168(ZEXT816(2) * ZEXT416(param_1),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  _Dst = operator_new__(uVar1);
  if (this->HeapSize != 0) {
    memcpy(_Dst,this->Heap,(ulonglong)this->HeapSize * 2);
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

// ResizeIndexes @ 14591c6f0

void __thiscall
FBinaryHeap<unsigned_int,unsigned_short>::ResizeIndexes
          (FBinaryHeap<unsigned_int,unsigned_short> *this,uint param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  ulong64 uVar5;
  uint *puVar6;
  ushort *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  
  if (param_1 == 0) {
    this->IndexSize = 0;
    operator_delete__(this->Keys);
    operator_delete__(this->HeapIndexes);
    this->Keys = (uint *)0x0;
    this->HeapIndexes = (ushort *)0x0;
    return;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = CONCAT44(0,param_1);
  uVar5 = SUB168(ZEXT816(4) * auVar2,0);
  if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  puVar6 = operator_new__(uVar5);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = CONCAT44(0,param_1);
  uVar5 = SUB168(ZEXT816(2) * auVar3,0);
  if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
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
    uVar9 = 0;
    if (this->IndexSize != 0) {
      do {
        uVar10 = uVar9 + 1;
        puVar6[uVar9] = this->Keys[uVar9];
        puVar7[uVar9] = this->HeapIndexes[uVar9];
        uVar9 = uVar10;
      } while (uVar10 < this->IndexSize);
    }
    operator_delete__(this->Keys);
    operator_delete__(this->HeapIndexes);
  }
  uVar9 = this->IndexSize;
  if (uVar9 < param_1) {
    puVar11 = puVar7 + uVar9;
    for (uVar8 = (ulonglong)(param_1 - uVar9); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = 0xffff;
      puVar11 = puVar11 + 1;
    }
  }
  this->IndexSize = param_1;
  this->Keys = puVar6;
  this->HeapIndexes = puVar7;
  return;
}

// UpHeap @ 145927da0

void __thiscall
FBinaryHeap<unsigned_int,unsigned_short>::UpHeap
          (FBinaryHeap<unsigned_int,unsigned_short> *this,ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar1 = this->Heap[param_1];
  uVar4 = param_1;
  if (param_1 != 0) {
    do {
      uVar3 = (int)(uVar4 - 1) >> 1;
      uVar2 = this->Heap[uVar3 & 0xffff];
      if (this->Keys[uVar2] <= this->Keys[uVar1]) break;
      this->Heap[uVar4] = uVar2;
      this->HeapIndexes[this->Heap[uVar4]] = uVar4;
      uVar4 = (ushort)uVar3;
    } while (uVar4 != 0);
    if (uVar4 != param_1) {
      this->Heap[uVar4] = uVar1;
      this->HeapIndexes[this->Heap[uVar4]] = uVar4;
    }
  }
  return;
}

