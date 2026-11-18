// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 8

// FShrinkWrapNetObjectAttachment @ 1442677d0

FShrinkWrapNetObjectAttachment * __thiscall
UE::Net::FShrinkWrapNetObjectAttachment::FShrinkWrapNetObjectAttachment
          (FShrinkWrapNetObjectAttachment *this,FNetSerializationContext *param_1,
          TRefCountPtr<UE::Net::FNetObjectAttachment> *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3,uint param_4)

{
  uint *puVar1;
  FNetObjectAttachment *pFVar2;
  
  FNetBlob::FNetBlob((FNetBlob *)this,(FNetBlobCreationInfo *)&param_2->Reference->_padding_);
  this->_padding_ = (longlong)&___7FShrinkWrapNetObjectAttachment_Net_UE__6B_;
  (this->OriginalBlob).Reference = (FNetObjectAttachment *)0x0;
  pFVar2 = param_2->Reference;
  (this->OriginalBlob).Reference = pFVar2;
  if (pFVar2 != (FNetObjectAttachment *)0x0) {
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
  }
  (this->NetTokenExportsArray).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  (this->NetTokenExportsArray).ArrayNum = 0;
  (this->NetTokenExportsArray).ArrayMax = 4;
  (this->SerializedBlob).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedBlob).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SerializedBlob).ArrayNum = param_3->ArrayNum;
  (this->SerializedBlob).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  this->SerializedBlobBitCount = param_4;
  TArray<UE::Net::FNetToken,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
  operator=<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
            (&this->NetTokenExportsArray,
             &param_1->ExportContext->BatchExports->NetTokensPendingExportInCurrentBatch);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | -(uint)((this->NetTokenExportsArray).ArrayNum != 0) & 4;
  return this;
}

// Deserialize @ 144275540

void __thiscall
UE::Net::FShrinkWrapNetObjectAttachment::Deserialize
          (FShrinkWrapNetObjectAttachment *this,FNetSerializationContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\ShrinkWrapNetBlob.cpp"
                     ,0x8f,L"%s");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// DeserializeWithObject @ 144276010

void __thiscall
UE::Net::FShrinkWrapNetObjectAttachment::DeserializeWithObject
          (FShrinkWrapNetObjectAttachment *this,FNetSerializationContext *param_1,
          FNetRefHandle param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\ShrinkWrapNetBlob.cpp"
                     ,0x77,L"%s");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetNetObjectReferenceExports @ 14427aa10

TArrayView<UE::Net::FNetObjectReference_const_,int> * __thiscall
UE::Net::FShrinkWrapNetObjectAttachment::GetNetObjectReferenceExports
          (FShrinkWrapNetObjectAttachment *this,
          TArrayView<UE::Net::FNetObjectReference_const_,int> *__return_storage_ptr__)

{
  (**(code **)(((this->OriginalBlob).Reference)->_padding_ + 0x28))();
  return __return_storage_ptr__;
}

// GetNetTokenExports @ 14427abf0

TArrayView<UE::Net::FNetToken_const_,int> * __thiscall
UE::Net::FShrinkWrapNetObjectAttachment::GetNetTokenExports
          (FShrinkWrapNetObjectAttachment *this,
          TArrayView<UE::Net::FNetToken_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Net::FNetToken_const_,int> *pTVar4;
  ForElementType<UE::Net::FNetToken> FVar5;
  
  FVar5 = (this->NetTokenExportsArray).AllocatorInstance.SecondaryData;
  iVar1 = (this->NetTokenExportsArray).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (FVar5 == (ForElementType<UE::Net::FNetToken>)0x0) {
    FVar5 = (ForElementType<UE::Net::FNetToken>)&this->NetTokenExportsArray;
  }
  __return_storage_ptr__->DataPtr = (FNetToken *)FVar5;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<UE::Net::FNetToken_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// InternalSerialize @ 144281c80

void __thiscall
UE::Net::FShrinkWrapNetObjectAttachment::InternalSerialize
          (FShrinkWrapNetObjectAttachment *this,FNetSerializationContext *param_1)

{
  FNetBitStreamWriter *this_00;
  uint uVar1;
  uint uVar2;
  ForElementType<FNetTracePacketContentEvent> FVar3;
  FNetTraceCollector *pFVar4;
  
  this_00 = param_1->BitStreamWriter;
  uVar1 = 0xffffffff;
  pFVar4 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar4 = param_1->TraceCollector;
  }
  if (pFVar4 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar4,NameId,uVar1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ShrinkWrapNetObjectAttachment =
             CreatePersistentNetDebugName(L"ShrinkWrapNetObjectAttachment",0x1d);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(ShrinkWrapNetObjectAttachment);
    FVar3 = (pFVar4->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  FNetBitStreamWriter::WriteBitStream
            (this_00,(uint *)(this->SerializedBlob).AllocatorInstance.Data,0,
             this->SerializedBlobBitCount);
  if (uVar1 != 0xffffffff) {
    uVar2 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar4,uVar1,uVar2);
  }
  return;
}

// Serialize @ 144292800

void __thiscall
UE::Net::FShrinkWrapNetObjectAttachment::Serialize
          (FShrinkWrapNetObjectAttachment *this,FNetSerializationContext *param_1)

{
  FNetObjectAttachment *pFVar1;
  FNetExportContext *pFVar2;
  FObjectReferenceCache *this_00;
  
  if ((param_1->TraceCollector != (FNetTraceCollector *)0x0) &&
     (pFVar1 = (this->OriginalBlob).Reference, pFVar1 != (FNetObjectAttachment *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014429283a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x10))();
    return;
  }
  pFVar2 = param_1->ExportContext;
  if (pFVar2 != (FNetExportContext *)0x0) {
    this_00 = param_1->InternalContext->ObjectReferenceCache;
    Net::Private::FObjectReferenceCache::AddPendingExport
              (this_00,pFVar2,&((this->OriginalBlob).Reference)->NetObjectReference);
    Net::Private::FObjectReferenceCache::AddPendingExport
              (this_00,pFVar2,&((this->OriginalBlob).Reference)->TargetObjectReference);
  }
  InternalSerialize(this,param_1);
  return;
}

// SerializeWithObject @ 144293390

void __thiscall
UE::Net::FShrinkWrapNetObjectAttachment::SerializeWithObject
          (FShrinkWrapNetObjectAttachment *this,FNetSerializationContext *param_1,
          FNetRefHandle param_2)

{
  FNetObjectAttachment *pFVar1;
  
  if ((param_1->TraceCollector != (FNetTraceCollector *)0x0) &&
     (pFVar1 = (this->OriginalBlob).Reference, pFVar1 != (FNetObjectAttachment *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001442933c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)();
    return;
  }
  if (param_1->ExportContext != (FNetExportContext *)0x0) {
    Net::Private::FObjectReferenceCache::AddPendingExport
              (param_1->InternalContext->ObjectReferenceCache,param_1->ExportContext,
               &((this->OriginalBlob).Reference)->TargetObjectReference);
  }
  InternalSerialize(this,param_1);
  return;
}

