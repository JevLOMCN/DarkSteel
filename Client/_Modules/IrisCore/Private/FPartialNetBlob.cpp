// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 14

// FPartialNetBlob @ 144267380

FPartialNetBlob * __thiscall
UE::Net::FPartialNetBlob::FPartialNetBlob(FPartialNetBlob *this,FNetBlobCreationInfo *param_1)

{
  FNetBlob::FNetBlob((FNetBlob *)this,param_1);
  this->SequenceFlags = None;
  this->SequenceNumber = 0;
  this->_padding_ = (longlong)&___7FPartialNetBlob_Net_UE__6B_;
  this->PartCount = 0;
  this->PayloadBitCount = 0;
  (this->OriginalCreationInfo).Type = 0xffffffff;
  (this->OriginalCreationInfo).Flags = None;
  (this->OriginalBlob).Reference = (FNetBlob *)0x0;
  (this->Payload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Payload).ArrayNum = 0;
  (this->Payload).ArrayMax = 0;
  (this->ObjectReferenceExportsArray).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetObjectReference>)0x0;
  (this->ObjectReferenceExportsArray).ArrayNum = 0;
  (this->ObjectReferenceExportsArray).ArrayMax = 2;
  (this->NetTokenExportsArray).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  (this->NetTokenExportsArray).ArrayNum = 0;
  (this->NetTokenExportsArray).ArrayMax = 4;
  (this->DebugName).Name = (wchar_t *)0x0;
  (this->DebugName).DebugNameId = 0;
  return this;
}

// Deserialize @ 1442754b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FPartialNetBlob::Deserialize(FPartialNetBlob *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *this_00;
  FNetBitStreamReader *this_01;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  ulonglong uVar5;
  FNetTraceCollector *pFVar6;
  ulonglong uVar7;
  FNetTraceCollector *pFVar8;
  FNetTraceCollector *pFVar9;
  undefined1 auStack_118 [32];
  uint uStack_f8;
  uint uStack_f4;
  FNetTraceCollector *pFStack_f0;
  TStringBuilderBase<wchar_t> TStack_e8;
  wchar_t awStack_c8 [64];
  ulonglong auStack_48 [2];
  
  auStack_48[0] = __security_cookie.value ^ (ulonglong)auStack_118;
  this_00 = param_1->BitStreamReader;
  uVar7 = (ulonglong)_tls_index;
  uStack_f4 = 0xffffffff;
  pFVar8 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar8 = param_1->TraceCollector;
  }
  pFStack_f0 = pFVar8;
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    uStack_f4 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,this_00->BufferBitPosition);
    uVar5 = (ulonglong)uStack_f4;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < ::_TSS0)
    {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        PartialNetBlob = CreatePersistentNetDebugName(L"PartialNetBlob",0xe);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(PartialNetBlob);
    FVar4 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar4 + uVar5 * 0x10) = uVar2;
  }
  pFVar8 = (FNetTraceCollector *)0x0;
  uStack_f8 = 0xffffffff;
  pFVar9 = pFVar8;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar9 = param_1->TraceCollector;
  }
  if (pFVar9 != (FNetTraceCollector *)0x0) {
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,this_00->BufferBitPosition);
    uStack_f8 = uVar2;
    uVar3 = FNetTrace::TraceName((wchar_t *)0x0);
    FVar4 = (pFVar9->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
  }
  uVar2 = ReadPackedUint32(this_00);
  this->SequenceNumber = uVar2;
  this->SequenceFlags = None;
  uVar2 = FNetBitStreamReader::ReadBits(this_00,1);
  if ((uVar2 & 1) != 0) {
    this->SequenceFlags = IsFirstPart;
    uVar1 = ReadPackedUint16(this_00);
    this->PartCount = uVar1 + 1;
    pFVar6 = pFVar8;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar6 = param_1->TraceCollector;
    }
    if (pFVar6 == (FNetTraceCollector *)0x0) {
      FNetBlob::DeserializeCreationInfo(param_1,&this->OriginalCreationInfo);
    }
    else {
      uVar2 = FNetTrace::BeginPacketContentEvent(pFVar6,NameId,this_00->BufferBitPosition);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
          ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          OriginalCreationInfo = CreatePersistentNetDebugName(L"OriginalCreationInfo",0x14);
          _Init_thread_footer(&::_TSS0);
        }
      }
      uVar3 = FNetTrace::TraceName(OriginalCreationInfo);
      FVar4 = (pFVar6->Events).AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar6->Events;
      }
      *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
      FNetBlob::DeserializeCreationInfo(param_1,&this->OriginalCreationInfo);
      if (uVar2 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar6,uVar2,this_00->BufferBitPosition);
      }
    }
  }
  this_01 = param_1->BitStreamReader;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar8 = param_1->TraceCollector;
  }
  uVar2 = 0xffffffff;
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,this_01->BufferBitPosition);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        Payload = CreatePersistentNetDebugName(L"Payload",7);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar3 = FNetTrace::TraceName(Payload);
    FVar4 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
  }
  uVar1 = ReadPackedUint16(this_01);
  this->PayloadBitCount = uVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Payload,uVar1 + 0x1f >> 5,Default);
  FNetBitStreamReader::ReadBitStream
            (this_01,(uint *)(this->Payload).AllocatorInstance.Data,(uint)this->PayloadBitCount);
  if (uVar2 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar8,uVar2,this_01->BufferBitPosition);
  }
  TStack_e8.Base = awStack_c8;
  TStack_e8.CurPos = awStack_c8;
  TStack_e8.End = (wchar_t *)auStack_48;
  TStack_e8.bIsDynamic = false;
  TStack_e8.bIsExternal = false;
  if ((this->SequenceFlags & IsFirstPart) == None) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_e8,L"Seq %u");
  }
  else {
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_e8,L"Seq %u First part of %u");
  }
  uVar2 = uStack_f8;
  uVar7 = (ulonglong)uStack_f8;
  if (uStack_f8 == 0xffffffff) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_e8);
  }
  else {
    if (TStack_e8.End < TStack_e8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&TStack_e8,1);
    }
    *TStack_e8.CurPos = L'\0';
    uVar3 = FNetTrace::TraceName(TStack_e8.Base);
    FVar4 = (pFVar9->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
    }
    *(uint *)((longlong)FVar4 + uVar7 * 0x10) = uVar3;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_e8);
    FNetTrace::EndPacketContentEvent(pFVar9,uVar2,this_00->BufferBitPosition);
  }
  if (uStack_f4 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFStack_f0,uStack_f4,this_00->BufferBitPosition);
  }
  return;
}

