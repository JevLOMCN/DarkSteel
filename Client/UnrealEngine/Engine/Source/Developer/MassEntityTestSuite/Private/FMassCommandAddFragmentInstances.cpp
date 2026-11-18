// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 12

// FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> @ 1470f08d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> * __thiscall
FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>::
FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>
          (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *this,
          EMassCommandOperationType param_1,FName param_2)

{
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *pFVar7;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *_Dst;
  ForElementType<unsigned_int> _Src;
  undefined1 auStackY_78 [32];
  <lambda_1> local_48 [8];
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  *(undefined2 *)&this->_padding_ = 0x500;
  *(FName *)((longlong)&this->_padding_ + 4) = param_2;
  this_00 = &this->FragmentsAffected;
  this->_padding_ =
       (longlong)
       &___7__FMassCommandAddFragmentInstances_UFTestFragment_Int__UFTestFragment_Float____6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Fragments)._padding_ = 0;
  (this->Fragments)._padding_ = 0;
  (this->Fragments).FragmentInstances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fragments).FragmentInstances.ArrayNum = 0;
  (this->Fragments).FragmentInstances.ArrayMax = 0;
  *(undefined8 *)&(this->FragmentsAffected).field_0x10 = 0;
  *(undefined4 *)&(this->FragmentsAffected).field_0x18 = 0;
  *(undefined4 *)&(this->FragmentsAffected).field_0x1c = 0x80;
  UE::Mass::TMultiTypeList<FTestFragment_Float>::
  PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (this_00);
  pTVar6 = (TBitArray<FDefaultBitArrayAllocator> *)
           TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
           GetTypeBitSet<FTestFragment_Int>();
  if ((TBitArray<FDefaultBitArrayAllocator> *)this_00 == pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *)
               (*pcVar2)();
      return pFVar7;
    }
  }
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40.NumBits = 0;
  local_40.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)this_00,pTVar6,&local_40,MaxSize,local_48);
  if ((TBitArray<FDefaultBitArrayAllocator> *)this_00 != &local_40) {
    iVar1 = *(int *)&(this->FragmentsAffected).field_0x1c;
    *(undefined4 *)&(this->FragmentsAffected).field_0x18 = 0;
    uVar5 = local_40.NumBits + 0x1fU & 0xffffffe0;
    if ((iVar1 < (int)uVar5) || (0x80 < iVar1)) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar3 = uVar5;
      }
      *(uint *)&(this->FragmentsAffected).field_0x1c = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
    }
    *(int *)&(this->FragmentsAffected).field_0x18 = local_40.NumBits;
    if (local_40.NumBits != 0) {
      _Dst = *(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
               **)&(this->FragmentsAffected).field_0x10;
      _Src = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_40.AllocatorInstance.SecondaryData;
      }
      if (_Dst == (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *)0x0) {
        _Dst = this_00;
      }
      memcpy(_Dst,(void *)_Src,(ulonglong)(local_40.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return this;
}

// ~FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> @ 1470f6910

void __thiscall
FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>::
~FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>
          (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pvVar1 = *(void **)&(this->FragmentsAffected).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->Fragments).FragmentInstances.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = (void *)(this->Fragments)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((int)this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMassBatchedCommand__6B_;
  return;
}

// Add @ 14710e840

void __thiscall
FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>::Add
          (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *this,
          FMassEntityHandle param_1,FTestFragment_Int param_2,FTestFragment_Float param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res18 [2];
  FTestFragment_Float local_res20 [2];
  
  local_res18[0] = param_2.Value;
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this,param_1);
  pFVar2 = (this->Fragments).FragmentInstances.AllocatorInstance.Data;
  local_res20[0].Value = param_3.Value;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2 + (longlong)(this->Fragments).FragmentInstances.ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Fragments).FragmentInstances.ArrayNum;
  piVar1 = &(this->Fragments).FragmentInstances.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Fragments).FragmentInstances.AllocatorInstance,piVar1);
  }
  (this->Fragments).FragmentInstances.ArrayNum = iVar5 + 1;
  *(int *)((this->Fragments).FragmentInstances.AllocatorInstance.Data + (longlong)iVar5 * 4) =
       local_res18[0];
  UE::Mass::TMultiArray<FTestFragment_Float>::Add
            ((TMultiArray<FTestFragment_Float> *)&this->Fragments,local_res20);
  return;
}

