// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FCompressedGrowableBuffer @ 141815a00

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

FCompressedGrowableBuffer * __thiscall
FCompressedGrowableBuffer::FCompressedGrowableBuffer
          (FCompressedGrowableBuffer *this,int param_1,FName param_2,ECompressionFlags param_3)

{
  int *piVar1;
  
  this->CompressionFormat = param_2;
  this->CompressionFlags = param_3;
  this->MaxPendingBufferSize = param_1;
  piVar1 = &(this->PendingCompressionBuffer).ArrayMax;
  *piVar1 = 0;
  this->CurrentOffset = 0;
  this->NumEntries = 0;
  (this->CompressedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressedBuffer).ArrayNum = 0;
  (this->CompressedBuffer).ArrayMax = 0;
  (this->PendingCompressionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCompressionBuffer).ArrayNum = 0;
  (this->DecompressedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DecompressedBuffer).ArrayNum = 0;
  (this->DecompressedBuffer).ArrayMax = 0;
  this->DecompressedBufferBookKeepingInfoIndex = -1;
  (this->BookKeepingInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BookKeepingInfo).ArrayNum = 0;
  (this->BookKeepingInfo).ArrayMax = 0;
  if (-1 < param_1) {
    if (param_1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&(this->PendingCompressionBuffer).AllocatorInstance,0,piVar1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Access @ 141817c90

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void * __thiscall FCompressedGrowableBuffer::Access(FCompressedGrowableBuffer *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ECompressionFlags EVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  
  uVar7 = this->DecompressedBufferBookKeepingInfoIndex;
  uVar11 = 0;
  if (uVar7 != 0xffffffff) {
    uVar12 = 0;
    if ((int)uVar7 < (this->BookKeepingInfo).ArrayNum) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pvVar10 = (void *)(*pcVar5)();
      return pvVar10;
    }
    pFVar14 = (this->BookKeepingInfo).AllocatorInstance.Data;
    iVar3 = *(int *)(pFVar14 + (longlong)(int)uVar7 * 0x10 + 8);
    if ((param_1 < iVar3) ||
       (*(int *)(pFVar14 + (longlong)(int)uVar7 * 0x10 + 0xc) + iVar3 <= param_1)) {
      this->DecompressedBufferBookKeepingInfoIndex = -1;
    }
    else {
      uVar12 = param_1 - iVar3;
      uVar7 = 0;
      if ((int)uVar12 < (this->DecompressedBuffer).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pvVar10 = (void *)(*pcVar5)();
        return pvVar10;
      }
      pFVar14 = (this->DecompressedBuffer).AllocatorInstance.Data + (int)uVar12;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        return pFVar14;
      }
    }
  }
  uVar7 = 0;
  uVar16 = uVar11;
  if (0 < (this->BookKeepingInfo).ArrayNum) {
    do {
      uVar13 = (uint)uVar11;
      uVar12 = uVar7;
      if ((int)uVar13 < (this->BookKeepingInfo).ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pvVar10 = (void *)(*pcVar5)();
        return pvVar10;
      }
      pFVar14 = (this->BookKeepingInfo).AllocatorInstance.Data + uVar16;
      if ((int)*(uint *)(pFVar14 + 8) <= param_1) {
        uVar12 = *(uint *)(pFVar14 + 0xc);
        if (param_1 < (int)(*(uint *)(pFVar14 + 8) + uVar12)) {
          if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
          }
          piVar1 = &(this->DecompressedBuffer).ArrayMax;
          piVar2 = &(this->DecompressedBuffer).ArrayNum;
          *piVar2 = 0;
          if (*piVar1 != uVar12) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar12,&(this->DecompressedBuffer).AllocatorInstance,0,piVar1);
          }
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,*(uint *)(pFVar14 + 0xc),&(this->DecompressedBuffer).AllocatorInstance,
                     piVar2,piVar1);
          uVar12 = *(uint *)pFVar14;
          EVar4 = this->CompressionFlags;
          uVar15 = *(uint *)(pFVar14 + 4);
          uVar8 = uVar7;
          if ((int)uVar12 < (this->CompressedBuffer).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pvVar10 = (void *)(*pcVar5)();
            return pvVar10;
          }
          bVar6 = FCompression::UncompressMemory
                            (this->CompressionFormat,
                             (this->DecompressedBuffer).AllocatorInstance.Data,
                             (longlong)(int)*(uint *)(pFVar14 + 0xc),
                             (this->CompressedBuffer).AllocatorInstance.Data + (int)uVar12,
                             (longlong)(int)uVar15,EVar4,0);
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("FCompression::UncompressMemory( CompressionFormat, DecompressedBuffer.GetData(), Info.UncompressedSize, &CompressedBuffer[Info.CompressedOffset], Info.CompressedSize, CompressionFlags )"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                                 ,0x498,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pvVar10 = (void *)(*pcVar5)();
            return pvVar10;
          }
          uVar15 = param_1 - *(uint *)(pFVar14 + 8);
          uVar12 = uVar7;
          if ((int)uVar15 < *piVar2) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pvVar10 = (void *)(*pcVar5)();
            return pvVar10;
          }
          pFVar14 = (this->DecompressedBuffer).AllocatorInstance.Data;
          this->DecompressedBufferBookKeepingInfoIndex = uVar13;
          pFVar14 = pFVar14 + (int)uVar15;
          if (pFVar14 != (FScriptContainerElement *)0x0) {
            return pFVar14;
          }
          break;
        }
      }
      uVar11 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 0x10;
    } while ((int)(uVar13 + 1) < (this->BookKeepingInfo).ArrayNum);
  }
  iVar3 = (this->PendingCompressionBuffer).ArrayNum;
  iVar9 = this->CurrentOffset - iVar3;
  if ((iVar9 <= param_1) && (param_1 < this->CurrentOffset)) {
    uVar12 = param_1 - iVar9;
    if ((int)uVar12 < iVar3) {
      uVar7 = ~uVar12 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pvVar10 = (void *)(*pcVar5)();
      return pvVar10;
    }
    pFVar14 = (this->PendingCompressionBuffer).AllocatorInstance.Data + (int)uVar12;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      return pFVar14;
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("UncompressedData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                     ,0x4b4,L"");
  if (!bVar6) {
    return (void *)0x0;
  }
  pcVar5 = (code *)swi(3);
  pvVar10 = (void *)(*pcVar5)();
  return pvVar10;
}

// Append @ 14181c170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FCompressedGrowableBuffer::Append(FCompressedGrowableBuffer *this,void *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStackY_b8 [32];
  ulong64 local_68;
  void *local_60;
  void *local_58;
  uint local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_60 = param_1;
  if (((this->DecompressedBuffer).ArrayNum != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DecompressedBuffer.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                         ,0x441,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  if ((this->MaxPendingBufferSize < param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= MaxPendingBufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                         ,0x442,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  piVar1 = &(this->PendingCompressionBuffer).ArrayNum;
  this->NumEntries = this->NumEntries + 1;
  if (param_2 <= this->MaxPendingBufferSize - *piVar1) goto LAB_14181c462;
  iVar6 = (this->MaxPendingBufferSize * 4) / 3;
  local_58 = FMemory::Malloc((longlong)iVar6,0);
  local_68 = (longlong)iVar6;
  bVar5 = FCompression::CompressMemory
                    (this->CompressionFormat,local_58,(long64 *)&local_68,
                     (this->PendingCompressionBuffer).AllocatorInstance.Data,
                     (longlong)(this->PendingCompressionBuffer).ArrayNum,this->CompressionFlags,0);
  iVar9 = (int)local_68;
  if (local_68 == (longlong)iVar9) {
    if (!bVar5) goto LAB_14181c2af;
  }
  else {
    iVar9 = iVar6;
    if (1 < (byte)LogCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCompression);
    }
LAB_14181c2af:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCompression::CompressMemory( CompressionFormat, TempBuffer, CompressedSize, PendingCompressionBuffer.GetData(), PendingCompressionBuffer.Num(), CompressionFlags )"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                       ,0x451,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  piVar2 = &(this->CompressedBuffer).ArrayNum;
  uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar9,&(this->CompressedBuffer).AllocatorInstance,piVar2,
                     &(this->CompressedBuffer).ArrayMax);
  uVar8 = 0;
  if ((int)uVar7 < *piVar2) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  memcpy((this->CompressedBuffer).AllocatorInstance.Data + (int)uVar7,local_58,(longlong)iVar9);
  FMemory::Free(local_58);
  iStack_44 = (this->PendingCompressionBuffer).ArrayNum;
  iStack_48 = this->CurrentOffset - iStack_44;
  pFVar3 = (this->BookKeepingInfo).AllocatorInstance.Data;
  local_50 = uVar7;
  iStack_4c = iVar9;
  if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
      ((FScriptContainerElement *)&local_50 <
       pFVar3 + (longlong)(this->BookKeepingInfo).ArrayMax * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = (this->BookKeepingInfo).ArrayNum;
  piVar2 = &(this->BookKeepingInfo).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->BookKeepingInfo).AllocatorInstance,piVar2);
  }
  (this->BookKeepingInfo).ArrayNum = iVar6 + 1;
  pFVar3 = (this->BookKeepingInfo).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar3 = CONCAT44(iStack_4c,local_50);
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(iStack_44,iStack_48);
  uVar8 = this->MaxPendingBufferSize;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar2 = &(this->PendingCompressionBuffer).ArrayMax;
  *piVar1 = 0;
  param_1 = local_60;
  if (*piVar2 != uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar8,&(this->PendingCompressionBuffer).AllocatorInstance,0,piVar2);
    param_1 = local_60;
  }
LAB_14181c462:
  uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_2,&(this->PendingCompressionBuffer).AllocatorInstance,piVar1,
                     &(this->PendingCompressionBuffer).ArrayMax);
  uVar8 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  memcpy((this->PendingCompressionBuffer).AllocatorInstance.Data + (int)uVar7,param_1,
         (longlong)param_2);
  iVar6 = this->CurrentOffset;
  this->CurrentOffset = iVar6 + param_2;
  return iVar6;
}

// Lock @ 14182b970

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall FCompressedGrowableBuffer::Lock(FCompressedGrowableBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->DecompressedBuffer).ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DecompressedBuffer.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                       ,0x42b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Unlock @ 14183a4d0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall FCompressedGrowableBuffer::Unlock(FCompressedGrowableBuffer *this)

{
  int *piVar1;
  
  piVar1 = &(this->DecompressedBuffer).ArrayMax;
  (this->DecompressedBuffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->DecompressedBuffer).AllocatorInstance,0,piVar1);
  }
  this->DecompressedBufferBookKeepingInfoIndex = -1;
  return;
}

