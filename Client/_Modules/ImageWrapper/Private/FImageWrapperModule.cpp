// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 12

// CreateImageWrapper @ 142607620

TSharedPtr<IImageWrapper,1> * __thiscall
FImageWrapperModule::CreateImageWrapper
          (FImageWrapperModule *this,TSharedPtr<IImageWrapper,1> *__return_storage_ptr__,
          EImageFormat param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IImageWrapper,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedPtr<IImageWrapper,1> local_1c8;
  TReferenceControllerBase<1> *local_1b8;
  TReferenceControllerBase<1> *pTStack_1b0;
  TSharedPtr<IImageWrapper,1> local_1a8;
  TReferenceControllerBase<1> *local_198;
  TReferenceControllerBase<1> *pTStack_190;
  TSharedPtr<IImageWrapper,1> local_188;
  TReferenceControllerBase<1> *local_178;
  TReferenceControllerBase<1> *pTStack_170;
  TSharedPtr<IImageWrapper,1> local_168;
  TReferenceControllerBase<1> *local_158;
  TReferenceControllerBase<1> *pTStack_150;
  TSharedPtr<IImageWrapper,1> local_148;
  TReferenceControllerBase<1> *local_138;
  TReferenceControllerBase<1> *pTStack_130;
  TSharedPtr<IImageWrapper,1> local_128;
  TReferenceControllerBase<1> *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  TSharedPtr<IImageWrapper,1> local_108;
  TReferenceControllerBase<1> *local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  TSharedPtr<IImageWrapper,1> local_e8;
  TReferenceControllerBase<1> *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  TSharedPtr<IImageWrapper,1> local_c8;
  TReferenceControllerBase<1> *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  TSharedPtr<IImageWrapper,1> local_a8;
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  TSharedPtr<IImageWrapper,1> local_88;
  TReferenceControllerBase<1> *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedPtr<IImageWrapper,1> local_68;
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TSharedPtr<IImageWrapper,1> local_48;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_class_TSharedPtr<IImageWrapper,1>___cdecl_FImageWrapperModule::CreateImageWrapper(EImageFormat,wchar_t_const*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId81,"ImageWrapper.Create",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperModule.cpp"
               ,0x51);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_class_TSharedPtr<IImageWrapper,1>___cdecl_FImageWrapperModule::CreateImageWrapper(EImageFormat,wchar_t_const*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId81);
  }
  __return_storage_ptr__->Object = (IImageWrapper *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  switch(param_1) {
  case PNG:
    pTVar3 = ::operator_new(0xd8);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFPngImageWrapper___00_SharedPointerInternals__6B_;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar3[5]._padding_ = 0xff;
      *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[7]._padding_ = 0;
      pTVar3[1]._padding_ = (longlong)&___7FPngImageWrapper__6B_;
      pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar3[8]._padding_ = 0;
      *(undefined1 *)((longlong)&pTVar3[8]._padding_ + 4) = 0;
      pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[9]._padding_ = 0;
      pTVar3[10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[10].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar3[0xb]._padding_ = 0;
      *(undefined4 *)((longlong)&pTVar3[0xb]._padding_ + 4) = 0x80;
      pTVar3[0xb].SharedReferenceCount = (atomic<int>)0xffffffff;
      pTVar3[0xb].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[0xc].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[0xc].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar3[0xd]._padding_ = 0;
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1c8.Object = (IImageWrapper *)pTVar3;
    local_1c8.SharedReferenceCount.ReferenceController = pTVar5;
    if (__return_storage_ptr__ != &local_1c8) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_1c8.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_1c8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    break;
  case JPEG:
    pTVar3 = ::operator_new(0x88);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJpegImageWrapper___00_SharedPointerInternals__6B_;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar3[5]._padding_ = 0xff;
      *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[7]._padding_ = 0;
      pTVar3[1]._padding_ = (longlong)&___7FJpegImageWrapper__6B_;
      pTVar3[7].SharedReferenceCount = (atomic<int>)0x4;
      pTVar3[8]._padding_ = 0;
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    local_1b8 = pTVar3;
    pTStack_1b0 = pTVar5;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_1a8.Object = (IImageWrapper *)local_1b8;
    local_1a8.SharedReferenceCount.ReferenceController = pTStack_1b0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_1a8) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_1a8.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_1a8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    break;
  case GrayscaleJPEG:
    pTVar3 = ::operator_new(0x88);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJpegImageWrapper___00_SharedPointerInternals__6B_;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar3[5]._padding_ = 0xff;
      *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[7]._padding_ = 0;
      pTVar3[1]._padding_ = (longlong)&___7FJpegImageWrapper__6B_;
      pTVar3[7].SharedReferenceCount = (atomic<int>)0x1;
      pTVar3[8]._padding_ = 0;
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    local_198 = pTVar3;
    pTStack_190 = pTVar5;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_188.Object = (IImageWrapper *)local_198;
    local_188.SharedReferenceCount.ReferenceController = pTStack_190;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_188) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_188.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_188.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    break;
  case BMP:
    pTVar3 = ::operator_new(0x80);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFBmpImageWrapper___00_SharedPointerInternals__6B_;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar3[5]._padding_ = 0xff;
      *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[7]._padding_ = 0;
      pTVar3[1]._padding_ = (longlong)&___7FBmpImageWrapper__6B_;
      *(undefined2 *)&pTVar3[7].SharedReferenceCount = 1;
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    local_138 = pTVar3;
    pTStack_130 = pTVar5;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_128.Object = (IImageWrapper *)local_138;
    local_128.SharedReferenceCount.ReferenceController = pTStack_130;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_128) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_128.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_128.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    break;
  case ICO:
    pTVar3 = ::operator_new(0x98);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFIcoImageWrapper___00_SharedPointerInternals__6B_;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar3[5]._padding_ = 0xff;
      *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[7]._padding_ = 0;
      pTVar3[1]._padding_ = (longlong)&___7FIcoImageWrapper__6B_;
      pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[8]._padding_ = 0;
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    local_118 = pTVar3;
    pTStack_110 = pTVar5;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_108.Object = (IImageWrapper *)local_118;
    local_108.SharedReferenceCount.ReferenceController = pTStack_110;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_108) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_108.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_108.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    break;
  case EXR:
    pTVar3 = ::operator_new(0x88);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFExrImageWrapper___00_SharedPointerInternals__6B_;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar3[5]._padding_ = 0xff;
      *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[7]._padding_ = 0;
      pTVar3[1]._padding_ = (longlong)&___7FExrImageWrapper__6B_;
      pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[8]._padding_ = 0;
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    local_f8 = pTVar3;
    pTStack_f0 = pTVar5;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_e8.Object = (IImageWrapper *)local_f8;
    local_e8.SharedReferenceCount.ReferenceController = pTStack_f0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_e8) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_e8.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_e8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    break;
  case ICNS:
    pTVar3 = ::operator_new(0x78);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFIcnsImageWrapper___00_SharedPointerInternals__6B_;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar3[5]._padding_ = 0xff;
      *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[7]._padding_ = 0;
      pTVar3[1]._padding_ = (longlong)&___7FIcnsImageWrapper__6B_;
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    local_d8 = pTVar3;
    pTStack_d0 = pTVar5;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_c8.Object = (IImageWrapper *)local_d8;
    local_c8.SharedReferenceCount.ReferenceController = pTStack_d0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_c8) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_c8.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_c8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    break;
  case TGA:
    pTVar3 = ::operator_new(0x80);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFTgaImageWrapper___00_SharedPointerInternals__6B_;
      *(undefined2 *)((longlong)&pTVar3[5]._padding_ + 1) = 0;
      *(undefined1 *)((longlong)&pTVar3[5]._padding_ + 3) = 0;
      pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar3[5]._padding_ = 0xff;
      *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[7]._padding_ = 0;
      pTVar3[1]._padding_ = (longlong)&___7FTgaImageWrapper__6B_;
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    local_b8 = pTVar3;
    pTStack_b0 = pTVar5;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_a8.Object = (IImageWrapper *)local_b8;
    local_a8.SharedReferenceCount.ReferenceController = pTStack_b0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_a8) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_a8.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_a8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    break;
  case HDR:
    pTVar3 = ::operator_new(0x88);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFHdrImageWrapper___00_SharedPointerInternals__6B_;
      pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[8]._padding_ = 0;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[1]._padding_ = (longlong)&___7FHdrImageWrapper__6B_;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[5]._padding_ = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0xffffffff;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0xffffffff;
      pTVar3[7]._padding_ = -1;
      FText::FText((FText *)&pTVar3[7].SharedReferenceCount);
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    local_98 = pTVar3;
    pTStack_90 = pTVar5;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_88.Object = (IImageWrapper *)local_98;
    local_88.SharedReferenceCount.ReferenceController = pTStack_90;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_88) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_88.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_88.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    break;
  case TIFF:
    pTVar3 = ::operator_new(0xc0);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFTiffImageWrapper_Private_ImageWrapper_UE___00_SharedPointerInternals__6B_
      ;
      *(undefined2 *)((longlong)&pTVar3[5]._padding_ + 1) = 0;
      *(undefined1 *)((longlong)&pTVar3[5]._padding_ + 3) = 0;
      *(undefined4 *)((longlong)&pTVar3[9]._padding_ + 2) = 0;
      *(undefined2 *)((longlong)&pTVar3[9]._padding_ + 6) = 0;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar3[5]._padding_ = 0xff;
      *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[7]._padding_ = 0;
      pTVar3[1]._padding_ = (longlong)&___7FTiffImageWrapper_Private_ImageWrapper_UE__6B_;
      pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[8]._padding_ = 0;
      pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[8].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined2 *)&pTVar3[9]._padding_ = 0;
      pTVar3[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[9].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[10]._padding_ = 0;
      pTVar3[10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[10].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[0xb]._padding_ = 0;
      pTVar3[0xb].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[0xb].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    local_78 = pTVar3;
    pTStack_70 = pTVar5;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_68.Object = (IImageWrapper *)local_78;
    local_68.SharedReferenceCount.ReferenceController = pTStack_70;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_68) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_68.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_68.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    break;
  case DDS:
    pTVar3 = ::operator_new(0x80);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFDdsImageWrapper___00_SharedPointerInternals__6B_;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar3[5]._padding_ = 0xff;
      *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[7]._padding_ = 0;
      pTVar3[1]._padding_ = (longlong)&___7FDdsImageWrapper__6B_;
      pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    local_58 = pTVar3;
    pTStack_50 = pTVar5;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_48.Object = (IImageWrapper *)local_58;
    local_48.SharedReferenceCount.ReferenceController = pTStack_50;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_48) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_48.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    break;
  case UEJPEG:
    pTVar3 = ::operator_new(0x80);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFUEJpegImageWrapper___00_SharedPointerInternals__6B_
      ;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar3[5]._padding_ = 0xff;
      *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[7]._padding_ = 0;
      pTVar3[1]._padding_ = (longlong)&___7FUEJpegImageWrapper__6B_;
      pTVar3[7].SharedReferenceCount = (atomic<int>)0x4;
      uejpeg_set_alloc(&UeAlloc);
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    local_178 = pTVar3;
    pTStack_170 = pTVar5;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_168.Object = (IImageWrapper *)local_178;
    local_168.SharedReferenceCount.ReferenceController = pTStack_170;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_168) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_168.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_168.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    break;
  case GrayscaleUEJPEG:
    pTVar3 = ::operator_new(0x80);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFUEJpegImageWrapper___00_SharedPointerInternals__6B_
      ;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[2]._padding_ = 0;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[3]._padding_ = 0;
      pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[4]._padding_ = 0;
      pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar3[5]._padding_ = 0xff;
      *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
      pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[6]._padding_ = 0;
      pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar3[7]._padding_ = 0;
      pTVar3[1]._padding_ = (longlong)&___7FUEJpegImageWrapper__6B_;
      pTVar3[7].SharedReferenceCount = (atomic<int>)0x1;
      uejpeg_set_alloc(&UeAlloc);
      pTVar5 = pTVar3;
    }
    pTVar3 = pTVar5 + 1;
    local_158 = pTVar3;
    pTStack_150 = pTVar5;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_148.Object = (IImageWrapper *)local_158;
    local_148.SharedReferenceCount.ReferenceController = pTStack_150;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_148) {
      __return_storage_ptr__->Object = (IImageWrapper *)pTVar3;
      local_148.Object = (IImageWrapper *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_148.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  if (param_2 != (wchar_t *)0x0) {
    if ((__return_storage_ptr__->Object == (IImageWrapper *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar4;
    }
    __return_storage_ptr__->Object->DebugImageName = param_2;
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// DetectImageFormat @ 142608610

EImageFormat __thiscall
FImageWrapperModule::DetectImageFormat(FImageWrapperModule *this,void *param_1,long64 param_2)

{
  bool bVar1;
  EImageFormat EVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  lVar5 = lVar6;
  lVar4 = lVar6;
  lVar3 = lVar6;
  if (param_2 < 8) {
    if (2 < param_2) goto LAB_142608650;
LAB_1426086c3:
    if (param_2 < 2) goto LAB_1426086c9;
  }
  else {
    while (*(uchar *)((longlong)param_1 + lVar5) == IMAGE_MAGIC_PNG[lVar5]) {
      lVar5 = lVar5 + 1;
      if (7 < lVar5) {
        return PNG;
      }
    }
LAB_142608650:
    while (*(uchar *)((longlong)param_1 + lVar3) == IMAGE_MAGIC_JPEG[lVar3]) {
      lVar3 = lVar3 + 1;
      if (2 < lVar3) {
        return JPEG;
      }
    }
    lVar5 = lVar6;
    if (param_2 < 6) goto LAB_1426086c3;
    while (*(uchar *)((longlong)param_1 + lVar5) == "OOJPEG"[lVar5]) {
      lVar5 = lVar5 + 1;
      if (5 < lVar5) {
        return UEJPEG;
      }
    }
  }
  while (*(uchar *)((longlong)param_1 + lVar4) == "BM"[lVar4]) {
    lVar4 = lVar4 + 1;
    if (1 < lVar4) {
      return BMP;
    }
  }
  lVar4 = lVar6;
  if (param_2 < 4) goto LAB_1426086c9;
  while (lVar5 = lVar6, *(uchar *)((longlong)param_1 + lVar4) == ""[lVar4]) {
    lVar4 = lVar4 + 1;
    if (3 < lVar4) {
      return ICO;
    }
  }
  while (lVar4 = lVar6, *(uchar *)(lVar5 + (longlong)param_1) == "v/1\x01"[lVar5]) {
    lVar5 = lVar5 + 1;
    if (3 < lVar5) {
      return EXR;
    }
  }
  while (*(uchar *)(lVar4 + (longlong)param_1) == "icns"[lVar4]) {
    lVar4 = lVar4 + 1;
    if (3 < lVar4) {
      return ICNS;
    }
  }
  lVar5 = lVar6;
  lVar4 = lVar6;
  lVar3 = lVar6;
  if (param_2 < 0xb) {
    if (5 < param_2) goto LAB_1426088f0;
    if (param_2 < 4) goto LAB_1426086c9;
  }
  else {
    while (*(uchar *)(lVar5 + (longlong)param_1) == "#?RADIANCE\n"[lVar5]) {
      lVar5 = lVar5 + 1;
      if (10 < lVar5) {
        return HDR;
      }
    }
LAB_1426088f0:
    while (*(uchar *)(lVar4 + (longlong)param_1) == "#?RGBE"[lVar4]) {
      lVar4 = lVar4 + 1;
      if (5 < lVar4) {
        return HDR;
      }
    }
  }
  while (*(uchar *)(lVar3 + (longlong)param_1) == "II*"[lVar3]) {
    lVar3 = lVar3 + 1;
    if (3 < lVar3) {
      return TIFF;
    }
  }
  while (*(uchar *)(lVar6 + (longlong)param_1) == "MM"[lVar6]) {
    lVar6 = lVar6 + 1;
    if (3 < lVar6) {
      return TIFF;
    }
  }
LAB_1426086c9:
  bVar1 = UE::DDS::FDDSFile::IsADDS(param_1,param_2);
  if (!bVar1) {
    bVar1 = FTgaImageWrapper::IsTGAHeader(param_1,param_2);
    EVar2 = Invalid;
    if (bVar1) {
      EVar2 = TGA;
    }
    return EVar2;
  }
  return DDS;
}

// GetExtension @ 1426089a0

wchar_t * __thiscall
FImageWrapperModule::GetExtension(FImageWrapperModule *this,EImageFormat param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case PNG:
    return L"png";
  case JPEG:
  case GrayscaleJPEG:
    return L"jpg";
  case BMP:
    return L"bmp";
  case ICO:
    return L"ico";
  case EXR:
    return L"exr";
  case ICNS:
    return L"icns";
  case TGA:
    return L"tga";
  case HDR:
    return L"hdr";
  case TIFF:
    return L"tiff";
  case DDS:
    return L"dds";
  case UEJPEG:
  case GrayscaleUEJPEG:
    return L"uej";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperModule.cpp"
                     ,0xee,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return (wchar_t *)0x0;
}

// GetImageFormatFromExtension @ 142608ac0

EImageFormat __thiscall
FImageWrapperModule::GetImageFormatFromExtension(FImageWrapperModule *this,wchar_t *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  EImageFormat EVar3;
  
  pwVar2 = wcsrchr(param_1,L'.');
  if (pwVar2 != (wchar_t *)0x0) {
    param_1 = pwVar2 + 1;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"png");
  if (iVar1 == 0) {
    return PNG;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"jpg");
  if (iVar1 != 0) {
    iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"jpeg");
    if (iVar1 != 0) {
      iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"uej");
      if (iVar1 == 0) {
        return UEJPEG;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"bmp");
      if (iVar1 == 0) {
        return BMP;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"ico");
      if (iVar1 == 0) {
        return ICO;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"exr");
      if (iVar1 == 0) {
        return EXR;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"icns");
      if (iVar1 == 0) {
        return ICNS;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"tga");
      if (iVar1 == 0) {
        return TGA;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"hdr");
      if (iVar1 == 0) {
        return HDR;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"tiff");
      if (iVar1 != 0) {
        iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"tif");
        if (iVar1 != 0) {
          iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"tx");
          if (iVar1 != 0) {
            iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"dds");
            EVar3 = Invalid;
            if (iVar1 == 0) {
              EVar3 = DDS;
            }
            return EVar3;
          }
        }
      }
      return TIFF;
    }
  }
  return JPEG;
}

