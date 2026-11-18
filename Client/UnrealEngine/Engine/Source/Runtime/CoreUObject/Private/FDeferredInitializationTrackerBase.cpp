// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// FDeferredInitializationTrackerBase @ 141e84270

FDeferredInitializationTrackerBase * __thiscall
FDeferredInitializationTrackerBase::FDeferredInitializationTrackerBase
          (FDeferredInitializationTrackerBase *this)

{
  this->_padding_ = (longlong)&___7FDeferredInitializationTrackerBase__6B_;
  *(undefined8 *)&this->ArchetypeInstanceMap = 0;
  *(undefined8 *)&(this->ArchetypeInstanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->ArchetypeInstanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->ArchetypeInstanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->ArchetypeInstanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ArchetypeInstanceMap).field_0x34 = 0;
  *(undefined4 *)&(this->ArchetypeInstanceMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ArchetypeInstanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->ArchetypeInstanceMap).field_0x48 = 0;
  *(undefined8 *)&this->DeferredInitializers = 0;
  *(undefined8 *)&(this->DeferredInitializers).field_0x8 = 0;
  *(undefined8 *)&(this->DeferredInitializers).field_0x20 = 0;
  *(undefined4 *)&(this->DeferredInitializers).field_0x28 = 0;
  *(undefined4 *)&(this->DeferredInitializers).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeferredInitializers).field_0x34 = 0;
  *(undefined4 *)&(this->DeferredInitializers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DeferredInitializers).field_0x40 = 0;
  *(undefined4 *)&(this->DeferredInitializers).field_0x48 = 0;
  (this->ResolvingObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvingObjects).ArrayNum = 0;
  (this->ResolvingObjects).ArrayMax = 0;
  *(undefined8 *)&this->DeferredPreloads = 0;
  *(undefined8 *)&(this->DeferredPreloads).field_0x8 = 0;
  *(undefined8 *)&(this->DeferredPreloads).field_0x20 = 0;
  *(undefined4 *)&(this->DeferredPreloads).field_0x28 = 0;
  *(undefined4 *)&(this->DeferredPreloads).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeferredPreloads).field_0x34 = 0;
  *(undefined4 *)&(this->DeferredPreloads).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DeferredPreloads).field_0x40 = 0;
  *(undefined4 *)&(this->DeferredPreloads).field_0x48 = 0;
  return this;
}

// ~FDeferredInitializationTrackerBase @ 141e879d0

void __thiscall
FDeferredInitializationTrackerBase::~FDeferredInitializationTrackerBase
          (FDeferredInitializationTrackerBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->DeferredPreloads).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FDeferredInitializationTrackerBase__6B_;
  pvVar1 = *(void **)&(this->DeferredPreloads).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeferredPreloads);
  pFVar2 = (this->ResolvingObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->DeferredInitializers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DeferredInitializers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,FObjectInitializer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,FObjectInitializer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,FObjectInitializer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeferredInitializers);
  *(undefined4 *)&(this->ArchetypeInstanceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ArchetypeInstanceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ArchetypeInstanceMap);
  return;
}

// Add @ 141e8e140

FObjectInitializer * __thiscall
FDeferredInitializationTrackerBase::Add
          (FDeferredInitializationTrackerBase *this,UObject *param_1,FObjectInitializer *param_2)

{
  UObject *local_res10 [2];
  int local_res20;
  UObject *local_28;
  UObject **local_20;
  FObjectInitializer *local_18;
  
  if (param_1 != (UObject *)0x0) {
    local_28 = param_2->Obj;
    local_res10[0] = param_1;
    TMultiMap<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>_>
    ::EmplaceUnique<UObject_const_*_const_&,UObject_*_const_&>
              (&this->ArchetypeInstanceMap,local_res10,&local_28);
    local_20 = &local_28;
    local_18 = param_2;
    TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,FObjectInitializer_const_&>_>
              ((TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
                *)&this->DeferredInitializers,
               (TPairInitializer<UObject_*_const_&,FObjectInitializer_const_&> *)&local_res20,
               (bool *)&local_20);
    return (FObjectInitializer *)
           (*(longlong *)&this->DeferredInitializers + (longlong)local_res20 * 0x280 + 0x10);
  }
  return (FObjectInitializer *)0x0;
}

