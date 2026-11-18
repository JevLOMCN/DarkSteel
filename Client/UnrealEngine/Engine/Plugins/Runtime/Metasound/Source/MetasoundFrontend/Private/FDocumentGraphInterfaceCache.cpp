// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 19

// FDocumentGraphInterfaceCache @ 14ae1b2e0

FDocumentGraphInterfaceCache * __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::FDocumentGraphInterfaceCache
          (FDocumentGraphInterfaceCache *this,
          TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FMetasoundFrontendClassInterface *pFVar7;
  FDocumentGraphInterfaceCache *pFVar8;
  int iVar9;
  uint local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<FName_const_&,int_const_&> local_res18;
  FScriptContainerElement *local_68;
  uint *local_60;
  FScriptContainerElement *local_58;
  uint *local_50;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDocumentGraphInterfaceCache_Frontend_Metasound__6B_;
  *(undefined8 *)&this->InputNameToIndex = 0;
  *(undefined8 *)&(this->InputNameToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->InputNameToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->InputNameToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->InputNameToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputNameToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputNameToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->InputNameToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->InputNameToIndex).field_0x48 = 0;
  *(undefined8 *)&this->OutputNameToIndex = 0;
  *(undefined8 *)&(this->OutputNameToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->OutputNameToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->OutputNameToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->OutputNameToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputNameToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputNameToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->OutputNameToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->OutputNameToIndex).field_0x48 = 0;
  (this->Parent).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Parent).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->TransactionCount = 0;
  lVar6 = (**(code **)(param_1->Object->_padding_ + 0x38))();
  pFVar7 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)(lVar6 + 0x70));
  local_res8[0] = 0;
  iVar9 = (pFVar7->Inputs).ArrayNum;
  if (0 < iVar9) {
    do {
      uVar3 = local_res8[0];
      uVar5 = 0;
      if ((int)local_res8[0] < iVar9) {
        uVar5 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FDocumentGraphInterfaceCache *)(*pcVar2)();
        return pFVar8;
      }
      local_68 = (pFVar7->Inputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x48;
      local_60 = local_res8;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->InputNameToIndex,&local_res18,(bool *)&local_68);
      iVar9 = (pFVar7->Inputs).ArrayNum;
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < iVar9);
  }
  pFVar7 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)(lVar6 + 0x70));
  local_res10[0] = 0;
  iVar9 = (pFVar7->Outputs).ArrayNum;
  if (0 < iVar9) {
    do {
      uVar3 = local_res10[0];
      uVar5 = 0;
      if ((int)local_res10[0] < iVar9) {
        uVar5 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FDocumentGraphInterfaceCache *)(*pcVar2)();
        return pFVar8;
      }
      local_50 = local_res10;
      local_58 = (pFVar7->Outputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x34;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->OutputNameToIndex,
                 (TPairInitializer<FName_const_&,int_const_&> *)&local_res18.Value,(bool *)&local_58
                );
      iVar9 = (pFVar7->Outputs).ArrayNum;
      local_res10[0] = local_res10[0] + 1;
    } while ((int)local_res10[0] < iVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FDocumentGraphInterfaceCache @ 14ae1d670

void __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::~FDocumentGraphInterfaceCache
          (FDocumentGraphInterfaceCache *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  void *pvVar6;
  longlong *plVar7;
  
  pTVar5 = (this->Parent).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  *(undefined4 *)&(this->OutputNameToIndex).field_0x48 = 0;
  pvVar6 = *(void **)&(this->OutputNameToIndex).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputNameToIndex);
  *(undefined4 *)&(this->InputNameToIndex).field_0x48 = 0;
  pvVar6 = *(void **)&(this->InputNameToIndex).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InputNameToIndex);
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// Create @ 14ae28fe0

TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1> * __cdecl
Metasound::Frontend::FDocumentGraphInterfaceCache::Create
          (TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1> *__return_storage_ptr__,
          TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> *param_1,
          FInterfaceModifyDelegates *param_2)