// ConvertRGBFormat @ 142608c60

Type __thiscall
FImageWrapperModule::ConvertRGBFormat
          (FImageWrapperModule *this,ERGBFormat param_1,int param_2,bool *param_3)

{
  Type TVar1;
  
  TVar1 = IImageWrapper::ConvertRGBFormat(param_1,param_2,param_3);
  return TVar1;
}

// ConvertRawImageFormat @ 142608c80

void __thiscall
FImageWrapperModule::ConvertRawImageFormat
          (FImageWrapperModule *this,Type param_1,ERGBFormat *param_2,int *param_3)

{
  IImageWrapper::ConvertRawImageFormat(param_1,param_2,param_3);
  return;
}

// GetDefaultOutputFormat @ 142608ca0

EImageFormat __thiscall
FImageWrapperModule::GetDefaultOutputFormat(FImageWrapperModule *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  EImageFormat EVar3;
  
  switch(param_1) {
  case G8:
  case BGRA8:
  case RGBA16:
  case G16:
    return PNG;
  case BGRE8:
    return HDR;
  case RGBA16F:
  case RGBA32F:
  case R16F:
  case R32F:
    return EXR;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperModule.cpp"
                     ,0x14d,L"");
  if (!bVar2) {
    return Invalid;
  }
  pcVar1 = (code *)swi(3);
  EVar3 = (*pcVar1)();
  return EVar3;
}

