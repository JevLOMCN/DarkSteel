// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 16

// AddEvent<TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyAttributesChanged>,TSizedDefaultAllocator<32>_>,UE::Online::FLobbyAttributesChanged> @ 14efd5570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FLobbyEventCapture::
AddEvent<TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyAttributesChanged>,TSizedDefaultAllocator<32>_>,UE::Online::FLobbyAttributesChanged>
          (FLobbyEventCapture *this,
          TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyAttributesChanged>,TSizedDefaultAllocator<32>_>
          *param_1,FLobbyAttributesChanged *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStackY_198 [32];
  FLobby *local_148;
  TReferenceControllerBase<1> *local_140;
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
  local_e8;
  void *local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_148 = (param_2->Lobby).Object;
  local_140 = (param_2->Lobby).SharedReferenceCount.ReferenceController;
  if (local_140 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_140->SharedReferenceCount = (atomic<int>)((int)local_140->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10c = 0x80;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_104 = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  local_108 = 0xffffffff;
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
               *)local_138,
              (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
               *)&param_2->AddedAttributes);
  TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>
  ::
  TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>
            ((TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>
              *)&local_e8,&param_2->ChangedAttributes);
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_88.MaxBits = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&local_98,
             &param_2->RemovedAttributes);
  local_48 = this->NextIndex;
  this->NextIndex = local_48 + 1;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_148) &&
     ((FScriptContainerElement *)&local_148 < pFVar5 + (longlong)param_1->ArrayMax * 0x108)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x108,8,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x108;
  *(FLobby **)pFVar5 = local_148;
  *(TReferenceControllerBase<1> **)(pFVar5 + 8) = local_140;
  if (local_140 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_140->SharedReferenceCount = (atomic<int>)((int)local_140->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)(pFVar5 + 0x10),
             (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)local_138);
  TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
              *)(pFVar5 + 0x60),&local_e8);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar5 + 0xb0),
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&local_98);
  *(int *)(pFVar5 + 0x100) = local_48;
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  uVar2 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_88.NumBits = 0;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  local_f0 = 0;
  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_138,0,local_138._8_4_);
  iVar4 = SUB84(local_138._8_8_,4);
  local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
  }
  local_108 = 0xffffffff;
  local_104 = 0;
  local_110 = 0;
  if (0x80 < local_10c) {
    local_10c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
  this->TotalNotificationsReceived = this->TotalNotificationsReceived + 1;
  return;
}

// AddEvent<TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberAttributesChanged>,TSizedDefaultAllocator<32>_>,UE::Online::FLobbyMemberAttributesChanged> @ 14efd58b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FLobbyEventCapture::
AddEvent<TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberAttributesChanged>,TSizedDefaultAllocator<32>_>,UE::Online::FLobbyMemberAttributesChanged>
          (FLobbyEventCapture *this,
          TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberAttributesChanged>,TSizedDefaultAllocator<32>_>
          *param_1,FLobbyMemberAttributesChanged *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_1a8 [32];
  FLobby *local_158;
  TReferenceControllerBase<1> *local_150;
  FLobbyMember *local_148;
  TReferenceControllerBase<1> *local_140;
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
  local_e8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_158 = (param_2->Lobby).Object;
  local_150 = (param_2->Lobby).SharedReferenceCount.ReferenceController;
  if (local_150 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_148 = (param_2->Member).Object;
  local_140 = (param_2->Member).SharedReferenceCount.ReferenceController;
  if (local_140 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_140->SharedReferenceCount = (atomic<int>)((int)local_140->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10c = 0x80;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_104 = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  local_108 = 0xffffffff;
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
               *)local_138,
              (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
               *)&param_2->AddedAttributes);
  TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>
  ::
  TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>
            ((TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>
              *)&local_e8,&param_2->ChangedAttributes);
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
             &param_2->RemovedAttributes);
  local_48 = this->NextIndex;
  this->NextIndex = local_48 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_158) &&
     ((FScriptContainerElement *)&local_158 < pFVar4 + (longlong)param_1->ArrayMax * 0x118)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x118,8,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x118;
  param_1->ArrayNum = iVar3 + 1;
  *(FLobby **)pFVar4 = local_158;
  *(TReferenceControllerBase<1> **)(pFVar4 + 8) = local_150;
  if (local_150 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FLobbyMember **)(pFVar4 + 0x10) = local_148;
  *(TReferenceControllerBase<1> **)(pFVar4 + 0x18) = local_140;
  if (local_140 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_140->SharedReferenceCount = (atomic<int>)((int)local_140->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)(pFVar4 + 0x20),
             (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)local_138);
  TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
              *)(pFVar4 + 0x70),&local_e8);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar4 + 0xc0),
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98);
  *(int *)(pFVar4 + 0x110) = local_48;
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar3 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  local_f0 = 0;
  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_138,0,local_138._8_4_);
  iVar3 = SUB84(local_138._8_8_,4);
  local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
  }
  local_108 = 0xffffffff;
  local_104 = 0;
  local_110 = 0;
  if (0x80 < local_10c) {
    local_10c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
  this->TotalNotificationsReceived = this->TotalNotificationsReceived + 1;
  return;
}

