// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 30

// CloneOrTakeOver @ 14a99c660

TSharedPtr<UE::Mutable::Private::FImage,1> * __thiscall
UE::Mutable::Private::FWorkingMemoryManager::CloneOrTakeOver
          (FWorkingMemoryManager *this,
          TSharedPtr<UE::Mutable::Private::FImage,1> *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FImage_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  uint uVar5;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar6;
  longlong *plVar7;
  longlong *plVar8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_48;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_38;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_28;
  
  if ((this->DebugRunnerThreadID == 0xffffffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID != FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7ab,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
    return pTVar6;
  }
  if ((this->DebugRunnerID == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID != InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7ac,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
    return pTVar6;
  }
  DVar4 = GetCurrentThreadId();
  if ((this->DebugRunnerThreadID != DVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID == FPlatformTLS::GetCurrentThreadId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7b0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
    return pTVar6;
  }
  if (((atomic<unsigned___int64>)this->DebugRunnerID != this->DebugCurrentRunnerId) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID == DebugCurrentRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7b1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
    return pTVar6;
  }
  TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  ::RemoveSingle(&this->TempImages,param_1);
  plVar7 = (longlong *)(this->TempImages).AllocatorInstance._padding_;
  plVar8 = plVar7 + (longlong)(this->TempImages).ArrayNum * 2;
  if (plVar7 != plVar8) {
    do {
      if ((FImage *)*plVar7 == param_1->Object) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!TempImages.Contains(Resource)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                           ,0x54b,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
          return pTVar6;
        }
        break;
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
  }
  plVar7 = (longlong *)(this->PooledImages).AllocatorInstance._padding_;
  plVar8 = plVar7 + (longlong)(this->PooledImages).ArrayNum * 2;
  if (plVar7 != plVar8) {
    do {
      if ((FImage *)*plVar7 == param_1->Object) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PooledImages.Contains(Resource)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                           ,0x54c,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
          return pTVar6;
        }
        break;
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
  }
  __return_storage_ptr__->Object = (FImage *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if ((pTVar1 == (TReferenceControllerBase<1> *)0x0) ||
     (pTVar1->SharedReferenceCount != (atomic<int>)0x1)) {
    if ((param_1->Object == (FImage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
      return pTVar6;
    }
    uVar5 = (**(code **)param_1->Object->_padding_)();
    EnsureBudgetBelow(this,(ulonglong)uVar5);
    if ((param_1->Object == (FImage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
      return pTVar6;
    }
    pTVar6 = FImage::Clone(param_1->Object,&local_28);
    if (__return_storage_ptr__ != pTVar6) {
      __return_storage_ptr__->Object = pTVar6->Object;
      pTVar6->Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar6->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    Release(this,param_1);
  }
  else {
    local_48.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    local_48.Object = param_1->Object;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_48) {
      __return_storage_ptr__->Object = local_48.Object;
      local_48.Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    local_38.Object = (FImage *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_1 != &local_38) {
      param_1->Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_1->SharedReferenceCount,&local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CloneOrTakeOver @ 14a99c970

TSharedPtr<UE::Mutable::Private::FMesh,1> * __thiscall
UE::Mutable::Private::FWorkingMemoryManager::CloneOrTakeOver
          (FWorkingMemoryManager *this,
          TSharedPtr<UE::Mutable::Private::FMesh,1> *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMesh *this_00;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  TSharedPtr<UE::Mutable::Private::FMesh,1> *pTVar6;
  TSharedPtr<UE::Mutable::Private::FMesh,1> local_48;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_38;
  TSharedPtr<UE::Mutable::Private::FMesh,1> local_28;
  
  if (this->DebugRunnerThreadID == 0xffffffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID != FThread::InvalidThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7ab,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  if (this->DebugRunnerID == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID != InvalidRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7ac,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  DVar4 = GetCurrentThreadId();
  if (this->DebugRunnerThreadID != DVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7b0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  if ((atomic<unsigned___int64>)this->DebugRunnerID != this->DebugCurrentRunnerId) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID == DebugCurrentRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7b1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  if (param_1->Object == (FMesh *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  iVar5 = (**(code **)param_1->Object->_padding_)();
  TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  ::RemoveSingle(&this->TempMeshes,param_1);
  __return_storage_ptr__->Object = (FMesh *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if ((pTVar1 == (TReferenceControllerBase<1> *)0x0) ||
     (pTVar1->SharedReferenceCount != (atomic<int>)0x1)) {
    pTVar6 = CreateMesh(this,&local_28,iVar5);
    if (__return_storage_ptr__ != pTVar6) {
      __return_storage_ptr__->Object = pTVar6->Object;
      pTVar6->Object = (FMesh *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar6->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (__return_storage_ptr__->Object == (FMesh *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar2)();
        return pTVar6;
      }
    }
    this_00 = __return_storage_ptr__->Object;
    if (param_1->Object == (FMesh *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar2)();
        return pTVar6;
      }
    }
    FMesh::CopyFrom(this_00,param_1->Object,AllFlags);
    Release(this,param_1);
  }
  else {
    local_48.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    local_48.Object = param_1->Object;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_48) {
      __return_storage_ptr__->Object = local_48.Object;
      local_48.Object = (FMesh *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    local_38.Object = (FMesh *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_1 != &local_38) {
      param_1->Object = (FMesh *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_1->SharedReferenceCount,&local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CreateImage @ 14a9a19c0

TSharedPtr<UE::Mutable::Private::FImage,1> * __thiscall
UE::Mutable::Private::FWorkingMemoryManager::CreateImage
          (FWorkingMemoryManager *this,
          TSharedPtr<UE::Mutable::Private::FImage,1> *__return_storage_ptr__,uint param_1,
          uint param_2,uint param_3,EImageFormat param_4,EInitializationType param_5)

{
  int *piVar1;
  TArray<TSharedPtr<UE::Mutable::Private::FImage,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *this_00;
  TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar2;
  FImage **ppFVar3;
  code *pcVar4;
  bool bVar5;
  EImageFormat EVar6;
  ushort uVar7;
  DWORD DVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar12;
  FImage *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  TReferenceControllerBase<1> *pTVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FImage *local_50;
  TReferenceControllerBase<1> *local_48;
  
  uVar18 = 0;
  if ((this->DebugRunnerThreadID == 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID != FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7ab,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
    return pTVar12;
  }
  if ((this->DebugRunnerID == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID != InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7ac,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
    return pTVar12;
  }
  DVar8 = GetCurrentThreadId();
  if ((this->DebugRunnerThreadID != DVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID == FPlatformTLS::GetCurrentThreadId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7b0,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
    return pTVar12;
  }
  if (((atomic<unsigned___int64>)this->DebugRunnerID != this->DebugCurrentRunnerId) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID == DebugCurrentRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7b1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
    return pTVar12;
  }
  uVar9 = FImage::CalculateDataSize(param_1,param_2,param_3,param_4);
  if (uVar9 != 0) {
    iVar11 = (this->PooledImages).ArrayNum;
    uVar20 = uVar18;
    uVar21 = uVar18;
    for (; (longlong)uVar18 < (longlong)iVar11; uVar18 = uVar18 + 1) {
      this_00 = &this->PooledImages;
      uVar19 = (uint)uVar20;
      uVar10 = 0;
      if ((int)uVar19 < (this->PooledImages).ArrayNum) {
        uVar10 = ~uVar19 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
        return pTVar12;
      }
      plVar16 = (longlong *)((this_00->AllocatorInstance)._padding_ + uVar21);
      if ((*plVar16 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
        return pTVar12;
      }
      EVar6 = FImage::GetFormat((FImage *)*plVar16);
      if (EVar6 == param_4) {
        if ((*plVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
          return pTVar12;
        }
        uVar7 = FImage::GetSizeX((FImage *)*plVar16);
        if (uVar7 == param_1) {
          if ((*plVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
            return pTVar12;
          }
          uVar7 = FImage::GetSizeY((FImage *)*plVar16);
          if (uVar7 == param_2) {
            if ((*plVar16 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
              return pTVar12;
            }
            uVar10 = FImage::GetLODCount((FImage *)*plVar16);
            if (uVar10 == param_3) {
              __return_storage_ptr__->Object = (FImage *)*plVar16;
              pTVar17 = (TReferenceControllerBase<1> *)plVar16[1];
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar17;
              if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar17->SharedReferenceCount =
                     (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
                UNLOCK();
              }
              uVar9 = 0;
              if ((int)uVar19 < (this->PooledImages).ArrayNum) {
                uVar9 = ~uVar19 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
                return pTVar12;
              }
              TArray<TSharedPtr<UE::Mutable::Private::FImage,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
              ::RemoveAtSwapImpl(this_00,uVar19);
              Core::Private::
              ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                        (0x10,8,&this_00->AllocatorInstance,(this->PooledImages).ArrayNum,
                         &(this->PooledImages).ArrayMax);
              pFVar13 = TSharedPtr<UE::Mutable::Private::FImage,1>::operator->
                                  (__return_storage_ptr__);
              if (param_5 == Black) {
                FImage::InitToBlack(pFVar13);
                return __return_storage_ptr__;
              }
              pFVar13->Flags = '\0';
              pFVar13 = TSharedPtr<UE::Mutable::Private::FImage,1>::operator->
                                  (__return_storage_ptr__);
              pFVar13->RelevancyMinY = 0;
              pFVar13 = TSharedPtr<UE::Mutable::Private::FImage,1>::operator->
                                  (__return_storage_ptr__);
              pFVar13->RelevancyMaxY = 0;
              return __return_storage_ptr__;
            }
          }
        }
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar21 = uVar21 + 0x10;
    }
  }
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  EnsureBudgetBelow(this,(ulonglong)uVar9);
  pTVar14 = ::operator_new(0x70);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FImage *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFImage_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    FImage::FImage((FImage *)(pTVar14 + 1),param_1,param_2,param_3,param_4,param_5);
    if (((FImage *)(pTVar14 + 1) == (FImage *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
      return pTVar12;
    }
    __return_storage_ptr__->Object = (FImage *)(pTVar14 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar14;
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
    pTVar17 = pTVar14;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  local_50 = __return_storage_ptr__->Object;
  pTVar2 = &this->TempImages;
  local_48 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
    UNLOCK();
  }
  ppFVar3 = (FImage **)(pTVar2->AllocatorInstance)._padding_;
  if (((ppFVar3 <= &local_50) && (&local_50 < ppFVar3 + (longlong)(this->TempImages).ArrayMax * 2))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar4)();
    return pTVar12;
  }
  iVar11 = (this->TempImages).ArrayNum;
  piVar1 = &(this->TempImages).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TempImages).ArrayNum = iVar11 + 1;
  puVar15 = (undefined8 *)((longlong)iVar11 * 0x10 + (pTVar2->AllocatorInstance)._padding_);
  *puVar15 = local_50;
  puVar15[1] = local_48;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  local_50 = (FImage *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// CreateMesh @ 14a9a1f40

TSharedPtr<UE::Mutable::Private::FMesh,1> * __thiscall
UE::Mutable::Private::FWorkingMemoryManager::CreateMesh
          (FWorkingMemoryManager *this,
          TSharedPtr<UE::Mutable::Private::FMesh,1> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar2;
  FMesh **ppFVar3;
  code *pcVar4;
  bool bVar5;
  DWORD DVar6;
  int iVar7;
  TSharedPtr<UE::Mutable::Private::FMesh,1> *pTVar8;
  TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *pTVar9;
  undefined8 *puVar10;
  FMesh *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (this->DebugRunnerThreadID == 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID != FThread::InvalidThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7ab,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  if (this->DebugRunnerID == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID != InvalidRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7ac,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  DVar6 = GetCurrentThreadId();
  if (this->DebugRunnerThreadID != DVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7b0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  if ((atomic<unsigned___int64>)this->DebugRunnerID != this->DebugCurrentRunnerId) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID == DebugCurrentRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7b1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  EnsureBudgetBelow(this,(longlong)param_1);
  pTVar9 = ::operator_new(0x1a8);
  if (pTVar9 == (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
    pTVar9 = (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0;
    __return_storage_ptr__->Object = (FMesh *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9 = SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1>::
             TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1><>(pTVar9);
    if (&pTVar9->ObjectStorage == (TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar4)();
        return pTVar8;
      }
    }
    __return_storage_ptr__->Object = (FMesh *)&pTVar9->ObjectStorage;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar9;
    if (pTVar9 != (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
      LOCK();
      *(int *)&pTVar9->_padding_ = (int)pTVar9->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar9);
  local_18 = __return_storage_ptr__->Object;
  pTVar2 = &this->TempMeshes;
  local_10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  ppFVar3 = (FMesh **)(pTVar2->AllocatorInstance)._padding_;
  if ((ppFVar3 <= &local_18) && (&local_18 < ppFVar3 + (longlong)(this->TempMeshes).ArrayMax * 2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  iVar7 = (this->TempMeshes).ArrayNum;
  piVar1 = &(this->TempMeshes).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TempMeshes).ArrayNum = iVar7 + 1;
  puVar10 = (undefined8 *)((longlong)iVar7 * 0x10 + (pTVar2->AllocatorInstance)._padding_);
  *puVar10 = local_18;
  puVar10[1] = local_10;
  local_10 = (TReferenceControllerBase<1> *)0x0;
  local_18 = (FMesh *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// LoadImage @ 14a9ab630

TSharedPtr<UE::Mutable::Private::FImage_const_,1> * __thiscall
UE::Mutable::Private::FWorkingMemoryManager::LoadImage
          (FWorkingMemoryManager *this,
          TSharedPtr<UE::Mutable::Private::FImage_const_,1> *__return_storage_ptr__,
          FCacheAddress *param_1,bool param_2)

{
  TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar1;
  uint uVar2;
  FProgramCache *this_00;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  FImage *pFVar5;
  FImage **ppFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar12;
  FOpExecutionData *pFVar13;
  int *piVar14;
  undefined8 *puVar15;
  FCacheAddress local_res18 [2];
  FImage *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_58;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_48;
  
  if ((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar7)();
      return pTVar12;
    }
  }
  local_res18[0] = *param_1;
  bVar8 = false;
  this_00 = (this->CurrentInstanceCache).Object;
  if ((local_res18[0].At == 0) ||
     ((uint)(this_00->OpExecutionData).m_index0.ArrayNum <= local_res18[0].At)) {
LAB_14a9ab981:
    local_68 = (FImage *)0x0;
    pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar13 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                        (&this_00->OpExecutionData,local_res18);
    if (pFVar13 == (FOpExecutionData *)0x0) goto LAB_14a9ab981;
    if (pFVar13->DataType != Image) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data->DataType == EDataType::Image",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x314,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar7)();
        return pTVar12;
      }
    }
    uVar2 = (pFVar13->field5_0x4).DataTypeIndex;
    uVar10 = 0;
    if ((int)uVar2 < (this_00->ImageResults).ArrayNum) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar7)();
        return pTVar12;
      }
    }
    lVar3 = (this_00->ImageResults).AllocatorInstance._padding_;
    pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0x10 + (longlong)(int)uVar2 * 0x18);
    pFVar5 = *(FImage **)(lVar3 + 8 + (longlong)(int)uVar2 * 0x18);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar13->OpHitCount == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data->OpHitCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x318,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar7)();
        return pTVar12;
      }
    }
    pFVar13->OpHitCount = pFVar13->OpHitCount - 1;
    if ((pFVar13->OpHitCount == 0) && (pFVar13->IsCacheLocked == '\0')) {
      FProgramCache::SetUnused(this_00,pFVar13);
      bVar8 = true;
    }
    local_68 = pFVar5;
    pTStack_60 = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_68 != (FImage *)0x0) {
      if (bVar8) {
        local_58.Object = (FResource *)local_68;
        local_58.SharedReferenceCount.ReferenceController = pTStack_60;
        if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_60->SharedReferenceCount =
               (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
          UNLOCK();
        }
        piVar14 = TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
                  ::Find((TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
                          *)&this->CacheResources,&local_58);
        if (piVar14 == (int *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CountPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                             ,0x610,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar7)();
            return pTVar12;
          }
        }
        *piVar14 = *piVar14 + -1;
        if (*piVar14 == 0) {
          local_48.Object = (FResource *)local_68;
          local_48.SharedReferenceCount.ReferenceController = pTStack_60;
          if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_60->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
            UNLOCK();
          }
          TMap<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
          ::FindAndRemoveChecked(&this->CacheResources,&local_48);
        }
      }
      if (((!param_2) && (pTStack_60 != (TReferenceControllerBase<1> *)0x0)) &&
         (pTStack_60->SharedReferenceCount == (atomic<int>)0x1)) {
        pTVar1 = &this->TempImages;
        ppFVar6 = (FImage **)(pTVar1->AllocatorInstance)._padding_;
        if ((ppFVar6 <= &local_68) &&
           (&local_68 < ppFVar6 + (longlong)(this->TempImages).ArrayMax * 2)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar7)();
            return pTVar12;
          }
        }
        iVar11 = (this->TempImages).ArrayNum;
        piVar14 = &(this->TempImages).ArrayMax;
        if (iVar11 == *piVar14) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                             (0x810,&pTVar1->AllocatorInstance,piVar14);
        }
        puVar15 = (undefined8 *)((longlong)iVar11 * 0x10 + (pTVar1->AllocatorInstance)._padding_);
        (this->TempImages).ArrayNum = iVar11 + 1;
        *puVar15 = local_68;
        puVar15[1] = pTStack_60;
        if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_60->SharedReferenceCount =
               (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      __return_storage_ptr__->Object = local_68;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (FImage *)0x0;
      goto LAB_14a9ab99e;
    }
  }
  __return_storage_ptr__->Object = (FImage *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14a9ab99e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return __return_storage_ptr__;
}

// LoadMesh @ 14a9ac070

TSharedPtr<UE::Mutable::Private::FMesh_const_,1> * __thiscall
UE::Mutable::Private::FWorkingMemoryManager::LoadMesh
          (FWorkingMemoryManager *this,
          TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *__return_storage_ptr__,
          FCacheAddress *param_1,bool param_2)

{
  TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar1;
  uint uVar2;
  FProgramCache *this_00;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMesh *pFVar5;
  FMesh **ppFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *pTVar12;
  FOpExecutionData *pFVar13;
  int *piVar14;
  undefined8 *puVar15;
  FCacheAddress local_res18 [2];
  FMesh *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_58;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_48;
  
  if ((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar7)();
      return pTVar12;
    }
  }
  local_res18[0] = *param_1;
  bVar8 = false;
  this_00 = (this->CurrentInstanceCache).Object;
  if ((local_res18[0].At == 0) ||
     ((uint)(this_00->OpExecutionData).m_index0.ArrayNum <= local_res18[0].At)) {
LAB_14a9ac3c1:
    local_68 = (FMesh *)0x0;
    pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar13 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                        (&this_00->OpExecutionData,local_res18);
    if (pFVar13 == (FOpExecutionData *)0x0) goto LAB_14a9ac3c1;
    if (pFVar13->DataType != Mesh) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data->DataType == EDataType::Mesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x32e,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar7)();
        return pTVar12;
      }
    }
    uVar2 = (pFVar13->field5_0x4).DataTypeIndex;
    uVar10 = 0;
    if ((int)uVar2 < (this_00->MeshResults).ArrayNum) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar7)();
        return pTVar12;
      }
    }
    lVar3 = (this_00->MeshResults).AllocatorInstance._padding_;
    pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0x10 + (longlong)(int)uVar2 * 0x18);
    pFVar5 = *(FMesh **)(lVar3 + 8 + (longlong)(int)uVar2 * 0x18);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar13->OpHitCount == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data->OpHitCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x332,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar7)();
        return pTVar12;
      }
    }
    pFVar13->OpHitCount = pFVar13->OpHitCount - 1;
    if ((pFVar13->OpHitCount == 0) && (pFVar13->IsCacheLocked == '\0')) {
      FProgramCache::SetUnused(this_00,pFVar13);
      bVar8 = true;
    }
    local_68 = pFVar5;
    pTStack_60 = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_68 != (FMesh *)0x0) {
      if (bVar8) {
        local_58.Object = (FResource *)local_68;
        local_58.SharedReferenceCount.ReferenceController = pTStack_60;
        if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_60->SharedReferenceCount =
               (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
          UNLOCK();
        }
        piVar14 = TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
                  ::Find((TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
                          *)&this->CacheResources,&local_58);
        if (piVar14 == (int *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CountPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                             ,0x5f2,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar7)();
            return pTVar12;
          }
        }
        *piVar14 = *piVar14 + -1;
        if (*piVar14 == 0) {
          local_48.Object = (FResource *)local_68;
          local_48.SharedReferenceCount.ReferenceController = pTStack_60;
          if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_60->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
            UNLOCK();
          }
          TMap<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
          ::FindAndRemoveChecked(&this->CacheResources,&local_48);
        }
      }
      if (((!param_2) && (pTStack_60 != (TReferenceControllerBase<1> *)0x0)) &&
         (pTStack_60->SharedReferenceCount == (atomic<int>)0x1)) {
        pTVar1 = &this->TempMeshes;
        ppFVar6 = (FMesh **)(pTVar1->AllocatorInstance)._padding_;
        if ((ppFVar6 <= &local_68) &&
           (&local_68 < ppFVar6 + (longlong)(this->TempMeshes).ArrayMax * 2)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar7)();
            return pTVar12;
          }
        }
        iVar11 = (this->TempMeshes).ArrayNum;
        piVar14 = &(this->TempMeshes).ArrayMax;
        if (iVar11 == *piVar14) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                             (0x810,&pTVar1->AllocatorInstance,piVar14);
        }
        puVar15 = (undefined8 *)((longlong)iVar11 * 0x10 + (pTVar1->AllocatorInstance)._padding_);
        (this->TempMeshes).ArrayNum = iVar11 + 1;
        *puVar15 = local_68;
        puVar15[1] = pTStack_60;
        if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_60->SharedReferenceCount =
               (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      __return_storage_ptr__->Object = local_68;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (FMesh *)0x0;
      goto LAB_14a9ac3de;
    }
  }
  __return_storage_ptr__->Object = (FMesh *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14a9ac3de:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return __return_storage_ptr__;
}

// Release @ 14a9c2ef0

void __thiscall
UE::Mutable::Private::FWorkingMemoryManager::Release
          (FWorkingMemoryManager *this,TSharedPtr<UE::Mutable::Private::FImage_const_,1> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<UE::Mutable::Private::FImage,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FImage *pFVar4;
  FImage **ppFVar5;
  code *pcVar6;
  bool bVar7;
  DWORD DVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  FImage *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_28;
  
  if ((this->DebugRunnerThreadID == 0xffffffff) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID != FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7ab,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->DebugRunnerID == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID != InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  DVar8 = GetCurrentThreadId();
  if ((this->DebugRunnerThreadID != DVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID == FPlatformTLS::GetCurrentThreadId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7b0,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((atomic<unsigned___int64>)this->DebugRunnerID != this->DebugCurrentRunnerId) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID == DebugCurrentRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7b1,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (param_1->Object == (FImage *)0x0) {
    return;
  }
  iVar9 = (**(code **)param_1->Object->_padding_)();
  TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  ::RemoveSingle(&this->TempImages,param_1);
  plVar10 = (longlong *)(this->TempImages).AllocatorInstance._padding_;
  plVar11 = plVar10 + (longlong)(this->TempImages).ArrayNum * 2;
  if (plVar10 != plVar11) {
    do {
      if ((FImage *)*plVar10 == param_1->Object) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!TempImages.Contains(Resource)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                           ,0x56f,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        break;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar11);
  }
  pTVar2 = &this->PooledImages;
  plVar10 = (longlong *)(pTVar2->AllocatorInstance)._padding_;
  plVar11 = plVar10 + (longlong)(this->PooledImages).ArrayNum * 2;
  if (plVar10 != plVar11) {
    do {
      if ((FImage *)*plVar10 == param_1->Object) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PooledImages.Contains(Resource)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                           ,0x570,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        break;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar11);
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar4 == (FImage *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  else {
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) ||
       (pTVar3->SharedReferenceCount != (atomic<int>)0x1)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar7) {
      bVar7 = EnsureBudgetBelow(this,(longlong)iVar9);
      if (bVar7) {
        local_38 = param_1->Object;
        local_30 = (param_1->SharedReferenceCount).ReferenceController;
        if (local_30 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
          UNLOCK();
        }
        ppFVar5 = (FImage **)(pTVar2->AllocatorInstance)._padding_;
        if (((ppFVar5 <= &local_38) &&
            (&local_38 < ppFVar5 + (longlong)(this->PooledImages).ArrayMax * 2)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->PooledImages).ArrayNum;
        piVar1 = &(this->PooledImages).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                            (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->PooledImages).ArrayNum = iVar9 + 1;
        puVar12 = (undefined8 *)((longlong)iVar9 * 0x10 + (pTVar2->AllocatorInstance)._padding_);
        *puVar12 = local_38;
        puVar12[1] = local_30;
        local_30 = (TReferenceControllerBase<1> *)0x0;
        local_38 = (FImage *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      goto LAB_14a9c30cd;
    }
  }
  EnsureBudgetBelow(this,0);
LAB_14a9c30cd:
  local_28.Object = (FImage *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &local_28) {
    param_1->Object = (FImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_28.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// Release @ 14a9c3250

void __thiscall
UE::Mutable::Private::FWorkingMemoryManager::Release
          (FWorkingMemoryManager *this,TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong *plVar5;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_18;
  
  if ((this->DebugRunnerThreadID == 0xffffffff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID != FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7ab,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->DebugRunnerID == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID != InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7ac,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DVar3 = GetCurrentThreadId();
  if ((this->DebugRunnerThreadID != DVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID == FPlatformTLS::GetCurrentThreadId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7b0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((atomic<unsigned___int64>)this->DebugRunnerID != this->DebugCurrentRunnerId) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID == DebugCurrentRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7b1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1->Object != (FMesh *)0x0) {
    TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
    ::RemoveSingle(&this->TempMeshes,param_1);
    plVar4 = (longlong *)(this->TempMeshes).AllocatorInstance._padding_;
    plVar5 = plVar4 + (longlong)(this->TempMeshes).ArrayNum * 2;
    if (plVar4 != plVar5) {
      do {
        if ((FMesh *)*plVar4 == param_1->Object) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!TempMeshes.Contains(Resource)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                             ,0x5d4,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          break;
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 != plVar5);
    }
    EnsureBudgetBelow(this,0);
    local_18.Object = (FMesh *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_1 != &local_18) {
      param_1->Object = (FMesh *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_1->SharedReferenceCount,&local_18.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// Release @ 14a9c3400

void __thiscall
UE::Mutable::Private::FWorkingMemoryManager::Release
          (FWorkingMemoryManager *this,TSharedPtr<UE::Mutable::Private::FImage,1> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<UE::Mutable::Private::FImage,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FImage *pFVar4;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  DWORD DVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *_Dst;
  int iVar12;
  longlong *plVar13;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_28;
  
  if ((this->DebugRunnerThreadID == 0xffffffff) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID != FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7ab,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->DebugRunnerID == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID != InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  DVar8 = GetCurrentThreadId();
  if ((this->DebugRunnerThreadID != DVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID == FPlatformTLS::GetCurrentThreadId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7b0,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((atomic<unsigned___int64>)this->DebugRunnerID != this->DebugCurrentRunnerId) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID == DebugCurrentRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7b1,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (param_1->Object == (FImage *)0x0) {
    return;
  }
  iVar9 = (**(code **)param_1->Object->_padding_)();
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  plVar10 = (longlong *)(this->TempImages).AllocatorInstance._padding_;
  for (plVar13 = plVar10; plVar13 != plVar10 + (longlong)(this->TempImages).ArrayNum * 2;
      plVar13 = plVar13 + 2) {
    if ((FImage *)*plVar13 == pFVar4) {
      iVar12 = (int)((longlong)plVar13 - (longlong)plVar10 >> 4);
      if (iVar12 != -1) {
        _Dst = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(plVar10 + (longlong)iVar12 * 2)
        ;
        DestructItems<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,int>(_Dst,1);
        memmove(_Dst,_Dst + 1,(longlong)(((this->TempImages).ArrayNum - iVar12) + -1) << 4);
        piVar1 = &(this->TempImages).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      break;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  plVar10 = (longlong *)(this->TempImages).AllocatorInstance._padding_;
  plVar13 = plVar10 + (longlong)(this->TempImages).ArrayNum * 2;
  if (plVar10 != plVar13) {
    do {
      if ((FImage *)*plVar10 == param_1->Object) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!TempImages.Contains(Resource)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                           ,0x591,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        break;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar13);
  }
  pTVar2 = &this->PooledImages;
  plVar10 = (longlong *)(pTVar2->AllocatorInstance)._padding_;
  plVar13 = plVar10 + (longlong)(this->PooledImages).ArrayNum * 2;
  if (plVar10 != plVar13) {
    do {
      if ((FImage *)*plVar10 == param_1->Object) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PooledImages.Contains(Resource)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                           ,0x592,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        break;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar13);
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar4 == (FImage *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  else {
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) ||
       (pTVar3->SharedReferenceCount != (atomic<int>)0x1)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar7) {
      bVar7 = EnsureBudgetBelow(this,(longlong)iVar9);
      if (bVar7) {
        pTVar5 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(pTVar2->AllocatorInstance)._padding_
        ;
        if (((pTVar5 <= param_1) && (param_1 < pTVar5 + (this->PooledImages).ArrayMax)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->PooledImages).ArrayNum;
        piVar1 = &(this->PooledImages).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                            (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->PooledImages).ArrayNum = iVar9 + 1;
        puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + (pTVar2->AllocatorInstance)._padding_);
        *puVar11 = param_1->Object;
        pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
        puVar11[1] = pTVar3;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      goto LAB_14a9c3670;
    }
  }
  EnsureBudgetBelow(this,0);
LAB_14a9c3670:
  local_28.Object = (FImage *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &local_28) {
    param_1->Object = (FImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_28.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// StoreImage @ 14a9e9fa0

void __thiscall
UE::Mutable::Private::FWorkingMemoryManager::StoreImage
          (FWorkingMemoryManager *this,FCacheAddress *param_1,
          TSharedPtr<UE::Mutable::Private::FImage_const_,1> *param_2)

{
  FProgramCache *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 local_res8 [2];
  int local_res10 [2];
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_58;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> *local_48;
  undefined4 *local_40;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_38;
  
  if (param_2->Object != (FImage *)0x0) {
    (**(code **)param_2->Object->_padding_)();
    TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
    ::RemoveSingle(&this->TempImages,param_2);
    plVar4 = (longlong *)(this->TempImages).AllocatorInstance._padding_;
    plVar5 = plVar4 + (longlong)(this->TempImages).ArrayNum * 2;
    if (plVar4 != plVar5) {
      do {
        if ((FImage *)*plVar4 == param_2->Object) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!TempImages.Contains(Resource)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                             ,0x642,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          break;
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 != plVar5);
    }
    local_58.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    local_58.Object = (FResource *)param_2->Object;
    local_res8[0] = 0;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    uVar6 = ((uint)((ulonglong)local_58.Object >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_58.Object >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    iVar3 = TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
            ::FindIndexByHash<TSharedPtr<UE::Mutable::Private::FResource_const_,1>_>
                      ((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                        *)&this->CacheResources,uVar6,&local_58);
    if ((iVar3 == -1) ||
       (lVar7 = (longlong)iVar3 * 0x20 + *(longlong *)&this->CacheResources, lVar7 == 0)) {
      local_48 = &local_58;
      local_40 = local_res8;
      TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
      ::
      EmplaceByHash<TPairInitializer<TSharedPtr<UE::Mutable::Private::FResource_const_,1>_&&,int_&&>_>
                ((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                  *)&this->CacheResources,(uint)local_res10,
                 (TPairInitializer<TSharedPtr<UE::Mutable::Private::FResource_const_,1>_&&,int_&&> *
                 )(ulonglong)uVar6,(bool *)&local_48);
      lVar7 = (longlong)local_res10[0] * 0x20 + *(longlong *)&this->CacheResources;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
  }
  if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_38.Object = param_2->Object;
  this_00 = (this->CurrentInstanceCache).Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FProgramCache::SetImage(this_00,*param_1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// StoreMesh @ 14a9ea4d0

void __thiscall
UE::Mutable::Private::FWorkingMemoryManager::StoreMesh
          (FWorkingMemoryManager *this,FCacheAddress *param_1,
          TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *param_2)

{
  FSharedReferencer<1> *pFVar1;
  FProgramCache *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  int local_res10 [2];
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_58;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> *local_48;
  undefined4 *local_40;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_38;
  
  pFVar1 = &param_2->SharedReferenceCount;
  if (param_2->Object != (FMesh *)0x0) {
    TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
    ::RemoveSingle(&this->TempMeshes,param_2);
    local_58.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
    local_58.Object = (FResource *)param_2->Object;
    local_res8[0] = 0;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    uVar5 = ((uint)((ulonglong)local_58.Object >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_58.Object >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    iVar4 = TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
            ::FindIndexByHash<TSharedPtr<UE::Mutable::Private::FResource_const_,1>_>
                      ((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                        *)&this->CacheResources,uVar5,&local_58);
    if ((iVar4 == -1) ||
       (lVar6 = (longlong)iVar4 * 0x20 + *(longlong *)&this->CacheResources, lVar6 == 0)) {
      local_48 = &local_58;
      local_40 = local_res8;
      TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
      ::
      EmplaceByHash<TPairInitializer<TSharedPtr<UE::Mutable::Private::FResource_const_,1>_&&,int_&&>_>
                ((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                  *)&this->CacheResources,(uint)local_res10,
                 (TPairInitializer<TSharedPtr<UE::Mutable::Private::FResource_const_,1>_&&,int_&&> *
                 )(ulonglong)uVar5,(bool *)&local_48);
      lVar6 = (longlong)local_res10[0] * 0x20 + *(longlong *)&this->CacheResources;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
  }
  if ((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38.Object = param_2->Object;
  this_00 = (this->CurrentInstanceCache).Object;
  local_38.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FProgramCache::SetMesh(this_00,*param_1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return;
}

// operator()<TArrayView<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FImage>,int>_> @ 14ab58690

int __thiscall
`UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow'::__l121::<lambda_2>::
operator()<TArrayView<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FImage>,int>_>
          (void *this,
          TArrayView<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FImage>,int>
          *param_1,TArray<UE::Mutable::Private::Private::EBudgetBelowSearchFlags,TSizedDefaultAllocator<32>_>
                   *param_2)

{
  FScriptContainerElement *pFVar1;
  TResourceResult<UE::Mutable::Private::FImage> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FOpExecutionData *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FCacheAddress *pFVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  int local_res20;
  longlong local_60;
  longlong local_50;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1699,
               "Mutable_EnsureBudgetBelow_FreeCached_Current_SearchResources",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x6a3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1699);
  }
  iVar7 = param_1->ArrayNum;
  lVar10 = (longlong)iVar7;
  local_res20 = 0;
  iVar8 = 0;
  if (0 < iVar7) {
    uVar11 = 0;
    local_60 = 0;
    local_50 = 0;
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar14 = uVar12;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (((byte)(param_2->AllocatorInstance).Data[local_50] & 4) == 0) {
        uVar14 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar14 = uVar12;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if (*(longlong *)((longlong)&(param_1->DataPtr->Value).Object + local_60) != 0) {
          uVar14 = 0;
          if ((int)uVar11 < param_2->ArrayNum) {
            uVar14 = uVar12;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          (param_2->AllocatorInstance).Data[local_50] = (FScriptContainerElement)0xc;
          lVar17 = *(longlong *)((longlong)this + 0x10);
          uVar14 = 0;
          if ((int)uVar11 < param_1->ArrayNum) {
            uVar14 = uVar12;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          pFVar15 = (FCacheAddress *)((longlong)&(param_1->DataPtr->OpAddress).At + local_60);
          if (((pFVar15->ExecutionIndex == 0) && (pFVar15->ExecutionOptions == '\0')) &&
             (pFVar15->Type == Full)) {
            uVar14 = pFVar15->At;
            uVar16 = 0;
            if ((int)uVar14 < *(int *)(lVar17 + 0x68)) {
              uVar16 = ~uVar14 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              iVar7 = (*pcVar4)();
              return iVar7;
            }
            pFVar9 = (FOpExecutionData *)(*(longlong *)(lVar17 + 0x58) + (longlong)(int)uVar14 * 8);
          }
          else {
            uVar14 = pFVar15->At;
            uVar14 = (uint)pFVar15->ExecutionIndex + uVar14 * 0x40 + (uVar14 >> 2) + 0x9e3779b9 ^
                     uVar14;
            uVar14 = (uVar14 >> 2) + 0x9e3779b9 + (uint)pFVar15->ExecutionOptions + uVar14 * 0x40 ^
                     uVar14;
            pFVar9 = TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                     ::FindOrAddImpl<UE::Mutable::Private::FCacheAddress_const_&>
                               ((TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                                 *)(lVar17 + 0x70),
                                (uVar14 >> 2) + 0x9e3779b9 + (uint)pFVar15->Type + uVar14 * 0x40 ^
                                uVar14,pFVar15);
          }
          uVar14 = uVar11;
          lVar17 = local_60;
          lVar18 = local_50;
          if (pFVar9->OpHitCount == 0) {
            do {
              do {
                lVar5 = lVar17;
                lVar18 = lVar18 + 1;
                uVar14 = uVar14 + 1;
                if (lVar10 <= lVar18) goto LAB_14ab58d72;
                uVar16 = 0;
                if ((int)uVar11 < param_1->ArrayNum) {
                  uVar16 = uVar12;
                }
                if ((uVar16 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                pTVar2 = param_1->DataPtr;
                uVar13 = ~uVar14 >> 0x1f;
                uVar16 = 0;
                if ((int)uVar14 < param_1->ArrayNum) {
                  uVar16 = uVar13;
                }
                if ((uVar16 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                lVar17 = lVar5 + 0x18;
              } while (*(longlong *)((longlong)&param_1->DataPtr[1].Value.Object + lVar5) !=
                       *(longlong *)((longlong)&(pTVar2->Value).Object + local_60));
              uVar16 = 0;
              if ((int)uVar14 < param_2->ArrayNum) {
                uVar16 = uVar13;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              pFVar1 = (param_2->AllocatorInstance).Data + lVar18;
              *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | 4);
              lVar3 = *(longlong *)((longlong)this + 0x10);
              uVar16 = 0;
              if ((int)uVar14 < param_1->ArrayNum) {
                uVar16 = uVar13;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              pFVar15 = (FCacheAddress *)((longlong)&param_1->DataPtr[1].OpAddress.At + lVar5);
              if (((pFVar15->ExecutionIndex == 0) && (pFVar15->ExecutionOptions == '\0')) &&
                 (pFVar15->Type == Full)) {
                uVar16 = pFVar15->At;
                uVar13 = 0;
                if ((int)uVar16 < *(int *)(lVar3 + 0x68)) {
                  uVar13 = ~uVar16 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                pFVar9 = (FOpExecutionData *)
                         (*(longlong *)(lVar3 + 0x58) + (longlong)(int)uVar16 * 8);
              }
              else {
                uVar16 = pFVar15->At;
                uVar16 = (uint)pFVar15->ExecutionIndex + uVar16 * 0x40 + (uVar16 >> 2) + 0x9e3779b9
                         ^ uVar16;
                uVar16 = (uVar16 >> 2) + 0x9e3779b9 +
                         (uint)pFVar15->ExecutionOptions + uVar16 * 0x40 ^ uVar16;
                pFVar9 = TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                         ::FindOrAddImpl<UE::Mutable::Private::FCacheAddress_const_&>
                                   ((TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                                     *)(lVar3 + 0x70),
                                    (uVar16 >> 2) + 0x9e3779b9 + (uint)pFVar15->Type + uVar16 * 0x40
                                    ^ uVar16,pFVar15);
              }
            } while (pFVar9->OpHitCount == 0);
LAB_14ab58d72:
            if ((int)uVar14 < iVar7) {
              if (local_50 < lVar10) {
                lVar17 = local_50;
                lVar18 = local_60;
                uVar14 = uVar11;
                do {
                  uVar12 = 0;
                  if ((int)uVar11 < param_1->ArrayNum) {
                    uVar12 = ~uVar11 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    iVar7 = (*pcVar4)();
                    return iVar7;
                  }
                  pTVar2 = param_1->DataPtr;
                  uVar12 = 0;
                  if ((int)uVar14 < param_1->ArrayNum) {
                    uVar12 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    iVar7 = (*pcVar4)();
                    return iVar7;
                  }
                  if (*(longlong *)((longlong)&(param_1->DataPtr->Value).Object + lVar18) ==
                      *(longlong *)((longlong)&(pTVar2->Value).Object + local_60)) {
                    uVar12 = 0;
                    if ((int)uVar14 < param_2->ArrayNum) {
                      uVar12 = ~uVar14 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      iVar7 = (*pcVar4)();
                      return iVar7;
                    }
                    pFVar1 = (param_2->AllocatorInstance).Data + lVar17;
                    *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | 6);
                  }
                  uVar14 = uVar14 + 1;
                  lVar17 = lVar17 + 1;
                  lVar18 = lVar18 + 0x18;
                } while (lVar17 < lVar10);
              }
            }
            else {
              uVar14 = 0;
              if ((int)uVar11 < param_1->ArrayNum) {
                uVar14 = ~uVar11 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              pTVar2 = param_1->DataPtr;
              if ((*(longlong *)((longlong)&(pTVar2->Value).Object + local_60) == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              iVar8 = (**(code **)**(undefined8 **)((longlong)&(pTVar2->Value).Object + local_60))()
              ;
              iVar8 = local_res20 + iVar8;
              local_res20 = iVar8;
              if (*(longlong *)this - (longlong)iVar8 <= *(longlong *)((longlong)this + 8)) break;
            }
          }
          else {
            for (; lVar18 < lVar10; lVar18 = lVar18 + 1) {
              uVar16 = 0;
              if ((int)uVar11 < param_1->ArrayNum) {
                uVar16 = uVar12;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              pTVar2 = param_1->DataPtr;
              uVar16 = 0;
              if ((int)uVar14 < param_1->ArrayNum) {
                uVar16 = ~uVar14 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              if (*(longlong *)((longlong)&(param_1->DataPtr->Value).Object + lVar17) ==
                  *(longlong *)((longlong)&(pTVar2->Value).Object + local_60)) {
                uVar16 = 0;
                if ((int)uVar14 < param_2->ArrayNum) {
                  uVar16 = ~uVar14 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                pFVar1 = (param_2->AllocatorInstance).Data + lVar18;
                *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | 6);
              }
              uVar14 = uVar14 + 1;
              lVar17 = lVar17 + 0x18;
            }
          }
        }
      }
      local_50 = local_50 + 1;
      local_60 = local_60 + 0x18;
      uVar11 = uVar11 + 1;
      iVar8 = local_res20;
    } while (local_50 < lVar10);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar8;
}

// operator()<TArrayView<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FMesh>,int>_> @ 14ab58f90

int __thiscall
`UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow'::__l121::<lambda_2>::
operator()<TArrayView<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FMesh>,int>_>
          (void *this,
          TArrayView<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FMesh>,int>
          *param_1,TArray<UE::Mutable::Private::Private::EBudgetBelowSearchFlags,TSizedDefaultAllocator<32>_>
                   *param_2)

{
  FScriptContainerElement *pFVar1;
  TResourceResult<UE::Mutable::Private::FMesh> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FOpExecutionData *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FCacheAddress *pFVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  int local_res20;
  longlong local_60;
  longlong local_50;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1699,
               "Mutable_EnsureBudgetBelow_FreeCached_Current_SearchResources",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x6a3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1699);
  }
  iVar7 = param_1->ArrayNum;
  lVar10 = (longlong)iVar7;
  local_res20 = 0;
  iVar8 = 0;
  if (0 < iVar7) {
    uVar11 = 0;
    local_60 = 0;
    local_50 = 0;
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar14 = uVar12;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (((byte)(param_2->AllocatorInstance).Data[local_50] & 4) == 0) {
        uVar14 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar14 = uVar12;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if (*(longlong *)((longlong)&(param_1->DataPtr->Value).Object + local_60) != 0) {
          uVar14 = 0;
          if ((int)uVar11 < param_2->ArrayNum) {
            uVar14 = uVar12;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          (param_2->AllocatorInstance).Data[local_50] = (FScriptContainerElement)0xc;
          lVar17 = *(longlong *)((longlong)this + 0x10);
          uVar14 = 0;
          if ((int)uVar11 < param_1->ArrayNum) {
            uVar14 = uVar12;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          pFVar15 = (FCacheAddress *)((longlong)&(param_1->DataPtr->OpAddress).At + local_60);
          if (((pFVar15->ExecutionIndex == 0) && (pFVar15->ExecutionOptions == '\0')) &&
             (pFVar15->Type == Full)) {
            uVar14 = pFVar15->At;
            uVar16 = 0;
            if ((int)uVar14 < *(int *)(lVar17 + 0x68)) {
              uVar16 = ~uVar14 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              iVar7 = (*pcVar4)();
              return iVar7;
            }
            pFVar9 = (FOpExecutionData *)(*(longlong *)(lVar17 + 0x58) + (longlong)(int)uVar14 * 8);
          }
          else {
            uVar14 = pFVar15->At;
            uVar14 = (uint)pFVar15->ExecutionIndex + uVar14 * 0x40 + (uVar14 >> 2) + 0x9e3779b9 ^
                     uVar14;
            uVar14 = (uVar14 >> 2) + 0x9e3779b9 + (uint)pFVar15->ExecutionOptions + uVar14 * 0x40 ^
                     uVar14;
            pFVar9 = TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                     ::FindOrAddImpl<UE::Mutable::Private::FCacheAddress_const_&>
                               ((TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                                 *)(lVar17 + 0x70),
                                (uVar14 >> 2) + 0x9e3779b9 + (uint)pFVar15->Type + uVar14 * 0x40 ^
                                uVar14,pFVar15);
          }
          uVar14 = uVar11;
          lVar17 = local_60;
          lVar18 = local_50;
          if (pFVar9->OpHitCount == 0) {
            do {
              do {
                lVar5 = lVar17;
                lVar18 = lVar18 + 1;
                uVar14 = uVar14 + 1;
                if (lVar10 <= lVar18) goto LAB_14ab59672;
                uVar16 = 0;
                if ((int)uVar11 < param_1->ArrayNum) {
                  uVar16 = uVar12;
                }
                if ((uVar16 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                pTVar2 = param_1->DataPtr;
                uVar13 = ~uVar14 >> 0x1f;
                uVar16 = 0;
                if ((int)uVar14 < param_1->ArrayNum) {
                  uVar16 = uVar13;
                }
                if ((uVar16 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                lVar17 = lVar5 + 0x18;
              } while (*(longlong *)((longlong)&param_1->DataPtr[1].Value.Object + lVar5) !=
                       *(longlong *)((longlong)&(pTVar2->Value).Object + local_60));
              uVar16 = 0;
              if ((int)uVar14 < param_2->ArrayNum) {
                uVar16 = uVar13;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              pFVar1 = (param_2->AllocatorInstance).Data + lVar18;
              *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | 4);
              lVar3 = *(longlong *)((longlong)this + 0x10);
              uVar16 = 0;
              if ((int)uVar14 < param_1->ArrayNum) {
                uVar16 = uVar13;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              pFVar15 = (FCacheAddress *)((longlong)&param_1->DataPtr[1].OpAddress.At + lVar5);
              if (((pFVar15->ExecutionIndex == 0) && (pFVar15->ExecutionOptions == '\0')) &&
                 (pFVar15->Type == Full)) {
                uVar16 = pFVar15->At;
                uVar13 = 0;
                if ((int)uVar16 < *(int *)(lVar3 + 0x68)) {
                  uVar13 = ~uVar16 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                pFVar9 = (FOpExecutionData *)
                         (*(longlong *)(lVar3 + 0x58) + (longlong)(int)uVar16 * 8);
              }
              else {
                uVar16 = pFVar15->At;
                uVar16 = (uint)pFVar15->ExecutionIndex + uVar16 * 0x40 + (uVar16 >> 2) + 0x9e3779b9
                         ^ uVar16;
                uVar16 = (uVar16 >> 2) + 0x9e3779b9 +
                         (uint)pFVar15->ExecutionOptions + uVar16 * 0x40 ^ uVar16;
                pFVar9 = TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                         ::FindOrAddImpl<UE::Mutable::Private::FCacheAddress_const_&>
                                   ((TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                                     *)(lVar3 + 0x70),
                                    (uVar16 >> 2) + 0x9e3779b9 + (uint)pFVar15->Type + uVar16 * 0x40
                                    ^ uVar16,pFVar15);
              }
            } while (pFVar9->OpHitCount == 0);
LAB_14ab59672:
            if ((int)uVar14 < iVar7) {
              if (local_50 < lVar10) {
                lVar17 = local_50;
                lVar18 = local_60;
                uVar14 = uVar11;
                do {
                  uVar12 = 0;
                  if ((int)uVar11 < param_1->ArrayNum) {
                    uVar12 = ~uVar11 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    iVar7 = (*pcVar4)();
                    return iVar7;
                  }
                  pTVar2 = param_1->DataPtr;
                  uVar12 = 0;
                  if ((int)uVar14 < param_1->ArrayNum) {
                    uVar12 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    iVar7 = (*pcVar4)();
                    return iVar7;
                  }
                  if (*(longlong *)((longlong)&(param_1->DataPtr->Value).Object + lVar18) ==
                      *(longlong *)((longlong)&(pTVar2->Value).Object + local_60)) {
                    uVar12 = 0;
                    if ((int)uVar14 < param_2->ArrayNum) {
                      uVar12 = ~uVar14 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      iVar7 = (*pcVar4)();
                      return iVar7;
                    }
                    pFVar1 = (param_2->AllocatorInstance).Data + lVar17;
                    *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | 6);
                  }
                  uVar14 = uVar14 + 1;
                  lVar17 = lVar17 + 1;
                  lVar18 = lVar18 + 0x18;
                } while (lVar17 < lVar10);
              }
            }
            else {
              uVar14 = 0;
              if ((int)uVar11 < param_1->ArrayNum) {
                uVar14 = ~uVar11 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              pTVar2 = param_1->DataPtr;
              if ((*(longlong *)((longlong)&(pTVar2->Value).Object + local_60) == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              iVar8 = (**(code **)**(undefined8 **)((longlong)&(pTVar2->Value).Object + local_60))()
              ;
              iVar8 = local_res20 + iVar8;
              local_res20 = iVar8;
              if (*(longlong *)this - (longlong)iVar8 <= *(longlong *)((longlong)this + 8)) break;
            }
          }
          else {
            for (; lVar18 < lVar10; lVar18 = lVar18 + 1) {
              uVar16 = 0;
              if ((int)uVar11 < param_1->ArrayNum) {
                uVar16 = uVar12;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              pTVar2 = param_1->DataPtr;
              uVar16 = 0;
              if ((int)uVar14 < param_1->ArrayNum) {
                uVar16 = ~uVar14 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              if (*(longlong *)((longlong)&(param_1->DataPtr->Value).Object + lVar17) ==
                  *(longlong *)((longlong)&(pTVar2->Value).Object + local_60)) {
                uVar16 = 0;
                if ((int)uVar14 < param_2->ArrayNum) {
                  uVar16 = ~uVar14 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                pFVar1 = (param_2->AllocatorInstance).Data + lVar18;
                *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | 6);
              }
              uVar14 = uVar14 + 1;
              lVar17 = lVar17 + 0x18;
            }
          }
        }
      }
      local_50 = local_50 + 1;
      local_60 = local_60 + 0x18;
      uVar11 = uVar11 + 1;
      iVar8 = local_res20;
    } while (local_50 < lVar10);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar8;
}

// ~FWorkingMemoryManager @ 14ab60af0

void __thiscall
UE::Mutable::Private::FWorkingMemoryManager::~FWorkingMemoryManager(FWorkingMemoryManager *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CacheResources).field_0x60 = 0;
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - *(longlong *)&(this->CacheResources).field_0x58);
  UNLOCK();
  FGlobalMemoryCounter::Update(-*(longlong *)&(this->CacheResources).field_0x58);
  pvVar1 = *(void **)&(this->CacheResources).field_0x50;
  *(undefined8 *)&(this->CacheResources).field_0x58 = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>_>,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>_>,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>_>,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
              *)&this->CacheResources);
  DestructItems<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)
             (this->TempMeshes).AllocatorInstance._padding_,(this->TempMeshes).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->TempMeshes).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->TempMeshes).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->TempMeshes).AllocatorInstance._padding_;
  (this->TempMeshes).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)
             (this->TempImages).AllocatorInstance._padding_,(this->TempImages).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->TempImages).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->TempImages).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->TempImages).AllocatorInstance._padding_;
  (this->TempImages).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSharedPtr<UE::Mutable::Private::FImage,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FImage,1> *)
             (this->PooledImages).AllocatorInstance._padding_,(this->PooledImages).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->PooledImages).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->PooledImages).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->PooledImages).AllocatorInstance._padding_;
  (this->PooledImages).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentMaterialIdRegistry).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentImageIdRegistry).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentMeshIdRegistry).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentInstanceCache).SharedReferenceCount.ReferenceController);
  DestructItems<UE::Mutable::Private::FLiveInstance,int>
            ((FLiveInstance *)(this->LiveInstances).AllocatorInstance._padding_,
             (this->LiveInstances).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->LiveInstances).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->LiveInstances).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->LiveInstances).AllocatorInstance._padding_;
  (this->LiveInstances).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry,int>
            ((FModelCacheEntry *)(this->CachePerModel).AllocatorInstance._padding_,
             (this->CachePerModel).ArrayNum);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->CachePerModel).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->CachePerModel).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->CachePerModel).AllocatorInstance._padding_;
  (this->CachePerModel).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FLiveInstance::~FLiveInstance(&this->CurrentLiveInstance);
  return;
}

// ClearCacheLayer0 @ 14ab6a830

void __thiscall
UE::Mutable::Private::FWorkingMemoryManager::ClearCacheLayer0(FWorkingMemoryManager *this)

{
  TMap<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
  *pTVar1;
  ulonglong uVar2;
  char cVar3;
  FProgramCache *pFVar4;
  FProgramCache *pFVar5;
  FResource *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  atomic<int> *paVar12;
  undefined8 *puVar13;
  FSharedReferencer<1> FVar14;
  int iVar15;
  TReferenceControllerBase<1> *pTVar16;
  uint uVar17;
  undefined2 *puVar18;
  int iVar19;
  uint local_108;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  TStack_f8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  *local_d0;
  undefined2 local_c8;
  undefined8 local_b8;
  FSharedReferencer<1> FStack_b0;
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  undefined8 local_98;
  FSharedReferencer<1> FStack_90;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_78;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_68;
  TIterator local_58;
  
  if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentInstanceCache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x6fc,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Mutable::Private::FWorkingMemoryManager::ClearCacheLayer0(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1790,"Mutable_ClearLayer0",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
               ,0x6fe);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Mutable::Private::FWorkingMemoryManager::ClearCacheLayer0(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1790);
  }
  if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar4 = (this->CurrentInstanceCache).Object;
  local_108 = 0;
  pTVar1 = &(pFVar4->OpExecutionData).m_otherIndex;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  ::TIterator::TIterator
            (&local_58,
             (TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
              *)pTVar1);
  iVar19 = 1;
  TStack_f8._padding_ = local_58._padding_;
  local_c8 = 0;
  TStack_f8.Array =
       (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
        *)local_58._padding_;
  TStack_f8.UnvisitedBitMask = (undefined4)local_58._padding_;
  TStack_f8.CurrentBitIndex = local_58._padding_._4_4_;
  TStack_f8.BaseBitIndex = (int)local_58._padding_;
  TStack_f8._28_4_ = local_58._padding_._4_4_;
  uStack_d8 = local_58.Set._0_4_;
  uStack_d4 = local_58.Set._4_4_;
  local_d0 = (TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
              *)pTVar1;
  do {
    uVar17 = 0;
    if (((int)local_108 < 0) || ((pFVar4->OpExecutionData).m_index0.ArrayNum <= (int)local_108)) {
      if ((TStack_f8.Array)->NumBits <= TStack_f8.CurrentBitIndex) {
        if (((char)local_c8 != '\0') && (local_c8._1_1_ != '\0')) {
          uVar17 = *(int *)&(local_d0->Elements).field_0x10 -
                   *(int *)&(local_d0->Elements).field_0x44;
          if (3 < uVar17) {
            uVar2 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
            lVar7 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            iVar19 = 1 << ((byte)lVar7 & 0x1f);
          }
          if (((0 < (int)uVar17) && (local_d0->HashSize < iVar19)) || (iVar19 < local_d0->HashSize))
          {
            local_d0->HashSize = iVar19;
            TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
            ::Rehash(local_d0);
          }
        }
        if (bVar9) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      if ((-1 < (int)local_108) &&
         (iVar15 = (pFVar4->OpExecutionData).m_index0.ArrayNum, (int)local_108 < iVar15))
      goto LAB_14ab6a99e;
      puVar18 = (undefined2 *)
                (*(longlong *)local_58._padding_ + ((longlong)TStack_f8.CurrentBitIndex * 3 + 1) * 8
                );
    }
    else {
      iVar15 = (pFVar4->OpExecutionData).m_index0.ArrayNum;
LAB_14ab6a99e:
      uVar11 = uVar17;
      if ((int)local_108 < iVar15) {
        uVar11 = ~local_108 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar18 = (undefined2 *)
                ((pFVar4->OpExecutionData).m_index0.AllocatorInstance._padding_ +
                (longlong)(int)local_108 * 8);
    }
    if ((*(int *)(puVar18 + 2) != 0) && ((*(byte *)(puVar18 + 1) & 4) == 0)) {
      cVar3 = *(char *)((longlong)puVar18 + 3);
      if (cVar3 == '\x05') {
        if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar11 = *(uint *)(puVar18 + 2);
        pFVar5 = (this->CurrentInstanceCache).Object;
        if ((int)uVar11 < (pFVar5->ImageResults).ArrayNum) {
          uVar17 = ~uVar11 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = (pFVar5->ImageResults).AllocatorInstance._padding_;
        pTVar16 = *(TReferenceControllerBase<1> **)(lVar7 + 0x10 + (longlong)(int)uVar11 * 0x18);
        pFVar6 = *(FResource **)(lVar7 + 8 + (longlong)(int)uVar11 * 0x18);
        if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
          paVar12 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar12 = &pTVar16->SharedReferenceCount;
          LOCK();
          *paVar12 = (atomic<int>)((int)*paVar12 + 1);
          UNLOCK();
        }
        if (pFVar6 != (FResource *)0x0) {
          if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar12 = (atomic<int>)((int)*paVar12 + 1);
            UNLOCK();
          }
          local_68.Object = pFVar6;
          local_68.SharedReferenceCount.ReferenceController = pTVar16;
          TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
          ::Remove((TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
                    *)&this->CacheResources,&local_68);
          if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar17 = *(uint *)(puVar18 + 2);
          pFVar5 = (this->CurrentInstanceCache).Object;
          uVar11 = 0;
          if ((int)uVar17 < (pFVar5->ImageResults).ArrayNum) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_88 = 0;
          FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          puVar13 = (undefined8 *)
                    ((pFVar5->ImageResults).AllocatorInstance._padding_ +
                    ((longlong)(int)uVar17 * 3 + 1) * 8);
          FVar14.ReferenceController = FStack_80.ReferenceController;
          if (puVar13 != &local_88) {
            *puVar13 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(puVar13 + 1),&FStack_80);
            FVar14.ReferenceController = FStack_80.ReferenceController;
          }
LAB_14ab6b061:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar14.ReferenceController);
        }
LAB_14ab6b066:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
      }
      else if (cVar3 == '\x06') {
        if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar11 = *(uint *)(puVar18 + 2);
        pFVar5 = (this->CurrentInstanceCache).Object;
        if ((int)uVar11 < (pFVar5->LayoutResults).ArrayNum) {
          uVar17 = ~uVar11 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar16 = *(TReferenceControllerBase<1> **)
                   ((pFVar5->LayoutResults).AllocatorInstance._padding_ + 8 +
                   (longlong)(int)uVar11 * 0x10);
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar17 = *(uint *)(puVar18 + 2);
        pFVar5 = (this->CurrentInstanceCache).Object;
        uVar11 = 0;
        if ((int)uVar17 < (pFVar5->LayoutResults).ArrayNum) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar13 = (undefined8 *)
                  ((longlong)(int)uVar17 * 0x10 +
                  (pFVar5->LayoutResults).AllocatorInstance._padding_);
        local_98 = 0;
        FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FVar14.ReferenceController = FStack_90.ReferenceController;
        if (puVar13 != &local_98) {
          *puVar13 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(puVar13 + 1),&FStack_90);
          FVar14.ReferenceController = FStack_90.ReferenceController;
        }
LAB_14ab6aeb2:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar14.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
      }
      else {
        if (cVar3 == '\a') {
          if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar11 = *(uint *)(puVar18 + 2);
          pFVar5 = (this->CurrentInstanceCache).Object;
          if ((int)uVar11 < (pFVar5->MeshResults).ArrayNum) {
            uVar17 = ~uVar11 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = (pFVar5->MeshResults).AllocatorInstance._padding_;
          pTVar16 = *(TReferenceControllerBase<1> **)(lVar7 + 0x10 + (longlong)(int)uVar11 * 0x18);
          pFVar6 = *(FResource **)(lVar7 + 8 + (longlong)(int)uVar11 * 0x18);
          if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
            paVar12 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar12 = &pTVar16->SharedReferenceCount;
            LOCK();
            *paVar12 = (atomic<int>)((int)*paVar12 + 1);
            UNLOCK();
          }
          if (pFVar6 != (FResource *)0x0) {
            if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar12 = (atomic<int>)((int)*paVar12 + 1);
              UNLOCK();
            }
            local_78.Object = pFVar6;
            local_78.SharedReferenceCount.ReferenceController = pTVar16;
            TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
            ::Remove((TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
                      *)&this->CacheResources,&local_78);
            if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar17 = *(uint *)(puVar18 + 2);
            pFVar5 = (this->CurrentInstanceCache).Object;
            uVar11 = 0;
            if ((int)uVar17 < (pFVar5->MeshResults).ArrayNum) {
              uVar11 = ~uVar17 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_a8 = 0;
            FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            puVar13 = (undefined8 *)
                      ((pFVar5->MeshResults).AllocatorInstance._padding_ +
                      ((longlong)(int)uVar17 * 3 + 1) * 8);
            FVar14.ReferenceController = FStack_a0.ReferenceController;
            if (puVar13 != &local_a8) {
              *puVar13 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(puVar13 + 1),&FStack_a0);
              FVar14.ReferenceController = FStack_a0.ReferenceController;
            }
            goto LAB_14ab6b061;
          }
          goto LAB_14ab6b066;
        }
        if (cVar3 == '\b') {
          if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar11 = *(uint *)(puVar18 + 2);
          pFVar5 = (this->CurrentInstanceCache).Object;
          if ((int)uVar11 < (pFVar5->InstanceResults).ArrayNum) {
            uVar17 = ~uVar11 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar16 = *(TReferenceControllerBase<1> **)
                     ((pFVar5->InstanceResults).AllocatorInstance._padding_ + 8 +
                     (longlong)(int)uVar11 * 0x10);
          if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar17 = *(uint *)(puVar18 + 2);
          pFVar5 = (this->CurrentInstanceCache).Object;
          uVar11 = 0;
          if ((int)uVar17 < (pFVar5->InstanceResults).ArrayNum) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          puVar13 = (undefined8 *)
                    ((longlong)(int)uVar17 * 0x10 +
                    (pFVar5->InstanceResults).AllocatorInstance._padding_);
          local_b8 = 0;
          FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          FVar14.ReferenceController = FStack_b0.ReferenceController;
          if (puVar13 != &local_b8) {
            *puVar13 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(puVar13 + 1),&FStack_b0);
            FVar14.ReferenceController = FStack_b0.ReferenceController;
          }
          goto LAB_14ab6aeb2;
        }
      }
      *(byte *)(puVar18 + 1) = *(byte *)(puVar18 + 1) & 0xfd;
      *puVar18 = 0;
    }
    if (((int)local_108 < 0) || ((pFVar4->OpExecutionData).m_index0.ArrayNum <= (int)local_108)) {
      TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
      ::FindFirstSetBit(&TStack_f8);
    }
    else {
      local_108 = local_108 + 1;
    }
    if (((char)local_c8 != '\0') && (local_c8._1_1_ != '\0')) {
      iVar15 = 1;
      uVar17 = *(int *)&(local_d0->Elements).field_0x10 - *(int *)&(local_d0->Elements).field_0x44;
      if (3 < uVar17) {
        uVar2 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((0 < (int)uVar17) && (local_d0->HashSize < iVar15)) || (iVar15 < local_d0->HashSize)) {
        local_d0->HashSize = iVar15;
        TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
        ::Rehash(local_d0);
      }
    }
  } while( true );
}

// ClearCacheLayer1 @ 14ab6b1d0

void __thiscall
UE::Mutable::Private::FWorkingMemoryManager::ClearCacheLayer1(FWorkingMemoryManager *this)

{
  TMap<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
  *pTVar1;
  ulonglong uVar2;
  char cVar3;
  FProgramCache *pFVar4;
  FProgramCache *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  FSharedReferencer<1> FVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uVar14;
  undefined2 *puVar15;
  int iVar16;
  bool bVar17;
  uint local_108;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  TStack_f8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  *local_d0;
  undefined2 local_c8;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_b8;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_a8;
  undefined8 local_98;
  FSharedReferencer<1> FStack_90;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  TIterator local_58;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Mutable::Private::FWorkingMemoryManager::ClearCacheLayer1(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1856,"Mutable_ClearLayer1",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
               ,0x740);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Mutable::Private::FWorkingMemoryManager::ClearCacheLayer1(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1856);
  }
  if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = (this->CurrentInstanceCache).Object;
  local_108 = 0;
  pTVar1 = &(pFVar4->OpExecutionData).m_otherIndex;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  ::TIterator::TIterator
            (&local_58,
             (TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
              *)pTVar1);
  iVar16 = 1;
  TStack_f8._padding_ = local_58._padding_;
  local_c8 = 0;
  TStack_f8.Array =
       (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
        *)local_58._padding_;
  TStack_f8.UnvisitedBitMask = (undefined4)local_58._padding_;
  TStack_f8.CurrentBitIndex = local_58._padding_._4_4_;
  TStack_f8.BaseBitIndex = (int)local_58._padding_;
  TStack_f8._28_4_ = local_58._padding_._4_4_;
  uStack_d8 = local_58.Set._0_4_;
  uStack_d4 = local_58.Set._4_4_;
  local_d0 = (TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
              *)pTVar1;
  do {
    uVar14 = 0;
    if (((int)local_108 < 0) || ((pFVar4->OpExecutionData).m_index0.ArrayNum <= (int)local_108)) {
      if ((TStack_f8.Array)->NumBits <= TStack_f8.CurrentBitIndex) {
        if (((char)local_c8 != '\0') && (local_c8._1_1_ != '\0')) {
          uVar14 = *(int *)&(local_d0->Elements).field_0x10 -
                   *(int *)&(local_d0->Elements).field_0x44;
          if (3 < uVar14) {
            uVar2 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
            lVar6 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar16 = 1 << ((byte)lVar6 & 0x1f);
          }
          if (((0 < (int)uVar14) && (local_d0->HashSize < iVar16)) || (iVar16 < local_d0->HashSize))
          {
            local_d0->HashSize = iVar16;
            TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
            ::Rehash(local_d0);
          }
        }
        if (bVar17) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      if ((-1 < (int)local_108) &&
         (iVar12 = (pFVar4->OpExecutionData).m_index0.ArrayNum, (int)local_108 < iVar12))
      goto LAB_14ab6b30e;
      puVar15 = (undefined2 *)
                (*(longlong *)local_58._padding_ + ((longlong)TStack_f8.CurrentBitIndex * 3 + 1) * 8
                );
    }
    else {
      iVar12 = (pFVar4->OpExecutionData).m_index0.ArrayNum;
LAB_14ab6b30e:
      uVar9 = uVar14;
      if ((int)local_108 < iVar12) {
        uVar9 = ~local_108 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar15 = (undefined2 *)
                ((pFVar4->OpExecutionData).m_index0.AllocatorInstance._padding_ +
                (longlong)(int)local_108 * 8);
    }
    if (*(int *)(puVar15 + 2) != 0) {
      cVar3 = *(char *)((longlong)puVar15 + 3);
      if (cVar3 == '\x05') {
        if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar9 = *(uint *)(puVar15 + 2);
        pFVar5 = (this->CurrentInstanceCache).Object;
        if ((int)uVar9 < (pFVar5->ImageResults).ArrayNum) {
          uVar14 = ~uVar9 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = (pFVar5->ImageResults).AllocatorInstance._padding_;
        pTVar13 = *(TReferenceControllerBase<1> **)(lVar6 + 0x10 + (longlong)(int)uVar9 * 0x18);
        local_a8.Object = *(FResource **)(lVar6 + 8 + (longlong)(int)uVar9 * 0x18);
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.SharedReferenceCount.ReferenceController = pTVar13;
        TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
        ::Remove((TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
                  *)&this->CacheResources,&local_a8);
        if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = *(uint *)(puVar15 + 2);
        pFVar5 = (this->CurrentInstanceCache).Object;
        uVar9 = 0;
        if ((int)uVar14 < (pFVar5->ImageResults).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_68 = 0;
        FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        puVar10 = (undefined8 *)
                  ((pFVar5->ImageResults).AllocatorInstance._padding_ +
                  ((longlong)(int)uVar14 * 3 + 1) * 8);
        FVar11.ReferenceController = FStack_60.ReferenceController;
        if (puVar10 != &local_68) {
          *puVar10 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(puVar10 + 1),&FStack_60);
          FVar11.ReferenceController = FStack_60.ReferenceController;
        }
LAB_14ab6b98d:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar11.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
      }
      else {
        if (cVar3 == '\x06') {
          if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar9 = *(uint *)(puVar15 + 2);
          pFVar5 = (this->CurrentInstanceCache).Object;
          if ((int)uVar9 < (pFVar5->LayoutResults).ArrayNum) {
            uVar14 = ~uVar9 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar13 = *(TReferenceControllerBase<1> **)
                     ((pFVar5->LayoutResults).AllocatorInstance._padding_ + 8 +
                     (longlong)(int)uVar9 * 0x10);
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar14 = *(uint *)(puVar15 + 2);
          pFVar5 = (this->CurrentInstanceCache).Object;
          uVar9 = 0;
          if ((int)uVar14 < (pFVar5->LayoutResults).ArrayNum) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          puVar10 = (undefined8 *)
                    ((longlong)(int)uVar14 * 0x10 +
                    (pFVar5->LayoutResults).AllocatorInstance._padding_);
          local_78 = 0;
          FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          FVar11.ReferenceController = FStack_70.ReferenceController;
          if (puVar10 != &local_78) {
            *puVar10 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(puVar10 + 1),&FStack_70);
            FVar11.ReferenceController = FStack_70.ReferenceController;
          }
          goto LAB_14ab6b98d;
        }
        if (cVar3 == '\a') {
          if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar9 = *(uint *)(puVar15 + 2);
          pFVar5 = (this->CurrentInstanceCache).Object;
          if ((int)uVar9 < (pFVar5->MeshResults).ArrayNum) {
            uVar14 = ~uVar9 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar6 = (pFVar5->MeshResults).AllocatorInstance._padding_;
          pTVar13 = *(TReferenceControllerBase<1> **)(lVar6 + 0x10 + (longlong)(int)uVar9 * 0x18);
          local_b8.Object = *(FResource **)(lVar6 + 8 + (longlong)(int)uVar9 * 0x18);
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_b8.SharedReferenceCount.ReferenceController = pTVar13;
          TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
          ::Remove((TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
                    *)&this->CacheResources,&local_b8);
          if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar14 = *(uint *)(puVar15 + 2);
          pFVar5 = (this->CurrentInstanceCache).Object;
          uVar9 = 0;
          if ((int)uVar14 < (pFVar5->MeshResults).ArrayNum) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_88 = 0;
          FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          puVar10 = (undefined8 *)
                    ((pFVar5->MeshResults).AllocatorInstance._padding_ +
                    ((longlong)(int)uVar14 * 3 + 1) * 8);
          FVar11.ReferenceController = FStack_80.ReferenceController;
          if (puVar10 != &local_88) {
            *puVar10 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(puVar10 + 1),&FStack_80);
            FVar11.ReferenceController = FStack_80.ReferenceController;
          }
          goto LAB_14ab6b98d;
        }
        if (cVar3 == '\b') {
          if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar9 = *(uint *)(puVar15 + 2);
          pFVar5 = (this->CurrentInstanceCache).Object;
          if ((int)uVar9 < (pFVar5->InstanceResults).ArrayNum) {
            uVar14 = ~uVar9 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar13 = *(TReferenceControllerBase<1> **)
                     ((pFVar5->InstanceResults).AllocatorInstance._padding_ + 8 +
                     (longlong)(int)uVar9 * 0x10);
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar14 = *(uint *)(puVar15 + 2);
          pFVar5 = (this->CurrentInstanceCache).Object;
          uVar9 = 0;
          if ((int)uVar14 < (pFVar5->InstanceResults).ArrayNum) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          puVar10 = (undefined8 *)
                    ((longlong)(int)uVar14 * 0x10 +
                    (pFVar5->InstanceResults).AllocatorInstance._padding_);
          local_98 = 0;
          FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          FVar11.ReferenceController = FStack_90.ReferenceController;
          if (puVar10 != &local_98) {
            *puVar10 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(puVar10 + 1),&FStack_90);
            FVar11.ReferenceController = FStack_90.ReferenceController;
          }
          goto LAB_14ab6b98d;
        }
      }
      *(byte *)(puVar15 + 1) = *(byte *)(puVar15 + 1) & 0xfd;
      *puVar15 = 0;
    }
    if (((int)local_108 < 0) || ((pFVar4->OpExecutionData).m_index0.ArrayNum <= (int)local_108)) {
      TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
      ::FindFirstSetBit(&TStack_f8);
    }
    else {
      local_108 = local_108 + 1;
    }
    if (((char)local_c8 != '\0') && (local_c8._1_1_ != '\0')) {
      iVar12 = 1;
      uVar14 = *(int *)&(local_d0->Elements).field_0x10 - *(int *)&(local_d0->Elements).field_0x44;
      if (3 < uVar14) {
        uVar2 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar14) && (local_d0->HashSize < iVar12)) || (iVar12 < local_d0->HashSize)) {
        local_d0->HashSize = iVar12;
        TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
        ::Rehash(local_d0);
      }
    }
  } while( true );
}

// EnsureBudgetBelow @ 14ab6d210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow
          (FWorkingMemoryManager *this,ulong64 param_1)

{
  TSparseArray<unsigned_char,FDefaultSparseArrayAllocator> *pTVar1;
  TArray<TSharedPtr<UE::Mutable::Private::FImage,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *this_00;
  EDataType EVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  ulong64 uVar5;
  FCacheAddress FVar6;
  TReferenceControllerBase<1> *pTVar7;
  FProgramCache *pFVar8;
  code *pcVar9;
  float fVar10;
  FWorkingMemoryManager *pFVar11;
  FMesh *pFVar12;
  FImage *pFVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  long64 lVar20;
  Private *pPVar21;
  FOpExecutionData *pFVar22;
  FProgramCache *pFVar23;
  uint uVar24;
  undefined1 *puVar25;
  FSharedReferencer<1> FVar26;
  undefined8 *puVar27;
  atomic<int> *paVar28;
  FCacheAddress *pFVar29;
  undefined1 *puVar30;
  ForElementType<FSetElementId> FVar31;
  FCacheAddress *pFVar32;
  FCacheAddress FVar33;
  ulonglong uVar34;
  uint uVar35;
  FCacheAddress *pFVar36;
  FWorkingMemoryManager *pFVar37;
  uint uVar38;
  FCacheAddress FVar39;
  FCacheAddress FVar40;
  longlong lVar41;
  FCacheAddress FVar42;
  longlong lVar43;
  bool bVar44;
  bool bVar45;
  undefined1 auStackY_288 [32];
  bool local_258;
  longlong local_250;
  FIdentityFunctor local_248 [8];
  FCacheAddress local_240;
  uint local_238;
  uint local_234;
  FCacheAddress local_230;
  FCacheAddress local_228;
  undefined1 local_220;
  undefined1 local_21f;
  undefined1 local_21e;
  undefined1 local_21d;
  undefined1 local_21c;
  <lambda_1> local_21b [3];
  longlong local_218;
  FWorkingMemoryManager *local_210;
  TArray<UE::Mutable::Private::Private::EBudgetBelowSearchFlags,TSizedDefaultAllocator<32>_>
  local_208;
  FCacheAddress local_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  uint local_1d8 [2];
  FCacheAddress local_1d0;
  uint local_1c8 [2];
  FCacheAddress local_1c0;
  FSharedReferencer<1> local_1b8;
  TArrayView<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FImage>,int>
  local_1b0;
  TArrayView<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FMesh>,int>
  local_1a0;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_190;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  undefined1 local_150 [8];
  FModel *local_148;
  undefined8 uStack_140;
  TSparseArray<unsigned_char,FDefaultSparseArrayAllocator> *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  undefined1 local_110 [8];
  FCacheAddress local_108;
  undefined4 local_100;
  FCacheAddress local_f8;
  ulong64 local_f0;
  undefined8 local_e8;
  FSharedReferencer<1> FStack_e0;
  longlong local_d8;
  long64 local_d0;
  FProgramCache *local_c8;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 local_80 [8];
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_288;
  bVar44 = -1 < CpuChannel->Enabled;
  local_210 = this;
  local_f0 = param_1;
  if (bVar44) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1479,"Mutable_EnsureBudgetBelow",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x5c7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1479);
  }
  if (this->BudgetBytes == 0) {
    local_258 = true;
  }
  else {
    lVar20 = GetCurrentMemoryBytes(this);
    lVar41 = lVar20 + param_1;
    local_258 = lVar41 <= this->BudgetBytes;
    local_218 = lVar41;
    if (this->BudgetBytes < lVar41) {
      bVar45 = -1 < CpuChannel->Enabled;
      if (bVar45) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1498,"Mutable_EnsureBudgetBelow_FreePooled",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                   ,0x5da);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1498);
      }
      iVar18 = (this->PooledImages).ArrayNum;
      lVar43 = local_218;
      while ((iVar18 != 0 && (lVar43 = lVar41, local_258 == false))) {
        this_00 = &this->PooledImages;
        if (((this->PooledImages).ArrayNum < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          uVar16 = (*pcVar9)();
          return (bool)uVar16;
        }
        plVar3 = (longlong *)(this_00->AllocatorInstance)._padding_;
        if ((*plVar3 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          uVar16 = (*pcVar9)();
          return (bool)uVar16;
        }
        iVar18 = (*(code *)**(undefined8 **)*plVar3)();
        lVar41 = lVar41 - iVar18;
        if (((this->PooledImages).ArrayNum < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          uVar16 = (*pcVar9)();
          return (bool)uVar16;
        }
        TArray<TSharedPtr<UE::Mutable::Private::FImage,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
        ::RemoveAtSwapImpl(this_00,0);
        Core::Private::
        ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->PooledImages).ArrayNum,
                   &(this->PooledImages).ArrayMax);
        iVar18 = (this->PooledImages).ArrayNum;
        lVar43 = lVar41;
        local_258 = lVar41 <= this->BudgetBytes;
      }
      local_218 = lVar43;
      if (bVar45) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (local_258 == false) {
      bVar45 = -1 < CpuChannel->Enabled;
      if (bVar45) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1512,"Mutable_EnsureBudgetBelow_FreeRoms",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                   ,0x5e8);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1512);
      }
      local_1e8.Data = (FScriptContainerElement *)0x0;
      local_1e0 = 0;
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0x200,&local_1e8,0,(int *)((longlong)&local_1e0 + 4));
      fVar10 = __real_42c80000;
      local_234 = (this->CachePerModel).ArrayNum;
      uVar34 = (ulonglong)(int)local_234;
      FVar42 = (FCacheAddress)(this->CachePerModel).AllocatorInstance._padding_;
      FVar33 = (FCacheAddress)(uVar34 * 0x40 + (longlong)FVar42);
      FVar39 = (FCacheAddress)((longlong)FVar42 + 0x20);
      local_230 = FVar33;
      while( true ) {
        local_240 = FVar39;
        local_228 = FVar42;
        if ((this->CachePerModel).ArrayNum != (int)uVar34) {
          local_220 = 0;
          `TCheckedPointerIterator<UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_220);
        }
        if (FVar42 == FVar33) break;
        local_1c0.At = 0;
        local_1c0.ExecutionIndex = 0;
        local_1c0.ExecutionOptions = '\0';
        local_1c0.Type = Full;
        SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
                  (&local_1b8,(FWeakReferencer<1> *)((longlong)FVar39 + -0x18));
        if (local_1b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          local_1c0 = *(FCacheAddress *)FVar42;
        }
        if (local_1c0 != (FCacheAddress)0x0) {
          if ((local_1c0 == (FCacheAddress)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            uVar16 = (*pcVar9)();
            return (bool)uVar16;
          }
          pPVar21 = FModel::GetPrivate((FModel *)local_1c0);
          if ((*(int *)FVar39 != (pPVar21->Program).Roms.ArrayNum) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ModelCache.RomWeights.Num() == Program.Roms.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                                  ,0x5f9,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            uVar16 = (*pcVar9)();
            return (bool)uVar16;
          }
          if (((pPVar21->Program).Roms.ArrayNum <
               *(int *)&(pPVar21->Program).LoadedMemTrackedRoms.field_0x8) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Program.LoadedMemTrackedRoms.GetMaxIndex() <= Program.Roms.Num()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                                  ,0x5fb,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            uVar16 = (*pcVar9)();
            return (bool)uVar16;
          }
          pTVar1 = &(pPVar21->Program).LoadedMemTrackedRoms;
          local_170.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)
               &(pPVar21->Program).LoadedMemTrackedRoms.field_0x10;
          local_170._padding_._0_4_ = 0;
          local_170._padding_._4_4_ = 1;
          local_170.UnvisitedBitMask = 0xffffffff;
          local_170.CurrentBitIndex = 0;
          local_170.BaseBitIndex = 0;
          if (*(int *)&(pPVar21->Program).LoadedMemTrackedRoms.field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
          }
          pFVar37 = local_210;
          local_130._padding_ = CONCAT44(local_170._padding_._4_4_,(undefined4)local_170._padding_);
          local_130.Array = local_170.Array;
          local_130.UnvisitedBitMask = local_170.UnvisitedBitMask;
          local_130.CurrentBitIndex = local_170.CurrentBitIndex;
          local_130.BaseBitIndex = local_170.BaseBitIndex;
          local_130._28_4_ = local_170._28_4_;
          FVar33 = local_230;
          this = local_210;
          local_138 = pTVar1;
          if (local_170.CurrentBitIndex < (local_170.Array)->NumBits) {
            do {
              iVar18 = local_130.CurrentBitIndex;
              uVar35 = (uint)~local_130.CurrentBitIndex >> 0x1f;
              uVar24 = 0;
              if (local_130.CurrentBitIndex < (pPVar21->Program).Roms.ArrayNum) {
                uVar24 = uVar35;
              }
              if ((uVar24 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar9 = (code *)swi(3);
                uVar16 = (*pcVar9)();
                return (bool)uVar16;
              }
              pFVar4 = (pPVar21->Program).Roms.AllocatorInstance.Data;
              lVar41 = (longlong)iVar18;
              uVar24 = 0;
              if (iVar18 < (pPVar21->Program).Roms.ArrayNum) {
                uVar24 = uVar35;
              }
              if ((uVar24 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar9 = (code *)swi(3);
                uVar16 = (*pcVar9)();
                return (bool)uVar16;
              }
              uVar24 = *(uint *)((pPVar21->Program).Roms.AllocatorInstance.Data + lVar41 * 4) >>
                       0x1e & 1;
              if (uVar24 == 0) {
                local_1c8[0] = iVar18;
                iVar19 = TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<unsigned_int>
                                   ((TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>,FDefaultSetAllocator>
                                     *)&(pPVar21->Program).ConstantImageLODsStreamed,iVar18,
                                    local_1c8);
LAB_14ab6d770:
                if (iVar19 == -1) goto LAB_14ab6d77a;
              }
              else {
                if (uVar24 == 1) {
                  local_1d8[0] = iVar18;
                  iVar19 = TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>,FDefaultSetAllocator>
                           ::FindIndexByHash<unsigned_int>
                                     ((TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>,FDefaultSetAllocator>
                                       *)&(pPVar21->Program).ConstantMeshesStreamed,iVar18,local_1d8
                                     );
                  goto LAB_14ab6d770;
                }
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                                    ,0x1cf,L"");
                if (bVar15) {
                  pcVar9 = (code *)swi(3);
                  uVar16 = (*pcVar9)();
                  return (bool)uVar16;
                }
LAB_14ab6d77a:
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Program.IsRomLoaded(RomIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                                    ,0x602,L"");
                if (bVar15) {
                  pcVar9 = (code *)swi(3);
                  uVar16 = (*pcVar9)();
                  return (bool)uVar16;
                }
              }
              if ((((byte)((uint)*(undefined4 *)(pFVar4 + lVar41 * 4) >> 0x1e) & 1) !=
                   *(byte *)(*(longlong *)local_138 + (longlong)local_130.CurrentBitIndex * 8)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Rom.ResourceType == (uint32)*Iter",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                                      ,0x603,L""), bVar15)) {
                pcVar9 = (code *)swi(3);
                uVar16 = (*pcVar9)();
                return (bool)uVar16;
              }
              FVar39 = local_240;
              if ((iVar18 < 0) ||
                 ((int)((FCacheAddress *)((longlong)local_240 + 0x18))->At <= iVar18)) {
LAB_14ab6d836:
                uVar24 = 0;
                if (iVar18 < *(int *)FVar39) {
                  uVar24 = uVar35;
                }
                if ((uVar24 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar16 = (*pcVar9)();
                  return (bool)uVar16;
                }
                FVar39 = *(FCacheAddress *)((longlong)local_240 + -0x10);
                uVar24 = 0;
                if (iVar18 < *(int *)local_240) {
                  uVar24 = uVar35;
                }
                if ((uVar24 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar16 = (*pcVar9)();
                  return (bool)uVar16;
                }
                uVar34 = *(ulonglong *)
                          (lVar41 * 0x10 + (longlong)*(FCacheAddress *)((longlong)local_240 + -0x10)
                          );
                uVar5 = pFVar37->RomTick;
                lVar41 = *(longlong *)(lVar41 * 0x10 + 8 + (longlong)FVar39);
                local_1f8 = local_1c0;
                iVar19 = (int)local_1e0;
                uStack_1f0 = iVar18;
                if ((int)local_1e0 == local_1e0._4_4_) {
                  iVar19 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&local_1e8,(int *)((longlong)&local_1e0 + 4));
                }
                FVar39.ExecutionIndex = (undefined2)uStack_1ec;
                FVar39.ExecutionOptions = uStack_1ec._2_1_;
                FVar39.Type = uStack_1ec._3_1_;
                FVar39.At = uStack_1f0;
                local_1e0 = CONCAT44(local_1e0._4_4_,iVar19 + 1);
                *(float *)(local_1e8.Data + (longlong)iVar19 * 0x18) =
                     (float)uVar34 * fVar10 - (float)(uVar5 - lVar41);
                *(FCacheAddress *)(local_1e8.Data + (longlong)iVar19 * 0x18 + 8) = local_1f8;
                ((FCacheAddress *)(local_1e8.Data + (longlong)iVar19 * 0x18 + 8))[1] = FVar39;
                FVar39 = local_240;
              }
              else {
                if ((iVar18 < 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  uVar16 = (*pcVar9)();
                  return (bool)uVar16;
                }
                if (*(short *)((longlong)*(FCacheAddress *)((longlong)FVar39 + 8) + lVar41 * 2) == 0
                   ) goto LAB_14ab6d836;
              }
              local_130.UnvisitedBitMask = local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
            } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
            uVar34 = (ulonglong)local_234;
            FVar33 = local_230;
            this = local_210;
            FVar42 = local_228;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8.ReferenceController);
        FVar42 = (FCacheAddress)((longlong)FVar42 + 0x40);
        FVar39 = (FCacheAddress)((longlong)FVar39 + 0x40);
      }
      AlgoImpl::
      HeapifyInternal<TTuple<float,_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow_::__l13::FRomRef>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow_::__l13::FRomRef>,_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow_::__l13::<lambda_1>_>_>
                ((TTuple<float,_public:_bool___cdecl_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow(unsigned___int64)_::_13_::FRomRef>
                  *)local_1e8.Data,(int)local_1e0,local_248[0],local_21b);
      do {
        if ((int)local_1e0 == 0) break;
        bVar15 = -1 < CpuChannel->Enabled;
        if (bVar15) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1563,"Mutable_EnsureBudgetBelow_UnloadRom",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                     ,0x61b);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1563);
        }
        local_150._0_4_ = 0;
        iVar18 = 0;
        local_148 = (FModel *)0x0;
        uStack_140 = 0;
        TArray<TTuple<float,`UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow'::__l13::FRomRef>,TSizedDefaultAllocator<32>_>
        ::
        HeapPop<_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow_::__l13::<lambda_1>_>
                  (&local_1e8,
                   (TTuple<float,_public:_bool___cdecl_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow(unsigned___int64)_::_13_::FRomRef>
                    *)local_150,local_21b,No);
        pPVar21 = FModel::GetPrivate(local_148);
        uVar24 = (uint)uStack_140;
        lVar41 = (longlong)(int)(uint)uStack_140;
        if ((-1 < (int)(uint)uStack_140) &&
           ((int)(uint)uStack_140 < *(int *)&(pPVar21->Program).LoadedMemTrackedRoms.field_0x28)) {
          puVar25 = *(undefined1 **)&(pPVar21->Program).LoadedMemTrackedRoms.field_0x20;
          if (puVar25 == (undefined1 *)0x0) {
            puVar25 = &(pPVar21->Program).LoadedMemTrackedRoms.field_0x10;
          }
          uVar35 = (uint)uStack_140;
          if ((int)(uint)uStack_140 < 0) {
            uVar35 = (uint)uStack_140 + 0x1f;
          }
          if ((*(uint *)(puVar25 + (longlong)((int)uVar35 >> 5) * 4) >> ((uint)uStack_140 & 0x1f) &
              1) != 0) {
            TSparseArray<unsigned_char,FDefaultSparseArrayAllocator>::RemoveAt
                      (&(pPVar21->Program).LoadedMemTrackedRoms,(uint)uStack_140,1);
          }
        }
        uVar35 = 0;
        if ((int)uVar24 < (pPVar21->Program).Roms.ArrayNum) {
          uVar35 = ~uVar24 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          uVar16 = (*pcVar9)();
          return (bool)uVar16;
        }
        uVar35 = *(uint *)((pPVar21->Program).Roms.AllocatorInstance.Data + lVar41 * 4) >> 0x1e & 1;
        if (uVar35 == 0) {
          local_180.Object = (FImage *)0x0;
          local_180.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
          ::RemoveAndCopyValue(&(pPVar21->Program).ConstantImageLODsStreamed,uVar24,&local_180);
          pFVar13 = local_180.Object;
          FVar26.ReferenceController = local_180.SharedReferenceCount.ReferenceController;
          if (local_180.Object != (FImage *)0x0) {
            if ((local_180.Object == (FImage *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar9 = (code *)swi(3);
              uVar16 = (*pcVar9)();
              return (bool)uVar16;
            }
            iVar18 = (**(code **)pFVar13->_padding_)(pFVar13);
            FVar26.ReferenceController = local_180.SharedReferenceCount.ReferenceController;
          }
LAB_14ab6dc29:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar26.ReferenceController);
        }
        else {
          if (uVar35 == 1) {
            local_190.Object = (FMesh *)0x0;
            local_190.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
            ::RemoveAndCopyValue(&(pPVar21->Program).ConstantMeshesStreamed,uVar24,&local_190);
            pFVar12 = local_190.Object;
            FVar26.ReferenceController = local_190.SharedReferenceCount.ReferenceController;
            if (local_190.Object != (FMesh *)0x0) {
              if ((local_190.Object == (FMesh *)0x0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar17)) {
                pcVar9 = (code *)swi(3);
                uVar16 = (*pcVar9)();
                return (bool)uVar16;
              }
              iVar18 = (**(code **)pFVar12->_padding_)(pFVar12);
              FVar26.ReferenceController = local_190.SharedReferenceCount.ReferenceController;
            }
            goto LAB_14ab6dc29;
          }
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                              ,0x1fb,L"");
          if (bVar17) {
            pcVar9 = (code *)swi(3);
            uVar16 = (*pcVar9)();
            return (bool)uVar16;
          }
        }
        lVar41 = this->BudgetBytes;
        lVar43 = local_218 - iVar18;
        local_258 = lVar43 <= lVar41;
        local_218 = lVar43;
        if (bVar15) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      } while (lVar41 < lVar43);
      if ((TTuple<float,_public:_bool___cdecl_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow(unsigned___int64)_::_13_::FRomRef>
           *)local_1e8.Data !=
          (TTuple<float,_public:_bool___cdecl_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow(unsigned___int64)_::_13_::FRomRef>
           *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
      if (bVar45) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (local_258 == false) {
        bVar45 = -1 < CpuChannel->Enabled;
        if (bVar45) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1579,"Mutable_EnsureBudgetBelow_FreeCached",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                     ,0x62b);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1579);
        }
        local_8c = 0x80;
        local_b8._0_8_ = (FScriptContainerElement *)0x0;
        local_b8._8_8_ = 0;
        local_98 = (ForElementType<unsigned_int>)0x0;
        local_90 = 0;
        local_84 = 0;
        local_78 = (ForElementType<FSetElementId>)0x0;
        local_70 = 0;
        local_88 = -1;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_b8,0x400);
        for (lVar41 = 0x3f; 0x40fUL >> lVar41 == 0; lVar41 = lVar41 + -1) {
        }
        iVar18 = 1 << ((byte)lVar41 & 0x1f);
        local_100 = (undefined4)lVar41;
        if ((local_70 == 0) || (local_70 < iVar18)) {
          local_70 = iVar18;
          TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
          ::Rehash((TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
                    *)local_b8);
        }
        local_234 = (this->LiveInstances).ArrayNum;
        uVar34 = (ulonglong)(int)local_234;
        FVar39 = (FCacheAddress)(this->LiveInstances).AllocatorInstance._padding_;
        FVar42 = (FCacheAddress)(uVar34 * 0x68 + (longlong)FVar39);
        local_228 = FVar42;
        bVar15 = local_258;
        while( true ) {
          uVar24 = 0;
          local_240 = FVar39;
          if ((this->LiveInstances).ArrayNum != (int)uVar34) {
            local_21f = 0;
            `TCheckedPointerIterator<UE::Mutable::Private::FLiveInstance,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_21f);
          }
          lVar41 = local_218;
          if (FVar39 == FVar42) goto LAB_14ab6eba9;
          if (*(FCacheAddress *)((longlong)FVar39 + 0x48) !=
              (FCacheAddress)(this->CurrentInstanceCache).Object) break;
LAB_14ab6eb8c:
          uVar34 = (ulonglong)local_234;
          FVar39 = (FCacheAddress)((longlong)FVar39 + 0x68);
        }
        bVar17 = -1 < CpuChannel->Enabled;
        if (bVar17) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1595,
                     "Mutable_EnsureBudgetBelow_FreeCached_GatherAndRemove_Other",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                     ,0x63b);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1595);
        }
        if (local_b8._8_4_ != local_84) {
          TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
                            *)local_b8);
          bVar15 = (longlong)local_b8._8_8_ < 0;
          local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
          if (bVar15) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
          }
          local_88 = -1;
          local_84 = 0;
          local_90 = 0;
        }
        local_238 = 0;
        if ((*(FCacheAddress *)((longlong)FVar39 + 0x48) == (FCacheAddress)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          uVar16 = (*pcVar9)();
          return (bool)uVar16;
        }
        FVar42 = *(FCacheAddress *)((longlong)FVar39 + 0x48);
        iVar18 = *(int *)((longlong)FVar42 + 0x100);
        FVar33 = *(FCacheAddress *)((longlong)FVar42 + 0xf0);
        FVar39 = (FCacheAddress)((longlong)FVar33 + (longlong)iVar18 * 0x18);
        local_1f8 = FVar39;
        while( true ) {
          local_230 = FVar33;
          if (*(int *)((longlong)FVar42 + 0x100) != iVar18) {
            local_21e = 0;
            `TCheckedPointerIterator<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FImage>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_21e);
          }
          if (FVar33 == FVar39) break;
          FVar40 = *(FCacheAddress *)((longlong)FVar33 + 8);
          if (FVar40 != (FCacheAddress)0x0) {
            uVar35 = ((uint)((ulonglong)FVar40 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar40 >> 4)) *
                     -0x7a143595;
            uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
            if (local_b8._8_4_ != local_84) {
              FVar31 = (ForElementType<FSetElementId>)local_80;
              if (local_78 != (ForElementType<FSetElementId>)0x0) {
                FVar31 = local_78;
              }
              uVar35 = *(uint *)((longlong)FVar31 +
                                (ulonglong)(local_70 - 1U & (uVar35 >> 0x10 ^ uVar35)) * 4);
              while (uVar35 != 0xffffffff) {
                pFVar29 = (FCacheAddress *)(local_b8._0_8_ + (longlong)(int)uVar35 * 0x10);
                if (*pFVar29 == FVar40) {
                  if (pFVar29 != (FCacheAddress *)0x0) goto LAB_14ab6e0ec;
                  break;
                }
                uVar35 = pFVar29[1].At;
              }
            }
            iVar19 = (*(code *)**(undefined8 **)FVar40)(FVar40);
            uVar24 = uVar24 + iVar19;
            local_108 = *(FCacheAddress *)((longlong)FVar33 + 8);
            local_258 = local_218 - (int)uVar24 <= this->BudgetBytes;
            local_238 = uVar24;
            TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
            ::Emplace<UE::Mutable::Private::FResource_const_*>
                      ((TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
                        *)local_b8,(FResource **)(local_110 + 4),(bool *)&local_108);
            FVar39 = *(FCacheAddress *)((longlong)FVar33 + 0x10);
            local_1d0 = *(FCacheAddress *)((longlong)FVar33 + 8);
            if (FVar39 == (FCacheAddress)0x0) {
              paVar28 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar28 = (atomic<int> *)((longlong)FVar39 + 8);
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
              LOCK();
              *paVar28 = (atomic<int>)((int)*paVar28 + 1);
              UNLOCK();
            }
            if (*(int *)&(this->CacheResources).field_0x10 !=
                *(int *)&(this->CacheResources).field_0x44) {
              if (FVar39 != (FCacheAddress)0x0) {
                LOCK();
                *paVar28 = (atomic<int>)((int)*paVar28 + 1);
                UNLOCK();
              }
              uVar24 = ((uint)((ulonglong)local_1d0 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_1d0 >> 4)) * -0x7a143595;
              uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FVar39);
              puVar25 = *(undefined1 **)&(this->CacheResources).field_0x50;
              puVar30 = &(this->CacheResources).field_0x48;
              if (puVar25 != (undefined1 *)0x0) {
                puVar30 = puVar25;
              }
              uVar35 = *(uint *)(puVar30 +
                                ((longlong)*(int *)&(this->CacheResources).field_0x60 - 1U &
                                (longlong)(int)(uVar24 >> 0x10 ^ uVar24)) * 4);
              while (FVar33 = local_230, uVar24 = local_238, uVar35 != 0xffffffff) {
                pFVar29 = (FCacheAddress *)
                          ((longlong)(int)uVar35 * 0x20 +
                          *(longlong *)&(this->CacheResources).field_0x0);
                if (FVar39 != (FCacheAddress)0x0) {
                  LOCK();
                  *(atomic<int> *)((longlong)FVar39 + 8) =
                       (atomic<int>)((int)*(atomic<int> *)((longlong)FVar39 + 8) + 1);
                  UNLOCK();
                }
                FVar33 = pFVar29[1];
                FVar40 = *pFVar29;
                if (FVar33 != (FCacheAddress)0x0) {
                  LOCK();
                  *(atomic<int> *)((longlong)FVar33 + 8) =
                       (atomic<int>)((int)*(atomic<int> *)((longlong)FVar33 + 8) + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)FVar33);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)FVar39);
                if (FVar40 == local_1d0) {
                  TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                  ::RemoveByIndex((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                                   *)&this->CacheResources,uVar35);
                  FVar33 = local_230;
                  uVar24 = local_238;
                  break;
                }
                uVar35 = pFVar29[3].At;
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)FVar39);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)FVar39);
            this = local_210;
            FVar39 = local_1f8;
LAB_14ab6e0ec:
            if (local_258 != false) break;
          }
          FVar33 = (FCacheAddress)((longlong)FVar33 + 0x18);
        }
        FVar39 = local_240;
        if (0 < (int)uVar24) {
          if ((*(FCacheAddress *)((longlong)local_240 + 0x48) == (FCacheAddress)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            uVar16 = (*pcVar9)();
            return (bool)uVar16;
          }
          FVar33 = *(FCacheAddress *)((longlong)FVar39 + 0x48);
          iVar18 = *(int *)((longlong)FVar33 + 0x100);
          FVar40 = *(FCacheAddress *)((longlong)FVar33 + 0xf0);
          FVar42 = (FCacheAddress)((longlong)FVar40 + (longlong)iVar18 * 0x18);
          local_1f8 = FVar42;
          while( true ) {
            if (*(int *)((longlong)FVar33 + 0x100) != iVar18) {
              local_21d = 0;
              `TCheckedPointerIterator<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FImage>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_21d);
            }
            this = local_210;
            uVar24 = local_238;
            if (FVar40 == FVar42) break;
            FVar6 = *(FCacheAddress *)((longlong)FVar40 + 8);
            uVar24 = ((uint)((ulonglong)FVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar6 >> 4)) *
                     -0x7a143595;
            uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
            if (local_b8._8_4_ == local_84) {
LAB_14ab6e31d:
              FVar40 = (FCacheAddress)((longlong)FVar40 + 0x18);
            }
            else {
              FVar31 = (ForElementType<FSetElementId>)local_80;
              if (local_78 != (ForElementType<FSetElementId>)0x0) {
                FVar31 = local_78;
              }
              uVar24 = *(uint *)((longlong)FVar31 +
                                (ulonglong)(local_70 - 1U & (uVar24 >> 0x10 ^ uVar24)) * 4);
              if (uVar24 == 0xffffffff) goto LAB_14ab6e31d;
              do {
                pFVar29 = (FCacheAddress *)(local_b8._0_8_ + (longlong)(int)uVar24 * 0x10);
                if (*pFVar29 == FVar6) {
                  if (pFVar29 != (FCacheAddress *)0x0) {
                    if ((*(FCacheAddress *)((longlong)FVar39 + 0x48) == (FCacheAddress)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar16 = (*pcVar9)();
                      return (bool)uVar16;
                    }
                    FVar42 = *(FCacheAddress *)((longlong)FVar39 + 0x48);
                    if ((FVar42 == (FCacheAddress)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar16 = (*pcVar9)();
                      return (bool)uVar16;
                    }
                    FVar6 = *(FCacheAddress *)((longlong)FVar39 + 0x48);
                    if (((*(ushort *)((longlong)FVar40 + 4) == 0) &&
                        (*(uchar *)((longlong)FVar40 + 6) == '\0')) &&
                       (*(EType *)((longlong)FVar40 + 7) == Full)) {
                      uVar24 = *(uint *)FVar40;
                      uVar35 = 0;
                      if ((int)uVar24 < *(int *)((longlong)FVar6 + 0x68)) {
                        uVar35 = ~uVar24 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        uVar16 = (*pcVar9)();
                        return (bool)uVar16;
                      }
                      pFVar22 = (FOpExecutionData *)
                                (*(longlong *)((longlong)FVar6 + 0x58) + (longlong)(int)uVar24 * 8);
                    }
                    else {
                      uVar24 = Private::GetTypeHash((FCacheAddress *)FVar40);
                      pFVar22 = TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                                ::FindOrAddImpl<UE::Mutable::Private::FCacheAddress_const_&>
                                          ((TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                                            *)((longlong)FVar6 + 0x70),uVar24,
                                           (FCacheAddress *)FVar40);
                    }
                    FProgramCache::SetUnused((FProgramCache *)FVar42,pFVar22);
                    FVar42 = local_1f8;
                  }
                  goto LAB_14ab6e31d;
                }
                uVar24 = pFVar29[1].At;
              } while (uVar24 != 0xffffffff);
              FVar40 = (FCacheAddress)((longlong)FVar40 + 0x18);
            }
          }
        }
        lVar41 = local_218 - (int)uVar24;
        if (local_258 == false) {
          local_238 = 0;
          local_218 = lVar41;
          if (local_b8._8_4_ != local_84) {
            TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
            ::UnhashElements((TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
                              *)local_b8);
            uVar14 = local_b8._8_8_;
            local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
            if ((longlong)uVar14 < 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
            }
            local_88 = -1;
            local_84 = 0;
            local_90 = 0;
          }
          FVar39 = local_240;
          if ((*(FCacheAddress *)((longlong)local_240 + 0x48) == (FCacheAddress)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            uVar16 = (*pcVar9)();
            return (bool)uVar16;
          }
          lVar41 = local_218;
          FVar42 = *(FCacheAddress *)((longlong)FVar39 + 0x48);
          iVar18 = *(int *)((longlong)FVar42 + 0x118);
          FVar33 = *(FCacheAddress *)((longlong)FVar42 + 0x108);
          FVar39 = (FCacheAddress)((longlong)FVar33 + (longlong)iVar18 * 0x18);
          bVar15 = false;
          local_1d0 = FVar39;
          while( true ) {
            local_230 = FVar33;
            if (*(int *)((longlong)FVar42 + 0x118) != iVar18) {
              local_21c = 0;
              `TCheckedPointerIterator<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FMesh>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_21c);
            }
            if (FVar33 == FVar39) break;
            FVar40 = *(FCacheAddress *)((longlong)FVar33 + 8);
            if (FVar40 != (FCacheAddress)0x0) {
              uVar24 = ((uint)((ulonglong)FVar40 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar40 >> 4))
                       * -0x7a143595;
              uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
              if (local_b8._8_4_ != local_84) {
                FVar31 = (ForElementType<FSetElementId>)local_80;
                if (local_78 != (ForElementType<FSetElementId>)0x0) {
                  FVar31 = local_78;
                }
                uVar24 = *(uint *)((longlong)FVar31 +
                                  (ulonglong)(local_70 - 1U & (uVar24 >> 0x10 ^ uVar24)) * 4);
                while (uVar24 != 0xffffffff) {
                  pFVar29 = (FCacheAddress *)(local_b8._0_8_ + (longlong)(int)uVar24 * 0x10);
                  if (*pFVar29 == FVar40) {
                    if (pFVar29 != (FCacheAddress *)0x0) goto LAB_14ab6e657;
                    break;
                  }
                  uVar24 = pFVar29[1].At;
                }
              }
              local_238 = (*(code *)**(undefined8 **)FVar40)(FVar40);
              local_f8 = *(FCacheAddress *)((longlong)FVar33 + 8);
              local_258 = lVar41 - (int)local_238 <= this->BudgetBytes;
              TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
              ::Emplace<UE::Mutable::Private::FResource_const_*>
                        ((TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
                          *)local_b8,(FResource **)local_110,(bool *)&local_f8);
              FVar39 = *(FCacheAddress *)((longlong)FVar33 + 0x10);
              local_1f8 = *(FCacheAddress *)((longlong)FVar33 + 8);
              if (FVar39 == (FCacheAddress)0x0) {
                paVar28 = (atomic<int> *)&DAT_00000008;
              }
              else {
                paVar28 = (atomic<int> *)((longlong)FVar39 + 8);
                LOCK();
                *paVar28 = (atomic<int>)((int)*paVar28 + 1);
                UNLOCK();
                LOCK();
                *paVar28 = (atomic<int>)((int)*paVar28 + 1);
                UNLOCK();
              }
              if (*(int *)&(this->CacheResources).field_0x10 !=
                  *(int *)&(this->CacheResources).field_0x44) {
                if (FVar39 != (FCacheAddress)0x0) {
                  LOCK();
                  *paVar28 = (atomic<int>)((int)*paVar28 + 1);
                  UNLOCK();
                }
                uVar24 = ((uint)((ulonglong)local_1f8 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)local_1f8 >> 4)) * -0x7a143595;
                uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)FVar39);
                puVar25 = *(undefined1 **)&(this->CacheResources).field_0x50;
                puVar30 = &(this->CacheResources).field_0x48;
                if (puVar25 != (undefined1 *)0x0) {
                  puVar30 = puVar25;
                }
                uVar24 = *(uint *)(puVar30 +
                                  ((longlong)*(int *)&(this->CacheResources).field_0x60 - 1U &
                                  (longlong)(int)(uVar24 >> 0x10 ^ uVar24)) * 4);
                while (FVar33 = local_230, uVar24 != 0xffffffff) {
                  pFVar29 = (FCacheAddress *)
                            ((longlong)(int)uVar24 * 0x20 +
                            *(longlong *)&(this->CacheResources).field_0x0);
                  if (FVar39 != (FCacheAddress)0x0) {
                    LOCK();
                    *(atomic<int> *)((longlong)FVar39 + 8) =
                         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar39 + 8) + 1);
                    UNLOCK();
                  }
                  FVar33 = pFVar29[1];
                  FVar40 = *pFVar29;
                  if (FVar33 != (FCacheAddress)0x0) {
                    LOCK();
                    *(atomic<int> *)((longlong)FVar33 + 8) =
                         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar33 + 8) + 1);
                    UNLOCK();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)FVar33);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)FVar39);
                  if (FVar40 == local_1f8) {
                    TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                    ::RemoveByIndex((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                                     *)&this->CacheResources,uVar24);
                    FVar33 = local_230;
                    break;
                  }
                  uVar24 = pFVar29[3].At;
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FVar39);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FVar39);
              FVar39 = local_1d0;
              bVar15 = local_258;
LAB_14ab6e657:
              if (bVar15) break;
            }
            FVar33 = (FCacheAddress)((longlong)FVar33 + 0x18);
            this = local_210;
          }
          FVar39 = local_240;
          if (0 < (int)local_238) {
            if ((*(FCacheAddress *)((longlong)local_240 + 0x48) == (FCacheAddress)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              uVar16 = (*pcVar9)();
              return (bool)uVar16;
            }
            FVar42 = *(FCacheAddress *)((longlong)FVar39 + 0x48);
            iVar18 = *(int *)((longlong)FVar42 + 0x118);
            pFVar36 = *(FCacheAddress **)((longlong)FVar42 + 0x108);
            pFVar29 = pFVar36 + (longlong)iVar18 * 3;
LAB_14ab6e6d8:
            if (*(int *)((longlong)FVar42 + 0x118) != iVar18) {
              local_248[0] = (FIdentityFunctor)0x0;
              `TCheckedPointerIterator<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FMesh>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_248);
            }
            if (pFVar36 != pFVar29) {
              FVar33 = pFVar36[1];
              uVar24 = ((uint)((ulonglong)FVar33 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar33 >> 4))
                       * -0x7a143595;
              uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
              if (local_b8._8_4_ == local_84) {
LAB_14ab6eb43:
                pFVar36 = pFVar36 + 3;
              }
              else {
                FVar31 = (ForElementType<FSetElementId>)local_80;
                if (local_78 != (ForElementType<FSetElementId>)0x0) {
                  FVar31 = local_78;
                }
                uVar24 = *(uint *)((longlong)FVar31 +
                                  (ulonglong)(local_70 - 1U & (uVar24 >> 0x10 ^ uVar24)) * 4);
                if (uVar24 == 0xffffffff) goto LAB_14ab6eb43;
                do {
                  pFVar32 = (FCacheAddress *)(local_b8._0_8_ + (longlong)(int)uVar24 * 0x10);
                  if (*pFVar32 == FVar33) {
                    if (pFVar32 == (FCacheAddress *)0x0) goto LAB_14ab6eb43;
                    if ((*(FCacheAddress *)((longlong)FVar39 + 0x48) == (FCacheAddress)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar16 = (*pcVar9)();
                      return (bool)uVar16;
                    }
                    FVar33 = *(FCacheAddress *)((longlong)FVar39 + 0x48);
                    if ((FVar33 == (FCacheAddress)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar16 = (*pcVar9)();
                      return (bool)uVar16;
                    }
                    FVar39 = *(FCacheAddress *)((longlong)FVar39 + 0x48);
                    if (((pFVar36->ExecutionIndex == 0) && (pFVar36->ExecutionOptions == '\0')) &&
                       (pFVar36->Type == Full)) {
                      uVar24 = pFVar36->At;
                      uVar35 = 0;
                      if ((int)uVar24 < *(int *)((longlong)FVar39 + 0x68)) {
                        uVar35 = ~uVar24 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        uVar16 = (*pcVar9)();
                        return (bool)uVar16;
                      }
                      pFVar22 = (FOpExecutionData *)
                                (*(longlong *)((longlong)FVar39 + 0x58) + (longlong)(int)uVar24 * 8)
                      ;
                    }
                    else {
                      uVar24 = pFVar36->At;
                      uVar24 = (uint)pFVar36->ExecutionIndex +
                               uVar24 * 0x40 + (uVar24 >> 2) + 0x9e3779b9 ^ uVar24;
                      uVar24 = (uVar24 >> 2) +
                               (uint)pFVar36->ExecutionOptions + uVar24 * 0x40 + -0x61c88647 ^
                               uVar24;
                      pFVar22 = TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                                ::FindOrAddImpl<UE::Mutable::Private::FCacheAddress_const_&>
                                          ((TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                                            *)((longlong)FVar39 + 0x70),
                                           (uVar24 >> 2) +
                                           (uint)pFVar36->Type + uVar24 * 0x40 + -0x61c88647 ^
                                           uVar24,pFVar36);
                    }
                    uVar24 = (pFVar22->field5_0x4).DataTypeIndex;
                    lVar41 = (longlong)(int)uVar24;
                    pFVar22->IsValueValid = '\0';
                    FVar39 = local_240;
                    if (uVar24 == 0) goto LAB_14ab6eb43;
                    if ((PhysicsAsset < pFVar22->DataType) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("uint8(Data.DataType) < uint8(EDataType::Count)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                                            ,0x242,L""), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      uVar16 = (*pcVar9)();
                      return (bool)uVar16;
                    }
                    EVar2 = pFVar22->DataType;
                    if (EVar2 == Image) {
                      uVar35 = 0;
                      if ((int)uVar24 < *(int *)((longlong)FVar33 + 0x100)) {
                        uVar35 = ~uVar24 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        uVar16 = (*pcVar9)();
                        return (bool)uVar16;
                      }
                      TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator=
                                ((TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)
                                 (*(longlong *)((longlong)FVar33 + 0xf0) + (lVar41 * 3 + 1) * 8),
                                 (FNullTag *)0x0);
                      FVar39 = local_240;
                      goto LAB_14ab6eb43;
                    }
                    if (EVar2 == Mesh) {
                      uVar35 = 0;
                      if ((int)uVar24 < *(int *)((longlong)FVar33 + 0x118)) {
                        uVar35 = ~uVar24 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        uVar16 = (*pcVar9)();
                        return (bool)uVar16;
                      }
                      TSharedPtr<UE::Mutable::Private::FMesh_const_,1>::operator=
                                ((TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)
                                 (*(longlong *)((longlong)FVar33 + 0x108) + (lVar41 * 3 + 1) * 8),
                                 (FNullTag *)0x0);
                      pFVar36 = pFVar36 + 3;
                      FVar39 = local_240;
                    }
                    else if (EVar2 == Instance) {
                      uVar35 = 0;
                      if ((int)uVar24 < *(int *)((longlong)FVar33 + 0x148)) {
                        uVar35 = ~uVar24 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        uVar16 = (*pcVar9)();
                        return (bool)uVar16;
                      }
                      TSharedPtr<UE::Mutable::Private::FInstance_const_,1>::operator=
                                ((TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)
                                 (lVar41 * 0x10 + *(longlong *)((longlong)FVar33 + 0x138)),
                                 (FNullTag *)0x0);
                      pFVar36 = pFVar36 + 3;
                      FVar39 = local_240;
                    }
                    else {
                      FVar39 = local_240;
                      if (EVar2 != ExtensionData) goto LAB_14ab6eb43;
                      uVar35 = 0;
                      if ((int)uVar24 < *(int *)((longlong)FVar33 + 400)) {
                        uVar35 = ~uVar24 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        uVar16 = (*pcVar9)();
                        return (bool)uVar16;
                      }
                      puVar27 = (undefined8 *)
                                (lVar41 * 0x10 + *(longlong *)((longlong)FVar33 + 0x180));
                      local_e8 = 0;
                      FStack_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                      if (puVar27 != &local_e8) {
                        *puVar27 = 0;
                        SharedPointerInternals::FSharedReferencer<1>::operator=
                                  ((FSharedReferencer<1> *)(puVar27 + 1),&FStack_e0);
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(FStack_e0.ReferenceController);
                      pFVar36 = pFVar36 + 3;
                      FVar39 = local_240;
                    }
                    goto LAB_14ab6e6d8;
                  }
                  uVar24 = pFVar32[1].At;
                } while (uVar24 != 0xffffffff);
                pFVar36 = pFVar36 + 3;
              }
              goto LAB_14ab6e6d8;
            }
          }
          lVar41 = local_218 - (int)local_238;
          if (local_258 == false) {
            FVar42 = local_228;
            this = local_210;
            local_218 = lVar41;
            bVar15 = local_258;
            if (bVar17) {
              FCpuProfilerTrace::OutputEndEvent();
              FVar42 = local_228;
              this = local_210;
            }
            goto LAB_14ab6eb8c;
          }
        }
        local_218 = lVar41;
        bVar15 = local_258;
        if (bVar17) {
          FCpuProfilerTrace::OutputEndEvent();
        }
LAB_14ab6eba9:
        local_258 = bVar15;
        local_70 = 0;
        if (local_78 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_78);
        }
        TSparseArray<TSparseSetElement<UE::Mutable::Private::FResource_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<UE::Mutable::Private::FResource_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<UE::Mutable::Private::FResource_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_b8);
        if (bVar45) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        pFVar37 = local_210;
        if (local_258 == false) {
          if ((local_210->CurrentInstanceCache).Object != (FProgramCache *)0x0) {
            bVar45 = -1 < CpuChannel->Enabled;
            if (bVar45) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId1686,
                         "Mutable_EnsureBudgetBelow_FreeCached_Current",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                         ,0x696);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1686);
            }
            local_d0 = pFVar37->BudgetBytes;
            local_c8 = (pFVar37->CurrentInstanceCache).Object;
            local_d8 = lVar41;
            if ((local_c8 == (FProgramCache *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              uVar16 = (*pcVar9)();
              return (bool)uVar16;
            }
            pFVar23 = (pFVar37->CurrentInstanceCache).Object;
            uVar24 = (pFVar23->MeshResults).ArrayNum;
            if ((pFVar23 == (FProgramCache *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              uVar16 = (*pcVar9)();
              return (bool)uVar16;
            }
            uVar35 = (((pFVar37->CurrentInstanceCache).Object)->ImageResults).ArrayNum;
            local_208.ArrayNum = 0;
            local_208.ArrayMax = 0;
            if ((int)uVar24 < (int)uVar35) {
              uVar24 = uVar35;
            }
            local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_234 = uVar24;
            if ((int)uVar24 < 1) {
              if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
                Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
              }
            }
            else {
              Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar24,&local_208.AllocatorInstance,&local_208.ArrayNum,
                         &local_208.ArrayMax);
            }
            memset(local_208.AllocatorInstance.Data,0,(longlong)(int)uVar24);
            pFVar23 = TSharedPtr<UE::Mutable::Private::FProgramCache,1>::operator->
                                (&pFVar37->CurrentInstanceCache);
            iVar18 = (pFVar23->ImageResults).ArrayNum;
            local_1b0.DataPtr =
                 (TResourceResult<UE::Mutable::Private::FImage> *)
                 (pFVar23->ImageResults).AllocatorInstance._padding_;
            if ((iVar18 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              uVar16 = (*pcVar9)();
              return (bool)uVar16;
            }
            local_1b0.ArrayNum = iVar18;
            uVar35 = `UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow'::__l121::
                     <lambda_2>::
                     operator()<TArrayView<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FImage>,int>_>
                               (&local_d8,&local_1b0,&local_208);
            local_240.At = uVar35;
            if (0 < (int)uVar35) {
              bVar15 = -1 < CpuChannel->Enabled;
              if (bVar15) {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId1789,
                           "Mutable_EnsureBudgetBelow_FreeCached_Current_FreeResources",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                           ,0x6fd);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1789);
              }
              pFVar11 = local_210;
              local_238 = 0;
              if (0 < iVar18) {
                local_230.At = 0;
                local_230.ExecutionIndex = 0;
                local_230.ExecutionOptions = '\0';
                local_230.Type = Full;
                local_250 = 0;
                do {
                  FVar39 = local_230;
                  uVar24 = local_238;
                  uVar38 = ~local_238;
                  uVar35 = 0;
                  if ((int)local_238 < local_208.ArrayNum) {
                    uVar35 = uVar38 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar9 = (code *)swi(3);
                    uVar16 = (*pcVar9)();
                    return (bool)uVar16;
                  }
                  if (local_208.AllocatorInstance.Data[(longlong)FVar39] ==
                      (FScriptContainerElement)0xc) {
                    local_228 = (FCacheAddress)&pFVar11->CacheResources;
                    uVar35 = 0;
                    if ((int)uVar24 < local_1b0.ArrayNum) {
                      uVar35 = uVar38 >> 0x1f;
                    }
                    FVar39 = local_228;
                    if ((uVar35 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), FVar39 = local_228, bVar17)) {
                      pcVar9 = (code *)swi(3);
                      uVar16 = (*pcVar9)();
                      return (bool)uVar16;
                    }
                    pTVar7 = *(TReferenceControllerBase<1> **)
                              ((longlong)
                               &((local_1b0.DataPtr)->Value).SharedReferenceCount.
                                ReferenceController + local_250);
                    local_1f8 = *(FCacheAddress *)
                                 ((longlong)&((local_1b0.DataPtr)->Value).Object + local_250);
                    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
                      paVar28 = (atomic<int> *)&DAT_00000008;
                    }
                    else {
                      paVar28 = &pTVar7->SharedReferenceCount;
                      LOCK();
                      *paVar28 = (atomic<int>)((int)*paVar28 + 1);
                      UNLOCK();
                      LOCK();
                      *paVar28 = (atomic<int>)((int)*paVar28 + 1);
                      UNLOCK();
                    }
                    local_228 = FVar39;
                    if (((FCacheAddress *)((longlong)FVar39 + 0x10))->At !=
                        *(uint *)((longlong)FVar39 + 0x44)) {
                      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        *paVar28 = (atomic<int>)((int)*paVar28 + 1);
                        UNLOCK();
                      }
                      uVar24 = ((uint)((ulonglong)local_1f8 >> 0x14) & 0xffff ^
                               (uint)((ulonglong)local_1f8 >> 4)) * -0x7a143595;
                      uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar7);
                      FVar42 = (FCacheAddress)((longlong)FVar39 + 0x48);
                      if (*(FCacheAddress *)((longlong)FVar39 + 0x50) != (FCacheAddress)0x0) {
                        FVar42 = *(FCacheAddress *)((longlong)FVar39 + 0x50);
                      }
                      uVar35 = *(uint *)((longlong)FVar42 +
                                        ((longlong)*(int *)&(pFVar11->CacheResources).field_0x60 -
                                         1U & (longlong)(int)(uVar24 >> 0x10 ^ uVar24)) * 4);
                      while (uVar24 = local_238, uVar35 != 0xffffffff) {
                        pFVar29 = (FCacheAddress *)
                                  ((longlong)(int)uVar35 * 0x20 + (longlong)*(FCacheAddress *)FVar39
                                  );
                        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
                          LOCK();
                          pTVar7->SharedReferenceCount =
                               (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
                          UNLOCK();
                        }
                        FVar39 = pFVar29[1];
                        FVar42 = *pFVar29;
                        if (FVar39 != (FCacheAddress)0x0) {
                          LOCK();
                          *(atomic<int> *)((longlong)FVar39 + 8) =
                               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar39 + 8) + 1);
                          UNLOCK();
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)FVar39);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar7);
                        if (FVar42 == local_1f8) {
                          TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                          ::RemoveByIndex((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                                           *)local_228,uVar35);
                          uVar24 = local_238;
                          break;
                        }
                        FVar39 = local_228;
                        uVar35 = pFVar29[3].At;
                      }
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar7);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar7);
                    FVar39 = local_230;
                  }
                  uVar35 = 0;
                  if ((int)uVar24 < local_208.ArrayNum) {
                    uVar35 = ~uVar24 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar9 = (code *)swi(3);
                    uVar16 = (*pcVar9)();
                    return (bool)uVar16;
                  }
                  if (((byte)local_208.AllocatorInstance.Data[(longlong)FVar39] & 6) == 4) {
                    if (((pFVar11->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar17)) {
                      pcVar9 = (code *)swi(3);
                      uVar16 = (*pcVar9)();
                      return (bool)uVar16;
                    }
                    pFVar23 = (pFVar11->CurrentInstanceCache).Object;
                    if ((pFVar23 == (FProgramCache *)0x0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar17)) {
                      pcVar9 = (code *)swi(3);
                      uVar16 = (*pcVar9)();
                      return (bool)uVar16;
                    }
                    pFVar8 = (pFVar11->CurrentInstanceCache).Object;
                    uVar35 = 0;
                    if ((int)uVar24 < local_1b0.ArrayNum) {
                      uVar35 = ~uVar24 >> 0x1f;
                    }
                    if ((uVar35 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar17)) {
                      pcVar9 = (code *)swi(3);
                      uVar16 = (*pcVar9)();
                      return (bool)uVar16;
                    }
                    pFVar29 = (FCacheAddress *)
                              ((longlong)&((local_1b0.DataPtr)->OpAddress).At + local_250);
                    if (((pFVar29->ExecutionIndex == 0) && (pFVar29->ExecutionOptions == '\0')) &&
                       (pFVar29->Type == Full)) {
                      uVar35 = pFVar29->At;
                      uVar38 = 0;
                      if ((int)uVar35 < (pFVar8->OpExecutionData).m_index0.ArrayNum) {
                        uVar38 = ~uVar35 >> 0x1f;
                      }
                      if ((uVar38 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar9 = (code *)swi(3);
                        uVar16 = (*pcVar9)();
                        return (bool)uVar16;
                      }
                      pFVar22 = (FOpExecutionData *)
                                ((pFVar8->OpExecutionData).m_index0.AllocatorInstance._padding_ +
                                (longlong)(int)uVar35 * 8);
                    }
                    else {
                      uVar35 = pFVar29->At;
                      uVar35 = pFVar29->ExecutionIndex + 0x9e3779b9 + uVar35 * 0x40 + (uVar35 >> 2)
                               ^ uVar35;
                      uVar35 = (uVar35 >> 2) +
                               pFVar29->ExecutionOptions + 0x9e3779b9 + uVar35 * 0x40 ^ uVar35;
                      pFVar22 = TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                                ::FindOrAddImpl<UE::Mutable::Private::FCacheAddress_const_&>
                                          ((TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                                            *)&(pFVar8->OpExecutionData).m_otherIndex,
                                           (uVar35 >> 2) +
                                           pFVar29->Type + 0x9e3779b9 + uVar35 * 0x40 ^ uVar35,
                                           pFVar29);
                    }
                    FProgramCache::SetUnused(pFVar23,pFVar22);
                    FVar39 = local_230;
                  }
                  local_238 = uVar24 + 1;
                  local_230 = (FCacheAddress)((longlong)FVar39 + 1);
                  local_250 = local_250 + 0x18;
                } while ((longlong)local_230 < (longlong)iVar18);
                pFVar37 = local_210;
                uVar35 = local_240.At;
              }
              uVar24 = local_234;
              if (bVar15) {
                FCpuProfilerTrace::OutputEndEvent();
                uVar24 = local_234;
              }
            }
            local_218 = local_218 - (int)uVar35;
            local_258 = local_218 <= pFVar37->BudgetBytes;
            if (pFVar37->BudgetBytes < local_218) {
              memset(local_208.AllocatorInstance.Data,0,(longlong)(int)uVar24);
              if (((pFVar37->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar15)) {
                pcVar9 = (code *)swi(3);
                uVar16 = (*pcVar9)();
                return (bool)uVar16;
              }
              pFVar23 = (pFVar37->CurrentInstanceCache).Object;
              iVar18 = (pFVar23->MeshResults).ArrayNum;
              local_1a0.DataPtr =
                   (TResourceResult<UE::Mutable::Private::FMesh> *)
                   (pFVar23->MeshResults).AllocatorInstance._padding_;
              if ((iVar18 < 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar15)) {
                pcVar9 = (code *)swi(3);
                uVar16 = (*pcVar9)();
                return (bool)uVar16;
              }
              local_1a0.ArrayNum = iVar18;
              uVar24 = `UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow'::__l121::
                       <lambda_2>::
                       operator()<TArrayView<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FMesh>,int>_>
                                 (&local_d8,&local_1a0,&local_208);
              local_240.At = uVar24;
              if (0 < (int)uVar24) {
                bVar15 = -1 < CpuChannel->Enabled;
                if (bVar15) {
                  FCpuProfilerTrace::GetOrCreateSpecId
                            (&DAT_1552ccbd4,
                             "Mutable_EnsureBudgetBelow_FreeCached_Current_FreeResources",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                             ,0x71d);
                  FCpuProfilerTrace::OutputBeginEvent(DAT_1552ccbd4);
                }
                pFVar11 = local_210;
                local_234 = 0;
                if (0 < iVar18) {
                  local_228.At = 0;
                  local_228.ExecutionIndex = 0;
                  local_228.ExecutionOptions = '\0';
                  local_228.Type = Full;
                  local_250 = 0;
                  do {
                    FVar39 = local_228;
                    uVar24 = local_234;
                    uVar38 = ~local_234;
                    uVar35 = 0;
                    if ((int)local_234 < local_208.ArrayNum) {
                      uVar35 = uVar38 >> 0x1f;
                    }
                    if ((uVar35 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar9 = (code *)swi(3);
                      uVar16 = (*pcVar9)();
                      return (bool)uVar16;
                    }
                    if (local_208.AllocatorInstance.Data[(longlong)FVar39] ==
                        (FScriptContainerElement)0xc) {
                      local_230 = (FCacheAddress)&pFVar11->CacheResources;
                      uVar35 = 0;
                      if ((int)uVar24 < local_1a0.ArrayNum) {
                        uVar35 = uVar38 >> 0x1f;
                      }
                      FVar39 = local_230;
                      if ((uVar35 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), FVar39 = local_230, bVar17)) {
                        pcVar9 = (code *)swi(3);
                        uVar16 = (*pcVar9)();
                        return (bool)uVar16;
                      }
                      pTVar7 = *(TReferenceControllerBase<1> **)
                                ((longlong)
                                 &((local_1a0.DataPtr)->Value).SharedReferenceCount.
                                  ReferenceController + local_250);
                      local_1f8 = *(FCacheAddress *)
                                   ((longlong)&((local_1a0.DataPtr)->Value).Object + local_250);
                      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
                        paVar28 = (atomic<int> *)&DAT_00000008;
                      }
                      else {
                        paVar28 = &pTVar7->SharedReferenceCount;
                        LOCK();
                        *paVar28 = (atomic<int>)((int)*paVar28 + 1);
                        UNLOCK();
                        LOCK();
                        *paVar28 = (atomic<int>)((int)*paVar28 + 1);
                        UNLOCK();
                      }
                      local_230 = FVar39;
                      if (((FCacheAddress *)((longlong)FVar39 + 0x10))->At !=
                          *(uint *)((longlong)FVar39 + 0x44)) {
                        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
                          LOCK();
                          *paVar28 = (atomic<int>)((int)*paVar28 + 1);
                          UNLOCK();
                        }
                        uVar24 = ((uint)((ulonglong)local_1f8 >> 0x14) & 0xffff ^
                                 (uint)((ulonglong)local_1f8 >> 4)) * -0x7a143595;
                        uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar7);
                        FVar42 = (FCacheAddress)((longlong)FVar39 + 0x48);
                        if (*(FCacheAddress *)((longlong)FVar39 + 0x50) != (FCacheAddress)0x0) {
                          FVar42 = *(FCacheAddress *)((longlong)FVar39 + 0x50);
                        }
                        uVar35 = *(uint *)((longlong)FVar42 +
                                          ((longlong)*(int *)&(pFVar11->CacheResources).field_0x60 -
                                           1U & (longlong)(int)(uVar24 >> 0x10 ^ uVar24)) * 4);
                        while (uVar24 = local_234, uVar35 != 0xffffffff) {
                          pFVar29 = (FCacheAddress *)
                                    ((longlong)(int)uVar35 * 0x20 +
                                    (longlong)*(FCacheAddress *)FVar39);
                          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
                            LOCK();
                            pTVar7->SharedReferenceCount =
                                 (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
                            UNLOCK();
                          }
                          FVar39 = pFVar29[1];
                          FVar42 = *pFVar29;
                          if (FVar39 != (FCacheAddress)0x0) {
                            LOCK();
                            *(atomic<int> *)((longlong)FVar39 + 8) =
                                 (atomic<int>)((int)*(atomic<int> *)((longlong)FVar39 + 8) + 1);
                            UNLOCK();
                          }
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)FVar39);
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline(pTVar7);
                          if (FVar42 == local_1f8) {
                            TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                            ::RemoveByIndex((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                                             *)local_230,uVar35);
                            uVar24 = local_234;
                            break;
                          }
                          FVar39 = local_230;
                          uVar35 = pFVar29[3].At;
                        }
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar7);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar7);
                      FVar39 = local_228;
                    }
                    uVar35 = 0;
                    if ((int)uVar24 < local_208.ArrayNum) {
                      uVar35 = ~uVar24 >> 0x1f;
                    }
                    if ((uVar35 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar9 = (code *)swi(3);
                      uVar16 = (*pcVar9)();
                      return (bool)uVar16;
                    }
                    if (((byte)local_208.AllocatorInstance.Data[(longlong)FVar39] & 6) == 4) {
                      if (((pFVar11->CurrentInstanceCache).Object == (FProgramCache *)0x0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar17)) {
                        pcVar9 = (code *)swi(3);
                        uVar16 = (*pcVar9)();
                        return (bool)uVar16;
                      }
                      pFVar23 = (pFVar11->CurrentInstanceCache).Object;
                      if ((pFVar23 == (FProgramCache *)0x0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar17)) {
                        pcVar9 = (code *)swi(3);
                        uVar16 = (*pcVar9)();
                        return (bool)uVar16;
                      }
                      pFVar8 = (pFVar11->CurrentInstanceCache).Object;
                      uVar35 = 0;
                      if ((int)uVar24 < local_1a0.ArrayNum) {
                        uVar35 = ~uVar24 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar17)) {
                        pcVar9 = (code *)swi(3);
                        uVar16 = (*pcVar9)();
                        return (bool)uVar16;
                      }
                      pFVar29 = (FCacheAddress *)
                                ((longlong)&((local_1a0.DataPtr)->OpAddress).At + local_250);
                      if (((pFVar29->ExecutionIndex == 0) && (pFVar29->ExecutionOptions == '\0')) &&
                         (pFVar29->Type == Full)) {
                        uVar35 = pFVar29->At;
                        uVar38 = 0;
                        if ((int)uVar35 < (pFVar8->OpExecutionData).m_index0.ArrayNum) {
                          uVar38 = ~uVar35 >> 0x1f;
                        }
                        if ((uVar38 == 0) &&
                           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar17)) {
                          pcVar9 = (code *)swi(3);
                          uVar16 = (*pcVar9)();
                          return (bool)uVar16;
                        }
                        pFVar22 = (FOpExecutionData *)
                                  ((pFVar8->OpExecutionData).m_index0.AllocatorInstance._padding_ +
                                  (longlong)(int)uVar35 * 8);
                        FVar39 = local_228;
                      }
                      else {
                        uVar35 = pFVar29->At;
                        uVar35 = pFVar29->ExecutionIndex + 0x9e3779b9 +
                                 uVar35 * 0x40 + (uVar35 >> 2) ^ uVar35;
                        uVar35 = (uVar35 >> 2) +
                                 pFVar29->ExecutionOptions + 0x9e3779b9 + uVar35 * 0x40 ^ uVar35;
                        pFVar22 = TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                                  ::FindOrAddImpl<UE::Mutable::Private::FCacheAddress_const_&>
                                            ((TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
                                              *)&(pFVar8->OpExecutionData).m_otherIndex,
                                             (uint)pFVar29->Type + uVar35 * 0x40 +
                                             (uVar35 >> 2) + 0x9e3779b9 ^ uVar35,pFVar29);
                      }
                      FProgramCache::SetUnused(pFVar23,pFVar22);
                    }
                    local_234 = uVar24 + 1;
                    local_228 = (FCacheAddress)((longlong)FVar39 + 1);
                    local_250 = local_250 + 0x18;
                  } while ((longlong)local_228 < (longlong)iVar18);
                  pFVar37 = local_210;
                  uVar24 = local_240.At;
                }
                if (bVar15) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
              }
              local_218 = local_218 - (int)uVar24;
              local_258 = local_218 <= pFVar37->BudgetBytes;
            }
            if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.AllocatorInstance.Data);
            }
            if (bVar45) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (local_258 != false) goto LAB_14ab6f82f;
          }
          lVar41 = local_218 - pFVar37->BudgetBytes;
          if (pFVar37->BudgetExcessBytes < lVar41) {
            pFVar37->BudgetExcessBytes = lVar41;
            if (4 < (byte)LogMutableCore._0_1_) {
              Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
            }
            if (bEnableDetailedMemoryBudgetExceededLogging != false) {
              LogWorkingMemory(pFVar37,(CodeRunner *)0x0);
            }
          }
        }
      }
    }
  }
LAB_14ab6f82f:
  if (bVar44) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_258;
}

// FindModelCache @ 14ab70300

FModelCacheEntry * __thiscall
UE::Mutable::Private::FWorkingMemoryManager::FindModelCache
          (FWorkingMemoryManager *this,FModel *param_1)

{
  int iVar1;
  FModel *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  FModelCacheEntry *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FModelCacheEntry *pFVar9;
  undefined1 local_res8 [8];
  
  if ((param_1 == (FModel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InModel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                         ,0x566,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FModelCacheEntry *)(*pcVar3)();
    return pFVar7;
  }
  iVar1 = (this->CachePerModel).ArrayNum;
  pFVar7 = (FModelCacheEntry *)(this->CachePerModel).AllocatorInstance._padding_;
  pFVar9 = pFVar7 + iVar1;
  do {
    if ((this->CachePerModel).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) {
      return (FModelCacheEntry *)0x0;
    }
    pTVar8 = (pFVar7->Model).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar8->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ab703a0;
        }
        LOCK();
        aVar6 = pTVar8->SharedReferenceCount;
        bVar5 = aVar4 == aVar6;
        if (bVar5) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar5);
      pFVar2 = (pFVar7->Model).Object;
      if ((pFVar2 != (FModel *)0x0) && (pFVar2 == param_1)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        return pFVar7;
      }
    }
LAB_14ab703a0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// FindOrAddModelCache @ 14ab703f0

/* WARNING: Removing unreachable block (ram,0x00014ab70663) */
/* WARNING: Removing unreachable block (ram,0x00014ab70670) */

FModelCacheEntry * __thiscall
UE::Mutable::Private::FWorkingMemoryManager::FindOrAddModelCache
          (FWorkingMemoryManager *this,TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  atomic<int> *paVar3;
  TArray<UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar4;
  atomic<int> aVar5;
  FModel *pFVar6;
  FModel *pFVar7;
  FModel **ppFVar8;
  code *pcVar9;
  bool bVar10;
  atomic<int> aVar11;
  int iVar12;
  FModelCacheEntry *pFVar13;
  Private *pPVar14;
  void *pvVar15;
  TReferenceControllerBase<1> *pTVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  longlong lVar20;
  FModelCacheEntry *pFVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 local_res8 [8];
  TSharedPtr<UE::Mutable::Private::FModel_const_,1> *local_res10;
  FModel *local_78;
  TReferenceControllerBase<1> *local_70;
  ForAnyElementType local_68;
  int local_58 [2];
  ForAnyElementType local_50;
  int local_40 [2];
  
  local_res10 = param_1;
  if ((param_1->Object == (FModel *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InModel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                          ,0x57a,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    pFVar13 = (FModelCacheEntry *)(*pcVar9)();
    return pFVar13;
  }
  uVar17 = 0;
  pTVar4 = &this->CachePerModel;
  if (0 < (this->CachePerModel).ArrayNum) {
    lVar24 = 0;
    do {
      uVar23 = 0;
      if ((int)uVar17 < (this->CachePerModel).ArrayNum) {
        uVar23 = ~uVar17 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar13 = (FModelCacheEntry *)(*pcVar9)();
        return pFVar13;
      }
      lVar22 = (pTVar4->AllocatorInstance)._padding_;
      lVar20 = 0;
      pTVar16 = *(TReferenceControllerBase<1> **)(lVar22 + 8 + lVar24);
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar16->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            goto LAB_14ab704ea;
          }
          LOCK();
          aVar11 = pTVar16->SharedReferenceCount;
          bVar10 = aVar5 == aVar11;
          if (bVar10) {
            pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar11 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar11;
        } while (!bVar10);
        lVar20 = *(longlong *)(lVar22 + lVar24);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      if (lVar20 == 0) {
LAB_14ab704ea:
        uVar23 = 0;
        if ((int)uVar17 < (this->CachePerModel).ArrayNum) {
          uVar23 = ~uVar17 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pFVar13 = (FModelCacheEntry *)(*pcVar9)();
          return pFVar13;
        }
        TArray<UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
        ::RemoveAtSwapImpl(pTVar4,uVar17);
        Core::Private::
        ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                  (0x40,8,&pTVar4->AllocatorInstance,(this->CachePerModel).ArrayNum,
                   &(this->CachePerModel).ArrayMax);
      }
      else {
        uVar17 = uVar17 + 1;
        lVar24 = lVar24 + 0x40;
      }
      param_1 = local_res10;
    } while ((int)uVar17 < (this->CachePerModel).ArrayNum);
  }
  pFVar6 = param_1->Object;
  if ((pFVar6 == (FModel *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InModel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                          ,0x566,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    pFVar13 = (FModelCacheEntry *)(*pcVar9)();
    return pFVar13;
  }
  iVar12 = (this->CachePerModel).ArrayNum;
  pFVar13 = (FModelCacheEntry *)(pTVar4->AllocatorInstance)._padding_;
  pFVar21 = pFVar13 + iVar12;
  do {
    if ((this->CachePerModel).ArrayNum != iVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar21) {
      local_70 = (param_1->SharedReferenceCount).ReferenceController;
      local_78 = param_1->Object;
      if (local_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_40[0] = 0;
      local_40[1] = 0;
      local_50.AllocSize = 0;
      local_50._padding_ = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      local_68.AllocSize = 0;
      local_68._padding_ = 0;
      if ((param_1->Object == (FModel *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar13 = (FModelCacheEntry *)(*pcVar9)();
        return pFVar13;
      }
      pPVar14 = FModel::GetPrivate(param_1->Object);
      uVar17 = (pPVar14->Program).Roms.ArrayNum;
      if (local_40[0] < (int)uVar17) {
        iVar18 = uVar17 - local_40[0];
        iVar12 = Core::Private::
                 ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                           (2,2,iVar18,&local_50,local_40,local_40 + 1);
        memset((void *)(local_50._padding_ + (longlong)iVar12 * 2),0,(longlong)iVar18 * 2);
      }
      else {
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
        }
        if ((int)uVar17 < local_40[0]) {
          uVar23 = local_40[0] - uVar17;
          if ((int)(uVar17 | uVar23) < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              pFVar13 = (FModelCacheEntry *)(*pcVar9)();
              return pFVar13;
            }
          }
          if (uVar23 != 0) {
            pvVar15 = (void *)(local_50._padding_ + (longlong)(int)uVar17 * 2);
            iVar18 = (local_40[0] - uVar23) - uVar17;
            iVar12 = local_40[0];
            if (iVar18 != 0) {
              memmove(pvVar15,(void *)((longlong)pvVar15 + (longlong)(int)uVar23 * 2),
                      (longlong)iVar18 * 2);
              iVar12 = local_40[0];
            }
            local_40[0] = iVar12 - uVar23;
            Core::Private::
            ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                      (2,2,&local_50,iVar12 - uVar23,local_40 + 1);
          }
        }
      }
      if ((param_1->Object == (FModel *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar13 = (FModelCacheEntry *)(*pcVar9)();
        return pFVar13;
      }
      pPVar14 = FModel::GetPrivate(param_1->Object);
      uVar17 = (pPVar14->Program).Roms.ArrayNum;
      if (local_58[0] < (int)uVar17) {
        iVar18 = uVar17 - local_58[0];
        iVar12 = Core::Private::
                 ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                           (0x10,8,iVar18,&local_68,local_58,local_58 + 1);
        memset((void *)((longlong)iVar12 * 0x10 + local_68._padding_),0,(longlong)iVar18 << 4);
      }
      else {
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
        }
        if ((int)uVar17 < local_58[0]) {
          uVar23 = local_58[0] - uVar17;
          if ((int)(uVar23 | uVar17) < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              pFVar13 = (FModelCacheEntry *)(*pcVar9)();
              return pFVar13;
            }
          }
          if (uVar23 != 0) {
            pvVar15 = (void *)((longlong)(int)uVar17 * 0x10 + local_68._padding_);
            iVar18 = (local_58[0] - uVar17) - uVar23;
            iVar12 = local_58[0];
            if (iVar18 != 0) {
              memmove(pvVar15,(void *)((longlong)(int)uVar23 * 0x10 + (longlong)pvVar15),
                      (longlong)iVar18 << 4);
              iVar12 = local_58[0];
            }
            local_58[0] = iVar12 - uVar23;
            Core::Private::
            ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                      (0x10,8,&local_68,iVar12 - uVar23,local_58 + 1);
          }
        }
      }
      pTVar4 = &this->CachePerModel;
      ppFVar8 = (FModel **)(pTVar4->AllocatorInstance)._padding_;
      if (((ppFVar8 <= &local_78) &&
          (&local_78 < ppFVar8 + (longlong)(this->CachePerModel).ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar13 = (FModelCacheEntry *)(*pcVar9)();
        return pFVar13;
      }
      iVar12 = (this->CachePerModel).ArrayNum;
      piVar1 = &(this->CachePerModel).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                           (0x840,&pTVar4->AllocatorInstance,piVar1);
      }
      lVar24 = local_68._padding_;
      puVar19 = (undefined8 *)((longlong)iVar12 * 0x40 + (pTVar4->AllocatorInstance)._padding_);
      (this->CachePerModel).ArrayNum = iVar12 + 1;
      *puVar19 = local_78;
      puVar19[1] = local_70;
      if (local_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar2 = (ForAnyElementType *)(puVar19 + 2);
      pFVar2->_padding_ = 0;
      puVar19[3] = 0;
      lVar22 = (longlong)local_58[0];
      *(int *)(puVar19 + 4) = local_58[0];
      if (local_58[0] == 0) {
        *(int *)((longlong)puVar19 + 0x24) = 0;
      }
      else {
        Core::Private::
        ReallocForCopy<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                  (0x10,8,local_58[0],0,pFVar2,local_58[0],(int *)((longlong)puVar19 + 0x24));
        memcpy((void *)pFVar2->_padding_,(void *)lVar24,lVar22 << 4);
      }
      lVar24 = local_50._padding_;
      pFVar2 = (ForAnyElementType *)(puVar19 + 5);
      pFVar2->_padding_ = 0;
      puVar19[6] = 0;
      lVar22 = (longlong)local_40[0];
      *(int *)(puVar19 + 7) = local_40[0];
      if (local_40[0] == 0) {
        *(int *)((longlong)puVar19 + 0x3c) = 0;
      }
      else {
        Core::Private::
        ReallocForCopy<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                  (2,2,local_40[0],0,pFVar2,local_40[0],(int *)((longlong)puVar19 + 0x3c));
        memcpy((void *)pFVar2->_padding_,(void *)lVar24,lVar22 * 2);
      }
      iVar12 = (this->CachePerModel).ArrayNum;
      uVar23 = iVar12 - 1;
      uVar17 = 0;
      if ((int)uVar23 < iVar12) {
        uVar17 = ~uVar23 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar13 = (FModelCacheEntry *)(*pcVar9)();
        return pFVar13;
      }
      pFVar13 = (FModelCacheEntry *)
                ((longlong)((this->CachePerModel).ArrayNum + -1) * 0x40 +
                (this->CachePerModel).AllocatorInstance._padding_);
      LOCK();
      ::Counter = (atomic<__int64>)((longlong)::Counter - local_50.AllocSize);
      UNLOCK();
      FGlobalMemoryCounter::Update(-local_50.AllocSize);
      local_50.AllocSize = 0;
      if ((void *)local_50._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_50._padding_);
      }
      LOCK();
      ::Counter = (atomic<__int64>)((longlong)::Counter - local_68.AllocSize);
      UNLOCK();
      FGlobalMemoryCounter::Update(-local_68.AllocSize);
      local_68.AllocSize = 0;
      if ((void *)local_68._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_68._padding_);
      }
      if (local_70 == (TReferenceControllerBase<1> *)0x0) {
        return pFVar13;
      }
      LOCK();
      paVar3 = &local_70->WeakReferenceCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 != (atomic<int>)0x1) {
        return pFVar13;
      }
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
      return pFVar13;
    }
    pTVar16 = (pFVar13->Model).WeakReferenceCount.ReferenceController;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar16->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pTVar16 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ab705f0;
        }
        LOCK();
        aVar11 = pTVar16->SharedReferenceCount;
        bVar10 = aVar5 == aVar11;
        if (bVar10) {
          pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar11 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar11;
      } while (!bVar10);
      pFVar7 = (pFVar13->Model).Object;
      if ((pFVar7 != (FModel *)0x0) && (pFVar7 == pFVar6)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        return pFVar13;
      }
    }
LAB_14ab705f0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    pFVar13 = pFVar13 + 1;
  } while( true );
}

// GetCacheBytes @ 14ab71930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Mutable::Private::FWorkingMemoryManager::GetCacheBytes(FWorkingMemoryManager *this)

{
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  FResource **ppFVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  uint *puVar15;
  longlong lVar16;
  uint uVar17;
  TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined1 local_238;
  undefined1 local_237 [15];
  longlong *local_228;
  longlong *local_220;
  uint local_218;
  longlong *local_210;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  TStack_208;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  *pTStack_1e8;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  *local_1e0;
  undefined2 local_1d8;
  longlong local_1c8;
  uint local_1c0;
  int local_1bc;
  undefined1 local_1b8 [8];
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  FWorkingMemoryManager *local_1a0;
  longlong local_198;
  longlong *local_190;
  uint uStack_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  undefined4 uStack_178;
  uint uStack_174;
  uint local_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  TIterator local_130;
  undefined4 local_e4;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_1c0 = (this->LiveInstances).ArrayNum;
  uVar7 = (ulonglong)(int)local_1c0;
  lVar16 = (this->LiveInstances).AllocatorInstance._padding_;
  uVar5 = 1;
  local_198 = uVar7 * 0x68 + lVar16;
  local_1bc = 0;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_1a0 = this;
LAB_14ab71a20:
  lVar9 = local_198;
  if ((local_1a0->LiveInstances).ArrayNum != (int)uVar7) {
    local_238 = 0;
    `TCheckedPointerIterator<UE::Mutable::Private::FLiveInstance_const_,int,0>::operator!='::__l2::
    <lambda_1>::operator()(&local_238);
  }
  uVar14 = 0;
  if (lVar16 != lVar9) {
    if ((*(longlong *)(lVar16 + 0x48) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    plVar13 = (longlong *)(*(longlong *)(lVar16 + 0x48) + 0x58);
    local_218 = 0;
    pTVar1 = (TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
              *)(*(longlong *)(lVar16 + 0x48) + 0x70);
    local_228 = plVar13;
    local_220 = plVar13;
    TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
    ::TIterator::TIterator(&local_130,pTVar1);
    local_1d8 = 0;
    local_210 = (longlong *)local_130._padding_;
    TStack_208._padding_ = local_130._padding_;
    TStack_208.Array =
         (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
          *)local_130._padding_;
    TStack_208.UnvisitedBitMask = (undefined4)local_130._padding_;
    TStack_208.CurrentBitIndex = local_130._padding_._4_4_;
    TStack_208._24_8_ = local_130._padding_;
    pTStack_1e8 = local_130.Set;
    local_1e0 = pTVar1;
LAB_14ab71ac0:
    lVar9 = (longlong)(int)local_218;
    uVar14 = 0;
    if (((int)local_218 < 0) || ((int)plVar13[2] <= (int)local_218)) {
      if ((TStack_208.Array)->NumBits <= TStack_208.CurrentBitIndex) goto LAB_14ab71f90;
      if (-1 < (int)local_218) goto LAB_14ab71ae4;
LAB_14ab71b45:
      lVar9 = *local_210 + ((longlong)TStack_208.CurrentBitIndex * 3 + 1) * 8;
    }
    else {
LAB_14ab71ae4:
      iVar4 = (int)plVar13[2];
      if (iVar4 <= (int)local_218) goto LAB_14ab71b45;
      uVar11 = uVar14;
      if ((int)local_218 < iVar4) {
        uVar11 = ~local_218 >> 0x1f;
      }
      if (uVar11 == 0) {
        local_248 = (longlong)(int)local_218;
        local_240 = (longlong)iVar4;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
      }
      lVar9 = *plVar13 + lVar9 * 8;
    }
    if (*(int *)(lVar9 + 4) != 0) {
      lVar9 = (longlong)(int)local_218;
      if ((int)local_218 < 0) {
LAB_14ab71bcd:
        lVar9 = *local_210 + ((longlong)TStack_208.CurrentBitIndex * 3 + 1) * 8;
      }
      else {
        iVar4 = (int)plVar13[2];
        if (iVar4 <= (int)local_218) goto LAB_14ab71bcd;
        uVar11 = uVar14;
        if ((int)local_218 < iVar4) {
          uVar11 = ~local_218 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (local_248 = lVar9, local_240 = (longlong)iVar4,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        lVar9 = *plVar13 + lVar9 * 8;
      }
      lVar10 = (longlong)(int)local_218;
      this_00 = (TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
                 *)local_d8;
      if ((*(byte *)(lVar9 + 2) & 4) != 0) {
        this_00 = &local_88;
      }
      local_1c8 = 0;
      if ((int)local_218 < 0) {
LAB_14ab71c65:
        lVar9 = *local_210 + ((longlong)TStack_208.CurrentBitIndex * 3 + 1) * 8;
      }
      else {
        iVar4 = (int)plVar13[2];
        if (iVar4 <= (int)local_218) goto LAB_14ab71c65;
        if ((int)local_218 < iVar4) {
          uVar14 = ~local_218 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (local_248 = lVar10, local_240 = (longlong)iVar4,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        lVar9 = *plVar13 + lVar10 * 8;
      }
      if (*(char *)(lVar9 + 3) == '\x05') {
        if ((*(longlong *)(lVar16 + 0x48) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        lVar10 = (longlong)(int)local_218;
        lVar9 = *(longlong *)(lVar16 + 0x48);
        if ((int)local_218 < 0) {
LAB_14ab71e5e:
          lVar10 = *local_210 + ((longlong)TStack_208.CurrentBitIndex * 3 + 1) * 8;
        }
        else {
          iVar4 = (int)plVar13[2];
          if (iVar4 <= (int)local_218) goto LAB_14ab71e5e;
          uVar14 = 0;
          if ((int)local_218 < iVar4) {
            uVar14 = ~local_218 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (local_248 = lVar10, local_240 = (longlong)iVar4,
             bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          lVar10 = *plVar13 + lVar10 * 8;
        }
        uVar14 = *(uint *)(lVar10 + 4);
        iVar4 = *(int *)(lVar9 + 0x100);
        uVar11 = 0;
        if ((int)uVar14 < iVar4) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (local_248 = (longlong)(int)uVar14, local_240 = (longlong)iVar4,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        local_1c8 = *(longlong *)(*(longlong *)(lVar9 + 0xf0) + 8 + (longlong)(int)uVar14 * 0x18);
        if (local_1c8 == 0) goto LAB_14ab71ef6;
        ppFVar8 = (FResource **)(local_1b8 + 4);
      }
      else {
        if (*(char *)(lVar9 + 3) != '\a') goto LAB_14ab71ef6;
        if ((*(longlong *)(lVar16 + 0x48) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        lVar10 = (longlong)(int)local_218;
        lVar9 = *(longlong *)(lVar16 + 0x48);
        if ((int)local_218 < 0) {
LAB_14ab71d2f:
          lVar10 = *local_210 + ((longlong)TStack_208.CurrentBitIndex * 3 + 1) * 8;
        }
        else {
          iVar4 = (int)plVar13[2];
          if (iVar4 <= (int)local_218) goto LAB_14ab71d2f;
          uVar14 = 0;
          if ((int)local_218 < iVar4) {
            uVar14 = ~local_218 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (local_248 = lVar10, local_240 = (longlong)iVar4,
             bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          lVar10 = *plVar13 + lVar10 * 8;
        }
        uVar14 = *(uint *)(lVar10 + 4);
        iVar4 = *(int *)(lVar9 + 0x118);
        uVar11 = 0;
        if ((int)uVar14 < iVar4) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (local_248 = (longlong)(int)uVar14, local_240 = (longlong)iVar4,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        local_1c8 = *(longlong *)(*(longlong *)(lVar9 + 0x108) + 8 + (longlong)(int)uVar14 * 0x18);
        if (local_1c8 == 0) goto LAB_14ab71ef6;
        ppFVar8 = (FResource **)local_1b8;
      }
      TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UE::Mutable::Private::FResource_const_*_const_&>(this_00,ppFVar8,(bool *)&local_1c8)
      ;
    }
LAB_14ab71ef6:
    if (((int)local_218 < 0) || ((int)plVar13[2] <= (int)local_218)) {
      TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
      ::FindFirstSetBit(&TStack_208);
      plVar13 = local_220;
    }
    else {
      local_218 = local_218 + 1;
    }
    if (((char)local_1d8 != '\0') && (local_1d8._1_1_ != '\0')) {
      iVar4 = 1;
      uVar14 = *(int *)&(local_1e0->Elements).field_0x10 - *(int *)&(local_1e0->Elements).field_0x44
      ;
      if (3 < uVar14) {
        uVar7 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_1b0 = (undefined4)lVar9;
        iVar4 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar14) && (local_1e0->HashSize < iVar4)) || (iVar4 < local_1e0->HashSize)) {
        local_1e0->HashSize = iVar4;
        TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
        ::Rehash(local_1e0);
      }
    }
    goto LAB_14ab71ac0;
  }
  TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
  ::Append<FDefaultSetAllocator>
            ((TSet<UE::Mutable::Private::FResource_const_*,DefaultKeyFuncs<UE::Mutable::Private::FResource_const_*,0>,FDefaultSetAllocator>
              *)local_d8,&local_88);
  uVar11 = local_b0;
  local_170 = 0;
  uStack_174 = local_170;
  if (local_b0 == 0) goto LAB_14ab72093;
  puVar15 = (uint *)(local_d8 + 0x10);
  if (local_b8 != (uint *)0x0) {
    puVar15 = local_b8;
  }
  uVar17 = *puVar15;
  local_170 = 0;
  uVar14 = 0;
  goto joined_r0x00014ab72050;
LAB_14ab71f90:
  if (((char)local_1d8 != '\0') && (local_1d8._1_1_ != '\0')) {
    iVar4 = 1;
    uVar14 = *(int *)&(local_1e0->Elements).field_0x10 - *(int *)&(local_1e0->Elements).field_0x44;
    if (3 < uVar14) {
      uVar7 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_1ac = (undefined4)lVar9;
      iVar4 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((0 < (int)uVar14) && (local_1e0->HashSize < iVar4)) || (iVar4 < local_1e0->HashSize)) {
      local_1e0->HashSize = iVar4;
      TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
      ::Rehash(local_1e0);
    }
  }
  lVar16 = lVar16 + 0x68;
  uVar7 = (ulonglong)local_1c0;
  goto LAB_14ab71a20;
joined_r0x00014ab72050:
  if (uVar17 != 0) goto LAB_14ab7206e;
  lVar16 = (longlong)(int)uVar14;
  local_170 = local_170 + 0x20;
  uVar14 = uVar14 + 1;
  uStack_174 = local_b0;
  if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
  goto LAB_14ab72093;
  uVar17 = puVar15[lVar16 + 1];
  goto joined_r0x00014ab72050;
LAB_14ab7206e:
  uVar5 = -uVar17 & uVar17;
  uVar7 = (ulonglong)uVar5 * 2 + 1;
  lVar16 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  local_1a8 = (int)lVar16;
  uStack_174 = (local_170 - 1) + local_1a8;
  if ((int)local_b0 < (int)uStack_174) {
    uStack_174 = local_b0;
  }
LAB_14ab72093:
  local_190 = (longlong *)local_d8;
  uStack_16c = local_e4;
  local_180 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  iStack_168 = local_d8._8_4_ - local_a4;
  uVar17 = local_b0 & 0xffffffe0;
  uStack_178 = 0xffffffff;
  TStack_158.CurrentBitIndex = uStack_174;
  TStack_158.UnvisitedBitMask = 0xffffffff;
  TStack_158._padding_ = CONCAT44(uVar5,uVar14);
  iVar4 = (int)local_b0 >> 5;
  TStack_158._28_4_ = local_e4;
  TStack_158.BaseBitIndex = local_170;
  uStack_138 = CONCAT44(uStack_164,iStack_168);
  bVar6 = (byte)local_b0;
  uStack_188 = uVar14;
  uStack_184 = uVar5;
  local_160 = local_190;
  TStack_158.Array = local_180;
  if (((int)local_b0 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar12 = local_1bc;
  if (uVar11 != local_b0) {
    puVar15 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar15 = local_b8;
    }
    uVar5 = -1 << (bVar6 & 0x1f) & puVar15[iVar4];
    while (uVar5 == 0) {
      lVar16 = (longlong)iVar4;
      uVar17 = uVar17 + 0x20;
      iVar4 = iVar4 + 1;
      uVar11 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar4)
      goto LAB_14ab721b0;
      uVar5 = puVar15[lVar16 + 1];
    }
    uVar7 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar11 = (int)lVar16 + -1 + uVar17;
    if ((int)local_b0 < (int)uVar11) {
      uVar11 = local_b0;
    }
  }
LAB_14ab721b0:
  while( true ) {
    plVar13 = local_160;
    if ((int)local_160[1] - *(int *)((longlong)local_160 + 0x34) != (int)uStack_138) {
      `TSparseArray<TSparseSetElement<UE::Mutable::Private::FResource_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_237);
    }
    if (((TStack_158.CurrentBitIndex == uVar11) &&
        (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar13 == (longlong *)local_d8)) break;
    iVar4 = (**(code **)**(undefined8 **)(*plVar13 + (longlong)TStack_158.CurrentBitIndex * 0x10))()
    ;
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
    iVar12 = iVar12 + iVar4;
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UE::Mutable::Private::FResource_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Mutable::Private::FResource_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<UE::Mutable::Private::FResource_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Mutable::Private::FResource_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::Mutable::Private::FResource_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  return iVar12;
}

// GetCurrentMemoryBytes @ 14ab733d0

long64 __thiscall
UE::Mutable::Private::FWorkingMemoryManager::GetCurrentMemoryBytes(FWorkingMemoryManager *this)

{
  atomic<__int64> aVar1;
  atomic<__int64> aVar2;
  atomic<__int64> aVar3;
  atomic<__int64> aVar4;
  atomic<__int64> *paVar5;
  atomic<__int64> *paVar6;
  atomic<__int64> *paVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1437,"Mutable_GetCurrentMemoryBytes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x59d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1437);
  }
  paVar5 = MemoryCounters::FImageMemoryCounter::Get();
  paVar6 = MemoryCounters::FMeshMemoryCounter::Get();
  paVar7 = MemoryCounters::FStreamingMemoryCounter::Get();
  aVar4 = ::Counter;
  aVar1 = *paVar7;
  aVar2 = *paVar6;
  aVar3 = *paVar5;
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (longlong)aVar2 + (longlong)aVar3 + (longlong)aVar1 + (longlong)aVar4;
}

// GetImageId @ 14ab74d00

FHandle * __thiscall
UE::Mutable::Private::FWorkingMemoryManager::GetImageId
          (FWorkingMemoryManager *this,FHandle *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_1,FParameters *param_2,
          uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FHandle *pFVar3;
  FGeneratedImageKey local_28;
  
  local_28.ParameterValuesBlob.ArrayNum = 0;
  local_28.ParameterValuesBlob.ArrayMax = 0;
  local_28.Address = param_4;
  local_28.ParameterValuesBlob.AllocatorInstance._padding_ = 0;
  local_28.ParameterValuesBlob.AllocatorInstance.AllocSize = 0;
  GetResourceKey(param_1,param_2,param_3,param_4,&local_28.ParameterValuesBlob);
  if ((this->CurrentImageIdRegistry).Object ==
      (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
       *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::Add
            ((this->CurrentImageIdRegistry).Object,__return_storage_ptr__,&local_28,
             (FGeneratedImageData *)&param_4);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - local_28.ParameterValuesBlob.AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-local_28.ParameterValuesBlob.AllocatorInstance.AllocSize);
  local_28.ParameterValuesBlob.AllocatorInstance.AllocSize = 0;
  if ((void *)local_28.ParameterValuesBlob.AllocatorInstance._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_28.ParameterValuesBlob.AllocatorInstance._padding_);
  }
  return __return_storage_ptr__;
}

// GetMaterialId @ 14ab768a0

FHandle * __thiscall
UE::Mutable::Private::FWorkingMemoryManager::GetMaterialId
          (FWorkingMemoryManager *this,FHandle *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_1,FParameters *param_2,
          uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FHandle *pFVar3;
  FGeneratedMaterialKey local_28;
  
  local_28.ParameterValuesBlob.ArrayNum = 0;
  local_28.ParameterValuesBlob.ArrayMax = 0;
  local_28.Address = param_4;
  local_28.ParameterValuesBlob.AllocatorInstance._padding_ = 0;
  local_28.ParameterValuesBlob.AllocatorInstance.AllocSize = 0;
  GetResourceKey(param_1,param_2,param_3,param_4,&local_28.ParameterValuesBlob);
  if ((this->CurrentMaterialIdRegistry).Object ==
      (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
       *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  ::Add((this->CurrentMaterialIdRegistry).Object,__return_storage_ptr__,&local_28,
        (FGeneratedMaterialData *)&param_4);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - local_28.ParameterValuesBlob.AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-local_28.ParameterValuesBlob.AllocatorInstance.AllocSize);
  local_28.ParameterValuesBlob.AllocatorInstance.AllocSize = 0;
  if ((void *)local_28.ParameterValuesBlob.AllocatorInstance._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_28.ParameterValuesBlob.AllocatorInstance._padding_);
  }
  return __return_storage_ptr__;
}

// GetMeshId @ 14ab77630

FHandle * __thiscall
UE::Mutable::Private::FWorkingMemoryManager::GetMeshId
          (FWorkingMemoryManager *this,FHandle *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_1,FParameters *param_2,
          uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FHandle *pFVar3;
  FGeneratedMeshKey local_28;
  
  local_28.ParameterValuesBlob.ArrayNum = 0;
  local_28.ParameterValuesBlob.ArrayMax = 0;
  local_28.Address = param_4;
  local_28.ParameterValuesBlob.AllocatorInstance._padding_ = 0;
  local_28.ParameterValuesBlob.AllocatorInstance.AllocSize = 0;
  GetResourceKey(param_1,param_2,param_3,param_4,&local_28.ParameterValuesBlob);
  if ((this->CurrentMeshIdRegistry).Object ==
      (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData> *
      )0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::Add
            ((this->CurrentMeshIdRegistry).Object,__return_storage_ptr__,&local_28,
             (FGeneratedMeshData *)&param_4);
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - local_28.ParameterValuesBlob.AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-local_28.ParameterValuesBlob.AllocatorInstance.AllocSize);
  local_28.ParameterValuesBlob.AllocatorInstance.AllocSize = 0;
  if ((void *)local_28.ParameterValuesBlob.AllocatorInstance._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_28.ParameterValuesBlob.AllocatorInstance._padding_);
  }
  return __return_storage_ptr__;
}

// GetRomBytes @ 14ab7ac80

int __thiscall UE::Mutable::Private::FWorkingMemoryManager::GetRomBytes(FWorkingMemoryManager *this)

{
  undefined1 *puVar1;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
  *pTVar2;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
  *pTVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
  *pTVar11;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
  *pTVar12;
  bool bVar13;
  int iVar14;
  Private *pPVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<UE::Mutable::Private::FModel_const_*,TSizedDefaultAllocator<32>_> local_160;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  FScriptContainerElement *local_120;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  FModel *local_108;
  Private *local_100;
  FScriptContainerElement *local_f8;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  undefined4 local_54;
  
  iVar14 = (this->LiveInstances).ArrayNum;
  iVar26 = 0;
  lVar20 = (this->LiveInstances).AllocatorInstance._padding_;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar23 = (longlong)iVar14 * 0x68 + lVar20;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  while( true ) {
    if ((this->LiveInstances).ArrayNum != iVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Mutable::Private::FLiveInstance_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    uVar9 = local_160._8_8_;
    if (lVar20 == lVar23) break;
    local_108 = *(FModel **)(lVar20 + 0x20);
    TArray<UE::Mutable::Private::FModel_const_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<UE::Mutable::Private::FModel_const_*>(&local_160,&local_108);
    lVar20 = lVar20 + 0x68;
  }
  uVar16 = (ulonglong)local_160.ArrayNum;
  local_f8 = local_160.AllocatorInstance.Data + uVar16 * 8;
  uVar18 = uVar16;
  FVar21.Data = local_160.AllocatorInstance.Data;
  do {
    pFVar10 = local_f8;
    local_120 = FVar21.Data;
    if ((int)uVar16 != (int)uVar18) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Mutable::Private::FModel_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar21.Data == pFVar10) {
      if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.AllocatorInstance.Data);
      }
      return iVar26;
    }
    pPVar15 = FModel::GetPrivate(*(FModel **)FVar21.Data);
    iStack_148 = 0;
    local_130 = 0;
    uStack_144 = 1;
    puVar1 = &(pPVar15->Program).ConstantImageLODsStreamed.field_0x10;
    iVar14 = *(int *)&(pPVar15->Program).ConstantImageLODsStreamed.field_0x28;
    pTVar2 = &(pPVar15->Program).ConstantImageLODsStreamed;
    iStack_134 = 0;
    if (iVar14 != 0) {
      puVar5 = *(uint **)&(pPVar15->Program).ConstantImageLODsStreamed.field_0x20;
      puVar25 = (uint *)puVar1;
      if (puVar5 != (uint *)0x0) {
        puVar25 = puVar5;
      }
      uVar24 = *puVar25;
      while (uVar24 == 0) {
        lVar20 = (longlong)iStack_148;
        local_130 = local_130 + 0x20;
        iStack_148 = iStack_148 + 1;
        iStack_134 = iVar14;
        if ((int)((iVar14 + -1 >> 0x1f & 0x1fU) + iVar14 + -1) >> 5 < iStack_148)
        goto LAB_14ab7adde;
        uVar24 = puVar25[lVar20 + 1];
      }
      uStack_144 = -uVar24 & uVar24;
      uVar18 = (ulonglong)uStack_144 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_118 = (int)lVar20;
      iStack_134 = local_130 + -1 + local_118;
      if (iVar14 < iStack_134) {
        iStack_134 = iVar14;
      }
    }
LAB_14ab7adde:
    uVar24 = *(uint *)&(pPVar15->Program).ConstantImageLODsStreamed.field_0x28;
    uStack_12c = local_74;
    iStack_128 = *(int *)&(pPVar15->Program).ConstantImageLODsStreamed.field_0x8 -
                 *(int *)&(pPVar15->Program).ConstantImageLODsStreamed.field_0x34;
    uVar22 = uVar24 & 0xffffffe0;
    TStack_e8._padding_ = CONCAT44(uStack_144,iStack_148);
    uStack_138 = 0xffffffff;
    TStack_e8.CurrentBitIndex = iStack_134;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar24 >> 5;
    TStack_e8._28_4_ = local_74;
    TStack_e8.BaseBitIndex = local_130;
    uStack_c8 = CONCAT44(uStack_124,iStack_128);
    local_150 = pTVar2;
    local_140 = puVar1;
    local_100 = pPVar15;
    local_f0 = pTVar2;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar24 < 0) || (iVar14 < (int)uVar24)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      iVar14 = (*pcVar8)();
      return iVar14;
    }
    uVar4 = *(uint *)&(pPVar15->Program).ConstantImageLODsStreamed.field_0x28;
    if (uVar24 != uVar4) {
      puVar6 = *(undefined1 **)&(pPVar15->Program).ConstantImageLODsStreamed.field_0x20;
      puVar17 = puVar1;
      if (puVar6 != (undefined1 *)0x0) {
        puVar17 = puVar6;
      }
      uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar19 * 4);
      while (uVar24 == 0) {
        lVar20 = (longlong)iVar19;
        uVar22 = uVar22 + 0x20;
        iVar19 = iVar19 + 1;
        uVar24 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar19)
        goto LAB_14ab7aef0;
        uVar24 = *(uint *)(puVar17 + lVar20 * 4 + 4);
      }
      uVar18 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_114 = (int)lVar20;
      uVar24 = local_114 + -1 + uVar22;
      if ((int)uVar4 < (int)uVar24) {
        uVar24 = uVar4;
      }
    }
LAB_14ab7aef0:
    while( true ) {
      pTVar11 = local_f0;
      if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      pPVar15 = local_100;
      if (((TStack_e8.CurrentBitIndex == uVar24) &&
          (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar11 == pTVar2)) break;
      puVar7 = *(undefined8 **)
                ((longlong)TStack_e8.CurrentBitIndex * 0x20 + 8 + *(longlong *)pTVar11);
      if (puVar7 != (undefined8 *)0x0) {
        iVar14 = (**(code **)*puVar7)();
        iVar26 = iVar26 + iVar14;
      }
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
    iStack_148 = 0;
    local_130 = 0;
    uStack_144 = 1;
    puVar1 = &(local_100->Program).ConstantMeshesStreamed.field_0x10;
    iVar14 = *(int *)&(local_100->Program).ConstantMeshesStreamed.field_0x28;
    pTVar3 = &(local_100->Program).ConstantMeshesStreamed;
    iStack_134 = 0;
    if (iVar14 != 0) {
      puVar5 = *(uint **)&(local_100->Program).ConstantMeshesStreamed.field_0x20;
      puVar25 = (uint *)puVar1;
      if (puVar5 != (uint *)0x0) {
        puVar25 = puVar5;
      }
      uVar24 = *puVar25;
      while (uVar24 == 0) {
        lVar20 = (longlong)iStack_148;
        local_130 = local_130 + 0x20;
        iStack_148 = iStack_148 + 1;
        iStack_134 = iVar14;
        if ((int)((iVar14 + -1 >> 0x1f & 0x1fU) + iVar14 + -1) >> 5 < iStack_148)
        goto LAB_14ab7afee;
        uVar24 = puVar25[lVar20 + 1];
      }
      uStack_144 = -uVar24 & uVar24;
      uVar18 = (ulonglong)uStack_144 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_110 = (int)lVar20;
      iStack_134 = local_130 + -1 + local_110;
      if (iVar14 < iStack_134) {
        iStack_134 = iVar14;
      }
    }
LAB_14ab7afee:
    uStack_12c = local_54;
    iStack_128 = *(int *)&(local_100->Program).ConstantMeshesStreamed.field_0x8 -
                 *(int *)&(local_100->Program).ConstantMeshesStreamed.field_0x34;
    uVar24 = *(uint *)&(local_100->Program).ConstantMeshesStreamed.field_0x28;
    uVar22 = uVar24 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uStack_144,iStack_148);
    uStack_138 = 0xffffffff;
    TStack_b8.CurrentBitIndex = iStack_134;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar24 >> 5;
    TStack_b8._28_4_ = local_54;
    TStack_b8.BaseBitIndex = local_130;
    uStack_98 = CONCAT44(uStack_124,iStack_128);
    local_150 = (TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
                 *)pTVar3;
    local_140 = puVar1;
    local_c0 = pTVar3;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar24 < 0) || (iVar14 < (int)uVar24)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      iVar14 = (*pcVar8)();
      return iVar14;
    }
    uVar4 = *(uint *)&(pPVar15->Program).ConstantMeshesStreamed.field_0x28;
    if (uVar24 != uVar4) {
      puVar6 = *(undefined1 **)&(pPVar15->Program).ConstantMeshesStreamed.field_0x20;
      puVar17 = puVar1;
      if (puVar6 != (undefined1 *)0x0) {
        puVar17 = puVar6;
      }
      uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar19 * 4);
      while (uVar24 == 0) {
        lVar20 = (longlong)iVar19;
        uVar22 = uVar22 + 0x20;
        iVar19 = iVar19 + 1;
        uVar24 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar19)
        goto LAB_14ab7b100;
        uVar24 = *(uint *)(puVar17 + lVar20 * 4 + 4);
      }
      uVar18 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_10c = (int)lVar20;
      uVar24 = local_10c + -1 + uVar22;
      if ((int)uVar4 < (int)uVar24) {
        uVar24 = uVar4;
      }
    }
LAB_14ab7b100:
    while( true ) {
      pTVar12 = local_c0;
      if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_b8.CurrentBitIndex == uVar24) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar12 == pTVar3)) break;
      puVar7 = *(undefined8 **)
                ((longlong)TStack_b8.CurrentBitIndex * 0x20 + 8 + *(longlong *)pTVar12);
      if (puVar7 != (undefined8 *)0x0) {
        iVar14 = (**(code **)*puVar7)();
        iVar26 = iVar26 + iVar14;
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
    uVar16 = local_160._8_8_ & 0xffffffff;
    FVar21.Data = local_120 + 8;
    uVar18 = uVar9 & 0xffffffff;
  } while( true );
}

// GetTrackedCacheBytes @ 14ab7cad0

int __thiscall
UE::Mutable::Private::FWorkingMemoryManager::GetTrackedCacheBytes(FWorkingMemoryManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  TStack_60;
  undefined8 uStack_40;
  
  iVar16 = 0;
  puVar1 = &(this->CacheResources).field_0x18;
  iVar7 = *(int *)&(this->CacheResources).field_0x38;
  iVar13 = 0;
  uVar5 = 1;
  iVar14 = 0;
  iVar6 = 0;
  if (iVar7 != 0) {
    puVar15 = *(uint **)&(this->CacheResources).field_0x28;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    iVar14 = 0;
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar6 = iVar7;
      if ((int)((iVar7 + -1 >> 0x1f & 0x1fU) + iVar7 + -1) >> 5 < iVar13) goto LAB_14ab7cb7d;
      uVar12 = puVar15[lVar8 + 1];
    }
    uVar5 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar6 = local_res10 + -1 + iVar14;
    if (iVar7 < iVar6) {
      iVar6 = iVar7;
    }
  }
LAB_14ab7cb7d:
  uVar12 = *(uint *)&(this->CacheResources).field_0x38;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar13);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->CacheResources).field_0x10 -
                       *(int *)&(this->CacheResources).field_0x44);
  TStack_60.Array =
       (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
        *)puVar1;
  if ((((int)uVar12 < 0) || (iVar7 < (int)uVar12)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  uVar5 = *(uint *)&(this->CacheResources).field_0x38;
  iVar7 = 0;
  if (uVar12 != uVar5) {
    puVar9 = *(undefined1 **)&(this->CacheResources).field_0x28;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar13 * 4);
    while (iVar7 = iVar16, uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar13) goto LAB_14ab7cc80;
      uVar12 = *(uint *)(puVar9 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar12 = local_res18 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14ab7cc80:
  while( true ) {
    if (*(int *)&(this->CacheResources).field_0x10 - *(int *)&(this->CacheResources).field_0x44 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>_>,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
         *)puVar1)) break;
    plVar10 = (longlong *)
              (*(longlong *)&this->CacheResources + (longlong)TStack_60.CurrentBitIndex * 0x20);
    if ((*plVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
    iVar13 = (*(code *)**(undefined8 **)*plVar10)();
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
    ::FindFirstSetBit(&TStack_60);
    iVar7 = iVar7 + iVar13;
  }
  return iVar7;
}

// IsMemoryBudgetFull @ 14ab7e2c0

bool __thiscall
UE::Mutable::Private::FWorkingMemoryManager::IsMemoryBudgetFull(FWorkingMemoryManager *this)

{
  ulonglong uVar1;
  
  if (this->BudgetBytes == 0) {
    return false;
  }
  uVar1 = GetCurrentMemoryBytes(this);
  return (ulonglong)((this->BudgetBytes * 9) / 10) < uVar1;
}

// LoadMaterial @ 14ab7e320

TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> * __thiscall
UE::Mutable::Private::FWorkingMemoryManager::LoadMaterial
          (FWorkingMemoryManager *this,
          TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *__return_storage_ptr__,
          FCacheAddress *param_1)

{
  uint uVar1;
  FProgramCache *this_00;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMaterial *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *pTVar9;
  FOpExecutionData *pFVar10;
  int *piVar11;
  TReferenceControllerBase<1> *pTVar12;
  FCacheAddress local_res18;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_48;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_38;
  
  if ((this->CurrentInstanceCache).Object == (FProgramCache *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  local_res18 = *param_1;
  bVar6 = false;
  this_00 = (this->CurrentInstanceCache).Object;
  if ((local_res18.At == 0) ||
     ((uint)(this_00->OpExecutionData).m_index0.ArrayNum <= local_res18.At)) {
LAB_14ab7e38f:
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar10 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                        (&this_00->OpExecutionData,&local_res18);
    if (pFVar10 == (FOpExecutionData *)0x0) goto LAB_14ab7e38f;
    if (pFVar10->DataType != Material) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data->DataType == EDataType::Material",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x348,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)(*pcVar5)();
        return pTVar9;
      }
    }
    uVar1 = (pFVar10->field5_0x4).DataTypeIndex;
    uVar8 = 0;
    if ((int)uVar1 < (this_00->MaterialResults).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)(*pcVar5)();
        return pTVar9;
      }
    }
    lVar2 = (this_00->MaterialResults).AllocatorInstance._padding_;
    pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)(int)uVar1 * 0x10);
    pFVar4 = *(FMaterial **)(lVar2 + (longlong)(int)uVar1 * 0x10);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar10->OpHitCount == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data->OpHitCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x34c,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)(*pcVar5)();
        return pTVar9;
      }
    }
    pFVar10->OpHitCount = pFVar10->OpHitCount - 1;
    if ((pFVar10->OpHitCount == 0) && (pFVar10->IsCacheLocked == '\0')) {
      FProgramCache::SetUnused(this_00,pFVar10);
      bVar6 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar12 = pTVar3;
    if (pFVar4 != (FMaterial *)0x0) {
      if (bVar6) {
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48.Object = (FResource *)pFVar4;
        local_48.SharedReferenceCount.ReferenceController = pTVar3;
        piVar11 = TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
                  ::Find((TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
                          *)&this->CacheResources,&local_48);
        if (piVar11 == (int *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CountPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                             ,0x62f,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)(*pcVar5)();
            return pTVar9;
          }
        }
        *piVar11 = *piVar11 + -1;
        if (*piVar11 == 0) {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_38.Object = (FResource *)pFVar4;
          local_38.SharedReferenceCount.ReferenceController = pTVar3;
          TMap<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
          ::FindAndRemoveChecked(&this->CacheResources,&local_38);
        }
      }
      __return_storage_ptr__->Object = pFVar4;
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      goto LAB_14ab7e543;
    }
  }
  __return_storage_ptr__->Object = (FMaterial *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14ab7e543:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return __return_storage_ptr__;
}

// LogWorkingMemory @ 14ab7e570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FWorkingMemoryManager::LogWorkingMemory
          (FWorkingMemoryManager *this,CodeRunner *param_1)

{
  int iVar1;
  atomic<__int64> aVar2;
  atomic<__int64> aVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  atomic<__int64> aVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  atomic<__int64> *paVar13;
  ulonglong uVar14;
  atomic<__int64> aVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  bool bVar19;
  ulonglong local_res8;
  atomic<__int64> local_res18;
  atomic<__int64> local_res20;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1339,"Mutable_LogWorkingMemory",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x53b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1339);
  }
  uVar10 = GetRomBytes(this);
  GetCacheBytes(this);
  uVar11 = GetTrackedCacheBytes(this);
  iVar1 = (this->PooledImages).ArrayNum;
  uVar18 = 0;
  plVar17 = (longlong *)(this->PooledImages).AllocatorInstance._padding_;
  plVar16 = plVar17 + (longlong)iVar1 * 2;
  uVar14 = uVar18;
  while( true ) {
    if ((this->PooledImages).ArrayNum != iVar1) {
      local_res8 = local_res8 & 0xffffffffffffff00;
      `TCheckedPointerIterator<TSharedPtr<UE::Mutable::Private::FImage,1>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (plVar17 == plVar16) break;
    if ((*plVar17 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = (*(code *)**(undefined8 **)*plVar17)();
    uVar14 = (ulonglong)(uint)((int)uVar14 + iVar12);
    plVar17 = plVar17 + 2;
  }
  iVar1 = (this->TempImages).ArrayNum;
  plVar17 = (longlong *)(this->TempImages).AllocatorInstance._padding_;
  plVar16 = plVar17 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->TempImages).ArrayNum != iVar1) {
      local_res18 = (atomic<__int64>)((ulonglong)local_res18 & 0xffffffffffffff00);
      `TCheckedPointerIterator<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res18);
    }
    if (plVar17 == plVar16) break;
    if ((*plVar17 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = (*(code *)**(undefined8 **)*plVar17)();
    uVar18 = (ulonglong)(uint)((int)uVar18 + iVar12);
    plVar17 = plVar17 + 2;
  }
  iVar1 = (this->TempMeshes).ArrayNum;
  plVar17 = (longlong *)(this->TempMeshes).AllocatorInstance._padding_;
  plVar16 = plVar17 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->TempMeshes).ArrayNum != iVar1) {
      local_res20 = (atomic<__int64>)((ulonglong)local_res20 & 0xffffffffffffff00);
      `TCheckedPointerIterator<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res20);
    }
    if (plVar17 == plVar16) break;
    if ((*plVar17 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = (*(code *)**(undefined8 **)*plVar17)();
    uVar18 = (ulonglong)(uint)((int)uVar18 + iVar12);
    plVar17 = plVar17 + 2;
  }
  paVar13 = MemoryCounters::FImageMemoryCounter::Get();
  aVar2 = *paVar13;
  paVar13 = MemoryCounters::FMeshMemoryCounter::Get();
  aVar15 = *paVar13;
  local_res20 = aVar15;
  paVar13 = MemoryCounters::FStreamingMemoryCounter::Get();
  aVar3 = *paVar13;
  local_res18 = ::Counter;
  local_res8 = (longlong)::Counter + (longlong)aVar3 + (longlong)aVar15 + (longlong)aVar2;
  if (4 < (byte)LogMutableCore._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
    aVar15 = local_res20;
  }
  aVar7 = local_res18;
  uVar6 = local_res8;
  if ((__GTraceCounterMutableRuntime_MemTemp.Value != uVar18) &&
     (__GTraceCounterMutableRuntime_MemTemp.Value = uVar18, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterMutableRuntime_MemTemp.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMutableRuntime_MemTemp.CounterName,TraceCounterType_Int,
                         __GTraceCounterMutableRuntime_MemTemp.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_MemTemp.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_MemTemp.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_MemTemp.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_MemTemp.CounterId._0_2_,
               __GTraceCounterMutableRuntime_MemTemp.Value);
  }
  if ((__GTraceCounterMutableRuntime_MemPool.Value != uVar14) &&
     (__GTraceCounterMutableRuntime_MemPool.Value = uVar14, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterMutableRuntime_MemPool.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMutableRuntime_MemPool.CounterName,TraceCounterType_Int,
                         __GTraceCounterMutableRuntime_MemPool.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_MemPool.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_MemPool.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_MemPool.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_MemPool.CounterId._0_2_,
               __GTraceCounterMutableRuntime_MemPool.Value);
  }
  uVar14 = (ulonglong)uVar11;
  if ((__GTraceCounterMutableRuntime_MemCache.Value != uVar14) &&
     (__GTraceCounterMutableRuntime_MemCache.Value = uVar14, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterMutableRuntime_MemCache.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMutableRuntime_MemCache.CounterName,TraceCounterType_Int,
                         __GTraceCounterMutableRuntime_MemCache.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_MemCache.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_MemCache.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_MemCache.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_MemCache.CounterId._0_2_,
               __GTraceCounterMutableRuntime_MemCache.Value);
  }
  uVar14 = (ulonglong)uVar10;
  if ((__GTraceCounterMutableRuntime_MemRom.Value != uVar14) &&
     (__GTraceCounterMutableRuntime_MemRom.Value = uVar14, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterMutableRuntime_MemRom.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMutableRuntime_MemRom.CounterName,TraceCounterType_Int,
                         __GTraceCounterMutableRuntime_MemRom.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_MemRom.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_MemRom.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_MemRom.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_MemRom.CounterId._0_2_,
               __GTraceCounterMutableRuntime_MemRom.Value);
  }
  if (((atomic<__int64>)__GTraceCounterMutableRuntime_MemInternal.Value != aVar7) &&
     (__GTraceCounterMutableRuntime_MemInternal.Value = (long64)aVar7, -1 < CountersChannel->Enabled
     )) {
    if (__GTraceCounterMutableRuntime_MemInternal.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMutableRuntime_MemInternal.CounterName,TraceCounterType_Int,
                         __GTraceCounterMutableRuntime_MemInternal.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_MemInternal.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_MemInternal.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_MemInternal.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_MemInternal.CounterId._0_2_,
               __GTraceCounterMutableRuntime_MemInternal.Value);
  }
  if (((atomic<__int64>)__GTraceCounterMutableRuntime_MemMesh.Value != aVar15) &&
     (__GTraceCounterMutableRuntime_MemMesh.Value = (long64)aVar15, -1 < CountersChannel->Enabled))
  {
    if (__GTraceCounterMutableRuntime_MemMesh.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMutableRuntime_MemMesh.CounterName,TraceCounterType_Int,
                         __GTraceCounterMutableRuntime_MemMesh.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_MemMesh.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_MemMesh.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_MemMesh.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_MemMesh.CounterId._0_2_,
               __GTraceCounterMutableRuntime_MemMesh.Value);
  }
  if (((atomic<__int64>)__GTraceCounterMutableRuntime_MemImage.Value != aVar2) &&
     (__GTraceCounterMutableRuntime_MemImage.Value = (long64)aVar2, -1 < CountersChannel->Enabled))
  {
    if (__GTraceCounterMutableRuntime_MemImage.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMutableRuntime_MemImage.CounterName,TraceCounterType_Int,
                         __GTraceCounterMutableRuntime_MemImage.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_MemImage.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_MemImage.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_MemImage.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_MemImage.CounterId._0_2_,
               __GTraceCounterMutableRuntime_MemImage.Value);
  }
  if (((atomic<__int64>)__GTraceCounterMutableRuntime_MemStream.Value != aVar3) &&
     (__GTraceCounterMutableRuntime_MemStream.Value = (long64)aVar3, -1 < CountersChannel->Enabled))
  {
    if (__GTraceCounterMutableRuntime_MemStream.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMutableRuntime_MemStream.CounterName,TraceCounterType_Int,
                         __GTraceCounterMutableRuntime_MemStream.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_MemStream.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_MemStream.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_MemStream.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_MemStream.CounterId._0_2_,
               __GTraceCounterMutableRuntime_MemStream.Value);
  }
  if ((__GTraceCounterMutableRuntime_MemTotal.Value != uVar6) &&
     (__GTraceCounterMutableRuntime_MemTotal.Value = uVar6, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterMutableRuntime_MemTotal.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMutableRuntime_MemTotal.CounterName,TraceCounterType_Int,
                         __GTraceCounterMutableRuntime_MemTotal.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_MemTotal.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_MemTotal.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_MemTotal.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_MemTotal.CounterId._0_2_,
               __GTraceCounterMutableRuntime_MemTotal.Value);
  }
  lVar4 = this->BudgetBytes;
  if ((__GTraceCounterMutableRuntime_MemBudget.Value != lVar4) &&
     (__GTraceCounterMutableRuntime_MemBudget.Value = lVar4, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterMutableRuntime_MemBudget.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMutableRuntime_MemBudget.CounterName,TraceCounterType_Int,
                         __GTraceCounterMutableRuntime_MemBudget.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_MemBudget.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_MemBudget.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_MemBudget.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_MemBudget.CounterId._0_2_,
               __GTraceCounterMutableRuntime_MemBudget.Value);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// MarkRomUsed @ 14ab7ed20

void __thiscall
UE::Mutable::Private::FWorkingMemoryManager::MarkRomUsed
          (FWorkingMemoryManager *this,int param_1,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_2)

{
  longlong *plVar1;
  int iVar2;
  FModel *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  ulong64 uVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined1 local_res8 [8];
  
  if ((param_2->Object == (FModel *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("pModel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                         ,0x750,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this->BudgetBytes == 0) {
    return;
  }
  this->RomTick = this->RomTick + 1;
  pFVar3 = param_2->Object;
  if ((pFVar3 == (FModel *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InModel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                         ,0x566,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar2 = (this->CachePerModel).ArrayNum;
  pTVar12 = (TReferenceControllerBase<1> *)(this->CachePerModel).AllocatorInstance._padding_;
  pTVar14 = pTVar12 + (longlong)iVar2 * 4;
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  do {
    if ((this->CachePerModel).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar12 == pTVar14) goto LAB_14ab7ee39;
    pTVar4 = *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount;
    pTVar11 = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar7 = pTVar4->SharedReferenceCount;
      do {
        pTVar11 = pTVar13;
        if (aVar7 == (atomic<int>)0x0) goto LAB_14ab7ee11;
        LOCK();
        aVar9 = pTVar4->SharedReferenceCount;
        bVar8 = aVar7 == aVar9;
        if (bVar8) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar9 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar9;
      } while (!bVar8);
      pTVar11 = pTVar4;
      if (((FModel *)pTVar12->_padding_ != (FModel *)0x0) &&
         ((FModel *)pTVar12->_padding_ == pFVar3)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        pTVar13 = pTVar12;
LAB_14ab7ee39:
        uVar10 = 0;
        if (param_1 < (int)pTVar13[2]._padding_) {
          uVar10 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar1 = (longlong *)(pTVar13[1]._padding_ + (longlong)param_1 * 0x10);
        *plVar1 = *plVar1 + 1;
        uVar5 = this->RomTick;
        uVar10 = 0;
        if (param_1 < (int)pTVar13[2]._padding_) {
          uVar10 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(ulong64 *)(pTVar13[1]._padding_ + 8 + (longlong)param_1 * 0x10) = uVar5;
        return;
      }
    }
LAB_14ab7ee11:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    pTVar12 = pTVar12 + 4;
  } while( true );
}

