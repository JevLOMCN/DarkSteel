// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 1

// Build @ 14eac8d10

TSharedPtr<IMessageBridge,1> * __thiscall
FMessageBridgeBuilder::Build
          (FMessageBridgeBuilder *this,TSharedPtr<IMessageBridge,1> *__return_storage_ptr__)

{
  IMessageBus *pIVar1;
  FName FVar2;
  IMessageBridge IVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  TSharedPtr<IMessageBridge,1> *pTVar8;
  FName *pFVar9;
  FModuleManager *this_00;
  IModuleInterface *pIVar10;
  TReferenceControllerBase<1> *pTVar11;
  FName local_res8;
  IMessageBus *local_58;
  TReferenceControllerBase<1> *local_50;
  IMessageTransport *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  __return_storage_ptr__->Object = (IMessageBridge *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (((this->Transport).Object == (IMessageTransport *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Transport.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageBridgeBuilder.h"
                         ,0x5d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<IMessageBridge,1> *)(*pcVar4)();
    return pTVar8;
  }
  pTVar11 = (this->BusPtr).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar11->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14eac8d85;
      }
      LOCK();
      aVar7 = pTVar11->SharedReferenceCount;
      bVar6 = aVar5 == aVar7;
      if (bVar6) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar6);
    pIVar1 = (this->BusPtr).Object;
    if (pIVar1 != (IMessageBus *)0x0) {
      pFVar9 = ::FName::FName(&local_res8,"Messaging");
      FVar2 = *pFVar9;
      this_00 = FModuleManager::Get();
      pIVar10 = FModuleManager::LoadModuleChecked(this_00,FVar2);
      pcVar4 = *(code **)((longlong)*pIVar10 + 0x50);
      if (((this->Transport).Object == (IMessageTransport *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<IMessageBridge,1> *)(*pcVar4)();
        return pTVar8;
      }
      local_40 = (this->Transport).SharedReferenceCount.ReferenceController;
      local_48 = (this->Transport).Object;
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_48 == (IMessageTransport *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<IMessageBridge,1> *)(*pcVar4)();
        return pTVar8;
      }
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      local_58 = pIVar1;
      local_50 = pTVar11;
      if ((pIVar1 == (IMessageBus *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<IMessageBridge,1> *)(*pcVar4)();
        return pTVar8;
      }
      pTVar8 = (TSharedPtr<IMessageBridge,1> *)(*pcVar4)(pIVar10,local_38,this,&local_58,&local_48);
      if (__return_storage_ptr__ != pTVar8) {
        __return_storage_ptr__->Object = pTVar8->Object;
        pTVar8->Object = (IMessageBridge *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&pTVar8->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      if (__return_storage_ptr__->Object != (IMessageBridge *)0x0) {
        IVar3 = *__return_storage_ptr__->Object;
        if (this->Disabled == false) {
          (**(code **)((longlong)IVar3 + 8))();
        }
        else {
          (**(code **)IVar3)();
        }
      }
    }
  }
LAB_14eac8d85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

