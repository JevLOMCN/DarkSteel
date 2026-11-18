// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// Resolve @ 1421e17a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
FPackedRemoteObjectPathName::Resolve(FPackedRemoteObjectPathName *this,FRemoteObjectTables *param_1)

{
  ushort uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  uint uVar9;
  
  pUVar6 = (UObject *)0x0;
  uVar9 = (this->Names).ArrayNum - 1;
  if ((int)uVar9 < 0) {
    return (UObject *)0x0;
  }
  lVar8 = (longlong)(int)uVar9 * 2;
  do {
    uVar5 = 0;
    if ((int)uVar9 < (this->Names).ArrayNum) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UObject *)(*pcVar3)();
      return pUVar6;
    }
    uVar1 = *(ushort *)((this->Names).AllocatorInstance.Data + lVar8);
    if (((param_1->Names).ArrayNum <= (int)(uint)uVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UObject *)(*pcVar3)();
      return pUVar6;
    }
    FVar2 = *(FName *)((param_1->Names).AllocatorInstance.Data + (ulonglong)uVar1 * 8);
    pUVar7 = Z_Construct_UClass_UObject_NoRegister();
    pUVar6 = StaticFindObjectFast(pUVar7,pUVar6,FVar2,None,RF_NoFlags,Borrowed);
    if (pUVar6 == (UObject *)0x0) {
      uVar5 = 0;
      if ((int)uVar9 < (this->RemoteIds).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UObject *)(*pcVar3)();
        return pUVar6;
      }
      uVar1 = *(ushort *)((this->RemoteIds).AllocatorInstance.Data + lVar8);
      if (((param_1->RemoteIds).ArrayNum <= (int)(uint)uVar1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UObject *)(*pcVar3)();
        return pUVar6;
      }
      if (((uint)((ulonglong)
                  *(undefined8 *)
                   ((param_1->RemoteIds).AllocatorInstance.Data + (ulonglong)uVar1 * 8) >> 0x36) ==
           0x3fe) &&
         (pUVar6 = UE::RemoteObject::Private::LoadRemotePathName<FPackedRemoteObjectPathName>
                             (this,param_1,uVar9), pUVar6 == (UObject *)0x0)) {
        return (UObject *)0x0;
      }
    }
    lVar8 = lVar8 + -2;
    uVar9 = uVar9 - 1;
    if ((int)uVar9 < 0) {
      return pUVar6;
    }
  } while( true );
}

// Serialize @ 1421e6a60

void __thiscall
FPackedRemoteObjectPathName::Serialize(FPackedRemoteObjectPathName *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&this->Names);
  TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>
            (param_1,&this->RemoteIds);
  return;
}

// ToString @ 1421e97f0

FString * __thiscall
FPackedRemoteObjectPathName::ToString
          (FPackedRemoteObjectPathName *this,FString *__return_storage_ptr__,
          FRemoteObjectTables *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMinPathSegmentIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectPathName.cpp"
                       ,0x82,L"Minimum path segment index must be > 0 (got %d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  UE::RemoteObject::Private::RemotePathNameToString<FPackedRemoteObjectPathName>
            (__return_storage_ptr__,this,param_1,param_2);
  return __return_storage_ptr__;
}

