// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 39

// FBackChannelOSCMessage @ 14e7f2fe0

FBackChannelOSCMessage * __thiscall
FBackChannelOSCMessage::FBackChannelOSCMessage
          (FBackChannelOSCMessage *this,FBackChannelOSCMessage *param_1)

{
  FString *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FString *pFVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = &this->TagString;
  (this->Address).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->Buffer;
  (this->Address).Data.ArrayNum = 0;
  (this->Address).Data.ArrayMax = 0;
  (this->TagString).Data.ArrayNum = 0;
  (this->TagString).Data.ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__FBackChannelOSCPacket__;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IBackChannelPacket__;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0;
  this->Mode = param_1->Mode;
  pFVar3 = &param_1->Address;
  if (&this->Address != pFVar3) {
    (this->Address).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Address).Data.ArrayNum = (param_1->Address).Data.ArrayNum;
    (this->Address).Data.ArrayMax = (param_1->Address).Data.ArrayMax;
    (param_1->Address).Data.ArrayNum = 0;
    (param_1->Address).Data.ArrayMax = 0;
  }
  pFVar3 = &param_1->TagString;
  if (pFVar1 != pFVar3) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TagString).Data.ArrayNum = (param_1->TagString).Data.ArrayNum;
    (this->TagString).Data.ArrayMax = (param_1->TagString).Data.ArrayMax;
    (param_1->TagString).Data.ArrayNum = 0;
    (param_1->TagString).Data.ArrayMax = 0;
  }
  pTVar4 = &param_1->Buffer;
  this->TagIndex = param_1->TagIndex;
  if (pTVar2 != pTVar4) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Buffer).ArrayNum = (param_1->Buffer).ArrayNum;
    (this->Buffer).ArrayMax = (param_1->Buffer).ArrayMax;
    (param_1->Buffer).ArrayNum = 0;
    (param_1->Buffer).ArrayMax = 0;
  }
  this->BufferIndex = param_1->BufferIndex;
  return this;
}

// FBackChannelOSCMessage @ 14e7f30f0

FBackChannelOSCMessage * __thiscall
FBackChannelOSCMessage::FBackChannelOSCMessage(FBackChannelOSCMessage *this,wchar_t *param_1)

{
  (this->TagString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Address).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Address).Data.ArrayNum = 0;
  (this->Address).Data.ArrayMax = 0;
  (this->TagString).Data.ArrayNum = 0;
  (this->TagString).Data.ArrayMax = 0;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0;
  this->TagIndex = 0;
  this->BufferIndex = 0;
  this->_padding_ = (longlong)&_vftable__for__FBackChannelOSCPacket__;
  this->_padding_ = (longlong)&_vftable__for__IBackChannelPacket__;
  this->Mode = Write;
  ::FString::operator=(&this->Address,param_1);
  return this;
}

// FBackChannelOSCMessage @ 14e7f3150

FBackChannelOSCMessage * __thiscall
FBackChannelOSCMessage::FBackChannelOSCMessage(FBackChannelOSCMessage *this,OSCPacketMode param_1)

{
  this->Mode = param_1;
  this->_padding_ = (longlong)&_vftable__for__FBackChannelOSCPacket__;
  this->_padding_ = (longlong)&_vftable__for__IBackChannelPacket__;
  (this->Address).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Address).Data.ArrayNum = 0;
  (this->Address).Data.ArrayMax = 0;
  (this->TagString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagString).Data.ArrayNum = 0;
  (this->TagString).Data.ArrayMax = 0;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0;
  this->TagIndex = 0;
  this->BufferIndex = 0;
  return this;
}

// ~FBackChannelOSCMessage @ 14e7f37c0

void __thiscall FBackChannelOSCMessage::~FBackChannelOSCMessage(FBackChannelOSCMessage *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FBackChannelOSCPacket__;
  this->_padding_ = (longlong)&_vftable__for__IBackChannelPacket__;
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Address).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IBackChannelPacket__6B_;
  this->_padding_ = (longlong)&___7FBackChannelOSCPacket__6B_;
  return;
}

// operator= @ 14e7f39a0

