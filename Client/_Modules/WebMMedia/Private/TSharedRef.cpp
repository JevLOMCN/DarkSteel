// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 2

// TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1><TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage> @ 14f118e40

TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1>
* __thiscall
TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1>
::
TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1><TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage>
          (TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1>
           *this,TRawPtrProxy<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage>
                 *param_1)

{
  TStorage *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1>
  *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VTStorage___TMediaObjectPool_VFWebMMediaAudioSample__V__TMediaPoolDefaultObjectAllocator_VFWebMMediaAudioSample______U__DefaultDeleter_VTStorage___TMediaObjectPool_VFWebMMediaAudioSample__V__TMediaPoolDefaultObjectAllocator_VFWebMMediaAudioSample_______SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1><TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage> @ 14f118ee0

TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1>
* __thiscall
TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1>
::
TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1><TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage>
          (TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1>
           *this,TRawPtrProxy<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage>
                 *param_1)

{
  TStorage *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1>
  *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VTStorage___TMediaObjectPool_VFWebMMediaTextureSample__V__TMediaPoolDefaultObjectAllocator_VFWebMMediaTextureSample______U__DefaultDeleter_VTStorage___TMediaObjectPool_VFWebMMediaTextureSample__V__TMediaPoolDefaultObjectAllocator_VFWebMMediaTextureSample_______SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

