// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 4

// DestructRange @ 14d912a60

void __thiscall
TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::DestructRange
          (TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>
           *this,uint param_1,uint param_2)

{
  uint uVar1;
  FHistoryFrameData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FHistoryFrameData *pFVar6;
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
    pFVar2 = (FHistoryFrameData *)(this->AllocatorInstance).Data;
    uVar5 = uVar1 & param_1;
    pFVar6 = pFVar2 + uVar5;
    if ((uVar1 & param_2) <= uVar5) {
      DestructItems<FAudioSpectrogramViewport::FHistoryFrameData,unsigned_int>
                (pFVar6,(uVar1 + 1) - uVar5);
      pFVar6 = pFVar2;
      uVar7 = uVar1 & param_2;
    }
    DestructItems<FAudioSpectrogramViewport::FHistoryFrameData,unsigned_int>(pFVar6,uVar7);
  }
  return;
}

// NormalizeCapacity @ 14d9498e0

uint __thiscall
TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::
NormalizeCapacity(TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>
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

// PopFront @ 14d9595b0

void __thiscall
TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::PopFront
          (TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>
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

// Reallocate @ 14d95dee0

void __thiscall
TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::Reallocate
          (TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>
           *this,uint param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ForAnyElementType local_res8;
  
  uVar13 = this->IndexMask + 1;
  uVar11 = this->AfterBack - this->Front;
  pFVar8 = (this->AllocatorInstance).Data;
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
  if ((param_1 < uVar11) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 == 0) || (uVar11 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,0x38,8);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_res8,0,param_1,0x38,8);
    FVar3.Data = local_res8.Data;
    uVar5 = this->IndexMask & this->Front;
    uVar12 = this->IndexMask & this->AfterBack;
    if (uVar5 < uVar12) {
      uVar9 = 0;
      uVar10 = (ulonglong)(uVar12 - uVar5);
      pFVar8 = pFVar8 + (ulonglong)uVar5 * 0x38 + 0x1c;
      do {
        lVar6 = uVar9 * 0x38;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        *(undefined4 *)(local_res8.Data + lVar6) = *(undefined4 *)(pFVar8 + -0x1c);
        *(undefined4 *)(local_res8.Data + lVar6 + 4) = *(undefined4 *)(pFVar8 + -0x18);
        *(undefined4 *)(local_res8.Data + lVar6 + 8) = *(undefined4 *)(pFVar8 + -0x14);
        local_res8.Data[lVar6 + 0xc] = pFVar8[-0x10];
        *(undefined8 *)(local_res8.Data + lVar6 + 0x10) = 0;
        *(undefined8 *)(local_res8.Data + lVar6 + 0x10) = *(undefined8 *)(pFVar8 + -0xc);
        *(undefined8 *)(pFVar8 + -0xc) = 0;
        *(undefined4 *)(local_res8.Data + lVar6 + 0x18) = *(undefined4 *)(pFVar8 + -4);
        *(undefined4 *)(local_res8.Data + lVar6 + 0x1c) = *(undefined4 *)pFVar8;
        *(undefined8 *)(pFVar8 + -4) = 0;
        FVar1 = pFVar8[4];
        *(undefined8 *)(local_res8.Data + lVar6 + 0x28) = 0;
        local_res8.Data[lVar6 + 0x20] = FVar1;
        *(undefined8 *)(local_res8.Data + lVar6 + 0x28) = *(undefined8 *)(pFVar8 + 0xc);
        *(undefined8 *)(pFVar8 + 0xc) = 0;
        *(undefined4 *)(local_res8.Data + lVar6 + 0x30) = *(undefined4 *)(pFVar8 + 0x14);
        *(undefined4 *)(local_res8.Data + lVar6 + 0x34) = *(undefined4 *)(pFVar8 + 0x18);
        *(undefined8 *)(pFVar8 + 0x14) = 0;
        uVar10 = uVar10 - 1;
        pFVar8 = pFVar8 + 0x38;
      } while (uVar10 != 0);
    }
    else {
      uVar9 = 0;
      if (uVar5 < uVar13) {
        uVar10 = (ulonglong)(uVar13 - uVar5);
        pFVar7 = pFVar8 + (ulonglong)uVar5 * 0x38 + 0x1c;
        do {
          lVar6 = uVar9 * 0x38;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          *(undefined4 *)(local_res8.Data + lVar6) = *(undefined4 *)(pFVar7 + -0x1c);
          *(undefined4 *)(local_res8.Data + lVar6 + 4) = *(undefined4 *)(pFVar7 + -0x18);
          *(undefined4 *)(local_res8.Data + lVar6 + 8) = *(undefined4 *)(pFVar7 + -0x14);
          local_res8.Data[lVar6 + 0xc] = pFVar7[-0x10];
          *(undefined8 *)(local_res8.Data + lVar6 + 0x10) = 0;
          *(undefined8 *)(local_res8.Data + lVar6 + 0x10) = *(undefined8 *)(pFVar7 + -0xc);
          *(undefined8 *)(pFVar7 + -0xc) = 0;
          *(undefined4 *)(local_res8.Data + lVar6 + 0x18) = *(undefined4 *)(pFVar7 + -4);
          *(undefined4 *)(local_res8.Data + lVar6 + 0x1c) = *(undefined4 *)pFVar7;
          *(undefined8 *)(pFVar7 + -4) = 0;
          FVar1 = pFVar7[4];
          *(undefined8 *)(local_res8.Data + lVar6 + 0x28) = 0;
          local_res8.Data[lVar6 + 0x20] = FVar1;
          *(undefined8 *)(local_res8.Data + lVar6 + 0x28) = *(undefined8 *)(pFVar7 + 0xc);
          *(undefined8 *)(pFVar7 + 0xc) = 0;
          *(undefined4 *)(local_res8.Data + lVar6 + 0x30) = *(undefined4 *)(pFVar7 + 0x14);
          *(undefined4 *)(local_res8.Data + lVar6 + 0x34) = *(undefined4 *)(pFVar7 + 0x18);
          *(undefined8 *)(pFVar7 + 0x14) = 0;
          uVar10 = uVar10 - 1;
          pFVar7 = pFVar7 + 0x38;
        } while (uVar10 != 0);
      }
      DestructRange(this,uVar5,uVar13);
      uVar5 = 0;
      if (uVar12 != 0) {
        uVar10 = (ulonglong)uVar12;
        pFVar8 = pFVar8 + 0x1c;
        do {
          lVar6 = uVar9 * 0x38;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          *(undefined4 *)(FVar3.Data + lVar6) = *(undefined4 *)(pFVar8 + -0x1c);
          *(undefined4 *)(FVar3.Data + lVar6 + 4) = *(undefined4 *)(pFVar8 + -0x18);
          *(undefined4 *)(FVar3.Data + lVar6 + 8) = *(undefined4 *)(pFVar8 + -0x14);
          FVar3.Data[lVar6 + 0xc] = pFVar8[-0x10];
          *(undefined8 *)(FVar3.Data + lVar6 + 0x10) = 0;
          *(undefined8 *)(FVar3.Data + lVar6 + 0x10) = *(undefined8 *)(pFVar8 + -0xc);
          *(undefined8 *)(pFVar8 + -0xc) = 0;
          *(undefined4 *)(FVar3.Data + lVar6 + 0x18) = *(undefined4 *)(pFVar8 + -4);
          *(undefined4 *)(FVar3.Data + lVar6 + 0x1c) = *(undefined4 *)pFVar8;
          *(undefined8 *)(pFVar8 + -4) = 0;
          FVar1 = pFVar8[4];
          *(undefined8 *)(FVar3.Data + lVar6 + 0x28) = 0;
          FVar3.Data[lVar6 + 0x20] = FVar1;
          *(undefined8 *)(FVar3.Data + lVar6 + 0x28) = *(undefined8 *)(pFVar8 + 0xc);
          *(undefined8 *)(pFVar8 + 0xc) = 0;
          *(undefined4 *)(FVar3.Data + lVar6 + 0x30) = *(undefined4 *)(pFVar8 + 0x14);
          *(undefined4 *)(FVar3.Data + lVar6 + 0x34) = *(undefined4 *)(pFVar8 + 0x18);
          *(undefined8 *)(pFVar8 + 0x14) = 0;
          uVar10 = uVar10 - 1;
          pFVar8 = pFVar8 + 0x38;
        } while (uVar10 != 0);
      }
    }
    DestructRange(this,uVar5,uVar12);
    pFVar8 = (this->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->AllocatorInstance).Data = local_res8.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = uVar11;
  return;
}

