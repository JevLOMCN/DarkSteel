// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// operator() @ 14d8c5010

TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> * __thiscall
`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pTVar7 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Get(this);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = pTVar7->ArrayNum;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iVar4 = pTVar7->ArrayNum;
    pFVar8 = (pTVar7->AllocatorInstance).Data;
    pFVar2 = pFVar8 + (longlong)iVar4 * 0xc;
    while( true ) {
      if (pTVar7->ArrayNum != iVar4) {
        `TCheckedPointerIterator<FMeterChannelInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar2) break;
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar6 * 0xc) = *(undefined8 *)pFVar8;
      *(undefined4 *)(pFVar5 + (longlong)iVar6 * 0xc + 8) = *(undefined4 *)(pFVar8 + 8);
      pFVar8 = pFVar8 + 0xc;
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// ConvertMeterChannelInfoAttribute @ 14d8f09d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> * __cdecl
SAudioMeterPrivate::ConvertMeterChannelInfoAttribute
          (TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,
          TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *this;
  void *pvVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDelegateAllocation *local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  code *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::
  TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
            ((TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)local_90,param_1)
  ;
  local_58 = (code *)0x0;
  local_30 = FMemory::Malloc(0x38,8);
  this = (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)(local_30 + 1);
  *local_30 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::
  TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
            (this,(TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)local_90);
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (this != (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)0x0) {
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::__l2::<lambda_1>,TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
               ::Call;
  }
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_b0);
  local_98 = &local_c0;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,&local_c0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZ____V__6B_
    ;
    puVar2[4] = local_58;
    puVar2[9] = local_30;
    local_30 = (longlong *)0x0;
    puVar2[6] = local_48;
    puVar2[7] = uStack_40;
    puVar2[8] = local_38;
    if (puVar2[4] != 0) {
      local_58 = (code *)0x0;
    }
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  (__return_storage_ptr__->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Value).ArrayNum = 0;
  (__return_storage_ptr__->Value).ArrayMax = 0;
  __return_storage_ptr__->bIsSet = true;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_b0);
  pvVar1 = *(void **)&(__return_storage_ptr__->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)&(__return_storage_ptr__->Getter).field_0x8 =
       local_c0.DelegateAllocator;
  *(int *)&(__return_storage_ptr__->Getter).field_0x10 = local_c0.DelegateSize;
  local_c0.DelegateSize = 0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_b0);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  if (local_58 != (code *)0x0) {
    plVar4 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if ((void *)local_78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  return __return_storage_ptr__;
}

