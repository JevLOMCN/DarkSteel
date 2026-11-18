// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 84

// operator==<TSizedDefaultAllocator<32>_> @ 141adf0f0

bool __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::operator==<TSizedDefaultAllocator<32>_>
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this,
          TRingBuffer<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = this->AfterBack - this->Front;
  uVar1 = param_1->Front;
  if (param_1->AfterBack - uVar1 == iVar4) {
    if (0 < iVar4) {
      uVar3 = uVar1;
      do {
        if (*(int *)((this->AllocatorInstance).Data +
                    (ulonglong)((this->Front - uVar1) + uVar3 & this->IndexMask) * 4) !=
            *(int *)((param_1->AllocatorInstance).Data + (ulonglong)(uVar3 & param_1->IndexMask) * 4
                    )) goto LAB_141adf166;
        uVar3 = uVar3 + 1;
      } while ((int)(uVar3 - uVar1) < iVar4);
    }
    bVar2 = true;
  }
  else {
LAB_141adf166:
    bVar2 = false;
  }
  return bVar2;
}

// operator==<TSizedDefaultAllocator<32>_> @ 141adf190

bool __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::operator==<TSizedDefaultAllocator<32>_>
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = this->AfterBack - this->Front;
  uVar1 = param_1->Front;
  if (param_1->AfterBack - uVar1 == iVar4) {
    if (0 < iVar4) {
      uVar3 = uVar1;
      do {
        if (*(int *)((this->AllocatorInstance).Data +
                    (ulonglong)((this->Front - uVar1) + uVar3 & this->IndexMask) * 4) !=
            *(int *)((param_1->AllocatorInstance).Data + (ulonglong)(uVar3 & param_1->IndexMask) * 4
                    )) goto LAB_141adf206;
        uVar3 = uVar3 + 1;
      } while ((int)(uVar3 - uVar1) < iVar4);
    }
    bVar2 = true;
  }
  else {
LAB_141adf206:
    bVar2 = false;
  }
  return bVar2;
}

// operator==<TSizedDefaultAllocator<32>_> @ 141adf230

bool __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
operator==<TSizedDefaultAllocator<32>_>
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,
          TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = this->Front;
  iVar4 = this->AfterBack - uVar1;
  if (param_1->AfterBack - param_1->Front == iVar4) {
    if (0 < iVar4) {
      uVar3 = uVar1;
      do {
        if (*(int *)((this->AllocatorInstance).Data + (ulonglong)(uVar3 & this->IndexMask) * 4) !=
            *(int *)((param_1->AllocatorInstance).Data +
                    (ulonglong)((param_1->Front - uVar1) + uVar3 & param_1->IndexMask) * 4))
        goto LAB_141adf2a6;
        uVar3 = uVar3 + 1;
      } while ((int)(uVar3 - uVar1) < iVar4);
    }
    bVar2 = true;
  }
  else {
LAB_141adf2a6:
    bVar2 = false;
  }
  return bVar2;
}

// Emplace<int_&> @ 141ae4260

int __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::Emplace<int_&>
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this,int *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  
  uVar3 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar3) {
    Reallocate(this,uVar3);
  }
  uVar3 = this->AfterBack;
  uVar1 = this->Front;
  pFVar2 = (this->AllocatorInstance).Data;
  this->AfterBack = uVar3 + 1;
  *(int *)(pFVar2 + (ulonglong)(this->IndexMask & uVar3) * 4) = *param_1;
  return uVar3 - uVar1;
}

// Emplace<unsigned_int_&> @ 141ae42c0

int __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Emplace<unsigned_int_&>
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,uint *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  
  uVar3 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar3) {
    Reallocate(this,uVar3);
  }
  uVar3 = this->AfterBack;
  uVar1 = this->Front;
  pFVar2 = (this->AllocatorInstance).Data;
  this->AfterBack = uVar3 + 1;
  *(uint *)(pFVar2 + (ulonglong)(this->IndexMask & uVar3) * 4) = *param_1;
  FRingBufferTest::Counter::NumVoid = FRingBufferTest::Counter::NumVoid + 1;
  return uVar3 - uVar1;
}

// Emplace<int> @ 141ae4770

int __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::Emplace<int>
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this,int *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  
  uVar3 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar3) {
    Reallocate(this,uVar3);
  }
  uVar3 = this->AfterBack;
  uVar1 = this->Front;
  pFVar2 = (this->AllocatorInstance).Data;
  this->AfterBack = uVar3 + 1;
  *(int *)(pFVar2 + (ulonglong)(this->IndexMask & uVar3) * 4) = *param_1;
  return uVar3 - uVar1;
}

// EmplaceFront<unsigned_int_&> @ 141ae5250

int __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::EmplaceFront<unsigned_int_&>
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar1) {
    Reallocate(this,uVar1);
  }
  this->Front = this->Front - 1;
  *(uint *)((this->AllocatorInstance).Data + (ulonglong)(this->Front & this->IndexMask) * 4) =
       *param_1;
  FRingBufferTest::Counter::NumVoid = FRingBufferTest::Counter::NumVoid + 1;
  return 0;
}

// EmplaceFront_GetRef<unsigned_int_&> @ 141ae52b0

Counter * __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
EmplaceFront_GetRef<unsigned_int_&>
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,uint *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  
  uVar2 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar2) {
    Reallocate(this,uVar2);
  }
  this->Front = this->Front - 1;
  pFVar1 = (this->AllocatorInstance).Data + (ulonglong)(this->IndexMask & this->Front) * 4;
  *(uint *)&pFVar1->field_0x0 = *param_1;
  FRingBufferTest::Counter::NumVoid = FRingBufferTest::Counter::NumVoid + 1;
  return (Counter *)pFVar1;
}

// Emplace_GetRef<unsigned_int_&> @ 141ae5460

Counter * __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Emplace_GetRef<unsigned_int_&>
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,uint *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar2) {
    Reallocate(this,uVar2);
  }
  uVar3 = (ulonglong)(this->IndexMask & this->AfterBack);
  this->AfterBack = this->AfterBack + 1;
  pFVar1 = (this->AllocatorInstance).Data;
  *(uint *)(pFVar1 + uVar3 * 4) = *param_1;
  FRingBufferTest::Counter::NumVoid = FRingBufferTest::Counter::NumVoid + 1;
  return (Counter *)(pFVar1 + uVar3 * 4);
}

// TRingBuffer<int,TSizedDefaultAllocator<32>_> @ 141b12560

TRingBuffer<int,TSizedDefaultAllocator<32>_> * __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::TRingBuffer<int,TSizedDefaultAllocator<32>_>
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  uint uVar1;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->IndexMask = 0xffffffff;
  this->Front = 0;
  this->AfterBack = 0;
  uVar1 = NormalizeCapacity(this,param_1);
  if (this->IndexMask + 1 < uVar1) {
    Reallocate(this,uVar1);
  }
  return this;
}

// TRingBuffer<int,TSizedDefaultAllocator<32>_> @ 141b125a0

