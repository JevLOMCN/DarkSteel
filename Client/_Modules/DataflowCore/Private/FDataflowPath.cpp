// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 5

// StaticStruct @ 1443dd230

UScriptStruct * __cdecl FDataflowPath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowPath.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowPath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPath,(UObject *)pUVar1,L"DataflowPath");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowPath.OuterSingleton;
}

// DecodePath @ 1444442d0

void __thiscall FDataflowPath::DecodePath(FDataflowPath *this,FString *param_1)

{
  FString *this_00;
  FString *this_01;
  FString *this_02;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  wchar_t *_Str;
  ForAnyElementType FVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  FString local_e8;
  FDataflowPath local_d8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_f8,L"|",true);
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  ::FString::FString(&local_d8.Graph,"");
  if (this != &local_d8) {
    pFVar1 = (this->Graph).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Graph).Data.AllocatorInstance.Data = local_d8.Graph.Data.AllocatorInstance.Data;
    (this->Graph).Data.ArrayNum = local_d8.Graph.Data.ArrayNum;
    (this->Graph).Data.ArrayMax = local_d8.Graph.Data.ArrayMax;
    local_d8.Graph.Data.ArrayNum = 0;
    local_d8.Graph.Data.ArrayMax = 0;
    local_d8.Graph.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_d8.Graph.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Graph.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_d8.Node,"");
  this_00 = &this->Node;
  if (this_00 != &local_d8.Node) {
    pFVar1 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_00->Data).AllocatorInstance.Data = local_d8.Node.Data.AllocatorInstance.Data;
    (this->Node).Data.ArrayNum = local_d8.Node.Data.ArrayNum;
    (this->Node).Data.ArrayMax = local_d8.Node.Data.ArrayMax;
    local_d8.Node.Data.ArrayNum = 0;
    local_d8.Node.Data.ArrayMax = 0;
    local_d8.Node.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_d8.Node.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Node.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_d8.Input,"");
  this_01 = &this->Input;
  if (this_01 != &local_d8.Input) {
    pFVar1 = (this_01->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_01->Data).AllocatorInstance.Data = local_d8.Input.Data.AllocatorInstance.Data;
    (this->Input).Data.ArrayNum = local_d8.Input.Data.ArrayNum;
    (this->Input).Data.ArrayMax = local_d8.Input.Data.ArrayMax;
    local_d8.Input.Data.ArrayNum = 0;
    local_d8.Input.Data.ArrayMax = 0;
    local_d8.Input.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_d8.Input.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Input.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_d8.Output,"");
  this_02 = &this->Output;
  if (this_02 != &local_d8.Output) {
    pFVar1 = (this_02->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_02->Data).AllocatorInstance.Data = local_d8.Output.Data.AllocatorInstance.Data;
    (this->Output).Data.ArrayNum = local_d8.Output.Data.ArrayNum;
    (this->Output).Data.ArrayMax = local_d8.Output.Data.ArrayMax;
    local_d8.Output.Data.ArrayNum = 0;
    local_d8.Output.Data.ArrayMax = 0;
    local_d8.Output.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_d8.Output.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Output.Data.AllocatorInstance.Data);
  }
  FVar7.Data = local_f8.AllocatorInstance.Data;
  if (0 < local_f8.ArrayNum) {
    ::FString::FString(&local_68,L"=");
    ::FString::Split((FString *)FVar7.Data,&local_68,&local_98,&local_e8);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    iVar5 = local_e8.Data.ArrayNum + -1;
    if (local_e8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange(&this->Graph,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar5);
  }
  FVar7.Data = local_f8.AllocatorInstance.Data;
  bVar4 = false;
  if (local_f8.ArrayNum < 2) {
LAB_14444458e:
    bVar3 = false;
  }
  else {
    ::FString::FString(&local_58,L"=");
    ::FString::Split((FString *)(FVar7.Data + 0x10),&local_58,&local_98,&local_e8);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    iVar5 = local_e8.Data.ArrayNum + -1;
    if (local_e8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange(this_00,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar5);
    bVar4 = false;
    if (local_f8.ArrayNum < 2) goto LAB_14444458e;
    ::FString::FString(&local_88,"Input");
    if (local_88.Data.ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)local_88.Data.AllocatorInstance.Data;
      if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        bVar4 = true;
        goto LAB_14444458e;
      }
    }
    sVar6 = wcslen(_Str);
    iVar5 = ::FString::Find(param_1,_Str,(int)sVar6,CaseSensitive,FromStart,-1);
    bVar4 = true;
    if (iVar5 == -1) goto LAB_14444458e;
    bVar3 = true;
  }
  if ((bVar4) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  bVar4 = false;
  if (bVar3) {
    if ((local_f8.ArrayNum < 3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar7.Data = local_f8.AllocatorInstance.Data;
    ::FString::FString(&local_48,L"=");
    ::FString::Split((FString *)(FVar7.Data + 0x20),&local_48,&local_98,&local_e8);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    iVar5 = local_e8.Data.ArrayNum + -1;
    if (local_e8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange(this_01,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar5);
  }
  if (1 < local_f8.ArrayNum) {
    ::FString::FString(&local_78,"Output");
    bVar4 = true;
    FVar7.Data = (FScriptContainerElement *)L"";
    if ((local_78.Data.ArrayNum == 0) ||
       (FVar7.Data = local_78.Data.AllocatorInstance.Data,
       local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      sVar6 = wcslen((wchar_t *)FVar7.Data);
      iVar5 = ::FString::Find(param_1,(wchar_t *)FVar7.Data,(int)sVar6,CaseSensitive,FromStart,-1);
      if (iVar5 != -1) {
        bVar3 = true;
        goto LAB_1444446e2;
      }
    }
  }
  bVar3 = false;
LAB_1444446e2:
  if ((bVar4) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    if ((local_f8.ArrayNum < 3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar7.Data = local_f8.AllocatorInstance.Data;
    ::FString::FString(&local_38,L"=");
    ::FString::Split((FString *)(FVar7.Data + 0x20),&local_38,&local_98,&local_e8);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    iVar5 = local_e8.Data.ArrayNum + -1;
    if (local_e8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange(this_02,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar5);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// PathHasInput @ 144452cd0

bool __thiscall FDataflowPath::PathHasInput(FDataflowPath *this)

{
  return 1 < (this->Input).Data.ArrayNum;
}

// PathHasOutput @ 144452ce0

bool __thiscall FDataflowPath::PathHasOutput(FDataflowPath *this)

{
  return 1 < (this->Output).Data.ArrayNum;
}

// ToString @ 144466ca0

FString * __thiscall FDataflowPath::ToString(FDataflowPath *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((this->Node).Data.ArrayNum < 2) {
    ::FString::PrintfImpl(&local_48,L"Graph=%s");
    FVar3.Data = local_48.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_48) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar3.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    iVar1 = (this->Input).Data.ArrayNum;
    if (iVar1 < 2) {
      if ((this->Output).Data.ArrayNum < 2) {
        ::FString::PrintfImpl(&local_38,L"Graph=%s|Node=%s");
        FVar3.Data = local_38.Data.AllocatorInstance.Data;
        if (__return_storage_ptr__ != &local_38) {
          pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_38.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar3.Data = (FScriptContainerElement *)0x0;
        }
        goto LAB_144466e78;
      }
    }
    else if ((this->Output).Data.ArrayNum < 2) {
      ::FString::PrintfImpl(&local_28,L"Graph=%s|Node=%s|Input=%s");
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
      if (__return_storage_ptr__ != &local_28) {
        pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar3.Data = (FScriptContainerElement *)0x0;
      }
      goto LAB_144466e78;
    }
    if (1 < iVar1) {
      return __return_storage_ptr__;
    }
    ::FString::PrintfImpl(&local_18,L"Graph=%s|Node=%s|Output=%s");
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_18) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar3.Data = (FScriptContainerElement *)0x0;
    }
  }
LAB_144466e78:
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return __return_storage_ptr__;
}