{
  FDocumentGraphInterfaceCache *pFVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> local_38;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::Frontend::FDocumentGraphInterfaceCache::Create");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId358,
               "Metasound::Frontend::FDocumentGraphInterfaceCache::Create",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
               ,0x166);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId358);
  }
  pTVar3 = ::operator_new(0xe0);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDocumentGraphInterfaceCache_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    local_38.Object = param_1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FDocumentGraphInterfaceCache((FDocumentGraphInterfaceCache *)(pTVar3 + 1),&local_38);
    pTVar4 = pTVar3;
  }
  TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1>::
  TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1>
            (__return_storage_ptr__,(FDocumentGraphInterfaceCache *)(pTVar4 + 1),pTVar4);
  pFVar1 = __return_storage_ptr__->Object;
  local_38.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_38.Object = (FDocumentCache *)OnInputAdded;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_2->OnInputAdded,(FDocumentGraphInterfaceCache *)&stack0x00000008,
             (pmf_008d5182 *)pFVar1);
  local_38.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_38.Object = (FDocumentCache *)OnRemovingInput;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_2->OnRemovingInput,(FDocumentGraphInterfaceCache *)&stack0x00000008,
             (pmf_008d5182 *)pFVar1);
  local_38.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_38.Object = (FDocumentCache *)OnInputNameChanged;
  TMulticastDelegateRegistration<void___cdecl(FName,FName),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(FName,FName),FDefaultDelegateUserPolicy> *
             )&param_2->OnInputNameChanged,(FDocumentGraphInterfaceCache *)&stack0x00000008,
             (pmf_b438933e *)pFVar1);
  local_38.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_38.Object = (FDocumentCache *)OnInputDataTypeChanged;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_2->OnInputDataTypeChanged,(FDocumentGraphInterfaceCache *)&stack0x00000008,
             (pmf_008d5182 *)pFVar1);
  local_38.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_38.Object = (FDocumentCache *)OnInputDefaultChanged;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_2->OnInputDefaultChanged,(FDocumentGraphInterfaceCache *)&stack0x00000008,
             (pmf_008d5182 *)pFVar1);
  local_38.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_38.Object = (FDocumentCache *)OnInputInheritsDefaultChanged;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_2->OnInputInheritsDefaultChanged,
             (FDocumentGraphInterfaceCache *)&stack0x00000008,(pmf_008d5182 *)pFVar1);
  local_38.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_38.Object = (FDocumentCache *)OnOutputAdded;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_2->OnOutputAdded,(FDocumentGraphInterfaceCache *)&stack0x00000008,
             (pmf_008d5182 *)pFVar1);
  local_38.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_38.Object = (FDocumentCache *)OnRemovingOutput;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_2->OnRemovingOutput,(FDocumentGraphInterfaceCache *)&stack0x00000008,
             (pmf_008d5182 *)pFVar1);
  local_38.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_38.Object = (FDocumentCache *)OnOutputNameChanged;
  TMulticastDelegateRegistration<void___cdecl(FName,FName),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(FName,FName),FDefaultDelegateUserPolicy> *
             )&param_2->OnOutputNameChanged,(FDocumentGraphInterfaceCache *)&stack0x00000008,
             (pmf_b438933e *)pFVar1);
  local_38.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_38.Object = (FDocumentCache *)OnOutputDataTypeChanged;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_2->OnOutputDataTypeChanged,(FDocumentGraphInterfaceCache *)&stack0x00000008,
             (pmf_008d5182 *)pFVar1);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FindInput @ 14ae333a0

FMetasoundFrontendClassInput * __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::FindInput
          (FDocumentGraphInterfaceCache *this,FName param_1)

{
  uint uVar1;
  FDocumentCache *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  uint *puVar7;
  longlong lVar8;
  FMetasoundFrontendClassInterface *pFVar9;
  FMetasoundFrontendClassInput *pFVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  
  puVar7 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&this->InputNameToIndex,param_1);
  if (puVar7 != (uint *)0x0) {
    pTVar12 = (this->Parent).WeakReferenceCount.ReferenceController;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar12->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ae333e8;
        }
        LOCK();
        aVar6 = pTVar12->SharedReferenceCount;
        bVar13 = aVar5 == aVar6;
        if (bVar13) {
          pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar13);
      pFVar2 = (this->Parent).Object;
      if (pFVar2 != (FDocumentCache *)0x0) {
        lVar8 = (**(code **)(pFVar2->_padding_ + 0x38))();
        pFVar9 = FMetasoundFrontendClass::GetDefaultInterface
                           ((FMetasoundFrontendClass *)(lVar8 + 0x70));
        uVar1 = *puVar7;
        uVar11 = 0;
        if ((int)uVar1 < (pFVar9->Inputs).ArrayNum) {
          uVar11 = ~uVar1 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FMetasoundFrontendClassInput *)(*pcVar4)();
          return pFVar10;
        }
        pFVar3 = (pFVar9->Inputs).AllocatorInstance.Data;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        return (FMetasoundFrontendClassInput *)(pFVar3 + (longlong)(int)uVar1 * 0x48);
      }
    }
