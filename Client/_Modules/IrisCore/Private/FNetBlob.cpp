// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 15

// FNetBlob @ 1442292e0

FNetBlob * __thiscall UE::Net::FNetBlob::FNetBlob(FNetBlob *this,FNetBlobCreationInfo *param_1)

{
  this->_padding_ = (longlong)&___7FNetBlob_Net_UE__6B_;
  this->CreationInfo = *param_1;
  (this->BlobDescriptor).Reference = (FReplicationStateDescriptor *)0x0;
  (this->QuantizedBlobState).StateBuffer = (uchar *)0x0;
  (this->QuantizedBlobState).MemoryAllocationFlags = None;
  (this->QuantizedBlobState).AllocationSize = 0;
  this->RefCount = 0;
  return this;
}

// ~FNetBlob @ 14422b150

void __thiscall UE::Net::FNetBlob::~FNetBlob(FNetBlob *this)

{
  FReplicationStateDescriptor *pFVar1;
  uchar *puVar2;
  
  pFVar1 = (this->BlobDescriptor).Reference;
  this->_padding_ = (longlong)&___7FNetBlob_Net_UE__6B_;
  if (((pFVar1 != (FReplicationStateDescriptor *)0x0) &&
      ((pFVar1->Traits & HasDynamicState) != None)) &&
     (puVar2 = (this->QuantizedBlobState).StateBuffer, puVar2 != (uchar *)0x0)) {
    if ((this->QuantizedBlobState).MemoryAllocationFlags == Protectable) {
      FWindowsPlatformMemory::PageProtect
                (puVar2,(ulonglong)(this->QuantizedBlobState).AllocationSize,true,true);
    }
    Net::Private::FReplicationStateOperationsInternal::FreeDynamicState(puVar2,pFVar1);
  }
  puVar2 = (this->QuantizedBlobState).StateBuffer;
  if (puVar2 != (uchar *)0x0) {
    if ((this->QuantizedBlobState).MemoryAllocationFlags == Protectable) {
      FWindowsPlatformMemory::PageProtect
                (puVar2,(ulonglong)(this->QuantizedBlobState).AllocationSize,true,true);
    }
    FMemory::Free((this->QuantizedBlobState).StateBuffer);
  }
  pFVar1 = (this->BlobDescriptor).Reference;
  if (pFVar1 == (FReplicationStateDescriptor *)0x0) {
    return;
  }
  FReplicationStateDescriptor::Release(pFVar1);
  return;
}

// CollectObjectReferences @ 144233d50

void __thiscall
UE::Net::FNetBlob::CollectObjectReferences
          (FNetBlob *this,FNetSerializationContext *param_1,FNetReferenceCollector *param_2)

{
  FReplicationStateDescriptor *pFVar1;
  uchar *puVar2;
  FNetSerializerChangeMaskParam local_res8 [4];
  
  pFVar1 = (this->BlobDescriptor).Reference;
  if ((pFVar1 != (FReplicationStateDescriptor *)0x0) &&
     (puVar2 = (this->QuantizedBlobState).StateBuffer, puVar2 != (uchar *)0x0)) {
    local_res8[0].BitOffset = 0;
    local_res8[0].BitCount = 0;
    Net::Private::FReplicationStateOperationsInternal::CollectReferences
              (param_1,param_2,local_res8,puVar2,pFVar1);
  }
  return;
}

// Deserialize @ 1442366c0

void __thiscall UE::Net::FNetBlob::Deserialize(FNetBlob *this,FNetSerializationContext *param_1)

{
  FReplicationStateDescriptor *pFVar1;
  uchar *puVar2;
  
  pFVar1 = (this->BlobDescriptor).Reference;
  if ((pFVar1 != (FReplicationStateDescriptor *)0x0) &&
     (puVar2 = (this->QuantizedBlobState).StateBuffer, puVar2 != (uchar *)0x0)) {
    FReplicationStateOperations::Deserialize(param_1,puVar2,pFVar1);
    return;
  }
  return;
}

// DeserializeBlob @ 1442366f0

void __thiscall UE::Net::FNetBlob::DeserializeBlob(FNetBlob *this,FNetSerializationContext *param_1)

{
  FReplicationStateDescriptor *pFVar1;
  uchar *puVar2;
  
  pFVar1 = (this->BlobDescriptor).Reference;
  if ((pFVar1 != (FReplicationStateDescriptor *)0x0) &&
     (puVar2 = (this->QuantizedBlobState).StateBuffer, puVar2 != (uchar *)0x0)) {
    FReplicationStateOperations::Deserialize(param_1,puVar2,pFVar1);
    return;
  }
  return;
}

// DeserializeCreationInfo @ 144236720

void __cdecl
UE::Net::FNetBlob::DeserializeCreationInfo
          (FNetSerializationContext *param_1,FNetBlobCreationInfo *param_2)

{
  FNetBitStreamReader *this;
  uint uVar1;
  uint uVar2;
  
  this = param_1->BitStreamReader;
  uVar1 = FNetBitStreamReader::ReadBits(this,1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this,7);
  }
  uVar1 = FNetBitStreamReader::ReadBits(this,1);
  param_2->Type = uVar2;
  param_2->Flags = (uint)(uVar1 != 0);
  return;
}

// DeserializeWithObject @ 1442367f0

