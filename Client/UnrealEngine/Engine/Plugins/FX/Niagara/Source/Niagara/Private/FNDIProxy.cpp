// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 38

// ConsumePerInstanceDataFromGameThread @ 148e5e560

void __thiscall
NDIActorComponentLocal::FNDIProxy::ConsumePerInstanceDataFromGameThread
          (FNDIProxy *this,void *param_1,ulong64 *param_2)

{
  double dVar1;
  FInstanceData_RenderThread *pFVar2;
  
  pFVar2 = TMapBase<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread,0>_>
                       *)&this->SystemInstancesToInstanceData_RT,
                      (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  pFVar2->bCachedValid = *(bool *)param_1;
  dVar1 = *(double *)((longlong)param_1 + 0x18);
  (pFVar2->CachedTransform).Rotation.XY.m128d_f64[0] = *(double *)((longlong)param_1 + 0x10);
  (pFVar2->CachedTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)((longlong)param_1 + 0x28);
  (pFVar2->CachedTransform).Rotation.ZW.m128d_f64[0] = *(double *)((longlong)param_1 + 0x20);
  (pFVar2->CachedTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = *(double *)((longlong)param_1 + 0x38);
  (pFVar2->CachedTransform).Translation.XY.m128d_f64[0] = *(double *)((longlong)param_1 + 0x30);
  (pFVar2->CachedTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)((longlong)param_1 + 0x48);
  (pFVar2->CachedTransform).Translation.ZW.m128d_f64[0] = *(double *)((longlong)param_1 + 0x40);
  (pFVar2->CachedTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = *(double *)((longlong)param_1 + 0x58);
  (pFVar2->CachedTransform).Scale3D.XY.m128d_f64[0] = *(double *)((longlong)param_1 + 0x50);
  (pFVar2->CachedTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)((longlong)param_1 + 0x68);
  (pFVar2->CachedTransform).Scale3D.ZW.m128d_f64[0] = *(double *)((longlong)param_1 + 0x60);
  (pFVar2->CachedTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  *(undefined8 *)&(pFVar2->CachedVelocity).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x70);
  (pFVar2->CachedVelocity).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0x78);
  return;
}

// ConsumePerInstanceDataFromGameThread @ 148e5e5e0

void __thiscall
NDIArrayDistributionIntPrivate::FNDIProxy::ConsumePerInstanceDataFromGameThread
          (FNDIProxy *this,void *param_1,ulong64 *param_2)

{
  return;
}

// ConsumePerInstanceDataFromGameThread @ 148e5e5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
NDIConsoleVariableLocal::FNDIProxy::ConsumePerInstanceDataFromGameThread
          (FNDIProxy *this,void *param_1,ulong64 *param_2)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar1;
  bool bVar2;
  FReadBuffer *this_02;
  void *_Dst;
  uint uVar3;
  
  this_02 = &TMapBase<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread,0>_>
             ::FindOrAddImpl<unsigned___int64_const_&>
                       ((TMapBase<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread,0>_>
                         *)&this->PerInstanceData_RenderThread,
                        (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2)->ConsoleVariableData
  ;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = *(int *)((longlong)param_1 + 8) << 2;
  if (this_02->NumBytes != uVar3) {
    this_02->NumBytes = 0;
    this_00 = (this_02->Buffer).Reference;
    if (this_00 != (FRHIBuffer *)0x0) {
      (this_02->Buffer).Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    this_01 = (this_02->SRV).Reference;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      (this_02->SRV).Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)this_01);
    }
    FReadBuffer::Initialize
              (this_02,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               L"NiagaraConsoleVariable",4,uVar3,PF_R32_UINT,None,
               (FResourceArrayUploadInterface *)0x0);
  }
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                    (this_02->Buffer).Reference,0,uVar3,RLM_WriteOnly);
  memcpy(_Dst,*(void **)param_1,(longlong)(int)uVar3);
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (this_02->Buffer).Reference);
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 148e75960

int __thiscall
NDIActorComponentLocal::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0x80;
}

// PerInstanceDataPassedToRenderThreadSize @ 148e75970

int __thiscall
NDIArrayDistributionIntPrivate::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0;
}

// PerInstanceDataPassedToRenderThreadSize @ 148e75980

int __thiscall
NDIConsoleVariableLocal::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0x10;
}

// ProvidePerInstanceDataForRenderThread @ 148e78b30

void __thiscall
NDIConsoleVariableLocal::FNDIProxy::ProvidePerInstanceDataForRenderThread
          (FNDIProxy *this,void *param_1,void *param_2,ulong64 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  
  *(undefined8 *)param_1 = 0;
  *(int *)((longlong)param_1 + 8) = 0;
  *(int *)((longlong)param_1 + 0xc) = 0;
  iVar2 = *(int *)((longlong)param_2 + 0x48);
  iVar9 = 1;
  if (1 < iVar2) {
    iVar9 = iVar2;
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar9 * 2,param_1,(int *)((longlong)param_1 + 8),
                     (int *)((longlong)param_1 + 0xc));
  memset((void *)(*(longlong *)param_1 + (longlong)iVar6 * 4),0,(longlong)(iVar9 * 2) << 2);
  uVar11 = 0;
  if (0 < iVar2) {
    lVar10 = 0;
    uVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < *(int *)((longlong)param_2 + 0x48)) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      cVar1 = *(char *)(*(longlong *)((longlong)param_2 + 0x40) + lVar10 * 8);
      uVar7 = 0;
      if ((int)uVar11 < *(int *)((longlong)param_2 + 0x48)) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = *(uint *)(*(longlong *)((longlong)param_2 + 0x40) + 4 + lVar10 * 8);
      uVar8 = 0;
      if ((int)uVar12 < *(int *)((longlong)param_1 + 8)) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(uint *)(*(longlong *)param_1 + lVar10 * 8) = (uint)(cVar1 != '\0');
      if (uVar7 != 0xffffffff) {
        uVar8 = 0;
        if ((int)uVar7 < *(int *)((longlong)param_2 + 0x38)) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar3 = *(undefined4 *)(*(longlong *)((longlong)param_2 + 0x30) + (longlong)(int)uVar7 * 4);
        uVar7 = 0;
        if ((int)(uVar12 + 1) < *(int *)((longlong)param_1 + 8)) {
          uVar7 = ~(uVar12 + 1) >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(*(longlong *)param_1 + 4 + lVar10 * 8) = uVar3;
      }
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 2;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar2);
  }
  return;
}

// UpdateGpuDataIfNeeded @ 148e83ca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
NDIArrayDistributionIntPrivate::FNDIProxy::UpdateGpuDataIfNeeded
          (FNDIProxy *this,FRDGBuilder *param_1)

