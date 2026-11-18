// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// EmplaceLast<int> @ 141ae5310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTestToken<int> * __thiscall
TDeque<TTestToken<int>,TFixedAllocator<4>_>::EmplaceLast<int>
          (TDeque<TTestToken<int>,TFixedAllocator<4>_> *this,int *param_1)

{
  TTypeCompatibleBytes<TTestToken<int>_> *pTVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  TTestToken<int> *pTVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (this->Count == this->Capacity) {
    if (4 < this->Count + 1U) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TTestToken<int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    if (this->Count != 0) {
      uVar2 = this->Tail;
      if (this->Head < (int)uVar2) {
        ShiftElementsLeft(this,this->Count);
      }
      else {
        if (((int)uVar2 < 0) || (4 < uVar2)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewMax >= 0 && NewMax <= NumInlineElements",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                             ,0x524,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TTestToken<int> *)(*pcVar3)();
            return pTVar5;
          }
        }
        memcpy(local_28,this,(longlong)this->Tail << 2);
        iVar6 = this->Capacity - this->Head;
        ShiftElementsLeft(this,iVar6);
        memcpy((this->Storage).InlineData + iVar6,local_28,(longlong)this->Tail << 2);
      }
    }
    this->Tail = this->Count;
    this->Capacity = 4;
    this->Head = 0;
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  pTVar1 = (this->Storage).InlineData + this->Tail;
  *(int *)pTVar1->Pad = *param_1;
  iVar6 = this->Tail + 1;
  if (this->Capacity <= iVar6) {
    iVar6 = iVar6 - this->Capacity;
  }
  this->Count = this->Count + 1;
  this->Tail = iVar6;
  return (TTestToken<int> *)pTVar1;
}

// TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> @ 141b12380

TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> * __thiscall
TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::
TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>
          (TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<TTestToken<int>_> *param_1)

{
  int iVar1;
  TTestToken<int> *pTVar2;
  TTestToken<int> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  ulong64 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ForAnyElementType local_res8;
  
  pTVar2 = param_1->_First;
  iVar7 = 0;
  pTVar3 = param_1->_Last;
  (this->Storage).Data = (FScriptContainerElement *)0x0;
  this->Capacity = 0;
  this->Count = 0;
  this->Head = 0;
  this->Tail = 0;
  iVar8 = (int)((longlong)pTVar3 - (longlong)pTVar2 >> 2);
  if (iVar8 != 0) {
    if (0 < iVar8) {
      uVar6 = FMemory::QuantizeSize((longlong)iVar8 << 2,0);
      iVar9 = this->Count;
      iVar10 = (int)(uVar6 >> 2);
      if (iVar10 < iVar8) {
        iVar10 = 0x7fffffff;
      }
      if (iVar9 != 0) {
        if (this->Head < this->Tail) {
          if ((this->Head != 0) && (0 < iVar9)) {
            do {
              iVar1 = this->Head;
              pFVar4 = (this->Storage).Data;
              iVar5 = iVar9 - iVar7;
              if (iVar1 < iVar9 - iVar7) {
                iVar5 = iVar1;
              }
              memmove(pFVar4 + (longlong)iVar7 * 4,pFVar4 + ((longlong)iVar1 + (longlong)iVar7) * 4,
                      (longlong)iVar5 << 2);
              iVar7 = iVar7 + iVar5;
            } while (iVar7 < iVar9);
          }
        }
        else {
          local_res8.Data = (FScriptContainerElement *)0x0;
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_res8,0,this->Tail,4);
          memmove(local_res8.Data,(this->Storage).Data,(longlong)this->Tail << 2);
          iVar9 = this->Capacity - this->Head;
          if ((this->Head != 0) && (0 < iVar9)) {
            do {
              iVar1 = this->Head;
              pFVar4 = (this->Storage).Data;
              iVar5 = iVar9 - iVar7;
              if (iVar1 < iVar9 - iVar7) {
                iVar5 = iVar1;
              }
              memmove(pFVar4 + (longlong)iVar7 * 4,pFVar4 + ((longlong)iVar1 + (longlong)iVar7) * 4,
                      (longlong)iVar5 << 2);
              iVar7 = iVar7 + iVar5;
            } while (iVar7 < iVar9);
          }
          memmove((this->Storage).Data + (longlong)iVar9 * 4,local_res8.Data,
                  (longlong)this->Tail << 2);
          if (local_res8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_res8.Data);
          }
        }
      }
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&this->Storage,this->Count,iVar10,4);
      this->Capacity = iVar10;
      this->Tail = this->Count;
      this->Head = 0;
    }
    ConstructItems<TTestToken<int>,TTestToken<int>,int>((this->Storage).Data,pTVar2,iVar8);
    this->Count = iVar8;
    this->Tail = iVar8;
  }
  return this;
}

