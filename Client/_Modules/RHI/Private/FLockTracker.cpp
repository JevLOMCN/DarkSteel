// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// Lock @ 145cb2600

void __thiscall
FLockTracker::Lock(FLockTracker *this,void *param_1,void *param_2,uint param_3,uint param_4,
                  EResourceLockMode param_5)

{
  TArray<FLockTracker::FLockParams,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  undefined4 *puVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FLockTracker::FLockParams> FVar8;
  ForElementType<FLockTracker::FLockParams> FVar9;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  EResourceLockMode EStack_30;
  undefined4 uStack_2c;
  
  if (this == (FLockTracker *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pTVar1 = &this->OutstandingLocks;
  FVar9 = (this->OutstandingLocks).AllocatorInstance.SecondaryData;
  iVar7 = (this->OutstandingLocks).ArrayNum;
  if (FVar9 == (ForElementType<FLockTracker::FLockParams>)0x0) {
    FVar9 = (ForElementType<FLockTracker::FLockParams>)pTVar1;
  }
  FVar8 = (ForElementType<FLockTracker::FLockParams>)((longlong)iVar7 * 0x20 + (longlong)FVar9);
  while( true ) {
    if ((this->OutstandingLocks).ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FLockTracker::FLockParams,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar9 == FVar8) break;
    if (*(void **)FVar9 == param_1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parms.RHIBuffer != RHIBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x140,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FVar9 = (ForElementType<FLockTracker::FLockParams>)((longlong)FVar9 + 0x20);
  }
  FVar9 = (this->OutstandingLocks).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FLockTracker::FLockParams>)0x0) {
    FVar9 = (ForElementType<FLockTracker::FLockParams>)pTVar1;
  }
  local_38 = param_4;
  EStack_30 = param_5;
  local_48 = param_1;
  uStack_40 = param_2;
  uStack_34 = param_3;
  if (((ulonglong)FVar9 <= &local_48) &&
     (&local_48 <
      (undefined8 *)((longlong)(this->OutstandingLocks).ArrayMax * 0x20 + (longlong)FVar9))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->OutstandingLocks).ArrayNum;
  piVar2 = &(this->OutstandingLocks).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLockTracker::FLockParams>_>
                      (0x820,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->OutstandingLocks).ArrayNum = iVar7 + 1;
  FVar9 = (this->OutstandingLocks).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FLockTracker::FLockParams>)0x0) {
    FVar9 = (ForElementType<FLockTracker::FLockParams>)pTVar1;
  }
  puVar3 = (undefined4 *)((longlong)FVar9 + (longlong)iVar7 * 0x20);
  *puVar3 = (undefined4)local_48;
  puVar3[1] = local_48._4_4_;
  puVar3[2] = (undefined4)uStack_40;
  puVar3[3] = uStack_40._4_4_;
  puVar4 = (uchar *)((longlong)FVar9 + 0x10) + (longlong)iVar7 * 0x20;
  *(uint *)puVar4 = local_38;
  *(uint *)(puVar4 + 4) = uStack_34;
  *(EResourceLockMode *)(puVar4 + 8) = EStack_30;
  *(undefined4 *)(puVar4 + 0xc) = uStack_2c;
                    /* WARNING: Could not recover jumptable at 0x000145cb27d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Unlock @ 145cc7f90

FLockParams * __thiscall
FLockTracker::Unlock(FLockTracker *this,FLockParams *__return_storage_ptr__,void *param_1)

{
  TArray<FLockTracker::FLockParams,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  FLockParams *pFVar9;
  ForElementType<FLockTracker::FLockParams> FVar10;
  ForElementType<FLockTracker::FLockParams> FVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (this == (FLockTracker *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar13 = 0;
  if (0 < (this->OutstandingLocks).ArrayNum) {
    this_00 = &this->OutstandingLocks;
    uVar15 = uVar13;
    do {
      uVar12 = (uint)uVar13;
      uVar14 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < (this->OutstandingLocks).ArrayNum) {
        uVar8 = uVar14;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FLockParams *)(*pcVar2)();
          return pFVar9;
        }
      }
      FVar11 = (this->OutstandingLocks).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FLockTracker::FLockParams>)this_00;
      if (FVar11 != (ForElementType<FLockTracker::FLockParams>)0x0) {
        FVar10 = FVar11;
      }
      if (*(void **)(uVar15 + (longlong)FVar10) == param_1) {
        uVar8 = 0;
        if ((int)uVar12 < (this->OutstandingLocks).ArrayNum) {
          uVar8 = uVar14;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FLockParams *)(*pcVar2)();
            return pFVar9;
          }
        }
        FVar11 = (this->OutstandingLocks).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<FLockTracker::FLockParams>)0x0) {
          FVar11 = (ForElementType<FLockTracker::FLockParams>)this_00;
        }
        puVar1 = (undefined8 *)((longlong)FVar11 + (longlong)(int)uVar12 * 0x20);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        uVar5 = *(undefined8 *)((uchar *)((longlong)FVar11 + 0x10) + (longlong)(int)uVar12 * 0x20);
        uVar6 = *(undefined8 *)
                 ((uchar *)((longlong)FVar11 + 0x10) + (longlong)(int)uVar12 * 0x20 + 8);
        uVar8 = 0;
        if ((int)uVar12 < (this->OutstandingLocks).ArrayNum) {
          uVar8 = uVar14;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FLockParams *)(*pcVar2)();
            return pFVar9;
          }
        }
        TArray<FLockTracker::FLockParams,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
        ::RemoveAtSwapImpl(this_00,uVar12);
        local_48 = (undefined4)uVar3;
        uStack_44 = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_40 = (undefined4)uVar4;
        uStack_3c = (undefined4)((ulonglong)uVar4 >> 0x20);
        *(undefined4 *)&__return_storage_ptr__->RHIBuffer = local_48;
        *(undefined4 *)((longlong)&__return_storage_ptr__->RHIBuffer + 4) = uStack_44;
        *(undefined4 *)&__return_storage_ptr__->Buffer = uStack_40;
        *(undefined4 *)((longlong)&__return_storage_ptr__->Buffer + 4) = uStack_3c;
        __return_storage_ptr__->BufferSize = (int)uVar5;
        __return_storage_ptr__->Offset = (int)((ulonglong)uVar5 >> 0x20);
        *(undefined8 *)&__return_storage_ptr__->LockMode = uVar6;
        goto LAB_145cc808d;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar15 = uVar15 + 0x20;
    } while ((int)(uVar12 + 1) < (this->OutstandingLocks).ArrayNum);
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Mismatched RHI buffer locks.\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                     ,0x151,L"");
  if (bVar7) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FLockParams *)(*pcVar2)();
    return pFVar9;
  }
  __return_storage_ptr__->RHIBuffer = (void *)0x0;
  __return_storage_ptr__->Buffer = (void *)0x0;
  __return_storage_ptr__->BufferSize = 0;
  __return_storage_ptr__->Offset = 0;
  __return_storage_ptr__->LockMode = RLM_WriteOnly;
LAB_145cc808d:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return __return_storage_ptr__;
}