{
  FByteAddressBuffer *pFVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  uint uVar3;
  FRHICommandListBase *this_00;
  FRHIBuffer *this_01;
  FRHIShaderResourceView *this_02;
  code *pcVar4;
  bool bVar5;
  TRefCountPtr<FRHIBuffer> TVar6;
  TRefCountPtr<FRHIShaderResourceView> TVar7;
  void *_Dst;
  FPlatformRWLock *SRWLock;
  uint uVar8;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  
  if (this->bNeedsGpuDataUpdate != false) {
    SRWLock = &this->OwnerDI->BuiltTableDataGuard;
    if (SRWLock == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pFVar1 = &this->BuiltTableData;
    this->bNeedsGpuDataUpdate = false;
    uVar3 = (this->OwnerDI->BuiltTableData).ArrayNum;
    uVar8 = 0x10;
    if (0 < (int)uVar3) {
      uVar8 = uVar3;
    }
    this->BuiltTableDataLength = uVar8 >> 4;
    this_00 = (FRHICommandListBase *)param_1->_padding_;
    (this->BuiltTableData).NumBytes = uVar8;
    if ((uVar8 & 3) != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBytes % 4 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                         ,0x1f9,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TVar6 = FRHICommandListBase::CreateBuffer(this_00,(FRHIBufferCreateDesc *)&local_res8);
    if ((FRHIBuffer *)pFVar1 != TVar6.Reference) {
      this_01 = (pFVar1->Buffer).Reference;
      (pFVar1->Buffer).Reference = (FRHIBuffer *)(TVar6.Reference)->_padding_;
      (TVar6.Reference)->_padding_ = 0;
      if (this_01 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    TVar7 = FRHICommandListBase::CreateShaderResourceView
                      (this_00,(FRHIBuffer *)&local_res18,(FInitializer *)(pFVar1->Buffer).Reference
                      );
    pTVar2 = &(this->BuiltTableData).SRV;
    if ((FRHIShaderResourceView *)pTVar2 != TVar7.Reference) {
      this_02 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar7.Reference;
      *(undefined8 *)TVar7.Reference = 0;
      if (this_02 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_02);
      }
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
    _Dst = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1->_padding_,(pFVar1->Buffer).Reference,0,uVar8,
                      RLM_WriteOnly);
    if ((this->OwnerDI->BuiltTableData).ArrayNum < 1) {
      memset(_Dst,0,(ulonglong)uVar8);
    }
    else {
      memcpy(_Dst,(this->OwnerDI->BuiltTableData).AllocatorInstance.Data,(ulonglong)uVar8);
    }
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1->_padding_,(pFVar1->Buffer).Reference);
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// operator() @ 148ea7b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`NDIDataTableLocal::FNDIProxy::SendGameToRender'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FReadBuffer *this_00;
  undefined1 *puVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FBuiltDataTable *pFVar4;
  FRHIBuffer *this_01;
  FRHIShaderResourceView *this_02;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FInstanceData_RenderThread *pFVar7;
  TMap<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *this_03;
  <lambda_1> local_res8;
  
  pFVar7 = TMapBase<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,0>_>
                       *)(*(longlong *)this + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)this + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)this + 8),(ulong64 *)((longlong)this + 8));
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
  pFVar4 = *(FBuiltDataTable **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar7->BuiltDataTable).SharedReferenceCount.ReferenceController;
  (pFVar7->BuiltDataTable).Object = pFVar4;
  (pFVar7->BuiltDataTable).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  this_00 = &pFVar7->FilteredRowDataOffsetBuffer;
  pFVar7->NumFilteredRows = *(uint *)((longlong)this + 0x20);
  (pFVar7->FilteredRowDataOffsetBuffer).NumBytes = 0;
  this_01 = (this_00->Buffer).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    (this_00->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (pFVar7->FilteredRowDataOffsetBuffer).SRV.Reference;
  if (this_02 != (FRHIShaderResourceView *)0x0) {
    (pFVar7->FilteredRowDataOffsetBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_02);
  }
  this_03 = &pFVar7->AttributeReadOffsets;
  bVar5 = 1 < *(int *)&(pFVar7->AttributeReadOffsets).field_0x48;
  if (!bVar5) {
    TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      *)this_03);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_03,0,*(int *)&(pFVar7->AttributeReadOffsets).field_0x8);
  puVar1 = &(pFVar7->AttributeReadOffsets).field_0xc;
  *(undefined4 *)&(pFVar7->AttributeReadOffsets).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_03,0,(int *)puVar1);
  }
  *(undefined4 *)&(pFVar7->AttributeReadOffsets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar7->AttributeReadOffsets).field_0x34 = 0;
  iVar2 = *(int *)&(pFVar7->AttributeReadOffsets).field_0x2c;
  *(undefined4 *)&(pFVar7->AttributeReadOffsets).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(pFVar7->AttributeReadOffsets).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar7->AttributeReadOffsets).field_0x10,0)
    ;
  }
  if (bVar5) {
    *(undefined4 *)&(pFVar7->AttributeReadOffsets).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              *)this_03);
  }
  local_res8.GameToRenderData = (FGameToRenderData *)((longlong)this + 8);
  FReadBuffer::
  InitializeWithData<__NDIDataTableLocal::FNDIProxy::SendGameToRender_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (this_00,(FRHICommandListBase *)param_1,L"NiagaraDataTable::PerDataDI",4,
             *(uint *)((longlong)this + 0x30),PF_R32_UINT,None,&local_res8);
  return;
}

// operator() @ 148ea7f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>::operator()
          (void *this,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  int iVar6;
  TTuple<void_*,unsigned_int> *pTVar7;
  code **ppcVar8;
  undefined1 auStackY_b8 [32];
  ForAnyElementType local_88;
  int local_80 [2];
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (param_1->ArrayNum == 1) {
    iVar1 = *(int *)((longlong)this + 0x18);
    pTVar7 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[](param_1,0);
    if (iVar1 * 4 == *(int *)&pTVar7->field_0x8) {
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80[0] = 0;
      local_80[1] = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,&local_88,local_80,local_80 + 1);
      iVar1 = *(int *)((longlong)this + 0x18);
      pTVar7 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[](param_1,0);
      memcpy(local_88.Data,*(void **)pTVar7,(longlong)iVar1 << 2);
      FVar5.Data = local_88.Data;
      iVar1 = local_80[0];
      iVar6 = local_80[1];
      pcVar2 = *(code **)this;
      pcVar3 = *(code **)((longlong)this + 8);
      pcVar4 = *(code **)((longlong)this + 0x10);
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80[0] = 0;
      local_80[1] = 0;
      local_78[0] = (code *)0x0;
      local_50 = FMemory::Malloc(0x30,8);
      local_50[2] = (code *)FVar5.Data;
      local_50[1] = pcVar2;
      *local_50 = (code *)&
                          ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_7__PostSimulate_FNDIProxy_NDIMemoryBufferLocal__UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_V__TArrayView___CBU__TTuple_PEAXI__H___Z__0A__00_Function_Private_Core_UE__6B_
      ;
      *(int *)(local_50 + 3) = iVar1;
      *(int *)((longlong)local_50 + 0x1c) = iVar6;
      local_50[4] = pcVar3;
      local_50[5] = pcVar4;
      if (local_50 != (code **)&DAT_fffffffffffffff8) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<``NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                      ::Call;
      }
      FNiagaraWorldManager::EnqueueGlobalDeferredCallback((TFunction<void___cdecl(void)> *)local_78)
      ;
      if (local_78[0] != (code *)0x0) {
        ppcVar8 = local_78 + 2;
        if (local_50 != (code **)0x0) {
          ppcVar8 = local_50;
        }
        (**(code **)(*ppcVar8 + 0x10))();
      }
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
    }
  }
  return;
}

// ConsumePerInstanceDataFromGameThread @ 148eaed80

void __thiscall
NDIDataTableLocal::FNDIProxy::ConsumePerInstanceDataFromGameThread
          (FNDIProxy *this,void *param_1,ulong64 *param_2)

{
  return;
}

// ConsumePerInstanceDataFromGameThread @ 148eaed90

void __thiscall
NDIDynamicMeshLocal::FNDIProxy::ConsumePerInstanceDataFromGameThread
          (FNDIProxy *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                     ,0x23f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ConsumePerInstanceDataFromGameThread @ 148eaedd0

void __thiscall
NDIEmitterPropertiesLocal::FNDIProxy::ConsumePerInstanceDataFromGameThread
          (FNDIProxy *this,void *param_1,ulong64 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined1 *puVar5;
  
  uVar1 = *param_2;
  if (*(int *)&(this->PerInstanceData_RenderThread).field_0x8 !=
      *(int *)&(this->PerInstanceData_RenderThread).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PerInstanceData_RenderThread).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PerInstanceData_RenderThread).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                              (ulonglong)
                              (*(int *)&(this->PerInstanceData_RenderThread).field_0x48 - 1)) * 4);
    if (iVar2 != -1) {
      while (puVar3 = (ulonglong *)
                      ((longlong)iVar2 * 0x88 + *(longlong *)&this->PerInstanceData_RenderThread),
            *puVar3 != uVar1) {
        iVar2 = (int)puVar3[0x10];
        if (iVar2 == -1) {
          return;
        }
      }
      puVar4 = puVar3 + 1;
      if (puVar3 == (ulonglong *)0x0) {
        puVar4 = (ulonglong *)0x0;
      }
      if (puVar4 != (ulonglong *)0x0) {
        uVar1 = *(ulonglong *)((longlong)param_1 + 8);
        puVar4[1] = *(ulonglong *)param_1;
        puVar4[2] = uVar1;
        uVar1 = *(ulonglong *)((longlong)param_1 + 0x18);
        puVar4[3] = *(ulonglong *)((longlong)param_1 + 0x10);
        puVar4[4] = uVar1;
        uVar1 = *(ulonglong *)((longlong)param_1 + 0x28);
        puVar4[5] = *(ulonglong *)((longlong)param_1 + 0x20);
        puVar4[6] = uVar1;
        puVar4[7] = *(ulonglong *)((longlong)param_1 + 0x30);
        uVar1 = *(ulonglong *)((longlong)param_1 + 0x40);
        puVar4[8] = *(ulonglong *)((longlong)param_1 + 0x38);
        puVar4[9] = uVar1;
        uVar1 = *(ulonglong *)((longlong)param_1 + 0x50);
        puVar4[10] = *(ulonglong *)((longlong)param_1 + 0x48);
        puVar4[0xb] = uVar1;
        uVar1 = *(ulonglong *)((longlong)param_1 + 0x60);
        puVar4[0xc] = *(ulonglong *)((longlong)param_1 + 0x58);
        puVar4[0xd] = uVar1;
        puVar4[0xe] = *(ulonglong *)((longlong)param_1 + 0x68);
      }
    }
  }
  return;
}

// ConsumePerInstanceDataFromGameThread @ 148eaeeb0