FBackChannelOSCMessage * __thiscall
FBackChannelOSCMessage::operator=(FBackChannelOSCMessage *this,FBackChannelOSCMessage *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = &param_1->Address;
  pFVar2 = &this->Address;
  this->Mode = param_1->Mode;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Address).Data.ArrayNum = (param_1->Address).Data.ArrayNum;
    (this->Address).Data.ArrayMax = (param_1->Address).Data.ArrayMax;
    (param_1->Address).Data.ArrayNum = 0;
    (param_1->Address).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->TagString;
  pFVar2 = &this->TagString;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TagString).Data.ArrayNum = (param_1->TagString).Data.ArrayNum;
    (this->TagString).Data.ArrayMax = (param_1->TagString).Data.ArrayMax;
    (param_1->TagString).Data.ArrayNum = 0;
    (param_1->TagString).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->Buffer;
  pTVar4 = &this->Buffer;
  this->TagIndex = param_1->TagIndex;
  if (pTVar4 != pTVar3) {
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Buffer).ArrayNum = (param_1->Buffer).ArrayNum;
    (this->Buffer).ArrayMax = (param_1->Buffer).ArrayMax;
    (param_1->Buffer).ArrayNum = 0;
    (param_1->Buffer).ArrayMax = 0;
  }
  this->BufferIndex = param_1->BufferIndex;
  return this;
}

// CreateFromBuffer @ 14e7f50a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FBackChannelOSCMessage,1> * __cdecl
FBackChannelOSCMessage::CreateFromBuffer
          (TSharedPtr<FBackChannelOSCMessage,1> *__return_storage_ptr__,void *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  FBackChannelOSCMessage *pFVar6;
  size_t sVar7;
  TSharedPtr<FBackChannelOSCMessage,1> *pTVar8;
  FString *pFVar9;
  char *_Str;
  int iVar10;
  FString *pFVar11;
  undefined1 auStackY_2e8 [32];
  FString local_2b8;
  TRawPtrProxy<FBackChannelOSCMessage> local_2a8;
  FString local_2a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pFVar6 = ::operator_new(0x50);
  local_2a8.Object = (FBackChannelOSCMessage *)0x0;
  if (pFVar6 != (FBackChannelOSCMessage *)0x0) {
    (pFVar6->Address).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar6->_padding_ = (longlong)&_vftable__for__FBackChannelOSCPacket__;
    pFVar6->_padding_ = (longlong)&_vftable__for__IBackChannelPacket__;
    (pFVar6->Address).Data.ArrayNum = 0;
    (pFVar6->Address).Data.ArrayMax = 0;
    (pFVar6->TagString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->TagString).Data.ArrayNum = 0;
    (pFVar6->TagString).Data.ArrayMax = 0;
    (pFVar6->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Buffer).ArrayNum = 0;
    (pFVar6->Buffer).ArrayMax = 0;
    pFVar6->Mode = Read;
    pFVar6->TagIndex = 0;
    pFVar6->BufferIndex = 0;
    local_2a8.Object = pFVar6;
  }
  TSharedPtr<FBackChannelOSCMessage,1>::TSharedPtr<FBackChannelOSCMessage,1><FBackChannelOSCMessage>
            (__return_storage_ptr__,&local_2a8);
  local_288._padding_ = 0;
  if (param_1 == (void *)0x0) {
    local_288.Ptr = (wchar_t *)0x0;
    local_288.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,param_1,(int)sVar7,Yes);
  }
  pwVar3 = local_288.Ptr;
  if ((__return_storage_ptr__->Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FBackChannelOSCMessage,1> *)(*pcVar2)();
    return pTVar8;
  }
  ::FString::operator=(&__return_storage_ptr__->Object->Address,pwVar3);
  if ((void *)local_288._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_288._padding_);
  }
  if ((__return_storage_ptr__->Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FBackChannelOSCMessage,1> *)(*pcVar2)();
    return pTVar8;
  }
  local_168._padding_ = 0;
  iVar10 = (__return_storage_ptr__->Object->Address).Data.ArrayNum;
  iVar5 = iVar10 + 3;
  if (iVar10 == 0) {
    iVar5 = 4;
  }
  _Str = (char *)((longlong)(int)(iVar5 + (iVar5 >> 0x1f & 3U) & 0xfffffffc) + (longlong)param_1);
  if (_Str == (char *)0x0) {
    local_168.Ptr = (wchar_t *)0x0;
    local_168.StringLength = 0;
  }
  else {
    sVar7 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,_Str,(int)sVar7,Yes);
  }
  ::FString::FString(&local_2b8,local_168.Ptr);
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  iVar5 = ::FString::Find(&local_2b8,L",",1,CaseSensitive,FromStart,-1);
  pFVar9 = ::FString::RightChop(&local_2b8,&local_2a0,iVar5 + 1);
  if ((__return_storage_ptr__->Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FBackChannelOSCMessage,1> *)(*pcVar2)();
    return pTVar8;
  }
  pFVar6 = __return_storage_ptr__->Object;
  pFVar11 = &pFVar6->TagString;
  if (pFVar11 != pFVar9) {
    pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar11->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->TagString).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (pFVar6->TagString).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  iVar5 = local_2b8.Data.ArrayNum + 3;
  if (local_2b8.Data.ArrayNum == 0) {
    iVar5 = 4;
  }
  iVar10 = ((int)param_1 - (int)(_Str + (int)(iVar5 + (iVar5 >> 0x1f & 3U) & 0xfffffffc))) + param_2
  ;
  if ((__return_storage_ptr__->Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FBackChannelOSCMessage,1> *)(*pcVar2)();
    return pTVar8;
  }
  pFVar6 = __return_storage_ptr__->Object;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar10,&(pFVar6->Buffer).AllocatorInstance,&(pFVar6->Buffer).ArrayNum,
             &(pFVar6->Buffer).ArrayMax);
  if ((__return_storage_ptr__->Object == (FBackChannelOSCMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FBackChannelOSCMessage,1> *)(*pcVar2)();
    return pTVar8;
  }
  memcpy((__return_storage_ptr__->Object->Buffer).AllocatorInstance.Data,
         _Str + (int)(iVar5 + (iVar5 >> 0x1f & 3U) & 0xfffffffc),(longlong)iVar10);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetComponentSizes @ 14e7f5f90

void __thiscall
FBackChannelOSCMessage::GetComponentSizes
          (FBackChannelOSCMessage *this,int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  FString local_28;
  void *local_18 [2];
  
  lVar2 = (**(code **)(this->_padding_ + 0x68))(&this->_padding_,local_18);
  iVar1 = *(int *)(lVar2 + 8) + 3;
  if (*(int *)(lVar2 + 8) == 0) {
    iVar1 = 4;
  }
  *param_1 = iVar1 + (iVar1 >> 0x1f & 3U) & 0xfffffffc;
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  ::FString::PrintfImpl(&local_28,L",%s");
  iVar1 = local_28.Data.ArrayNum + 3;
  if (local_28.Data.ArrayNum == 0) {
    iVar1 = 4;
  }
  *param_2 = iVar1 + (iVar1 >> 0x1f & 3U) & 0xfffffffc;
  *param_3 = this->BufferIndex;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPath @ 14e7f6880

FString * __thiscall
FBackChannelOSCMessage::GetPath(FBackChannelOSCMessage *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,(FString *)&this->Mode);
  return __return_storage_ptr__;
}

// GetProtocolID @ 14e7f68b0

FBackChannelPacketType __thiscall
FBackChannelOSCMessage::GetProtocolID(FBackChannelOSCMessage *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0;
  return (FBackChannelPacketType)SUB84(in_RDX,0);
}

// GetProtocolName @ 14e7f68f0

FString * __thiscall
FBackChannelOSCMessage::GetProtocolName
          (FBackChannelOSCMessage *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"BackChannelOSC");
  return __return_storage_ptr__;
}

