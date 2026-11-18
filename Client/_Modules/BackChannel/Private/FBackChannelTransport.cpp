// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 1

// CreateConnection @ 14e7f04f0

TSharedPtr<IBackChannelSocketConnection,1> * __thiscall
FBackChannelTransport::CreateConnection
          (FBackChannelTransport *this,
          TSharedPtr<IBackChannelSocketConnection,1> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<IBackChannelSocketConnection,1> *pTVar3;
  FBackChannelConnection *this_00;
  TRawPtrProxy<FBackChannelConnection> local_res10 [3];
  TSharedPtr<FBackChannelConnection,1> local_18;
  
  if (param_1 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == IBackChannelTransport::TCP",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Transport\\BackChannelTransport.cpp"
                       ,0x14,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<IBackChannelSocketConnection,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this_00 = ::operator_new(0xd0);
  if (this_00 == (FBackChannelConnection *)0x0) {
    local_res10[0].Object = (FBackChannelConnection *)0x0;
  }
  else {
    local_res10[0].Object = FBackChannelConnection::FBackChannelConnection(this_00);
    if ((((local_res10[0].Object != (FBackChannelConnection *)0x0) &&
         ((local_res10[0].Object)->_padding_ != 0)) && ((local_res10[0].Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res10[0].Object)->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<IBackChannelSocketConnection,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedPtr<FBackChannelConnection,1>::TSharedPtr<FBackChannelConnection,1><FBackChannelConnection>
            (&local_18,local_res10);
  __return_storage_ptr__->Object = (IBackChannelSocketConnection *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

