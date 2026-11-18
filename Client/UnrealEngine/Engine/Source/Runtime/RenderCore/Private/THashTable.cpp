// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// CopyUnfrozen @ 145dfef20

void __thiscall
THashTable<TMemoryImageAllocator<0>_>::CopyUnfrozen
          (THashTable<TMemoryImageAllocator<0>_> *this,FMemoryUnfreezeContent *param_1,void *param_2
          )

{
  uint uVar1;
  FMemoryImageAllocatorBase *this_00;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  ForAnyElementType FVar7;
  
  uVar2 = this->HashMask;
  this_00 = (FMemoryImageAllocatorBase *)((longlong)param_2 + 8);
  uVar3 = this->IndexSize;
  *(undefined8 *)param_2 = 0;
  (this_00->Data).field0_0x0.Packed = 0;
  uVar1 = uVar2 + 1;
  *(uint *)((longlong)param_2 + 0x10) = uVar2;
  *(uint *)((longlong)param_2 + 0x14) = uVar3;
  if ((uVar1 == 0) || (0x10000 < uVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHashSize > 0u && InHashSize <= 0x10000",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\HashTable.h"
                       ,0x222,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((uVar1 & uVar2) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::IsPowerOfTwo(InHashSize)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\HashTable.h"
                       ,0x223,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FMemoryImageAllocatorBase::ResizeAllocation(param_2,0,uVar1,4,0);
  pvVar6 = *(void **)param_2;
  if (((ulonglong)pvVar6 & 1) != 0) {
    pvVar6 = (void *)(((longlong)pvVar6 >> 0x18) + (longlong)param_2);
  }
  memset(pvVar6,0xff,(ulonglong)(uVar1 * 4));
  if (*(int *)((longlong)param_2 + 0x14) != 0) {
    FMemoryImageAllocatorBase::ResizeAllocation(this_00,0,*(int *)((longlong)param_2 + 0x14),4,0);
  }
  FVar7 = this->Hash;
  if (((ulonglong)FVar7 & 1) != 0) {
    FVar7 = (ForAnyElementType)((longlong)&(this->Hash).field_0x0 + ((longlong)FVar7 >> 0x18));
  }
  pvVar6 = *(void **)param_2;
  if (((ulonglong)pvVar6 & 1) != 0) {
    pvVar6 = (void *)(((longlong)pvVar6 >> 0x18) + (longlong)param_2);
  }
  memcpy(pvVar6,(void *)FVar7,(ulonglong)(this->HashMask * 4 + 4));
  FVar7 = this->NextIndex;
  if (((ulonglong)FVar7 & 1) != 0) {
    FVar7 = (ForAnyElementType)((longlong)&(this->NextIndex).field_0x0 + ((longlong)FVar7 >> 0x18));
  }
  pvVar6 = (void *)(this_00->Data).field0_0x0.Packed;
  if (((ulonglong)pvVar6 & 1) != 0) {
    pvVar6 = (void *)((longlong)&(this_00->Data).field0_0x0 + ((longlong)pvVar6 >> 0x18));
  }
  memcpy(pvVar6,(void *)FVar7,(ulonglong)(this->IndexSize << 2));
  return;
}

// THashTable<TMemoryImageAllocator<0>_> @ 145e801d0

THashTable<TMemoryImageAllocator<0>_> * __thiscall
THashTable<TMemoryImageAllocator<0>_>::THashTable<TMemoryImageAllocator<0>_>
          (THashTable<TMemoryImageAllocator<0>_> *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  THashTable<TMemoryImageAllocator<0>_> *pTVar3;
  ForAnyElementType _Dst;
  
  this->Hash = (ForAnyElementType)0x0;
  this->NextIndex = (ForAnyElementType)0x0;
  this->IndexSize = param_2;
  this->HashMask = param_1 - 1;
  if (0xffff < param_1 - 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHashSize > 0u && InHashSize <= 0x10000",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\HashTable.h"
                       ,0x222,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (THashTable<TMemoryImageAllocator<0>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((param_1 & param_1 - 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::IsPowerOfTwo(InHashSize)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\HashTable.h"
                       ,0x223,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (THashTable<TMemoryImageAllocator<0>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FMemoryImageAllocatorBase::ResizeAllocation((FMemoryImageAllocatorBase *)this,0,param_1,4,0);
  _Dst = this->Hash;
  if (((ulonglong)_Dst & 1) != 0) {
    _Dst = (ForAnyElementType)((longlong)&(this->Hash).field_0x0 + ((longlong)_Dst >> 0x18));
  }
  memset((void *)_Dst,0xff,(ulonglong)(param_1 * 4));
  if (this->IndexSize != 0) {
    FMemoryImageAllocatorBase::ResizeAllocation
              ((FMemoryImageAllocatorBase *)&this->NextIndex,0,this->IndexSize,4,0);
  }
  return this;
}

// Add @ 145e8a4e0

void __thiscall
THashTable<TMemoryImageAllocator<0>_>::Add
          (THashTable<TMemoryImageAllocator<0>_> *this,ushort param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = this->IndexSize;
  if (uVar2 <= param_2) {
    iVar7 = 1;
    if (param_2 + 1 != 0) {
      iVar7 = param_2 + 1;
    }
    uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar3 & 0x1f);
    if (uVar6 < 0x20) {
      uVar6 = 0x20;
    }
    if (uVar6 != uVar2) {
      FMemoryImageAllocatorBase::ResizeAllocation
                ((FMemoryImageAllocatorBase *)&this->NextIndex,uVar2,uVar6,4,0);
      this->IndexSize = uVar6;
    }
  }
  FVar4 = this->Hash;
  if (((ulonglong)FVar4 & 1) != 0) {
    FVar4 = (ForAnyElementType)((longlong)&(this->Hash).field_0x0 + ((longlong)FVar4 >> 0x18));
  }
  lVar3 = (ulonglong)(param_1 & (ushort)this->HashMask) * 4;
  FVar5 = this->NextIndex;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)((longlong)&(this->NextIndex).field_0x0 + ((longlong)FVar5 >> 0x18));
  }
  *(undefined4 *)((longlong)FVar5 + (ulonglong)param_2 * 4) =
       *(undefined4 *)(lVar3 + (longlong)FVar4);
  FVar4 = this->Hash;
  if (((ulonglong)FVar4 & 1) != 0) {
    FVar4 = (ForAnyElementType)((longlong)&(this->Hash).field_0x0 + ((longlong)FVar4 >> 0x18));
  }
  *(uint *)(lVar3 + (longlong)FVar4) = param_2;
  return;
}

// MoveAssign @ 145ea6c80

THashTable<TMemoryImageAllocator<0>_> * __thiscall
THashTable<TMemoryImageAllocator<0>_>::MoveAssign
          (THashTable<TMemoryImageAllocator<0>_> *this,
          THashTable<TMemoryImageAllocator<0>_> *param_1)

{
  FMemoryImageAllocatorBase::MoveToEmpty
            ((FMemoryImageAllocatorBase *)this,(FMemoryImageAllocatorBase *)param_1);
  FMemoryImageAllocatorBase::MoveToEmpty
            ((FMemoryImageAllocatorBase *)&this->NextIndex,
             (FMemoryImageAllocatorBase *)&param_1->NextIndex);
  this->HashMask = param_1->HashMask;
  this->IndexSize = param_1->IndexSize;
  param_1->HashMask = 0;
  param_1->IndexSize = 0;
  return this;
}

// Remove @ 145eaf640

void __thiscall
THashTable<TMemoryImageAllocator<0>_>::Remove
          (THashTable<TMemoryImageAllocator<0>_> *this,ushort param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  
  uVar3 = (ulonglong)param_2;
  if (param_2 < this->IndexSize) {
    FVar7 = this->Hash;
    FVar4 = (ForAnyElementType)((longlong)&(this->Hash).field_0x0 + ((longlong)FVar7 >> 0x18));
    if (((ulonglong)FVar7 & 1) == 0) {
      FVar4 = FVar7;
    }
    FVar5 = (ForAnyElementType)((longlong)&(this->Hash).field_0x0 + ((longlong)FVar7 >> 0x18));
    lVar6 = (ulonglong)(param_1 & (ushort)this->HashMask) * 4;
    if (*(uint *)(lVar6 + (longlong)FVar4) == param_2) {
      FVar4 = this->NextIndex;
      if (((ulonglong)FVar4 & 1) != 0) {
        FVar4 = (ForAnyElementType)
                ((longlong)&(this->NextIndex).field_0x0 + ((longlong)FVar4 >> 0x18));
      }
      if (((ulonglong)FVar7 & 1) != 0) {
        FVar7 = FVar5;
      }
      *(undefined4 *)(lVar6 + (longlong)FVar7) = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
      return;
    }
    if (((ulonglong)FVar7 & 1) != 0) {
      FVar7 = FVar5;
    }
    uVar2 = *(uint *)(lVar6 + (longlong)FVar7);
    if (uVar2 != 0xffffffff) {
      FVar7 = this->NextIndex;
      lVar6 = (longlong)FVar7 >> 0x18;
      while( true ) {
        FVar5 = (ForAnyElementType)((longlong)&(this->NextIndex).field_0x0 + lVar6);
        lVar1 = (ulonglong)uVar2 * 4;
        FVar4 = FVar7;
        if (((ulonglong)FVar7 & 1) != 0) {
          FVar4 = FVar5;
        }
        if (*(uint *)(lVar1 + (longlong)FVar4) == param_2) break;
        FVar4 = FVar7;
        if (((ulonglong)FVar7 & 1) != 0) {
          FVar4 = FVar5;
        }
        uVar2 = *(uint *)(lVar1 + (longlong)FVar4);
        if (uVar2 == 0xffffffff) {
          return;
        }
      }
      if (((ulonglong)FVar7 & 1) != 0) {
        *(undefined4 *)(&(this->NextIndex).field_0x0 + lVar1 + lVar6) =
             *(undefined4 *)(&(this->NextIndex).field_0x0 + uVar3 * 4 + lVar6);
        return;
      }
      *(undefined4 *)(lVar1 + (longlong)FVar7) = *(undefined4 *)((longlong)FVar7 + uVar3 * 4);
    }
  }
  return;
}

// Resize @ 145eb0f20

void __thiscall
THashTable<TMemoryImageAllocator<0>_>::Resize
          (THashTable<TMemoryImageAllocator<0>_> *this,uint param_1)

{
  if (param_1 != this->IndexSize) {
    FMemoryImageAllocatorBase::ResizeAllocation
              ((FMemoryImageAllocatorBase *)&this->NextIndex,this->IndexSize,param_1,4,0);
    this->IndexSize = param_1;
  }
  return;
}