void __thiscall
UE::Net::FNetBlob::DeserializeWithObject
          (FNetBlob *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  FReplicationStateDescriptor *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->BlobDescriptor).Reference == (FReplicationStateDescriptor *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlobDescriptor.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlob.cpp"
                       ,0x56,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->BlobDescriptor).Reference;
  if ((pFVar1 != (FReplicationStateDescriptor *)0x0) &&
     (puVar2 = (this->QuantizedBlobState).StateBuffer, puVar2 != (uchar *)0x0)) {
    FReplicationStateOperations::Deserialize(param_1,puVar2,pFVar1);
  }
  return;
}

// GetNetObjectReferenceExports @ 14423cfb0

TArrayView<UE::Net::FNetObjectReference_const_,int> * __thiscall
UE::Net::FNetBlob::GetNetObjectReferenceExports
          (FNetBlob *this,
          TArrayView<UE::Net::FNetObjectReference_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FNetObjectReference *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNetTokenExports @ 14423cfd0

TArrayView<UE::Net::FNetToken_const_,int> * __thiscall
UE::Net::FNetBlob::GetNetTokenExports
          (FNetBlob *this,TArrayView<UE::Net::FNetToken_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FNetToken *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// Release @ 14424cd00

void __thiscall UE::Net::FNetBlob::Release(FNetBlob *this)

{
  int *piVar1;
  
  piVar1 = &this->RefCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014424cd0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x20))(this,1);
    return;
  }
  return;
}

// Serialize @ 144251100

void __thiscall UE::Net::FNetBlob::Serialize(FNetBlob *this,FNetSerializationContext *param_1)

{
  FReplicationStateDescriptor *pFVar1;
  uchar *puVar2;
  
  pFVar1 = (this->BlobDescriptor).Reference;
  if ((pFVar1 != (FReplicationStateDescriptor *)0x0) &&
     (puVar2 = (this->QuantizedBlobState).StateBuffer, puVar2 != (uchar *)0x0)) {
    FReplicationStateOperations::Serialize(param_1,puVar2,pFVar1);
    return;
  }
  return;
}

// SerializeBlob @ 144251130

void __thiscall UE::Net::FNetBlob::SerializeBlob(FNetBlob *this,FNetSerializationContext *param_1)

{
  FReplicationStateDescriptor *pFVar1;
  uchar *puVar2;
  
  pFVar1 = (this->BlobDescriptor).Reference;
  if ((pFVar1 != (FReplicationStateDescriptor *)0x0) &&
     (puVar2 = (this->QuantizedBlobState).StateBuffer, puVar2 != (uchar *)0x0)) {
    FReplicationStateOperations::Serialize(param_1,puVar2,pFVar1);
    return;
  }
  return;
}

// SerializeCreationInfo @ 144251160

void __cdecl
UE::Net::FNetBlob::SerializeCreationInfo
          (FNetSerializationContext *param_1,FNetBlobCreationInfo *param_2)

{
  FNetBitStreamWriter *this;
  
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,(uint)(param_2->Type != 0),1);
  if (param_2->Type != 0) {
    FNetBitStreamWriter::WriteBits(this,param_2->Type,7);
  }
  FNetBitStreamWriter::WriteBits(this,param_2->Flags & Reliable,1);
  return;
}

// SerializeWithObject @ 144251230

void __thiscall
UE::Net::FNetBlob::SerializeWithObject
          (FNetBlob *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  FReplicationStateDescriptor *pFVar1;
  uchar *puVar2;
  
  pFVar1 = (this->BlobDescriptor).Reference;
  if ((pFVar1 != (FReplicationStateDescriptor *)0x0) &&
     (puVar2 = (this->QuantizedBlobState).StateBuffer, puVar2 != (uchar *)0x0)) {
    FReplicationStateOperations::Serialize(param_1,puVar2,pFVar1);
    return;
  }
  return;
}

// SetState @ 1442541b0

void __thiscall
UE::Net::FNetBlob::SetState
          (FNetBlob *this,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *param_1,
          FQuantizedBlobState *param_2)

{
  EMemoryAllocationFlags *pEVar1;
  uint *puVar2;
  FReplicationStateDescriptor *this_00;
  FReplicationStateDescriptor *this_01;
  uchar *puVar3;
  
  this_00 = param_1->Reference;
  this_01 = (this->BlobDescriptor).Reference;
  if (this_01 != this_00) {
    (this->BlobDescriptor).Reference = this_00;
    if (this_00 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::AddRef(this_00);
    }
    if (this_01 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(this_01);
    }
  }
  puVar3 = (this->QuantizedBlobState).StateBuffer;
  pEVar1 = &(this->QuantizedBlobState).MemoryAllocationFlags;
  puVar2 = &(this->QuantizedBlobState).AllocationSize;
  if (puVar3 != (uchar *)0x0) {
    if (*pEVar1 == Protectable) {
      FWindowsPlatformMemory::PageProtect(puVar3,(ulonglong)*puVar2,true,true);
    }
    FMemory::Free((this->QuantizedBlobState).StateBuffer);
  }
  (this->QuantizedBlobState).StateBuffer = param_2->StateBuffer;
  *pEVar1 = param_2->MemoryAllocationFlags;
  *puVar2 = param_2->AllocationSize;
  param_2->StateBuffer = (uchar *)0x0;
  param_2->MemoryAllocationFlags = None;
  param_2->AllocationSize = 0;
  return;
}

