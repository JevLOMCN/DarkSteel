// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 12

// GetContainer<FMassConstSharedFragment> @ 1471c8750

TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
* __thiscall
FMassArchetypeCompositionDescriptor::GetContainer<FMassConstSharedFragment>
          (FMassArchetypeCompositionDescriptor *this)

{
  return &this->ConstSharedFragments;
}

// GetContainer<FMassFragment> @ 1471c8760

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __thiscall
FMassArchetypeCompositionDescriptor::GetContainer<FMassFragment>
          (FMassArchetypeCompositionDescriptor *this)

{
  return &this->Fragments;
}

// GetContainer<FMassSharedFragment> @ 1471c8770

TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct> *
__thiscall
FMassArchetypeCompositionDescriptor::GetContainer<FMassSharedFragment>
          (FMassArchetypeCompositionDescriptor *this)

{
  return &this->SharedFragments;
}

// FMassArchetypeCompositionDescriptor @ 1471d64a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMassArchetypeCompositionDescriptor * __thiscall
FMassArchetypeCompositionDescriptor::FMassArchetypeCompositionDescriptor
          (FMassArchetypeCompositionDescriptor *this,
          TArrayView<FInstancedStruct_const_,int> *param_1,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_2,
          TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_3,TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *param_4,
          TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_5)

{
  TObjectPtr<UScriptStruct_const_>_u_0 TVar1;
  FMassArchetypeCompositionDescriptor *pFVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UStruct *pUVar6;
  FMassArchetypeCompositionDescriptor *_Dst;
  undefined1 *_Src;
  FInstancedStruct *pFVar7;
  FInstancedStruct *pFVar8;
  uint uVar9;
  undefined1 auStack_a8 [32];
  TObjectPtr<UScriptStruct_const_>_u_0 local_88;
  FBitSetContainer *local_80;
  undefined1 local_78 [16];
  undefined1 *local_68;
  int local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar8 = param_1->DataPtr;
  local_68 = (undefined1 *)0x0;
  pFVar7 = pFVar8 + (int)*(undefined8 *)&param_1->ArrayNum;
  local_60 = 0;
  local_5c = 0x80;
  do {
    local_80 = (FBitSetContainer *)param_5;
    if (pFVar8 == pFVar7) {
      *(undefined8 *)&(this->Fragments).field_0x10 = 0;
      *(undefined8 *)&(this->Fragments).field_0x18 = 0;
      uVar5 = local_60 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar5) {
        uVar9 = 0x80;
        if (0x80 < (int)uVar5) {
          uVar9 = uVar5;
        }
        *(uint *)&(this->Fragments).field_0x1c = uVar9;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)this,0);
      }
      *(int *)&(this->Fragments).field_0x18 = local_60;
      if (local_60 != 0) {
        pFVar2 = *(FMassArchetypeCompositionDescriptor **)&(this->Fragments).field_0x10;
        _Src = local_78;
        if (local_68 != (undefined1 *)0x0) {
          _Src = local_68;
        }
        _Dst = this;
        if (pFVar2 != (FMassArchetypeCompositionDescriptor *)0x0) {
          _Dst = pFVar2;
        }
        memcpy(_Dst,_Src,(ulonglong)(local_60 + 0x1fU >> 5) << 2);
      }
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&this->Tags,(FBitSetContainer *)param_2);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&this->ChunkFragments,(FBitSetContainer *)param_3);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&this->SharedFragments,(FBitSetContainer *)param_4);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&this->ConstSharedFragments,(FBitSetContainer *)param_5);
      if (local_68 != (undefined1 *)0x0) {
        FMemory::Free(local_68);
      }
      return this;
    }
    TVar1 = (TObjectPtr<UScriptStruct_const_>_u_0)(pFVar8->ScriptStruct).field0_0x0.DebugPtr;
    if (TVar1.DebugPtr != (UScriptStruct *)0x0) {
      pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar6 == (UStruct *)0x0) {
LAB_1471d6556:
        local_88 = TVar1;
        bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Add'::__l6::<lambda_1>::operator()(&local_88);
        if (!bVar3) goto LAB_1471d6584;
      }
      else {
        iVar4 = (int)pUVar6->_padding_;
        if (((int)(TVar1.DebugPtr)->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)((TVar1.DebugPtr)->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_1471d6556;
      }
      iVar4 = FStructTracker::FindOrAddStructTypeIndex
                        (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,
                         (UStruct *)TVar1.DebugPtr);
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_78,iVar4);
    }
