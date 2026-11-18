// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 23

// FMemoryImageWriter @ 1419ce580

FMemoryImageWriter * __thiscall
FMemoryImageWriter::FMemoryImageWriter(FMemoryImageWriter *this,FMemoryImage *param_1)

{
  FMemoryImageSection *pFVar1;
  
  pFVar1 = FMemoryImage::AllocateSection(param_1);
  this->Section = pFVar1;
  return this;
}

// FMemoryImageWriter @ 1419ce5b0

FMemoryImageWriter * __thiscall
FMemoryImageWriter::FMemoryImageWriter(FMemoryImageWriter *this,FMemoryImageSection *param_1)

{
  this->Section = param_1;
  return this;
}

// ~FMemoryImageWriter @ 1419d2bb0

void __thiscall FMemoryImageWriter::~FMemoryImageWriter(FMemoryImageWriter *this)

{
  return;
}

// AddTypeDependency @ 1419de950

int __thiscall
FMemoryImageWriter::AddTypeDependency(FMemoryImageWriter *this,FTypeLayoutDesc *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->Section->ParentImage->PointerTable == (FPointerTableBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PointerTable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x127,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return -1;
}

// GetHostLayoutParams @ 1419ffb60

FPlatformTypeLayoutParameters * __thiscall
FMemoryImageWriter::GetHostLayoutParams(FMemoryImageWriter *this)

{
  return &this->Section->ParentImage->HostLayoutParameters;
}

// GetImage @ 1419fffc0

FMemoryImage * __thiscall FMemoryImageWriter::GetImage(FMemoryImageWriter *this)

{
  return this->Section->ParentImage;
}

// GetOffset @ 141a01340

uint __thiscall FMemoryImageWriter::GetOffset(FMemoryImageWriter *this)

{
  return (this->Section->Bytes).ArrayNum;
}

// GetPointerTable @ 141a01ba0

FPointerTableBase * __thiscall FMemoryImageWriter::GetPointerTable(FMemoryImageWriter *this)

{
  FMemoryImage *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPointerTableBase *pFVar4;
  
  pFVar1 = this->Section->ParentImage;
  if (pFVar1->PointerTable == (FPointerTableBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PointerTable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x127,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPointerTableBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar1->PointerTable;
}

// GetTargetLayoutParams @ 141a04590

FPlatformTypeLayoutParameters * __thiscall
FMemoryImageWriter::GetTargetLayoutParams(FMemoryImageWriter *this)

{
  return &this->Section->ParentImage->TargetLayoutParameters;
}

// TryGetPrevPointerTable @ 141a25a10

FPointerTableBase * __thiscall FMemoryImageWriter::TryGetPrevPointerTable(FMemoryImageWriter *this)

{
  return this->Section->ParentImage->PrevPointerTable;
}

// WriteAlignment @ 141a2ff70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall FMemoryImageWriter::WriteAlignment(FMemoryImageWriter *this,uint param_1)

{
  FMemoryImageSection *pFVar1;
  uint uVar2;
  
  pFVar1 = this->Section;
  uVar2 = (param_1 - 1) + (pFVar1->Bytes).ArrayNum & -param_1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(&pFVar1->Bytes,uVar2,Default);
  if (param_1 < pFVar1->MaxAlignment) {
    param_1 = pFVar1->MaxAlignment;
  }
  pFVar1->MaxAlignment = param_1;
  return uVar2;
}

// WriteBytes @ 141a300f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall FMemoryImageWriter::WriteBytes(FMemoryImageWriter *this,void *param_1,uint param_2)

{
  uint uVar1;
  FMemoryImageSection *pFVar2;
  
  pFVar2 = this->Section;
  uVar1 = (pFVar2->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&pFVar2->Bytes,uVar1 + param_2,Default);
  memcpy((pFVar2->Bytes).AllocatorInstance.Data + uVar1,param_1,(ulonglong)param_2);
  return uVar1;
}

// WriteFMemoryImageName @ 141a305f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall
FMemoryImageWriter::WriteFMemoryImageName(FMemoryImageWriter *this,int param_1,FName *param_2)

{
  int *piVar1;
  FName *pFVar2;
  uint uVar3;
  FMemoryImageSection *pFVar4;
  int iVar5;
  
  pFVar4 = this->Section;
  uVar3 = (pFVar4->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&pFVar4->Bytes,param_1 + uVar3,Default);
  if (*param_2 != (FName)0x0) {
    iVar5 = (pFVar4->MemoryImageNames).ArrayNum;
    piVar1 = &(pFVar4->MemoryImageNames).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&(pFVar4->MemoryImageNames).AllocatorInstance,piVar1);
    }
    (pFVar4->MemoryImageNames).ArrayNum = iVar5 + 1;
    pFVar2 = (FName *)((pFVar4->MemoryImageNames).AllocatorInstance.Data + (longlong)iVar5 * 0xc);
    DefaultConstructItems<FMemoryImageNamePointer,int>(pFVar2,1);
    *pFVar2 = *param_2;
    pFVar2[1].ComparisonIndex.Value = uVar3;
  }
  return uVar3;
}

// WriteFScriptName @ 141a308c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall FMemoryImageWriter::WriteFScriptName(FMemoryImageWriter *this,FScriptName *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  FMemoryImageSection *pFVar5;
  int iVar6;
  undefined4 local_18;
  
  pFVar5 = this->Section;
  uVar4 = (pFVar5->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&pFVar5->Bytes,uVar4 + 0xc,Default);
  if (((param_1->ComparisonIndex).Value != 0) || (param_1->Number != 0)) {
    iVar6 = (pFVar5->ScriptNames).ArrayNum;
    piVar1 = &(pFVar5->ScriptNames).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&(pFVar5->ScriptNames).AllocatorInstance,piVar1);
    }
    (pFVar5->ScriptNames).ArrayNum = iVar6 + 1;
    pFVar2 = (pFVar5->ScriptNames).AllocatorInstance.Data + (longlong)iVar6 * 0xc;
    DefaultConstructItems<FMemoryImageNamePointer,int>(pFVar2,1);
    uVar3 = param_1->ComparisonIndex;
    *(ulonglong *)pFVar2 = CONCAT44(param_1->Number,uVar3);
    *(uint *)(pFVar2 + 8) = uVar4;
  }
  return uVar4;
}

