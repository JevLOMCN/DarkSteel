// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FTexelAllocator @ 1480f4980

FTexelAllocator * __thiscall
FTexelAllocator::FTexelAllocator(FTexelAllocator *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FBlock *pFVar8;
  FTexelAllocator *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar10 = 0;
  this->TextureSizeX = param_1;
  (this->FreeBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FreeBlocks).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->FreeBlocks).ArrayMax;
  *piVar2 = 0;
  this->BlockPool = (FBlock *)0x0;
  this->BlockCount = 0;
  this->TextureSizeY = param_2;
  this->FreeTexels = param_1 * param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (param_2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_2,(ForAnyElementType *)this,0,piVar2);
  }
  iVar3 = this->TextureSizeY;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,(ForAnyElementType *)this,piVar1,piVar2);
  memset((this->FreeBlocks).AllocatorInstance.Data + (longlong)iVar6 * 8,0,(longlong)iVar3 << 3);
  uVar12 = uVar10;
  if (0 < this->TextureSizeY) {
    do {
      pFVar8 = this->BlockPool;
      if (pFVar8 == (FBlock *)0x0) {
        this->BlockCount = this->BlockCount + 1;
        pFVar8 = FMemory::Malloc(0x10,0);
      }
      else {
        this->BlockPool = pFVar8->Next;
      }
      pFVar8->Next = (FBlock *)0x0;
      pFVar8->Begin = 0;
      pFVar8->Size = (ushort)this->TextureSizeX;
      uVar11 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FTexelAllocator *)(*pcVar4)();
        return pFVar9;
      }
      uVar10 = (ulonglong)(uVar11 + 1);
      *(FBlock **)((this->FreeBlocks).AllocatorInstance.Data + uVar12) = pFVar8;
      uVar12 = uVar12 + 8;
    } while ((int)(uVar11 + 1) < this->TextureSizeY);
  }
  return this;
}

// ~FTexelAllocator @ 1480f73d0

void __thiscall FTexelAllocator::~FTexelAllocator(FTexelAllocator *this)