LAB_1471d6584:
    pFVar8 = pFVar8 + 1;
    param_5 = (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
               *)local_80;
  } while( true );
}

// operator= @ 1471e1e70

FMassArchetypeCompositionDescriptor * __thiscall
FMassArchetypeCompositionDescriptor::operator=
          (FMassArchetypeCompositionDescriptor *this,FMassArchetypeCompositionDescriptor *param_1)

{
  void *pvVar1;
  
  if (this != param_1) {
    if (*(longlong *)&(param_1->Fragments).field_0x10 == 0) {
      memmove(this,param_1,0x10);
    }
    pvVar1 = *(void **)&(this->Fragments).field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(this->Fragments).field_0x10 = *(undefined8 *)&(param_1->Fragments).field_0x10;
    *(undefined8 *)&(param_1->Fragments).field_0x10 = 0;
    *(undefined4 *)&(this->Fragments).field_0x18 = *(undefined4 *)&(param_1->Fragments).field_0x18;
    *(undefined4 *)&(this->Fragments).field_0x1c = *(undefined4 *)&(param_1->Fragments).field_0x1c;
    *(undefined8 *)&(param_1->Fragments).field_0x18 = 0;
  }
  if (&this->Tags != &param_1->Tags) {
    if (*(longlong *)&(param_1->Tags).field_0x10 == 0) {
      memmove(&this->Tags,&param_1->Tags,0x10);
    }
    pvVar1 = *(void **)&(this->Tags).field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(this->Tags).field_0x10 = *(undefined8 *)&(param_1->Tags).field_0x10;
    *(undefined8 *)&(param_1->Tags).field_0x10 = 0;
    *(undefined4 *)&(this->Tags).field_0x18 = *(undefined4 *)&(param_1->Tags).field_0x18;
    *(undefined4 *)&(this->Tags).field_0x1c = *(undefined4 *)&(param_1->Tags).field_0x1c;
    *(undefined8 *)&(param_1->Tags).field_0x18 = 0;
  }
  if (&this->ChunkFragments != &param_1->ChunkFragments) {
    if (*(longlong *)&(param_1->ChunkFragments).field_0x10 == 0) {
      memmove(&this->ChunkFragments,&param_1->ChunkFragments,0x10);
    }
    pvVar1 = *(void **)&(this->ChunkFragments).field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(this->ChunkFragments).field_0x10 =
         *(undefined8 *)&(param_1->ChunkFragments).field_0x10;
    *(undefined8 *)&(param_1->ChunkFragments).field_0x10 = 0;
    *(undefined4 *)&(this->ChunkFragments).field_0x18 =
         *(undefined4 *)&(param_1->ChunkFragments).field_0x18;
    *(undefined4 *)&(this->ChunkFragments).field_0x1c =
         *(undefined4 *)&(param_1->ChunkFragments).field_0x1c;
    *(undefined8 *)&(param_1->ChunkFragments).field_0x18 = 0;
  }
  if (&this->SharedFragments != &param_1->SharedFragments) {
    if (*(longlong *)&(param_1->SharedFragments).field_0x10 == 0) {
      memmove(&this->SharedFragments,&param_1->SharedFragments,0x10);
    }
    pvVar1 = *(void **)&(this->SharedFragments).field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(this->SharedFragments).field_0x10 =
         *(undefined8 *)&(param_1->SharedFragments).field_0x10;
    *(undefined8 *)&(param_1->SharedFragments).field_0x10 = 0;
    *(undefined4 *)&(this->SharedFragments).field_0x18 =
         *(undefined4 *)&(param_1->SharedFragments).field_0x18;
    *(undefined4 *)&(this->SharedFragments).field_0x1c =
         *(undefined4 *)&(param_1->SharedFragments).field_0x1c;
    *(undefined8 *)&(param_1->SharedFragments).field_0x18 = 0;
  }
  if (&this->ConstSharedFragments != &param_1->ConstSharedFragments) {
    if (*(longlong *)&(param_1->ConstSharedFragments).field_0x10 == 0) {
      memmove(&this->ConstSharedFragments,&param_1->ConstSharedFragments,0x10);
    }
    pvVar1 = *(void **)&(this->ConstSharedFragments).field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(this->ConstSharedFragments).field_0x10 =
         *(undefined8 *)&(param_1->ConstSharedFragments).field_0x10;
    *(undefined8 *)&(param_1->ConstSharedFragments).field_0x10 = 0;
    *(undefined4 *)&(this->ConstSharedFragments).field_0x18 =
         *(undefined4 *)&(param_1->ConstSharedFragments).field_0x18;
    *(undefined4 *)&(this->ConstSharedFragments).field_0x1c =
         *(undefined4 *)&(param_1->ConstSharedFragments).field_0x1c;
    *(undefined8 *)&(param_1->ConstSharedFragments).field_0x18 = 0;
  }
  return this;
}

