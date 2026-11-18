// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Add @ 141742040

int __thiscall
FTextKeyState::FKeyDataAllocator::Add(FKeyDataAllocator *this,uint param_1,uint param_2)

{
  int iVar1;
  FKeyData *pFVar2;
  uint uVar3;
  
  ConditionalRehash(this,(this->Elements).Count + 1);
  uVar3 = this->HashSize - 1 & param_2;
  iVar1 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Add(&this->Elements,0x18);
  pFVar2 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get(&this->Elements,iVar1);
  pFVar2->StrHash = param_2;
  pFVar2->NextElementIndex = this->Hash[uVar3];
  this->Hash[uVar3] = iVar1;
  return iVar1;
}

// ConditionalRehash @ 14174d8c0

void __thiscall
FTextKeyState::FKeyDataAllocator::ConditionalRehash(FKeyDataAllocator *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar5 = 1;
  if (param_1 / 2 != 0) {
    iVar5 = param_1 / 2;
  }
  uVar6 = (ulonglong)(iVar5 - 1) * 2 + 1;
  lVar1 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar7 = 1 << ((byte)lVar1 & 0x1f);
  if (uVar7 < 0x8000) {
    uVar7 = 0x8000;
  }
  if (this->HashSize < uVar7) {
    FMemory::Free(this->Hash);
    this->Hash = (int *)0x0;
    this->HashSize = uVar7;
    piVar4 = FMemory::Malloc((ulonglong)uVar7 << 2,0);
    uVar6 = 0;
    this->Hash = piVar4;
    if (this->HashSize != 0) {
      do {
        this->Hash[uVar6] = -1;
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
      } while (uVar7 < this->HashSize);
    }
    uVar7 = (this->Elements).Count;
    uVar11 = 0;
    uVar9 = (uVar7 != 0) - 1;
    if (uVar7 != 0) {
      do {
        uVar10 = uVar9 & 0xffff;
        uVar8 = (int)uVar9 >> 0x10;
        uVar7 = 0;
        if ((int)uVar8 < (this->Elements).Chunks.ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar1 = *(longlong *)
                 ((this->Elements).Chunks.AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
        uVar7 = *(uint *)(lVar1 + 4 + (ulonglong)uVar10) & this->HashSize - 1;
        *(int *)(lVar1 + (ulonglong)uVar10) = this->Hash[uVar7];
        uVar10 = uVar10 + 0x18;
        this->Hash[uVar7] = uVar9;
        uVar7 = 0;
        if ((int)uVar8 < (this->Elements).ChunkCursors.ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = *(uint *)((this->Elements).ChunkCursors.AllocatorInstance.Data +
                         (longlong)(int)uVar8 * 4);
        if (uVar7 <= uVar10) {
          uVar8 = uVar8 + 1;
        }
        uVar9 = 0;
        if (uVar10 < uVar7) {
          uVar9 = uVar10;
        }
        uVar9 = uVar9 | uVar8 << 0x10;
        uVar11 = uVar11 + 1;
      } while (uVar11 < (this->Elements).Count);
    }
  }
  return;
}

// Find @ 141756670

int __thiscall FTextKeyState::FKeyDataAllocator::Find(FKeyDataAllocator *this,FKeyDataView *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  if (this->HashSize != 0) {
    uVar1 = this->Hash[this->HashSize - 1 & param_1->StrHash];
    while (uVar1 != 0xffffffff) {
      uVar8 = (int)uVar1 >> 0x10;
      uVar7 = 0;
      if ((int)uVar8 < (this->Elements).Chunks.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      puVar9 = (uint *)(*(longlong *)
                         ((this->Elements).Chunks.AllocatorInstance.Data + (longlong)(int)uVar8 * 8)
                       + (ulonglong)(uVar1 & 0xffff));
      uVar7 = puVar9[2];
      if (uVar7 == param_1->StrLen) {
        if ((int)uVar7 < 0) {
          if ((param_1->StrLen != 0xffffffff) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsGuid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                                 ,0x136,
                                 L"AsGuid called on a FKeyDataView that doesn\'t reference a GUID!")
             , bVar5)) {
            pcVar4 = (code *)swi(3);
            iVar6 = (*pcVar4)();
            return iVar6;
          }
          puVar2 = param_1->DataPtr;
          if ((puVar9[2] != 0xffffffff) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsGuid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                                 ,0x157,
                                 L"AsGuid called on a FKeyData that doesn\'t reference a GUID!"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            iVar6 = (*pcVar4)();
            return iVar6;
          }
          puVar3 = *(uint **)(puVar9 + 4);
          uVar7 = puVar3[3] ^ puVar2[3] | puVar3[2] ^ puVar2[2] | puVar3[1] ^ puVar2[1] |
                  *puVar3 ^ *puVar2;
        }
        else {
          uVar7 = memcmp(*(void **)(puVar9 + 4),param_1->DataPtr,(longlong)(int)uVar7);
        }
        if (uVar7 == 0) {
          return uVar1;
        }
      }
      uVar1 = *puVar9;
    }
  }
  return -1;
}

