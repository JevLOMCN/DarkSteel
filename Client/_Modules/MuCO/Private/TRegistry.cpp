// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 5

// ~TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData> @ 14aba0e00

void __thiscall
TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
~TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
          (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
           *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  *(undefined4 *)&(this->KeyIndex).field_0x48 = 0;
  pvVar3 = *(void **)&(this->KeyIndex).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyIndex);
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Entries).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// ~TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData> @ 14aba0e90

void __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
::
~TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
          (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
           *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  *(undefined4 *)&(this->KeyIndex).field_0x48 = 0;
  pvVar3 = *(void **)&(this->KeyIndex).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyIndex);
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Entries).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// ~TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData> @ 14aba0f20

void __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::
~TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
          (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
           *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  *(undefined4 *)&(this->KeyIndex).field_0x48 = 0;
  pvVar3 = *(void **)&(this->KeyIndex).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyIndex);
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Entries).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// ~TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_> @ 14aba0fb0

void __thiscall
TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
::
~TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
          (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
           *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  *(undefined4 *)&(this->KeyIndex).field_0x48 = 0;
  pvVar3 = *(void **)&(this->KeyIndex).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyIndex);
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Entries).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// Add @ 14abc2ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FHandle * __thiscall
TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
::Add(TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
      *this,FHandle *__return_storage_ptr__,
     TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
     *param_1,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FHandle *pFVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  FEntry *pFVar10;
  TSharedRef<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
  *pTVar11;
  FHandle *pFVar12;
  uint local_res8 [2];
  TReferenceControllerBase<1> *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
  *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
  *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  undefined1 local_a8 [8];
  FEntry *local_a0;
  undefined4 *local_98;
  TReferenceControllerBase<1> **local_90;
  uint *local_88;
  undefined4 local_80 [2];
  TReferenceControllerBase<1> *local_78;
  TReferenceControllerBase<1> *local_70;
  FWeakObjectPtr local_68;
  TSharedRef<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
  local_60;
  TSharedRef<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
  local_50;
  
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  uVar8 = GetTypeHash<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle>
                    (param_1);
  puVar9 = TMapBase<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,0>_>
           ::
           FindByHash<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>_>
                     ((TMapBase<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,0>_>
                       *)&this->KeyIndex,uVar8,param_1);
  if (puVar9 == (uint *)0x0) {
    local_res8[0] = this->GlobalId;
    this->GlobalId = local_res8[0] + 1;
    pTStack_d0 = ::operator_new(0x20);
    if (pTStack_d0 == (TReferenceControllerBase<1> *)0x0) {
      local_d8 = ___xmm_00000000000000000000000000000010;
      pTStack_d0 = _UNK_150651568;
    }
    else {
      pTStack_d0->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3 = pTStack_d0 + 1;
      pTStack_d0->WeakReferenceCount = (atomic<int>)0x1;
      pTStack_d0->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_VFHandle___TRegistry_UFGeneratedMeshKey_Private_Mutable_UE__UFGeneratedMeshData_234___V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      pTVar3->_padding_ = 0;
      aVar2 = (atomic<int>)param_1->ArrayNum;
      pFVar4 = (FHandle *)(param_1->AllocatorInstance).Data;
      pTStack_d0[1].SharedReferenceCount = aVar2;
      if (aVar2 == (atomic<int>)0x0) {
        pTStack_d0[1].WeakReferenceCount = (atomic<int>)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)aVar2,0,(ForAnyElementType *)pTVar3,(int)aVar2,
                   (int *)&pTStack_d0[1].WeakReferenceCount);
        ConstructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
                  ((FScriptContainerElement *)pTVar3->_padding_,pFVar4,(int)aVar2);
      }
      local_d8 = pTStack_d0 + 1;
      if ((local_d8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FHandle *)(*pcVar5)();
        return pFVar12;
      }
    }
    local_80[0] = 1;
    if (pTStack_d0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_d0->SharedReferenceCount = (atomic<int>)((int)pTStack_d0->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = param_2->WeakPtr;
    local_a0 = (FEntry *)local_res8;
    local_98 = local_80;
    local_78 = local_d8;
    local_70 = pTStack_d0;
    TSet<TTuple<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned_int_&,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry_&&>_>
              ((TSet<TTuple<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,0>,FDefaultSetAllocator>
                *)&this->Entries,
               (TPairInitializer<unsigned_int_&,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry_&&>
                *)local_a8,(bool *)&local_a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    local_90 = &local_d8;
    local_88 = local_res8;
    TSet<TTuple<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer_&,unsigned_int_&>_>
              ((TSet<TTuple<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->KeyIndex,
               (TPairInitializer<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer_&,unsigned_int_&>
                *)(local_a8 + 4),(bool *)&local_90);
    pTVar11 = TSharedFromThis<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
              ::AsShared((TSharedFromThis<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
                          *)this,&local_50);
    pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
    local_b8 = pTVar11->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Id = local_res8[0];
      (__return_storage_ptr__->WeakRegistry).Object =
           (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
            *)0x0;
      (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Id = local_res8[0];
      (__return_storage_ptr__->WeakRegistry).Object =
           (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
            *)0x0;
      (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController;
    (__return_storage_ptr__->WeakRegistry).Object = local_b8;
    (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar3;
    pTStack_b0 = pTVar3;
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
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    local_60.SharedReferenceCount.ReferenceController = pTStack_d0;
  }
  else {
    uVar8 = *puVar9;
    pFVar10 = TMapBase<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,0>_>
              ::FindChecked((TMapBase<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,0>_>
                             *)&this->Entries,uVar8);
    pFVar10->RefCount = pFVar10->RefCount + 1;
    pTVar11 = TSharedFromThis<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
              ::AsShared((TSharedFromThis<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
                          *)this,&local_60);
    pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
    local_c8 = pTVar11->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      (__return_storage_ptr__->WeakRegistry).Object =
           (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
            *)0x0;
      (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->Id = uVar8;
    }
    else {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
      (__return_storage_ptr__->WeakRegistry).Object =
           (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
            *)0x0;
      (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->Id = uVar8;
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController;
    (__return_storage_ptr__->WeakRegistry).Object = local_c8;
    (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar3;
    pTStack_c0 = pTVar3;
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
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return __return_storage_ptr__;
}

