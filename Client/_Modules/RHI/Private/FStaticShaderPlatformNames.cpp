// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FStaticShaderPlatformNames @ 145c88ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FStaticShaderPlatformNames * __thiscall
FStaticShaderPlatformNames::FStaticShaderPlatformNames(FStaticShaderPlatformNames *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
  FStaticShaderPlatformNames *pFVar5;
  FName *pFVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  longlong *plVar9;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  pFVar4 = &this->Platforms[0].ShaderPlatform;
  lVar7 = 0x10;
  do {
    pFVar4[-1].ComparisonIndex = 0;
    pFVar4[-1].Number = 0;
    pFVar4->ComparisonIndex = 0;
    pFVar4->Number = 0;
    pFVar4[1].ComparisonIndex = 0;
    pFVar4[1].Number = 0;
    pFVar4 = pFVar4 + 3;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  plVar9 = (longlong *)&GStaticShaderNames;
  lVar7 = _GStaticShaderNames;
  while( true ) {
    if (lVar7 == 0) {
      return this;
    }
    if ((0xf < (ushort)((short)plVar9[2] - 0x20U)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsStaticPlatform(EShaderPlatform(Entry->Enum))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStaticShaderPlatformNames.cpp"
                           ,10,L""), bVar2)) break;
    uVar3 = (int)plVar9[2] - 0x20;
    pFVar4 = &this->Platforms[uVar3].Name;
    if ((this->Platforms[uVar3].Name != (FName)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Platform.Name == NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStaticShaderPlatformNames.cpp"
                           ,0xe,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FStaticShaderPlatformNames *)(*pcVar1)();
      return pFVar5;
    }
    ::FName::FName(&local_res8,(wchar_t *)plVar9[1]);
    *pFVar4 = local_res8;
    ::FString::PrintfImpl(&local_38,L"SP_%s");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName(&local_res10,(wchar_t *)FVar8.Data,FNAME_Add);
    pFVar4[1] = *pFVar6;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_28,L"SF_%s");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar8.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName(local_res18,(wchar_t *)FVar8.Data,FNAME_Add);
    pFVar4[2] = *pFVar6;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    plVar9 = plVar9 + 3;
    lVar7 = *plVar9;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FStaticShaderPlatformNames *)(*pcVar1)();
  return pFVar5;
}

// Get @ 145ca7430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FStaticShaderPlatformNames * __cdecl FStaticShaderPlatformNames::Get(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FStaticShaderPlatformNames *pFVar4;
  FName *pFVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  longlong *plVar8;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  if ((::_TSS0 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c)) || (_Init_thread_header(&::_TSS0), ::_TSS0 != -1)) {
    return &Names;
  }
  pFVar5 = &Names.Platforms[0].ShaderPlatform;
  lVar6 = 0x10;
  do {
    pFVar5[-1].ComparisonIndex = 0;
    pFVar5[-1].Number = 0;
    pFVar5->ComparisonIndex = 0;
    pFVar5->Number = 0;
    pFVar5[1].ComparisonIndex = 0;
    pFVar5[1].Number = 0;
    pFVar5 = pFVar5 + 3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  plVar8 = (longlong *)&GStaticShaderNames;
  lVar6 = _GStaticShaderNames;
  while( true ) {
    if (lVar6 == 0) {
      _Init_thread_footer(&::_TSS0);
      return &Names;
    }
    if ((0xf < (ushort)((short)plVar8[2] - 0x20U)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsStaticPlatform(EShaderPlatform(Entry->Enum))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStaticShaderPlatformNames.cpp"
                           ,10,L""), bVar2)) break;
    uVar3 = (int)plVar8[2] - 0x20;
    if ((Names.Platforms[uVar3].Name != (FName)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Platform.Name == NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStaticShaderPlatformNames.cpp"
                           ,0xe,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStaticShaderPlatformNames *)(*pcVar1)();
      return pFVar4;
    }
    ::FName::FName(&local_res8,(wchar_t *)plVar8[1]);
    Names.Platforms[uVar3].Name = local_res8;
    ::FString::PrintfImpl(&local_38,L"SP_%s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    pFVar5 = ::FName::FName(&local_res10,(wchar_t *)FVar7.Data,FNAME_Add);
    Names.Platforms[uVar3].ShaderPlatform = *pFVar5;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_28,L"SF_%s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar7.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar5 = ::FName::FName(local_res18,(wchar_t *)FVar7.Data,FNAME_Add);
    Names.Platforms[uVar3].ShaderFormat = *pFVar5;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    plVar8 = plVar8 + 3;
    lVar6 = *plVar8;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FStaticShaderPlatformNames *)(*pcVar1)();
  return pFVar4;
}

