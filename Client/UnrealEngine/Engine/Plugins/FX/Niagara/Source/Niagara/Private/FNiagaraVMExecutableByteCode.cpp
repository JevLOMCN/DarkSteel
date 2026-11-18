// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticStruct @ 149376660

UScriptStruct * __cdecl FNiagaraVMExecutableByteCode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableByteCode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableByteCode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode,(UObject *)pUVar1,
                         L"NiagaraVMExecutableByteCode");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableByteCode.OuterSingleton;
}

// Compress @ 149399720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __thiscall FNiagaraVMExecutableByteCode::Compress(FNiagaraVMExecutableByteCode *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  FNameEntryId FVar9;
  int iVar10;
  undefined4 extraout_var;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_48;
  
  iVar1 = (this->Data).ArrayNum;
  if ((0 < iVar1) && (this->UncompressedSize != -1)) {
    return true;
  }
  iVar10 = iVar1 * 4;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_res8[0] =
       iVar10 / 3 + (iVar10 >> 0x1f) +
       (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_48,local_res8[0],Default);
  FVar6.Data = local_48.AllocatorInstance.Data;
  iVar10 = (this->Data).ArrayNum;
  pFVar2 = (this->Data).AllocatorInstance.Data;
  FVar9 = FNameEntryId::FromValidEName((EName)local_res10);
  uStackX_1c = 0;
  local_res18 = *(uint *)CONCAT44(extraout_var,FVar9.Value);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = local_res18;
  bVar7 = FCompression::CompressMemory
                    (FVar4,FVar6.Data,(int *)local_res8,pFVar2,iVar10,COMPRESS_BiasMemory,0);
  uVar5 = local_res8[0];
  if ((!bVar7) || (lVar13 = (longlong)(int)local_res8[0], iVar1 <= (int)local_res8[0]))
  goto LAB_14939992c;
  if (local_48.ArrayNum < (int)local_res8[0]) {
    iVar12 = local_res8[0] - local_48.ArrayNum;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar12,&local_48.AllocatorInstance,&local_48.ArrayNum,&local_48.ArrayMax
                       );
    memset(local_48.AllocatorInstance.Data + iVar10,0,(longlong)iVar12);
LAB_1493998c5:
    iVar10 = local_48.ArrayNum;
  }
  else {
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    iVar10 = local_48.ArrayNum;
    if ((int)local_res8[0] < local_48.ArrayNum) {
      uVar14 = local_48.ArrayNum - local_res8[0];
      if ((int)(local_res8[0] | uVar14) < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        iVar10 = local_48.ArrayNum;
      }
      if (uVar14 != 0) {
        iVar12 = (iVar10 - uVar14) - uVar5;
        if (iVar12 != 0) {
          memmove(local_48.AllocatorInstance.Data + lVar13,
                  local_48.AllocatorInstance.Data + lVar13 + (int)uVar14,(longlong)iVar12);
          iVar10 = local_48.ArrayNum;
        }
        local_48.ArrayNum = iVar10 - uVar14;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&local_48.AllocatorInstance,iVar10 - uVar14,&local_48.ArrayMax);
        goto LAB_1493998c5;
      }
    }
  }
  if (this != (FNiagaraVMExecutableByteCode *)&local_48) {
    pFVar2 = (this->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
      iVar10 = local_48.ArrayNum;
    }
    (this->Data).AllocatorInstance.Data = local_48.AllocatorInstance.Data;
    (this->Data).ArrayNum = iVar10;
    (this->Data).ArrayMax = local_48.ArrayMax;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
  }
  piVar11 = &(this->Data).ArrayMax;
  iVar10 = (this->Data).ArrayNum;
  if (*piVar11 != iVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar10,(ForAnyElementType *)this,iVar10,piVar11);
  }
  this->UncompressedSize = iVar1;
LAB_14939992c:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// HasByteCode @ 1493a83b0

bool __thiscall FNiagaraVMExecutableByteCode::HasByteCode(FNiagaraVMExecutableByteCode *this)

{
  return 0 < (this->Data).ArrayNum;
}

// IsCompressed @ 1493aa430

bool __thiscall FNiagaraVMExecutableByteCode::IsCompressed(FNiagaraVMExecutableByteCode *this)

{
  if ((0 < (this->Data).ArrayNum) && (this->UncompressedSize != -1)) {
    return true;
  }
  return false;
}

// Reset @ 1493b5160

void __thiscall FNiagaraVMExecutableByteCode::Reset(FNiagaraVMExecutableByteCode *this)

{
  int *piVar1;
  
  piVar1 = &(this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,piVar1);
  }
  this->UncompressedSize = -1;
  return;
}

// SerializeFromMismatchedTag @ 1493b6290

bool __thiscall
FNiagaraVMExecutableByteCode::SerializeFromMismatchedTag
          (FNiagaraVMExecutableByteCode *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res10 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (*(FArchive **)(*(longlong *)param_2 + 8),&this->Data);
    return true;
  }
  return false;
}

// SetData @ 1493b6770

void __thiscall
FNiagaraVMExecutableByteCode::SetData
          (FNiagaraVMExecutableByteCode *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != (FNiagaraVMExecutableByteCode *)param_1) {
    pFVar1 = (this->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Data).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Data).ArrayNum = param_1->ArrayNum;
    (this->Data).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    this->UncompressedSize = -1;
    return;
  }
  this->UncompressedSize = -1;
  return;
}

// SetData @ 1493b67e0

void __thiscall
FNiagaraVMExecutableByteCode::SetData
          (FNiagaraVMExecutableByteCode *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&this->Data,param_1);
  this->UncompressedSize = -1;
  return;
}

// Uncompress @ 1493bac70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __thiscall FNiagaraVMExecutableByteCode::Uncompress(FNiagaraVMExecutableByteCode *this)

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
  
  if ((0 < (this->Data).ArrayNum) && (this->UncompressedSize != -1)) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_28,this->UncompressedSize,Default);
    FVar5.Data = local_28.AllocatorInstance.Data;
    iVar1 = (this->Data).ArrayNum;
    pFVar3 = (this->Data).AllocatorInstance.Data;
    iVar2 = this->UncompressedSize;
    FVar7 = FNameEntryId::FromValidEName((EName)local_res8);
    local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar7.Value);
    local_res8[1] = 0;
    FVar4.Number = 0;
    FVar4.ComparisonIndex.Value = local_res8[0];
    bVar6 = FCompression::UncompressMemory
                      (FVar4,FVar5.Data,(longlong)iVar2,pFVar3,(longlong)iVar1,COMPRESS_NoFlags,0);
    if (bVar6) {
      if (this == (FNiagaraVMExecutableByteCode *)&local_28) {
        this->UncompressedSize = -1;
      }
      else {
        pFVar3 = (this->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (this->Data).AllocatorInstance.Data = local_28.AllocatorInstance.Data;
        (this->Data).ArrayNum = local_28.ArrayNum;
        (this->Data).ArrayMax = local_28.ArrayMax;
        this->UncompressedSize = -1;
        local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.ArrayNum = 0;
        local_28.ArrayMax = 0;
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    return true;
  }
  return true;
}