// AddEvent<TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberLeft>,TSizedDefaultAllocator<32>_>,UE::Online::FLobbyMemberLeft> @ 14efd5c30

void __thiscall
UE::Online::FLobbyEventCapture::
AddEvent<TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberLeft>,TSizedDefaultAllocator<32>_>,UE::Online::FLobbyMemberLeft>
          (FLobbyEventCapture *this,
          TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberLeft>,TSizedDefaultAllocator<32>_>
          *param_1,FLobbyMemberLeft *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FLobby *local_38;
  TReferenceControllerBase<1> *local_30;
  FLobbyMember *local_28;
  TReferenceControllerBase<1> *local_20;
  ELobbyMemberLeaveReason local_18;
  int local_10;
  
  local_38 = (param_2->Lobby).Object;
  local_30 = (param_2->Lobby).SharedReferenceCount.ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = (param_2->Member).Object;
  local_20 = (param_2->Member).SharedReferenceCount.ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = param_2->Reason;
  local_10 = this->NextIndex;
  this->NextIndex = local_10 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)param_1->ArrayMax * 0x30)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x30;
  *(FLobby **)pFVar4 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar4 + 8) = local_30;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FLobbyMember **)(pFVar4 + 0x10) = local_28;
  *(TReferenceControllerBase<1> **)(pFVar4 + 0x18) = local_20;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(ELobbyMemberLeaveReason *)(pFVar4 + 0x20) = local_18;
  *(int *)(pFVar4 + 0x28) = local_10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  this->TotalNotificationsReceived = this->TotalNotificationsReceived + 1;
  return;
}

// FLobbyEventCapture @ 14efe3760

FLobbyEventCapture * __thiscall
UE::Online::FLobbyEventCapture::FLobbyEventCapture(FLobbyEventCapture *this,FLobbyEvents *param_1)

