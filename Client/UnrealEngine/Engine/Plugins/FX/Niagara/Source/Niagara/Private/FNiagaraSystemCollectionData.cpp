// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticStruct @ 1493c3e70

UScriptStruct * __cdecl FNiagaraSystemCollectionData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemCollectionData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSystemCollectionData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemCollectionData,(UObject *)pUVar1,
                         L"NiagaraSystemCollectionData");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSystemCollectionData.OuterSingleton;
}

// GetSystems @ 1493e9d50

TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_> * __thiscall
FNiagaraSystemCollectionData::GetSystems(FNiagaraSystemCollectionData *this)

{
  FStreamableHandle *this_00;
  code *pcVar1;
  bool bVar2;
  TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemCollection.cpp"
                       ,0xd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this_00 = (this->AsyncLoadHandle).Object;
  if (this_00 != (FStreamableHandle *)0x0) {
    FStreamableHandle::WaitUntilComplete(this_00,0.0,true);
    PostLoadSystems(this);
    return &this->SystemsInternal;
  }
  if ((this->Systems).ArrayNum != (this->SystemsInternal).ArrayNum) {
    LoadSynchronous(this);
  }
  return &this->SystemsInternal;
}

// InitFromArray @ 1493ed7d0

void __thiscall
FNiagaraSystemCollectionData::InitFromArray
          (FNiagaraSystemCollectionData *this,
          TArrayView<TSoftObjectPtr<UNiagaraSystem>_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (((this->Systems).ArrayNum != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Systems.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemCollection.cpp"
                         ,0x20,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar1,(ForAnyElementType *)this,&(this->Systems).ArrayNum,
                     &(this->Systems).ArrayMax);
  ConstructItems<TSoftObjectPtr<UNiagaraSystem>,TSoftObjectPtr<UNiagaraSystem>,int>
            ((this->Systems).AllocatorInstance.Data + (longlong)iVar4 * 0x28,param_1->DataPtr,iVar1)
  ;
  return;
}

// LoadAsync @ 1493ef9d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall FNiagaraSystemCollectionData::LoadAsync(FNiagaraSystemCollectionData *this)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  int iVar2;
  code *pcVar3;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UAssetManager *pUVar8;
  FString *pFVar9;
  TSharedPtr<FStreamableHandle,1> *pTVar10;
  FSoftObjectPath *pFVar11;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  undefined1 local_res10 [8];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_b8;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  ulonglong local_98;
  FSourceLocation local_88;
  FDestructionSentinel local_68;
  TSharedPtr<FStreamableHandle,1> local_50;
  FString local_40;
  
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->Systems).AllocatorInstance.Data;
  iVar2 = (this->Systems).ArrayNum;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  pTVar1 = this_00 + iVar2;
  pTVar4 = this_00;
  while( true ) {
    pFVar11 = &pTVar4->ObjectID;
    if ((this->Systems).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<UNiagaraSystem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (this_00 == pTVar1) break;
    pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if ((pUVar7 == (UObject *)0x0) && ((pFVar11->AssetPath).PackageName != (FName)0x0)) {
      if ((local_b8.AllocatorInstance.Data <= pFVar11) &&
         ((pFVar11 < local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayMax * 0x20 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_b8.ArrayNum;
      if (local_b8.ArrayNum == local_b8.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
      }
      local_b8.ArrayNum = iVar6 + 1;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_b8.AllocatorInstance.Data + (longlong)iVar6 * 0x20),
                 pFVar11);
    }
    this_00 = this_00 + 1;
    pTVar4 = (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar11 + 1);
  }
  if (local_b8.ArrayNum < 1) {
    PostLoadSystems(this);
  }
  else {
    bVar5 = UAssetManager::IsInitialized();
    if (bVar5) {
      pUVar8 = UAssetManager::Get();
      pFVar9 = ::FString::FString(&local_40,L"NiagaraDataChannelIsland_HandlerSystems");
      local_98 = 0;
      local_88.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemCollection.cpp"
      ;
      local_a8 = (undefined1  [8])0x0;
      local_88.Impl._Function = "void __cdecl FNiagaraSystemCollectionData::LoadAsync(void) const";
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_88.Impl._Line = 0x35;
      local_88.Impl._Column = 0x3d;
      pTVar10 = FStreamableManager::
                RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                          (&pUVar8->StreamableManager,&local_50,&local_b8,
                           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8,100,
                           false,false,pFVar9,&local_88);
      if (&this->AsyncLoadHandle != pTVar10) {
        (this->AsyncLoadHandle).Object = pTVar10->Object;
        pTVar10->Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AsyncLoadHandle).SharedReferenceCount,&pTVar10->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                 (FWriteAccessScope *)&local_68);
      if (((int)local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_a0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
        local_98 = local_98 & 0xffffffff00000000;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_a8);
    }
    else {
      LoadSynchronous(this);
    }
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FSoftObjectPath *)local_b8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return;
}

// LoadSynchronous @ 1493efc70

void __thiscall FNiagaraSystemCollectionData::LoadSynchronous(FNiagaraSystemCollectionData *this)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  int iVar2;
  UObject *pUVar3;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  undefined1 local_res10 [8];
  
  iVar2 = (this->Systems).ArrayNum;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->Systems).AllocatorInstance.Data;
  pTVar1 = this_00 + iVar2;
  while( true ) {
    if ((this->Systems).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSoftObjectPtr<UNiagaraSystem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (this_00 == pTVar1) break;
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if ((pUVar3 == (UObject *)0x0) && ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0)) {
      FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
    }
    this_00 = this_00 + 1;
  }
  PostLoadSystems(this);
  return;
}

