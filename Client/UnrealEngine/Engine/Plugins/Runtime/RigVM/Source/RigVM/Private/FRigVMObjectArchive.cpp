// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a0ad010

UScriptStruct * __cdecl FRigVMObjectArchive::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMObjectArchive.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMObjectArchive.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMObjectArchive,(UObject *)pUVar1,
                         L"RigVMObjectArchive");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMObjectArchive.OuterSingleton;
}

// Compress @ 14a0cfe00

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FRigVMObjectArchive::Compress(FRigVMObjectArchive *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  FNameEntryId FVar8;
  int iVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  uint local_res20;
  undefined4 uStackX_24;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_48;
  
  if (this->bIsCompressed != false) {
    return;
  }
  iVar9 = (this->Buffer).ArrayNum;
  this->UncompressedSize = iVar9;
  if (iVar9 == 0) {
    return;
  }
  FVar8 = FNameEntryId::FromValidEName((EName)local_res8);
  uStackX_1c = 0;
  local_res18 = *(uint *)CONCAT44(extraout_var,FVar8.Value);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = local_res18;
  iVar9 = FCompression::CompressMemoryBound(FVar4,iVar9,COMPRESS_NoFlags,0);
  this->CompressedSize = iVar9;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_48,iVar9,Default);
  FVar6.Data = local_48.AllocatorInstance.Data;
  iVar9 = (this->Buffer).ArrayNum;
  pFVar2 = (this->Buffer).AllocatorInstance.Data;
  FVar8 = FNameEntryId::FromValidEName((EName)local_res10);
  uStackX_24 = 0;
  local_res20 = *(uint *)CONCAT44(extraout_var_00,FVar8.Value);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = local_res20;
  bVar7 = FCompression::CompressMemory
                    (FVar5,FVar6.Data,&this->CompressedSize,pFVar2,iVar9,COMPRESS_BiasMemory,0);
  if (!bVar7) goto LAB_14a0d0040;
  uVar1 = this->CompressedSize;
  if (this->UncompressedSize <= (int)uVar1) {
    this->CompressedSize = -1;
    goto LAB_14a0d0040;
  }
  if (local_48.ArrayNum < (int)uVar1) {
    iVar11 = uVar1 - local_48.ArrayNum;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar11,&local_48.AllocatorInstance,&local_48.ArrayNum,&local_48.ArrayMax)
    ;
    memset(local_48.AllocatorInstance.Data + iVar9,0,(longlong)iVar11);
LAB_14a0cffce:
    iVar9 = local_48.ArrayNum;
  }
  else {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar9 = local_48.ArrayNum;
    if ((int)uVar1 < local_48.ArrayNum) {
      uVar12 = local_48.ArrayNum - uVar1;
      if ((int)(uVar12 | uVar1) < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = local_48.ArrayNum;
      }
      if (uVar12 != 0) {
        iVar11 = (iVar9 - uVar1) - uVar12;
        if (iVar11 != 0) {
          memmove(local_48.AllocatorInstance.Data + (int)uVar1,
                  local_48.AllocatorInstance.Data + (int)uVar1 + (int)uVar12,(longlong)iVar11);
          iVar9 = local_48.ArrayNum;
        }
        local_48.ArrayNum = iVar9 - uVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&local_48.AllocatorInstance,iVar9 - uVar12,&local_48.ArrayMax);
        goto LAB_14a0cffce;
      }
    }
  }
  if (this != (FRigVMObjectArchive *)&local_48) {
    pFVar2 = (this->Buffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
      iVar9 = local_48.ArrayNum;
    }
    (this->Buffer).AllocatorInstance.Data = local_48.AllocatorInstance.Data;
    (this->Buffer).ArrayNum = iVar9;
    (this->Buffer).ArrayMax = local_48.ArrayMax;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
  }
  piVar10 = &(this->Buffer).ArrayMax;
  iVar9 = (this->Buffer).ArrayNum;
  if (*piVar10 != iVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar9,(ForAnyElementType *)this,iVar9,piVar10);
  }
  this->bIsCompressed = true;
LAB_14a0d0040:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// Decompress @ 14a0d4ef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall FRigVMObjectArchive::Decompress(FRigVMObjectArchive *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  uint local_res8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  if (this->bIsCompressed != false) {
    this->CompressedSize = (this->Buffer).ArrayNum;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_28,this->UncompressedSize,Default);
    FVar5.Data = local_28.AllocatorInstance.Data;
    iVar1 = (this->Buffer).ArrayNum;
    pFVar3 = (this->Buffer).AllocatorInstance.Data;
    iVar2 = this->UncompressedSize;
    FVar7 = FNameEntryId::FromValidEName((EName)local_res8);
    local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar7.Value);
    local_res8[1] = 0;
    FVar4.Number = 0;
    FVar4.ComparisonIndex.Value = local_res8[0];
    bVar6 = FCompression::UncompressMemory
                      (FVar4,FVar5.Data,(longlong)iVar2,pFVar3,(longlong)iVar1,COMPRESS_NoFlags,0);
    if (bVar6) {
      if (this == (FRigVMObjectArchive *)&local_28) {
        this->bIsCompressed = false;
      }
      else {
        pFVar3 = (this->Buffer).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (this->Buffer).AllocatorInstance.Data = local_28.AllocatorInstance.Data;
        (this->Buffer).ArrayNum = local_28.ArrayNum;
        (this->Buffer).ArrayMax = local_28.ArrayMax;
        this->bIsCompressed = false;
        local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.ArrayNum = 0;
        local_28.ArrayMax = 0;
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// Empty @ 14a0d6930

void __thiscall FRigVMObjectArchive::Empty(FRigVMObjectArchive *this)

{
  int *piVar1;
  
  piVar1 = &(this->Buffer).ArrayMax;
  (this->Buffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,piVar1);
  }
  this->bIsCompressed = false;
  this->UncompressedSize = -1;
  this->CompressedSize = -1;
  return;
}

// IsEmpty @ 14a0f9090

bool __thiscall FRigVMObjectArchive::IsEmpty(FRigVMObjectArchive *this)

{
  return (this->Buffer).ArrayNum == 0;
}

// Reset @ 14a10b080

void __thiscall FRigVMObjectArchive::Reset(FRigVMObjectArchive *this)

{
  (this->Buffer).ArrayNum = 0;
  if ((this->Buffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,&(this->Buffer).ArrayMax);
  }
  this->bIsCompressed = false;
  this->UncompressedSize = -1;
  this->CompressedSize = -1;
  return;
}

