// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// FModifyInterfaceOptions @ 14addced0

FModifyInterfaceOptions * __thiscall
Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions
          (FModifyInterfaceOptions *this,
          TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *param_2,
          FMetaSoundFrontendDocumentBuilder *param_3)

{
  (this->InterfacesToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterfacesToRemove).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InterfacesToRemove).ArrayNum = param_1->ArrayNum;
  (this->InterfacesToRemove).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  (this->InterfacesToAdd).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterfacesToAdd).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InterfacesToAdd).ArrayNum = param_2->ArrayNum;
  (this->InterfacesToAdd).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  *(undefined8 *)&this->NamePairingFunction = 0;
  *(undefined8 *)&(this->NamePairingFunction).field_0x28 = 0;
  this->ReferencedBuilder = param_3;
  return this;
}

// FModifyInterfaceOptions @ 14addcf30

FModifyInterfaceOptions * __thiscall
Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions
          (FModifyInterfaceOptions *this,
          TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *param_2,
          FMetaSoundFrontendDocumentBuilder *param_3)

{
  int *piVar1;
  TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FMetasoundFrontendInterface *pFVar4;
  
  piVar1 = &(this->InterfacesToRemove).ArrayMax;
  (this->InterfacesToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ArrayNum;
  pFVar4 = (FMetasoundFrontendInterface *)(param_1->AllocatorInstance).Data;
  (this->InterfacesToRemove).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FMetasoundFrontendInterface,FMetasoundFrontendInterface,int>
              ((this->InterfacesToRemove).AllocatorInstance.Data,pFVar4,iVar3);
  }
  pTVar2 = &this->InterfacesToAdd;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->InterfacesToAdd).ArrayMax;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (FMetasoundFrontendInterface *)(param_2->AllocatorInstance).Data;
  (this->InterfacesToAdd).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FMetasoundFrontendInterface,FMetasoundFrontendInterface,int>
              ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
  }
  this->ReferencedBuilder = param_3;
  *(undefined8 *)&this->NamePairingFunction = 0;
  *(undefined8 *)&(this->NamePairingFunction).field_0x28 = 0;
  return this;
}

// FModifyInterfaceOptions @ 14addd020

FModifyInterfaceOptions * __thiscall
Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions
          (FModifyInterfaceOptions *this,
          TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *param_2,
          FMetaSoundFrontendDocumentBuilder *param_3)

{
  <lambda_1> local_res8;
  
  (this->InterfacesToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterfacesToRemove).ArrayNum = 0;
  (this->InterfacesToRemove).ArrayMax = 0;
  (this->InterfacesToAdd).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterfacesToAdd).ArrayNum = 0;
  (this->InterfacesToAdd).ArrayMax = 0;
  *(undefined8 *)&this->NamePairingFunction = 0;
  *(undefined8 *)&(this->NamePairingFunction).field_0x28 = 0;
  this->ReferencedBuilder = (FMetaSoundFrontendDocumentBuilder *)0x0;
  Algo::
  Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions_::__l2::<lambda_1>_>
            (param_1,&this->InterfacesToRemove,local_res8);
  Algo::
  Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions_::__l2::<lambda_2>_>
            (param_2,&this->InterfacesToAdd,(<lambda_2>)local_res8);
  this->ReferencedBuilder = param_3;
  return this;
}

// ~FModifyInterfaceOptions @ 14addf3c0

void __thiscall
Metasound::Frontend::FModifyInterfaceOptions::~FModifyInterfaceOptions
          (FModifyInterfaceOptions *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->NamePairingFunction != 0) {
    plVar1 = *(longlong **)&(this->NamePairingFunction).field_0x28;
    plVar3 = (longlong *)&(this->NamePairingFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  DestructItems<FMetasoundFrontendInterface,int>
            ((FMetasoundFrontendInterface *)(this->InterfacesToAdd).AllocatorInstance.Data,
             (this->InterfacesToAdd).ArrayNum);
  pFVar2 = (this->InterfacesToAdd).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendInterface,int>
            ((FMetasoundFrontendInterface *)(this->InterfacesToRemove).AllocatorInstance.Data,
             (this->InterfacesToRemove).ArrayNum);
  pFVar2 = (this->InterfacesToRemove).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// operator() @ 14ade0440

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendInterface * __thiscall
`Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions'::__l2::<lambda_1>::
operator()(void *this,FMetasoundFrontendInterface *__return_storage_ptr__,
          FMetasoundFrontendVersion *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  IInterfaceRegistry *pIVar4;
  FString *pFVar5;
  FMetasoundFrontendInterface *pFVar6;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Metadata).Version.Number.Major = 1;
  (__return_storage_ptr__->Metadata).Version.Number.Minor = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->Metadata).Version.Name.ComparisonIndex = 0;
  (__return_storage_ptr__->Metadata).Version.Name.Number = 0;
  (__return_storage_ptr__->Metadata).UClassOptions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Metadata).UClassOptions.ArrayNum = 0;
  (__return_storage_ptr__->Metadata).UClassOptions.ArrayMax = 0;
  pIVar4 = Metasound::Frontend::IInterfaceRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x18);
  pFVar5 = Metasound::Frontend::GetInterfaceRegistryKey(&local_28,param_1);
  cVar2 = (*pcVar1)(pIVar4,pFVar5,__return_storage_ptr__);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3428680960856554784>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x2e0,"bFromInterfaceFound");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMetasoundFrontendInterface *)(*pcVar1)();
      return pFVar6;
    }
    if (1 < (byte)LogMetaSound._0_1_) {
      FMetasoundFrontendVersion::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 14ade2fb0

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendInterface * __thiscall
`Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions'::__l2::<lambda_2>::
operator()(void *this,FMetasoundFrontendInterface *__return_storage_ptr__,
          FMetasoundFrontendVersion *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  IInterfaceRegistry *pIVar4;
  FString *pFVar5;
  FMetasoundFrontendInterface *pFVar6;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Metadata).Version.Number.Major = 1;
  (__return_storage_ptr__->Metadata).Version.Number.Minor = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->Metadata).Version.Name.ComparisonIndex = 0;
  (__return_storage_ptr__->Metadata).Version.Name.Number = 0;
  (__return_storage_ptr__->Metadata).UClassOptions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Metadata).UClassOptions.ArrayNum = 0;
  (__return_storage_ptr__->Metadata).UClassOptions.ArrayMax = 0;
  pIVar4 = Metasound::Frontend::IInterfaceRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x18);
  pFVar5 = Metasound::Frontend::GetInterfaceRegistryKey(&local_28,param_1);
  cVar2 = (*pcVar1)(pIVar4,pFVar5,__return_storage_ptr__);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3428680960856554773>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x2eb,"bToInterfaceFound");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMetasoundFrontendInterface *)(*pcVar1)();
      return pFVar6;
    }
    if (1 < (byte)LogMetaSound._0_1_) {
      FMetasoundFrontendVersion::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

