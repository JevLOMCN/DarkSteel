// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 2

// TSharedRef<FTcpMessageTransport,1><FTcpMessageTransport> @ 14eac65e0

TSharedRef<FTcpMessageTransport,1> * __thiscall
TSharedRef<FTcpMessageTransport,1>::TSharedRef<FTcpMessageTransport,1><FTcpMessageTransport>
          (TSharedRef<FTcpMessageTransport,1> *this,TRawPtrProxy<FTcpMessageTransport> *param_1)

{
  FTcpMessageTransport *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FTcpMessageTransport,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTcpMessageTransport__U__DefaultDeleter_VFTcpMessageTransport___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FTcpMessageTransport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FTcpMessageTransport,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FTcpSerializedMessage,1><FTcpSerializedMessage> @ 14eac6760

TSharedRef<FTcpSerializedMessage,1> * __thiscall
TSharedRef<FTcpSerializedMessage,1>::TSharedRef<FTcpSerializedMessage,1><FTcpSerializedMessage>
          (TSharedRef<FTcpSerializedMessage,1> *this,TRawPtrProxy<FTcpSerializedMessage> *param_1)

{
  FTcpSerializedMessage *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FTcpSerializedMessage,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTcpSerializedMessage__U__DefaultDeleter_VFTcpSerializedMessage___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FTcpSerializedMessage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FTcpSerializedMessage,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

