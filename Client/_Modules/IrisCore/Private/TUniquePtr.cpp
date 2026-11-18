// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_> @ 1441f8410

TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>
* __thiscall
TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>
::
TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>
          (TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>
           *this)

{
  this->Ptr = (FNetObjectAttachmentReceiveQueue *)0x0;
  return this;
}

// ~TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_> @ 1441f9a20

void __thiscall
TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>
::
~TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>
          (TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>
           *this)

{
  FNetObjectAttachmentReceiveQueue *this_00;
  
  this_00 = this->Ptr;
  if (this_00 != (FNetObjectAttachmentReceiveQueue *)0x0) {
    UE::Net::Private::FNetObjectAttachmentReceiveQueue::~FNetObjectAttachmentReceiveQueue(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// TUniquePtr<UE::Net::Private::FNetObjectAttachmentSendQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentSendQueue>_> @ 1442f5c10

TUniquePtr<UE::Net::Private::FNetObjectAttachmentSendQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentSendQueue>_>
* __thiscall
TUniquePtr<UE::Net::Private::FNetObjectAttachmentSendQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentSendQueue>_>
::
TUniquePtr<UE::Net::Private::FNetObjectAttachmentSendQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentSendQueue>_>
          (TUniquePtr<UE::Net::Private::FNetObjectAttachmentSendQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentSendQueue>_>
           *this)

{
  this->Ptr = (FNetObjectAttachmentSendQueue *)0x0;
  return this;
}

// ~TUniquePtr<UE::Net::Private::FNetObjectAttachmentSendQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentSendQueue>_> @ 1442f7e80

void __thiscall
TUniquePtr<UE::Net::Private::FNetObjectAttachmentSendQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentSendQueue>_>
::
~TUniquePtr<UE::Net::Private::FNetObjectAttachmentSendQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentSendQueue>_>
          (TUniquePtr<UE::Net::Private::FNetObjectAttachmentSendQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentSendQueue>_>
           *this)

{
  FNetObjectAttachmentSendQueue *this_00;
  
  this_00 = this->Ptr;
  if (this_00 != (FNetObjectAttachmentSendQueue *)0x0) {
    UE::Net::Private::FNetObjectAttachmentSendQueue::~FNetObjectAttachmentSendQueue(this_00);
    ::operator_delete(this_00,0x30);
    return;
  }
  return;
}

