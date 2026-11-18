// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 2

// CreateNewProxyData @ 1445329a0

TUniquePtr<Audio::IProxyData,TDefaultDelete<Audio::IProxyData>_> __thiscall
IAudioProxyDataFactory::CreateNewProxyData
          (IAudioProxyDataFactory *this,FProxyDataInitParams *param_1)

{
  param_1->NameOfFeatureRequestingProxy = (FName)0x0;
  return (TUniquePtr<Audio::IProxyData,TDefaultDelete<Audio::IProxyData>_>)(IProxyData *)param_1;
}

// CreateProxyData @ 1445329c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::IProxyData,1> * __thiscall
IAudioProxyDataFactory::CreateProxyData
          (IAudioProxyDataFactory *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,
          FProxyDataInitParams *param_1)

{
  int iVar1;
  FName FVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  IProxyData *pIVar6;
  FName local_res8;
  IProxyData *local_res10;
  FName local_res20;
  FString local_18;
  
  (**(code **)*this)(this,&local_res10);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`IAudioProxyDataFactory::CreateProxyData'::__l2::
           _dynamic_atexit_destructor_for__LoggedProxyWarnings__);
    _Init_thread_footer(&::_TSS0);
  }
  pIVar6 = local_res10;
  if (local_res10 != (IProxyData *)0x0) {
    FVar2 = local_res10->ProxyTypeName;
    local_res20 = FVar2;
    uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    if (LoggedProxyWarnings.Elements._8_4_ != LoggedProxyWarnings.Elements._52_4_) {
      FVar5 = (ForElementType<FSetElementId>)0x154bbea58;
      if (LoggedProxyWarnings.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar5 = LoggedProxyWarnings.Hash.SecondaryData;
      }
      for (iVar1 = *(int *)((longlong)FVar5 +
                           (ulonglong)(LoggedProxyWarnings.HashSize - 1U & FVar2.Number + uVar3) * 4
                           ); iVar1 != -1;
          iVar1 = *(int *)(LoggedProxyWarnings.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
        pIVar6 = local_res10;
        if (*(FName *)(LoggedProxyWarnings.Elements._0_8_ + (longlong)iVar1 * 0x10) == FVar2)
        goto LAB_144532aee;
      }
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&LoggedProxyWarnings,&local_res8,(bool *)&local_res20);
    pIVar6 = local_res10;
    if (2 < (byte)LogAudioExtensions._0_1_) {
      ::FName::ToString(&local_res20,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioExtensions);
      pIVar6 = local_res10;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        pIVar6 = local_res10;
      }
    }
  }
LAB_144532aee:
  local_res10 = (IProxyData *)0x0;
  __return_storage_ptr__->Object = pIVar6;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VIProxyData_Audio__U__DefaultDeleter_VIProxyData_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pIVar6;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (local_res10 != (IProxyData *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  return __return_storage_ptr__;
}