void __thiscall
NDIMemoryBufferLocal::FNDIProxy::ConsumePerInstanceDataFromGameThread
          (FNDIProxy *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceMemoryBuffer.cpp"
                     ,0x8d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ConsumePerInstanceDataFromGameThread @ 148eaeef0

void __thiscall
NDISceneCapture2DLocal::FNDIProxy::ConsumePerInstanceDataFromGameThread
          (FNDIProxy *this,void *param_1,ulong64 *param_2)

{
  undefined8 uVar1;
  FNDInstanceData_RenderThread *pFVar2;
  
  pFVar2 = TMapBase<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,0>_>
                       *)&this->InstanceData_RT,(int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,
                      param_2);
  *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
  *(undefined4 *)&pFVar2->field_0x8 = *(undefined4 *)((longlong)param_1 + 8);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x18);
  *(undefined8 *)&pFVar2->field_0x10 = *(undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)&pFVar2->field_0x18 = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined8 *)&pFVar2->field_0x20 = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)&pFVar2->field_0x28 = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)&pFVar2->field_0x30 = *(undefined8 *)((longlong)param_1 + 0x30);
  *(undefined8 *)&pFVar2->field_0x38 = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x48);
  *(undefined8 *)&pFVar2->field_0x40 = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)&pFVar2->field_0x48 = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x58);
  *(undefined8 *)&pFVar2->field_0x50 = *(undefined8 *)((longlong)param_1 + 0x50);
  *(undefined8 *)&pFVar2->field_0x58 = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x68);
  *(undefined8 *)&pFVar2->field_0x60 = *(undefined8 *)((longlong)param_1 + 0x60);
  *(undefined8 *)&pFVar2->field_0x68 = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x78);
  *(undefined8 *)&pFVar2->field_0x70 = *(undefined8 *)((longlong)param_1 + 0x70);
  *(undefined8 *)&pFVar2->field_0x78 = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x88);
  *(undefined8 *)&pFVar2->field_0x80 = *(undefined8 *)((longlong)param_1 + 0x80);
  *(undefined8 *)&pFVar2->field_0x88 = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x98);
  *(undefined8 *)&pFVar2->field_0x90 = *(undefined8 *)((longlong)param_1 + 0x90);
  *(undefined8 *)&pFVar2->field_0x98 = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xa8);
  *(undefined8 *)&pFVar2->field_0xa0 = *(undefined8 *)((longlong)param_1 + 0xa0);
  *(undefined8 *)&pFVar2->field_0xa8 = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xb8);
  *(undefined8 *)&pFVar2->field_0xb0 = *(undefined8 *)((longlong)param_1 + 0xb0);
  *(undefined8 *)&pFVar2->field_0xb8 = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 200);
  *(undefined8 *)&pFVar2->field_0xc0 = *(undefined8 *)((longlong)param_1 + 0xc0);
  *(undefined8 *)&pFVar2->field_0xc8 = uVar1;
  *(undefined4 *)&pFVar2->field_0xd0 = *(undefined4 *)((longlong)param_1 + 0xd0);
  return;
}

// ConsumePerInstanceDataFromGameThread @ 148eaefc0

void __thiscall
NDISimCacheReaderLocal::FNDIProxy::ConsumePerInstanceDataFromGameThread
          (FNDIProxy *this,void *param_1,ulong64 *param_2)

{
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 148ec8ed0

int __thiscall
NDIDataTableLocal::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0;
}

// PerInstanceDataPassedToRenderThreadSize @ 148ec8ee0

int __thiscall
NDIDynamicMeshLocal::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0;
}

// PerInstanceDataPassedToRenderThreadSize @ 148ec8ef0

int __thiscall
NDIEmitterPropertiesLocal::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0x70;
}

// PerInstanceDataPassedToRenderThreadSize @ 148ec8f00

int __thiscall
NDIMemoryBufferLocal::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0;
}

// PerInstanceDataPassedToRenderThreadSize @ 148ec8f10

int __thiscall
NDISceneCapture2DLocal::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0xe0;
}

// PerInstanceDataPassedToRenderThreadSize @ 148ec8f20

int __thiscall
NDISimCacheReaderLocal::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0;
}

// PostSimulate @ 148ecb660

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
NDIDynamicMeshLocal::FNDIProxy::PostSimulate
          (FNDIProxy *this,FNDIGpuComputePostSimulateContext *param_1)

{
  FNDIInstanceData_RenderThread *pFVar1;
  
  if (param_1->bFinalPostSimulate != false) {
    pFVar1 = TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
             ::FindChecked((TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
                            *)&this->InstanceData_RT,param_1->SystemInstanceID);
    pFVar1->RDGTransientSectionBuffer = (FRDGBuffer *)0x0;
    pFVar1->RDGTransientSectionBufferUAV = (FRDGBufferUAV *)0x0;
    pFVar1->RDGTransientIndexBuffer = (FRDGBuffer *)0x0;
    pFVar1->RDGTransientIndexBufferUAV = (FRDGBufferUAV *)0x0;
    pFVar1->RDGTransientVertexBuffer = (FRDGBuffer *)0x0;
    pFVar1->RDGTransientVertexBufferUAV = (FRDGBufferUAV *)0x0;
  }
  return;
}

// PostSimulate @ 148ecb6b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
NDIMemoryBufferLocal::FNDIProxy::PostSimulate
          (FNDIProxy *this,FNDIGpuComputePostSimulateContext *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FNiagaraGpuReadbackManager *this_00;
  FWeakObjectPtr FVar3;
  FNDIInstanceData_RenderThread *pFVar4;
  undefined4 uStack_4c;
  code *local_48 [5];
  undefined8 *local_20;
  
  if (param_1->bFinalPostSimulate != false) {
    uVar2 = param_1->SystemInstanceID;
    pFVar4 = TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
             ::FindChecked((TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
                            *)&this->PerInstanceData_RenderThread,uVar2);
    if ((((pFVar4->GpuSyncMode == SyncBoth) || (pFVar4->GpuSyncMode == SyncGpuToCpu)) &&
        (0 < pFVar4->NumElements)) && (pFVar4->RDGTransientBuffer != (FRDGBuffer *)0x0)) {
      iVar1 = pFVar4->NumElements + 4;
      this_00 = *(FNiagaraGpuReadbackManager **)(param_1->_padding_ + 0x38);
      FVar3 = (this->WeakOwner).WeakPtr;
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x28,8);
      *local_20 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__7__PostSimulate_FNDIProxy_NDIMemoryBufferLocal__UEAAXAEBUFNDIGpuComputePostSimulateContext___Z__0A__00_Function_Private_Core_UE__6B_
      ;
      local_20[1] = uVar2;
      *(FWeakObjectPtr *)(local_20 + 2) = FVar3;
      local_20[3] = this;
      local_20[4] = CONCAT44(uStack_4c,iVar1);
      if (local_20 + 1 != (ulong64 *)0x0) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                      ::Call;
      }
      FNiagaraGpuReadbackManager::EnqueueReadback
                (this_00,(FRDGBuilder *)param_1->_padding_,pFVar4->RDGTransientBuffer,0,iVar1 * 4,
                 (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
                 local_48);
    }
    pFVar4->RDGTransientBuffer = (FRDGBuffer *)0x0;
    pFVar4->RDGTransientBufferUAV = (FRDGBufferUAV *)0x0;
  }
  return;
}

// PreStage @ 148ecbb30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
NDIDynamicMeshLocal::FNDIProxy::PreStage(FNDIProxy *this,FNDIGpuComputePreStageContext *param_1)

{
  int *piVar1;
  FRDGBuilder *this_00;
  FResource *pFVar2;
  int iVar3;
  ulong64 uVar4;
  FNDIInstanceData_RenderThread *pFVar5;
  FRDGBufferUAV *pFVar6;
  FRDGExternalAccessQueue *pFVar7;
  FRDGBuffer *pFVar8;
  FRDGBufferUAVDesc local_18;
  
  uVar4 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar5 = TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
           ::FindChecked((TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
                          *)&this->InstanceData_RT,uVar4);
  if ((**(ushort **)&param_1->field_0x20 & 1) == 0) {
    if (((**(ushort **)&param_1->field_0x20 & 2) != 0) &&
       (pFVar5->bGpuUsesDynamicAllocation != false)) {
      pFVar5->bNeedsGpuSectionUpdate = true;
      return;
    }
  }
  else {
    this_00 = *(FRDGBuilder **)param_1;
    if (pFVar5->RDGTransientSectionBuffer == (FRDGBuffer *)0x0) {
      local_18.Buffer =
           FRDGBuilder::RegisterExternalBuffer(this_00,&pFVar5->SectionPooledBuffer,None);
      pFVar5->RDGTransientSectionBuffer = local_18.Buffer;
      local_18._padding_._0_2_ = 0x1c;
      local_18._padding_._2_1_ = 0;
      pFVar6 = FRDGBuilder::CreateUAV(this_00,&local_18,None);
      pFVar5->RDGTransientSectionBufferUAV = pFVar6;
      local_18.Buffer = FRDGBuilder::RegisterExternalBuffer(this_00,&pFVar5->IndexPooledBuffer,None)
      ;
      pFVar5->RDGTransientIndexBuffer = local_18.Buffer;
      local_18._padding_._0_2_ = 0x1c;
      local_18._padding_._2_1_ = 0;
      pFVar6 = FRDGBuilder::CreateUAV(this_00,&local_18,None);
      pFVar5->RDGTransientIndexBufferUAV = pFVar6;
      local_18.Buffer =
           FRDGBuilder::RegisterExternalBuffer(this_00,&pFVar5->VertexPooledBuffer,None);
      pFVar5->RDGTransientVertexBuffer = local_18.Buffer;
      local_18._padding_._0_2_ = 0x1c;
      local_18._padding_._2_1_ = 0;
      pFVar6 = FRDGBuilder::CreateUAV(this_00,&local_18,None);
      pFVar5->RDGTransientVertexBufferUAV = pFVar6;
      pFVar7 = FNDIGpuComputeContext::GetRDGExternalAccessQueue((FNDIGpuComputeContext *)param_1);
      pFVar8 = pFVar5->RDGTransientIndexBuffer;
      if (pFVar8 != (FRDGBuffer *)0x0) {
        piVar1 = &(pFVar7->Resources).ArrayMax;
        iVar3 = (pFVar7->Resources).ArrayNum;
        if (iVar3 == *piVar1) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                            (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)pFVar7,
                             piVar1);
        }
        (pFVar7->Resources).ArrayNum = iVar3 + 1;
        pFVar2 = (pFVar7->Resources).AllocatorInstance.Data;
        pFVar2[iVar3].Resource = (FRDGViewableResource *)pFVar8;
        pFVar2[iVar3].Access = SRVMask|VertexOrIndexBuffer;
        pFVar2[iVar3].Pipelines = Graphics;
      }
      pFVar7 = FNDIGpuComputeContext::GetRDGExternalAccessQueue((FNDIGpuComputeContext *)param_1);
      pFVar8 = pFVar5->RDGTransientVertexBuffer;
      if (pFVar8 != (FRDGBuffer *)0x0) {
        piVar1 = &(pFVar7->Resources).ArrayMax;
        iVar3 = (pFVar7->Resources).ArrayNum;
        if (iVar3 == *piVar1) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                            (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)pFVar7,
                             piVar1);
        }
        (pFVar7->Resources).ArrayNum = iVar3 + 1;
        pFVar2 = (pFVar7->Resources).AllocatorInstance.Data;
        pFVar2[iVar3].Resource = (FRDGViewableResource *)pFVar8;
        pFVar2[iVar3].Access = SRVMask|VertexOrIndexBuffer;
        pFVar2[iVar3].Pipelines = Graphics;
      }
    }
    if (pFVar5->bNeedsClearIndexBuffer != false) {
      pFVar5->bNeedsClearIndexBuffer = false;
      AddClearUAVPass(*(FRDGBuilder **)param_1,pFVar5->RDGTransientIndexBufferUAV,0,Compute);
    }
    if ((pFVar5->bNeedsGpuSectionUpdate != false) && (pFVar5->NumSections != 0)) {
      pFVar8 = FRDGBuilder::RegisterExternalBuffer(this_00,&pFVar5->SectionDefaultPooledBuffer,None)
      ;
      AddCopyBufferPass(this_00,pFVar5->RDGTransientSectionBuffer,pFVar8);
    }
  }
  return;
}