{
  undefined8 *puVar1;
  FBlock *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 *puVar5;
  FBlock *pFVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = 0;
  uVar11 = uVar10;
  if (0 < this->TextureSizeY) {
    do {
      uVar9 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar9 < (this->FreeBlocks).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar5 = *(undefined8 **)((this->FreeBlocks).AllocatorInstance.Data + uVar11);
      while (puVar5 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*puVar5;
        FMemory::Free(puVar5);
        puVar5 = puVar1;
      }
      uVar8 = 0;
      if ((int)uVar9 < (this->FreeBlocks).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      *(undefined8 *)((this->FreeBlocks).AllocatorInstance.Data + uVar11) = 0;
      uVar11 = uVar11 + 8;
    } while ((int)(uVar9 + 1) < this->TextureSizeY);
  }
  pFVar6 = this->BlockPool;
  while (pFVar6 != (FBlock *)0x0) {
    pFVar2 = pFVar6->Next;
    FMemory::Free(pFVar6);
    pFVar6 = pFVar2;
  }
  this->BlockPool = (FBlock *)0x0;
  pFVar3 = (this->FreeBlocks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// Allocate @ 1480fd4f0

FTexelAllocation __thiscall FTexelAllocator::Allocate(FTexelAllocator *this,int param_1)

{
  FBlock *pFVar1;
  ushort uVar2;
  ushort uVar3;
  FBlock *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ushort *puVar9;
  uint uVar10;
  ushort uVar11;
  uint in_R8D;
  
  puVar9 = (ushort *)CONCAT44(in_register_00000014,param_1);
  if (((int)in_R8D < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleCurveTexture.cpp"
                         ,0x159,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return SUB86(uVar7,0);
  }
  if ((this->TextureSizeX < (int)in_R8D) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= TextureSizeX",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleCurveTexture.cpp"
                         ,0x15a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return SUB86(uVar7,0);
  }
  uVar8 = this->TextureSizeY;
  uVar10 = 0;
  if (0 < (int)uVar8) {
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->FreeBlocks).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return SUB86(uVar7,0);
      }
      pFVar1 = (FBlock *)((this->FreeBlocks).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
      uVar8 = 0;
      if ((int)uVar10 < (this->FreeBlocks).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return SUB86(uVar7,0);
      }
      pFVar4 = *(FBlock **)((this->FreeBlocks).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
      if ((pFVar1->Next != pFVar4) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("LastBlock->Next == Block",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleCurveTexture.cpp"
                             ,0x161,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return SUB86(uVar7,0);
      }
      for (; pFVar4 != (FBlock *)0x0; pFVar4 = pFVar4->Next) {
        uVar2 = pFVar4->Size;
        uVar8 = (uint)uVar2;
        uVar11 = (ushort)in_R8D;
        if (uVar8 != in_R8D && (int)in_R8D <= (int)uVar8) {
          uVar3 = pFVar4->Begin;
          pFVar4->Size = uVar2 - uVar11;
          *puVar9 = uVar3;
          puVar9[1] = (ushort)uVar10;
          puVar9[2] = uVar11;
          pFVar4->Begin = uVar3 + uVar11;
          this->FreeTexels = this->FreeTexels - in_R8D;
          goto LAB_1480fd68a;
        }
        if (uVar8 == in_R8D) {
          uVar2 = pFVar4->Begin;
          this->FreeTexels = this->FreeTexels - in_R8D;
          *puVar9 = uVar2;
          pFVar1->Next = pFVar4->Next;
          pFVar4->Next = this->BlockPool;
          this->BlockPool = pFVar4;
          puVar9[1] = (ushort)uVar10;
          puVar9[2] = uVar11;
          goto LAB_1480fd68a;
        }
        pFVar1 = pFVar4;
      }
      uVar10 = uVar10 + 1;
      uVar8 = this->TextureSizeY & 0xffff;
    } while ((int)uVar10 < this->TextureSizeY);
  }
  *puVar9 = (ushort)this->TextureSizeX;
  puVar9[1] = (ushort)uVar8;
  puVar9[2] = 0;
LAB_1480fd68a:
  return SUB86(puVar9,0);
}

// Free @ 14810c790

void __thiscall FTexelAllocator::Free(FTexelAllocator *this,FTexelAllocation param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  FBlock *pFVar6;
  FBlock *pFVar7;
  undefined2 in_register_00000016;
  ushort *puVar8;
  FBlock *pFVar9;
  
  puVar8 = (ushort *)CONCAT26(in_register_00000016,param_1);
  if ((puVar8[2] == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocation.Size > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleCurveTexture.cpp"
                         ,0x197,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->TextureSizeX <= (int)(uint)*puVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocation.X < TextureSizeX",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleCurveTexture.cpp"
                         ,0x198,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->TextureSizeY <= (int)(uint)puVar8[1]) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocation.Y < TextureSizeY",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleCurveTexture.cpp"
                         ,0x199,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = puVar8[1];
  if (((this->FreeBlocks).ArrayNum <= (int)(uint)uVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar9 = (FBlock *)((this->FreeBlocks).AllocatorInstance.Data + (ulonglong)uVar1 * 8);
  uVar1 = puVar8[1];
  if (((this->FreeBlocks).ArrayNum <= (int)(uint)uVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = *(FBlock **)((this->FreeBlocks).AllocatorInstance.Data + (ulonglong)uVar1 * 8);
  if ((pFVar9->Next != pFVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastBlock->Next == Block",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleCurveTexture.cpp"
                         ,0x19e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = puVar8[2];
  this->FreeTexels = this->FreeTexels + (uint)uVar1;
  if (pFVar6 == (FBlock *)0x0) {
    pFVar6 = this->BlockPool;
    if (pFVar6 == (FBlock *)0x0) {
      this->BlockCount = this->BlockCount + 1;
      pFVar6 = FMemory::Malloc(0x10,0);
    }
    else {
      this->BlockPool = pFVar6->Next;
    }
    pFVar6->Begin = *puVar8;
    pFVar6->Next = (FBlock *)0x0;
    pFVar6->Size = uVar1;
    pFVar9->Next = pFVar6;
    return;
  }
  uVar2 = *puVar8;
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7;
    if ((uint)uVar2 <= (uint)pFVar7->Size + (uint)pFVar7->Begin) break;
    pFVar6 = pFVar7->Next;
    pFVar9 = pFVar7;
  } while (pFVar6 != (FBlock *)0x0);
  if (pFVar6 != (FBlock *)0x0) {
    uVar3 = pFVar6->Size;
    if ((uint)pFVar6->Begin == (uint)uVar2 + (uint)uVar1) {
      pFVar6->Begin = uVar2;
      pFVar6->Size = uVar3 + uVar1;
      return;
    }
    if ((uint)pFVar6->Begin + (uint)uVar3 == (uint)uVar2) {
      pFVar6->Size = uVar3 + uVar1;
      pFVar9 = pFVar6->Next;
      while( true ) {
        if (pFVar9 == (FBlock *)0x0) {
          return;
        }
        if ((uint)pFVar9->Begin != (uint)pFVar6->Begin + (uint)pFVar6->Size) break;
        pFVar6->Size = pFVar6->Size + pFVar9->Size;
        pFVar6->Next = pFVar9->Next;
        pFVar7 = pFVar9->Next;
        pFVar9->Next = this->BlockPool;
        this->BlockPool = pFVar9;
        pFVar9 = pFVar7;
      }
      return;
    }
  }
  pFVar7 = this->BlockPool;
  if (pFVar7 == (FBlock *)0x0) {
    this->BlockCount = this->BlockCount + 1;
    pFVar7 = FMemory::Malloc(0x10,0);
  }
  else {
    this->BlockPool = pFVar7->Next;
  }
  pFVar7->Next = pFVar6;
  pFVar7->Begin = uVar2;
  pFVar7->Size = uVar1;
  pFVar9->Next = pFVar7;
  return;
}

// GetBlock @ 148110480

FBlock * __thiscall FTexelAllocator::GetBlock(FTexelAllocator *this)

{
  FBlock *pFVar1;
  
  pFVar1 = this->BlockPool;
  if (pFVar1 != (FBlock *)0x0) {
    this->BlockPool = pFVar1->Next;
    return pFVar1;
  }
  this->BlockCount = this->BlockCount + 1;
  pFVar1 = FMemory::Malloc(0x10,0);
  return pFVar1;
}

// ReturnBlock @ 14812d920

void __thiscall FTexelAllocator::ReturnBlock(FTexelAllocator *this,FBlock *param_1)

{
  param_1->Next = this->BlockPool;
  this->BlockPool = param_1;
  return;
}