// GetSize @ 14e7f69a0

int __thiscall FBackChannelOSCMessage::GetSize(FBackChannelOSCMessage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FString local_28;
  void *local_18 [2];
  
  lVar4 = (**(code **)(this->_padding_ + 0x68))(&this->_padding_,local_18);
  iVar3 = *(int *)(lVar4 + 8) + 3;
  if (*(int *)(lVar4 + 8) == 0) {
    iVar3 = 4;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  ::FString::PrintfImpl(&local_28,L",%s");
  iVar1 = this->BufferIndex;
  iVar2 = local_28.Data.ArrayNum + 3;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = 4;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return iVar1 + (((int)((iVar2 >> 0x1f & 3U) + iVar2) >> 2) +
                 ((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2)) * 4;
}

// GetType @ 14e7f6a80

OSCPacketType __thiscall FBackChannelOSCMessage::GetType(FBackChannelOSCMessage *this)

{
  return Message;
}

// IsReadable @ 14e7f6c20

bool __thiscall FBackChannelOSCMessage::IsReadable(FBackChannelOSCMessage *this)

{
  return (int)this->_padding_ == 0;
}

// IsWritable @ 14e7f6c60

bool __thiscall FBackChannelOSCMessage::IsWritable(FBackChannelOSCMessage *this)

{
  return (int)this->_padding_ == 1;
}

// Read @ 14e7f7000

int __thiscall
FBackChannelOSCMessage::Read(FBackChannelOSCMessage *this,wchar_t *param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((int)this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsReading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Public\\BackChannel\\Protocol\\OSC\\BackChannelOSCMessage.h"
                       ,0xc1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = ReadTagAndData((FBackChannelOSCMessage *)&this[-1].Buffer.ArrayNum,L'i',param_2,4);
  if ((iVar4 == 0) && (bIsLegacyConnection == false)) {
    uVar1 = *param_2;
    *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  return iVar4;
}

// Read @ 14e7f7080

int __thiscall
FBackChannelOSCMessage::Read(FBackChannelOSCMessage *this,wchar_t *param_1,float *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((int)this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsReading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Public\\BackChannel\\Protocol\\OSC\\BackChannelOSCMessage.h"
                       ,0xcf,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = ReadTagAndData((FBackChannelOSCMessage *)&this[-1].Buffer.ArrayNum,L'f',param_2,4);
  if ((iVar4 == 0) && (bIsLegacyConnection == false)) {
    fVar1 = *param_2;
    *param_2 = (float)((uint)fVar1 >> 0x18 | ((uint)fVar1 & 0xff0000) >> 8 |
                       ((uint)fVar1 & 0xff00) << 8 | (int)fVar1 << 0x18);
  }
  return iVar4;
}

// Read @ 14e7f7100

int __thiscall
FBackChannelOSCMessage::Read
          (FBackChannelOSCMessage *this,wchar_t *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  int local_res8 [2];
  int local_res20 [2];
  
  piVar1 = &param_2->ArrayNum;
  local_res8[0] = 0;
  local_res20[0] = 0;
  if (bIsLegacyConnection) {
    (**(code **)(this->_padding_ + 0x98))(this,L"Size",local_res20);
    iVar2 = *piVar1;
    local_res8[0] = local_res20[0];
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_res20[0],&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    iVar2 = ReadTagAndData((FBackChannelOSCMessage *)&this[-1].Buffer.ArrayNum,L'b',
                           (param_2->AllocatorInstance).Data + iVar2,local_res8[0]);
    return iVar2;
  }
  (**(code **)(this->_padding_ + 0x70))(this,param_1,0,0,local_res8);
  iVar2 = *piVar1;
  local_res20[0] = local_res8[0];
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,local_res8[0],&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  iVar2 = (**(code **)(this->_padding_ + 0x70))
                    (this,param_1,(param_2->AllocatorInstance).Data + iVar2,local_res8[0],local_res8
                    );
  return iVar2;
}

// Read @ 14e7f7210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FBackChannelOSCMessage::Read(FBackChannelOSCMessage *this,wchar_t *param_1,FString *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  char *_Str;
  undefined1 auStack_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (((int)this->_padding_ != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsReading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCMessage.cpp"
                         ,0x3c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = *(int *)&(this->TagString).Data.AllocatorInstance.Data;
  iVar2 = (this->TagString).Data.ArrayNum;
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  if (iVar2 == iVar6) {
    if (1 < (byte)LogBackChannel._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
      return 1;
    }
  }
  else {
    pwVar7 = ::FString::operator[]((FString *)&(this->Address).Data.ArrayNum,iVar2);
    if (*pwVar7 == L's') {
      local_148._padding_ = 0;
      _Str = (char *)(*(longlong *)&this->TagIndex + (longlong)(this->TagString).Data.ArrayMax);
      if (_Str == (char *)0x0) {
        local_148.Ptr = (wchar_t *)0x0;
        local_148.StringLength = 0;
      }
      else {
        sVar8 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,_Str,(int)sVar8,Yes);
      }
      ::FString::operator=(param_2,local_148.Ptr);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      iVar2 = (param_2->Data).ArrayNum;
      iVar5 = iVar2 + 3;
      if (iVar2 == 0) {
        iVar5 = 4;
      }
      piVar1 = &(this->TagString).Data.ArrayNum;
      *piVar1 = *piVar1 + 1;
      piVar1 = &(this->TagString).Data.ArrayMax;
      *piVar1 = *piVar1 + (iVar5 + (iVar5 >> 0x1f & 3U) & 0xfffffffc);
      return 0;
    }
    if (1 < (byte)LogBackChannel._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    }
  }
  return 1;
}

// Read @ 14e7f7390

int __thiscall
FBackChannelOSCMessage::Read(FBackChannelOSCMessage *this,wchar_t *param_1,bool *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  iVar2 = *(int *)&(this->TagString).Data.AllocatorInstance.Data;
  iVar3 = (this->TagString).Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  piVar1 = &(this->Address).Data.ArrayNum;
  if (iVar3 == iVar4) {
LAB_14e7f73d2:
    iVar2 = *(int *)&(this->TagString).Data.AllocatorInstance.Data;
    iVar3 = (this->TagString).Data.ArrayNum;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (iVar3 != iVar4) {
      pwVar5 = ::FString::operator[]((FString *)piVar1,iVar3);
      if (*pwVar5 == L'F') {
        piVar1 = &(this->TagString).Data.ArrayNum;
        *piVar1 = *piVar1 + 1;
        *param_2 = false;
        goto LAB_14e7f7407;
      }
    }
    iVar4 = 1;
  }
  else {
    pwVar5 = ::FString::operator[]((FString *)piVar1,iVar3);
    if (*pwVar5 != L'T') goto LAB_14e7f73d2;
    piVar1 = &(this->TagString).Data.ArrayNum;
    *piVar1 = *piVar1 + 1;
    *param_2 = true;
LAB_14e7f7407:
    iVar4 = 0;
  }
  return iVar4;
}

// Read @ 14e7f7430

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FBackChannelOSCMessage::Read
          (FBackChannelOSCMessage *this,wchar_t *param_1,void *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *pwVar7;
  
  if (((int)this->_padding_ != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsReading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCMessage.cpp"
                         ,0xb7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar2 = *(int *)&(this->TagString).Data.AllocatorInstance.Data;
  iVar3 = (this->TagString).Data.ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (iVar3 == iVar6) {
    if (1 < (byte)LogBackChannel._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    }
  }
  else {
    pwVar7 = ::FString::operator[]((FString *)&(this->Address).Data.ArrayNum,iVar3);
    if (*pwVar7 == L'b') {
      piVar1 = &(this->TagString).Data.ArrayNum;
      *piVar1 = *piVar1 + 1;
      *param_4 = *(int *)((longlong)(this->TagString).Data.ArrayMax + *(longlong *)&this->TagIndex);
      iVar2 = (this->TagString).Data.ArrayMax;
      iVar6 = iVar2 + 4;
      (this->TagString).Data.ArrayMax = iVar6;
      if (param_3 == 0) {
        piVar1 = &(this->TagString).Data.ArrayNum;
        *piVar1 = *piVar1 + -1;
        (this->TagString).Data.ArrayMax = iVar2;
      }
      else {
        if (param_2 == (void *)0x0) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6382538422258499380>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCMessage.cpp"
                             ,0xcc,"OutBlob");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            iVar6 = (*pcVar4)();
            return iVar6;
          }
        }
        else {
          iVar2 = *param_4;
          if (iVar2 <= param_3) {
            memcpy(param_2,(void *)((longlong)iVar6 + *(longlong *)&this->TagIndex),(longlong)iVar2)
            ;
            piVar1 = &(this->TagString).Data.ArrayMax;
            *piVar1 = *piVar1 + (iVar2 + 3 + (iVar2 + 3 >> 0x1f & 3U) & 0xfffffffc);
            goto LAB_14e7f75a8;
          }
        }
        piVar1 = &(this->TagString).Data.ArrayMax;
        *piVar1 = *piVar1 + (*param_4 + 3 + (*param_4 + 3 >> 0x1f & 3U) & 0xfffffffc);
        if (1 < (byte)LogBackChannel._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
        }
      }
LAB_14e7f75a8:
      iVar6 = 0;
      if ((param_3 < *param_4) && (iVar6 = 0, param_3 != 0)) {
        iVar6 = 1;
      }
      return iVar6;
    }
    if (1 < (byte)LogBackChannel._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
      return 1;
    }
  }
  return 1;
}

// ReadData @ 14e7f7600

int __thiscall
FBackChannelOSCMessage::ReadData(FBackChannelOSCMessage *this,void *param_1,int param_2)

{
  memcpy(param_1,(this->Buffer).AllocatorInstance.Data + this->BufferIndex,(longlong)param_2);
  this->BufferIndex = this->BufferIndex + (param_2 + 3 + (param_2 + 3 >> 0x1f & 3U) & 0xfffffffc);
  return 0;
}

// ReadTag @ 14e7f7650

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t __thiscall
FBackChannelOSCMessage::ReadTag(FBackChannelOSCMessage *this,wchar_t param_1,bool param_2)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t wVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  iVar2 = (this->TagString).Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  wVar3 = L'\0';
  if (this->TagIndex == iVar4) {
    if ((1 < (byte)LogBackChannel._0_1_) && (!param_2)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    }
  }
  else {
    pwVar5 = ::FString::operator[](&this->TagString,this->TagIndex);
    wVar1 = *pwVar5;
    if (wVar1 == param_1) {
      this->TagIndex = this->TagIndex + 1;
      wVar3 = wVar1;
    }
    else if ((1 < (byte)LogBackChannel._0_1_) && (!param_2)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    }
  }
  return wVar3;
}

// ReadTagAndData @ 14e7f7710

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FBackChannelOSCMessage::ReadTagAndData
          (FBackChannelOSCMessage *this,wchar_t param_1,void *param_2,int param_3)

{
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar2 = (this->TagString).Data.ArrayNum;
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (this->TagIndex == iVar3) {
    if (1 < (byte)LogBackChannel._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
      return 1;
    }
  }
  else {
    pwVar4 = ::FString::operator[](&this->TagString,this->TagIndex);
    wVar1 = *pwVar4;
    if (wVar1 == param_1) {
      this->TagIndex = this->TagIndex + 1;
      if (wVar1 != L'\0') {
        memcpy(param_2,(this->Buffer).AllocatorInstance.Data + this->BufferIndex,(longlong)param_3);
        this->BufferIndex =
             this->BufferIndex + (param_3 + 3 + (param_3 + 3 >> 0x1f & 3U) & 0xfffffffc);
        return 0;
      }
    }
    else if (1 < (byte)LogBackChannel._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
      return 1;
    }
  }
  return 1;
}

// ResetRead @ 14e7f8970

void __thiscall FBackChannelOSCMessage::ResetRead(FBackChannelOSCMessage *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Mode == Read) {
    this->TagIndex = 0;
    this->BufferIndex = 0;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsReading()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCMessage.cpp"
                     ,0x35,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->TagIndex = 0;
  this->BufferIndex = 0;
  return;
}

// ResetReading @ 14e7f89d0

void __thiscall FBackChannelOSCMessage::ResetReading(FBackChannelOSCMessage *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((int)this->_padding_ == 0) {
    (this->TagString).Data.ArrayNum = 0;
    (this->TagString).Data.ArrayMax = 0;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsReading()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCMessage.cpp"
                     ,0x35,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->TagString).Data.ArrayNum = 0;
  (this->TagString).Data.ArrayMax = 0;
  return;
}

// Serialize @ 14e7f9650

int __thiscall
FBackChannelOSCMessage::Serialize
          (FBackChannelOSCMessage *this,wchar_t param_1,void *param_2,int param_3)

{
  int iVar1;
  
  if (this->Mode == Read) {
    iVar1 = ReadTagAndData(this,param_1,param_2,param_3);
    return iVar1;
  }
  ::FString::AppendChar(&this->TagString,param_1);
  this->TagIndex = this->TagIndex + 1;
  WriteData(this,param_2,param_3);
  return 0;
}

// SetPath @ 14e7f9830

int __thiscall FBackChannelOSCMessage::SetPath(FBackChannelOSCMessage *this,wchar_t *param_1)

{
  ::FString::operator=((FString *)&this->Mode,param_1);
  return 0;
}

// Write @ 14e7fa870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FBackChannelOSCMessage::Write(FBackChannelOSCMessage *this,wchar_t *param_1,wchar_t *param_2)

{
  int *piVar1;
  char *pcVar2;
  size_t sVar3;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar4;
  undefined1 auStack_d8 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  sVar3 = wcslen(param_2);
  pTVar4 = StringCast<char,128,wchar_t>(&local_b8,param_2);
  pcVar2 = pTVar4->Ptr;
  ::FString::AppendChar((FString *)&(this->Address).Data.ArrayNum,L's');
  piVar1 = &(this->TagString).Data.ArrayNum;
  *piVar1 = *piVar1 + 1;
  WriteData((FBackChannelOSCMessage *)&this[-1].Buffer.ArrayNum,pcVar2,(int)sVar3 + 1);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  return 0;
}

// Write @ 14e7fa920

int __thiscall
FBackChannelOSCMessage::Write(FBackChannelOSCMessage *this,wchar_t *param_1,FString *param_2)

{
  int iVar1;
  
  if ((param_2->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014e7fa92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(this->_padding_ + 0x48))
                      (this,param_1,(param_2->Data).AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014e7fa938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->_padding_ + 0x48))(this,param_1,L"");
  return iVar1;
}

// Write @ 14e7fa950

int __thiscall
FBackChannelOSCMessage::Write(FBackChannelOSCMessage *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((int)this->_padding_ != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsWriting()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Public\\BackChannel\\Protocol\\OSC\\BackChannelOSCMessage.h"
                       ,0x68,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if (bIsLegacyConnection == false) {
    param_2 = (uint)param_2 >> 0x18 | (param_2 & 0xff0000U) >> 8 | (param_2 & 0xff00U) << 8 |
              param_2 << 0x18;
  }
  ::FString::AppendChar((FString *)&(this->Address).Data.ArrayNum,L'i');
  piVar1 = &(this->TagString).Data.ArrayNum;
  *piVar1 = *piVar1 + 1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,(ForAnyElementType *)&this->TagIndex,(int *)&this->Buffer,
             (int *)((longlong)&(this->Buffer).AllocatorInstance.Data + 4));
  *(int *)((longlong)(this->TagString).Data.ArrayMax + *(longlong *)&this->TagIndex) = param_2;
  piVar1 = &(this->TagString).Data.ArrayMax;
  *piVar1 = *piVar1 + 4;
  return 0;
}

// Write @ 14e7faa00

int __thiscall
FBackChannelOSCMessage::Write(FBackChannelOSCMessage *this,wchar_t *param_1,float param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((int)this->_padding_ != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsWriting()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Public\\BackChannel\\Protocol\\OSC\\BackChannelOSCMessage.h"
                       ,0x71,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if (bIsLegacyConnection == false) {
    param_2 = (float)((uint)param_2 >> 0x18 | ((uint)param_2 & 0xff0000) >> 8 |
                      ((uint)param_2 & 0xff00) << 8 | (int)param_2 << 0x18);
  }
  ::FString::AppendChar((FString *)&(this->Address).Data.ArrayNum,L'f');
  piVar1 = &(this->TagString).Data.ArrayNum;
  *piVar1 = *piVar1 + 1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,(ForAnyElementType *)&this->TagIndex,(int *)&this->Buffer,
             (int *)((longlong)&(this->Buffer).AllocatorInstance.Data + 4));
  *(float *)((longlong)(this->TagString).Data.ArrayMax + *(longlong *)&this->TagIndex) = param_2;
  piVar1 = &(this->TagString).Data.ArrayMax;
  *piVar1 = *piVar1 + 4;
  return 0;
}

// Write @ 14e7faac0

int __thiscall
FBackChannelOSCMessage::Write
          (FBackChannelOSCMessage *this,wchar_t *param_1,void *param_2,int param_3)

{
  int *this_00;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int local_res20 [2];
  
  this_00 = &this[-1].Buffer.ArrayNum;
  local_res20[0] = param_3;
  if ((int)this->_padding_ != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsWriting()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Public\\BackChannel\\Protocol\\OSC\\BackChannelOSCMessage.h"
                       ,0x94,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  piVar1 = &(this->Address).Data.ArrayNum;
  if (bIsLegacyConnection != false) {
    ::FString::AppendChar((FString *)piVar1,L'b');
    piVar1 = &(this->TagString).Data.ArrayNum;
    *piVar1 = *piVar1 + 1;
    WriteData((FBackChannelOSCMessage *)this_00,param_2,param_3);
    return 0;
  }
  ::FString::AppendChar((FString *)piVar1,L'b');
  piVar1 = &(this->TagString).Data.ArrayNum;
  *piVar1 = *piVar1 + 1;
  WriteData((FBackChannelOSCMessage *)this_00,local_res20,4);
  iVar4 = WriteData((FBackChannelOSCMessage *)this_00,param_2,local_res20[0]);
  return iVar4;
}

// Write @ 14e7fab90

int __thiscall
FBackChannelOSCMessage::Write
          (FBackChannelOSCMessage *this,wchar_t *param_1,
          TArrayView<unsigned_char_const_,int> *param_2)

{
  int *piVar1;
  uchar *puVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = *(ulonglong *)&param_2->ArrayNum;
  if (bIsLegacyConnection) {
    (**(code **)(this->_padding_ + 0x60))(uVar3,L"Size",uVar3 & 0xffffffff);
    ::FString::AppendChar((FString *)&(this->Address).Data.ArrayNum,L'b');
    puVar2 = param_2->DataPtr;
    piVar1 = &(this->TagString).Data.ArrayNum;
    *piVar1 = *piVar1 + 1;
    WriteData((FBackChannelOSCMessage *)&this[-1].Buffer.ArrayNum,puVar2,(int)uVar3);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014e7fac16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (**(code **)(this->_padding_ + 0x30))(uVar3,(int)param_2->DataPtr,param_2->DataPtr,uVar3);
  return iVar4;
}

// Write @ 14e7fac20

int __thiscall
FBackChannelOSCMessage::Write(FBackChannelOSCMessage *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  wchar_t wVar2;
  
  wVar2 = L'T';
  if (!param_2) {
    wVar2 = L'F';
  }
  ::FString::AppendChar((FString *)&(this->Address).Data.ArrayNum,wVar2);
  piVar1 = &(this->TagString).Data.ArrayNum;
  *piVar1 = *piVar1 + 1;
  return 0;
}

// WriteData @ 14e7fac60

int __thiscall
FBackChannelOSCMessage::WriteData(FBackChannelOSCMessage *this,void *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 + 3 >> 0x1f & 3U) + param_2 + 3 & 0xfffffffc;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,uVar1,&(this->Buffer).AllocatorInstance,&(this->Buffer).ArrayNum,
             &(this->Buffer).ArrayMax);
  memcpy((this->Buffer).AllocatorInstance.Data + this->BufferIndex,param_1,(longlong)param_2);
  this->BufferIndex = this->BufferIndex + uVar1;
  return 0;
}

// WriteTag @ 14e7facf0

int __thiscall FBackChannelOSCMessage::WriteTag(FBackChannelOSCMessage *this,wchar_t param_1)

{
  ::FString::AppendChar(&this->TagString,param_1);
  this->TagIndex = this->TagIndex + 1;
  return 0;
}

// WriteTagAndData @ 14e7fad20

int __thiscall
FBackChannelOSCMessage::WriteTagAndData
          (FBackChannelOSCMessage *this,wchar_t param_1,void *param_2,int param_3)

{
  ::FString::AppendChar(&this->TagString,param_1);
  this->TagIndex = this->TagIndex + 1;
  WriteData(this,param_2,param_3);
  return 0;
}

// WriteToBuffer @ 14e7faec0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FBackChannelOSCMessage::WriteToBuffer
          (FBackChannelOSCMessage *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x18))();
  return __return_storage_ptr__;
}

// WriteToBuffer @ 14e7faef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBackChannelOSCMessage::WriteToBuffer
          (FBackChannelOSCMessage *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar4;
  wchar_t *pwVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStackY_158 [32];
  FString local_128;
  void *local_118 [2];
  FString local_108;
  void *local_f8 [2];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  lVar2 = (**(code **)(this->_padding_ + 0x68))(&this->_padding_,local_f8);
  iVar6 = *(int *)(lVar2 + 8) + 3;
  if (*(int *)(lVar2 + 8) == 0) {
    iVar6 = 4;
  }
  uVar9 = (iVar6 >> 0x1f & 3U) + iVar6 & 0xfffffffc;
  if (local_f8[0] != (void *)0x0) {
    FMemory::Free(local_f8[0]);
  }
  ::FString::PrintfImpl(&local_108,L",%s");
  iVar6 = this->BufferIndex;
  iVar1 = local_108.Data.ArrayNum + 3;
  if (local_108.Data.ArrayNum == 0) {
    iVar1 = 4;
  }
  uVar10 = (iVar1 >> 0x1f & 3U) + iVar1 & 0xfffffffc;
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  iVar1 = param_1->ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar6 + uVar10 + uVar9,&param_1->AllocatorInstance,&param_1->ArrayNum,
             &param_1->ArrayMax);
  pFVar7 = (param_1->AllocatorInstance).Data + iVar1;
  lVar2 = (**(code **)(this->_padding_ + 0x68))(&this->_padding_,local_118);
  iVar6 = *(int *)(lVar2 + 8) + -1;
  if (*(int *)(lVar2 + 8) == 0) {
    iVar6 = 0;
  }
  if (local_118[0] != (void *)0x0) {
    FMemory::Free(local_118[0]);
  }
  ::FString::PrintfImpl(&local_128,L",%s");
  iVar1 = local_128.Data.ArrayNum + -1;
  if (local_128.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x68))(&this->_padding_,local_118);
  if (*(int *)(puVar3 + 1) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)*puVar3;
  }
  pTVar4 = StringCast<char,128,wchar_t>(&local_e8,pwVar5);
  lVar2 = (longlong)iVar6;
  strncpy((char *)pFVar7,pTVar4->Ptr,lVar2 + 1);
  pFVar7[lVar2] = (FScriptContainerElement)0x0;
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  if (local_118[0] != (void *)0x0) {
    FMemory::Free(local_118[0]);
  }
  pFVar7[lVar2 + 1] = (FScriptContainerElement)0x0;
  pFVar7 = pFVar7 + (int)uVar9;
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar8.Data = local_128.Data.AllocatorInstance.Data;
  }
  pTVar4 = StringCast<char,128,wchar_t>(&local_e8,(wchar_t *)FVar8.Data);
  lVar2 = (longlong)iVar1;
  strncpy((char *)pFVar7,pTVar4->Ptr,lVar2 + 1);
  pFVar7[lVar2] = (FScriptContainerElement)0x0;
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  pFVar7[lVar2 + 1] = (FScriptContainerElement)0x0;
  memcpy(pFVar7 + (int)uVar10,(this->Buffer).AllocatorInstance.Data,(longlong)this->BufferIndex);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return;
}