// PreStage @ 148ecbd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
NDIMemoryBufferLocal::FNDIProxy::PreStage(FNDIProxy *this,FNDIGpuComputePreStageContext *param_1)

{
  TRefCountPtr<FRDGPooledBuffer> *pTVar1;
  int *piVar2;
  byte *pbVar3;
  FRDGBuilder *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulong64 uVar8;
  FNDIInstanceData_RenderThread *pFVar9;
  FRDGBuffer *pFVar10;
  FRDGBufferUAV *pFVar11;
  longlong *plVar12;
  FUploadedBuffer *pFVar13;
  uint uVar14;
  bool *pbVar15;
  ulonglong uVar16;
  undefined1 auStackY_d8 [32];
  FRDGBufferUAVDesc local_a8;
  undefined8 local_98;
  FRDGBufferDesc local_90;
  code *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  uVar8 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar9 = TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
           ::FindChecked((TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
                          *)&this->PerInstanceData_RenderThread,uVar8);
  if ((**(byte **)&param_1->field_0x20 & 1) != 0) {
    uVar14 = pFVar9->NumElements + 4;
    this_00 = *(FRDGBuilder **)param_1;
    local_a8._padding_._4_4_ = uVar14 & 0x3fffffff;
    local_a8.Buffer = (FRDGBuffer *)CONCAT44(local_a8.Buffer._4_4_,0x10119);
    local_a8._padding_._0_1_ = 4;
    local_a8._padding_._1_1_ = 0;
    local_a8._padding_._2_1_ = 0;
    local_a8._padding_._3_1_ = 0;
    local_90._0_8_ = CONCAT44(uVar14,4) & 0x3fffffffffffffff;
    pTVar1 = &pFVar9->PooledBuffer;
    local_98 = 0;
    local_90._12_4_ = local_a8.Buffer._4_4_;
    local_90.Usage =
         StructuredBuffer|ShaderResource|SourceCopy|ByteAddressBuffer|UnorderedAccess|Static;
    local_90.Metadata = (FShaderParametersMetadata *)0x0;
    ResizeBufferIfNeeded(this_00,pTVar1,&local_90,L"NiagaraMemoryBuffer");
    local_58 = (pFVar9->InitialCpuBufferData).ArrayNum;
    if ((int)local_58 < 1) {
      if ((pFVar9->GpuPendingClear).bIsSet != false) {
        uVar14 = (pFVar9->GpuPendingClear).TypedValue;
        local_a8.Buffer = FRDGBuilder::RegisterExternalBuffer(this_00,pTVar1,None);
        local_a8._padding_._2_1_ = 0;
        local_a8._padding_._1_1_ = 0;
        local_a8._padding_._0_1_ = 0;
        if ((((local_a8.Buffer)->Desc).Usage & DrawIndirect) != None) {
          local_a8._padding_._0_1_ = 0x1c;
        }
        pFVar11 = FRDGBuilder::CreateUAV(this_00,&local_a8,None);
        AddClearUAVPass(*(FRDGBuilder **)param_1,pFVar11,uVar14,Compute);
      }
    }
    else if (local_58 == uVar14) {
      pFVar4 = (pFVar9->InitialCpuBufferData).AllocatorInstance.Data;
      (pFVar9->InitialCpuBufferData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50 = (longlong *)0x0;
      uVar16 = (ulonglong)(local_58 * 4);
      iStack_54 = (pFVar9->InitialCpuBufferData).ArrayMax;
      (pFVar9->InitialCpuBufferData).ArrayNum = 0;
      (pFVar9->InitialCpuBufferData).ArrayMax = 0;
      local_68 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__L___PreStage_FNDIProxy_NDIMemoryBufferLocal__UEAAXAEBUFNDIGpuComputePreStageContext___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`NDIMemoryBufferLocal::FNDIProxy::PreStage'::__l11::<lambda_1>,void,void_const_*>
                 ::Call;
      uStack_60 = pFVar4;
      pFVar10 = FRDGBuilder::RegisterExternalBuffer(this_00,pTVar1,None);
      FRDGUserValidation::ValidateUploadBuffer(&this_00->UserValidation,pFVar10,pFVar4,uVar16);
      if (uVar16 != 0) {
        iVar7 = (this_00->UploadedBuffers).ArrayNum;
        piVar2 = &(this_00->UploadedBuffers).ArrayMax;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                            (0x10e0,&(this_00->UploadedBuffers).AllocatorInstance,piVar2);
        }
        (this_00->UploadedBuffers).ArrayNum = iVar7 + 1;
        pFVar13 = (this_00->UploadedBuffers).AllocatorInstance.Data + iVar7;
        pFVar13->bUseDataCallbacks = false;
        pFVar13->bUseFreeCallbacks = true;
        pFVar13->Buffer = pFVar10;
        pFVar13->Data = pFVar4;
        pFVar13->DataSize = uVar16;
        *(undefined8 *)&pFVar13->DataCallback = 0;
        *(undefined8 *)&(pFVar13->DataCallback).field_0x28 = 0;
        *(undefined8 *)&pFVar13->DataSizeCallback = 0;
        *(undefined8 *)&(pFVar13->DataSizeCallback).field_0x28 = 0;
        *(code **)&pFVar13->DataFreeCallback = local_78;
        *(longlong **)&(pFVar13->DataFreeCallback).field_0x28 = local_50;
        *(undefined4 *)&(pFVar13->DataFreeCallback).field_0x10 = (undefined4)local_68;
        *(undefined4 *)&(pFVar13->DataFreeCallback).field_0x14 = local_68._4_4_;
        *(undefined4 *)&(pFVar13->DataFreeCallback).field_0x18 = (undefined4)uStack_60;
        *(undefined4 *)&(pFVar13->DataFreeCallback).field_0x1c = uStack_60._4_4_;
        *(ulonglong *)&(pFVar13->DataFreeCallback).field_0x20 = CONCAT44(iStack_54,local_58);
        if (*(longlong *)&pFVar13->DataFreeCallback != 0) {
          local_78 = (code *)0x0;
        }
        *(undefined8 *)&pFVar13->DataFillCallback = 0;
        *(undefined8 *)&(pFVar13->DataFillCallback).field_0x28 = 0;
        pbVar3 = (byte *)((longlong)&pFVar10->_padding_ + 1);
        *pbVar3 = *pbVar3 | 0x80;
      }
      if (local_78 != (code *)0x0) {
        plVar12 = &local_68;
        if (local_50 != (longlong *)0x0) {
          plVar12 = local_50;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_632429368785764191>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceMemoryBuffer.cpp"
                         ,0xa1,"InstanceData.InitialCpuBufferData.Num() == AlignedNumElements");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      piVar2 = &(pFVar9->InitialCpuBufferData).ArrayMax;
      (pFVar9->InitialCpuBufferData).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(pFVar9->InitialCpuBufferData).AllocatorInstance,0,piVar2);
      }
    }
    pbVar15 = &(pFVar9->GpuPendingClear).bIsSet;
    if (*pbVar15 != false) {
      *pbVar15 = false;
    }
  }
  return;
}

// SendGameToRender @ 148ecfa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
NDIDataTableLocal::FNDIProxy::SendGameToRender
          (FNDIProxy *this,FInstanceData_GameThread *param_1,ulong64 param_2)

{
  int iVar1;
  int iVar2;
  FBuiltDataTable *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  undefined4 uVar7;
  bool bVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  code **ppcVar10;
  ulonglong uVar11;
  ForElementType<unsigned_int> _Src;
  undefined4 uVar12;
  undefined1 auStackY_148 [32];
  ForAnyElementType local_e8;
  undefined8 local_e0;
  FNDIProxy *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pFVar3 = (param_1->BuiltDataTable).Object;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = (ulonglong)(uint)local_e0;
  pTVar4 = (param_1->BuiltDataTable).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  _Src = (param_1->FilteredRowDataOffset).AllocatorInstance.SecondaryData;
  iVar1 = param_1->NumFilteredRows;
  iVar2 = (param_1->FilteredRowDataOffset).ArrayNum;
  if (_Src == (ForElementType<unsigned_int>)0x0) {
    _Src = (ForElementType<unsigned_int>)&param_1->FilteredRowDataOffset;
  }
  local_e0 = CONCAT44(local_e0._4_4_,iVar2);
  if ((iVar2 != 0) || (uVar12 = 0, local_e0._4_4_ != 0)) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,local_e0._4_4_,&local_e8,iVar2,(int *)((longlong)&local_e0 + 4));
    if (iVar2 != 0) {
      memcpy(local_e8.Data,(void *)_Src,(longlong)iVar2 << 2);
    }
    uVar12 = local_e0._4_4_;
  }
  FVar6.Data = local_e8.Data;
  uVar7 = (uint)local_e0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x40,8);
  local_90[2] = (code *)param_2;
  local_90[3] = (code *)pFVar3;
  *local_90 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__SendGameToRender_FNDIProxy_NDIDataTableLocal__QEAAXPEAUFInstanceData_GameThread_4__K_Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_90[1] = (code *)local_d8;
  local_90[4] = (code *)pTVar4;
  *(int *)(local_90 + 5) = iVar1;
  local_90[6] = (code *)FVar6.Data;
  *(undefined4 *)(local_90 + 7) = uVar7;
  *(undefined4 *)((longlong)local_90 + 0x3c) = uVar12;
  if (local_90 + 1 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`NDIDataTableLocal::FNDIProxy::SendGameToRender'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_NDIDataTableLocal::FNDIProxy::SendGameToRender_::__l2::TSTR_FNDISimpleCounter_RemoveProxy496>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88[0] = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_78[0] = local_a8[0];
    local_78[1] = local_a8[1];
    local_78[2] = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar9 = (FRenderCommandTag *)
             TRenderCommandTag<`NDIDataTableLocal::FNDIProxy::SendGameToRender'::__l2::TSTR_FNDISimpleCounter_RemoveProxy496>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar9);
    uVar11 = (ulonglong)local_58;
    if (2 < uVar11) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_88[0] != (code *)0x0) {
        ppcVar10 = local_88 + 2;
        if (local_60 != (code **)0x0) {
          ppcVar10 = local_60;
        }
        (**(code **)(*ppcVar10 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])();
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar10 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar10 = local_90;
    }
    (**(code **)(*ppcVar10 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// ConsumePerInstanceDataFromGameThread @ 148f919b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
NDISocketReaderLocal::FNDIProxy::ConsumePerInstanceDataFromGameThread
          (FNDIProxy *this,void *param_1,ulong64 *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FInstanceData_RenderThread *pFVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pFVar4 = TMapBase<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>_>
                       *)&this->SystemInstancesToInstanceData_RT,
                      (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  *(undefined1 *)&pFVar4->_padding_ = *(undefined1 *)param_1;
  *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = *(undefined4 *)((longlong)param_1 + 4);
  *(undefined4 *)&pFVar4->_padding_ = *(undefined4 *)((longlong)param_1 + 8);
  *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined4 *)&pFVar4->_padding_ = *(undefined4 *)((longlong)param_1 + 0x10);
  lVar3 = *(longlong *)((longlong)param_1 + 0x28);
  pFVar4->_padding_ = *(longlong *)((longlong)param_1 + 0x20);
  pFVar4->_padding_ = lVar3;
  lVar3 = *(longlong *)((longlong)param_1 + 0x38);
  pFVar4->_padding_ = *(longlong *)((longlong)param_1 + 0x30);
  pFVar4->_padding_ = lVar3;
  lVar3 = *(longlong *)((longlong)param_1 + 0x48);
  pFVar4->_padding_ = *(longlong *)((longlong)param_1 + 0x40);
  pFVar4->_padding_ = lVar3;
  lVar3 = *(longlong *)((longlong)param_1 + 0x58);
  pFVar4->_padding_ = *(longlong *)((longlong)param_1 + 0x50);
  pFVar4->_padding_ = lVar3;
  lVar3 = *(longlong *)((longlong)param_1 + 0x68);
  pFVar4->_padding_ = *(longlong *)((longlong)param_1 + 0x60);
  pFVar4->_padding_ = lVar3;
  lVar3 = *(longlong *)((longlong)param_1 + 0x78);
  pFVar4->_padding_ = *(longlong *)((longlong)param_1 + 0x70);
  pFVar4->_padding_ = lVar3;
  *(undefined4 *)&pFVar4->_padding_ = *(undefined4 *)((longlong)param_1 + 0x80);
  *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = *(undefined4 *)((longlong)param_1 + 0x84);
  if (0 < *(int *)((longlong)param_1 + 0x90)) {
    pTVar5 = &pFVar4->DataToUpload;
    puVar1 = (undefined8 *)((longlong)param_1 + 0x88);
    if (pTVar5 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar2 = (pTVar5->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (pFVar4->DataToUpload).ArrayNum = *(int *)((longlong)param_1 + 0x90);
      (pFVar4->DataToUpload).ArrayMax = *(int *)((longlong)param_1 + 0x94);
      *(undefined8 *)((longlong)param_1 + 0x90) = 0;
    }
  }
  if (*(void **)((longlong)param_1 + 0x88) == (void *)0x0) {
    return;
  }
  FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  return;
}

// ConsumePerInstanceDataFromGameThread @ 148f91ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
NDIUObjectPropertyReaderLocal::FNDIProxy::ConsumePerInstanceDataFromGameThread
          (FNDIProxy *this,void *param_1,ulong64 *param_2)

{
  __m128d *p_Var1;
  VectorRegister4Double *this_00;
  ulonglong uVar2;
  FRHIResource *pFVar3;
  double dVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  void *_Dst;
  uint uVar13;
  TTransform<double> *this_01;
  uint uVar14;
  TTransform<double> *pTVar15;
  undefined1 *puVar16;
  TTransform<double> *pTVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  TTransform<double> local_78;
  
  uVar2 = *param_2;
  if (*(int *)&(this->PerInstanceData_RenderThread).field_0x8 !=
      *(int *)&(this->PerInstanceData_RenderThread).field_0x34) {
    puVar16 = *(undefined1 **)&(this->PerInstanceData_RenderThread).field_0x40;
    uVar13 = *(int *)&(this->PerInstanceData_RenderThread).field_0x48 - 1;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->PerInstanceData_RenderThread).field_0x38;
    }
    iVar9 = *(int *)(puVar16 + ((uVar2 >> 0x20) * 0x17 + uVar2 & (ulonglong)uVar13) * 4);
    if (iVar9 != -1) {
      do {
        puVar12 = (ulonglong *)
                  ((longlong)iVar9 * 0x140 + *(longlong *)&this->PerInstanceData_RenderThread);
        if (*puVar12 == uVar2) {
          pTVar15 = (TTransform<double> *)0x0;
          this_01 = (TTransform<double> *)(puVar12 + 2);
          if (puVar12 == (ulonglong *)0x0) {
            this_01 = pTVar15;
          }
          if (this_01 != (TTransform<double> *)0x0) {
            bVar8 = IsInRenderingThread();
            uVar39 = (undefined4)CONCAT71(extraout_var,bVar8);
            if (!bVar8) {
              uVar13 = 0x50668408;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInRenderingThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                 ,0x1594,L"");
              uVar39 = (undefined4)CONCAT71(extraout_var_00,bVar8);
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (param_1 == this_01) {
LAB_148f91bfb:
              if (*(char *)this_01[1].Rotation.XY.m128d_f64 == '\0') goto LAB_148f91cf3;
              lVar18 = -(ulonglong)
                        ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                        (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 0xc)
                                         & _UNK_15061cc8c,
                                         *(uint *)((this_01->Scale3D).ZW.m128d_f64 + 1) &
                                         _UNK_15061cc88));
              auVar7._8_4_ = (int)lVar18;
              auVar7._0_8_ = -(ulonglong)
                              ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                              (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 +
                                                        4) &
                                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                               *(uint *)(this_01->Scale3D).ZW.m128d_f64 &
                                               (uint)__xmm_7fffffffffffffff7fffffffffffffff));
              auVar7._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
              uVar13 = movmskpd(uVar13,auVar7);
              lVar18 = -(ulonglong)
                        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                        (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 0xc)
                                         & _UNK_15061cc8c,
                                         *(uint *)((this_01->Scale3D).XY.m128d_f64 + 1) &
                                         _UNK_15061cc88));
              auVar6._8_4_ = (int)lVar18;
              auVar6._0_8_ = -(ulonglong)
                              ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                              (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 +
                                                        4) &
                                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                               *(uint *)(this_01->Scale3D).XY.m128d_f64 &
                                               (uint)__xmm_7fffffffffffffff7fffffffffffffff));
              auVar6._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
              iVar9 = movmskpd(uVar39,auVar6);
              if ((uVar13 & 0x3fffffff) == 0 && iVar9 == 0) {
                uVar39 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
                uVar40 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
                uVar41 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
                uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
                uVar35 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar36 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar37 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar38 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar31 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
                uVar32 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
                uVar33 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
                uVar34 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
                uVar27 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
                uVar28 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
                uVar29 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
                uVar30 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
                uVar23 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar24 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar25 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar26 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar19 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar20 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar21 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar22 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
                local_78.Rotation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                local_78.Rotation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                local_78.Translation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                local_78.Translation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                local_78.Scale3D.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                local_78.Scale3D.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              }
              else {
                UE::Math::TTransform<double>::InverseFast(this_01,&local_78);
                uVar19 = local_78.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar20 = local_78.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar21 = local_78.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar22 = local_78.Scale3D.ZW.m128d_f64[1]._4_4_;
                uVar23 = local_78.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar24 = local_78.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar25 = local_78.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar26 = local_78.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar27 = local_78.Translation.ZW.m128d_f64[0]._0_4_;
                uVar28 = local_78.Translation.ZW.m128d_f64[0]._4_4_;
                uVar29 = local_78.Translation.ZW.m128d_f64[1]._0_4_;
                uVar30 = local_78.Translation.ZW.m128d_f64[1]._4_4_;
                uVar31 = local_78.Translation.XY.m128d_f64[0]._0_4_;
                uVar32 = local_78.Translation.XY.m128d_f64[0]._4_4_;
                uVar33 = local_78.Translation.XY.m128d_f64[1]._0_4_;
                uVar34 = local_78.Translation.XY.m128d_f64[1]._4_4_;
                uVar35 = local_78.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar36 = local_78.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar37 = local_78.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar38 = local_78.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar39 = local_78.Rotation.XY.m128d_f64[0]._0_4_;
                uVar40 = local_78.Rotation.XY.m128d_f64[0]._4_4_;
                uVar41 = local_78.Rotation.XY.m128d_f64[1]._0_4_;
                uVar42 = local_78.Rotation.XY.m128d_f64[1]._4_4_;
              }
              p_Var1 = &this_01[1].Rotation.ZW;
              if (&local_78 != (TTransform<double> *)p_Var1) {
                *(undefined4 *)p_Var1->m128d_f64 = uVar39;
                *(undefined4 *)((longlong)this_01[1].Rotation.ZW.m128d_f64 + 4) = uVar40;
                *(undefined4 *)(this_01[1].Rotation.ZW.m128d_f64 + 1) = uVar41;
                *(undefined4 *)((longlong)this_01[1].Rotation.ZW.m128d_f64 + 0xc) = uVar42;
                *(undefined4 *)this_01[1].Translation.XY.m128d_f64 = uVar35;
                *(undefined4 *)((longlong)this_01[1].Translation.XY.m128d_f64 + 4) = uVar36;
                *(undefined4 *)(this_01[1].Translation.XY.m128d_f64 + 1) = uVar37;
                *(undefined4 *)((longlong)this_01[1].Translation.XY.m128d_f64 + 0xc) = uVar38;
                *(undefined4 *)this_01[1].Translation.ZW.m128d_f64 = uVar31;
                *(undefined4 *)((longlong)this_01[1].Translation.ZW.m128d_f64 + 4) = uVar32;
                *(undefined4 *)(this_01[1].Translation.ZW.m128d_f64 + 1) = uVar33;
                *(undefined4 *)((longlong)this_01[1].Translation.ZW.m128d_f64 + 0xc) = uVar34;
                *(undefined4 *)this_01[1].Scale3D.XY.m128d_f64 = uVar27;
                *(undefined4 *)((longlong)this_01[1].Scale3D.XY.m128d_f64 + 4) = uVar28;
                *(undefined4 *)(this_01[1].Scale3D.XY.m128d_f64 + 1) = uVar29;
                *(undefined4 *)((longlong)this_01[1].Scale3D.XY.m128d_f64 + 0xc) = uVar30;
                *(undefined4 *)this_01[1].Scale3D.ZW.m128d_f64 = uVar23;
                *(undefined4 *)((longlong)this_01[1].Scale3D.ZW.m128d_f64 + 4) = uVar24;
                *(undefined4 *)(this_01[1].Scale3D.ZW.m128d_f64 + 1) = uVar25;
                *(undefined4 *)((longlong)this_01[1].Scale3D.ZW.m128d_f64 + 0xc) = uVar26;
                *(undefined4 *)this_01[2].Rotation.XY.m128d_f64 = uVar19;
                *(undefined4 *)((longlong)this_01[2].Rotation.XY.m128d_f64 + 4) = uVar20;
                *(undefined4 *)(this_01[2].Rotation.XY.m128d_f64 + 1) = uVar21;
                *(undefined4 *)((longlong)this_01[2].Rotation.XY.m128d_f64 + 0xc) = uVar22;
                *(undefined1 *)this_01[2].Rotation.ZW.m128d_f64 = 1;
              }
            }
            else {
              if (*(char *)((longlong)param_1 + 0x60) != '\0') {
                dVar4 = *(double *)((longlong)param_1 + 8);
                (this_01->Rotation).XY.m128d_f64[0] = *(double *)param_1;
                (this_01->Rotation).XY.m128d_f64[1] = dVar4;
                dVar4 = *(double *)((longlong)param_1 + 0x18);
                (this_01->Rotation).ZW.m128d_f64[0] = *(double *)((longlong)param_1 + 0x10);
                (this_01->Rotation).ZW.m128d_f64[1] = dVar4;
                dVar4 = *(double *)((longlong)param_1 + 0x28);
                (this_01->Translation).XY.m128d_f64[0] = *(double *)((longlong)param_1 + 0x20);
                (this_01->Translation).XY.m128d_f64[1] = dVar4;
                dVar4 = *(double *)((longlong)param_1 + 0x38);
                (this_01->Translation).ZW.m128d_f64[0] = *(double *)((longlong)param_1 + 0x30);
                (this_01->Translation).ZW.m128d_f64[1] = dVar4;
                dVar4 = *(double *)((longlong)param_1 + 0x48);
                (this_01->Scale3D).XY.m128d_f64[0] = *(double *)((longlong)param_1 + 0x40);
                (this_01->Scale3D).XY.m128d_f64[1] = dVar4;
                dVar4 = *(double *)((longlong)param_1 + 0x58);
                (this_01->Scale3D).ZW.m128d_f64[0] = *(double *)((longlong)param_1 + 0x50);
                (this_01->Scale3D).ZW.m128d_f64[1] = dVar4;
                *(undefined1 *)this_01[1].Rotation.XY.m128d_f64 = 1;
                goto LAB_148f91bfb;
              }
              if (*(char *)this_01[1].Rotation.XY.m128d_f64 != '\0') {
                *(undefined1 *)this_01[1].Rotation.XY.m128d_f64 = 0;
                goto LAB_148f91bfb;
              }
LAB_148f91cf3:
              if (*(char *)this_01[2].Rotation.ZW.m128d_f64 != '\0') {
                *(undefined1 *)this_01[2].Rotation.ZW.m128d_f64 = 0;
              }
            }
            uVar13 = 0;
            pTVar17 = pTVar15;
            if (0 < *(int *)this_01[2].Scale3D.ZW.m128d_f64) {
              do {
                uVar14 = (uint)pTVar15;
                uVar10 = uVar13;
                if ((int)uVar14 < *(int *)this_01[2].Scale3D.ZW.m128d_f64) {
                  uVar10 = ~uVar14 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar10 = *(uint *)((longlong)(pTVar17->Rotation).XY.m128d_f64 +
                                  (longlong)this_01[2].Scale3D.XY.m128d_f64[1]);
                if (uVar10 != 0xffffffff) {
                  uVar11 = uVar13;
                  if ((int)uVar10 < *(int *)((longlong)param_1 + 0x78)) {
                    uVar11 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar10 = *(uint *)(*(longlong *)((longlong)param_1 + 0x70) +
                                    (longlong)(int)uVar10 * 4);
                }
                uVar11 = uVar13;
                if ((int)uVar14 < *(int *)this_01[2].Scale3D.XY.m128d_f64) {
                  uVar11 = ~uVar14 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pTVar15 = (TTransform<double> *)(ulonglong)(uVar14 + 1);
                *(uint *)((longlong)(pTVar17->Rotation).XY.m128d_f64 +
                         (longlong)this_01[2].Translation.ZW.m128d_f64[1]) = uVar10;
                pTVar17 = (TTransform<double> *)((longlong)(pTVar17->Rotation).XY.m128d_f64 + 4);
              } while ((int)(uVar14 + 1) < *(int *)this_01[2].Scale3D.ZW.m128d_f64);
            }
            this_00 = &this_01[2].Translation;
            if (*(int *)this_01[2].Translation.ZW.m128d_f64 != *(int *)((longlong)param_1 + 0x88)) {
              *(undefined4 *)this_01[2].Translation.ZW.m128d_f64 = 0;
              pFVar3 = (FRHIResource *)(this_00->XY).m128d_f64[0];
              if (pFVar3 != (FRHIResource *)0x0) {
                (this_00->XY).m128d_f64[0] = 0.0;
                FRHIResource::Release(pFVar3);
              }
              pFVar3 = (FRHIResource *)this_01[2].Translation.XY.m128d_f64[1];
              if (pFVar3 != (FRHIResource *)0x0) {
                this_01[2].Translation.XY.m128d_f64[1] = 0.0;
                FRHIResource::Release(pFVar3);
              }
              uVar13 = (int)(*(int *)((longlong)param_1 + 0x88) +
                            (*(int *)((longlong)param_1 + 0x88) >> 0x1f & 3U)) >> 2;
              if (uVar13 != 0) {
                FReadBuffer::Initialize
                          ((FReadBuffer *)this_00,
                           (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                           L"NiagaraUObjectPropertyReader",4,uVar13,PF_R32_UINT,None,
                           (FResourceArrayUploadInterface *)0x0);
              }
            }
            iVar9 = *(int *)this_01[2].Translation.ZW.m128d_f64;
            if (iVar9 != 0) {
              dVar4 = (this_00->XY).m128d_f64[0];
              if (((((GRHICommandList.bLatchedBypass == false) ||
                    ((GRHICommandList.CommandListImmediate._667_8_ & 0x20) == 0)) &&
                   (GRHICommandList.CommandListImmediate._100_1_ != '\0')) &&
                  ((GRHICommandList.bLatchedBypass == false ||
                   ((GRHICommandList.CommandListImmediate._667_8_ & 0x20) == 0)))) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsTopOfPipe() || Bypass()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                     ,0x2ed,
                                     L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                                    ), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((GRHICommandList.CommandListImmediate._106_1_ != '\0') &&
                  ((GRHICommandList.CommandListImmediate._106_1_ &
                   GRHICommandList.CommandListImmediate._106_1_ - 1) != 0)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                     ,0x2a5,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              bVar8 = GRHICommandList.CommandListImmediate._106_1_ == '\0';
              if (bVar8) {
                FRHICommandListBase::SwitchPipeline
                          ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,Graphics);
              }
              _Dst = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x148))
                                       (GDynamicRHI,0x154be5ed0,dVar4,0,iVar9,1);
              if (bVar8) {
                FRHICommandListBase::SwitchPipeline
                          ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,None);
              }
              memcpy(_Dst,*(void **)((longlong)param_1 + 0x80),
                     (longlong)*(int *)((longlong)param_1 + 0x88));
              dVar4 = (this_00->XY).m128d_f64[0];
              if (((((GRHICommandList.bLatchedBypass == false) ||
                    ((GRHICommandList.CommandListImmediate._667_8_ & 0x20) == 0)) &&
                   (GRHICommandList.CommandListImmediate._100_1_ != '\0')) &&
                  ((GRHICommandList.bLatchedBypass == false ||
                   ((GRHICommandList.CommandListImmediate._667_8_ & 0x20) == 0)))) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsTopOfPipe() || Bypass()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                     ,0x2f5,
                                     L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                                    ), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((GRHICommandList.CommandListImmediate._106_1_ != '\0') &&
                  ((GRHICommandList.CommandListImmediate._106_1_ &
                   GRHICommandList.CommandListImmediate._106_1_ - 1) != 0)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                     ,0x2a5,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (GRHICommandList.CommandListImmediate._106_1_ == '\0') {
                FRHICommandListBase::SwitchPipeline
                          ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,Graphics);
                (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,0x154be5ed0,dVar4);
                FRHICommandListBase::SwitchPipeline
                          ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,None);
              }
              else {
                (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,0x154be5ed0,dVar4);
              }
            }
          }
          break;
        }
        iVar9 = (int)puVar12[0x26];
      } while (iVar9 != -1);
    }
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  return;
}

// ConsumePerInstanceDataFromGameThread @ 148f92120

void __thiscall
NDIVirtualTextureLocal::FNDIProxy::ConsumePerInstanceDataFromGameThread
          (FNDIProxy *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceVirtualTexture.cpp"
                     ,0x61,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CopyTransforms @ 148f928e0

void __cdecl
NDISocketReaderLocal::FNDIProxy::CopyTransforms
          (uchar *param_1,TArrayView<UE::Math::TTransform<float>_const_,int> *param_2)

{
  __m128 *p_Var1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  TTransform<float> *pTVar12;
  TTransform<float> *pTVar13;
  
  pTVar13 = param_2->DataPtr;
  pTVar12 = pTVar13 + param_2->ArrayNum;
  if (pTVar13 != pTVar12) {
    pfVar11 = (float *)(param_1 + 8);
    do {
      fVar2 = (pTVar13->Rotation).m128_f32[0];
      fVar3 = (pTVar13->Rotation).m128_f32[1];
      fVar4 = (pTVar13->Rotation).m128_f32[2];
      fVar5 = (pTVar13->Rotation).m128_f32[3];
      p_Var1 = &pTVar13->Translation;
      fVar6 = (pTVar13->Translation).m128_f32[1];
      fVar7 = (pTVar13->Translation).m128_f32[2];
      fVar8 = (pTVar13->Scale3D).m128_f32[0];
      fVar9 = (pTVar13->Scale3D).m128_f32[1];
      fVar10 = (pTVar13->Scale3D).m128_f32[2];
      pTVar13 = pTVar13 + 1;
      pfVar11[-2] = p_Var1->m128_f32[0];
      pfVar11[-1] = fVar6;
      pfVar11[2] = fVar3;
      pfVar11[3] = fVar4;
      pfVar11[1] = fVar2;
      pfVar11[5] = fVar8;
      pfVar11[6] = fVar9;
      *pfVar11 = fVar7;
      pfVar11[4] = fVar5;
      pfVar11[7] = fVar10;
      pfVar11 = pfVar11 + 10;
    } while (pTVar13 != pTVar12);
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 148fc63a0

int __thiscall
NDISocketReaderLocal::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0xa0;
}

// PerInstanceDataPassedToRenderThreadSize @ 148fc63b0

int __thiscall
NDIUObjectPropertyReaderLocal::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0x90;
}

// PerInstanceDataPassedToRenderThreadSize @ 148fc63c0

int __thiscall
NDIVirtualTextureLocal::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0;
}

// PreStage @ 148fc74d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
NDISocketReaderLocal::FNDIProxy::PreStage(FNDIProxy *this,FNDIGpuComputePreStageContext *param_1)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  FRDGBuilder *this_00;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulong64 uVar10;
  FInstanceData_RenderThread *pFVar11;
  FRDGBuffer *pFVar12;
  longlong *plVar13;
  FUploadedBuffer *pFVar14;
  ulonglong uVar15;
  undefined1 auStackY_c8 [32];
  FRDGBufferDesc local_98;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  int iStack_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar10 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                     ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar11 = TMapBase<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>_>
            ::FindChecked((TMapBase<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>_>
                           *)&this->SystemInstancesToInstanceData_RT,uVar10);
  uVar5 = (pFVar11->DataToUpload).ArrayNum;
  if (0 < (int)uVar5) {
    this_00 = *(FRDGBuilder **)param_1;
    pTVar4 = &pFVar11->DataToUpload;
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    uVar15 = (ulonglong)uVar5 + 0xf & 0xfffffff0;
    if ((((ulonglong)uVar5 + 0xf & 0xfffffffffffffff0) != uVar15) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar8))
    {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uStack_70 = 0x10119;
    local_78._4_4_ = (uint)(uVar15 >> 2);
    local_78._0_4_ = 4;
    local_98._12_4_ = uStack_6c;
    local_98.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
    local_68 = (undefined **)0x0;
    local_98.BytesPerElement = 4;
    local_98.NumElements = local_78._4_4_;
    local_98.Metadata = (FShaderParametersMetadata *)0x0;
    ResizeBufferIfNeeded(this_00,&pFVar11->PooledBuffer,&local_98,L"NiagaraSocketReader");
    uStack_60 = (pTVar4->AllocatorInstance).Data;
    piVar1 = &(pFVar11->DataToUpload).ArrayMax;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iStack_54 = *piVar1;
    local_58 = (pFVar11->DataToUpload).ArrayNum;
    local_68 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4__PreStage_FNDIProxy_NDISocketReaderLocal__UEAAXAEBUFNDIGpuComputePreStageContext___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`NDISocketReaderLocal::FNDIProxy::PreStage'::__l5::<lambda_1>,void,void_const_*>
               ::Call;
    (pFVar11->DataToUpload).ArrayNum = 0;
    *piVar1 = 0;
    local_50 = (longlong *)0x0;
    pFVar12 = FRDGBuilder::RegisterExternalBuffer(this_00,&pFVar11->PooledBuffer,None);
    FRDGUserValidation::ValidateUploadBuffer
              (&this_00->UserValidation,pFVar12,pFVar6,(ulonglong)uVar5);
    iVar9 = (this_00->UploadedBuffers).ArrayNum;
    piVar2 = &(this_00->UploadedBuffers).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                        (0x10e0,&(this_00->UploadedBuffers).AllocatorInstance,piVar2);
    }
    (this_00->UploadedBuffers).ArrayNum = iVar9 + 1;
    pFVar14 = (this_00->UploadedBuffers).AllocatorInstance.Data + iVar9;
    pFVar14->Buffer = pFVar12;
    pFVar14->Data = pFVar6;
    pFVar14->DataSize = (ulonglong)uVar5;
    pFVar14->bUseDataCallbacks = false;
    pFVar14->bUseFreeCallbacks = true;
    *(undefined8 *)&pFVar14->DataCallback = 0;
    *(undefined8 *)&(pFVar14->DataCallback).field_0x28 = 0;
    *(undefined8 *)&pFVar14->DataSizeCallback = 0;
    *(undefined8 *)&(pFVar14->DataSizeCallback).field_0x28 = 0;
    *(code **)&pFVar14->DataFreeCallback = local_78;
    *(longlong **)&(pFVar14->DataFreeCallback).field_0x28 = local_50;
    *(undefined4 *)&(pFVar14->DataFreeCallback).field_0x10 = (undefined4)local_68;
    *(undefined4 *)&(pFVar14->DataFreeCallback).field_0x14 = local_68._4_4_;
    *(undefined4 *)&(pFVar14->DataFreeCallback).field_0x18 = (undefined4)uStack_60;
    *(undefined4 *)&(pFVar14->DataFreeCallback).field_0x1c = uStack_60._4_4_;
    *(ulonglong *)&(pFVar14->DataFreeCallback).field_0x20 = CONCAT44(iStack_54,local_58);
    if (*(longlong *)&pFVar14->DataFreeCallback != 0) {
      local_78 = (code *)0x0;
    }
    *(undefined8 *)&pFVar14->DataFillCallback = 0;
    *(undefined8 *)&(pFVar14->DataFillCallback).field_0x28 = 0;
    pbVar3 = (byte *)((longlong)&pFVar12->_padding_ + 1);
    *pbVar3 = *pbVar3 | 0x80;
    if (local_78 != (code *)0x0) {
      plVar13 = &local_68;
      if (local_50 != (longlong *)0x0) {
        plVar13 = local_50;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    (pFVar11->DataToUpload).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar4->AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// ProvidePerInstanceDataForRenderThread @ 148fc7770

void __cdecl
NDISocketReaderLocal::FNDIProxy::ProvidePerInstanceDataForRenderThread
          (void *param_1,void *param_2,ulong64 *param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TTransform<float>_const_,int> *pTVar8;
  uint uVar9;
  uint uVar10;
  TArrayView<UE::Math::TTransform<float>_const_,int> local_68;
  TArrayView<UE::Math::TTransform<float>_const_,int> local_58;
  TArrayView<UE::Math::TTransform<float>_const_,int> local_48;
  TArrayView<UE::Math::TTransform<float>_const_,int> local_38;
  
  memset(param_1,0,0xa0);
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x88);
  piVar1 = (int *)((longlong)param_1 + 0x90);
  *(__m128 *)((longlong)param_1 + 0x20) = UE::Math::TTransform<float>::Identity.Rotation;
  *(__m128 *)((longlong)param_1 + 0x30) = UE::Math::TTransform<float>::Identity.Translation;
  *(__m128 *)((longlong)param_1 + 0x40) = UE::Math::TTransform<float>::Identity.Scale3D;
  *(__m128 *)((longlong)param_1 + 0x50) = UE::Math::TTransform<float>::Identity.Rotation;
  *(__m128 *)((longlong)param_1 + 0x60) = UE::Math::TTransform<float>::Identity.Translation;
  *(__m128 *)((longlong)param_1 + 0x70) = UE::Math::TTransform<float>::Identity.Scale3D;
  *(byte *)param_1 = *(byte *)((longlong)param_2 + 0x38) & 1;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 0x170);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0x174);
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x178);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x118);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x110);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar5;
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x128);
  *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x120);
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar5;
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x138);
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x130);
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar5;
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x148);
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x140);
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar5;
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x158);
  *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x150);
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar5;
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x168);
  *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x160);
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar5;
  if ((*(uint *)((longlong)param_2 + 0x38) & 4) != 0) {
    *(uint *)((longlong)param_2 + 0x38) = *(uint *)((longlong)param_2 + 0x38) & 0xfffffffb;
    iVar3 = *(int *)((longlong)param_2 + 0x188) * 4;
    iVar7 = *(int *)((longlong)param_2 + 0x1a8);
    *(int *)((longlong)param_1 + 0x80) = iVar3;
    uVar9 = iVar3 + iVar7 * 0x50;
    *(int *)((longlong)param_1 + 0x84) = iVar7 * 0x28 + iVar3;
    iVar7 = *piVar1;
    if (iVar7 < (int)uVar9) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar9 - iVar7,pFVar2,piVar1,(int *)((longlong)param_1 + 0x94));
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < iVar7) {
        uVar10 = iVar7 - uVar9;
        if (((int)(uVar10 | uVar9) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar10 != 0) {
          iVar7 = (*piVar1 - uVar10) - uVar9;
          if (iVar7 != 0) {
            memmove(pFVar2->Data + (int)uVar9,pFVar2->Data + (int)uVar9 + (int)uVar10,
                    (longlong)iVar7);
          }
          *piVar1 = *piVar1 - uVar10;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,pFVar2,*piVar1,(int *)((longlong)param_1 + 0x94));
        }
      }
    }
    memcpy(pFVar2->Data,*(void **)((longlong)param_2 + 0x180),(longlong)iVar3);
    pTVar8 = TArrayView<UE::Math::TTransform<float>_const_,int>::
             TArrayView<UE::Math::TTransform<float>_const_,int><TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_48,
                        (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)
                        ((longlong)param_2 + 0x1a0));
    local_68.DataPtr = pTVar8->DataPtr;
    local_68.ArrayNum = pTVar8->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    CopyTransforms((uchar *)(pFVar2->Data + *(uint *)((longlong)param_1 + 0x80)),&local_68);
    pTVar8 = TArrayView<UE::Math::TTransform<float>_const_,int>::
             TArrayView<UE::Math::TTransform<float>_const_,int><TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_38,
                        (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)
                        ((longlong)param_2 + 0x1b0));
    local_58.DataPtr = pTVar8->DataPtr;
    local_58.ArrayNum = pTVar8->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    CopyTransforms((uchar *)(pFVar2->Data + *(uint *)((longlong)param_1 + 0x84)),&local_58);
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 1492446a0