// GetAllocatedSize @ 14711f760

ulong64 __thiscall
FMassCommandAddFragmentInstances<FTestFragment_Array_&>::GetAllocatedSize
          (FMassCommandAddFragmentInstances<FTestFragment_Array_&> *this)

{
  return (ulonglong)((*(int *)&(this->FragmentsAffected).field_0x1c + 0x1fU >> 5) << 2) +
         ((longlong)*(int *)((longlong)&this->_padding_ + 4) +
         (longlong)(this->Fragments).FragmentInstances.ArrayMax * 2) * 8;
}

// GetAllocatedSize @ 14711f790

ulong64 __thiscall
FMassCommandAddFragmentInstances<FTestFragment_Float>::GetAllocatedSize
          (FMassCommandAddFragmentInstances<FTestFragment_Float> *this)

{
  return (ulonglong)((*(int *)&(this->FragmentsAffected).field_0x1c + 0x1fU >> 5) << 2) +
         ((longlong)(this->Fragments).FragmentInstances.ArrayMax +
         (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2) * 4;
}

// GetAllocatedSize @ 14711f7c0

ulong64 __thiscall
FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>::GetAllocatedSize
          (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *this)

{
  return (ulonglong)((*(int *)&(this->FragmentsAffected).field_0x1c + 0x1fU >> 5) << 2) +
         ((longlong)(this->Fragments).FragmentInstances.ArrayMax +
          (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2 +
         (longlong)*(int *)((longlong)&(this->Fragments)._padding_ + 4)) * 4;
}

// Reset @ 14719b6b0

void __thiscall
FMassCommandAddFragmentInstances<FTestFragment_Array_&>::Reset
          (FMassCommandAddFragmentInstances<FTestFragment_Array_&> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(this->Fragments).FragmentInstances.ArrayMax;
  pFVar3 = (this->Fragments).FragmentInstances.AllocatorInstance.Data;
  iVar2 = (this->Fragments).FragmentInstances.ArrayNum;
  if ((this->Fragments).FragmentInstances.ArrayMax < 0) {
    DestructItems<FTestFragment_Array,int>((FTestFragment_Array *)pFVar3,iVar2);
    (this->Fragments).FragmentInstances.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->Fragments,0,piVar1);
    }
  }
  else {
    DestructItems<FTestFragment_Array,int>((FTestFragment_Array *)pFVar3,iVar2);
    (this->Fragments).FragmentInstances.ArrayNum = 0;
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,(int *)((longlong)&this->_padding_ + 4)
              );
  }
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Reset @ 14719b760

void __thiscall
FMassCommandAddFragmentInstances<FTestFragment_Float>::Reset
          (FMassCommandAddFragmentInstances<FTestFragment_Float> *this)

{
  int iVar1;
  
  iVar1 = (this->Fragments).FragmentInstances.ArrayMax;
  (this->Fragments).FragmentInstances.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->Fragments,0,
               &(this->Fragments).FragmentInstances.ArrayMax);
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,(int *)((longlong)&this->_padding_ + 4)
              );
  }
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Reset @ 14719b7e0

