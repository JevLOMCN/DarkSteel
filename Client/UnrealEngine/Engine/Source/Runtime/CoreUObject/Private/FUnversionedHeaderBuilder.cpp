// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// Finalize @ 141f7a9a0

void __thiscall FUnversionedHeaderBuilder::Finalize(FUnversionedHeaderBuilder *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FUnversionedHeaderBuilder *pFVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  puVar1 = &this->field_0x88;
  uVar5 = *(int *)puVar1 - 1;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)puVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar4 = this;
  if (*(FUnversionedHeaderBuilder **)&this->field_0x80 != (FUnversionedHeaderBuilder *)0x0) {
    pFVar4 = *(FUnversionedHeaderBuilder **)&this->field_0x80;
  }
  if (*(char *)((longlong)pFVar4 + (longlong)*(int *)puVar1 * 4 + -3) == '\0') {
    uVar6 = (uint)*(byte *)((longlong)pFVar4 + (longlong)*(int *)puVar1 * 4 + -2);
    TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
              ((TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
               &this->field_0x98,*(int *)&this->field_0xc0 - uVar6,uVar6);
  }
  iVar7 = *(int *)puVar1;
  while (1 < iVar7) {
    uVar6 = 0;
    if (iVar7 + -1 < iVar7) {
      uVar6 = (uint)-iVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = *(int *)puVar1;
    pFVar4 = this;
    if (*(FUnversionedHeaderBuilder **)&this->field_0x80 != (FUnversionedHeaderBuilder *)0x0) {
      pFVar4 = *(FUnversionedHeaderBuilder **)&this->field_0x80;
    }
    if (*(char *)((longlong)pFVar4 + ((longlong)iVar7 + -1) * 4 + 2) != '\0') break;
    uVar6 = 0;
    if ((int)(iVar7 - 1U) < iVar7) {
      uVar6 = ~(iVar7 - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = this;
    if (*(FUnversionedHeaderBuilder **)&this->field_0x80 != (FUnversionedHeaderBuilder *)0x0) {
      pFVar4 = *(FUnversionedHeaderBuilder **)&this->field_0x80;
    }
    if ((*(char *)((longlong)pFVar4 + (longlong)*(int *)puVar1 * 4 + -3) != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Fragments.Last().bHasAnyZeroes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                           ,0x373,L"No values implies no zero-values"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(int *)puVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = this;
    if (*(FUnversionedHeaderBuilder **)&this->field_0x80 != (FUnversionedHeaderBuilder *)0x0) {
      pFVar4 = *(FUnversionedHeaderBuilder **)&this->field_0x80;
    }
    uVar6 = *(int *)puVar1 - 1;
    iVar7 = ~uVar6 + *(int *)puVar1;
    if (iVar7 != 0) {
      memmove(&pFVar4->field_0x0 + (longlong)(int)uVar6 * 4,
              (void *)((longlong)(&pFVar4->field_0x0 + (longlong)(int)uVar6 * 4) + 4),
              (longlong)iVar7 << 2);
    }
    *(int *)puVar1 = *(int *)puVar1 + -1;
    iVar7 = *(int *)puVar1;
  }
  uVar6 = 0;
  if ((int)(iVar7 - 1U) < iVar7) {
    uVar6 = ~(iVar7 - 1U) >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(FUnversionedHeaderBuilder **)&this->field_0x80 != (FUnversionedHeaderBuilder *)0x0) {
    this = *(FUnversionedHeaderBuilder **)&this->field_0x80;
  }
  *(undefined1 *)((longlong)this + (longlong)*(int *)puVar1 * 4 + -1) = 1;
  return;
}

// IncludeProperty @ 141f8d7a0

void __thiscall
FUnversionedHeaderBuilder::IncludeProperty(FUnversionedHeaderBuilder *this,bool param_1)

{
  char *pcVar1;
  byte *pbVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  FUnversionedHeaderBuilder *pFVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  uVar9 = *(int *)&this->field_0x88 - 1;
  uVar8 = 0;
  if ((int)uVar9 < *(int *)&this->field_0x88) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x88;
  pFVar7 = this;
  if (*(FUnversionedHeaderBuilder **)&this->field_0x80 != (FUnversionedHeaderBuilder *)0x0) {
    pFVar7 = *(FUnversionedHeaderBuilder **)&this->field_0x80;
  }
  if (*(char *)((longlong)pFVar7 + ((longlong)iVar5 + -1) * 4 + 2) == '\x7f') {
    uVar8 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar8 = ~(iVar5 - 1U) >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar7 = this;
    if (*(FUnversionedHeaderBuilder **)&this->field_0x80 != (FUnversionedHeaderBuilder *)0x0) {
      pFVar7 = *(FUnversionedHeaderBuilder **)&this->field_0x80;
    }
    if (*(char *)((longlong)pFVar7 + (longlong)*(int *)&this->field_0x88 * 4 + -3) == '\0') {
      uVar8 = (uint)*(byte *)((longlong)pFVar7 + (longlong)*(int *)&this->field_0x88 * 4 + -2);
      TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
                ((TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                 &this->field_0x98,*(int *)&this->field_0xc0 - uVar8,uVar8);
    }
    TArray<FUnversionedHeader::FFragment,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
    ::AddDefaulted((TArray<FUnversionedHeader::FFragment,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                    *)this);
  }
  uVar9 = *(int *)&this->field_0x88 - 1;
  uVar8 = 0;
  if ((int)uVar9 < *(int *)&this->field_0x88) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = this;
  if (*(FUnversionedHeaderBuilder **)&this->field_0x80 != (FUnversionedHeaderBuilder *)0x0) {
    pFVar7 = *(FUnversionedHeaderBuilder **)&this->field_0x80;
  }
  pcVar1 = (char *)((longlong)pFVar7 + (longlong)*(int *)&this->field_0x88 * 4 + -2);
  *pcVar1 = *pcVar1 + '\x01';
  uVar9 = *(int *)&this->field_0x88 - 1;
  uVar8 = 0;
  if ((int)uVar9 < *(int *)&this->field_0x88) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = this;
  if (*(FUnversionedHeaderBuilder **)&this->field_0x80 != (FUnversionedHeaderBuilder *)0x0) {
    pFVar7 = *(FUnversionedHeaderBuilder **)&this->field_0x80;
  }
  pbVar2 = (byte *)((longlong)pFVar7 + (longlong)*(int *)&this->field_0x88 * 4 + -3);
  *pbVar2 = *pbVar2 | param_1;
  iVar5 = TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                    ((TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                     &this->field_0x98,1);
  uVar8 = iVar5 >> 0x1f & 0x1f;
  iVar5 = iVar5 + uVar8;
  bVar6 = ((byte)iVar5 & 0x1f) - (char)uVar8;
  puVar10 = *(undefined1 **)&this->field_0xb8;
  if (*(undefined1 **)&this->field_0xb8 == (undefined1 *)0x0) {
    puVar10 = &this->field_0x98;
  }
  *(uint *)(puVar10 + (longlong)(iVar5 >> 5) * 4) =
       ~(1 << (bVar6 & 0x1f)) & *(uint *)(puVar10 + (longlong)(iVar5 >> 5) * 4) |
       (uint)param_1 << (bVar6 & 0x1f);
  this->field_0x90 = this->field_0x90 | !param_1;
  return;
}

