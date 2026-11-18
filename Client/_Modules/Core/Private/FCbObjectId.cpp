// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FCbObjectId @ 1419cd0e0

FCbObjectId * __thiscall
FCbObjectId::FCbObjectId(FCbObjectId *this,TMemoryView<void_const_> *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FCbObjectId *pFVar4;
  
  this->Bytes[0] = '\0';
  this->Bytes[1] = '\0';
  this->Bytes[2] = '\0';
  this->Bytes[3] = '\0';
  this->Bytes[4] = '\0';
  this->Bytes[5] = '\0';
  this->Bytes[6] = '\0';
  this->Bytes[7] = '\0';
  this->Bytes[8] = '\0';
  this->Bytes[9] = '\0';
  this->Bytes[10] = '\0';
  this->Bytes[0xb] = '\0';
  if (param_1->Size != 0xc) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectId.GetSize() == sizeof(Bytes)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinary.cpp"
                       ,0x4d,L"FCbObjectId cannot be constructed from a view of %llu bytes.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCbObjectId *)(*pcVar2)();
      return pFVar4;
    }
  }
  puVar1 = param_1->Data;
  *(undefined8 *)this->Bytes = *puVar1;
  *(undefined4 *)(this->Bytes + 8) = *(undefined4 *)(puVar1 + 1);
  return this;
}

// NewObjectId @ 141a0f3e0

FCbObjectId * __cdecl FCbObjectId::NewObjectId(FCbObjectId *__return_storage_ptr__)

{
  atomic<unsigned_int> aVar1;
  FDateTime FVar2;
  FDateTime *pFVar3;
  FXxHash64 FVar4;
  longlong lVar5;
  atomic<unsigned_int> aVar6;
  bool bVar7;
  FDateTime local_res10;
  FGuid local_28;
  
  __return_storage_ptr__->Bytes[0] = '\0';
  __return_storage_ptr__->Bytes[1] = '\0';
  __return_storage_ptr__->Bytes[2] = '\0';
  __return_storage_ptr__->Bytes[3] = '\0';
  __return_storage_ptr__->Bytes[4] = '\0';
  __return_storage_ptr__->Bytes[5] = '\0';
  __return_storage_ptr__->Bytes[6] = '\0';
  __return_storage_ptr__->Bytes[7] = '\0';
  __return_storage_ptr__->Bytes[8] = '\0';
  __return_storage_ptr__->Bytes[9] = '\0';
  __return_storage_ptr__->Bytes[10] = '\0';
  __return_storage_ptr__->Bytes[0xb] = '\0';
  FVar2 = FDateTime::Now();
  pFVar3 = FDateTime::FDateTime(&local_res10,0x7b2,1,1,0,0,0,0);
  aVar6 = UE::CompactBinary::Private::GObjectIdRunId;
  lVar5 = *(longlong *)FVar2.Ticks - pFVar3->Ticks;
  lVar5 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar5),8) + lVar5;
  if (UE::CompactBinary::Private::GObjectIdRunId == (atomic<unsigned_int>)0x0) {
    FGuid::NewGuid(&local_28);
    FVar4 = FXxHash64::HashBuffer(&local_28,0x10);
    LOCK();
    if (UE::CompactBinary::Private::GObjectIdSerial == (atomic<unsigned_int>)0x0) {
      UE::CompactBinary::Private::GObjectIdSerial = SUB84(FVar4.Hash,0);
    }
    UNLOCK();
    LOCK();
    bVar7 = UE::CompactBinary::Private::GObjectIdRunId == (atomic<unsigned_int>)0x0;
    aVar1 = UE::CompactBinary::Private::GObjectIdRunId;
    if (bVar7) {
      UE::CompactBinary::Private::GObjectIdRunId = SUB84(FVar4.Hash >> 0x20,0);
      aVar1 = (atomic<unsigned_int>)0x0;
    }
    UNLOCK();
    if (!bVar7) {
      aVar6 = aVar1;
    }
  }
  *(int *)__return_storage_ptr__->Bytes =
       (-0x5fee6600 - (int)(lVar5 >> 0x3f)) + (int)(lVar5 >> 0x17);
  aVar1 = UE::CompactBinary::Private::GObjectIdSerial;
  LOCK();
  UE::CompactBinary::Private::GObjectIdSerial =
       (atomic<unsigned_int>)((int)UE::CompactBinary::Private::GObjectIdSerial + 1);
  UNLOCK();
  *(atomic<unsigned_int> *)(__return_storage_ptr__->Bytes + 8) = aVar6;
  *(atomic<unsigned_int> *)(__return_storage_ptr__->Bytes + 4) = aVar1;
  return __return_storage_ptr__;
}