// operator= @ 1471e2030

FMassArchetypeCompositionDescriptor * __thiscall
FMassArchetypeCompositionDescriptor::operator=
          (FMassArchetypeCompositionDescriptor *this,FMassArchetypeCompositionDescriptor *param_1)

{
  if (this != param_1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this,
               (TBitArray<FDefaultBitArrayAllocator> *)param_1);
  }
  if (&this->Tags != &param_1->Tags) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->Tags,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_1->Tags);
  }
  if (&this->ChunkFragments != &param_1->ChunkFragments) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->ChunkFragments,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_1->ChunkFragments);
  }
  if (&this->SharedFragments != &param_1->SharedFragments) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->SharedFragments,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_1->SharedFragments);
  }
  if (&this->ConstSharedFragments != &param_1->ConstSharedFragments) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->ConstSharedFragments,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_1->ConstSharedFragments);
  }
  return this;
}

// Append @ 1471f10e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMassArchetypeCompositionDescriptor::Append
          (FMassArchetypeCompositionDescriptor *this,FMassArchetypeCompositionDescriptor *param_1)

{
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *this_00;
  TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_01;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_02;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_03;
  int iVar1;
  FMassArchetypeCompositionDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FMassArchetypeCompositionDescriptor *_Dst;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *_Dst_00;
  TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *_Dst_01;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *_Dst_02;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *_Dst_03;
  ForElementType<unsigned_int> FVar7;
  undefined1 auStackY_108 [32];
  <lambda_1> local_d8;
  <lambda_1> local_d7;
  <lambda_1> local_d6;
  <lambda_1> local_d5;
  <lambda_1> local_d4 [4];
  undefined1 local_d0 [16];
  ForElementType<unsigned_int> local_c0;
  int local_b8;
  int local_b4;
  TBitArray<FDefaultBitArrayAllocator> local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (this == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_c0 = (ForElementType<unsigned_int>)0x0;
  local_b8 = 0;
  local_b4 = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)this,
             (TBitArray<FDefaultBitArrayAllocator> *)param_1,
             (TBitArray<FDefaultBitArrayAllocator> *)local_d0,MaxSize,&local_d8);
  if (this != (FMassArchetypeCompositionDescriptor *)local_d0) {
    iVar1 = *(int *)&(this->Fragments).field_0x1c;
    *(undefined4 *)&(this->Fragments).field_0x18 = 0;
    uVar6 = local_b8 + 0x1fU & 0xffffffe0;
    if ((iVar1 < (int)uVar6) || (0x80 < iVar1)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)&(this->Fragments).field_0x1c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this,0);
    }
    *(int *)&(this->Fragments).field_0x18 = local_b8;
    if (local_b8 != 0) {
      FVar7 = (ForElementType<unsigned_int>)local_d0;
      if (local_c0 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_c0;
      }
      pFVar2 = *(FMassArchetypeCompositionDescriptor **)&(this->Fragments).field_0x10;
      _Dst = this;
      if (pFVar2 != (FMassArchetypeCompositionDescriptor *)0x0) {
        _Dst = pFVar2;
      }
      memcpy(_Dst,(void *)FVar7,(ulonglong)(local_b8 + 0x1fU >> 5) << 2);
    }
  }
  if (local_c0 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c0);
  }
  this_00 = &this->Tags;
  if (this_00 == &param_1->Tags) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_b0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b0.NumBits = 0;
  local_b0.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
             (TBitArray<FDefaultBitArrayAllocator> *)&param_1->Tags,&local_b0,MaxSize,&local_d7);
  if ((TBitArray<FDefaultBitArrayAllocator> *)this_00 != &local_b0) {
    iVar1 = *(int *)&(this->Tags).field_0x1c;
    *(undefined4 *)&(this->Tags).field_0x18 = 0;
    uVar6 = local_b0.NumBits + 0x1fU & 0xffffffe0;
    if ((iVar1 < (int)uVar6) || (0x80 < iVar1)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)&(this->Tags).field_0x1c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
    }
    *(int *)&(this->Tags).field_0x18 = local_b0.NumBits;
    if (local_b0.NumBits != 0) {
      _Dst_00 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
                 &(this->Tags).field_0x10;
      FVar7 = (ForElementType<unsigned_int>)&local_b0;
      if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_b0.AllocatorInstance.SecondaryData;
      }
      if (_Dst_00 ==
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)0x0) {
        _Dst_00 = this_00;
      }
      memcpy(_Dst_00,(void *)FVar7,(ulonglong)(local_b0.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b0.AllocatorInstance.SecondaryData);
  }
  this_01 = &this->ChunkFragments;
  if (this_01 == &param_1->ChunkFragments) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_90.NumBits = 0;
  local_90.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
             (TBitArray<FDefaultBitArrayAllocator> *)&param_1->ChunkFragments,&local_90,MaxSize,
             &local_d6);
  if ((TBitArray<FDefaultBitArrayAllocator> *)this_01 != &local_90) {
    iVar1 = *(int *)&(this->ChunkFragments).field_0x1c;
    *(undefined4 *)&(this->ChunkFragments).field_0x18 = 0;
    uVar6 = local_90.NumBits + 0x1fU & 0xffffffe0;
    if ((iVar1 < (int)uVar6) || (0x80 < iVar1)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)&(this->ChunkFragments).field_0x1c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,0);
    }
    *(int *)&(this->ChunkFragments).field_0x18 = local_90.NumBits;
    if (local_90.NumBits != 0) {
      _Dst_01 = *(TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  **)&(this->ChunkFragments).field_0x10;
      FVar7 = (ForElementType<unsigned_int>)&local_90;
      if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_90.AllocatorInstance.SecondaryData;
      }
      if (_Dst_01 ==
          (TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *)0x0) {
        _Dst_01 = this_01;
      }
      memcpy(_Dst_01,(void *)FVar7,(ulonglong)(local_90.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
  }
  this_02 = &this->SharedFragments;
  if (this_02 == &param_1->SharedFragments) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70.NumBits = 0;
  local_70.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)this_02,
             (TBitArray<FDefaultBitArrayAllocator> *)&param_1->SharedFragments,&local_70,MaxSize,
             &local_d5);
  if ((TBitArray<FDefaultBitArrayAllocator> *)this_02 != &local_70) {
    iVar1 = *(int *)&(this->SharedFragments).field_0x1c;
    *(undefined4 *)&(this->SharedFragments).field_0x18 = 0;
    uVar6 = local_70.NumBits + 0x1fU & 0xffffffe0;
    if ((iVar1 < (int)uVar6) || (0x80 < iVar1)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)&(this->SharedFragments).field_0x1c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_02,0);
    }
    *(int *)&(this->SharedFragments).field_0x18 = local_70.NumBits;
    if (local_70.NumBits != 0) {
      _Dst_02 = *(TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  **)&(this->SharedFragments).field_0x10;
      FVar7 = (ForElementType<unsigned_int>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_70.AllocatorInstance.SecondaryData;
      }
      if (_Dst_02 ==
          (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *)0x0) {
        _Dst_02 = this_02;
      }
      memcpy(_Dst_02,(void *)FVar7,(ulonglong)(local_70.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  this_03 = &this->ConstSharedFragments;
  if (this_03 == &param_1->ConstSharedFragments) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50.NumBits = 0;
  local_50.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)this_03,
             (TBitArray<FDefaultBitArrayAllocator> *)&param_1->ConstSharedFragments,&local_50,
             MaxSize,local_d4);
  if ((TBitArray<FDefaultBitArrayAllocator> *)this_03 != &local_50) {
    iVar1 = *(int *)&(this->ConstSharedFragments).field_0x1c;
    *(undefined4 *)&(this->ConstSharedFragments).field_0x18 = 0;
    uVar6 = local_50.NumBits + 0x1fU & 0xffffffe0;
    if ((iVar1 < (int)uVar6) || (0x80 < iVar1)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)&(this->ConstSharedFragments).field_0x1c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_03,0);
    }
    *(int *)&(this->ConstSharedFragments).field_0x18 = local_50.NumBits;
    if (local_50.NumBits != 0) {
      _Dst_03 = *(TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  **)&(this->ConstSharedFragments).field_0x10;
      FVar7 = (ForElementType<unsigned_int>)&local_50;
      if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_50.AllocatorInstance.SecondaryData;
      }
      if (_Dst_03 ==
          (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *)0x0) {
        _Dst_03 = this_03;
      }
      memcpy(_Dst_03,(void *)FVar7,(ulonglong)(local_50.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
  }
  return;
}