// PostLoadSystems @ 1493f1cc0

void __thiscall FNiagaraSystemCollectionData::PostLoadSystems(FNiagaraSystemCollectionData *this)

{
  int *piVar1;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  undefined1 local_res8 [8];
  UObject *local_48;
  undefined8 local_40;
  FSharedReferencer<1> aFStack_38 [2];
  
  bVar7 = IsInGameThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemCollection.cpp"
                       ,0x60,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar3 = (this->Systems).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(this->SystemsInternal).ArrayMax;
  (this->SystemsInternal).ArrayNum = 0;
  if ((this->SystemsInternal).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&(this->SystemsInternal).AllocatorInstance,0,piVar1);
  }
  iVar4 = (this->Systems).ArrayNum;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->Systems).AllocatorInstance.Data;
  pTVar2 = this_00 + iVar4;
  do {
    if ((this->Systems).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<UNiagaraSystem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pTVar2) {
      local_40 = 0;
      aFStack_38[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->AsyncLoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_40) {
        (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AsyncLoadHandle).SharedReferenceCount,aFStack_38);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (aFStack_38[0].ReferenceController);
      return;
    }
    pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar9 == (UObject *)0x0) {
LAB_1493f1dcb:
      pUVar9 = (UObject *)0x0;
    }
    else {
      pUVar10 = UNiagaraSystem::StaticClass();
      iVar8 = (int)pUVar10->_padding_;
      if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar10->_padding_)) goto LAB_1493f1dcb;
    }
    local_48 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    pFVar5 = (this->SystemsInternal).AllocatorInstance.Data;
    if ((pFVar5 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar5 + (longlong)*piVar1 * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->SystemsInternal).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->SystemsInternal).AllocatorInstance,piVar1);
    }
    (this->SystemsInternal).ArrayNum = iVar8 + 1;
    *(UObject **)((this->SystemsInternal).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_48);
    }
    this_00 = this_00 + 1;
  } while( true );
}

// Release @ 1493f5040

void __thiscall FNiagaraSystemCollectionData::Release(FNiagaraSystemCollectionData *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->AsyncLoadHandle;
  if ((this->AsyncLoadHandle).Object == (FStreamableHandle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FStreamableHandle::CancelHandle(pTVar1->Object);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
    pTVar1->Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AsyncLoadHandle).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  piVar2 = &(this->SystemsInternal).ArrayMax;
  (this->SystemsInternal).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SystemsInternal).AllocatorInstance,0,piVar2);
  }
  return;
}

