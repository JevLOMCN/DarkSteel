// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 15

// ~FRerouteNodeTemplate @ 14ad9e850

void __thiscall
Metasound::Frontend::FRerouteNodeTemplate::~FRerouteNodeTemplate(FRerouteNodeTemplate *this)

{
  return;
}

// FindNodeClassInputDefaults @ 14af917e0

TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FRerouteNodeTemplate::FindNodeClassInputDefaults
          (FRerouteNodeTemplate *this,FMetaSoundFrontendDocumentBuilder *param_1,FGuid *param_2,
          FGuid *param_3,FName param_4)

{
  int iVar1;
  FGuid *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FMetasoundFrontendNode *pFVar7;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar8;
  FGuid *pFVar9;
  FMetasoundFrontendClass *pFVar10;
  FGuid *pFVar11;
  FName *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  pFVar7 = FMetaSoundFrontendDocumentBuilder::FindNode(param_1,param_3,param_2);
  if (pFVar7 != (FMetasoundFrontendNode *)0x0) {
    iVar1 = (pFVar7->Interface).Outputs.ArrayNum;
    uVar14 = 0;
    uVar13 = iVar1 - 1;
    uVar6 = 0;
    if ((int)uVar13 < iVar1) {
      uVar6 = ~uVar13 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    pFVar9 = param_2;
    FMetaSoundFrontendDocumentBuilder::FindNodeInputsConnectedToNodeOutput
              (param_1,&local_38,param_3,
               (FGuid *)((pFVar7->Interface).Outputs.AllocatorInstance.Data +
                        (longlong)((pFVar7->Interface).Outputs.ArrayNum + -1) * 0x20 + 0x10),
               &local_48,param_2);
    uVar15 = uVar14;
    if (0 < local_48.ArrayNum) {
      do {
        uVar13 = (uint)uVar14;
        uVar6 = 0;
        if ((int)uVar13 < local_48.ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if (uVar6 == 0) {
          pFVar9 = (FGuid *)(longlong)local_48.ArrayNum;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)
                     (*pcVar4)();
            return pTVar8;
          }
        }
        pFVar2 = *(FGuid **)(local_48.AllocatorInstance.Data + uVar15);
        pFVar10 = FMetaSoundFrontendDocumentBuilder::FindDependency(param_1,pFVar2 + 1);
        if (pFVar10 != (FMetasoundFrontendClass *)0x0) {
          pFVar11 = (FGuid *)(longlong)local_38.ArrayNum;
          uVar6 = 0;
          if ((int)uVar13 < local_38.ArrayNum) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             pFVar9 = pFVar11, bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)
                     (*pcVar4)();
            return pTVar8;
          }
          pFVar3 = *(FName **)(local_38.AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
          pFVar12 = (FName *)(**(code **)((longlong)*this + 0x18))(this);
          if ((((pFVar10->Metadata).ClassName.Namespace == *pFVar12) &&
              ((pFVar10->Metadata).ClassName.Name == pFVar12[1])) &&
             ((pFVar10->Metadata).ClassName.Variant == pFVar12[2])) {
            pTVar8 = (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)
                     (**(code **)((longlong)*this + 0x10))
                               (this,param_1,param_2,pFVar2,*pFVar3,pFVar9);
          }
          else {
            pTVar8 = FMetaSoundFrontendDocumentBuilder::FindNodeClassInputDefaults
                               (param_1,pFVar2,*pFVar3,param_2);
          }
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.AllocatorInstance.Data);
          }
          if (local_48.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return pTVar8;
          }
          FMemory::Free(local_48.AllocatorInstance.Data);
          return pTVar8;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 8;
      } while ((int)(uVar13 + 1) < local_48.ArrayNum);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)0x0;
}

// GenerateNodeInterface @ 14af922a0

