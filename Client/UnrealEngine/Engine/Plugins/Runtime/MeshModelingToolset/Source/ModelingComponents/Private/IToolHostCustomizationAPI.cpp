// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// Find @ 14cb8cb00

TScriptInterface<IToolHostCustomizationAPI> * __cdecl
IToolHostCustomizationAPI::Find
          (TScriptInterface<IToolHostCustomizationAPI> *__return_storage_ptr__,
          UInteractiveToolManager *param_1)

{
  code *pcVar1;
  bool bVar2;
  TScriptInterface<IToolHostCustomizationAPI> *pTVar3;
  UContextObjectStore *this;
  UClass *pUVar4;
  UObject *this_00;
  void *pvVar5;
  
  if (param_1 == (UInteractiveToolManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8044016859671953395>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ToolHostCustomizationAPI.cpp"
                       ,0xd,"ToolManager");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TScriptInterface<IToolHostCustomizationAPI> *)(*pcVar1)();
      return pTVar3;
    }
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  this = UInteractiveToolManager::GetContextObjectStore(param_1);
  if (this == (UContextObjectStore *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8044016859671953389>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ToolHostCustomizationAPI.cpp"
                       ,0x13,"ContextObjectStore");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TScriptInterface<IToolHostCustomizationAPI> *)(*pcVar1)();
      return pTVar3;
    }
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  pUVar4 = UToolHostCustomizationAPI::StaticClass();
  this_00 = UContextObjectStore::FindContextByClass(this,pUVar4);
  pvVar5 = (void *)0x0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (UObject *)0x0)) {
    *(UObject **)__return_storage_ptr__ = this_00;
    if (this_00 == (UObject *)0x0) goto LAB_14cb8cbf2;
  }
  else {
    UE::GC::MarkAsReachable(this_00);
    *(UObject **)__return_storage_ptr__ = this_00;
  }
  pUVar4 = UToolHostCustomizationAPI::StaticClass();
  pvVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar4);
LAB_14cb8cbf2:
  *(void **)&__return_storage_ptr__->field_0x8 = pvVar5;
  return __return_storage_ptr__;
}

