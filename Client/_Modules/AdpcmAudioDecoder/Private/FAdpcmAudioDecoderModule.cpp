// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdpcmAudioDecoder
// Functions: 7

// StartupModule @ 146bcb360

void __thiscall FAdpcmAudioDecoderModule::StartupModule(FAdpcmAudioDecoderModule *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FAdpcmAudioDecoderModule::StartupModule(void)___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FAdpcmAudioDecoderModule::StartupModule(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FAdpcmAudioDecoderModule::StartupModule(void)___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      local_48 = (undefined1  [8])0x0;
      local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_40.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                 (FWriteAccessScope *)&local_30);
      local_18 = &local_40;
      puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar2 = FDelegateHandle::GenerateNewID();
        puVar1[2] = uVar2;
        *puVar1 = &
                  ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__StartupModule_FAdpcmAudioDecoderModule__UEAAXXZ___V__6B_
        ;
        puVar1[3] = this;
      }
      if (local_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
      }
      FAutoConsoleVariableRef::FAutoConsoleVariableRef
                (&`public:_virtual_void___cdecl_FAdpcmAudioDecoderModule::StartupModule(void)___ptr64'
                  ::__l2::CVarUseLegacyDecoder,L"au.adpcm.UseLegacyDecoder",
                 &`public:_virtual_void___cdecl_FAdpcmAudioDecoderModule::StartupModule(void)___ptr64'
                  ::__l2::bUseLegacyDecoder,L"0:Hybrid, 1:Legacy",
                 (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
                 0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                 (FWriteAccessScope *)&local_30);
      if ((local_40.DelegateSize != 0) &&
         (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_40,0,0,0x10);
        local_40.DelegateSize = 0;
      }
      if (local_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
      }
      if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_40.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48);
      atexit(`FAdpcmAudioDecoderModule::StartupModule'::__l2::
             _dynamic_atexit_destructor_for__CVarUseLegacyDecoder__);
      _Init_thread_footer(&`public:_virtual_void___cdecl_FAdpcmAudioDecoderModule::StartupModule(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Register(this,`public:_virtual_void___cdecl_FAdpcmAudioDecoderModule::StartupModule(void)___ptr64'
                ::__l2::bUseLegacyDecoder != 0);
  return;
}

// ShutdownModule @ 146bcb520

void __thiscall FAdpcmAudioDecoderModule::ShutdownModule(FAdpcmAudioDecoderModule *this)

{
  return;
}

// <lambda_invoker_cdecl> @ 146bcb800

FADPCMAudioInfo * __cdecl
`FAdpcmAudioDecoderModule::MakeFactory<FADPCMAudioInfo>'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (void)

{
  undefined1 *puVar1;
  FADPCMAudioInfo *this;
  
  this = ::operator_new(0x1b0);
  if (this != (FADPCMAudioInfo *)0x0) {
    ICompressedAudioInfo::ICompressedAudioInfo((ICompressedAudioInfo *)this);
    this->_padding_ = (longlong)&___7FADPCMAudioInfo__6B_;
    (this->WaveInfo).WaveCues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->WaveInfo).WaveCues.ArrayNum = 0;
    (this->WaveInfo).WaveCues.ArrayMax = 0;
    (this->WaveInfo).WaveSampleLoops.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->WaveInfo).WaveSampleLoops.ArrayNum = 0;
    (this->WaveInfo).WaveSampleLoops.ArrayMax = 0;
    *(undefined8 *)&(this->WaveInfo).TimecodeInfo.field_0x0 = 0;
    this->NumConsecutiveReadFailiures = 0;
    this->UncompressedBlockSize = 0;
    this->CompressedBlockSize = 0;
    this->BlockSize = 0;
    this->StreamBufferSize = 0;
    this->TotalDecodedSize = 0;
    this->NumChannels = 0;
    this->Format = 0;
    this->PreviouslyRequestedChunkIndex = 0;
    this->UncompressedBlockData = (uchar *)0x0;
    this->SamplesPerBlock = 0;
    this->FirstChunkSampleDataOffset = 0;
    this->FirstChunkSampleDataIndex = 0;
    FAudioChunkHandle::FAudioChunkHandle(&this->CurCompressedChunkHandle);
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&this->CurCompressedChunkHandleCriticalSection,4000);
    this->bNewSeekRequest = '\0';
    this->bSeekedFowardToNextChunk = '\0';
    this->bSeekPendingRead = '\0';
    this->bDecompressorReleased = false;
    *(undefined4 *)&(this->TargetSeekFrame).field_0x0 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->StreamSeekCriticalSection,4000)
    ;
    return this;
  }
  return (FADPCMAudioInfo *)0x0;
}