FMetasoundFrontendNodeInterface * __thiscall
Metasound::Frontend::FRerouteNodeTemplate::GenerateNodeInterface
          (FRerouteNodeTemplate *this,FMetasoundFrontendNodeInterface *__return_storage_ptr__,
          FNodeTemplateGenerateInterfaceParams *param_1)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FMetasoundFrontendNodeInterface *pFVar7;
  FName FVar8;
  FName FVar9;
  FName local_68;
  FName FStack_60;
  FGuid local_58;
  FName local_48;
  FName FStack_40;
  FGuid local_38;
  
  iVar6 = (param_1->InputsToConnect).ArrayNum;
  if (iVar6 == 0) {
    FVar8.ComparisonIndex.Value = 0;
    FVar8.Number = 0;
  }
  else {
    uVar5 = 0;
    if ((int)(iVar6 - 1U) < iVar6) {
      uVar5 = ~(iVar6 - 1U) >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMetasoundFrontendNodeInterface *)(*pcVar3)();
      return pFVar7;
    }
    FVar8 = *(FName *)((param_1->InputsToConnect).AllocatorInstance.Data +
                      (longlong)(param_1->InputsToConnect).ArrayNum * 8 + -8);
  }
  iVar6 = (param_1->OutputsToConnect).ArrayNum;
  FVar9 = FVar8;
  if (iVar6 != 0) {
    uVar5 = 0;
    if ((int)(iVar6 - 1U) < iVar6) {
      uVar5 = ~(iVar6 - 1U) >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMetasoundFrontendNodeInterface *)(*pcVar3)();
      return pFVar7;
    }
    FVar9 = *(FName *)((param_1->OutputsToConnect).AllocatorInstance.Data +
                      (longlong)(param_1->OutputsToConnect).ArrayNum * 8 + -8);
    if (((FVar8 != (FName)0x0) && (bVar4 = FVar8 != FVar9, FVar9 = FVar8, bVar4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataType == OutputDataType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\NodeTemplates\\MetasoundFrontendNodeTemplateReroute.cpp"
                           ,0xd7,
                           L"Cannot generate MetasoundFrontendNodeInterface via reroute template with params of unmatched or unset input/output DataType"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMetasoundFrontendNodeInterface *)(*pcVar3)();
      return pFVar7;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&VertexName,"Value");
    _Init_thread_footer(&::_TSS0);
  }
  (__return_storage_ptr__->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Inputs).ArrayNum = 0;
  (__return_storage_ptr__->Inputs).ArrayMax = 0;
  (__return_storage_ptr__->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Outputs).ArrayNum = 0;
  (__return_storage_ptr__->Outputs).ArrayMax = 0;
  (__return_storage_ptr__->Environment).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Environment).ArrayNum = 0;
  (__return_storage_ptr__->Environment).ArrayMax = 0;
  local_68 = VertexName;
  FStack_60 = FVar9;
  FGuid::NewGuid(&local_58);
  pFVar1 = (FName *)(__return_storage_ptr__->Inputs).AllocatorInstance.Data;
  if (((pFVar1 <= &local_68) &&
      (&local_68 < pFVar1 + (longlong)(__return_storage_ptr__->Inputs).ArrayMax * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMetasoundFrontendNodeInterface *)(*pcVar3)();
    return pFVar7;
  }
  iVar6 = (__return_storage_ptr__->Inputs).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->Inputs).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x420,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->Inputs).ArrayMax);
  }
  (__return_storage_ptr__->Inputs).ArrayNum = iVar6 + 1;
  pFVar2 = (__return_storage_ptr__->Inputs).AllocatorInstance.Data;
  pFVar1 = (FName *)(pFVar2 + (longlong)iVar6 * 0x20);
  *pFVar1 = local_68;
  pFVar1[1] = FStack_60;
  pFVar2 = pFVar2 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = local_58._0_8_;
  *(undefined8 *)(pFVar2 + 8) = local_58._8_8_;
  local_48 = VertexName;
  FStack_40 = FVar9;
  FGuid::NewGuid(&local_38);
  pFVar1 = (FName *)(__return_storage_ptr__->Outputs).AllocatorInstance.Data;
  if (((pFVar1 <= &local_48) &&
      (&local_48 < pFVar1 + (longlong)(__return_storage_ptr__->Outputs).ArrayMax * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMetasoundFrontendNodeInterface *)(*pcVar3)();
    return pFVar7;
  }
  iVar6 = (__return_storage_ptr__->Outputs).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->Outputs).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x420,&(__return_storage_ptr__->Outputs).AllocatorInstance,
                       &(__return_storage_ptr__->Outputs).ArrayMax);
  }
  (__return_storage_ptr__->Outputs).ArrayNum = iVar6 + 1;
  pFVar2 = (__return_storage_ptr__->Outputs).AllocatorInstance.Data;
  pFVar1 = (FName *)(pFVar2 + (longlong)iVar6 * 0x20);
  *pFVar1 = local_48;
  pFVar1[1] = FStack_40;
  pFVar2 = pFVar2 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = local_38._0_8_;
  *(undefined8 *)(pFVar2 + 8) = local_38._8_8_;
  pFVar2 = (param_1->OutputsToConnect).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->InputsToConnect).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// GenerateNodeTransform @ 14af92680