{
  pmf_08a7bb5b local_res8;
  FLobbyEventCapture *local_res10;
  
  (this->LobbyJoined).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LobbyJoined).ArrayNum = 0;
  (this->LobbyJoined).ArrayMax = 0;
  (this->LobbyLeft).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LobbyLeft).ArrayNum = 0;
  (this->LobbyLeft).ArrayMax = 0;
  (this->LobbyMemberJoined).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LobbyMemberJoined).ArrayNum = 0;
  (this->LobbyMemberJoined).ArrayMax = 0;
  (this->LobbyMemberLeft).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LobbyMemberLeft).ArrayNum = 0;
  (this->LobbyMemberLeft).ArrayMax = 0;
  (this->LobbyLeaderChanged).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LobbyLeaderChanged).ArrayNum = 0;
  (this->LobbyLeaderChanged).ArrayMax = 0;
  (this->LobbySchemaChanged).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LobbySchemaChanged).ArrayNum = 0;
  (this->LobbySchemaChanged).ArrayMax = 0;
  (this->LobbyAttributesChanged).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LobbyAttributesChanged).ArrayNum = 0;
  (this->LobbyAttributesChanged).ArrayMax = 0;
  (this->LobbyMemberAttributesChanged).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LobbyMemberAttributesChanged).ArrayNum = 0;
  (this->LobbyMemberAttributesChanged).ArrayMax = 0;
  (this->LobbyInvitationAdded).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LobbyInvitationAdded).ArrayNum = 0;
  (this->LobbyInvitationAdded).ArrayMax = 0;
  (this->LobbyInvitationRemoved).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LobbyInvitationRemoved).ArrayNum = 0;
  (this->LobbyInvitationRemoved).ArrayMax = 0;
  local_res8 = (pmf_08a7bb5b)OnLobbyJoined;
  local_res10 = this;
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyJoined_const_&)>::
  Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyJoined_const_&)>
            (&param_1->OnLobbyJoined,&this->LobbyJoinedHandle,&local_res10,&local_res8);
  local_res8 = (pmf_08a7bb5b)OnLobbyLeft;
  local_res10 = this;
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeft_const_&)>::
  Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyLeft_const_&)>
            (&param_1->OnLobbyLeft,&this->LobbyLeftHandle,&local_res10,(pmf_2782191d *)&local_res8);
  local_res8 = (pmf_08a7bb5b)OnLobbyMemberJoined;
  local_res10 = this;
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>::
  Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyMemberJoined_const_&)>
            (&param_1->OnLobbyMemberJoined,&this->LobbyMemberJoinedHandle,&local_res10,
             (pmf_6288ea21 *)&local_res8);
  local_res8 = (pmf_08a7bb5b)OnLobbyMemberLeft;
  local_res10 = this;
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>::
  Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyMemberLeft_const_&)>
            (&param_1->OnLobbyMemberLeft,&this->LobbyMemberLeftHandle,&local_res10,
             (pmf_4b4c4163 *)&local_res8);
  local_res8 = (pmf_08a7bb5b)OnLobbyLeaderChanged;
  local_res10 = this;
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>::
  Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyLeaderChanged_const_&)>
            (&param_1->OnLobbyLeaderChanged,&this->LobbyLeaderChangedHandle,&local_res10,
             (pmf_34ec1e17 *)&local_res8);
  local_res8 = (pmf_08a7bb5b)OnLobbySchemaChanged;
  local_res10 = this;
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>::
  Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbySchemaChanged_const_&)>
            (&param_1->OnLobbySchemaChanged,&this->LobbySchemaChangedHandle,&local_res10,
             (pmf_52f6d4af *)&local_res8);
  local_res8 = (pmf_08a7bb5b)OnLobbyAttributesChanged;
  local_res10 = this;
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>::
  Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyAttributesChanged_const_&)>
            (&param_1->OnLobbyAttributesChanged,&this->LobbyAttributesChangedHandle,&local_res10,
             (pmf_24084665 *)&local_res8);
  local_res8 = (pmf_08a7bb5b)OnLobbyMemberAttributesChanged;
  local_res10 = this;
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>::
  Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyMemberAttributesChanged_const_&)>
            (&param_1->OnLobbyMemberAttributesChanged,&this->LobbyMemberAttributesChangedHandle,
             &local_res10,(pmf_62a43fdf *)&local_res8);
  local_res8 = (pmf_08a7bb5b)OnLobbyInvitationAdded;
  local_res10 = this;
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>::
  Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyInvitationAdded_const_&)>
            (&param_1->OnLobbyInvitationAdded,&this->LobbyInvitationAddedHandle,&local_res10,
             (pmf_e709175b *)&local_res8);
  local_res8 = (pmf_08a7bb5b)OnLobbyInvitationRemoved;
  local_res10 = this;
  TOnlineEventCallable<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)>::
  Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyInvitationRemoved_const_&)>
            (&param_1->OnLobbyInvitationRemoved,&this->LobbyInvitationRemovedHandle,&local_res10,
             (pmf_468d55fb *)&local_res8);
  this->NextIndex = 0;
  this->TotalNotificationsReceived = 0;
  return this;
}

// ~FLobbyEventCapture @ 14efe6650