// CalculateDifference @ 1471fff10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMassArchetypeCompositionDescriptor * __thiscall
FMassArchetypeCompositionDescriptor::CalculateDifference
          (FMassArchetypeCompositionDescriptor *this,
          FMassArchetypeCompositionDescriptor *__return_storage_ptr__,
          FMassArchetypeCompositionDescriptor *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 auStack_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  pvVar2 = (void *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->Fragments).field_0x10 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Fragments).field_0x18 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Fragments).field_0x1c = 0x80;
  *(undefined8 *)&(__return_storage_ptr__->Tags).field_0x10 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Tags).field_0x18 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Tags).field_0x1c = 0x80;
  *(undefined8 *)&(__return_storage_ptr__->ChunkFragments).field_0x10 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ChunkFragments).field_0x18 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ChunkFragments).field_0x1c = 0x80;
  *(undefined8 *)&(__return_storage_ptr__->SharedFragments).field_0x10 = 0;
  *(undefined4 *)&(__return_storage_ptr__->SharedFragments).field_0x18 = 0;
  *(undefined4 *)&(__return_storage_ptr__->SharedFragments).field_0x1c = 0x80;
  *(undefined8 *)&(__return_storage_ptr__->ConstSharedFragments).field_0x10 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ConstSharedFragments).field_0x18 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ConstSharedFragments).field_0x1c = 0x80;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_108,(FBitSetContainer *)this);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)local_108,(TBitArray<FDefaultBitArrayAllocator> *)param_1);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_e8,(FBitSetContainer *)local_108);
  if ((void *)local_108._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._16_8_);
  }
  if (__return_storage_ptr__ != (FMassArchetypeCompositionDescriptor *)local_e8) {
    if ((void *)local_e8._16_8_ == (void *)0x0) {
      *(undefined8 *)&__return_storage_ptr__->Fragments = local_e8._0_8_;
      *(undefined8 *)&(__return_storage_ptr__->Fragments).field_0x8 = local_e8._8_8_;
    }
    pvVar1 = *(void **)&(__return_storage_ptr__->Fragments).field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(__return_storage_ptr__->Fragments).field_0x10 = local_e8._16_8_;
    *(undefined4 *)&(__return_storage_ptr__->Fragments).field_0x18 = local_e8._24_4_;
    *(undefined4 *)&(__return_storage_ptr__->Fragments).field_0x1c = local_e8._28_4_;
    local_e8._16_8_ = pvVar2;
  }
  if ((void *)local_e8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._16_8_);
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_108,(FBitSetContainer *)&this->Tags);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)local_108,(TBitArray<FDefaultBitArrayAllocator> *)&param_1->Tags);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_c8,(FBitSetContainer *)local_108);
  if ((void *)local_108._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._16_8_);
  }
  if (&__return_storage_ptr__->Tags !=
      (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)local_c8) {
    if ((void *)local_c8._16_8_ == (void *)0x0) {
      *(undefined8 *)&__return_storage_ptr__->Tags = local_c8._0_8_;
      *(undefined8 *)&(__return_storage_ptr__->Tags).field_0x8 = local_c8._8_8_;
    }
    pvVar1 = *(void **)&(__return_storage_ptr__->Tags).field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(__return_storage_ptr__->Tags).field_0x10 = local_c8._16_8_;
    *(undefined4 *)&(__return_storage_ptr__->Tags).field_0x18 = local_c8._24_4_;
    *(undefined4 *)&(__return_storage_ptr__->Tags).field_0x1c = local_c8._28_4_;
    local_c8._16_8_ = pvVar2;
  }
  if ((void *)local_c8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._16_8_);
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_108,(FBitSetContainer *)&this->ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)local_108,
             (TBitArray<FDefaultBitArrayAllocator> *)&param_1->ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_a8,(FBitSetContainer *)local_108);
  if ((void *)local_108._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._16_8_);
  }
  if (&__return_storage_ptr__->ChunkFragments !=
      (TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
       *)local_a8) {
    if ((void *)local_a8._16_8_ == (void *)0x0) {
      *(undefined8 *)&__return_storage_ptr__->ChunkFragments = local_a8._0_8_;
      *(undefined8 *)&(__return_storage_ptr__->ChunkFragments).field_0x8 = local_a8._8_8_;
    }
    pvVar1 = *(void **)&(__return_storage_ptr__->ChunkFragments).field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(__return_storage_ptr__->ChunkFragments).field_0x10 = local_a8._16_8_;
    *(undefined4 *)&(__return_storage_ptr__->ChunkFragments).field_0x18 = local_a8._24_4_;
    *(undefined4 *)&(__return_storage_ptr__->ChunkFragments).field_0x1c = local_a8._28_4_;
    local_a8._16_8_ = pvVar2;
  }
  if ((void *)local_a8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._16_8_);
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_108,(FBitSetContainer *)&this->SharedFragments);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)local_108,
             (TBitArray<FDefaultBitArrayAllocator> *)&param_1->SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_88,(FBitSetContainer *)local_108);
  if ((void *)local_108._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._16_8_);
  }
  if (&__return_storage_ptr__->SharedFragments !=
      (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
       *)local_88) {
    if ((void *)local_88._16_8_ == (void *)0x0) {
      *(undefined8 *)&__return_storage_ptr__->SharedFragments = local_88._0_8_;
      *(undefined8 *)&(__return_storage_ptr__->SharedFragments).field_0x8 = local_88._8_8_;
    }
    pvVar1 = *(void **)&(__return_storage_ptr__->SharedFragments).field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(__return_storage_ptr__->SharedFragments).field_0x10 = local_88._16_8_;
    *(undefined4 *)&(__return_storage_ptr__->SharedFragments).field_0x18 = local_88._24_4_;
    *(undefined4 *)&(__return_storage_ptr__->SharedFragments).field_0x1c = local_88._28_4_;
    local_88._16_8_ = pvVar2;
  }
  if ((void *)local_88._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._16_8_);
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_108,(FBitSetContainer *)&this->ConstSharedFragments);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)local_108,
             (TBitArray<FDefaultBitArrayAllocator> *)&param_1->ConstSharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_68,(FBitSetContainer *)local_108);
  if ((void *)local_108._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._16_8_);
  }
  if (&__return_storage_ptr__->ConstSharedFragments !=
      (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
       *)local_68) {
    if ((void *)local_68._16_8_ == (void *)0x0) {
      *(undefined8 *)&__return_storage_ptr__->ConstSharedFragments = local_68._0_8_;
      *(undefined8 *)&(__return_storage_ptr__->ConstSharedFragments).field_0x8 = local_68._8_8_;
    }
    pvVar1 = *(void **)&(__return_storage_ptr__->ConstSharedFragments).field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(__return_storage_ptr__->ConstSharedFragments).field_0x10 = local_68._16_8_;
    *(undefined4 *)&(__return_storage_ptr__->ConstSharedFragments).field_0x18 = local_68._24_4_;
    *(undefined4 *)&(__return_storage_ptr__->ConstSharedFragments).field_0x1c = local_68._28_4_;
    local_68._16_8_ = pvVar2;
  }
  if ((void *)local_68._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._16_8_);
  }
  return __return_storage_ptr__;
}

