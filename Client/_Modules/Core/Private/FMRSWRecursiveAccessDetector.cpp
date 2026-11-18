// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// ~FMRSWRecursiveAccessDetector @ 141480f70

void __thiscall
FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(FMRSWRecursiveAccessDetector *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  TArray<FMRSWRecursiveAccessDetector::FDestructionSentinel_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar6;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar7;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar12;
  longlong lVar13;
  uint uVar14;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar15;
  atomic<unsigned___int64> local_res10;
  longlong local_res18;
  FMRSWRecursiveAccessDetector *local_res20;
  FMRSWRecursiveAccessDetector *local_58;
  atomic<unsigned___int64> *local_50;
  
  uVar14 = 0;
  local_res10 = (atomic<unsigned___int64>)0x0;
  pTVar5 = GetDestructionSentinelStackTls();
  if (pTVar5->ArrayNum != 0) {
    lVar13 = 0;
    local_res18 = 0;
    do {
      FVar6 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
              GetDestructionSentinelStackTls();
      uVar11 = 0;
      if ((int)uVar14 < *(int *)((longlong)FVar6 + 0x28)) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
           ((longlong)FVar6 + 0x20) !=
          (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
        FVar6 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                 ((longlong)FVar6 + 0x20);
      }
      piVar1 = *(int **)(lVar13 + (longlong)FVar6);
      if (*(FMRSWRecursiveAccessDetector **)(piVar1 + 2) == this) {
        *(undefined1 *)(piVar1 + 4) = 1;
        if (*piVar1 == 0) {
          local_res10._0_4_ = local_res10._0_4_ + 1 & 0xfffff | local_res10._0_4_ & 0xfff00000;
          FVar7 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)GetReadersTls();
          FVar8 = FVar7;
          if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar7 + 0x40)
              != (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
            FVar8 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                     ((longlong)FVar7 + 0x40);
          }
          for (FVar12 = FVar8;
              FVar12 != (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)
                        ((longlong)*(int *)((longlong)FVar7 + 0x48) * 0x10 + (longlong)FVar8);
              FVar12 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)
                       ((longlong)FVar12 + 0x10)) {
            if (*(FMRSWRecursiveAccessDetector **)FVar12 == this) {
              uVar11 = (uint)((longlong)FVar12 - (longlong)FVar8 >> 4);
              if (uVar11 != 0xffffffff) {
                FVar8 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)GetReadersTls();
                uVar9 = 0;
                if ((int)uVar11 < *(int *)((longlong)FVar8 + 0x48)) {
                  uVar9 = ~uVar11 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                     ((longlong)FVar8 + 0x40) !=
                    (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
                  FVar8 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                           ((longlong)FVar8 + 0x40);
                }
                piVar1 = (int *)((longlong)(int)uVar11 * 0x10 + 8 + (longlong)FVar8);
                *piVar1 = *piVar1 + -1;
                lVar13 = local_res18;
                if (*piVar1 == 0) {
                  FVar8 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)GetReadersTls();
                  uVar9 = 0;
                  if ((int)uVar11 < *(int *)((longlong)FVar8 + 0x48)) {
                    uVar9 = ~uVar11 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  FVar7 = FVar8;
                  if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                       ((longlong)FVar8 + 0x40) !=
                      (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
                    FVar7 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                             ((longlong)FVar8 + 0x40);
                  }
                  iVar10 = ~uVar11 + *(int *)((longlong)FVar8 + 0x48);
                  if (1 < iVar10) {
                    iVar10 = 1;
                  }
                  if (iVar10 != 0) {
                    memmove((void *)((longlong)(int)uVar11 * 0x10 + (longlong)FVar7),
                            (void *)((longlong)(*(int *)((longlong)FVar8 + 0x48) - iVar10) * 0x10 +
                                    (longlong)FVar7),(longlong)iVar10 << 4);
                  }
                  *(int *)((longlong)FVar8 + 0x48) = *(int *)((longlong)FVar8 + 0x48) + -1;
                  lVar13 = local_res18;
                }
                goto LAB_1414811ce;
              }
              break;
            }
          }
          local_res20 = this;
          `FMRSWRecursiveAccessDetector::RemoveReaderFromTls'::__l2::<lambda_2>::operator()
                    (&local_res20);
        }
        else {
          local_res10._0_4_ =
               (local_res10._0_4_ & 0xfff00000) + 0x100000 | local_res10._0_4_ & 0xfffff;
          DVar4 = GetCurrentThreadId();
          local_res10._4_4_ = DVar4 + 1;
        }
LAB_1414811ce:
        FVar6 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
                GetDestructionSentinelStackTls();
        uVar11 = 0;
        if ((int)uVar14 < *(int *)((longlong)FVar6 + 0x28)) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar15 = FVar6;
        if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
             ((longlong)FVar6 + 0x20) !=
            (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
          FVar15 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                    ((longlong)FVar6 + 0x20);
        }
        iVar10 = ~uVar14 + *(int *)((longlong)FVar6 + 0x28);
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove((void *)((longlong)FVar15 + (longlong)(int)uVar14 * 8),
                  (void *)((longlong)FVar15 +
                          (longlong)(*(int *)((longlong)FVar6 + 0x28) - iVar10) * 8),
                  (longlong)iVar10 << 3);
        }
        iVar10 = *(int *)((longlong)FVar6 + 0x28) + -1;
        *(int *)((longlong)FVar6 + 0x28) = iVar10;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                  (8,8,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)FVar6
                   ,iVar10,(int *)((longlong)FVar6 + 0x2c));
        uVar14 = uVar14 - 1;
        lVar13 = lVar13 + -8;
      }
      lVar13 = lVar13 + 8;
      uVar14 = uVar14 + 1;
      local_res18 = lVar13;
      pTVar5 = GetDestructionSentinelStackTls();
    } while (uVar14 != pTVar5->ArrayNum);
  }
  if ((this->State != local_res10) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    local_50 = &local_res10;
    local_58 = this;
    `FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector'::__l15::<lambda_1>::operator()
              (&local_58);
  }
  return;
}

