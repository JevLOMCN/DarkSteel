// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 7

// StaticStruct @ 148c4ac60

UScriptStruct * __cdecl FAutomatedTestPassResults::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationController();
    Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestPassResults,(UObject *)pUVar1,
                         L"AutomatedTestPassResults");
  }
  return Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.OuterSingleton;
}

// ~FAutomatedTestPassResults @ 148c53c20

void __thiscall
FAutomatedTestPassResults::~FAutomatedTestPassResults(FAutomatedTestPassResults *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->TestsMapIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TestsMapIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TestsMapIndex);
  DestructItems<FAutomatedTestResult,int>
            ((FAutomatedTestResult *)(this->Tests).AllocatorInstance.Data,(this->Tests).ArrayNum);
  pFVar2 = (this->Tests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ComparisonExportDirectory).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FAutomationDeviceInfo,int>
            ((FAutomationDeviceInfo *)(this->Devices).AllocatorInstance.Data,
             (this->Devices).ArrayNum);
  pFVar2 = (this->Devices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddTestResult @ 148c57290

void __thiscall
FAutomatedTestPassResults::AddTestResult
          (FAutomatedTestPassResults *this,TSharedPtr<IAutomationReport,1> *param_1)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  FAutomationExecutionEntry *pFVar4;
  FAutomationArtifact *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  ForAnyElementType *pFVar10;
  FString **ppFVar11;
  int iVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  TPairInitializer<FString_const_&,unsigned_int_&&> local_res18;
  IAutomationReport *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  ForAnyElementType local_108;
  undefined8 local_100;
  FString local_f8;
  FString *local_e8;
  FString *local_e0;
  FScriptContainerElement local_d8;
  FString *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  FAutomationExecutionEntry *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  FAutomationArtifact *local_98;
  undefined8 local_90;
  IAutomationReport *local_88;
  TReferenceControllerBase<1> *local_80;
  FString *local_78;
  int local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  FString *local_58;
  int *local_50;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name52,L"AutomationTest/Report");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name52,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)&local_res18.Value,&LLMScope_Name52,true);
  if (param_1->Object == (IAutomationReport *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar9 = (FString *)(**(code **)(param_1->Object->_padding_ + 0x20))();
  iVar8 = (pFVar9->Data).ArrayNum;
  if (iVar8 == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  iVar12 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar12 = 0;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar13);
  iVar8 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->TestsMapIndex,uVar7,pFVar9);
  if (iVar8 == -1) {
    pTStack_110 = (param_1->SharedReferenceCount).ReferenceController;
    local_118 = param_1->Object;
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100 = 0;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    local_e8 = (FString *)0x0;
    local_e0 = (FString *)0x0;
    local_d0 = (FString *)0x0;
    local_c8 = 0;
    local_b0 = (FAutomationExecutionEntry *)0x0;
    local_a8 = 0;
    local_98 = (FAutomationArtifact *)0x0;
    local_90 = 0;
    local_a0 = 0;
    local_d8 = (FScriptContainerElement)0x0;
    local_c0 = 0;
    local_b8 = 0;
    if (pTStack_110 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_110->SharedReferenceCount = (atomic<int>)((int)pTStack_110->SharedReferenceCount + 1);
      UNLOCK();
    }
    uStack_5c = 0;
    local_60 = 0;
    local_88 = local_118;
    local_80 = pTStack_110;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (param_1->Object == (IAutomationReport *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar10 = (ForAnyElementType *)(**(code **)(param_1->Object->_padding_ + 0x18))();
    if (&local_108 != pFVar10) {
      iVar8 = *(int *)&pFVar10[1].Data;
      pFVar15 = pFVar10->Data;
      local_100 = CONCAT44(local_100._4_4_,iVar8);
      if ((iVar8 != 0) || (local_100._4_4_ != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,local_100._4_4_,&local_108,iVar8,(int *)((longlong)&local_100 + 4));
        if (iVar8 != 0) {
          memcpy(local_108.Data,pFVar15,(longlong)iVar8 * 2);
        }
      }
    }
    if (&local_f8 != pFVar9) {
      iVar8 = (pFVar9->Data).ArrayNum;
      pFVar15 = (pFVar9->Data).AllocatorInstance.Data;
      local_f8.Data.ArrayNum = iVar8;
      if ((iVar8 == 0) && (local_f8.Data.ArrayMax == 0)) {
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,local_f8.Data.ArrayMax,(ForAnyElementType *)&local_f8,iVar8,
                   &local_f8.Data.ArrayMax);
        if (iVar8 != 0) {
          memcpy(local_f8.Data.AllocatorInstance.Data,pFVar15,(longlong)iVar8 * 2);
        }
      }
    }
    if (param_1->Object == (IAutomationReport *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ppFVar11 = (FString **)
               (**(code **)(param_1->Object->_padding_ + 0x40))(param_1->Object,&local_78);
    if (&local_e8 != ppFVar11) {
      DestructItems<FString,int>(local_e8,(int)local_e0);
      if (local_e8 != (FString *)0x0) {
        FMemory::Free(local_e8);
      }
      local_e8 = *ppFVar11;
      *ppFVar11 = (FString *)0x0;
      local_e0 = ppFVar11[1];
      ppFVar11[1] = (FString *)0x0;
    }
    DestructItems<FString,int>(local_78,local_70);
    if (local_78 != (FString *)0x0) {
      FMemory::Free(local_78);
    }
    local_res10[0] = (this->Tests).ArrayNum;
    local_50 = local_res10;
    local_58 = pFVar9;
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,unsigned_int_&&>_>
              ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->TestsMapIndex,&local_res18,(bool *)&local_58);
    pFVar15 = (this->Tests).AllocatorInstance.Data;
    if ((pFVar15 <= (FScriptContainerElement *)&local_118) &&
       ((FScriptContainerElement *)&local_118 < pFVar15 + (longlong)(this->Tests).ArrayMax * 0x90))
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar8 = (this->Tests).ArrayNum;
    piVar1 = &(this->Tests).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x890,&(this->Tests).AllocatorInstance,piVar1);
    }
    FVar3.Data = local_108.Data;
    pFVar15 = (this->Tests).AllocatorInstance.Data;
    (this->Tests).ArrayNum = iVar8 + 1;
    lVar14 = (longlong)iVar8 * 0x90;
    *(IAutomationReport **)(pFVar15 + lVar14) = local_118;
    *(TReferenceControllerBase<1> **)(pFVar15 + lVar14 + 8) = pTStack_110;
    if (pTStack_110 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_110->SharedReferenceCount = (atomic<int>)((int)pTStack_110->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar16 = pFVar15 + lVar14 + 0x10;
    *(undefined8 *)&pFVar16->field_0x0 = 0;
    lVar17 = (longlong)(int)local_100;
    *(int *)&pFVar16[8].field_0x0 = (int)local_100;
    if ((int)local_100 == 0) {
      *(int *)(pFVar16 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_100,0,(ForAnyElementType *)pFVar16,(int)local_100,
                 (int *)(pFVar16 + 0xc));
      memcpy(*(void **)&pFVar16->field_0x0,FVar3.Data,lVar17 * 2);
    }
    FVar3.Data = local_f8.Data.AllocatorInstance.Data;
    pFVar16 = pFVar15 + lVar14 + 0x20;
    *(undefined8 *)&pFVar16->field_0x0 = 0;
    lVar17 = (longlong)local_f8.Data.ArrayNum;
    *(int *)&pFVar16[8].field_0x0 = local_f8.Data.ArrayNum;
    if (local_f8.Data.ArrayNum == 0) {
      *(int *)(pFVar16 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)pFVar16,local_f8.Data.ArrayNum,
                 (int *)(pFVar16 + 0xc));
      memcpy(*(void **)&pFVar16->field_0x0,FVar3.Data,lVar17 * 2);
    }
    pFVar9 = local_e8;
    pFVar16 = pFVar15 + lVar14 + 0x30;
    *(undefined8 *)&pFVar16->field_0x0 = 0;
    iVar8 = (int)local_e0;
    *(int *)&pFVar16[8].field_0x0 = (int)local_e0;
    if ((int)local_e0 == 0) {
      *(int *)(pFVar16 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_e0,0,(ForAnyElementType *)pFVar16,(int)local_e0,
                 (int *)(pFVar16 + 0xc));
      ConstructItems<FString,FString,int>(*(void **)&pFVar16->field_0x0,pFVar9,iVar8);
    }
    pFVar9 = local_d0;
    pFVar16 = pFVar15 + lVar14 + 0x48;
    pFVar15[lVar14 + 0x40] = local_d8;
    *(undefined8 *)&pFVar16->field_0x0 = 0;
    iVar8 = (int)local_c8;
    *(int *)&pFVar16[8].field_0x0 = (int)local_c8;
    if ((int)local_c8 == 0) {
      *(int *)(pFVar16 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_c8,0,(ForAnyElementType *)pFVar16,(int)local_c8,
                 (int *)(pFVar16 + 0xc));
      ConstructItems<FString,FString,int>(*(void **)&pFVar16->field_0x0,pFVar9,iVar8);
    }
    pFVar4 = local_b0;
    *(undefined4 *)(pFVar15 + lVar14 + 0x58) = local_c0;
    pFVar16 = pFVar15 + lVar14 + 0x68;
    *(undefined8 *)(pFVar15 + lVar14 + 0x60) = local_b8;
    *(undefined8 *)&pFVar16->field_0x0 = 0;
    iVar8 = (int)local_a8;
    *(int *)&pFVar16[8].field_0x0 = (int)local_a8;
    if ((int)local_a8 == 0) {
      *(int *)(pFVar16 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,(int)local_a8,0,(ForAnyElementType *)pFVar16,(int)local_a8,
                 (int *)(pFVar16 + 0xc));
      ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int>
                (*(void **)&pFVar16->field_0x0,pFVar4,iVar8);
    }
    pFVar5 = local_98;
    *(undefined4 *)(pFVar15 + lVar14 + 0x78) = (undefined4)local_a0;
    *(undefined4 *)(pFVar15 + lVar14 + 0x7c) = local_a0._4_4_;
    pFVar15 = pFVar15 + lVar14 + 0x80;
    *(undefined8 *)&pFVar15->field_0x0 = 0;
    iVar8 = (int)local_90;
    *(int *)&pFVar15[8].field_0x0 = (int)local_90;
    if ((int)local_90 == 0) {
      *(int *)(pFVar15 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (200,8,(int)local_90,0,(ForAnyElementType *)pFVar15,(int)local_90,
                 (int *)(pFVar15 + 0xc));
      ConstructItems<FAutomationArtifact,FAutomationArtifact,int>
                (*(void **)&pFVar15->field_0x0,pFVar5,iVar8);
    }
    this->NotRun = this->NotRun + 1;
    DestructItems<FAutomationArtifact,int>(local_98,(int)local_90);
    if (local_98 != (FAutomationArtifact *)0x0) {
      FMemory::Free(local_98);
    }
    DestructItems<FAutomationExecutionEntry,int>(local_b0,(int)local_a8);
    if (local_b0 != (FAutomationExecutionEntry *)0x0) {
      FMemory::Free(local_b0);
    }
    DestructItems<FString,int>(local_d0,(int)local_c8);
    if (local_d0 != (FString *)0x0) {
      FMemory::Free(local_d0);
    }
    DestructItems<FString,int>(local_e8,(int)local_e0);
    if (local_e8 != (FString *)0x0) {
      FMemory::Free(local_e8);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_108.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110)
    ;
  }
  FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GetTestResult @ 148c605f0

FAutomatedTestResult * __thiscall
FAutomatedTestPassResults::GetTestResult
          (FAutomatedTestPassResults *this,TSharedPtr<IAutomationReport,1> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FAutomatedTestResult *pFVar6;
  FString *pFVar7;
  uint *puVar8;
  wchar_t *pwVar9;
  uint uVar10;
  
  if ((param_1->Object == (IAutomationReport *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FAutomatedTestResult *)(*pcVar2)();
    return pFVar6;
  }
  pFVar7 = (FString *)(**(code **)(param_1->Object->_padding_ + 0x20))();
  iVar1 = (pFVar7->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar9 = L"";
    iVar5 = 0;
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar9);
  iVar5 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->TestsMapIndex,uVar4,pFVar7);
  if ((iVar5 == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestsMapIndex.Contains(FullTestPath)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationControllerManager.cpp"
                         ,0x47,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FAutomatedTestResult *)(*pcVar2)();
    return pFVar6;
  }
  puVar8 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::FindChecked((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                          *)&this->TestsMapIndex,pFVar7);
  uVar4 = *puVar8;
  uVar10 = 0;
  if ((int)uVar4 < (this->Tests).ArrayNum) {
    uVar10 = ~uVar4 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FAutomatedTestResult *)(*pcVar2)();
    return pFVar6;
  }
  return (FAutomatedTestResult *)
         ((this->Tests).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x90);
}

// ReBuildTestsMapIndex @ 148c66310

void __thiscall FAutomatedTestPassResults::ReBuildTestsMapIndex(FAutomatedTestPassResults *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int local_res8 [2];
  FLLMScope local_res10 [2];
  TPairInitializer<FString_const_&,unsigned_int_&&> local_res18;
  FScriptContainerElement *local_48;
  int *local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name77,L"AutomationTest/Report");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name77,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)&local_res18.Value,&LLMScope_Name77,true);
  bVar3 = 1 < *(int *)&(this->TestsMapIndex).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->TestsMapIndex);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->TestsMapIndex,0,*(int *)&(this->TestsMapIndex).field_0x8);
  puVar1 = &(this->TestsMapIndex).field_0xc;
  *(undefined4 *)&(this->TestsMapIndex).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->TestsMapIndex,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TestsMapIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TestsMapIndex).field_0x34 = 0;
  iVar2 = *(int *)&(this->TestsMapIndex).field_0x2c;
  *(undefined4 *)&(this->TestsMapIndex).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->TestsMapIndex).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TestsMapIndex).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->TestsMapIndex).field_0x48 = 1;
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->TestsMapIndex);
  }
  iVar2 = (this->Tests).ArrayNum;
  pFVar4 = (this->Tests).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x90;
  iVar6 = 0;
  while( true ) {
    if ((this->Tests).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAutomatedTestResult,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    local_48 = pFVar4 + 0x20;
    local_40 = local_res8;
    local_res8[0] = iVar6;
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,unsigned_int_&&>_>
              ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->TestsMapIndex,&local_res18,(bool *)&local_48);
    pFVar4 = pFVar4 + 0x90;
    iVar6 = iVar6 + 1;
  }
  FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ReflectResultStateToReport @ 148c66cb0

