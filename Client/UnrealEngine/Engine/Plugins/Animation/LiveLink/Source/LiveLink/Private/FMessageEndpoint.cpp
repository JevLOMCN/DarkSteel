// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// Send<FLiveLinkConnectMessage> @ 14d00c790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageEndpoint::Send<FLiveLinkConnectMessage>
          (FMessageEndpoint *this,FLiveLinkConnectMessage *param_1,EMessageFlags param_2,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_3,TSharedPtr<IMessageAttachment,1> *param_4,
          TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_5,FTimespan *param_6,
          FDateTime *param_7)

{
  TReferenceControllerBase<1> *pTVar1;
  IMessageBus *pIVar2;
  code *pcVar3;
  atomic<int> aVar4;
  uint uVar5;
  atomic<int> aVar6;
  TSharedRef<FMessageEndpoint,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  longlong *local_e8;
  TReferenceControllerBase<1> *local_e0;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ForElementType<FSetElementId> local_98;
  int local_90;
  FDateTime *local_88;
  FTimespan *local_80;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *local_78;
  TSharedPtr<IMessageAttachment,1> *local_70;
  UScriptStruct *local_68;
  TSharedRef<FMessageEndpoint,1> local_60 [2];
  
  local_70 = param_4;
  local_78 = param_5;
  local_80 = param_6;
  local_88 = param_7;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = ___xmm_00000000ffffffff0000008000000000;
  uStack_a8 = _UNK_150631d98;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)local_d8,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)param_3);
  local_68 = FLiveLinkConnectMessage::StaticStruct();
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if ((this->Enabled != false) &&
     (pTVar1 = (this->BusPtr).WeakReferenceCount.ReferenceController, pTVar8 = pTVar1,
     pTVar1 != (TReferenceControllerBase<1> *)0x0)) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14d00c855;
      LOCK();
      aVar6 = pTVar1->SharedReferenceCount;
      bVar9 = aVar4 == aVar6;
      if (bVar9) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar9);
    pIVar2 = (this->BusPtr).Object;
    pTVar8 = pTVar1;
    if (pIVar2 != (IMessageBus *)0x0) {
      pcVar3 = *(code **)((longlong)*pIVar2 + 0x30);
      pTVar7 = TSharedFromThis<FMessageEndpoint,1>::AsShared
                         ((TSharedFromThis<FMessageEndpoint,1> *)&this->_padding_,local_60);
      if (pTVar7->Object == (FMessageEndpoint *)0x0) {
        local_e8 = (longlong *)0x0;
      }
      else {
        local_e8 = &pTVar7->Object->_padding_;
      }
      local_e0 = (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_e0->SharedReferenceCount = (atomic<int>)((int)local_e0->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar3)(pIVar2,param_1,local_68,param_2,local_d8,local_70,local_78,local_80,local_88,
                &local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60[0].SharedReferenceCount.ReferenceController);
    }
  }
LAB_14d00c855:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d8,0,local_d8._8_4_);
  bVar9 = local_d8._12_4_ != 0;
  local_d8._8_8_ = (ulonglong)(uint)local_d8._12_4_ << 0x20;
  if (bVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  uVar5 = local_b0._4_4_;
  uStack_a8 = 0xffffffff;
  local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
  if (0x80 < uVar5) {
    local_b0 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  *(undefined4 *)&param_3->field_0x48 = 0;
  if (*(void **)&param_3->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_3);
  return;
}

