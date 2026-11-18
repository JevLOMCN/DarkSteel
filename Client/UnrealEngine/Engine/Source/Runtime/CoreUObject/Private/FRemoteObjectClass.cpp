// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FRemoteObjectClass @ 1421b2d70

FRemoteObjectClass * __thiscall
UE::RemoteObject::Handle::FRemoteObjectClass::FRemoteObjectClass
          (FRemoteObjectClass *this,UClass *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRemoteObjectClass *pFVar4;
  FUObjectItem *pFVar5;
  FRemoteObjectPathName *pFVar6;
  
  pFVar5 = (FUObjectItem *)0x0;
  this->PathNameOrClass = 0;
  if (param_1 == (UClass *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                       ,0x1e7,L"FRemoteClassStub requires a valid class");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRemoteObjectClass *)(*pcVar2)();
      return pFVar4;
    }
  }
  iVar1 = *(int *)((longlong)&param_1->_padding_ + 4);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRemoteObjectClass *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
  }
  if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
    pFVar6 = RemoteObject::Private::FRemoteObjectMaps::StoreAssetPath
                       (RemoteObject::Private::ObjectMaps,(UObject *)param_1);
    this->PathNameOrClass = (ulonglong)pFVar6 | 1;
  }
  else {
    this->PathNameOrClass = (ulong64)param_1;
  }
  return this;
}

// GetClass @ 1421cf4d0

UClass * __thiscall UE::RemoteObject::Handle::FRemoteObjectClass::GetClass(FRemoteObjectClass *this)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UClass *)this->PathNameOrClass;
  if ((~(byte)pUVar2 & 1) != 0) {
    return pUVar2;
  }
  pUVar2 = (UClass *)
           RemoteObject::Private::ResolveRemotePathName<FRemoteObjectPathName>
                     ((FRemoteObjectPathName *)((ulonglong)pUVar2 & 0xfffffffffffffffe),
                      (FRemoteObjectTables *)((ulonglong)pUVar2 & 0xfffffffffffffffe));
  if (pUVar2 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UClass *)0x0;
}

