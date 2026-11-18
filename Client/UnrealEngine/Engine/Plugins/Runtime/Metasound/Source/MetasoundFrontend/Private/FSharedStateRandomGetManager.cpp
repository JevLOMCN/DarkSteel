// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 10

// Get @ 14adbbaf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSharedStateRandomGetManager * __cdecl Metasound::FSharedStateRandomGetManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&RGM,4000);
      RGM.RandomGets._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      RGM.RandomGets._48_8_ = _UNK_150631d98;
      RGM.RandomGets._0_8_ = 0;
      RGM.RandomGets._8_8_ = 0;
      RGM.RandomGets._32_8_ = 0;
      RGM.RandomGets._64_8_ = 0;
      RGM.RandomGets._72_4_ = 0;
      atexit(`Metasound::FSharedStateRandomGetManager::Get'::__l2::
             _dynamic_atexit_destructor_for__RGM__);
      _Init_thread_footer(&::_TSS0);
      return &RGM;
    }
  }
  return &RGM;
}

// InitOrUpdate @ 14adc6430

void __thiscall
Metasound::FSharedStateRandomGetManager::InitOrUpdate
          (FSharedStateRandomGetManager *this,InitSharedStateArgs *param_1)

{
  TMap<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>_>
  *this_00;
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TCircularQueue<int> *pTVar4;
  TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> *pTVar5;
  int iVar6;
  ulong64 uVar7;
  FArrayRandomGet *pFVar8;
  longlong lVar9;
  FArrayRandomGet *pFVar10;
  TPairInitializer<FGuid_const_&,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_&&>
  local_res8;
  InitSharedStateArgs *local_28;
  TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> **local_20;
  
  this_00 = &this->RandomGets;
  uVar7 = CityHash64((char *)param_1,0x10);
  iVar6 = TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
                      *)this_00,(uint)uVar7,&param_1->SharedStateId);
  pFVar10 = (FArrayRandomGet *)0x0;
  if (iVar6 != -1) {
    lVar9 = (longlong)iVar6 * 0x20 + *(longlong *)&this_00->field_0x0;
    pFVar8 = (FArrayRandomGet *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      pFVar8 = pFVar10;
    }
    if (pFVar8 != (FArrayRandomGet *)0x0) {
      FArrayRandomGet::UpdateState
                ((FArrayRandomGet *)(pFVar8->PreviousIndices).AllocatorInstance.Data,param_1->Seed,
                 param_1->NumElements,&param_1->Weights,param_1->NoRepeatOrder);
      return;
    }
  }
  pFVar8 = ::operator_new(0x40);
  if (pFVar8 != (FArrayRandomGet *)0x0) {
    iVar6 = param_1->NoRepeatOrder;
    iVar1 = param_1->NumElements;
    iVar2 = param_1->Seed;
    (pFVar8->PreviousIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->PreviousIndices).ArrayNum = 0;
    (pFVar8->PreviousIndices).ArrayMax = 0;
    (pFVar8->PreviousIndicesQueue).Ptr = (TCircularQueue<int> *)0x0;
    pFVar8->NoRepeatOrder = -1;
    pFVar8->MaxIndex = 0;
    (pFVar8->RandomWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->RandomWeights).ArrayNum = 0;
    (pFVar8->RandomWeights).ArrayMax = 0;
    (pFVar8->RandomStream).InitialSeed = 0;
    (pFVar8->RandomStream).Seed = 0;
    pFVar8->Seed = -1;
    pFVar8->bRandomStreamInitialized = false;
    FArrayRandomGet::UpdateState(pFVar8,iVar2,iVar1,&param_1->Weights,iVar6);
    pFVar10 = pFVar8;
  }
  local_20 = &local_res8.Value;
  local_res8.Value =
       (TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> *)pFVar10
  ;
  local_28 = param_1;
  TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FGuid_const_&,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_&&>_>
            ((TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_28);
  pTVar5 = local_res8.Value;
  if ((FArrayRandomGet *)local_res8.Value != (FArrayRandomGet *)0x0) {
    pFVar3 = (((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)local_res8.Value + 0x20))->
             AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pTVar4 = ((TUniquePtr<TCircularQueue<int>,TDefaultDelete<TCircularQueue<int>_>_> *)
             ((longlong)pTVar5 + 0x10))->Ptr;
    if (pTVar4 != (TCircularQueue<int> *)0x0) {
      pFVar3 = (pTVar4->Buffer).Elements.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pTVar4,0x20);
    }
    pFVar3 = (((TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar5->Ptr)->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pTVar5,0x40);
  }
  return;
}

// InitSharedState @ 14adc6590

void __thiscall
Metasound::FSharedStateRandomGetManager::InitSharedState
          (FSharedStateRandomGetManager *this,InitSharedStateArgs *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  TCircularQueue<int> *pTVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  FArrayRandomGet *pFVar8;
  longlong lVar9;
  FArrayRandomGet *pFVar10;
  FArrayRandomGet *local_res18;
  InitSharedStateArgs *local_68;
  FArrayRandomGet **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  int local_44;
  int local_40;
  char local_3c;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  if (this == (FSharedStateRandomGetManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar7 = CityHash64((char *)param_1,0x10);
  iVar6 = TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
                      *)&this->RandomGets,(uint)uVar7,&param_1->SharedStateId);
  pFVar10 = (FArrayRandomGet *)0x0;
  if (iVar6 != -1) {
    lVar9 = (longlong)iVar6 * 0x20 + *(longlong *)&this->RandomGets;
    pFVar8 = (FArrayRandomGet *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      pFVar8 = pFVar10;
    }
    if ((pFVar8 != (FArrayRandomGet *)0x0) &&
       (pFVar3 = (pFVar8->PreviousIndices).AllocatorInstance.Data,
       pFVar3 != (FScriptContainerElement *)0x0)) {
      local_48 = param_1->Seed;
      local_58._0_4_ = (param_1->SharedStateId).A;
      local_58._4_4_ = (param_1->SharedStateId).B;
      uStack_50._0_4_ = (param_1->SharedStateId).C;
      uStack_50._4_4_ = (param_1->SharedStateId).D;
      local_44 = param_1->NumElements;
      local_40 = param_1->NoRepeatOrder;
      local_30 = (param_1->Weights).ArrayNum;
      lVar9 = (longlong)local_30;
      local_3c = param_1->bIsPreviewSound;
      _Src = (param_1->Weights).AllocatorInstance.Data;
      local_38.Data = (FScriptContainerElement *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_30,0,&local_38,local_30,&local_2c);
        memcpy(local_38.Data,_Src,lVar9 << 2);
      }
      if (((local_3c == '\0') && (*(int *)(pFVar3 + 0x1c) == local_44)) &&
         (*(int *)(pFVar3 + 0x18) == local_40)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      if (!bVar5) goto LAB_14adc67d4;
    }
  }
  pFVar8 = ::operator_new(0x40);
  if (pFVar8 != (FArrayRandomGet *)0x0) {
    iVar6 = param_1->NoRepeatOrder;
    iVar1 = param_1->NumElements;
    iVar2 = param_1->Seed;
    (pFVar8->PreviousIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->PreviousIndices).ArrayNum = 0;
    (pFVar8->PreviousIndices).ArrayMax = 0;
    (pFVar8->PreviousIndicesQueue).Ptr = (TCircularQueue<int> *)0x0;
    pFVar8->NoRepeatOrder = -1;
    pFVar8->MaxIndex = 0;
    (pFVar8->RandomWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->RandomWeights).ArrayNum = 0;
    (pFVar8->RandomWeights).ArrayMax = 0;
    (pFVar8->RandomStream).InitialSeed = 0;
    (pFVar8->RandomStream).Seed = 0;
    pFVar8->Seed = -1;
    pFVar8->bRandomStreamInitialized = false;
    FArrayRandomGet::UpdateState(pFVar8,iVar2,iVar1,&param_1->Weights,iVar6);
    pFVar10 = pFVar8;
  }
  local_60 = &local_res18;
  local_res18 = pFVar10;
  local_68 = param_1;
  TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FGuid_const_&,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_&&>_>
            ((TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
              *)&this->RandomGets,
             (TPairInitializer<FGuid_const_&,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_&&>
              *)&stack0x00000008,(bool *)&local_68);
  pFVar10 = local_res18;
  if (local_res18 != (FArrayRandomGet *)0x0) {
    pFVar3 = (local_res18->RandomWeights).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pTVar4 = (pFVar10->PreviousIndicesQueue).Ptr;
    if (pTVar4 != (TCircularQueue<int> *)0x0) {
      pFVar3 = (pTVar4->Buffer).Elements.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pTVar4,0x20);
    }
    pFVar3 = (pFVar10->PreviousIndices).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar10,0x40);
  }
LAB_14adc67d4:
                    /* WARNING: Could not recover jumptable at 0x00014adc67f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// NextValue @ 14adc9780

int __thiscall
Metasound::FSharedStateRandomGetManager::NextValue
          (FSharedStateRandomGetManager *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (this == (FSharedStateRandomGetManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
                      *)&this->RandomGets,(uint)uVar2,param_1);
  puVar3 = (undefined8 *)0x0;
  if (iVar1 != -1) {
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)&this->RandomGets);
  }
  puVar4 = puVar3 + 2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  iVar1 = FArrayRandomGet::NextValue((FArrayRandomGet *)*puVar4);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return iVar1;
}

// NextValue @ 14adc9810

int __thiscall
Metasound::FSharedStateRandomGetManager::NextValue
          (FSharedStateRandomGetManager *this,FGuid *param_1,InitSharedStateArgs *param_2)

{
  int iVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (this == (FSharedStateRandomGetManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  InitOrUpdate(this,param_2);
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
                      *)&this->RandomGets,(uint)uVar2,param_1);
  puVar3 = (undefined8 *)0x0;
  if (iVar1 != -1) {
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)&this->RandomGets);
  }
  puVar4 = puVar3 + 2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  iVar1 = FArrayRandomGet::NextValue((FArrayRandomGet *)*puVar4);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return iVar1;
}

// ResetSeed @ 14adcfc40

void __thiscall
Metasound::FSharedStateRandomGetManager::ResetSeed
          (FSharedStateRandomGetManager *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (this == (FSharedStateRandomGetManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
                      *)&this->RandomGets,(uint)uVar2,param_1);
  plVar3 = (longlong *)0x0;
  if (iVar1 != -1) {
    plVar3 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&this->RandomGets);
  }
  plVar4 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  *(undefined4 *)(*plVar4 + 0x34) = *(undefined4 *)(*plVar4 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00014adcfcb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ResetSeed @ 14adcfcd0

void __thiscall
Metasound::FSharedStateRandomGetManager::ResetSeed
          (FSharedStateRandomGetManager *this,FGuid *param_1,InitSharedStateArgs *param_2)

{
  int iVar1;
  ulong64 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (this == (FSharedStateRandomGetManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  InitOrUpdate(this,param_2);
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
                      *)&this->RandomGets,(uint)uVar2,param_1);
  plVar3 = (longlong *)0x0;
  if (iVar1 != -1) {
    plVar3 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&this->RandomGets);
  }
  plVar4 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  *(undefined4 *)(*plVar4 + 0x34) = *(undefined4 *)(*plVar4 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00014adcfd55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// SetNoRepeatOrder @ 14add0b20

void __thiscall
Metasound::FSharedStateRandomGetManager::SetNoRepeatOrder
          (FSharedStateRandomGetManager *this,FGuid *param_1,int param_2)

{
  int iVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (this == (FSharedStateRandomGetManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
                      *)&this->RandomGets,(uint)uVar2,param_1);
  puVar3 = (undefined8 *)0x0;
  if (iVar1 != -1) {
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)&this->RandomGets);
  }
  puVar4 = puVar3 + 2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  FArrayRandomGet::SetNoRepeatOrder((FArrayRandomGet *)*puVar4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014add0ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// SetRandomWeights @ 14add0c30

void __thiscall
Metasound::FSharedStateRandomGetManager::SetRandomWeights
          (FSharedStateRandomGetManager *this,FGuid *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  int iVar2;
  ulong64 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (this != (FSharedStateRandomGetManager *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    uVar3 = CityHash64((char *)param_1,0x10);
    iVar2 = TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
                        *)&this->RandomGets,(uint)uVar3,param_1);
    plVar5 = (longlong *)0x0;
    if (iVar2 != -1) {
      plVar5 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)&this->RandomGets);
    }
    plVar4 = plVar5 + 2;
    if (plVar5 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    lVar1 = *plVar4;
    iVar2 = param_2->ArrayNum;
    if ((iVar2 != *(int *)(lVar1 + 0x28)) ||
       ((iVar2 != 0 &&
        (iVar2 = memcmp((param_2->AllocatorInstance).Data,*(void **)(lVar1 + 0x20),
                        (longlong)iVar2 << 2), iVar2 != 0)))) {
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x20),param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00014add0ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSeed @ 14add0d90

void __thiscall
Metasound::FSharedStateRandomGetManager::SetSeed
          (FSharedStateRandomGetManager *this,FGuid *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  ulong64 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  
  if (this == (FSharedStateRandomGetManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
                      *)&this->RandomGets,(uint)uVar3,param_1);
  plVar5 = (longlong *)0x0;
  if (iVar2 != -1) {
    plVar5 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)&this->RandomGets);
  }
  plVar4 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  lVar1 = *plVar4;
  if ((*(char *)(lVar1 + 0x3c) == '\0') || (param_2 != *(int *)(lVar1 + 0x38))) {
    *(int *)(lVar1 + 0x38) = param_2;
    if (param_2 == -1) {
      QueryPerformanceCounter(&local_res8);
      param_2 = local_res8.s.LowPart;
    }
    *(int *)(lVar1 + 0x30) = param_2;
    *(int *)(lVar1 + 0x34) = param_2;
    *(undefined1 *)(lVar1 + 0x3c) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014add0e3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