LAB_14ae333e8:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  return (FMetasoundFrontendClassInput *)0x0;
}

// FindInputIndex @ 14ae337f0

int * __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::FindInputIndex
          (FDocumentGraphInterfaceCache *this,FName param_1)

{
  int *piVar1;
  
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->InputNameToIndex,param_1);
  return piVar1;
}

// FindOutput @ 14ae353c0

FMetasoundFrontendClassOutput * __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::FindOutput
          (FDocumentGraphInterfaceCache *this,FName param_1)

{
  uint uVar1;
  FDocumentCache *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  uint *puVar7;
  longlong lVar8;
  FMetasoundFrontendClassInterface *pFVar9;
  FMetasoundFrontendClassOutput *pFVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  
  puVar7 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&this->OutputNameToIndex,param_1);
  if (puVar7 != (uint *)0x0) {
    pTVar12 = (this->Parent).WeakReferenceCount.ReferenceController;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar12->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ae35408;
        }
        LOCK();
        aVar6 = pTVar12->SharedReferenceCount;
        bVar13 = aVar5 == aVar6;
        if (bVar13) {
          pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar13);
      pFVar2 = (this->Parent).Object;
      if (pFVar2 != (FDocumentCache *)0x0) {
        lVar8 = (**(code **)(pFVar2->_padding_ + 0x38))();
        pFVar9 = FMetasoundFrontendClass::GetDefaultInterface
                           ((FMetasoundFrontendClass *)(lVar8 + 0x70));
        uVar1 = *puVar7;
        uVar11 = 0;
        if ((int)uVar1 < (pFVar9->Outputs).ArrayNum) {
          uVar11 = ~uVar1 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
          return pFVar10;
        }
        pFVar3 = (pFVar9->Outputs).AllocatorInstance.Data;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        return (FMetasoundFrontendClassOutput *)(pFVar3 + (longlong)(int)uVar1 * 0x34);
      }
    }
LAB_14ae35408:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  return (FMetasoundFrontendClassOutput *)0x0;
}

// FindOutputIndex @ 14ae35810

int * __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::FindOutputIndex
          (FDocumentGraphInterfaceCache *this,FName param_1)

{
  int *piVar1;
  
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->OutputNameToIndex,param_1);
  return piVar1;
}

// GetTransactionCount @ 14ae3d780

int __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::GetTransactionCount
          (FDocumentGraphInterfaceCache *this)

{
  return this->TransactionCount;
}

// Init @ 14ae3e9f0

void __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::Init
          (FDocumentGraphInterfaceCache *this,FInterfaceModifyDelegates *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_1->OnInputAdded,(FDocumentGraphInterfaceCache *)&stack0x00000010,
             (pmf_008d5182 *)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_1->OnRemovingInput,(FDocumentGraphInterfaceCache *)&stack0x00000010,
             (pmf_008d5182 *)this);
  TMulticastDelegateRegistration<void___cdecl(FName,FName),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(FName,FName),FDefaultDelegateUserPolicy> *
             )&param_1->OnInputNameChanged,(FDocumentGraphInterfaceCache *)&stack0x00000010,
             (pmf_b438933e *)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_1->OnInputDataTypeChanged,(FDocumentGraphInterfaceCache *)&stack0x00000010,
             (pmf_008d5182 *)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_1->OnInputDefaultChanged,(FDocumentGraphInterfaceCache *)&stack0x00000010,
             (pmf_008d5182 *)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_1->OnInputInheritsDefaultChanged,
             (FDocumentGraphInterfaceCache *)&stack0x00000010,(pmf_008d5182 *)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_1->OnOutputAdded,(FDocumentGraphInterfaceCache *)&stack0x00000010,
             (pmf_008d5182 *)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_1->OnRemovingOutput,(FDocumentGraphInterfaceCache *)&stack0x00000010,
             (pmf_008d5182 *)this);
  TMulticastDelegateRegistration<void___cdecl(FName,FName),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(FName,FName),FDefaultDelegateUserPolicy> *
             )&param_1->OnOutputNameChanged,(FDocumentGraphInterfaceCache *)&stack0x00000010,
             (pmf_b438933e *)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphInterfaceCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &param_1->OnOutputDataTypeChanged,(FDocumentGraphInterfaceCache *)&stack0x00000010,
             (pmf_008d5182 *)this);
  return;
}

