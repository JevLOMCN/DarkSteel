// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 32

// ConvertFloatingPointType<float> @ 14995ea70

TSharedPtr<FJsonValue,1> * __cdecl
PCG::IO::Json::Helpers::ConvertFloatingPointType<float>
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,float *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FJsonValue,1> *pTVar5;
  
  fVar1 = *param_1;
  pTVar4 = ::operator_new(0x28);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_;
    FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar4 + 1),(double)fVar1);
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// ConvertFloatingPointType<double> @ 14995eb40

TSharedPtr<FJsonValue,1> * __cdecl
PCG::IO::Json::Helpers::ConvertFloatingPointType<double>
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,double *param_1)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FJsonValue,1> *pTVar5;
  
  dVar1 = *param_1;
  pTVar4 = ::operator_new(0x28);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_;
    FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar4 + 1),dVar1);
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// operator()<int> @ 149ce76d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<int>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  int iVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar10 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar10 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar6) {
      iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar6,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,StrictType);
    }
    uVar10 = (ulong64)(uint)local_78.ArrayNum;
  }
  iVar6 = (int)uVar10;
  if (-1 < iVar6) {
    if (*piVar1 < iVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
    }
    uVar8 = (uint)uVar10;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar9 = (uint)uVar10;
      if ((uint)uVar10 != uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar9 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar4.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar11 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 < pFVar11 + (longlong)*piVar1 * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(TJsonValueString<wchar_t> **)pFVar11 = local_68;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar9);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar10);
}

// operator()<float> @ 149ceb260

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<float>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          float *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  ulong64 uVar7;
  TArray<float,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<float,int> local_28;
  
  uVar7 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48),
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar5 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar5) {
      iVar5 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_48,iVar5,Default);
      iStack_30 = local_48.ArrayNum;
      local_38 = local_48.AllocatorInstance.Data;
      if (local_48.ArrayNum < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      local_28._12_4_ = uStack_2c;
      local_28.ArrayNum = iStack_30;
      local_28.DataPtr = (float *)local_38;
      IPCGAttributeAccessor::GetRange<float>(this_00,&local_28,0,pIVar2,StrictType);
    }
    uVar7 = local_48._8_8_ & 0xffffffff;
  }
  iVar5 = (int)uVar7;
  if (-1 < iVar5) {
    if (*piVar1 < iVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    Algo::
    Transform<TArray<float,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&,__PCG::IO::Json::Private::AttributeToJsonValues_::__l2::<lambda_1>::operator()<float>_::__l3::<lambda_1>_>
              (&local_48,__return_storage_ptr__,*(FCacheEntry **)this);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar7);
}

// operator()<double> @ 149ceece0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<double>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          double *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  ulong64 uVar7;
  TArray<double,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<double,int> local_28;
  
  uVar7 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48),
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar5 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar5) {
      iVar5 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_48,iVar5,Default);
      iStack_30 = local_48.ArrayNum;
      local_38 = local_48.AllocatorInstance.Data;
      if (local_48.ArrayNum < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      local_28._12_4_ = uStack_2c;
      local_28.ArrayNum = iStack_30;
      local_28.DataPtr = (double *)local_38;
      IPCGAttributeAccessor::GetRange<double>(this_00,&local_28,0,pIVar2,StrictType);
    }
    uVar7 = local_48._8_8_ & 0xffffffff;
  }
  iVar5 = (int)uVar7;
  if (-1 < iVar5) {
    if (*piVar1 < iVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    Algo::
    Transform<TArray<double,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&,__PCG::IO::Json::Private::AttributeToJsonValues_::__l2::<lambda_1>::operator()<double>_::__l3::<lambda_1>_>
              (&local_48,__return_storage_ptr__,*(FCacheEntry **)this);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar7);
}