void __thiscall UE::Online::FLobbyEventCapture::~FLobbyEventCapture(FLobbyEventCapture *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  FOnlineEventDelegateHandle::Unbind(&this->LobbyInvitationRemovedHandle);
  if (*(longlong *)&(this->LobbyInvitationRemovedHandle).DelegateUnbinder != 0) {
    plVar1 = *(longlong **)&(this->LobbyInvitationRemovedHandle).DelegateUnbinder.field_0x28;
    plVar3 = (longlong *)&(this->LobbyInvitationRemovedHandle).DelegateUnbinder.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FOnlineEventDelegateHandle::Unbind(&this->LobbyInvitationAddedHandle);
  if (*(longlong *)&(this->LobbyInvitationAddedHandle).DelegateUnbinder != 0) {
    plVar1 = *(longlong **)&(this->LobbyInvitationAddedHandle).DelegateUnbinder.field_0x28;
    plVar3 = (longlong *)&(this->LobbyInvitationAddedHandle).DelegateUnbinder.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FOnlineEventDelegateHandle::Unbind(&this->LobbyMemberAttributesChangedHandle);
  if (*(longlong *)&(this->LobbyMemberAttributesChangedHandle).DelegateUnbinder != 0) {
    plVar1 = *(longlong **)&(this->LobbyMemberAttributesChangedHandle).DelegateUnbinder.field_0x28;
    plVar3 = (longlong *)&(this->LobbyMemberAttributesChangedHandle).DelegateUnbinder.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FOnlineEventDelegateHandle::Unbind(&this->LobbyAttributesChangedHandle);
  if (*(longlong *)&(this->LobbyAttributesChangedHandle).DelegateUnbinder != 0) {
    plVar1 = *(longlong **)&(this->LobbyAttributesChangedHandle).DelegateUnbinder.field_0x28;
    plVar3 = (longlong *)&(this->LobbyAttributesChangedHandle).DelegateUnbinder.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FOnlineEventDelegateHandle::Unbind(&this->LobbySchemaChangedHandle);
  if (*(longlong *)&(this->LobbySchemaChangedHandle).DelegateUnbinder != 0) {
    plVar1 = *(longlong **)&(this->LobbySchemaChangedHandle).DelegateUnbinder.field_0x28;
    plVar3 = (longlong *)&(this->LobbySchemaChangedHandle).DelegateUnbinder.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FOnlineEventDelegateHandle::Unbind(&this->LobbyLeaderChangedHandle);
  if (*(longlong *)&(this->LobbyLeaderChangedHandle).DelegateUnbinder != 0) {
    plVar1 = *(longlong **)&(this->LobbyLeaderChangedHandle).DelegateUnbinder.field_0x28;
    plVar3 = (longlong *)&(this->LobbyLeaderChangedHandle).DelegateUnbinder.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FOnlineEventDelegateHandle::Unbind(&this->LobbyMemberLeftHandle);
  if (*(longlong *)&(this->LobbyMemberLeftHandle).DelegateUnbinder != 0) {
    plVar1 = *(longlong **)&(this->LobbyMemberLeftHandle).DelegateUnbinder.field_0x28;
    plVar3 = (longlong *)&(this->LobbyMemberLeftHandle).DelegateUnbinder.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FOnlineEventDelegateHandle::Unbind(&this->LobbyMemberJoinedHandle);
  if (*(longlong *)&(this->LobbyMemberJoinedHandle).DelegateUnbinder != 0) {
    plVar1 = *(longlong **)&(this->LobbyMemberJoinedHandle).DelegateUnbinder.field_0x28;
    plVar3 = (longlong *)&(this->LobbyMemberJoinedHandle).DelegateUnbinder.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FOnlineEventDelegateHandle::Unbind(&this->LobbyLeftHandle);
  if (*(longlong *)&(this->LobbyLeftHandle).DelegateUnbinder != 0) {
    plVar1 = *(longlong **)&(this->LobbyLeftHandle).DelegateUnbinder.field_0x28;
    plVar3 = (longlong *)&(this->LobbyLeftHandle).DelegateUnbinder.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FOnlineEventDelegateHandle::Unbind(&this->LobbyJoinedHandle);
  if (*(longlong *)&(this->LobbyJoinedHandle).DelegateUnbinder != 0) {
    plVar1 = *(longlong **)&(this->LobbyJoinedHandle).DelegateUnbinder.field_0x28;
    plVar3 = (longlong *)&(this->LobbyJoinedHandle).DelegateUnbinder.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyInvitationRemoved>,int>
            ((TNotificationInfo<UE::Online::FLobbyInvitationRemoved> *)
             (this->LobbyInvitationRemoved).AllocatorInstance.Data,
             (this->LobbyInvitationRemoved).ArrayNum);
  pFVar2 = (this->LobbyInvitationRemoved).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyInvitationAdded>,int>
            ((TNotificationInfo<UE::Online::FLobbyInvitationAdded> *)
             (this->LobbyInvitationAdded).AllocatorInstance.Data,
             (this->LobbyInvitationAdded).ArrayNum);
  pFVar2 = (this->LobbyInvitationAdded).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberAttributesChanged>,int>
            ((TNotificationInfo<UE::Online::FLobbyMemberAttributesChanged> *)
             (this->LobbyMemberAttributesChanged).AllocatorInstance.Data,
             (this->LobbyMemberAttributesChanged).ArrayNum);
  pFVar2 = (this->LobbyMemberAttributesChanged).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyAttributesChanged>,int>
            ((TNotificationInfo<UE::Online::FLobbyAttributesChanged> *)
             (this->LobbyAttributesChanged).AllocatorInstance.Data,
             (this->LobbyAttributesChanged).ArrayNum);
  pFVar2 = (this->LobbyAttributesChanged).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbySchemaChanged>,int>
            ((TNotificationInfo<UE::Online::FLobbySchemaChanged> *)
             (this->LobbySchemaChanged).AllocatorInstance.Data,(this->LobbySchemaChanged).ArrayNum);
  pFVar2 = (this->LobbySchemaChanged).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyLeaderChanged>,int>
            ((TNotificationInfo<UE::Online::FLobbyLeaderChanged> *)
             (this->LobbyLeaderChanged).AllocatorInstance.Data,(this->LobbyLeaderChanged).ArrayNum);
  pFVar2 = (this->LobbyLeaderChanged).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberLeft>,int>
            ((TNotificationInfo<UE::Online::FLobbyMemberLeft> *)
             (this->LobbyMemberLeft).AllocatorInstance.Data,(this->LobbyMemberLeft).ArrayNum);
  pFVar2 = (this->LobbyMemberLeft).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberJoined>,int>
            ((TNotificationInfo<UE::Online::FLobbyMemberJoined> *)
             (this->LobbyMemberJoined).AllocatorInstance.Data,(this->LobbyMemberJoined).ArrayNum);
  pFVar2 = (this->LobbyMemberJoined).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyLeft>,int>
            ((TNotificationInfo<UE::Online::FLobbyLeft> *)(this->LobbyLeft).AllocatorInstance.Data,
             (this->LobbyLeft).ArrayNum);
  pFVar2 = (this->LobbyLeft).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyJoined>,int>
            ((TNotificationInfo<UE::Online::FLobbyJoined> *)
             (this->LobbyJoined).AllocatorInstance.Data,(this->LobbyJoined).ArrayNum);
  pFVar2 = (this->LobbyJoined).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Empty @ 14effbd90

void __thiscall UE::Online::FLobbyEventCapture::Empty(FLobbyEventCapture *this)

{
  int *piVar1;
  
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyJoined>,int>
            ((TNotificationInfo<UE::Online::FLobbyJoined> *)
             (this->LobbyJoined).AllocatorInstance.Data,(this->LobbyJoined).ArrayNum);
  piVar1 = &(this->LobbyJoined).ArrayMax;
  (this->LobbyJoined).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyLeft>,int>
            ((TNotificationInfo<UE::Online::FLobbyLeft> *)(this->LobbyLeft).AllocatorInstance.Data,
             (this->LobbyLeft).ArrayNum);
  piVar1 = &(this->LobbyLeft).ArrayMax;
  (this->LobbyLeft).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->LobbyLeft).AllocatorInstance,0,piVar1);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberJoined>,int>
            ((TNotificationInfo<UE::Online::FLobbyMemberJoined> *)
             (this->LobbyMemberJoined).AllocatorInstance.Data,(this->LobbyMemberJoined).ArrayNum);
  piVar1 = &(this->LobbyMemberJoined).ArrayMax;
  (this->LobbyMemberJoined).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->LobbyMemberJoined).AllocatorInstance,0,piVar1);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberLeft>,int>
            ((TNotificationInfo<UE::Online::FLobbyMemberLeft> *)
             (this->LobbyMemberLeft).AllocatorInstance.Data,(this->LobbyMemberLeft).ArrayNum);
  piVar1 = &(this->LobbyMemberLeft).ArrayMax;
  (this->LobbyMemberLeft).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->LobbyMemberLeft).AllocatorInstance,0,piVar1);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyLeaderChanged>,int>
            ((TNotificationInfo<UE::Online::FLobbyLeaderChanged> *)
             (this->LobbyLeaderChanged).AllocatorInstance.Data,(this->LobbyLeaderChanged).ArrayNum);
  piVar1 = &(this->LobbyLeaderChanged).ArrayMax;
  (this->LobbyLeaderChanged).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->LobbyLeaderChanged).AllocatorInstance,0,piVar1);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbySchemaChanged>,int>
            ((TNotificationInfo<UE::Online::FLobbySchemaChanged> *)
             (this->LobbySchemaChanged).AllocatorInstance.Data,(this->LobbySchemaChanged).ArrayNum);
  piVar1 = &(this->LobbySchemaChanged).ArrayMax;
  (this->LobbySchemaChanged).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->LobbySchemaChanged).AllocatorInstance,0,piVar1);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyAttributesChanged>,int>
            ((TNotificationInfo<UE::Online::FLobbyAttributesChanged> *)
             (this->LobbyAttributesChanged).AllocatorInstance.Data,
             (this->LobbyAttributesChanged).ArrayNum);
  piVar1 = &(this->LobbyAttributesChanged).ArrayMax;
  (this->LobbyAttributesChanged).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x108,8,0,&(this->LobbyAttributesChanged).AllocatorInstance,0,piVar1);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberAttributesChanged>,int>
            ((TNotificationInfo<UE::Online::FLobbyMemberAttributesChanged> *)
             (this->LobbyMemberAttributesChanged).AllocatorInstance.Data,
             (this->LobbyMemberAttributesChanged).ArrayNum);
  piVar1 = &(this->LobbyMemberAttributesChanged).ArrayMax;
  (this->LobbyMemberAttributesChanged).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x118,8,0,&(this->LobbyMemberAttributesChanged).AllocatorInstance,0,piVar1);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyInvitationAdded>,int>
            ((TNotificationInfo<UE::Online::FLobbyInvitationAdded> *)
             (this->LobbyInvitationAdded).AllocatorInstance.Data,
             (this->LobbyInvitationAdded).ArrayNum);
  piVar1 = &(this->LobbyInvitationAdded).ArrayMax;
  (this->LobbyInvitationAdded).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->LobbyInvitationAdded).AllocatorInstance,0,piVar1);
  }
  DestructItems<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyInvitationRemoved>,int>
            ((TNotificationInfo<UE::Online::FLobbyInvitationRemoved> *)
             (this->LobbyInvitationRemoved).AllocatorInstance.Data,
             (this->LobbyInvitationRemoved).ArrayNum);
  piVar1 = &(this->LobbyInvitationRemoved).ArrayMax;
  (this->LobbyInvitationRemoved).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->LobbyInvitationRemoved).AllocatorInstance,0,piVar1);
  }
  this->NextIndex = 0;
  this->TotalNotificationsReceived = 0;
  return;
}