// DeserializeWithObject @ 144275f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FPartialNetBlob::DeserializeWithObject
          (FPartialNetBlob *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  FNetBitStreamReader *this_00;
  FNetBitStreamReader *this_01;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  ulonglong uVar5;
  FNetTraceCollector *pFVar6;
  ulonglong uVar7;
  FNetTraceCollector *pFVar8;
  FNetTraceCollector *pFVar9;
  undefined1 auStack_118 [32];
  uint uStack_f8;
  uint uStack_f4;
  FNetTraceCollector *pFStack_f0;
  TStringBuilderBase<wchar_t> TStack_e8;
  wchar_t awStack_c8 [64];
  ulonglong auStack_48 [2];
  
  auStack_48[0] = __security_cookie.value ^ (ulonglong)auStack_118;
  this_00 = param_1->BitStreamReader;
  uVar7 = (ulonglong)_tls_index;
  uStack_f4 = 0xffffffff;
  pFVar8 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar8 = param_1->TraceCollector;
  }
  pFStack_f0 = pFVar8;
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    uStack_f4 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,this_00->BufferBitPosition);
    uVar5 = (ulonglong)uStack_f4;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < ::_TSS0)
    {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        PartialNetBlob = CreatePersistentNetDebugName(L"PartialNetBlob",0xe);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(PartialNetBlob);
    FVar4 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar4 + uVar5 * 0x10) = uVar2;
  }
  pFVar8 = (FNetTraceCollector *)0x0;
  uStack_f8 = 0xffffffff;
  pFVar9 = pFVar8;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar9 = param_1->TraceCollector;
  }
  if (pFVar9 != (FNetTraceCollector *)0x0) {
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,this_00->BufferBitPosition);
    uStack_f8 = uVar2;
    uVar3 = FNetTrace::TraceName((wchar_t *)0x0);
    FVar4 = (pFVar9->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
  }
  uVar2 = ReadPackedUint32(this_00);
  this->SequenceNumber = uVar2;
  this->SequenceFlags = None;
  uVar2 = FNetBitStreamReader::ReadBits(this_00,1);
  if ((uVar2 & 1) != 0) {
    this->SequenceFlags = IsFirstPart;
    uVar1 = ReadPackedUint16(this_00);
    this->PartCount = uVar1 + 1;
    pFVar6 = pFVar8;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar6 = param_1->TraceCollector;
    }
    if (pFVar6 == (FNetTraceCollector *)0x0) {
      FNetBlob::DeserializeCreationInfo(param_1,&this->OriginalCreationInfo);
    }
    else {
      uVar2 = FNetTrace::BeginPacketContentEvent(pFVar6,NameId,this_00->BufferBitPosition);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
          ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          OriginalCreationInfo = CreatePersistentNetDebugName(L"OriginalCreationInfo",0x14);
          _Init_thread_footer(&::_TSS0);
        }
      }
      uVar3 = FNetTrace::TraceName(OriginalCreationInfo);
      FVar4 = (pFVar6->Events).AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar6->Events;
      }
      *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
      FNetBlob::DeserializeCreationInfo(param_1,&this->OriginalCreationInfo);
      if (uVar2 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar6,uVar2,this_00->BufferBitPosition);
      }
    }
  }
  this_01 = param_1->BitStreamReader;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar8 = param_1->TraceCollector;
  }
  uVar2 = 0xffffffff;
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,this_01->BufferBitPosition);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        Payload = CreatePersistentNetDebugName(L"Payload",7);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar3 = FNetTrace::TraceName(Payload);
    FVar4 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
  }
  uVar1 = ReadPackedUint16(this_01);
  this->PayloadBitCount = uVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Payload,uVar1 + 0x1f >> 5,Default);
  FNetBitStreamReader::ReadBitStream
            (this_01,(uint *)(this->Payload).AllocatorInstance.Data,(uint)this->PayloadBitCount);
  if (uVar2 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar8,uVar2,this_01->BufferBitPosition);
  }
  TStack_e8.Base = awStack_c8;
  TStack_e8.CurPos = awStack_c8;
  TStack_e8.End = (wchar_t *)auStack_48;
  TStack_e8.bIsDynamic = false;
  TStack_e8.bIsExternal = false;
  if ((this->SequenceFlags & IsFirstPart) == None) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_e8,L"Seq %u");
  }
  else {
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_e8,L"Seq %u First part of %u");
  }
  uVar2 = uStack_f8;
  uVar7 = (ulonglong)uStack_f8;
  if (uStack_f8 == 0xffffffff) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_e8);
  }
  else {
    if (TStack_e8.End < TStack_e8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&TStack_e8,1);
    }
    *TStack_e8.CurPos = L'\0';
    uVar3 = FNetTrace::TraceName(TStack_e8.Base);
    FVar4 = (pFVar9->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
    }
    *(uint *)((longlong)FVar4 + uVar7 * 0x10) = uVar3;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_e8);
    FNetTrace::EndPacketContentEvent(pFVar9,uVar2,this_00->BufferBitPosition);
  }
  if (uStack_f4 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFStack_f0,uStack_f4,this_00->BufferBitPosition);
  }
  return;
}

// GetNetObjectReferenceExports @ 14427a960

TArrayView<UE::Net::FNetObjectReference_const_,int> * __thiscall
UE::Net::FPartialNetBlob::GetNetObjectReferenceExports
          (FPartialNetBlob *this,
          TArrayView<UE::Net::FNetObjectReference_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<UE::Net::FNetObjectReference> FVar4;
  TArrayView<UE::Net::FNetObjectReference_const_,int> *pTVar5;
  
  FVar4 = (this->ObjectReferenceExportsArray).AllocatorInstance.SecondaryData;
  iVar1 = (this->ObjectReferenceExportsArray).ArrayNum;
  if (FVar4 == (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    FVar4 = (ForElementType<UE::Net::FNetObjectReference>)&this->ObjectReferenceExportsArray;
  }
  __return_storage_ptr__->DataPtr = (FNetObjectReference *)FVar4;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::Net::FNetObjectReference_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetNetTokenExports @ 14427ab10

TArrayView<UE::Net::FNetToken_const_,int> * __thiscall
UE::Net::FPartialNetBlob::GetNetTokenExports
          (FPartialNetBlob *this,TArrayView<UE::Net::FNetToken_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<UE::Net::FNetToken> FVar4;
  TArrayView<UE::Net::FNetToken_const_,int> *pTVar5;
  
  FVar4 = (this->NetTokenExportsArray).AllocatorInstance.SecondaryData;
  iVar1 = (this->NetTokenExportsArray).ArrayNum;
  if (FVar4 == (ForElementType<UE::Net::FNetToken>)0x0) {
    FVar4 = (ForElementType<UE::Net::FNetToken>)&this->NetTokenExportsArray;
  }
  __return_storage_ptr__->DataPtr = (FNetToken *)FVar4;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::Net::FNetToken_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// InternalDeserialize @ 14427f700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FPartialNetBlob::InternalDeserialize
          (FPartialNetBlob *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *this_00;
  FNetBitStreamReader *this_01;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  ulonglong uVar5;
  FNetTraceCollector *pFVar6;
  ulonglong uVar7;
  FNetTraceCollector *pFVar8;
  FNetTraceCollector *pFVar9;
  undefined1 auStack_118 [32];
  uint local_f8;
  uint local_f4;
  FNetTraceCollector *local_f0;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_118;
  this_00 = param_1->BitStreamReader;
  uVar7 = (ulonglong)_tls_index;
  local_f4 = 0xffffffff;
  pFVar8 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar8 = param_1->TraceCollector;
  }
  local_f0 = pFVar8;
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    local_f4 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,this_00->BufferBitPosition);
    uVar5 = (ulonglong)local_f4;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < ::_TSS0)
    {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        PartialNetBlob = CreatePersistentNetDebugName(L"PartialNetBlob",0xe);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(PartialNetBlob);
    FVar4 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar4 + uVar5 * 0x10) = uVar2;
  }
  pFVar8 = (FNetTraceCollector *)0x0;
  local_f8 = 0xffffffff;
  pFVar9 = pFVar8;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar9 = param_1->TraceCollector;
  }
  if (pFVar9 != (FNetTraceCollector *)0x0) {
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,this_00->BufferBitPosition);
    local_f8 = uVar2;
    uVar3 = FNetTrace::TraceName((wchar_t *)0x0);
    FVar4 = (pFVar9->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
  }
  uVar2 = ReadPackedUint32(this_00);
  this->SequenceNumber = uVar2;
  this->SequenceFlags = None;
  uVar2 = FNetBitStreamReader::ReadBits(this_00,1);
  if ((uVar2 & 1) != 0) {
    this->SequenceFlags = IsFirstPart;
    uVar1 = ReadPackedUint16(this_00);
    this->PartCount = uVar1 + 1;
    pFVar6 = pFVar8;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar6 = param_1->TraceCollector;
    }
    if (pFVar6 == (FNetTraceCollector *)0x0) {
      FNetBlob::DeserializeCreationInfo(param_1,&this->OriginalCreationInfo);
    }
    else {
      uVar2 = FNetTrace::BeginPacketContentEvent(pFVar6,NameId,this_00->BufferBitPosition);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
          ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          OriginalCreationInfo = CreatePersistentNetDebugName(L"OriginalCreationInfo",0x14);
          _Init_thread_footer(&::_TSS0);
        }
      }
      uVar3 = FNetTrace::TraceName(OriginalCreationInfo);
      FVar4 = (pFVar6->Events).AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar6->Events;
      }
      *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
      FNetBlob::DeserializeCreationInfo(param_1,&this->OriginalCreationInfo);
      if (uVar2 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar6,uVar2,this_00->BufferBitPosition);
      }
    }
  }
  this_01 = param_1->BitStreamReader;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar8 = param_1->TraceCollector;
  }
  uVar2 = 0xffffffff;
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,this_01->BufferBitPosition);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        Payload = CreatePersistentNetDebugName(L"Payload",7);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar3 = FNetTrace::TraceName(Payload);
    FVar4 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
  }
  uVar1 = ReadPackedUint16(this_01);
  this->PayloadBitCount = uVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Payload,uVar1 + 0x1f >> 5,Default);
  FNetBitStreamReader::ReadBitStream
            (this_01,(uint *)(this->Payload).AllocatorInstance.Data,(uint)this->PayloadBitCount);
  if (uVar2 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar8,uVar2,this_01->BufferBitPosition);
  }
  local_e8.Base = local_c8;
  local_e8.CurPos = local_c8;
  local_e8.End = (wchar_t *)local_48;
  local_e8.bIsDynamic = false;
  local_e8.bIsExternal = false;
  if ((this->SequenceFlags & IsFirstPart) == None) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_e8,L"Seq %u");
  }
  else {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_e8,L"Seq %u First part of %u");
  }
  uVar2 = local_f8;
  uVar7 = (ulonglong)local_f8;
  if (local_f8 == 0xffffffff) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  }
  else {
    if (local_e8.End < local_e8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
    }
    *local_e8.CurPos = L'\0';
    uVar3 = FNetTrace::TraceName(local_e8.Base);
    FVar4 = (pFVar9->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
    }
    *(uint *)((longlong)FVar4 + uVar7 * 0x10) = uVar3;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
    FNetTrace::EndPacketContentEvent(pFVar9,uVar2,this_00->BufferBitPosition);
  }
  if (local_f4 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(local_f0,local_f4,this_00->BufferBitPosition);
  }
  return;
}