void __thiscall
FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>::Reset
          (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *this)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)&(this->Fragments)._padding_ + 4);
  *(undefined4 *)&(this->Fragments)._padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->Fragments,0,
               (int *)((longlong)&(this->Fragments)._padding_ + 4));
  }
  iVar1 = (this->Fragments).FragmentInstances.ArrayMax;
  (this->Fragments).FragmentInstances.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Fragments).FragmentInstances.AllocatorInstance,0,
               &(this->Fragments).FragmentInstances.ArrayMax);
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,(int *)((longlong)&this->_padding_ + 4)
              );
  }
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Run @ 14719bd30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassCommandAddFragmentInstances<FTestFragment_Array_&>::Run
          (FMassCommandAddFragmentInstances<FTestFragment_Array_&> *this,FMassEntityManager *param_1
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  bool bVar6;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_> local_98;
  FScriptContainerElement *local_88;
  UScriptStruct *pUStack_80;
  undefined4 local_78;
  int iStack_74;
  FStructArrayView *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FMassEntityHandle *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FMassArchetypeEntityCollectionWithPayload *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FMassGenericPayloadView local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int> local_18;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_void___cdecl_FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId441,"MassCommandAddFragmentInstances_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommands.h"
               ,0x1b9);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>::Run(FMassEntityManager&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId441);
  }
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,1,&local_a8,0,(int *)((longlong)&local_a0 + 4));
  local_88 = (this->Fragments).FragmentInstances.AllocatorInstance.Data;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Array,(UObject *)pUVar5,
                         L"TestFragment_Array");
  }
  iStack_74 = (this->Fragments).FragmentInstances.ArrayNum;
  local_78 = 0x10;
  pUStack_80 = Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton;
  if (((local_a8.Data <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 < local_a8.Data + (longlong)local_a0._4_4_ * 0x18)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_a0;
  if ((int)local_a0 == local_a0._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&local_a8,(int *)((longlong)&local_a0 + 4));
  }
  iVar1 = iVar4 + 1;
  local_a0 = CONCAT44(local_a0._4_4_,iVar1);
  *(FScriptContainerElement **)(local_a8.Data + (longlong)iVar4 * 0x18) = local_88;
  *(UScriptStruct **)(local_a8.Data + (longlong)iVar4 * 0x18 + 8) = pUStack_80;
  *(ulonglong *)(local_a8.Data + (longlong)iVar4 * 0x18 + 0x10) = CONCAT44(iStack_74,local_78);
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_68 = (FStructArrayView *)local_a8.Data;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58 = (FMassEntityHandle *)this->_padding_;
  iVar4 = (int)this->_padding_;
  iStack_60 = iVar1;
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38.Content._12_4_ = uStack_5c;
  local_38.Content.ArrayNum = iStack_60;
  local_28._12_4_ = uStack_4c;
  local_28.ArrayNum = iVar4;
  local_28.DataPtr = local_58;
  local_38.Content.DataPtr = local_68;
  iStack_50 = iVar4;
  FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload
            (param_1,&local_28,FoldDuplicates,&local_38,&local_98);
  iStack_40 = local_98.ArrayNum;
  local_48 = (FMassArchetypeEntityCollectionWithPayload *)local_98.AllocatorInstance.Data;
  if ((local_98.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18._12_4_ = uStack_3c;
  local_18.ArrayNum = iStack_40;
  local_18.DataPtr = local_48;
  FMassEntityManager::BatchAddFragmentInstancesForEntities
            (param_1,&local_18,&this->FragmentsAffected);
  DestructItems<FMassArchetypeEntityCollectionWithPayload,int>
            ((FMassArchetypeEntityCollectionWithPayload *)local_98.AllocatorInstance.Data,
             local_98.ArrayNum);
  if ((FMassArchetypeEntityCollectionWithPayload *)local_98.AllocatorInstance.Data !=
      (FMassArchetypeEntityCollectionWithPayload *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Run @ 14719c010

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassCommandAddFragmentInstances<FTestFragment_Float>::Run
          (FMassCommandAddFragmentInstances<FTestFragment_Float> *this,FMassEntityManager *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_> local_88;
  TArray<FStructArrayView,TSizedDefaultAllocator<32>_> local_78;
  FStructArrayView *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FMassEntityHandle *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FMassArchetypeEntityCollectionWithPayload *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FMassGenericPayloadView local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int> local_18;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_void___cdecl_FMassCommandAddFragmentInstances<FTestFragment_Float>::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId441,"MassCommandAddFragmentInstances_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommands.h"
               ,0x1b9);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_FMassCommandAddFragmentInstances<FTestFragment_Float>::Run(FMassEntityManager&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId441);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,1,&local_78.AllocatorInstance,0,&local_78.ArrayMax);
  UE::Mass::TMultiArray<FTestFragment_Float>::GetAsGenericMultiArray(&this->Fragments,&local_78);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  iStack_60 = local_78.ArrayNum;
  local_68 = (FStructArrayView *)local_78.AllocatorInstance.Data;
  if ((local_78.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58 = (FMassEntityHandle *)this->_padding_;
  iVar1 = (int)this->_padding_;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38.Content._12_4_ = uStack_5c;
  local_38.Content.ArrayNum = iStack_60;
  local_28._12_4_ = uStack_4c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = local_58;
  local_38.Content.DataPtr = local_68;
  iStack_50 = iVar1;
  FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload
            (param_1,&local_28,FoldDuplicates,&local_38,&local_88);
  iStack_40 = local_88.ArrayNum;
  local_48 = (FMassArchetypeEntityCollectionWithPayload *)local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18._12_4_ = uStack_3c;
  local_18.ArrayNum = iStack_40;
  local_18.DataPtr = local_48;
  FMassEntityManager::BatchAddFragmentInstancesForEntities
            (param_1,&local_18,&this->FragmentsAffected);
  DestructItems<FMassArchetypeEntityCollectionWithPayload,int>
            ((FMassArchetypeEntityCollectionWithPayload *)local_88.AllocatorInstance.Data,
             local_88.ArrayNum);
  if ((FMassArchetypeEntityCollectionWithPayload *)local_88.AllocatorInstance.Data !=
      (FMassArchetypeEntityCollectionWithPayload *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Run @ 14719c210

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>::Run
          (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *this,
          FMassEntityManager *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_> local_88;
  TArray<FStructArrayView,TSizedDefaultAllocator<32>_> local_78;
  FStructArrayView *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FMassEntityHandle *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FMassArchetypeEntityCollectionWithPayload *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FMassGenericPayloadView local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int> local_18;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_void___cdecl_FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId441,"MassCommandAddFragmentInstances_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommands.h"
               ,0x1b9);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>::Run(FMassEntityManager&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId441);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,2,&local_78.AllocatorInstance,0,&local_78.ArrayMax);
  UE::Mass::TMultiArray<FTestFragment_Int,FTestFragment_Float>::GetAsGenericMultiArray
            (&this->Fragments,&local_78);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  iStack_60 = local_78.ArrayNum;
  local_68 = (FStructArrayView *)local_78.AllocatorInstance.Data;
  if ((local_78.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58 = (FMassEntityHandle *)this->_padding_;
  iVar1 = (int)this->_padding_;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38.Content._12_4_ = uStack_5c;
  local_38.Content.ArrayNum = iStack_60;
  local_28._12_4_ = uStack_4c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = local_58;
  local_38.Content.DataPtr = local_68;
  iStack_50 = iVar1;
  FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload
            (param_1,&local_28,FoldDuplicates,&local_38,&local_88);
  iStack_40 = local_88.ArrayNum;
  local_48 = (FMassArchetypeEntityCollectionWithPayload *)local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18._12_4_ = uStack_3c;
  local_18.ArrayNum = iStack_40;
  local_18.DataPtr = local_48;
  FMassEntityManager::BatchAddFragmentInstancesForEntities
            (param_1,&local_18,&this->FragmentsAffected);
  DestructItems<FMassArchetypeEntityCollectionWithPayload,int>
            ((FMassArchetypeEntityCollectionWithPayload *)local_88.AllocatorInstance.Data,
             local_88.ArrayNum);
  if ((FMassArchetypeEntityCollectionWithPayload *)local_88.AllocatorInstance.Data !=
      (FMassArchetypeEntityCollectionWithPayload *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