// WriteNullPointer @ 141a33480

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall FMemoryImageWriter::WriteNullPointer(FMemoryImageWriter *this)

{
  uint uVar1;
  FMemoryImageSection *pFVar2;
  
  pFVar2 = this->Section;
  uVar1 = (pFVar2->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&pFVar2->Bytes,uVar1 + 8,Default);
  *(undefined8 *)((pFVar2->Bytes).AllocatorInstance.Data + uVar1) = 0;
  return uVar1;
}

// WriteObject @ 141a334c0

void __thiscall
FMemoryImageWriter::WriteObject(FMemoryImageWriter *this,void *param_1,FTypeLayoutDesc *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141a334c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2->WriteFrozenMemoryImageFunc)(this,param_1,param_2,param_2);
  return;
}

// WriteObjectArray @ 141a334d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMemoryImageWriter::WriteObjectArray
          (FMemoryImageWriter *this,void *param_1,FTypeLayoutDesc *param_2,uint param_3)

{
  _func___cdecl_void_FMemoryImageWriter_ptr_void_ptr_FTypeLayoutDesc_ptr_FTypeLayoutDesc_ptr *p_Var1
  ;
  FMemoryImageSection *pFVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  p_Var1 = param_2->WriteFrozenMemoryImageFunc;
  uVar5 = (ulonglong)param_3;
  uVar3 = (*param_2->GetTargetAlignmentFunc)
                    (param_2,&this->Section->ParentImage->TargetLayoutParameters);
  pFVar2 = this->Section;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&pFVar2->Bytes,(pFVar2->Bytes).ArrayNum + -1 + uVar3 & -uVar3,Default);
  uVar4 = uVar3;
  if (uVar3 < pFVar2->MaxAlignment) {
    uVar4 = pFVar2->MaxAlignment;
  }
  pFVar2->MaxAlignment = uVar4;
  if (param_3 != 0) {
    do {
      (*p_Var1)(this,param_1,param_2,param_2);
      pFVar2 = this->Section;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (&pFVar2->Bytes,(pFVar2->Bytes).ArrayNum + -1 + uVar3 & -uVar3,Default);
      uVar4 = uVar3;
      if (uVar3 < pFVar2->MaxAlignment) {
        uVar4 = pFVar2->MaxAlignment;
      }
      pFVar2->MaxAlignment = uVar4;
      param_1 = (void *)((longlong)param_1 + (ulonglong)param_2->Size);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// WritePaddingToSize @ 141a33650

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMemoryImageWriter::WritePaddingToSize(FMemoryImageWriter *this,uint param_1)

{
  FMemoryImageSection *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = this->Section;
  if (param_1 < (uint)(pFVar1->Bytes).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset >= (uint32)Bytes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0xf3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(&pFVar1->Bytes,param_1,Default);
  return;
}

// WritePointer @ 141a33830

FMemoryImageWriter __thiscall
FMemoryImageWriter::WritePointer
          (FMemoryImageWriter *this,FTypeLayoutDesc *param_1,FTypeLayoutDesc *param_2,uint *param_3)

{
  FMemoryImageSection *pFVar1;
  uint *in_stack_00000028;
  
  pFVar1 = FMemoryImageSection::WritePointer
                     (this->Section,param_2,(FTypeLayoutDesc *)param_3,in_stack_00000028);
  param_1->HashNext = (FTypeLayoutDesc *)pFVar1;
  return (FMemoryImageWriter)(FMemoryImageSection *)param_1;
}

// WritePointer @ 141a33870

FMemoryImageWriter __thiscall
FMemoryImageWriter::WritePointer(FMemoryImageWriter *this,FTypeLayoutDesc *param_1)

{
  FMemoryImageSection *pFVar1;
  FTypeLayoutDesc *in_R8;
  
  pFVar1 = FMemoryImageSection::WritePointer(this->Section,in_R8,in_R8,(uint *)0x0);
  param_1->HashNext = (FTypeLayoutDesc *)pFVar1;
  return (FMemoryImageWriter)(FMemoryImageSection *)param_1;
}

// WriteRawPointerSizedBytes @ 141a33910

uint __thiscall
FMemoryImageWriter::WriteRawPointerSizedBytes(FMemoryImageWriter *this,ulong64 param_1)

{
  uint uVar1;
  
  uVar1 = FMemoryImageSection::WriteRawPointerSizedBytes(this->Section,param_1);
  return uVar1;
}

// WriteRootObject @ 141a33a30

void __thiscall
FMemoryImageWriter::WriteRootObject(FMemoryImageWriter *this,void *param_1,FTypeLayoutDesc *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Section->ParentImage->PointerTable == (FPointerTableBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PointerTable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x127,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141a33a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2->WriteFrozenMemoryImageFunc)(this,param_1,param_2,param_2);
  return;
}

// WriteVTable @ 141a33f00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall
FMemoryImageWriter::WriteVTable
          (FMemoryImageWriter *this,FTypeLayoutDesc *param_1,FTypeLayoutDesc *param_2)

{
  int *piVar1;
  FMemoryImageSection *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint local_res8 [2];
  
  pFVar2 = this->Section;
  if (param_2->NameHash == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DerivedTypeDesc.NameHash != 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                       ,0x77b,L"Type %s is not registered");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  if (param_2->Interface != Virtual) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DerivedTypeDesc.Interface == ETypeLayoutInterface::Virtual",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                       ,0x77c,L"Type %s is not virtual");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  iVar6 = (pFVar2->VTables).ArrayNum;
  piVar1 = &(pFVar2->VTables).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(pFVar2->VTables).AllocatorInstance,piVar1);
  }
  (pFVar2->VTables).ArrayNum = iVar6 + 1;
  uVar5 = (pFVar2->Bytes).ArrayNum;
  pFVar7 = (pFVar2->VTables).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  if (((pFVar2->ParentImage->TargetLayoutParameters).Flags & 2) == 0) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&pFVar2->Bytes,uVar5 + 8,Default);
    *(undefined8 *)((pFVar2->Bytes).AllocatorInstance.Data + uVar5) = 0xffffffffffffffff;
  }
  else {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&pFVar2->Bytes,uVar5 + 4,Default);
    *(undefined4 *)((pFVar2->Bytes).AllocatorInstance.Data + uVar5) = 0xffffffff;
  }
  *(uint *)(pFVar7 + 0xc) = uVar5;
  *(ulong64 *)pFVar7 = param_2->NameHash;
  local_res8[0] = 0;
  bVar4 = TryGetOffsetToBase(param_2,param_1,local_res8);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                       ,0x175,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  *(uint *)(pFVar7 + 8) = local_res8[0];
  return *(uint *)(pFVar7 + 0xc);
}

