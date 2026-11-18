// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FSchemaPacker @ 1420118b0

FSchemaPacker * __thiscall
UE::GC::FSchemaPacker::FSchemaPacker
          (FSchemaPacker *this,TArrayView<UE::GC::FMemberDeclaration,int> *param_1)

{
  int *piVar1;
  FMemberDeclaration *pFVar2;
  undefined8 *puVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  FSchemaPacker *pFVar9;
  ForElementType<UE::GC::FMemberWord> FVar10;
  ForElementType<UE::GC::FMemberWord> FVar11;
  ushort *puVar12;
  ForElementType<UE::GC::FMemberWord> FVar13;
  FMemberDeclaration *pFVar14;
  undefined4 local_res8;
  
  pFVar14 = param_1->DataPtr;
  piVar1 = &(this->Words).ArrayMax;
  (this->Words).AllocatorInstance.SecondaryData = (ForElementType<UE::GC::FMemberWord>)0x0;
  *piVar1 = 0x10;
  (this->DebugNames).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->DebugNames).ArrayNum = 0;
  *(undefined8 *)&(this->DebugNames).ArrayMax = 0x40;
  this->QuadIdx = 0;
  this->JumpWordPos = 0;
  (this->Words).ArrayNum = 1;
  FVar13 = (this->Words).AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<UE::GC::FMemberWord>)this;
  if (FVar13 != (ForElementType<UE::GC::FMemberWord>)0x0) {
    FVar11 = FVar13;
  }
  *(undefined8 *)FVar11 = 0;
  iVar8 = param_1->ArrayNum;
  this->WordIdx = 0;
  pFVar2 = pFVar14 + iVar8;
  if (pFVar14 != pFVar2) {
    FVar13 = (ForElementType<UE::GC::FMemberWord>)&pFVar14->ExtraWord;
    do {
      uVar4 = *(uint *)((longlong)FVar13 + -8);
      if ((1 << (*(byte *)((longlong)FVar13 + -4) & 0x1f) & 0x6001U) == 0) {
        uVar7 = GenerateJumps(this,uVar4);
      }
      else {
        uVar7 = (ushort)uVar4;
        if ((uVar4 != (uVar4 & 0xffff)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FSchemaPacker *)(*pcVar5)();
          return pFVar9;
        }
      }
      if (*(EMemberType *)((longlong)FVar13 + -4) == StructArray) {
        puVar12 = (ushort *)(*(ulonglong *)FVar13 & 0xfffffffffffffffe);
        if (((((byte)*puVar12 & 0x1f) != 2) || ((puVar12[1] & 0x1f) != 0)) ||
           (0xffff < *(uint *)(puVar12 + -4) >> 3)) goto LAB_142011a49;
        local_res8 = CONCAT22((short)(*(uint *)(puVar12 + -4) >> 3),*puVar12 >> 5);
        AddNamedMember(this,StridedArray,uVar7,pFVar14->DebugName);
        iVar8 = (this->Words).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::FMemberWord>_>
                            (0x808,(ForElementType<UE::GC::FMemberWord> *)this,piVar1);
        }
        (this->Words).ArrayNum = iVar8 + 1;
        FVar11 = (this->Words).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<UE::GC::FMemberWord>)this;
        if (FVar11 != (ForElementType<UE::GC::FMemberWord>)0x0) {
          FVar10 = FVar11;
        }
        puVar3 = (undefined8 *)((longlong)FVar10 + (longlong)iVar8 * 8);
        *puVar3 = 0;
        *(undefined4 *)puVar3 = local_res8;
      }
      else {
LAB_142011a49:
        AddNamedMember(this,*(EMemberType *)((longlong)FVar13 + -4),uVar7,pFVar14->DebugName);
        if ((1 << (*(byte *)((longlong)FVar13 + -4) & 0x1f) & 0xac70U) != 0) {
          FVar11 = (this->Words).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<UE::GC::FMemberWord>)this;
          if (FVar11 != (ForElementType<UE::GC::FMemberWord>)0x0) {
            FVar10 = FVar11;
          }
          if ((ulonglong)FVar10 <= (ulonglong)FVar13) {
            FVar10 = (ForElementType<UE::GC::FMemberWord>)this;
            if (FVar11 != (ForElementType<UE::GC::FMemberWord>)0x0) {
              FVar10 = FVar11;
            }
            if (((ulonglong)FVar13 < (ulonglong)((longlong)FVar10 + (longlong)*piVar1 * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FSchemaPacker *)(*pcVar5)();
              return pFVar9;
            }
          }
          iVar8 = (this->Words).ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::FMemberWord>_>
                              (0x808,(ForElementType<UE::GC::FMemberWord> *)this,piVar1);
          }
          (this->Words).ArrayNum = iVar8 + 1;
          FVar11 = (this->Words).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<UE::GC::FMemberWord>)this;
          if (FVar11 != (ForElementType<UE::GC::FMemberWord>)0x0) {
            FVar10 = FVar11;
          }
          *(ulonglong *)((longlong)FVar10 + (longlong)iVar8 * 8) = *(ulonglong *)FVar13;
        }
      }
      pFVar14 = pFVar14 + 1;
      FVar13 = (ForElementType<UE::GC::FMemberWord>)((longlong)FVar13 + 0x18);
    } while (pFVar14 != pFVar2);
  }
  return this;
}