// CalculateHash @ 1472002a0

uint __cdecl
FMassArchetypeCompositionDescriptor::CalculateHash
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *param_1,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_2,
          TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_3,TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *param_4,
          TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = ::GetTypeHash(param_1);
  uVar2 = ::GetTypeHash(param_2);
  uVar3 = ::GetTypeHash(param_3);
  uVar4 = ::GetTypeHash(param_4);
  uVar5 = uVar3 - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar6 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar5 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar4 = (uVar3 - uVar6) - uVar5 ^ uVar6 << 10;
  uVar3 = ::GetTypeHash(param_5);
  uVar6 = ((uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar6) - uVar3 ^ uVar6 << 8;
  uVar5 = (uVar3 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar3 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar4 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar6) - uVar4 ^ uVar6 << 10;
  uVar5 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xf;
  uVar1 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar4 = (uVar2 - uVar1) - uVar5 ^ uVar1 >> 0xd;
  uVar2 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar4 = ((uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar1 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar3 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 10;
  return (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// CountStoredTypes @ 147207070

int __thiscall
FMassArchetypeCompositionDescriptor::CountStoredTypes(FMassArchetypeCompositionDescriptor *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->Tags,0,-1);
  iVar2 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->ChunkFragments,0,-1);
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->SharedFragments,0,-1);
  iVar4 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->ConstSharedFragments,0,-1);
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)this,0,-1);
  return iVar5 + iVar4 + iVar3 + iVar2 + iVar1;
}