// AcquireWriteAccess @ 141485190

bool __thiscall FMRSWRecursiveAccessDetector::AcquireWriteAccess(FMRSWRecursiveAccessDetector *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar5;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar6;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar7;
  bool bVar8;
  longlong lVar9;
  uint local_res8 [2];
  DWORD local_res10 [2];
  atomic<unsigned___int64> local_res18;
  atomic<unsigned___int64> *local_res20;
  atomic<unsigned___int64> local_68;
  atomic<unsigned___int64> *local_60;
  uint *local_58;
  DWORD *local_50;
  atomic<unsigned___int64> *local_48;
  DWORD *local_40;
  atomic<unsigned___int64> *local_38;
  atomic<unsigned___int64> *local_30;
  
  local_res18 = this->State;
  bVar8 = true;
  if (((ulonglong)local_res18 & 0xfffff) == 0) {
LAB_1414852d9:
    local_res10[0] = GetCurrentThreadId();
    uVar4 = local_res18._0_4_;
    if ((((ulonglong)local_res18 & 0xfff00000) != 0) && (local_res18._4_4_ - 1 != local_res10[0])) {
      if (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) {
        local_50 = local_res10;
        local_48 = &local_res18;
        `FMRSWRecursiveAccessDetector::AcquireWriteAccess'::__l17::<lambda_4>::operator()(&local_50)
        ;
        uVar4 = local_res18._0_4_;
      }
      bVar8 = false;
    }
    LOCK();
    local_68 = this->State;
    this->State = (atomic<unsigned___int64>)
                  (CONCAT44(local_res10[0] + 1,(uVar4 & 0xfff00000) + 0x100000) |
                  (ulonglong)(uVar4 & 0xfffff));
    UNLOCK();
    if (local_res18 != local_68) {
      if (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) {
        local_40 = local_res10;
        local_38 = &local_res18;
        local_30 = &local_68;
        `FMRSWRecursiveAccessDetector::AcquireWriteAccess'::__l20::<lambda_5>::operator()(&local_40)
        ;
      }
      bVar8 = false;
    }
    return bVar8;
  }
  FVar5 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)GetReadersTls();
  FVar7 = FVar5;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar5 + 0x40) !=
      (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
    FVar7 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar5 + 0x40);
  }
  FVar6 = FVar7;
  do {
    if (FVar6 == (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)
                 ((longlong)*(int *)((longlong)FVar5 + 0x48) * 0x10 + (longlong)FVar7)) {
      local_res8[0] = 0xffffffff;
LAB_1414851f7:
      if (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) {
        local_res20 = &local_res18;
        `FMRSWRecursiveAccessDetector::AcquireWriteAccess'::__l8::<lambda_2>::operator()
                  (&local_res20);
      }
      return false;
    }
    if (*(FMRSWRecursiveAccessDetector **)FVar6 == this) {
      local_res8[0] = (uint)((longlong)FVar6 - (longlong)FVar7 >> 4);
      if (local_res8[0] == 0xffffffff) goto LAB_1414851f7;
      FVar7 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)GetReadersTls();
      lVar9 = (longlong)(int)local_res8[0];
      uVar4 = 0;
      if ((int)local_res8[0] < *(int *)((longlong)FVar7 + 0x48)) {
        uVar4 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar7 + 0x40) !=
          (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
        FVar7 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                 ((longlong)FVar7 + 0x40);
      }
      if (*(uint *)((longlong)FVar7 + 8 + lVar9 * 0x10) != (local_res18._0_4_ & 0xfffff)) {
        if (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) {
          local_60 = &local_res18;
          local_58 = local_res8;
          `FMRSWRecursiveAccessDetector::AcquireWriteAccess'::__l11::<lambda_3>::operator()
                    (&local_60);
        }
        bVar8 = false;
      }
      goto LAB_1414852d9;
    }
    FVar6 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)((longlong)FVar6 + 0x10);
  } while( true );
}