// operator= @ 141b2b300

TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> * __thiscall
TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::operator=
          (TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<TTestToken<int>_> *param_1)

{
  int iVar1;
  TTestToken<int> *pTVar2;
  TTestToken<int> *pTVar3;
  int iVar4;
  ulong64 uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ForAnyElementType local_res8;
  
  iVar7 = this->Count;
  if (iVar7 != 0) {
    pFVar6 = (this->Storage).Data;
    if (this->Head < this->Tail) {
      pFVar6 = pFVar6 + (longlong)this->Head * 4;
    }
    else {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)pFVar6,this->Tail);
      iVar7 = this->Capacity - this->Head;
      pFVar6 = (this->Storage).Data + (longlong)this->Head * 4;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)pFVar6,iVar7);
  }
  pTVar2 = param_1->_First;
  iVar7 = 0;
  pTVar3 = param_1->_Last;
  this->Count = 0;
  this->Head = 0;
  this->Tail = 0;
  iVar8 = (int)((longlong)pTVar3 - (longlong)pTVar2 >> 2);
  if (iVar8 == 0) {
    this->Capacity = 0;
    return this;
  }
  if (this->Capacity < iVar8) {
    uVar5 = FMemory::QuantizeSize((longlong)iVar8 << 2,0);
    iVar9 = this->Count;
    iVar10 = (int)(uVar5 >> 2);
    if (iVar10 < iVar8) {
      iVar10 = 0x7fffffff;
    }
    if (iVar9 != 0) {
      if (this->Head < this->Tail) {
        if ((this->Head != 0) && (0 < iVar9)) {
          do {
            iVar1 = this->Head;
            pFVar6 = (this->Storage).Data;
            iVar4 = iVar9 - iVar7;
            if (iVar1 < iVar9 - iVar7) {
              iVar4 = iVar1;
            }
            memmove(pFVar6 + (longlong)iVar7 * 4,pFVar6 + ((longlong)iVar1 + (longlong)iVar7) * 4,
                    (longlong)iVar4 << 2);
            iVar7 = iVar7 + iVar4;
          } while (iVar7 < iVar9);
        }
      }
      else {
        local_res8.Data = (FScriptContainerElement *)0x0;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_res8,0,this->Tail,4);
        memmove(local_res8.Data,(this->Storage).Data,(longlong)this->Tail << 2);
        iVar9 = this->Capacity - this->Head;
        if ((this->Head != 0) && (0 < iVar9)) {
          do {
            iVar1 = this->Head;
            pFVar6 = (this->Storage).Data;
            iVar4 = iVar9 - iVar7;
            if (iVar1 < iVar9 - iVar7) {
              iVar4 = iVar1;
            }
            memmove(pFVar6 + (longlong)iVar7 * 4,pFVar6 + ((longlong)iVar1 + (longlong)iVar7) * 4,
                    (longlong)iVar4 << 2);
            iVar7 = iVar7 + iVar4;
          } while (iVar7 < iVar9);
        }
        memmove((this->Storage).Data + (longlong)iVar9 * 4,local_res8.Data,(longlong)this->Tail << 2
               );
        if (local_res8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_res8.Data);
        }
      }
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->Storage,this->Count,iVar10,4);
    this->Capacity = iVar10;
    this->Tail = this->Count;
    this->Head = 0;
  }
  ConstructItems<TTestToken<int>,TTestToken<int>,int>((this->Storage).Data,pTVar2,iVar8);
  this->Count = iVar8;
  this->Tail = iVar8;
  return this;
}

