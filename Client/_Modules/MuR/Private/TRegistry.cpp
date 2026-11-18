// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// Add @ 14ab65fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FHandle * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::Add
          (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
           *this,FHandle *__return_storage_ptr__,FGeneratedImageKey *param_1,
          FGeneratedImageData *param_2)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  FXxHash64 FVar9;
  FEntry *pFVar10;
  TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
  *pTVar11;
  FHandle *pFVar12;
  longlong lVar13;
  uint *puVar14;
  uint local_res8 [2];
  TReferenceControllerBase<1> *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  undefined1 local_98 [8];
  FEntry *local_90;
  undefined4 *local_88;
  TReferenceControllerBase<1> **local_80;
  uint *local_78;
  undefined4 local_70 [2];
  TReferenceControllerBase<1> *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
  local_50;
  TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
  local_40;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar9 = FXxHash64::HashBuffer
                    ((void *)(param_1->ParameterValuesBlob).AllocatorInstance._padding_,
                     (longlong)(param_1->ParameterValuesBlob).ArrayNum);
  uVar3 = param_1->Address;
  iVar8 = TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Mutable::Private::FGeneratedImageKey>
                    ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->KeyIndex,
                     (uVar3 >> 2) + 0x9e3779b9 + uVar3 * 0x40 + (int)FVar9.Hash ^ uVar3,param_1);
  if (iVar8 != -1) {
    lVar13 = (longlong)iVar8 * 0x20 + *(longlong *)&this->KeyIndex;
    puVar14 = (uint *)(lVar13 + 0x10);
    if (lVar13 == 0) {
      puVar14 = (uint *)0x0;
    }
    if (puVar14 != (uint *)0x0) {
      uVar3 = *puVar14;
      pFVar10 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                               *)&this->Entries,uVar3);
      pFVar10->RefCount = pFVar10->RefCount + 1;
      pTVar11 = TSharedFromThis<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                ::AsShared((TSharedFromThis<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                            *)this,&local_50);
      pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
      local_b8 = pTVar11->Object;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        (__return_storage_ptr__->WeakRegistry).Object =
             (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
              *)0x0;
        (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        __return_storage_ptr__->Id = uVar3;
      }
      else {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        (__return_storage_ptr__->WeakRegistry).Object =
             (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
              *)0x0;
        (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        __return_storage_ptr__->Id = uVar3;
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController;
      (__return_storage_ptr__->WeakRegistry).Object = local_b8;
      (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar4;
      pTStack_b0 = pTVar4;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      goto LAB_14ab662ba;
    }
  }
  local_res8[0] = this->GlobalId;
  this->GlobalId = local_res8[0] + 1;
  pTStack_c0 = ::operator_new(0x30);
  if (pTStack_c0 == (TReferenceControllerBase<1> *)0x0) {
    local_c8 = ___xmm_00000000000000000000000000000010;
    pTStack_c0 = _UNK_150651568;
  }
  else {
    pTStack_c0->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_c0->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_c0->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeneratedImageKey_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    UE::Mutable::Private::FGeneratedImageKey::FGeneratedImageKey
              ((FGeneratedImageKey *)(pTStack_c0 + 1),param_1);
    local_c8 = pTStack_c0 + 1;
    if ((local_c8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FHandle *)(*pcVar5)();
      return pFVar12;
    }
  }
  local_70[0] = 1;
  if (pTStack_c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_c0->SharedReferenceCount = (atomic<int>)((int)pTStack_c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = (FEntry *)local_res8;
  local_88 = local_70;
  local_68 = local_c8;
  local_60 = pTStack_c0;
  TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_&,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry_&&>_>
            ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>,FDefaultSetAllocator>
              *)&this->Entries,
             (TPairInitializer<unsigned_int_&,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry_&&>
              *)local_98,(bool *)&local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  local_80 = &local_c8;
  local_78 = local_res8;
  TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer_&,unsigned_int_&>_>
            ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->KeyIndex,
             (TPairInitializer<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer_&,unsigned_int_&>
              *)(local_98 + 4),(bool *)&local_80);
  pTVar11 = TSharedFromThis<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
            ::AsShared((TSharedFromThis<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                        *)this,&local_40);
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_a8 = pTVar11->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Id = local_res8[0];
    (__return_storage_ptr__->WeakRegistry).Object =
         (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
          *)0x0;
    (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Id = local_res8[0];
    (__return_storage_ptr__->WeakRegistry).Object =
         (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
          *)0x0;
    (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakRegistry).Object = local_a8;
  (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar4;
  pTStack_a0 = pTVar4;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  local_50.SharedReferenceCount.ReferenceController = pTStack_c0;
LAB_14ab662ba:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// Add @ 14ab66300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FHandle * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
::Add(TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
      *this,FHandle *__return_storage_ptr__,FGeneratedMaterialKey *param_1,
     FGeneratedMaterialData *param_2)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  FXxHash64 FVar9;
  FEntry *pFVar10;
  TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
  *pTVar11;
  FHandle *pFVar12;
  longlong lVar13;
  uint *puVar14;
  uint local_res8 [2];
  TReferenceControllerBase<1> *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  undefined1 local_98 [8];
  FEntry *local_90;
  undefined4 *local_88;
  TReferenceControllerBase<1> **local_80;
  uint *local_78;
  undefined4 local_70 [2];
  TReferenceControllerBase<1> *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
  local_50;
  TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
  local_40;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar9 = FXxHash64::HashBuffer
                    ((void *)(param_1->ParameterValuesBlob).AllocatorInstance._padding_,
                     (longlong)(param_1->ParameterValuesBlob).ArrayNum);
  uVar3 = param_1->Address;
  iVar8 = TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Mutable::Private::FGeneratedMaterialKey>
                    ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->KeyIndex,
                     (uVar3 >> 2) + 0x9e3779b9 + uVar3 * 0x40 + (int)FVar9.Hash ^ uVar3,param_1);
  if (iVar8 != -1) {
    lVar13 = (longlong)iVar8 * 0x20 + *(longlong *)&this->KeyIndex;
    puVar14 = (uint *)(lVar13 + 0x10);
    if (lVar13 == 0) {
      puVar14 = (uint *)0x0;
    }
    if (puVar14 != (uint *)0x0) {
      uVar3 = *puVar14;
      pFVar10 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
                ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
                               *)&this->Entries,uVar3);
      pFVar10->RefCount = pFVar10->RefCount + 1;
      pTVar11 = TSharedFromThis<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
                ::AsShared((TSharedFromThis<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
                            *)this,&local_50);
      pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
      local_b8 = pTVar11->Object;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        (__return_storage_ptr__->WeakRegistry).Object =
             (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
              *)0x0;
        (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        __return_storage_ptr__->Id = uVar3;
      }
      else {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        (__return_storage_ptr__->WeakRegistry).Object =
             (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
              *)0x0;
        (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        __return_storage_ptr__->Id = uVar3;
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController;
      (__return_storage_ptr__->WeakRegistry).Object = local_b8;
      (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar4;
      pTStack_b0 = pTVar4;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      goto LAB_14ab665fa;
    }
  }
  local_res8[0] = this->GlobalId;
  this->GlobalId = local_res8[0] + 1;
  pTStack_c0 = ::operator_new(0x30);
  if (pTStack_c0 == (TReferenceControllerBase<1> *)0x0) {
    local_c8 = ___xmm_00000000000000000000000000000010;
    pTStack_c0 = _UNK_150651568;
  }
  else {
    pTStack_c0->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_c0->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_c0->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeneratedMaterialKey_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    UE::Mutable::Private::FGeneratedMaterialKey::FGeneratedMaterialKey
              ((FGeneratedMaterialKey *)(pTStack_c0 + 1),param_1);
    local_c8 = pTStack_c0 + 1;
    if ((local_c8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FHandle *)(*pcVar5)();
      return pFVar12;
    }
  }
  local_70[0] = 1;
  if (pTStack_c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_c0->SharedReferenceCount = (atomic<int>)((int)pTStack_c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = (FEntry *)local_res8;
  local_88 = local_70;
  local_68 = local_c8;
  local_60 = pTStack_c0;
  TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_&,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry_&&>_>
            ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>,FDefaultSetAllocator>
              *)&this->Entries,
             (TPairInitializer<unsigned_int_&,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry_&&>
              *)local_98,(bool *)&local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  local_80 = &local_c8;
  local_78 = local_res8;
  TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer_&,unsigned_int_&>_>
            ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->KeyIndex,
             (TPairInitializer<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer_&,unsigned_int_&>
              *)(local_98 + 4),(bool *)&local_80);
  pTVar11 = TSharedFromThis<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
            ::AsShared((TSharedFromThis<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
                        *)this,&local_40);
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_a8 = pTVar11->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Id = local_res8[0];
    (__return_storage_ptr__->WeakRegistry).Object =
         (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
          *)0x0;
    (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Id = local_res8[0];
    (__return_storage_ptr__->WeakRegistry).Object =
         (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
          *)0x0;
    (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakRegistry).Object = local_a8;
  (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar4;
  pTStack_a0 = pTVar4;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  local_50.SharedReferenceCount.ReferenceController = pTStack_c0;
LAB_14ab665fa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// Add @ 14ab66640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FHandle * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::Add
          (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
           *this,FHandle *__return_storage_ptr__,FGeneratedMeshKey *param_1,
          FGeneratedMeshData *param_2)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  FXxHash64 FVar9;
  FEntry *pFVar10;
  TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
  *pTVar11;
  FHandle *pFVar12;
  longlong lVar13;
  uint *puVar14;
  uint local_res8 [2];
  TReferenceControllerBase<1> *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  undefined1 local_98 [8];
  FEntry *local_90;
  undefined4 *local_88;
  TReferenceControllerBase<1> **local_80;
  uint *local_78;
  undefined4 local_70 [2];
  TReferenceControllerBase<1> *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
  local_50;
  TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
  local_40;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar9 = FXxHash64::HashBuffer
                    ((void *)(param_1->ParameterValuesBlob).AllocatorInstance._padding_,
                     (longlong)(param_1->ParameterValuesBlob).ArrayNum);
  uVar3 = param_1->Address;
  iVar8 = TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Mutable::Private::FGeneratedMeshKey>
                    ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->KeyIndex,
                     (uVar3 >> 2) + 0x9e3779b9 + uVar3 * 0x40 + (int)FVar9.Hash ^ uVar3,param_1);
  if (iVar8 != -1) {
    lVar13 = (longlong)iVar8 * 0x20 + *(longlong *)&this->KeyIndex;
    puVar14 = (uint *)(lVar13 + 0x10);
    if (lVar13 == 0) {
      puVar14 = (uint *)0x0;
    }
    if (puVar14 != (uint *)0x0) {
      uVar3 = *puVar14;
      pFVar10 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                               *)&this->Entries,uVar3);
      pFVar10->RefCount = pFVar10->RefCount + 1;
      pTVar11 = TSharedFromThis<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
                ::AsShared((TSharedFromThis<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
                            *)this,&local_50);
      pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
      local_b8 = pTVar11->Object;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        (__return_storage_ptr__->WeakRegistry).Object =
             (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
              *)0x0;
        (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        __return_storage_ptr__->Id = uVar3;
      }
      else {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        (__return_storage_ptr__->WeakRegistry).Object =
             (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
              *)0x0;
        (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        __return_storage_ptr__->Id = uVar3;
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController;
      (__return_storage_ptr__->WeakRegistry).Object = local_b8;
      (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar4;
      pTStack_b0 = pTVar4;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      goto LAB_14ab6693a;
    }
  }
  local_res8[0] = this->GlobalId;
  this->GlobalId = local_res8[0] + 1;
  pTStack_c0 = ::operator_new(0x30);
  if (pTStack_c0 == (TReferenceControllerBase<1> *)0x0) {
    local_c8 = ___xmm_00000000000000000000000000000010;
    pTStack_c0 = _UNK_150651568;
  }
  else {
    pTStack_c0->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_c0->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_c0->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeneratedMeshKey_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    UE::Mutable::Private::FGeneratedMeshKey::FGeneratedMeshKey
              ((FGeneratedMeshKey *)(pTStack_c0 + 1),param_1);
    local_c8 = pTStack_c0 + 1;
    if ((local_c8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FHandle *)(*pcVar5)();
      return pFVar12;
    }
  }
  local_70[0] = 1;
  if (pTStack_c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_c0->SharedReferenceCount = (atomic<int>)((int)pTStack_c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = (FEntry *)local_res8;
  local_88 = local_70;
  local_68 = local_c8;
  local_60 = pTStack_c0;
  TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_&,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry_&&>_>
            ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
              *)&this->Entries,
             (TPairInitializer<unsigned_int_&,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry_&&>
              *)local_98,(bool *)&local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  local_80 = &local_c8;
  local_78 = local_res8;
  TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer_&,unsigned_int_&>_>
            ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->KeyIndex,
             (TPairInitializer<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer_&,unsigned_int_&>
              *)(local_98 + 4),(bool *)&local_80);
  pTVar11 = TSharedFromThis<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
            ::AsShared((TSharedFromThis<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
                        *)this,&local_40);
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_a8 = pTVar11->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Id = local_res8[0];
    (__return_storage_ptr__->WeakRegistry).Object =
         (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
          *)0x0;
    (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Id = local_res8[0];
    (__return_storage_ptr__->WeakRegistry).Object =
         (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
          *)0x0;
    (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakRegistry).Object = local_a8;
  (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar4;
  pTStack_a0 = pTVar4;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  local_50.SharedReferenceCount.ReferenceController = pTStack_c0;
LAB_14ab6693a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