// operator()<UE::Math::TQuat<double>_> @ 149cf2760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
operator()<UE::Math::TQuat<double>_>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TQuat<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FJsonValueArray,1> *pTVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_108 [32];
  undefined1 local_b8 [8];
  FJsonValueArray *local_b0;
  TReferenceControllerBase<1> *local_a8;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_a0;
  double *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TArrayView<double_const_,int> local_78;
  TSharedPtr<FJsonValueArray,1> local_68;
  double local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  PCGAttributeAccessorHelpers::ExtractAllValues<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>
            (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x40),
             *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48),&local_a0,StrictType);
  uVar9 = local_a0._8_8_ & 0xffffffff;
  if (local_a0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  if (*piVar1 < local_a0.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_a0.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
    uVar9 = local_a0._8_8_ & 0xffffffff;
  }
  iVar8 = (int)uVar9;
  pFVar11 = local_a0.AllocatorInstance.Data + (longlong)iVar8 * 0x20;
  pFVar10 = local_a0.AllocatorInstance.Data + 0x10;
  while( true ) {
    if ((int)uVar9 != iVar8) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TQuat<double>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_b8);
    }
    if (pFVar10 + -0x10 == pFVar11) break;
    local_58 = *(double *)(pFVar10 + -0x10);
    local_50 = *(undefined8 *)(pFVar10 + -8);
    uStack_48 = *(undefined8 *)pFVar10;
    local_88 = &local_58;
    uStack_80 = 4;
    local_78._12_4_ = uStack_7c;
    local_78.ArrayNum = 4;
    local_40 = *(undefined8 *)(pFVar10 + 8);
    local_78.DataPtr = local_88;
    pTVar6 = PCG::IO::Json::Private::DoubleArrayToJsonArray(&local_68,&local_78);
    local_b0 = pTVar6->Object;
    local_a8 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_b0) &&
       ((FScriptContainerElement *)&local_b0 < pFVar2 + (longlong)*piVar1 * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(FJsonValueArray **)(pFVar2 + (longlong)iVar5 * 0x10) = local_b0;
    *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = local_a8;
    local_a8 = (TReferenceControllerBase<1> *)0x0;
    local_b0 = (FJsonValueArray *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uVar9 = local_a0._8_8_ & 0xffffffff;
    pFVar10 = pFVar10 + 0x20;
  }
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator()<UE::Math::TRotator<double>_> @ 149cf63f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
operator()<UE::Math::TRotator<double>_>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TRotator<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<FJsonValueArray,1> *pTVar7;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8 [8];
  FJsonValueArray *local_a0;
  TReferenceControllerBase<1> *local_98;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_90;
  double *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<double_const_,int> local_68;
  TSharedPtr<FJsonValueArray,1> local_58;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  PCGAttributeAccessorHelpers::
  ExtractAllValues<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>
            (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x40),
             *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48),&local_90,StrictType);
  uVar10 = local_90._8_8_ & 0xffffffff;
  if (local_90.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  if (*piVar1 < local_90.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_90.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
    uVar10 = local_90._8_8_ & 0xffffffff;
  }
  iVar9 = (int)uVar10;
  pFVar2 = local_90.AllocatorInstance.Data + (longlong)iVar9 * 0x18;
  FVar11.Data = local_90.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar10 != iVar9) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TRotator<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_a8);
    }
    if (FVar11.Data == pFVar2) break;
    local_48 = *(double *)FVar11.Data;
    uStack_40 = *(undefined8 *)(FVar11.Data + 8);
    local_78 = &local_48;
    uStack_70 = 3;
    local_38 = *(undefined8 *)(FVar11.Data + 0x10);
    local_68._12_4_ = uStack_6c;
    local_68.ArrayNum = 3;
    local_68.DataPtr = local_78;
    pTVar7 = PCG::IO::Json::Private::DoubleArrayToJsonArray(&local_58,&local_68);
    local_a0 = pTVar7->Object;
    local_98 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_98 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_a0) &&
       ((FScriptContainerElement *)&local_a0 < pFVar3 + (longlong)*piVar1 * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FJsonValueArray **)(pFVar3 + (longlong)iVar6 * 0x10) = local_a0;
    *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = local_98;
    local_98 = (TReferenceControllerBase<1> *)0x0;
    local_a0 = (FJsonValueArray *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uVar10 = local_90._8_8_ & 0xffffffff;
    FVar11.Data = FVar11.Data + 0x18;
  }
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator()<UE::Math::TTransform<double>_> @ 149cfa110

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
operator()<UE::Math::TTransform<double>_>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  int *piVar1;
  TSharedPtr<FJsonValue,1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  TTransform<double> *pTVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_38;
  TSharedPtr<FJsonValue,1> local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  PCGAttributeAccessorHelpers::
  ExtractAllValues<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
            (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x40),
             *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48),&local_38,StrictType);
  uVar8 = local_38._8_8_ & 0xffffffff;
  if (local_38.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar8);
  }
  if (*piVar1 < local_38.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_38.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
    uVar8 = local_38._8_8_ & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  pTVar10 = (TTransform<double> *)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 0x60);
  FVar11.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if ((TTransform<double> *)FVar11.Data == pTVar10) break;
    PCG::IO::Json::Helpers::ConvertFloatingPointType(&local_28,(TTransform<double> *)FVar11.Data);
    pTVar2 = (TSharedPtr<FJsonValue,1> *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pTVar2 <= &local_28) && (&local_28 < pTVar2 + *piVar1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(FJsonValue **)pFVar9 = local_28.Object;
    *(TReferenceControllerBase<1> **)(pFVar9 + 8) =
         local_28.SharedReferenceCount.ReferenceController;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (FJsonValue *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uVar8 = local_38._8_8_ & 0xffffffff;
    FVar11.Data = FVar11.Data + 0x60;
  }
  if ((TTransform<double> *)local_38.AllocatorInstance.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator()<UE::Math::TVector2<double>_> @ 149cfe620

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
operator()<UE::Math::TVector2<double>_>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FJsonValueArray,1> *pTVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FJsonValueArray *local_88;
  TReferenceControllerBase<1> *local_80;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_78;
  double local_68;
  undefined8 uStack_60;
  double *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TArrayView<double_const_,int> local_48;
  TSharedPtr<FJsonValueArray,1> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  PCGAttributeAccessorHelpers::
  ExtractAllValues<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
            (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x40),
             *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48),&local_78,StrictType);
  uVar9 = local_78._8_8_ & 0xffffffff;
  if (local_78.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  if (*piVar1 < local_78.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_78.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
    uVar9 = local_78._8_8_ & 0xffffffff;
  }
  iVar8 = (int)uVar9;
  pFVar11 = local_78.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  FVar10.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar10.Data == pFVar11) break;
    local_68 = *(double *)FVar10.Data;
    uStack_60 = *(undefined8 *)(FVar10.Data + 8);
    local_58 = &local_68;
    uStack_50 = 2;
    local_48._12_4_ = uStack_4c;
    local_48.ArrayNum = 2;
    local_48.DataPtr = local_58;
    pTVar6 = PCG::IO::Json::Private::DoubleArrayToJsonArray(&local_38,&local_48);
    local_88 = pTVar6->Object;
    local_80 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_88) &&
       ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)*piVar1 * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(FJsonValueArray **)(pFVar2 + (longlong)iVar5 * 0x10) = local_88;
    *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = local_80;
    local_80 = (TReferenceControllerBase<1> *)0x0;
    local_88 = (FJsonValueArray *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uVar9 = local_78._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 0x10;
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator()<UE::Math::TVector4<double>_> @ 149d021f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
operator()<UE::Math::TVector4<double>_>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector4<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FJsonValueArray,1> *pTVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_108 [32];
  undefined1 local_b8 [8];
  FJsonValueArray *local_b0;
  TReferenceControllerBase<1> *local_a8;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_a0;
  double *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TArrayView<double_const_,int> local_78;
  TSharedPtr<FJsonValueArray,1> local_68;
  double local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  PCGAttributeAccessorHelpers::
  ExtractAllValues<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>
            (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x40),
             *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48),&local_a0,StrictType);
  uVar9 = local_a0._8_8_ & 0xffffffff;
  if (local_a0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  if (*piVar1 < local_a0.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_a0.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
    uVar9 = local_a0._8_8_ & 0xffffffff;
  }
  iVar8 = (int)uVar9;
  pFVar11 = local_a0.AllocatorInstance.Data + (longlong)iVar8 * 0x20;
  pFVar10 = local_a0.AllocatorInstance.Data + 0x10;
  while( true ) {
    if ((int)uVar9 != iVar8) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector4<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_b8);
    }
    if (pFVar10 + -0x10 == pFVar11) break;
    local_58 = *(double *)(pFVar10 + -0x10);
    local_50 = *(undefined8 *)(pFVar10 + -8);
    uStack_48 = *(undefined8 *)pFVar10;
    local_88 = &local_58;
    uStack_80 = 4;
    local_78._12_4_ = uStack_7c;
    local_78.ArrayNum = 4;
    local_40 = *(undefined8 *)(pFVar10 + 8);
    local_78.DataPtr = local_88;
    pTVar6 = PCG::IO::Json::Private::DoubleArrayToJsonArray(&local_68,&local_78);
    local_b0 = pTVar6->Object;
    local_a8 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_b0) &&
       ((FScriptContainerElement *)&local_b0 < pFVar2 + (longlong)*piVar1 * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(FJsonValueArray **)(pFVar2 + (longlong)iVar5 * 0x10) = local_b0;
    *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = local_a8;
    local_a8 = (TReferenceControllerBase<1> *)0x0;
    local_b0 = (FJsonValueArray *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uVar9 = local_a0._8_8_ & 0xffffffff;
    pFVar10 = pFVar10 + 0x20;
  }
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator()<UE::Math::TVector<double>_> @ 149d060a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
operator()<UE::Math::TVector<double>_>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<FJsonValueArray,1> *pTVar7;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8 [8];
  FJsonValueArray *local_a0;
  TReferenceControllerBase<1> *local_98;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_90;
  double *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<double_const_,int> local_68;
  TSharedPtr<FJsonValueArray,1> local_58;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  PCGAttributeAccessorHelpers::
  ExtractAllValues<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x40),
             *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48),&local_90,StrictType);
  uVar10 = local_90._8_8_ & 0xffffffff;
  if (local_90.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  if (*piVar1 < local_90.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_90.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
    uVar10 = local_90._8_8_ & 0xffffffff;
  }
  iVar9 = (int)uVar10;
  pFVar2 = local_90.AllocatorInstance.Data + (longlong)iVar9 * 0x18;
  FVar11.Data = local_90.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar10 != iVar9) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_a8);
    }
    if (FVar11.Data == pFVar2) break;
    local_48 = *(double *)FVar11.Data;
    uStack_40 = *(undefined8 *)(FVar11.Data + 8);
    local_78 = &local_48;
    uStack_70 = 3;
    local_38 = *(undefined8 *)(FVar11.Data + 0x10);
    local_68._12_4_ = uStack_6c;
    local_68.ArrayNum = 3;
    local_68.DataPtr = local_78;
    pTVar7 = PCG::IO::Json::Private::DoubleArrayToJsonArray(&local_58,&local_68);
    local_a0 = pTVar7->Object;
    local_98 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_98 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_a0) &&
       ((FScriptContainerElement *)&local_a0 < pFVar3 + (longlong)*piVar1 * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FJsonValueArray **)(pFVar3 + (longlong)iVar6 * 0x10) = local_a0;
    *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = local_98;
    local_98 = (TReferenceControllerBase<1> *)0x0;
    local_a0 = (FJsonValueArray *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uVar10 = local_90._8_8_ & 0xffffffff;
    FVar11.Data = FVar11.Data + 0x18;
  }
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator()<FSoftClassPath> @ 149d09f10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<FSoftClassPath>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FSoftClassPath *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  int iVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar10 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar10 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar6) {
      iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar6,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,StrictType);
    }
    uVar10 = (ulong64)(uint)local_78.ArrayNum;
  }
  iVar6 = (int)uVar10;
  if (-1 < iVar6) {
    if (*piVar1 < iVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
    }
    uVar8 = (uint)uVar10;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar9 = (uint)uVar10;
      if ((uint)uVar10 != uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar9 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar4.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar11 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 < pFVar11 + (longlong)*piVar1 * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(TJsonValueString<wchar_t> **)pFVar11 = local_68;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar9);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar10);
}

