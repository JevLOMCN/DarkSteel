// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FRemoteObjectStub @ 1421b3450

FRemoteObjectStub * __thiscall
UE::RemoteObject::Handle::FRemoteObjectStub::FRemoteObjectStub
          (FRemoteObjectStub *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRemoteObjectStub *pFVar4;
  FUObjectItem *pFVar5;
  FRemoteObjectPathName *pFVar6;
  UObject *pUVar7;
  
  pFVar5 = (FUObjectItem *)0x0;
  (this->Id).field0_0x0.Id = 0;
  (this->OuterId).field0_0x0.Id = 0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Class).PathNameOrClass = 0;
  this->SerialNumber = 0;
  this->ResidentServerId = 0;
  this->OwningServerId = 0;
  (this->PhysicsIslandId).PhysicsServerId = 0;
  (this->PhysicsIslandId).PhysicsLocalIslandId = 0;
  if (param_1 != (UObject *)0x0) {
    pUVar7 = *(UObject **)&param_1->field_0x10;
    if ((pUVar7 == (UObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InClass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                           ,0x1e7,L"FRemoteClassStub requires a valid class"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRemoteObjectStub *)(*pcVar2)();
      return pFVar4;
    }
    iVar1 = *(int *)&pUVar7->field_0xc;
    if ((iVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRemoteObjectStub *)(*pcVar2)();
      return pFVar4;
    }
    if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
      pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
    }
    if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
      pFVar6 = RemoteObject::Private::FRemoteObjectMaps::StoreAssetPath
                         (RemoteObject::Private::ObjectMaps,pUVar7);
      pUVar7 = (UObject *)((ulonglong)pFVar6 | 1);
    }
    (this->Class).PathNameOrClass = (ulong64)pUVar7;
    if (*(longlong *)&param_1->field_0x20 != 0) {
      (this->OuterId).field0_0x0.Id = 0;
      return this;
    }
  }
  return this;
}