// DecompressImage @ 142608d30

/* WARNING: Removing unreachable block (ram,0x000142608e1c) */

bool __thiscall
FImageWrapperModule::DecompressImage
          (FImageWrapperModule *this,void *param_1,long64 param_2,FImage *param_3)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  IImageWrapper *local_88;
  TReferenceControllerBase<1> *local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  FImage local_50;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_bool___cdecl_FImageWrapperModule::DecompressImage(void_const*___ptr64,__int64,FImage&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId387,"ImageWrapper.Decompress",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperModule.cpp"
               ,0x183);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_bool___cdecl_FImageWrapperModule::DecompressImage(void_const*___ptr64,__int64,FImage&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId387);
  }
  local_50._padding_ = 0;
  local_50._padding_._0_4_ = 0;
  local_50._padding_._4_2_ = 0x201;
  local_50.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.RawData.ArrayNum = 0;
  local_50.RawData.ArrayMax = 0;
  if (param_3 != &local_50) {
    pFVar2 = (param_3->RawData).AllocatorInstance.Data;
    (param_3->RawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->RawData).ArrayNum = 0;
    (param_3->RawData).ArrayMax = 0;
    param_3->_padding_ = 0;
    param_3->_padding_ = CONCAT26(local_50._padding_._6_2_,0x20100000000);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.RawData.ArrayNum = 0;
    local_50.RawData.ArrayMax = 0;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  cVar3 = (**(code **)((longlong)*this + 0x60))(this,param_1,param_2);
  if (cVar3 == -1) {
    bVar4 = false;
    goto LAB_142608eea;
  }
  (**(code **)((longlong)*this + 0x58))(this,&local_88,cVar3,0);
  if (local_88 == (IImageWrapper *)0x0) {
LAB_142608ede:
    bVar4 = false;
  }
  else {
    if ((local_88 == (IImageWrapper *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    cVar3 = (**(code **)local_88->_padding_)(local_88,param_1,param_2);
    if (cVar3 == '\0') goto LAB_142608ede;
    if ((local_88 == (IImageWrapper *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    bVar4 = IImageWrapper::GetRawImage(local_88,param_3);
    if (!bVar4) goto LAB_142608ede;
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
LAB_142608eea:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// DecompressImage @ 142608f20

bool __thiscall
FImageWrapperModule::DecompressImage
          (FImageWrapperModule *this,void *param_1,long64 param_2,FDecompressedImageOutput *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  IImageWrapper *local_88;
  TReferenceControllerBase<1> *local_80;
  FDecompressedImageOutput local_78;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_bool___cdecl_FImageWrapperModule::DecompressImage(void_const*___ptr64,__int64,FDecompressedImageOutput&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId423,"ImageWrapper.Decompress",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperModule.cpp"
               ,0x1a7);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_bool___cdecl_FImageWrapperModule::DecompressImage(void_const*___ptr64,__int64,FDecompressedImageOutput&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId423);
  }
  local_78.MipMapImage.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.MipMapImage.RawData.ArrayNum = 0;
  local_78.MipMapImage.RawData.ArrayMax = 0;
  local_78.MipMapImage.SubImages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.MipMapImage.SubImages.ArrayNum = 0;
  local_78.MipMapImage.SubImages.ArrayMax = 0;
  local_78.MipMapImage.Format = BGRA8;
  local_78.MipMapImage.GammaSpace = sRGB;
  local_78.MipMapImage._42_6_ = 0;
  local_78.ApplicationVendor.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ApplicationVendor.Data.ArrayNum = 0;
  local_78.ApplicationVendor.Data.ArrayMax = 0;
  local_78.ApplicationName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ApplicationName.Data.ArrayNum = 0;
  local_78.ApplicationName.Data.ArrayMax = 0;
  local_78.ApplicationVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ApplicationVersion.Data.ArrayNum = 0;
  local_78.ApplicationVersion.Data.ArrayMax = 0;
  FDecompressedImageOutput::operator=(param_3,&local_78);
  if (local_78.ApplicationVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ApplicationVersion.Data.AllocatorInstance.Data);
  }
  if (local_78.ApplicationName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ApplicationName.Data.AllocatorInstance.Data);
  }
  if (local_78.ApplicationVendor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ApplicationVendor.Data.AllocatorInstance.Data);
  }
  if (local_78.MipMapImage.SubImages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.MipMapImage.SubImages.AllocatorInstance.Data);
  }
  if (local_78.MipMapImage.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.MipMapImage.RawData.AllocatorInstance.Data);
  }
  cVar2 = (**(code **)((longlong)*this + 0x60))(this,param_1,param_2);
  if (cVar2 == -1) {
    bVar3 = false;
    goto LAB_1426090f3;
  }
  (**(code **)((longlong)*this + 0x58))(this,&local_88,cVar2,0);
  if (local_88 == (IImageWrapper *)0x0) {
LAB_1426090e7:
    bVar3 = false;
  }
  else {
    if ((local_88 == (IImageWrapper *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    cVar2 = (**(code **)local_88->_padding_)(local_88,param_1,param_2);
    if (cVar2 == '\0') goto LAB_1426090e7;
    if ((local_88 == (IImageWrapper *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    bVar3 = IImageWrapper::GetRawImage(local_88,param_3);
    if (!bVar3) goto LAB_1426090e7;
    bVar3 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
LAB_1426090f3:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// CompressImage @ 142609120

bool __thiscall
FImageWrapperModule::CompressImage
          (FImageWrapperModule *this,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,
          EImageFormat param_2,FImageView *param_3,int param_4)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  Type TVar6;
  longlong lVar7;
  longlong lVar8;
  long64 lVar9;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  char local_res10;
  undefined4 local_c8 [2];
  longlong *local_c0;
  TReferenceControllerBase<1> *local_b8;
  FImageView local_b0;
  FImage local_98;
  FScriptContainerElement *local_60;
  void *local_58 [4];
  
  if (CpuChannel->Enabled < 0) {
    local_res10 = '\0';
  }
  else {
    local_res10 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_bool___cdecl_FImageWrapperModule::CompressImage(TArray<unsigned_char,TSizedDefaultAllocator<64>_>&___ptr64,EImageFormat,FImageView_const&___ptr64,int)___ptr64'
                ::__l2::__CpuProfilerEventSpecId454,"ImageWrapper.Compress",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperModule.cpp"
               ,0x1c6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_bool___cdecl_FImageWrapperModule::CompressImage(TArray<unsigned_char,TSizedDefaultAllocator<64>_>&___ptr64,EImageFormat,FImageView_const&___ptr64,int)___ptr64'
               ::__l2::__CpuProfilerEventSpecId454);
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  (**(code **)((longlong)*this + 0x58))(this,&local_c0,param_2,0);
  if (local_c0 == (longlong *)0x0) {
    bVar3 = false;
    goto LAB_142609509;
  }
  (**(code **)((longlong)*this + 0x88))
            (this,*(undefined1 *)((longlong)&param_3->_padding_ + 4),local_res8,local_c8);
  if (((int)param_3->_padding_ != 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InImage.NumSlices == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperModule.cpp"
                         ,0x1d5,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  local_b0._padding_ = param_3->_padding_;
  local_b0._padding_ = param_3->_padding_;
  local_b0.RawData = param_3->RawData;
  local_98._padding_ = 0;
  local_98._padding_._0_4_ = 0;
  local_98._padding_._4_2_ = 0x201;
  local_98.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.RawData.ArrayNum = 0;
  local_98.RawData.ArrayMax = 0;
  if ((local_c0 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  cVar5 = (**(code **)(*local_c0 + 0x10))(local_c0,local_res8[0],local_c8[0]);
  if (cVar5 == '\0') {
    if ((local_c0 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    TVar6 = (**(code **)(*local_c0 + 0x18))
                      (local_c0,*(undefined1 *)((longlong)&param_3->_padding_ + 4));
    if ((TVar6 == *(Type *)((longlong)&param_3->_padding_ + 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewFormat != InImage.Format",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperModule.cpp"
                           ,0x1e0,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    FImage::Init(&local_98,(int)param_3->_padding_,*(int *)((longlong)&param_3->_padding_ + 4),TVar6
                 ,-(TVar6 < BGRE8) & sRGB);
    local_b0._padding_ =
         CONCAT26(local_98._padding_._6_2_,
                  CONCAT24(local_98._padding_._4_2_,(undefined4)local_98._padding_));
    local_60 = local_98.RawData.AllocatorInstance.Data;
    local_b0._padding_ = local_98._padding_;
    local_b0.RawData = local_98.RawData.AllocatorInstance.Data;
    FImageCore::CopyImage(param_3,&local_b0);
    (**(code **)((longlong)*this + 0x88))(this,TVar6,local_res8,local_c8);
    if ((local_c0 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    cVar5 = (**(code **)(*local_c0 + 0x10))(local_c0,local_res8[0],local_c8[0]);
    if ((cVar5 == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ImageWrapper->CanSetRawFormat(RGBFormat,BitDepth)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperModule.cpp"
                           ,0x1ec,L""), bVar3)) {
code_r0x000142609403:
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    cVar5 = *(char *)((longlong)&param_3->_padding_ + 4);
    if ((((cVar5 != '\0') && (cVar5 != '\x01')) &&
        (*(char *)((longlong)&param_3->_padding_ + 5) != '\0')) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetFormatNeedsGammaSpace(Format) || GammaSpace == EGammaSpace::Linear",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                           ,0xe4,L""), bVar3)) goto code_r0x000142609403;
  }
  if ((local_c0 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  plVar2 = local_c0;
  pcVar1 = *(code **)(*local_c0 + 8);
  lVar11 = (longlong)(int)local_b0._padding_;
  lVar7 = (longlong)(int)local_b0._padding_;
  lVar8 = (longlong)local_b0._padding_._4_4_;
  lVar9 = ERawImageFormat::GetBytesPerPixel(local_b0._padding_._4_1_);
  cVar5 = (*pcVar1)(plVar2,local_b0.RawData,lVar9 * lVar11 * lVar7 * lVar8,
                    local_b0._padding_ & 0xffffffff,(ulonglong)local_b0._padding_ >> 0x20,
                    local_res8[0],local_c8[0],0);
  if (cVar5 == '\0') {
LAB_1426094f8:
    bVar3 = false;
  }
  else {
    if ((local_c0 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pTVar10 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
              (**(code **)(*local_c0 + 0x20))(local_c0,local_58,param_4);
    TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=(param_1,pTVar10);
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (param_1->ArrayNum == 0) goto LAB_1426094f8;
    bVar3 = true;
  }
  if (local_98.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.RawData.AllocatorInstance.Data);
  }
LAB_142609509:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
  if (local_res10 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// StartupModule @ 142609550

void __thiscall FImageWrapperModule::StartupModule(FImageWrapperModule *this)

{
  return;
}

// ShutdownModule @ 142609560

void __thiscall FImageWrapperModule::ShutdownModule(FImageWrapperModule *this)

{
  return;
}