int __thiscall
NDISpriteRendererInfoLocal::FNDIProxy::PerInstanceDataPassedToRenderThreadSize(FNDIProxy *this)

{
  return 0;
}

// PushToRenderThread @ 149248160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread
          (FNDIProxy *this,UNiagaraSpriteRendererProperties *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *this_00;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  UNiagaraSpriteRendererProperties *pUVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_f8 [32];
  FNDIProxy *local_d8;
  code *pcStack_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar6 = param_1;
  if (param_1 == (UNiagaraSpriteRendererProperties *)0x0) {
    this_00 = Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar6 = (UNiagaraSpriteRendererProperties *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  local_b8 = pUVar6->bSubImageBlend;
  uStack_c4 = (uint)pUVar6->SourceMode;
  uStack_c0 = (uint)pUVar6->Alignment;
  uStack_bc = (uint)pUVar6->FacingMode;
  local_c8 = (uint)(param_1 != (UNiagaraSpriteRendererProperties *)0x0);
  uStack_b4 = local_98[0]._4_4_;
  fVar7 = (float)(pUVar6->SubImageSize).field0_0x0._s_0.X;
  local_a8[0] = (code *)0x0;
  fVar8 = (float)(pUVar6->SubImageSize).field0_0x0._s_0.Y;
  local_d8 = this;
  local_80 = FMemory::Malloc(0x40,0x10);
  *local_80 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__PushToRenderThread_FNDIProxy_NDISpriteRendererInfoLocal__QEAAXPEBVUNiagaraSpriteRendererProperties___Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_80[2] = (code *)local_d8;
  local_80[3] = pcStack_d0;
  local_80[4] = (code *)CONCAT44(uStack_c4,local_c8);
  local_80[5] = (code *)CONCAT44(uStack_bc,uStack_c0);
  *(uint *)(local_80 + 6) = local_b8;
  *(undefined4 *)((longlong)local_80 + 0x34) = uStack_b4;
  *(float *)(local_80 + 7) = fVar7;
  *(float *)((longlong)local_80 + 0x3c) = fVar8;
  if (local_80 + 2 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  fStack_b0 = fVar7;
  fStack_ac = fVar8;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread_::__l2::TSTR_NDISpriteRendererInfo_Update49>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_78._24_8_ = local_98[1];
    local_78._32_8_ = local_98[2];
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread'::__l2::TSTR_NDISpriteRendererInfo_Update49>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar3);
    uVar5 = (ulonglong)local_48;
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar4 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar4 = local_50;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar4 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar4 = local_80;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