TRingBuffer<int,TSizedDefaultAllocator<32>_> * __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::TRingBuffer<int,TSizedDefaultAllocator<32>_>
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this,initializer_list<int> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TRingBuffer<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  int *piVar11;
  
  piVar3 = param_1->_Last;
  piVar11 = param_1->_First;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->IndexMask = 0xffffffff;
  this->Front = 0;
  this->AfterBack = 0;
  uVar8 = NormalizeCapacity(this,(uint)((longlong)piVar3 - (longlong)piVar11 >> 2));
  if (this->IndexMask + 1 < uVar8) {
    Reallocate(this,uVar8);
  }
  while( true ) {
    if (piVar11 == piVar3) {
      return this;
    }
    uVar10 = (this->AfterBack - this->Front) + 1;
    uVar8 = 1;
    if (uVar10 != 0) {
      uVar8 = uVar10;
    }
    uVar1 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar8 = (uint)(uVar10 != 0) << ((byte)lVar5 & 0x1f);
    if ((0x7fffffff < uVar8 || uVar8 < uVar10) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar7)) break;
    if (this->IndexMask + 1 < uVar8) {
      Reallocate(this,uVar8);
    }
    uVar8 = this->AfterBack;
    pFVar4 = (this->AllocatorInstance).Data;
    this->AfterBack = uVar8 + 1;
    iVar2 = *piVar11;
    piVar11 = piVar11 + 1;
    *(int *)(pFVar4 + (ulonglong)(this->IndexMask & uVar8) * 4) = iVar2;
  }
  pcVar6 = (code *)swi(3);
  pTVar9 = (TRingBuffer<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
  return pTVar9;
}

// TRingBuffer<int,TSizedDefaultAllocator<32>_> @ 141b126c0

TRingBuffer<int,TSizedDefaultAllocator<32>_> * __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::TRingBuffer<int,TSizedDefaultAllocator<32>_>
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this)

{
  this->IndexMask = 0xffffffff;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->Front = 0;
  this->AfterBack = 0;
  return this;
}

// TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> @ 141b126e0

TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  
  this->IndexMask = 0xffffffff;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->Front = 0;
  this->AfterBack = 0;
  if (this != param_1) {
    Empty(this,0);
    pFVar2 = (this->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    uVar1 = this->IndexMask;
    this->IndexMask = param_1->IndexMask;
    param_1->IndexMask = uVar1;
    uVar1 = this->Front;
    this->Front = param_1->Front;
    param_1->Front = uVar1;
    uVar1 = this->AfterBack;
    this->AfterBack = param_1->AfterBack;
    param_1->AfterBack = uVar1;
  }
  return this;
}

// TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> @ 141b12770

TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  this->IndexMask = 0xffffffff;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->Front = 0;
  this->AfterBack = 0;
  operator=(this,param_1);
  return this;
}

// TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> @ 141b127a0

TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  uint uVar1;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->IndexMask = 0xffffffff;
  this->Front = 0;
  this->AfterBack = 0;
  uVar1 = NormalizeCapacity(this,param_1);
  if (this->IndexMask + 1 < uVar1) {
    Reallocate(this,uVar1);
  }
  return this;
}

// TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> @ 141b127e0

TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          initializer_list<unsigned_int> *param_1)

{
  ulonglong uVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint *puVar10;
  
  puVar2 = param_1->_Last;
  puVar10 = param_1->_First;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->IndexMask = 0xffffffff;
  this->Front = 0;
  this->AfterBack = 0;
  uVar7 = NormalizeCapacity(this,(uint)((longlong)puVar2 - (longlong)puVar10 >> 2));
  if (this->IndexMask + 1 < uVar7) {
    Reallocate(this,uVar7);
  }
  while( true ) {
    if (puVar10 == puVar2) {
      return this;
    }
    uVar9 = (this->AfterBack - this->Front) + 1;
    uVar7 = 1;
    if (uVar9 != 0) {
      uVar7 = uVar9;
    }
    uVar1 = (ulonglong)(uVar7 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar7 = (uint)(uVar9 != 0) << ((byte)lVar4 & 0x1f);
    if ((0x7fffffff < uVar7 || uVar7 < uVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) break;
    if (this->IndexMask + 1 < uVar7) {
      Reallocate(this,uVar7);
    }
    uVar7 = this->AfterBack;
    pFVar3 = (this->AllocatorInstance).Data;
    this->AfterBack = uVar7 + 1;
    uVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    *(uint *)(pFVar3 + (ulonglong)(this->IndexMask & uVar7) * 4) = uVar9;
  }
  pcVar5 = (code *)swi(3);
  pTVar8 = (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
  return pTVar8;
}

// TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> @ 141b12900

TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  this->IndexMask = 0xffffffff;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->Front = 0;
  this->AfterBack = 0;
  return this;
}

// TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> @ 141b12920

TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> * __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FRingBufferTest::Counter> *param_1)

{
  ulonglong uVar1;
  Counter *pCVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  uint *puVar6;
  bool bVar7;
  uint uVar8;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  Counter *pCVar11;
  
  pCVar2 = param_1->_Last;
  pCVar11 = param_1->_First;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->IndexMask = 0xffffffff;
  this->Front = 0;
  this->AfterBack = 0;
  uVar8 = NormalizeCapacity(this,(uint)((longlong)pCVar2 - (longlong)pCVar11 >> 2));
  if (this->IndexMask + 1 < uVar8) {
    Reallocate(this,uVar8);
  }
  while( true ) {
    if (pCVar11 == pCVar2) {
      return this;
    }
    uVar10 = (this->AfterBack - this->Front) + 1;
    uVar8 = 1;
    if (uVar10 != 0) {
      uVar8 = uVar10;
    }
    uVar1 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar8 = (uint)(uVar10 != 0) << ((byte)lVar4 & 0x1f);
    if ((0x7fffffff < uVar8 || uVar8 < uVar10) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar7)) break;
    if (this->IndexMask + 1 < uVar8) {
      Reallocate(this,uVar8);
    }
    uVar8 = this->AfterBack;
    pFVar3 = (this->AllocatorInstance).Data;
    this->AfterBack = uVar8 + 1;
    puVar6 = &pCVar11->Value;
    pCVar11 = pCVar11 + 1;
    *(uint *)(pFVar3 + (ulonglong)(uVar8 & this->IndexMask) * 4) = *puVar6;
    FRingBufferTest::Counter::NumCopy = FRingBufferTest::Counter::NumCopy + 1;
  }
  pcVar5 = (code *)swi(3);
  pTVar9 = (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
  return pTVar9;
}

// ~TRingBuffer<int,TSizedDefaultAllocator<32>_> @ 141b2a940

void __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::~TRingBuffer<int,TSizedDefaultAllocator<32>_>
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->IndexMask + 1 < this->AfterBack - this->Front) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Front = 0;
  this->AfterBack = 0;
  Reallocate(this,0);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> @ 141b2a9b0

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->IndexMask + 1 < this->AfterBack - this->Front) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Front = 0;
  this->AfterBack = 0;
  Reallocate(this,0);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> @ 141b2aa20