// GetCurrentThreadCallstack @ 141498760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FMRSWRecursiveAccessDetector::GetCurrentThreadCallstack(FString *__return_storage_ptr__)

{
  size_t sVar1;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_10138;
  char acStack_10018 [65552];
  
  memset(acStack_10018,0,0x10000);
  FWindowsPlatformStackWalk::StackWalkAndDump(acStack_10018,0x10000,0,(void *)0x0);
  TStack_10138._padding_ = 0;
  sVar1 = strlen(acStack_10018);
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&TStack_10138,acStack_10018,(int)sVar1,Yes);
  ::FString::FString(__return_storage_ptr__,TStack_10138.Ptr);
  if ((void *)TStack_10138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_10138._padding_);
  }
  return __return_storage_ptr__;
}

// GetThreadCallstack @ 14149a580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FMRSWRecursiveAccessDetector::GetThreadCallstack(FString *__return_storage_ptr__,uint param_1)

{
  DWORD DVar1;
  size_t sVar2;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_10138;
  char acStack_10018 [65552];
  
  if (param_1 == 0xffffffff) {
    ::FString::FString(__return_storage_ptr__,L"[none]");
  }
  else {
    DVar1 = GetCurrentThreadId();
    if (DVar1 == param_1) {
      GetCurrentThreadCallstack(__return_storage_ptr__);
    }
    else {
      memset(acStack_10018,0,0x10000);
      FWindowsPlatformStackWalk::ThreadStackWalkAndDump(acStack_10018,0x10000,0,param_1);
      TStack_10138._padding_ = 0;
      sVar2 = strlen(acStack_10018);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_10138,acStack_10018,(int)sVar2,Yes);
      ::FString::FString(__return_storage_ptr__,TStack_10138.Ptr);
      if ((void *)TStack_10138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_10138._padding_);
      }
    }
  }
  return __return_storage_ptr__;
}

// ReleaseWriteAccess @ 1414ad460