// OnLobbyAttributesChanged @ 14efff780

void __thiscall
UE::Online::FLobbyEventCapture::OnLobbyAttributesChanged
          (FLobbyEventCapture *this,FLobbyAttributesChanged *param_1)

{
  AddEvent<TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyAttributesChanged>,TSizedDefaultAllocator<32>_>,UE::Online::FLobbyAttributesChanged>
            (this,&this->LobbyAttributesChanged,param_1);
  return;
}

// OnLobbyInvitationAdded @ 14efff7a0

void __thiscall
UE::Online::FLobbyEventCapture::OnLobbyInvitationAdded
          (FLobbyEventCapture *this,FLobbyInvitationAdded *param_1)

{
  int *piVar1;
  TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyInvitationAdded>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint local_28;
  uint local_24;
  FLobby *local_20;
  TReferenceControllerBase<1> *local_18;
  int local_10;
  
  local_28 = (param_1->LocalAccountId).Value;
  pTVar2 = &this->LobbyInvitationAdded;
  local_24 = (param_1->SenderId).Value;
  local_20 = (param_1->Lobby).Object;
  local_18 = (param_1->Lobby).SharedReferenceCount.ReferenceController;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10 = this->NextIndex;
  this->NextIndex = local_10 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(this->LobbyInvitationAdded).ArrayMax * 0x20)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->LobbyInvitationAdded).ArrayNum;
  piVar1 = &(this->LobbyInvitationAdded).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LobbyInvitationAdded).ArrayNum = iVar5 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
  *(uint *)pFVar6 = local_28;
  *(uint *)(pFVar6 + 4) = local_24;
  *(FLobby **)(pFVar6 + 8) = local_20;
  *(TReferenceControllerBase<1> **)(pFVar6 + 0x10) = local_18;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(int *)(pFVar6 + 0x18) = local_10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  this->TotalNotificationsReceived = this->TotalNotificationsReceived + 1;
  return;
}

