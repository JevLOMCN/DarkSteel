// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// GetCachedUvMapping @ 148fb2bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTypedMeshUvMappingHandle<FStaticMeshUvMapping> * __thiscall
FNDI_StaticMesh_GeneratedData::GetCachedUvMapping
          (FNDI_StaticMesh_GeneratedData *this,
          TTypedMeshUvMappingHandle<FStaticMeshUvMapping> *__return_storage_ptr__,
          TWeakObjectPtr<UStaticMesh,FWeakObjectPtr> *param_1,int param_2,int param_3,
          FMeshUvMappingUsage param_4,bool param_5)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  TTypedMeshUvMappingHandle<FStaticMeshUvMapping> *pTVar7;
  TSharedPtr<FStaticMeshUvMapping,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TArray<TSharedPtr<FStaticMeshUvMapping,1>,TSizedDefaultAllocator<32>_> *this_00;
  TReferenceControllerBase<1> *pTVar10;
  int local_res20 [2];
  FStaticMeshUvMapping *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  <lambda_1> local_68;
  <lambda_1> local_48;
  
  local_res20[0] = param_2;
  pUVar6 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  if ((pUVar6 == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshObject.Get() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceStaticMesh.cpp"
                         ,0x14ed,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TTypedMeshUvMappingHandle<FStaticMeshUvMapping> *)(*pcVar3)();
    return pTVar7;
  }
  bVar4 = FStaticMeshUvMapping::IsValidMeshObject(param_1,local_res20[0],param_3);
  if (bVar4) {
    SRWLock = &this->CachedUvMappingGuard;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    local_68.InLodIndex = local_res20;
    local_68.InUvSetIndex = &param_3;
    this_00 = &this->CachedUvMapping;
    local_68.MeshObject = param_1;
    pTVar8 = TArray<TSharedPtr<FStaticMeshUvMapping,1>,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FNDI_StaticMesh_GeneratedData::GetCachedUvMapping_::__l2::<lambda_1>_>
                       (this_00,&local_68);
    if (pTVar8 == (TSharedPtr<FStaticMeshUvMapping,1> *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      local_48.InLodIndex = local_res20;
      local_48.InUvSetIndex = &param_3;
      local_48.MeshObject = param_1;
      pTVar8 = TArray<TSharedPtr<FStaticMeshUvMapping,1>,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FNDI_StaticMesh_GeneratedData::GetCachedUvMapping_::__l2::<lambda_1>_>
                         (this_00,&local_48);
      if (pTVar8 == (TSharedPtr<FStaticMeshUvMapping,1> *)0x0) {
        pTVar9 = ::operator_new(0x60);
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
          local_78 = ___xmm_00000000000000000000000000000010;
          pTStack_70 = _UNK_150651568;
        }
        else {
          pTVar9->SharedReferenceCount = (atomic<int>)0x1;
          pTVar9->WeakReferenceCount = (atomic<int>)0x1;
          pTVar9->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFStaticMeshUvMapping___00_SharedPointerInternals__6B_
          ;
          FStaticMeshUvMapping::FStaticMeshUvMapping
                    ((FStaticMeshUvMapping *)(pTVar9 + 1),
                     (TWeakObjectPtr<UStaticMesh,FWeakObjectPtr>)param_1->WeakPtr,local_res20[0],
                     param_3);
          local_78 = (FStaticMeshUvMapping *)(pTVar9 + 1);
          if ((local_78 == (FStaticMeshUvMapping *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TTypedMeshUvMappingHandle<FStaticMeshUvMapping> *)(*pcVar3)();
            return pTVar7;
          }
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
          pTVar10 = pTVar9;
          pTStack_70 = pTVar9;
        }
        pFVar2 = (this_00->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)(this->CachedUvMapping).ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TTypedMeshUvMappingHandle<FStaticMeshUvMapping> *)(*pcVar3)();
          return pTVar7;
        }
        iVar5 = (this->CachedUvMapping).ArrayNum;
        piVar1 = &(this->CachedUvMapping).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&this_00->AllocatorInstance,piVar1);
        }
        (this->CachedUvMapping).ArrayNum = iVar5 + 1;
        pTVar8 = (TSharedPtr<FStaticMeshUvMapping,1> *)
                 ((this_00->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
        pTVar8->Object = local_78;
        (pTVar8->SharedReferenceCount).ReferenceController = pTStack_70;
        pTStack_70 = (TReferenceControllerBase<1> *)0x0;
        local_78 = (FStaticMeshUvMapping *)0x0;
        TTypedMeshUvMappingHandle<FStaticMeshUvMapping>::
        TTypedMeshUvMappingHandle<FStaticMeshUvMapping>
                  (__return_storage_ptr__,param_4,pTVar8,param_5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_70);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
      }
      else {
        TTypedMeshUvMappingHandle<FStaticMeshUvMapping>::
        TTypedMeshUvMappingHandle<FStaticMeshUvMapping>
                  (__return_storage_ptr__,param_4,pTVar8,param_5);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    else {
      TTypedMeshUvMappingHandle<FStaticMeshUvMapping>::
      TTypedMeshUvMappingHandle<FStaticMeshUvMapping>(__return_storage_ptr__,param_4,pTVar8,param_5)
      ;
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  else {
    *(undefined4 *)&__return_storage_ptr__->field_0x2 = 0;
    *(undefined2 *)&__return_storage_ptr__->field_0x6 = 0;
    *(undefined2 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  return __return_storage_ptr__;
}

// Tick @ 148fce300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNDI_StaticMesh_GeneratedData::Tick
          (FNDI_StaticMesh_GeneratedData *this,ETickingGroup param_1,float param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ForElementType<int> FVar8;
  void *_Dst;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_118 [32];
  uint local_c8 [4];
  ForElementType<int> local_b8;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceStaticMesh.cpp"
                         ,0x14d1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->CachedUvMappingGuard);
  iVar7 = (this->CachedUvMapping).ArrayNum;
  local_b8.SecondaryData = (ForElementType<int>)0x0;
  local_30 = 0;
  local_2c = 0x20;
  local_c8[0] = 0;
  if (0 < iVar7) {
    do {
      uVar1 = local_c8[0];
      uVar5 = 0;
      if ((int)local_c8[0] < (this->CachedUvMapping).ArrayNum) {
        uVar5 = ~local_c8[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (this->CachedUvMapping).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)pFVar9;
      if ((*(int *)(lVar2 + 0x40) < 1) && (*(int *)(lVar2 + 0x44) < 1)) {
        FVar8 = (ForElementType<int>)&local_b8;
        if (local_b8.SecondaryData != (ForElementType<int>)0x0) {
          FVar8 = local_b8.SecondaryData;
        }
        if ((ulonglong)FVar8 <= local_c8) {
          FVar8 = (ForElementType<int>)&local_b8;
          if (local_b8.SecondaryData != (ForElementType<int>)0x0) {
            FVar8 = local_b8.SecondaryData;
          }
          if ((local_c8 < (uint *)((longlong)FVar8 + (longlong)local_2c * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = local_30;
        if (local_30 == local_2c) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&local_b8,&local_2c);
        }
        local_30 = iVar6 + 1;
        FVar8 = (ForElementType<int>)&local_b8;
        if (local_b8.SecondaryData != (ForElementType<int>)0x0) {
          FVar8 = local_b8.SecondaryData;
        }
        *(uint *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_c8[0];
      }
      local_c8[0] = local_c8[0] + 1;
    } while ((int)local_c8[0] < iVar7);
    bVar4 = local_30 == 0;
    if (!bVar4) {
      do {
        if ((bVar4 || local_30 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar8 = (ForElementType<int>)&local_b8;
        if (local_b8.SecondaryData != (ForElementType<int>)0x0) {
          FVar8 = local_b8.SecondaryData;
        }
        lVar2 = (longlong)(local_30 + -1) * 4;
        uVar1 = *(uint *)(lVar2 + (longlong)FVar8);
        FVar8 = (ForElementType<int>)&local_b8;
        if (local_b8.SecondaryData != (ForElementType<int>)0x0) {
          FVar8 = local_b8.SecondaryData;
        }
        _Dst = (void *)((longlong)FVar8 + lVar2);
        iVar7 = (local_30 - (local_30 + -1)) + -1;
        if (iVar7 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar7 << 2);
        }
        local_30 = local_30 + -1;
        uVar5 = 0;
        if ((int)uVar1 < (this->CachedUvMapping).ArrayNum) {
          uVar5 = ~uVar1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<TSharedPtr<FStaticMeshUvMapping,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->CachedUvMapping,uVar1);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->CachedUvMapping).AllocatorInstance,
                   (this->CachedUvMapping).ArrayNum,&(this->CachedUvMapping).ArrayMax);
        bVar4 = local_30 == 0;
      } while (!bVar4);
    }
  }
  if (local_b8.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_b8.SecondaryData);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->CachedUvMappingGuard);
  return;
}