// operator()<FSoftObjectPath> @ 149d0e0e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<FSoftObjectPath>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FSoftObjectPath *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  int iVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar10 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar10 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar6) {
      iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar6,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,StrictType);
    }
    uVar10 = (ulong64)(uint)local_78.ArrayNum;
  }
  iVar6 = (int)uVar10;
  if (-1 < iVar6) {
    if (*piVar1 < iVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
    }
    uVar8 = (uint)uVar10;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar9 = (uint)uVar10;
      if ((uint)uVar10 != uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar9 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar4.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar11 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 < pFVar11 + (longlong)*piVar1 * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(TJsonValueString<wchar_t> **)pFVar11 = local_68;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar9);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar10);
}

// operator()<FName> @ 149d12180

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<FName>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  int iVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar10 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar10 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar6) {
      iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar6,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,StrictType);
    }
    uVar10 = (ulong64)(uint)local_78.ArrayNum;
  }
  iVar6 = (int)uVar10;
  if (-1 < iVar6) {
    if (*piVar1 < iVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
    }
    uVar8 = (uint)uVar10;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar9 = (uint)uVar10;
      if ((uint)uVar10 != uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar9 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar4.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar11 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 < pFVar11 + (longlong)*piVar1 * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(TJsonValueString<wchar_t> **)pFVar11 = local_68;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar9);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar10);
}

// operator()<FString> @ 149d15d90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<FString>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  int iVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar10 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar10 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar6) {
      iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar6,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,StrictType);
    }
    uVar10 = (ulong64)(uint)local_78.ArrayNum;
  }
  iVar6 = (int)uVar10;
  if (-1 < iVar6) {
    if (*piVar1 < iVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
    }
    uVar8 = (uint)uVar10;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar9 = (uint)uVar10;
      if ((uint)uVar10 != uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar9 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar4.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar11 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 < pFVar11 + (longlong)*piVar1 * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(TJsonValueString<wchar_t> **)pFVar11 = local_68;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar9);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar10);
}

// operator()<__int64> @ 149d19d10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<__int64>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          long64 *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  int iVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar10 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar10 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar6) {
      iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar6,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,StrictType);
    }
    uVar10 = (ulong64)(uint)local_78.ArrayNum;
  }
  iVar6 = (int)uVar10;
  if (-1 < iVar6) {
    if (*piVar1 < iVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
    }
    uVar8 = (uint)uVar10;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar9 = (uint)uVar10;
      if ((uint)uVar10 != uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar9 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar4.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar11 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 < pFVar11 + (longlong)*piVar1 * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(TJsonValueString<wchar_t> **)pFVar11 = local_68;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar9);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar10);
}

