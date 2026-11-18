// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 28

// GetInternalArray @ 14a9a6b20

TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
* __thiscall
UE::Mutable::Private::FImageDataStorage::GetInternalArray(FImageDataStorage *this,int param_1)

{
  ulonglong uVar1;
  TIntVector2<unsigned_short>_u_0_s_0 TVar2;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
  *pTVar7;
  uint uVar8;
  uint uVar9;
  
  if (((this->Buffers).ArrayNum == 0) && ((this->CompactedTailOffsets).Elements[0] == 0xffff)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsVoid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ImageDataStorage.h"
                       ,0x85,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  if ((int)(uint)this->NumLODs <= param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODIndex < NumLODs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ImageDataStorage.h"
                       ,0x86,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  TVar2 = (this->ImageSize).field0_0x0._s_0;
  uVar8 = (uint)TVar2 >> 0x10;
  if (TVar2.Y < TVar2.X) {
    uVar8 = (uint)TVar2 & 0xffff;
  }
  uVar9 = 1;
  if ((short)uVar8 != 0) {
    uVar9 = uVar8;
  }
  uVar1 = (ulonglong)(uVar9 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar8 = (int)lVar4 - 6;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  if (param_1 < (int)uVar8) {
    uVar8 = param_1;
  }
  uVar9 = 0;
  if ((int)uVar8 < (this->Buffers).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    this = (FImageDataStorage *)FVar3;
  }
  return (TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
          *)((longlong)this + (longlong)(int)uVar8 * 0x18);
}

// FImageDataStorage @ 14aa92c10

FImageDataStorage * __thiscall
UE::Mutable::Private::FImageDataStorage::FImageDataStorage
          (FImageDataStorage *this,FImageDesc *param_1)

{
  (this->Buffers).AllocatorInstance.SecondaryData =
       (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
        )0x0;
  (this->Buffers).ArrayNum = 0;
  *(undefined8 *)&(this->Buffers).ArrayMax = 1;
  this->ImageFormat = None;
  this->NumLODs = '\0';
  (this->CompactedTailOffsets).Elements[0] = 0;
  (this->CompactedTailOffsets).Elements[1] = 0;
  (this->CompactedTailOffsets).Elements[2] = 0;
  (this->CompactedTailOffsets).Elements[3] = 0;
  (this->CompactedTailOffsets).Elements[4] = 0;
  (this->CompactedTailOffsets).Elements[5] = 0;
  (this->CompactedTailOffsets).Elements[6] = 0;
  Init(this,param_1,NotInitialized);
  return this;
}

// FImageDataStorage @ 14aa92c50

FImageDataStorage * __thiscall
UE::Mutable::Private::FImageDataStorage::FImageDataStorage
          (FImageDataStorage *this,FImageDataStorage *param_1)

{
  (this->Buffers).AllocatorInstance.SecondaryData =
       (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
        )0x0;
  (this->Buffers).ArrayNum = 0;
  *(undefined8 *)&(this->Buffers).ArrayMax = 1;
  this->ImageFormat = None;
  this->NumLODs = '\0';
  (this->CompactedTailOffsets).Elements[0] = 0;
  (this->CompactedTailOffsets).Elements[1] = 0;
  (this->CompactedTailOffsets).Elements[2] = 0;
  (this->CompactedTailOffsets).Elements[3] = 0;
  (this->CompactedTailOffsets).Elements[4] = 0;
  (this->CompactedTailOffsets).Elements[5] = 0;
  (this->CompactedTailOffsets).Elements[6] = 0;
  CopyFrom(this,param_1);
  return this;
}

// FImageDataStorage @ 14aa92c90

FImageDataStorage * __thiscall
UE::Mutable::Private::FImageDataStorage::FImageDataStorage(FImageDataStorage *this)

{
  (this->Buffers).AllocatorInstance.SecondaryData =
       (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
        )0x0;
  (this->Buffers).ArrayNum = 0;
  *(undefined8 *)&(this->Buffers).ArrayMax = 1;
  this->ImageFormat = None;
  this->NumLODs = '\0';
  (this->CompactedTailOffsets).Elements[0] = 0;
  (this->CompactedTailOffsets).Elements[1] = 0;
  (this->CompactedTailOffsets).Elements[2] = 0;
  (this->CompactedTailOffsets).Elements[3] = 0;
  (this->CompactedTailOffsets).Elements[4] = 0;
  (this->CompactedTailOffsets).Elements[5] = 0;
  (this->CompactedTailOffsets).Elements[6] = 0;
  return this;
}

// operator= @ 14aa94340

FImageDataStorage * __thiscall
UE::Mutable::Private::FImageDataStorage::operator=
          (FImageDataStorage *this,FImageDataStorage *param_1)

{
  CopyFrom(this,param_1);
  return this;
}

// operator== @ 14aa94ce0

bool __thiscall
UE::Mutable::Private::FImageDataStorage::operator==
          (FImageDataStorage *this,FImageDataStorage *param_1)

{
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar7;
  uint uVar8;
  longlong lVar9;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar10;
  
  if (((((this->ImageSize).field0_0x0._s_0.X == (param_1->ImageSize).field0_0x0._s_0.X) &&
       ((this->ImageSize).field0_0x0._s_0.Y == (param_1->ImageSize).field0_0x0._s_0.Y)) &&
      (this->ImageFormat == param_1->ImageFormat)) &&
     ((this->NumLODs == param_1->NumLODs &&
      (iVar6 = (this->Buffers).ArrayNum, iVar6 == (param_1->Buffers).ArrayNum)))) {
    uVar8 = iVar6 - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 * 0x18;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (this->Buffers).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        FVar1 = (this->Buffers).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                  )this;
        if (FVar1 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                      )0x0) {
          FVar10 = FVar1;
        }
        uVar5 = 0;
        if ((int)uVar8 < (param_1->Buffers).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        FVar1 = (param_1->Buffers).AllocatorInstance.SecondaryData;
        FVar7 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                 )param_1;
        if (FVar1 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                      )0x0) {
          FVar7 = FVar1;
        }
        iVar6 = *(int *)((uchar *)((longlong)FVar10 + 0x10) + lVar9);
        if (iVar6 != *(int *)(lVar9 + 0x10 + (longlong)FVar7)) goto LAB_14aa94e3b;
        if (iVar6 != 0) {
          iVar6 = memcmp(*(void **)((longlong)FVar10 + lVar9),*(void **)(lVar9 + (longlong)FVar7),
                         (longlong)iVar6);
          if (iVar6 != 0) goto LAB_14aa94e3b;
        }
        lVar9 = lVar9 + -0x18;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    bVar3 = true;
  }
  else {
LAB_14aa94e3b:
    bVar3 = false;
  }
  return bVar3;
}

// CopyFrom @ 14aac22b0

void __thiscall
UE::Mutable::Private::FImageDataStorage::CopyFrom
          (FImageDataStorage *this,FImageDataStorage *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar6;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar7;
  
  if (((this->ImageFormat != None) && (param_1->ImageFormat != this->ImageFormat)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImageFormat == EImageFormat::None || Other.ImageFormat == ImageFormat",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0xa0,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->ImageSize).field0_0x0 = (param_1->ImageSize).field0_0x0;
  this->ImageFormat = param_1->ImageFormat;
  this->NumLODs = param_1->NumLODs;
  if (this != param_1) {
    FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )this;
    if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                  )0x0) {
      FVar6 = FVar3;
    }
    DestructItems<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,int>
              ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                *)FVar6,(this->Buffers).ArrayNum);
    FVar3 = (param_1->Buffers).AllocatorInstance.SecondaryData;
    piVar1 = &(this->Buffers).ArrayMax;
    iVar2 = (param_1->Buffers).ArrayNum;
    FVar6 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )param_1;
    if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                  )0x0) {
      FVar6 = FVar3;
    }
    (this->Buffers).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 1;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>_>
                (0x18,8,iVar2,*piVar1,
                 (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                  *)this,iVar2,piVar1);
      FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
               )this;
      if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )0x0) {
        FVar7 = FVar3;
      }
      ConstructItems<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,int>
                ((void *)FVar7,
                 (TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                  *)FVar6,iVar2);
    }
  }
  *(undefined8 *)(this->CompactedTailOffsets).Elements =
       *(undefined8 *)(param_1->CompactedTailOffsets).Elements;
  *(undefined4 *)((this->CompactedTailOffsets).Elements + 4) =
       *(undefined4 *)((param_1->CompactedTailOffsets).Elements + 4);
  (this->CompactedTailOffsets).Elements[6] = (param_1->CompactedTailOffsets).Elements[6];
  return;
}

