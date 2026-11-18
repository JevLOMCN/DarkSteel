// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 5

// FOnDemandContentHandle @ 1445874a0

FOnDemandContentHandle * __thiscall
UE::IoStore::FOnDemandContentHandle::FOnDemandContentHandle(FOnDemandContentHandle *this)

{
  (this->Handle).Object = (FOnDemandInternalContentHandle *)0x0;
  (this->Handle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FOnDemandContentHandle @ 144587950

void __thiscall
UE::IoStore::FOnDemandContentHandle::~FOnDemandContentHandle(FOnDemandContentHandle *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Handle).SharedReferenceCount.ReferenceController);
  return;
}

// Create @ 14458a6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FOnDemandContentHandle * __cdecl
UE::IoStore::FOnDemandContentHandle::Create
          (FOnDemandContentHandle *__return_storage_ptr__,TSharedString<wchar_t> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FOnDemandContentHandle *pFVar6;
  int *piVar7;
  FOnDemandInternalContentHandle *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FOnDemandContentHandle local_38;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->Handle).Object = (FOnDemandInternalContentHandle *)0x0;
  (__return_storage_ptr__->Handle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar5 = ::operator_new(0x28);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    local_38.Handle.Object = ___xmm_00000000000000000000000000000010;
    pFVar8 = (FOnDemandInternalContentHandle *)&DAT_00000010;
    local_38.Handle.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOnDemandInternalContentHandle_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    lVar2 = *(longlong *)param_1.Chars;
    piVar7 = (int *)(lVar2 + -8);
    if (lVar2 == 0) {
      pTVar5[1]._padding_ = 0;
      pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5[2]._padding_ = 0;
    }
    else {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
      pTVar5[1]._padding_ = lVar2;
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
      pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5[2]._padding_ = 0;
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        FMemory::Free(piVar7);
      }
    }
    pFVar8 = (FOnDemandInternalContentHandle *)(pTVar5 + 1);
    if (pFVar8 == (FOnDemandInternalContentHandle *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FOnDemandContentHandle *)(*pcVar3)();
        return pFVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_38.Handle.SharedReferenceCount.ReferenceController = pTVar5;
    pTVar9 = pTVar5;
    local_38.Handle.Object = pFVar8;
  }
  if (__return_storage_ptr__ != &local_38) {
    (__return_storage_ptr__->Handle).Object = pFVar8;
    local_38.Handle.Object = (FOnDemandInternalContentHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->Handle).SharedReferenceCount,
               &local_38.Handle.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Handle.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (*(longlong *)param_1.Chars != 0) {
    piVar7 = (int *)(*(longlong *)param_1.Chars + -8);
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(piVar7);
    }
  }
  return __return_storage_ptr__;
}

// Create @ 14458a880

FOnDemandContentHandle * __cdecl
UE::IoStore::FOnDemandContentHandle::Create
          (FOnDemandContentHandle *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  undefined4 *_Dst;
  size_t _Size;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_res8;
  
  local_res8 = (undefined4 *)0x0;
  iVar2 = (int)*(undefined8 *)&param_1->Size;
  if (iVar2 != 0) {
    puVar1 = FMemory::Malloc((longlong)iVar2 * 2 + 10,0);
    _Size = (longlong)iVar2 * 2;
    *puVar1 = 1;
    _Dst = puVar1 + 2;
    puVar1[1] = iVar2;
    local_res8 = _Dst;
    if (0 < iVar2) {
      memcpy(_Dst,param_1->DataPtr,_Size);
    }
    *(undefined2 *)((longlong)_Dst + _Size) = 0;
  }
  Create(__return_storage_ptr__,(TSharedString<wchar_t>)&local_res8);
  return __return_storage_ptr__;
}

// Create @ 14458a920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FOnDemandContentHandle * __cdecl
UE::IoStore::FOnDemandContentHandle::Create(FOnDemandContentHandle *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined4 *puVar4;
  FOnDemandContentHandle *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FOnDemandInternalContentHandle *pFVar7;
  FOnDemandContentHandle local_28;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->Handle).Object = (FOnDemandInternalContentHandle *)0x0;
  (__return_storage_ptr__->Handle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = ::operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    local_28.Handle.Object = ___xmm_00000000000000000000000000000010;
    pFVar7 = (FOnDemandInternalContentHandle *)&DAT_00000010;
    local_28.Handle.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOnDemandInternalContentHandle_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    puVar4 = FMemory::Malloc(0x16,0);
    pFVar7 = (FOnDemandInternalContentHandle *)(pTVar3 + 1);
    *puVar4 = 1;
    puVar4[1] = 6;
    pTVar3[1]._padding_ = (longlong)(puVar4 + 2);
    *(undefined8 *)(puVar4 + 2) = u_NoName._0_8_;
    puVar4[4] = u_NoName._8_4_;
    *(undefined2 *)(pTVar3[1]._padding_ + 0xc) = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    if (pFVar7 == (FOnDemandInternalContentHandle *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FOnDemandContentHandle *)(*pcVar1)();
        return pFVar5;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.Handle.SharedReferenceCount.ReferenceController = pTVar3;
    pTVar6 = pTVar3;
    local_28.Handle.Object = pFVar7;
  }
  if (__return_storage_ptr__ != &local_28) {
    (__return_storage_ptr__->Handle).Object = pFVar7;
    local_28.Handle.Object = (FOnDemandInternalContentHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->Handle).SharedReferenceCount,
               &local_28.Handle.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Handle.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