// <lambda_invoker_cdecl> @ 146bcb900

FPcmAudioInfoHybrid * __cdecl
`FAdpcmAudioDecoderModule::MakeFactory<FPcmAudioInfoHybrid>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(void)

{
  FPcmAudioInfoHybrid *this;
  
  this = ::operator_new(0xf0);
  if (this != (FPcmAudioInfoHybrid *)0x0) {
    memset(this,0,0xf0);
    IStreamedCompressedInfo::IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
    this->_padding_ = (longlong)&___7FPcmAudioInfoHybrid__6B_;
    (this->Impl).Ptr = (FHybridImpl *)0x0;
    return this;
  }
  return (FPcmAudioInfoHybrid *)0x0;
}

// MakeFactory<FADPCMAudioInfo> @ 146bcb9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<IAudioInfoFactory,TDefaultDelete<IAudioInfoFactory>_> __thiscall
FAdpcmAudioDecoderModule::MakeFactory<FADPCMAudioInfo>(FAdpcmAudioDecoderModule *this,FName param_1)

{
  undefined8 *puVar1;
  IAudioInfoFactoryRegistry *pIVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined8 in_R8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  code *local_48;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  puVar4 = (undefined8 *)0x0;
  local_58 = 0;
  puVar1 = ::operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    local_20 = (undefined ***)0x0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6APEAVFADPCMAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = `FAdpcmAudioDecoderModule::MakeFactory<FADPCMAudioInfo>'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<FADPCMAudioInfo_*_(__cdecl*)(void),ICompressedAudioInfo_*>::Call;
    *puVar1 = &___7FSimpleAudioInfoFactory__6B_;
    puVar1[2] = UE::Core::Private::Function::
                TFunctionRefCaller<FADPCMAudioInfo_*_(__cdecl*)(void),ICompressedAudioInfo_*>::Call;
    puVar1[7] = 0;
    (*(code *)
      ___7__TFunction_OwnedObject_P6APEAVFADPCMAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_)
              (&local_38);
    puVar1[8] = in_R8;
    *(undefined2 *)(puVar1 + 9) = 0x101;
    pIVar2 = IAudioInfoFactoryRegistry::Get();
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,puVar1,puVar1[8]);
    puVar4 = puVar1;
    if (local_48 != (code *)0x0) {
      pppuVar3 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar3 = local_20;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  *(undefined8 **)param_1 = puVar4;
  return (TUniquePtr<IAudioInfoFactory,TDefaultDelete<IAudioInfoFactory>_>)param_1;
}

// MakeFactory<FPcmAudioInfoHybrid> @ 146bcbaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<IAudioInfoFactory,TDefaultDelete<IAudioInfoFactory>_> __thiscall
FAdpcmAudioDecoderModule::MakeFactory<FPcmAudioInfoHybrid>
          (FAdpcmAudioDecoderModule *this,FName param_1)

