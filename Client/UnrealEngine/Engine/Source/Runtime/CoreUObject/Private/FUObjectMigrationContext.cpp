// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// GetObjectMigrationRecvType @ 14229da00

EObjectMigrationRecvType __thiscall
FUObjectMigrationContext::GetObjectMigrationRecvType
          (FUObjectMigrationContext *this,UObjectBase *param_1)

{
  FRemoteObjectId local_res18 [2];
  
  FRemoteObjectId::FRemoteObjectId(local_res18,param_1);
  return Invalid;
}

// GetObjectMigrationRecvType @ 14229da20

EObjectMigrationRecvType __thiscall
FUObjectMigrationContext::GetObjectMigrationRecvType
          (FUObjectMigrationContext *this,FRemoteObjectId param_1)

{
  return Invalid;
}

// GetObjectMigrationSendType @ 14229da30

EObjectMigrationSendType __thiscall
FUObjectMigrationContext::GetObjectMigrationSendType
          (FUObjectMigrationContext *this,UObjectBase *param_1)

{
  FRemoteObjectId local_res18 [2];
  
  FRemoteObjectId::FRemoteObjectId(local_res18,param_1);
  return Invalid;
}

// GetObjectMigrationSendType @ 14229da50

EObjectMigrationSendType __thiscall
FUObjectMigrationContext::GetObjectMigrationSendType
          (FUObjectMigrationContext *this,FRemoteObjectId param_1)

{
  return Invalid;
}

// IsValid @ 1422a0ed0

bool __thiscall FUObjectMigrationContext::IsValid(FUObjectMigrationContext *this)

{
  long64 lVar1;
  
  lVar1 = FRemoteObjectId::Compare(&this->ObjectId,(FRemoteObjectId)0x0);
  if (((lVar1 != 0) && ((this->RemoteServerId).Id != 0)) && ((this->OwnerServerId).Id != 0)) {
    return true;
  }
  return false;
}