bool __thiscall
FMRSWRecursiveAccessDetector::ReleaseWriteAccess
          (FMRSWRecursiveAccessDetector *this,FDestructionSentinel *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar6;
  TArray<FMRSWRecursiveAccessDetector::FDestructionSentinel_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar11;
  atomic<unsigned___int64> local_res8;
  atomic<unsigned___int64> local_res18;
  atomic<unsigned___int64> *local_28;
  atomic<unsigned___int64> *local_20;
  
  local_res8 = this->State;
  uVar8 = (uint)((ulonglong)local_res8 >> 0x14) & 0xfff;
  uVar5 = 0;
  if (uVar8 != 1) {
    uVar5 = (ulonglong)local_res8 >> 0x20;
  }
  LOCK();
  local_res18 = this->State;
  this->State = (atomic<unsigned___int64>)
                (uVar5 << 0x20 | (ulonglong)((uVar8 - 1) * 0x100000) |
                (ulonglong)(local_res8._0_4_ & 0xfffff));
  UNLOCK();
  if (local_res8 == local_res18) {
    bVar10 = true;
  }
  else {
    if (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) {
      local_28 = &local_res8;
      local_20 = &local_res18;
      `FMRSWRecursiveAccessDetector::ReleaseWriteAccess'::__l5::<lambda_1>::operator()(&local_28);
    }
    bVar10 = false;
  }
  GetDestructionSentinelStackTls();
  FVar6 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
          GetDestructionSentinelStackTls();
  pTVar7 = GetDestructionSentinelStackTls();
  uVar9 = pTVar7->ArrayNum - 1;
  uVar8 = 0;
  if ((int)uVar9 < *(int *)((longlong)FVar6 + 0x28)) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar11 = FVar6;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
       ((longlong)FVar6 + 0x20) !=
      (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar11 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
              ((longlong)FVar6 + 0x20);
  }
  iVar4 = *(int *)((longlong)FVar6 + 0x28) + ~uVar9;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove((void *)((longlong)FVar11 + (longlong)(int)uVar9 * 8),
            (void *)((longlong)FVar11 + (longlong)(*(int *)((longlong)FVar6 + 0x28) - iVar4) * 8),
            (longlong)iVar4 << 3);
  }
  *(int *)((longlong)FVar6 + 0x28) = *(int *)((longlong)FVar6 + 0x28) + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
            (8,8,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)FVar6,
             *(int *)((longlong)FVar6 + 0x28),(int *)((longlong)FVar6 + 0x2c));
  return bVar10;
}

// AcquireReadAccess @ 1415a7fb0

bool __thiscall FMRSWRecursiveAccessDetector::AcquireReadAccess(FMRSWRecursiveAccessDetector *this)

{
  undefined8 *puVar1;
  int *piVar2;
  atomic<unsigned___int64> aVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar8;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar12;
  bool bVar13;
  DWORD local_res8 [2];
  atomic<unsigned___int64> local_res10;
  FMRSWRecursiveAccessDetector *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  DWORD *local_18;
  atomic<unsigned___int64> *local_10;
  
  LOCK();
  aVar3 = this->State;
  this->State = (atomic<unsigned___int64>)((longlong)this->State + 1);
  UNLOCK();
  local_res10 = aVar3;
  if (0xfffff < aVar3._0_4_) {
    local_res8[0] = GetCurrentThreadId();
    if (local_res10._4_4_ - 1 != local_res8[0]) {
      if (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) {
        local_18 = local_res8;
        local_10 = &local_res10;
        `FMRSWRecursiveAccessDetector::CheckOtherThreadWriters'::__l8::<lambda_1>::operator()
                  (&local_18);
      }
      bVar13 = false;
      goto LAB_1415a802b;
    }
  }
  bVar13 = true;
