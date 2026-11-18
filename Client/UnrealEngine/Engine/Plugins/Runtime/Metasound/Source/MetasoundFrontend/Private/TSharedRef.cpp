// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 25

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_> @ 14ad80ab0

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_> @ 14ad80bb0

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>_> @ 14ad80cb0

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_VFAnalyzerAddress_Frontend_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_VFAnalyzerAddress_Frontend_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<Metasound::Frontend::FAnalyzerAddress> *)0x0) &&
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

// TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1><TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>_> @ 14ae0d000

TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> * __thiscall
TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1>::
TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1><TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>_>
          (TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> *this,
          TRawPtrProxy<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>_> *param_1)

{
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonWriter_DU__TPrettyJsonPrintPolicy_D____U__DefaultDeleter_V__TJsonWriter_DU__TPrettyJsonPrintPolicy_D_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// Init<Metasound::Frontend::FDocumentModifyDelegates> @ 14ae128a0

void __thiscall
TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1>::
Init<Metasound::Frontend::FDocumentModifyDelegates>
          (TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> *this,
          FDocumentModifyDelegates *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  
  if (param_1 == (FDocumentModifyDelegates *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    plVar1 = &param_1->_padding_;
    if (((param_1->_padding_ == 0) || (*plVar1 == 0)) || (*(int *)(*plVar1 + 8) < 1)) {
      pTVar4 = (this->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_1->_padding_ = (longlong)param_1;
      if (pTVar4 != (TReferenceControllerBase<1> *)*plVar1) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
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
        *plVar1 = (longlong)pTVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  return;
}

// TSharedRef<Metasound::Frontend::FDocumentCache,1> @ 14ae1a460

TSharedRef<Metasound::Frontend::FDocumentCache,1> * __thiscall
TSharedRef<Metasound::Frontend::FDocumentCache,1>::TSharedRef<Metasound::Frontend::FDocumentCache,1>
          (TSharedRef<Metasound::Frontend::FDocumentCache,1> *this,FDocumentCache *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<Metasound::Frontend::FDocumentCache,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FDocumentCache *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<Metasound::Frontend::FDocumentCache,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1> @ 14ae1a540

TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1> * __thiscall
TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1>::
TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1>
          (TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1> *this,
          FDocumentGraphEdgeCache *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FDocumentGraphEdgeCache *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1> @ 14ae1a620

TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1> * __thiscall
TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1>::
TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1>
          (TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1> *this,
          FDocumentGraphInterfaceCache *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FDocumentGraphInterfaceCache *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1> @ 14ae1a700

TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1> * __thiscall
TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1>::
TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1>
          (TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1> *this,
          FDocumentGraphNodeCache *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FDocumentGraphNodeCache *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<int>_> @ 14aeeef00

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<int>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<int>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<int> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_H_Metasound__U__DefaultDeleter_V__TCopyableDataChannel_H_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<int> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<int> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<float>_> @ 14aeef000

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<float>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<float>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<float> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_M_Metasound__U__DefaultDeleter_V__TCopyableDataChannel_M_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<float> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<float> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14aeef100

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14aeef200

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_> @ 14aeef300

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14aeef400

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14aeef500

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0)
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
  if ((pTVar4 != (TCopyableDataChannel<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14aeef600

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object ==
      (TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0)
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14aeef700

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__U__DefaultDeleter_V__TCopyableDataChannel_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>_> @ 14aeef800

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::FAudioBuffer>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::FAudioBuffer> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_VFAudioBuffer_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_VFAudioBuffer_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::FAudioBuffer> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<Metasound::FAudioBuffer> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>_> @ 14aeef900

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<FMetasoundParameterStorageWrapper>_> *param_1
          )

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<FMetasoundParameterStorageWrapper> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_VFMetasoundParameterStorageWrapper___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_VFMetasoundParameterStorageWrapper___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<FMetasoundParameterStorageWrapper> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<FMetasoundParameterStorageWrapper> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FSendAddress>_> @ 14aeefa00

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FSendAddress>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::FSendAddress>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::FSendAddress> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_VFSendAddress_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_VFSendAddress_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::FSendAddress> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<Metasound::FSendAddress> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<FString>_> @ 14aeefb00

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<FString>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<FString>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<FString> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_VFString___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_VFString___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<FString> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<FString> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FTime>_> @ 14aeefc00

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FTime>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::FTime>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::FTime> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_VFTime_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_VFTime_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::FTime> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<Metasound::FTime> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FTrigger>_> @ 14aeefd00

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::FTrigger>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::FTrigger>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<Metasound::FTrigger> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel_VFTrigger_Metasound___Metasound__U__DefaultDeleter_V__TCopyableDataChannel_VFTrigger_Metasound___Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<Metasound::FTrigger> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<Metasound::FTrigger> *)0x0) &&
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

// TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<bool>_> @ 14aeefe00

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedRef<Metasound::IDataChannel,1>::
TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<bool>_>
          (TSharedRef<Metasound::IDataChannel,1> *this,
          TRawPtrProxy<Metasound::TCopyableDataChannel<bool>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TCopyableDataChannel<bool> *pTVar4;
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
         ___7__TReferenceControllerWithDeleter_V__TCopyableDataChannel__N_Metasound__U__DefaultDeleter_V__TCopyableDataChannel__N_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (TCopyableDataChannel<bool> *)0x0) {
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
  if ((pTVar4 != (TCopyableDataChannel<bool> *)0x0) &&
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