// DropLODs @ 14aac6db0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FImageDataStorage::DropLODs(FImageDataStorage *this,int param_1)

{
  int *piVar1;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  *pFVar2;
  TIntVector2<unsigned_short>_u_0_s_0 TVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uchar uVar7;
  uint uVar8;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  ushort *puVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  TIntVector2<unsigned_short>_u_0 local_res18;
  longlong local_58;
  
  if ((((this->Buffers).ArrayNum == 0) && ((this->CompactedTailOffsets).Elements[0] == 0xffff)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsVoid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x107,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)(uint)this->NumLODs <= param_1) {
    FVar12 = (this->Buffers).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )this;
    if (FVar12 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                   )0x0) {
      FVar9 = FVar12;
    }
    DestructItems<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,int>
              ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                *)FVar9,(this->Buffers).ArrayNum);
    piVar1 = &(this->Buffers).ArrayMax;
    (this->Buffers).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>_>
                (0x18,8,0,(ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                           *)this,0,piVar1);
    }
    (this->ImageSize).field0_0x0 = (TIntVector2<unsigned_short>_u_0)0x0;
    this->NumLODs = '\0';
    return;
  }
  TVar3 = (this->ImageSize).field0_0x0._s_0;
  uVar8 = (uint)TVar3 >> 0x10;
  if (TVar3.Y < TVar3.X) {
    uVar8 = (uint)TVar3 & 0xffff;
  }
  uVar10 = 1;
  if ((short)uVar8 != 0) {
    uVar10 = uVar8;
  }
  pFVar2 = &(this->Buffers).AllocatorInstance.SecondaryData;
  uVar15 = 0;
  uVar8 = 0;
  uVar22 = (ulonglong)(uVar10 - 1) * 2 + 1;
  lVar24 = 0x3f;
  if (uVar22 != 0) {
    for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
    }
  }
  uVar10 = (int)lVar24 - 6;
  if ((int)uVar10 < 0) {
    uVar10 = uVar8;
  }
  uVar21 = param_1 - uVar10;
  if ((int)(param_1 - uVar10) < 0) {
    uVar21 = uVar8;
  }
  local_58 = (longlong)(int)(param_1 - uVar21);
  if (local_58 < (int)uVar10) {
    lVar24 = local_58 * 0x18;
    local_58 = (int)uVar10 - local_58;
    uVar22 = uVar15;
    uVar23 = uVar15;
    do {
      uVar6 = (uint)uVar23;
      uVar11 = (param_1 - uVar21) + uVar6;
      uVar20 = uVar8;
      if ((int)uVar11 < (this->Buffers).ArrayNum) {
        uVar20 = ~uVar11 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar12 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )this;
      if (*pFVar2 !=
          (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )0x0) {
        FVar12 = *pFVar2;
      }
      puVar16 = (undefined8 *)((longlong)FVar12 + lVar24);
      uVar20 = uVar8;
      if ((int)uVar6 < (this->Buffers).ArrayNum) {
        uVar20 = ~uVar6 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar12 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )this;
      if (*pFVar2 !=
          (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )0x0) {
        FVar12 = *pFVar2;
      }
      puVar18 = (undefined8 *)((longlong)FVar12 + uVar22);
      if (puVar18 != puVar16) {
        if ((void *)*puVar18 != (void *)0x0) {
          FMemory::Free((void *)*puVar18);
        }
        *puVar18 = *puVar16;
        *puVar16 = 0;
        LOCK();
        ::Counter = (atomic<__int64>)((longlong)::Counter - puVar18[1]);
        UNLOCK();
        FGlobalMemoryCounter::Update(-puVar18[1]);
        puVar18[1] = puVar16[1];
        puVar16[1] = 0;
        *(undefined4 *)(puVar18 + 2) = *(undefined4 *)(puVar16 + 2);
        *(undefined4 *)((longlong)puVar18 + 0x14) = *(undefined4 *)((longlong)puVar16 + 0x14);
        puVar16[2] = 0;
      }
      uVar23 = (ulonglong)(uVar6 + 1);
      uVar22 = uVar22 + 0x18;
      lVar24 = lVar24 + 0x18;
      local_58 = local_58 + -1;
    } while (local_58 != 0);
  }
  if (uVar21 != 0) {
    iVar17 = (this->Buffers).ArrayNum;
    uVar14 = (this->CompactedTailOffsets).Elements[uVar21 - 1];
    uVar20 = iVar17 - 1;
    uVar6 = uVar8;
    if ((int)uVar20 < iVar17) {
      uVar6 = ~uVar20 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar12 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
              )this;
    if (*pFVar2 !=
        (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
         )0x0) {
      FVar12 = *pFVar2;
    }
    lVar24 = (longlong)(this->Buffers).ArrayNum;
    iVar17 = *(int *)((ushort *)((longlong)FVar12 + -8) + lVar24 * 0xc) - (uint)uVar14;
    memmove(*(void **)((TIntVector2<unsigned_short> *)((longlong)FVar12 + -0x18) + lVar24 * 6),
            (void *)((longlong)
                     *(void **)((TIntVector2<unsigned_short> *)((longlong)FVar12 + -0x18) +
                               lVar24 * 6) + (ulonglong)uVar14),(longlong)iVar17);
    TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
    ::SetNum((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
              *)((longlong)FVar12 + lVar24 * 0x18 + -0x18),iVar17,Default);
    uVar10 = this->NumLODs - uVar10;
    lVar24 = (longlong)(int)uVar21;
    if ((int)uVar10 < 0) {
      uVar10 = uVar8;
    }
    if (lVar24 < (int)uVar10) {
      lVar13 = (int)uVar10 - lVar24;
      puVar19 = (this->CompactedTailOffsets).Elements + lVar24;
      uVar21 = uVar21 + (int)lVar13;
      do {
        uVar14 = *puVar19;
        puVar19 = puVar19 + 1;
        (this->CompactedTailOffsets).Elements[uVar15] = uVar14;
        lVar13 = lVar13 + -1;
        uVar15 = (ulonglong)((int)uVar15 + 1);
      } while (lVar13 != 0);
    }
    if ((int)(uVar10 - 1) < 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = (this->CompactedTailOffsets).Elements[uVar10 - 1];
    }
    lVar24 = (longlong)(int)uVar21;
    if (lVar24 < 7) {
      puVar19 = (this->CompactedTailOffsets).Elements + lVar24;
      for (lVar13 = 7 - lVar24; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar19 = uVar14;
        puVar19 = puVar19 + 1;
      }
    }
  }
  iVar17 = (uint)this->NumLODs - param_1;
  uVar7 = (uchar)iVar17;
  if (iVar17 < 0) {
    uVar7 = '\0';
  }
  this->NumLODs = uVar7;
  if (0 < param_1) {
    uVar22 = (ulonglong)(uint)param_1;
    do {
      local_res18._0_2_ = (undefined2)((this->ImageSize).field0_0x0._s_0.X + 1 >> 1);
      local_res18._s_0.Y = (short)((this->ImageSize).field0_0x0._s_0.Y + 1 >> 1);
      (this->ImageSize).field0_0x0 = local_res18;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  return;
}

// GetAllocatedSize @ 14aacb3e0

int __thiscall UE::Mutable::Private::FImageDataStorage::GetAllocatedSize(FImageDataStorage *this)

{
  int *piVar1;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  
  FVar2 = (this->Buffers).AllocatorInstance.SecondaryData;
  piVar1 = &(this->Buffers).ArrayNum;
  iVar5 = *piVar1;
  uVar6 = 0;
  if (FVar2 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    this = (FImageDataStorage *)FVar2;
  }
  FVar2 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )((longlong)this + (longlong)iVar5 * 0x18);
  while( true ) {
    if (*piVar1 != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
         )this == FVar2) break;
    uVar6 = uVar6 + (longlong)*(int *)((longlong)this + 0x14);
    this = (FImageDataStorage *)((longlong)this + 0x18);
  }
  if ((0x7ffffffe < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result < TNumericLimits<int32>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x241,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  return (int)uVar6;
}

// GetBatch @ 14aacb540

TArrayView<unsigned_char,int> * __thiscall
UE::Mutable::Private::FImageDataStorage::GetBatch
          (FImageDataStorage *this,TArrayView<unsigned_char,int> *__return_storage_ptr__,int param_1
          ,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_char,int> *pTVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  GetBatchLODRange(this,&local_18,param_1,param_2,param_3,0,(uint)this->NumLODs);
  __return_storage_ptr__->DataPtr = local_18.DataPtr;
  __return_storage_ptr__->ArrayNum = local_18.ArrayNum;
  if (local_18.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_char,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBatch @ 14aacb5c0

TArrayView<unsigned_char_const_,int> * __thiscall
UE::Mutable::Private::FImageDataStorage::GetBatch
          (FImageDataStorage *this,TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,
          int param_1,int param_2,int param_3)

{
  GetBatchLODRange(this,__return_storage_ptr__,param_1,param_2,param_3,0,(uint)this->NumLODs);
  return __return_storage_ptr__;
}

// GetBatchFirstLODOffset @ 14aacb600

TArrayView<unsigned_char,int> * __thiscall
UE::Mutable::Private::FImageDataStorage::GetBatchFirstLODOffset
          (FImageDataStorage *this,TArrayView<unsigned_char,int> *__return_storage_ptr__,int param_1
          ,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_char,int> *pTVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  GetBatchFirstLODOffset(this,&local_18,param_1,param_2,param_3,param_4);
  __return_storage_ptr__->DataPtr = local_18.DataPtr;
  __return_storage_ptr__->ArrayNum = local_18.ArrayNum;
  if (local_18.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_char,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBatchFirstLODOffset @ 14aacb670

TArrayView<unsigned_char_const_,int> * __thiscall
UE::Mutable::Private::FImageDataStorage::GetBatchFirstLODOffset
          (FImageDataStorage *this,TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,
          int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<unsigned_char_const_,int> *pTVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TArrayView<unsigned_char_const_,int> local_28;
  
  if (((this->Buffers).ArrayNum == 0) && ((this->CompactedTailOffsets).Elements[0] == 0xffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsVoid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                       ,0x1db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  GetLOD(this,&local_28,0);
  if (local_28.ArrayNum <= param_4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OffsetInBytes < FirstLODView.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                       ,0x1de,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (local_28.ArrayNum % param_3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstLODView.Num() % BatchElemSizeInBytes == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                       ,0x1df,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (param_4 % param_3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OffsetInBytes % BatchElemSizeInBytes == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                       ,0x1e0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  iVar5 = local_28.ArrayNum - param_4;
  if (iVar5 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  iVar7 = param_2 * param_3;
  iVar3 = iVar7 * param_1;
  if (iVar3 < iVar5) {
    __return_storage_ptr__->DataPtr = local_28.DataPtr + (longlong)iVar3 + (longlong)param_4;
    iVar6 = iVar5 - iVar3;
    if (iVar7 < iVar5 - iVar3) {
      iVar6 = iVar7;
    }
    __return_storage_ptr__->ArrayNum = iVar6;
    if (iVar6 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  else {
    __return_storage_ptr__->DataPtr = (uchar *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  return __return_storage_ptr__;
}

// GetBatchLODRange @ 14aacb830

TArrayView<unsigned_char,int> * __thiscall
UE::Mutable::Private::FImageDataStorage::GetBatchLODRange
          (FImageDataStorage *this,TArrayView<unsigned_char,int> *__return_storage_ptr__,int param_1
          ,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_char,int> *pTVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  GetBatchLODRange(this,&local_18,param_1,param_2,param_3,param_4,param_5);
  __return_storage_ptr__->DataPtr = local_18.DataPtr;
  __return_storage_ptr__->ArrayNum = local_18.ArrayNum;
  if (local_18.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_char,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetBatchLODRange @ 14aacb8b0

TArrayView<unsigned_char_const_,int> * __thiscall
UE::Mutable::Private::FImageDataStorage::GetBatchLODRange
          (FImageDataStorage *this,TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,
          int param_1,int param_2,int param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  TIntVector2<unsigned_short>_u_0_s_0 TVar2;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<unsigned_char_const_,int> *pTVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong local_res8;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char_const_,int> local_48;
  
  if ((((this->Buffers).ArrayNum == 0) && ((this->CompactedTailOffsets).Elements[0] == 0xffff)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsVoid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x1f9,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar5)();
    return pTVar8;
  }
  local_res8 = (longlong)param_4;
  if ((param_5 <= param_4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODBegin < LODEnd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x1fa,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar5)();
    return pTVar8;
  }
  if (((param_4 < 0) || ((int)(uint)this->NumLODs < param_5)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODBegin >= 0 && LODEnd <= NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x1fb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar5)();
    return pTVar8;
  }
  iVar13 = param_2 * param_3;
  TVar2 = (this->ImageSize).field0_0x0._s_0;
  uVar9 = (uint)TVar2 >> 0x10;
  if (TVar2.Y < TVar2.X) {
    uVar9 = (uint)TVar2 & 0xffff;
  }
  uVar10 = 1;
  if ((short)uVar9 != 0) {
    uVar10 = uVar9;
  }
  iVar15 = 0;
  uVar1 = (ulonglong)(uVar10 - 1) * 2 + 1;
  lVar16 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  iVar7 = (int)lVar16 + -6;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  iVar11 = iVar7;
  if (param_5 < iVar7) {
    iVar11 = param_5;
  }
  if (param_4 < iVar11) {
    lVar16 = local_res8 * 0x18;
    uVar9 = param_4;
    do {
      uVar10 = 0;
      if ((int)uVar9 < (this->Buffers).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar5)();
        return pTVar8;
      }
      FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )this;
      if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )0x0) {
        FVar12 = FVar3;
      }
      iVar17 = *(int *)((uchar *)((longlong)FVar12 + 0x10) + lVar16);
      uVar10 = 0;
      if ((int)uVar9 < (this->Buffers).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar5)();
        return pTVar8;
      }
      FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )this;
      if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )0x0) {
        FVar12 = FVar3;
      }
      lVar4 = *(longlong *)((longlong)FVar12 + lVar16);
      if ((iVar17 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar5)();
        return pTVar8;
      }
      iVar14 = (iVar13 + -1 + iVar17) / iVar13;
      if ((param_1 < iVar15) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("BatchId >= NumBatches",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                             ,0x208,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar5)();
        return pTVar8;
      }
      if (param_1 - iVar15 < iVar14) {
        iVar15 = (param_1 - iVar15) * iVar13;
        iVar17 = iVar17 - iVar15;
        local_48.DataPtr = (uchar *)(iVar15 + lVar4);
        if (iVar17 < iVar13) {
          iVar13 = iVar17;
        }
        goto LAB_14aacbc1c;
      }
      iVar15 = iVar15 + iVar14;
      local_res8 = local_res8 + 1;
      uVar9 = uVar9 + 1;
      lVar16 = lVar16 + 0x18;
    } while (local_res8 < iVar11);
  }
  if (iVar7 < param_5) {
    if (param_4 < iVar7) {
      param_4 = iVar7;
    }
    GetLOD(this,&local_48,param_4);
    GetLOD(this,&local_58,param_5 + -1);
    iVar7 = (local_58.ArrayNum - (int)local_48.DataPtr) + (int)local_58.DataPtr;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar5)();
      return pTVar8;
    }
    if ((param_1 < iVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BatchId >= NumBatches",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                           ,0x21f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar5)();
      return pTVar8;
    }
    if (param_1 - iVar15 < (iVar13 + -1 + iVar7) / iVar13) {
      iVar15 = (param_1 - iVar15) * iVar13;
      iVar7 = iVar7 - iVar15;
      local_48.DataPtr = local_48.DataPtr + iVar15;
      if (iVar7 < iVar13) {
        iVar13 = iVar7;
      }
LAB_14aacbc1c:
      __return_storage_ptr__->ArrayNum = iVar13;
      __return_storage_ptr__->DataPtr = local_48.DataPtr;
      if (-1 < iVar13) {
        return __return_storage_ptr__;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar5)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->DataPtr = (uchar *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetDataSize @ 14aaccd50

int __thiscall UE::Mutable::Private::FImageDataStorage::GetDataSize(FImageDataStorage *this)

{
  int *piVar1;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  
  FVar2 = (this->Buffers).AllocatorInstance.SecondaryData;
  piVar1 = &(this->Buffers).ArrayNum;
  iVar5 = *piVar1;
  uVar6 = 0;
  if (FVar2 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    this = (FImageDataStorage *)FVar2;
  }
  FVar2 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )((longlong)this + (longlong)iVar5 * 0x18);
  while( true ) {
    if (*piVar1 != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
         )this == FVar2) break;
    uVar6 = uVar6 + (longlong)*(int *)((longlong)this + 0x10);
    this = (FImageDataStorage *)((longlong)this + 0x18);
  }
  if ((0x7ffffffe < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result < TNumericLimits<int32>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x24d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  return (int)uVar6;
}

// GetLOD @ 14aace890

TArrayView<unsigned_char,int> * __thiscall
UE::Mutable::Private::FImageDataStorage::GetLOD
          (FImageDataStorage *this,TArrayView<unsigned_char,int> *__return_storage_ptr__,int param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned_char,int> *pTVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  GetLOD(this,&local_18,param_1);
  __return_storage_ptr__->DataPtr = local_18.DataPtr;
  __return_storage_ptr__->ArrayNum = local_18.ArrayNum;
  if (local_18.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<unsigned_char,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetLOD @ 14aace8f0

TArrayView<unsigned_char_const_,int> * __thiscall
UE::Mutable::Private::FImageDataStorage::GetLOD
          (FImageDataStorage *this,TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,
          int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ushort uVar3;
  TIntVector2<unsigned_short>_u_0_s_0 TVar4;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  TArrayView<unsigned_char_const_,int> *pTVar9;
  uchar *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar14;
  uint uVar15;
  
  piVar1 = &(this->Buffers).ArrayNum;
  if ((((this->Buffers).ArrayNum == 0) && ((this->CompactedTailOffsets).Elements[0] == 0xffff)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsVoid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x180,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar9 = (TArrayView<unsigned_char_const_,int> *)(*pcVar7)();
    return pTVar9;
  }
  if (param_1 < (int)(uint)this->NumLODs) {
    TVar4 = (this->ImageSize).field0_0x0._s_0;
    uVar11 = (uint)TVar4 >> 0x10;
    if (TVar4.Y < TVar4.X) {
      uVar11 = (uint)TVar4 & 0xffff;
    }
    uVar15 = 1;
    if ((short)uVar11 != 0) {
      uVar15 = uVar11;
    }
    uVar2 = (ulonglong)(uVar15 - 1) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (int)lVar6 + -6;
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    if (param_1 < iVar12) {
      uVar11 = 0;
      if (param_1 < *piVar1) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar9 = (TArrayView<unsigned_char_const_,int> *)(*pcVar7)();
        return pTVar9;
      }
      FVar5 = (this->Buffers).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )this;
      if (FVar5 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )0x0) {
        FVar14 = FVar5;
      }
      iVar12 = *(int *)((uchar *)((longlong)FVar14 + 0x10) + (longlong)param_1 * 0x18);
      uVar11 = 0;
      if (param_1 < *piVar1) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar9 = (TArrayView<unsigned_char_const_,int> *)(*pcVar7)();
        return pTVar9;
      }
      FVar5 = (this->Buffers).AllocatorInstance.SecondaryData;
      __return_storage_ptr__->ArrayNum = iVar12;
      if (FVar5 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )0x0) {
        this = (FImageDataStorage *)FVar5;
      }
      puVar10 = *(uchar **)((longlong)this + (longlong)param_1 * 0x18);
    }
    else {
      uVar11 = param_1 - iVar12;
      if (param_1 - iVar12 < 0) {
        uVar11 = 0;
      }
      if (uVar11 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = (uint)(this->CompactedTailOffsets).Elements[uVar11 - 1];
      }
      uVar3 = (this->CompactedTailOffsets).Elements[uVar11];
      uVar13 = *piVar1 - 1;
      uVar11 = 0;
      if ((int)uVar13 < *piVar1) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar9 = (TArrayView<unsigned_char_const_,int> *)(*pcVar7)();
        return pTVar9;
      }
      FVar5 = (this->Buffers).AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )0x0) {
        this = (FImageDataStorage *)FVar5;
      }
      puVar10 = (uchar *)((ulonglong)uVar15 +
                         *(longlong *)
                          ((TIntVector2<unsigned_short> *)((longlong)this + -0x18) +
                          (longlong)*piVar1 * 6));
      iVar12 = uVar3 - uVar15;
      __return_storage_ptr__->ArrayNum = iVar12;
    }
    __return_storage_ptr__->DataPtr = puVar10;
    if ((iVar12 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pTVar9 = (TArrayView<unsigned_char_const_,int> *)(*pcVar7)();
      return pTVar9;
    }
  }
  else {
    __return_storage_ptr__->DataPtr = (uchar *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  return __return_storage_ptr__;
}

// GetNumBatches @ 14aacfbf0

int __thiscall
UE::Mutable::Private::FImageDataStorage::GetNumBatches
          (FImageDataStorage *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetNumBatchesLODRange(this,param_1,param_2,0,(uint)this->NumLODs);
  return iVar1;
}

// GetNumBatchesFirstLODOffset @ 14aacfc10

int __thiscall
UE::Mutable::Private::FImageDataStorage::GetNumBatchesFirstLODOffset
          (FImageDataStorage *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  if (((this->Buffers).ArrayNum == 0) && ((this->CompactedTailOffsets).Elements[0] == 0xffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsVoid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                       ,0x1cf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  GetLOD(this,&local_18,0);
  if (param_3 % param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OffsetInBytes % BatchElemSizeInBytes == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                       ,0x1d2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = local_18.ArrayNum;
  if ((int)((longlong)((ulonglong)(uint)(iVar3 >> 0x1f) << 0x20 | local_18._8_8_ & 0xffffffff) %
           (longlong)param_2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstLODView.Num() % BatchElemSizeInBytes == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                       ,0x1d3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (iVar3 <= param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstLODView.Num() > OffsetInBytes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                       ,0x1d4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return ((param_1 * param_2 - param_3) + -1 + iVar3) / (param_1 * param_2);
}

// GetNumBatchesLODRange @ 14aacfd40

int __thiscall
UE::Mutable::Private::FImageDataStorage::GetNumBatchesLODRange
          (FImageDataStorage *this,int param_1,int param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  TIntVector2<unsigned_short>_u_0_s_0 TVar3;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  TArrayView<unsigned_char_const_,int> local_48;
  TArrayView<unsigned_char_const_,int> local_38;
  
  lVar14 = (longlong)param_3;
  if ((((this->Buffers).ArrayNum == 0) && ((this->CompactedTailOffsets).Elements[0] == 0xffff)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsVoid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x19e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  if ((param_4 <= param_3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODBegin < LODEnd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x19f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  if (((param_3 < 0) || ((int)(uint)this->NumLODs < param_4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODBegin >= 0 && LODEnd <= NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x1a0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  TVar3 = (this->ImageSize).field0_0x0._s_0;
  uVar8 = (uint)TVar3 >> 0x10;
  iVar7 = param_1 * param_2;
  if (TVar3.Y < TVar3.X) {
    uVar8 = (uint)TVar3 & 0xffff;
  }
  uVar13 = 1;
  if ((short)uVar8 != 0) {
    uVar13 = uVar8;
  }
  iVar11 = 0;
  uVar1 = (ulonglong)(uVar13 - 1) * 2 + 1;
  lVar12 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  uVar8 = (int)lVar12 - 6;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  uVar9 = (uint)this->NumLODs;
  uVar13 = uVar8;
  if ((int)(uVar9 - uVar8) < 0) {
    uVar13 = uVar9;
  }
  if ((int)uVar13 < 0) {
    uVar13 = 0;
  }
  if (param_4 < (int)uVar13) {
    uVar13 = param_4;
  }
  if (lVar14 < (int)uVar13) {
    lVar12 = lVar14 * 0x18;
    lVar14 = (int)uVar13 - lVar14;
    uVar13 = param_3;
    do {
      uVar9 = 0;
      if ((int)uVar13 < (this->Buffers).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      FVar4 = (this->Buffers).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )this;
      if (FVar4 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )0x0) {
        FVar10 = FVar4;
      }
      uVar13 = uVar13 + 1;
      lVar2 = lVar12 + 0x10;
      lVar12 = lVar12 + 0x18;
      iVar11 = iVar11 + (*(int *)(lVar2 + (longlong)FVar10) + -1 + iVar7) / iVar7;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (param_4 <= (int)uVar8) {
    return iVar11;
  }
  if (param_3 < (int)uVar8) {
    param_3 = uVar8;
  }
  GetLOD(this,&local_38,param_3);
  GetLOD(this,&local_48,param_4 + -1);
  return (((int)local_48.DataPtr - (int)local_38.DataPtr) + -1 + local_48.ArrayNum + iVar7) / iVar7
         + iVar11;
}

// Init @ 14aad8070

void __thiscall
UE::Mutable::Private::FImageDataStorage::Init
          (FImageDataStorage *this,FImageDesc *param_1,EInitializationType param_2)

{
  int *piVar1;
  EImageFormat EVar2;
  int iVar3;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar4;
  void *_Dst;
  code *pcVar5;
  ushort uVar6;
  TArray<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  bool bVar8;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar9;
  int iVar10;
  EImageFormat *pEVar11;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined2 local_68;
  ushort uStack_66;
  ushort uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  EImageFormat *local_50;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  local_48;
  
  pEVar11 = &this->ImageFormat;
  local_50 = pEVar11;
  if (((*pEVar11 != param_1->m_format) ||
      ((this->ImageSize).field0_0x0._s_0.X != (param_1->m_size).field0_0x0._s_0.X)) ||
     ((this->ImageSize).field0_0x0._s_0.Y != (param_1->m_size).field0_0x0._s_0.Y)) {
    this->NumLODs = '\0';
    FVar4 = (this->Buffers).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )this;
    if (FVar4 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                  )0x0) {
      FVar9 = FVar4;
    }
    DestructItems<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,int>
              ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                *)FVar9,(this->Buffers).ArrayNum);
    piVar1 = &(this->Buffers).ArrayMax;
    (this->Buffers).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>_>
                (0x18,8,0,(ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                           *)this,0,piVar1);
    }
  }
  (this->ImageSize).field0_0x0 = (param_1->m_size).field0_0x0;
  *pEVar11 = param_1->m_format;
  SetNumLODs(this,(uint)param_1->m_lods,NotInitialized);
  if (param_2 == Black) {
    local_70 = (this->Buffers).ArrayNum;
    FVar4 = (this->Buffers).AllocatorInstance.SecondaryData;
    pTVar7 = &this->Buffers;
    if (FVar4 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                  )0x0) {
      this = (FImageDataStorage *)FVar4;
    }
    local_48 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )((longlong)this + (longlong)local_70 * 0x18);
    while( true ) {
      FVar4 = local_48;
      if (pTVar7->ArrayNum != local_70) {
        local_88[0] = 0;
        `TCheckedPointerIterator<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_88);
      }
      if ((ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )this == FVar4) break;
      EVar2 = *pEVar11;
      iVar3 = *(int *)((longlong)this + 0x10);
      _Dst = *(void **)this;
      if ((iVar3 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((ASTC_10x10_RG_LDR < EVar2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("format < EImageFormat::Count",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageTypes.cpp"
                             ,0x3f,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_80 = 0;
      local_78 = 0;
      uStack_58 = *(undefined4 *)(s_imageFormatData[EVar2].BlackBlock + 10);
      local_68._0_1_ = s_imageFormatData[EVar2].PixelsPerBlockX;
      local_68._1_1_ = s_imageFormatData[EVar2].PixelsPerBlockY;
      uVar6 = s_imageFormatData[EVar2].BytesPerBlock;
      uStack_64 = s_imageFormatData[EVar2].Channels;
      uStack_62 = *(undefined2 *)s_imageFormatData[EVar2].BlackBlock;
      uStack_60 = *(undefined2 *)(s_imageFormatData[EVar2].BlackBlock + 2);
      uStack_5e = *(undefined2 *)(s_imageFormatData[EVar2].BlackBlock + 4);
      uStack_5c = *(undefined2 *)(s_imageFormatData[EVar2].BlackBlock + 6);
      uStack_5a = *(undefined2 *)(s_imageFormatData[EVar2].BlackBlock + 8);
      uStack_54 = *(undefined2 *)(s_imageFormatData[EVar2].BlackBlock + 0xe);
      uStack_66 = uVar6;
      if ((*(longlong *)s_imageFormatData[EVar2].BlackBlock == 0) &&
         (*(longlong *)(s_imageFormatData[EVar2].BlackBlock + 8) == 0)) {
        memset(_Dst,0,(longlong)iVar3);
      }
      else if (uVar6 != 0) {
        if ((0x10 < (ulonglong)uVar6) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("FormatBlockSize <= FImageFormatData::MAX_BYTES_PER_BLOCK",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                               ,0x29,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((iVar3 % (int)(uint)uVar6 != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("View.Num() % FormatBlockSize == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                               ,0x2a,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = 0;
        if (0 < iVar3) {
          do {
            memcpy((void *)((longlong)iVar10 + (longlong)_Dst),&uStack_62,(ulonglong)uVar6);
            iVar10 = iVar10 + (uint)uVar6;
          } while (iVar10 < iVar3);
        }
      }
      this = (FImageDataStorage *)((longlong)this + 0x18);
      pEVar11 = local_50;
    }
  }
  return;
}

// InitInternalArray @ 14aad8300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FImageDataStorage::InitInternalArray
          (FImageDataStorage *this,int param_1,int param_2,EInitializationType param_3)

{
  longlong lVar1;
  EImageFormat EVar2;
  int iVar3;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar4;
  void *_Dst;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar9;
  uint uVar10;
  FImageFormatData *pFVar11;
  ulonglong _Size;
  int iVar12;
  uint uVar13;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  
  if (((this->Buffers).ArrayNum <= param_1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Buffers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x78,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar12 = 0;
  uVar13 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar10 = uVar13;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar4 = (this->Buffers).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )this;
  if (FVar4 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    FVar9 = FVar4;
  }
  lVar1 = (longlong)param_1 * 0x18;
  TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
  ::SetNumUninitialized
            ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
              *)((longlong)FVar9 + lVar1),param_2,Default);
  if (param_3 == Black) {
    uVar10 = 0;
    if (param_1 < (this->Buffers).ArrayNum) {
      uVar10 = uVar13;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar4 = (this->Buffers).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )this;
    if (FVar4 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                  )0x0) {
      FVar9 = FVar4;
    }
    uVar10 = 0;
    if (param_1 < (this->Buffers).ArrayNum) {
      uVar10 = uVar13;
    }
    iVar3 = *(int *)(lVar1 + 0x10 + (longlong)FVar9);
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar4 = (this->Buffers).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )this;
    if (FVar4 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                  )0x0) {
      FVar9 = FVar4;
    }
    _Dst = *(void **)(lVar1 + (longlong)FVar9);
    if ((iVar3 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar2 = this->ImageFormat;
    if ((ASTC_10x10_RG_LDR < EVar2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("format < EImageFormat::Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageTypes.cpp"
                           ,0x3f,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_68 = 0;
    local_60 = 0;
    pFVar11 = s_imageFormatData + EVar2;
    local_48 = *(undefined4 *)(s_imageFormatData[EVar2].BlackBlock + 10);
    local_58._0_1_ = pFVar11->PixelsPerBlockX;
    local_58._1_1_ = pFVar11->PixelsPerBlockY;
    local_58._2_2_ = pFVar11->BytesPerBlock;
    local_58._4_2_ = pFVar11->Channels;
    local_58._6_1_ = pFVar11->BlackBlock[0];
    local_58._7_1_ = pFVar11->BlackBlock[1];
    uStack_50 = *(undefined8 *)(s_imageFormatData[EVar2].BlackBlock + 2);
    local_44 = *(undefined2 *)(s_imageFormatData[EVar2].BlackBlock + 0xe);
    iVar8 = memcmp(&local_68,(void *)((longlong)&local_58 + 6),0x10);
    if (iVar8 == 0) {
      memset(_Dst,0,(longlong)iVar3);
    }
    else {
      uVar5._0_1_ = pFVar11->PixelsPerBlockX;
      uVar5._1_1_ = pFVar11->PixelsPerBlockY;
      uVar5._2_2_ = pFVar11->BytesPerBlock;
      uVar5._4_2_ = pFVar11->Channels;
      uVar5._6_1_ = pFVar11->BlackBlock[0];
      uVar5._7_1_ = pFVar11->BlackBlock[1];
      _Size = uVar5 >> 0x10 & 0xffff;
      if (uVar5._2_2_ != 0) {
        uVar10 = (uint)_Size;
        if ((0x10 < uVar10) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("FormatBlockSize <= FImageFormatData::MAX_BYTES_PER_BLOCK",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                               ,0x29,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((iVar3 % (int)uVar10 != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("View.Num() % FormatBlockSize == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                               ,0x2a,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (0 < iVar3) {
          do {
            memcpy((void *)((longlong)iVar12 + (longlong)_Dst),(void *)((longlong)&local_58 + 6),
                   _Size);
            iVar12 = iVar12 + uVar10;
          } while (iVar12 < iVar3);
        }
      }
    }
  }
  else if ((param_3 != NotInitialized) &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("InitType == EInitializationType::Black || InitType == EInitializationType::NotInitialized"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                              ,0x82,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// IsEmpty @ 14aad8940

bool __thiscall UE::Mutable::Private::FImageDataStorage::IsEmpty(FImageDataStorage *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 local_res8 [8];
  
  piVar1 = &(this->Buffers).ArrayNum;
  if ((((this->Buffers).ArrayNum == 0) && ((this->CompactedTailOffsets).Elements[0] == 0xffff)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsVoid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x253,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    this = (FImageDataStorage *)FVar3;
  }
  FVar3 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )((longlong)this + (longlong)iVar2 * 0x18);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
         )this == FVar3) break;
    if (*(int *)((longlong)this + 0x10) != 0) {
      return false;
    }
    this = (FImageDataStorage *)((longlong)this + 0x18);
  }
  return true;
}

// ResizeLOD @ 14aae8a30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FImageDataStorage::ResizeLOD
          (FImageDataStorage *this,int param_1,int param_2,EAllowShrinking param_3)

{
  TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
  *this_00;
  ulonglong uVar1;
  TIntVector2<unsigned_short>_u_0_s_0 TVar2;
  int iVar3;
  int iVar4;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar5;
  code *pcVar6;
  bool bVar7;
  ushort uVar8;
  longlong lVar9;
  ushort uVar10;
  uint uVar11;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar12;
  void *_Src;
  ushort *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  TArrayView<unsigned_char_const_,int> local_48;
  
  if (((this->Buffers).ArrayNum == 0) && ((this->CompactedTailOffsets).Elements[0] == 0xffff)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsVoid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                       ,0x144,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSizeBytes >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                       ,0x145,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TVar2 = (this->ImageSize).field0_0x0._s_0;
  uVar10 = TVar2.Y;
  uVar8 = TVar2.X;
  if (uVar10 < uVar8) {
    uVar10 = uVar8;
  }
  uVar11 = 1;
  if (uVar10 != 0) {
    uVar11 = (uint)uVar10;
  }
  uVar1 = (ulonglong)(uVar11 - 1) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  iVar16 = (int)lVar9 + -6;
  if (iVar16 < 0) {
    iVar16 = 0;
  }
  if (((this->Buffers).ArrayNum == 0) && ((this->CompactedTailOffsets).Elements[0] == 0xffff)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsVoid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ImageDataStorage.h"
                       ,0x85,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((int)(uint)this->NumLODs <= param_1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODIndex < NumLODs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ImageDataStorage.h"
                       ,0x86,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TVar2 = (this->ImageSize).field0_0x0._s_0;
  uVar11 = (uint)TVar2 >> 0x10;
  if (TVar2.Y < TVar2.X) {
    uVar11 = (uint)TVar2 & 0xffff;
  }
  uVar15 = 1;
  if ((short)uVar11 != 0) {
    uVar15 = uVar11;
  }
  uVar1 = (ulonglong)(uVar15 - 1) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  uVar11 = (int)lVar9 - 6;
  if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
  if (param_1 < (int)uVar11) {
    uVar11 = param_1;
  }
  uVar15 = 0;
  if ((int)uVar11 < (this->Buffers).ArrayNum) {
    uVar15 = ~uVar11 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar5 = (this->Buffers).AllocatorInstance.SecondaryData;
  FVar12 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
            )this;
  if (FVar5 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    FVar12 = FVar5;
  }
  this_00 = (TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
             *)((longlong)FVar12 + (longlong)(int)uVar11 * 0x18);
  if (param_1 < iVar16) {
    TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
    ::SetNum(this_00,param_2,param_3);
  }
  else {
    iVar3 = (this->Buffers).ArrayNum;
    uVar15 = iVar3 - 1;
    uVar11 = 0;
    if ((int)uVar15 < iVar3) {
      uVar11 = ~uVar15 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FVar5 = (this->Buffers).AllocatorInstance.SecondaryData;
    FVar12 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
              )this;
    if (FVar5 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                  )0x0) {
      FVar12 = FVar5;
    }
    if (this_00 !=
        (TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
         *)((longlong)FVar12 + (longlong)((this->Buffers).ArrayNum + -1) * 0x18)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("&Buffer == &Buffers.Last()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x150,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    GetLOD(this,&local_48,param_1);
    if (local_48.ArrayNum < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar4 = this_00->ArrayNum;
    iVar14 = param_2 - local_48.ArrayNum;
    iVar3 = iVar4 + iVar14;
    if (0 < iVar14) {
      TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
      ::SetNum(this_00,iVar3,param_3);
    }
    if (param_1 < (int)(this->NumLODs - 1)) {
      uVar10 = (this->CompactedTailOffsets).Elements[(uint)(param_1 - iVar16)];
      _Src = (void *)((ulonglong)uVar10 + (this_00->AllocatorInstance)._padding_);
      memmove((void *)((longlong)iVar14 + (longlong)_Src),_Src,(longlong)(int)(iVar4 - (uint)uVar10)
             );
    }
    if (iVar14 < 0) {
      TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
      ::SetNum(this_00,iVar3,param_3);
    }
    if (0xfffe < this_00->ArrayNum) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Num() < TNumericLimits<uint16>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x174,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar9 = (longlong)(param_1 - iVar16);
    if (lVar9 < 7) {
      puVar13 = (this->CompactedTailOffsets).Elements + lVar9;
      lVar9 = 7 - lVar9;
      do {
        if ((int)((uint)*puVar13 + iVar14) < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("int32(CompactedTailOffsets[I]) + SizeDifference >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                             ,0x179,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        *puVar13 = *puVar13 + (short)iVar14;
        puVar13 = puVar13 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  return;
}

// Serialise @ 14aaf41a0

void __thiscall
UE::Mutable::Private::FImageDataStorage::Serialise(FImageDataStorage *this,FOutputArchive *param_1)

{
  int iVar1;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar2;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar3;
  TStaticArray<unsigned_short,7,4294967295> *pTVar4;
  longlong lVar5;
  uint local_res8 [2];
  
  Private::operator<<(param_1,(ushort *)&this->ImageSize);
  Private::operator<<(param_1,&(this->ImageSize).field0_0x0._s_0.Y);
  local_res8[0] = (uint)this->ImageFormat;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  Private::operator<<(param_1,&this->NumLODs);
  local_res8[0] = (this->Buffers).ArrayNum;
  Private::operator<<(param_1,(int *)local_res8);
  FVar2 = (this->Buffers).AllocatorInstance.SecondaryData;
  iVar1 = (this->Buffers).ArrayNum;
  FVar3 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )this;
  if (FVar2 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    FVar3 = FVar2;
  }
  FVar2 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )((longlong)FVar3 + (longlong)iVar1 * 0x18);
  while( true ) {
    if ((this->Buffers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar3 == FVar2) break;
    local_res8[0] = *(uint *)((longlong)FVar3 + 0x10);
    Private::operator<<(param_1,local_res8);
    if (local_res8[0] != 0) {
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,*(undefined8 *)FVar3,local_res8[0]);
    }
    FVar3 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )((longlong)FVar3 + 0x18);
  }
  lVar5 = 7;
  local_res8[0] = 7;
  Private::operator<<(param_1,(int *)local_res8);
  pTVar4 = &this->CompactedTailOffsets;
  do {
    Private::operator<<(param_1,pTVar4->Elements);
    pTVar4 = (TStaticArray<unsigned_short,7,4294967295> *)(pTVar4->Elements + 1);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

// SetNumLODs @ 14aaf8490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FImageDataStorage::SetNumLODs
          (FImageDataStorage *this,int param_1,EInitializationType param_2)

{
  byte bVar1;
  EImageFormat EVar2;
  EImageFormat EVar3;
  byte bVar4;
  ushort uVar5;
  TIntVector2<unsigned_short>_u_0_s_0 TVar6;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ushort *puVar15;
  uint uVar16;
  ulonglong uVar17;
  FImageFormatData *pFVar18;
  ulonglong _Size;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar22;
  TStaticArray<unsigned_short,7,4294967295> *pTVar23;
  longlong lVar24;
  int iVar25;
  void *_Dst;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  EInitializationType local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  
  local_74 = param_2;
  if ((((this->Buffers).ArrayNum == 0) && ((this->CompactedTailOffsets).Elements[0] == 0xffff)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsVoid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0xae,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar1 = this->NumLODs;
  if (param_1 != (uint)bVar1) {
    TVar6 = (this->ImageSize).field0_0x0._s_0;
    uVar16 = (uint)TVar6 >> 0x10;
    if (TVar6.Y < TVar6.X) {
      uVar16 = (uint)TVar6 & 0xffff;
    }
    uVar19 = 1;
    if ((short)uVar16 != 0) {
      uVar19 = uVar16;
    }
    iVar25 = 0;
    uVar16 = 0;
    uVar21 = (ulonglong)(uVar19 - 1) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_60 = (int)lVar14;
    uVar19 = local_60 - 6U;
    if ((int)(local_60 - 6U) < 0) {
      uVar19 = uVar16;
    }
    lVar14 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_5c = (int)lVar14;
    local_68 = local_5c + 1;
    if (param_1 < local_5c + 1) {
      local_68 = param_1;
    }
    local_70 = bVar1 - uVar19;
    if ((int)local_70 < 0) {
      local_70 = uVar16;
    }
    uVar20 = bVar1 - local_70;
    if ((int)(bVar1 - local_70) < 0) {
      uVar20 = uVar16;
    }
    local_6c = local_68 - uVar19;
    if ((int)(local_68 - uVar19) < 0) {
      local_6c = uVar16;
    }
    uVar19 = local_68 - local_6c;
    if ((int)(local_68 - local_6c) < 0) {
      uVar19 = uVar16;
    }
    TArray<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
    ::SetNum(&this->Buffers,(0 < (int)local_6c) + uVar19,Default);
    EVar2 = this->ImageFormat;
    if ((ASTC_10x10_RG_LDR < EVar2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("format < EImageFormat::Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageTypes.cpp"
                           ,0x3f,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    EVar3 = this->ImageFormat;
    bVar1 = s_imageFormatData[EVar2].PixelsPerBlockX;
    if ((ASTC_10x10_RG_LDR < EVar3) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("format < EImageFormat::Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageTypes.cpp"
                           ,0x3f,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar4 = s_imageFormatData[EVar3].PixelsPerBlockY;
    EVar2 = this->ImageFormat;
    if ((ASTC_10x10_RG_LDR < EVar2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("format < EImageFormat::Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageTypes.cpp"
                           ,0x3f,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_78 = (uint)s_imageFormatData[EVar2].BytesPerBlock;
    if (((bVar1 != 0) && (bVar4 != 0)) && (local_78 != 0)) {
      uVar12 = *(uint *)(this->ImageSize).field0_0x0.XY;
      if (0 < (int)uVar20) {
        uVar21 = (ulonglong)uVar20;
        local_84 = uVar12;
        do {
          uVar10 = (local_84 & 0xffff) + 1 >> 1;
          uVar11 = (local_84 >> 0x10) + 1 >> 1;
          uVar12 = uVar11 << 0x10 | uVar10;
          local_84 = CONCAT22((short)uVar11,(short)uVar10);
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      local_88 = uVar19 - uVar20;
      if ((int)(uVar19 - uVar20) < 0) {
        local_88 = uVar16;
      }
      local_7c = uVar12;
      if (0 < (int)local_88) {
        do {
          InitInternalArray(this,uVar20 + iVar25,
                            ((int)((bVar4 - 1) + (uVar12 >> 0x10)) / (int)(uint)bVar4) *
                            ((int)((bVar1 - 1) + (uVar12 & 0xffff)) / (int)(uint)bVar1) * local_78,
                            local_74);
          iVar25 = iVar25 + 1;
          local_80 = CONCAT22((short)((uVar12 >> 0x10) + 1 >> 1),(short)((uVar12 & 0xffff) + 1 >> 1)
                             );
          uVar12 = local_80;
        } while (iVar25 < (int)local_88);
      }
      uVar16 = uVar12 >> 0x10;
      uVar21 = 0;
      lVar14 = (longlong)(int)local_6c;
      if (0 < (int)local_6c) {
        uVar19 = local_6c - local_70;
        if ((int)(local_6c - local_70) < 0) {
          uVar19 = 0;
        }
        uVar17 = uVar21;
        if (0 < (int)local_6c) {
          uVar20 = uVar12 & 0xffff;
          pTVar23 = &this->CompactedTailOffsets;
          lVar24 = lVar14;
          do {
            uVar10 = (int)uVar17 +
                     ((int)((bVar4 - 1) + uVar16) / (int)(uint)bVar4) *
                     ((int)((bVar1 - 1) + uVar20) / (int)(uint)bVar1) * local_78;
            uVar17 = (ulonglong)uVar10;
            uVar16 = uVar16 + 1 >> 1;
            uVar20 = uVar20 + 1 >> 1;
            pTVar23->Elements[0] = (ushort)uVar10;
            lVar24 = lVar24 + -1;
            pTVar23 = (TStaticArray<unsigned_short,7,4294967295> *)(pTVar23->Elements + 1);
          } while (lVar24 != 0);
        }
        iVar25 = (this->Buffers).ArrayNum;
        uVar20 = iVar25 - 1;
        uVar16 = 0;
        if ((int)uVar20 < iVar25) {
          uVar16 = ~uVar20 >> 0x1f;
        }
        local_88 = uVar19;
        local_7c = uVar12;
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar7 = (this->Buffers).AllocatorInstance.SecondaryData;
        FVar22 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                  )this;
        if (FVar7 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                      )0x0) {
          FVar22 = FVar7;
        }
        lVar24 = (longlong)FVar22 + (longlong)(this->Buffers).ArrayNum * 0x18;
        TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
        ::SetNumUninitialized
                  ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                    *)(lVar24 + -0x18),(int)uVar17,Default);
        if ((0 < (int)uVar19) && (local_74 == Black)) {
          uVar17 = uVar21;
          if (local_70 != 0) {
            uVar17 = (ulonglong)(this->CompactedTailOffsets).Elements[local_70 - 1];
          }
          iVar25 = *(int *)(lVar24 + -8);
          _Dst = (void *)(*(longlong *)(lVar24 + -0x18) + uVar17);
          EVar2 = this->ImageFormat;
          if ((iVar25 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((ASTC_10x10_RG_LDR < EVar2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("format < EImageFormat::Count",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageTypes.cpp"
                                 ,0x3f,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_98 = 0;
          local_90 = 0;
          pFVar18 = s_imageFormatData + EVar2;
          local_48 = *(undefined4 *)(s_imageFormatData[EVar2].BlackBlock + 10);
          local_58._0_1_ = pFVar18->PixelsPerBlockX;
          local_58._1_1_ = pFVar18->PixelsPerBlockY;
          local_58._2_2_ = pFVar18->BytesPerBlock;
          local_58._4_2_ = pFVar18->Channels;
          local_58._6_1_ = pFVar18->BlackBlock[0];
          local_58._7_1_ = pFVar18->BlackBlock[1];
          uStack_50 = *(undefined8 *)(s_imageFormatData[EVar2].BlackBlock + 2);
          local_44 = *(undefined2 *)(s_imageFormatData[EVar2].BlackBlock + 0xe);
          iVar13 = memcmp(&local_98,(void *)((longlong)&local_58 + 6),0x10);
          if (iVar13 == 0) {
            memset(_Dst,0,(longlong)iVar25);
          }
          else {
            uVar17._0_1_ = pFVar18->PixelsPerBlockX;
            uVar17._1_1_ = pFVar18->PixelsPerBlockY;
            uVar17._2_2_ = pFVar18->BytesPerBlock;
            uVar17._4_2_ = pFVar18->Channels;
            uVar17._6_1_ = pFVar18->BlackBlock[0];
            uVar17._7_1_ = pFVar18->BlackBlock[1];
            _Size = uVar17 >> 0x10 & 0xffff;
            if (uVar17._2_2_ != 0) {
              uVar16 = (uint)_Size;
              if ((0x10 < uVar16) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("FormatBlockSize <= FImageFormatData::MAX_BYTES_PER_BLOCK",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                                     ,0x29,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if ((iVar25 % (int)uVar16 != 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("View.Num() % FormatBlockSize == 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                                     ,0x2a,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (0 < iVar25) {
                do {
                  memcpy((void *)((longlong)(int)uVar21 + (longlong)_Dst),
                         (void *)((longlong)&local_58 + 6),_Size);
                  uVar19 = (int)uVar21 + uVar16;
                  uVar21 = (ulonglong)uVar19;
                } while ((int)uVar19 < iVar25);
              }
            }
          }
        }
        uVar5 = (this->CompactedTailOffsets).Elements[local_6c - 1];
        if (lVar14 < 7) {
          puVar15 = (this->CompactedTailOffsets).Elements + lVar14;
          lVar14 = 7 - lVar14;
          do {
            *puVar15 = uVar5;
            puVar15 = puVar15 + 1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
    }
    this->NumLODs = (uchar)local_68;
  }
  return;
}

// Unserialise @ 14aafcc90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FImageDataStorage::Unserialise(FImageDataStorage *this,FInputArchive *param_1)

{
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TStaticArray<unsigned_short,7,4294967295> *pTVar6;
  longlong lVar7;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar8;
  int local_res8 [2];
  uint local_res10 [2];
  int local_res18 [2];
  EImageFormat local_res20 [8];
  
  Private::operator>>(param_1,(ushort *)&this->ImageSize);
  Private::operator>>(param_1,&(this->ImageSize).field0_0x0._s_0.Y);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res20,4);
  this->ImageFormat = local_res20[0];
  Private::operator>>(param_1,&this->NumLODs);
  local_res8[0] = 0;
  Private::operator>>(param_1,local_res8);
  TArray<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::SetNum(&this->Buffers,local_res8[0],Default);
  uVar5 = 0;
  if (0 < local_res8[0]) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Buffers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->Buffers).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
               )this;
      if (FVar1 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                    )0x0) {
        FVar8 = FVar1;
      }
      Private::operator>>(param_1,local_res10);
      TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
      ::SetNum((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                *)((longlong)FVar8 + lVar7),local_res10[0],Default);
      if (local_res10[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,
                   (((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
                      *)((longlong)FVar8 + lVar7))->AllocatorInstance)._padding_,local_res10[0]);
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((int)uVar5 < local_res8[0]);
  }
  local_res18[0] = 0;
  Private::operator>>(param_1,local_res18);
  if ((local_res18[0] != 7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumTailOffsets == CompactedTailOffsets.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageDataStorage.cpp"
                         ,0x285,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar6 = &this->CompactedTailOffsets;
  lVar7 = 7;
  do {
    Private::operator>>(param_1,pTVar6->Elements);
    pTVar6 = (TStaticArray<unsigned_short,7,4294967295> *)(pTVar6->Elements + 1);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