// DebugOutputDescription @ 14720fa80

void __thiscall
FMassArchetypeCompositionDescriptor::DebugOutputDescription
          (FMassArchetypeCompositionDescriptor *this,FOutputDevice *param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)this);
  if (bVar1) {
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)&this->Tags);
    if (bVar1) {
      bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                        ((FConstBitSetContainer *)&this->ChunkFragments);
      if (bVar1) {
        FOutputDevice::Log(param_1,L"Empty");
        return;
      }
    }
  }
  bVar1 = param_1->bAutoEmitLineTerminator;
  param_1->bAutoEmitLineTerminator = false;
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)this);
  if (!bVar2) {
    FOutputDevice::Log(param_1,L"Fragments:\n");
    TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::DebugGetStringDesc
              ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                *)this,param_1);
  }
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)&this->Tags);
  if (!bVar2) {
    FOutputDevice::Log(param_1,L"Tags:\n");
    TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::DebugGetStringDesc
              ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                *)&this->Tags,param_1);
  }
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                    ((FConstBitSetContainer *)&this->ChunkFragments);
  if (!bVar2) {
    FOutputDevice::Log(param_1,L"ChunkFragments:\n");
    TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::DebugGetStringDesc
              ((TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                *)&this->ChunkFragments,param_1);
  }
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                    ((FConstBitSetContainer *)&this->SharedFragments);
  if (!bVar2) {
    FOutputDevice::Log(param_1,L"SharedFragments:\n");
    TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::DebugGetStringDesc
              ((TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                *)&this->SharedFragments,param_1);
  }
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                    ((FConstBitSetContainer *)&this->ConstSharedFragments);
  if (!bVar2) {
    FOutputDevice::Log(param_1,L"ConstSharedFragments:\n");
    TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::DebugGetStringDesc
              ((TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                *)&this->ConstSharedFragments,param_1);
  }
  param_1->bAutoEmitLineTerminator = bVar1;
  return;
}

// IsEmpty @ 147232230

bool __thiscall
FMassArchetypeCompositionDescriptor::IsEmpty(FMassArchetypeCompositionDescriptor *this)

{
  bool bVar1;
  
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)this);
  if (bVar1) {
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)&this->Tags);
    if (bVar1) {
      bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                        ((FConstBitSetContainer *)&this->ChunkFragments);
      if (bVar1) {
        bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                          ((FConstBitSetContainer *)&this->SharedFragments);
        if (bVar1) {
          bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&this->ConstSharedFragments);
          if (bVar1) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

