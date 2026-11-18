// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 13

// FPackageResourceIoBackend @ 14212ba10

FPackageResourceIoBackend * __thiscall
UE::FPackageResourceIoBackend::FPackageResourceIoBackend
          (FPackageResourceIoBackend *this,IPackageResourceManager *param_1)

{
  this->ResourceMgr = param_1;
  this->_padding_ = (longlong)&___7FPackageResourceIoBackend_UE__6B_;
  (this->BackendContext).Object = (FIoDispatcherBackendContext *)0x0;
  (this->BackendContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PendingRequests,4000);
  *(undefined8 *)&(this->PendingRequests).Lookup = 0;
  *(undefined8 *)&(this->PendingRequests).Lookup.field_0x8 = 0;
  *(undefined8 *)&(this->PendingRequests).Lookup.field_0x20 = 0;
  *(undefined4 *)&(this->PendingRequests).Lookup.field_0x28 = 0;
  *(undefined4 *)&(this->PendingRequests).Lookup.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingRequests).Lookup.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingRequests).Lookup.field_0x34 = 0;
  *(undefined8 *)&(this->PendingRequests).Lookup.field_0x40 = 0;
  *(undefined4 *)&(this->PendingRequests).Lookup.field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CompletedRequests,4000);
  (this->CompletedRequests).Head = (FIoRequestImpl *)0x0;
  (this->CompletedRequests).Tail = (FIoRequestImpl *)0x0;
  return this;
}

// ~FPackageResourceIoBackend @ 14212c940

void __thiscall
UE::FPackageResourceIoBackend::~FPackageResourceIoBackend(FPackageResourceIoBackend *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FPackageResourceIoBackend_UE__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CompletedRequests);
  *(undefined4 *)&(this->PendingRequests).Lookup.field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingRequests).Lookup.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PendingRequests).Lookup);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PendingRequests);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackendContext).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 14212f620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IAsyncReadRequest * __thiscall
`UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()
          (void *this,IAsyncReadFileHandle *param_1)

{
  int iVar1;
  FIoRequestImpl *pFVar2;
  IAsyncReadRequest *pIVar3;
  undefined ***pppuVar4;
  char cVar5;
  undefined1 auStack_78 [32];
  code **local_58;
  void *local_50;
  code *local_48 [2];
  undefined **local_38;
  IIoDispatcherBackend *local_30;
  FIoRequestImpl *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar2 = *(FIoRequestImpl **)((longlong)this + 8);
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``UE::FPackageResourceIoBackend::Resolve'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  cVar5 = '\0';
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
                ::Call;
  local_30 = *(IIoDispatcherBackend **)this;
  iVar1 = pFVar2->Priority;
  if (-0x40000001 < iVar1) {
    if (iVar1 < -1) {
      cVar5 = '\x01';
    }
    else if (iVar1 < 0) {
      cVar5 = '\x02';
    }
    else if (iVar1 < 0x3fffffff) {
      cVar5 = '\x03';
    }
    else {
      cVar5 = (0x7ffffffe < iVar1) + '\x04';
    }
  }
  local_28 = pFVar2;
  FIoStoreTrace::RequestStarted(pFVar2,local_30);
  local_50 = (pFVar2->Options).TargetVa;
  local_58 = local_48;
  pIVar3 = (IAsyncReadRequest *)
           (**(code **)((longlong)*param_1 + 0x10))
                     (param_1,(pFVar2->Options).RequestedOffset,(pFVar2->Options).RequestedSize,
                      cVar5);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return pIVar3;
}

// CancelIoRequest @ 142133bd0

void __thiscall
UE::FPackageResourceIoBackend::CancelIoRequest
          (FPackageResourceIoBackend *this,FIoRequestImpl *param_1)

{
  FPendingRequests *lpCriticalSection;
  IAsyncReadRequest *pIVar1;
  FHandles *pFVar2;
  
  lpCriticalSection = &this->PendingRequests;
  if (lpCriticalSection != (FPendingRequests *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = TMapBase<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,0>_>
             ::Find((TMapBase<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,0>_>
                     *)&(this->PendingRequests).Lookup,param_1);
    if ((pFVar2 != (FHandles *)0x0) &&
       (pIVar1 = (pFVar2->RequestHandle).Ptr, pIVar1->bCanceled == false)) {
      pIVar1->bCanceled = true;
      pIVar1->bDataIsReady = true;
      if (pIVar1->bCompleteAndCallbackCalled == false) {
        (**(code **)(*(longlong *)pIVar1 + 0x18))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000142133c2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// DoesChunkExist @ 142138190

bool __thiscall
UE::FPackageResourceIoBackend::DoesChunkExist(FPackageResourceIoBackend *this,FIoChunkId *param_1)

{
  uchar uVar1;
  uchar uVar2;
  bool bVar3;
  undefined1 uVar4;
  FPackagePath local_18;
  
  local_18.PackageName.ComparisonIndex.Value = 0;
  local_18.PackageName.Number = 0;
  local_18.HeaderExtension = Unspecified;
  if (param_1->Id[0xb] == '\r') {
    uVar1 = param_1->Id[9];
    uVar2 = param_1->Id[8];
    bVar3 = FPackagePath::TryFromPackageName(*(FName *)param_1->Id,&local_18);
    if (bVar3) {
      uVar4 = (**(code **)((longlong)*this->ResourceMgr + 0x18))
                        (this->ResourceMgr,&local_18,uVar2,uVar1,0);
      return (bool)uVar4;
    }
  }
  return false;
}

// GetCompletedIoRequests @ 14213d170

FIoRequestImpl * __thiscall
UE::FPackageResourceIoBackend::GetCompletedIoRequests(FPackageResourceIoBackend *this)

{
  FIoRequestImpl **ppFVar1;
  FCompletedRequests *lpCriticalSection;
  FIoRequestImpl *pFVar2;
  IAsyncReadRequest *pIVar3;
  FHandles *pFVar4;
  uint uVar5;
  FIoRequestImpl *pFVar6;
  FPendingRequests *lpCriticalSection_00;
  FIoRequestImpl *local_res8;
  
  lpCriticalSection = &this->CompletedRequests;
  if (lpCriticalSection == (FCompletedRequests *)0x0) {
LAB_14213d291:
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->CompletedRequests).Head;
  (this->CompletedRequests).Tail = (FIoRequestImpl *)0x0;
  (this->CompletedRequests).Head = (FIoRequestImpl *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (pFVar2 != (FIoRequestImpl *)0x0) {
    lpCriticalSection_00 = &this->PendingRequests;
    pFVar6 = pFVar2;
    if (lpCriticalSection_00 == (FPendingRequests *)0x0) goto LAB_14213d291;
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      pFVar4 = TMapBase<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,0>_>
               ::Find((TMapBase<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,0>_>
                       *)&(this->PendingRequests).Lookup,pFVar6);
      if (pFVar4 != (FHandles *)0x0) {
        pIVar3 = (pFVar4->RequestHandle).Ptr;
        if (pIVar3->bCompleteAndCallbackCalled == false) {
          (**(code **)(*(longlong *)pIVar3 + 0x10))(pIVar3,0);
        }
        pIVar3 = (pFVar4->RequestHandle).Ptr;
        if (pIVar3 != (IAsyncReadRequest *)0x0) {
          (pFVar4->RequestHandle).Ptr = (IAsyncReadRequest *)0x0;
          (*(code *)**(undefined8 **)pIVar3)(pIVar3,1);
        }
        local_res8 = pFVar6;
        if (*(int *)&(this->PendingRequests).Lookup.field_0x8 !=
            *(int *)&(this->PendingRequests).Lookup.field_0x34) {
          uVar5 = ((uint)((ulonglong)pFVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar6 >> 4)) *
                  -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          TSet<TTuple<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles>,TDefaultMapHashableKeyFuncs<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,0>,FDefaultSetAllocator>
          ::RemoveImpl<FIoRequestImpl_const_*>
                    ((TSet<TTuple<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles>,TDefaultMapHashableKeyFuncs<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,0>,FDefaultSetAllocator>
                      *)&(this->PendingRequests).Lookup,uVar5 >> 0x10 ^ uVar5,&local_res8);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      ppFVar1 = &pFVar6->NextRequest;
      pFVar6 = *ppFVar1;
    } while (*ppFVar1 != (FIoRequestImpl *)0x0);
  }
  return pFVar2;
}

// GetName @ 14213d9e0

wchar_t * __thiscall UE::FPackageResourceIoBackend::GetName(FPackageResourceIoBackend *this)

{
  return L"PackageResource";
}

// GetSizeForChunk @ 14213eb50

TIoStatusOr<unsigned___int64> * __thiscall
UE::FPackageResourceIoBackend::GetSizeForChunk
          (FPackageResourceIoBackend *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1)

{
  uchar uVar1;
  uchar uVar2;
  bool bVar3;
  longlong lVar4;
  FIoStatus *pFVar5;
  FPackagePath local_28;
  FIoStatus local_18;
  
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.HeaderExtension = Unspecified;
  if (param_1->Id[0xb] == '\r') {
    uVar1 = param_1->Id[9];
    uVar2 = param_1->Id[8];
    bVar3 = FPackagePath::TryFromPackageName(*(FName *)param_1->Id,&local_28);
    if ((bVar3) &&
       (lVar4 = (**(code **)((longlong)*this->ResourceMgr + 0x20))
                          (this->ResourceMgr,&local_28,uVar2,uVar1,0), 0 < lVar4)) {
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
      *(longlong *)(__return_storage_ptr__->Value).Pad = lVar4;
      return __return_storage_ptr__;
    }
  }
  pFVar5 = FIoStatus::FIoStatus(&local_18,NotFound);
  TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>(__return_storage_ptr__,pFVar5);
  return __return_storage_ptr__;
}

// Initialize @ 142142970

void __thiscall
UE::FPackageResourceIoBackend::Initialize
          (FPackageResourceIoBackend *this,TSharedRef<FIoDispatcherBackendContext_const_,1> *param_1
          )

{
  FIoDispatcherBackendContext *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->BackendContext != (TSharedPtr<FIoDispatcherBackendContext_const_,1> *)&local_18) {
    (this->BackendContext).Object = local_18;
    local_18 = (FIoDispatcherBackendContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BackendContext).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenMapped @ 142145d80

TIoStatusOr<FIoMappedRegion> * __thiscall
UE::FPackageResourceIoBackend::OpenMapped
          (FPackageResourceIoBackend *this,TIoStatusOr<FIoMappedRegion> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoReadOptions *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  FIoStatus *pFVar4;
  FPackagePath local_28;
  FIoStatus local_18;
  
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.HeaderExtension = Unspecified;
  if ((param_1->Id[0xb] != '\r') ||
     (bVar1 = FPackagePath::TryFromPackageName(*(FName *)param_1->Id,&local_28), !bVar1)) {
    pFVar4 = FIoStatus::FIoStatus(&local_18,NotFound);
    TIoStatusOr<FIoMappedRegion>::TIoStatusOr<FIoMappedRegion>(__return_storage_ptr__,pFVar4);
    return __return_storage_ptr__;
  }
  plVar2 = (longlong *)
           (**(code **)((longlong)*this->ResourceMgr + 0x38))(this->ResourceMgr,&local_28,0,0);
  if ((plVar2 != (longlong *)0x0) &&
     (lVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_2->RequestedOffset,param_2->RequestedSize,0),
     lVar3 != 0)) {
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(longlong **)(__return_storage_ptr__->Value).Pad = plVar2;
    *(longlong *)((__return_storage_ptr__->Value).Pad + 8) = lVar3;
    return __return_storage_ptr__;
  }
  pFVar4 = FIoStatus::FIoStatus(&local_18,NotFound);
  TIoStatusOr<FIoMappedRegion>::TIoStatusOr<FIoMappedRegion>(__return_storage_ptr__,pFVar4);
  if (plVar2 == (longlong *)0x0) {
    return __return_storage_ptr__;
  }
  (**(code **)*plVar2)(plVar2,1);
  return __return_storage_ptr__;
}

// Resolve @ 14214acc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::FPackageResourceIoBackend::Resolve(FPackageResourceIoBackend *this,FIoRequestImpl *param_1)

{
  int *piVar1;
  FPendingRequests *lpCriticalSection;
  FCompletedRequests *lpCriticalSection_00;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  IPackageResourceManager *pIVar5;
  IPackageResourceManager IVar6;
  FScriptContainerElement *pFVar7;
  BufCore *this_00;
  FIoRequestImpl *pFVar8;
  IAsyncReadFileHandle *pIVar9;
  IAsyncReadRequest *pIVar10;
  code *pcVar11;
  FPackageResourceIoBackend *pFVar12;
  bool bVar13;
  undefined1 uVar14;
  FString *pFVar15;
  undefined8 *puVar16;
  FIoBuffer *pFVar17;
  FIoDispatcherBackendContext *this_01;
  void *pvVar18;
  IAsyncReadRequest *pIVar19;
  undefined ***pppuVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined1 auStack_178 [32];
  uchar local_158;
  uchar local_148;
  undefined1 local_144 [4];
  FPackagePath local_140;
  undefined4 local_130;
  undefined4 uStack_12c;
  FIoBuffer local_128;
  FIoBuffer local_120;
  BufCore *local_118;
  FPackageResourceIoBackend *local_110;
  FIoRequestImpl *local_108;
  FIoRequestImpl **local_100;
  undefined8 local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong local_e8 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 *local_c8 [2];
  FString local_b8;
  undefined8 *local_a8 [2];
  FReadAccessScope local_98;
  code *local_78;
  undefined **local_68;
  FPackageResourceIoBackend *local_60;
  FIoRequestImpl *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  plVar23 = (longlong *)0x0;
  local_144 = (undefined1  [4])0x0;
  local_140.PackageName.ComparisonIndex.Value = 0;
  local_140.PackageName.Number = 0;
  local_140.HeaderExtension = Unspecified;
  if ((param_1->ChunkId).Id[0xb] == '\r') {
    local_130 = *(undefined4 *)(param_1->ChunkId).Id;
    uVar2 = (param_1->ChunkId).Id[10];
    uVar3 = (param_1->ChunkId).Id[8];
    uStack_12c = *(undefined4 *)((param_1->ChunkId).Id + 4);
    local_148 = (param_1->ChunkId).Id[9];
    local_110 = this;
    bVar13 = FPackagePath::TryFromPackageName(*(FName *)(param_1->ChunkId).Id,&local_140);
    if (bVar13) {
      if (((uVar2 != '\0') && (uVar3 != '\0')) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bExternalResource || CookedIndex.IsDefault()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceIoDispatcherBackend.cpp"
                              ,0xf0,
                              L"Cannot use \'CookedIndices\' with packages in the workspace domain")
         , bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      pIVar5 = this->ResourceMgr;
      IVar6 = *pIVar5;
      if (uVar2 == '\0') {
        local_158 = local_148;
        puVar16 = (undefined8 *)(**(code **)((longlong)IVar6 + 0x30))(pIVar5,local_a8,&local_140);
        plVar22 = (longlong *)*puVar16;
        *puVar16 = 0;
        if (local_a8[0] != (undefined8 *)0x0) {
          (**(code **)*local_a8[0])();
        }
      }
      else {
        pFVar15 = FPackagePath::GetPackageName(&local_140,&local_b8);
        pFVar7 = (pFVar15->Data).AllocatorInstance.Data;
        iVar4 = (pFVar15->Data).ArrayNum;
        iStack_f0 = iVar4 + -1;
        if (iVar4 == 0) {
          iStack_f0 = 0;
        }
        local_f8._0_4_ = SUB84(pFVar7,0);
        local_f8._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
        local_d8 = (undefined4)local_f8;
        uStack_d4 = local_f8._4_4_;
        uStack_cc = uStack_ec;
        local_f8 = pFVar7;
        iStack_d0 = iStack_f0;
        puVar16 = (undefined8 *)(**(code **)((longlong)IVar6 + 0x50))(pIVar5,local_c8,0);
        plVar22 = (longlong *)*puVar16;
        *puVar16 = 0;
        if (local_c8[0] != (undefined8 *)0x0) {
          (**(code **)*local_c8[0])();
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      if (plVar22 == (longlong *)0x0) {
        return false;
      }
      if ((param_1->Options).RequestedSize == 0) {
        pvVar18 = (param_1->Options).TargetVa;
        bVar13 = pvVar18 == (void *)0x0;
        if (bVar13) {
          pFVar17 = FIoBuffer::FIoBuffer(&local_128,0);
        }
        else {
          pFVar17 = FIoBuffer::FIoBuffer(&local_120,Wrap,pvVar18,0);
        }
        this_00 = (pFVar17->CorePtr).Reference;
        (pFVar17->CorePtr).Reference = (BufCore *)0x0;
        if ((bVar13) && (local_128.CorePtr.Reference != (BufCore *)0x0)) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)local_128.CorePtr.Reference);
          LOCK();
          piVar1 = (int *)((longlong)local_128.CorePtr.Reference + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)local_128.CorePtr.Reference);
            ::operator_delete((void *)local_128.CorePtr.Reference,0x20);
          }
        }
        if ((!bVar13) && (local_120.CorePtr.Reference != (BufCore *)0x0)) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)local_120.CorePtr.Reference);
          LOCK();
          piVar1 = (int *)((longlong)local_120.CorePtr.Reference + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)local_120.CorePtr.Reference);
            ::operator_delete((void *)local_120.CorePtr.Reference,0x20);
          }
        }
        if (this_00 != (BufCore *)0x0) {
          LOCK();
          this_00->NumRefs = this_00->NumRefs + 1;
          UNLOCK();
        }
        local_118 = this_00;
        FIoRequestImpl::SetResult(param_1,(FIoBuffer)&local_118);
        pFVar12 = local_110;
        lpCriticalSection_00 = &local_110->CompletedRequests;
        if (lpCriticalSection_00 == (FCompletedRequests *)0x0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        pFVar8 = (pFVar12->CompletedRequests).Tail;
        if (pFVar8 == (FIoRequestImpl *)0x0) {
          (pFVar12->CompletedRequests).Head = param_1;
        }
        else {
          pFVar8->NextRequest = param_1;
        }
        (pFVar12->CompletedRequests).Tail = param_1;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        this_01 = TSharedPtr<FIoDispatcherBackendContext_const_,1>::operator->
                            (&pFVar12->BackendContext);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_98);
        if (*(int *)&(this_01->WakeUpDispatcherThreadDelegate).field_0x10 != 0) {
          plVar23 = *(longlong **)&(this_01->WakeUpDispatcherThreadDelegate).field_0x8;
        }
        (**(code **)(*plVar23 + 0x60))(plVar23);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_98);
        if (this_00 != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount(this_00);
          LOCK();
          piVar1 = &this_00->NumRefs;
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            FIoBuffer::BufCore::~BufCore(this_00);
            ::operator_delete(this_00,0x20);
          }
        }
      }
      else {
        lpCriticalSection = &this->PendingRequests;
        local_50 = (undefined ***)0x0;
        local_68 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::FPackageResourceIoBackend::Resolve'::`2'::<lambda_1>,0,0>
                    ::_vftable_;
        local_78 = Core::Private::Function::
                   TFunctionRefCaller<`UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>,IAsyncReadRequest_*,IAsyncReadFileHandle_&>
                   ::Call;
        local_108 = param_1;
        local_60 = this;
        local_58 = param_1;
        if (lpCriticalSection == (FPendingRequests *)0x0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        local_100 = &local_108;
        TSet<TTuple<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles>,TDefaultMapHashableKeyFuncs<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<FIoRequestImpl_*_const_&>_>
                  ((TSet<TTuple<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles>,TDefaultMapHashableKeyFuncs<FIoRequestImpl_*,UE::FPackageResourceIoBackend::FPendingRequests::FHandles,0>,FDefaultSetAllocator>
                    *)&(this->PendingRequests).Lookup,
                   (TKeyInitializer<FIoRequestImpl_*_const_&> *)local_144,(bool *)&local_100);
        plVar21 = (longlong *)
                  (*(longlong *)&(this->PendingRequests).Lookup +
                  (longlong)(int)local_144 * 0x20 + 8);
        if (plVar21 != local_e8) {
          puVar16 = (undefined8 *)*plVar21;
          *plVar21 = (longlong)plVar22;
          plVar22 = plVar23;
          if (puVar16 != (undefined8 *)0x0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
        pIVar9 = (IAsyncReadFileHandle *)*plVar21;
        Core::Private::Function::CheckCallable(local_78);
        pcVar11 = local_78;
        pppuVar20 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar20 = local_50;
        }
        pvVar18 = (void *)(*(code *)(*pppuVar20)[1])();
        if (pcVar11 ==
            Core::Private::Function::
            TFunctionRefCaller<`UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>,IAsyncReadRequest_*,IAsyncReadFileHandle_&>
            ::Call) {
          pIVar19 = `UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()
                              (pvVar18,pIVar9);
        }
        else {
          pIVar19 = (IAsyncReadRequest *)(*pcVar11)();
        }
        pIVar10 = (IAsyncReadRequest *)plVar21[1];
        if ((pIVar10 != pIVar19) &&
           (plVar21[1] = (longlong)pIVar19, pIVar10 != (IAsyncReadRequest *)0x0)) {
          (*(code *)**(undefined8 **)pIVar10)(pIVar10,1);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (local_78 != (code *)0x0) {
          pppuVar20 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar20 = local_50;
          }
          (*(code *)(*pppuVar20)[2])();
        }
        if (plVar22 == (longlong *)0x0) {
          return true;
        }
      }
      (**(code **)*plVar22)(plVar22,1);
      return true;
    }
  }
  return false;
}

// ResolveIoRequests @ 14214b140

void __thiscall
UE::FPackageResourceIoBackend::ResolveIoRequests
          (FPackageResourceIoBackend *this,
          TIntrusiveList<UE::Private::FIoRequestListTraits> *param_1,
          TIntrusiveList<UE::Private::FIoRequestListTraits> *param_2)

{
  FIoRequestImpl *pFVar1;
  FIoRequestImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  do {
    while( true ) {
      do {
        pFVar1 = param_1->Head;
        if (pFVar1 == (FIoRequestImpl *)0x0) {
          return;
        }
        pFVar2 = pFVar1->NextRequest;
        param_1->Head = pFVar2;
        if (pFVar2 == (FIoRequestImpl *)0x0) {
          param_1->Tail = (FIoRequestImpl *)0x0;
        }
        pFVar1->NextRequest = (FIoRequestImpl *)0x0;
        bVar4 = Resolve(this,pFVar1);
      } while (bVar4);
      if (pFVar1->NextRequest != (FIoRequestImpl *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x72,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (param_2->Tail != (FIoRequestImpl *)0x0) break;
      if (param_2->Head != (FIoRequestImpl *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Head == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x7c,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      param_2->Tail = pFVar1;
      param_2->Head = pFVar1;
    }
    if (param_2->Head == (FIoRequestImpl *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Head != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                         ,0x76,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2->Tail->NextRequest = pFVar1;
    param_2->Tail = pFVar1;
  } while( true );
}

// UpdatePriorityForIoRequest @ 142154730

void __thiscall
UE::FPackageResourceIoBackend::UpdatePriorityForIoRequest
          (FPackageResourceIoBackend *this,FIoRequestImpl *param_1)

{
  return;
}

