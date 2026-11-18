// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// TArchiveRemoteObjectBase<FMemoryReader> @ 1421b1440

TArchiveRemoteObjectBase<FMemoryReader> * __thiscall
UE::RemoteObject::Serialization::TArchiveRemoteObjectBase<FMemoryReader>::
TArchiveRemoteObjectBase<FMemoryReader>
          (TArchiveRemoteObjectBase<FMemoryReader> *this,FRemoteObjectData *param_1,
          FUObjectMigrationContext *param_2,wchar_t *param_3)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FRemoteObjectData *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TArchiveRemoteObjectBase<FMemoryReader> *pTVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  
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
  this->_padding_ = (longlong)&___7FMemoryReader__6B_;
  pTVar2 = &this->SerializedBytes;
  this->_padding_ = 0;
  this->_padding_ = 0x7fffffffffffffff;
  this->_padding_ = (longlong)pTVar2;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,0);
  this->ObjectData = param_1;
  this->_padding_ =
       (longlong)&___7__TArchiveRemoteObjectBase_VFMemoryReader___Serialization_RemoteObject_UE__6B_
  ;
  piVar1 = &(this->SerializedBytes).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SerializedBytes).ArrayNum = 0;
  *piVar1 = 0;
  this->RootObject = (UObject *)0x0;
  this->MigrationContext = param_2;
  ::FString::FString(&this->ArchiveName,param_3);
  FArchiveState::SetIsPersistent((FArchiveState *)this,false);
  FArchiveState::SetUseUnversionedPropertySerialization((FArchiveState *)this,true);
  lVar7 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x100000;
  if ((lVar7 & 1) != 0) {
    uVar9 = FRemoteObjectData::GetNumBytes(param_1);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if (*piVar1 < (int)uVar9) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar9,&pTVar2->AllocatorInstance,(this->SerializedBytes).ArrayNum,piVar1);
    }
    pFVar5 = this->ObjectData;
    iVar3 = (pFVar5->Bytes).ArrayNum;
    pFVar12 = (pFVar5->Bytes).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)iVar3 * 0x10;
    while( true ) {
      if ((pFVar5->Bytes).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FRemoteObjectBytes,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar12 == pFVar13) break;
      if ((pTVar2 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)pFVar12) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArchiveRemoteObjectBase<FMemoryReader> *)(*pcVar6)();
        return pTVar11;
      }
      iVar4 = *(int *)&pFVar12[8].field_0x0;
      if (iVar4 != 0) {
        iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar4,&pTVar2->AllocatorInstance,&(this->SerializedBytes).ArrayNum,
                            piVar1);
        memcpy((pTVar2->AllocatorInstance).Data + iVar10,*(void **)&pFVar12->field_0x0,
               (longlong)iVar4);
      }
      pFVar12 = pFVar12 + 0x10;
    }
  }
  return this;
}

// TArchiveRemoteObjectBase<FMemoryWriter> @ 1421b1650

TArchiveRemoteObjectBase<FMemoryWriter> * __thiscall
UE::RemoteObject::Serialization::TArchiveRemoteObjectBase<FMemoryWriter>::
TArchiveRemoteObjectBase<FMemoryWriter>
          (TArchiveRemoteObjectBase<FMemoryWriter> *this,FRemoteObjectData *param_1,
          FUObjectMigrationContext *param_2,wchar_t *param_3)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FRemoteObjectData *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TArchiveRemoteObjectBase<FMemoryWriter> *pTVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  
  pTVar2 = &this->SerializedBytes;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  local_res18 = 0;
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
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  this->_padding_ = (longlong)pTVar2;
  this->_padding_ = 0;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,0);
  this->ObjectData = param_1;
  this->_padding_ =
       (longlong)&___7__TArchiveRemoteObjectBase_VFMemoryWriter___Serialization_RemoteObject_UE__6B_
  ;
  piVar1 = &(this->SerializedBytes).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SerializedBytes).ArrayNum = 0;
  *piVar1 = 0;
  this->RootObject = (UObject *)0x0;
  this->MigrationContext = param_2;
  ::FString::FString(&this->ArchiveName,param_3);
  FArchiveState::SetIsPersistent((FArchiveState *)this,false);
  FArchiveState::SetUseUnversionedPropertySerialization((FArchiveState *)this,true);
  lVar7 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x100000;
  if ((lVar7 & 1) != 0) {
    uVar9 = FRemoteObjectData::GetNumBytes(param_1);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if (*piVar1 < (int)uVar9) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar9,&pTVar2->AllocatorInstance,(this->SerializedBytes).ArrayNum,piVar1);
    }
    pFVar5 = this->ObjectData;
    iVar3 = (pFVar5->Bytes).ArrayNum;
    pFVar12 = (pFVar5->Bytes).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)iVar3 * 0x10;
    while( true ) {
      if ((pFVar5->Bytes).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FRemoteObjectBytes,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar12 == pFVar13) break;
      if ((pTVar2 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)pFVar12) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArchiveRemoteObjectBase<FMemoryWriter> *)(*pcVar6)();
        return pTVar11;
      }
      iVar4 = *(int *)&pFVar12[8].field_0x0;
      if (iVar4 != 0) {
        iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar4,&pTVar2->AllocatorInstance,&(this->SerializedBytes).ArrayNum,
                            piVar1);
        memcpy((pTVar2->AllocatorInstance).Data + iVar10,*(void **)&pFVar12->field_0x0,
               (longlong)iVar4);
      }
      pFVar12 = pFVar12 + 0x10;
    }
  }
  return this;
}