void __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
~TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructRange(this,this->Front,this->AfterBack);
  this->Front = 0;
  this->AfterBack = 0;
  Reallocate(this,0);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 141b2b630

TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    Empty(this,0);
    pFVar2 = (this->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    uVar1 = this->IndexMask;
    this->IndexMask = param_1->IndexMask;
    param_1->IndexMask = uVar1;
    uVar1 = this->Front;
    this->Front = param_1->Front;
    param_1->Front = uVar1;
    uVar1 = this->AfterBack;
    this->AfterBack = param_1->AfterBack;
    param_1->AfterBack = uVar1;
  }
  return this;
}

// operator= @ 141b2b6a0

TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  Empty(this,param_1->IndexMask + 1);
  uVar1 = param_1->AfterBack;
  uVar2 = param_1->Front;
  for (iVar6 = 0; iVar6 != uVar1 - uVar2; iVar6 = iVar6 + 1) {
    puVar5 = operator[](param_1,iVar6);
    uVar4 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
    if (this->IndexMask + 1 < uVar4) {
      Reallocate(this,uVar4);
    }
    uVar4 = this->AfterBack;
    pFVar3 = (this->AllocatorInstance).Data;
    this->AfterBack = uVar4 + 1;
    *(uint *)(pFVar3 + (ulonglong)(this->IndexMask & uVar4) * 4) = *puVar5;
  }
  return this;
}

// operator[] @ 141b2bf60

int * __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::operator[]
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)((this->AllocatorInstance).Data +
                (ulonglong)(this->Front + param_1 & this->IndexMask) * 4);
}

// operator[] @ 141b2bfe0

uint * __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::operator[]
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uint *)(*pcVar1)();
      return puVar4;
    }
  }
  return (uint *)((this->AllocatorInstance).Data +
                 (ulonglong)(this->Front + param_1 & this->IndexMask) * 4);
}

// operator[] @ 141b2c060

uint * __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::operator[]
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uint *)(*pcVar1)();
      return puVar4;
    }
  }
  return (uint *)((this->AllocatorInstance).Data +
                 (ulonglong)(this->Front + param_1 & this->IndexMask) * 4);
}

// operator[] @ 141b2c0e0

Counter * __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::operator[]
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  Counter *pCVar4;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pCVar4 = (Counter *)(*pcVar1)();
      return pCVar4;
    }
  }
  return (Counter *)
         ((this->AllocatorInstance).Data + (ulonglong)(this->Front + param_1 & this->IndexMask) * 4)
  ;
}

// Add @ 141b37e00

int __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::Add
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this,int *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  
  uVar3 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar3) {
    Reallocate(this,uVar3);
  }
  uVar3 = this->AfterBack;
  uVar1 = this->Front;
  pFVar2 = (this->AllocatorInstance).Data;
  this->AfterBack = uVar3 + 1;
  *(int *)(pFVar2 + (ulonglong)(this->IndexMask & uVar3) * 4) = *param_1;
  return uVar3 - uVar1;
}

// Add @ 141b37e60

int __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::Add
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this,int *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  
  uVar3 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar3) {
    Reallocate(this,uVar3);
  }
  uVar3 = this->AfterBack;
  uVar1 = this->Front;
  pFVar2 = (this->AllocatorInstance).Data;
  this->AfterBack = uVar3 + 1;
  *(int *)(pFVar2 + (ulonglong)(this->IndexMask & uVar3) * 4) = *param_1;
  return uVar3 - uVar1;
}

// Add @ 141b37ec0

int __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Add
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  
  uVar3 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar3) {
    Reallocate(this,uVar3);
  }
  uVar3 = this->AfterBack;
  uVar1 = this->Front;
  pFVar2 = (this->AllocatorInstance).Data;
  this->AfterBack = uVar3 + 1;
  *(uint *)(pFVar2 + (ulonglong)(this->IndexMask & uVar3) * 4) = *param_1;
  return uVar3 - uVar1;
}

// Add @ 141b37f20

int __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Add
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,Counter *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  
  uVar3 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar3) {
    Reallocate(this,uVar3);
  }
  uVar3 = this->AfterBack;
  uVar1 = this->Front;
  pFVar2 = (this->AllocatorInstance).Data;
  this->AfterBack = uVar3 + 1;
  *(uint *)(pFVar2 + (ulonglong)(this->IndexMask & uVar3) * 4) = param_1->Value;
  FRingBufferTest::Counter::NumMove = FRingBufferTest::Counter::NumMove + 1;
  return uVar3 - uVar1;
}

// Add @ 141b37f90

int __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Add
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,Counter *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  
  uVar3 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar3) {
    Reallocate(this,uVar3);
  }
  uVar3 = this->AfterBack;
  uVar1 = this->Front;
  pFVar2 = (this->AllocatorInstance).Data;
  this->AfterBack = uVar3 + 1;
  *(uint *)(pFVar2 + (ulonglong)(this->IndexMask & uVar3) * 4) = param_1->Value;
  FRingBufferTest::Counter::NumCopy = FRingBufferTest::Counter::NumCopy + 1;
  return uVar3 - uVar1;
}

// AddFront @ 141b38000

int __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::AddFront
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar1) {
    Reallocate(this,uVar1);
  }
  this->Front = this->Front - 1;
  *(uint *)((this->AllocatorInstance).Data + (ulonglong)(this->IndexMask & this->Front) * 4) =
       *param_1;
  return 0;
}

// AddFront @ 141b38060

int __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::AddFront
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,Counter *param_1)

{
  uint uVar1;
  
  uVar1 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar1) {
    Reallocate(this,uVar1);
  }
  this->Front = this->Front - 1;
  *(uint *)((this->AllocatorInstance).Data + (ulonglong)(this->IndexMask & this->Front) * 4) =
       param_1->Value;
  FRingBufferTest::Counter::NumMove = FRingBufferTest::Counter::NumMove + 1;
  return 0;
}

// AddFront @ 141b380c0

int __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::AddFront
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,Counter *param_1)

{
  uint uVar1;
  
  uVar1 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar1) {
    Reallocate(this,uVar1);
  }
  this->Front = this->Front - 1;
  *(uint *)((this->AllocatorInstance).Data + (ulonglong)(this->IndexMask & this->Front) * 4) =
       param_1->Value;
  FRingBufferTest::Counter::NumCopy = FRingBufferTest::Counter::NumCopy + 1;
  return 0;
}

// AddFrontUninitialized @ 141b38120

int __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::AddFrontUninitialized
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this)

{
  uint uVar1;
  
  uVar1 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar1) {
    Reallocate(this,uVar1);
  }
  this->Front = this->Front - 1;
  return 0;
}

// AddFrontUninitialized_GetRef @ 141b38160

Counter * __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::AddFrontUninitialized_GetRef
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this)

{
  uint uVar1;
  
  uVar1 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar1) {
    Reallocate(this,uVar1);
  }
  this->Front = this->Front - 1;
  return (Counter *)
         ((this->AllocatorInstance).Data + (ulonglong)(this->Front & this->IndexMask) * 4);
}

