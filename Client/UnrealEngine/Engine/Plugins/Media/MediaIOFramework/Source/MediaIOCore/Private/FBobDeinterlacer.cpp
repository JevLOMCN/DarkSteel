// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// FBobDeinterlacer @ 14d789890

FBobDeinterlacer * __thiscall
UE::MediaIOCore::FBobDeinterlacer::FBobDeinterlacer
          (FBobDeinterlacer *this,
          TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *param_1,EMediaIOInterlaceFieldOrder param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> local_28;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_28,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  *(undefined ***)this = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x8,&local_28);
  this->field_0x20 = param_2;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_28);
  *(undefined ***)this = &___7FBobDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return this;
}

// Deinterlace @ 14d7a1d20

TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> * __thiscall
UE::MediaIOCore::FBobDeinterlacer::Deinterlace
          (FBobDeinterlacer *this,
          TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FVideoFrame *param_1)

{
  int *piVar1;
  EMediaTextureSampleFormat EVar2;
  uint uVar3;
  FColorFormatArgs *pFVar4;
  TOptional<FTimecode> *pTVar5;
  FFrameRate *pFVar6;
  FTimespan FVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  FMediaIOCoreTextureSampleBase *pFVar10;
  int iVar11;
  uint uVar12;
  TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong *plVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  size_t sVar18;
  void *pvVar19;
  bool bVar20;
  ForAnyElementType local_d8;
  int local_d0 [2];
  ForAnyElementType local_c8;
  int local_c0 [2];
  FMediaIOCoreTextureSampleBase *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FMediaIOCoreTextureSampleBase *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FMediaIOCoreTextureSampleBase *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FMediaIOCoreTextureSampleBase *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  plVar15 = (longlong *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x8,&local_78);
  plVar14 = plVar15;
  if (*(int *)&this->field_0x18 != 0) {
    plVar14 = *(longlong **)&this->field_0x10;
  }
  (**(code **)(*plVar14 + 0x60))(plVar14,&local_88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x8,&local_60);
  if (*(int *)&this->field_0x18 != 0) {
    plVar15 = *(longlong **)&this->field_0x10;
  }
  (**(code **)(*plVar15 + 0x60))(plVar15,&local_98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  if ((local_88 != (FMediaIOCoreTextureSampleBase *)0x0) &&
     (local_98 != (FMediaIOCoreTextureSampleBase *)0x0)) {
    uVar12 = param_1->BufferSize;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0[0] = 0;
    local_c0[1] = 0;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if (0 < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar12,&local_c8,0,local_c0 + 1);
    }
    uVar12 = param_1->BufferSize;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0[0] = 0;
    local_d0[1] = 0;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if (0 < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar12,&local_d8,0,local_d0 + 1);
    }
    bVar20 = this->field_0x20 != '\0';
    uVar12 = param_1->Height;
    uVar17 = (uint)bVar20;
    if (bVar20 < uVar12) {
      do {
        uVar12 = param_1->Stride;
        pvVar19 = (void *)((ulonglong)(uVar12 * uVar17) + (longlong)param_1->VideoBuffer);
        if (((pvVar19 == (void *)0x0) && (uVar12 != 0)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar20)) {
          pcVar8 = (code *)swi(3);
          pTVar13 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar8)();
          return pTVar13;
        }
        iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,uVar12,&local_c8,local_c0,local_c0 + 1);
        if (uVar12 != 0) {
          memcpy(local_c8.Data + iVar11,pvVar19,(longlong)(int)uVar12);
        }
        uVar12 = param_1->Stride;
        if (((pvVar19 == (void *)0x0) && (uVar12 != 0)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar20)) {
          pcVar8 = (code *)swi(3);
          pTVar13 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar8)();
          return pTVar13;
        }
        iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,uVar12,&local_c8,local_c0,local_c0 + 1);
        if (uVar12 != 0) {
          memcpy(local_c8.Data + iVar11,pvVar19,(longlong)(int)uVar12);
        }
        uVar12 = param_1->Height;
        uVar17 = uVar17 + 2;
      } while (uVar17 < uVar12);
    }
    bVar20 = this->field_0x20 == '\0';
    uVar17 = (uint)bVar20;
    if (bVar20 < uVar12) {
      do {
        uVar12 = param_1->Stride;
        pvVar19 = (void *)((ulonglong)(uVar12 * uVar17) + (longlong)param_1->VideoBuffer);
        if (((pvVar19 == (void *)0x0) && (uVar12 != 0)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar20)) {
          pcVar8 = (code *)swi(3);
          pTVar13 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar8)();
          return pTVar13;
        }
        iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,uVar12,&local_d8,local_d0,local_d0 + 1);
        if (uVar12 != 0) {
          memcpy(local_d8.Data + iVar11,pvVar19,(longlong)(int)uVar12);
        }
        uVar12 = param_1->Stride;
        if (((pvVar19 == (void *)0x0) && (uVar12 != 0)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar20)) {
          pcVar8 = (code *)swi(3);
          pTVar13 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar8)();
          return pTVar13;
        }
        iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,uVar12,&local_d8,local_d0,local_d0 + 1);
        if (uVar12 != 0) {
          memcpy(local_d8.Data + iVar11,pvVar19,(longlong)(int)uVar12);
        }
        uVar17 = uVar17 + 2;
      } while (uVar17 < param_1->Height);
    }
    if ((local_88 == (FMediaIOCoreTextureSampleBase *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> *)
                (*pcVar8)();
      return pTVar13;
    }
    pFVar10 = local_88;
    pFVar4 = param_1->ColorFormatArgs;
    pTVar5 = param_1->Timecode;
    pFVar6 = param_1->FrameRate;
    uVar12 = param_1->Stride;
    FVar7.Ticks = (param_1->Time).Ticks;
    EVar2 = param_1->SampleFormat;
    uVar17 = param_1->Height;
    uVar3 = param_1->Width;
    (**(code **)(local_88->_padding_ + 0x180))();
    bVar20 = FMediaIOCoreTextureSampleBase::SetProperties
                       (pFVar10,uVar12,uVar3,uVar17,EVar2,FVar7,pFVar6,pTVar5,pFVar4);
    FVar9.Data = local_c8.Data;
    if (bVar20) {
      sVar18 = (size_t)local_c0[0];
      if (local_c0[0] != 0) {
        piVar1 = &(pFVar10->Buffer).ArrayMax;
        (pFVar10->Buffer).ArrayNum = local_c0[0];
        Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                  (1,1,local_c0[0],*piVar1,&(pFVar10->Buffer).AllocatorInstance,local_c0[0],piVar1);
        memcpy((pFVar10->Buffer).AllocatorInstance.Data,FVar9.Data,sVar18);
        if ((local_88 == (FMediaIOCoreTextureSampleBase *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar20)) {
          pcVar8 = (code *)swi(3);
          pTVar13 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar8)();
          return pTVar13;
        }
        local_b8 = local_88;
        pTStack_b0 = pTStack_80;
        if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_80->SharedReferenceCount =
               (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_88 == (FMediaIOCoreTextureSampleBase *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar20)) {
          pcVar8 = (code *)swi(3);
          pTVar13 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar8)();
          return pTVar13;
        }
        pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar16 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 <
             pFVar16 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          pTVar13 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar8)();
          return pTVar13;
        }
        iVar11 = __return_storage_ptr__->ArrayNum;
        if (iVar11 == __return_storage_ptr__->ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        __return_storage_ptr__->ArrayNum = iVar11 + 1;
        *(FMediaIOCoreTextureSampleBase **)pFVar16 = local_b8;
        *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTStack_b0;
        if (pTStack_b0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_b0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_b0->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_b0);
      }
    }
    if (__return_storage_ptr__->ArrayNum != 0) {
      if ((local_98 == (FMediaIOCoreTextureSampleBase *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> *
                  )(*pcVar8)();
        return pTVar13;
      }
      pFVar10 = local_98;
      pFVar4 = param_1->ColorFormatArgs;
      pTVar5 = param_1->Timecode;
      pFVar6 = param_1->FrameRate;
      FVar7.Ticks = (param_1->Time).Ticks;
      EVar2 = param_1->SampleFormat;
      uVar12 = param_1->Height;
      uVar17 = param_1->Width;
      uVar3 = param_1->Stride;
      (**(code **)(local_98->_padding_ + 0x180))();
      bVar20 = FMediaIOCoreTextureSampleBase::SetProperties
                         (pFVar10,uVar3,uVar17,uVar12,EVar2,FVar7,pFVar6,pTVar5,pFVar4);
      FVar9.Data = local_d8.Data;
      if (bVar20) {
        sVar18 = (size_t)local_d0[0];
        if (local_d0[0] != 0) {
          piVar1 = &(pFVar10->Buffer).ArrayMax;
          (pFVar10->Buffer).ArrayNum = local_d0[0];
          Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                    (1,1,local_d0[0],*piVar1,&(pFVar10->Buffer).AllocatorInstance,local_d0[0],piVar1
                    );
          memcpy((pFVar10->Buffer).AllocatorInstance.Data,FVar9.Data,sVar18);
          if ((local_98 == (FMediaIOCoreTextureSampleBase *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar20)) {
            pcVar8 = (code *)swi(3);
            pTVar13 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                       *)(*pcVar8)();
            return pTVar13;
          }
          local_a8 = local_98;
          pTStack_a0 = pTStack_90;
          if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_90->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_98 == (FMediaIOCoreTextureSampleBase *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar20)) {
            pcVar8 = (code *)swi(3);
            pTVar13 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                       *)(*pcVar8)();
            return pTVar13;
          }
          pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 <
               pFVar16 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar8 = (code *)swi(3);
            pTVar13 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                       *)(*pcVar8)();
            return pTVar13;
          }
          iVar11 = __return_storage_ptr__->ArrayNum;
          if (iVar11 == __return_storage_ptr__->ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
          __return_storage_ptr__->ArrayNum = iVar11 + 1;
          *(FMediaIOCoreTextureSampleBase **)pFVar16 = local_a8;
          *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTStack_a0;
          if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_a0->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_a0);
        }
      }
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  return __return_storage_ptr__;
}