LAB_1415a802b:
  if (((ulonglong)aVar3 & 0xfffff) != 0) {
    FVar8 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)GetReadersTls();
    FVar9 = FVar8;
    if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar8 + 0x40) !=
        (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
      FVar9 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar8 + 0x40);
    }
    for (FVar12 = FVar9;
        FVar12 != (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)
                  ((longlong)*(int *)((longlong)FVar8 + 0x48) * 0x10 + (longlong)FVar9);
        FVar12 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)((longlong)FVar12 + 0x10)
        ) {
      if (*(FMRSWRecursiveAccessDetector **)FVar12 == this) {
        uVar11 = (uint)((longlong)FVar12 - (longlong)FVar9 >> 4);
        if (uVar11 != 0xffffffff) {
          FVar9 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)GetReadersTls();
          uVar10 = 0;
          if ((int)uVar11 < *(int *)((longlong)FVar9 + 0x48)) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar9 + 0x40)
              != (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
            FVar9 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                     ((longlong)FVar9 + 0x40);
          }
          piVar2 = (int *)((longlong)(int)uVar11 * 0x10 + 8 + (longlong)FVar9);
          *piVar2 = *piVar2 + 1;
          return bVar13;
        }
        break;
      }
    }
  }
  FVar12 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)GetReadersTls();
  uStack_20 = 1;
  FVar9 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar12 + 0x40);
  FVar8 = FVar12;
  if (FVar9 != (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
    FVar8 = FVar9;
  }
  local_28 = this;
  if ((ulonglong)FVar8 <= &local_28) {
    FVar8 = FVar12;
    if (FVar9 != (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
      FVar8 = FVar9;
    }
    if ((&local_28 <
         (FMRSWRecursiveAccessDetector **)
         ((longlong)*(int *)((longlong)FVar12 + 0x4c) * 0x10 + (longlong)FVar8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)((longlong)FVar12 + 0x48);
  if (iVar7 == *(int *)((longlong)FVar12 + 0x4c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>_>
                      (0x810,(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)FVar12,
                       (int *)((longlong)FVar12 + 0x4c));
  }
  *(int *)((longlong)FVar12 + 0x48) = iVar7 + 1;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar12 + 0x40) !=
      (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
    FVar12 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar12 + 0x40);
  }
  puVar1 = (undefined8 *)((longlong)FVar12 + (longlong)iVar7 * 0x10);
  *puVar1 = local_28;
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  return bVar13;
}

// RemoveReaderFromTls @ 1415e4e30

void __thiscall
FMRSWRecursiveAccessDetector::RemoveReaderFromTls(FMRSWRecursiveAccessDetector *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar5;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar9;
  uint uVar10;
  FMRSWRecursiveAccessDetector *local_res10;
  
  FVar5 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)GetReadersTls();
  FVar6 = FVar5;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar5 + 0x40) !=
      (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
    FVar6 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar5 + 0x40);
  }
  FVar9 = FVar6;
  do {
    if (FVar9 == (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)
                 ((longlong)*(int *)((longlong)FVar5 + 0x48) * 0x10 + (longlong)FVar6)) {
LAB_1415e4e6e:
      local_res10 = this;
      `FMRSWRecursiveAccessDetector::RemoveReaderFromTls'::__l2::<lambda_2>::operator()
                (&local_res10);
      return;
    }
    if (*(FMRSWRecursiveAccessDetector **)FVar9 == this) {
      uVar8 = (uint)((longlong)FVar9 - (longlong)FVar6 >> 4);
      if (uVar8 != 0xffffffff) {
        FVar6 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)GetReadersTls();
        uVar10 = ~uVar8 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)((longlong)FVar6 + 0x48)) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar6 + 0x40) !=
            (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
          FVar6 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                   ((longlong)FVar6 + 0x40);
        }
        piVar1 = (int *)((longlong)(int)uVar8 * 0x10 + 8 + (longlong)FVar6);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FVar6 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)GetReadersTls();
          piVar1 = (int *)((longlong)FVar6 + 0x48);
          uVar7 = 0;
          if ((int)uVar8 < *(int *)((longlong)FVar6 + 0x48)) {
            uVar7 = uVar10;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar6 + 0x40)
              != (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
            FVar6 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                     ((longlong)FVar6 + 0x40);
          }
          iVar4 = *piVar1 + ~uVar8;
          if (1 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            memmove((void *)((longlong)(int)uVar8 * 0x10 + (longlong)FVar6),
                    (void *)((longlong)(*piVar1 - iVar4) * 0x10 + (longlong)FVar6),
                    (longlong)iVar4 << 4);
          }
          *piVar1 = *piVar1 + -1;
        }
        return;
      }
      goto LAB_1415e4e6e;
    }
    FVar9 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)((longlong)FVar9 + 0x10);
  } while( true );
}

// AcquireReadAccess @ 1418c5ae0

bool __thiscall
FMRSWRecursiveAccessDetector::AcquireReadAccess
          (FMRSWRecursiveAccessDetector *this,FDestructionSentinel *param_1)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *pFVar7;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *pFVar8;
  ulonglong uVar9;
  FDestructionSentinel *local_18;
  
  pvVar3 = ThreadLocalStoragePointer;
  uVar9 = (ulonglong)_tls_index;
  param_1->Accessor = this;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar9 * 8);
  if ((*(uint *)(lVar1 + 0xb44) & 1) == 0) {
    *(uint *)(lVar1 + 0xb44) = *(uint *)(lVar1 + 0xb44) | 1;
    __tlregdtor(`FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls'::__l2::
                _dynamic_atexit_destructor_for__DestructionSentinelStackTls__);
  }
  pFVar8 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)(lVar1 + 0xb08);
  pFVar7 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> **)(lVar1 + 0xb28)
  ;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> **)(lVar1 + 0xb28) ==
      (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)0x0) {
    pFVar7 = pFVar8;
  }
  local_18 = param_1;
  if ((pFVar7 <= (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                 &stack0xffffffffffffffe8) &&
     (&stack0xffffffffffffffe8 < pFVar7->InlineData + (longlong)*(int *)(lVar1 + 0xb34) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)(lVar1 + 0xb30);
  if (iVar6 == *(int *)(lVar1 + 0xb34)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                      (0x808,pFVar8,(int *)(lVar1 + 0xb34));
  }
  *(int *)(lVar1 + 0xb30) = iVar6 + 1;
  pFVar7 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> **)(lVar1 + 0xb28)
  ;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> **)(lVar1 + 0xb28) ==
      (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)0x0) {
    pFVar7 = pFVar8;
  }
  *(FDestructionSentinel **)(pFVar7->InlineData + (longlong)iVar6 * 8) = local_18;
  bVar4 = AcquireReadAccess(this);
  return bVar4;
}