// CopyUnchecked @ 141b3c2e0

void __thiscall
TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::CopyUnchecked
          (TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> *this,
          TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = param_1->Count;
  if (iVar5 != 0) {
    if (this->Capacity < iVar5) {
      uVar2 = FMemory::QuantizeSize((longlong)iVar5 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      if (iVar1 < iVar5) {
        iVar1 = 0x7fffffff;
      }
      Grow(this,iVar1);
    }
    iVar5 = param_1->Head;
    pFVar4 = (param_1->Storage).Data + (longlong)iVar5 * 4;
    if (iVar5 < param_1->Tail) {
      pFVar3 = (this->Storage).Data;
      lVar6 = 0xc;
    }
    else {
      iVar5 = param_1->Capacity - iVar5;
      ConstructItems<TTestToken<int>,TTestToken<int>,int>
                ((this->Storage).Data,(TTestToken<int> *)pFVar4,iVar5);
      lVar6 = 0x14;
      pFVar4 = (param_1->Storage).Data;
      pFVar3 = (this->Storage).Data + (longlong)iVar5 * 4;
    }
    ConstructItems<TTestToken<int>,TTestToken<int>,int>
              (pFVar3,(TTestToken<int> *)pFVar4,*(int *)((longlong)&(param_1->Storage).Data + lVar6)
              );
    iVar5 = param_1->Count;
    this->Count = iVar5;
    if (this->Capacity <= iVar5) {
      iVar5 = iVar5 - this->Capacity;
    }
    this->Head = 0;
    this->Tail = iVar5;
    return;
  }
  this->Capacity = 0;
  return;
}

// Grow @ 141b44150

void __thiscall
TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow
          (TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  ForAnyElementType local_res8;
  
  if (this->Count != 0) {
    if (this->Head < this->Tail) {
      ShiftElementsLeft(this,this->Count);
    }
    else {
      local_res8.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res8,0,this->Tail,4);
      memmove(local_res8.Data,(this->Storage).Data,(longlong)this->Tail << 2);
      iVar1 = this->Capacity - this->Head;
      ShiftElementsLeft(this,iVar1);
      memmove((this->Storage).Data + (longlong)iVar1 * 4,local_res8.Data,(longlong)this->Tail << 2);
      if (local_res8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res8.Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            (&this->Storage,this->Count,param_1,4);
  this->Capacity = param_1;
  this->Tail = this->Count;
  this->Head = 0;
  return;
}

// Grow @ 141b44230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Grow
          (TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1)

{
  uint uVar1;
  ForElementType<TTestToken<int>_> FVar2;
  ForAnyElementType FVar3;
  ForElementType<TTestToken<int>_> FVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  FScriptContainerElement local_28 [16];
  ForAnyElementType local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (this->Count != 0) {
    uVar1 = this->Tail;
    if (this->Head < (int)uVar1) {
      ShiftElementsLeft(this,this->Count);
    }
    else {
      local_18.Data = (FScriptContainerElement *)0x0;
      if (4 < uVar1) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_18,0,uVar1,4);
      }
      FVar2 = (this->Storage).SecondaryData;
      FVar4 = (ForElementType<TTestToken<int>_>)this;
      if (FVar2 != (ForElementType<TTestToken<int>_>)0x0) {
        FVar4 = FVar2;
      }
      FVar3.Data = local_28;
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FVar3.Data = local_18.Data;
      }
      memmove(FVar3.Data,(void *)FVar4,(longlong)this->Tail << 2);
      iVar5 = this->Capacity - this->Head;
      ShiftElementsLeft(this,iVar5);
      FVar3.Data = local_28;
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FVar3.Data = local_18.Data;
      }
      FVar2 = (this->Storage).SecondaryData;
      FVar4 = (ForElementType<TTestToken<int>_>)this;
      if (FVar2 != (ForElementType<TTestToken<int>_>)0x0) {
        FVar4 = FVar2;
      }
      memmove((void *)((longlong)FVar4 + (longlong)iVar5 * 4),FVar3.Data,(longlong)this->Tail << 2);
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data);
      }
    }
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTestToken<int>_>::
  ResizeAllocation(&this->Storage,this->Count,param_1,4);
  this->Tail = this->Count;
  this->Capacity = param_1;
  this->Head = 0;
  return;
}

