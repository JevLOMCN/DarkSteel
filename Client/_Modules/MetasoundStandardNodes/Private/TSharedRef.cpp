// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 21

// TSharedRef<Metasound::IDataChannel,1><Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>_> @ 14afe0910

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TAudioDataChannel<Metasound::FMonoAudioFormat> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TAudioDataChannel_VFMonoAudioFormat_Metasound___Metasound__U__DefaultDeleter_V__TAudioDataChannel_VFMonoAudioFormat_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TAudioDataChannel<Metasound::FMonoAudioFormat> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TAudioDataChannel<Metasound::FMonoAudioFormat> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>_> @ 14afe0a10

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TAudioDataChannel<Metasound::FStereoAudioFormat> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TAudioDataChannel_VFStereoAudioFormat_Metasound___Metasound__U__DefaultDeleter_V__TAudioDataChannel_VFStereoAudioFormat_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TAudioDataChannel<Metasound::FStereoAudioFormat> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TAudioDataChannel<Metasound::FStereoAudioFormat> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_> @ 14afe0b10

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                 0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_> @ 14afe0c10

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b045440

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)0x0
     ) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_> @ 14b09b5b0

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)0x0)
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_> @ 14b09b6b0

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_> @ 14b09b7b0

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::EKneeMode,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::TEnum<Metasound::EKneeMode,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::EKneeMode,0>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_> @ 14b09b8b0

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                  *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_> @ 14b117490

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_> @ 14b117590

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::ENoiseType,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::TEnum<Metasound::ENoiseType,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::ENoiseType,0>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_> @ 14b117690

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_> @ 14b117790

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)0x0)
     && (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
         (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_> @ 14b117890

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)0x0)
     && (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
         (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_> @ 14b117990

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                 0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_> @ 14b117a90

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1bc9e0

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1bcae0

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_> @ 14b217fa0

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_> @ 14b2180a0

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)0x0
      ) && (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
            (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_> @ 14b2181a0

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::IDataChannel,1> *pTVar9;
  
  this->Object = (IDataChannel *)param_1->Object;
  pTVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

