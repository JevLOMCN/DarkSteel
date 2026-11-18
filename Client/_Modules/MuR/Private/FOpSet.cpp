// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// FOpSet @ 14aa93020

FOpSet * __thiscall UE::Mutable::Private::FOpSet::FOpSet(FOpSet *this,int param_1)

{
  (this->Index0).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->Index0).NumBits = 0;
  (this->Index0).MaxBits = 0x80;
  *(undefined8 *)&(this->IndexOther).Elements = 0;
  *(undefined8 *)&(this->IndexOther).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IndexOther).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IndexOther).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IndexOther).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IndexOther).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndexOther).Elements.field_0x34 = 0;
  (this->IndexOther).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IndexOther).HashSize = 0;
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(&this->Index0,param_1,false);
  return this;
}

// Add @ 14aab99f0

void __thiscall UE::Mutable::Private::FOpSet::Add(FOpSet *this,FCacheAddressInline *param_1)

{
  uint *puVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  FCacheAddressInline local_res10 [3];
  
  if (param_1->ExecutionIndex != 0) {
    TSet<UE::Mutable::Private::FCacheAddressInline,DefaultKeyFuncs<UE::Mutable::Private::FCacheAddressInline,0>,FDefaultSetAllocator>
    ::Emplace<UE::Mutable::Private::FCacheAddressInline_const_&>
              (&this->IndexOther,local_res10,(bool *)param_1);
    return;
  }
  uVar2 = param_1->At;
  if (((int)uVar2 < 0) || ((this->Index0).NumBits <= (int)uVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar3 = (this->Index0).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    this = (FOpSet *)FVar3;
  }
  puVar1 = (uint *)((longlong)this +
                   (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}

// Contains @ 14aac1fc0

bool __thiscall UE::Mutable::Private::FOpSet::Contains(FOpSet *this,FCacheAddressInline *param_1)

{
  ushort uVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  
  uVar1 = param_1->ExecutionIndex;
  if (uVar1 == 0) {
    uVar2 = param_1->At;
    if (((int)uVar2 < 0) || ((this->Index0).NumBits <= (int)uVar2)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    FVar3 = (this->Index0).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      this = (FOpSet *)FVar3;
    }
    return (*(uint *)((longlong)this +
                     (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
            (uVar2 & 0x1f) & 1) != 0;
  }
  uVar2 = param_1->At;
  if (*(int *)&(this->IndexOther).Elements.field_0x8 !=
      *(int *)&(this->IndexOther).Elements.field_0x34) {
    FVar10 = (this->IndexOther).Hash.SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&(this->IndexOther).Hash;
    }
    iVar9 = *(int *)((longlong)FVar10 +
                    (ulonglong)
                    ((this->IndexOther).HashSize - 1U &
                    (uVar1 + 0x9e3779b9 + uVar2 * 0x40 + (uVar2 >> 2) ^ uVar2)) * 4);
    if (iVar9 != -1) {
      lVar4 = *(longlong *)&(this->IndexOther).Elements;
      do {
        lVar8 = (longlong)iVar9;
        if ((*(uint *)(lVar4 + lVar8 * 0x10) == uVar2) &&
           (*(ushort *)(lVar4 + 4 + lVar8 * 0x10) == uVar1)) goto LAB_14aac20b2;
        iVar9 = *(int *)(lVar4 + 8 + lVar8 * 0x10);
      } while (iVar9 != -1);
    }
  }
  iVar9 = -1;
LAB_14aac20b2:
  return iVar9 != -1;
}