// DeferPreload @ 141e95e30

bool __thiscall
FDeferredInitializationTrackerBase::DeferPreload
          (FDeferredInitializationTrackerBase *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  UObject *local_res10;
  
  local_res10 = param_1;
  bVar2 = IsInitializationDeferred(this,param_1);
  if (bVar2) {
    pFVar3 = (this->ResolvingObjects).AllocatorInstance.Data;
    pFVar1 = pFVar3 + (longlong)(this->ResolvingObjects).ArrayNum * 8;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 8) {
      if (*(UObject **)pFVar3 == param_1) {
        return true;
      }
    }
    TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
    ::EmplaceUnique<UObject_*_const_&,UObject_*_const_&>
              (&this->DeferredPreloads,&local_res10,&local_res10);
  }
  return bVar2;
}

// IsInitializationDeferred @ 141ea9810

bool __thiscall
FDeferredInitializationTrackerBase::IsInitializationDeferred
          (FDeferredInitializationTrackerBase *this,UObject *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&(this->DeferredInitializers).field_0x8 !=
      *(int *)&(this->DeferredInitializers).field_0x34) {
    puVar2 = *(undefined1 **)&(this->DeferredInitializers).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->DeferredInitializers).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->DeferredInitializers).field_0x48 - 1U &
                              (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(UObject **)((longlong)iVar1 * 0x280 + *(longlong *)&this->DeferredInitializers) ==
            param_1) goto LAB_141ea98b3;
        iVar1 = *(int *)((longlong)iVar1 * 0x280 + 0x270 + *(longlong *)&this->DeferredInitializers)
        ;
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_141ea98b3:
  return iVar1 != -1;
}

// IsResolving @ 141ea9da0

bool __thiscall
FDeferredInitializationTrackerBase::IsResolving
          (FDeferredInitializationTrackerBase *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->ResolvingObjects).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->ResolvingObjects).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(UObject **)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

// PreloadDeferredDependents @ 141eafea0

void __thiscall
FDeferredInitializationTrackerBase::PreloadDeferredDependents
          (FDeferredInitializationTrackerBase *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  UObjectBaseUtility *this_00;
  int iVar2;
  FLinkerLoad *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  UObject *local_res8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->DeferredPreloads,param_1,&local_28,false);
  iVar2 = local_28.ArrayNum;
  uVar4 = (ulonglong)local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + uVar4 * 8;
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar6.Data == pFVar1) break;
    this_00 = *(UObjectBaseUtility **)FVar6.Data;
    pFVar3 = UObjectBaseUtility::GetLinker(this_00);
    if (pFVar3 != (FLinkerLoad *)0x0) {
      FLinkerLoad::Preload((FLinkerLoad *)&pFVar3->_padding_,(UObject *)this_00);
    }
    uVar4 = local_28._8_8_ & 0xffffffff;
    FVar6.Data = FVar6.Data + 8;
  }
  local_res8 = param_1;
  if (*(int *)&(this->DeferredPreloads).field_0x8 != *(int *)&(this->DeferredPreloads).field_0x34) {
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
    ::RemoveImpl<UObject_const_*>
              ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
                *)&this->DeferredPreloads,uVar5 >> 0x10 ^ uVar5,&local_res8);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// ResolveArchetypeInstances @ 141eb7ed0

void __thiscall
FDeferredInitializationTrackerBase::ResolveArchetypeInstances
          (FDeferredInitializationTrackerBase *this,UObject *param_1)

