// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 4

// FBuiltInHttpClientPlatformSocketPool @ 148cb3010

FBuiltInHttpClientPlatformSocketPool * __thiscall
FBuiltInHttpClientPlatformSocketPool::FBuiltInHttpClientPlatformSocketPool
          (FBuiltInHttpClientPlatformSocketPool *this,FString *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  IPlatformHostCommunication *pIVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  
  *(undefined ***)this = &___7FBuiltInHttpClientPlatformSocketPool__6B_;
  ::FString::FString(&this->Address,param_1);
  this->Communication = (IPlatformHostCommunication *)0x0;
  *(undefined8 *)&this->SocketPool = 0;
  *(undefined8 *)&this->SocketPool = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->UsedSocketsCS,4000);
  (this->UsedSocketsCV).bHasWaiters = (atomic<bool>)0x0;
  (this->UsedSockets).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->UsedSockets).NumBits = 0;
  (this->UsedSockets).MaxBits = 0x80;
  pIVar5 = FGenericPlatformMisc::GetPlatformHostCommunication();
  this->Communication = pIVar5;
  this_00 = &this->UsedSockets;
  (this->UsedSockets).NumBits = 10;
  if (((this->UsedSockets).MaxBits + 0x1fU & 0xffffffe0) < 0x20) {
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(&this_00->AllocatorInstance,0,1,4);
    (this->UsedSockets).MaxBits = 0x20;
  }
  FVar6 = (this->UsedSockets).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<unsigned_int>)0x0) {
    FVar6 = (ForElementType<unsigned_int>)this_00;
  }
  *(undefined4 *)FVar6 = 0;
  iVar4 = (this->UsedSockets).NumBits;
  uVar7 = iVar4 >> 0x1f & 0x1f;
  uVar3 = iVar4 + uVar7;
  iVar4 = (uVar3 & 0x1f) - uVar7;
  if (iVar4 != 0) {
    FVar6 = (this->UsedSockets).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)this_00;
    }
    puVar1 = (uint *)((longlong)FVar6 + (longlong)((int)uVar3 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// ~FBuiltInHttpClientPlatformSocketPool @ 148cb5e40

void __thiscall
FBuiltInHttpClientPlatformSocketPool::~FBuiltInHttpClientPlatformSocketPool
          (FBuiltInHttpClientPlatformSocketPool *this)

{
  atomic<void_*> aVar1;
  ForElementType<unsigned_int> FVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  
  *(undefined ***)this = &___7FBuiltInHttpClientPlatformSocketPool__6B_;
  while( true ) {
    uVar4 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&this->SocketPool);
    if (uVar4 == 0) break;
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe][uVar4 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
    if (aVar1 == (atomic<void_*>)0x0) break;
    (*(code *)**(undefined8 **)aVar1)(aVar1,1);
  }
  FVar2 = (this->UsedSockets).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UsedSocketsCS);
  FLockFreePointerListLIFOBase<IBuiltInHttpClientSocket,64,1>::
  ~FLockFreePointerListLIFOBase<IBuiltInHttpClientSocket,64,1>
            ((FLockFreePointerListLIFOBase<IBuiltInHttpClientSocket,64,1> *)&this->SocketPool);
  pFVar3 = (this->Address).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// AcquireSocket @ 148cba820

/* WARNING: Enum "Type": Some values do not have unique names */

IBuiltInHttpClientSocket * __thiscall
FBuiltInHttpClientPlatformSocketPool::AcquireSocket
          (FBuiltInHttpClientPlatformSocketPool *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  int iVar3;
  atomic<void_*> aVar4;
  IPlatformHostCommunication *pIVar5;
  int iVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  IBuiltInHttpClientSocket IVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  IBuiltInHttpClientSocket *pIVar15;
  IBuiltInHttpClientSocket IVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  int iVar19;
  ForAnyElementType FVar20;
  ForElementType<unsigned_int> FVar21;
  int iVar22;
  float fVar23;
  LPCRITICAL_SECTION local_res20;
  code *in_stack_ffffffffffffff18;
  LPCRITICAL_SECTION *in_stack_ffffffffffffff20;
  FConditionVariable *local_d8;
  longlong local_d0;
  IBuiltInHttpClientSocket local_c8;
  IBuiltInHttpClientSocket IStack_c0;
  FString local_b8;
  FString local_a8;
  IBuiltInHttpClientSocket local_98;
  IBuiltInHttpClientSocket IStack_90;
  FWaitState local_88 [5];
  
  uVar13 = FLockFreePointerListLIFORoot<64,1>::Pop
                     ((FLockFreePointerListLIFORoot<64,1> *)&this->SocketPool);
  if (uVar13 != 0) {
    aVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar13 >> 0xe][uVar13 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar13);
    if (aVar4 != (atomic<void_*>)0x0) {
      return (IBuiltInHttpClientSocket *)aVar4;
    }
  }
  lpCriticalSection = &this->UsedSocketsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_148cbacb9:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  while( true ) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = &this->UsedSockets;
    FVar17 = (this->UsedSockets).AllocatorInstance.SecondaryData;
    iVar3 = (this->UsedSockets).NumBits;
    FVar21 = (ForElementType<unsigned_int>)pTVar1;
    if (FVar17 != (ForElementType<unsigned_int>)0x0) {
      FVar21 = FVar17;
    }
    iVar19 = 0;
    lVar14 = 0;
    uVar13 = iVar3 + 0x1f;
    if (uVar13 >> 5 != 0) break;
LAB_148cba948:
    in_stack_ffffffffffffff20 = &local_res20;
    local_d8 = &this->UsedSocketsCV;
    in_stack_ffffffffffffff18 =
         UE::TFunctionWithContext<void___cdecl(void)>::
         Call<_UE::FConditionVariable::Wait<UE::FWindowsRecursiveMutex>_::__l2::<lambda_2>_>;
    local_res20 = (LPCRITICAL_SECTION)lpCriticalSection;
    UE::ParkingLot::Private::Wait
              (local_88,local_d8,
               UE::TFunctionWithContext<bool___cdecl(void)>::
               Call<_UE::FConditionVariable::Wait<UE::FWindowsRecursiveMutex>_::__l2::<lambda_1>_>,
               &local_d8,
               UE::TFunctionWithContext<void___cdecl(void)>::
               Call<_UE::FConditionVariable::Wait<UE::FWindowsRecursiveMutex>_::__l2::<lambda_2>_>,
               in_stack_ffffffffffffff20);
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_148cba910:
  uVar18 = *(uint *)((longlong)FVar21 + lVar14 * 4);
  if (uVar18 == 0xffffffff) goto code_r0x000148cba919;
  uVar18 = ~uVar18;
  iVar6 = 0;
  if (uVar18 != 0) {
    for (; (uVar18 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
    }
  }
  iVar22 = 0x20;
  if (uVar18 != 0) {
    iVar22 = iVar6;
  }
  iVar22 = iVar22 + iVar19 * 0x20;
  if ((iVar22 < iVar3) && (iVar22 != -1)) {
    if ((iVar22 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      pIVar15 = (IBuiltInHttpClientSocket *)(*pcVar7)();
      return pIVar15;
    }
    FVar17 = (this->UsedSockets).AllocatorInstance.SecondaryData;
    local_d0 = (longlong)((int)(iVar22 + (iVar22 >> 0x1f & 0x1fU)) >> 5);
    if (FVar17 == (ForElementType<unsigned_int>)0x0) {
      FVar17 = (ForElementType<unsigned_int>)pTVar1;
    }
    uVar13 = 1 << ((byte)iVar22 & 0x1f);
    puVar2 = (uint *)((longlong)FVar17 + local_d0 * 4);
    *puVar2 = *puVar2 | uVar13;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar5 = this->Communication;
    pcVar7 = *(code **)((longlong)*pIVar5 + 0x18);
    ::FString::PrintfImpl(&local_b8,L"PlatformSocket %d");
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar20.Data = local_b8.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_a8,(wchar_t *)FVar20.Data);
    (*pcVar7)(pIVar5,&local_c8,iVar22,&local_a8,
              (ulonglong)in_stack_ffffffffffffff18 & 0xffffffff00000000,
              (ulonglong)in_stack_ffffffffffffff20 & 0xffffffff00000000);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_c8 == (IBuiltInHttpClientSocket)0x0) {
LAB_148cbabf3:
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) goto LAB_148cbacb9;
    }
    else {
      fVar23 = 0.0;
      cVar12 = (**(code **)(*(longlong *)local_c8 + 0x18))();
      fVar9 = __real_bf800000;
      fVar8 = __real_3c23d70a;
      if (cVar12 == '\x01') {
        while ((param_1 == fVar9 || (fVar23 <= param_1))) {
          FWindowsPlatformProcess::Sleep(fVar8);
          fVar23 = fVar23 + fVar8;
          if ((local_c8 == (IBuiltInHttpClientSocket)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            pIVar15 = (IBuiltInHttpClientSocket *)(*pcVar7)();
            return pIVar15;
          }
          cVar12 = (**(code **)(*(longlong *)local_c8 + 0x18))();
          if (cVar12 != '\x01') goto LAB_148cbaafa;
        }
        if (1 < (byte)LogStorageServerPlatformBackend._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformBackend);
        }
      }
      else {
LAB_148cbaafa:
        if (cVar12 == '\x02') {
          pIVar15 = ::operator_new(0x50);
          IVar10 = IStack_c0;
          if (pIVar15 == (IBuiltInHttpClientSocket *)0x0) {
            pIVar15 = (IBuiltInHttpClientSocket *)0x0;
          }
          else {
            if (IStack_c0 == (IBuiltInHttpClientSocket)0x0) {
              pIVar15[1] = (IBuiltInHttpClientSocket)this->Communication;
              *pIVar15 = (IBuiltInHttpClientSocket)&___7FBuiltInHttpClientPlatformSocket__6B_;
              pIVar15[2] = local_c8;
              pIVar15[3] = (IBuiltInHttpClientSocket)0x0;
            }
            else {
              LOCK();
              *(int *)((longlong)IStack_c0 + 8) = *(int *)((longlong)IStack_c0 + 8) + 1;
              UNLOCK();
              pIVar15[1] = (IBuiltInHttpClientSocket)this->Communication;
              *pIVar15 = (IBuiltInHttpClientSocket)&___7FBuiltInHttpClientPlatformSocket__6B_;
              pIVar15[2] = local_c8;
              pIVar15[3] = IStack_c0;
              LOCK();
              *(int *)((longlong)IStack_c0 + 8) = *(int *)((longlong)IStack_c0 + 8) + 1;
              UNLOCK();
            }
            for (lVar14 = 0x3f; 0x1ffffUL >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
            pIVar15[4] = (IBuiltInHttpClientSocket)0x0;
            pIVar15[6] = (IBuiltInHttpClientSocket)0x0;
            pIVar15[7] = (IBuiltInHttpClientSocket)0x0;
            pIVar15[8] = (IBuiltInHttpClientSocket)0x0;
            IVar16._4_4_ = 0;
            IVar16._0_4_ = (1 << ((byte)lVar14 & 0x1f)) - 1;
            pIVar15[5] = IVar16;
            IVar16 = (IBuiltInHttpClientSocket)operator_new__((longlong)IVar16 + 1);
            pIVar15[4] = IVar16;
            *(int *)(pIVar15 + 9) = iVar22;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)IVar10);
          }
          goto LAB_148cbac57;
        }
      }
      if (local_c8 == (IBuiltInHttpClientSocket)0x0) goto LAB_148cbabf3;
      pIVar5 = this->Communication;
      local_98 = local_c8;
      IStack_90 = IStack_c0;
      pcVar7 = *(code **)((longlong)*pIVar5 + 0x20);
      if (IStack_c0 != (IBuiltInHttpClientSocket)0x0) {
        LOCK();
        *(int *)((longlong)IStack_c0 + 8) = *(int *)((longlong)IStack_c0 + 8) + 1;
        UNLOCK();
      }
      (*pcVar7)(pIVar5,&local_98);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((iVar22 < 0) || ((this->UsedSockets).NumBits <= iVar22)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      pIVar15 = (IBuiltInHttpClientSocket *)(*pcVar7)();
      return pIVar15;
    }
    FVar17 = (this->UsedSockets).AllocatorInstance.SecondaryData;
    if (FVar17 == (ForElementType<unsigned_int>)0x0) {
      FVar17 = (ForElementType<unsigned_int>)pTVar1;
    }
    pIVar15 = (IBuiltInHttpClientSocket *)0x0;
    puVar2 = (uint *)((longlong)FVar17 + local_d0 * 4);
    *puVar2 = *puVar2 & ~uVar13;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_148cbac57:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)IStack_c0);
    return pIVar15;
  }
  goto LAB_148cba948;
