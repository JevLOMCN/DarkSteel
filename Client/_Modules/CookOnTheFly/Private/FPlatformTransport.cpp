// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 8

// FPlatformTransport @ 14311bac0

FPlatformTransport * __thiscall
FPlatformTransport::FPlatformTransport(FPlatformTransport *this,int param_1,FString *param_2)

{
  this->ProtocolIndex = param_1;
  this->_padding_ = (longlong)&___7FPlatformTransport__6B_;
  ::FString::FString(&this->ProtocolName,param_2);
  (this->HostSocket).Object = (IPlatformHostSocket *)0x0;
  (this->HostSocket).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FPlatformTransport @ 14311bfe0

void __thiscall FPlatformTransport::~FPlatformTransport(FPlatformTransport *this)

{
  TSharedPtr<IPlatformHostSocket,1> *pTVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  IPlatformHostCommunication *pIVar5;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  IPlatformHostSocket *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar1 = &this->HostSocket;
  this->_padding_ = (longlong)&___7FPlatformTransport__6B_;
  if ((this->HostSocket).Object != (IPlatformHostSocket *)0x0) {
    pIVar5 = FGenericPlatformMisc::GetPlatformHostCommunication();
    cVar4 = (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    if (cVar4 != '\0') {
      local_10 = (this->HostSocket).SharedReferenceCount.ReferenceController;
      pcVar2 = *(code **)((longlong)*pIVar5 + 0x20);
      local_18 = pTVar1->Object;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar2)(pIVar5,&local_18);
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<IPlatformHostSocket,1> *)&local_28) {
        pTVar1->Object = (IPlatformHostSocket *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->HostSocket).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostSocket).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->ProtocolName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7ICookOnTheFlyServerTransport__6B_;
  return;
}

// Disconnect @ 14311d4e0

void __thiscall FPlatformTransport::Disconnect(FPlatformTransport *this)

{
  code *pcVar1;
  char cVar2;
  IPlatformHostCommunication *pIVar3;
  IPlatformHostSocket *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar3 = FGenericPlatformMisc::GetPlatformHostCommunication();
  cVar2 = (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
  if (cVar2 != '\0') {
    local_18 = (this->HostSocket).Object;
    local_10 = (this->HostSocket).SharedReferenceCount.ReferenceController;
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x20);
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar1)(pIVar3,&local_18);
  }
  return;
}

// HasPendingPayload @ 14311e080

bool __thiscall FPlatformTransport::HasPendingPayload(FPlatformTransport *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CookOnTheFly\\Private\\PlatformTransport.cpp"
                     ,0x73,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// Initialize @ 14311e110

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPlatformTransport::Initialize(FPlatformTransport *this,wchar_t *param_1)

{
  TSharedPtr<IPlatformHostSocket,1> *pTVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  IPlatformHostCommunication *pIVar7;
  undefined8 *puVar8;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pTVar1 = &this->HostSocket;
  if (((this->HostSocket).Object != (IPlatformHostSocket *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HostSocket == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CookOnTheFly\\Private\\PlatformTransport.cpp"
                         ,0x39,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pIVar7 = FGenericPlatformMisc::GetPlatformHostCommunication();
  cVar6 = (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  if (cVar6 != '\0') {
    puVar8 = (undefined8 *)
             (**(code **)((longlong)*pIVar7 + 0x18))
                       (pIVar7,local_28,this->ProtocolIndex,&this->ProtocolName,0,0);
    if (pTVar1 != (TSharedPtr<IPlatformHostSocket,1> *)puVar8) {
      pTVar1->Object = (IPlatformHostSocket *)*puVar8;
      *puVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->HostSocket).SharedReferenceCount,(FSharedReferencer<1> *)(puVar8 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    if (pTVar1->Object != (IPlatformHostSocket *)0x0) {
      fVar3 = __real_3f000000;
      if (3 < (byte)LogCookOnTheFly._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
        fVar3 = __real_3f000000;
      }
      while( true ) {
        if ((pTVar1->Object == (IPlatformHostSocket *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        (**(code **)((longlong)*pTVar1->Object + 0x18))();
        if ((pTVar1->Object == (IPlatformHostSocket *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) break;
        cVar6 = (**(code **)((longlong)*pTVar1->Object + 0x18))();
        if (cVar6 != '\x01') {
          if ((pTVar1->Object == (IPlatformHostSocket *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          cVar6 = (**(code **)((longlong)*pTVar1->Object + 0x18))();
          return cVar6 == '\x02';
        }
        FWindowsPlatformProcess::Sleep(fVar3);
      }
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// ReceivePayload @ 14311ed60

bool __thiscall FPlatformTransport::ReceivePayload(FPlatformTransport *this,FArrayReader *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FSimpleAbstractSocket local_28;
  IPlatformHostSocket *local_20;
  TReferenceControllerBase<1> *local_18;
  
  pTVar1 = (this->HostSocket).SharedReferenceCount.ReferenceController;
  local_20 = (this->HostSocket).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = (FSimpleAbstractSocket)&FSimpleAbstractSocket_PlatformProtocol::_vftable_;
  local_18 = pTVar1;
  if ((local_20 == (IPlatformHostSocket *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("HostSocket != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CookOnTheFly\\Private\\PlatformTransport.cpp"
                         ,0x16,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  bVar3 = FNFSMessageHeader::ReceivePayload(param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return bVar3;
}

// SendPayload @ 14311f9c0

bool __thiscall
FPlatformTransport::SendPayload
          (FPlatformTransport *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FSimpleAbstractSocket local_28;
  IPlatformHostSocket *local_20;
  TReferenceControllerBase<1> *local_18;
  
  pTVar1 = (this->HostSocket).SharedReferenceCount.ReferenceController;
  local_20 = (this->HostSocket).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = (FSimpleAbstractSocket)&FSimpleAbstractSocket_PlatformProtocol::_vftable_;
  local_18 = pTVar1;
  if ((local_20 == (IPlatformHostSocket *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("HostSocket != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CookOnTheFly\\Private\\PlatformTransport.cpp"
                         ,0x16,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  bVar3 = FNFSMessageHeader::WrapAndSendPayload(param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return bVar3;
}

// WaitUntilConnected @ 143120520

bool __thiscall FPlatformTransport::WaitUntilConnected(FPlatformTransport *this)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  
  fVar2 = __real_3f000000;
  while( true ) {
    if ((this->HostSocket).Object == (IPlatformHostSocket *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (**(code **)((longlong)*(this->HostSocket).Object + 0x18))();
    if ((this->HostSocket).Object == (IPlatformHostSocket *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    cVar5 = (**(code **)((longlong)*(this->HostSocket).Object + 0x18))();
    if (cVar5 != '\x01') break;
    FWindowsPlatformProcess::Sleep(fVar2);
  }
  if ((this->HostSocket).Object == (IPlatformHostSocket *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  cVar5 = (**(code **)((longlong)*(this->HostSocket).Object + 0x18))();
  return cVar5 == '\x02';
}

