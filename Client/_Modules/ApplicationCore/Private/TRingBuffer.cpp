// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 6

// operator[] @ 1423c7eb0

/* WARNING: Enum "Type": Some values do not have unique names */

LogEntry * __thiscall
TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>::
operator[](TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  LogEntry *pLVar4;
  
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
      pLVar4 = (LogEntry *)(*pcVar1)();
      return pLVar4;
    }
  }
  return (LogEntry *)
         ((this->AllocatorInstance).Data +
         (ulonglong)(this->Front + param_1 & this->IndexMask) * 0x30);
}

// Add @ 1423cf800

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>::Add
          (TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
           *this,LogEntry *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar3) {
    Reallocate(this,uVar3);
  }
  uVar3 = this->AfterBack;
  uVar1 = this->Front;
  uVar4 = (ulonglong)(this->IndexMask & uVar3);
  pFVar2 = (this->AllocatorInstance).Data;
  this->AfterBack = uVar3 + 1;
  *(undefined8 *)(pFVar2 + uVar4 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + uVar4 * 0x30) =
       (param_1->String).Data.AllocatorInstance.Data;
  (param_1->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + uVar4 * 0x30 + 8) = (param_1->String).Data.ArrayNum;
  *(int *)(pFVar2 + uVar4 * 0x30 + 0xc) = (param_1->String).Data.ArrayMax;
  (param_1->String).Data.ArrayNum = 0;
  (param_1->String).Data.ArrayMax = 0;
  pFVar2[uVar4 * 0x30 + 0x10] = (FScriptContainerElement)param_1->Verbosity;
  *(FName *)(pFVar2 + uVar4 * 0x30 + 0x14) = param_1->Category;
  *(double *)(pFVar2 + uVar4 * 0x30 + 0x20) = param_1->Time;
  *(ushort *)(pFVar2 + uVar4 * 0x30 + 0x28) = param_1->TextAttribute;
  *(ushort *)(pFVar2 + uVar4 * 0x30 + 0x2a) = param_1->LineCount;
  return uVar3 - uVar1;
}

// DestructRange @ 1423d9ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>::
DestructRange(TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
              *this,uint param_1,uint param_2)

{
  uint uVar1;
  LogEntry *pLVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  LogEntry *pLVar6;
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
    pLVar2 = (LogEntry *)(this->AllocatorInstance).Data;
    uVar5 = uVar1 & param_1;
    pLVar6 = pLVar2 + uVar5;
    if ((uVar1 & param_2) <= uVar5) {
      DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,unsigned_int>
                (pLVar6,(uVar1 + 1) - uVar5);
      pLVar6 = pLVar2;
      uVar7 = uVar1 & param_2;
    }
    DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,unsigned_int>(pLVar6,uVar7)
    ;
  }
  return;
}

// NormalizeCapacity @ 1423efa10

uint __thiscall
TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>::
NormalizeCapacity(TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
                  *this,uint param_1)

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

// PopFront @ 1423f29d0

void __thiscall
TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>::
PopFront(TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
         *this,uint param_1)

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
  DestructRange(this,this->Front,this->Front + param_1);
  this->Front = this->Front + param_1;
  return;
}

// Reallocate @ 1423fd760