// InternalDeserializeBlob @ 14427fe20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FPartialNetBlob::InternalDeserializeBlob
          (FPartialNetBlob *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  FNetTraceCollector *pFVar5;
  
  this_00 = param_1->BitStreamReader;
  uVar2 = 0xffffffff;
  pFVar5 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,this_00->BufferBitPosition);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        Payload = CreatePersistentNetDebugName(L"Payload",7);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar3 = FNetTrace::TraceName(Payload);
    FVar4 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
  }
  uVar1 = ReadPackedUint16(this_00);
  this->PayloadBitCount = uVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Payload,uVar1 + 0x1f >> 5,Default);
  FNetBitStreamReader::ReadBitStream
            (this_00,(uint *)(this->Payload).AllocatorInstance.Data,(uint)this->PayloadBitCount);
  if (uVar2 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar5,uVar2,this_00->BufferBitPosition);
  }
  return;
}

// InternalSerialize @ 144281410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::FPartialNetBlob::InternalSerialize(FPartialNetBlob *this,FNetSerializationContext *param_1)

{
  FNetBitStreamWriter *this_00;
  FNetBitStreamWriter *this_01;
  uint uVar1;
  uint uVar2;
  ForElementType<FNetTracePacketContentEvent> FVar3;
  FNetTraceCollector *pFVar4;
  FNetTraceCollector *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FNetTraceCollector *pFVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  FNetTraceCollector *local_f8;
  FNetTraceCollector *local_f0;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = param_1->BitStreamWriter;
  uVar1 = 0xffffffff;
  pFVar5 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  local_104 = 0xffffffff;
  local_f0 = pFVar5;
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,uVar1);
    local_104 = uVar1;
    uVar2 = FNetTrace::TraceName(&this->DebugName);
    FVar3 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  if (((this->DebugName).Name == (wchar_t *)0x0) && (uVar1 != 0xffffffff)) {
    uVar2 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar5,uVar1,uVar2);
    local_104 = 0xffffffff;
  }
  uVar7 = (ulonglong)_tls_index;
  pFVar5 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  local_fc = 0xffffffff;
  local_f8 = pFVar5;
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    local_fc = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,uVar1);
    uVar6 = (ulonglong)local_fc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < ::_TSS0
        ) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      PartialNetBlob = CreatePersistentNetDebugName(L"PartialNetBlob",0xe);
      _Init_thread_footer(&::_TSS0);
    }
    uVar1 = FNetTrace::TraceName(PartialNetBlob);
    FVar3 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar3 + uVar6 * 0x10) = uVar1;
  }
  pFVar5 = (FNetTraceCollector *)0x0;
  uVar1 = 0xffffffff;
  local_100 = 0xffffffff;
  pFVar8 = pFVar5;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar8 = param_1->TraceCollector;
  }
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,uVar1);
    local_100 = uVar1;
    uVar2 = FNetTrace::TraceName((wchar_t *)0x0);
    FVar3 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  local_e8.Base = local_c8;
  local_e8.CurPos = local_c8;
  local_e8.End = (wchar_t *)local_48;
  local_e8.bIsDynamic = false;
  local_e8.bIsExternal = false;
  if ((this->SequenceFlags & IsFirstPart) == None) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_e8,L"Seq %u");
  }
  else {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_e8,L"Seq %u First part of %u");
  }
  if (uVar1 != 0xffffffff) {
    if (local_e8.End < local_e8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
    }
    *local_e8.CurPos = L'\0';
    uVar2 = FNetTrace::TraceName(local_e8.Base);
    FVar3 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  WritePackedUint32(this_00,this->SequenceNumber);
  local_108 = (char)this->SequenceFlags & IsFirstPart;
  FNetBitStreamWriter::WriteBits(this_00,(uint)(local_108 != None),1);
  if (local_108 != None) {
    WritePackedUint16(this_00,this->PartCount - 1);
    pFVar4 = pFVar5;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar4 = param_1->TraceCollector;
    }
    if (pFVar4 == (FNetTraceCollector *)0x0) {
      FNetBlob::SerializeCreationInfo(param_1,&this->OriginalCreationInfo);
    }
    else {
      uVar1 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        uVar1 = 0;
      }
      uVar1 = FNetTrace::BeginPacketContentEvent(pFVar4,NameId,uVar1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        OriginalCreationInfo = CreatePersistentNetDebugName(L"OriginalCreationInfo",0x14);
        _Init_thread_footer(&::_TSS0);
      }
      uVar2 = FNetTrace::TraceName(OriginalCreationInfo);
      FVar3 = (pFVar4->Events).AllocatorInstance.SecondaryData;
      if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
      }
      *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
      FNetBlob::SerializeCreationInfo(param_1,&this->OriginalCreationInfo);
      if (uVar1 != 0xffffffff) {
        uVar2 = this_00->BufferBitPosition;
        if (this_00->OverflowBitCount != 0) {
          uVar2 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar4,uVar1,uVar2);
      }
    }
  }
  this_01 = param_1->BitStreamWriter;
  uVar1 = 0xffffffff;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar1 = this_01->BufferBitPosition;
    if (this_01->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,uVar1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Payload = CreatePersistentNetDebugName(L"Payload",7);
      _Init_thread_footer(&::_TSS0);
    }
    uVar2 = FNetTrace::TraceName(Payload);
    FVar3 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  WritePackedUint16(this_01,this->PayloadBitCount);
  FNetBitStreamWriter::WriteBitStream
            (this_01,(uint *)(this->Payload).AllocatorInstance.Data,0,(uint)this->PayloadBitCount);
  if (uVar1 != 0xffffffff) {
    uVar2 = this_01->BufferBitPosition;
    if (this_01->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar5,uVar1,uVar2);
  }
  if (local_100 != 0xffffffff) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar8,local_100,uVar1);
  }
  if (local_fc != 0xffffffff) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    FNetTrace::EndPacketContentEvent(local_f8,local_fc,uVar1);
  }
  if (local_104 != 0xffffffff) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    FNetTrace::EndPacketContentEvent(local_f0,local_104,uVar1);
  }
  return;
}

// InternalSerializeBlob @ 144281f10

void __thiscall
UE::Net::FPartialNetBlob::InternalSerializeBlob
          (FPartialNetBlob *this,FNetSerializationContext *param_1)

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
        Payload = CreatePersistentNetDebugName(L"Payload",7);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(Payload);
    FVar3 = (pFVar4->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  WritePackedUint16(this_00,this->PayloadBitCount);
  FNetBitStreamWriter::WriteBitStream
            (this_00,(uint *)(this->Payload).AllocatorInstance.Data,0,(uint)this->PayloadBitCount);
  if (uVar1 != 0xffffffff) {
    uVar2 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar4,uVar1,uVar2);
  }
  return;
}

