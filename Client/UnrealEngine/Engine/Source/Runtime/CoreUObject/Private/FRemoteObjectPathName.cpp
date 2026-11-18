// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FRemoteObjectPathName @ 1421b3110

FRemoteObjectPathName * __thiscall
FRemoteObjectPathName::FRemoteObjectPathName(FRemoteObjectPathName *this,UObject *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  AppendObjectToPathName(param_1,this);
  return this;
}

// FRemoteObjectPathName @ 1421b3150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FRemoteObjectPathName * __thiscall
FRemoteObjectPathName::FRemoteObjectPathName(FRemoteObjectPathName *this,FRemoteObjectId param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FRemoteObjectStub *pFVar8;
  long64 lVar9;
  FRemoteObjectPathName *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  
  puVar1 = &this->field_0xc;
  puVar2 = &this->field_0x1c;
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)puVar2 = 0;
  while( true ) {
    uVar12 = (ulonglong)param_1.field0_0x0 >> 0x36;
    uVar11 = (uint)((ulonglong)param_1.field0_0x0 >> 0x36);
    FRemoteServerId::VerifyComparableServerIds(uVar11,0);
    if (uVar11 == 0x3fd) {
      uVar12 = (ulonglong)FRemoteServerId::GlobalServerId.Id;
    }
    if ((uVar12 & 0x7ff) == 0 && ((ulonglong)param_1.field0_0x0 >> 1 & 0x1fffffffffffff) == 0) {
      return this;
    }
    pUVar7 = StaticFindObjectFastInternal(param_1,RF_NoFlags,Borrowed);
    if (pUVar7 != (UObject *)0x0) {
      AppendObjectToPathName(pUVar7,this);
      return this;
    }
    pFVar8 = UE::RemoteObject::Private::FRemoteObjectMaps::FindRemoteObjectStub
                       (UE::RemoteObject::Private::ObjectMaps,param_1);
    if (((pFVar8 == (FRemoteObjectStub *)0x0) ||
        (pFVar3 = &pFVar8->Name, pFVar8->Name == (FName)0x0)) ||
       (lVar9 = FRemoteObjectId::Compare(&pFVar8->OuterId,(FRemoteObjectId)0x0), lVar9 == 0)) break;
    if (((*(undefined1 **)this <= pFVar3) &&
        (pFVar3 < *(undefined1 **)this + (longlong)*(int *)puVar1 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FRemoteObjectPathName *)(*pcVar4)();
      return pFVar10;
    }
    iVar6 = *(int *)&this->field_0x8;
    if (iVar6 == *(int *)puVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)this,(int *)puVar1);
    }
    *(int *)&this->field_0x8 = iVar6 + 1;
    *(FName *)(*(longlong *)this + (longlong)iVar6 * 8) = *pFVar3;
    if (((*(FRemoteObjectStub **)&this->field_0x10 <= pFVar8) &&
        (pFVar8 < (FRemoteObjectStub *)
                  (&(*(FRemoteObjectStub **)&this->field_0x10)->Id + *(int *)puVar2))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FRemoteObjectPathName *)(*pcVar4)();
      return pFVar10;
    }
    iVar6 = *(int *)&this->field_0x18;
    if (iVar6 == *(int *)puVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&this->field_0x10,(int *)puVar2);
    }
    *(int *)&this->field_0x18 = iVar6 + 1;
    *(FRemoteObjectId_u_0 *)(*(longlong *)&this->field_0x10 + (longlong)iVar6 * 8) =
         (pFVar8->Id).field0_0x0;
    param_1.field0_0x0 =
         (FRemoteObjectId_u_0)*(FRemoteObjectId_u_0 *)&(pFVar8->OuterId).field0_0x0._s_0;
  }
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&this->field_0x18 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->field_0x10,0,(int *)puVar2);
  }
  return this;
}

// Resolve @ 1421e17b0

UObject * __thiscall FRemoteObjectPathName::Resolve(FRemoteObjectPathName *this)

{
  UObject *pUVar1;
  
  pUVar1 = UE::RemoteObject::Private::ResolveRemotePathName<FRemoteObjectPathName>
                     (this,(FRemoteObjectTables *)this);
  return pUVar1;
}

// ToString @ 1421e9fb0

FString * __thiscall
FRemoteObjectPathName::ToString
          (FRemoteObjectPathName *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMinPathSegmentIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectPathName.cpp"
                       ,0xc1,L"Minimum path segment index must be > 0 (got %d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  UE::RemoteObject::Private::RemotePathNameToString<FRemoteObjectPathName>
            (__return_storage_ptr__,this,(FRemoteObjectTables *)this,param_1);
  return __return_storage_ptr__;
}

