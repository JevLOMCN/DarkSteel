// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// FAudioBusAsset @ 14b345020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAudioBusAsset * __thiscall
Metasound::FAudioBusAsset::FAudioBusAsset
          (FAudioBusAsset *this,TSharedPtr<Audio::IProxyData,1> *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FAudioBusAsset *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FAudioBusProxy *pFVar6;
  IProxyData *this_00;
  FAudioBusAsset local_18;
  
  (this->AudioBusProxy).Object = (FAudioBusProxy *)0x0;
  (this->AudioBusProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_1->Object != (IProxyData *)0x0) {
    bVar3 = Audio::IProxyData::CheckTypeCast<FAudioBusProxy>(param_1->Object);
    if (bVar3) {
      if (param_1->Object == (IProxyData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FAudioBusAsset *)(*pcVar1)();
          return pFVar4;
        }
      }
      this_00 = param_1->Object;
      bVar3 = Audio::IProxyData::CheckTypeCast<FAudioBusProxy>(this_00);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\IAudioProxyInitializer.h"
                           ,0x47,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FAudioBusAsset *)(*pcVar1)();
          return pFVar4;
        }
        this_00 = (IProxyData *)&DAT_00000001;
      }
      pTVar5 = ::operator_new(0x30);
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        local_18.AudioBusProxy.Object = ___xmm_00000000000000000000000000000010;
        pFVar6 = (FAudioBusProxy *)&DAT_00000010;
        local_18.AudioBusProxy.SharedReferenceCount.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar5->SharedReferenceCount = (atomic<int>)0x1;
        pFVar6 = (FAudioBusProxy *)(pTVar5 + 1);
        pTVar5->WeakReferenceCount = (atomic<int>)0x1;
        pTVar5->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFAudioBusProxy___00_SharedPointerInternals__6B_;
        pTVar5[1]._padding_ = (longlong)&___7IProxyData_Audio__6B_;
        uVar2 = (this_00->ProxyTypeName).Number;
        pTVar5[1].SharedReferenceCount = (atomic<int>)(this_00->ProxyTypeName).ComparisonIndex.Value
        ;
        pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
        pTVar5[1]._padding_ = (longlong)&___7FAudioBusProxy__6B_;
        *(int *)&pTVar5[2]._padding_ = (int)this_00[1]._padding_;
        *(undefined4 *)((longlong)&pTVar5[2]._padding_ + 4) =
             *(undefined4 *)((longlong)&this_00[1]._padding_ + 4);
        pTVar5[2].SharedReferenceCount = (atomic<int>)this_00[1].ProxyTypeName.ComparisonIndex.Value
        ;
        if (pFVar6 == (FAudioBusProxy *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FAudioBusAsset *)(*pcVar1)();
            return pFVar4;
          }
        }
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        local_18.AudioBusProxy.SharedReferenceCount.ReferenceController = pTVar5;
        local_18.AudioBusProxy.Object = pFVar6;
      }
      if (this != &local_18) {
        (this->AudioBusProxy).Object = pFVar6;
        local_18.AudioBusProxy.Object = (FAudioBusProxy *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AudioBusProxy).SharedReferenceCount,
                   &local_18.AudioBusProxy.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.AudioBusProxy.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
  }
  return this;
}

