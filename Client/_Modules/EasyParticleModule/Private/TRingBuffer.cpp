// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 4

// ~TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_> @ 14acb7940

void __thiscall
TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
::
~TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
          (TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
           *this)

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

// NormalizeCapacity @ 14acbc0d0

uint __thiscall
TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
::NormalizeCapacity(TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
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

// Reallocate @ 14acbcb40

void __thiscall
TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
::Reallocate(TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
             *this,uint param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ForAnyElementType local_res18;
  
  pFVar10 = (this->AllocatorInstance).Data;
  uVar14 = this->IndexMask + 1;
  uVar6 = this->AfterBack - this->Front;
  uVar5 = NormalizeCapacity(this,param_1);
  if ((uVar5 != param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 == 0) || (uVar6 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,0x70,8);
  }
  else {
    local_res18.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_res18,0,param_1,0x70,8);
    FVar3.Data = local_res18.Data;
    uVar12 = this->IndexMask & this->Front;
    uVar5 = this->IndexMask & this->AfterBack;
    if (uVar12 < uVar5) {
      uVar11 = 0;
      uVar13 = (ulonglong)(uVar5 - uVar12);
      pFVar10 = pFVar10 + (ulonglong)uVar12 * 0x70;
      do {
        uVar2 = *(undefined8 *)(pFVar10 + 8);
        lVar7 = uVar11 * 0x70;
        uVar11 = (ulonglong)((int)uVar11 + 1);
        pFVar9 = local_res18.Data + lVar7;
        *(undefined8 *)pFVar9 = *(undefined8 *)pFVar10;
        *(undefined8 *)(pFVar9 + 8) = uVar2;
        uVar2 = *(undefined8 *)(pFVar10 + 0x18);
        *(undefined8 *)(pFVar9 + 0x10) = *(undefined8 *)(pFVar10 + 0x10);
        *(undefined8 *)(pFVar9 + 0x18) = uVar2;
        uVar2 = *(undefined8 *)(pFVar10 + 0x28);
        *(undefined8 *)(pFVar9 + 0x20) = *(undefined8 *)(pFVar10 + 0x20);
        *(undefined8 *)(pFVar9 + 0x28) = uVar2;
        uVar2 = *(undefined8 *)(pFVar10 + 0x38);
        *(undefined8 *)(pFVar9 + 0x30) = *(undefined8 *)(pFVar10 + 0x30);
        *(undefined8 *)(pFVar9 + 0x38) = uVar2;
        uVar2 = *(undefined8 *)(pFVar10 + 0x48);
        *(undefined8 *)(pFVar9 + 0x40) = *(undefined8 *)(pFVar10 + 0x40);
        *(undefined8 *)(pFVar9 + 0x48) = uVar2;
        uVar2 = *(undefined8 *)(pFVar10 + 0x58);
        *(undefined8 *)(pFVar9 + 0x50) = *(undefined8 *)(pFVar10 + 0x50);
        *(undefined8 *)(pFVar9 + 0x58) = uVar2;
        uVar2 = *(undefined8 *)(pFVar10 + 0x68);
        *(undefined8 *)(pFVar9 + 0x60) = *(undefined8 *)(pFVar10 + 0x60);
        *(undefined8 *)(pFVar9 + 0x68) = uVar2;
        uVar13 = uVar13 - 1;
        pFVar10 = pFVar10 + 0x70;
      } while (uVar13 != 0);
      if ((this->IndexMask + 1 < uVar5 - uVar12) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) goto code_r0x00014acbce2e;
    }
    else {
      uVar11 = 0;
      if (uVar12 < uVar14) {
        uVar13 = (ulonglong)(uVar14 - uVar12);
        pFVar9 = pFVar10 + (ulonglong)uVar12 * 0x70;
        do {
          uVar2 = *(undefined8 *)(pFVar9 + 8);
          lVar7 = uVar11 * 0x70;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          pFVar8 = local_res18.Data + lVar7;
          *(undefined8 *)pFVar8 = *(undefined8 *)pFVar9;
          *(undefined8 *)(pFVar8 + 8) = uVar2;
          uVar2 = *(undefined8 *)(pFVar9 + 0x18);
          *(undefined8 *)(pFVar8 + 0x10) = *(undefined8 *)(pFVar9 + 0x10);
          *(undefined8 *)(pFVar8 + 0x18) = uVar2;
          uVar2 = *(undefined8 *)(pFVar9 + 0x28);
          *(undefined8 *)(pFVar8 + 0x20) = *(undefined8 *)(pFVar9 + 0x20);
          *(undefined8 *)(pFVar8 + 0x28) = uVar2;
          uVar2 = *(undefined8 *)(pFVar9 + 0x38);
          *(undefined8 *)(pFVar8 + 0x30) = *(undefined8 *)(pFVar9 + 0x30);
          *(undefined8 *)(pFVar8 + 0x38) = uVar2;
          uVar2 = *(undefined8 *)(pFVar9 + 0x48);
          *(undefined8 *)(pFVar8 + 0x40) = *(undefined8 *)(pFVar9 + 0x40);
          *(undefined8 *)(pFVar8 + 0x48) = uVar2;
          uVar2 = *(undefined8 *)(pFVar9 + 0x58);
          *(undefined8 *)(pFVar8 + 0x50) = *(undefined8 *)(pFVar9 + 0x50);
          *(undefined8 *)(pFVar8 + 0x58) = uVar2;
          uVar2 = *(undefined8 *)(pFVar9 + 0x68);
          *(undefined8 *)(pFVar8 + 0x60) = *(undefined8 *)(pFVar9 + 0x60);
          *(undefined8 *)(pFVar8 + 0x68) = uVar2;
          uVar13 = uVar13 - 1;
          pFVar9 = pFVar9 + 0x70;
        } while (uVar13 != 0);
      }
      if ((this->IndexMask + 1 < uVar14 - uVar12) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (uVar5 != 0) {
        uVar13 = (ulonglong)uVar5;
        do {
          uVar2 = *(undefined8 *)(pFVar10 + 8);
          lVar7 = uVar11 * 0x70;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          pFVar9 = FVar3.Data + lVar7;
          *(undefined8 *)pFVar9 = *(undefined8 *)pFVar10;
          *(undefined8 *)(pFVar9 + 8) = uVar2;
          uVar2 = *(undefined8 *)(pFVar10 + 0x18);
          *(undefined8 *)(pFVar9 + 0x10) = *(undefined8 *)(pFVar10 + 0x10);
          *(undefined8 *)(pFVar9 + 0x18) = uVar2;
          uVar2 = *(undefined8 *)(pFVar10 + 0x28);
          *(undefined8 *)(pFVar9 + 0x20) = *(undefined8 *)(pFVar10 + 0x20);
          *(undefined8 *)(pFVar9 + 0x28) = uVar2;
          uVar2 = *(undefined8 *)(pFVar10 + 0x38);
          *(undefined8 *)(pFVar9 + 0x30) = *(undefined8 *)(pFVar10 + 0x30);
          *(undefined8 *)(pFVar9 + 0x38) = uVar2;
          uVar2 = *(undefined8 *)(pFVar10 + 0x48);
          *(undefined8 *)(pFVar9 + 0x40) = *(undefined8 *)(pFVar10 + 0x40);
          *(undefined8 *)(pFVar9 + 0x48) = uVar2;
          uVar2 = *(undefined8 *)(pFVar10 + 0x58);
          *(undefined8 *)(pFVar9 + 0x50) = *(undefined8 *)(pFVar10 + 0x50);
          *(undefined8 *)(pFVar9 + 0x58) = uVar2;
          uVar2 = *(undefined8 *)(pFVar10 + 0x68);
          *(undefined8 *)(pFVar9 + 0x60) = *(undefined8 *)(pFVar10 + 0x60);
          *(undefined8 *)(pFVar9 + 0x68) = uVar2;
          uVar13 = uVar13 - 1;
          pFVar10 = pFVar10 + 0x70;
        } while (uVar13 != 0);
      }
      if ((this->IndexMask + 1 < uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
code_r0x00014acbce2e:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar10 = (this->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (this->AllocatorInstance).Data = local_res18.Data;
  }
  this->IndexMask = param_1 - 1;
  this->AfterBack = uVar6;
  this->Front = 0;
  return;
}

// operator[] @ 14acc2200

FEasyParticleTransform * __thiscall
TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
::operator[](TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEasyParticleTransform *pFVar4;
  
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
      pFVar4 = (FEasyParticleTransform *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FEasyParticleTransform *)
         ((this->AllocatorInstance).Data +
         (ulonglong)(this->Front + param_1 & this->IndexMask) * 0x70);
}

