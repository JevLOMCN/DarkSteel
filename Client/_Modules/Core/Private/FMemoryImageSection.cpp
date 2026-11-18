// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// ComputeHash @ 1419e5d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMemoryImageSection::ComputeHash(FMemoryImageSection *this)

{
  undefined1 auStack_c8 [32];
  FSHA1 local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FSHA1::FSHA1(&local_a8);
  FSHA1::Update(&local_a8,(uchar *)(this->Bytes).AllocatorInstance.Data,
                (longlong)(this->Bytes).ArrayNum);
  FSHA1::Update(&local_a8,(uchar *)(this->Pointers).AllocatorInstance.Data,
                (ulonglong)(uint)((this->Pointers).ArrayNum * 0xc));
  FSHA1::Update(&local_a8,(uchar *)(this->VTables).AllocatorInstance.Data,
                (ulonglong)(uint)((this->VTables).ArrayNum << 4));
  UpdateHashNamePatches(&this->ScriptNames,&local_a8);
  UpdateHashNamePatches(&this->MemoryImageNames,&local_a8);
  FSHA1::Final(&local_a8);
  FSHA1::GetHash(&local_a8,(this->Hash).Hash);
  FSHA1::~FSHA1(&local_a8);
  return;
}

// Flatten @ 1419fab30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall FMemoryImageSection::Flatten(FMemoryImageSection *this,FMemoryImageResult *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  uVar13 = (param_1->Bytes).ArrayNum + -1 + this->MaxAlignment & -this->MaxAlignment;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&param_1->Bytes,(this->Bytes).ArrayNum + uVar13,Default);
  iVar2 = (this->Bytes).ArrayNum;
  pFVar11 = (this->Bytes).AllocatorInstance.Data;
  uVar8 = 0;
  if ((int)uVar13 < (param_1->Bytes).ArrayNum) {
    uVar8 = ~uVar13 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return uVar8;
    }
  }
  memcpy((param_1->Bytes).AllocatorInstance.Data + (int)uVar13,pFVar11,(longlong)iVar2);
  iVar2 = (param_1->VTables).ArrayNum;
  uVar8 = (this->VTables).ArrayNum + iVar2;
  if (-1 < (int)uVar8) {
    piVar1 = &(param_1->VTables).ArrayMax;
    if (*piVar1 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar8,&(param_1->VTables).AllocatorInstance,iVar2,piVar1);
    }
    iVar2 = (this->VTables).ArrayNum;
    pFVar11 = (this->VTables).AllocatorInstance.Data;
    pFVar12 = pFVar11 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->VTables).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMemoryImageVTablePointer_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar11 == pFVar12) break;
      pFVar3 = (param_1->VTables).AllocatorInstance.Data;
      if ((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + (longlong)*piVar1 * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return uVar8;
        }
      }
      iVar9 = (param_1->VTables).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(param_1->VTables).AllocatorInstance,piVar1);
        (param_1->VTables).ArrayNum = iVar9;
      }
      (param_1->VTables).ArrayNum = iVar9 + 1;
      uVar6 = *(undefined8 *)(pFVar11 + 8);
      pFVar4 = (param_1->VTables).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar3 + 8) = uVar6;
      pFVar4 = pFVar4 + (longlong)iVar9 * 0x10 + 0xc;
      *(uint *)pFVar4 = *(int *)pFVar4 + uVar13;
      pFVar11 = pFVar11 + 0x10;
    }
    iVar2 = (param_1->ScriptNames).ArrayNum;
    uVar8 = (this->ScriptNames).ArrayNum + iVar2;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar1 = &(param_1->ScriptNames).ArrayMax;
    if ((param_1->ScriptNames).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar8,&(param_1->ScriptNames).AllocatorInstance,iVar2,piVar1);
    }
    iVar2 = (this->ScriptNames).ArrayNum;
    pFVar12 = (this->ScriptNames).AllocatorInstance.Data;
    pFVar11 = pFVar12 + (longlong)iVar2 * 0xc;
    while( true ) {
      if ((this->ScriptNames).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FMemoryImageNamePointer_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar12 == pFVar11) break;
      pFVar3 = (param_1->ScriptNames).AllocatorInstance.Data;
      if ((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + (longlong)*piVar1 * 0xc)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return uVar8;
        }
      }
      iVar9 = (param_1->ScriptNames).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&(param_1->ScriptNames).AllocatorInstance,piVar1);
        (param_1->ScriptNames).ArrayNum = iVar9;
      }
      lVar10 = (longlong)iVar9;
      (param_1->ScriptNames).ArrayNum = iVar9 + 1;
      pFVar3 = (param_1->ScriptNames).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + lVar10 * 0xc) = *(undefined8 *)pFVar12;
      *(undefined4 *)(pFVar3 + lVar10 * 0xc + 8) = *(undefined4 *)(pFVar12 + 8);
      *(uint *)(pFVar3 + lVar10 * 0xc + 8) = *(int *)(pFVar3 + lVar10 * 0xc + 8) + uVar13;
      pFVar12 = pFVar12 + 0xc;
    }
    iVar2 = (param_1->MemoryImageNames).ArrayNum;
    uVar8 = (this->MemoryImageNames).ArrayNum + iVar2;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar1 = &(param_1->MemoryImageNames).ArrayMax;
    if ((param_1->MemoryImageNames).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar8,&(param_1->MemoryImageNames).AllocatorInstance,iVar2,piVar1);
    }
    iVar2 = (this->MemoryImageNames).ArrayNum;
    pFVar12 = (this->MemoryImageNames).AllocatorInstance.Data;
    pFVar11 = pFVar12 + (longlong)iVar2 * 0xc;
    while( true ) {
      if ((this->MemoryImageNames).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FMemoryImageNamePointer_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar11) break;
      pFVar3 = (param_1->MemoryImageNames).AllocatorInstance.Data;
      if ((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + (longlong)*piVar1 * 0xc)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return uVar8;
        }
      }
      iVar9 = (param_1->MemoryImageNames).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&(param_1->MemoryImageNames).AllocatorInstance,piVar1);
        (param_1->MemoryImageNames).ArrayNum = iVar9;
      }
      lVar10 = (longlong)iVar9;
      (param_1->MemoryImageNames).ArrayNum = iVar9 + 1;
      pFVar3 = (param_1->MemoryImageNames).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + lVar10 * 0xc) = *(undefined8 *)pFVar12;
      *(undefined4 *)(pFVar3 + lVar10 * 0xc + 8) = *(undefined4 *)(pFVar12 + 8);
      *(uint *)(pFVar3 + lVar10 * 0xc + 8) = *(int *)(pFVar3 + lVar10 * 0xc + 8) + uVar13;
      pFVar12 = pFVar12 + 0xc;
    }
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
}

