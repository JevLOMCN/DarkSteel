// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 8

// DereferenceIfNecessary<FCookOnTheFlyServerConnection,FCookOnTheFlyServerConnection_*_&> @ 14311a860

FCookOnTheFlyServerConnection * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FCookOnTheFlyServerConnection,FCookOnTheFlyServerConnection_*_&>
          (FCookOnTheFlyServerConnection **param_1)

{
  return *param_1;
}

// operator<< @ 14311c260

FArchive * __cdecl UE::Cook::operator<<(FArchive *param_1,FCookOnTheFlyMessageHeader *param_2)

{
  uint *puVar1;
  long64 *plVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  uint *puVar5;
  long64 *plVar6;
  ECookOnTheFlyMessage local_res8 [2];
  ECookOnTheFlyMessageStatus local_res10 [2];
  
  local_res8[0] = param_2->MessageType;
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = param_2->MessageStatus;
  if ((ECookOnTheFlyMessage *)plVar4[1] < (ECookOnTheFlyMessage *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(ECookOnTheFlyMessage *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  puVar3 = &param_1->field_0x2a;
  if ((ECookOnTheFlyMessageStatus *)plVar4[1] < (ECookOnTheFlyMessageStatus *)*plVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(ECookOnTheFlyMessageStatus *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  puVar1 = &param_2->CorrelationId;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar2 = &param_2->Timestamp;
  plVar6 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar2);
    }
  }
  else {
    *plVar2 = *plVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    param_2->MessageType = local_res8[0];
    param_2->MessageStatus = local_res10[0];
  }
  return param_1;
}

// operator<< @ 14311c3c0

FArchive * __cdecl UE::Cook::operator<<(FArchive *param_1,FCookOnTheFlyMessage *param_2)

{
  operator<<(param_1,&param_2->Header);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&param_2->Body);
  return param_1;
}

// operator<< @ 14311c400

FArchive * __cdecl
UE::ZenCookOnTheFly::Messaging::operator<<(FArchive *param_1,FCompletedPackages *param_2)

{
  TArrayPrivateFriend::Serialize<FPackageStoreEntryResource,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->CookedPackages);
  TArrayPrivateFriend::Serialize<FPackageId,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->FailedPackages);
  return param_1;
}

// operator<< @ 14311c440

FArchive * __cdecl
UE::ZenCookOnTheFly::Messaging::operator<<(FArchive *param_1,FCookPackageRequest *param_2)

{
  TArrayPrivateFriend::Serialize<FPackageId,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->PackageIds);
  return param_1;
}

// operator<< @ 14311c460

FArchive * __cdecl
UE::ZenCookOnTheFly::Messaging::operator<<(FArchive *param_1,FGetAllOnDiskPackagesRequest *param_2)

{
  TArrayPrivateFriend::Serialize<FPackageId,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->PackageIds);
  return param_1;
}

// operator<< @ 14311c480

FArchive * __cdecl
UE::ZenCookOnTheFly::Messaging::operator<<(FArchive *param_1,FRecookPackagesRequest *param_2)

{
  TArrayPrivateFriend::Serialize<FPackageId,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->PackageIds);
  return param_1;
}

// operator<< @ 14311c4a0

FArchive * __cdecl
UE::ZenCookOnTheFly::Messaging::operator<<(FArchive *param_1,FRecookPackagesResponse *param_2)

{
  return param_1;
}

