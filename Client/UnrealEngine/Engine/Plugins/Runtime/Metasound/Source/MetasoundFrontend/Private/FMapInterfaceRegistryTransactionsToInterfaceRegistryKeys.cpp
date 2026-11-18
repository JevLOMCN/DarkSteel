// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Map @ 14ae7bf20

FFrontendQueryKey * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::
FMapInterfaceRegistryTransactionsToInterfaceRegistryKeys::Map
          (FMapInterfaceRegistryTransactionsToInterfaceRegistryKeys *this,
          FFrontendQueryKey *__return_storage_ptr__,FFrontendQueryEntry *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  FFrontendQueryKey *pFVar6;
  FString *pFVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  FString local_18;
  
  uVar10 = (ulonglong)(param_1->Value).TypeIndex;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if ((4 < uVar10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FFrontendQueryKey *)(*pcVar2)();
    return pFVar6;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10) == '\0') {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5349767403691573188>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                       ,0x3c,"InEntry.Value.IsType<FInterfaceRegistryTransaction>()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FFrontendQueryKey *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    if (((param_1->Value).TypeIndex != '\x03') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FFrontendQueryKey *)(*pcVar2)();
      return pFVar6;
    }
    pFVar7 = FInterfaceRegistryTransaction::GetInterfaceRegistryKey
                       ((FInterfaceRegistryTransaction *)&param_1->Value);
    if (&local_18 != pFVar7) {
      iVar9 = (pFVar7->Data).ArrayNum;
      _Src = (pFVar7->Data).AllocatorInstance.Data;
      local_18.Data.ArrayNum = iVar9;
      if ((iVar9 == 0) && (iVar8 = 0, local_18.Data.ArrayMax == 0)) goto LAB_14ae7c060;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,local_18.Data.ArrayMax,(ForAnyElementType *)&local_18,iVar9,
                 &local_18.Data.ArrayMax);
      if (iVar9 != 0) {
        memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
      }
    }
  }
  iVar8 = local_18.Data.ArrayNum;
LAB_14ae7c060:
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  piVar1 = (int *)((longlong)&(__return_storage_ptr__->Key)._padding_ + 4);
  (__return_storage_ptr__->Key)._padding_ = 0;
  *(int *)&(__return_storage_ptr__->Key)._padding_ = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
    iVar9 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,(ForAnyElementType *)__return_storage_ptr__,iVar8,piVar1);
    memcpy((void *)(__return_storage_ptr__->Key)._padding_,FVar3.Data,(longlong)iVar8 * 2);
    iVar9 = local_18.Data.ArrayNum;
  }
  (__return_storage_ptr__->Key).TypeIndex = '\x02';
  iVar8 = iVar9 + -1;
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  if (iVar9 == 0) {
    iVar8 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar3.Data);
  __return_storage_ptr__->Hash = uVar5;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