// WriteFMemoryImageName @ 141a30560

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall
FMemoryImageSection::WriteFMemoryImageName(FMemoryImageSection *this,int param_1,FName *param_2)

{
  int *piVar1;
  FName *pFVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (this->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->Bytes,param_1 + uVar3,Default);
  if (*param_2 != (FName)0x0) {
    iVar4 = (this->MemoryImageNames).ArrayNum;
    piVar1 = &(this->MemoryImageNames).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&(this->MemoryImageNames).AllocatorInstance,piVar1);
    }
    (this->MemoryImageNames).ArrayNum = iVar4 + 1;
    pFVar2 = (FName *)((this->MemoryImageNames).AllocatorInstance.Data + (longlong)iVar4 * 0xc);
    DefaultConstructItems<FMemoryImageNamePointer,int>(pFVar2,1);
    *pFVar2 = *param_2;
    pFVar2[1].ComparisonIndex.Value = uVar3;
  }
  return uVar3;
}

// WriteFScriptName @ 141a30810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall
FMemoryImageSection::WriteFScriptName(FMemoryImageSection *this,FScriptName *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_18;
  
  uVar4 = (this->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->Bytes,uVar4 + 0xc,Default);
  if (((param_1->ComparisonIndex).Value != 0) || (param_1->Number != 0)) {
    iVar5 = (this->ScriptNames).ArrayNum;
    piVar1 = &(this->ScriptNames).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&(this->ScriptNames).AllocatorInstance,piVar1);
    }
    (this->ScriptNames).ArrayNum = iVar5 + 1;
    pFVar2 = (this->ScriptNames).AllocatorInstance.Data + (longlong)iVar5 * 0xc;
    DefaultConstructItems<FMemoryImageNamePointer,int>(pFVar2,1);
    uVar3 = param_1->ComparisonIndex;
    *(ulonglong *)pFVar2 = CONCAT44(param_1->Number,uVar3);
    *(uint *)(pFVar2 + 8) = uVar4;
  }
  return uVar4;
}