// OnInputAdded @ 14ae40820

void __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::OnInputAdded
          (FDocumentGraphInterfaceCache *this,int param_1)

{
  FDocumentCache *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  longlong lVar5;
  FMetasoundFrontendClassInterface *pFVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TPairInitializer<FName_const_&,int_const_&> local_res8;
  FScriptContainerElement *local_28;
  int **local_20;
  
  pTVar8 = (this->Parent).WeakReferenceCount.ReferenceController;
  local_res8.Value._0_4_ = param_1;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ae40852;
      }
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    pFVar1 = (this->Parent).Object;
    if (pFVar1 != (FDocumentCache *)0x0) {
      lVar5 = (**(code **)(pFVar1->_padding_ + 0x38))();
      pFVar6 = FMetasoundFrontendClass::GetDefaultInterface
                         ((FMetasoundFrontendClass *)(lVar5 + 0x70));
      lVar5 = (longlong)(int)(uint)local_res8.Value;
      uVar7 = 0;
      if ((int)(uint)local_res8.Value < (pFVar6->Inputs).ArrayNum) {
        uVar7 = ~(uint)local_res8.Value >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_28 = (pFVar6->Inputs).AllocatorInstance.Data + lVar5 * 0x48;
      local_20 = &local_res8.Value;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->InputNameToIndex,&local_res8,(bool *)&local_28);
      this->TransactionCount = this->TransactionCount + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      return;
    }
  }
LAB_14ae40852:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// OnInputDataTypeChanged @ 14ae40930

void __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::OnInputDataTypeChanged
          (FDocumentGraphInterfaceCache *this,int param_1)

{
  this->TransactionCount = this->TransactionCount + 1;
  return;
}

// OnInputDefaultChanged @ 14ae40940

void __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::OnInputDefaultChanged
          (FDocumentGraphInterfaceCache *this,int param_1)

{
  this->TransactionCount = this->TransactionCount + 1;
  return;
}

// OnInputInheritsDefaultChanged @ 14ae40950

void __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::OnInputInheritsDefaultChanged
          (FDocumentGraphInterfaceCache *this,int param_1)

{
  this->TransactionCount = this->TransactionCount + 1;
  return;
}

// OnInputNameChanged @ 14ae40960

void __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::OnInputNameChanged
          (FDocumentGraphInterfaceCache *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  TPairInitializer<FName_const_&,int_const_&> local_res8;
  FName local_res18;
  FName local_res20;
  FName *local_38;
  int *local_30;
  
  local_res8.Value = (int *)param_1;
  local_res18 = param_2;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->InputNameToIndex,param_1);
  if (piVar4 == (int *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                       ,0x1d3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res20 = param_1;
  if (*(int *)&(this->InputNameToIndex).field_0x8 != *(int *)&(this->InputNameToIndex).field_0x34) {
    uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                       *)&this->InputNameToIndex,local_res8.Value._4_4_ + uVar3,&local_res20);
  }
  local_38 = &local_res18;
  local_30 = piVar4;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->InputNameToIndex,&local_res8,(bool *)&local_38);
  this->TransactionCount = this->TransactionCount + 1;
  return;
}

// OnOutputAdded @ 14ae40c10

void __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::OnOutputAdded
          (FDocumentGraphInterfaceCache *this,int param_1)

{
  FDocumentCache *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  longlong lVar5;
  FMetasoundFrontendClassInterface *pFVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TPairInitializer<FName_const_&,int_const_&> local_res8;
  FScriptContainerElement *local_28;
  int **local_20;
  
  pTVar8 = (this->Parent).WeakReferenceCount.ReferenceController;
  local_res8.Value._0_4_ = param_1;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ae40c42;
      }
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    pFVar1 = (this->Parent).Object;
    if (pFVar1 != (FDocumentCache *)0x0) {
      lVar5 = (**(code **)(pFVar1->_padding_ + 0x38))();
      pFVar6 = FMetasoundFrontendClass::GetDefaultInterface
                         ((FMetasoundFrontendClass *)(lVar5 + 0x70));
      lVar5 = (longlong)(int)(uint)local_res8.Value;
      uVar7 = 0;
      if ((int)(uint)local_res8.Value < (pFVar6->Outputs).ArrayNum) {
        uVar7 = ~(uint)local_res8.Value >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_20 = &local_res8.Value;
      local_28 = (pFVar6->Outputs).AllocatorInstance.Data + lVar5 * 0x34;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->OutputNameToIndex,&local_res8,(bool *)&local_28);
      this->TransactionCount = this->TransactionCount + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      return;
    }
  }
