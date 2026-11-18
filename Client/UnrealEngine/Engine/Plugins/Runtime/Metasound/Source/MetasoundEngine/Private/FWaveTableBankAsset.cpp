// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// FWaveTableBankAsset @ 14b34bf80

FWaveTableBankAsset * __thiscall
Metasound::FWaveTableBankAsset::FWaveTableBankAsset
          (FWaveTableBankAsset *this,TSharedPtr<Audio::IProxyData,1> *param_1)

{
  int *piVar1;
  int iVar2;
  atomic<int> aVar3;
  FWaveTableData *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  FWaveTableBankAsset *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  IProxyData *this_00;
  TReferenceControllerBase<1> *pTVar11;
  FWaveTableBankAssetProxy *pFVar12;
  FWaveTableBankAsset local_28;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  (this->Proxy).Object = (FWaveTableBankAssetProxy *)0x0;
  (this->Proxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->Object == (IProxyData *)0x0) {
    return this;
  }
  bVar8 = Audio::IProxyData::CheckTypeCast<FWaveTableBankAssetProxy>(param_1->Object);
  if (!bVar8) {
    return this;
  }
  if ((param_1->Object == (IProxyData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FWaveTableBankAsset *)(*pcVar6)();
    return pFVar9;
  }
  this_00 = param_1->Object;
  bVar8 = Audio::IProxyData::CheckTypeCast<FWaveTableBankAssetProxy>(this_00);
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\IAudioProxyInitializer.h"
                       ,0x47,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FWaveTableBankAsset *)(*pcVar6)();
      return pFVar9;
    }
    this_00 = (IProxyData *)&DAT_00000001;
  }
  pTVar10 = ::operator_new(0x50);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pFVar12 = (FWaveTableBankAssetProxy *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveTableBankAssetProxy___00_SharedPointerInternals__6B_
    ;
    pTVar10[1]._padding_ = (longlong)&___7IProxyData_Audio__6B_;
    uVar7 = (this_00->ProxyTypeName).Number;
    pTVar10[1].SharedReferenceCount = (atomic<int>)(this_00->ProxyTypeName).ComparisonIndex.Value;
    pTVar10[1].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar10[1]._padding_ = (longlong)&___7FWaveTableBankAssetProxy__6B_;
    pTVar10[2]._padding_ = 0;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    *(char *)&pTVar10[3]._padding_ = (char)this_00[2]._padding_;
    *(undefined4 *)((longlong)&pTVar10[3]._padding_ + 4) =
         *(undefined4 *)((longlong)&this_00[2]._padding_ + 4);
    pTVar10[3].SharedReferenceCount = (atomic<int>)this_00[2].ProxyTypeName.ComparisonIndex.Value;
    *(char *)&pTVar10[3].WeakReferenceCount = (char)this_00[2].ProxyTypeName.Number;
    pTVar10[4]._padding_ = 0;
    aVar3 = (atomic<int>)this_00[3].ProxyTypeName.ComparisonIndex.Value;
    pFVar4 = (FWaveTableData *)this_00[3]._padding_;
    pTVar10[4].SharedReferenceCount = aVar3;
    if (aVar3 == (atomic<int>)0x0) {
      pTVar10[4].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,(int)aVar3,0,(ForAnyElementType *)(pTVar10 + 4),(int)aVar3,
                 (int *)&pTVar10[4].WeakReferenceCount);
      ConstructItems<FWaveTableData,FWaveTableData,int>
                ((FScriptContainerElement *)pTVar10[4]._padding_,pFVar4,(int)aVar3);
    }
    pFVar12 = (FWaveTableBankAssetProxy *)(pTVar10 + 1);
    pTVar11 = pTVar10;
    if (pFVar12 == (FWaveTableBankAssetProxy *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FWaveTableBankAsset *)(*pcVar6)();
        return pFVar9;
      }
      goto LAB_14b34c195;
    }
  }
  if (((pFVar12->_padding_ == 0) || (pFVar12->_padding_ == 0)) ||
     (*(int *)(pFVar12->_padding_ + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar12->_padding_ = (longlong)pFVar12;
    if (pTVar11 != (TReferenceControllerBase<1> *)pFVar12->_padding_) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar12->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar12->_padding_ = (longlong)pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_14b34c195:
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Proxy.Object = pFVar12;
  local_28.Proxy.SharedReferenceCount.ReferenceController = pTVar11;
  if (this != &local_28) {
    (this->Proxy).Object = pFVar12;
    local_28.Proxy.Object = (FWaveTableBankAssetProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Proxy).SharedReferenceCount,&local_28.Proxy.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Proxy.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return this;
}