// OnLobbyInvitationRemoved @ 14efff8e0

void __thiscall
UE::Online::FLobbyEventCapture::OnLobbyInvitationRemoved
          (FLobbyEventCapture *this,FLobbyInvitationRemoved *param_1)

{
  int *piVar1;
  TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyInvitationRemoved>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint local_28;
  uint local_24;
  FLobby *local_20;
  TReferenceControllerBase<1> *local_18;
  int local_10;
  
  local_28 = (param_1->LocalAccountId).Value;
  pTVar2 = &this->LobbyInvitationRemoved;
  local_24 = (param_1->SenderId).Value;
  local_20 = (param_1->Lobby).Object;
  local_18 = (param_1->Lobby).SharedReferenceCount.ReferenceController;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10 = this->NextIndex;
  this->NextIndex = local_10 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(this->LobbyInvitationRemoved).ArrayMax * 0x20)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->LobbyInvitationRemoved).ArrayNum;
  piVar1 = &(this->LobbyInvitationRemoved).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LobbyInvitationRemoved).ArrayNum = iVar5 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
  *(uint *)pFVar6 = local_28;
  *(uint *)(pFVar6 + 4) = local_24;
  *(FLobby **)(pFVar6 + 8) = local_20;
  *(TReferenceControllerBase<1> **)(pFVar6 + 0x10) = local_18;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(int *)(pFVar6 + 0x18) = local_10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  this->TotalNotificationsReceived = this->TotalNotificationsReceived + 1;
  return;
}