// GrowIfRequired @ 141b44560

void __thiscall
TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::GrowIfRequired
          (TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (this->Count == this->Capacity) {
    iVar1 = this->Count + 1;
    uVar5 = (ulonglong)iVar1;
    if (this->Capacity == 0) {
      uVar4 = 4;
      if (4 < uVar5) {
        uVar4 = uVar5;
      }
    }
    else {
      uVar4 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar3 = FMemory::QuantizeSize(uVar4 * 4,0);
    iVar2 = (int)(uVar3 >> 2);
    if (iVar2 < iVar1) {
      iVar2 = 0x7fffffff;
    }
    Grow(this,iVar2);
  }
  return;
}

// PopFirst @ 141b47f40

void __thiscall
TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::PopFirst
          (TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->Count < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Count)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                       ,0x248,L"Parameter index %d exceeds container size %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
  iVar3 = this->Head + 1;
  if (this->Capacity <= iVar3) {
    iVar3 = iVar3 - this->Capacity;
  }
  this->Count = this->Count + -1;
  this->Head = iVar3;
  return;
}

// Reserve @ 141b4c500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Reserve
          (TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1)

{
  uint uVar1;
  ForElementType<TTestToken<int>_> FVar2;
  ulong64 uVar3;
  ForAnyElementType FVar4;
  ForElementType<TTestToken<int>_> FVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  FScriptContainerElement local_38 [32];
  ForAnyElementType local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (this->Capacity < param_1) {
    if ((uint)param_1 < 9) {
      iVar7 = 8;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)param_1 << 2,0);
      iVar7 = (int)(uVar3 >> 2);
      if (iVar7 < param_1) {
        iVar7 = 0x7fffffff;
      }
    }
    if (this->Count != 0) {
      uVar1 = this->Tail;
      if (this->Head < (int)uVar1) {
        ShiftElementsLeft(this,this->Count);
      }
      else {
        local_18.Data = (FScriptContainerElement *)0x0;
        if (8 < uVar1) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_18,0,uVar1,4);
        }
        FVar2 = (this->Storage).SecondaryData;
        FVar5 = (ForElementType<TTestToken<int>_>)this;
        if (FVar2 != (ForElementType<TTestToken<int>_>)0x0) {
          FVar5 = FVar2;
        }
        FVar4.Data = local_38;
        if (local_18.Data != (FScriptContainerElement *)0x0) {
          FVar4.Data = local_18.Data;
        }
        memmove(FVar4.Data,(void *)FVar5,(longlong)this->Tail << 2);
        iVar6 = this->Capacity - this->Head;
        ShiftElementsLeft(this,iVar6);
        FVar4.Data = local_38;
        if (local_18.Data != (FScriptContainerElement *)0x0) {
          FVar4.Data = local_18.Data;
        }
        FVar2 = (this->Storage).SecondaryData;
        FVar5 = (ForElementType<TTestToken<int>_>)this;
        if (FVar2 != (ForElementType<TTestToken<int>_>)0x0) {
          FVar5 = FVar2;
        }
        memmove((void *)((longlong)FVar5 + (longlong)iVar6 * 4),FVar4.Data,(longlong)this->Tail << 2
               );
        if (local_18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data);
        }
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTestToken<int>_>::
    ResizeAllocation(&this->Storage,this->Count,iVar7,4);
    this->Capacity = iVar7;
    this->Tail = this->Count;
    this->Head = 0;
  }
  return;
}

