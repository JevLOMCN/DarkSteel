// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// ResizeGrow @ 141f9a350

void __thiscall
TScriptArray<TSizedDefaultAllocator<32>_>::ResizeGrow
          (TScriptArray<TSizedDefaultAllocator<32>_> *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = this->ArrayNum;
  uVar6 = (ulonglong)iVar1;
  uVar5 = (ulonglong)param_2;
  if (this->ArrayMax == 0) {
    uVar3 = 4;
    if (4 < uVar6) {
      uVar3 = uVar6;
    }
  }
  else {
    uVar3 = (uVar6 * 3 >> 3) + 0x10 + uVar6;
  }
  uVar4 = FMemory::QuantizeSize(uVar5 * uVar3,param_3);
  iVar2 = (int)(uVar4 / uVar5);
  if (iVar2 < iVar1) {
    iVar2 = 0x7fffffff;
  }
  this->ArrayMax = iVar2;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)this,param_1,iVar2,uVar5,param_3);
  return;
}

// Add @ 1420f0bc0

int __thiscall
TScriptArray<TMemoryImageAllocator<0>_>::Add
          (TScriptArray<TMemoryImageAllocator<0>_> *this,int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count>=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  this->ArrayNum = iVar3 + param_1;
  if (this->ArrayMax < iVar3 + param_1) {
    ResizeGrow(this,iVar3,param_2,param_3);
  }
  return iVar3;
}

// ResizeGrow @ 14210a860

void __thiscall
TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow
          (TScriptArray<TMemoryImageAllocator<0>_> *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = this->ArrayNum;
  uVar6 = (ulonglong)iVar1;
  uVar5 = (ulonglong)param_2;
  if (this->ArrayMax == 0) {
    uVar3 = 4;
    if (4 < uVar6) {
      uVar3 = uVar6;
    }
  }
  else {
    uVar3 = (uVar6 * 3 >> 3) + 0x10 + uVar6;
  }
  uVar4 = FMemory::QuantizeSize(uVar5 * uVar3,param_3);
  iVar2 = (int)(uVar4 / uVar5);
  if (iVar2 < iVar1) {
    iVar2 = 0x7fffffff;
  }
  this->ArrayMax = iVar2;
  FMemoryImageAllocatorBase::ResizeAllocation
            ((FMemoryImageAllocatorBase *)this,param_1,iVar2,uVar5,param_3);
  return;
}

// ResizeGrow @ 14210a910

void __thiscall
TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
          (TScriptArray<TSizedHeapAllocator<32,FMemory>_> *this,int param_1,int param_2,uint param_3
          )

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = this->ArrayNum;
  uVar6 = (ulonglong)iVar1;
  uVar5 = (ulonglong)param_2;
  if (this->ArrayMax == 0) {
    uVar3 = 4;
    if (4 < uVar6) {
      uVar3 = uVar6;
    }
  }
  else {
    uVar3 = (uVar6 * 3 >> 3) + 0x10 + uVar6;
  }
  uVar4 = FMemory::QuantizeSize(uVar5 * uVar3,param_3);
  iVar2 = (int)(uVar4 / uVar5);
  if (iVar2 < iVar1) {
    iVar2 = 0x7fffffff;
  }
  this->ArrayMax = iVar2;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)this,param_1,iVar2,uVar5,param_3);
  return;
}

// ResizeTo @ 14210a9c0

void __thiscall
TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
          (TScriptArray<TMemoryImageAllocator<0>_> *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  iVar1 = 0;
  if (param_1 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_1 * uVar3,0);
    iVar1 = (int)(uVar2 / uVar3);
    if (iVar1 < param_1) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != this->ArrayMax) {
    this->ArrayMax = iVar1;
    FMemoryImageAllocatorBase::ResizeAllocation
              ((FMemoryImageAllocatorBase *)this,this->ArrayNum,iVar1,uVar3,param_3);
  }
  return;
}

// ResizeTo @ 14210aa40

void __thiscall
TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
          (TScriptArray<TSizedDefaultAllocator<32>_> *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  iVar1 = 0;
  if (param_1 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_1 * uVar3,0);
    iVar1 = (int)(uVar2 / uVar3);
    if (iVar1 < param_1) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != this->ArrayMax) {
    this->ArrayMax = iVar1;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this,this->ArrayNum,iVar1,uVar3,param_3);
  }
  return;
}

// ResizeTo @ 14210aac0

void __thiscall
TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
          (TScriptArray<TSizedHeapAllocator<32,FMemory>_> *this,int param_1,int param_2,uint param_3
          )

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  iVar1 = 0;
  if (param_1 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_1 * uVar3,0);
    iVar1 = (int)(uVar2 / uVar3);
    if (iVar1 < param_1) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != this->ArrayMax) {
    this->ArrayMax = iVar1;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this,this->ArrayNum,iVar1,uVar3,param_3);
  }
  return;
}

// ResizeShrink @ 14214ab80

void __thiscall
TScriptArray<TMemoryImageAllocator<0>_>::ResizeShrink
          (TScriptArray<TMemoryImageAllocator<0>_> *this,int param_1,uint param_2)

{
  int iVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  int iVar4;
  
  iVar1 = this->ArrayNum;
  uVar3 = (ulong64)param_1;
  iVar4 = this->ArrayMax;
  if ((((0x3fff < (longlong)(iVar4 - iVar1) * uVar3) || (iVar1 * 3 < iVar4 * 2)) &&
      ((0x40 < iVar4 - iVar1 || (iVar1 == 0)))) && (iVar4 = iVar1, 0 < iVar1)) {
    uVar2 = FMemory::QuantizeSize((longlong)iVar1 * uVar3,param_2);
    iVar4 = (int)(uVar2 / uVar3);
  }
  if (iVar4 != this->ArrayMax) {
    this->ArrayMax = iVar4;
    FMemoryImageAllocatorBase::ResizeAllocation
              ((FMemoryImageAllocatorBase *)this,this->ArrayNum,iVar4,uVar3,param_2);
  }
  return;
}

// ResizeShrink @ 14214ac20

void __thiscall
TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeShrink
          (TScriptArray<TSizedHeapAllocator<32,FMemory>_> *this,int param_1,uint param_2)

{
  int iVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  int iVar4;
  
  uVar3 = (ulong64)param_1;
  iVar1 = this->ArrayNum;
  iVar4 = this->ArrayMax;
  if ((((0x3fff < (longlong)(iVar4 - iVar1) * uVar3) || (iVar1 * 3 < iVar4 * 2)) &&
      ((0x40 < iVar4 - iVar1 || (iVar1 == 0)))) && (iVar4 = iVar1, 0 < iVar1)) {
    uVar2 = FMemory::QuantizeSize((longlong)iVar1 * uVar3,param_2);
    iVar4 = (int)(uVar2 / uVar3);
  }
  if (iVar4 != this->ArrayMax) {
    this->ArrayMax = iVar4;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this,this->ArrayNum,iVar4,uVar3,param_2);
  }
  return;
}