// operator()<bool> @ 149d1d8a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
`PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<bool>
          (void *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  int iVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar10 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar10 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar6) {
      iVar6 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar6,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,StrictType);
    }
    uVar10 = (ulong64)(uint)local_78.ArrayNum;
  }
  iVar6 = (int)uVar10;
  if (-1 < iVar6) {
    if (*piVar1 < iVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
    }
    uVar8 = (uint)uVar10;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar9 = (uint)uVar10;
      if ((uint)uVar10 != uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar9 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar4.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar11 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 < pFVar11 + (longlong)*piVar1 * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(TJsonValueString<wchar_t> **)pFVar11 = local_68;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      uVar10 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar9);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar10);
}

// AppendHeader @ 149d3c790

void __cdecl
PCG::IO::Json::Helpers::AppendHeader(TSharedPtr<FJsonObject,1> *param_1,int param_2,int param_3)

{
  FJsonObject *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString local_28;
  FString local_18;
  
  pFVar1 = param_1->Object;
  if (pFVar1 == (FJsonObject *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7406998631863025473>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\IO\\PCGJsonHelpers.cpp"
                       ,0xbf,"InOutJsonObject.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ::FString::FString(&local_28,L"data_version");
    FJsonObject::SetNumberField(pFVar1,&local_28,(double)param_2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (-1 < param_3) {
      if (param_1->Object == (FJsonObject *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = param_1->Object;
      ::FString::FString(&local_18,L"custom_data_version");
      FJsonObject::SetNumberField(pFVar1,&local_18,(double)param_3);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AppendSelectionByAttribute @ 149d3c8b0

void __cdecl
PCG::IO::Json::Private::AppendSelectionByAttribute
          (TSharedPtr<FJsonObject,1> *param_1,
          TArray<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  iVar1 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar5) break;
    if (param_1->Object == (FJsonObject *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FJsonObject::SetArrayField
              (param_1->Object,(FString *)pFVar4,
               (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(pFVar4 + 0x10));
    pFVar4 = pFVar4 + 0x20;
  }
  return;
}

// AppendSelectionByElement @ 149d3c960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PCG::IO::Json::Private::AppendSelectionByElement
          (TSharedPtr<FJsonObject,1> *param_1,
          TArray<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
          *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  FJsonObject *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  undefined1 local_res20 [8];
  TSharedPtr<FJsonObject,1> local_80;
  FString local_70 [3];
  
  pTVar6 = _UNK_150651568;
  pTVar5 = ___xmm_00000000000000000000000000000010;
  if (param_3 < 1) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7406998631863025548>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\IO\\PCGJsonHelpers.cpp"
                       ,0x74,"NumElements > 0");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar12 = 0;
    uVar18 = uVar12;
    do {
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      pTVar9 = ::operator_new(0x60);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        local_80.Object = (FJsonObject *)pTVar5;
        local_80.SharedReferenceCount.ReferenceController = pTVar6;
      }
      else {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
        pTVar9[2]._padding_ = 0;
        pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[1]._padding_ = 0;
        pTVar9[3]._padding_ = 0;
        pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[3].WeakReferenceCount = (atomic<int>)0x80;
        *(undefined4 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
        *(undefined4 *)&pTVar9[4]._padding_ = 0xffffffff;
        pTVar9[5]._padding_ = 0;
        if ((pTVar9 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        pTVar14 = pTVar9;
        local_80.Object = (FJsonObject *)(pTVar9 + 1);
        local_80.SharedReferenceCount.ReferenceController = pTVar9;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      uVar1 = param_2->ArrayNum;
      uVar10 = (ulonglong)(int)uVar1;
      pFVar17 = (param_2->AllocatorInstance).Data;
      pFVar16 = pFVar17 + uVar10 * 0x20;
      pFVar15 = pFVar17 + 0x18;
      while( true ) {
        if (param_2->ArrayNum != (int)uVar10) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        uVar11 = (uint)uVar12;
        if (pFVar17 == pFVar16) break;
        if ((int)uVar11 < *(int *)pFVar15) {
          lVar2 = *(longlong *)(pFVar15 + -8);
          uVar13 = ~uVar11 >> 0x1f;
          if ((*(longlong *)(lVar2 + uVar18) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)(*(longlong *)(lVar2 + uVar18) + 8) != 5) {
            uVar8 = 0;
            if ((int)uVar11 < *(int *)pFVar15) {
              uVar8 = uVar13;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar2 = *(longlong *)(pFVar15 + -8);
            if ((*(longlong *)(lVar2 + uVar18) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(int *)(*(longlong *)(lVar2 + uVar18) + 8) != 3) {
              uVar8 = 0;
              if ((int)uVar11 < *(int *)pFVar15) {
                uVar8 = uVar13;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar2 = *(longlong *)(pFVar15 + -8);
              if ((*(longlong *)(lVar2 + uVar18) == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(int *)(*(longlong *)(lVar2 + uVar18) + 8) != 2) {
                uVar8 = 0;
                if ((int)uVar11 < *(int *)pFVar15) {
                  uVar8 = uVar13;
                }
                if ((uVar8 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                lVar2 = *(longlong *)(pFVar15 + -8);
                if ((*(longlong *)(lVar2 + uVar18) == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(int *)(*(longlong *)(lVar2 + uVar18) + 8) != 6) goto LAB_149d3cd53;
              }
            }
          }
          if (((TReferenceControllerBase<1> *)local_80.Object == (TReferenceControllerBase<1> *)0x0)
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = local_80.Object;
          uVar8 = 0;
          if ((int)uVar11 < *(int *)pFVar15) {
            uVar8 = uVar13;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FJsonObject::SetField
                    (pFVar3,(FString *)pFVar17,
                     (TSharedPtr<FJsonValue,1> *)(*(longlong *)(pFVar15 + -8) + uVar18));
        }
LAB_149d3cd53:
        uVar10 = (ulonglong)uVar1;
        pFVar17 = pFVar17 + 0x20;
        pFVar15 = pFVar15 + 0x20;
      }
      if ((param_1->Object == (FJsonObject *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = param_1->Object;
      local_70[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70[0].Data.ArrayNum = 0;
      local_70[0].Data.ArrayMax = 0;
      ::FString::AppendInt(local_70,uVar11);
      FJsonObject::SetObjectField(pFVar3,local_70,&local_80);
      if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.SharedReferenceCount.ReferenceController);
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar18 = uVar18 + 0x10;
    } while ((int)(uVar11 + 1) < param_3);
    DestructItems<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,int>
              ((TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_> *)
               (param_2->AllocatorInstance).Data,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  return;
}

// AttributeToJsonValues @ 149d3f260

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __cdecl
PCG::IO::Json::Private::AttributeToJsonValues
          (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FCacheEntry *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  bool local_res8 [8];
  int local_res10 [2];
  float local_res18 [2];
  FCacheEntry *local_res20;
  long64 local_168;
  double local_160;
  FName local_158;
  TVector2<double> local_150;
  FString local_140;
  TVector<double> local_130;
  TRotator<double> local_118;
  TVector4<double> local_f8;
  TQuat<double> local_d8;
  FSoftObjectPath local_b8;
  FSoftClassPath local_98;
  TTransform<double> local_78;
  
  if (((param_1->Accessor).Ptr == (IPCGAttributeAccessor *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry.Accessor.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\IO\\PCGJsonHelpers.cpp"
                         ,0x37,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  local_res20 = param_1;
  switch(((param_1->Accessor).Ptr)->UnderlyingType) {
  case 0:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<float>
              (&local_res20,__return_storage_ptr__,local_res18);
    return __return_storage_ptr__;
  case 1:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<double>
              (&local_res20,__return_storage_ptr__,&local_160);
    return __return_storage_ptr__;
  case 2:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<int>
              (&local_res20,__return_storage_ptr__,local_res10);
    return __return_storage_ptr__;
  case 3:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<__int64>
              (&local_res20,__return_storage_ptr__,&local_168);
    return __return_storage_ptr__;
  case 4:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
    operator()<UE::Math::TVector2<double>_>(&local_res20,__return_storage_ptr__,&local_150);
    return __return_storage_ptr__;
  case 5:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
    operator()<UE::Math::TVector<double>_>(&local_res20,__return_storage_ptr__,&local_130);
    return __return_storage_ptr__;
  case 6:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
    operator()<UE::Math::TVector4<double>_>(&local_res20,__return_storage_ptr__,&local_f8);
    return __return_storage_ptr__;
  case 7:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
    operator()<UE::Math::TQuat<double>_>(&local_res20,__return_storage_ptr__,&local_d8);
    return __return_storage_ptr__;
  case 8:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
    operator()<UE::Math::TTransform<double>_>(&local_res20,__return_storage_ptr__,&local_78);
    return __return_storage_ptr__;
  case 9:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<FString>
              (&local_res20,__return_storage_ptr__,&local_140);
    return __return_storage_ptr__;
  case 10:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<bool>
              (&local_res20,__return_storage_ptr__,local_res8);
    return __return_storage_ptr__;
  case 0xb:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
    operator()<UE::Math::TRotator<double>_>(&local_res20,__return_storage_ptr__,&local_118);
    return __return_storage_ptr__;
  case 0xc:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<FName>
              (&local_res20,__return_storage_ptr__,&local_158);
    return __return_storage_ptr__;
  case 0xd:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<FSoftObjectPath>
              (&local_res20,__return_storage_ptr__,&local_b8);
    return __return_storage_ptr__;
  case 0xe:
    `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<FSoftClassPath>
              (&local_res20,__return_storage_ptr__,&local_98);
    return __return_storage_ptr__;
  default:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
}

