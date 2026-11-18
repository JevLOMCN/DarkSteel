// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 10

// GetAddressType @ 14ae921a0

FName __thiscall Metasound::FSendAddress::GetAddressType(FSendAddress *this)

{
  FName in_RDX;
  
  FLazyName::Resolve(&AddressType);
  return in_RDX;
}

// GetDataType @ 14ae921d0

FName __thiscall Metasound::FSendAddress::GetDataType(FSendAddress *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->DataType;
  return in_RDX;
}

// Clone @ 14ae921f0

TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
__thiscall Metasound::FSendAddress::Clone(FSendAddress *this)

{
  FTransmissionAddress FVar1;
  FTransmissionAddress *in_RDX;
  
  FVar1 = (FTransmissionAddress)::operator_new(0x20);
  if (FVar1 != (FTransmissionAddress)0x0) {
    *in_RDX = FVar1;
    *(undefined ***)FVar1 = &___7FSendAddress_Metasound__6B_;
    *(FName *)((longlong)FVar1 + 8) = this->ChannelName;
    *(FName *)((longlong)FVar1 + 0x10) = this->DataType;
    *(ulong64 *)((longlong)FVar1 + 0x18) = this->InstanceID;
    return (TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
            )in_RDX;
  }
  *in_RDX = (FTransmissionAddress)0x0;
  return (TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
          )in_RDX;
}

// ToString @ 14ae92270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
Metasound::FSendAddress::ToString(FSendAddress *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  undefined1 auStackY_e8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FString local_88;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar1 = ::FName::ToString(&this->ChannelName,&local_98);
  FStringFormatArg::FStringFormatArg(&local_78,pFVar1);
  FStringFormatArg::FStringFormatArg(&local_58,this->InstanceID);
  pFVar1 = ::FName::ToString(&this->DataType,&local_88);
  FStringFormatArg::FStringFormatArg(&local_38,pFVar1);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,3,0,&local_a8.AllocatorInstance,3,&local_a8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_a8.AllocatorInstance.Data,&local_78,3)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"SendAddress {0}:{1}[Type={2}]",&local_a8);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FStringFormatArg *)local_a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetHash @ 14ae923f0

uint __thiscall Metasound::FSendAddress::GetHash(FSendAddress *this)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  
  FVar1 = this->ChannelName;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = this->DataType;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar4 = uVar4 + FVar2.Number;
  uVar4 = uVar4 * 0x40 + uVar3 + FVar1.Number + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  return (uVar4 >> 2) + 0x9e3779b9 +
         uVar4 * 0x40 + (int)this->InstanceID + (int)(this->InstanceID >> 0x20) * 0x17 ^ uVar4;
}

// IsEqual @ 14ae92490

bool __thiscall Metasound::FSendAddress::IsEqual(FSendAddress *this,FTransmissionAddress *param_1)

{
  longlong *plVar1;
  longlong local_res10;
  undefined1 local_res18 [8];
  
  plVar1 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1,local_res18);
  FLazyName::Resolve(&AddressType);
  if ((((*plVar1 == local_res10) && ((FTransmissionAddress)this->InstanceID == param_1[3])) &&
      (this->ChannelName == *(FName *)(param_1 + 1))) && (this->DataType == *(FName *)(param_1 + 2))
     ) {
    return true;
  }
  return false;
}

// FSendAddress @ 14af3d560

FSendAddress * __thiscall
Metasound::FSendAddress::FSendAddress
          (FSendAddress *this,FName *param_1,FName *param_2,ulong64 param_3)

{
  this->_padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  this->ChannelName = *param_1;
  this->DataType = *param_2;
  this->InstanceID = param_3;
  return this;
}

// FSendAddress @ 14af3d590

FSendAddress * __thiscall Metasound::FSendAddress::FSendAddress(FSendAddress *this,FString *param_1)

{
  wchar_t *pwVar1;
  
  this->_padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&this->ChannelName,pwVar1);
  this->InstanceID = 0xffffffffffffffff;
  (this->DataType).ComparisonIndex = 0;
  (this->DataType).Number = 0;
  return this;
}

// GetChannelName @ 14af94b10

FName * __thiscall Metasound::FSendAddress::GetChannelName(FSendAddress *this)

{
  return &this->ChannelName;
}

// GetInstanceID @ 14af9b2d0

ulong64 __thiscall Metasound::FSendAddress::GetInstanceID(FSendAddress *this)

{
  return this->InstanceID;
}