TUniquePtr<Metasound::Frontend::INodeTemplateTransform,TDefaultDelete<Metasound::Frontend::INodeTemplateTransform>_>
 __thiscall
Metasound::Frontend::FRerouteNodeTemplate::GenerateNodeTransform(FRerouteNodeTemplate *this)

{
  INodeTemplateTransform IVar1;
  INodeTemplateTransform *in_RDX;
  
  IVar1 = (INodeTemplateTransform)::operator_new(8);
  if (IVar1 != (INodeTemplateTransform)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 =
         &___7FRerouteNodeTemplateTransform_ReroutePrivate_Frontend_Metasound__6B_;
    return (TUniquePtr<Metasound::Frontend::INodeTemplateTransform,TDefaultDelete<Metasound::Frontend::INodeTemplateTransform>_>
            )in_RDX;
  }
  *in_RDX = (INodeTemplateTransform)0x0;
  return (TUniquePtr<Metasound::Frontend::INodeTemplateTransform,TDefaultDelete<Metasound::Frontend::INodeTemplateTransform>_>
          )in_RDX;
}

// GetClassName @ 14af94de0

FMetasoundFrontendClassName * __thiscall
Metasound::Frontend::FRerouteNodeTemplate::GetClassName(FRerouteNodeTemplate *this)

{
  return &ClassName;
}

