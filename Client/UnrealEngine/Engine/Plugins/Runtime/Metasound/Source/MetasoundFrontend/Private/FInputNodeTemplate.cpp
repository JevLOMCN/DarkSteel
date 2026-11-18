// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 11

// ~FInputNodeTemplate @ 14ad9e1b0

void __thiscall
Metasound::Frontend::FInputNodeTemplate::~FInputNodeTemplate(FInputNodeTemplate *this)

{
  return;
}

// FindNodeClassInputDefaults @ 14af917d0

TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInputNodeTemplate::FindNodeClassInputDefaults
          (FInputNodeTemplate *this,FMetaSoundFrontendDocumentBuilder *param_1,FGuid *param_2,
          FGuid *param_3,FName param_4)

{
  FMetasoundFrontendClassInput *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendVertex *pFVar4;
  FMetasoundFrontendNode *pFVar5;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar6;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar7;
  FMetasoundFrontendClassInput *this_01;
  
  pFVar4 = FMetaSoundFrontendDocumentBuilder::FindNodeInput(param_1,param_3,param_4,param_2);
  if (pFVar4 != (FMetasoundFrontendVertex *)0x0) {
    pFVar5 = FMetaSoundFrontendDocumentBuilder::FindNode(param_1,param_3,param_2);
    if ((pFVar5 == (FMetasoundFrontendNode *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeTemplateRegistry.cpp"
                           ,0x72,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)
               (*pcVar2)();
      return pTVar6;
    }
    this_00 = FMetaSoundFrontendDocumentBuilder::FindDependency(param_1,&pFVar5->ClassID);
    if (this_00 != (FMetasoundFrontendClass *)0x0) {
      pFVar7 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,pFVar5);
      FMetasoundFrontendClassMetadata::GetType(&this_00->Metadata);
      this_01 = (FMetasoundFrontendClassInput *)(pFVar7->Inputs).AllocatorInstance.Data;
      pFVar1 = this_01 + (pFVar7->Inputs).ArrayNum;
      if (this_01 != pFVar1) {
        do {
          if ((FName)this_01->_padding_ == pFVar4->Name) {
            pTVar6 = FMetasoundFrontendClassInput::GetDefaults(this_01);
            return pTVar6;
          }
          this_01 = this_01 + 1;
        } while (this_01 != pFVar1);
      }
    }
  }
  return (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetChecked @ 14af94b20

FInputNodeTemplate * __cdecl Metasound::Frontend::FInputNodeTemplate::GetChecked(void)

{
  code *pcVar1;
  bool bVar2;
  INodeTemplateRegistry *pIVar3;
  FInputNodeTemplate *pFVar4;
  
  pIVar3 = INodeTemplateRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x10);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FNodeClassRegistryKey::FNodeClassRegistryKey(&RegistryKey,Template,&ClassName,&VersionNumber);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar4 = (FInputNodeTemplate *)(*pcVar1)(pIVar3,&RegistryKey);
  if ((pFVar4 == (FInputNodeTemplate *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Template",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\NodeTemplates\\MetasoundFrontendNodeTemplateInput.cpp"
                         ,0xc9,
                         L"Failed to find InputNodeTemplate, which is required for migrating editor document data"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FInputNodeTemplate *)(*pcVar1)();
    return pFVar4;
  }
  return pFVar4;
}

// GetClassName @ 14af94dd0

FMetasoundFrontendClassName * __thiscall
Metasound::Frontend::FInputNodeTemplate::GetClassName(FInputNodeTemplate *this)

{
  return &ClassName;
}

// GetFrontendClass @ 14af9a9d0

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::FInputNodeTemplate::GetFrontendClass(FInputNodeTemplate *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FrontendClass._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
      FrontendClass.ID = FrontendInvalidID;
      FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&FrontendClass.Metadata);
      FrontendClass.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FrontendClass.Interface.Inputs.ArrayNum = 0;
      FrontendClass.Interface.Inputs.ArrayMax = 0;
      FrontendClass.Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FrontendClass.Interface.Outputs.ArrayNum = 0;
      FrontendClass.Interface.Outputs.ArrayMax = 0;
      FrontendClass.Interface.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FrontendClass.Interface.Environment.ArrayNum = 0;
      FrontendClass.Interface.Environment.ArrayMax = 0;
      FrontendClass.Interface.ChangeID.A = 0;
      FrontendClass.Interface.ChangeID.B = 0;
      FrontendClass.Interface.ChangeID.C = 0;
      FrontendClass.Interface.ChangeID.D = 0;
      FMetasoundFrontendClassMetadata::SetClassName(&FrontendClass.Metadata,&ClassName);
      FrontendClass.Metadata.Type = Template;
      FMetasoundFrontendClassMetadata::SetVersion(&FrontendClass.Metadata,&VersionNumber);
      atexit(`Metasound::Frontend::FInputNodeTemplate::GetFrontendClass'::__l2::
             _dynamic_atexit_destructor_for__FrontendClass__);
      _Init_thread_footer(&::_TSS0);
      return &FrontendClass;
    }
  }
  return &FrontendClass;
}

// GetNodeInputAccessType @ 14afa5df0

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FInputNodeTemplate::GetNodeInputAccessType
          (FInputNodeTemplate *this,FMetaSoundFrontendDocumentBuilder *param_1,FGuid *param_2,
          FGuid *param_3,FGuid *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EMetasoundFrontendVertexAccessType EVar4;
  FMetasoundFrontendVertex *pFVar5;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar6;
  uint uVar7;
  uint uVar8;
  FMetasoundFrontendNode *local_18 [2];
  
  local_18[0] = (FMetasoundFrontendNode *)0x0;
  pFVar5 = FMetaSoundFrontendDocumentBuilder::FindNodeOutputConnectedToNodeInput
                     (param_1,param_3,param_4,local_18,param_2);
  if (pFVar5 == (FMetasoundFrontendVertex *)0x0) {
    return Unset;
  }
  if (local_18[0] == (FMetasoundFrontendNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConnectedInputNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\NodeTemplates\\MetasoundFrontendNodeTemplateInput.cpp"
                       ,0xd8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  this_00 = FMetaSoundFrontendDocumentBuilder::FindDependency(param_1,&local_18[0]->ClassID);
  if (this_00 == (FMetasoundFrontendClass *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\NodeTemplates\\MetasoundFrontendNodeTemplateInput.cpp"
                       ,0xda,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pFVar6 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,local_18[0]);
  iVar1 = (pFVar6->Outputs).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar8 = 0;
  if ((int)uVar7 < iVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return *(EMetasoundFrontendVertexAccessType *)
          ((pFVar6->Outputs).AllocatorInstance.Data +
          (longlong)(pFVar6->Outputs).ArrayNum * 0x34 + -4);
}

// GetNodeOutputAccessType @ 14afa62e0

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FInputNodeTemplate::GetNodeOutputAccessType
          (FInputNodeTemplate *this,FMetaSoundFrontendDocumentBuilder *param_1,FGuid *param_2,
          FGuid *param_3,FGuid *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EMetasoundFrontendVertexAccessType EVar5;
  FMetasoundFrontendNode *pFVar6;
  uint uVar7;
  
  pFVar6 = FMetaSoundFrontendDocumentBuilder::FindNode(param_1,param_3,param_2);
  if (pFVar6 == (FMetasoundFrontendNode *)0x0) {
    EVar5 = Unset;
  }
  else {
    iVar1 = (pFVar6->Interface).Inputs.ArrayNum;
    uVar7 = iVar1 - 1;
    uVar4 = 0;
    if ((int)uVar7 < iVar1) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
    }
    EVar5 = (**(code **)((longlong)*this + 0x38))
                      (this,param_1,param_2,param_3,
                       (pFVar6->Interface).Inputs.AllocatorInstance.Data +
                       (longlong)((pFVar6->Interface).Inputs.ArrayNum + -1) * 0x20 + 0x10);
  }
  return EVar5;
}

// GetRegistryKey @ 14afa6cc0

FNodeClassRegistryKey * __cdecl Metasound::Frontend::FInputNodeTemplate::GetRegistryKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FNodeClassRegistryKey::FNodeClassRegistryKey(&RegistryKey,Template,&ClassName,&VersionNumber);
      _Init_thread_footer(&::_TSS0);
      return &RegistryKey;
    }
  }
  return &RegistryKey;
}

// IsInputAccessTypeDynamic @ 14afaf860

bool __thiscall
Metasound::Frontend::FInputNodeTemplate::IsInputAccessTypeDynamic(FInputNodeTemplate *this)

{
  return true;
}

// IsInputConnectionUserModifiable @ 14afaf890

bool __thiscall
Metasound::Frontend::FInputNodeTemplate::IsInputConnectionUserModifiable(FInputNodeTemplate *this)

{
  return false;
}

// IsOutputAccessTypeDynamic @ 14afaf8c0

bool __thiscall
Metasound::Frontend::FInputNodeTemplate::IsOutputAccessTypeDynamic(FInputNodeTemplate *this)

{
  return true;
}