void __thiscall
TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>::
Reallocate(TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
           *this,uint param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ForAnyElementType local_res8;
  
  uVar12 = this->IndexMask + 1;
  uVar10 = this->AfterBack - this->Front;
  pFVar6 = (this->AllocatorInstance).Data;
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
  if ((param_1 < uVar10) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 == 0) || (uVar10 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,0x30,8);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_res8,0,param_1,0x30,8);
    FVar2.Data = local_res8.Data;
    uVar4 = this->IndexMask & this->Front;
    uVar11 = this->IndexMask & this->AfterBack;
    if (uVar4 < uVar11) {
      uVar9 = (ulonglong)(uVar11 - uVar4);
      uVar7 = 0;
      pFVar6 = pFVar6 + (ulonglong)uVar4 * 0x30 + 0xc;
      do {
        *(undefined8 *)(local_res8.Data + uVar7 * 0x30) = 0;
        *(undefined8 *)(local_res8.Data + uVar7 * 0x30) = *(undefined8 *)(pFVar6 + -0xc);
        *(undefined8 *)(pFVar6 + -0xc) = 0;
        *(undefined4 *)(local_res8.Data + uVar7 * 0x30 + 8) = *(undefined4 *)(pFVar6 + -4);
        *(undefined4 *)(local_res8.Data + uVar7 * 0x30 + 0xc) = *(undefined4 *)pFVar6;
        *(undefined8 *)(pFVar6 + -4) = 0;
        local_res8.Data[uVar7 * 0x30 + 0x10] = pFVar6[4];
        *(undefined8 *)(local_res8.Data + uVar7 * 0x30 + 0x14) = *(undefined8 *)(pFVar6 + 8);
        *(undefined8 *)(local_res8.Data + uVar7 * 0x30 + 0x20) = *(undefined8 *)(pFVar6 + 0x14);
        *(undefined2 *)(local_res8.Data + uVar7 * 0x30 + 0x28) = *(undefined2 *)(pFVar6 + 0x1c);
        *(undefined2 *)(local_res8.Data + uVar7 * 0x30 + 0x2a) = *(undefined2 *)(pFVar6 + 0x1e);
        uVar9 = uVar9 - 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        pFVar6 = pFVar6 + 0x30;
      } while (uVar9 != 0);
    }
    else {
      uVar7 = 0;
      if (uVar4 < uVar12) {
        uVar8 = (ulonglong)(uVar12 - uVar4);
        pFVar5 = pFVar6 + (ulonglong)uVar4 * 0x30 + 0xc;
        uVar9 = uVar7;
        do {
          uVar7 = (ulonglong)((int)uVar9 + 1);
          *(undefined8 *)(local_res8.Data + uVar9 * 0x30) = 0;
          *(undefined8 *)(local_res8.Data + uVar9 * 0x30) = *(undefined8 *)(pFVar5 + -0xc);
          *(undefined8 *)(pFVar5 + -0xc) = 0;
          *(undefined4 *)(local_res8.Data + uVar9 * 0x30 + 8) = *(undefined4 *)(pFVar5 + -4);
          *(undefined4 *)(local_res8.Data + uVar9 * 0x30 + 0xc) = *(undefined4 *)pFVar5;
          *(undefined8 *)(pFVar5 + -4) = 0;
          local_res8.Data[uVar9 * 0x30 + 0x10] = pFVar5[4];
          *(undefined8 *)(local_res8.Data + uVar9 * 0x30 + 0x14) = *(undefined8 *)(pFVar5 + 8);
          *(undefined8 *)(local_res8.Data + uVar9 * 0x30 + 0x20) = *(undefined8 *)(pFVar5 + 0x14);
          *(undefined2 *)(local_res8.Data + uVar9 * 0x30 + 0x28) = *(undefined2 *)(pFVar5 + 0x1c);
          *(undefined2 *)(local_res8.Data + uVar9 * 0x30 + 0x2a) = *(undefined2 *)(pFVar5 + 0x1e);
          uVar8 = uVar8 - 1;
          pFVar5 = pFVar5 + 0x30;
          uVar9 = uVar7;
        } while (uVar8 != 0);
      }
      DestructRange(this,uVar4,uVar12);
      uVar4 = 0;
      if (uVar11 != 0) {
        uVar9 = (ulonglong)uVar11;
        pFVar6 = pFVar6 + 0xc;
        do {
          *(undefined8 *)(FVar2.Data + uVar7 * 0x30) = 0;
          *(undefined8 *)(FVar2.Data + uVar7 * 0x30) = *(undefined8 *)(pFVar6 + -0xc);
          *(undefined8 *)(pFVar6 + -0xc) = 0;
          *(undefined4 *)(FVar2.Data + uVar7 * 0x30 + 8) = *(undefined4 *)(pFVar6 + -4);
          *(undefined4 *)(FVar2.Data + uVar7 * 0x30 + 0xc) = *(undefined4 *)pFVar6;
          *(undefined8 *)(pFVar6 + -4) = 0;
          FVar2.Data[uVar7 * 0x30 + 0x10] = pFVar6[4];
          *(undefined8 *)(FVar2.Data + uVar7 * 0x30 + 0x14) = *(undefined8 *)(pFVar6 + 8);
          *(undefined8 *)(FVar2.Data + uVar7 * 0x30 + 0x20) = *(undefined8 *)(pFVar6 + 0x14);
          *(undefined2 *)(FVar2.Data + uVar7 * 0x30 + 0x28) = *(undefined2 *)(pFVar6 + 0x1c);
          *(undefined2 *)(FVar2.Data + uVar7 * 0x30 + 0x2a) = *(undefined2 *)(pFVar6 + 0x1e);
          uVar9 = uVar9 - 1;
          pFVar6 = pFVar6 + 0x30;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar9 != 0);
      }
    }
    DestructRange(this,uVar4,uVar11);
    pFVar6 = (this->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (this->AllocatorInstance).Data = local_res8.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = uVar10;
  return;
}