// Serialize @ 144292790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::FPartialNetBlob::Serialize(FPartialNetBlob *this,FNetSerializationContext *param_1)

{
  FNetBitStreamWriter *this_00;
  FNetBitStreamWriter *this_01;
  uint uVar1;
  uint uVar2;
  ForElementType<FNetTracePacketContentEvent> FVar3;
  FNetTraceCollector *pFVar4;
  FNetTraceCollector *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FNetTraceCollector *pFVar8;
  undefined1 auStack_128 [32];
  undefined1 uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  FNetTraceCollector *pFStack_f8;
  FNetTraceCollector *pFStack_f0;
  TStringBuilderBase<wchar_t> TStack_e8;
  wchar_t awStack_c8 [64];
  ulonglong auStack_48 [2];
  
  auStack_48[0] = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = param_1->BitStreamWriter;
  uVar1 = 0xffffffff;
  pFVar5 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  uStack_104 = 0xffffffff;
  pFStack_f0 = pFVar5;
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,uVar1);
    uStack_104 = uVar1;
    uVar2 = FNetTrace::TraceName(&this->DebugName);
    FVar3 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  if (((this->DebugName).Name == (wchar_t *)0x0) && (uVar1 != 0xffffffff)) {
    uVar2 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar5,uVar1,uVar2);
    uStack_104 = 0xffffffff;
  }
  uVar7 = (ulonglong)_tls_index;
  pFVar5 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  uStack_fc = 0xffffffff;
  pFStack_f8 = pFVar5;
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uStack_fc = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,uVar1);
    uVar6 = (ulonglong)uStack_fc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < ::_TSS0
        ) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      PartialNetBlob = CreatePersistentNetDebugName(L"PartialNetBlob",0xe);
      _Init_thread_footer(&::_TSS0);
    }
    uVar1 = FNetTrace::TraceName(PartialNetBlob);
    FVar3 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar3 + uVar6 * 0x10) = uVar1;
  }
  pFVar5 = (FNetTraceCollector *)0x0;
  uVar1 = 0xffffffff;
  uStack_100 = 0xffffffff;
  pFVar8 = pFVar5;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar8 = param_1->TraceCollector;
  }
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,uVar1);
    uStack_100 = uVar1;
    uVar2 = FNetTrace::TraceName((wchar_t *)0x0);
    FVar3 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  TStack_e8.Base = awStack_c8;
  TStack_e8.CurPos = awStack_c8;
  TStack_e8.End = (wchar_t *)auStack_48;
  TStack_e8.bIsDynamic = false;
  TStack_e8.bIsExternal = false;
  if ((this->SequenceFlags & IsFirstPart) == None) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_e8,L"Seq %u");
  }
  else {
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_e8,L"Seq %u First part of %u");
  }
  if (uVar1 != 0xffffffff) {
    if (TStack_e8.End < TStack_e8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&TStack_e8,1);
    }
    *TStack_e8.CurPos = L'\0';
    uVar2 = FNetTrace::TraceName(TStack_e8.Base);
    FVar3 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_e8);
  WritePackedUint32(this_00,this->SequenceNumber);
  uStack_108 = (char)this->SequenceFlags & IsFirstPart;
  FNetBitStreamWriter::WriteBits(this_00,(uint)(uStack_108 != None),1);
  if (uStack_108 != None) {
    WritePackedUint16(this_00,this->PartCount - 1);
    pFVar4 = pFVar5;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar4 = param_1->TraceCollector;
    }
    if (pFVar4 == (FNetTraceCollector *)0x0) {
      FNetBlob::SerializeCreationInfo(param_1,&this->OriginalCreationInfo);
    }
    else {
      uVar1 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        uVar1 = 0;
      }
      uVar1 = FNetTrace::BeginPacketContentEvent(pFVar4,NameId,uVar1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        OriginalCreationInfo = CreatePersistentNetDebugName(L"OriginalCreationInfo",0x14);
        _Init_thread_footer(&::_TSS0);
      }
      uVar2 = FNetTrace::TraceName(OriginalCreationInfo);
      FVar3 = (pFVar4->Events).AllocatorInstance.SecondaryData;
      if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
      }
      *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
      FNetBlob::SerializeCreationInfo(param_1,&this->OriginalCreationInfo);
      if (uVar1 != 0xffffffff) {
        uVar2 = this_00->BufferBitPosition;
        if (this_00->OverflowBitCount != 0) {
          uVar2 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar4,uVar1,uVar2);
      }
    }
  }
  this_01 = param_1->BitStreamWriter;
  uVar1 = 0xffffffff;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar1 = this_01->BufferBitPosition;
    if (this_01->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,uVar1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Payload = CreatePersistentNetDebugName(L"Payload",7);
      _Init_thread_footer(&::_TSS0);
    }
    uVar2 = FNetTrace::TraceName(Payload);
    FVar3 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  WritePackedUint16(this_01,this->PayloadBitCount);
  FNetBitStreamWriter::WriteBitStream
            (this_01,(uint *)(this->Payload).AllocatorInstance.Data,0,(uint)this->PayloadBitCount);
  if (uVar1 != 0xffffffff) {
    uVar2 = this_01->BufferBitPosition;
    if (this_01->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar5,uVar1,uVar2);
  }
  if (uStack_100 != 0xffffffff) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar8,uStack_100,uVar1);
  }
  if (uStack_fc != 0xffffffff) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFStack_f8,uStack_fc,uVar1);
  }
  if (uStack_104 != 0xffffffff) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFStack_f0,uStack_104,uVar1);
  }
  return;
}

