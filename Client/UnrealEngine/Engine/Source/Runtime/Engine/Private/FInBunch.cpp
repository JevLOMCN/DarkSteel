// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FInBunch @ 147a24a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInBunch * __thiscall FInBunch::FInBunch(FInBunch *this,FInBunch *param_1,bool param_2)

{
  byte bVar1;
  
  FNetBitReader::FNetBitReader((FNetBitReader *)this,(UPackageMap *)0x0,(uchar *)0x0,0);
  this->_padding_ = (longlong)&___7FInBunch__6B_;
  (this->ChName).ComparisonIndex = 0;
  (this->ChName).Number = 0;
  this->PacketId = param_1->PacketId;
  this->Next = param_1->Next;
  this->Connection = param_1->Connection;
  this->ChIndex = param_1->ChIndex;
  this->ChName = param_1->ChName;
  this->ChSequence = param_1->ChSequence;
  bVar1 = (this->bOpen ^ param_1->bOpen) & 1 ^ this->field_0xe8;
  this->field_0xe8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe8) & 2 ^ bVar1;
  this->field_0xe8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe8) & 4 ^ bVar1;
  this->field_0xe8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe8) & 8 ^ bVar1;
  this->field_0xe8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe8) & 0x10 ^ bVar1;
  this->field_0xe8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe8) & 0x20 ^ bVar1;
  this->field_0xe8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe8) & 0x40 ^ bVar1;
  this->field_0xe8 = bVar1;
  this->field_0xe8 = (bVar1 ^ param_1->field_0xe8) & 0x7f ^ param_1->field_0xe8;
  bVar1 = (this->bHasMustBeMappedGUIDs ^ param_1->bHasMustBeMappedGUIDs) & 1 ^ this->field_0xe9;
  this->field_0xe9 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe9) & 2 ^ bVar1;
  this->field_0xe9 = bVar1;
  this->field_0xe9 = (bVar1 ^ param_1->field_0xe9) & 4 ^ bVar1;
  this->CloseReason = param_1->CloseReason;
  this->_padding_ = param_1->_padding_;
  if (param_2) {
    FBitReader::operator=((FBitReader *)this,(FBitReader *)param_1);
  }
  this->_padding_ = 0;
  return this;
}

// FInBunch @ 147a24c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInBunch * __thiscall FInBunch::FInBunch(FInBunch *this,FInBunch *param_1)

{
  byte bVar1;
  
  FNetBitReader::FNetBitReader((FNetBitReader *)this,(FNetBitReader *)param_1);
  this->_padding_ = (longlong)&___7FInBunch__6B_;
  this->PacketId = param_1->PacketId;
  this->Next = param_1->Next;
  this->Connection = param_1->Connection;
  this->ChIndex = param_1->ChIndex;
  this->ChName = param_1->ChName;
  this->ChSequence = param_1->ChSequence;
  bVar1 = (this->bOpen ^ param_1->bOpen) & 1 ^ this->field_0xe8;
  this->field_0xe8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe8) & 2 ^ bVar1;
  this->field_0xe8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe8) & 4 ^ bVar1;
  this->field_0xe8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe8) & 8 ^ bVar1;
  this->field_0xe8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe8) & 0x10 ^ bVar1;
  this->field_0xe8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe8) & 0x20 ^ bVar1;
  this->field_0xe8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe8) & 0x40 ^ bVar1;
  this->field_0xe8 = bVar1;
  this->field_0xe8 = (bVar1 ^ param_1->field_0xe8) & 0x7f ^ param_1->field_0xe8;
  bVar1 = (this->bHasMustBeMappedGUIDs ^ param_1->bHasMustBeMappedGUIDs) & 1 ^ this->field_0xe9;
  this->field_0xe9 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xe9) & 2 ^ bVar1;
  this->field_0xe9 = bVar1;
  this->field_0xe9 = (bVar1 ^ param_1->field_0xe9) & 4 ^ bVar1;
  this->CloseReason = param_1->CloseReason;
  return this;
}

// FInBunch @ 147a24de0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInBunch * __thiscall
FInBunch::FInBunch(FInBunch *this,UNetConnection *param_1,uchar *param_2,long64 param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  FInBunch *pFVar5;
  
  FNetBitReader::FNetBitReader
            ((FNetBitReader *)this,(param_1->PackageMap).field0_0x0.DebugPtr,param_2,param_3);
  this->Connection = param_1;
  this->_padding_ = (longlong)&___7FInBunch__6B_;
  this->PacketId = 0;
  this->Next = (FInBunch *)0x0;
  this->ChIndex = 0;
  (this->ChName).ComparisonIndex = 0;
  *(undefined8 *)&(this->ChName).Number = 0;
  this->bHasMustBeMappedGUIDs = '\0';
  this->bIgnoreRPCs = '\0';
  this->bPartialCustomExportsFinal = '\0';
  puVar2 = &this->field_0xe8;
  this->bOpen = '\0';
  this->bHasPackageMapExports = '\0';
  this->bPartialFinal = '\0';
  this->bPartialInitial = '\0';
  this->bPartial = '\0';
  this->bReliable = '\0';
  this->bIsReplicationPaused = '\0';
  this->bClose = '\0';
  this->CloseReason = Destroyed;
  if (this->Connection == (UNetConnection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Connection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataBunch.cpp"
                       ,0x29,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FInBunch *)(*pcVar3)();
      return pFVar5;
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)&this->_padding_ + 2) ^
                      this->Connection->bNeedsByteSwapping) & 1;
  return this;
}

// CountMemory @ 147a3ae00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInBunch::CountMemory(FInBunch *this,FArchive *param_1)

{
  for (; this != (FInBunch *)0x0; this = this->Next) {
    FNetBitReader::CountMemory((FNetBitReader *)this,param_1);
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x30,0x30);
  }
  return;
}

// EngineNetVer @ 147a40900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FInBunch::EngineNetVer(FInBunch *this)

{
  uint uVar1;
  
  uVar1 = UNetConnection::GetNetworkCustomVersion
                    (this->Connection,&FEngineNetworkCustomVersion::Guid);
  return uVar1;
}

// GameNetVer @ 147a49d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FInBunch::GameNetVer(FInBunch *this)

{
  uint uVar1;
  
  uVar1 = UNetConnection::GetNetworkCustomVersion(this->Connection,&FGameNetworkCustomVersion::Guid)
  ;
  return uVar1;
}

// SetEngineNetVer @ 147a8ee70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInBunch::SetEngineNetVer(FInBunch *this,uint param_1)

{
  return;
}

// SetGameNetVer @ 147a8ef00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FInBunch::SetGameNetVer(FInBunch *this,uint param_1)

{
  return;
}

// ToString @ 147a98ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall FInBunch::ToString(FInBunch *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,L"FInBunch: ");
  ::FString::PrintfImpl(&local_18,L"Channel[%d] ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"ChSequence: %d ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"NumBits: %lld ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"PacketId: %d ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bOpen: %d ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bClose: %d ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this->bClose != '\0') {
    ::LexToString(this->CloseReason);
    ::FString::PrintfImpl(&local_18,L"CloseReason: %s ");
    iVar1 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl(&local_18,L"bIsReplicationPaused: %d ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bReliable: %d ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bPartial: %d//%d//%d ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bHasPackageMapExports: %d ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bHasMustBeMappedGUIDs: %d ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bPartialCustomExportsFinal: %d ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bIgnoreRPCs: %d ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