// AddFront_GetRef @ 141b381b0

Counter * __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::AddFront_GetRef
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,Counter *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  
  uVar2 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar2) {
    Reallocate(this,uVar2);
  }
  this->Front = this->Front - 1;
  pFVar1 = (this->AllocatorInstance).Data + (ulonglong)(this->IndexMask & this->Front) * 4;
  *(uint *)&pFVar1->field_0x0 = param_1->Value;
  FRingBufferTest::Counter::NumMove = FRingBufferTest::Counter::NumMove + 1;
  return (Counter *)pFVar1;
}

// AddFront_GetRef @ 141b38210

Counter * __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::AddFront_GetRef
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,Counter *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  
  uVar2 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar2) {
    Reallocate(this,uVar2);
  }
  this->Front = this->Front - 1;
  pFVar1 = (this->AllocatorInstance).Data + (ulonglong)(this->IndexMask & this->Front) * 4;
  *(uint *)&pFVar1->field_0x0 = param_1->Value;
  FRingBufferTest::Counter::NumCopy = FRingBufferTest::Counter::NumCopy + 1;
  return (Counter *)pFVar1;
}

// AddUninitialized @ 141b38560

int __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::AddUninitialized
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this)

{
  uint uVar1;
  
  uVar1 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar1) {
    Reallocate(this,uVar1);
  }
  uVar1 = this->AfterBack;
  this->AfterBack = uVar1 + 1;
  return uVar1 - this->Front;
}

// AddUninitialized @ 141b385b0

int __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::AddUninitialized
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  uint uVar1;
  
  uVar1 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar1) {
    Reallocate(this,uVar1);
  }
  uVar1 = this->AfterBack;
  this->AfterBack = uVar1 + 1;
  return uVar1 - this->Front;
}

// AddUninitialized @ 141b38600

int __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::AddUninitialized
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this)

{
  uint uVar1;
  
  uVar1 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar1) {
    Reallocate(this,uVar1);
  }
  uVar1 = this->AfterBack;
  this->AfterBack = uVar1 + 1;
  return uVar1 - this->Front;
}

// AddUninitialized_GetRef @ 141b38650

Counter * __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::AddUninitialized_GetRef
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this)

{
  uint uVar1;
  
  uVar1 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar1) {
    Reallocate(this,uVar1);
  }
  uVar1 = this->AfterBack;
  this->AfterBack = uVar1 + 1;
  return (Counter *)((this->AllocatorInstance).Data + (ulonglong)(this->IndexMask & uVar1) * 4);
}

// Add_GetRef @ 141b386a0

Counter * __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Add_GetRef
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,Counter *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar2) {
    Reallocate(this,uVar2);
  }
  uVar3 = (ulonglong)(this->IndexMask & this->AfterBack);
  this->AfterBack = this->AfterBack + 1;
  pFVar1 = (this->AllocatorInstance).Data;
  *(uint *)(pFVar1 + uVar3 * 4) = param_1->Value;
  FRingBufferTest::Counter::NumMove = FRingBufferTest::Counter::NumMove + 1;
  return (Counter *)(pFVar1 + uVar3 * 4);
}

// Add_GetRef @ 141b38710

Counter * __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Add_GetRef
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,Counter *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar2) {
    Reallocate(this,uVar2);
  }
  uVar3 = (ulonglong)(this->IndexMask & this->AfterBack);
  this->AfterBack = this->AfterBack + 1;
  pFVar1 = (this->AllocatorInstance).Data;
  *(uint *)(pFVar1 + uVar3 * 4) = param_1->Value;
  FRingBufferTest::Counter::NumCopy = FRingBufferTest::Counter::NumCopy + 1;
  return (Counter *)(pFVar1 + uVar3 * 4);
}

// AllocatorResizeAllocation @ 141b38990

void __thiscall
TRingBuffer<int,TCoreTRingBufferTestInlineAllocator<10>_>::AllocatorResizeAllocation
          (TRingBuffer<int,TCoreTRingBufferTestInlineAllocator<10>_> *this,
          ForElementType<int> *param_1,uint param_2,uint param_3)

{
  void *_Src;
  
  UE::Containers::RingBuffer::Test::NumCallsOfResizeAllocation =
       UE::Containers::RingBuffer::Test::NumCallsOfResizeAllocation + 1;
  _Src = *(void **)&param_1->field_0x28;
  if (param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)(int)param_2 << 2);
    param_3 = 0;
    param_2 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_1->field_0x28,0,param_3,4);
    memmove(*(void **)&param_1->field_0x28,param_1,(longlong)(int)param_2 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_1->field_0x28,param_2,param_3,4);
  return;
}

// Compact @ 141b3b280

TArrayView<unsigned_int,int> * __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Compact
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          TArrayView<unsigned_int,int> *__return_storage_ptr__)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<unsigned_int,int> *pTVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = this->Front;
  uVar1 = this->IndexMask;
  uVar6 = this->AfterBack & uVar1;
  uVar7 = uVar8 & uVar1;
  if (uVar7 != 0 && (uVar7 == uVar6 && this->AfterBack != uVar8) || uVar6 < uVar7) {
    Reallocate(this,uVar1 + 1);
    uVar8 = this->Front;
    uVar7 = uVar8 & this->IndexMask;
  }
  iVar4 = this->AfterBack - uVar8;
  __return_storage_ptr__->DataPtr = (uint *)((this->AllocatorInstance).Data + (ulonglong)uVar7 * 4);
  __return_storage_ptr__->ArrayNum = iVar4;
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<unsigned_int,int> *)(*pcVar2)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// ConvertPointerToIndex @ 141b3c260

int __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ConvertPointerToIndex
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (ulonglong)(this->Front & this->IndexMask) * 4;
  if (param_1 < pFVar1) {
    if (param_1 < pFVar2) {
      return -1;
    }
    iVar3 = (int)((longlong)param_1 - (longlong)pFVar2 >> 2) +
            (int)((longlong)(pFVar2 + (longlong)(int)(this->IndexMask + 1) * 4) - (longlong)pFVar1
                 >> 2);
  }
  else {
    if (pFVar2 + (longlong)(int)(this->IndexMask + 1) * 4 <= param_1) {
      return -1;
    }
    iVar3 = (int)((longlong)param_1 - (longlong)pFVar1 >> 2);
  }
  if ((int)(this->AfterBack - this->Front) <= iVar3) {
    iVar3 = -1;
  }
  return iVar3;
}

// DestructRange @ 141b3d660

void __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::DestructRange
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->IndexMask + 1 < param_2 - param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// DestructRange @ 141b3d6b0

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::DestructRange
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->IndexMask + 1 < param_2 - param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// DestructRange @ 141b3d700