// SerializeWithObject @ 144293320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::FPartialNetBlob::SerializeWithObject
          (FPartialNetBlob *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  FNetBitStreamWriter *this_00;
  FNetBitStreamWriter *this_01;
  uint uVar1;
  uint uVar2;
  ForElementType<FNetTracePacketContentEvent> FVar3;
  FNetTraceCollector *pFVar4;
  FNetTraceCollector *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FNetTraceCollector *pFVar8;
  undefined1 auStack_128 [32];
  undefined1 uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  FNetTraceCollector *pFStack_f8;
  FNetTraceCollector *pFStack_f0;
  TStringBuilderBase<wchar_t> TStack_e8;
  wchar_t awStack_c8 [64];
  ulonglong auStack_48 [2];
  
  auStack_48[0] = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = param_1->BitStreamWriter;
  uVar1 = 0xffffffff;
  pFVar5 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  uStack_104 = 0xffffffff;
  pFStack_f0 = pFVar5;
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,uVar1);
    uStack_104 = uVar1;
    uVar2 = FNetTrace::TraceName(&this->DebugName);
    FVar3 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  if (((this->DebugName).Name == (wchar_t *)0x0) && (uVar1 != 0xffffffff)) {
    uVar2 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar5,uVar1,uVar2);
    uStack_104 = 0xffffffff;
  }
  uVar7 = (ulonglong)_tls_index;
  pFVar5 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  uStack_fc = 0xffffffff;
  pFStack_f8 = pFVar5;
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uStack_fc = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,uVar1);
    uVar6 = (ulonglong)uStack_fc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < ::_TSS0
        ) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      PartialNetBlob = CreatePersistentNetDebugName(L"PartialNetBlob",0xe);
      _Init_thread_footer(&::_TSS0);
    }
    uVar1 = FNetTrace::TraceName(PartialNetBlob);
    FVar3 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar3 + uVar6 * 0x10) = uVar1;
  }
  pFVar5 = (FNetTraceCollector *)0x0;
  uVar1 = 0xffffffff;
  uStack_100 = 0xffffffff;
  pFVar8 = pFVar5;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar8 = param_1->TraceCollector;
  }
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,uVar1);
    uStack_100 = uVar1;
    uVar2 = FNetTrace::TraceName((wchar_t *)0x0);
    FVar3 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  TStack_e8.Base = awStack_c8;
  TStack_e8.CurPos = awStack_c8;
  TStack_e8.End = (wchar_t *)auStack_48;
  TStack_e8.bIsDynamic = false;
  TStack_e8.bIsExternal = false;
  if ((this->SequenceFlags & IsFirstPart) == None) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_e8,L"Seq %u");
  }
  else {
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_e8,L"Seq %u First part of %u");
  }
  if (uVar1 != 0xffffffff) {
    if (TStack_e8.End < TStack_e8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&TStack_e8,1);
    }
    *TStack_e8.CurPos = L'\0';
    uVar2 = FNetTrace::TraceName(TStack_e8.Base);
    FVar3 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_e8);
  WritePackedUint32(this_00,this->SequenceNumber);
  uStack_108 = (char)this->SequenceFlags & IsFirstPart;
  FNetBitStreamWriter::WriteBits(this_00,(uint)(uStack_108 != None),1);
  if (uStack_108 != None) {
    WritePackedUint16(this_00,this->PartCount - 1);
    pFVar4 = pFVar5;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar4 = param_1->TraceCollector;
    }
    if (pFVar4 == (FNetTraceCollector *)0x0) {
      FNetBlob::SerializeCreationInfo(param_1,&this->OriginalCreationInfo);
    }
    else {
      uVar1 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        uVar1 = 0;
      }
      uVar1 = FNetTrace::BeginPacketContentEvent(pFVar4,NameId,uVar1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        OriginalCreationInfo = CreatePersistentNetDebugName(L"OriginalCreationInfo",0x14);
        _Init_thread_footer(&::_TSS0);
      }
      uVar2 = FNetTrace::TraceName(OriginalCreationInfo);
      FVar3 = (pFVar4->Events).AllocatorInstance.SecondaryData;
      if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
      }
      *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
      FNetBlob::SerializeCreationInfo(param_1,&this->OriginalCreationInfo);
      if (uVar1 != 0xffffffff) {
        uVar2 = this_00->BufferBitPosition;
        if (this_00->OverflowBitCount != 0) {
          uVar2 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar4,uVar1,uVar2);
      }
    }
  }
  this_01 = param_1->BitStreamWriter;
  uVar1 = 0xffffffff;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar1 = this_01->BufferBitPosition;
    if (this_01->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,uVar1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Payload = CreatePersistentNetDebugName(L"Payload",7);
      _Init_thread_footer(&::_TSS0);
    }
    uVar2 = FNetTrace::TraceName(Payload);
    FVar3 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar3 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar3 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  WritePackedUint16(this_01,this->PayloadBitCount);
  FNetBitStreamWriter::WriteBitStream
            (this_01,(uint *)(this->Payload).AllocatorInstance.Data,0,(uint)this->PayloadBitCount);
  if (uVar1 != 0xffffffff) {
    uVar2 = this_01->BufferBitPosition;
    if (this_01->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar5,uVar1,uVar2);
  }
  if (uStack_100 != 0xffffffff) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar8,uStack_100,uVar1);
  }
  if (uStack_fc != 0xffffffff) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFStack_f8,uStack_fc,uVar1);
  }
  if (uStack_104 != 0xffffffff) {
    uVar1 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar1 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFStack_f0,uStack_104,uVar1);
  }
  return;
}

// SplitNetBlob @ 144295110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
UE::Net::FPartialNetBlob::SplitNetBlob
          (FNetSerializationContext *param_1,FNetBlobCreationInfo *param_2,FSplitParams *param_3,
          TRefCountPtr<UE::Net::FNetBlob> *param_4,
          TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *param_5)

{
  FBatchExports *pFVar1;
  FNetBlob *pFVar2;
  FNetExportContext *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FName FVar12;
  wchar_t *pwVar13;
  FNetRefHandle_u_0 FVar14;
  wchar_t *pwVar15;
  FNetRefHandle_u_0 FVar16;
  uint uVar17;
  undefined4 uVar18;
  FNetSerializationContext *pFVar19;
  FNetSerializationContext *pFVar20;
  bool bVar21;
  undefined1 uVar22;
  bool bVar23;
  int iVar24;
  FNetSerializationContext *pFVar25;
  FNetSerializationContext *pFVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  undefined1 auStackY_4c8 [32];
  ForAnyElementType local_488;
  int local_480 [4];
  ForElementType<UE::Net::FNetToken> local_470;
  int iStack_468;
  undefined4 uStack_464;
  FNetExportRollbackScope local_460;
  FNetBitStreamWriter local_448;
  TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *local_428;
  FPayloadSplitParams local_418;
  FNetSerializationContext local_3b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_428 = param_5;
  local_470 = (ForElementType<UE::Net::FNetToken>)param_2;
  if ((((0xffdf < param_3->MaxPartBitCount - 0x20) || (param_3->MaxPartCount == 0)) ||
      (0xffff < param_3->MaxPartCount)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("SplitParams.MaxPartBitCount > 31U && SplitParams.MaxPartBitCount < 65536U && SplitParams.MaxPartCount > 0 && SplitParams.MaxPartCount < 65536U"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\PartialNetBlob.cpp"
                          ,0x9f,L""), bVar21)) {
    pcVar4 = (code *)swi(3);
    uVar22 = (*pcVar4)();
    return (bool)uVar22;
  }
  if (param_4->Reference == (FNetBlob *)0x0) {
    return false;
  }
  local_488.Data = (FScriptContainerElement *)0x0;
  local_480[2] = param_3->MaxPartBitCount & 0xffffffe0;
  local_480[0] = 0;
  local_480[1] = 0;
  uVar32 = param_3->MaxPartBitCount * param_3->MaxPartCount & 0xffffffe0;
  uVar29 = 0x100000;
  iVar31 = 0;
  if (uVar32 < 0x100000) {
    uVar29 = uVar32;
    iVar31 = 0;
  }
  do {
    uVar28 = uVar29 >> 5;
    if (iVar31 < (int)uVar28) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar28 - iVar31,&local_488,local_480,local_480 + 1);
    }
    else if ((int)uVar28 < iVar31) {
      iVar30 = iVar31 - uVar28;
      if (iVar30 < 0) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar21) {
          pcVar4 = (code *)swi(3);
          uVar22 = (*pcVar4)();
          return (bool)uVar22;
        }
        iVar31 = local_480[0];
      }
      else if (iVar30 == 0) goto LAB_1442952d0;
      iVar24 = (iVar31 - iVar30) - uVar28;
      if (iVar24 != 0) {
        memmove(local_488.Data + (ulonglong)uVar28 * 4,
                local_488.Data + (ulonglong)uVar28 * 4 + (longlong)iVar30 * 4,(longlong)iVar24 << 2)
        ;
        iVar31 = local_480[0];
      }
      local_480[0] = iVar31 - iVar30;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_488,iVar31 - iVar30,local_480 + 1);
    }
