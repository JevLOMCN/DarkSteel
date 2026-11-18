// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 12

// GenerateNodeInterface @ 14af92100

FMetasoundFrontendNodeInterface * __thiscall
Metasound::Frontend::FAudioAnalyzerNodeTemplate::GenerateNodeInterface
          (FAudioAnalyzerNodeTemplate *this,FMetasoundFrontendNodeInterface *__return_storage_ptr__,
          FNodeTemplateGenerateInterfaceParams *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FMetasoundFrontendNodeInterface *pFVar6;
  FName local_28;
  FName FStack_20;
  FGuid local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&VertexName,"Value");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar5 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  FStack_20 = *pFVar5;
  (__return_storage_ptr__->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Inputs).ArrayNum = 0;
  (__return_storage_ptr__->Inputs).ArrayMax = 0;
  (__return_storage_ptr__->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Outputs).ArrayNum = 0;
  (__return_storage_ptr__->Outputs).ArrayMax = 0;
  (__return_storage_ptr__->Environment).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Environment).ArrayNum = 0;
  (__return_storage_ptr__->Environment).ArrayMax = 0;
  local_28 = VertexName;
  FGuid::NewGuid(&local_18);
  pFVar5 = (FName *)(__return_storage_ptr__->Inputs).AllocatorInstance.Data;
  if ((pFVar5 <= &local_28) &&
     (&local_28 < pFVar5 + (longlong)(__return_storage_ptr__->Inputs).ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FMetasoundFrontendNodeInterface *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (__return_storage_ptr__->Inputs).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->Inputs).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x420,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->Inputs).ArrayMax);
  }
  (__return_storage_ptr__->Inputs).ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->Inputs).AllocatorInstance.Data;
  pFVar5 = (FName *)(pFVar1 + (longlong)iVar4 * 0x20);
  *pFVar5 = local_28;
  pFVar5[1] = FStack_20;
  pFVar1 = pFVar1 + (longlong)iVar4 * 0x20 + 0x10;
  *(undefined8 *)pFVar1 = local_18._0_8_;
  *(undefined8 *)(pFVar1 + 8) = local_18._8_8_;
  pFVar1 = (param_1->OutputsToConnect).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->InputsToConnect).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GenerateNodeTransform @ 14af92630

TUniquePtr<Metasound::Frontend::INodeTemplateTransform,TDefaultDelete<Metasound::Frontend::INodeTemplateTransform>_>
 __thiscall
Metasound::Frontend::FAudioAnalyzerNodeTemplate::GenerateNodeTransform
          (FAudioAnalyzerNodeTemplate *this)

{
  INodeTemplateTransform IVar1;
  INodeTemplateTransform *in_RDX;
  
  IVar1 = (INodeTemplateTransform)::operator_new(8);
  if (IVar1 != (INodeTemplateTransform)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 =
         &
         ___7FAudioAnalyzerNodeTemplateTransform_AudioAnalyzerNodeTemplatePrivate_Frontend_Metasound__6B_
    ;
    return (TUniquePtr<Metasound::Frontend::INodeTemplateTransform,TDefaultDelete<Metasound::Frontend::INodeTemplateTransform>_>
            )in_RDX;
  }
  *in_RDX = (INodeTemplateTransform)0x0;
  return (TUniquePtr<Metasound::Frontend::INodeTemplateTransform,TDefaultDelete<Metasound::Frontend::INodeTemplateTransform>_>
          )in_RDX;
}

// GetClassName @ 14af94dc0

FMetasoundFrontendClassName * __thiscall
Metasound::Frontend::FAudioAnalyzerNodeTemplate::GetClassName(FAudioAnalyzerNodeTemplate *this)

{
  return &ClassName;
}

// GetFrontendClass @ 14af9a8c0

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::FAudioAnalyzerNodeTemplate::GetFrontendClass(FAudioAnalyzerNodeTemplate *this)

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
      atexit(`Metasound::Frontend::FAudioAnalyzerNodeTemplate::GetFrontendClass'::__l2::
             _dynamic_atexit_destructor_for__FrontendClass__);
      _Init_thread_footer(&::_TSS0);
      return &FrontendClass;
    }
  }
  return &FrontendClass;
}

// GetNodeInputAccessType @ 14afa5de0

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FAudioAnalyzerNodeTemplate::GetNodeInputAccessType
          (FAudioAnalyzerNodeTemplate *this,FMetaSoundFrontendDocumentBuilder *param_1,
          FGuid *param_2,FGuid *param_3,FGuid *param_4)

{
  return Unset;
}

// GetNodeOutputAccessType @ 14afa62d0

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FAudioAnalyzerNodeTemplate::GetNodeOutputAccessType
          (FAudioAnalyzerNodeTemplate *this,FMetaSoundFrontendDocumentBuilder *param_1,
          FGuid *param_2,FGuid *param_3,FGuid *param_4)

{
  return Unset;
}

// GetVersionNumber @ 14afa9a30

FMetasoundFrontendVersionNumber * __thiscall
Metasound::Frontend::FAudioAnalyzerNodeTemplate::GetVersionNumber(FAudioAnalyzerNodeTemplate *this)

{
  return &VersionNumber;
}

// IsInputAccessTypeDynamic @ 14afaf850

bool __thiscall
Metasound::Frontend::FAudioAnalyzerNodeTemplate::IsInputAccessTypeDynamic
          (FAudioAnalyzerNodeTemplate *this)

{
  return false;
}

// IsInputConnectionUserModifiable @ 14afaf880

bool __thiscall
Metasound::Frontend::FAudioAnalyzerNodeTemplate::IsInputConnectionUserModifiable
          (FAudioAnalyzerNodeTemplate *this)

{
  return true;
}

// IsOutputAccessTypeDynamic @ 14afaf8b0

bool __thiscall
Metasound::Frontend::FAudioAnalyzerNodeTemplate::IsOutputAccessTypeDynamic
          (FAudioAnalyzerNodeTemplate *this)

{
  return false;
}

// IsOutputConnectionUserModifiable @ 14afaf8e0

bool __thiscall
Metasound::Frontend::FAudioAnalyzerNodeTemplate::IsOutputConnectionUserModifiable
          (FAudioAnalyzerNodeTemplate *this)

{
  return false;
}

// IsValidNodeInterface @ 14afb0290

bool __thiscall
Metasound::Frontend::FAudioAnalyzerNodeTemplate::IsValidNodeInterface
          (FAudioAnalyzerNodeTemplate *this,FMetasoundFrontendNodeInterface *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (((param_1->Inputs).ArrayNum == 1) && ((param_1->Outputs).ArrayNum == 0)) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
    iVar1 = (param_1->Inputs).ArrayNum;
    uVar7 = iVar1 - 1;
    uVar6 = 0;
    if ((int)uVar7 < iVar1) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return *(FName *)((param_1->Inputs).AllocatorInstance.Data +
                     (longlong)(param_1->Inputs).ArrayNum * 0x20 + -0x18) == *pFVar5;
  }
  return false;
}