// GetDestructionSentinelStackTls @ 1418def20

TArray<FMRSWRecursiveAccessDetector::FDestructionSentinel_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
* __cdecl FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0xb44) & 1) == 0) {
    *(uint *)(lVar1 + 0xb44) = *(uint *)(lVar1 + 0xb44) | 1;
    __tlregdtor(`FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls'::__l2::
                _dynamic_atexit_destructor_for__DestructionSentinelStackTls__);
  }
  return (TArray<FMRSWRecursiveAccessDetector::FDestructionSentinel_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)(lVar1 + 0xb08);
}

// GetReadersTls @ 1418e12e0

TArray<FMRSWRecursiveAccessDetector::FReaderNum,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
* __cdecl FMRSWRecursiveAccessDetector::GetReadersTls(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0xb40) & 1) == 0) {
    *(uint *)(lVar1 + 0xb40) = *(uint *)(lVar1 + 0xb40) | 1;
    __tlregdtor(`FMRSWRecursiveAccessDetector::GetReadersTls'::__l2::
                _dynamic_atexit_destructor_for__ReadersTls__);
  }
  return (TArray<FMRSWRecursiveAccessDetector::FReaderNum,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)(lVar1 + 0xab8);
}

// ReleaseReadAccess @ 1418f2370

bool __thiscall
FMRSWRecursiveAccessDetector::ReleaseReadAccess
          (FMRSWRecursiveAccessDetector *this,FDestructionSentinel *param_1)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *pFVar8;
  uint uVar9;
  
  RemoveReaderFromTls(this);
  pvVar3 = ThreadLocalStoragePointer;
  LOCK();
  this->State = (atomic<unsigned___int64>)((longlong)this->State + -1);
  UNLOCK();
  lVar1 = *(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0xb44) & 1) == 0) {
    *(uint *)(lVar1 + 0xb44) = *(uint *)(lVar1 + 0xb44) | 1;
    __tlregdtor(`FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls'::__l2::
                _dynamic_atexit_destructor_for__DestructionSentinelStackTls__);
  }
  if ((*(uint *)(lVar1 + 0xb44) & 1) == 0) {
    *(uint *)(lVar1 + 0xb44) = *(uint *)(lVar1 + 0xb44) | 1;
    __tlregdtor(`FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls'::__l2::
                _dynamic_atexit_destructor_for__DestructionSentinelStackTls__);
  }
  uVar9 = *(int *)(lVar1 + 0xb30) - 1;
  uVar6 = 0;
  if ((int)uVar9 < *(int *)(lVar1 + 0xb30)) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pFVar8 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> **)(lVar1 + 0xb28)
  ;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> **)(lVar1 + 0xb28) ==
      (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)0x0) {
    pFVar8 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)(lVar1 + 0xb08)
    ;
  }
  iVar7 = *(int *)(lVar1 + 0xb30) + ~uVar9;
  if (1 < iVar7) {
    iVar7 = 1;
  }
  if (iVar7 != 0) {
    memmove(pFVar8->InlineData + (longlong)(int)uVar9 * 8,
            pFVar8->InlineData + (longlong)(*(int *)(lVar1 + 0xb30) - iVar7) * 8,
            (longlong)iVar7 << 3);
  }
  *(int *)(lVar1 + 0xb30) = *(int *)(lVar1 + 0xb30) + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
            (8,8,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                 (lVar1 + 0xb08),*(int *)(lVar1 + 0xb30),(int *)(lVar1 + 0xb34));
  return true;
}

