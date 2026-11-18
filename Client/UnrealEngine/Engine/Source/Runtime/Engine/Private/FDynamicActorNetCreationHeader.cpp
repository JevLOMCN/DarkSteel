// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FDynamicActorNetCreationHeader @ 1480142c0

FDynamicActorNetCreationHeader * __thiscall
UE::Net::FDynamicActorNetCreationHeader::FDynamicActorNetCreationHeader
          (FDynamicActorNetCreationHeader *this)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0xff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDynamicActorNetCreationHeader_Net_UE__6B_;
  (this->SpawnInfo).Location.field0_0x0._s_0.X = 0.0;
  (this->SpawnInfo).Location.field0_0x0._s_0.Y = 0.0;
  (this->SpawnInfo).Location.field0_0x0._s_0.Z = 0.0;
  (this->SpawnInfo).Rotation.Pitch = 0.0;
  (this->SpawnInfo).Rotation.Yaw = 0.0;
  (this->SpawnInfo).Rotation.Roll = 0.0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->SpawnInfo).Scale.field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X
  ;
  (this->SpawnInfo).Scale.field0_0x0._s_0.Y = (double)uVar1;
  (this->SpawnInfo).Scale.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z
  ;
  (this->SpawnInfo).Velocity.field0_0x0._s_0.X = 0.0;
  (this->SpawnInfo).Velocity.field0_0x0._s_0.Y = 0.0;
  (this->SpawnInfo).Velocity.field0_0x0._s_0.Z = 0.0;
  (this->ArchetypeReference).RefHandle.field0_0x0.Value = 0;
  (this->ArchetypeReference).PathToken = (FNetToken_u_0)0x0;
  (this->ArchetypeReference).Traits = None;
  (this->LevelReference).RefHandle.field0_0x0.Value = 0;
  (this->LevelReference).PathToken = (FNetToken_u_0)0x0;
  (this->LevelReference).Traits = None;
  this->bUsePersistentLevel = false;
  this->bIsPreRegistered = false;
  return this;
}

// Deserialize @ 14802a6d0

bool __thiscall
UE::Net::FDynamicActorNetCreationHeader::Deserialize
          (FDynamicActorNetCreationHeader *this,FCreationHeaderContext *param_1)

{
  FNetBitStreamReader *this_00;
  bool bVar1;
  uint uVar2;
  UNetActorFactory *pUVar3;
  
  pUVar3 = CastChecked<UNetActorFactory,UNetObjectFactory>(param_1->Factory);
  this_00 = param_1->Serialization->BitStreamReader;
  ReadFullNetObjectReference(param_1->Serialization,&this->ArchetypeReference);
  uVar2 = FNetBitStreamReader::ReadBits(this_00,1);
  this->bUsePersistentLevel = (bool)((byte)uVar2 & 1);
  if ((uVar2 & 1) == 0) {
    ReadFullNetObjectReference(param_1->Serialization,&this->LevelReference);
  }
  ReadConditionallyQuantizedVector
            (this_00,&(this->SpawnInfo).Location,&(pUVar3->DefaultSpawnInfo).Location);
  ReadConditionallyQuantizedVector
            (this_00,&(this->SpawnInfo).Scale,&(pUVar3->DefaultSpawnInfo).Scale);
  ReadConditionallyQuantizedVector
            (this_00,&(this->SpawnInfo).Velocity,&(pUVar3->DefaultSpawnInfo).Velocity);
  ReadRotator(this_00,&(this->SpawnInfo).Rotation,&(pUVar3->DefaultSpawnInfo).Rotation);
  bVar1 = FBaseActorNetCreationHeader::Deserialize((FBaseActorNetCreationHeader *)this,param_1);
  return bVar1;
}

// IsDynamic @ 1480414d0

bool __thiscall
UE::Net::FDynamicActorNetCreationHeader::IsDynamic(FDynamicActorNetCreationHeader *this)

{
  return true;
}

// IsPreregistered @ 148041ba0

bool __thiscall
UE::Net::FDynamicActorNetCreationHeader::IsPreregistered(FDynamicActorNetCreationHeader *this)

{
  return false;
}

// Serialize @ 148056e30

bool __thiscall
UE::Net::FDynamicActorNetCreationHeader::Serialize
          (FDynamicActorNetCreationHeader *this,FCreationHeaderContext *param_1)

{
  EActorNetSpawnInfoFlags EVar1;
  FNetBitStreamWriter *this_00;
  bool bVar2;
  UNetActorFactory *pUVar3;
  
  pUVar3 = CastChecked<UNetActorFactory,UNetObjectFactory>(param_1->Factory);
  this_00 = param_1->Serialization->BitStreamWriter;
  WriteFullNetObjectReference(param_1->Serialization,&this->ArchetypeReference);
  bVar2 = this->bUsePersistentLevel;
  FNetBitStreamWriter::WriteBits(this_00,(uint)(bVar2 != false),1);
  if (bVar2 == false) {
    WriteFullNetObjectReference(param_1->Serialization,&this->LevelReference);
  }
  EVar1 = pUVar3->SpawnInfoFlags;
  WriteConditionallyQuantizedVector
            (this_00,&(this->SpawnInfo).Location,&(pUVar3->DefaultSpawnInfo).Location,
             (bool)((byte)(EVar1 >> 1) & 1));
  WriteConditionallyQuantizedVector
            (this_00,&(this->SpawnInfo).Scale,&(pUVar3->DefaultSpawnInfo).Scale,
             (bool)((byte)EVar1 & 1));
  WriteConditionallyQuantizedVector
            (this_00,&(this->SpawnInfo).Velocity,&(pUVar3->DefaultSpawnInfo).Velocity,
             (bool)((byte)(EVar1 >> 2) & 1));
  WriteRotator(this_00,&(this->SpawnInfo).Rotation,&(pUVar3->DefaultSpawnInfo).Rotation,
               __real_3a83126f);
  bVar2 = FBaseActorNetCreationHeader::Serialize((FBaseActorNetCreationHeader *)this,param_1);
  return bVar2;
}

// ToString @ 148067250

FString * __thiscall
UE::Net::FDynamicActorNetCreationHeader::ToString
          (FDynamicActorNetCreationHeader *this,FString *__return_storage_ptr__)

{
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FNetObjectReference::ToString(&this->LevelReference,&local_48);
  UE::Math::TVector<double>::ToCompactString(&(this->SpawnInfo).Velocity,&local_58);
  UE::Math::TVector<double>::ToCompactString(&(this->SpawnInfo).Scale,&local_68);
  UE::Math::TRotator<double>::ToCompactString(&(this->SpawnInfo).Rotation,&local_78);
  UE::Math::TVector<double>::ToCompactString(&(this->SpawnInfo).Location,&local_88);
  FNetObjectReference::ToString(&this->ArchetypeReference,&local_98);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"\n\tFDynamicActorNetCreationHeader (ProtocolId:0x%x):\n\tArchetypeReference=%s\n\tSpawnInfo.Location=%s\n\tSpawnInfo.Rotation=%s\n\tSpawnInfo.Scale=%s\n\tSpawnInfo.Velocity=%s\n\tbUsePersistentLevel=%s\n\tLevelReference=%s\n\tCustomCreationData=%u bits"
            );
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

