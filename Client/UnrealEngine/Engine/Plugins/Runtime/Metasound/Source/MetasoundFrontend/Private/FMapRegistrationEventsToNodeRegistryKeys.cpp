// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Map @ 14ae7c580

FFrontendQueryKey * __thiscall
Metasound::FMapRegistrationEventsToNodeRegistryKeys::Map
          (FMapRegistrationEventsToNodeRegistryKeys *this,FFrontendQueryKey *__return_storage_ptr__,
          FFrontendQueryEntry *param_1)

{
  undefined8 uVar1;
  EMetasoundFrontendClassType EVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  FFrontendQueryKey *pFVar9;
  FString *pFVar10;
  int iVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  FString local_68;
  FNodeClassRegistryKey local_58;
  FNodeClassRegistryKey local_30;
  
  uVar12 = (ulonglong)(param_1->Value).TypeIndex;
  pwVar13 = L"";
  local_58.Type = Invalid;
  local_58.ClassName.Namespace.ComparisonIndex.Value = 0;
  local_58.ClassName.Namespace.Number = 0;
  local_58.ClassName.Name.ComparisonIndex.Value = 0;
  local_58.ClassName.Name.Number = 0;
  local_58.ClassName.Variant.ComparisonIndex.Value = 0;
  local_58.ClassName.Variant.Number = 0;
  local_58.Version.Major = 1;
  local_58.Version.Minor = 0;
  if ((4 < uVar12) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FFrontendQueryKey *)(*pcVar5)();
    return pFVar9;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar12) == '\0') {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2061296453371822139>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuerySteps.cpp"
                       ,0x3b,"InEntry.Value.IsType<FNodeRegistryTransaction>()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FFrontendQueryKey *)(*pcVar5)();
      return pFVar9;
    }
  }
  else {
    if (((param_1->Value).TypeIndex != '\x01') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FFrontendQueryKey *)(*pcVar5)();
      return pFVar9;
    }
    EVar2 = *(EMetasoundFrontendClassType *)((longlong)&(param_1->Value)._padding_ + 4);
    uVar1 = *(undefined8 *)((longlong)&(param_1->Value)._padding_ + 4);
    lVar4 = (param_1->Value)._padding_;
    local_30.Type = EVar2;
    local_30.ClassName.Variant.ComparisonIndex.Value = (uint)uVar1;
    local_30.ClassName.Variant.Number = (uint)((ulonglong)uVar1 >> 0x20);
    local_30.Version.Major = (int)lVar4;
    local_30.Version.Minor = (int)((ulonglong)lVar4 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&(param_1->Value)._padding_ + 4);
    uVar6 = *(undefined8 *)((longlong)&(param_1->Value)._padding_ + 4);
    local_30.ClassName.Namespace.ComparisonIndex.Value = (uint)uVar1;
    local_30.ClassName.Namespace.Number = (uint)((ulonglong)uVar1 >> 0x20);
    local_30.ClassName.Name.ComparisonIndex.Value = (uint)uVar6;
    local_30.ClassName.Name.Number = (uint)((ulonglong)uVar6 >> 0x20);
    if ((EVar2 == Graph) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InClassInfo.Type != EMetasoundFrontendClassType::Graph",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                           ,0xb8,
                           L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FFrontendQueryKey *)(*pcVar5)();
      return pFVar9;
    }
    local_58.Version.Minor = local_30.Version.Minor;
    local_58.Type = local_30.Type;
    local_58._1_3_ = local_30._1_3_;
    local_58.ClassName.Namespace.ComparisonIndex.Value =
         local_30.ClassName.Namespace.ComparisonIndex.Value;
    local_58.ClassName.Namespace.Number = local_30.ClassName.Namespace.Number;
    local_58.ClassName.Name.ComparisonIndex.Value = local_30.ClassName.Name.ComparisonIndex.Value;
    local_58.ClassName.Name.Number = local_30.ClassName.Name.Number;
    local_58.ClassName.Variant.ComparisonIndex.Value =
         local_30.ClassName.Variant.ComparisonIndex.Value;
    local_58.ClassName.Variant.Number = local_30.ClassName.Variant.Number;
    local_58.Version.Major = local_30.Version.Major;
  }
  pFVar10 = Frontend::FNodeClassRegistryKey::ToString(&local_58,&local_68);
  ::FString::FString((FString *)__return_storage_ptr__,pFVar10);
  (__return_storage_ptr__->Key).TypeIndex = '\x02';
  iVar3 = (pFVar10->Data).ArrayNum;
  iVar11 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar11 = 0;
  }
  else {
    pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar13);
  __return_storage_ptr__->Hash = uVar8;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

