// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 2

// StaticStruct @ 1462c4310

UScriptStruct * __cdecl FDataflowProxyElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowProxyElement.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowProxyElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowProxyElement,(UObject *)pUVar1,
                         L"DataflowProxyElement");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowProxyElement.OuterSingleton;
}

// IsA @ 1462c4580

bool __thiscall FDataflowProxyElement::IsA(FDataflowProxyElement *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  bool bVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_20);
  ::FName::FName(&local_res18,"FDatafloProxyElement");
  pFVar4 = ::FName::ToString(&local_res18,&local_30);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar6 = iVar2 == 0;
      goto LAB_1462c45ed;
    }
  }
  else {
    bVar6 = iVar1 + iVar2 == 1;
LAB_1462c45ed:
    if (!bVar6) {
      local_res20 = local_res10;
      pFVar3 = ::FName::ToString(&local_res20,&local_40);
      ::FName::FName(&local_58,"FDataflowBaseElement");
      pFVar4 = ::FName::ToString(&local_58,&local_50);
      iVar2 = (pFVar3->Data).ArrayNum;
      iVar1 = (pFVar4->Data).ArrayNum;
      if (iVar2 == iVar1) {
        if (iVar2 < 2) {
          bVar6 = true;
        }
        else {
          iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar6 = iVar2 == 0;
        }
      }
      else {
        bVar6 = iVar1 + iVar2 == 1;
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      bVar5 = false;
      if (!bVar6) goto LAB_1462c468f;
    }
  }
  bVar5 = true;
LAB_1462c468f:
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