{
  int *piVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UObjectBaseUtility *this_00;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  FLinkerLoad *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  UObject *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  UObject *local_98;
  FScriptContainerElement *local_90;
  UObject *local_88;
  FScriptContainerElement *local_80;
  TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
  *local_78;
  UObject *local_70;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_68;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_58;
  
  local_78 = (TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
              *)&this->ArchetypeInstanceMap;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_res10 = param_1;
  TMultiMap<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>
            ((TMultiMap<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>_>
              *)local_78,param_1,&local_58,false);
  uVar10 = (ulonglong)local_58.ArrayNum;
  local_res20 = local_58.ArrayNum;
  local_80 = local_58.AllocatorInstance.Data + uVar10 * 8;
  uVar11 = uVar10;
  FVar13.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    pFVar3 = local_80;
    local_90 = FVar13.Data;
    if ((int)uVar10 != (int)uVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar13.Data == pFVar3) {
      local_70 = param_1;
      if (*(int *)&(local_78->Elements).field_0x8 != *(int *)&(local_78->Elements).field_0x34) {
        uVar12 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                 -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
        ::RemoveImpl<UObject_const_*>(local_78,uVar12 >> 0x10 ^ uVar12,&local_70);
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return;
    }
    local_98 = *(UObject **)FVar13.Data;
    pTVar2 = &this->ResolvingObjects;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_98) &&
        ((FScriptContainerElement *)&local_98 <
         pFVar3 + (longlong)(this->ResolvingObjects).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->ResolvingObjects).ArrayNum;
    piVar1 = &(this->ResolvingObjects).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ResolvingObjects).ArrayNum = iVar8 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_98;
    cVar7 = (**(code **)(this->_padding_ + 0x10))(this,param_1,local_98);
    pUVar5 = local_98;
    if (cVar7 != '\0') {
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
      ::MultiFind<TSizedDefaultAllocator<32>_>(&this->DeferredPreloads,local_98,&local_68,false);
      iVar8 = local_68.ArrayNum;
      uVar11 = (ulonglong)local_68.ArrayNum;
      pFVar3 = local_68.AllocatorInstance.Data + uVar11 * 8;
      FVar13.Data = local_68.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar11 != iVar8) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar13.Data == pFVar3) break;
        this_00 = *(UObjectBaseUtility **)FVar13.Data;
        pFVar9 = UObjectBaseUtility::GetLinker(this_00);
        if (pFVar9 != (FLinkerLoad *)0x0) {
          FLinkerLoad::Preload((FLinkerLoad *)&pFVar9->_padding_,(UObject *)this_00);
        }
        uVar11 = local_68._8_8_ & 0xffffffff;
        FVar13.Data = FVar13.Data + 8;
      }
      local_88 = pUVar5;
      if (*(int *)&(this->DeferredPreloads).field_0x8 !=
          *(int *)&(this->DeferredPreloads).field_0x34) {
        uVar12 = ((uint)((ulonglong)pUVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar5 >> 4)) *
                 -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
        ::RemoveImpl<UObject_const_*>
                  ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
                    *)&this->DeferredPreloads,uVar12 >> 0x10 ^ uVar12,&local_88);
      }
      FVar13.Data = local_90;
      param_1 = local_res10;
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
        FVar13.Data = local_90;
        param_1 = local_res10;
      }
    }
    if (((this->ResolvingObjects).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    iVar8 = (this->ResolvingObjects).ArrayNum;
    uVar12 = iVar8 - 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar12 * 8;
    iVar8 = ~uVar12 + iVar8;
    if (iVar8 != 0) {
      memmove(pFVar3,pFVar3 + 8,(longlong)iVar8 << 3);
    }
    piVar1 = &(this->ResolvingObjects).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,(this->ResolvingObjects).ArrayNum,
               &(this->ResolvingObjects).ArrayMax);
    uVar10 = local_58._8_8_ & 0xffffffff;
    FVar13.Data = FVar13.Data + 8;
    uVar11 = (ulonglong)local_res20;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ResolveDeferredInitialization @ 141eb90e0

bool __thiscall
FDeferredInitializationTrackerBase::ResolveDeferredInitialization
          (FDeferredInitializationTrackerBase *this,UObject *param_1,UObject *param_2)

{
  FObjectInitializer *this_00;
  uint uVar1;
  UObject *local_res8;
  
  this_00 = TMapBase<UObject_*,FObjectInitializer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>_>
            ::Find((TMapBase<UObject_*,FObjectInitializer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>_>
                    *)&this->DeferredInitializers,param_2);
  if (this_00 != (FObjectInitializer *)0x0) {
    FObjectInitializer::PostConstructInit(this_00);
    if (*(int *)&(this->DeferredInitializers).field_0x8 !=
        *(int *)&(this->DeferredInitializers).field_0x34) {
      uVar1 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      local_res8 = param_2;
      TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObject_const_*>
                ((TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
                  *)&this->DeferredInitializers,uVar1 >> 0x10 ^ uVar1,&local_res8);
    }
  }
  return true;
}

