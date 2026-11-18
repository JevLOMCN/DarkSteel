// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// Unlock @ 145bbfdb0

FTextureLockParams * __thiscall
FRHILockTracker::Unlock
          (FRHILockTracker *this,FTextureLockParams *__return_storage_ptr__,
          FRHILockedTextureDesc *param_1)

{
  undefined8 *puVar1;
  uchar *puVar2;
  ForElementType<FRHILockTracker::FTextureLockParams> FVar3;
  code *pcVar4;
  FRHITexture *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  bool bVar18;
  uint uVar19;
  FTextureLockParams *pFVar20;
  ForElementType<FRHILockTracker::FTextureLockParams> FVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  
  uVar24 = 0;
  iVar22 = (this->OutstandingTextureLocks).ArrayNum;
  uVar27 = uVar24;
  if (0 < iVar22) {
    do {
      uVar23 = (uint)uVar24;
      uVar25 = ~uVar23 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar23 < iVar22) {
        uVar19 = uVar25;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        pFVar20 = (FTextureLockParams *)(*pcVar4)();
        return pFVar20;
      }
      FVar3 = (this->OutstandingTextureLocks).AllocatorInstance.SecondaryData;
      FVar21 = (ForElementType<FRHILockTracker::FTextureLockParams>)this;
      if (FVar3 != (ForElementType<FRHILockTracker::FTextureLockParams>)0x0) {
        FVar21 = FVar3;
      }
      if ((((*(FRHITexture **)(uVar27 + (longlong)FVar21) == param_1->Texture) &&
           (*(uint *)(uVar27 + 8 + (longlong)FVar21) == param_1->FaceIndex)) &&
          (*(uint *)(uVar27 + 0xc + (longlong)FVar21) == param_1->ArrayIndex)) &&
         (*(uint *)(uVar27 + 0x10 + (longlong)FVar21) == param_1->MipIndex)) {
        uVar19 = 0;
        if ((int)uVar23 < (this->OutstandingTextureLocks).ArrayNum) {
          uVar19 = uVar25;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          pFVar20 = (FTextureLockParams *)(*pcVar4)();
          return pFVar20;
        }
        FVar3 = (this->OutstandingTextureLocks).AllocatorInstance.SecondaryData;
        lVar26 = (longlong)(int)uVar23;
        FVar21 = (ForElementType<FRHILockTracker::FTextureLockParams>)this;
        if (FVar3 != (ForElementType<FRHILockTracker::FTextureLockParams>)0x0) {
          FVar21 = FVar3;
        }
        puVar1 = (undefined8 *)((longlong)FVar21 + lVar26 * 0x30);
        pFVar5 = (FRHITexture *)*puVar1;
        uVar6 = puVar1[1];
        uVar7 = *(undefined8 *)((uchar *)((longlong)FVar21 + 0x10) + lVar26 * 0x30);
        uVar8 = *(undefined8 *)((uchar *)((longlong)FVar21 + 0x10) + lVar26 * 0x30 + 8);
        puVar2 = (uchar *)((longlong)FVar21 + 0x20) + lVar26 * 0x30;
        pvVar9 = *(void **)puVar2;
        uVar10 = puVar2[8];
        uVar11 = puVar2[9];
        uVar12 = puVar2[10];
        uVar13 = puVar2[0xb];
        uVar14 = puVar2[0xc];
        uVar15 = puVar2[0xd];
        uVar16 = puVar2[0xe];
        uVar17 = puVar2[0xf];
        uVar19 = 0;
        if ((int)uVar23 < (this->OutstandingTextureLocks).ArrayNum) {
          uVar19 = uVar25;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          pFVar20 = (FTextureLockParams *)(*pcVar4)();
          return pFVar20;
        }
        TArray<FRHILockTracker::FTextureLockParams,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
        ::RemoveAtSwapImpl(&this->OutstandingTextureLocks,uVar23);
        (__return_storage_ptr__->Desc).Texture = pFVar5;
        (__return_storage_ptr__->Desc).FaceIndex = (int)uVar6;
        (__return_storage_ptr__->Desc).ArrayIndex = (int)((ulonglong)uVar6 >> 0x20);
        *(undefined8 *)&(__return_storage_ptr__->Desc).MipIndex = uVar7;
        *(undefined8 *)&__return_storage_ptr__->LockMode = uVar8;
        __return_storage_ptr__->Data = pvVar9;
        __return_storage_ptr__->bDirectLock = (bool)uVar10;
        __return_storage_ptr__->field_0x29 = uVar11;
        __return_storage_ptr__->field_0x2a = uVar12;
        __return_storage_ptr__->field_0x2b = uVar13;
        __return_storage_ptr__->field_0x2c = uVar14;
        __return_storage_ptr__->field_0x2d = uVar15;
        __return_storage_ptr__->field_0x2e = uVar16;
        __return_storage_ptr__->field_0x2f = uVar17;
        return __return_storage_ptr__;
      }
      iVar22 = (this->OutstandingTextureLocks).ArrayNum;
      uVar24 = (ulonglong)(uVar23 + 1);
      uVar27 = uVar27 + 0x30;
    } while ((int)(uVar23 + 1) < iVar22);
  }
  RaiseMismatchError(this);
  *(undefined8 *)&(__return_storage_ptr__->Desc).MipIndex = 0;
  *(undefined8 *)&__return_storage_ptr__->LockMode = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x29 = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x2d = 0;
  __return_storage_ptr__->field_0x2f = 0;
  (__return_storage_ptr__->Desc).Texture = (FRHITexture *)0x0;
  (__return_storage_ptr__->Desc).FaceIndex = 0;
  (__return_storage_ptr__->Desc).ArrayIndex = 0;
  __return_storage_ptr__->Data = (void *)0x0;
  __return_storage_ptr__->bDirectLock = false;
  return __return_storage_ptr__;
}

