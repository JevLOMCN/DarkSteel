// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// FDiscardDeinterlacer @ 14d789a70

FDiscardDeinterlacer * __thiscall
UE::MediaIOCore::FDiscardDeinterlacer::FDiscardDeinterlacer
          (FDiscardDeinterlacer *this,
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
  *(undefined ***)this = &___7FDiscardDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return this;
}

// Deinterlace @ 14d7a2920

TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> * __thiscall
UE::MediaIOCore::FDiscardDeinterlacer::Deinterlace
          (FDiscardDeinterlacer *this,
          TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FVideoFrame *param_1)

{
  int *piVar1;
  uint uVar2;
  EMediaTextureSampleFormat EVar3;
  uint uVar4;
  FColorFormatArgs *pFVar5;
  TOptional<FTimecode> *pTVar6;
  FFrameRate *pFVar7;
  FTimespan FVar8;
  code *pcVar9;
  ForAnyElementType _Src;
  FMediaIOCoreTextureSampleBase *this_00;
  int iVar10;
  TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  size_t _Size;
  uint uVar14;
  void *_Src_00;
  bool bVar15;
  ForAnyElementType local_88;
  int local_80 [2];
  FMediaIOCoreTextureSampleBase *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FMediaIOCoreTextureSampleBase *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FReadAccessScope local_58;
  
  plVar12 = (longlong *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x8,&local_58);
  if (*(int *)&this->field_0x18 != 0) {
    plVar12 = *(longlong **)&this->field_0x10;
  }
  (**(code **)(*plVar12 + 0x60))(plVar12,&local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if (local_78 != (FMediaIOCoreTextureSampleBase *)0x0) {
    uVar14 = param_1->BufferSize >> 1;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80[0] = 0;
    local_80[1] = 0;
    if (uVar14 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar14,&local_88,0,local_80 + 1);
    }
    bVar15 = this->field_0x20 != '\0';
    uVar14 = (uint)bVar15;
    if ((uint)bVar15 < param_1->Height) {
      do {
        uVar2 = param_1->Stride;
        _Src_00 = (void *)((ulonglong)(uVar2 * uVar14) + (longlong)param_1->VideoBuffer);
        if (((_Src_00 == (void *)0x0) && (uVar2 != 0)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          pTVar11 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar9)();
          return pTVar11;
        }
        iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,uVar2,&local_88,local_80,local_80 + 1);
        if (uVar2 != 0) {
          memcpy(local_88.Data + iVar10,_Src_00,(longlong)(int)uVar2);
        }
        uVar14 = uVar14 + 2;
      } while (uVar14 < param_1->Height);
    }
    if ((local_78 == (FMediaIOCoreTextureSampleBase *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      pTVar11 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> *)
                (*pcVar9)();
      return pTVar11;
    }
    this_00 = local_78;
    uVar14 = param_1->Height;
    pFVar5 = param_1->ColorFormatArgs;
    pTVar6 = param_1->Timecode;
    pFVar7 = param_1->FrameRate;
    FVar8.Ticks = (param_1->Time).Ticks;
    EVar3 = param_1->SampleFormat;
    uVar2 = param_1->Width;
    uVar4 = param_1->Stride;
    (**(code **)(local_78->_padding_ + 0x180))();
    bVar15 = FMediaIOCoreTextureSampleBase::SetProperties
                       (this_00,uVar4,uVar2,uVar14 >> 1,EVar3,FVar8,pFVar7,pTVar6,pFVar5);
    _Src.Data = local_88.Data;
    if (bVar15) {
      _Size = (size_t)local_80[0];
      if (local_80[0] != 0) {
        piVar1 = &(this_00->Buffer).ArrayMax;
        (this_00->Buffer).ArrayNum = local_80[0];
        Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                  (1,1,local_80[0],*piVar1,&(this_00->Buffer).AllocatorInstance,local_80[0],piVar1);
        memcpy((this_00->Buffer).AllocatorInstance.Data,_Src.Data,_Size);
        if ((local_78 == (FMediaIOCoreTextureSampleBase *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          pTVar11 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar9)();
          return pTVar11;
        }
        local_68 = local_78;
        pTStack_60 = pTStack_70;
        if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_70->SharedReferenceCount =
               (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_78 == (FMediaIOCoreTextureSampleBase *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          pTVar11 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar9)();
          return pTVar11;
        }
        pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar13 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar13 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          pTVar11 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar9)();
          return pTVar11;
        }
        iVar10 = __return_storage_ptr__->ArrayNum;
        if (iVar10 == __return_storage_ptr__->ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
        __return_storage_ptr__->ArrayNum = iVar10 + 1;
        *(FMediaIOCoreTextureSampleBase **)pFVar13 = local_68;
        *(TReferenceControllerBase<1> **)(pFVar13 + 8) = pTStack_60;
        if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_60->SharedReferenceCount =
               (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_60);
      }
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return __return_storage_ptr__;
}

