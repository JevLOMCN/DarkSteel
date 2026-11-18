// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// Get @ 14d5a5dd0

FCameraSystemDebugRegistry * __cdecl UE::Cameras::FCameraSystemDebugRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Cameras::FCameraSystemDebugRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Instance;
}

// GetRegisteredCameraSystemEvaluators @ 14d5aaf00

void __thiscall
UE::Cameras::FCameraSystemDebugRegistry::GetRegisteredCameraSystemEvaluators
          (FCameraSystemDebugRegistry *this,
          TArray<TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint *puVar9;
  longlong *plVar10;
  bool bVar11;
  longlong local_78;
  TReferenceControllerBase<1> *local_70;
  int local_68;
  uint uStack_64;
  undefined1 *puStack_60;
  undefined4 local_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  FCameraSystemDebugRegistry *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  iVar6 = *(int *)&(this->Entries).field_0x28;
  puStack_60 = &(this->Entries).field_0x10;
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar6 != 0) {
    puVar9 = *(uint **)&(this->Entries).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)puStack_60;
    }
    uVar2 = *puVar9;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar2 == 0) {
      iStack_50 = iStack_50 + 0x20;
      lVar7 = (longlong)local_68;
      local_68 = local_68 + 1;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d5aafbd;
      uVar2 = puVar9[lVar7 + 1];
    }
    uStack_64 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_64 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_54 = (int)lVar7 + -1 + iStack_50;
    if (iVar6 < iStack_54) {
LAB_14d5aafbd:
      iStack_54 = iVar6;
    }
  }
  local_58 = 0xffffffff;
  local_40._padding_ = CONCAT44(uStack_64,local_68);
  local_40.UnvisitedBitMask = 0xffffffff;
  local_40.CurrentBitIndex = iStack_54;
  local_40._28_4_ = uStack_4c;
  local_40.BaseBitIndex = iStack_50;
  local_48 = this;
  local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_60;
  if (iStack_54 < iVar6) {
    do {
      plVar10 = (longlong *)
                ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&local_48->Entries);
      local_78 = 0;
      local_70 = (TReferenceControllerBase<1> *)plVar10[1];
      if (local_70 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = local_70->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            local_70 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14d5ab03a;
          }
          LOCK();
          aVar5 = local_70->SharedReferenceCount;
          bVar11 = aVar4 == aVar5;
          if (bVar11) {
            local_70->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar5 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar5;
        } while (!bVar11);
        if (local_70 != (TReferenceControllerBase<1> *)0x0) {
          local_78 = *plVar10;
        }
      }
LAB_14d5ab03a:
      if (local_78 != 0) {
        pFVar8 = (param_1->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar8 + (longlong)param_1->ArrayMax * 0x10)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        param_1->ArrayNum = iVar6 + 1;
        *(longlong *)pFVar8 = local_78;
        *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_70;
        if (local_70 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
  }
  return;
}

// NumRegisteredCameraSystemEvaluators @ 14d5b6e50

int __thiscall
UE::Cameras::FCameraSystemDebugRegistry::NumRegisteredCameraSystemEvaluators
          (FCameraSystemDebugRegistry *this)

{
  return *(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34;
}

// RegisterCameraSystemEvaluator @ 14d5c9850

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraSystemDebugID __thiscall
UE::Cameras::FCameraSystemDebugRegistry::RegisterCameraSystemEvaluator
          (FCameraSystemDebugRegistry *this,
          TSharedRef<UE::Cameras::FCameraSystemEvaluator,1> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForAnyElementType _Src;
  int iVar5;
  UObject *pUVar6;
  longlong *in_R8;
  FName local_res8;
  FString local_58;
  FSparseArrayAllocationInfo local_48;
  longlong local_38;
  longlong *local_30;
  FString local_28;
  
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*in_R8 + 0x10));
  if (pUVar6 == (UObject *)0x0) {
    ::FString::FString(&local_58,L"None");
  }
  else {
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
    local_res8.Number = *(uint *)&pUVar6->field_0x1c;
    ::FName::ToString(&local_res8,&local_58);
  }
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  local_38 = *in_R8;
  local_30 = (longlong *)in_R8[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_58.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
  }
  iVar2 = *(int *)&(this->Entries).field_0x34;
  if (iVar2 == 0) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Entries).field_0x8,
                       (int *)&(this->Entries).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Entries).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Entries).field_0x30;
    lVar4 = *(longlong *)&this->Entries;
    iVar3 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar4);
    iVar2 = iVar2 + -1;
    *(int *)&(this->Entries).field_0x30 = iVar3;
    *(int *)&(this->Entries).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + lVar4) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)this,&local_48,iVar5);
  if (local_48.Pointer != (longlong *)0x0) {
    *(longlong *)local_48.Pointer = local_38;
    *(longlong **)((longlong)local_48.Pointer + 8) = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
    }
    ::FString::FString((FString *)((longlong)local_48.Pointer + 0x10),&local_28);
  }
  *(int *)&param_1->Object = local_48.Index + 1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_30 + 8))(local_30,1);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_R8[1]);
  return (FCameraSystemDebugID)(int)param_1;
}

// UnregisterCameraSystemEvaluator @ 14d5d2890

void __thiscall
UE::Cameras::FCameraSystemDebugRegistry::UnregisterCameraSystemEvaluator
          (FCameraSystemDebugRegistry *this,FCameraSystemDebugID param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (((-1 < param_1.Value) && (param_1.Value != 0x7fffffff)) && (param_1.Value != 0)) {
    TSparseArray<UE::Cameras::FCameraSystemDebugRegistry::FEntry,FDefaultSparseArrayAllocator>::
    RemoveAt(&this->Entries,param_1.Value + -1,1);
    return;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6567350517113028643>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemDebugRegistry.cpp"
                     ,0x23,"InDebugID.IsValid() && !InDebugID.IsAny() && !InDebugID.IsAuto()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

