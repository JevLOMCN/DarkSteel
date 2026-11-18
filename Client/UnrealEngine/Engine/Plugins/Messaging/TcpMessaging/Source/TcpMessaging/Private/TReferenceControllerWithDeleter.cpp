// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 4

// DestroyObject @ 14eac5e40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTcpMessageTransport,SharedPointerInternals::DefaultDeleter<FTcpMessageTransport>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTcpMessageTransport,SharedPointerInternals::DefaultDeleter<FTcpMessageTransport>,1>
                *this)

{
  FTcpMessageTransport *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTcpMessageTransport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014eac5e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14eac9af0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTcpDeserializedMessage,SharedPointerInternals::DefaultDeleter<FTcpDeserializedMessage>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTcpDeserializedMessage,SharedPointerInternals::DefaultDeleter<FTcpDeserializedMessage>,1>
                *this)

{
  FTcpDeserializedMessage *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTcpDeserializedMessage *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014eac9b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14eac9b10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTcpMessageTransportConnection,SharedPointerInternals::DefaultDeleter<FTcpMessageTransportConnection>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTcpMessageTransportConnection,SharedPointerInternals::DefaultDeleter<FTcpMessageTransportConnection>,1>
                *this)

{
  FTcpMessageTransportConnection *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTcpMessageTransportConnection *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014eac9b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14eac9b30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTcpSerializedMessage,SharedPointerInternals::DefaultDeleter<FTcpSerializedMessage>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTcpSerializedMessage,SharedPointerInternals::DefaultDeleter<FTcpSerializedMessage>,1>
                *this)

{
  FTcpSerializedMessage *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTcpSerializedMessage *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014eac9b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