bool __thiscall
FAutomatedTestPassResults::ReflectResultStateToReport
          (FAutomatedTestPassResults *this,TSharedPtr<IAutomationReport,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  IAutomationReport *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  uint *puVar10;
  wchar_t *pwVar11;
  FAutomatedTestResult *this_00;
  uint uVar12;
  FString local_28;
  IAutomationReport *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  if ((param_1->Object == (IAutomationReport *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar9 = (FString *)(**(code **)(param_1->Object->_padding_ + 0x20))();
  iVar1 = (pFVar9->Data).ArrayNum;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar11 = L"";
    iVar8 = 0;
  }
  else {
    pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar11);
  iVar8 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->TestsMapIndex,uVar7,pFVar9);
  if (iVar8 == -1) {
    bVar5 = false;
  }
  else {
    puVar10 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
              ::FindChecked((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                             *)&this->TestsMapIndex,pFVar9);
    uVar7 = *puVar10;
    uVar12 = 0;
    if ((int)uVar7 < (this->Tests).ArrayNum) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    this_00 = (FAutomatedTestResult *)
              ((this->Tests).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x90);
    if (this_00->State == InProcess) {
      ::FString::FString(&local_28,
                         L"Test did not run until completion. The test exited prematurely.");
      FAutomatedTestResult::AddEvent(this_00,Error,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      this_00->State = Fail;
      this->InProcess = this->InProcess + -1;
      this->Failed = this->Failed + 1;
    }
    if ((param_1->Object == (IAutomationReport *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    (**(code **)(param_1->Object->_padding_ + 0x120))(param_1->Object,this_00->State);
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    pIVar3 = param_1->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = (this_00->Test).Object;
    pTStack_10 = (this_00->Test).SharedReferenceCount.ReferenceController;
    (this_00->Test).Object = pIVar3;
    (this_00->Test).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    bVar5 = true;
  }
  return bVar5;
}

// UpdateTestResultStatus @ 148c6ed30

void __thiscall
FAutomatedTestPassResults::UpdateTestResultStatus
          (FAutomatedTestPassResults *this,TSharedPtr<IAutomationReport,1> *param_1,
          EAutomationState param_2,bool param_3)

{
  EAutomationState EVar1;
  FAutomatedTestResult *pFVar2;
  FDateTime FVar3;
  
  pFVar2 = GetTestResult(this,param_1);
  EVar1 = pFVar2->State;
  if (EVar1 != param_2) {
    if (EVar1 == NotRun) {
      this->NotRun = this->NotRun + -1;
    }
    else if (EVar1 == InProcess) {
      this->InProcess = this->InProcess + -1;
    }
    if (param_2 == NotRun) {
      this->NotRun = this->NotRun + 1;
    }
    else if (param_2 == InProcess) {
      FVar3 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
      (pFVar2->DateTime).Ticks = *FVar3.Ticks;
      this->InProcess = this->InProcess + 1;
    }
    else if (param_2 == Fail) {
      this->Failed = this->Failed + 1;
    }
    else if (param_2 == Success) {
      if (param_3) {
        this->SucceededWithWarnings = this->SucceededWithWarnings + 1;
      }
      else {
        this->Succeeded = this->Succeeded + 1;
      }
    }
    pFVar2->State = param_2;
  }
  return;
}