{
  undefined8 *puVar1;
  IAudioInfoFactoryRegistry *pIVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined8 in_R8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  code *local_48;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  puVar4 = (undefined8 *)0x0;
  local_58 = 0;
  puVar1 = ::operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    local_20 = (undefined ***)0x0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6APEAVFPcmAudioInfoHybrid__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = `FAdpcmAudioDecoderModule::MakeFactory<FPcmAudioInfoHybrid>'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<FPcmAudioInfoHybrid_*_(__cdecl*)(void),ICompressedAudioInfo_*>::
               Call;
    *puVar1 = &___7FSimpleAudioInfoFactory__6B_;
    puVar1[2] = UE::Core::Private::Function::
                TFunctionRefCaller<FPcmAudioInfoHybrid_*_(__cdecl*)(void),ICompressedAudioInfo_*>::
                Call;
    puVar1[7] = 0;
    (*(code *)
      ___7__TFunction_OwnedObject_P6APEAVFPcmAudioInfoHybrid__XZ_0A__0A__Function_Private_Core_UE__6B_
    )(&local_38);
    puVar1[8] = in_R8;
    *(undefined2 *)(puVar1 + 9) = 0x101;
    pIVar2 = IAudioInfoFactoryRegistry::Get();
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,puVar1,puVar1[8]);
    puVar4 = puVar1;
    if (local_48 != (code *)0x0) {
      pppuVar3 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar3 = local_20;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  *(undefined8 **)param_1 = puVar4;
  return (TUniquePtr<IAudioInfoFactory,TDefaultDelete<IAudioInfoFactory>_>)param_1;
}

// Register @ 146bce070

void __thiscall FAdpcmAudioDecoderModule::Register(FAdpcmAudioDecoderModule *this,bool param_1)

{
  TUniquePtr<IAudioInfoFactory,TDefaultDelete<IAudioInfoFactory>_> *pTVar1;
  TUniquePtr<IAudioInfoFactory,TDefaultDelete<IAudioInfoFactory>_> *pTVar2;
  IAudioInfoFactory *pIVar3;
  TUniquePtr<IAudioInfoFactory,TDefaultDelete<IAudioInfoFactory>_> TVar4;
  undefined8 *local_res8;
  
  pTVar1 = &this->AdpcmFactory;
  pIVar3 = pTVar1->Ptr;
  if (pIVar3 != (IAudioInfoFactory *)0x0) {
    pTVar1->Ptr = (IAudioInfoFactory *)0x0;
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pIVar3 = (this->PcmFactory).Ptr;
  pTVar2 = &this->PcmFactory;
  if (pIVar3 != (IAudioInfoFactory *)0x0) {
    pTVar2->Ptr = (IAudioInfoFactory *)0x0;
    (**(code **)*pIVar3)(pIVar3,1);
  }
  if (param_1) {
    TVar4 = MakeFactory<FADPCMAudioInfo>(this,(FName)&local_res8);
    if ((IAudioInfoFactory *)pTVar1 != TVar4.Ptr) {
      pIVar3 = pTVar1->Ptr;
      pTVar1->Ptr = (IAudioInfoFactory *)*TVar4.Ptr;
      *TVar4.Ptr = (IAudioInfoFactory)0x0;
      if (pIVar3 != (IAudioInfoFactory *)0x0) {
        (**(code **)*pIVar3)(pIVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    TVar4 = MakeFactory<FADPCMAudioInfo>(this,(FName)&local_res8);
  }
  else {
    TVar4 = MakeFactory<FPcmAudioInfoHybrid>(this,(FName)&local_res8);
    if ((IAudioInfoFactory *)pTVar1 != TVar4.Ptr) {
      pIVar3 = pTVar1->Ptr;
      pTVar1->Ptr = (IAudioInfoFactory *)*TVar4.Ptr;
      *TVar4.Ptr = (IAudioInfoFactory)0x0;
      if (pIVar3 != (IAudioInfoFactory *)0x0) {
        (**(code **)*pIVar3)(pIVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    TVar4 = MakeFactory<FPcmAudioInfoHybrid>(this,(FName)&local_res8);
  }
  if ((IAudioInfoFactory *)pTVar2 != TVar4.Ptr) {
    pIVar3 = pTVar2->Ptr;
    pTVar2->Ptr = (IAudioInfoFactory *)*TVar4.Ptr;
    *TVar4.Ptr = (IAudioInfoFactory)0x0;
    if (pIVar3 != (IAudioInfoFactory *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