// OnLobbyJoined @ 14efffa20

void __thiscall
UE::Online::FLobbyEventCapture::OnLobbyJoined(FLobbyEventCapture *this,FLobbyJoined *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLobby *local_28;
  TReferenceControllerBase<1> *local_20;
  int local_18;
  
  local_28 = (param_1->Lobby).Object;
  local_20 = (param_1->Lobby).SharedReferenceCount.ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = this->NextIndex;
  this->NextIndex = local_18 + 1;
  pFVar2 = (this->LobbyJoined).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->LobbyJoined).ArrayMax * 0x18)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->LobbyJoined).ArrayNum;
  piVar1 = &(this->LobbyJoined).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->LobbyJoined).ArrayNum = iVar5 + 1;
  pFVar2 = (this->LobbyJoined).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
  *(FLobby **)pFVar2 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar2 + 8) = local_20;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(int *)(pFVar2 + 0x10) = local_18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  this->TotalNotificationsReceived = this->TotalNotificationsReceived + 1;
  return;
}

// OnLobbyLeaderChanged @ 14efffb30

void __thiscall
UE::Online::FLobbyEventCapture::OnLobbyLeaderChanged
          (FLobbyEventCapture *this,FLobbyLeaderChanged *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLobby *local_38;
  TReferenceControllerBase<1> *local_30;
  FLobbyMember *local_28;
  TReferenceControllerBase<1> *local_20;
  int local_18;
  
  local_38 = (param_1->Lobby).Object;
  local_30 = (param_1->Lobby).SharedReferenceCount.ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = (param_1->Leader).Object;
  local_20 = (param_1->Leader).SharedReferenceCount.ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = this->NextIndex;
  this->NextIndex = local_18 + 1;
  pFVar2 = (this->LobbyLeaderChanged).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar2 + (longlong)(this->LobbyLeaderChanged).ArrayMax * 0x28)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->LobbyLeaderChanged).ArrayNum;
  piVar1 = &(this->LobbyLeaderChanged).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->LobbyLeaderChanged).AllocatorInstance,piVar1);
  }
  (this->LobbyLeaderChanged).ArrayNum = iVar5 + 1;
  pFVar2 = (this->LobbyLeaderChanged).AllocatorInstance.Data + (longlong)iVar5 * 0x28;
  *(FLobby **)pFVar2 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar2 + 8) = local_30;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FLobbyMember **)(pFVar2 + 0x10) = local_28;
  *(TReferenceControllerBase<1> **)(pFVar2 + 0x18) = local_20;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(int *)(pFVar2 + 0x20) = local_18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  this->TotalNotificationsReceived = this->TotalNotificationsReceived + 1;
  return;
}

// OnLobbyLeft @ 14efffca0

void __thiscall
UE::Online::FLobbyEventCapture::OnLobbyLeft(FLobbyEventCapture *this,FLobbyLeft *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLobby *local_28;
  TReferenceControllerBase<1> *local_20;
  int local_18;
  
  local_28 = (param_1->Lobby).Object;
  local_20 = (param_1->Lobby).SharedReferenceCount.ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = this->NextIndex;
  this->NextIndex = local_18 + 1;
  pFVar2 = (this->LobbyLeft).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->LobbyLeft).ArrayMax * 0x18))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->LobbyLeft).ArrayNum;
  piVar1 = &(this->LobbyLeft).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->LobbyLeft).AllocatorInstance,piVar1);
  }
  (this->LobbyLeft).ArrayNum = iVar5 + 1;
  pFVar2 = (this->LobbyLeft).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
  *(FLobby **)pFVar2 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar2 + 8) = local_20;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(int *)(pFVar2 + 0x10) = local_18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  this->TotalNotificationsReceived = this->TotalNotificationsReceived + 1;
  return;
}