void __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,uint param_1,
          uint param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  
  uVar1 = this->IndexMask;
  uVar7 = param_2 - param_1;
  if (uVar1 + 1 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar7 != 0) {
    pFVar2 = (this->AllocatorInstance).Data;
    uVar5 = uVar1 & param_1;
    pFVar6 = pFVar2 + (ulonglong)uVar5 * 4;
    if ((uVar1 & param_2) <= uVar5) {
      DestructItems<FRingBufferTest::Counter,unsigned_int>((Counter *)pFVar6,(uVar1 + 1) - uVar5);
      pFVar6 = pFVar2;
      uVar7 = uVar1 & param_2;
    }
    DestructItems<FRingBufferTest::Counter,unsigned_int>((Counter *)pFVar6,uVar7);
  }
  return;
}

// Empty @ 141b3f920

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Empty
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->IndexMask + 1 < this->AfterBack - this->Front) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Front = 0;
  this->AfterBack = 0;
  uVar3 = NormalizeCapacity(this,param_1);
  Reallocate(this,uVar3);
  return;
}

// Empty @ 141b3f9a0

void __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Empty
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  uint uVar1;
  
  DestructRange(this,this->Front,this->AfterBack);
  this->Front = 0;
  this->AfterBack = 0;
  uVar1 = NormalizeCapacity(this,param_1);
  Reallocate(this,uVar1);
  return;
}

// IsValidIndex @ 141b467c0

bool __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::IsValidIndex
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (int)(this->AfterBack - this->Front))) {
    return true;
  }
  return false;
}

// Last @ 141b467e0

uint * __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Last
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  uint *puVar1;
  
  puVar1 = operator[](this,(this->AfterBack - this->Front) + -1);
  return puVar1;
}

// MoveAppendRange @ 141b46b90

