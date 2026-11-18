// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey> @ 14b5bca60

TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey> * __thiscall
TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::
TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>
          (TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey> *pTVar3;
  
  this->CooldownTime = param_1;
  (this->PendingQueue).ArrayNum = 0;
  (this->PendingQueue).ArrayMax = 0;
  *(undefined8 *)&(this->PendingData).field_0x8 = 0;
  (this->PendingQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&this->PendingData = 0;
  *(undefined8 *)&(this->PendingData).field_0x20 = 0;
  this->LastRequestTime = 0.0;
  *(undefined4 *)&(this->PendingData).field_0x28 = 0;
  *(undefined4 *)&(this->PendingData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingData).field_0x34 = 0;
  *(undefined8 *)&(this->PendingData).field_0x40 = 0;
  *(undefined4 *)&(this->PendingData).field_0x48 = 0;
  if (this->CooldownTime <= 0.0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3057192806880641353>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_TencentCloudChat_Defines.h"
                       ,0x149,"CooldownTime > 0.0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// operator= @ 14b9d9970

TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey> * __thiscall
TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::operator=
          (TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey> *this,
          TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey> *param_1)

{
  TArray<FDS_MarkAsReadKey,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FDS_MarkAsReadKey,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<FDS_MarkAsReadKey,FDS_MarkAsReadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>_>
  *pTVar3;
  TMap<FDS_MarkAsReadKey,FDS_MarkAsReadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>_>
  *this_00;
  undefined1 *_Src;
  undefined1 *_Dst;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  
  pTVar1 = &param_1->PendingQueue;
  this->CooldownTime = param_1->CooldownTime;
  pTVar2 = &this->PendingQueue;
  this->LastRequestTime = param_1->LastRequestTime;
  if (pTVar2 != pTVar1) {
    DestructItems<FDS_MarkAsReadKey,int>
              ((FDS_MarkAsReadKey *)(pTVar2->AllocatorInstance).Data,(this->PendingQueue).ArrayNum);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PendingQueue).ArrayNum = (param_1->PendingQueue).ArrayNum;
    (this->PendingQueue).ArrayMax = (param_1->PendingQueue).ArrayMax;
    (param_1->PendingQueue).ArrayNum = 0;
    (param_1->PendingQueue).ArrayMax = 0;
  }
  pTVar3 = &param_1->PendingData;
  this_00 = &this->PendingData;
  if (this_00 != pTVar3) {
    TSparseArray<TSparseSetElement<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->PendingData).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    _Src = &(param_1->PendingData).field_0x10;
    *(undefined8 *)this_00 = *(undefined8 *)pTVar3;
    _Dst = &(this->PendingData).field_0x10;
    *(undefined8 *)pTVar3 = 0;
    *(undefined4 *)&(this->PendingData).field_0x8 = *(undefined4 *)&(param_1->PendingData).field_0x8
    ;
    *(undefined4 *)&(this->PendingData).field_0xc = *(undefined4 *)&(param_1->PendingData).field_0xc
    ;
    *(undefined8 *)&(param_1->PendingData).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->PendingData).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar5 = *(void **)&(this->PendingData).field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->PendingData).field_0x20 =
           *(undefined8 *)&(param_1->PendingData).field_0x20;
      *(undefined8 *)&(param_1->PendingData).field_0x20 = 0;
      *(undefined4 *)&(this->PendingData).field_0x28 =
           *(undefined4 *)&(param_1->PendingData).field_0x28;
      *(undefined4 *)&(this->PendingData).field_0x2c =
           *(undefined4 *)&(param_1->PendingData).field_0x2c;
      *(undefined8 *)&(param_1->PendingData).field_0x28 = 0;
    }
    *(undefined4 *)&(this->PendingData).field_0x30 =
         *(undefined4 *)&(param_1->PendingData).field_0x30;
    *(undefined4 *)&(this->PendingData).field_0x34 =
         *(undefined4 *)&(param_1->PendingData).field_0x34;
    *(undefined4 *)&(param_1->PendingData).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->PendingData).field_0x34 = 0;
    if (*(longlong *)&(param_1->PendingData).field_0x40 == 0) {
      *(undefined4 *)&(this->PendingData).field_0x38 =
           *(undefined4 *)&(param_1->PendingData).field_0x38;
    }
    pvVar5 = *(void **)&(this->PendingData).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    *(undefined8 *)&(this->PendingData).field_0x40 =
         *(undefined8 *)&(param_1->PendingData).field_0x40;
    *(undefined8 *)&(param_1->PendingData).field_0x40 = 0;
    *(undefined4 *)&(this->PendingData).field_0x48 =
         *(undefined4 *)&(param_1->PendingData).field_0x48;
    *(undefined4 *)&(param_1->PendingData).field_0x48 = 0;
  }
  return this;
}

