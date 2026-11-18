// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 6

// Cleanup @ 148d25840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWmfRingBuffer::Cleanup(FWmfRingBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->Samples).ArrayNum == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Samples.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WmfRingBuffer.cpp"
                       ,0x4c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->Samples).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Samples).AllocatorInstance.Data;
  if ((*(int *)pFVar2 != 1) || (pFVar2[0x28] == (FScriptContainerElement)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Samples[0].IsVideoKeyFrame()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WmfRingBuffer.cpp"
                       ,0x4f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar7 = 1;
  uVar8 = 0;
  if ((this->Samples).ArrayNum != 1) {
    lVar6 = 0x40;
    do {
      uVar5 = uVar8;
      if ((int)uVar7 < (this->Samples).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->Samples).AllocatorInstance.Data;
      if ((*(int *)(pFVar2 + lVar6) == 1) && (pFVar2[lVar6 + 0x28] != (FScriptContainerElement)0x0))
      goto LAB_148d259bc;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x40;
    } while (uVar7 != (this->Samples).ArrayNum);
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("bFound",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WmfRingBuffer.cpp"
                     ,0x5f,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_148d259bc:
  uVar5 = uVar8;
  if ((int)uVar7 <= (this->Samples).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (uVar7 != 0) {
    TArray<AVEncoder::FMediaPacket,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (&this->Samples,0,uVar7);
  }
  if ((this->Samples).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Samples).AllocatorInstance.Data;
  if ((*(int *)pFVar2 != 1) || (pFVar2[0x28] == (FScriptContainerElement)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Samples[0].IsVideoKeyFrame()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WmfRingBuffer.cpp"
                       ,100,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (6 < (byte)WmfRingBuffer._0_1_) {
    iVar1 = (this->Samples).ArrayNum;
    uVar7 = iVar1 - 1;
    if ((int)uVar7 < iVar1) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = (this->Samples).ArrayNum;
    uVar7 = iVar1 - 1;
    uVar8 = 0;
    if ((int)uVar7 < iVar1) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((this->Samples).ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    GetDuration(this);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&WmfRingBuffer);
  }
                    /* WARNING: Could not recover jumptable at 0x000148d25c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetCopy @ 148d27340

TArray<AVEncoder::FMediaPacket,TSizedDefaultAllocator<32>_> * __thiscall
FWmfRingBuffer::GetCopy
          (FWmfRingBuffer *this,
          TArray<AVEncoder::FMediaPacket,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FMediaPacket *pFVar3;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    piVar1 = &__return_storage_ptr__->ArrayMax;
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    if (__return_storage_ptr__ != &this->Samples) {
      DestructItems<AVEncoder::FMediaPacket,int>((FMediaPacket *)0x0,0);
      iVar2 = (this->Samples).ArrayNum;
      pFVar3 = (FMediaPacket *)(this->Samples).AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar2,*piVar1,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
        ConstructItems<AVEncoder::FMediaPacket,AVEncoder::FMediaPacket,int>
                  ((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,iVar2);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDuration @ 148d275d0

FTimespan __thiscall FWmfRingBuffer::GetDuration(FWmfRingBuffer *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FTimespan FVar8;
  uint uVar9;
  longlong *in_RDX;
  
  iVar1 = (this->Samples).ArrayNum;
  if (iVar1 == 0) {
    *in_RDX = 0;
    return (FTimespan)(long64)in_RDX;
  }
  uVar9 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar9 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar8.Ticks = (*pcVar6)();
      return (FTimespan)FVar8.Ticks;
    }
  }
  iVar1 = (this->Samples).ArrayNum;
  pFVar3 = (this->Samples).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar9 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar8.Ticks = (*pcVar6)();
      return (FTimespan)FVar8.Ticks;
    }
  }
  iVar2 = (this->Samples).ArrayNum;
  lVar4 = *(longlong *)((this->Samples).AllocatorInstance.Data + (longlong)iVar2 * 0x40 + -0x30);
  lVar5 = *(longlong *)(pFVar3 + ((longlong)iVar1 + -1) * 0x40 + 8);
  if (iVar2 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar8.Ticks = (*pcVar6)();
      return (FTimespan)FVar8.Ticks;
    }
  }
  *in_RDX = (lVar4 + lVar5) - *(longlong *)((this->Samples).AllocatorInstance.Data + 8);
  return (FTimespan)(long64)in_RDX;
}

// PauseCleanup @ 148d28da0

void __thiscall FWmfRingBuffer::PauseCleanup(FWmfRingBuffer *this,bool param_1)

{
  FThreadSafeBool FVar1;
  
  LOCK();
  FVar1._1_3_ = 0;
  FVar1._0_1_ = param_1;
  this->bCleanupPaused = FVar1;
  UNLOCK();
  return;
}

// Push @ 148d29160

void __thiscall FWmfRingBuffer::Push(FWmfRingBuffer *this,FMediaPacket *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FMediaPacket *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FTimespan FVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  
  if (((this->MaxDuration).Ticks == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxDuration != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WmfRingBuffer.cpp"
                         ,0xd,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar8 = (this->Samples).ArrayNum;
  if (iVar8 != 0) {
    lVar3 = (param_1->Timestamp).Ticks;
    if ((param_1->Type != Video) || (bVar6 = true, (param_1->field4_0x28).Video.bKeyFrame == false))
    {
      bVar6 = false;
    }
    uVar12 = iVar8 - 1;
    lVar13 = (longlong)(int)uVar12 << 6;
    do {
      uVar9 = 0;
      if ((int)uVar12 < (this->Samples).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(EPacketType *)((this->Samples).AllocatorInstance.Data + lVar13) == param_1->Type) {
LAB_148d293b2:
        iVar8 = uVar12 + 1;
        goto LAB_148d293b6;
      }
      uVar9 = 0;
      if ((int)uVar12 < (this->Samples).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)((this->Samples).AllocatorInstance.Data + lVar13 + 8) <= lVar3)
      goto LAB_148d293b2;
      if (uVar12 == 0) goto LAB_148d293a7;
      uVar12 = uVar12 - 1;
      lVar13 = lVar13 + -0x40;
    } while( true );
  }
  if (param_1->Type != Audio) {
    pFVar2 = (FMediaPacket *)(this->Samples).AllocatorInstance.Data;
    if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Samples).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Samples).ArrayNum;
    piVar1 = &(this->Samples).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&(this->Samples).AllocatorInstance,piVar1);
    }
    (this->Samples).ArrayNum = iVar8 + 1;
    pFVar11 = (this->Samples).AllocatorInstance.Data + (longlong)iVar8 * 0x40;
    *(EPacketType *)pFVar11 = param_1->Type;
    *(long64 *)(pFVar11 + 8) = (param_1->Timestamp).Ticks;
    *(long64 *)(pFVar11 + 0x10) = (param_1->Duration).Ticks;
    *(undefined8 *)(pFVar11 + 0x18) = 0;
    *(FScriptContainerElement **)(pFVar11 + 0x18) = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar11 + 0x20) = (param_1->Data).ArrayNum;
    *(int *)(pFVar11 + 0x24) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    uVar5 = *(undefined8 *)((longlong)&param_1->field4_0x28 + 8);
    *(undefined8 *)(pFVar11 + 0x28) = *(undefined8 *)&param_1->field4_0x28;
    *(undefined8 *)(pFVar11 + 0x30) = uVar5;
    *(uint *)(pFVar11 + 0x38) = (param_1->field4_0x28).Video.Framerate;
  }
LAB_148d29420:
                    /* WARNING: Could not recover jumptable at 0x000148d29438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
LAB_148d293a7:
  if (param_1->Type == Video) {
    iVar8 = 0;
LAB_148d293b6:
    TArray<AVEncoder::FMediaPacket,TSizedDefaultAllocator<32>_>::Insert
              (&this->Samples,param_1,iVar8);
  }
  if (((this->bCleanupPaused == (FThreadSafeBool)0x0) && (bVar6)) &&
     (FVar10 = GetDuration(this), (this->MaxDuration).Ticks < *(longlong *)FVar10.Ticks)) {
    do {
      Cleanup(this);
      FVar10 = GetDuration(this);
    } while ((this->MaxDuration).Ticks < *(longlong *)FVar10.Ticks);
  }
  goto LAB_148d29420;
}

// Reset @ 148d29520

void __thiscall FWmfRingBuffer::Reset(FWmfRingBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<AVEncoder::FMediaPacket,int>
              ((FMediaPacket *)(this->Samples).AllocatorInstance.Data,(this->Samples).ArrayNum);
    piVar1 = &(this->Samples).ArrayMax;
    (this->Samples).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&(this->Samples).AllocatorInstance,0,piVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x000148d29584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

