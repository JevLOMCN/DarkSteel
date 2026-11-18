// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// AsShared @ 1490cc750

TSharedRef<FNiagaraDataChannelGameData,1> * __thiscall
TSharedFromThis<FNiagaraDataChannelGameData,1>::AsShared
          (TSharedFromThis<FNiagaraDataChannelGameData,1> *this,
          TSharedRef<FNiagaraDataChannelGameData,1> *__return_storage_ptr__)

{
  FNiagaraDataChannelGameData *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FNiagaraDataChannelGameData,1> *pTVar5;
  FNiagaraDataChannelGameData *pFVar6;
  FNiagaraDataChannelGameData *pFVar7;
  bool bVar8;
  
  pFVar1 = (FNiagaraDataChannelGameData *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FNiagaraDataChannelGameData *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FNiagaraDataChannelGameData *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_1490cc791;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_1490cc791:
  if ((pFVar7 != (FNiagaraDataChannelGameData *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FNiagaraDataChannelGameData,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FNiagaraDataChannelGameData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FNiagaraDataChannelGameData,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FNiagaraDataChannelGameData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FNiagaraDataChannelGameData,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 149284c50

TSharedRef<FNiagaraDataBufferReadback,1> * __thiscall
TSharedFromThis<FNiagaraDataBufferReadback,1>::AsShared
          (TSharedFromThis<FNiagaraDataBufferReadback,1> *this,
          TSharedRef<FNiagaraDataBufferReadback,1> *__return_storage_ptr__)

{
  FNiagaraDataBufferReadback *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FNiagaraDataBufferReadback,1> *pTVar5;
  FNiagaraDataBufferReadback *pFVar6;
  FNiagaraDataBufferReadback *pFVar7;
  bool bVar8;
  
  pFVar1 = (FNiagaraDataBufferReadback *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FNiagaraDataBufferReadback *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FNiagaraDataBufferReadback *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_149284c91;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_149284c91:
  if ((pFVar7 != (FNiagaraDataBufferReadback *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FNiagaraDataBufferReadback,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FNiagaraDataBufferReadback *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FNiagaraDataBufferReadback,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FNiagaraDataBufferReadback *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FNiagaraDataBufferReadback,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 149284d50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FNiagaraDataSetReadback,1> * __thiscall
TSharedFromThis<FNiagaraDataSetReadback,1>::AsShared
          (TSharedFromThis<FNiagaraDataSetReadback,1> *this,
          TSharedRef<FNiagaraDataSetReadback,1> *__return_storage_ptr__)

{
  FNiagaraDataSetReadback *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FNiagaraDataSetReadback,1> *pTVar5;
  FNiagaraDataSetReadback *pFVar6;
  FNiagaraDataSetReadback *pFVar7;
  bool bVar8;
  
  pFVar1 = (FNiagaraDataSetReadback *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FNiagaraDataSetReadback *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FNiagaraDataSetReadback *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_149284d91;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_149284d91:
  if ((pFVar7 != (FNiagaraDataSetReadback *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FNiagaraDataSetReadback,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FNiagaraDataSetReadback *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FNiagaraDataSetReadback,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FNiagaraDataSetReadback *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FNiagaraDataSetReadback,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 1493d7560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedRef<FNiagaraSystemSimulation,1> * __thiscall
TSharedFromThis<FNiagaraSystemSimulation,1>::AsShared
          (TSharedFromThis<FNiagaraSystemSimulation,1> *this,
          TSharedRef<FNiagaraSystemSimulation,1> *__return_storage_ptr__)

{
  FNiagaraSystemSimulation *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar5;
  FNiagaraSystemSimulation *pFVar6;
  FNiagaraSystemSimulation *pFVar7;
  bool bVar8;
  
  pFVar1 = (FNiagaraSystemSimulation *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FNiagaraSystemSimulation *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FNiagaraSystemSimulation *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_1493d75a1;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_1493d75a1:
  if ((pFVar7 != (FNiagaraSystemSimulation *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FNiagaraSystemSimulation,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FNiagaraSystemSimulation *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FNiagaraSystemSimulation,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FNiagaraSystemSimulation *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FNiagaraSystemSimulation,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

