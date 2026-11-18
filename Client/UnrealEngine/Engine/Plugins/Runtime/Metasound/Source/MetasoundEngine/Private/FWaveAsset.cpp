// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 3

// <lambda_invoker_cdecl> @ 14b301200

void __cdecl
`Metasound::FWaveAsset::FWaveAsset'::__l23::<lambda_1>::<lambda_invoker_cdecl>
          (EAudioChunkLoadResult param_1)

{
  return;
}

// FWaveAsset @ 14b34b290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FWaveAsset * __thiscall
Metasound::FWaveAsset::FWaveAsset(FWaveAsset *this,TSharedPtr<Audio::IProxyData,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWaveAsset *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar6;
  FSoundWaveProxy *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar9;
  FWaveAsset local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->SoundWaveProxy).Object = (FSoundWaveProxy *)0x0;
  (this->SoundWaveProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_1->Object != (IProxyData *)0x0) {
    bVar2 = Audio::IProxyData::CheckTypeCast<FSoundWaveProxy>(param_1->Object);
    if (bVar2) {
      if (param_1->Object == (IProxyData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FWaveAsset *)(*pcVar1)();
          return pFVar4;
        }
      }
      pFVar7 = (FSoundWaveProxy *)param_1->Object;
      bVar2 = Audio::IProxyData::CheckTypeCast<FSoundWaveProxy>((IProxyData *)pFVar7);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\IAudioProxyInitializer.h"
                           ,0x47,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FWaveAsset *)(*pcVar1)();
          return pFVar4;
        }
        pFVar7 = (FSoundWaveProxy *)&DAT_00000001;
      }
      pTVar5 = ::operator_new(0x38);
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        local_58.SoundWaveProxy.Object = ___xmm_00000000000000000000000000000010;
        pFVar7 = (FSoundWaveProxy *)&DAT_00000010;
        local_58.SoundWaveProxy.SharedReferenceCount.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar5->SharedReferenceCount = (atomic<int>)0x1;
        pTVar5->WeakReferenceCount = (atomic<int>)0x1;
        pTVar5->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFSoundWaveProxy___00_SharedPointerInternals__6B_;
        FSoundWaveProxy::FSoundWaveProxy((FSoundWaveProxy *)(pTVar5 + 1),pFVar7);
        pFVar7 = (FSoundWaveProxy *)(pTVar5 + 1);
        if (pFVar7 == (FSoundWaveProxy *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FWaveAsset *)(*pcVar1)();
            return pFVar4;
          }
        }
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        local_58.SoundWaveProxy.SharedReferenceCount.ReferenceController = pTVar5;
        pTVar8 = pTVar5;
        local_58.SoundWaveProxy.Object = pFVar7;
      }
      if (this != &local_58) {
        (this->SoundWaveProxy).Object = pFVar7;
        local_58.SoundWaveProxy.Object = (FSoundWaveProxy *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SoundWaveProxy).SharedReferenceCount,
                   &local_58.SoundWaveProxy.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SoundWaveProxy.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      pFVar7 = (this->SoundWaveProxy).Object;
      if (pFVar7 == (FSoundWaveProxy *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<894336126603493409>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWave.cpp"
                           ,0x21,"SoundWaveProxy.IsValid()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FWaveAsset *)(*pcVar1)();
          return pFVar4;
        }
      }
      else if (DisableMetasoundWaveAssetCachePriming == 0) {
        bVar2 = FSoundWaveProxy::IsStreaming(pFVar7);
        if (bVar2) {
          if ((this->SoundWaveProxy).Object == (FSoundWaveProxy *)0x0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              pFVar4 = (FWaveAsset *)(*pcVar1)();
              return pFVar4;
            }
          }
          uVar3 = FSoundWaveProxy::GetNumChunks((this->SoundWaveProxy).Object);
          if (1 < uVar3) {
            this_00 = IStreamingManager::Get_Concurrent();
            if (this_00 != (FStreamingManagerCollection *)0x0) {
              pIVar6 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
              local_38 = &
                         ___7__TFunction_OwnedObject_P6AXW4EAudioChunkLoadResult___Z_0A__0A__Function_Private_Core_UE__6B_
              ;
              local_20 = 0;
              local_30 = `Metasound::FWaveAsset::FWaveAsset'::__l23::<lambda_1>::
                         <lambda_invoker_cdecl>;
              local_48[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<void_(__cdecl*)(enum_EAudioChunkLoadResult),void,enum_EAudioChunkLoadResult>
                            ::Call;
              (**(code **)(*(longlong *)pIVar6 + 0xa8))
                        (pIVar6,this,1,local_48,CONCAT44(uVar9,0xff),0);
            }
          }
        }
      }
    }
  }
  return this;
}

// IsSoundWaveValid @ 14b3c8f10

bool __thiscall Metasound::FWaveAsset::IsSoundWaveValid(FWaveAsset *this)

{
  return (this->SoundWaveProxy).Object != (FSoundWaveProxy *)0x0;
}

