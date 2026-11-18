// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FDataCachePropertyReader @ 1477ec3c0

FDataCachePropertyReader * __thiscall
FDataCachePropertyReader::FDataCachePropertyReader
          (FDataCachePropertyReader *this,FInstanceCacheDataBase *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FObjectReader__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&param_1->SavedProperties;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,0);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xbd;
  *(undefined8 *)&(this->PropertiesToSkip).Elements = 0;
  *(undefined8 *)&(this->PropertiesToSkip).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PropertiesToSkip).Elements.field_0x20 = 0;
  this->_padding_ = (longlong)&___7FDataCachePropertyReader__6B_;
  this->InstanceData = param_1;
  *(undefined4 *)&(this->PropertiesToSkip).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PropertiesToSkip).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertiesToSkip).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PropertiesToSkip).Elements.field_0x30 = 0xffffffff;
  (this->PropertiesToSkip).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PropertiesToSkip).HashSize = 0;
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar2 = *puVar2 | 0x20000000;
  return this;
}

// operator<< @ 1477f5620

FArchive * __thiscall
FDataCachePropertyReader::operator<<(FDataCachePropertyReader *this,UObject **param_1)

{
  longlong *plVar1;
  FInstanceCacheDataBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint uVar6;
  UObject *pUVar7;
  longlong lVar8;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  lVar8 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) ||
     (pFVar2 = this->InstanceData, (pFVar2->ReferencedObjects).ArrayNum <= (int)local_res8[0])) {
    pUVar7 = (UObject *)0x0;
  }
  else {
    uVar6 = 0;
    if ((int)local_res8[0] < (pFVar2->ReferencedObjects).ArrayNum) {
      uVar6 = ~local_res8[0] >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    pUVar7 = *(UObject **)((pFVar2->ReferencedObjects).AllocatorInstance.Data + lVar8 * 8);
  }
  *param_1 = pUVar7;
  return (FArchive *)this;
}

// operator<< @ 1477f5710

FArchive * __thiscall
FDataCachePropertyReader::operator<<(FDataCachePropertyReader *this,FLazyObjectPtr *param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] =
       TPersistentObjectPtr<FUniqueObjectGuid>::Get
                 ((TPersistentObjectPtr<FUniqueObjectGuid> *)param_1);
  (**(code **)(this->_padding_ + 0x168))(this,local_res8);
  return (FArchive *)this;
}

// operator<< @ 1477f5750

FArchive * __thiscall
FDataCachePropertyReader::operator<<(FDataCachePropertyReader *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FObjectPtr_u_0 FStackX_8;
  
  FStackX_8.Handle = (UObject *)0xfffffefbf1234567;
  if ((this->_padding_ & 1) == 0) {
    FStackX_8 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  }
  (**(code **)(this->_padding_ + 0x168))(this,&FStackX_8);
  FVar1 = FStackX_8;
  if ((((this->_padding_ & 1) != 0) || ((this->_padding_ & 0x2000000) != 0)) &&
     (FStackX_8.Handle != (UObject *)0xfffffefbf1234567)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FStackX_8.Handle != (UObject *)0x0)
       ) {
      UE::GC::MarkAsReachable(FStackX_8.Handle);
    }
    (param_1->field0_0x0).Handle = (UObject *)FVar1;
  }
  return (FArchive *)this;
}

// operator<< @ 1477f5760

FArchive * __thiscall
FDataCachePropertyReader::operator<<(FDataCachePropertyReader *this,FName *param_1)

{
  longlong *plVar1;
  FInstanceCacheDataBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint uVar6;
  FName FVar7;
  longlong lVar8;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  lVar8 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) ||
     (pFVar2 = this->InstanceData, (pFVar2->ReferencedNames).ArrayNum <= (int)local_res8[0])) {
    FVar7.ComparisonIndex.Value = 0;
    FVar7.Number = 0;
  }
  else {
    uVar6 = 0;
    if ((int)local_res8[0] < (pFVar2->ReferencedNames).ArrayNum) {
      uVar6 = ~local_res8[0] >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FVar7 = *(FName *)((pFVar2->ReferencedNames).AllocatorInstance.Data + lVar8 * 8);
  }
  *param_1 = FVar7;
  return (FArchive *)this;
}

// ShouldSkipProperty @ 14786f880

bool __thiscall
FDataCachePropertyReader::ShouldSkipProperty(FDataCachePropertyReader *this,FProperty *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->PropertiesToSkip).Elements.field_0x8 !=
      *(int *)&(this->PropertiesToSkip).Elements.field_0x34) {
    FVar3 = (this->PropertiesToSkip).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->PropertiesToSkip).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->PropertiesToSkip).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                    4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->PropertiesToSkip).Elements;
      do {
        if (*(FProperty **)(lVar1 + (longlong)iVar2 * 0x10) == param_1) goto LAB_14786f91a;
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14786f91a:
  return iVar2 != -1;
}

