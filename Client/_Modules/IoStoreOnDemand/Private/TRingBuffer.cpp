// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// NormalizeCapacity @ 1445e29b0

uint __thiscall
TRingBuffer<FPackageId,TSizedDefaultAllocator<32>_>::NormalizeCapacity
          (TRingBuffer<FPackageId,TSizedDefaultAllocator<32>_> *this,uint param_1)

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

// Reallocate @ 1445f0490

void __thiscall
TRingBuffer<FPackageId,TSizedDefaultAllocator<32>_>::Reallocate
          (TRingBuffer<FPackageId,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  undefined8 uVar1;
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
              (&this->AllocatorInstance,0,param_1,8,8);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_res8,0,param_1,8,8);
    FVar3.Data = local_res8.Data;
    uVar10 = this->IndexMask & this->Front;
    uVar5 = this->IndexMask & this->AfterBack;
    if (uVar10 < uVar5) {
      pFVar8 = pFVar8 + (ulonglong)uVar10 * 8;
      uVar11 = (ulonglong)(uVar5 - uVar10);
      uVar7 = 0;
      do {
        uVar1 = *(undefined8 *)pFVar8;
        pFVar8 = pFVar8 + 8;
        *(undefined8 *)(local_res8.Data + uVar7 * 8) = uVar1;
        uVar11 = uVar11 - 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
      } while (uVar11 != 0);
      if ((this->IndexMask + 1 < uVar5 - uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) goto code_r0x0001445f0696;
    }
    else {
      uVar7 = 0;
      if (uVar10 < uVar12) {
        pFVar6 = pFVar8 + (ulonglong)uVar10 * 8;
        uVar9 = (ulonglong)(uVar12 - uVar10);
        uVar11 = uVar7;
        do {
          uVar1 = *(undefined8 *)pFVar6;
          pFVar6 = pFVar6 + 8;
          uVar7 = (ulonglong)((int)uVar11 + 1);
          *(undefined8 *)(local_res8.Data + uVar11 * 8) = uVar1;
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
          uVar1 = *(undefined8 *)pFVar8;
          pFVar8 = pFVar8 + 8;
          *(undefined8 *)(FVar3.Data + uVar7 * 8) = uVar1;
          uVar11 = uVar11 - 1;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar11 != 0);
      }
      if ((this->IndexMask + 1 < uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
code_r0x0001445f0696:
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