void __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::MoveAppendRange
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,Counter *param_1,
          uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  
  if (param_2 != 0) {
    if (param_1 == (Counter *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OtherData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x16b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = this->AfterBack - this->Front;
    uVar5 = uVar3 + param_2;
    if (uVar5 <= uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewNum > OldNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x16e,L"Overflow: Num() == %d, OtherNum == %d, NewNum == %d");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = NormalizeCapacity(this,uVar5);
    if (this->IndexMask + 1 < uVar3) {
      Reallocate(this,uVar3);
    }
    uVar3 = this->IndexMask;
    pFVar6 = (this->AllocatorInstance).Data;
    uVar7 = uVar3 & this->AfterBack;
    uVar4 = this->Front & uVar3;
    uVar5 = this->AfterBack + param_2 & uVar3;
    if (uVar7 < uVar5) {
      if ((uVar7 < uVar4) && (uVar4 < uVar5)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Front & LocalIndexMask) <= MaskedMoveRangeStart || MaskedMoveRangeEnd <= (Front & LocalIndexMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x182,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar6 = pFVar6 + (ulonglong)uVar7 * 4;
      uVar5 = param_2;
    }
    else {
      if ((uVar4 < uVar5) || (uVar7 < uVar4)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaskedMoveRangeEnd <= (Front & LocalIndexMask) && (Front & LocalIndexMask) <= MaskedMoveRangeStart"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x17a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar3 = (uVar3 - uVar7) + 1;
      MoveConstructItems<FRingBufferTest::Counter,unsigned_int>
                (pFVar6 + (ulonglong)uVar7 * 4,param_1,uVar3);
      param_1 = param_1 + uVar3;
    }
    MoveConstructItems<FRingBufferTest::Counter,unsigned_int>(pFVar6,param_1,uVar5);
    this->AfterBack = this->AfterBack + param_2;
  }
  return;
}

// NormalizeCapacity @ 141b46dd0

uint __thiscall
TRingBuffer<int,TCoreTRingBufferTestInlineAllocator<10>_>::NormalizeCapacity
          (TRingBuffer<int,TCoreTRingBufferTestInlineAllocator<10>_> *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// NormalizeCapacity @ 141b46e50

uint __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// NormalizeCapacity @ 141b46ed0

uint __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// NormalizeCapacity @ 141b46f50

uint __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::NormalizeCapacity
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// NormalizeCapacity @ 141b46fd0

uint __thiscall
TRingBuffer<`FRingBufferTest::Test'::__l770::FLargeElement,TSizedDefaultAllocator<32>_>::
NormalizeCapacity(void *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// Pop @ 141b47e40

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Pop
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->AfterBack - this->Front < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PopCount <= static_cast<SizeType>(Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3ec,L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->IndexMask + 1 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->AfterBack = this->AfterBack - param_1;
  return;
}

// Pop @ 141b47ed0

void __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Pop
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->AfterBack - this->Front < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PopCount <= static_cast<SizeType>(Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3ec,L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DestructRange(this,this->AfterBack - param_1,this->AfterBack);
  this->AfterBack = this->AfterBack - param_1;
  return;
}

// PopFront @ 141b47fb0

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::PopFront
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->AfterBack - this->Front < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PopCount <= static_cast<SizeType>(Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3ec,L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->IndexMask + 1 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Front = this->Front + param_1;
  return;
}

// PopFrontNoCheck @ 141b48040

void __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::PopFrontNoCheck
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 <= this->IndexMask + 1) {
    this->Front = this->Front + param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                     ,0x37f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Front = this->Front + param_1;
  return;
}

// PopFrontNoCheck @ 141b480a0

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::PopFrontNoCheck
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 <= this->IndexMask + 1) {
    this->Front = this->Front + param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                     ,0x37f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Front = this->Front + param_1;
  return;
}

// PopFrontValue @ 141b48100

Counter __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::PopFrontValue
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  Counter *pCVar4;
  uint *in_RDX;
  
  if (this->AfterBack == this->Front) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PopCount <= static_cast<SizeType>(Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3ec,L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (Counter)uVar3;
    }
  }
  pCVar4 = operator[](this,0);
  *in_RDX = pCVar4->Value;
  FRingBufferTest::Counter::NumMove = FRingBufferTest::Counter::NumMove + 1;
  DestructRange(this,this->Front,this->Front + 1);
  this->Front = this->Front + 1;
  return (Counter)(uint)in_RDX;
}

// PopRangeCheck @ 141b481a0

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::PopRangeCheck
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->AfterBack - this->Front < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PopCount <= static_cast<SizeType>(Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3ec,L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// PopValue @ 141b481f0

Counter __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::PopValue
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  Counter *pCVar4;
  uint *in_RDX;
  
  if (this->AfterBack == this->Front) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PopCount <= static_cast<SizeType>(Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3ec,L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (Counter)uVar3;
    }
  }
  pCVar4 = operator[](this,(this->AfterBack - this->Front) + -1);
  *in_RDX = pCVar4->Value;
  FRingBufferTest::Counter::NumMove = FRingBufferTest::Counter::NumMove + 1;
  DestructRange(this,this->AfterBack - 1,this->AfterBack);
  this->AfterBack = this->AfterBack - 1;
  return (Counter)(uint)in_RDX;
}

// RangeCheck @ 141b48fb0

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::RangeCheck
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Reallocate @ 141b49500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TRingBuffer<int,TCoreTRingBufferTestInlineAllocator<10>_>::Reallocate
          (TRingBuffer<int,TCoreTRingBufferTestInlineAllocator<10>_> *this,uint param_1)

{
  undefined4 uVar1;
  TRingBuffer<int,TCoreTRingBufferTestInlineAllocator<10>_> *pTVar2;
  void *pvVar3;
  code *pcVar4;
  ForElementType<int> *pFVar5;
  bool bVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  TRingBuffer<int,TCoreTRingBufferTestInlineAllocator<10>_> *pTVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar2 = *(TRingBuffer<int,TCoreTRingBufferTestInlineAllocator<10>_> **)
            &(this->AllocatorInstance).field_0x28;
  pTVar10 = this;
  if (pTVar2 != (TRingBuffer<int,TCoreTRingBufferTestInlineAllocator<10>_> *)0x0) {
    pTVar10 = pTVar2;
  }
  uVar15 = this->AfterBack - this->Front;
  uVar14 = this->IndexMask + 1;
  uVar7 = NormalizeCapacity(this,param_1);
  if ((uVar7 != param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1 < uVar15) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1 == 0) || (uVar15 == 0)) {
    AllocatorResizeAllocation(this,&this->AllocatorInstance,0,param_1);
  }
  else {
    UE::Containers::RingBuffer::Test::NumCallsOfResizeAllocation =
         UE::Containers::RingBuffer::Test::NumCallsOfResizeAllocation + 1;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (10 < param_1) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,param_1,4);
    }
    FVar16.Data = (FScriptContainerElement *)&local_78;
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FVar16.Data = local_50.Data;
    }
    uVar12 = this->IndexMask & this->Front;
    uVar7 = this->IndexMask & this->AfterBack;
    if (uVar12 < uVar7) {
      puVar8 = (undefined4 *)(&(pTVar10->AllocatorInstance).field_0x0 + (ulonglong)uVar12 * 4);
      uVar13 = (ulonglong)(uVar7 - uVar12);
      uVar9 = 0;
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *(undefined4 *)(FVar16.Data + uVar9 * 4) = uVar1;
        uVar13 = uVar13 - 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while (uVar13 != 0);
      if ((this->IndexMask + 1 < uVar7 - uVar12) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar6)) goto code_r0x000141b49716;
    }
    else {
      uVar9 = 0;
      if (uVar12 < uVar14) {
        puVar8 = (undefined4 *)(&(pTVar10->AllocatorInstance).field_0x0 + (ulonglong)uVar12 * 4);
        uVar11 = (ulonglong)(uVar14 - uVar12);
        uVar13 = uVar9;
        do {
          uVar1 = *puVar8;
          puVar8 = puVar8 + 1;
          uVar9 = (ulonglong)((int)uVar13 + 1);
          *(undefined4 *)(FVar16.Data + uVar13 * 4) = uVar1;
          uVar11 = uVar11 - 1;
          uVar13 = uVar9;
        } while (uVar11 != 0);
      }
      if ((this->IndexMask + 1 < uVar14 - uVar12) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar7 != 0) {
        uVar13 = (ulonglong)uVar7;
        do {
          pFVar5 = &pTVar10->AllocatorInstance;
          pTVar10 = (TRingBuffer<int,TCoreTRingBufferTestInlineAllocator<10>_> *)
                    &(pTVar10->AllocatorInstance).field_0x4;
          *(undefined4 *)(FVar16.Data + uVar9 * 4) = *(undefined4 *)pFVar5;
          uVar13 = uVar13 - 1;
          uVar9 = (ulonglong)((int)uVar9 + 1);
        } while (uVar13 != 0);
      }
      if ((this->IndexMask + 1 < uVar7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar6)) {
code_r0x000141b49716:
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_50.Data == (FScriptContainerElement *)0x0) {
      *(undefined8 *)&this->AllocatorInstance = local_78;
      *(undefined8 *)&(this->AllocatorInstance).field_0x8 = uStack_70;
      *(undefined8 *)&(this->AllocatorInstance).field_0x10 = local_68;
      *(undefined8 *)&(this->AllocatorInstance).field_0x18 = uStack_60;
      *(undefined8 *)&(this->AllocatorInstance).field_0x20 = local_58;
    }
    pvVar3 = *(void **)&(this->AllocatorInstance).field_0x28;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    *(FScriptContainerElement **)&(this->AllocatorInstance).field_0x28 = local_50.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = uVar15;
  return;
}

// Reallocate @ 141b497b0

void __thiscall
TRingBuffer<int,TSizedDefaultAllocator<32>_>::Reallocate
          (TRingBuffer<int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ForAnyElementType local_res8;
  uint local_res10;
  
  pFVar8 = (this->AllocatorInstance).Data;
  local_res10 = this->AfterBack - this->Front;
  uVar12 = this->IndexMask + 1;
  uVar5 = NormalizeCapacity(this,param_1);
  if ((uVar5 != param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 < local_res10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 == 0) || (local_res10 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,4,4);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_res8,0,param_1,4,4);
    FVar3.Data = local_res8.Data;
    uVar10 = this->IndexMask & this->Front;
    uVar5 = this->IndexMask & this->AfterBack;
    if (uVar10 < uVar5) {
      pFVar8 = pFVar8 + (ulonglong)uVar10 * 4;
      uVar11 = (ulonglong)(uVar5 - uVar10);
      uVar7 = 0;
      do {
        uVar1 = *(undefined4 *)pFVar8;
        pFVar8 = pFVar8 + 4;
        *(undefined4 *)(local_res8.Data + uVar7 * 4) = uVar1;
        uVar11 = uVar11 - 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
      } while (uVar11 != 0);
      if ((this->IndexMask + 1 < uVar5 - uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) goto code_r0x000141b499b6;
    }
    else {
      uVar7 = 0;
      if (uVar10 < uVar12) {
        pFVar6 = pFVar8 + (ulonglong)uVar10 * 4;
        uVar9 = (ulonglong)(uVar12 - uVar10);
        uVar11 = uVar7;
        do {
          uVar1 = *(undefined4 *)pFVar6;
          pFVar6 = pFVar6 + 4;
          uVar7 = (ulonglong)((int)uVar11 + 1);
          *(undefined4 *)(local_res8.Data + uVar11 * 4) = uVar1;
          uVar9 = uVar9 - 1;
          uVar11 = uVar7;
        } while (uVar9 != 0);
      }
      if ((this->IndexMask + 1 < uVar12 - uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        uVar11 = (ulonglong)uVar5;
        do {
          uVar1 = *(undefined4 *)pFVar8;
          pFVar8 = pFVar8 + 4;
          *(undefined4 *)(FVar3.Data + uVar7 * 4) = uVar1;
          uVar11 = uVar11 - 1;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar11 != 0);
      }
      if ((this->IndexMask + 1 < uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
code_r0x000141b499b6:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar8 = (this->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->AllocatorInstance).Data = local_res8.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = local_res10;
  return;
}

// Reallocate @ 141b49a30

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ForAnyElementType local_res8;
  uint local_res10;
  
  pFVar8 = (this->AllocatorInstance).Data;
  local_res10 = this->AfterBack - this->Front;
  uVar12 = this->IndexMask + 1;
  uVar5 = NormalizeCapacity(this,param_1);
  if ((uVar5 != param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 < local_res10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 == 0) || (local_res10 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,4,4);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_res8,0,param_1,4,4);
    FVar3.Data = local_res8.Data;
    uVar10 = this->IndexMask & this->Front;
    uVar5 = this->IndexMask & this->AfterBack;
    if (uVar10 < uVar5) {
      pFVar8 = pFVar8 + (ulonglong)uVar10 * 4;
      uVar11 = (ulonglong)(uVar5 - uVar10);
      uVar7 = 0;
      do {
        uVar1 = *(undefined4 *)pFVar8;
        pFVar8 = pFVar8 + 4;
        *(undefined4 *)(local_res8.Data + uVar7 * 4) = uVar1;
        uVar11 = uVar11 - 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
      } while (uVar11 != 0);
      if ((this->IndexMask + 1 < uVar5 - uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) goto code_r0x000141b49c36;
    }
    else {
      uVar7 = 0;
      if (uVar10 < uVar12) {
        pFVar6 = pFVar8 + (ulonglong)uVar10 * 4;
        uVar9 = (ulonglong)(uVar12 - uVar10);
        uVar11 = uVar7;
        do {
          uVar1 = *(undefined4 *)pFVar6;
          pFVar6 = pFVar6 + 4;
          uVar7 = (ulonglong)((int)uVar11 + 1);
          *(undefined4 *)(local_res8.Data + uVar11 * 4) = uVar1;
          uVar9 = uVar9 - 1;
          uVar11 = uVar7;
        } while (uVar9 != 0);
      }
      if ((this->IndexMask + 1 < uVar12 - uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        uVar11 = (ulonglong)uVar5;
        do {
          uVar1 = *(undefined4 *)pFVar8;
          pFVar8 = pFVar8 + 4;
          *(undefined4 *)(FVar3.Data + uVar7 * 4) = uVar1;
          uVar11 = uVar11 - 1;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar11 != 0);
      }
      if ((this->IndexMask + 1 < uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
code_r0x000141b49c36:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar8 = (this->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->AllocatorInstance).Data = local_res8.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = local_res10;
  return;
}

// Reallocate @ 141b49cb0

void __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ForAnyElementType local_res8;
  uint local_res10;
  
  uVar7 = this->AfterBack - this->Front;
  pFVar8 = (this->AllocatorInstance).Data;
  uVar12 = this->IndexMask + 1;
  local_res10 = uVar7;
  uVar5 = NormalizeCapacity(this,param_1);
  if (uVar5 != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NormalizeCapacity(NewCapacity) == NewCapacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x327,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewCapacity >= SrcNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x328,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1 == 0) || (uVar7 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,4,4);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_res8,0,param_1,4,4);
    FVar3.Data = local_res8.Data;
    uVar5 = this->IndexMask & this->Front;
    uVar11 = this->IndexMask & this->AfterBack;
    if (uVar5 < uVar11) {
      pFVar8 = pFVar8 + (ulonglong)uVar5 * 4;
      uVar10 = (ulonglong)(uVar11 - uVar5);
      uVar9 = 0;
      do {
        uVar1 = *(undefined4 *)pFVar8;
        pFVar8 = pFVar8 + 4;
        *(undefined4 *)(local_res8.Data + uVar9 * 4) = uVar1;
        FRingBufferTest::Counter::NumMove = FRingBufferTest::Counter::NumMove + 1;
        uVar10 = uVar10 - 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while (uVar10 != 0);
    }
    else {
      uVar7 = 0;
      if (uVar5 < uVar12) {
        pFVar6 = pFVar8 + (ulonglong)uVar5 * 4;
        uVar9 = (ulonglong)(uVar12 - uVar5);
        do {
          uVar1 = *(undefined4 *)pFVar6;
          pFVar6 = pFVar6 + 4;
          uVar10 = (ulonglong)uVar7;
          uVar7 = uVar7 + 1;
          *(undefined4 *)(local_res8.Data + uVar10 * 4) = uVar1;
          FRingBufferTest::Counter::NumMove = FRingBufferTest::Counter::NumMove + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      DestructRange(this,uVar5,uVar12);
      if (uVar11 != 0) {
        uVar9 = (ulonglong)uVar11;
        do {
          uVar1 = *(undefined4 *)pFVar8;
          pFVar8 = pFVar8 + 4;
          uVar10 = (ulonglong)uVar7;
          uVar7 = uVar7 + 1;
          *(undefined4 *)(FVar3.Data + uVar10 * 4) = uVar1;
          FRingBufferTest::Counter::NumMove = FRingBufferTest::Counter::NumMove + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar5 = 0;
      uVar7 = local_res10;
    }
    DestructRange(this,uVar5,uVar11);
    pFVar8 = (this->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->AllocatorInstance).Data = local_res8.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = uVar7;
  return;
}

// Reallocate @ 141b49eb0

void __thiscall
TRingBuffer<`FRingBufferTest::Test'::__l770::FLargeElement,TSizedDefaultAllocator<32>_>::Reallocate
          (void *this,uint param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  void *_Src_00;
  ForAnyElementType local_res20;
  
  _Src_00 = *(void **)this;
  uVar9 = *(int *)((longlong)this + 8) + 1;
  uVar5 = *(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0xc);
  uVar4 = NormalizeCapacity(this,param_1);
  if ((uVar4 != param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 < uVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 == 0) || (uVar5 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this,0,param_1,0x4004,4);
  }
  else {
    local_res20.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_res20,0,param_1,0x4004,4);
    FVar2.Data = local_res20.Data;
    uVar8 = *(uint *)((longlong)this + 8) & *(uint *)((longlong)this + 0xc);
    uVar11 = *(uint *)((longlong)this + 0x10) & *(uint *)((longlong)this + 8);
    uVar4 = uVar8;
    if (uVar8 < uVar11) {
      do {
        memcpy(FVar2.Data + (ulonglong)(uVar4 - uVar8) * 0x4004,
               (void *)((ulonglong)uVar4 * 0x4004 + (longlong)_Src_00),0x4004);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar11);
      if ((*(int *)((longlong)this + 8) + 1U < uVar11 - uVar8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar3)) goto code_r0x000141b4a12e;
    }
    else {
      uVar7 = 0;
      if (uVar8 < uVar9) {
        _Src = (void *)((ulonglong)uVar8 * 0x4004 + (longlong)_Src_00);
        uVar10 = (ulonglong)(uVar9 - uVar8);
        do {
          lVar6 = uVar7 * 0x4004;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          memcpy(FVar2.Data + lVar6,_Src,0x4004);
          _Src = (void *)((longlong)_Src + 0x4004);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if ((*(int *)((longlong)this + 8) + 1U < uVar9 - uVar8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (uVar11 != 0) {
        uVar10 = (ulonglong)uVar11;
        do {
          lVar6 = uVar7 * 0x4004;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          memcpy(FVar2.Data + lVar6,_Src_00,0x4004);
          _Src_00 = (void *)((longlong)_Src_00 + 0x4004);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if ((*(int *)((longlong)this + 8) + 1U < uVar11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar3)) {
code_r0x000141b4a12e:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    *(FScriptContainerElement **)this = local_res20.Data;
  }
  *(uint *)((longlong)this + 8) = param_1 - 1;
  *(uint *)((longlong)this + 0x10) = uVar5;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  return;
}

// Remove @ 141b4ab90

uint __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Remove
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,Counter *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = this->Front;
  uVar1 = this->AfterBack;
  if (uVar1 == uVar3) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  do {
    if (*(uint *)(pFVar2 + (ulonglong)(this->IndexMask & uVar3) * 4) == param_1->Value) {
      if (uVar3 != uVar1) {
        uVar4 = uVar3 + 1;
        if (uVar4 != uVar1) {
          do {
            if (*(uint *)(pFVar2 + (ulonglong)(this->IndexMask & uVar4) * 4) != param_1->Value) {
              FRingBufferTest::Counter::NumDestruct = FRingBufferTest::Counter::NumDestruct + 1;
              *(undefined4 *)(pFVar2 + (ulonglong)(this->IndexMask & uVar3) * 4) =
                   *(undefined4 *)(pFVar2 + (ulonglong)(this->IndexMask & uVar4) * 4);
              FRingBufferTest::Counter::NumMove = FRingBufferTest::Counter::NumMove + 1;
              uVar3 = uVar3 + 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 != this->AfterBack);
        }
        this->AfterBack = uVar3;
        if (uVar3 != uVar4) {
          FRingBufferTest::Counter::NumDestruct =
               FRingBufferTest::Counter::NumDestruct + (uVar4 - uVar3);
        }
        return uVar4 - uVar3;
      }
      return 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != uVar1);
  return 0;
}

// RemoveAt @ 141b4afd0

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::RemoveAt
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = this->IndexMask;
  uVar5 = this->Front & uVar3;
  uVar4 = this->Front + param_1 & uVar3;
  uVar6 = uVar3 & this->AfterBack;
  if (uVar4 < uVar5) {
    uVar4 = uVar4 + uVar3 + 1;
  }
  if (uVar6 < uVar4) {
    uVar6 = uVar6 + uVar3 + 1;
  }
  if (uVar4 - uVar5 <= uVar6 - uVar4) {
    ShiftIndexToFront(this,param_1);
    PopFront(this,1);
    return;
  }
  ShiftIndexToBack(this,param_1);
  Pop(this,1);
  return;
}

// Reset @ 141b4c900

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reset
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->AfterBack - this->Front <= this->IndexMask + 1) {
    this->Front = 0;
    this->AfterBack = 0;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                     ,0x37f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Front = 0;
  this->AfterBack = 0;
  return;
}

// ShiftIndexToBack @ 141b4e4e0

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftIndexToBack
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = this->AfterBack - this->Front;
  uVar6 = 0;
  if (param_1 < iVar5) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1 != iVar5 + -1) {
    uVar6 = this->Front + param_1;
    pFVar2 = (this->AllocatorInstance).Data;
    uVar7 = this->AfterBack - 1;
    uVar1 = *(undefined4 *)(pFVar2 + (ulonglong)(uVar6 & this->IndexMask) * 4);
    while (uVar6 != uVar7) {
      *(undefined4 *)(pFVar2 + (ulonglong)(this->IndexMask & uVar6) * 4) =
           *(undefined4 *)(pFVar2 + (ulonglong)(this->IndexMask & uVar6 + 1) * 4);
      uVar6 = uVar6 + 1;
    }
    *(undefined4 *)(pFVar2 + (ulonglong)(this->IndexMask & uVar7) * 4) = uVar1;
  }
  return;
}

// ShiftIndexToBack @ 141b4e5c0

void __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftIndexToBack
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = this->AfterBack - this->Front;
  uVar3 = 0;
  if (param_1 < iVar4) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != iVar4 + -1) {
    ShiftLastToFirst(this,this->AfterBack - 1,this->Front + param_1,1);
  }
  return;
}

// ShiftIndexToFront @ 141b4e660

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftIndexToFront
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1 != 0) {
    uVar6 = this->Front;
    pFVar2 = (this->AllocatorInstance).Data;
    uVar1 = *(undefined4 *)(pFVar2 + (ulonglong)(uVar6 + param_1 & this->IndexMask) * 4);
    uVar4 = uVar6 + param_1;
    while (uVar4 != uVar6) {
      *(undefined4 *)(pFVar2 + (ulonglong)(this->IndexMask & uVar4) * 4) =
           *(undefined4 *)(pFVar2 + (ulonglong)(this->IndexMask & uVar4 - 1) * 4);
      uVar4 = uVar4 - 1;
    }
    *(undefined4 *)(pFVar2 + (ulonglong)(this->IndexMask & uVar6) * 4) = uVar1;
  }
  return;
}

// ShiftIndexToFront @ 141b4e720

void __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftIndexToFront
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != 0) {
    ShiftLastToFirst(this,this->Front,this->Front + param_1,-1);
  }
  return;
}

// ShiftLastToFirst @ 141b4e7b0

void __thiscall
TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftLastToFirst
          (TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this,uint param_1,
          uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  
  iVar5 = 0;
  if (param_3 == 1) {
    iVar5 = param_2 - param_1;
  }
  iVar7 = 0;
  if (param_3 != -1) {
    iVar7 = param_1 - param_2;
  }
  if ((this->IndexMask + 1 < (uint)(iVar5 + iVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(RangeLast - RangeFirst) * (RangeDirection == 1) + (RangeFirst - RangeLast) * (RangeDirection != -1) <= static_cast<StorageModuloType>(Max())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x3b4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->AllocatorInstance).Data;
  uVar1 = *(uint *)(pFVar3 + (ulonglong)(param_2 & this->IndexMask) * 4);
  while (FRingBufferTest::Counter::NumMove = FRingBufferTest::Counter::NumMove + 1,
        param_2 != param_1) {
    uVar2 = this->IndexMask;
    DestructItems<FRingBufferTest::Counter,int>
              ((Counter *)(pFVar3 + (ulonglong)(uVar2 & param_2) * 4),1);
    *(uint *)&pFVar3[(ulonglong)(uVar2 & param_2) * 4].field_0x0 =
         *(uint *)(pFVar3 + (ulonglong)(param_2 + param_3 & uVar2) * 4);
    param_2 = param_2 + param_3;
  }
  uVar2 = this->IndexMask;
  DestructItems<FRingBufferTest::Counter,int>
            ((Counter *)(pFVar3 + (ulonglong)(param_1 & uVar2) * 4),1);
  *(uint *)&pFVar3[(ulonglong)(param_1 & uVar2) * 4].field_0x0 = uVar1;
  FRingBufferTest::Counter::NumMove = FRingBufferTest::Counter::NumMove + 1;
  FRingBufferTest::Counter::NumDestruct = FRingBufferTest::Counter::NumDestruct + 1;
  return;
}

// Trim @ 141bb9cd0

void __thiscall
TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Trim
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  uint uVar1;
  
  uVar1 = NormalizeCapacity(this,this->AfterBack - this->Front);
  Reallocate(this,uVar1);
  return;
}

