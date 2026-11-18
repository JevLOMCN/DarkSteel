// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<WaveTable::FWaveTable>_> @ 14b304490

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<WaveTable::FWaveTable>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<WaveTable::FWaveTable>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<WaveTable::FWaveTable> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_UFWaveTable_WaveTable___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_UFWaveTable_WaveTable___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<WaveTable::FWaveTable> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<WaveTable::FWaveTable> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b304590

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b304690

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *
                 )0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b304790

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
      0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_> @ 14b304890

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
  *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
      )0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_> @ 14b304990

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4
  ;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)
      0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>_> @ 14b304a90

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::FAudioBusAsset>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::FAudioBusAsset> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_VFAudioBusAsset_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_VFAudioBusAsset_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::FAudioBusAsset> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<Metasound::FAudioBusAsset> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FWaveAsset>_> @ 14b304b90

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FWaveAsset>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::FWaveAsset>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::FWaveAsset> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_VFWaveAsset_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_VFWaveAsset_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::FWaveAsset> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<Metasound::FWaveAsset> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>_> @ 14b304c90

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::FWaveTableBankAsset>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::FWaveTableBankAsset> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_VFWaveTableBankAsset_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_VFWaveTableBankAsset_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<Metasound::FWaveTableBankAsset> *)0x0) &&
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