// BuildKeyValuesMap @ 149d3f530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PCG::IO::Json::Private::BuildKeyValuesMap
          (TArray<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,
          TArray<PCG::IO::Accessor::FCacheEntry,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar17;
  FPCGAttributePropertySelector *this;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  bool local_res8 [8];
  ForElementType<PCG::IO::Accessor::FCacheEntry> local_res10;
  int local_res18 [2];
  float local_res20 [2];
  FPCGAttributePropertySelector *local_1f8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_1f0;
  longlong local_1e0;
  FName local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  long64 local_1c0;
  double local_1b8;
  FString local_1b0;
  FSoftObjectPath local_1a0;
  FSoftClassPath local_180;
  FString local_160;
  TVector2<double>_u_0 local_150;
  TVector<double>_u_0 local_140;
  TRotator<double> local_128;
  TVector4<double>_u_0 local_108;
  TQuat<double> local_e8;
  TTransform<double> local_c8;
  
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  pTVar3 = (TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_> *)
           (param_1->AllocatorInstance).Data;
  local_res10 = (ForElementType<PCG::IO::Accessor::FCacheEntry>)param_2;
  if (param_1->ArrayMax < 0) {
    DestructItems<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar3,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar3,*piVar2);
    *piVar2 = 0;
  }
  uVar19 = 0;
  uVar14 = param_2->ArrayNum;
  iVar13 = *piVar2;
  if (iVar13 < (int)uVar14) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,uVar14 - iVar13,&param_1->AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,int>
              ((param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x20,uVar14 - iVar13);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((int)uVar14 < iVar13) {
      uVar15 = iVar13 - uVar14;
      if (((int)(uVar15 | uVar14) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar15 != 0) {
        TArray<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(param_1,uVar14,uVar15);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&param_1->AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  dVar7 = _UNK_15061cbc8;
  dVar6 = ___xmm_3ff00000000000000000000000000000;
  iVar13 = param_2->ArrayNum;
  uVar14 = 0;
  if (0 < iVar13) {
    local_1e0 = 0;
    local_1c8 = 0;
    local_1d0 = 0;
    do {
      lVar9 = local_1c8;
      lVar8 = local_1d0;
      uVar16 = ~uVar19 >> 0x1f;
      uVar15 = uVar14;
      if ((int)uVar19 < iVar13) {
        uVar15 = uVar16;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(ForElementType<PCG::IO::Accessor::FCacheEntry> *)((longlong)param_2 + 0x500) !=
          (ForElementType<PCG::IO::Accessor::FCacheEntry>)0x0) {
        param_2 = (TArray<PCG::IO::Accessor::FCacheEntry,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                   *)*(ForElementType<PCG::IO::Accessor::FCacheEntry> *)((longlong)param_2 + 0x500);
      }
      this = (FPCGAttributePropertySelector *)((longlong)param_2 + lVar8);
      uVar15 = uVar14;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar15 = uVar16;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar18 = (param_1->AllocatorInstance).Data + lVar9;
      pFVar12 = (FScriptContainerElement *)
                FPCGAttributePropertySelector::ToString(this,&local_160,false);
      if (pFVar18 != pFVar12) {
        pFVar4 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->
                 AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->AllocatorInstance).
        Data = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->
               AllocatorInstance).Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->AllocatorInstance).
        Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar18[8].field_0x0 = *(int *)&pFVar12[8].field_0x0;
        *(int *)&pFVar18[0xc].field_0x0 = *(int *)&pFVar12[0xc].field_0x0;
        *(undefined8 *)&pFVar12[8].field_0x0 = 0;
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      uVar15 = uVar14;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar15 = uVar16;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar8 = local_1c8;
      pTVar17 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)
                ((param_1->AllocatorInstance).Data + local_1c8 + 0x10);
      if ((this[1]._padding_ == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Entry.Accessor.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\IO\\PCGJsonHelpers.cpp"
                              ,0x37,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_1f8 = this;
      switch(*(undefined2 *)(this[1]._padding_ + 10)) {
      case 0:
        local_res20[0] = 0.0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<float>
                  (&local_1f8,&local_1f0,local_res20);
        break;
      case 1:
        local_1b8 = 0.0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<double>
                  (&local_1f8,&local_1f0,&local_1b8);
        break;
      case 2:
        local_res18[0] = 0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<int>
                  (&local_1f8,&local_1f0,local_res18);
        break;
      case 3:
        local_1c0 = 0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<__int64>
                  (&local_1f8,&local_1f0,&local_1c0);
        break;
      case 4:
        local_150._s_0.X = 0.0;
        local_150._s_0.Y = 0.0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
        operator()<UE::Math::TVector2<double>_>
                  (&local_1f8,&local_1f0,(TVector2<double> *)&local_150._s_0);
        break;
      case 5:
        local_140._s_0.Z = 0.0;
        local_140._s_0.X = 0.0;
        local_140._s_0.Y = 0.0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
        operator()<UE::Math::TVector<double>_>
                  (&local_1f8,&local_1f0,(TVector<double> *)&local_140._s_0);
        break;
      case 6:
        local_108._s_0.Z = dVar6;
        local_108._s_0.W = dVar7;
        local_108._s_0.X = 0.0;
        local_108._s_0.Y = 0.0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
        operator()<UE::Math::TVector4<double>_>
                  (&local_1f8,&local_1f0,(TVector4<double> *)&local_108._s_0);
        break;
      case 7:
        local_e8.X = 0.0;
        local_e8.Y = 0.0;
        local_e8.Z = 0.0;
        local_e8.W = 0.0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
        operator()<UE::Math::TQuat<double>_>(&local_1f8,&local_1f0,&local_e8);
        break;
      case 8:
        local_c8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_c8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_c8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_c8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_c8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_c8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_c8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_c8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
        operator()<UE::Math::TTransform<double>_>(&local_1f8,&local_1f0,&local_c8);
        break;
      case 9:
        local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.Data.ArrayNum = 0;
        local_1b0.Data.ArrayMax = 0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<FString>
                  (&local_1f8,&local_1f0,&local_1b0);
        break;
      case 10:
        local_res8[0] = false;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<bool>
                  (&local_1f8,&local_1f0,local_res8);
        break;
      case 0xb:
        local_128.Roll = 0.0;
        local_128.Pitch = 0.0;
        local_128.Yaw = 0.0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
        operator()<UE::Math::TRotator<double>_>(&local_1f8,&local_1f0,&local_128);
        break;
      case 0xc:
        local_1d8.ComparisonIndex.Value = 0;
        local_1d8.Number = 0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::operator()<FName>
                  (&local_1f8,&local_1f0,&local_1d8);
        break;
      case 0xd:
        local_1a0.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_1a0.AssetPath.PackageName.Number = 0;
        local_1a0.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_1a0.AssetPath.AssetName.Number = 0;
        local_1a0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.SubPathString.Data.ArrayNum = 0;
        local_1a0.SubPathString.Data.ArrayMax = 0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
        operator()<FSoftObjectPath>(&local_1f8,&local_1f0,&local_1a0);
        break;
      case 0xe:
        local_180._0_8_ = 0;
        local_180._8_8_ = 0;
        local_180._16_8_ = 0;
        local_180._24_8_ = 0;
        `PCG::IO::Json::Private::AttributeToJsonValues'::__l2::<lambda_1>::
        operator()<FSoftClassPath>(&local_1f8,&local_1f0,&local_180);
        break;
      default:
        local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1f0.ArrayNum = 0;
        local_1f0.ArrayMax = 0;
      }
      if (pTVar17 != &local_1f0) {
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)(pTVar17->AllocatorInstance).Data,pTVar17->ArrayNum);
        pFVar12 = (pTVar17->AllocatorInstance).Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pTVar17->AllocatorInstance).Data = local_1f0.AllocatorInstance.Data;
        pTVar17->ArrayNum = local_1f0.ArrayNum;
        pTVar17->ArrayMax = local_1f0.ArrayMax;
        local_1f0.ArrayNum = 0;
        local_1f0.ArrayMax = 0;
        local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_1f0.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_1f0.AllocatorInstance.Data);
      }
      local_1c8 = lVar8 + 0x20;
      local_1e0 = local_1e0 + 1;
      local_1d0 = local_1d0 + 0x50;
      uVar19 = uVar19 + 1;
      iVar13 = *(int *)((longlong)local_res10 + 0x508);
      param_2 = (TArray<PCG::IO::Accessor::FCacheEntry,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *)local_res10;
    } while ((int)uVar19 < iVar13);
  }
  return;
}

// ConvertFloatingPointType @ 149d42170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FJsonValue,1> * __cdecl
PCG::IO::Json::Helpers::ConvertFloatingPointType
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,TQuat<double> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FJsonValueArray,1> *pTVar2;
  undefined1 auStack_78 [32];
  TArrayView<double_const_,int> local_58;
  TSharedPtr<FJsonValueArray,1> local_48;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38 = param_1->X;
  dStack_30 = param_1->Y;
  local_58.ArrayNum = 4;
  local_58.DataPtr = &local_38;
  local_28 = param_1->Z;
  dStack_20 = param_1->W;
  pTVar2 = Json::Private::DoubleArrayToJsonArray(&local_48,&local_58);
  __return_storage_ptr__->Object = (FJsonValue *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ConvertFloatingPointType @ 149d42210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FJsonValue,1> * __cdecl
PCG::IO::Json::Helpers::ConvertFloatingPointType
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,TRotator<double> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FJsonValueArray,1> *pTVar2;
  undefined1 auStack_68 [32];
  TArrayView<double_const_,int> local_48;
  TSharedPtr<FJsonValueArray,1> local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_28 = param_1->Pitch;
  dStack_20 = param_1->Yaw;
  local_48.ArrayNum = 3;
  local_48.DataPtr = &local_28;
  local_18 = param_1->Roll;
  pTVar2 = Json::Private::DoubleArrayToJsonArray(&local_38,&local_48);
  __return_storage_ptr__->Object = (FJsonValue *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ConvertFloatingPointType @ 149d422b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FJsonValue,1> * __cdecl
PCG::IO::Json::Helpers::ConvertFloatingPointType
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,TTransform<double> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *this;
  FJsonValueArray *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FJsonObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  TSharedPtr<FJsonValueArray,1> *pTVar7;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStack_1b8 [32];
  double *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  FString local_188;
  double *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  FString local_168;
  double *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FString local_148;
  TSharedPtr<FJsonObject,1> local_138;
  TSharedRef<FJsonObject,1> local_128;
  TArrayView<double_const_,int> local_118;
  TSharedPtr<FJsonValueArray,1> local_108;
  TArrayView<double_const_,int> local_f8;
  TSharedPtr<FJsonValueArray,1> local_e8;
  TArrayView<double_const_,int> local_d8;
  TSharedPtr<FJsonValueArray,1> local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pTVar5 = MakeShared<FJsonObject,1>(&local_128);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  if (this == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonValue,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_a8 = (param_1->Translation).ZW.m128d_f64[0];
  local_198 = &local_68;
  local_b8 = (param_1->Translation).XY.m128d_f64[0];
  dStack_b0 = (param_1->Translation).XY.m128d_f64[1];
  uStack_190 = 3;
  local_118._12_4_ = uStack_18c;
  local_118.ArrayNum = 3;
  local_118.DataPtr = local_198;
  local_68 = local_b8;
  dStack_60 = dStack_b0;
  local_58 = local_a8;
  pTVar7 = Json::Private::DoubleArrayToJsonArray(&local_108,&local_118);
  pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar7->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FJsonValueArray *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonValue,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pTVar8 = FJsonValue::AsArray((FJsonValue *)pFVar2);
  ::FString::FString(&local_188,L"translation");
  FJsonObject::SetArrayField(this,&local_188,pTVar8);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (this == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonValue,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_88 = (param_1->Rotation).XY.m128d_f64[0];
  local_80 = (param_1->Rotation).XY.m128d_f64[1];
  local_178 = &local_88;
  local_78 = (param_1->Rotation).ZW.m128d_f64[0];
  local_70 = (param_1->Rotation).ZW.m128d_f64[1];
  uStack_170 = 4;
  local_f8._12_4_ = uStack_16c;
  local_f8.ArrayNum = 4;
  local_f8.DataPtr = local_178;
  pTVar7 = Json::Private::DoubleArrayToJsonArray(&local_e8,&local_f8);
  pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar7->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FJsonValueArray *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonValue,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pTVar8 = FJsonValue::AsArray((FJsonValue *)pFVar2);
  ::FString::FString(&local_168,L"rotation");
  FJsonObject::SetArrayField(this,&local_168,pTVar8);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (this == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonValue,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_90 = (param_1->Scale3D).ZW.m128d_f64[0];
  local_158 = &local_50;
  local_a0 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_98 = (param_1->Scale3D).XY.m128d_f64[1];
  uStack_150 = 3;
  local_d8._12_4_ = uStack_14c;
  local_d8.ArrayNum = 3;
  local_d8.DataPtr = local_158;
  local_50 = local_a0;
  dStack_48 = dStack_98;
  local_40 = local_90;
  pTVar7 = Json::Private::DoubleArrayToJsonArray(&local_c8,&local_d8);
  pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar7->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FJsonValueArray *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonValue,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pTVar8 = FJsonValue::AsArray((FJsonValue *)pFVar2);
  ::FString::FString(&local_148,L"scale");
  FJsonObject::SetArrayField(this,&local_148,pTVar8);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar9 = ::operator_new(0x30);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_138.Object = this;
    local_138.SharedReferenceCount.ReferenceController = pTVar1;
    FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar9 + 1),&local_138);
    if (pTVar9 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FJsonValue,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar9 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// ConvertFloatingPointType @ 149d426e0

TSharedPtr<FJsonValue,1> * __cdecl
PCG::IO::Json::Helpers::ConvertFloatingPointType
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,TVector2<double> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FJsonValueArray,1> *pTVar2;
  double local_38;
  double dStack_30;
  TArrayView<double_const_,int> local_28;
  TSharedPtr<FJsonValueArray,1> local_18;
  
  local_38 = (param_1->field0_0x0)._s_0.X;
  dStack_30 = (param_1->field0_0x0)._s_0.Y;
  local_28.ArrayNum = 2;
  local_28.DataPtr = &local_38;
  pTVar2 = Json::Private::DoubleArrayToJsonArray(&local_18,&local_28);
  __return_storage_ptr__->Object = (FJsonValue *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ConvertFloatingPointType @ 149d42750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FJsonValue,1> * __cdecl
PCG::IO::Json::Helpers::ConvertFloatingPointType
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,TVector4<double> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FJsonValueArray,1> *pTVar2;
  undefined1 auStack_78 [32];
  TArrayView<double_const_,int> local_58;
  TSharedPtr<FJsonValueArray,1> local_48;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38 = (param_1->field0_0x0)._s_0.X;
  dStack_30 = (param_1->field0_0x0)._s_0.Y;
  local_58.ArrayNum = 4;
  local_58.DataPtr = &local_38;
  local_28 = (param_1->field0_0x0)._s_0.Z;
  dStack_20 = (param_1->field0_0x0)._s_0.W;
  pTVar2 = Json::Private::DoubleArrayToJsonArray(&local_48,&local_58);
  __return_storage_ptr__->Object = (FJsonValue *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ConvertFloatingPointType @ 149d427f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FJsonValue,1> * __cdecl
PCG::IO::Json::Helpers::ConvertFloatingPointType
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,TVector<double> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FJsonValueArray,1> *pTVar2;
  undefined1 auStack_68 [32];
  TArrayView<double_const_,int> local_48;
  TSharedPtr<FJsonValueArray,1> local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_28 = (param_1->field0_0x0)._s_0.X;
  dStack_20 = (param_1->field0_0x0)._s_0.Y;
  local_48.ArrayNum = 3;
  local_48.DataPtr = &local_28;
  local_18 = (param_1->field0_0x0)._s_0.Z;
  pTVar2 = Json::Private::DoubleArrayToJsonArray(&local_38,&local_48);
  __return_storage_ptr__->Object = (FJsonValue *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateAccessorCache @ 149d447b0

/* WARNING: Removing unreachable block (ram,0x000149d44ab2) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<PCG::IO::Accessor::FCacheEntry,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *
__cdecl PCG::IO::Json::Private::CreateAccessorCache
                  (TArray<PCG::IO::Accessor::FCacheEntry,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                   *__return_storage_ptr__,UPCGData *param_1,
                  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *param_2,
                  FPCGContext *param_3)

{
  ForAnyElementType *pFVar1;
  FString *pFVar2;
  undefined1 auVar3 [8];
  undefined8 *puVar4;
  ForElementType<PCG::IO::Accessor::FCacheEntry> FVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  undefined1 auVar9 [8];
  longlong lVar10;
  bool bVar11;
  int iVar12;
  TArray<PCG::IO::Accessor::FCacheEntry,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar13;
  ulonglong uVar14;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar15;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar16;
  ForElementType<PCG::IO::Accessor::FCacheEntry> FVar17;
  FScriptContainerElement *pFVar18;
  undefined8 *puVar19;
  undefined1 local_res8 [8];
  uint local_res10;
  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *local_res18;
  FPCGContext *local_res20;
  undefined1 local_b8 [16];
  FScriptContainerElement *local_a8;
  undefined1 local_98 [40];
  ForAnyElementType local_70;
  undefined8 local_68;
  FScriptContainerElement local_60;
  undefined1 local_58 [8];
  IPCGAttributeAccessorKeys local_50;
  
  local_res18 = param_2;
  local_res20 = param_3;
  if ((param_1 == (UPCGData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\IO\\PCGJsonHelpers.cpp"
                          ,0x20,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TArray<PCG::IO::Accessor::FCacheEntry,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
               *)(*pcVar6)();
    return pTVar13;
  }
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<PCG::IO::Accessor::FCacheEntry>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0x10;
  local_res10 = param_2->ArrayNum;
  uVar14 = (ulonglong)(int)local_res10;
  pFVar18 = (param_2->AllocatorInstance).Data;
  local_a8 = pFVar18 + uVar14 * 0x40;
  while( true ) {
    pFVar7 = local_a8;
    if (param_2->ArrayNum != (int)uVar14) {
      `TCheckedPointerIterator<FPCGAttributePropertySelector_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar18 == pFVar7) break;
    local_98._8_4_ = *(undefined4 *)(pFVar18 + 8);
    local_98._12_8_ = *(FName *)(pFVar18 + 0xc);
    local_98._20_8_ = *(FName *)(pFVar18 + 0x14);
    local_98._28_8_ = *(FName *)(pFVar18 + 0x1c);
    local_98._0_8_ = &___7FPCGAttributePropertySelector__6B_;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    local_60 = (FScriptContainerElement)0x0;
    local_58 = (undefined1  [8])0x0;
    local_50._padding_ = 0;
    if ((FScriptContainerElement *)(local_98 + 0x28) != pFVar18 + 0x28) {
      DestructItems<FString,int>((FString *)0x0,0);
      iVar12 = *(int *)(pFVar18 + 0x30);
      pFVar2 = *(FString **)(pFVar18 + 0x28);
      local_68._0_4_ = iVar12;
      if ((iVar12 == 0) && (local_68._4_4_ == 0)) {
        local_68._0_4_ = 0;
        local_68._4_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar12,local_68._4_4_,(ForAnyElementType *)(local_98 + 0x28),iVar12,
                   (int *)(local_98 + 0x34));
        ConstructItems<FString,FString,int>(local_70.Data,pFVar2,iVar12);
      }
    }
    local_60 = pFVar18[0x38];
    TVar15 = PCGAttributeAccessorHelpers::CreateConstAccessor
                       ((UPCGData *)local_b8,(FPCGAttributePropertySelector *)param_1,
                        SUB81(local_98,0));
    auVar9 = local_58;
    auVar3 = local_58;
    if ((IPCGAttributeAccessor *)local_58 != TVar15.Ptr) {
      auVar3 = (undefined1  [8])(TVar15.Ptr)->_padding_;
      (TVar15.Ptr)->_padding_ = 0;
      if (local_58 != (undefined1  [8])0x0) {
        puVar19 = *(undefined8 **)local_58;
        local_58 = auVar3;
        (*(code *)*puVar19)(auVar9,1);
        auVar3 = local_58;
      }
    }
    local_58 = auVar3;
    if ((undefined8 *)local_b8._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_b8._0_8_)(local_b8._0_8_,1);
    }
    TVar16 = PCGAttributeAccessorHelpers::CreateConstKeys
                       ((UPCGData *)(local_b8 + 8),(FPCGAttributePropertySelector *)param_1);
    lVar10 = local_50._padding_;
    puVar19 = (undefined8 *)local_50._padding_;
    if (&local_50 != TVar16.Ptr) {
      puVar19 = (undefined8 *)(TVar16.Ptr)->_padding_;
      (TVar16.Ptr)->_padding_ = 0;
      if ((undefined8 *)local_50._padding_ != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)local_50._padding_;
        local_50._padding_ = (longlong)puVar19;
        (*(code *)*puVar4)(lVar10,1);
        puVar19 = (undefined8 *)local_50._padding_;
      }
    }
    local_50._padding_ = (longlong)puVar19;
    if ((undefined8 *)local_b8._8_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_b8._8_8_)(local_b8._8_8_,1);
    }
    if ((local_58 == (undefined1  [8])0x0) ||
       ((undefined8 *)local_50._padding_ == (undefined8 *)0x0)) {
      PCGLog::Metadata::LogFailToCreateAccessorError
                ((FPCGAttributePropertySelector *)local_98,param_3);
      if ((undefined8 *)local_50._padding_ != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)local_50._padding_)(local_50._padding_,1);
      }
      if (local_58 != (undefined1  [8])0x0) {
        (*(code *)**(undefined8 **)local_58)(local_58,1);
      }
      DestructItems<FString,int>((FString *)local_70.Data,(int)local_68);
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
    }
    else {
      iVar12 = __return_storage_ptr__->ArrayNum;
      if (iVar12 == __return_storage_ptr__->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCG::IO::Accessor::FCacheEntry>_>
                           (0x850,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      FVar8.Data = local_70.Data;
      __return_storage_ptr__->ArrayNum = iVar12 + 1;
      FVar5 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar17 = (ForElementType<PCG::IO::Accessor::FCacheEntry>)__return_storage_ptr__;
      if (FVar5 != (ForElementType<PCG::IO::Accessor::FCacheEntry>)0x0) {
        FVar17 = FVar5;
      }
      puVar19 = (undefined8 *)((longlong)iVar12 * 0x50 + (longlong)FVar17);
      pFVar1 = (ForAnyElementType *)(puVar19 + 5);
      *puVar19 = &___7FPCGAttributePropertySelector__6B_;
      *(undefined4 *)(puVar19 + 1) = local_98._8_4_;
      ((FName *)((longlong)puVar19 + 0xc))->ComparisonIndex = (FNameEntryId)local_98._12_4_;
      ((FName *)((longlong)puVar19 + 0xc))->Number = local_98._16_4_;
      ((FName *)((longlong)puVar19 + 0x14))->ComparisonIndex = (FNameEntryId)local_98._20_4_;
      ((FName *)((longlong)puVar19 + 0x14))->Number = local_98._24_4_;
      ((FName *)((longlong)puVar19 + 0x1c))->ComparisonIndex = (FNameEntryId)local_98._28_4_;
      ((FName *)((longlong)puVar19 + 0x1c))->Number = local_98._32_4_;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar12 = (int)local_68;
      *(int *)(puVar19 + 6) = (int)local_68;
      if ((int)local_68 == 0) {
        *(int *)((longlong)puVar19 + 0x34) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_68,0,pFVar1,(int)local_68,(int *)((longlong)puVar19 + 0x34));
        ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)FVar8.Data,iVar12);
      }
      *(FScriptContainerElement *)(puVar19 + 7) = local_60;
      puVar19[8] = local_58;
      puVar19[9] = local_50._padding_;
      local_50._padding_ = 0;
      local_58 = (undefined1  [8])0x0;
      DestructItems<FString,int>((FString *)local_70.Data,(int)local_68);
      param_2 = local_res18;
      param_3 = local_res20;
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
        param_2 = local_res18;
        param_3 = local_res20;
      }
    }
    uVar14 = (ulonglong)local_res10;
    pFVar18 = pFVar18 + 0x40;
  }
  return __return_storage_ptr__;
}

