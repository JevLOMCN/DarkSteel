// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FUniquePageList @ 1458ccbf0

FUniquePageList * __thiscall FUniquePageList::FUniquePageList(FUniquePageList *this)

{
  this->bInitialized = false;
  this->NumPages = 0;
  this->MaxNumCollisions = 0;
  return this;
}

// Add @ 1458d76b0

void __thiscall FUniquePageList::Add(FUniquePageList *this,uint param_1,uint param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar4 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar2 = (ulonglong)((uVar4 >> 0x10 ^ uVar4) & 0x3fff);
  uVar1 = this->HashIndices[uVar2];
  while( true ) {
    if (uVar1 == 0xffff) {
      uVar4 = this->NumPages;
      if (uVar4 < 0x2000) {
        this->NumPages = uVar4 + 1;
        this->HashIndices[uVar2] = (ushort)uVar4;
        this->Pages[uVar4] = param_1;
        this->Counts[uVar4] = (ushort)param_2;
      }
      return;
    }
    if (this->Pages[uVar1] == param_1) break;
    uVar2 = (ulonglong)((int)uVar2 + 1U & 0x3fff);
    uVar1 = this->HashIndices[uVar2];
  }
  uVar4 = this->Counts[uVar1] + param_2;
  uVar3 = 0xffff;
  if (uVar4 < 0xffff) {
    uVar3 = (ushort)uVar4;
  }
  this->Counts[uVar1] = uVar3;
  return;
}

// Initialize @ 14590d9b0

void __thiscall FUniquePageList::Initialize(FUniquePageList *this)

{
  if (this->bInitialized == false) {
    memset(this->HashIndices,0xff,0x8000);
    this->bInitialized = true;
  }
  return;
}

// MergePages @ 145912660

void __thiscall FUniquePageList::MergePages(FUniquePageList *this,FUniquePageList *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  
  if (param_1->NumPages != 0) {
    puVar8 = param_1->Pages;
    puVar6 = param_1->Counts;
    uVar7 = (ulonglong)param_1->NumPages;
    do {
      uVar5 = *puVar8;
      uVar2 = *puVar6;
      uVar4 = (uVar5 >> 0x10 ^ uVar5) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar3 = (ulonglong)((uVar4 >> 0x10 ^ uVar4) & 0x3fff);
      uVar1 = this->HashIndices[uVar3];
      while (uVar1 != 0xffff) {
        if (this->Pages[uVar1] == uVar5) {
          uVar5 = (uint)this->Counts[uVar1] + (uint)uVar2;
          uVar2 = 0xffff;
          if (uVar5 < 0xffff) {
            uVar2 = (ushort)uVar5;
          }
          this->Counts[uVar1] = uVar2;
          goto LAB_145912719;
        }
        uVar3 = (ulonglong)((int)uVar3 + 1U & 0x3fff);
        uVar1 = this->HashIndices[uVar3];
      }
      uVar4 = this->NumPages;
      if (uVar4 < 0x2000) {
        this->NumPages = uVar4 + 1;
        this->HashIndices[uVar3] = (ushort)uVar4;
        this->Pages[uVar4] = uVar5;
        this->Counts[uVar4] = uVar2;
      }
LAB_145912719:
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