LAB_14ae40c42:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// OnOutputDataTypeChanged @ 14ae40d20

void __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::OnOutputDataTypeChanged
          (FDocumentGraphInterfaceCache *this,int param_1)

{
  this->TransactionCount = this->TransactionCount + 1;
  return;
}

// OnOutputNameChanged @ 14ae40d30

void __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::OnOutputNameChanged
          (FDocumentGraphInterfaceCache *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  TPairInitializer<FName_const_&,int_const_&> local_res8;
  FName local_res18;
  FName local_res20;
  FName *local_38;
  int *local_30;
  
  local_res8.Value = (int *)param_1;
  local_res18 = param_2;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->OutputNameToIndex,param_1);
  if (piVar4 == (int *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                       ,0x21c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res20 = param_1;
  if (*(int *)&(this->OutputNameToIndex).field_0x8 != *(int *)&(this->OutputNameToIndex).field_0x34)
  {
    uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                       *)&this->OutputNameToIndex,local_res8.Value._4_4_ + uVar3,&local_res20);
  }
  local_38 = &local_res18;
  local_30 = piVar4;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->OutputNameToIndex,&local_res8,(bool *)&local_38);
  this->TransactionCount = this->TransactionCount + 1;
  return;
}

// OnRemovingInput @ 14ae414f0

void __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::OnRemovingInput
          (FDocumentGraphInterfaceCache *this,int param_1)

{
  FDocumentCache *pFVar1;
  FName FVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  longlong lVar7;
  FMetasoundFrontendClassInterface *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  FName local_res8;
  
  pTVar9 = (this->Parent).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ae41523;
      }
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar10 = aVar4 == aVar5;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar10);
    pFVar1 = (this->Parent).Object;
    if (pFVar1 != (FDocumentCache *)0x0) {
      lVar7 = (**(code **)(pFVar1->_padding_ + 0x38))();
      pFVar8 = FMetasoundFrontendClass::GetDefaultInterface
                         ((FMetasoundFrontendClass *)(lVar7 + 0x70));
      uVar6 = 0;
      if (param_1 < (pFVar8->Inputs).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = *(FName *)((pFVar8->Inputs).AllocatorInstance.Data + (longlong)param_1 * 0x48);
      local_res8 = FVar2;
      if (*(int *)&(this->InputNameToIndex).field_0x8 !=
          *(int *)&(this->InputNameToIndex).field_0x34) {
        uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                           *)&this->InputNameToIndex,uVar6 + FVar2.Number,&local_res8);
      }
      this->TransactionCount = this->TransactionCount + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      return;
    }
  }
LAB_14ae41523:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// OnRemovingOutput @ 14ae41620

void __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::OnRemovingOutput
          (FDocumentGraphInterfaceCache *this,int param_1)

{
  FDocumentCache *pFVar1;
  FName FVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  longlong lVar7;
  FMetasoundFrontendClassInterface *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  FName local_res8;
  
  pTVar9 = (this->Parent).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ae41653;
      }
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar10 = aVar4 == aVar5;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar10);
    pFVar1 = (this->Parent).Object;
    if (pFVar1 != (FDocumentCache *)0x0) {
      lVar7 = (**(code **)(pFVar1->_padding_ + 0x38))();
      pFVar8 = FMetasoundFrontendClass::GetDefaultInterface
                         ((FMetasoundFrontendClass *)(lVar7 + 0x70));
      uVar6 = 0;
      if (param_1 < (pFVar8->Outputs).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = *(FName *)((pFVar8->Outputs).AllocatorInstance.Data + (longlong)param_1 * 0x34);
      local_res8 = FVar2;
      if (*(int *)&(this->OutputNameToIndex).field_0x8 !=
          *(int *)&(this->OutputNameToIndex).field_0x34) {
        uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                           *)&this->OutputNameToIndex,uVar6 + FVar2.Number,&local_res8);
      }
      this->TransactionCount = this->TransactionCount + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      return;
    }
  }
LAB_14ae41653:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