// OnLobbyMemberAttributesChanged @ 14efffdc0

void __thiscall
UE::Online::FLobbyEventCapture::OnLobbyMemberAttributesChanged
          (FLobbyEventCapture *this,FLobbyMemberAttributesChanged *param_1)

{
  AddEvent<TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberAttributesChanged>,TSizedDefaultAllocator<32>_>,UE::Online::FLobbyMemberAttributesChanged>
            (this,&this->LobbyMemberAttributesChanged,param_1);
  return;
}

// OnLobbyMemberJoined @ 14efffde0

void __thiscall
UE::Online::FLobbyEventCapture::OnLobbyMemberJoined
          (FLobbyEventCapture *this,FLobbyMemberJoined *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLobby *local_38;
  TReferenceControllerBase<1> *local_30;
  FLobbyMember *local_28;
  TReferenceControllerBase<1> *local_20;
  int local_18;
  
  local_38 = (param_1->Lobby).Object;
  local_30 = (param_1->Lobby).SharedReferenceCount.ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = (param_1->Member).Object;
  local_20 = (param_1->Member).SharedReferenceCount.ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = this->NextIndex;
  this->NextIndex = local_18 + 1;
  pFVar2 = (this->LobbyMemberJoined).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar2 + (longlong)(this->LobbyMemberJoined).ArrayMax * 0x28)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->LobbyMemberJoined).ArrayNum;
  piVar1 = &(this->LobbyMemberJoined).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->LobbyMemberJoined).AllocatorInstance,piVar1);
  }
  (this->LobbyMemberJoined).ArrayNum = iVar5 + 1;
  pFVar2 = (this->LobbyMemberJoined).AllocatorInstance.Data + (longlong)iVar5 * 0x28;
  *(FLobby **)pFVar2 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar2 + 8) = local_30;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FLobbyMember **)(pFVar2 + 0x10) = local_28;
  *(TReferenceControllerBase<1> **)(pFVar2 + 0x18) = local_20;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(int *)(pFVar2 + 0x20) = local_18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  this->TotalNotificationsReceived = this->TotalNotificationsReceived + 1;
  return;
}

// OnLobbyMemberLeft @ 14effff50

void __thiscall
UE::Online::FLobbyEventCapture::OnLobbyMemberLeft
          (FLobbyEventCapture *this,FLobbyMemberLeft *param_1)

{
  AddEvent<TArray<UE::Online::FLobbyEventCapture::TNotificationInfo<UE::Online::FLobbyMemberLeft>,TSizedDefaultAllocator<32>_>,UE::Online::FLobbyMemberLeft>
            (this,&this->LobbyMemberLeft,param_1);
  return;
}

// OnLobbySchemaChanged @ 14effff70

void __thiscall
UE::Online::FLobbyEventCapture::OnLobbySchemaChanged
          (FLobbyEventCapture *this,FLobbySchemaChanged *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLobby *local_38;
  TReferenceControllerBase<1> *local_30;
  FName local_28;
  FName local_20;
  int local_18;
  
  local_38 = (param_1->Lobby).Object;
  local_30 = (param_1->Lobby).SharedReferenceCount.ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = param_1->PreviousSchemaId;
  local_20 = param_1->NewSchemaId;
  local_18 = this->NextIndex;
  this->NextIndex = local_18 + 1;
  pFVar2 = (this->LobbySchemaChanged).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar2 + (longlong)(this->LobbySchemaChanged).ArrayMax * 0x28)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->LobbySchemaChanged).ArrayNum;
  piVar1 = &(this->LobbySchemaChanged).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->LobbySchemaChanged).AllocatorInstance,piVar1);
  }
  (this->LobbySchemaChanged).ArrayNum = iVar5 + 1;
  pFVar2 = (this->LobbySchemaChanged).AllocatorInstance.Data + (longlong)iVar5 * 0x28;
  *(FLobby **)pFVar2 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar2 + 8) = local_30;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FName *)(pFVar2 + 0x10) = local_28;
  *(FName *)(pFVar2 + 0x18) = local_20;
  *(int *)(pFVar2 + 0x20) = local_18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  this->TotalNotificationsReceived = this->TotalNotificationsReceived + 1;
  return;
}

