// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 1

// Send @ 14cfeeee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageEndpoint::Send
          (FMessageEndpoint *this,void *param_1,UScriptStruct *param_2,EMessageFlags param_3,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_4,TSharedPtr<IMessageAttachment,1> *param_5,
          TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_6,FTimespan *param_7,
          FDateTime *param_8)

{
  IMessageBus *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedRef<FMessageEndpoint,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  FDateTime *local_78;
  FTimespan *local_70;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *local_68;
  TSharedRef<FMessageEndpoint,1> local_60 [2];
  
  local_68 = param_6;
  local_70 = param_7;
  local_78 = param_8;
  if (this->Enabled == false) {
LAB_14cfeef6e:
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6 = (this->BusPtr).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar6->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) goto LAB_14cfeef6e;
        LOCK();
        aVar4 = pTVar6->SharedReferenceCount;
        bVar7 = aVar3 == aVar4;
        if (bVar7) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar7);
      pIVar1 = (this->BusPtr).Object;
      if (pIVar1 != (IMessageBus *)0x0) {
        pcVar2 = *(code **)((longlong)*pIVar1 + 0x30);
        pTVar5 = TSharedFromThis<FMessageEndpoint,1>::AsShared
                           ((TSharedFromThis<FMessageEndpoint,1> *)&this->_padding_,local_60);
        if (pTVar5->Object == (FMessageEndpoint *)0x0) {
          local_88 = (longlong *)0x0;
        }
        else {
          local_88 = &pTVar5->Object->_padding_;
        }
        local_80 = (pTVar5->SharedReferenceCount).ReferenceController;
        if (local_80 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar2)(pIVar1,param_1,param_2,param_3,param_4,param_5,local_68,local_70,local_78,
                  &local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60[0].SharedReferenceCount.ReferenceController);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined4 *)&param_4->field_0x48 = 0;
  if (*(void **)&param_4->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_4);
  return;
}

