// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 2

// FromString @ 14b3aa0e0

FBusAddress __cdecl
Metasound::Engine::FVertexAnalyzerAudioBusWriter::FBusAddress::FromString(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FBusAddress FVar5;
  wchar_t *_Str;
  ulonglong uVar6;
  wchar_t *_Str_00;
  ulonglong uVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  uVar6 = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar3 = ::FString::ParseIntoArray(param_1,&local_18,L",",true);
  if (iVar3 == 2) {
    if (local_18.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar5 = (FBusAddress)(*pcVar1)();
        return FVar5;
      }
    }
    _Str_00 = L"";
    if (*(int *)(local_18.AllocatorInstance.Data + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)local_18.AllocatorInstance.Data;
    }
    uVar4 = _wtoi(_Str);
    uVar6 = (ulonglong)uVar4;
    if (local_18.ArrayNum < 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar5 = (FBusAddress)(*pcVar1)();
        return FVar5;
      }
    }
    if (*(int *)(local_18.AllocatorInstance.Data + 0x18) != 0) {
      _Str_00 = *(wchar_t **)(local_18.AllocatorInstance.Data + 0x10);
    }
    uVar4 = _wtoi(_Str_00);
    uVar7 = (ulonglong)uVar4;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<701273884904652874>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Analysis\\MetasoundVertexAnalyzerAudioBusWriter.cpp"
                       ,0x4a,"InAnalyzerMemberName.ParseIntoArray(Tokens, L\",\") == 2");
    uVar7 = uVar6;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FBusAddress)(*pcVar1)();
      return FVar5;
    }
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return (FBusAddress)(uVar7 << 0x20 | uVar6);
}

// ToString @ 14b3e1ca0

FString * __thiscall
Metasound::Engine::FVertexAnalyzerAudioBusWriter::FBusAddress::ToString
          (FBusAddress *this,FString *__return_storage_ptr__)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 *puVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res8 [8];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  FString local_38;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_48,this->DeviceID);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,this->AudioBusID);
  lVar7 = 2;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_58,2,&local_4c);
  ConstructItems<FString,FString,int>(local_58.Data,&local_48,2);
  iVar3 = local_50;
  bVar2 = true;
  pFVar6 = local_58.Data + (longlong)local_50 * 0x10;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FVar4.Data = local_58.Data;
  while( true ) {
    if (local_50 != iVar3) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar4.Data == pFVar6) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      ::FString::AppendChars(__return_storage_ptr__,L",",1);
    }
    iVar8 = *(int *)(FVar4.Data + 8) + -1;
    if (*(int *)(FVar4.Data + 8) == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar4.Data,iVar8);
    FVar4.Data = FVar4.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_58.Data,local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  puVar5 = &stack0xffffffffffffffd8;
  do {
    puVar1 = (undefined8 *)(puVar5 + -0x10);
    puVar5 = puVar5 + -0x10;
    lVar7 = lVar7 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar7 != 0);
  return __return_storage_ptr__;
}