LAB_1442952d0:
    FNetBitStreamWriter::FNetBitStreamWriter(&local_448);
    FNetBitStreamWriter::InitBytes(&local_448,local_488.Data,local_480[0] * 4);
    lVar27 = 6;
    pFVar19 = param_1;
    pFVar20 = &local_3b8;
    do {
      pFVar26 = pFVar20;
      pFVar25 = pFVar19;
      FVar12 = (pFVar25->ErrorContext).Error;
      pwVar13 = (pFVar25->ReadJournal).Entries[0].Name;
      FVar14 = (pFVar25->ReadJournal).Entries[0].NetRefHandle.field0_0x0;
      (pFVar26->ErrorContext).ObjectHandle.field0_0x0 =
           (pFVar25->ErrorContext).ObjectHandle.field0_0x0;
      (pFVar26->ErrorContext).Error = FVar12;
      uVar28 = (pFVar25->ReadJournal).Entries[0].BitOffset;
      uVar5 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[0].field_0x14;
      pwVar15 = (pFVar25->ReadJournal).Entries[1].Name;
      (pFVar26->ReadJournal).Entries[0].Name = pwVar13;
      (pFVar26->ReadJournal).Entries[0].NetRefHandle.field0_0x0 = FVar14;
      FVar14 = (pFVar25->ReadJournal).Entries[1].NetRefHandle.field0_0x0;
      uVar17 = (pFVar25->ReadJournal).Entries[1].BitOffset;
      uVar6 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[1].field_0x14;
      (pFVar26->ReadJournal).Entries[0].BitOffset = uVar28;
      *(undefined4 *)&(pFVar26->ReadJournal).Entries[0].field_0x14 = uVar5;
      (pFVar26->ReadJournal).Entries[1].Name = pwVar15;
      pwVar13 = (pFVar25->ReadJournal).Entries[2].Name;
      FVar16 = (pFVar25->ReadJournal).Entries[2].NetRefHandle.field0_0x0;
      (pFVar26->ReadJournal).Entries[1].NetRefHandle.field0_0x0 = FVar14;
      (pFVar26->ReadJournal).Entries[1].BitOffset = uVar17;
      *(undefined4 *)&(pFVar26->ReadJournal).Entries[1].field_0x14 = uVar6;
      uVar28 = (pFVar25->ReadJournal).Entries[2].BitOffset;
      uVar5 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[2].field_0x14;
      pwVar15 = (pFVar25->ReadJournal).Entries[3].Name;
      (pFVar26->ReadJournal).Entries[2].Name = pwVar13;
      (pFVar26->ReadJournal).Entries[2].NetRefHandle.field0_0x0 = FVar16;
      FVar14 = (pFVar25->ReadJournal).Entries[3].NetRefHandle.field0_0x0;
      uVar17 = (pFVar25->ReadJournal).Entries[3].BitOffset;
      uVar6 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[3].field_0x14;
      (pFVar26->ReadJournal).Entries[2].BitOffset = uVar28;
      *(undefined4 *)&(pFVar26->ReadJournal).Entries[2].field_0x14 = uVar5;
      (pFVar26->ReadJournal).Entries[3].Name = pwVar15;
      pwVar13 = (pFVar25->ReadJournal).Entries[4].Name;
      FVar16 = (pFVar25->ReadJournal).Entries[4].NetRefHandle.field0_0x0;
      (pFVar26->ReadJournal).Entries[3].NetRefHandle.field0_0x0 = FVar14;
      (pFVar26->ReadJournal).Entries[3].BitOffset = uVar17;
      *(undefined4 *)&(pFVar26->ReadJournal).Entries[3].field_0x14 = uVar6;
      (pFVar26->ReadJournal).Entries[4].Name = pwVar13;
      (pFVar26->ReadJournal).Entries[4].NetRefHandle.field0_0x0 = FVar16;
      lVar27 = lVar27 + -1;
      pFVar19 = (FNetSerializationContext *)&(pFVar25->ReadJournal).Entries[4].BitOffset;
      pFVar20 = (FNetSerializationContext *)&(pFVar26->ReadJournal).Entries[4].BitOffset;
    } while (lVar27 != 0);
    uVar5 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[4].field_0x14;
    pwVar13 = (pFVar25->ReadJournal).Entries[5].Name;
    FVar14 = (pFVar25->ReadJournal).Entries[5].NetRefHandle.field0_0x0;
    uVar28 = (pFVar25->ReadJournal).Entries[5].BitOffset;
    uVar6 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[5].field_0x14;
    (pFVar26->ReadJournal).Entries[4].BitOffset = (pFVar25->ReadJournal).Entries[4].BitOffset;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[4].field_0x14 = uVar5;
    (pFVar26->ReadJournal).Entries[5].Name = pwVar13;
    pwVar13 = (pFVar25->ReadJournal).Entries[6].Name;
    FVar16 = (pFVar25->ReadJournal).Entries[6].NetRefHandle.field0_0x0;
    (pFVar26->ReadJournal).Entries[5].NetRefHandle.field0_0x0 = FVar14;
    (pFVar26->ReadJournal).Entries[5].BitOffset = uVar28;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[5].field_0x14 = uVar6;
    uVar17 = (pFVar25->ReadJournal).Entries[6].BitOffset;
    uVar8 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[6].field_0x14;
    pwVar15 = (pFVar25->ReadJournal).Entries[7].Name;
    (pFVar26->ReadJournal).Entries[6].Name = pwVar13;
    (pFVar26->ReadJournal).Entries[6].NetRefHandle.field0_0x0 = FVar16;
    uVar5 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[7].NetRefHandle.field0_0x0;
    uVar6 = *(undefined4 *)
             ((longlong)&(pFVar25->ReadJournal).Entries[7].NetRefHandle.field0_0x0 + 4);
    uVar28 = (pFVar25->ReadJournal).Entries[7].BitOffset;
    uVar7 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[7].field_0x14;
    (pFVar26->ReadJournal).Entries[6].BitOffset = uVar17;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[6].field_0x14 = uVar8;
    (pFVar26->ReadJournal).Entries[7].Name = pwVar15;
    uVar8 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[8].Name;
    uVar9 = *(undefined4 *)((longlong)&(pFVar25->ReadJournal).Entries[8].Name + 4);
    uVar10 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[8].NetRefHandle.field0_0x0;
    uVar11 = *(undefined4 *)
              ((longlong)&(pFVar25->ReadJournal).Entries[8].NetRefHandle.field0_0x0 + 4);
    uVar17 = (pFVar25->ReadJournal).Entries[8].BitOffset;
    uVar18 = *(undefined4 *)&(pFVar25->ReadJournal).Entries[8].field_0x14;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[7].NetRefHandle.field0_0x0 = uVar5;
    *(undefined4 *)((longlong)&(pFVar26->ReadJournal).Entries[7].NetRefHandle.field0_0x0 + 4) =
         uVar6;
    (pFVar26->ReadJournal).Entries[7].BitOffset = uVar28;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[7].field_0x14 = uVar7;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[8].Name = uVar8;
    *(undefined4 *)((longlong)&(pFVar26->ReadJournal).Entries[8].Name + 4) = uVar9;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[8].NetRefHandle.field0_0x0 = uVar10;
    *(undefined4 *)((longlong)&(pFVar26->ReadJournal).Entries[8].NetRefHandle.field0_0x0 + 4) =
         uVar11;
    (pFVar26->ReadJournal).Entries[8].BitOffset = uVar17;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[8].field_0x14 = uVar18;
    local_3b8.BitStreamWriter = &local_448;
    local_460.Context = &local_3b8;
    local_3b8.BitStreamReader = (FNetBitStreamReader *)0x0;
    if (local_3b8.ExportContext == (FNetExportContext *)0x0) {
      local_460.StartNumNetHandleExports = 0;
      local_460.StartNumNetTokenExports = 0;
      local_460.StartNumPendingExports = 0;
      local_460.StartNumNetTokensPendingExports = 0;
    }
    else {
      pFVar1 = (local_3b8.ExportContext)->BatchExports;
      local_460.StartNumNetTokenExports = (pFVar1->NetTokensExportedInCurrentBatch).ArrayNum;
      local_460.StartNumNetHandleExports = (pFVar1->HandlesExportedInCurrentBatch).ArrayNum;
      local_460.StartNumNetTokensPendingExports =
           (pFVar1->NetTokensPendingExportInCurrentBatch).ArrayNum;
      local_460.StartNumPendingExports = (pFVar1->ReferencesPendingExportInCurrentBatch).ArrayNum;
    }
    pFVar2 = param_4->Reference;
    if (param_3->bSerializeWithObject == false) {
      (*(code *)((undefined8 *)pFVar2->_padding_)[2])(pFVar2,&local_3b8);
    }
    else {
      (**(code **)pFVar2->_padding_)
                (pFVar2,&local_3b8,(param_3->NetObjectReference).RefHandle.field0_0x0.Value);
    }
    if (local_3b8.ErrorContext.Error != (FName)0x0) {
LAB_1442955a8:
      Net::Private::FNetExportRollbackScope::Rollback(&local_460);
LAB_1442955b2:
      FNetBitStreamWriter::~FNetBitStreamWriter(&local_448);
      bVar21 = false;
      goto LAB_1442955bd;
    }
    bVar21 = local_448.OverflowBitCount == 0;
    if (local_448.OverflowBitCount == 0) {
      FNetBitStreamWriter::CommitWrites(&local_448);
      uVar29 = local_448.BufferBitPosition - local_448.BufferBitStartOffset;
      if (local_3b8.ErrorContext.Error == (FName)0x0) goto LAB_14429544b;
LAB_144295458:
      Net::Private::FNetExportRollbackScope::Rollback(&local_460);
    }
    else {
      uVar28 = uVar32;
      if (uVar29 * 2 < uVar32) {
        uVar28 = uVar29 * 2;
      }
      bVar23 = uVar28 <= uVar29;
      uVar29 = uVar28;
      if (bVar23) {
        bVar21 = FNetSerializationContext::IsBitStreamOverflown(&local_3b8);
        if (bVar21) goto LAB_1442955a8;
        goto LAB_1442955b2;
      }
LAB_14429544b:
      bVar23 = FNetSerializationContext::IsBitStreamOverflown(&local_3b8);
      if (bVar23) goto LAB_144295458;
    }
    FNetBitStreamWriter::~FNetBitStreamWriter(&local_448);
    if (bVar21) {
      local_418.DebugName.Name = (param_3->DebugName).Name;
      local_418.DebugName.DebugNameId = (param_3->DebugName).DebugNameId;
      local_418.DebugName._12_4_ = *(undefined4 *)&(param_3->DebugName).field_0xc;
      pFVar3 = param_1->ExportContext;
      local_418.ObjectReferencesPendingExport.DataPtr = (FNetObjectReference *)0x0;
      local_418.CreationInfo = *(FNetBlobCreationInfo *)local_470;
      local_418.OriginalBlob = param_4->Reference;
      local_418.ObjectReferencesPendingExport._8_8_ =
           local_418.ObjectReferencesPendingExport._8_8_ & 0xffffffff00000000;
      local_418.NetTokensPendingExport.DataPtr = (FNetToken *)0x0;
      local_418.NetTokensPendingExport._8_8_ =
           local_418.NetTokensPendingExport._8_8_ & 0xffffffff00000000;
      local_418.OriginalCreationInfo = (local_418.OriginalBlob)->CreationInfo;
      local_418.Payload = (uint *)local_488.Data;
      local_418.PartBitCount = local_480[2];
      local_418.PayloadBitCount = uVar29;
      if (pFVar3 != (FNetExportContext *)0x0) {
        pFVar1 = pFVar3->BatchExports;
        iVar31 = (pFVar1->ReferencesPendingExportInCurrentBatch).ArrayNum;
        local_470 = *(ForElementType<UE::Net::FNetToken> *)
                     &(pFVar1->ReferencesPendingExportInCurrentBatch).AllocatorInstance.
                      SecondaryData;
        if (local_470 == (ForElementType<UE::Net::FNetToken>)0x0) {
          local_470 = (ForElementType<UE::Net::FNetToken>)
                      &pFVar1->ReferencesPendingExportInCurrentBatch;
        }
        if ((iVar31 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar21)) {
          pcVar4 = (code *)swi(3);
          uVar22 = (*pcVar4)();
          return (bool)uVar22;
        }
        local_418.ObjectReferencesPendingExport._8_8_ = CONCAT44(uStack_464,iVar31);
        local_418.ObjectReferencesPendingExport.DataPtr = (FNetObjectReference *)local_470;
        pFVar1 = pFVar3->BatchExports;
        iVar30 = (pFVar1->NetTokensPendingExportInCurrentBatch).ArrayNum;
        local_470 = (pFVar1->NetTokensPendingExportInCurrentBatch).AllocatorInstance.SecondaryData;
        if (local_470 == (ForElementType<UE::Net::FNetToken>)0x0) {
          local_470 = (ForElementType<UE::Net::FNetToken>)
                      &pFVar1->NetTokensPendingExportInCurrentBatch;
        }
        if ((iVar30 < 0) &&
           (iStack_468 = iVar31,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar21)) {
          pcVar4 = (code *)swi(3);
          uVar22 = (*pcVar4)();
          return (bool)uVar22;
        }
        local_418.NetTokensPendingExport._8_8_ = CONCAT44(uStack_464,iVar30);
        local_418.NetTokensPendingExport.DataPtr = (FNetToken *)local_470;
        iStack_468 = iVar30;
      }
      SplitPayload(&local_418,local_428);
      bVar21 = true;
LAB_1442955bd:
      if (local_488.Data == (FScriptContainerElement *)0x0) {
        return bVar21;
      }
      FMemory::Free(local_488.Data);
      return bVar21;
    }
    iVar31 = local_480[0];
  } while( true );
}