// ReleaseWriteAccess @ 1418f2520

bool __thiscall FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FMRSWRecursiveAccessDetector *this)

{
  ulonglong uVar1;
  uint uVar2;
  atomic<unsigned___int64> local_res8;
  atomic<unsigned___int64> local_res10 [3];
  atomic<unsigned___int64> *local_18;
  atomic<unsigned___int64> *local_10;
  
  local_res8 = this->State;
  uVar2 = (uint)((ulonglong)local_res8 >> 0x14) & 0xfff;
  uVar1 = 0;
  if (uVar2 != 1) {
    uVar1 = (ulonglong)local_res8 >> 0x20;
  }
  LOCK();
  local_res10[0] = this->State;
  this->State = (atomic<unsigned___int64>)
                (uVar1 << 0x20 | (ulonglong)((uVar2 - 1) * 0x100000) |
                (ulonglong)(local_res8._0_4_ & 0xfffff));
  UNLOCK();
  if (local_res8 != local_res10[0]) {
    if (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) {
      local_18 = &local_res8;
      local_10 = local_res10;
      `FMRSWRecursiveAccessDetector::ReleaseWriteAccess'::__l5::<lambda_1>::operator()(&local_18);
    }
    return false;
  }
  return true;
}

// operator() @ 150477510

bool __thiscall
`FMRSWRecursiveAccessDetector::ReleaseWriteAccess'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_48;
  FString local_38;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6656938535565655361>);
  if (bVar4) {
    FMRSWRecursiveAccessDetector::GetThreadCallstack
              (&local_38,*(int *)(*(longlong *)((longlong)this + 8) + 4) - 1);
    FMRSWRecursiveAccessDetector::GetCurrentThreadCallstack(&local_48);
    GetCurrentThreadId();
    GetCurrentThreadId();
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6656938535565655361>,
                       &`public:___cdecl_`public:_bool___cdecl_FMRSWRecursiveAccessDetector::ReleaseWriteAccess(void)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150477694;
    }
  }
  bVar4 = false;
LAB_150477694:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504776f0

bool __thiscall
`FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector'::__l15::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6656938535565655510>);
  if (bVar4) {
    FMRSWRecursiveAccessDetector::GetThreadCallstack
              (&local_28,(int)((ulonglong)**(undefined8 **)this >> 0x20) - 1);
    FMRSWRecursiveAccessDetector::GetCurrentThreadCallstack(&local_38);
    GetCurrentThreadId();
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6656938535565655510>,
                       &`public:___cdecl_`public:___cdecl_FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(void)___ptr64'::`15'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15047781e;
    }
  }
  bVar4 = false;
LAB_15047781e:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150477870