// DoubleArrayToJsonArray @ 149d48180

TSharedPtr<FJsonValueArray,1> * __cdecl
PCG::IO::Json::Private::DoubleArrayToJsonArray
          (TSharedPtr<FJsonValueArray,1> *__return_storage_ptr__,
          TArrayView<double_const_,int> *param_1)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FJsonValueArray,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  double *pdVar10;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_48 [2];
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pdVar10 = param_1->DataPtr;
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = 0;
  local_48[0].ArrayMax = 0;
  pdVar1 = pdVar10 + param_1->ArrayNum;
  for (; pdVar10 != pdVar1; pdVar10 = pdVar10 + 1) {
    dVar2 = *pdVar10;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_;
      FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar6 + 1),dVar2);
      pTVar8 = pTVar6 + 1;
      if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FJsonValueArray,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar5 = local_48[0].ArrayNum;
    if (local_48[0].ArrayNum == local_48[0].ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_48[0].AllocatorInstance,&local_48[0].ArrayMax);
    }
    local_48[0].ArrayNum = iVar5 + 1;
    *(TReferenceControllerBase<1> **)
     &local_48[0].AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 = pTVar8;
    *(TReferenceControllerBase<1> **)
     (local_48[0].AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  pTVar6 = ::operator_new(0x30);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValueArray *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_;
    FJsonValueArray::FJsonValueArray((FJsonValueArray *)(pTVar6 + 1),local_48);
    if (((FJsonValueArray *)(pTVar6 + 1) == (FJsonValueArray *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FJsonValueArray,1> *)(*pcVar3)();
      return pTVar7;
    }
    __return_storage_ptr__->Object = (FJsonValueArray *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_48[0].AllocatorInstance.Data,local_48[0].ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_48[0].AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_48[0].AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToJsonString @ 149d665b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
PCG::IO::Json::Helpers::ToJsonString
          (FString *__return_storage_ptr__,TSharedPtr<FJsonObject,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  FArchiveState *pFVar5;
  FArchiveState *this;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FText *pFVar9;
  FArchiveState *pFVar10;
  TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> local_res18;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *local_res20;
  ForAnyElementType local_88;
  undefined8 local_80;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_78;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> local_68;
  TSharedPtr<FJsonObject,1> local_58;
  FText local_48;
  
  pFVar10 = (FArchiveState *)0x0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  pFVar5 = ::operator_new(0x40);
  if (pFVar5 != (FArchiveState *)0x0) {
    this = ::operator_new(0xa8);
    if (this != (FArchiveState *)0x0) {
      this->_padding_ = 0;
      this->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this->field_0x28 = 0;
      this->ArSerializingDefaults = 0;
      this->ArPortFlags = 0;
      this->ArMaxSerializeSize = 0;
      (this->ArUEVer).FileVersionUE4 = 0;
      (this->ArUEVer).FileVersionUE5 = 0;
      this->ArLicenseeUEVer = 0;
      (this->ArEngineVer).Major = 0;
      (this->ArEngineVer).Minor = 0;
      (this->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this->ArEngineVer).field_0x6 = 0;
      (this->ArEngineVer).Changelist = 0;
      this->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this->SavePackageData = (FArchiveSavePackageData *)0x0;
      this->SerializedProperty = (FProperty *)0x0;
      this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this->bCustomVersionsAreReset = 0;
      this->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this);
      this[1]._padding_ = 0;
      this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      this[1].ActiveFPLB = (FFastPathLoadBuffer *)&pFVar5->field_0x28;
      this[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      FArchiveState::SetIsSaving(this,true);
      (**(code **)(this->_padding_ + 0x108))(this,0);
      this->_padding_ = (longlong)&___7FMemoryWriter__6B_;
      pFVar10 = this;
    }
    pFVar5->ActiveFPLB = (FFastPathLoadBuffer *)pFVar10;
    pFVar5->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
    pFVar5->ArMaxSerializeSize = (long64)&local_88;
    (pFVar5->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
    (pFVar5->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
    (pFVar5->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
    *(undefined8 *)&pFVar5->field_0x28 = 0;
    pFVar5->ArSerializingDefaults = 0;
    pFVar5->ArPortFlags = 0;
    pFVar10 = pFVar5;
  }
  local_res18.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)pFVar10;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1>::
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>
            (&local_68,&local_res18);
  local_res20 = local_68.Object;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = ::operator_new(0x38);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_78.Object = ___xmm_00000000000000000000000000000010;
    local_78.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = ::operator_new(0x30);
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      pTVar7[2]._padding_ = 0x10;
      pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      pTVar8->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar2;
      local_58.SharedReferenceCount.ReferenceController = pTVar1;
      FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar8 + 1),&local_58);
      if ((pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      pTVar7[2]._padding_ = (longlong)(pTVar8 + 1);
      *(TReferenceControllerBase<1> **)&pTVar7[2].SharedReferenceCount = pTVar8;
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    local_78.Object = (FElement *)(pTVar7 + 1);
    *(undefined2 *)&pTVar7[3]._padding_ = 0;
    local_78.SharedReferenceCount.ReferenceController = pTVar7;
    if ((local_78.Object == (FElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                    (&local_78,(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)local_res20,
                     true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar4) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_88.Data;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_80;
    (__return_storage_ptr__->Data).ArrayMax = local_80._4_4_;
    local_80 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"PCGJson",L"JsonSerializationError",
                        L"Serialization of Json data failed.");
    PCGLog::LogErrorOnGraph(pFVar9,(FPCGContext *)0x0);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return __return_storage_ptr__;
}

// ToPrecisionString @ 149d66950

void __cdecl
PCG::IO::Helpers::String::ToPrecisionString(double param_1,int param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = ::FString::SanitizeFloat(&local_18,param_1,param_2);
  if (param_3 != pFVar2) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_3->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