// WritePointer @ 141a336b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMemoryImageSection * __thiscall
FMemoryImageSection::WritePointer
          (FMemoryImageSection *this,FTypeLayoutDesc *param_1,FTypeLayoutDesc *param_2,uint *param_3
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FMemoryImageSection *pFVar8;
  uint local_res8 [2];
  
  iVar7 = (this->Pointers).ArrayNum;
  piVar1 = &(this->Pointers).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->Pointers).AllocatorInstance,piVar1);
  }
  local_res8[0] = 0;
  (this->Pointers).ArrayNum = iVar7 + 1;
  pFVar2 = (this->Pointers).AllocatorInstance.Data + (longlong)iVar7 * 0xc;
  bVar6 = TryGetOffsetToBase(param_2,param_1,local_res8);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                       ,0x175,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMemoryImageSection *)(*pcVar4)();
      return pFVar8;
    }
  }
  uVar5 = local_res8[0];
  if (param_3 == (uint *)0x0) {
    if (param_1 == param_2) goto LAB_141a33791;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutOffsetToBase || bStaticTypeMatchesDerived",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                       ,0x75b,
                       L"Must consider OffsetToBase if static/derived types are different, %s/%s");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMemoryImageSection *)(*pcVar4)();
      return pFVar8;
    }
  }
  else {
    *param_3 = local_res8[0];
    if (param_1 == param_2) goto LAB_141a33791;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("TypeDependencyIndex != INDEX_NONE || bStaticTypeMatchesDerived",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                     ,0x760,
                     L"Unable to store pointer to derived type %s, different from static type %s\nEnsure UE_MEMORYIMAGE_TRACK_TYPE_DEPENDENCIES is set\nMake sure derived type is not declared using DECLARE_INLINE_TYPE_LAYOUT()"
                    );
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMemoryImageSection *)(*pcVar4)();
    return pFVar8;
  }
LAB_141a33791:
  uVar3 = (this->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Bytes,uVar3 + 8,Default);
  *(undefined8 *)((this->Bytes).AllocatorInstance.Data + uVar3) = 0;
  *(uint *)(pFVar2 + 8) = uVar3;
  *(uint *)(pFVar2 + 4) = uVar5;
  *(int *)pFVar2 = (this->ParentImage->Sections).ArrayNum;
  pFVar8 = FMemoryImage::AllocateSection(this->ParentImage);
  return pFVar8;
}

// WriteRawPointerSizedBytes @ 141a338a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall
FMemoryImageSection::WriteRawPointerSizedBytes(FMemoryImageSection *this,ulong64 param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar1;
  
  uVar1 = (this->Bytes).ArrayNum;
  this_00 = &this->Bytes;
  if (((this->ParentImage->TargetLayoutParameters).Flags & 2) != 0) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (this_00,uVar1 + 4,Default);
    *(int *)((this_00->AllocatorInstance).Data + uVar1) = (int)param_1;
    return uVar1;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,uVar1 + 8,Default);
  *(ulong64 *)((this_00->AllocatorInstance).Data + uVar1) = param_1;
  return uVar1;
}

// WriteVTable @ 141a33d90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall
FMemoryImageSection::WriteVTable
          (FMemoryImageSection *this,FTypeLayoutDesc *param_1,FTypeLayoutDesc *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint local_res8 [2];
  
  if (param_2->NameHash == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DerivedTypeDesc.NameHash != 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                       ,0x77b,L"Type %s is not registered");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if (param_2->Interface != Virtual) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DerivedTypeDesc.Interface == ETypeLayoutInterface::Virtual",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                       ,0x77c,L"Type %s is not virtual");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  iVar5 = (this->VTables).ArrayNum;
  piVar1 = &(this->VTables).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->VTables).AllocatorInstance,piVar1);
  }
  (this->VTables).ArrayNum = iVar5 + 1;
  uVar4 = (this->Bytes).ArrayNum;
  pFVar6 = (this->VTables).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  if (((this->ParentImage->TargetLayoutParameters).Flags & 2) == 0) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Bytes,uVar4 + 8,Default);
    *(undefined8 *)((this->Bytes).AllocatorInstance.Data + uVar4) = 0xffffffffffffffff;
  }
  else {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Bytes,uVar4 + 4,Default);
    *(undefined4 *)((this->Bytes).AllocatorInstance.Data + uVar4) = 0xffffffff;
  }
  *(uint *)(pFVar6 + 0xc) = uVar4;
  *(ulong64 *)pFVar6 = param_2->NameHash;
  local_res8[0] = 0;
  bVar3 = TryGetOffsetToBase(param_2,param_1,local_res8);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                       ,0x175,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  *(uint *)(pFVar6 + 8) = local_res8[0];
  return *(uint *)(pFVar6 + 0xc);
}