bool __thiscall
`FMRSWRecursiveAccessDetector::RemoveReaderFromTls'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6656938535565655578>);
  if (bVar2) {
    FMRSWRecursiveAccessDetector::GetCurrentThreadCallstack(&local_18);
    GetCurrentThreadId();
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6656938535565655578>,
                       &`public:___cdecl_`private:_void___cdecl_FMRSWRecursiveAccessDetector::RemoveReaderFromTls(void)const___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150477911;
    }
  }
  bVar2 = false;
LAB_150477911:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150477950

bool __thiscall
`FMRSWRecursiveAccessDetector::AcquireWriteAccess'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6656938535565655438>);
  if (bVar2) {
    FMRSWRecursiveAccessDetector::GetCurrentThreadCallstack(&local_18);
    GetCurrentThreadId();
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6656938535565655438>,
                       &`public:___cdecl_`public:_bool___cdecl_FMRSWRecursiveAccessDetector::AcquireWriteAccess(void)___ptr64'::`8'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504779d4;
    }
  }
  bVar2 = false;
LAB_1504779d4:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150477a10

bool __thiscall
`FMRSWRecursiveAccessDetector::AcquireWriteAccess'::__l11::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<FMRSWRecursiveAccessDetector::FReaderNum,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  bool bVar5;
  uint uVar6;
  FString local_28;
  
  bVar5 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6656938535565655429>);
  if (bVar2) {
    FMRSWRecursiveAccessDetector::GetCurrentThreadCallstack(&local_28);
    GetCurrentThreadId();
    pTVar4 = FMRSWRecursiveAccessDetector::GetReadersTls();
    uVar6 = 0;
    if ((int)**(uint **)((longlong)this + 8) < pTVar4->ArrayNum) {
      uVar6 = ~**(uint **)((longlong)this + 8) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6656938535565655429>,
                       &`public:___cdecl_`public:_bool___cdecl_FMRSWRecursiveAccessDetector::AcquireWriteAccess(void)___ptr64'::`11'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150477b27;
    }
  }
  bVar2 = false;
LAB_150477b27:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150477b60

bool __thiscall
`FMRSWRecursiveAccessDetector::AcquireWriteAccess'::__l17::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6656938535565655414>);
  if (bVar4) {
    FMRSWRecursiveAccessDetector::GetThreadCallstack
              (&local_28,*(int *)(*(longlong *)((longlong)this + 8) + 4) - 1);
    FMRSWRecursiveAccessDetector::GetCurrentThreadCallstack(&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6656938535565655414>,
                       &`public:___cdecl_`public:_bool___cdecl_FMRSWRecursiveAccessDetector::AcquireWriteAccess(void)___ptr64'::`17'::<lambda_4>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150477c45;
    }
  }
  bVar4 = false;
LAB_150477c45:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150477ca0

bool __thiscall
`FMRSWRecursiveAccessDetector::AcquireWriteAccess'::__l20::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6656938535565655396>);
  if (bVar4) {
    FMRSWRecursiveAccessDetector::GetThreadCallstack
              (&local_28,*(int *)(*(longlong *)((longlong)this + 0x10) + 4) - 1);
    FMRSWRecursiveAccessDetector::GetCurrentThreadCallstack(&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6656938535565655396>,
                       &`public:___cdecl_`public:_bool___cdecl_FMRSWRecursiveAccessDetector::AcquireWriteAccess(void)___ptr64'::`20'::<lambda_5>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150477dcd;
    }
  }
  bVar4 = false;
LAB_150477dcd:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504788f0

bool __thiscall
`FMRSWRecursiveAccessDetector::CheckOtherThreadWriters'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6656938535565655664>);
  if (bVar4) {
    FMRSWRecursiveAccessDetector::GetThreadCallstack
              (&local_28,*(int *)(*(longlong *)((longlong)this + 8) + 4) - 1);
    FMRSWRecursiveAccessDetector::GetCurrentThreadCallstack(&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6656938535565655664>,
                       &`public:___cdecl_`private:_static_bool___cdecl_FMRSWRecursiveAccessDetector::CheckOtherThreadWriters(FMRSWRecursiveAccessDetector::FState)'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504789d5;
    }
  }
  bVar4 = false;
LAB_1504789d5:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