// SplitNetBlob @ 144295620

bool __cdecl
UE::Net::FPartialNetBlob::SplitNetBlob
          (FNetBlobCreationInfo *param_1,FSplitParams *param_2,
          TRefCountPtr<UE::Net::FRawDataNetBlob> *param_3,
          TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FPayloadSplitParams local_68;
  
  if (((0xffdf < param_2->MaxPartBitCount - 0x20) || (param_2->MaxPartCount == 0)) ||
     (0xffff < param_2->MaxPartCount)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SplitParams.MaxPartBitCount > 31U && SplitParams.MaxPartBitCount < 65536U && SplitParams.MaxPartCount > 0 && SplitParams.MaxPartCount < 65536U"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\PartialNetBlob.cpp"
                       ,0xf9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_68.OriginalBlob = (FNetBlob *)param_3->Reference;
  if ((FRawDataNetBlob *)local_68.OriginalBlob == (FRawDataNetBlob *)0x0) {
    bVar3 = false;
  }
  else {
    local_68.DebugName.Name = (param_2->DebugName).Name;
    local_68.DebugName.DebugNameId = (param_2->DebugName).DebugNameId;
    local_68.DebugName._12_4_ = *(undefined4 *)&(param_2->DebugName).field_0xc;
    local_68.ObjectReferencesPendingExport.DataPtr = (FNetObjectReference *)0x0;
    local_68.ObjectReferencesPendingExport.ArrayNum = 0;
    local_68.NetTokensPendingExport.DataPtr = (FNetToken *)0x0;
    local_68.NetTokensPendingExport.ArrayNum = 0;
    local_68.CreationInfo = *param_1;
    local_68.Payload = (uint *)0x0;
    local_68.PayloadBitCount = 0;
    local_68.PartBitCount = 0;
    local_68.OriginalCreationInfo =
         (FNetBlobCreationInfo)((FRawDataNetBlob *)local_68.OriginalBlob)->_padding_;
    pFVar1 = (((FRawDataNetBlob *)local_68.OriginalBlob)->RawData).AllocatorInstance.Data;
    if ((((FRawDataNetBlob *)local_68.OriginalBlob)->RawData).ArrayNum < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    local_68._80_8_ =
         CONCAT44(param_2->MaxPartBitCount,param_3->Reference->RawDataBitCount) & 0xffffffe0ffffffff
    ;
    local_68.Payload = (uint *)pFVar1;
    SplitPayload(&local_68,param_4);
    bVar3 = true;
  }
  return bVar3;
}

// SplitPayload @ 144295890

void __cdecl
UE::Net::FPartialNetBlob::SplitPayload
          (FPayloadSplitParams *param_1,
          TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *param_2)

{
  ENetBlobFlags *pEVar1;
  int *piVar2;
  void *_Dst;
  FNetBlobCreationInfo FVar3;
  FNetBlobCreationInfo this;
  FReplicationStateDescriptor *pFVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  FNetBlob *pFVar15;
  FNetBlob *pFVar16;
  FReplicationStateDescriptor *pFVar17;
  FNetObjectReference *pFVar18;
  FNetObjectReference *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  FNetBlob *pFVar22;
  ulonglong uVar23;
  uint local_res8;
  uint local_res10;
  FNetBlob *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  FNetObjectReference *local_58;
  int local_50;
  
  uVar6 = (ulonglong)((param_1->PayloadBitCount - 1) + param_1->PartBitCount) /
          (ulonglong)param_1->PartBitCount;
  uVar10 = (uint)uVar6;
  uVar21 = param_2->ArrayNum + uVar10;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if (param_2->ArrayMax < (int)uVar21) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar21,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
  }
  uVar20 = 0;
  local_res8 = 0;
  local_res10 = 0;
  uVar11 = uVar10 + Net::Private::PartialNetBlobGlobalSequenceNumber;
  uVar23 = uVar20;
  uVar21 = Net::Private::PartialNetBlobGlobalSequenceNumber;
  Net::Private::PartialNetBlobGlobalSequenceNumber = uVar11;
  if (uVar10 != 0) {
    do {
      pFVar16 = (FNetBlob *)0x0;
      pFVar15 = ::operator_new(0xc0);
      if (pFVar15 != (FNetBlob *)0x0) {
        FNetBlob::FNetBlob(pFVar15,&param_1->CreationInfo);
        pFVar15[1].BlobDescriptor.Reference = (FReplicationStateDescriptor *)0x0;
        pFVar15->_padding_ = (longlong)&___7FPartialNetBlob_Net_UE__6B_;
        *(undefined4 *)&pFVar15[1].QuantizedBlobState.StateBuffer = 0;
        local_60 = 0xffffffff;
        uStack_5c = 0;
        pFVar15[1]._padding_ = 0xffffffff;
        pFVar15[1].CreationInfo.Type = 0;
        pFVar15[1].CreationInfo.Flags = None;
        pFVar15[1].QuantizedBlobState.MemoryAllocationFlags = None;
        pFVar15[1].QuantizedBlobState.AllocationSize = 0;
        *(undefined8 *)&pFVar15[1].RefCount = 0;
        pFVar15[2].QuantizedBlobState.MemoryAllocationFlags = None;
        pFVar15[2].QuantizedBlobState.AllocationSize = 0;
        pFVar15[2].RefCount = 0;
        *(undefined4 *)&pFVar15[2].field_0x2c = 2;
        pFVar15[3].BlobDescriptor.Reference = (FReplicationStateDescriptor *)0x0;
        *(undefined4 *)&pFVar15[3].QuantizedBlobState.StateBuffer = 0;
        *(undefined4 *)((longlong)&pFVar15[3].QuantizedBlobState.StateBuffer + 4) = 4;
        pFVar15[3].QuantizedBlobState.MemoryAllocationFlags = None;
        pFVar15[3].QuantizedBlobState.AllocationSize = 0;
        pFVar15[3].RefCount = 0;
        pFVar16 = pFVar15;
      }
      uVar11 = (param_1->DebugName).DebugNameId;
      uVar8 = *(undefined4 *)&(param_1->DebugName).field_0xc;
      *(wchar_t **)&pFVar16[3].QuantizedBlobState.MemoryAllocationFlags = (param_1->DebugName).Name;
      pFVar16[3].RefCount = uVar11;
      *(undefined4 *)&pFVar16[3].field_0x2c = uVar8;
      pFVar16[1]._padding_ = (longlong)param_1->OriginalCreationInfo;
      *(short *)&pFVar16[1].QuantizedBlobState.StateBuffer = (short)uVar6;
      *(uint *)&pFVar16[1].BlobDescriptor.Reference = (uint)((int)uVar20 == 0);
      *(uint *)((longlong)&pFVar16[1].BlobDescriptor.Reference + 4) = uVar21;
      if (((int)uVar20 == 0) &&
         (((((param_1->OriginalCreationInfo).Flags & HasExports) != None ||
           ((param_1->ObjectReferencesPendingExport).ArrayNum != 0)) ||
          ((param_1->NetTokensPendingExport).ArrayNum != 0)))) {
        FVar3 = (FNetBlobCreationInfo)param_1->OriginalBlob;
        this = pFVar16[1].CreationInfo;
        if (this != FVar3) {
          pFVar16[1].CreationInfo = FVar3;
          if (FVar3 != (FNetBlobCreationInfo)0x0) {
            *(int *)((longlong)FVar3 + 0x28) = *(int *)((longlong)FVar3 + 0x28) + 1;
          }
          if (this != (FNetBlobCreationInfo)0x0) {
            FNetBlob::Release((FNetBlob *)this);
          }
        }
        pEVar1 = &(pFVar16->CreationInfo).Flags;
        *pEVar1 = *pEVar1 | HasExports;
        iVar14 = (param_1->ObjectReferencesPendingExport).ArrayNum;
        if (iVar14 < 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9a9,L"Invalid range size: %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_144295a8f:
          iVar12 = Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
                             (0x10,8,iVar14,
                              (ForElementType<UE::Net::FNetObjectReference> *)(pFVar16 + 2),
                              &pFVar16[2].RefCount,(int *)&pFVar16[2].field_0x2c);
          pFVar15 = *(FNetBlob **)&pFVar16[2].QuantizedBlobState.MemoryAllocationFlags;
          pFVar22 = pFVar16 + 2;
          if (pFVar15 != (FNetBlob *)0x0) {
            pFVar22 = pFVar15;
          }
          memcpy(&pFVar22->_padding_ + (longlong)iVar12 * 2,
                 (param_1->ObjectReferencesPendingExport).DataPtr,(longlong)iVar14 << 4);
        }
        else if (iVar14 != 0) goto LAB_144295a8f;
        iVar14 = (param_1->NetTokensPendingExport).ArrayNum;
        if (iVar14 < 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9a9,L"Invalid range size: %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_144295b27:
          iVar12 = Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                             (4,4,iVar14,(ForElementType<UE::Net::FNetToken> *)(pFVar16 + 3),
                              (int *)&pFVar16[3].QuantizedBlobState,
                              (int *)((longlong)&pFVar16[3].QuantizedBlobState.StateBuffer + 4));
          pFVar4 = pFVar16[3].BlobDescriptor.Reference;
          pFVar17 = (FReplicationStateDescriptor *)(pFVar16 + 3);
          if (pFVar4 != (FReplicationStateDescriptor *)0x0) {
            pFVar17 = pFVar4;
          }
          memcpy((uchar *)((longlong)&pFVar17->MemberDescriptors + (longlong)iVar12 * 4),
                 (param_1->NetTokensPendingExport).DataPtr,(longlong)iVar14 << 2);
        }
        else if (iVar14 != 0) goto LAB_144295b27;
        if ((((param_1->OriginalCreationInfo).Flags & HasExports) != None) &&
           (pFVar15 = param_1->OriginalBlob, pFVar15 != (FNetBlob *)0x0)) {
          (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15,&local_58);
          pFVar18 = local_58 + local_50;
          for (pFVar19 = local_58; pFVar19 != pFVar18; pFVar19 = pFVar19 + 1) {
            TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<UE::Net::FNetObjectReference_const_&>
                      ((TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                        *)(pFVar16 + 2),pFVar19);
          }
        }
      }
      uVar13 = param_1->PayloadBitCount - (int)uVar23;
      piVar2 = &pFVar16[1].RefCount;
      uVar11 = param_1->PartBitCount;
      if (uVar13 < param_1->PartBitCount) {
        uVar11 = uVar13;
      }
      *(short *)((longlong)&pFVar16[1].QuantizedBlobState.StateBuffer + 2) = (short)uVar11;
      iVar14 = *piVar2;
      uVar11 = uVar11 + 0x1f >> 5;
      if (iVar14 < (int)uVar11) {
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar11 - iVar14,
                   (ForAnyElementType *)&pFVar16[1].QuantizedBlobState.MemoryAllocationFlags,piVar2,
                   (int *)&pFVar16[1].field_0x2c);
      }
      else if ((int)uVar11 < iVar14) {
        iVar14 = iVar14 - uVar11;
        if (iVar14 < 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else if (iVar14 == 0) goto LAB_144295c9a;
        _Dst = (void *)(*(longlong *)&pFVar16[1].QuantizedBlobState.MemoryAllocationFlags +
                       (ulonglong)uVar11 * 4);
        iVar12 = (*piVar2 - uVar11) - iVar14;
        if (iVar12 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar14 * 4),(longlong)iVar12 << 2);
        }
        *piVar2 = *piVar2 - iVar14;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)&pFVar16[1].QuantizedBlobState.MemoryAllocationFlags,
                   *piVar2,(int *)&pFVar16[1].field_0x2c);
      }
LAB_144295c9a:
      memcpy(*(void **)&pFVar16[1].QuantizedBlobState.MemoryAllocationFlags,
             param_1->Payload + (uVar23 >> 5),(ulonglong)(uVar11 * 4));
      local_res8 = local_res8 + param_1->PartBitCount;
      piVar2 = &param_2->ArrayMax;
      pFVar16->RefCount = pFVar16->RefCount + 1;
      pFVar5 = (param_2->AllocatorInstance).Data;
      local_68 = pFVar16;
      if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)*piVar2 * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar14 = param_2->ArrayNum;
      if (iVar14 == *piVar2) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_2->AllocatorInstance,piVar2);
      }
      local_res10 = local_res10 + 1;
      uVar20 = (ulonglong)local_res10;
      param_2->ArrayNum = iVar14 + 1;
      pFVar5 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar14 * 8) = 0;
      *(FNetBlob **)(pFVar5 + (longlong)iVar14 * 8) = local_68;
      local_68 = (FNetBlob *)0x0;
      uVar23 = (ulonglong)local_res8;
      uVar21 = uVar21 + 1;
    } while (local_res10 != uVar10);
  }
  return;
}

