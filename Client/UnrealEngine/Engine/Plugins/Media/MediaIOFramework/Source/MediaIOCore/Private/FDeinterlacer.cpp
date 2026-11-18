// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// ~FDeinterlacer @ 14d78c550

void __thiscall UE::MediaIOCore::FDeinterlacer::~FDeinterlacer(FDeinterlacer *this)

{
  this->_padding_ = (longlong)&___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AcquireSampleDelegate);
  return;
}

// Deinterlace @ 14d7a25b0

TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> * __thiscall
UE::MediaIOCore::FDeinterlacer::Deinterlace
          (FDeinterlacer *this,
          TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FVideoFrame *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<unsigned_char,TAlignedHeapAllocator<4096>_> *pTVar3;
  uint uVar4;
  EMediaTextureSampleFormat EVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FColorFormatArgs *pFVar9;
  TOptional<FTimecode> *pTVar10;
  FFrameRate *pFVar11;
  FTimespan FVar12;
  void *_Src;
  code *pcVar13;
  FMediaIOCoreTextureSampleBase *this_00;
  bool bVar14;
  int iVar15;
  TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  FMediaIOCoreTextureSampleBase *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FMediaIOCoreTextureSampleBase *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FReadAccessScope local_68;
  
  plVar17 = (longlong *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->AcquireSampleDelegate,
             &local_68);
  if (*(int *)&(this->AcquireSampleDelegate).field_0x10 != 0) {
    plVar17 = *(longlong **)&(this->AcquireSampleDelegate).field_0x8;
  }
  (**(code **)(*plVar17 + 0x60))(plVar17,&local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (local_78 != (FMediaIOCoreTextureSampleBase *)0x0) {
    if ((local_78 == (FMediaIOCoreTextureSampleBase *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      pTVar16 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> *)
                (*pcVar13)();
      return pTVar16;
    }
    this_00 = local_78;
    uVar4 = param_1->BufferSize;
    pFVar9 = param_1->ColorFormatArgs;
    pTVar10 = param_1->Timecode;
    pFVar11 = param_1->FrameRate;
    FVar12.Ticks = (param_1->Time).Ticks;
    EVar5 = param_1->SampleFormat;
    uVar6 = param_1->Height;
    uVar7 = param_1->Width;
    uVar8 = param_1->Stride;
    _Src = param_1->VideoBuffer;
    (**(code **)(local_78->_padding_ + 0x180))();
    bVar14 = FMediaIOCoreTextureSampleBase::SetProperties
                       (this_00,uVar8,uVar7,uVar6,EVar5,FVar12,pFVar11,pTVar10,pFVar9);
    if ((bVar14) && (_Src != (void *)0x0)) {
      pTVar3 = &this_00->Buffer;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      piVar2 = &(this_00->Buffer).ArrayMax;
      piVar1 = &(this_00->Buffer).ArrayNum;
      *piVar1 = 0;
      if ((this_00->Buffer).ArrayMax < (int)uVar4) {
        Core::Private::ReallocTo<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                  (1,1,uVar4,&pTVar3->AllocatorInstance,0,piVar2);
      }
      iVar15 = Core::Private::ReallocGrow<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                         (1,1,uVar4,&pTVar3->AllocatorInstance,piVar1,piVar2);
      if (uVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data + iVar15,_Src,(longlong)(int)uVar4);
      }
      if ((local_78 == (FMediaIOCoreTextureSampleBase *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        pTVar16 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> *
                  )(*pcVar13)();
        return pTVar16;
      }
      local_88 = local_78;
      pTStack_80 = pTStack_70;
      if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_78 == (FMediaIOCoreTextureSampleBase *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        pTVar16 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> *
                  )(*pcVar13)();
        return pTVar16;
      }
      pFVar18 = (__return_storage_ptr__->AllocatorInstance).Data;
      piVar2 = &__return_storage_ptr__->ArrayMax;
      if (((pFVar18 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar18 + (longlong)*piVar2 * 0x10)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar13 = (code *)swi(3);
        pTVar16 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> *
                  )(*pcVar13)();
        return pTVar16;
      }
      iVar15 = __return_storage_ptr__->ArrayNum;
      if (iVar15 == *piVar2) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      pFVar18 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
      __return_storage_ptr__->ArrayNum = iVar15 + 1;
      *(FMediaIOCoreTextureSampleBase **)pFVar18 = local_88;
      *(TReferenceControllerBase<1> **)(pFVar18 + 8) = pTStack_80;
      if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_80);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return __return_storage_ptr__;
}

