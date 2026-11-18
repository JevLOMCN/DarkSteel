// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 3

// FBlendDeinterlacer @ 14d789810

FBlendDeinterlacer * __thiscall
UE::MediaIOCore::FBlendDeinterlacer::FBlendDeinterlacer
          (FBlendDeinterlacer *this,
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
  *(undefined ***)this = &___7FBlendDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return this;
}

// operator() @ 14d78f9d0

void __thiscall
`UE::MediaIOCore::FBlendDeinterlacer::Deinterlace'::__l5::<lambda_1>::operator()
          (void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  plVar2 = *(longlong **)this;
  iVar1 = *(int *)((longlong)plVar2 + 0xc);
  lVar3 = *plVar2;
  lVar4 = *plVar2;
  lVar5 = **(longlong **)((longlong)this + 8);
  uVar7 = 0;
  if (iVar1 != 0) {
    do {
      *(char *)(uVar7 + (ulonglong)(uint)(iVar1 * param_1) + lVar5) =
           (char)(*(byte *)(uVar7 + (ulonglong)(uint)(iVar1 * param_1 * 2) + lVar3) + 1 +
                  (uint)*(byte *)(uVar7 + (ulonglong)(uint)((param_1 * 2 + 1) * iVar1) + lVar4) >> 1
                 );
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(*(longlong *)this + 0xc));
  }
  return;
}

// Deinterlace @ 14d7a19a0

TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> * __thiscall
UE::MediaIOCore::FBlendDeinterlacer::Deinterlace
          (FBlendDeinterlacer *this,
          TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FVideoFrame *param_1)

{
  int *piVar1;
  EMediaTextureSampleFormat EVar2;
  uint uVar3;
  uint uVar4;
  FColorFormatArgs *pFVar5;
  TOptional<FTimecode> *pTVar6;
  FFrameRate *pFVar7;
  FTimespan FVar8;
  code *pcVar9;
  ForAnyElementType _Src;
  FMediaIOCoreTextureSampleBase *this_00;
  bool bVar10;
  int iVar11;
  TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  size_t _Size;
  <lambda_1> local_res10;
  ForAnyElementType local_b8;
  int local_b0 [2];
  FMediaIOCoreTextureSampleBase *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FMediaIOCoreTextureSampleBase *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FVideoFrame *local_88;
  ForAnyElementType *local_80;
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  FVideoFrame **local_60;
  FReadAccessScope local_58;
  
  plVar13 = (longlong *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x8,&local_58);
  if (*(int *)&this->field_0x18 != 0) {
    plVar13 = *(longlong **)&this->field_0x10;
  }
  (**(code **)(*plVar13 + 0x60))(plVar13,&local_98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if (local_98 != (FMediaIOCoreTextureSampleBase *)0x0) {
    uVar15 = param_1->BufferSize >> 1;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0[0] = 0;
    local_b0[1] = 0;
    iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,uVar15,&local_b8,local_b0,local_b0 + 1);
    memset(local_b8.Data + iVar11,0,(ulonglong)uVar15);
    local_80 = &local_b8;
    local_68 = Core::Private::Function::
               TFunctionRefCaller<`UE::MediaIOCore::FBlendDeinterlacer::Deinterlace'::__l5::<lambda_1>,void,int>
               ::Call;
    local_60 = &local_88;
    local_78.DataPtr = (void **)0x0;
    local_res10 = SUB81(__return_storage_ptr__,0);
    local_78.ArrayNum = 0;
    local_88 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_1->Height >> 1,1,
               (TFunctionRef<void___cdecl(int)> *)&local_68,local_res10,None,&local_78);
    if ((local_98 == (FMediaIOCoreTextureSampleBase *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> *)
                (*pcVar9)();
      return pTVar12;
    }
    this_00 = local_98;
    uVar15 = param_1->Height;
    pFVar5 = param_1->ColorFormatArgs;
    pTVar6 = param_1->Timecode;
    pFVar7 = param_1->FrameRate;
    FVar8.Ticks = (param_1->Time).Ticks;
    EVar2 = param_1->SampleFormat;
    uVar3 = param_1->Width;
    uVar4 = param_1->Stride;
    (**(code **)(local_98->_padding_ + 0x180))();
    bVar10 = FMediaIOCoreTextureSampleBase::SetProperties
                       (this_00,uVar4,uVar3,uVar15 >> 1,EVar2,FVar8,pFVar7,pTVar6,pFVar5);
    _Src.Data = local_b8.Data;
    if (bVar10) {
      _Size = (size_t)local_b0[0];
      if (local_b0[0] != 0) {
        piVar1 = &(this_00->Buffer).ArrayMax;
        (this_00->Buffer).ArrayNum = local_b0[0];
        Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                  (1,1,local_b0[0],*piVar1,&(this_00->Buffer).AllocatorInstance,local_b0[0],piVar1);
        memcpy((this_00->Buffer).AllocatorInstance.Data,_Src.Data,_Size);
        if ((local_98 == (FMediaIOCoreTextureSampleBase *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          pTVar12 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar9)();
          return pTVar12;
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
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          pTVar12 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar9)();
          return pTVar12;
        }
        pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
        piVar1 = &__return_storage_ptr__->ArrayMax;
        if (((pFVar14 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < pFVar14 + (longlong)*piVar1 * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pTVar12 = (TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar9)();
          return pTVar12;
        }
        iVar11 = __return_storage_ptr__->ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        __return_storage_ptr__->ArrayNum = iVar11 + 1;
        *(FMediaIOCoreTextureSampleBase **)pFVar14 = local_a8;
        *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTStack_a0;
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
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  return __return_storage_ptr__;
}