// GetFrontendClass @ 14af9aae0

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::FRerouteNodeTemplate::GetFrontendClass(FRerouteNodeTemplate *this)

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
      atexit(`Metasound::Frontend::FRerouteNodeTemplate::GetFrontendClass'::__l2::
             _dynamic_atexit_destructor_for__FrontendClass__);
      _Init_thread_footer(&::_TSS0);
      return &FrontendClass;
    }
  }
  return &FrontendClass;
}

// GetNodeInputAccessType @ 14afa5f30

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FRerouteNodeTemplate::GetNodeInputAccessType
          (FRerouteNodeTemplate *this,FMetaSoundFrontendDocumentBuilder *param_1,FGuid *param_2,
          FGuid *param_3,FGuid *param_4)

{
  int iVar1;
  FGuid *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EMetasoundFrontendVertexAccessType EVar7;
  FMetasoundFrontendNode *pFVar8;
  FGuid *pFVar9;
  FMetasoundFrontendClass *pFVar10;
  FGuid *pFVar11;
  FName *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  pFVar8 = FMetaSoundFrontendDocumentBuilder::FindNode(param_1,param_3,param_2);
  if (pFVar8 != (FMetasoundFrontendNode *)0x0) {
    iVar1 = (pFVar8->Interface).Outputs.ArrayNum;
    uVar14 = 0;
    uVar13 = iVar1 - 1;
    uVar6 = 0;
    if ((int)uVar13 < iVar1) {
      uVar6 = ~uVar13 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    pFVar9 = param_2;
    FMetaSoundFrontendDocumentBuilder::FindNodeInputsConnectedToNodeOutput
              (param_1,&local_38,param_3,
               (FGuid *)((pFVar8->Interface).Outputs.AllocatorInstance.Data +
                        (longlong)((pFVar8->Interface).Outputs.ArrayNum + -1) * 0x20 + 0x10),
               &local_48,param_2);
    uVar15 = uVar14;
    if (0 < local_48.ArrayNum) {
      do {
        uVar13 = (uint)uVar14;
        uVar6 = 0;
        if ((int)uVar13 < local_48.ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if (uVar6 == 0) {
          pFVar9 = (FGuid *)(longlong)local_48.ArrayNum;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            EVar7 = (*pcVar4)();
            return EVar7;
          }
        }
        pFVar2 = *(FGuid **)(local_48.AllocatorInstance.Data + uVar15);
        pFVar10 = FMetaSoundFrontendDocumentBuilder::FindDependency(param_1,pFVar2 + 1);
        if (pFVar10 != (FMetasoundFrontendClass *)0x0) {
          pFVar11 = (FGuid *)(longlong)local_38.ArrayNum;
          uVar6 = 0;
          if ((int)uVar13 < local_38.ArrayNum) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             pFVar9 = pFVar11, bVar5)) {
            pcVar4 = (code *)swi(3);
            EVar7 = (*pcVar4)();
            return EVar7;
          }
          lVar3 = *(longlong *)(local_38.AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
          pFVar12 = (FName *)(**(code **)((longlong)*this + 0x18))(this);
          if ((((pFVar10->Metadata).ClassName.Namespace == *pFVar12) &&
              ((pFVar10->Metadata).ClassName.Name == pFVar12[1])) &&
             ((pFVar10->Metadata).ClassName.Variant == pFVar12[2])) {
            EVar7 = (**(code **)((longlong)*this + 0x38))
                              (this,param_1,param_2,pFVar2,lVar3 + 0x10,pFVar9);
          }
          else {
            EVar7 = FMetaSoundFrontendDocumentBuilder::GetNodeInputAccessType
                              (param_1,pFVar2,(FGuid *)(lVar3 + 0x10),param_2);
          }
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.AllocatorInstance.Data);
          }
          if (local_48.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return EVar7;
          }
          FMemory::Free(local_48.AllocatorInstance.Data);
          return EVar7;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 8;
      } while ((int)(uVar13 + 1) < local_48.ArrayNum);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return Unset;
}

// GetNodeOutputAccessType @ 14afa63c0

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FRerouteNodeTemplate::GetNodeOutputAccessType
          (FRerouteNodeTemplate *this,FMetaSoundFrontendDocumentBuilder *param_1,FGuid *param_2,
          FGuid *param_3,FGuid *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EMetasoundFrontendVertexAccessType EVar5;
  FMetasoundFrontendNode *pFVar6;
  FMetasoundFrontendVertex *pFVar7;
  FMetasoundFrontendClass *pFVar8;
  uint uVar9;
  FMetasoundFrontendNode *local_18 [2];
  
  pFVar6 = FMetaSoundFrontendDocumentBuilder::FindNode(param_1,param_3,(FGuid *)0x0);
  if (pFVar6 != (FMetasoundFrontendNode *)0x0) {
    iVar1 = (pFVar6->Interface).Inputs.ArrayNum;
    uVar9 = iVar1 - 1;
    uVar4 = 0;
    if ((int)uVar9 < iVar1) {
      uVar4 = ~uVar9 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    local_18[0] = (FMetasoundFrontendNode *)0x0;
    pFVar7 = FMetaSoundFrontendDocumentBuilder::FindNodeOutputConnectedToNodeInput
                       (param_1,param_3,
                        (FGuid *)((pFVar6->Interface).Inputs.AllocatorInstance.Data +
                                 (longlong)((pFVar6->Interface).Inputs.ArrayNum + -1) * 0x20 + 0x10)
                        ,local_18,param_2);
    if ((pFVar7 != (FMetasoundFrontendVertex *)0x0) &&
       (pFVar8 = FMetaSoundFrontendDocumentBuilder::FindDependency(param_1,&local_18[0]->ClassID),
       pFVar8 != (FMetasoundFrontendClass *)0x0)) {
      if (((pFVar8->Metadata).ClassName.Namespace == ClassName.Namespace) &&
         (((pFVar8->Metadata).ClassName.Name == ClassName.Name &&
          ((pFVar8->Metadata).ClassName.Variant == ClassName.Variant)))) {
        EVar5 = (**(code **)((longlong)*this + 0x40))
                          (this,param_1,param_2,local_18[0],&pFVar7->VertexID);
        return EVar5;
      }
      EVar5 = FMetaSoundFrontendDocumentBuilder::GetNodeOutputAccessType
                        (param_1,&local_18[0]->ID,&pFVar7->VertexID,param_2);
      return EVar5;
    }
  }
  return Unset;
}

// GetRegistryKey @ 14afa6d50

FNodeClassRegistryKey * __cdecl Metasound::Frontend::FRerouteNodeTemplate::GetRegistryKey(void)

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

// GetVersionNumber @ 14afa9a40

FMetasoundFrontendVersionNumber * __thiscall
Metasound::Frontend::FRerouteNodeTemplate::GetVersionNumber(FRerouteNodeTemplate *this)

{
  return &VersionNumber;
}

// IsInputAccessTypeDynamic @ 14afaf870

bool __thiscall
Metasound::Frontend::FRerouteNodeTemplate::IsInputAccessTypeDynamic(FRerouteNodeTemplate *this)

{
  return true;
}

// IsInputConnectionUserModifiable @ 14afaf8a0

bool __thiscall
Metasound::Frontend::FRerouteNodeTemplate::IsInputConnectionUserModifiable
          (FRerouteNodeTemplate *this)

{
  return true;
}

// IsOutputAccessTypeDynamic @ 14afaf8d0

bool __thiscall
Metasound::Frontend::FRerouteNodeTemplate::IsOutputAccessTypeDynamic(FRerouteNodeTemplate *this)

{
  return true;
}

// IsOutputConnectionUserModifiable @ 14afaf8f0

bool __thiscall
Metasound::Frontend::FRerouteNodeTemplate::IsOutputConnectionUserModifiable
          (FRerouteNodeTemplate *this)

{
  return true;
}

// IsValidNodeInterface @ 14afb0340

bool __thiscall
Metasound::Frontend::FRerouteNodeTemplate::IsValidNodeInterface
          (FRerouteNodeTemplate *this,FMetasoundFrontendNodeInterface *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  IDataTypeRegistry *pIVar6;
  uint uVar7;
  longlong local_res10 [3];
  
  if (((param_1->Inputs).ArrayNum == 1) && ((param_1->Outputs).ArrayNum == 1)) {
    iVar1 = (param_1->Outputs).ArrayNum;
    uVar7 = iVar1 - 1;
    local_res10[0] =
         *(longlong *)
          ((param_1->Inputs).AllocatorInstance.Data +
          (longlong)(param_1->Inputs).ArrayNum * 0x20 + -0x18);
    uVar5 = 0;
    if ((int)uVar7 < iVar1) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
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
    if (local_res10[0] ==
        *(longlong *)
         ((param_1->Outputs).AllocatorInstance.Data +
         (longlong)(param_1->Outputs).ArrayNum * 0x20 + -0x18)) {
      pIVar6 = IDataTypeRegistry::Get();
      uVar4 = (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,local_res10);
      return (bool)uVar4;
    }
  }
  return false;
}