// ~TArchiveRemoteObjectBase<FMemoryReader> @ 1421b4850

void __thiscall
UE::RemoteObject::Serialization::TArchiveRemoteObjectBase<FMemoryReader>::
~TArchiveRemoteObjectBase<FMemoryReader>(TArchiveRemoteObjectBase<FMemoryReader> *this)

{
  int *piVar1;
  FRemoteObjectData *pFVar2;
  int iVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  size_t _Size;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  uint local_res10;
  
  pFVar2 = this->ObjectData;
  iVar8 = 0;
  this->_padding_ =
       (longlong)&___7__TArchiveRemoteObjectBase_VFMemoryReader___Serialization_RemoteObject_UE__6B_
  ;
  iVar6 = (pFVar2->Bytes).ArrayNum;
  pFVar5 = (pFVar2->Bytes).AllocatorInstance.Data;
  pFVar7 = pFVar5 + (longlong)iVar6 * 0x10;
  while( true ) {
    if ((pFVar2->Bytes).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FRemoteObjectBytes_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar7) break;
    iVar8 = iVar8 + *(int *)(pFVar5 + 8);
    pFVar5 = pFVar5 + 0x10;
  }
  if (iVar8 < (this->SerializedBytes).ArrayNum) {
    pFVar2 = this->ObjectData;
    DestructItems<FRemoteObjectBytes,int>
              ((FRemoteObjectBytes *)(pFVar2->Bytes).AllocatorInstance.Data,(pFVar2->Bytes).ArrayNum
              );
    piVar1 = &(pFVar2->Bytes).ArrayMax;
    (pFVar2->Bytes).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pFVar2->Bytes).AllocatorInstance,0,piVar1);
    }
    iVar6 = (this->SerializedBytes).ArrayNum;
    pFVar5 = (this->SerializedBytes).AllocatorInstance.Data;
    TArray<FRemoteObjectBytes,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&this->ObjectData->Bytes,(iVar6 + 0xfffd) / 0xfffe);
    pFVar2 = this->ObjectData;
    local_res10 = (pFVar2->Bytes).ArrayNum;
    uVar4 = (ulonglong)(int)local_res10;
    pFVar7 = (pFVar2->Bytes).AllocatorInstance.Data;
    pFVar9 = pFVar7 + uVar4 * 0x10;
    while( true ) {
      if ((pFVar2->Bytes).ArrayNum != (int)uVar4) {
        `TCheckedPointerIterator<FRemoteObjectBytes,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar9) break;
      iVar8 = 0xfffe;
      if (iVar6 < 0xfffe) {
        iVar8 = iVar6;
      }
      if (0 < iVar8) {
        iVar3 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar8,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 8),
                           (int *)(pFVar7 + 0xc));
        _Size = (size_t)iVar8;
        memset((void *)(*(longlong *)&pFVar7->field_0x0 + (longlong)iVar3),0,_Size);
        memcpy(*(void **)&pFVar7->field_0x0,pFVar5,_Size);
        pFVar5 = pFVar5 + _Size;
        iVar6 = iVar6 - iVar8;
      }
      uVar4 = (ulonglong)local_res10;
      pFVar7 = pFVar7 + 0x10;
    }
  }
  pFVar5 = (this->ArchiveName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SerializedBytes).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// ~TArchiveRemoteObjectBase<FMemoryWriter> @ 1421b4a40

void __thiscall
UE::RemoteObject::Serialization::TArchiveRemoteObjectBase<FMemoryWriter>::
~TArchiveRemoteObjectBase<FMemoryWriter>(TArchiveRemoteObjectBase<FMemoryWriter> *this)

{
  int *piVar1;
  FRemoteObjectData *pFVar2;
  int iVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  size_t _Size;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  uint local_res10;
  
  pFVar2 = this->ObjectData;
  iVar8 = 0;
  this->_padding_ =
       (longlong)&___7__TArchiveRemoteObjectBase_VFMemoryWriter___Serialization_RemoteObject_UE__6B_
  ;
  iVar6 = (pFVar2->Bytes).ArrayNum;
  pFVar5 = (pFVar2->Bytes).AllocatorInstance.Data;
  pFVar7 = pFVar5 + (longlong)iVar6 * 0x10;
  while( true ) {
    if ((pFVar2->Bytes).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FRemoteObjectBytes_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar7) break;
    iVar8 = iVar8 + *(int *)(pFVar5 + 8);
    pFVar5 = pFVar5 + 0x10;
  }
  if (iVar8 < (this->SerializedBytes).ArrayNum) {
    pFVar2 = this->ObjectData;
    DestructItems<FRemoteObjectBytes,int>
              ((FRemoteObjectBytes *)(pFVar2->Bytes).AllocatorInstance.Data,(pFVar2->Bytes).ArrayNum
              );
    piVar1 = &(pFVar2->Bytes).ArrayMax;
    (pFVar2->Bytes).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pFVar2->Bytes).AllocatorInstance,0,piVar1);
    }
    iVar6 = (this->SerializedBytes).ArrayNum;
    pFVar5 = (this->SerializedBytes).AllocatorInstance.Data;
    TArray<FRemoteObjectBytes,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&this->ObjectData->Bytes,(iVar6 + 0xfffd) / 0xfffe);
    pFVar2 = this->ObjectData;
    local_res10 = (pFVar2->Bytes).ArrayNum;
    uVar4 = (ulonglong)(int)local_res10;
    pFVar7 = (pFVar2->Bytes).AllocatorInstance.Data;
    pFVar9 = pFVar7 + uVar4 * 0x10;
    while( true ) {
      if ((pFVar2->Bytes).ArrayNum != (int)uVar4) {
        `TCheckedPointerIterator<FRemoteObjectBytes,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar9) break;
      iVar8 = 0xfffe;
      if (iVar6 < 0xfffe) {
        iVar8 = iVar6;
      }
      if (0 < iVar8) {
        iVar3 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar8,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 8),
                           (int *)(pFVar7 + 0xc));
        _Size = (size_t)iVar8;
        memset((void *)(*(longlong *)&pFVar7->field_0x0 + (longlong)iVar3),0,_Size);
        memcpy(*(void **)&pFVar7->field_0x0,pFVar5,_Size);
        pFVar5 = pFVar5 + _Size;
        iVar6 = iVar6 - iVar8;
      }
      uVar4 = (ulonglong)local_res10;
      pFVar7 = pFVar7 + 0x10;
    }
  }
  pFVar5 = (this->ArchiveName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SerializedBytes).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// GetArchiveName @ 1421cefe0

FString * __thiscall
UE::RemoteObject::Serialization::TArchiveRemoteObjectBase<FMemoryReader>::GetArchiveName
          (TArchiveRemoteObjectBase<FMemoryReader> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->ArchiveName);
  return __return_storage_ptr__;
}

// GetArchiveName @ 1421cf010

FString * __thiscall
UE::RemoteObject::Serialization::TArchiveRemoteObjectBase<FMemoryWriter>::GetArchiveName
          (TArchiveRemoteObjectBase<FMemoryWriter> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->ArchiveName);
  return __return_storage_ptr__;
}

// GetMigrationContext @ 1421cfcf0

FUObjectMigrationContext * __thiscall
UE::RemoteObject::Serialization::TArchiveRemoteObjectBase<FMemoryReader>::GetMigrationContext
          (TArchiveRemoteObjectBase<FMemoryReader> *this)

{
  return this->MigrationContext;
}

// GetMigrationContext @ 1421cfd00

FUObjectMigrationContext * __thiscall
UE::RemoteObject::Serialization::TArchiveRemoteObjectBase<FMemoryWriter>::GetMigrationContext
          (TArchiveRemoteObjectBase<FMemoryWriter> *this)

{
  return this->MigrationContext;
}