// AddMember @ 142017d30

void __thiscall
UE::GC::FSchemaPacker::AddMember(FSchemaPacker *this,EMemberType param_1,ushort param_2)

{
  int *piVar1;
  uint uVar2;
  ForElementType<UE::GC::FMemberWord> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::GC::FMemberWord> FVar7;
  uint uVar8;
  
  if ((0x7ff < param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset < OffsetRange",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,0x1c0,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->QuadIdx == 4) {
    iVar6 = (this->Words).ArrayNum;
    piVar1 = &(this->Words).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::FMemberWord>_>
                        (0x808,(ForElementType<UE::GC::FMemberWord> *)this,piVar1);
    }
    (this->Words).ArrayNum = iVar6 + 1;
    FVar3 = (this->Words).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<UE::GC::FMemberWord>)this;
    if (FVar3 != (ForElementType<UE::GC::FMemberWord>)0x0) {
      FVar7 = FVar3;
    }
    *(undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 8) = 0;
    this->WordIdx = iVar6;
    this->QuadIdx = 0;
  }
  if ((MemberARO < param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint8)Type < MemberTypeCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,0x23,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = this->WordIdx;
  uVar8 = 0;
  if ((int)uVar2 < (this->Words).ArrayNum) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->Words).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<UE::GC::FMemberWord>)this;
  if (FVar3 != (ForElementType<UE::GC::FMemberWord>)0x0) {
    FVar7 = FVar3;
  }
  *(ushort *)((longlong)FVar7 + ((longlong)this->QuadIdx + (longlong)(int)uVar2 * 4) * 2) =
       (ushort)(param_1 & (Count|MemberARO)) | param_2 << 5;
  this->QuadIdx = this->QuadIdx + 1;
  return;
}

// AddNamedMember @ 142017ed0

void __thiscall
UE::GC::FSchemaPacker::AddNamedMember
          (FSchemaPacker *this,EMemberType param_1,ushort param_2,FName param_3)

{
  TArray<FName,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FName> FVar6;
  FName local_res20;
  
  local_res20 = param_3;
  AddMember(this,param_1,param_2);
  FVar6 = (this->DebugNames).AllocatorInstance.SecondaryData;
  pTVar1 = &this->DebugNames;
  if (FVar6 == (ForElementType<FName>)0x0) {
    FVar6 = (ForElementType<FName>)pTVar1;
  }
  if (((ulonglong)FVar6 <= &local_res20) &&
     (&local_res20 < (FName *)((longlong)FVar6 + (longlong)(this->DebugNames).ArrayMax * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DebugNames).ArrayNum;
  piVar2 = &(this->DebugNames).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                      (0x408,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->DebugNames).ArrayNum = iVar5 + 1;
  FVar6 = (this->DebugNames).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FName>)0x0) {
    FVar6 = (ForElementType<FName>)pTVar1;
  }
  *(FName *)((longlong)FVar6 + (longlong)iVar5 * 8) = local_res20;
  return;
}

// GenerateJump @ 1420543d0

void __thiscall UE::GC::FSchemaPacker::GenerateJump(FSchemaPacker *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  if (0x7fe < param_1 - 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("JumpUnit > 0 && JumpUnit < OffsetRange",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                       ,0x1af,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = param_1 - 1;
  if (uVar1 != (uVar1 & 0xffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AddMember(this,Jump,(ushort)uVar1);
  this->JumpWordPos = this->JumpWordPos + (ulonglong)(param_1 << 0xb);
  return;
}

// GenerateJumps @ 142054480

ushort __thiscall UE::GC::FSchemaPacker::GenerateJumps(FSchemaPacker *this,uint param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  if (((param_1 & 7) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ByteOffset % 8 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,0x197,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar5 = (ulonglong)(param_1 >> 3);
  if ((uVar5 < this->JumpWordPos) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ByteOffset / 8 >= JumpWordPos",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,0x198,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar1 = this->JumpWordPos;
  if ((uVar1 != (uVar1 & 0xffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar7 = (param_1 >> 3) - (int)uVar1;
  for (uVar6 = uVar7 >> 0x16; uVar6 != 0; uVar6 = uVar6 - 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("JumpUnit > 0 && JumpUnit < OffsetRange",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                       ,0x1af,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    AddMember(this,Jump,0x7ff);
    this->JumpWordPos = this->JumpWordPos + 0x400000;
  }
  uVar6 = uVar7 >> 0xb & 0x7ff;
  if (uVar6 != 0) {
    GenerateJump(this,uVar6);
  }
  if ((uVar5 < this->JumpWordPos) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ByteOffset / 8 >= JumpWordPos",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,0x1a7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if ((this->JumpWordPos + 0x800 <= uVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ByteOffset / 8 < JumpWordPos + OffsetRange",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,0x1a8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return (ushort)uVar7 & 0x7ff;
}