code_r0x000148cba919:
  iVar19 = iVar19 + 1;
  lVar14 = lVar14 + 1;
  if ((int)(uVar13 >> 5) <= iVar19) goto LAB_148cba948;
  goto LAB_148cba910;
}

// ReleaseSocket @ 148cd98c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBuiltInHttpClientPlatformSocketPool::ReleaseSocket
          (FBuiltInHttpClientPlatformSocketPool *this,IBuiltInHttpClientSocket *param_1,bool param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FConditionVariable *pFVar1;
  uint *puVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  ForElementType<unsigned_int> FVar7;
  longlong local_res20;
  atomic<bool> *local_28 [2];
  
  local_res20 = 0;
  if ((param_2) &&
     (cVar5 = (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_res20), cVar5 == '\0')) {
    TLockFreePointerListLIFOPad<IBuiltInHttpClientSocket,64>::Push
              ((TLockFreePointerListLIFOPad<IBuiltInHttpClientSocket,64> *)&this->SocketPool,param_1
              );
    return;
  }
  iVar3 = *(int *)(param_1 + 9);
  if (local_res20 != 0) {
    UE::Logging::Private::BasicFatalLog
              (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformBackend);
  }
  (**(code **)*param_1)(param_1,1);
  lpCriticalSection = &this->UsedSocketsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((iVar3 < 0) || ((this->UsedSockets).NumBits <= iVar3)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar7 = (this->UsedSockets).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<unsigned_int>)0x0) {
    FVar7 = (ForElementType<unsigned_int>)&this->UsedSockets;
  }
  pFVar1 = &this->UsedSocketsCV;
  puVar2 = (uint *)((longlong)FVar7 + (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 & ~(1 << ((byte)iVar3 & 0x1f));
  if (pFVar1->bHasWaiters != (atomic<bool>)0x0) {
    local_28[0] = &pFVar1->bHasWaiters;
    UE::ParkingLot::Private::WakeOne
              (pFVar1,UE::TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>
                      ::Call<_UE::FConditionVariable::NotifyOne_::__l5::<lambda_1>_>,local_28);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