// TryRequestOrDefer @ 14ba202c0

bool __thiscall
TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::TryRequestOrDefer
          (TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey> *this,
          FDS_MarkAsReadKey *param_1,FDS_MarkAsReadKey *param_2,double param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FDS_MarkAsReadKey *pFVar8;
  FDS_MarkAsReadKey *local_28;
  FDS_MarkAsReadKey *local_20;
  FDS_MarkAsReadKey *local_18;
  
  if ((this->LastRequestTime != 0.0) && (param_3 - this->LastRequestTime < this->CooldownTime)) {
    uVar6 = ::GetTypeHash(param_1);
    iVar7 = TSet<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FDS_MarkAsReadKey>
                      ((TSet<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>,FDefaultSetAllocator>
                        *)&this->PendingData,uVar6,param_1);
    if (iVar7 != -1) {
      pFVar8 = TMapBase<FDS_MarkAsReadKey,FDS_MarkAsReadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>_>
               ::FindChecked((TMapBase<FDS_MarkAsReadKey,FDS_MarkAsReadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>_>
                              *)&this->PendingData,param_1);
      pFVar8->PlayerUID = param_2->PlayerUID;
      ::FString::operator=(&pFVar8->GroupID,&param_2->GroupID);
      return false;
    }
    pFVar8 = (FDS_MarkAsReadKey *)(this->PendingQueue).AllocatorInstance.Data;
    if ((pFVar8 <= param_1) && (param_1 < pFVar8 + (this->PendingQueue).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar7 = (this->PendingQueue).ArrayNum;
    piVar1 = &(this->PendingQueue).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->PendingQueue).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->PendingQueue).AllocatorInstance.Data;
    (this->PendingQueue).ArrayNum = iVar7 + 1;
    *(long64 *)(pFVar2 + (longlong)iVar7 * 0x18) = param_1->PlayerUID;
    ::FString::FString((FString *)(pFVar2 + ((longlong)iVar7 * 3 + 1) * 8),&param_1->GroupID);
    local_20 = param_1;
    local_18 = param_2;
    TSet<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FDS_MarkAsReadKey_const_&,FDS_MarkAsReadKey_const_&>_>
              ((TSet<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>,FDefaultSetAllocator>
                *)&this->PendingData,
               (TPairInitializer<FDS_MarkAsReadKey_const_&,FDS_MarkAsReadKey_const_&> *)
               &stack0x00000008,(bool *)&local_20);
    return false;
  }
  this->LastRequestTime = param_3;
  if (*(int *)&(this->PendingData).field_0x8 != *(int *)&(this->PendingData).field_0x34) {
    uVar6 = ::GetTypeHash(param_1);
    iVar7 = TSet<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>,FDefaultSetAllocator>
            ::RemoveImpl<FDS_MarkAsReadKey>
                      ((TSet<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>,FDefaultSetAllocator>
                        *)&this->PendingData,uVar6,param_1);
    if (0 < iVar7) {
      pFVar8 = (FDS_MarkAsReadKey *)(this->PendingQueue).AllocatorInstance.Data;
      if ((pFVar8 <= param_1) && (param_1 < pFVar8 + (this->PendingQueue).ArrayMax)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      local_28 = param_1;
      TArray<FDS_MarkAsReadKey,TSizedDefaultAllocator<32>_>::
      RemoveAll<_TArray<FDS_MarkAsReadKey,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                (&this->PendingQueue,(<lambda_1> *)&local_28);
    }
  }
  return true;
}

