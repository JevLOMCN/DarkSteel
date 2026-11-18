// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// GetKey @ 14ae77270

FFrontendQueryKey * __cdecl
Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceToInterfaceNameAndMajorVersion::GetKey
          (FFrontendQueryKey *__return_storage_ptr__,FString *param_1,int param_2)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  int iVar6;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pFVar4 = ::FString::FString(&local_58,param_1);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar4);
  FStringFormatArg::FStringFormatArg(&local_28,param_2);
  local_78.ArrayNum = 2;
  iVar6 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_78.AllocatorInstance,2,&local_78.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_78.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl(&local_68,L"{0}_{1}",&local_78);
  iVar2 = local_68.Data.ArrayNum;
  _Src.Data = local_68.Data.AllocatorInstance.Data;
  piVar1 = (int *)((longlong)&(__return_storage_ptr__->Key)._padding_ + 4);
  (__return_storage_ptr__->Key)._padding_ = 0;
  *(int *)&(__return_storage_ptr__->Key)._padding_ = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
               local_68.Data.ArrayNum,piVar1);
    memcpy((void *)(__return_storage_ptr__->Key)._padding_,_Src.Data,(longlong)iVar2 * 2);
  }
  (__return_storage_ptr__->Key).TypeIndex = '\x02';
  pwVar5 = L"";
  if (local_68.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    iVar6 = local_68.Data.ArrayNum + -1;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar5);
  __return_storage_ptr__->Hash = uVar3;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FStringFormatArg *)local_78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Map @ 14ae7c220

FFrontendQueryKey * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceToInterfaceNameAndMajorVersion::Map
          (FMapInterfaceToInterfaceNameAndMajorVersion *this,
          FFrontendQueryKey *__return_storage_ptr__,FFrontendQueryEntry *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  ForAnyElementType _Src;
  int iVar4;
  bool bVar5;
  uint uVar6;
  FFrontendQueryKey *pFVar7;
  FString *pFVar8;
  int iVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  uVar11 = (ulonglong)(param_1->Value).TypeIndex;
  if (4 < uVar11) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FFrontendQueryKey *)(*pcVar2)();
      return pFVar7;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FMetasoundFrontendInterface,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar11) == '\0') {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5349767403691573104>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                       ,0x90,"InEntry.Value.IsType<FMetasoundFrontendInterface>()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FFrontendQueryKey *)(*pcVar2)();
      return pFVar7;
    }
    (__return_storage_ptr__->Key)._padding_ = 0;
    (__return_storage_ptr__->Key)._padding_ = 0;
    (__return_storage_ptr__->Key).TypeIndex = '\x02';
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(0,L"");
    __return_storage_ptr__->Hash = uVar6;
  }
  else {
    if ((param_1->Value).TypeIndex != '\x04') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FFrontendQueryKey *)(*pcVar2)();
        return pFVar7;
      }
    }
    lVar3 = (param_1->Value)._padding_;
    pFVar8 = ::FName::ToString((FName *)&(param_1->Value)._padding_,&local_68);
    pFVar8 = ::FString::FString(&local_58,pFVar8);
    FStringFormatArg::FStringFormatArg(&local_48,pFVar8);
    FStringFormatArg::FStringFormatArg(&local_28,(int)lVar3);
    local_88.ArrayNum = 2;
    iVar9 = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_88.AllocatorInstance.Data,&local_48,2);
    ::FString::FormatImpl(&local_78,L"{0}_{1}",&local_88);
    iVar4 = local_78.Data.ArrayNum;
    _Src.Data = local_78.Data.AllocatorInstance.Data;
    piVar1 = (int *)((longlong)&(__return_storage_ptr__->Key)._padding_ + 4);
    (__return_storage_ptr__->Key)._padding_ = 0;
    *(int *)&(__return_storage_ptr__->Key)._padding_ = local_78.Data.ArrayNum;
    if (local_78.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                 local_78.Data.ArrayNum,piVar1);
      memcpy((void *)(__return_storage_ptr__->Key)._padding_,_Src.Data,(longlong)iVar4 * 2);
    }
    (__return_storage_ptr__->Key).TypeIndex = '\x02';
    if (local_78.Data.ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      iVar9 = local_78.Data.ArrayNum + -1;
      pwVar10 = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
    __return_storage_ptr__->Hash = uVar6;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    if ((FStringFormatArg *)local_88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