// ShiftElementsLeft @ 141b4e2c0

void __thiscall
TDeque<TTestToken<int>,TFixedAllocator<4>_>::ShiftElementsLeft
          (TDeque<TTestToken<int>,TFixedAllocator<4>_> *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((this->Head != 0) && (iVar3 = 0, 0 < param_1)) {
    do {
      iVar1 = this->Head;
      iVar2 = param_1 - iVar3;
      if (iVar1 < param_1 - iVar3) {
        iVar2 = iVar1;
      }
      memmove((this->Storage).InlineData + iVar3,
              (this->Storage).InlineData + (longlong)iVar1 + (longlong)iVar3,(longlong)iVar2 << 2);
      iVar3 = iVar3 + iVar2;
    } while (iVar3 < param_1);
  }
  return;
}

// ShiftElementsLeft @ 141b4e340

void __thiscall
TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::ShiftElementsLeft
          (TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  
  if ((this->Head != 0) && (iVar4 = 0, 0 < param_1)) {
    do {
      iVar1 = this->Head;
      pFVar2 = (this->Storage).Data;
      iVar3 = param_1 - iVar4;
      if (iVar1 < param_1 - iVar4) {
        iVar3 = iVar1;
      }
      memmove(pFVar2 + (longlong)iVar4 * 4,pFVar2 + ((longlong)iVar1 + (longlong)iVar4) * 4,
              (longlong)iVar3 << 2);
      iVar4 = iVar4 + iVar3;
    } while (iVar4 < param_1);
  }
  return;
}

// ShiftElementsLeft @ 141b4e3c0

void __thiscall
TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::ShiftElementsLeft
          (TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1)

{
  int iVar1;
  ForElementType<TTestToken<int>_> FVar2;
  int iVar3;
  ForElementType<TTestToken<int>_> FVar4;
  int iVar5;
  
  if ((this->Head != 0) && (iVar5 = 0, 0 < param_1)) {
    do {
      iVar1 = this->Head;
      FVar2 = (this->Storage).SecondaryData;
      iVar3 = param_1 - iVar5;
      if (iVar1 < param_1 - iVar5) {
        iVar3 = iVar1;
      }
      FVar4 = (ForElementType<TTestToken<int>_>)this;
      if (FVar2 != (ForElementType<TTestToken<int>_>)0x0) {
        FVar4 = FVar2;
      }
      memmove((void *)((longlong)FVar4 + (longlong)iVar5 * 4),
              (void *)((longlong)FVar4 + ((longlong)iVar1 + (longlong)iVar5) * 4),
              (longlong)iVar3 << 2);
      iVar5 = iVar5 + iVar3;
    } while (iVar5 < param_1);
  }
  return;
}

// ShiftElementsLeft @ 141b4e450

void __thiscall
TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::ShiftElementsLeft
          (TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1)

{
  int iVar1;
  ForElementType<TTestToken<int>_> FVar2;
  int iVar3;
  ForElementType<TTestToken<int>_> FVar4;
  int iVar5;
  
  if ((this->Head != 0) && (iVar5 = 0, 0 < param_1)) {
    do {
      iVar1 = this->Head;
      FVar2 = (this->Storage).SecondaryData;
      iVar3 = param_1 - iVar5;
      if (iVar1 < param_1 - iVar5) {
        iVar3 = iVar1;
      }
      FVar4 = (ForElementType<TTestToken<int>_>)this;
      if (FVar2 != (ForElementType<TTestToken<int>_>)0x0) {
        FVar4 = FVar2;
      }
      memmove((void *)((longlong)FVar4 + (longlong)iVar5 * 4),
              (void *)((longlong)FVar4 + ((longlong)iVar1 + (longlong)iVar5) * 4),
              (longlong)iVar3 << 2);
      iVar5 = iVar5 + iVar3;
    } while (iVar5 < param_1);
  }
  return;
}

